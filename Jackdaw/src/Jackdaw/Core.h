#pragma once

#ifdef JD_PLATFORM_WINDOWS
	#ifdef JD_BUILD_DLL
		#define JACKDAW_API __declspec(dllexport)
	#else
		#define JACKDAW_API __declspec(dllimport)
	#endif // !JD_BUILD_DLL
#else
	#error Jackdaw only for windows!

#endif // !JD_PLATFORM_WINDOWS
