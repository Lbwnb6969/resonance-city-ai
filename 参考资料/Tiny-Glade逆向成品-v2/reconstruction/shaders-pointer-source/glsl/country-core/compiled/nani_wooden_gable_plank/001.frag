#version 460
#extension GL_EXT_buffer_reference2 : require
#extension GL_ARB_conservative_depth : require
#extension GL_EXT_buffer_reference_uvec2 : require
#extension GL_EXT_demote_to_helper_invocation : require
layout(depth_less) out float gl_FragDepth;

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

struct WoodenGablePlank_natural
{
    Affine3Packed_natural transform;
    int seed;
    uint color_source;
    uint flags;
    uint pad0;
    float skew_min_y_left_01;
    float skew_min_y_right_01;
    float skew_max_y_left_01;
    float skew_max_y_right_01;
    uvec2 window_cut_buffer_address;
    uint window_cut_list;
    uint pad1;
};

vec2 _5332;
vec3 _5704;
bool _5751;
vec4 _6275;

struct _6286
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
    WoodenGablePlank_natural _member0[];
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

layout(set = 8, binding = 0, std430) readonly buffer wooden_wall_colors_ids
{
    uint _member0[];
} wooden_wall_colors_ids_1;

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

layout(set = 0, binding = 2) uniform texture2DArray material_data_window_cut_sdf;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 8, binding = 1) uniform texture2DArray wooden_wall_colors_tex;
layout(set = 0, binding = 1) uniform texture2D material_data_wood_roughness;

