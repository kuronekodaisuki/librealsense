#include <librealsense2/rs.hpp>

#include "../synthetic-stream.h"
#include "../../environment.h"
#include "../occlusion-filter.h"
#include "neon-pointcloud.h"
#include "../../option.h"
#include "../../context.h"

#include <iostream>

namespace librealsense
{
    pointcloud_neon::pointcloud_neon() : pointcloud("Pointcloud (NEON)") {}

    void pointcloud_neon::preprocess()
    {}

    const float3* pointcloud_neon::depth_to_points(rs2::points output,
        const rs2_intrinsics& depth_intrinsics,
        const rs2::depth_frame& depth_frame)
    {
#ifdef __NEON__
#endif
        return (float3*)output.get_vertices();
    }

    void pointcloud_neon::get_texture_map_neon(float2* texture_map,
        const float3* points,
        const unsigned int width,
        const unsigned int height,
        const rs2_intrinsics& other_intrinsics,
        const rs2_extrinsics& extr,
        float2* pixels_ptr)
    {
#ifdef __NEON__
#endif
    }

    void pointcloud_neon::get_texture_map(rs2::points output,
        const float3* points,
        const unsigned int width,
        const unsigned int height,
        const rs2_intrinsics& other_intrinsics,
        const rs2_extrinsics& extr,
        float2* pixels_ptr)
    {

        get_texture_map_neon((float2*)output.get_texture_coordinates(),
            points,
            width,
            height,
            other_intrinsics,
            extr,
            pixels_ptr);
    }

}