# bcobs
基于obs，独立演进。下一步，增加x265 encoder, UDP,  绿幕技术，混流，onDVR(按局录像），远程配置流参数。

# modification
	1. cmake config:
	DepsPath=D:\proj\github\obs\obs-tools\obs-deps2017\win64
	QTDIR=D:\program\Qt\Qt5.14.1\5.14.1\msvc2017_64
	错误	C1083	无法打开包括文件: “graphics-hook-config.h”: No such file or directory (编译源文件 D:\proj\github\obs\obs-studio\plugins\win-capture\graphics-hook\graphics-hook.c)	graphics-hook	D:\proj\github\obs\obs-studio\plugins\win-capture\graphics-hook\graphics-hook.h	3	
	错误	C1083	无法打开包括文件: “graphics-hook-config.h”: No such file or directory (编译源文件 D:\proj\github\obs\obs-studio\plugins\win-capture\graphics-hook\gl-capture.c)	graphics-hook	D:\proj\github\obs\obs-studio\plugins\win-capture\graphics-hook\graphics-hook.h	3	
	这个跟显卡驱动有关系，不要紧，可以不用理会。
	由此生成的build-x64下面的vs2019 project工程文件。
	
	