layout(location = 6) in vec2 vs_out_frag_uv;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 0) in vec3 vs_out_frag_position_ws;
layout(location = 3) flat in uint vs_out_window_cut_list;
layout(location = 2) flat in uint vs_out_instance_index;
layout(location = 7) flat in int vs_out_color_source;
layout(location = 5) flat in int vs_out_frag_is_bevel;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec3 _152 = normalize(vs_out_frag_normal_ws);
    uint _1941 = vs_out_window_cut_list >> 24u;
    vec2 _5787;
    bool _5789;
    vec3 _5798;
    vec3 _5814;
    float _6208;
    if (_1941 != 0u)
    {
        vec4 _1957 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
        vec3 _1948 = normalize(vs_out_frag_position_ws - (_1957.xyz / vec3(_1957.w)));
        mat3x4 _2004 = transpose(mat4x3(vec3(material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[0], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[1], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[2]), vec3(material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[3], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[4], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[5]), vec3(material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[6], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[7], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[8]), vec3(material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[9], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[10], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[11])));
        float _5329;
        if ((material_data_nani_instance_data._member0[vs_out_instance_index].flags & 4u) != 0u)
        {
            _5329 = min(0.0, min(material_data_nani_instance_data._member0[vs_out_instance_index].skew_max_y_left_01, material_data_nani_instance_data._member0[vs_out_instance_index].skew_max_y_right_01));
        }
        else
        {
            _5329 = 0.0;
        }
        vec4 _2055 = _2004[0];
        vec4 _2062 = _2004[1];
        vec4 _2069 = _2004[2];
        mat3 _2079 = mat3(vec3(_2055.xyz), vec3(_2062.xyz), vec3(_2069.xyz));
        vec3 _2133 = vec3(1.0, 0.0, 0.0) * _2079;
        vec3 _2134 = vec3(0.0, 1.0, 0.0) * _2079;
        vec3 _2135 = vec3(0.0, 0.0, 1.0) * _2079;
        vec3 _2138 = cross(_2133, _2134);
        vec3 _2141 = vec3(1.0 / dot(_2135, _2138));
        vec3 _2142 = cross(_2134, _2135) * _2141;
        vec3 _2143 = cross(_2135, _2133) * _2141;
        vec3 _2144 = _2138 * _2141;
        vec3 _2089 = -(vec3(_2055.w, _2062.w, _2069.w) * mat3(_2142, _2143, _2144));
        mat3x4 _2052;
        _2052[0].x = _2142.x;
        _2052[0].y = _2142.y;
        _2052[0].z = _2142.z;
        _2052[0].w = _2089.x;
        _2052[1].x = _2143.x;
        _2052[1].y = _2143.y;
        _2052[1].z = _2143.z;
        _2052[1].w = _2089.y;
        _2052[2].x = _2144.x;
        _2052[2].y = _2144.y;
        _2052[2].z = _2144.z;
        _2052[2].w = _2089.z;
        vec3 _2148 = vs_out_frag_position_ws * 0.4000000059604644775390625;
        ivec3 _2174 = ivec3(floor(_2148));
        vec3 _2175 = fract(_2148);
        uvec3 _2176 = uvec3(_2174);
        uint _2290 = _2176.z;
        uint _2296 = _2290 + (_2290 << 10u);
        uint _2298 = _2296 ^ (_2296 >> 6u);
        uint _2300 = _2298 + (_2298 << 3u);
        uint _2302 = _2300 ^ (_2300 >> 11u);
        uint _2310 = (((_2176.y * 1664525u) + (_2302 + (_2302 << 15u))) + 1013904223u) * 1664525u;
        uint _2312 = _2310 ^ (_2310 >> 11u);
        uint _2315 = _2312 ^ ((_2312 << 7u) & 2636928640u);
        uint _2318 = _2315 ^ ((_2315 << 15u) & 4022730752u);
        uint _2326 = (((_2176.x * 1664525u) + (_2318 ^ (_2318 >> 18u))) + 1013904223u) * 1664525u;
        uint _2328 = _2326 ^ (_2326 >> 11u);
        uint _2331 = _2328 ^ ((_2328 << 7u) & 2636928640u);
        uint _2334 = _2331 ^ ((_2331 << 15u) & 4022730752u);
        uint _2336 = _2334 ^ (_2334 >> 18u);
        uint _2355;
        uint _2374;
        vec2 _2163;
        uint _5333 = 0u;
        uint _6217 = _2336;
        for (;;)
        {
            if (!(_5333 < 2u))
            {
                break;
            }
            uint _2366 = _6217 + (_6217 << 10u);
            uint _2368 = _2366 ^ (_2366 >> 6u);
            uint _2370 = _2368 + (_2368 << 3u);
            uint _2372 = _2370 ^ (_2370 >> 11u);
            _2374 = _2372 + (_2372 << 15u);
            _2163[_5333] = uintBitsToFloat((_6217 & 8388607u) | 1065353216u) - 1.0;
            _2355 = _5333 + 1u;
            _6217 = _2374;
            _5333 = _2355;
            continue;
        }
        uvec3 _2185 = uvec3(_2174 + ivec3(1, 0, 0));
        uint _2390 = _2185.z;
        uint _2396 = _2390 + (_2390 << 10u);
        uint _2398 = _2396 ^ (_2396 >> 6u);
        uint _2400 = _2398 + (_2398 << 3u);
        uint _2402 = _2400 ^ (_2400 >> 11u);
        uint _2410 = (((_2185.y * 1664525u) + (_2402 + (_2402 << 15u))) + 1013904223u) * 1664525u;
        uint _2412 = _2410 ^ (_2410 >> 11u);
        uint _2415 = _2412 ^ ((_2412 << 7u) & 2636928640u);
        uint _2418 = _2415 ^ ((_2415 << 15u) & 4022730752u);
        uint _2426 = (((_2185.x * 1664525u) + (_2418 ^ (_2418 >> 18u))) + 1013904223u) * 1664525u;
        uint _2428 = _2426 ^ (_2426 >> 11u);
        uint _2431 = _2428 ^ ((_2428 << 7u) & 2636928640u);
        uint _2434 = _2431 ^ ((_2431 << 15u) & 4022730752u);
        uint _2436 = _2434 ^ (_2434 >> 18u);
        uint _2455;
        uint _2474;
        vec2 _2164;
        uint _5337 = 0u;
        uint _6216 = _2436;
        for (;;)
        {
            if (!(_5337 < 2u))
            {
                break;
            }
            uint _2466 = _6216 + (_6216 << 10u);
            uint _2468 = _2466 ^ (_2466 >> 6u);
            uint _2470 = _2468 + (_2468 << 3u);
            uint _2472 = _2470 ^ (_2470 >> 11u);
            _2474 = _2472 + (_2472 << 15u);
            _2164[_5337] = uintBitsToFloat((_6216 & 8388607u) | 1065353216u) - 1.0;
            _2455 = _5337 + 1u;
            _6216 = _2474;
            _5337 = _2455;
            continue;
        }
        uvec3 _2192 = uvec3(_2174 + ivec3(0, 1, 0));
        uint _2490 = _2192.z;
        uint _2496 = _2490 + (_2490 << 10u);
        uint _2498 = _2496 ^ (_2496 >> 6u);
        uint _2500 = _2498 + (_2498 << 3u);
        uint _2502 = _2500 ^ (_2500 >> 11u);
        uint _2510 = (((_2192.y * 1664525u) + (_2502 + (_2502 << 15u))) + 1013904223u) * 1664525u;
        uint _2512 = _2510 ^ (_2510 >> 11u);
        uint _2515 = _2512 ^ ((_2512 << 7u) & 2636928640u);
        uint _2518 = _2515 ^ ((_2515 << 15u) & 4022730752u);
        uint _2526 = (((_2192.x * 1664525u) + (_2518 ^ (_2518 >> 18u))) + 1013904223u) * 1664525u;
        uint _2528 = _2526 ^ (_2526 >> 11u);
        uint _2531 = _2528 ^ ((_2528 << 7u) & 2636928640u);
        uint _2534 = _2531 ^ ((_2531 << 15u) & 4022730752u);
        uint _2536 = _2534 ^ (_2534 >> 18u);
        uint _2555;
        uint _2574;
        vec2 _2165;
        uint _5342 = 0u;
        uint _6215 = _2536;
        for (;;)
        {
            if (!(_5342 < 2u))
            {
                break;
            }
            uint _2566 = _6215 + (_6215 << 10u);
            uint _2568 = _2566 ^ (_2566 >> 6u);
            uint _2570 = _2568 + (_2568 << 3u);
            uint _2572 = _2570 ^ (_2570 >> 11u);
            _2574 = _2572 + (_2572 << 15u);
            _2165[_5342] = uintBitsToFloat((_6215 & 8388607u) | 1065353216u) - 1.0;
            _2555 = _5342 + 1u;
            _6215 = _2574;
            _5342 = _2555;
            continue;
        }
        uvec3 _2200 = uvec3(_2174 + ivec3(1, 1, 0));
        uint _2590 = _2200.z;
        uint _2596 = _2590 + (_2590 << 10u);
        uint _2598 = _2596 ^ (_2596 >> 6u);
        uint _2600 = _2598 + (_2598 << 3u);
        uint _2602 = _2600 ^ (_2600 >> 11u);
        uint _2610 = (((_2200.y * 1664525u) + (_2602 + (_2602 << 15u))) + 1013904223u) * 1664525u;
        uint _2612 = _2610 ^ (_2610 >> 11u);
        uint _2615 = _2612 ^ ((_2612 << 7u) & 2636928640u);
        uint _2618 = _2615 ^ ((_2615 << 15u) & 4022730752u);
        uint _2626 = (((_2200.x * 1664525u) + (_2618 ^ (_2618 >> 18u))) + 1013904223u) * 1664525u;
        uint _2628 = _2626 ^ (_2626 >> 11u);
        uint _2631 = _2628 ^ ((_2628 << 7u) & 2636928640u);
        uint _2634 = _2631 ^ ((_2631 << 15u) & 4022730752u);
        uint _2636 = _2634 ^ (_2634 >> 18u);
        uint _2655;
        uint _2674;
        vec2 _2166;
        uint _5348 = 0u;
        uint _6214 = _2636;
        for (;;)
        {
            if (!(_5348 < 2u))
            {
                break;
            }
            uint _2666 = _6214 + (_6214 << 10u);
            uint _2668 = _2666 ^ (_2666 >> 6u);
            uint _2670 = _2668 + (_2668 << 3u);
            uint _2672 = _2670 ^ (_2670 >> 11u);
            _2674 = _2672 + (_2672 << 15u);
            _2166[_5348] = uintBitsToFloat((_6214 & 8388607u) | 1065353216u) - 1.0;
            _2655 = _5348 + 1u;
            _6214 = _2674;
            _5348 = _2655;
            continue;
        }
        uvec3 _2207 = uvec3(_2174 + ivec3(0, 0, 1));
        uint _2690 = _2207.z;
        uint _2696 = _2690 + (_2690 << 10u);
        uint _2698 = _2696 ^ (_2696 >> 6u);
        uint _2700 = _2698 + (_2698 << 3u);
        uint _2702 = _2700 ^ (_2700 >> 11u);
        uint _2710 = (((_2207.y * 1664525u) + (_2702 + (_2702 << 15u))) + 1013904223u) * 1664525u;
        uint _2712 = _2710 ^ (_2710 >> 11u);
        uint _2715 = _2712 ^ ((_2712 << 7u) & 2636928640u);
        uint _2718 = _2715 ^ ((_2715 << 15u) & 4022730752u);
        uint _2726 = (((_2207.x * 1664525u) + (_2718 ^ (_2718 >> 18u))) + 1013904223u) * 1664525u;
        uint _2728 = _2726 ^ (_2726 >> 11u);
        uint _2731 = _2728 ^ ((_2728 << 7u) & 2636928640u);
        uint _2734 = _2731 ^ ((_2731 << 15u) & 4022730752u);
        uint _2736 = _2734 ^ (_2734 >> 18u);
        uint _2755;
        uint _2774;
        vec2 _2167;
        uint _5355 = 0u;
        uint _6213 = _2736;
        for (;;)
        {
            if (!(_5355 < 2u))
            {
                break;
            }
            uint _2766 = _6213 + (_6213 << 10u);
            uint _2768 = _2766 ^ (_2766 >> 6u);
            uint _2770 = _2768 + (_2768 << 3u);
            uint _2772 = _2770 ^ (_2770 >> 11u);
            _2774 = _2772 + (_2772 << 15u);
            _2167[_5355] = uintBitsToFloat((_6213 & 8388607u) | 1065353216u) - 1.0;
            _2755 = _5355 + 1u;
            _6213 = _2774;
            _5355 = _2755;
            continue;
        }
        uvec3 _2216 = uvec3(_2174 + ivec3(1, 0, 1));
        uint _2790 = _2216.z;
        uint _2796 = _2790 + (_2790 << 10u);
        uint _2798 = _2796 ^ (_2796 >> 6u);
        uint _2800 = _2798 + (_2798 << 3u);
        uint _2802 = _2800 ^ (_2800 >> 11u);
        uint _2810 = (((_2216.y * 1664525u) + (_2802 + (_2802 << 15u))) + 1013904223u) * 1664525u;
        uint _2812 = _2810 ^ (_2810 >> 11u);
        uint _2815 = _2812 ^ ((_2812 << 7u) & 2636928640u);
        uint _2818 = _2815 ^ ((_2815 << 15u) & 4022730752u);
        uint _2826 = (((_2216.x * 1664525u) + (_2818 ^ (_2818 >> 18u))) + 1013904223u) * 1664525u;
        uint _2828 = _2826 ^ (_2826 >> 11u);
        uint _2831 = _2828 ^ ((_2828 << 7u) & 2636928640u);
        uint _2834 = _2831 ^ ((_2831 << 15u) & 4022730752u);
        uint _2836 = _2834 ^ (_2834 >> 18u);
        uint _2855;
        uint _2874;
        vec2 _2168;
        uint _5363 = 0u;
        uint _6212 = _2836;
        for (;;)
        {
            if (!(_5363 < 2u))
            {
                break;
            }
            uint _2866 = _6212 + (_6212 << 10u);
            uint _2868 = _2866 ^ (_2866 >> 6u);
            uint _2870 = _2868 + (_2868 << 3u);
            uint _2872 = _2870 ^ (_2870 >> 11u);
            _2874 = _2872 + (_2872 << 15u);
            _2168[_5363] = uintBitsToFloat((_6212 & 8388607u) | 1065353216u) - 1.0;
            _2855 = _5363 + 1u;
            _6212 = _2874;
            _5363 = _2855;
            continue;
        }
        uvec3 _2223 = uvec3(_2174 + ivec3(0, 1, 1));
        uint _2890 = _2223.z;
        uint _2896 = _2890 + (_2890 << 10u);
        uint _2898 = _2896 ^ (_2896 >> 6u);
        uint _2900 = _2898 + (_2898 << 3u);
        uint _2902 = _2900 ^ (_2900 >> 11u);
        uint _2910 = (((_2223.y * 1664525u) + (_2902 + (_2902 << 15u))) + 1013904223u) * 1664525u;
        uint _2912 = _2910 ^ (_2910 >> 11u);
        uint _2915 = _2912 ^ ((_2912 << 7u) & 2636928640u);
        uint _2918 = _2915 ^ ((_2915 << 15u) & 4022730752u);
        uint _2926 = (((_2223.x * 1664525u) + (_2918 ^ (_2918 >> 18u))) + 1013904223u) * 1664525u;
        uint _2928 = _2926 ^ (_2926 >> 11u);
        uint _2931 = _2928 ^ ((_2928 << 7u) & 2636928640u);
        uint _2934 = _2931 ^ ((_2931 << 15u) & 4022730752u);
        uint _2936 = _2934 ^ (_2934 >> 18u);
        uint _2955;
        uint _2974;
        vec2 _2169;
        uint _5372 = 0u;
        uint _6211 = _2936;
        for (;;)
        {
            if (!(_5372 < 2u))
            {
                break;
            }
            uint _2966 = _6211 + (_6211 << 10u);
            uint _2968 = _2966 ^ (_2966 >> 6u);
            uint _2970 = _2968 + (_2968 << 3u);
            uint _2972 = _2970 ^ (_2970 >> 11u);
            _2974 = _2972 + (_2972 << 15u);
            _2169[_5372] = uintBitsToFloat((_6211 & 8388607u) | 1065353216u) - 1.0;
            _2955 = _5372 + 1u;
            _6211 = _2974;
            _5372 = _2955;
            continue;
        }
        uvec3 _2231 = uvec3(_2174 + ivec3(1));
        uint _2990 = _2231.z;
        uint _2996 = _2990 + (_2990 << 10u);
        uint _2998 = _2996 ^ (_2996 >> 6u);
        uint _3000 = _2998 + (_2998 << 3u);
        uint _3002 = _3000 ^ (_3000 >> 11u);
        uint _3010 = (((_2231.y * 1664525u) + (_3002 + (_3002 << 15u))) + 1013904223u) * 1664525u;
        uint _3012 = _3010 ^ (_3010 >> 11u);
        uint _3015 = _3012 ^ ((_3012 << 7u) & 2636928640u);
        uint _3018 = _3015 ^ ((_3015 << 15u) & 4022730752u);
        uint _3026 = (((_2231.x * 1664525u) + (_3018 ^ (_3018 >> 18u))) + 1013904223u) * 1664525u;
        uint _3028 = _3026 ^ (_3026 >> 11u);
        uint _3031 = _3028 ^ ((_3028 << 7u) & 2636928640u);
        uint _3034 = _3031 ^ ((_3031 << 15u) & 4022730752u);
        uint _3036 = _3034 ^ (_3034 >> 18u);
        uint _3055;
        uint _3074;
        vec2 _2170;
        uint _5382 = 0u;
        uint _6210 = _3036;
        for (;;)
        {
            if (!(_5382 < 2u))
            {
                break;
            }
            uint _3066 = _6210 + (_6210 << 10u);
            uint _3068 = _3066 ^ (_3066 >> 6u);
            uint _3070 = _3068 + (_3068 << 3u);
            uint _3072 = _3070 ^ (_3070 >> 11u);
            _3074 = _3072 + (_3072 << 15u);
            _2170[_5382] = uintBitsToFloat((_6210 & 8388607u) | 1065353216u) - 1.0;
            _3055 = _5382 + 1u;
            _6210 = _3074;
            _5382 = _3055;
            continue;
        }
        vec3 _3086 = (_2175 * _2175) * (vec3(3.0) - (vec3(2.0) * _2175));
        float _2239 = _3086.x;
        float _2240 = 1.0 - _2239;
        float _2242 = _3086.y;
        float _2243 = 1.0 - _2242;
        float _2245 = _3086.z;
        float _2246 = 1.0 - _2245;
        vec2 _2153 = clamp((((((((((((_2163 * _2240) * _2243) * _2246) + (((_2164 * _2239) * _2243) * _2246)) + (((_2165 * _2240) * _2242) * _2246)) + (((_2166 * _2239) * _2242) * _2246)) + (((_2167 * _2240) * _2243) * _2245)) + (((_2168 * _2239) * _2243) * _2245)) + (((_2169 * _2240) * _2242) * _2245)) + (((_2170 * _2239) * _2242) * _2245)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
        vec3 _2049 = _1948 * mat3(_2052[0].xyz, _2052[1].xyz, _2052[2].xyz);
        vec3 _3095 = (vec4(vs_out_frag_position_ws - (vec3(_2153.x, 0.0, _2153.y) * 0.0599999986588954925537109375), 1.0) * _2052).xyz;
        vec3 _3104 = max((vec3(0.5, 1.0, 0.5) - _3095) / _2049, (vec3(-0.5, _5329, -0.5).xyz - _3095) / _2049);
        float _3116 = min(min(_3104.x, _3104.y), _3104.z);
        vec3 _5691;
        vec3 _5715;
        bool _5738;
        bool _5762;
        do
        {
            if (all(equal(material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address, uvec2(0u))))
            {
                _5762 = false;
                _5738 = false;
                _5715 = vec3(0.0);
                _5691 = vec3(0.0);
                break;
            }
            uint _3367 = vs_out_window_cut_list & 16777215u;
            float _3153 = max(-dot(_1948, _152), 0.0);
            vec2 _5424;
            vec2 _5437;
            vec2 _5451;
            vec2 _5466;
            vec2 _5482;
            vec2 _5499;
            vec2 _5517;
            vec2 _5536;
            _5536 = _5332;
            _5517 = _5332;
            _5499 = _5332;
            _5482 = _5332;
            _5466 = _5332;
            _5451 = _5332;
            _5437 = _5332;
            _5424 = _5332;
            uint _3346;
            vec2 _3527;
            vec2 _3534;
            vec2 _3542;
            vec2 _3549;
            vec2 _3558;
            vec2 _3565;
            vec2 _3573;
            vec2 _3580;
            vec3 _5668;
            vec3 _5669;
            bool _5670;
            bool _5671;
            vec3 _5692;
            vec3 _5716;
            bool _5739;
            bool _5763;
            uint _5423 = 0u;
            for (;;)
            {
                bool _3156_ladder_break = false;
                do
                {
                    if (!(_5423 < _1941))
                    {
                        _5763 = _5751;
                        _5739 = _5751;
                        _5716 = _5704;
                        _5692 = _5704;
                        _5671 = false;
                        _5670 = false;
                        _5669 = vec3(0.0);
                        _5668 = vec3(0.0);
                        _3156_ladder_break = true;
                        break;
                    }
                    uint _3386 = material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x + (4u * (_3367 + _5423));
                    uvec2 _6287 = uvec2(uintPointer(uvec2(_3386, material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.y + uint(_3386 < material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x))));
                    uint _6288 = _6287.x;
                    _6286 _6290;
                    imulExtended(0, 4, _6290._m1, _6290._m0);
                    uint _6295 = _6288 + uint(_6290._m0);
                    uint _3373 = uintPointer(uvec2(_6295, (_6287.y + uint(_6290._m1)) + uint(_6295 < _6288))).value;
                    uint _3448 = material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x + (48u * _3373);
                    uvec4Pointer _3471 = uvec4Pointer(uvec2(_3448, material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.y + uint(_3448 < material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x)));
                    uvec2 _6301 = uvec2(_3471);
                    uint _6302 = _6301.x;
                    _6286 _6304;
                    imulExtended(0, 16, _6304._m1, _6304._m0);
                    uint _6309 = _6302 + uint(_6304._m0);
                    uvec4 _3416 = uvec4Pointer(uvec2(_6309, (_6301.y + uint(_6304._m1)) + uint(_6309 < _6302))).value;
                    uvec2 _6315 = uvec2(_3471);
                    uint _6316 = _6315.x;
                    _6286 _6318;
                    imulExtended(1, 16, _6318._m1, _6318._m0);
                    uint _6323 = _6316 + uint(_6318._m0);
                    uvec4 _3418 = uvec4Pointer(uvec2(_6323, (_6315.y + uint(_6318._m1)) + uint(_6323 < _6316))).value;
                    uvec2 _6329 = uvec2(_3471);
                    uint _6330 = _6329.x;
                    _6286 _6332;
                    imulExtended(2, 16, _6332._m1, _6332._m0);
                    uint _6337 = _6330 + uint(_6332._m0);
                    uvec4 _3420 = uvec4Pointer(uvec2(_6337, (_6329.y + uint(_6332._m1)) + uint(_6337 < _6330))).value;
                    vec3 _3423 = uintBitsToFloat(_3416.xyz);
                    vec2 _3428 = uintBitsToFloat(_3418.xy);
                    vec2 _3431 = uintBitsToFloat(_3418.zw);
                    vec3 _3481 = normalize(vec3(_3428.x, 0.0, _3428.y));
                    vec3 _3483 = cross(vec3(0.0, 1.0, 0.0), _3481);
                    vec3 _3492 = _3423 * 0.4000000059604644775390625;
                    ivec3 _3518 = ivec3(floor(_3492));
                    vec3 _3519 = fract(_3492);
                    uvec3 _3520 = uvec3(_3518);
                    uint _3634 = _3520.z;
                    uint _3640 = _3634 + (_3634 << 10u);
                    uint _3642 = _3640 ^ (_3640 >> 6u);
                    uint _3644 = _3642 + (_3642 << 3u);
                    uint _3646 = _3644 ^ (_3644 >> 11u);
                    uint _3654 = (((_3520.y * 1664525u) + (_3646 + (_3646 << 15u))) + 1013904223u) * 1664525u;
                    uint _3656 = _3654 ^ (_3654 >> 11u);
                    uint _3659 = _3656 ^ ((_3656 << 7u) & 2636928640u);
                    uint _3662 = _3659 ^ ((_3659 << 15u) & 4022730752u);
                    uint _3670 = (((_3520.x * 1664525u) + (_3662 ^ (_3662 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3672 = _3670 ^ (_3670 >> 11u);
                    uint _3675 = _3672 ^ ((_3672 << 7u) & 2636928640u);
                    uint _3678 = _3675 ^ ((_3675 << 15u) & 4022730752u);
                    uint _3680 = _3678 ^ (_3678 >> 18u);
                    vec2 _3507 = _5424;
                    uint _3699;
                    uint _3718;
                    uint _5435 = 0u;
                    uint _5690 = _3680;
                    for (;;)
                    {
                        if (!(_5435 < 2u))
                        {
                            break;
                        }
                        uint _3710 = _5690 + (_5690 << 10u);
                        uint _3712 = _3710 ^ (_3710 >> 6u);
                        uint _3714 = _3712 + (_3712 << 3u);
                        uint _3716 = _3714 ^ (_3714 >> 11u);
                        _3718 = _3716 + (_3716 << 15u);
                        _3507[_5435] = uintBitsToFloat((_5690 & 8388607u) | 1065353216u) - 1.0;
                        _3699 = _5435 + 1u;
                        _5690 = _3718;
                        _5435 = _3699;
                        continue;
                    }
                    _3527 = _3507;
                    uvec3 _3529 = uvec3(_3518 + ivec3(1, 0, 0));
                    uint _3734 = _3529.z;
                    uint _3740 = _3734 + (_3734 << 10u);
                    uint _3742 = _3740 ^ (_3740 >> 6u);
                    uint _3744 = _3742 + (_3742 << 3u);
                    uint _3746 = _3744 ^ (_3744 >> 11u);
                    uint _3754 = (((_3529.y * 1664525u) + (_3746 + (_3746 << 15u))) + 1013904223u) * 1664525u;
                    uint _3756 = _3754 ^ (_3754 >> 11u);
                    uint _3759 = _3756 ^ ((_3756 << 7u) & 2636928640u);
                    uint _3762 = _3759 ^ ((_3759 << 15u) & 4022730752u);
                    uint _3770 = (((_3529.x * 1664525u) + (_3762 ^ (_3762 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3772 = _3770 ^ (_3770 >> 11u);
                    uint _3775 = _3772 ^ ((_3772 << 7u) & 2636928640u);
                    uint _3778 = _3775 ^ ((_3775 << 15u) & 4022730752u);
                    uint _3780 = _3778 ^ (_3778 >> 18u);
                    vec2 _3508 = _5437;
                    uint _3799;
                    uint _3818;
                    uint _5448 = 0u;
                    uint _5689 = _3780;
                    for (;;)
                    {
                        if (!(_5448 < 2u))
                        {
                            break;
                        }
                        uint _3810 = _5689 + (_5689 << 10u);
                        uint _3812 = _3810 ^ (_3810 >> 6u);
                        uint _3814 = _3812 + (_3812 << 3u);
                        uint _3816 = _3814 ^ (_3814 >> 11u);
                        _3818 = _3816 + (_3816 << 15u);
                        _3508[_5448] = uintBitsToFloat((_5689 & 8388607u) | 1065353216u) - 1.0;
                        _3799 = _5448 + 1u;
                        _5689 = _3818;
                        _5448 = _3799;
                        continue;
                    }
                    _3534 = _3508;
                    uvec3 _3536 = uvec3(_3518 + ivec3(0, 1, 0));
                    uint _3834 = _3536.z;
                    uint _3840 = _3834 + (_3834 << 10u);
                    uint _3842 = _3840 ^ (_3840 >> 6u);
                    uint _3844 = _3842 + (_3842 << 3u);
                    uint _3846 = _3844 ^ (_3844 >> 11u);
                    uint _3854 = (((_3536.y * 1664525u) + (_3846 + (_3846 << 15u))) + 1013904223u) * 1664525u;
                    uint _3856 = _3854 ^ (_3854 >> 11u);
                    uint _3859 = _3856 ^ ((_3856 << 7u) & 2636928640u);
                    uint _3862 = _3859 ^ ((_3859 << 15u) & 4022730752u);
                    uint _3870 = (((_3536.x * 1664525u) + (_3862 ^ (_3862 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3872 = _3870 ^ (_3870 >> 11u);
                    uint _3875 = _3872 ^ ((_3872 << 7u) & 2636928640u);
                    uint _3878 = _3875 ^ ((_3875 << 15u) & 4022730752u);
                    uint _3880 = _3878 ^ (_3878 >> 18u);
                    vec2 _3509 = _5451;
                    uint _3899;
                    uint _3918;
                    uint _5462 = 0u;
                    uint _5688 = _3880;
                    for (;;)
                    {
                        if (!(_5462 < 2u))
                        {
                            break;
                        }
                        uint _3910 = _5688 + (_5688 << 10u);
                        uint _3912 = _3910 ^ (_3910 >> 6u);
                        uint _3914 = _3912 + (_3912 << 3u);
                        uint _3916 = _3914 ^ (_3914 >> 11u);
                        _3918 = _3916 + (_3916 << 15u);
                        _3509[_5462] = uintBitsToFloat((_5688 & 8388607u) | 1065353216u) - 1.0;
                        _3899 = _5462 + 1u;
                        _5688 = _3918;
                        _5462 = _3899;
                        continue;
                    }
                    _3542 = _3509;
                    uvec3 _3544 = uvec3(_3518 + ivec3(1, 1, 0));
                    uint _3934 = _3544.z;
                    uint _3940 = _3934 + (_3934 << 10u);
                    uint _3942 = _3940 ^ (_3940 >> 6u);
                    uint _3944 = _3942 + (_3942 << 3u);
                    uint _3946 = _3944 ^ (_3944 >> 11u);
                    uint _3954 = (((_3544.y * 1664525u) + (_3946 + (_3946 << 15u))) + 1013904223u) * 1664525u;
                    uint _3956 = _3954 ^ (_3954 >> 11u);
                    uint _3959 = _3956 ^ ((_3956 << 7u) & 2636928640u);
                    uint _3962 = _3959 ^ ((_3959 << 15u) & 4022730752u);
                    uint _3970 = (((_3544.x * 1664525u) + (_3962 ^ (_3962 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3972 = _3970 ^ (_3970 >> 11u);
                    uint _3975 = _3972 ^ ((_3972 << 7u) & 2636928640u);
                    uint _3978 = _3975 ^ ((_3975 << 15u) & 4022730752u);
                    uint _3980 = _3978 ^ (_3978 >> 18u);
                    vec2 _3510 = _5466;
                    uint _3999;
                    uint _4018;
                    uint _5477 = 0u;
                    uint _5687 = _3980;
                    for (;;)
                    {
                        if (!(_5477 < 2u))
                        {
                            break;
                        }
                        uint _4010 = _5687 + (_5687 << 10u);
                        uint _4012 = _4010 ^ (_4010 >> 6u);
                        uint _4014 = _4012 + (_4012 << 3u);
                        uint _4016 = _4014 ^ (_4014 >> 11u);
                        _4018 = _4016 + (_4016 << 15u);
                        _3510[_5477] = uintBitsToFloat((_5687 & 8388607u) | 1065353216u) - 1.0;
                        _3999 = _5477 + 1u;
                        _5687 = _4018;
                        _5477 = _3999;
                        continue;
                    }
                    _3549 = _3510;
                    uvec3 _3551 = uvec3(_3518 + ivec3(0, 0, 1));
                    uint _4034 = _3551.z;
                    uint _4040 = _4034 + (_4034 << 10u);
                    uint _4042 = _4040 ^ (_4040 >> 6u);
                    uint _4044 = _4042 + (_4042 << 3u);
                    uint _4046 = _4044 ^ (_4044 >> 11u);
                    uint _4054 = (((_3551.y * 1664525u) + (_4046 + (_4046 << 15u))) + 1013904223u) * 1664525u;
                    uint _4056 = _4054 ^ (_4054 >> 11u);
                    uint _4059 = _4056 ^ ((_4056 << 7u) & 2636928640u);
                    uint _4062 = _4059 ^ ((_4059 << 15u) & 4022730752u);
                    uint _4070 = (((_3551.x * 1664525u) + (_4062 ^ (_4062 >> 18u))) + 1013904223u) * 1664525u;
                    uint _4072 = _4070 ^ (_4070 >> 11u);
                    uint _4075 = _4072 ^ ((_4072 << 7u) & 2636928640u);
                    uint _4078 = _4075 ^ ((_4075 << 15u) & 4022730752u);
                    uint _4080 = _4078 ^ (_4078 >> 18u);
                    vec2 _3511 = _5482;
                    uint _4099;
                    uint _4118;
                    uint _5493 = 0u;
                    uint _5686 = _4080;
                    for (;;)
                    {
                        if (!(_5493 < 2u))
                        {
                            break;
                        }
                        uint _4110 = _5686 + (_5686 << 10u);
                        uint _4112 = _4110 ^ (_4110 >> 6u);
                        uint _4114 = _4112 + (_4112 << 3u);
                        uint _4116 = _4114 ^ (_4114 >> 11u);
                        _4118 = _4116 + (_4116 << 15u);
                        _3511[_5493] = uintBitsToFloat((_5686 & 8388607u) | 1065353216u) - 1.0;
                        _4099 = _5493 + 1u;
                        _5686 = _4118;
                        _5493 = _4099;
                        continue;
                    }
                    _3558 = _3511;
                    uvec3 _3560 = uvec3(_3518 + ivec3(1, 0, 1));
                    uint _4134 = _3560.z;
                    uint _4140 = _4134 + (_4134 << 10u);
                    uint _4142 = _4140 ^ (_4140 >> 6u);
                    uint _4144 = _4142 + (_4142 << 3u);
                    uint _4146 = _4144 ^ (_4144 >> 11u);
                    uint _4154 = (((_3560.y * 1664525u) + (_4146 + (_4146 << 15u))) + 1013904223u) * 1664525u;
                    uint _4156 = _4154 ^ (_4154 >> 11u);
                    uint _4159 = _4156 ^ ((_4156 << 7u) & 2636928640u);
                    uint _4162 = _4159 ^ ((_4159 << 15u) & 4022730752u);
                    uint _4170 = (((_3560.x * 1664525u) + (_4162 ^ (_4162 >> 18u))) + 1013904223u) * 1664525u;
                    uint _4172 = _4170 ^ (_4170 >> 11u);
                    uint _4175 = _4172 ^ ((_4172 << 7u) & 2636928640u);
                    uint _4178 = _4175 ^ ((_4175 << 15u) & 4022730752u);
                    uint _4180 = _4178 ^ (_4178 >> 18u);
                    vec2 _3512 = _5499;
                    uint _4199;
                    uint _4218;
                    uint _5510 = 0u;
                    uint _5685 = _4180;
                    for (;;)
                    {
                        if (!(_5510 < 2u))
                        {
                            break;
                        }
                        uint _4210 = _5685 + (_5685 << 10u);
                        uint _4212 = _4210 ^ (_4210 >> 6u);
                        uint _4214 = _4212 + (_4212 << 3u);
                        uint _4216 = _4214 ^ (_4214 >> 11u);
                        _4218 = _4216 + (_4216 << 15u);
                        _3512[_5510] = uintBitsToFloat((_5685 & 8388607u) | 1065353216u) - 1.0;
                        _4199 = _5510 + 1u;
                        _5685 = _4218;
                        _5510 = _4199;
                        continue;
                    }
                    _3565 = _3512;
                    uvec3 _3567 = uvec3(_3518 + ivec3(0, 1, 1));
                    uint _4234 = _3567.z;
                    uint _4240 = _4234 + (_4234 << 10u);
                    uint _4242 = _4240 ^ (_4240 >> 6u);
                    uint _4244 = _4242 + (_4242 << 3u);
                    uint _4246 = _4244 ^ (_4244 >> 11u);
                    uint _4254 = (((_3567.y * 1664525u) + (_4246 + (_4246 << 15u))) + 1013904223u) * 1664525u;
                    uint _4256 = _4254 ^ (_4254 >> 11u);
                    uint _4259 = _4256 ^ ((_4256 << 7u) & 2636928640u);
                    uint _4262 = _4259 ^ ((_4259 << 15u) & 4022730752u);
                    uint _4270 = (((_3567.x * 1664525u) + (_4262 ^ (_4262 >> 18u))) + 1013904223u) * 1664525u;
                    uint _4272 = _4270 ^ (_4270 >> 11u);
                    uint _4275 = _4272 ^ ((_4272 << 7u) & 2636928640u);
                    uint _4278 = _4275 ^ ((_4275 << 15u) & 4022730752u);
                    uint _4280 = _4278 ^ (_4278 >> 18u);
                    vec2 _3513 = _5517;
                    uint _4299;
                    uint _4318;
                    uint _5528 = 0u;
                    uint _5684 = _4280;
                    for (;;)
                    {
                        if (!(_5528 < 2u))
                        {
                            break;
                        }
                        uint _4310 = _5684 + (_5684 << 10u);
                        uint _4312 = _4310 ^ (_4310 >> 6u);
                        uint _4314 = _4312 + (_4312 << 3u);
                        uint _4316 = _4314 ^ (_4314 >> 11u);
                        _4318 = _4316 + (_4316 << 15u);
                        _3513[_5528] = uintBitsToFloat((_5684 & 8388607u) | 1065353216u) - 1.0;
                        _4299 = _5528 + 1u;
                        _5684 = _4318;
                        _5528 = _4299;
                        continue;
                    }
                    _3573 = _3513;
                    uvec3 _3575 = uvec3(_3518 + ivec3(1));
                    uint _4334 = _3575.z;
                    uint _4340 = _4334 + (_4334 << 10u);
                    uint _4342 = _4340 ^ (_4340 >> 6u);
                    uint _4344 = _4342 + (_4342 << 3u);
                    uint _4346 = _4344 ^ (_4344 >> 11u);
                    uint _4354 = (((_3575.y * 1664525u) + (_4346 + (_4346 << 15u))) + 1013904223u) * 1664525u;
                    uint _4356 = _4354 ^ (_4354 >> 11u);
                    uint _4359 = _4356 ^ ((_4356 << 7u) & 2636928640u);
                    uint _4362 = _4359 ^ ((_4359 << 15u) & 4022730752u);
                    uint _4370 = (((_3575.x * 1664525u) + (_4362 ^ (_4362 >> 18u))) + 1013904223u) * 1664525u;
                    uint _4372 = _4370 ^ (_4370 >> 11u);
                    uint _4375 = _4372 ^ ((_4372 << 7u) & 2636928640u);
                    uint _4378 = _4375 ^ ((_4375 << 15u) & 4022730752u);
                    uint _4380 = _4378 ^ (_4378 >> 18u);
                    vec2 _3514 = _5536;
                    uint _4399;
                    uint _4418;
                    uint _5547 = 0u;
                    uint _5683 = _4380;
                    for (;;)
                    {
                        if (!(_5547 < 2u))
                        {
                            break;
                        }
                        uint _4410 = _5683 + (_5683 << 10u);
                        uint _4412 = _4410 ^ (_4410 >> 6u);
                        uint _4414 = _4412 + (_4412 << 3u);
                        uint _4416 = _4414 ^ (_4414 >> 11u);
                        _4418 = _4416 + (_4416 << 15u);
                        _3514[_5547] = uintBitsToFloat((_5683 & 8388607u) | 1065353216u) - 1.0;
                        _4399 = _5547 + 1u;
                        _5683 = _4418;
                        _5547 = _4399;
                        continue;
                    }
                    _3580 = _3514;
                    vec3 _4430 = (_3519 * _3519) * (vec3(3.0) - (vec3(2.0) * _3519));
                    float _3583 = _4430.x;
                    float _3584 = 1.0 - _3583;
                    float _3586 = _4430.y;
                    float _3587 = 1.0 - _3586;
                    float _3589 = _4430.z;
                    float _3590 = 1.0 - _3589;
                    vec2 _3497 = clamp((((((((((((_3527 * _3584) * _3587) * _3590) + (((_3534 * _3583) * _3587) * _3590)) + (((_3542 * _3584) * _3586) * _3590)) + (((_3549 * _3583) * _3586) * _3590)) + (((_3558 * _3584) * _3587) * _3589)) + (((_3565 * _3583) * _3587) * _3589)) + (((_3573 * _3584) * _3586) * _3589)) + (((_3580 * _3583) * _3586) * _3589)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
                    vec3 _4437 = vs_out_frag_position_ws - (_3423 + (vec3(_3497.x, 0.0, _3497.y) * 0.0599999986588954925537109375));
                    float _4447 = dot(_4437, _3481);
                    bool _3169 = !((_3416.w & 1u) != 0u);
                    bool _5588;
                    if (_3169)
                    {
                        _5588 = _4447 <= (-0.5);
                    }
                    else
                    {
                        _5588 = false;
                    }
                    if (_5588)
                    {
                        break;
                    }
                    vec2 _3178 = vec3(dot(_4437, _3483), _4437.y, _4447).xy;
                    vec2 _4462 = uintBitsToFloat(_3420.xy) - _3431;
                    float _4478 = float(_3416.w >> 8u);
                    float _4472 = textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3((_3178 - _3431) / _4462, _4478), 0.0).x * 0.25;
                    float _3180 = _4472 - 0.008000000379979610443115234375;
                    if (_3180 >= 0.0)
                    {
                        break;
                    }
                    float _4487 = dot(_1948, _3481);
                    vec2 _3186 = vec3(dot(_1948, _3483), _1948.y, _4487).xy;
                    float _3187 = length(_3186);
                    float _3188 = max(_3187, 9.9999997473787516355514526367188e-05);
                    bool _5593;
                    if (_3153 > 9.9999997473787516355514526367188e-05)
                    {
                        _5593 = _4472 >= 0.0;
                    }
                    else
                    {
                        _5593 = false;
                    }
                    bool _5589;
                    if (_3169)
                    {
                        _5589 = _4487 < 0.0;
                    }
                    else
                    {
                        _5589 = false;
                    }
                    float _5599;
                    if (_5589)
                    {
                        _5599 = (_4447 + 0.5) / (-_4487);
                    }
                    else
                    {
                        _5599 = 3.4028234663852885981170418348452e+38;
                    }
                    float _5602;
                    if ((_3187 > 9.9999997473787516355514526367188e-05) ? true : _5593)
                    {
                        float _3272;
                        float _3278;
                        uint _3285;
                        float _5603;
                        uint _5594 = 0u;
                        float _5595 = 0.0;
                        float _5596 = _3180;
                        for (;;)
                        {
                            if (!(_5594 < 3u))
                            {
                                _5603 = _5595;
                                break;
                            }
                            float _3233 = _5595 + (max(-_5596, 0.0) / (_3188 - ((max(0.008000000379979610443115234375 - (_3153 * _5595), 0.0) * (-249.9999847412109375)) * _3153)));
                            float _4522 = max(0.008000000379979610443115234375 - (_3153 * _3233), 0.0);
                            float _3246 = _3233 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3178 + (_3186 * _3233)) - _3431) / _4462, _4478), 0.0).x * 0.25) - ((_4522 * _4522) * 124.99999237060546875)), 0.0) / (_3188 - ((_4522 * (-249.9999847412109375)) * _3153)));
                            float _4558 = max(0.008000000379979610443115234375 - (_3153 * _3246), 0.0);
                            float _3259 = _3246 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3178 + (_3186 * _3246)) - _3431) / _4462, _4478), 0.0).x * 0.25) - ((_4558 * _4558) * 124.99999237060546875)), 0.0) / (_3188 - ((_4558 * (-249.9999847412109375)) * _3153)));
                            float _4594 = max(0.008000000379979610443115234375 - (_3153 * _3259), 0.0);
                            _3272 = _3259 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3178 + (_3186 * _3259)) - _3431) / _4462, _4478), 0.0).x * 0.25) - ((_4594 * _4594) * 124.99999237060546875)), 0.0) / (_3188 - ((_4594 * (-249.9999847412109375)) * _3153)));
                            float _4630 = max(0.008000000379979610443115234375 - (_3153 * _3272), 0.0);
                            _3278 = (textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3178 + (_3186 * _3272)) - _3431) / _4462, _4478), 0.0).x * 0.25) - ((_4630 * _4630) * 124.99999237060546875);
                            if (_3278 >= (-0.001000000047497451305389404296875))
                            {
                                _5603 = _3272;
                                break;
                            }
                            _3285 = _5594 + 1u;
                            _5596 = _3278;
                            _5595 = _3272;
                            _5594 = _3285;
                            continue;
                        }
                        _5602 = _5603;
                    }
                    else
                    {
                        _5602 = 3.4028234663852885981170418348452e+38;
                    }
                    bool _3292 = _5602 <= min(_5599, _3116);
                    vec3 _5604;
                    vec3 _5622;
                    if (_3292)
                    {
                        vec2 _3296 = _3178 + (_3186 * _5602);
                        vec2 _3301 = _4462 * vec2(0.0078125);
                        float _4650 = textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3((_3296 - _3431) / _4462, _4478), 0.0).x * 0.25;
                        vec2 _3314 = vec2((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3296 + vec2(_3301.x, 0.0)) - _3431) / _4462, _4478), 0.0).x * 0.25) - _4650, (textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3296 + vec2(0.0, _3301.y)) - _3431) / _4462, _4478), 0.0).x * 0.25) - _4650) / _3301;
                        float _4710 = max(0.008000000379979610443115234375 - (_3153 * _5602), 0.0) * (-249.9999847412109375);
                        if ((dot(_3314, _3186) - (_4710 * _3153)) <= 0.0)
                        {
                            _5763 = true;
                            _5739 = false;
                            _5716 = vec3(0.0);
                            _5692 = vec3(0.0);
                            _5671 = true;
                            _5670 = false;
                            _5669 = vec3(0.0);
                            _5668 = vec3(0.0);
                            _3156_ladder_break = true;
                            break;
                        }
                        _5622 = vs_out_frag_position_ws + (_1948 * _5602);
                        _5604 = -normalize(((_3483 * _3314.x) + vec3(0.0, _3314.y, 0.0)) + (_152 * _4710));
                    }
                    else
                    {
                        _5622 = vec3(0.0);
                        _5604 = vec3(0.0);
                    }
                    bool _6277 = _3292 ? true : false;
                    _5763 = true;
                    _5739 = _6277;
                    _5716 = _5622;
                    _5692 = _5604;
                    _5671 = true;
                    _5670 = _6277;
                    _5669 = _5622;
                    _5668 = _5604;
                    _3156_ladder_break = true;
                    break;
                } while(false);
                if (_3156_ladder_break)
                {
                    break;
                }
                _3346 = _5423 + 1u;
                _5536 = _3580;
                _5517 = _3573;
                _5499 = _3565;
                _5482 = _3558;
                _5466 = _3549;
                _5451 = _3542;
                _5437 = _3534;
                _5424 = _3527;
                _5423 = _3346;
                continue;
            }
            if (_5671)
            {
                _5762 = _5763;
                _5738 = _5739;
                _5715 = _5716;
                _5691 = _5692;
                break;
            }
            _5762 = _5671;
            _5738 = _5670;
            _5715 = _5669;
            _5691 = _5668;
            break;
        } while(false);
        vec2 _5788;
        float _6209;
        if (_5762)
        {
            if (!_5738)
            {
                demote;
            }
            vec4 _4730 = (vec4(_5715, 1.0) * current_view.world_to_view) * current_view.view_to_sample;
            vec2 _5786;
            do
            {
                vec3 _4740 = abs(_5691);
                float _4742 = _4740.y;
                float _4743 = _4740.z;
                if (_4740.x > max(_4742, _4743))
                {
                    _5786 = _5715.zy * 0.4000000059604644775390625;
                    break;
                }
                else
                {
                    if (_4742 > _4743)
                    {
                        _5786 = _5715.xz * 0.4000000059604644775390625;
                        break;
                    }
                }
                _5786 = _5715.xy * 0.4000000059604644775390625;
                break;
            } while(false);
            _6209 = min((_4730.xyz / vec3(_4730.w)).z, gl_FragCoord.z);
            _5788 = _5786;
        }
        else
        {
            _6209 = gl_FragCoord.z;
            _5788 = vs_out_frag_uv;
        }
        bvec3 _6279 = bvec3(_5762);
        _6208 = _6209;
        _5814 = mix(_152, _5691, _6279);
        _5798 = mix(vs_out_frag_position_ws, _5715, _6279);
        _5789 = _5762 ? true : false;
        _5787 = _5788;
    }
    else
    {
        _6208 = gl_FragCoord.z;
        _5814 = _152;
        _5798 = vs_out_frag_position_ws;
        _5789 = false;
        _5787 = vs_out_frag_uv;
    }
    vec4 sampled = texture(sampler2DArray(wooden_wall_colors_tex, samplers_llr), vec3(_5787, float(int(wooden_wall_colors_ids_1._member0[vs_out_color_source]))), current_view.mip_bias);
    vec3 _1563 = sampled.xyz;
    int _5791;
    if (_5789)
    {
        _5791 = 0;
    }
    else
    {
        _5791 = vs_out_frag_is_bevel;
    }
    vec3 _1578 = mix(_1563, _1563 * 1.10000002384185791015625, vec3(ivec3(_5791)));
    vec4 sampled_1 = texture(sampler2D(material_data_wood_roughness, samplers_llr), _5787, current_view.mip_bias);
    uint _5793;
    if (uint(vs_out_color_source) == frame_constants.wall_highlighted_slot_id)
    {
        _5793 = frame_constants.wall_highlight_mode;
    }
    else
    {
        _5793 = 0u;
    }
    vec3 _5805;
    bool _6024;
    if (_5793 == 1u)
    {
        _6024 = true;
        _5805 = mix(_1578, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.5));
    }
    else
    {
        bool _4775 = _5793 == 2u;
        vec3 _5806;
        if (_4775)
        {
            _5806 = mix(_1578, vec3(0.5), vec3(0.100000001490116119384765625));
        }
        else
        {
            _5806 = _1578;
        }
        _6024 = _4775 ? true : false;
        _5805 = _5806;
    }
    bool _5800;
    if (frame_constants.highlight_bricks_to_delete == 1u)
    {
        _5800 = distance(frame_constants.brush_position.xz, _5798.xz) < ((1.88900005817413330078125 * frame_constants.eraser_size_multiplier) - 0.20000000298023223876953125);
    }
    else
    {
        _5800 = false;
    }
    vec3 _5803;
    if (_5800)
    {
        _5803 = mix(_1578, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.800000011920928955078125));
    }
    else
    {
        _5803 = _5805;
    }
    vec3 _6193;
    if (frame_constants.glade_theme_id == 4u)
    {
        _6193 = mix(_5803, vec3(0.699999988079071044921875), vec3(smoothstep(-0.100000001490116119384765625, 0.0, _5798.y) * smoothstep(0.5, 1.0, clamp(_5814.y, 0.0, 1.0))));
    }
    else
    {
        _6193 = _5803;
    }
    uvec2 _4819;
    vec3 _4830 = (_5814 * 0.5) + vec3(0.5);
    _4819.x = ((uint((clamp(_4830.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_4830.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_4830.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(mix(0.699999988079071044921875, 0.89999997615814208984375, smoothstep(0.89999997615814208984375, 1.0, sampled_1.x)), 0.0, 1.0) * 255.0) + 0.5) << uint(24));
    vec3 _4938 = sqrt(clamp(_6193, vec3(0.0), vec3(1.0)));
    uint _4953 = (uint((clamp(_4938.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_4938.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_4938.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    _4819.y = _4953;
    _4819.y = _4953 | ((7u | (uint(_5800 ? true : _6024) << 3u)) << 24u);
    entryPointParam_ps_main_gbuffer = _4819;
    gl_FragDepth = _6208;
}

