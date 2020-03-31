# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BUILD_SOURCE_DIRS "D:/proj/github/obs/obs-studio;D:/proj/github/obs/obs-studio/build-x64")
set(CPACK_BUNDLE_ICON "D:/proj/github/obs/obs-studio/cmake/osxbundle/obs.icns")
set(CPACK_BUNDLE_NAME "OBS")
set(CPACK_BUNDLE_PLIST "D:/proj/github/obs/obs-studio/cmake/osxbundle/Info.plist")
set(CPACK_BUNDLE_STARTUP_COMMAND "D:/proj/github/obs/obs-studio/cmake/osxbundle/obslaunch.sh")
set(CPACK_CMAKE_GENERATOR "Visual Studio 16 2019")
set(CPACK_COMPONENTS_ALL "")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_CREATE_DESKTOP_LINKS "obs64")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "D:/proj/github/obs/obs-tools/cmake-3.17.0/share/cmake-3.17/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "obs-studio built using CMake")
set(CPACK_GENERATOR "7Z;ZIP")
set(CPACK_IGNORE_FILES "/CVS/;/\\.svn/;/\\.bzr/;/\\.hg/;/\\.git/;\\.swp\$;\\.#;/#")
set(CPACK_INSTALLED_DIRECTORIES "D:/proj/github/obs/obs-studio;/")
set(CPACK_INSTALL_CMAKE_PROJECTS "")
set(CPACK_INSTALL_PREFIX "C:/Program Files (x86)/obs-studio")
set(CPACK_MODULE_PATH "D:/proj/github/obs/obs-studio/cmake/Modules/")
set(CPACK_NSIS_DISPLAY_NAME "OBS Studio (64bit)")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES64")
set(CPACK_NSIS_PACKAGE_NAME "OBS Studio (64bit)")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OUTPUT_CONFIG_FILE "D:/proj/github/obs/obs-studio/build-x64/CPackConfig.cmake")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "D:/proj/github/obs/obs-tools/cmake-3.17.0/share/cmake-3.17/Templates/CPack.GenericDescription.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "OBS - Live video and audio streaming and recording software")
set(CPACK_PACKAGE_EXECUTABLES "obs64;OBS Studio")
set(CPACK_PACKAGE_FILE_NAME "OBS Studio (64bit)-0.0.1-Source")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "OBS Studio (64bit)")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "OBSStudio64")
set(CPACK_PACKAGE_NAME "OBS Studio (64bit)")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "obsproject.com")
set(CPACK_PACKAGE_VERSION "0.0.1")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "1")
set(CPACK_RESOURCE_FILE_LICENSE "D:/proj/github/obs/obs-studio/UI/data/license/gplv2.txt")
set(CPACK_RESOURCE_FILE_README "D:/proj/github/obs/obs-tools/cmake-3.17.0/share/cmake-3.17/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "D:/proj/github/obs/obs-tools/cmake-3.17.0/share/cmake-3.17/Templates/CPack.GenericWelcome.txt")
set(CPACK_RPM_PACKAGE_SOURCES "ON")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_7Z "ON")
set(CPACK_SOURCE_GENERATOR "7Z;ZIP")
set(CPACK_SOURCE_IGNORE_FILES "/CVS/;/\\.svn/;/\\.bzr/;/\\.hg/;/\\.git/;\\.swp\$;\\.#;/#")
set(CPACK_SOURCE_INSTALLED_DIRECTORIES "D:/proj/github/obs/obs-studio;/")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "D:/proj/github/obs/obs-studio/build-x64/CPackSourceConfig.cmake")
set(CPACK_SOURCE_PACKAGE_FILE_NAME "OBS Studio (64bit)-0.0.1-Source")
set(CPACK_SOURCE_TOPLEVEL_TAG "win64-Source")
set(CPACK_SOURCE_ZIP "ON")
set(CPACK_STRIP_FILES "")
set(CPACK_SYSTEM_NAME "win64")
set(CPACK_TOPLEVEL_TAG "win64-Source")
set(CPACK_WIX_PRODUCT_GUID "ca5bf4fe-7b38-4003-9455-de249d03caac")
set(CPACK_WIX_SIZEOF_VOID_P "8")
set(CPACK_WIX_TEMPLATE "D:/proj/github/obs/obs-studio/cmake/Modules/WIX.template.in")
set(CPACK_WIX_UPGRADE_GUID "44c72510-2e8e-489c-8bc0-2011a9631b0b")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "D:/proj/github/obs/obs-studio/build-x64/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
