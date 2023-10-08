#pragma once

#ifdef FZ_PLATFORM_WINDOWS
		#ifdef FZ_BUILD_DLL
				#define FELIZ_API __declspec(dllexport)
		#else
				#define FELIZ_API __declspec(dllimport)
		#endif
#else
		#error Feliz only supports Windows!
#endif