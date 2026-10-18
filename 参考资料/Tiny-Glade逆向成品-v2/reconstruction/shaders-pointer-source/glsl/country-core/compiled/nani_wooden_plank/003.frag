#version 460
#extension GL_EXT_buffer_reference2 : require
#extension GL_ARB_conservative_depth : require
#extension GL_EXT_buffer_reference_uvec2 : require
#extension GL_EXT_demote_to_helper_invocation : require
layout(depth_greater) out float gl_FragDepth;

layout(buffer_reference) buffer uintPointer;
layout(buffer_reference) buffer uvec4Pointer;

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct WoodenPlank_natural
{
    Affine3Packed_natural transform;
    int gate_seed;
    int piece_seed;
    uint color_source;
    uint flags;
    uvec2 window_cut_buffer_address;
    uint window_cut_list;
    uint pad0;
};

vec2 _4969;
vec3 _5325;
bool _5348;

struct _5445
{
    int _m0;
    int _m1;
};

layout(buffer_reference, buffer_reference_align = 4) buffer uintPointer
{
    uint value;
};

layout(buffer_reference, buffer_reference_align = 4) buffer uvec4Pointer
{
    uvec4 value;
};

layout(set = 0, binding = 0, std430) readonly buffer StructuredBuffer
{
    WoodenPlank_natural _member0[];
} material_data_nani_instance_data;

layout(set = 5, binding = 0, std140) uniform ViewConstants_natural
{
    layout(row_major) mat4 view_to_clip;
    layout(row_major) mat4 clip_to_view;
    layout(row_major) mat4 view_to_sample;
    layout(row_major) mat4 sample_to_view;
    layout(row_major) mat4 world_to_view;
    layout(row_major) mat4 view_to_world;
    layout(row_major) mat4 world_to_sample;
    layout(row_major) mat4 clip_to_prev_clip;
    layout(row_major) mat4 prev_clip_to_clip;
    layout(row_major) mat4 prev_view_to_prev_clip;
    layout(row_major) mat4 prev_clip_to_prev_view;
    layout(row_major) mat4 prev_world_to_prev_view;
    layout(row_major) mat4 prev_view_to_prev_world;
    vec2 sample_offset_pixels;
    vec2 sample_offset_clip;
    vec2 prev_sample_offset_pixels;
    vec2 prev_sample_offset_clip;
    layout(row_major) mat4 pad0;
    layout(row_major) mat4 pad1;
    vec4 pad2;
    float pad3;
    float pad4;
    float pad5;
    float mip_bias;
} current_view;

layout(set = 9, binding = 0, std430) readonly buffer wooden_wall_colors_ids
{
    uint _member0[];
} wooden_wall_colors_ids_1;

layout(set = 8, binding = 0, std430) readonly buffer halftimber_colors_ids
{
    uint _member0[];
} halftimber_colors_ids_1;

layout(set = 4, binding = 0, std140) uniform FrameConstants_natural
{
    vec4 sun_color;
    vec4 sky_low_color;
    vec4 sky_high_color;
    vec4 fog_tint_thickness;
    vec4 fake_light_color;
    vec4 fake_light_dir;
    vec4 fake_light2_color;
    vec4 fake_light2_dir;
    float time_since_startup_secs;
    float delta_time_seconds;
    float ev_mult;
    uint glade_theme_id;
    uvec2 world_render_resolution;
    uint game_time_sec;
    float game_time_frac;
    vec3 editing_highlight_color;
    float time_of_day;
    vec3 dir_to_sun;
    uint camera_idx;
    vec3 dir_to_moon;
    uint render_overrides;
    vec3 dir_to_primary_directional_light;
    float main_view_lod_scale;
    vec4 main_view_eye_position;
    float fog_relative_extinction;
    uint highlighted_transient_stair_edge_id;
    uvec2 swapchain_dims;
    float swapchain_aspect_ratio;
    uint is_photomode;
    uint is_topdown_mode;
    uint is_firstperson_mode;
    vec3 brush_position;
    float eraser_size_multiplier;
    uint roof_highlighted_slot_id;
    uint roof_highlight_mode;
    uint wall_highlighted_slot_id;
    uint wall_highlight_mode;
    uint highlight_bricks_to_delete;
    float wind_strength;
    float tree_canopy_cone_angle_mult;
    float tree_canopy_max_cone_cull_dist_range;
    vec4 debug_tweakers;
    vec3 ground_fog;
    float moonswap;
} frame_constants;

layout(set = 0, binding = 3) uniform texture2DArray material_data_window_cut_sdf;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 9, binding = 1) uniform texture2DArray wooden_wall_colors_tex;
layout(set = 8, binding = 1) uniform texture2DArray halftimber_colors_tex;
layout(set = 0, binding = 2) uniform texture2D material_data_wood_roughness;
layout(set = 0, binding = 1) uniform texture2D material_data_dirtpath_heightmap;

layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 0) in vec3 vs_out_frag_position_ws;
layout(location = 3) flat in uint vs_out_window_cut_list;
layout(location = 2) flat in uint vs_out_instance_index;

