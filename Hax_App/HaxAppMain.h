#pragma once

// Including SDKDDKVer.h defines the highest available Windows platform.

// If you wish to build your application for a previous Windows platform, include WinSDKVer.h and
// set the _WIN32_WINNT macro to the platform you wish to support before including SDKDDKVer.h.

#define _CRT_SECURE_NO_WARNINGS

#include <SDKDDKVer.h>

#include "resource.h"
#include "../HaxEngine/Defines.h"

#include <Windows.h>
#include <windowsx.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib>
#include <sddl.h>
#include <Locale>
#include <Sstream>
#include <cstring>
#include <stdio.h>
#include <memory>

#include "../HaxEngine/HaxEngine.h"
#ifdef _DEBUG
	#ifdef _WIN64
		#pragma comment(lib, "../Bin/HaxEngine_Win64_Debug.lib")	
	#else
		#pragma comment(lib, "../Bin/HaxEngine_Win32_Debug.lib")
	#endif
#else
	#ifdef _WIN64
		#pragma comment(lib, "../Bin/HaxEngine_Win64_Release.lib")
	#else
		#pragma comment(lib, "../Bin/HaxEngine_Win32_Release.lib")
	#endif
#endif
