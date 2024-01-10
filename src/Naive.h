#pragma once
#ifndef LIBREALSENSE_IMAGE_H
#define LIBREALSENSE_IMAGE_H

typedef unsigned char byte;

#ifdef WINDOWS
#ifdef EXPORT
#define API __declspec(dllexport)
#else
#define API __declspec(dllimport)
#endif
#else
#define API
#endif


class API Naive
{
public:
	static void yuv2rgb(byte* const d[], const byte* s, int n);
};
#endif