void main()
{
    uint _1901 = vs_out_window_cut_list >> 24u;
    float _5382;
    if (_1901 != 0u)
    {
        vec3 _1928 = normalize((vec4(0.0, 0.0, -1.0, 0.0) * current_view.view_to_world).xyz);
        mat3x4 _1964 = transpose(mat4x3(vec3(material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[0], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[1], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[2]), vec3(material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[3], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[4], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[5]), vec3(material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[6], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[7], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[8]), vec3(material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[9], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[10], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[11])));
        vec4 _1991 = _1964[0];
        vec4 _1998 = _1964[1];
        vec4 _2005 = _1964[2];
        mat3 _2015 = mat3(vec3(_1991.xyz), vec3(_1998.xyz), vec3(_2005.xyz));
        vec3 _2069 = vec3(1.0, 0.0, 0.0) * _2015;
        vec3 _2070 = vec3(0.0, 1.0, 0.0) * _2015;
        vec3 _2071 = vec3(0.0, 0.0, 1.0) * _2015;
        vec3 _2074 = cross(_2069, _2070);
        vec3 _2077 = vec3(1.0 / dot(_2071, _2074));
        vec3 _2078 = cross(_2070, _2071) * _2077;
        vec3 _2079 = cross(_2071, _2069) * _2077;
        vec3 _2080 = _2074 * _2077;
        vec3 _2025 = -(vec3(_1991.w, _1998.w, _2005.w) * mat3(_2078, _2079, _2080));
        mat3x4 _1988;
        _1988[0].x = _2078.x;
        _1988[0].y = _2078.y;
        _1988[0].z = _2078.z;
        _1988[0].w = _2025.x;
        _1988[1].x = _2079.x;
        _1988[1].y = _2079.y;
        _1988[1].z = _2079.z;
        _1988[1].w = _2025.y;
        _1988[2].x = _2080.x;
        _1988[2].y = _2080.y;
        _1988[2].z = _2080.z;
        _1988[2].w = _2025.z;
        vec3 _2084 = vs_out_frag_position_ws * 0.4000000059604644775390625;
        ivec3 _2110 = ivec3(floor(_2084));
        vec3 _2111 = fract(_2084);
        uvec3 _2112 = uvec3(_2110);
        uint _2226 = _2112.z;
        uint _2232 = _2226 + (_2226 << 10u);
        uint _2234 = _2232 ^ (_2232 >> 6u);
        uint _2236 = _2234 + (_2234 << 3u);
        uint _2238 = _2236 ^ (_2236 >> 11u);
        uint _2246 = (((_2112.y * 1664525u) + (_2238 + (_2238 << 15u))) + 1013904223u) * 1664525u;
        uint _2248 = _2246 ^ (_2246 >> 11u);
        uint _2251 = _2248 ^ ((_2248 << 7u) & 2636928640u);
        uint _2254 = _2251 ^ ((_2251 << 15u) & 4022730752u);
        uint _2262 = (((_2112.x * 1664525u) + (_2254 ^ (_2254 >> 18u))) + 1013904223u) * 1664525u;
        uint _2264 = _2262 ^ (_2262 >> 11u);
        uint _2267 = _2264 ^ ((_2264 << 7u) & 2636928640u);
        uint _2270 = _2267 ^ ((_2267 << 15u) & 4022730752u);
        uint _2272 = _2270 ^ (_2270 >> 18u);
        uint _2291;
        uint _2310;
        vec2 _2099;
        uint _4970 = 0u;
        uint _5391 = _2272;
        for (;;)
        {
            if (!(_4970 < 2u))
            {
                break;
            }
            uint _2302 = _5391 + (_5391 << 10u);
            uint _2304 = _2302 ^ (_2302 >> 6u);
            uint _2306 = _2304 + (_2304 << 3u);
            uint _2308 = _2306 ^ (_2306 >> 11u);
            _2310 = _2308 + (_2308 << 15u);
            _2099[_4970] = uintBitsToFloat((_5391 & 8388607u) | 1065353216u) - 1.0;
            _2291 = _4970 + 1u;
            _5391 = _2310;
            _4970 = _2291;
            continue;
        }
        uvec3 _2121 = uvec3(_2110 + ivec3(1, 0, 0));
        uint _2326 = _2121.z;
        uint _2332 = _2326 + (_2326 << 10u);
        uint _2334 = _2332 ^ (_2332 >> 6u);
        uint _2336 = _2334 + (_2334 << 3u);
        uint _2338 = _2336 ^ (_2336 >> 11u);
        uint _2346 = (((_2121.y * 1664525u) + (_2338 + (_2338 << 15u))) + 1013904223u) * 1664525u;
        uint _2348 = _2346 ^ (_2346 >> 11u);
        uint _2351 = _2348 ^ ((_2348 << 7u) & 2636928640u);
        uint _2354 = _2351 ^ ((_2351 << 15u) & 4022730752u);
        uint _2362 = (((_2121.x * 1664525u) + (_2354 ^ (_2354 >> 18u))) + 1013904223u) * 1664525u;
        uint _2364 = _2362 ^ (_2362 >> 11u);
        uint _2367 = _2364 ^ ((_2364 << 7u) & 2636928640u);
        uint _2370 = _2367 ^ ((_2367 << 15u) & 4022730752u);
        uint _2372 = _2370 ^ (_2370 >> 18u);
        uint _2391;
        uint _2410;
        vec2 _2100;
        uint _4973 = 0u;
        uint _5390 = _2372;
        for (;;)
        {
            if (!(_4973 < 2u))
            {
                break;
            }
            uint _2402 = _5390 + (_5390 << 10u);
            uint _2404 = _2402 ^ (_2402 >> 6u);
            uint _2406 = _2404 + (_2404 << 3u);
            uint _2408 = _2406 ^ (_2406 >> 11u);
            _2410 = _2408 + (_2408 << 15u);
            _2100[_4973] = uintBitsToFloat((_5390 & 8388607u) | 1065353216u) - 1.0;
            _2391 = _4973 + 1u;
            _5390 = _2410;
            _4973 = _2391;
            continue;
        }
        uvec3 _2128 = uvec3(_2110 + ivec3(0, 1, 0));
        uint _2426 = _2128.z;
        uint _2432 = _2426 + (_2426 << 10u);
        uint _2434 = _2432 ^ (_2432 >> 6u);
        uint _2436 = _2434 + (_2434 << 3u);
        uint _2438 = _2436 ^ (_2436 >> 11u);
        uint _2446 = (((_2128.y * 1664525u) + (_2438 + (_2438 << 15u))) + 1013904223u) * 1664525u;
        uint _2448 = _2446 ^ (_2446 >> 11u);
        uint _2451 = _2448 ^ ((_2448 << 7u) & 2636928640u);
        uint _2454 = _2451 ^ ((_2451 << 15u) & 4022730752u);
        uint _2462 = (((_2128.x * 1664525u) + (_2454 ^ (_2454 >> 18u))) + 1013904223u) * 1664525u;
        uint _2464 = _2462 ^ (_2462 >> 11u);
        uint _2467 = _2464 ^ ((_2464 << 7u) & 2636928640u);
        uint _2470 = _2467 ^ ((_2467 << 15u) & 4022730752u);
        uint _2472 = _2470 ^ (_2470 >> 18u);
        uint _2491;
        uint _2510;
        vec2 _2101;
        uint _4977 = 0u;
        uint _5389 = _2472;
        for (;;)
        {
            if (!(_4977 < 2u))
            {
                break;
            }
            uint _2502 = _5389 + (_5389 << 10u);
            uint _2504 = _2502 ^ (_2502 >> 6u);
            uint _2506 = _2504 + (_2504 << 3u);
            uint _2508 = _2506 ^ (_2506 >> 11u);
            _2510 = _2508 + (_2508 << 15u);
            _2101[_4977] = uintBitsToFloat((_5389 & 8388607u) | 1065353216u) - 1.0;
            _2491 = _4977 + 1u;
            _5389 = _2510;
            _4977 = _2491;
            continue;
        }
        uvec3 _2136 = uvec3(_2110 + ivec3(1, 1, 0));
        uint _2526 = _2136.z;
        uint _2532 = _2526 + (_2526 << 10u);
        uint _2534 = _2532 ^ (_2532 >> 6u);
        uint _2536 = _2534 + (_2534 << 3u);
        uint _2538 = _2536 ^ (_2536 >> 11u);
        uint _2546 = (((_2136.y * 1664525u) + (_2538 + (_2538 << 15u))) + 1013904223u) * 1664525u;
        uint _2548 = _2546 ^ (_2546 >> 11u);
        uint _2551 = _2548 ^ ((_2548 << 7u) & 2636928640u);
        uint _2554 = _2551 ^ ((_2551 << 15u) & 4022730752u);
        uint _2562 = (((_2136.x * 1664525u) + (_2554 ^ (_2554 >> 18u))) + 1013904223u) * 1664525u;
        uint _2564 = _2562 ^ (_2562 >> 11u);
        uint _2567 = _2564 ^ ((_2564 << 7u) & 2636928640u);
        uint _2570 = _2567 ^ ((_2567 << 15u) & 4022730752u);
        uint _2572 = _2570 ^ (_2570 >> 18u);
        uint _2591;
        uint _2610;
        vec2 _2102;
        uint _4982 = 0u;
        uint _5388 = _2572;
        for (;;)
        {
            if (!(_4982 < 2u))
            {
                break;
            }
            uint _2602 = _5388 + (_5388 << 10u);
            uint _2604 = _2602 ^ (_2602 >> 6u);
            uint _2606 = _2604 + (_2604 << 3u);
            uint _2608 = _2606 ^ (_2606 >> 11u);
            _2610 = _2608 + (_2608 << 15u);
            _2102[_4982] = uintBitsToFloat((_5388 & 8388607u) | 1065353216u) - 1.0;
            _2591 = _4982 + 1u;
            _5388 = _2610;
            _4982 = _2591;
            continue;
        }
        uvec3 _2143 = uvec3(_2110 + ivec3(0, 0, 1));
        uint _2626 = _2143.z;
        uint _2632 = _2626 + (_2626 << 10u);
        uint _2634 = _2632 ^ (_2632 >> 6u);
        uint _2636 = _2634 + (_2634 << 3u);
        uint _2638 = _2636 ^ (_2636 >> 11u);
        uint _2646 = (((_2143.y * 1664525u) + (_2638 + (_2638 << 15u))) + 1013904223u) * 1664525u;
        uint _2648 = _2646 ^ (_2646 >> 11u);
        uint _2651 = _2648 ^ ((_2648 << 7u) & 2636928640u);
        uint _2654 = _2651 ^ ((_2651 << 15u) & 4022730752u);
        uint _2662 = (((_2143.x * 1664525u) + (_2654 ^ (_2654 >> 18u))) + 1013904223u) * 1664525u;
        uint _2664 = _2662 ^ (_2662 >> 11u);
        uint _2667 = _2664 ^ ((_2664 << 7u) & 2636928640u);
        uint _2670 = _2667 ^ ((_2667 << 15u) & 4022730752u);
        uint _2672 = _2670 ^ (_2670 >> 18u);
        uint _2691;
        uint _2710;
        vec2 _2103;
        uint _4988 = 0u;
        uint _5387 = _2672;
        for (;;)
        {
            if (!(_4988 < 2u))
            {
                break;
            }
            uint _2702 = _5387 + (_5387 << 10u);
            uint _2704 = _2702 ^ (_2702 >> 6u);
            uint _2706 = _2704 + (_2704 << 3u);
            uint _2708 = _2706 ^ (_2706 >> 11u);
            _2710 = _2708 + (_2708 << 15u);
            _2103[_4988] = uintBitsToFloat((_5387 & 8388607u) | 1065353216u) - 1.0;
            _2691 = _4988 + 1u;
            _5387 = _2710;
            _4988 = _2691;
            continue;
        }
        uvec3 _2152 = uvec3(_2110 + ivec3(1, 0, 1));
        uint _2726 = _2152.z;
        uint _2732 = _2726 + (_2726 << 10u);
        uint _2734 = _2732 ^ (_2732 >> 6u);
        uint _2736 = _2734 + (_2734 << 3u);
        uint _2738 = _2736 ^ (_2736 >> 11u);
        uint _2746 = (((_2152.y * 1664525u) + (_2738 + (_2738 << 15u))) + 1013904223u) * 1664525u;
        uint _2748 = _2746 ^ (_2746 >> 11u);
        uint _2751 = _2748 ^ ((_2748 << 7u) & 2636928640u);
        uint _2754 = _2751 ^ ((_2751 << 15u) & 4022730752u);
        uint _2762 = (((_2152.x * 1664525u) + (_2754 ^ (_2754 >> 18u))) + 1013904223u) * 1664525u;
        uint _2764 = _2762 ^ (_2762 >> 11u);
        uint _2767 = _2764 ^ ((_2764 << 7u) & 2636928640u);
        uint _2770 = _2767 ^ ((_2767 << 15u) & 4022730752u);
        uint _2772 = _2770 ^ (_2770 >> 18u);
        uint _2791;
        uint _2810;
        vec2 _2104;
        uint _4995 = 0u;
        uint _5386 = _2772;
        for (;;)
        {
            if (!(_4995 < 2u))
            {
                break;
            }
            uint _2802 = _5386 + (_5386 << 10u);
            uint _2804 = _2802 ^ (_2802 >> 6u);
            uint _2806 = _2804 + (_2804 << 3u);
            uint _2808 = _2806 ^ (_2806 >> 11u);
            _2810 = _2808 + (_2808 << 15u);
            _2104[_4995] = uintBitsToFloat((_5386 & 8388607u) | 1065353216u) - 1.0;
            _2791 = _4995 + 1u;
            _5386 = _2810;
            _4995 = _2791;
            continue;
        }
        uvec3 _2159 = uvec3(_2110 + ivec3(0, 1, 1));
        uint _2826 = _2159.z;
        uint _2832 = _2826 + (_2826 << 10u);
        uint _2834 = _2832 ^ (_2832 >> 6u);
        uint _2836 = _2834 + (_2834 << 3u);
        uint _2838 = _2836 ^ (_2836 >> 11u);
        uint _2846 = (((_2159.y * 1664525u) + (_2838 + (_2838 << 15u))) + 1013904223u) * 1664525u;
        uint _2848 = _2846 ^ (_2846 >> 11u);
        uint _2851 = _2848 ^ ((_2848 << 7u) & 2636928640u);
        uint _2854 = _2851 ^ ((_2851 << 15u) & 4022730752u);
        uint _2862 = (((_2159.x * 1664525u) + (_2854 ^ (_2854 >> 18u))) + 1013904223u) * 1664525u;
        uint _2864 = _2862 ^ (_2862 >> 11u);
        uint _2867 = _2864 ^ ((_2864 << 7u) & 2636928640u);
        uint _2870 = _2867 ^ ((_2867 << 15u) & 4022730752u);
        uint _2872 = _2870 ^ (_2870 >> 18u);
        uint _2891;
        uint _2910;
        vec2 _2105;
        uint _5003 = 0u;
        uint _5385 = _2872;
        for (;;)
        {
            if (!(_5003 < 2u))
            {
                break;
            }
            uint _2902 = _5385 + (_5385 << 10u);
            uint _2904 = _2902 ^ (_2902 >> 6u);
            uint _2906 = _2904 + (_2904 << 3u);
            uint _2908 = _2906 ^ (_2906 >> 11u);
            _2910 = _2908 + (_2908 << 15u);
            _2105[_5003] = uintBitsToFloat((_5385 & 8388607u) | 1065353216u) - 1.0;
            _2891 = _5003 + 1u;
            _5385 = _2910;
            _5003 = _2891;
            continue;
        }
        uvec3 _2167 = uvec3(_2110 + ivec3(1));
        uint _2926 = _2167.z;
        uint _2932 = _2926 + (_2926 << 10u);
        uint _2934 = _2932 ^ (_2932 >> 6u);
        uint _2936 = _2934 + (_2934 << 3u);
        uint _2938 = _2936 ^ (_2936 >> 11u);
        uint _2946 = (((_2167.y * 1664525u) + (_2938 + (_2938 << 15u))) + 1013904223u) * 1664525u;
        uint _2948 = _2946 ^ (_2946 >> 11u);
        uint _2951 = _2948 ^ ((_2948 << 7u) & 2636928640u);
        uint _2954 = _2951 ^ ((_2951 << 15u) & 4022730752u);
        uint _2962 = (((_2167.x * 1664525u) + (_2954 ^ (_2954 >> 18u))) + 1013904223u) * 1664525u;
        uint _2964 = _2962 ^ (_2962 >> 11u);
        uint _2967 = _2964 ^ ((_2964 << 7u) & 2636928640u);
        uint _2970 = _2967 ^ ((_2967 << 15u) & 4022730752u);
        uint _2972 = _2970 ^ (_2970 >> 18u);
        uint _2991;
        uint _3010;
        vec2 _2106;
        uint _5012 = 0u;
        uint _5384 = _2972;
        for (;;)
        {
            if (!(_5012 < 2u))
            {
                break;
            }
            uint _3002 = _5384 + (_5384 << 10u);
            uint _3004 = _3002 ^ (_3002 >> 6u);
            uint _3006 = _3004 + (_3004 << 3u);
            uint _3008 = _3006 ^ (_3006 >> 11u);
            _3010 = _3008 + (_3008 << 15u);
            _2106[_5012] = uintBitsToFloat((_5384 & 8388607u) | 1065353216u) - 1.0;
            _2991 = _5012 + 1u;
            _5384 = _3010;
            _5012 = _2991;
            continue;
        }
        vec3 _3022 = (_2111 * _2111) * (vec3(3.0) - (vec3(2.0) * _2111));
        float _2175 = _3022.x;
        float _2176 = 1.0 - _2175;
        float _2178 = _3022.y;
        float _2179 = 1.0 - _2178;
        float _2181 = _3022.z;
        float _2182 = 1.0 - _2181;
        vec2 _2089 = clamp((((((((((((_2099 * _2176) * _2179) * _2182) + (((_2100 * _2175) * _2179) * _2182)) + (((_2101 * _2176) * _2178) * _2182)) + (((_2102 * _2175) * _2178) * _2182)) + (((_2103 * _2176) * _2179) * _2181)) + (((_2104 * _2175) * _2179) * _2181)) + (((_2105 * _2176) * _2178) * _2181)) + (((_2106 * _2175) * _2178) * _2181)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
        vec3 _1985 = _1928 * mat3(_1988[0].xyz, _1988[1].xyz, _1988[2].xyz);
        vec3 _3031 = (vec4(vs_out_frag_position_ws - (vec3(_2089.x, 0.0, _2089.y) * 0.0599999986588954925537109375), 1.0) * _1988).xyz;
        vec3 _3040 = max((vec3(0.5, 1.0, 0.5) - _3031) / _1985, (vec3(-0.5, 0.0, -0.5) - _3031) / _1985);
        float _3052 = min(min(_3040.x, _3040.y), _3040.z);
        vec3 _5313;
        bool _5336;
        bool _5359;
        do
        {
            if (all(equal(material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address, uvec2(0u))))
            {
                _5359 = false;
                _5336 = false;
                _5313 = vec3(0.0);
                break;
            }
            uint _3303 = vs_out_window_cut_list & 16777215u;
            float _3089 = max(-dot(_1928, normalize(vs_out_frag_normal_ws)), 0.0);
            vec2 _5054;
            vec2 _5066;
            vec2 _5079;
            vec2 _5093;
            vec2 _5108;
            vec2 _5124;
            vec2 _5141;
            vec2 _5159;
            _5159 = _4969;
            _5141 = _4969;
            _5124 = _4969;
            _5108 = _4969;
            _5093 = _4969;
            _5079 = _4969;
            _5066 = _4969;
            _5054 = _4969;
            uint _3282;
            vec2 _3464;
            vec2 _3471;
            vec2 _3479;
            vec2 _3486;
            vec2 _3495;
            vec2 _3502;
            vec2 _3510;
            vec2 _3517;
            vec3 _5291;
            bool _5292;
            bool _5293;
            vec3 _5314;
            bool _5337;
            bool _5360;
            uint _5053 = 0u;
            for (;;)
            {
                bool _3092_ladder_break = false;
                do
                {
                    if (!(_5053 < _1901))
                    {
                        _5360 = _5348;
                        _5337 = _5348;
                        _5314 = _5325;
                        _5293 = false;
                        _5292 = false;
                        _5291 = vec3(0.0);
                        _3092_ladder_break = true;
                        break;
                    }
                    uint _3323 = material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x + (4u * (_3303 + _5053));
                    uvec2 _5446 = uvec2(uintPointer(uvec2(_3323, material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.y + uint(_3323 < material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x))));
                    uint _5447 = _5446.x;
                    _5445 _5449;
                    imulExtended(0, 4, _5449._m1, _5449._m0);
                    uint _5454 = _5447 + uint(_5449._m0);
                    uint _3309 = uintPointer(uvec2(_5454, (_5446.y + uint(_5449._m1)) + uint(_5454 < _5447))).value;
                    uint _3385 = material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x + (48u * _3309);
                    uvec4Pointer _3408 = uvec4Pointer(uvec2(_3385, material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.y + uint(_3385 < material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x)));
                    uvec2 _5461 = uvec2(_3408);
                    uint _5462 = _5461.x;
                    _5445 _5464;
                    imulExtended(0, 16, _5464._m1, _5464._m0);
                    uint _5469 = _5462 + uint(_5464._m0);
                    uvec4 _3353 = uvec4Pointer(uvec2(_5469, (_5461.y + uint(_5464._m1)) + uint(_5469 < _5462))).value;
                    uvec2 _5475 = uvec2(_3408);
                    uint _5476 = _5475.x;
                    _5445 _5478;
                    imulExtended(1, 16, _5478._m1, _5478._m0);
                    uint _5483 = _5476 + uint(_5478._m0);
                    uvec4 _3355 = uvec4Pointer(uvec2(_5483, (_5475.y + uint(_5478._m1)) + uint(_5483 < _5476))).value;
                    uvec2 _5489 = uvec2(_3408);
                    uint _5490 = _5489.x;
                    _5445 _5492;
                    imulExtended(2, 16, _5492._m1, _5492._m0);
                    uint _5497 = _5490 + uint(_5492._m0);
                    uvec4 _3357 = uvec4Pointer(uvec2(_5497, (_5489.y + uint(_5492._m1)) + uint(_5497 < _5490))).value;
                    vec3 _3360 = uintBitsToFloat(_3353.xyz);
                    vec2 _3365 = uintBitsToFloat(_3355.xy);
                    vec2 _3368 = uintBitsToFloat(_3355.zw);
                    vec3 _3418 = normalize(vec3(_3365.x, 0.0, _3365.y));
                    vec3 _3420 = cross(vec3(0.0, 1.0, 0.0), _3418);
                    vec3 _3429 = _3360 * 0.4000000059604644775390625;
                    ivec3 _3455 = ivec3(floor(_3429));
                    vec3 _3456 = fract(_3429);
                    uvec3 _3457 = uvec3(_3455);
                    uint _3571 = _3457.z;
                    uint _3577 = _3571 + (_3571 << 10u);
                    uint _3579 = _3577 ^ (_3577 >> 6u);
                    uint _3581 = _3579 + (_3579 << 3u);
                    uint _3583 = _3581 ^ (_3581 >> 11u);
                    uint _3591 = (((_3457.y * 1664525u) + (_3583 + (_3583 << 15u))) + 1013904223u) * 1664525u;
                    uint _3593 = _3591 ^ (_3591 >> 11u);
                    uint _3596 = _3593 ^ ((_3593 << 7u) & 2636928640u);
                    uint _3599 = _3596 ^ ((_3596 << 15u) & 4022730752u);
                    uint _3607 = (((_3457.x * 1664525u) + (_3599 ^ (_3599 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3609 = _3607 ^ (_3607 >> 11u);
                    uint _3612 = _3609 ^ ((_3609 << 7u) & 2636928640u);
                    uint _3615 = _3612 ^ ((_3612 << 15u) & 4022730752u);
                    uint _3617 = _3615 ^ (_3615 >> 18u);
                    vec2 _3444 = _5054;
                    uint _3636;
                    uint _3655;
                    uint _5064 = 0u;
                    uint _5312 = _3617;
                    for (;;)
                    {
                        if (!(_5064 < 2u))
                        {
                            break;
                        }
                        uint _3647 = _5312 + (_5312 << 10u);
                        uint _3649 = _3647 ^ (_3647 >> 6u);
                        uint _3651 = _3649 + (_3649 << 3u);
                        uint _3653 = _3651 ^ (_3651 >> 11u);
                        _3655 = _3653 + (_3653 << 15u);
                        _3444[_5064] = uintBitsToFloat((_5312 & 8388607u) | 1065353216u) - 1.0;
                        _3636 = _5064 + 1u;
                        _5312 = _3655;
                        _5064 = _3636;
                        continue;
                    }
                    _3464 = _3444;
                    uvec3 _3466 = uvec3(_3455 + ivec3(1, 0, 0));
                    uint _3671 = _3466.z;
                    uint _3677 = _3671 + (_3671 << 10u);
                    uint _3679 = _3677 ^ (_3677 >> 6u);
                    uint _3681 = _3679 + (_3679 << 3u);
                    uint _3683 = _3681 ^ (_3681 >> 11u);
                    uint _3691 = (((_3466.y * 1664525u) + (_3683 + (_3683 << 15u))) + 1013904223u) * 1664525u;
                    uint _3693 = _3691 ^ (_3691 >> 11u);
                    uint _3696 = _3693 ^ ((_3693 << 7u) & 2636928640u);
                    uint _3699 = _3696 ^ ((_3696 << 15u) & 4022730752u);
                    uint _3707 = (((_3466.x * 1664525u) + (_3699 ^ (_3699 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3709 = _3707 ^ (_3707 >> 11u);
                    uint _3712 = _3709 ^ ((_3709 << 7u) & 2636928640u);
                    uint _3715 = _3712 ^ ((_3712 << 15u) & 4022730752u);
                    uint _3717 = _3715 ^ (_3715 >> 18u);
                    vec2 _3445 = _5066;
                    uint _3736;
                    uint _3755;
                    uint _5076 = 0u;
                    uint _5311 = _3717;
                    for (;;)
                    {
                        if (!(_5076 < 2u))
                        {
                            break;
                        }
                        uint _3747 = _5311 + (_5311 << 10u);
                        uint _3749 = _3747 ^ (_3747 >> 6u);
                        uint _3751 = _3749 + (_3749 << 3u);
                        uint _3753 = _3751 ^ (_3751 >> 11u);
                        _3755 = _3753 + (_3753 << 15u);
                        _3445[_5076] = uintBitsToFloat((_5311 & 8388607u) | 1065353216u) - 1.0;
                        _3736 = _5076 + 1u;
                        _5311 = _3755;
                        _5076 = _3736;
                        continue;
                    }
                    _3471 = _3445;
                    uvec3 _3473 = uvec3(_3455 + ivec3(0, 1, 0));
                    uint _3771 = _3473.z;
                    uint _3777 = _3771 + (_3771 << 10u);
                    uint _3779 = _3777 ^ (_3777 >> 6u);
                    uint _3781 = _3779 + (_3779 << 3u);
                    uint _3783 = _3781 ^ (_3781 >> 11u);
                    uint _3791 = (((_3473.y * 1664525u) + (_3783 + (_3783 << 15u))) + 1013904223u) * 1664525u;
                    uint _3793 = _3791 ^ (_3791 >> 11u);
                    uint _3796 = _3793 ^ ((_3793 << 7u) & 2636928640u);
                    uint _3799 = _3796 ^ ((_3796 << 15u) & 4022730752u);
                    uint _3807 = (((_3473.x * 1664525u) + (_3799 ^ (_3799 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3809 = _3807 ^ (_3807 >> 11u);
                    uint _3812 = _3809 ^ ((_3809 << 7u) & 2636928640u);
                    uint _3815 = _3812 ^ ((_3812 << 15u) & 4022730752u);
                    uint _3817 = _3815 ^ (_3815 >> 18u);
                    vec2 _3446 = _5079;
                    uint _3836;
                    uint _3855;
                    uint _5089 = 0u;
                    uint _5310 = _3817;
                    for (;;)
                    {
                        if (!(_5089 < 2u))
                        {
                            break;
                        }
                        uint _3847 = _5310 + (_5310 << 10u);
                        uint _3849 = _3847 ^ (_3847 >> 6u);
                        uint _3851 = _3849 + (_3849 << 3u);
                        uint _3853 = _3851 ^ (_3851 >> 11u);
                        _3855 = _3853 + (_3853 << 15u);
                        _3446[_5089] = uintBitsToFloat((_5310 & 8388607u) | 1065353216u) - 1.0;
                        _3836 = _5089 + 1u;
                        _5310 = _3855;
                        _5089 = _3836;
                        continue;
                    }
                    _3479 = _3446;
                    uvec3 _3481 = uvec3(_3455 + ivec3(1, 1, 0));
                    uint _3871 = _3481.z;
                    uint _3877 = _3871 + (_3871 << 10u);
                    uint _3879 = _3877 ^ (_3877 >> 6u);
                    uint _3881 = _3879 + (_3879 << 3u);
                    uint _3883 = _3881 ^ (_3881 >> 11u);
                    uint _3891 = (((_3481.y * 1664525u) + (_3883 + (_3883 << 15u))) + 1013904223u) * 1664525u;
                    uint _3893 = _3891 ^ (_3891 >> 11u);
                    uint _3896 = _3893 ^ ((_3893 << 7u) & 2636928640u);
                    uint _3899 = _3896 ^ ((_3896 << 15u) & 4022730752u);
                    uint _3907 = (((_3481.x * 1664525u) + (_3899 ^ (_3899 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3909 = _3907 ^ (_3907 >> 11u);
                    uint _3912 = _3909 ^ ((_3909 << 7u) & 2636928640u);
                    uint _3915 = _3912 ^ ((_3912 << 15u) & 4022730752u);
                    uint _3917 = _3915 ^ (_3915 >> 18u);
                    vec2 _3447 = _5093;
                    uint _3936;
                    uint _3955;
                    uint _5103 = 0u;
                    uint _5309 = _3917;
                    for (;;)
                    {
                        if (!(_5103 < 2u))
                        {
                            break;
                        }
                        uint _3947 = _5309 + (_5309 << 10u);
                        uint _3949 = _3947 ^ (_3947 >> 6u);
                        uint _3951 = _3949 + (_3949 << 3u);
                        uint _3953 = _3951 ^ (_3951 >> 11u);
                        _3955 = _3953 + (_3953 << 15u);
                        _3447[_5103] = uintBitsToFloat((_5309 & 8388607u) | 1065353216u) - 1.0;
                        _3936 = _5103 + 1u;
                        _5309 = _3955;
                        _5103 = _3936;
                        continue;
                    }
                    _3486 = _3447;
                    uvec3 _3488 = uvec3(_3455 + ivec3(0, 0, 1));
                    uint _3971 = _3488.z;
                    uint _3977 = _3971 + (_3971 << 10u);
                    uint _3979 = _3977 ^ (_3977 >> 6u);
                    uint _3981 = _3979 + (_3979 << 3u);
                    uint _3983 = _3981 ^ (_3981 >> 11u);
                    uint _3991 = (((_3488.y * 1664525u) + (_3983 + (_3983 << 15u))) + 1013904223u) * 1664525u;
                    uint _3993 = _3991 ^ (_3991 >> 11u);
                    uint _3996 = _3993 ^ ((_3993 << 7u) & 2636928640u);
                    uint _3999 = _3996 ^ ((_3996 << 15u) & 4022730752u);
                    uint _4007 = (((_3488.x * 1664525u) + (_3999 ^ (_3999 >> 18u))) + 1013904223u) * 1664525u;
                    uint _4009 = _4007 ^ (_4007 >> 11u);
                    uint _4012 = _4009 ^ ((_4009 << 7u) & 2636928640u);
                    uint _4015 = _4012 ^ ((_4012 << 15u) & 4022730752u);
                    uint _4017 = _4015 ^ (_4015 >> 18u);
                    vec2 _3448 = _5108;
                    uint _4036;
                    uint _4055;
                    uint _5118 = 0u;
                    uint _5308 = _4017;
                    for (;;)
                    {
                        if (!(_5118 < 2u))
                        {
                            break;
                        }
                        uint _4047 = _5308 + (_5308 << 10u);
                        uint _4049 = _4047 ^ (_4047 >> 6u);
                        uint _4051 = _4049 + (_4049 << 3u);
                        uint _4053 = _4051 ^ (_4051 >> 11u);
                        _4055 = _4053 + (_4053 << 15u);
                        _3448[_5118] = uintBitsToFloat((_5308 & 8388607u) | 1065353216u) - 1.0;
                        _4036 = _5118 + 1u;
                        _5308 = _4055;
                        _5118 = _4036;
                        continue;
                    }
                    _3495 = _3448;
                    uvec3 _3497 = uvec3(_3455 + ivec3(1, 0, 1));
                    uint _4071 = _3497.z;
                    uint _4077 = _4071 + (_4071 << 10u);
                    uint _4079 = _4077 ^ (_4077 >> 6u);
                    uint _4081 = _4079 + (_4079 << 3u);
                    uint _4083 = _4081 ^ (_4081 >> 11u);
                    uint _4091 = (((_3497.y * 1664525u) + (_4083 + (_4083 << 15u))) + 1013904223u) * 1664525u;
                    uint _4093 = _4091 ^ (_4091 >> 11u);
                    uint _4096 = _4093 ^ ((_4093 << 7u) & 2636928640u);
                    uint _4099 = _4096 ^ ((_4096 << 15u) & 4022730752u);
                    uint _4107 = (((_3497.x * 1664525u) + (_4099 ^ (_4099 >> 18u))) + 1013904223u) * 1664525u;
                    uint _4109 = _4107 ^ (_4107 >> 11u);
                    uint _4112 = _4109 ^ ((_4109 << 7u) & 2636928640u);
                    uint _4115 = _4112 ^ ((_4112 << 15u) & 4022730752u);
                    uint _4117 = _4115 ^ (_4115 >> 18u);
                    vec2 _3449 = _5124;
                    uint _4136;
                    uint _4155;
                    uint _5134 = 0u;
                    uint _5307 = _4117;
                    for (;;)
                    {
                        if (!(_5134 < 2u))
                        {
                            break;
                        }
                        uint _4147 = _5307 + (_5307 << 10u);
                        uint _4149 = _4147 ^ (_4147 >> 6u);
                        uint _4151 = _4149 + (_4149 << 3u);
                        uint _4153 = _4151 ^ (_4151 >> 11u);
                        _4155 = _4153 + (_4153 << 15u);
                        _3449[_5134] = uintBitsToFloat((_5307 & 8388607u) | 1065353216u) - 1.0;
                        _4136 = _5134 + 1u;
                        _5307 = _4155;
                        _5134 = _4136;
                        continue;
                    }
                    _3502 = _3449;
                    uvec3 _3504 = uvec3(_3455 + ivec3(0, 1, 1));
                    uint _4171 = _3504.z;
                    uint _4177 = _4171 + (_4171 << 10u);
                    uint _4179 = _4177 ^ (_4177 >> 6u);
                    uint _4181 = _4179 + (_4179 << 3u);
                    uint _4183 = _4181 ^ (_4181 >> 11u);
                    uint _4191 = (((_3504.y * 1664525u) + (_4183 + (_4183 << 15u))) + 1013904223u) * 1664525u;
                    uint _4193 = _4191 ^ (_4191 >> 11u);
                    uint _4196 = _4193 ^ ((_4193 << 7u) & 2636928640u);
                    uint _4199 = _4196 ^ ((_4196 << 15u) & 4022730752u);
                    uint _4207 = (((_3504.x * 1664525u) + (_4199 ^ (_4199 >> 18u))) + 1013904223u) * 1664525u;
                    uint _4209 = _4207 ^ (_4207 >> 11u);
                    uint _4212 = _4209 ^ ((_4209 << 7u) & 2636928640u);
                    uint _4215 = _4212 ^ ((_4212 << 15u) & 4022730752u);
                    uint _4217 = _4215 ^ (_4215 >> 18u);
                    vec2 _3450 = _5141;
                    uint _4236;
                    uint _4255;
                    uint _5151 = 0u;
                    uint _5306 = _4217;
                    for (;;)
                    {
                        if (!(_5151 < 2u))
                        {
                            break;
                        }
                        uint _4247 = _5306 + (_5306 << 10u);
                        uint _4249 = _4247 ^ (_4247 >> 6u);
                        uint _4251 = _4249 + (_4249 << 3u);
                        uint _4253 = _4251 ^ (_4251 >> 11u);
                        _4255 = _4253 + (_4253 << 15u);
                        _3450[_5151] = uintBitsToFloat((_5306 & 8388607u) | 1065353216u) - 1.0;
                        _4236 = _5151 + 1u;
                        _5306 = _4255;
                        _5151 = _4236;
                        continue;
                    }
                    _3510 = _3450;
                    uvec3 _3512 = uvec3(_3455 + ivec3(1));
                    uint _4271 = _3512.z;
                    uint _4277 = _4271 + (_4271 << 10u);
                    uint _4279 = _4277 ^ (_4277 >> 6u);
                    uint _4281 = _4279 + (_4279 << 3u);
                    uint _4283 = _4281 ^ (_4281 >> 11u);
                    uint _4291 = (((_3512.y * 1664525u) + (_4283 + (_4283 << 15u))) + 1013904223u) * 1664525u;
                    uint _4293 = _4291 ^ (_4291 >> 11u);
                    uint _4296 = _4293 ^ ((_4293 << 7u) & 2636928640u);
                    uint _4299 = _4296 ^ ((_4296 << 15u) & 4022730752u);
                    uint _4307 = (((_3512.x * 1664525u) + (_4299 ^ (_4299 >> 18u))) + 1013904223u) * 1664525u;
                    uint _4309 = _4307 ^ (_4307 >> 11u);
                    uint _4312 = _4309 ^ ((_4309 << 7u) & 2636928640u);
                    uint _4315 = _4312 ^ ((_4312 << 15u) & 4022730752u);
                    uint _4317 = _4315 ^ (_4315 >> 18u);
                    vec2 _3451 = _5159;
                    uint _4336;
                    uint _4355;
                    uint _5169 = 0u;
                    uint _5305 = _4317;
                    for (;;)
                    {
                        if (!(_5169 < 2u))
                        {
                            break;
                        }
                        uint _4347 = _5305 + (_5305 << 10u);
                        uint _4349 = _4347 ^ (_4347 >> 6u);
                        uint _4351 = _4349 + (_4349 << 3u);
                        uint _4353 = _4351 ^ (_4351 >> 11u);
                        _4355 = _4353 + (_4353 << 15u);
                        _3451[_5169] = uintBitsToFloat((_5305 & 8388607u) | 1065353216u) - 1.0;
                        _4336 = _5169 + 1u;
                        _5305 = _4355;
                        _5169 = _4336;
                        continue;
                    }
                    _3517 = _3451;
                    vec3 _4367 = (_3456 * _3456) * (vec3(3.0) - (vec3(2.0) * _3456));
                    float _3520 = _4367.x;
                    float _3521 = 1.0 - _3520;
                    float _3523 = _4367.y;
                    float _3524 = 1.0 - _3523;
                    float _3526 = _4367.z;
                    float _3527 = 1.0 - _3526;
                    vec2 _3434 = clamp((((((((((((_3464 * _3521) * _3524) * _3527) + (((_3471 * _3520) * _3524) * _3527)) + (((_3479 * _3521) * _3523) * _3527)) + (((_3486 * _3520) * _3523) * _3527)) + (((_3495 * _3521) * _3524) * _3526)) + (((_3502 * _3520) * _3524) * _3526)) + (((_3510 * _3521) * _3523) * _3526)) + (((_3517 * _3520) * _3523) * _3526)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
                    vec3 _4374 = vs_out_frag_position_ws - (_3360 + (vec3(_3434.x, 0.0, _3434.y) * 0.0599999986588954925537109375));
                    float _4384 = dot(_4374, _3418);
                    bool _3105 = !((_3353.w & 1u) != 0u);
                    bool _5210;
                    if (_3105)
                    {
                        _5210 = _4384 <= (-0.5);
                    }
                    else
                    {
                        _5210 = false;
                    }
                    if (_5210)
                    {
                        break;
                    }
                    vec2 _3114 = vec3(dot(_4374, _3420), _4374.y, _4384).xy;
                    vec2 _4399 = uintBitsToFloat(_3357.xy) - _3368;
                    float _4415 = float(_3353.w >> 8u);
                    float _4409 = textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3((_3114 - _3368) / _4399, _4415), 0.0).x * 0.25;
                    float _3116 = _4409 - 0.008000000379979610443115234375;
                    if (_3116 >= 0.0)
                    {
                        break;
                    }
                    float _4424 = dot(_1928, _3418);
                    vec2 _3122 = vec3(dot(_1928, _3420), _1928.y, _4424).xy;
                    float _3123 = length(_3122);
                    float _3124 = max(_3123, 9.9999997473787516355514526367188e-05);
                    bool _5215;
                    if (_3089 > 9.9999997473787516355514526367188e-05)
                    {
                        _5215 = _4409 >= 0.0;
                    }
                    else
                    {
                        _5215 = false;
                    }
                    bool _5211;
                    if (_3105)
                    {
                        _5211 = _4424 < 0.0;
                    }
                    else
                    {
                        _5211 = false;
                    }
                    float _5221;
                    if (_5211)
                    {
                        _5221 = (_4384 + 0.5) / (-_4424);
                    }
                    else
                    {
                        _5221 = 3.4028234663852885981170418348452e+38;
                    }
                    float _5224;
                    if ((_3123 > 9.9999997473787516355514526367188e-05) ? true : _5215)
                    {
                        float _3208;
                        float _3214;
                        uint _3221;
                        float _5225;
                        uint _5216 = 0u;
                        float _5217 = 0.0;
                        float _5218 = _3116;
                        for (;;)
                        {
                            if (!(_5216 < 3u))
                            {
                                _5225 = _5217;
                                break;
                            }
                            float _3169 = _5217 + (max(-_5218, 0.0) / (_3124 - ((max(0.008000000379979610443115234375 - (_3089 * _5217), 0.0) * (-249.9999847412109375)) * _3089)));
                            float _4459 = max(0.008000000379979610443115234375 - (_3089 * _3169), 0.0);
                            float _3182 = _3169 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3114 + (_3122 * _3169)) - _3368) / _4399, _4415), 0.0).x * 0.25) - ((_4459 * _4459) * 124.99999237060546875)), 0.0) / (_3124 - ((_4459 * (-249.9999847412109375)) * _3089)));
                            float _4495 = max(0.008000000379979610443115234375 - (_3089 * _3182), 0.0);
                            float _3195 = _3182 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3114 + (_3122 * _3182)) - _3368) / _4399, _4415), 0.0).x * 0.25) - ((_4495 * _4495) * 124.99999237060546875)), 0.0) / (_3124 - ((_4495 * (-249.9999847412109375)) * _3089)));
                            float _4531 = max(0.008000000379979610443115234375 - (_3089 * _3195), 0.0);
                            _3208 = _3195 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3114 + (_3122 * _3195)) - _3368) / _4399, _4415), 0.0).x * 0.25) - ((_4531 * _4531) * 124.99999237060546875)), 0.0) / (_3124 - ((_4531 * (-249.9999847412109375)) * _3089)));
                            float _4567 = max(0.008000000379979610443115234375 - (_3089 * _3208), 0.0);
                            _3214 = (textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3114 + (_3122 * _3208)) - _3368) / _4399, _4415), 0.0).x * 0.25) - ((_4567 * _4567) * 124.99999237060546875);
                            if (_3214 >= (-0.001000000047497451305389404296875))
                            {
                                _5225 = _3208;
                                break;
                            }
                            _3221 = _5216 + 1u;
                            _5218 = _3214;
                            _5217 = _3208;
                            _5216 = _3221;
                            continue;
                        }
                        _5224 = _5225;
                    }
                    else
                    {
                        _5224 = 3.4028234663852885981170418348452e+38;
                    }
                    bool _3228 = _5224 <= min(_5221, _3052);
                    vec3 _5244;
                    if (_3228)
                    {
                        vec2 _3232 = _3114 + (_3122 * _5224);
                        vec2 _3237 = _4399 * vec2(0.0078125);
                        float _4587 = textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3((_3232 - _3368) / _4399, _4415), 0.0).x * 0.25;
                        if ((dot(vec2((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3232 + vec2(_3237.x, 0.0)) - _3368) / _4399, _4415), 0.0).x * 0.25) - _4587, (textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3232 + vec2(0.0, _3237.y)) - _3368) / _4399, _4415), 0.0).x * 0.25) - _4587) / _3237, _3122) - ((max(0.008000000379979610443115234375 - (_3089 * _5224), 0.0) * (-249.9999847412109375)) * _3089)) <= 0.0)
                        {
                            _5360 = true;
                            _5337 = false;
                            _5314 = vec3(0.0);
                            _5293 = true;
                            _5292 = false;
                            _5291 = vec3(0.0);
                            _3092_ladder_break = true;
                            break;
                        }
                        _5244 = vs_out_frag_position_ws + (_1928 * _5224);
                    }
                    else
                    {
                        _5244 = vec3(0.0);
                    }
                    bool _5444 = _3228 ? true : false;
                    _5360 = true;
                    _5337 = _5444;
                    _5314 = _5244;
                    _5293 = true;
                    _5292 = _5444;
                    _5291 = _5244;
                    _3092_ladder_break = true;
                    break;
                } while(false);
                if (_3092_ladder_break)
                {
                    break;
                }
                _3282 = _5053 + 1u;
                _5159 = _3517;
                _5141 = _3510;
                _5124 = _3502;
                _5108 = _3495;
                _5093 = _3486;
                _5079 = _3479;
                _5066 = _3471;
                _5054 = _3464;
                _5053 = _3282;
                continue;
            }
            if (_5293)
            {
                _5359 = _5360;
                _5336 = _5337;
                _5313 = _5314;
                break;
            }
            _5359 = _5293;
            _5336 = _5292;
            _5313 = _5291;
            break;
        } while(false);
        float _5383;
        if (_5359)
        {
            if (!_5336)
            {
                demote;
            }
            vec4 _4667 = (vec4(_5313, 1.0) * current_view.world_to_view) * current_view.view_to_sample;
            _5383 = max((_4667.xyz / vec3(_4667.w)).z, gl_FragCoord.z);
        }
        else
        {
            _5383 = gl_FragCoord.z;
        }
        _5382 = _5383;
    }
    else
    {
        _5382 = gl_FragCoord.z;
    }
    gl_FragDepth = _5382;
}

