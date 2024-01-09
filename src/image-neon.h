#pragma once
#ifndef LIBREALSENSE_IMAGE_NEON_H
#define LIBREALSENSE_IMAGE_NEON_H

#include "types.h"

namespace librealsense
{
#ifndef ANDROID
#if defined(__NEON__)
    //void unpack_yuy2_neon_y8(byte* const d[], const byte* s, int n);
    //void unpack_yuy2_neon_y16(byte* const d[], const byte* s, int n);
    void unpack_yuy2_neon_rgb8(byte* const d[], const byte* s, int n);
    //void unpack_yuy2_neon_rgba8(byte* const d[], const byte* s, int n);
    void unpack_yuy2_neon_bgr8(byte* const d[], const byte* s, int n);
    //void unpack_yuy2_neon_bgra8(byte* const d[], const byte* s, int n);
#endif
#endif
}

#endif