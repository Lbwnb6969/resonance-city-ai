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

vec2 _5395;
vec3 _5751;
bool _5796;
vec4 _6407;

struct _6419
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

layout(location = 7) in vec2 vs_out_frag_uv;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 0) in vec3 vs_out_frag_position_ws;
layout(location = 3) flat in uint vs_out_window_cut_list;
layout(location = 2) flat in uint vs_out_instance_index;
layout(location = 12) flat in int vs_out_is_freeform_wall;
layout(location = 8) flat in int vs_out_color_source;
layout(location = 6) flat in int vs_out_default_wood_color;
layout(location = 11) flat in int vs_out_source_is_color_id;
layout(location = 5) flat in int vs_out_frag_is_bevel;
layout(location = 10) flat in int vs_out_no_highlight;
layout(location = 13) flat in int vs_out_no_snow;
layout(location = 9) flat in int vs_out_is_less_snowy;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec3 _174 = normalize(vs_out_frag_normal_ws);
    uint _2030 = vs_out_window_cut_list >> 24u;
    vec2 _5837;
    bool _5844;
    vec3 _5859;
    vec3 _5881;
    float _6333;
    if (_2030 != 0u)
    {
        vec4 _2046 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
        vec3 _2037 = normalize(vs_out_frag_position_ws - (_2046.xyz / vec3(_2046.w)));
        mat3x4 _2093 = transpose(mat4x3(vec3(material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[0], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[1], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[2]), vec3(material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[3], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[4], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[5]), vec3(material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[6], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[7], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[8]), vec3(material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[9], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[10], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[11])));
        vec4 _2120 = _2093[0];
        vec4 _2127 = _2093[1];
        vec4 _2134 = _2093[2];
        mat3 _2144 = mat3(vec3(_2120.xyz), vec3(_2127.xyz), vec3(_2134.xyz));
        vec3 _2198 = vec3(1.0, 0.0, 0.0) * _2144;
        vec3 _2199 = vec3(0.0, 1.0, 0.0) * _2144;
        vec3 _2200 = vec3(0.0, 0.0, 1.0) * _2144;
        vec3 _2203 = cross(_2198, _2199);
        vec3 _2206 = vec3(1.0 / dot(_2200, _2203));
        vec3 _2207 = cross(_2199, _2200) * _2206;
        vec3 _2208 = cross(_2200, _2198) * _2206;
        vec3 _2209 = _2203 * _2206;
        vec3 _2154 = -(vec3(_2120.w, _2127.w, _2134.w) * mat3(_2207, _2208, _2209));
        mat3x4 _2117;
        _2117[0].x = _2207.x;
        _2117[0].y = _2207.y;
        _2117[0].z = _2207.z;
        _2117[0].w = _2154.x;
        _2117[1].x = _2208.x;
        _2117[1].y = _2208.y;
        _2117[1].z = _2208.z;
        _2117[1].w = _2154.y;
        _2117[2].x = _2209.x;
        _2117[2].y = _2209.y;
        _2117[2].z = _2209.z;
        _2117[2].w = _2154.z;
        vec3 _2213 = vs_out_frag_position_ws * 0.4000000059604644775390625;
        ivec3 _2239 = ivec3(floor(_2213));
        vec3 _2240 = fract(_2213);
        uvec3 _2241 = uvec3(_2239);
        uint _2355 = _2241.z;
        uint _2361 = _2355 + (_2355 << 10u);
        uint _2363 = _2361 ^ (_2361 >> 6u);
        uint _2365 = _2363 + (_2363 << 3u);
        uint _2367 = _2365 ^ (_2365 >> 11u);
        uint _2375 = (((_2241.y * 1664525u) + (_2367 + (_2367 << 15u))) + 1013904223u) * 1664525u;
        uint _2377 = _2375 ^ (_2375 >> 11u);
        uint _2380 = _2377 ^ ((_2377 << 7u) & 2636928640u);
        uint _2383 = _2380 ^ ((_2380 << 15u) & 4022730752u);
        uint _2391 = (((_2241.x * 1664525u) + (_2383 ^ (_2383 >> 18u))) + 1013904223u) * 1664525u;
        uint _2393 = _2391 ^ (_2391 >> 11u);
        uint _2396 = _2393 ^ ((_2393 << 7u) & 2636928640u);
        uint _2399 = _2396 ^ ((_2396 << 15u) & 4022730752u);
        uint _2401 = _2399 ^ (_2399 >> 18u);
        uint _2420;
        uint _2439;
        vec2 _2228;
        uint _5396 = 0u;
        uint _6348 = _2401;
        for (;;)
        {
            if (!(_5396 < 2u))
            {
                break;
            }
            uint _2431 = _6348 + (_6348 << 10u);
            uint _2433 = _2431 ^ (_2431 >> 6u);
            uint _2435 = _2433 + (_2433 << 3u);
            uint _2437 = _2435 ^ (_2435 >> 11u);
            _2439 = _2437 + (_2437 << 15u);
            _2228[_5396] = uintBitsToFloat((_6348 & 8388607u) | 1065353216u) - 1.0;
            _2420 = _5396 + 1u;
            _6348 = _2439;
            _5396 = _2420;
            continue;
        }
        uvec3 _2250 = uvec3(_2239 + ivec3(1, 0, 0));
        uint _2455 = _2250.z;
        uint _2461 = _2455 + (_2455 << 10u);
        uint _2463 = _2461 ^ (_2461 >> 6u);
        uint _2465 = _2463 + (_2463 << 3u);
        uint _2467 = _2465 ^ (_2465 >> 11u);
        uint _2475 = (((_2250.y * 1664525u) + (_2467 + (_2467 << 15u))) + 1013904223u) * 1664525u;
        uint _2477 = _2475 ^ (_2475 >> 11u);
        uint _2480 = _2477 ^ ((_2477 << 7u) & 2636928640u);
        uint _2483 = _2480 ^ ((_2480 << 15u) & 4022730752u);
        uint _2491 = (((_2250.x * 1664525u) + (_2483 ^ (_2483 >> 18u))) + 1013904223u) * 1664525u;
        uint _2493 = _2491 ^ (_2491 >> 11u);
        uint _2496 = _2493 ^ ((_2493 << 7u) & 2636928640u);
        uint _2499 = _2496 ^ ((_2496 << 15u) & 4022730752u);
        uint _2501 = _2499 ^ (_2499 >> 18u);
        uint _2520;
        uint _2539;
        vec2 _2229;
        uint _5399 = 0u;
        uint _6347 = _2501;
        for (;;)
        {
            if (!(_5399 < 2u))
            {
                break;
            }
            uint _2531 = _6347 + (_6347 << 10u);
            uint _2533 = _2531 ^ (_2531 >> 6u);
            uint _2535 = _2533 + (_2533 << 3u);
            uint _2537 = _2535 ^ (_2535 >> 11u);
            _2539 = _2537 + (_2537 << 15u);
            _2229[_5399] = uintBitsToFloat((_6347 & 8388607u) | 1065353216u) - 1.0;
            _2520 = _5399 + 1u;
            _6347 = _2539;
            _5399 = _2520;
            continue;
        }
        uvec3 _2257 = uvec3(_2239 + ivec3(0, 1, 0));
        uint _2555 = _2257.z;
        uint _2561 = _2555 + (_2555 << 10u);
        uint _2563 = _2561 ^ (_2561 >> 6u);
        uint _2565 = _2563 + (_2563 << 3u);
        uint _2567 = _2565 ^ (_2565 >> 11u);
        uint _2575 = (((_2257.y * 1664525u) + (_2567 + (_2567 << 15u))) + 1013904223u) * 1664525u;
        uint _2577 = _2575 ^ (_2575 >> 11u);
        uint _2580 = _2577 ^ ((_2577 << 7u) & 2636928640u);
        uint _2583 = _2580 ^ ((_2580 << 15u) & 4022730752u);
        uint _2591 = (((_2257.x * 1664525u) + (_2583 ^ (_2583 >> 18u))) + 1013904223u) * 1664525u;
        uint _2593 = _2591 ^ (_2591 >> 11u);
        uint _2596 = _2593 ^ ((_2593 << 7u) & 2636928640u);
        uint _2599 = _2596 ^ ((_2596 << 15u) & 4022730752u);
        uint _2601 = _2599 ^ (_2599 >> 18u);
        uint _2620;
        uint _2639;
        vec2 _2230;
        uint _5403 = 0u;
        uint _6346 = _2601;
        for (;;)
        {
            if (!(_5403 < 2u))
            {
                break;
            }
            uint _2631 = _6346 + (_6346 << 10u);
            uint _2633 = _2631 ^ (_2631 >> 6u);
            uint _2635 = _2633 + (_2633 << 3u);
            uint _2637 = _2635 ^ (_2635 >> 11u);
            _2639 = _2637 + (_2637 << 15u);
            _2230[_5403] = uintBitsToFloat((_6346 & 8388607u) | 1065353216u) - 1.0;
            _2620 = _5403 + 1u;
            _6346 = _2639;
            _5403 = _2620;
            continue;
        }
        uvec3 _2265 = uvec3(_2239 + ivec3(1, 1, 0));
        uint _2655 = _2265.z;
        uint _2661 = _2655 + (_2655 << 10u);
        uint _2663 = _2661 ^ (_2661 >> 6u);
        uint _2665 = _2663 + (_2663 << 3u);
        uint _2667 = _2665 ^ (_2665 >> 11u);
        uint _2675 = (((_2265.y * 1664525u) + (_2667 + (_2667 << 15u))) + 1013904223u) * 1664525u;
        uint _2677 = _2675 ^ (_2675 >> 11u);
        uint _2680 = _2677 ^ ((_2677 << 7u) & 2636928640u);
        uint _2683 = _2680 ^ ((_2680 << 15u) & 4022730752u);
        uint _2691 = (((_2265.x * 1664525u) + (_2683 ^ (_2683 >> 18u))) + 1013904223u) * 1664525u;
        uint _2693 = _2691 ^ (_2691 >> 11u);
        uint _2696 = _2693 ^ ((_2693 << 7u) & 2636928640u);
        uint _2699 = _2696 ^ ((_2696 << 15u) & 4022730752u);
        uint _2701 = _2699 ^ (_2699 >> 18u);
        uint _2720;
        uint _2739;
        vec2 _2231;
        uint _5408 = 0u;
        uint _6345 = _2701;
        for (;;)
        {
            if (!(_5408 < 2u))
            {
                break;
            }
            uint _2731 = _6345 + (_6345 << 10u);
            uint _2733 = _2731 ^ (_2731 >> 6u);
            uint _2735 = _2733 + (_2733 << 3u);
            uint _2737 = _2735 ^ (_2735 >> 11u);
            _2739 = _2737 + (_2737 << 15u);
            _2231[_5408] = uintBitsToFloat((_6345 & 8388607u) | 1065353216u) - 1.0;
            _2720 = _5408 + 1u;
            _6345 = _2739;
            _5408 = _2720;
            continue;
        }
        uvec3 _2272 = uvec3(_2239 + ivec3(0, 0, 1));
        uint _2755 = _2272.z;
        uint _2761 = _2755 + (_2755 << 10u);
        uint _2763 = _2761 ^ (_2761 >> 6u);
        uint _2765 = _2763 + (_2763 << 3u);
        uint _2767 = _2765 ^ (_2765 >> 11u);
        uint _2775 = (((_2272.y * 1664525u) + (_2767 + (_2767 << 15u))) + 1013904223u) * 1664525u;
        uint _2777 = _2775 ^ (_2775 >> 11u);
        uint _2780 = _2777 ^ ((_2777 << 7u) & 2636928640u);
        uint _2783 = _2780 ^ ((_2780 << 15u) & 4022730752u);
        uint _2791 = (((_2272.x * 1664525u) + (_2783 ^ (_2783 >> 18u))) + 1013904223u) * 1664525u;
        uint _2793 = _2791 ^ (_2791 >> 11u);
        uint _2796 = _2793 ^ ((_2793 << 7u) & 2636928640u);
        uint _2799 = _2796 ^ ((_2796 << 15u) & 4022730752u);
        uint _2801 = _2799 ^ (_2799 >> 18u);
        uint _2820;
        uint _2839;
        vec2 _2232;
        uint _5414 = 0u;
        uint _6344 = _2801;
        for (;;)
        {
            if (!(_5414 < 2u))
            {
                break;
            }
            uint _2831 = _6344 + (_6344 << 10u);
            uint _2833 = _2831 ^ (_2831 >> 6u);
            uint _2835 = _2833 + (_2833 << 3u);
            uint _2837 = _2835 ^ (_2835 >> 11u);
            _2839 = _2837 + (_2837 << 15u);
            _2232[_5414] = uintBitsToFloat((_6344 & 8388607u) | 1065353216u) - 1.0;
            _2820 = _5414 + 1u;
            _6344 = _2839;
            _5414 = _2820;
            continue;
        }
        uvec3 _2281 = uvec3(_2239 + ivec3(1, 0, 1));
        uint _2855 = _2281.z;
        uint _2861 = _2855 + (_2855 << 10u);
        uint _2863 = _2861 ^ (_2861 >> 6u);
        uint _2865 = _2863 + (_2863 << 3u);
        uint _2867 = _2865 ^ (_2865 >> 11u);
        uint _2875 = (((_2281.y * 1664525u) + (_2867 + (_2867 << 15u))) + 1013904223u) * 1664525u;
        uint _2877 = _2875 ^ (_2875 >> 11u);
        uint _2880 = _2877 ^ ((_2877 << 7u) & 2636928640u);
        uint _2883 = _2880 ^ ((_2880 << 15u) & 4022730752u);
        uint _2891 = (((_2281.x * 1664525u) + (_2883 ^ (_2883 >> 18u))) + 1013904223u) * 1664525u;
        uint _2893 = _2891 ^ (_2891 >> 11u);
        uint _2896 = _2893 ^ ((_2893 << 7u) & 2636928640u);
        uint _2899 = _2896 ^ ((_2896 << 15u) & 4022730752u);
        uint _2901 = _2899 ^ (_2899 >> 18u);
        uint _2920;
        uint _2939;
        vec2 _2233;
        uint _5421 = 0u;
        uint _6343 = _2901;
        for (;;)
        {
            if (!(_5421 < 2u))
            {
                break;
            }
            uint _2931 = _6343 + (_6343 << 10u);
            uint _2933 = _2931 ^ (_2931 >> 6u);
            uint _2935 = _2933 + (_2933 << 3u);
            uint _2937 = _2935 ^ (_2935 >> 11u);
            _2939 = _2937 + (_2937 << 15u);
            _2233[_5421] = uintBitsToFloat((_6343 & 8388607u) | 1065353216u) - 1.0;
            _2920 = _5421 + 1u;
            _6343 = _2939;
            _5421 = _2920;
            continue;
        }
        uvec3 _2288 = uvec3(_2239 + ivec3(0, 1, 1));
        uint _2955 = _2288.z;
        uint _2961 = _2955 + (_2955 << 10u);
        uint _2963 = _2961 ^ (_2961 >> 6u);
        uint _2965 = _2963 + (_2963 << 3u);
        uint _2967 = _2965 ^ (_2965 >> 11u);
        uint _2975 = (((_2288.y * 1664525u) + (_2967 + (_2967 << 15u))) + 1013904223u) * 1664525u;
        uint _2977 = _2975 ^ (_2975 >> 11u);
        uint _2980 = _2977 ^ ((_2977 << 7u) & 2636928640u);
        uint _2983 = _2980 ^ ((_2980 << 15u) & 4022730752u);
        uint _2991 = (((_2288.x * 1664525u) + (_2983 ^ (_2983 >> 18u))) + 1013904223u) * 1664525u;
        uint _2993 = _2991 ^ (_2991 >> 11u);
        uint _2996 = _2993 ^ ((_2993 << 7u) & 2636928640u);
        uint _2999 = _2996 ^ ((_2996 << 15u) & 4022730752u);
        uint _3001 = _2999 ^ (_2999 >> 18u);
        uint _3020;
        uint _3039;
        vec2 _2234;
        uint _5429 = 0u;
        uint _6342 = _3001;
        for (;;)
        {
            if (!(_5429 < 2u))
            {
                break;
            }
            uint _3031 = _6342 + (_6342 << 10u);
            uint _3033 = _3031 ^ (_3031 >> 6u);
            uint _3035 = _3033 + (_3033 << 3u);
            uint _3037 = _3035 ^ (_3035 >> 11u);
            _3039 = _3037 + (_3037 << 15u);
            _2234[_5429] = uintBitsToFloat((_6342 & 8388607u) | 1065353216u) - 1.0;
            _3020 = _5429 + 1u;
            _6342 = _3039;
            _5429 = _3020;
            continue;
        }
        uvec3 _2296 = uvec3(_2239 + ivec3(1));
        uint _3055 = _2296.z;
        uint _3061 = _3055 + (_3055 << 10u);
        uint _3063 = _3061 ^ (_3061 >> 6u);
        uint _3065 = _3063 + (_3063 << 3u);
        uint _3067 = _3065 ^ (_3065 >> 11u);
        uint _3075 = (((_2296.y * 1664525u) + (_3067 + (_3067 << 15u))) + 1013904223u) * 1664525u;
        uint _3077 = _3075 ^ (_3075 >> 11u);
        uint _3080 = _3077 ^ ((_3077 << 7u) & 2636928640u);
        uint _3083 = _3080 ^ ((_3080 << 15u) & 4022730752u);
        uint _3091 = (((_2296.x * 1664525u) + (_3083 ^ (_3083 >> 18u))) + 1013904223u) * 1664525u;
        uint _3093 = _3091 ^ (_3091 >> 11u);
        uint _3096 = _3093 ^ ((_3093 << 7u) & 2636928640u);
        uint _3099 = _3096 ^ ((_3096 << 15u) & 4022730752u);
        uint _3101 = _3099 ^ (_3099 >> 18u);
        uint _3120;
        uint _3139;
        vec2 _2235;
        uint _5438 = 0u;
        uint _6341 = _3101;
        for (;;)
        {
            if (!(_5438 < 2u))
            {
                break;
            }
            uint _3131 = _6341 + (_6341 << 10u);
            uint _3133 = _3131 ^ (_3131 >> 6u);
            uint _3135 = _3133 + (_3133 << 3u);
            uint _3137 = _3135 ^ (_3135 >> 11u);
            _3139 = _3137 + (_3137 << 15u);
            _2235[_5438] = uintBitsToFloat((_6341 & 8388607u) | 1065353216u) - 1.0;
            _3120 = _5438 + 1u;
            _6341 = _3139;
            _5438 = _3120;
            continue;
        }
        vec3 _3151 = (_2240 * _2240) * (vec3(3.0) - (vec3(2.0) * _2240));
        float _2304 = _3151.x;
        float _2305 = 1.0 - _2304;
        float _2307 = _3151.y;
        float _2308 = 1.0 - _2307;
        float _2310 = _3151.z;
        float _2311 = 1.0 - _2310;
        vec2 _2218 = clamp((((((((((((_2228 * _2305) * _2308) * _2311) + (((_2229 * _2304) * _2308) * _2311)) + (((_2230 * _2305) * _2307) * _2311)) + (((_2231 * _2304) * _2307) * _2311)) + (((_2232 * _2305) * _2308) * _2310)) + (((_2233 * _2304) * _2308) * _2310)) + (((_2234 * _2305) * _2307) * _2310)) + (((_2235 * _2304) * _2307) * _2310)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
        vec3 _2114 = _2037 * mat3(_2117[0].xyz, _2117[1].xyz, _2117[2].xyz);
        vec3 _3160 = (vec4(vs_out_frag_position_ws - (vec3(_2218.x, 0.0, _2218.y) * 0.0599999986588954925537109375), 1.0) * _2117).xyz;
        vec3 _3169 = max((vec3(0.5, 1.0, 0.5) - _3160) / _2114, (vec3(-0.5, 0.0, -0.5) - _3160) / _2114);
        float _3181 = min(min(_3169.x, _3169.y), _3169.z);
        vec3 _5739;
        vec3 _5762;
        bool _5784;
        bool _5807;
        do
        {
            if (all(equal(material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address, uvec2(0u))))
            {
                _5807 = false;
                _5784 = false;
                _5762 = vec3(0.0);
                _5739 = vec3(0.0);
                break;
            }
            uint _3432 = vs_out_window_cut_list & 16777215u;
            float _3218 = max(-dot(_2037, _174), 0.0);
            vec2 _5480;
            vec2 _5492;
            vec2 _5505;
            vec2 _5519;
            vec2 _5534;
            vec2 _5550;
            vec2 _5567;
            vec2 _5585;
            _5585 = _5395;
            _5567 = _5395;
            _5550 = _5395;
            _5534 = _5395;
            _5519 = _5395;
            _5505 = _5395;
            _5492 = _5395;
            _5480 = _5395;
            uint _3411;
            vec2 _3592;
            vec2 _3599;
            vec2 _3607;
            vec2 _3614;
            vec2 _3623;
            vec2 _3630;
            vec2 _3638;
            vec2 _3645;
            vec3 _5716;
            vec3 _5717;
            bool _5718;
            bool _5719;
            vec3 _5740;
            vec3 _5763;
            bool _5785;
            bool _5808;
            uint _5479 = 0u;
            for (;;)
            {
                bool _3221_ladder_break = false;
                do
                {
                    if (!(_5479 < _2030))
                    {
                        _5808 = _5796;
                        _5785 = _5796;
                        _5763 = _5751;
                        _5740 = _5751;
                        _5719 = false;
                        _5718 = false;
                        _5717 = vec3(0.0);
                        _5716 = vec3(0.0);
                        _3221_ladder_break = true;
                        break;
                    }
                    uint _3451 = material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x + (4u * (_3432 + _5479));
                    uvec2 _6420 = uvec2(uintPointer(uvec2(_3451, material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.y + uint(_3451 < material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x))));
                    uint _6421 = _6420.x;
                    _6419 _6423;
                    imulExtended(0, 4, _6423._m1, _6423._m0);
                    uint _6428 = _6421 + uint(_6423._m0);
                    uint _3438 = uintPointer(uvec2(_6428, (_6420.y + uint(_6423._m1)) + uint(_6428 < _6421))).value;
                    uint _3513 = material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x + (48u * _3438);
                    uvec4Pointer _3536 = uvec4Pointer(uvec2(_3513, material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.y + uint(_3513 < material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x)));
                    uvec2 _6434 = uvec2(_3536);
                    uint _6435 = _6434.x;
                    _6419 _6437;
                    imulExtended(0, 16, _6437._m1, _6437._m0);
                    uint _6442 = _6435 + uint(_6437._m0);
                    uvec4 _3481 = uvec4Pointer(uvec2(_6442, (_6434.y + uint(_6437._m1)) + uint(_6442 < _6435))).value;
                    uvec2 _6448 = uvec2(_3536);
                    uint _6449 = _6448.x;
                    _6419 _6451;
                    imulExtended(1, 16, _6451._m1, _6451._m0);
                    uint _6456 = _6449 + uint(_6451._m0);
                    uvec4 _3483 = uvec4Pointer(uvec2(_6456, (_6448.y + uint(_6451._m1)) + uint(_6456 < _6449))).value;
                    uvec2 _6462 = uvec2(_3536);
                    uint _6463 = _6462.x;
                    _6419 _6465;
                    imulExtended(2, 16, _6465._m1, _6465._m0);
                    uint _6470 = _6463 + uint(_6465._m0);
                    uvec4 _3485 = uvec4Pointer(uvec2(_6470, (_6462.y + uint(_6465._m1)) + uint(_6470 < _6463))).value;
                    vec3 _3488 = uintBitsToFloat(_3481.xyz);
                    vec2 _3493 = uintBitsToFloat(_3483.xy);
                    vec2 _3496 = uintBitsToFloat(_3483.zw);
                    vec3 _3546 = normalize(vec3(_3493.x, 0.0, _3493.y));
                    vec3 _3548 = cross(vec3(0.0, 1.0, 0.0), _3546);
                    vec3 _3557 = _3488 * 0.4000000059604644775390625;
                    ivec3 _3583 = ivec3(floor(_3557));
                    vec3 _3584 = fract(_3557);
                    uvec3 _3585 = uvec3(_3583);
                    uint _3699 = _3585.z;
                    uint _3705 = _3699 + (_3699 << 10u);
                    uint _3707 = _3705 ^ (_3705 >> 6u);
                    uint _3709 = _3707 + (_3707 << 3u);
                    uint _3711 = _3709 ^ (_3709 >> 11u);
                    uint _3719 = (((_3585.y * 1664525u) + (_3711 + (_3711 << 15u))) + 1013904223u) * 1664525u;
                    uint _3721 = _3719 ^ (_3719 >> 11u);
                    uint _3724 = _3721 ^ ((_3721 << 7u) & 2636928640u);
                    uint _3727 = _3724 ^ ((_3724 << 15u) & 4022730752u);
                    uint _3735 = (((_3585.x * 1664525u) + (_3727 ^ (_3727 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3737 = _3735 ^ (_3735 >> 11u);
                    uint _3740 = _3737 ^ ((_3737 << 7u) & 2636928640u);
                    uint _3743 = _3740 ^ ((_3740 << 15u) & 4022730752u);
                    uint _3745 = _3743 ^ (_3743 >> 18u);
                    vec2 _3572 = _5480;
                    uint _3764;
                    uint _3783;
                    uint _5490 = 0u;
                    uint _5738 = _3745;
                    for (;;)
                    {
                        if (!(_5490 < 2u))
                        {
                            break;
                        }
                        uint _3775 = _5738 + (_5738 << 10u);
                        uint _3777 = _3775 ^ (_3775 >> 6u);
                        uint _3779 = _3777 + (_3777 << 3u);
                        uint _3781 = _3779 ^ (_3779 >> 11u);
                        _3783 = _3781 + (_3781 << 15u);
                        _3572[_5490] = uintBitsToFloat((_5738 & 8388607u) | 1065353216u) - 1.0;
                        _3764 = _5490 + 1u;
                        _5738 = _3783;
                        _5490 = _3764;
                        continue;
                    }
                    _3592 = _3572;
                    uvec3 _3594 = uvec3(_3583 + ivec3(1, 0, 0));
                    uint _3799 = _3594.z;
                    uint _3805 = _3799 + (_3799 << 10u);
                    uint _3807 = _3805 ^ (_3805 >> 6u);
                    uint _3809 = _3807 + (_3807 << 3u);
                    uint _3811 = _3809 ^ (_3809 >> 11u);
                    uint _3819 = (((_3594.y * 1664525u) + (_3811 + (_3811 << 15u))) + 1013904223u) * 1664525u;
                    uint _3821 = _3819 ^ (_3819 >> 11u);
                    uint _3824 = _3821 ^ ((_3821 << 7u) & 2636928640u);
                    uint _3827 = _3824 ^ ((_3824 << 15u) & 4022730752u);
                    uint _3835 = (((_3594.x * 1664525u) + (_3827 ^ (_3827 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3837 = _3835 ^ (_3835 >> 11u);
                    uint _3840 = _3837 ^ ((_3837 << 7u) & 2636928640u);
                    uint _3843 = _3840 ^ ((_3840 << 15u) & 4022730752u);
                    uint _3845 = _3843 ^ (_3843 >> 18u);
                    vec2 _3573 = _5492;
                    uint _3864;
                    uint _3883;
                    uint _5502 = 0u;
                    uint _5737 = _3845;
                    for (;;)
                    {
                        if (!(_5502 < 2u))
                        {
                            break;
                        }
                        uint _3875 = _5737 + (_5737 << 10u);
                        uint _3877 = _3875 ^ (_3875 >> 6u);
                        uint _3879 = _3877 + (_3877 << 3u);
                        uint _3881 = _3879 ^ (_3879 >> 11u);
                        _3883 = _3881 + (_3881 << 15u);
                        _3573[_5502] = uintBitsToFloat((_5737 & 8388607u) | 1065353216u) - 1.0;
                        _3864 = _5502 + 1u;
                        _5737 = _3883;
                        _5502 = _3864;
                        continue;
                    }
                    _3599 = _3573;
                    uvec3 _3601 = uvec3(_3583 + ivec3(0, 1, 0));
                    uint _3899 = _3601.z;
                    uint _3905 = _3899 + (_3899 << 10u);
                    uint _3907 = _3905 ^ (_3905 >> 6u);
                    uint _3909 = _3907 + (_3907 << 3u);
                    uint _3911 = _3909 ^ (_3909 >> 11u);
                    uint _3919 = (((_3601.y * 1664525u) + (_3911 + (_3911 << 15u))) + 1013904223u) * 1664525u;
                    uint _3921 = _3919 ^ (_3919 >> 11u);
                    uint _3924 = _3921 ^ ((_3921 << 7u) & 2636928640u);
                    uint _3927 = _3924 ^ ((_3924 << 15u) & 4022730752u);
                    uint _3935 = (((_3601.x * 1664525u) + (_3927 ^ (_3927 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3937 = _3935 ^ (_3935 >> 11u);
                    uint _3940 = _3937 ^ ((_3937 << 7u) & 2636928640u);
                    uint _3943 = _3940 ^ ((_3940 << 15u) & 4022730752u);
                    uint _3945 = _3943 ^ (_3943 >> 18u);
                    vec2 _3574 = _5505;
                    uint _3964;
                    uint _3983;
                    uint _5515 = 0u;
                    uint _5736 = _3945;
                    for (;;)
                    {
                        if (!(_5515 < 2u))
                        {
                            break;
                        }
                        uint _3975 = _5736 + (_5736 << 10u);
                        uint _3977 = _3975 ^ (_3975 >> 6u);
                        uint _3979 = _3977 + (_3977 << 3u);
                        uint _3981 = _3979 ^ (_3979 >> 11u);
                        _3983 = _3981 + (_3981 << 15u);
                        _3574[_5515] = uintBitsToFloat((_5736 & 8388607u) | 1065353216u) - 1.0;
                        _3964 = _5515 + 1u;
                        _5736 = _3983;
                        _5515 = _3964;
                        continue;
                    }
                    _3607 = _3574;
                    uvec3 _3609 = uvec3(_3583 + ivec3(1, 1, 0));
                    uint _3999 = _3609.z;
                    uint _4005 = _3999 + (_3999 << 10u);
                    uint _4007 = _4005 ^ (_4005 >> 6u);
                    uint _4009 = _4007 + (_4007 << 3u);
                    uint _4011 = _4009 ^ (_4009 >> 11u);
                    uint _4019 = (((_3609.y * 1664525u) + (_4011 + (_4011 << 15u))) + 1013904223u) * 1664525u;
                    uint _4021 = _4019 ^ (_4019 >> 11u);
                    uint _4024 = _4021 ^ ((_4021 << 7u) & 2636928640u);
                    uint _4027 = _4024 ^ ((_4024 << 15u) & 4022730752u);
                    uint _4035 = (((_3609.x * 1664525u) + (_4027 ^ (_4027 >> 18u))) + 1013904223u) * 1664525u;
                    uint _4037 = _4035 ^ (_4035 >> 11u);
                    uint _4040 = _4037 ^ ((_4037 << 7u) & 2636928640u);
                    uint _4043 = _4040 ^ ((_4040 << 15u) & 4022730752u);
                    uint _4045 = _4043 ^ (_4043 >> 18u);
                    vec2 _3575 = _5519;
                    uint _4064;
                    uint _4083;
                    uint _5529 = 0u;
                    uint _5735 = _4045;
                    for (;;)
                    {
                        if (!(_5529 < 2u))
                        {
                            break;
                        }
                        uint _4075 = _5735 + (_5735 << 10u);
                        uint _4077 = _4075 ^ (_4075 >> 6u);
                        uint _4079 = _4077 + (_4077 << 3u);
                        uint _4081 = _4079 ^ (_4079 >> 11u);
                        _4083 = _4081 + (_4081 << 15u);
                        _3575[_5529] = uintBitsToFloat((_5735 & 8388607u) | 1065353216u) - 1.0;
                        _4064 = _5529 + 1u;
                        _5735 = _4083;
                        _5529 = _4064;
                        continue;
                    }
                    _3614 = _3575;
                    uvec3 _3616 = uvec3(_3583 + ivec3(0, 0, 1));
                    uint _4099 = _3616.z;
                    uint _4105 = _4099 + (_4099 << 10u);
                    uint _4107 = _4105 ^ (_4105 >> 6u);
                    uint _4109 = _4107 + (_4107 << 3u);
                    uint _4111 = _4109 ^ (_4109 >> 11u);
                    uint _4119 = (((_3616.y * 1664525u) + (_4111 + (_4111 << 15u))) + 1013904223u) * 1664525u;
                    uint _4121 = _4119 ^ (_4119 >> 11u);
                    uint _4124 = _4121 ^ ((_4121 << 7u) & 2636928640u);
                    uint _4127 = _4124 ^ ((_4124 << 15u) & 4022730752u);
                    uint _4135 = (((_3616.x * 1664525u) + (_4127 ^ (_4127 >> 18u))) + 1013904223u) * 1664525u;
                    uint _4137 = _4135 ^ (_4135 >> 11u);
                    uint _4140 = _4137 ^ ((_4137 << 7u) & 2636928640u);
                    uint _4143 = _4140 ^ ((_4140 << 15u) & 4022730752u);
                    uint _4145 = _4143 ^ (_4143 >> 18u);
                    vec2 _3576 = _5534;
                    uint _4164;
                    uint _4183;
                    uint _5544 = 0u;
                    uint _5734 = _4145;
                    for (;;)
                    {
                        if (!(_5544 < 2u))
                        {
                            break;
                        }
                        uint _4175 = _5734 + (_5734 << 10u);
                        uint _4177 = _4175 ^ (_4175 >> 6u);
                        uint _4179 = _4177 + (_4177 << 3u);
                        uint _4181 = _4179 ^ (_4179 >> 11u);
                        _4183 = _4181 + (_4181 << 15u);
                        _3576[_5544] = uintBitsToFloat((_5734 & 8388607u) | 1065353216u) - 1.0;
                        _4164 = _5544 + 1u;
                        _5734 = _4183;
                        _5544 = _4164;
                        continue;
                    }
                    _3623 = _3576;
                    uvec3 _3625 = uvec3(_3583 + ivec3(1, 0, 1));
                    uint _4199 = _3625.z;
                    uint _4205 = _4199 + (_4199 << 10u);
                    uint _4207 = _4205 ^ (_4205 >> 6u);
                    uint _4209 = _4207 + (_4207 << 3u);
                    uint _4211 = _4209 ^ (_4209 >> 11u);
                    uint _4219 = (((_3625.y * 1664525u) + (_4211 + (_4211 << 15u))) + 1013904223u) * 1664525u;
                    uint _4221 = _4219 ^ (_4219 >> 11u);
                    uint _4224 = _4221 ^ ((_4221 << 7u) & 2636928640u);
                    uint _4227 = _4224 ^ ((_4224 << 15u) & 4022730752u);
                    uint _4235 = (((_3625.x * 1664525u) + (_4227 ^ (_4227 >> 18u))) + 1013904223u) * 1664525u;
                    uint _4237 = _4235 ^ (_4235 >> 11u);
                    uint _4240 = _4237 ^ ((_4237 << 7u) & 2636928640u);
                    uint _4243 = _4240 ^ ((_4240 << 15u) & 4022730752u);
                    uint _4245 = _4243 ^ (_4243 >> 18u);
                    vec2 _3577 = _5550;
                    uint _4264;
                    uint _4283;
                    uint _5560 = 0u;
                    uint _5733 = _4245;
                    for (;;)
                    {
                        if (!(_5560 < 2u))
                        {
                            break;
                        }
                        uint _4275 = _5733 + (_5733 << 10u);
                        uint _4277 = _4275 ^ (_4275 >> 6u);
                        uint _4279 = _4277 + (_4277 << 3u);
                        uint _4281 = _4279 ^ (_4279 >> 11u);
                        _4283 = _4281 + (_4281 << 15u);
                        _3577[_5560] = uintBitsToFloat((_5733 & 8388607u) | 1065353216u) - 1.0;
                        _4264 = _5560 + 1u;
                        _5733 = _4283;
                        _5560 = _4264;
                        continue;
                    }
                    _3630 = _3577;
                    uvec3 _3632 = uvec3(_3583 + ivec3(0, 1, 1));
                    uint _4299 = _3632.z;
                    uint _4305 = _4299 + (_4299 << 10u);
                    uint _4307 = _4305 ^ (_4305 >> 6u);
                    uint _4309 = _4307 + (_4307 << 3u);
                    uint _4311 = _4309 ^ (_4309 >> 11u);
                    uint _4319 = (((_3632.y * 1664525u) + (_4311 + (_4311 << 15u))) + 1013904223u) * 1664525u;
                    uint _4321 = _4319 ^ (_4319 >> 11u);
                    uint _4324 = _4321 ^ ((_4321 << 7u) & 2636928640u);
                    uint _4327 = _4324 ^ ((_4324 << 15u) & 4022730752u);
                    uint _4335 = (((_3632.x * 1664525u) + (_4327 ^ (_4327 >> 18u))) + 1013904223u) * 1664525u;
                    uint _4337 = _4335 ^ (_4335 >> 11u);
                    uint _4340 = _4337 ^ ((_4337 << 7u) & 2636928640u);
                    uint _4343 = _4340 ^ ((_4340 << 15u) & 4022730752u);
                    uint _4345 = _4343 ^ (_4343 >> 18u);
                    vec2 _3578 = _5567;
                    uint _4364;
                    uint _4383;
                    uint _5577 = 0u;
                    uint _5732 = _4345;
                    for (;;)
                    {
                        if (!(_5577 < 2u))
                        {
                            break;
                        }
                        uint _4375 = _5732 + (_5732 << 10u);
                        uint _4377 = _4375 ^ (_4375 >> 6u);
                        uint _4379 = _4377 + (_4377 << 3u);
                        uint _4381 = _4379 ^ (_4379 >> 11u);
                        _4383 = _4381 + (_4381 << 15u);
                        _3578[_5577] = uintBitsToFloat((_5732 & 8388607u) | 1065353216u) - 1.0;
                        _4364 = _5577 + 1u;
                        _5732 = _4383;
                        _5577 = _4364;
                        continue;
                    }
                    _3638 = _3578;
                    uvec3 _3640 = uvec3(_3583 + ivec3(1));
                    uint _4399 = _3640.z;
                    uint _4405 = _4399 + (_4399 << 10u);
                    uint _4407 = _4405 ^ (_4405 >> 6u);
                    uint _4409 = _4407 + (_4407 << 3u);
                    uint _4411 = _4409 ^ (_4409 >> 11u);
                    uint _4419 = (((_3640.y * 1664525u) + (_4411 + (_4411 << 15u))) + 1013904223u) * 1664525u;
                    uint _4421 = _4419 ^ (_4419 >> 11u);
                    uint _4424 = _4421 ^ ((_4421 << 7u) & 2636928640u);
                    uint _4427 = _4424 ^ ((_4424 << 15u) & 4022730752u);
                    uint _4435 = (((_3640.x * 1664525u) + (_4427 ^ (_4427 >> 18u))) + 1013904223u) * 1664525u;
                    uint _4437 = _4435 ^ (_4435 >> 11u);
                    uint _4440 = _4437 ^ ((_4437 << 7u) & 2636928640u);
                    uint _4443 = _4440 ^ ((_4440 << 15u) & 4022730752u);
                    uint _4445 = _4443 ^ (_4443 >> 18u);
                    vec2 _3579 = _5585;
                    uint _4464;
                    uint _4483;
                    uint _5595 = 0u;
                    uint _5731 = _4445;
                    for (;;)
                    {
                        if (!(_5595 < 2u))
                        {
                            break;
                        }
                        uint _4475 = _5731 + (_5731 << 10u);
                        uint _4477 = _4475 ^ (_4475 >> 6u);
                        uint _4479 = _4477 + (_4477 << 3u);
                        uint _4481 = _4479 ^ (_4479 >> 11u);
                        _4483 = _4481 + (_4481 << 15u);
                        _3579[_5595] = uintBitsToFloat((_5731 & 8388607u) | 1065353216u) - 1.0;
                        _4464 = _5595 + 1u;
                        _5731 = _4483;
                        _5595 = _4464;
                        continue;
                    }
                    _3645 = _3579;
                    vec3 _4495 = (_3584 * _3584) * (vec3(3.0) - (vec3(2.0) * _3584));
                    float _3648 = _4495.x;
                    float _3649 = 1.0 - _3648;
                    float _3651 = _4495.y;
                    float _3652 = 1.0 - _3651;
                    float _3654 = _4495.z;
                    float _3655 = 1.0 - _3654;
                    vec2 _3562 = clamp((((((((((((_3592 * _3649) * _3652) * _3655) + (((_3599 * _3648) * _3652) * _3655)) + (((_3607 * _3649) * _3651) * _3655)) + (((_3614 * _3648) * _3651) * _3655)) + (((_3623 * _3649) * _3652) * _3654)) + (((_3630 * _3648) * _3652) * _3654)) + (((_3638 * _3649) * _3651) * _3654)) + (((_3645 * _3648) * _3651) * _3654)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
                    vec3 _4502 = vs_out_frag_position_ws - (_3488 + (vec3(_3562.x, 0.0, _3562.y) * 0.0599999986588954925537109375));
                    float _4512 = dot(_4502, _3546);
                    bool _3234 = !((_3481.w & 1u) != 0u);
                    bool _5636;
                    if (_3234)
                    {
                        _5636 = _4512 <= (-0.5);
                    }
                    else
                    {
                        _5636 = false;
                    }
                    if (_5636)
                    {
                        break;
                    }
                    vec2 _3243 = vec3(dot(_4502, _3548), _4502.y, _4512).xy;
                    vec2 _4527 = uintBitsToFloat(_3485.xy) - _3496;
                    float _4543 = float(_3481.w >> 8u);
                    float _4537 = textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3((_3243 - _3496) / _4527, _4543), 0.0).x * 0.25;
                    float _3245 = _4537 - 0.008000000379979610443115234375;
                    if (_3245 >= 0.0)
                    {
                        break;
                    }
                    float _4552 = dot(_2037, _3546);
                    vec2 _3251 = vec3(dot(_2037, _3548), _2037.y, _4552).xy;
                    float _3252 = length(_3251);
                    float _3253 = max(_3252, 9.9999997473787516355514526367188e-05);
                    bool _5641;
                    if (_3218 > 9.9999997473787516355514526367188e-05)
                    {
                        _5641 = _4537 >= 0.0;
                    }
                    else
                    {
                        _5641 = false;
                    }
                    bool _5637;
                    if (_3234)
                    {
                        _5637 = _4552 < 0.0;
                    }
                    else
                    {
                        _5637 = false;
                    }
                    float _5647;
                    if (_5637)
                    {
                        _5647 = (_4512 + 0.5) / (-_4552);
                    }
                    else
                    {
                        _5647 = 3.4028234663852885981170418348452e+38;
                    }
                    float _5650;
                    if ((_3252 > 9.9999997473787516355514526367188e-05) ? true : _5641)
                    {
                        float _3337;
                        float _3343;
                        uint _3350;
                        float _5651;
                        uint _5642 = 0u;
                        float _5643 = 0.0;
                        float _5644 = _3245;
                        for (;;)
                        {
                            if (!(_5642 < 3u))
                            {
                                _5651 = _5643;
                                break;
                            }
                            float _3298 = _5643 + (max(-_5644, 0.0) / (_3253 - ((max(0.008000000379979610443115234375 - (_3218 * _5643), 0.0) * (-249.9999847412109375)) * _3218)));
                            float _4587 = max(0.008000000379979610443115234375 - (_3218 * _3298), 0.0);
                            float _3311 = _3298 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3243 + (_3251 * _3298)) - _3496) / _4527, _4543), 0.0).x * 0.25) - ((_4587 * _4587) * 124.99999237060546875)), 0.0) / (_3253 - ((_4587 * (-249.9999847412109375)) * _3218)));
                            float _4623 = max(0.008000000379979610443115234375 - (_3218 * _3311), 0.0);
                            float _3324 = _3311 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3243 + (_3251 * _3311)) - _3496) / _4527, _4543), 0.0).x * 0.25) - ((_4623 * _4623) * 124.99999237060546875)), 0.0) / (_3253 - ((_4623 * (-249.9999847412109375)) * _3218)));
                            float _4659 = max(0.008000000379979610443115234375 - (_3218 * _3324), 0.0);
                            _3337 = _3324 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3243 + (_3251 * _3324)) - _3496) / _4527, _4543), 0.0).x * 0.25) - ((_4659 * _4659) * 124.99999237060546875)), 0.0) / (_3253 - ((_4659 * (-249.9999847412109375)) * _3218)));
                            float _4695 = max(0.008000000379979610443115234375 - (_3218 * _3337), 0.0);
                            _3343 = (textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3243 + (_3251 * _3337)) - _3496) / _4527, _4543), 0.0).x * 0.25) - ((_4695 * _4695) * 124.99999237060546875);
                            if (_3343 >= (-0.001000000047497451305389404296875))
                            {
                                _5651 = _3337;
                                break;
                            }
                            _3350 = _5642 + 1u;
                            _5644 = _3343;
                            _5643 = _3337;
                            _5642 = _3350;
                            continue;
                        }
                        _5650 = _5651;
                    }
                    else
                    {
                        _5650 = 3.4028234663852885981170418348452e+38;
                    }
                    bool _3357 = _5650 <= min(_5647, _3181);
                    vec3 _5652;
                    vec3 _5670;
                    if (_3357)
                    {
                        vec2 _3361 = _3243 + (_3251 * _5650);
                        vec2 _3366 = _4527 * vec2(0.0078125);
                        float _4715 = textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3((_3361 - _3496) / _4527, _4543), 0.0).x * 0.25;
                        vec2 _3379 = vec2((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3361 + vec2(_3366.x, 0.0)) - _3496) / _4527, _4543), 0.0).x * 0.25) - _4715, (textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3361 + vec2(0.0, _3366.y)) - _3496) / _4527, _4543), 0.0).x * 0.25) - _4715) / _3366;
                        float _4775 = max(0.008000000379979610443115234375 - (_3218 * _5650), 0.0) * (-249.9999847412109375);
                        if ((dot(_3379, _3251) - (_4775 * _3218)) <= 0.0)
                        {
                            _5808 = true;
                            _5785 = false;
                            _5763 = vec3(0.0);
                            _5740 = vec3(0.0);
                            _5719 = true;
                            _5718 = false;
                            _5717 = vec3(0.0);
                            _5716 = vec3(0.0);
                            _3221_ladder_break = true;
                            break;
                        }
                        _5670 = vs_out_frag_position_ws + (_2037 * _5650);
                        _5652 = -normalize(((_3548 * _3379.x) + vec3(0.0, _3379.y, 0.0)) + (_174 * _4775));
                    }
                    else
                    {
                        _5670 = vec3(0.0);
                        _5652 = vec3(0.0);
                    }
                    bool _6409 = _3357 ? true : false;
                    _5808 = true;
                    _5785 = _6409;
                    _5763 = _5670;
                    _5740 = _5652;
                    _5719 = true;
                    _5718 = _6409;
                    _5717 = _5670;
                    _5716 = _5652;
                    _3221_ladder_break = true;
                    break;
                } while(false);
                if (_3221_ladder_break)
                {
                    break;
                }
                _3411 = _5479 + 1u;
                _5585 = _3645;
                _5567 = _3638;
                _5550 = _3630;
                _5534 = _3623;
                _5519 = _3614;
                _5505 = _3607;
                _5492 = _3599;
                _5480 = _3592;
                _5479 = _3411;
                continue;
            }
            if (_5719)
            {
                _5807 = _5808;
                _5784 = _5785;
                _5762 = _5763;
                _5739 = _5740;
                break;
            }
            _5807 = _5719;
            _5784 = _5718;
            _5762 = _5717;
            _5739 = _5716;
            break;
        } while(false);
        vec2 _5838;
        float _6334;
        if (_5807)
        {
            if (!_5784)
            {
                demote;
            }
            vec4 _4795 = (vec4(_5762, 1.0) * current_view.world_to_view) * current_view.view_to_sample;
            vec2 _5830;
            do
            {
                vec3 _4805 = abs(_5739);
                float _4807 = _4805.y;
                float _4808 = _4805.z;
                if (_4805.x > max(_4807, _4808))
                {
                    _5830 = _5762.zy * 0.4000000059604644775390625;
                    break;
                }
                else
                {
                    if (_4807 > _4808)
                    {
                        _5830 = _5762.xz * 0.4000000059604644775390625;
                        break;
                    }
                }
                _5830 = _5762.xy * 0.4000000059604644775390625;
                break;
            } while(false);
            _6334 = min((_4795.xyz / vec3(_4795.w)).z, gl_FragCoord.z);
            _5838 = _5830;
        }
        else
        {
            _6334 = gl_FragCoord.z;
            _5838 = vs_out_frag_uv;
        }
        bvec3 _6411 = bvec3(_5807);
        _6333 = _6334;
        _5881 = mix(_174, _5739, _6411);
        _5859 = mix(vs_out_frag_position_ws, _5762, _6411);
        _5844 = _5807 ? true : false;
        _5837 = _5838;
    }
    else
    {
        _6333 = gl_FragCoord.z;
        _5881 = _174;
        _5859 = vs_out_frag_position_ws;
        _5844 = false;
        _5837 = vs_out_frag_uv;
    }
    bool _1528 = vs_out_is_freeform_wall > 0;
    uint _5831;
    if (_1528)
    {
        _5831 = wooden_wall_colors_ids_1._member0[vs_out_color_source];
    }
    else
    {
        _5831 = halftimber_colors_ids_1._member0[vs_out_color_source];
    }
    int _5832;
    if (vs_out_source_is_color_id > 0)
    {
        _5832 = vs_out_color_source;
    }
    else
    {
        _5832 = (vs_out_default_wood_color != 0) ? 0 : int(_5831);
    }
    vec3 _5839;
    if (_1528)
    {
        _5839 = texture(sampler2DArray(wooden_wall_colors_tex, samplers_llr), vec3(_5837, float(_5832)), current_view.mip_bias).xyz;
    }
    else
    {
        _5839 = texture(sampler2DArray(halftimber_colors_tex, samplers_llr), vec3(_5837, float(_5832)), current_view.mip_bias).xyz;
    }
    int _5846;
    if (_5844)
    {
        _5846 = 0;
    }
    else
    {
        _5846 = vs_out_frag_is_bevel;
    }
    vec3 _1616 = mix(_5839, _5839 * 1.10000002384185791015625, vec3(ivec3(_5846)));
    vec4 sampled = texture(sampler2D(material_data_wood_roughness, samplers_llr), _5837, current_view.mip_bias);
    float _1635 = mix(0.699999988079071044921875, 0.89999997615814208984375, smoothstep(0.89999997615814208984375, 1.0, sampled.x));
    vec3 _5868;
    bool _6125;
    if (vs_out_no_highlight == 0)
    {
        uint _5850;
        if (uint(vs_out_color_source) == frame_constants.wall_highlighted_slot_id)
        {
            _5850 = frame_constants.wall_highlight_mode;
        }
        else
        {
            _5850 = 0u;
        }
        vec3 _5871;
        bool _6168;
        if (_5850 == 1u)
        {
            _6168 = true;
            _5871 = mix(_1616, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.5));
        }
        else
        {
            bool _4840 = _5850 == 2u;
            vec3 _5872;
            if (_4840)
            {
                _5872 = mix(_1616, vec3(0.5), vec3(0.100000001490116119384765625));
            }
            else
            {
                _5872 = _1616;
            }
            _6168 = _4840 ? true : false;
            _5871 = _5872;
        }
        bool _5861;
        if (frame_constants.highlight_bricks_to_delete == 1u)
        {
            _5861 = distance(frame_constants.brush_position.xz, _5859.xz) < ((1.88900005817413330078125 * frame_constants.eraser_size_multiplier) - 0.20000000298023223876953125);
        }
        else
        {
            _5861 = false;
        }
        vec3 _5869;
        if (_5861)
        {
            _5869 = mix(_1616, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.800000011920928955078125));
        }
        else
        {
            _5869 = _5871;
        }
        _6125 = _5861 ? true : _6168;
        _5868 = _5869;
    }
    else
    {
        _6125 = false;
        _5868 = _1616;
    }
    bool _5862;
    if (frame_constants.glade_theme_id == 4u)
    {
        _5862 = vs_out_no_snow == 0;
    }
    else
    {
        _5862 = false;
    }
    vec3 _6319;
    if (_5862)
    {
        float _1784 = smoothstep(-0.100000001490116119384765625, 0.0, _5859.y);
        vec3 _6320;
        if (vs_out_is_less_snowy > 0)
        {
            vec4 sampled_1 = texture(sampler2D(material_data_dirtpath_heightmap, samplers_llr), _5859.xz * 0.0500000007450580596923828125, current_view.mip_bias);
            float _1801 = sampled_1.x;
            _6320 = mix(_5868, vec3(0.699999988079071044921875), vec3((((smoothstep(0.0, 0.20000000298023223876953125, smoothstep(0.5, 1.0, _1635) * mix(0.0, 0.5, _1801)) * 0.60000002384185791015625) + (_1801 * 0.20000000298023223876953125)) * clamp(_5881.y, 0.0, 1.0)) * _1784));
        }
        else
        {
            _6320 = mix(_5868, vec3(0.699999988079071044921875), vec3(_1784 * smoothstep(0.5, 1.0, clamp(_5881.y, 0.0, 1.0))));
        }
        _6319 = _6320;
    }
    else
    {
        _6319 = _5868;
    }
    uvec2 _4884;
    vec3 _4895 = (_5881 * 0.5) + vec3(0.5);
    _4884.x = ((uint((clamp(_4895.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_4895.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_4895.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(_1635, 0.0, 1.0) * 255.0) + 0.5) << uint(24));
    vec3 _5003 = sqrt(clamp(_6319, vec3(0.0), vec3(1.0)));
    uint _5018 = (uint((clamp(_5003.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_5003.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_5003.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    _4884.y = _5018;
    _4884.y = _5018 | ((7u | (uint(_6125) << 3u)) << 24u);
    entryPointParam_ps_main_gbuffer = _4884;
    gl_FragDepth = _6333;
}

