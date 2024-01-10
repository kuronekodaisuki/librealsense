#include <assert.h>
#include "Naive.h"

/// <summary>
/// Convert
/// </summary>
/// <param name="d">destination</param>
/// <param name="s">source</param>
/// <param name="n">data size</param>
void Naive::yuv2rgb(byte* const d[], const byte* s, int n)
{
    assert(n % 8 == 0); // All currently supported color resolutions are multiples of 8 pixels.

    #pragma omp parallel for
    for (int i = 0; i < n / 16; i++)
    {
    }
}