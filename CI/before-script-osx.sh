# Make sure ccache is found
export PATH=/usr/local/opt/ccache/libexec:$PATH

git fetch --tags

./formatcode.sh
if ! ./CI/check-format.sh; then
	exit 1
fi

mkdir build
cd build
cmake -DENABLE_SPARKLE_UPDATER=ON \
-DCMAKE_OSX_DEPLOYMENT_TARGET=10.11 \
-DQTDIR=/usr/local/Cellar/qt/5.14.1 \
-DDepsPath=/tmp/obsdeps \
-DVLCPath=$PWD/../../vlc-3.0.4 \
-DBUILD_BROWSER=ON \
-DBROWSER_DEPLOY=ON \
-DBUILD_CAPTIONS=ON \
-DCEF_ROOT_DIR=$PWD/../../cef_binary_${CEF_BUILD_VERSION}_macosx64 ..
