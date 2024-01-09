#define _USE_MATH_DEFINES
#include <cmath>
#include "image-neon.h"

#ifndef ANDROID
	#if defined(__NEON__)
	#include <arm_neon.h>

	#pragma pack(push, 1) // All structs in this file are assumed to be byte-packed
	namespace librealsense
	{
		//void unpack_yuy2_neon_y8(byte* const d[], const byte* s, int n);
		//void unpack_yuy2_neon_y16(byte* const d[], const byte* s, int n);
		void unpack_yuy2_neon_rgb8(byte* const d[], const byte* s, int n)
		{
		}
		//void unpack_yuy2_neon_rgba8(byte* const d[], const byte* s, int n);
		void unpack_yuy2_neon_bgr8(byte* const d[], const byte* s, int n)
		{

		}
		//void unpack_yuy2_neon_bgra8(byte* const d[], const byte* s, int n);

	}
	#pragma pack(pop)
	#endif
#endif