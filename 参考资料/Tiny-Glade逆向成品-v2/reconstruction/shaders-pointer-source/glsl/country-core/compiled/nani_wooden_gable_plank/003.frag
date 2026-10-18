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

vec2 _4906;
vec3 _5278;
bool _5302;

struct _5399
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

layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 0) in vec3 vs_out_frag_position_ws;
layout(location = 3) flat in uint vs_out_window_cut_list;
layout(location = 2) flat in uint vs_out_instance_index;

void main()
{
    uint _1812 = vs_out_window_cut_list >> 24u;
    float _5337;
    if (_1812 != 0u)
    {
        vec3 _1839 = normalize((vec4(0.0, 0.0, -1.0, 0.0) * current_view.view_to_world).xyz);
        mat3x4 _1875 = transpose(mat4x3(vec3(material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[0], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[1], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[2]), vec3(material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[3], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[4], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[5]), vec3(material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[6], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[7], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[8]), vec3(material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[9], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[10], material_data_nani_instance_data._member0[vs_out_instance_index].transform.data.data[11])));
        float _4903;
        if ((material_data_nani_instance_data._member0[vs_out_instance_index].flags & 4u) != 0u)
        {
            _4903 = min(0.0, min(material_data_nani_instance_data._member0[vs_out_instance_index].skew_max_y_left_01, material_data_nani_instance_data._member0[vs_out_instance_index].skew_max_y_right_01));
        }
        else
        {
            _4903 = 0.0;
        }
        vec4 _1926 = _1875[0];
        vec4 _1933 = _1875[1];
        vec4 _1940 = _1875[2];
        mat3 _1950 = mat3(vec3(_1926.xyz), vec3(_1933.xyz), vec3(_1940.xyz));
        vec3 _2004 = vec3(1.0, 0.0, 0.0) * _1950;
        vec3 _2005 = vec3(0.0, 1.0, 0.0) * _1950;
        vec3 _2006 = vec3(0.0, 0.0, 1.0) * _1950;
        vec3 _2009 = cross(_2004, _2005);
        vec3 _2012 = vec3(1.0 / dot(_2006, _2009));
        vec3 _2013 = cross(_2005, _2006) * _2012;
        vec3 _2014 = cross(_2006, _2004) * _2012;
        vec3 _2015 = _2009 * _2012;
        vec3 _1960 = -(vec3(_1926.w, _1933.w, _1940.w) * mat3(_2013, _2014, _2015));
        mat3x4 _1923;
        _1923[0].x = _2013.x;
        _1923[0].y = _2013.y;
        _1923[0].z = _2013.z;
        _1923[0].w = _1960.x;
        _1923[1].x = _2014.x;
        _1923[1].y = _2014.y;
        _1923[1].z = _2014.z;
        _1923[1].w = _1960.y;
        _1923[2].x = _2015.x;
        _1923[2].y = _2015.y;
        _1923[2].z = _2015.z;
        _1923[2].w = _1960.z;
        vec3 _2019 = vs_out_frag_position_ws * 0.4000000059604644775390625;
        ivec3 _2045 = ivec3(floor(_2019));
        vec3 _2046 = fract(_2019);
        uvec3 _2047 = uvec3(_2045);
        uint _2161 = _2047.z;
        uint _2167 = _2161 + (_2161 << 10u);
        uint _2169 = _2167 ^ (_2167 >> 6u);
        uint _2171 = _2169 + (_2169 << 3u);
        uint _2173 = _2171 ^ (_2171 >> 11u);
        uint _2181 = (((_2047.y * 1664525u) + (_2173 + (_2173 << 15u))) + 1013904223u) * 1664525u;
        uint _2183 = _2181 ^ (_2181 >> 11u);
        uint _2186 = _2183 ^ ((_2183 << 7u) & 2636928640u);
        uint _2189 = _2186 ^ ((_2186 << 15u) & 4022730752u);
        uint _2197 = (((_2047.x * 1664525u) + (_2189 ^ (_2189 >> 18u))) + 1013904223u) * 1664525u;
        uint _2199 = _2197 ^ (_2197 >> 11u);
        uint _2202 = _2199 ^ ((_2199 << 7u) & 2636928640u);
        uint _2205 = _2202 ^ ((_2202 << 15u) & 4022730752u);
        uint _2207 = _2205 ^ (_2205 >> 18u);
        uint _2226;
        uint _2245;
        vec2 _2034;
        uint _4907 = 0u;
        uint _5346 = _2207;
        for (;;)
        {
            if (!(_4907 < 2u))
            {
                break;
            }
            uint _2237 = _5346 + (_5346 << 10u);
            uint _2239 = _2237 ^ (_2237 >> 6u);
            uint _2241 = _2239 + (_2239 << 3u);
            uint _2243 = _2241 ^ (_2241 >> 11u);
            _2245 = _2243 + (_2243 << 15u);
            _2034[_4907] = uintBitsToFloat((_5346 & 8388607u) | 1065353216u) - 1.0;
            _2226 = _4907 + 1u;
            _5346 = _2245;
            _4907 = _2226;
            continue;
        }
        uvec3 _2056 = uvec3(_2045 + ivec3(1, 0, 0));
        uint _2261 = _2056.z;
        uint _2267 = _2261 + (_2261 << 10u);
        uint _2269 = _2267 ^ (_2267 >> 6u);
        uint _2271 = _2269 + (_2269 << 3u);
        uint _2273 = _2271 ^ (_2271 >> 11u);
        uint _2281 = (((_2056.y * 1664525u) + (_2273 + (_2273 << 15u))) + 1013904223u) * 1664525u;
        uint _2283 = _2281 ^ (_2281 >> 11u);
        uint _2286 = _2283 ^ ((_2283 << 7u) & 2636928640u);
        uint _2289 = _2286 ^ ((_2286 << 15u) & 4022730752u);
        uint _2297 = (((_2056.x * 1664525u) + (_2289 ^ (_2289 >> 18u))) + 1013904223u) * 1664525u;
        uint _2299 = _2297 ^ (_2297 >> 11u);
        uint _2302 = _2299 ^ ((_2299 << 7u) & 2636928640u);
        uint _2305 = _2302 ^ ((_2302 << 15u) & 4022730752u);
        uint _2307 = _2305 ^ (_2305 >> 18u);
        uint _2326;
        uint _2345;
        vec2 _2035;
        uint _4911 = 0u;
        uint _5345 = _2307;
        for (;;)
        {
            if (!(_4911 < 2u))
            {
                break;
            }
            uint _2337 = _5345 + (_5345 << 10u);
            uint _2339 = _2337 ^ (_2337 >> 6u);
            uint _2341 = _2339 + (_2339 << 3u);
            uint _2343 = _2341 ^ (_2341 >> 11u);
            _2345 = _2343 + (_2343 << 15u);
            _2035[_4911] = uintBitsToFloat((_5345 & 8388607u) | 1065353216u) - 1.0;
            _2326 = _4911 + 1u;
            _5345 = _2345;
            _4911 = _2326;
            continue;
        }
        uvec3 _2063 = uvec3(_2045 + ivec3(0, 1, 0));
        uint _2361 = _2063.z;
        uint _2367 = _2361 + (_2361 << 10u);
        uint _2369 = _2367 ^ (_2367 >> 6u);
        uint _2371 = _2369 + (_2369 << 3u);
        uint _2373 = _2371 ^ (_2371 >> 11u);
        uint _2381 = (((_2063.y * 1664525u) + (_2373 + (_2373 << 15u))) + 1013904223u) * 1664525u;
        uint _2383 = _2381 ^ (_2381 >> 11u);
        uint _2386 = _2383 ^ ((_2383 << 7u) & 2636928640u);
        uint _2389 = _2386 ^ ((_2386 << 15u) & 4022730752u);
        uint _2397 = (((_2063.x * 1664525u) + (_2389 ^ (_2389 >> 18u))) + 1013904223u) * 1664525u;
        uint _2399 = _2397 ^ (_2397 >> 11u);
        uint _2402 = _2399 ^ ((_2399 << 7u) & 2636928640u);
        uint _2405 = _2402 ^ ((_2402 << 15u) & 4022730752u);
        uint _2407 = _2405 ^ (_2405 >> 18u);
        uint _2426;
        uint _2445;
        vec2 _2036;
        uint _4916 = 0u;
        uint _5344 = _2407;
        for (;;)
        {
            if (!(_4916 < 2u))
            {
                break;
            }
            uint _2437 = _5344 + (_5344 << 10u);
            uint _2439 = _2437 ^ (_2437 >> 6u);
            uint _2441 = _2439 + (_2439 << 3u);
            uint _2443 = _2441 ^ (_2441 >> 11u);
            _2445 = _2443 + (_2443 << 15u);
            _2036[_4916] = uintBitsToFloat((_5344 & 8388607u) | 1065353216u) - 1.0;
            _2426 = _4916 + 1u;
            _5344 = _2445;
            _4916 = _2426;
            continue;
        }
        uvec3 _2071 = uvec3(_2045 + ivec3(1, 1, 0));
        uint _2461 = _2071.z;
        uint _2467 = _2461 + (_2461 << 10u);
        uint _2469 = _2467 ^ (_2467 >> 6u);
        uint _2471 = _2469 + (_2469 << 3u);
        uint _2473 = _2471 ^ (_2471 >> 11u);
        uint _2481 = (((_2071.y * 1664525u) + (_2473 + (_2473 << 15u))) + 1013904223u) * 1664525u;
        uint _2483 = _2481 ^ (_2481 >> 11u);
        uint _2486 = _2483 ^ ((_2483 << 7u) & 2636928640u);
        uint _2489 = _2486 ^ ((_2486 << 15u) & 4022730752u);
        uint _2497 = (((_2071.x * 1664525u) + (_2489 ^ (_2489 >> 18u))) + 1013904223u) * 1664525u;
        uint _2499 = _2497 ^ (_2497 >> 11u);
        uint _2502 = _2499 ^ ((_2499 << 7u) & 2636928640u);
        uint _2505 = _2502 ^ ((_2502 << 15u) & 4022730752u);
        uint _2507 = _2505 ^ (_2505 >> 18u);
        uint _2526;
        uint _2545;
        vec2 _2037;
        uint _4922 = 0u;
        uint _5343 = _2507;
        for (;;)
        {
            if (!(_4922 < 2u))
            {
                break;
            }
            uint _2537 = _5343 + (_5343 << 10u);
            uint _2539 = _2537 ^ (_2537 >> 6u);
            uint _2541 = _2539 + (_2539 << 3u);
            uint _2543 = _2541 ^ (_2541 >> 11u);
            _2545 = _2543 + (_2543 << 15u);
            _2037[_4922] = uintBitsToFloat((_5343 & 8388607u) | 1065353216u) - 1.0;
            _2526 = _4922 + 1u;
            _5343 = _2545;
            _4922 = _2526;
            continue;
        }
        uvec3 _2078 = uvec3(_2045 + ivec3(0, 0, 1));
        uint _2561 = _2078.z;
        uint _2567 = _2561 + (_2561 << 10u);
        uint _2569 = _2567 ^ (_2567 >> 6u);
        uint _2571 = _2569 + (_2569 << 3u);
        uint _2573 = _2571 ^ (_2571 >> 11u);
        uint _2581 = (((_2078.y * 1664525u) + (_2573 + (_2573 << 15u))) + 1013904223u) * 1664525u;
        uint _2583 = _2581 ^ (_2581 >> 11u);
        uint _2586 = _2583 ^ ((_2583 << 7u) & 2636928640u);
        uint _2589 = _2586 ^ ((_2586 << 15u) & 4022730752u);
        uint _2597 = (((_2078.x * 1664525u) + (_2589 ^ (_2589 >> 18u))) + 1013904223u) * 1664525u;
        uint _2599 = _2597 ^ (_2597 >> 11u);
        uint _2602 = _2599 ^ ((_2599 << 7u) & 2636928640u);
        uint _2605 = _2602 ^ ((_2602 << 15u) & 4022730752u);
        uint _2607 = _2605 ^ (_2605 >> 18u);
        uint _2626;
        uint _2645;
        vec2 _2038;
        uint _4929 = 0u;
        uint _5342 = _2607;
        for (;;)
        {
            if (!(_4929 < 2u))
            {
                break;
            }
            uint _2637 = _5342 + (_5342 << 10u);
            uint _2639 = _2637 ^ (_2637 >> 6u);
            uint _2641 = _2639 + (_2639 << 3u);
            uint _2643 = _2641 ^ (_2641 >> 11u);
            _2645 = _2643 + (_2643 << 15u);
            _2038[_4929] = uintBitsToFloat((_5342 & 8388607u) | 1065353216u) - 1.0;
            _2626 = _4929 + 1u;
            _5342 = _2645;
            _4929 = _2626;
            continue;
        }
        uvec3 _2087 = uvec3(_2045 + ivec3(1, 0, 1));
        uint _2661 = _2087.z;
        uint _2667 = _2661 + (_2661 << 10u);
        uint _2669 = _2667 ^ (_2667 >> 6u);
        uint _2671 = _2669 + (_2669 << 3u);
        uint _2673 = _2671 ^ (_2671 >> 11u);
        uint _2681 = (((_2087.y * 1664525u) + (_2673 + (_2673 << 15u))) + 1013904223u) * 1664525u;
        uint _2683 = _2681 ^ (_2681 >> 11u);
        uint _2686 = _2683 ^ ((_2683 << 7u) & 2636928640u);
        uint _2689 = _2686 ^ ((_2686 << 15u) & 4022730752u);
        uint _2697 = (((_2087.x * 1664525u) + (_2689 ^ (_2689 >> 18u))) + 1013904223u) * 1664525u;
        uint _2699 = _2697 ^ (_2697 >> 11u);
        uint _2702 = _2699 ^ ((_2699 << 7u) & 2636928640u);
        uint _2705 = _2702 ^ ((_2702 << 15u) & 4022730752u);
        uint _2707 = _2705 ^ (_2705 >> 18u);
        uint _2726;
        uint _2745;
        vec2 _2039;
        uint _4937 = 0u;
        uint _5341 = _2707;
        for (;;)
        {
            if (!(_4937 < 2u))
            {
                break;
            }
            uint _2737 = _5341 + (_5341 << 10u);
            uint _2739 = _2737 ^ (_2737 >> 6u);
            uint _2741 = _2739 + (_2739 << 3u);
            uint _2743 = _2741 ^ (_2741 >> 11u);
            _2745 = _2743 + (_2743 << 15u);
            _2039[_4937] = uintBitsToFloat((_5341 & 8388607u) | 1065353216u) - 1.0;
            _2726 = _4937 + 1u;
            _5341 = _2745;
            _4937 = _2726;
            continue;
        }
        uvec3 _2094 = uvec3(_2045 + ivec3(0, 1, 1));
        uint _2761 = _2094.z;
        uint _2767 = _2761 + (_2761 << 10u);
        uint _2769 = _2767 ^ (_2767 >> 6u);
        uint _2771 = _2769 + (_2769 << 3u);
        uint _2773 = _2771 ^ (_2771 >> 11u);
        uint _2781 = (((_2094.y * 1664525u) + (_2773 + (_2773 << 15u))) + 1013904223u) * 1664525u;
        uint _2783 = _2781 ^ (_2781 >> 11u);
        uint _2786 = _2783 ^ ((_2783 << 7u) & 2636928640u);
        uint _2789 = _2786 ^ ((_2786 << 15u) & 4022730752u);
        uint _2797 = (((_2094.x * 1664525u) + (_2789 ^ (_2789 >> 18u))) + 1013904223u) * 1664525u;
        uint _2799 = _2797 ^ (_2797 >> 11u);
        uint _2802 = _2799 ^ ((_2799 << 7u) & 2636928640u);
        uint _2805 = _2802 ^ ((_2802 << 15u) & 4022730752u);
        uint _2807 = _2805 ^ (_2805 >> 18u);
        uint _2826;
        uint _2845;
        vec2 _2040;
        uint _4946 = 0u;
        uint _5340 = _2807;
        for (;;)
        {
            if (!(_4946 < 2u))
            {
                break;
            }
            uint _2837 = _5340 + (_5340 << 10u);
            uint _2839 = _2837 ^ (_2837 >> 6u);
            uint _2841 = _2839 + (_2839 << 3u);
            uint _2843 = _2841 ^ (_2841 >> 11u);
            _2845 = _2843 + (_2843 << 15u);
            _2040[_4946] = uintBitsToFloat((_5340 & 8388607u) | 1065353216u) - 1.0;
            _2826 = _4946 + 1u;
            _5340 = _2845;
            _4946 = _2826;
            continue;
        }
        uvec3 _2102 = uvec3(_2045 + ivec3(1));
        uint _2861 = _2102.z;
        uint _2867 = _2861 + (_2861 << 10u);
        uint _2869 = _2867 ^ (_2867 >> 6u);
        uint _2871 = _2869 + (_2869 << 3u);
        uint _2873 = _2871 ^ (_2871 >> 11u);
        uint _2881 = (((_2102.y * 1664525u) + (_2873 + (_2873 << 15u))) + 1013904223u) * 1664525u;
        uint _2883 = _2881 ^ (_2881 >> 11u);
        uint _2886 = _2883 ^ ((_2883 << 7u) & 2636928640u);
        uint _2889 = _2886 ^ ((_2886 << 15u) & 4022730752u);
        uint _2897 = (((_2102.x * 1664525u) + (_2889 ^ (_2889 >> 18u))) + 1013904223u) * 1664525u;
        uint _2899 = _2897 ^ (_2897 >> 11u);
        uint _2902 = _2899 ^ ((_2899 << 7u) & 2636928640u);
        uint _2905 = _2902 ^ ((_2902 << 15u) & 4022730752u);
        uint _2907 = _2905 ^ (_2905 >> 18u);
        uint _2926;
        uint _2945;
        vec2 _2041;
        uint _4956 = 0u;
        uint _5339 = _2907;
        for (;;)
        {
            if (!(_4956 < 2u))
            {
                break;
            }
            uint _2937 = _5339 + (_5339 << 10u);
            uint _2939 = _2937 ^ (_2937 >> 6u);
            uint _2941 = _2939 + (_2939 << 3u);
            uint _2943 = _2941 ^ (_2941 >> 11u);
            _2945 = _2943 + (_2943 << 15u);
            _2041[_4956] = uintBitsToFloat((_5339 & 8388607u) | 1065353216u) - 1.0;
            _2926 = _4956 + 1u;
            _5339 = _2945;
            _4956 = _2926;
            continue;
        }
        vec3 _2957 = (_2046 * _2046) * (vec3(3.0) - (vec3(2.0) * _2046));
        float _2110 = _2957.x;
        float _2111 = 1.0 - _2110;
        float _2113 = _2957.y;
        float _2114 = 1.0 - _2113;
        float _2116 = _2957.z;
        float _2117 = 1.0 - _2116;
        vec2 _2024 = clamp((((((((((((_2034 * _2111) * _2114) * _2117) + (((_2035 * _2110) * _2114) * _2117)) + (((_2036 * _2111) * _2113) * _2117)) + (((_2037 * _2110) * _2113) * _2117)) + (((_2038 * _2111) * _2114) * _2116)) + (((_2039 * _2110) * _2114) * _2116)) + (((_2040 * _2111) * _2113) * _2116)) + (((_2041 * _2110) * _2113) * _2116)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
        vec3 _1920 = _1839 * mat3(_1923[0].xyz, _1923[1].xyz, _1923[2].xyz);
        vec3 _2966 = (vec4(vs_out_frag_position_ws - (vec3(_2024.x, 0.0, _2024.y) * 0.0599999986588954925537109375), 1.0) * _1923).xyz;
        vec3 _2975 = max((vec3(0.5, 1.0, 0.5) - _2966) / _1920, (vec3(-0.5, _4903, -0.5).xyz - _2966) / _1920);
        float _2987 = min(min(_2975.x, _2975.y), _2975.z);
        vec3 _5265;
        bool _5289;
        bool _5313;
        do
        {
            if (all(equal(material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address, uvec2(0u))))
            {
                _5313 = false;
                _5289 = false;
                _5265 = vec3(0.0);
                break;
            }
            uint _3238 = vs_out_window_cut_list & 16777215u;
            float _3024 = max(-dot(_1839, normalize(vs_out_frag_normal_ws)), 0.0);
            vec2 _4998;
            vec2 _5011;
            vec2 _5025;
            vec2 _5040;
            vec2 _5056;
            vec2 _5073;
            vec2 _5091;
            vec2 _5110;
            _5110 = _4906;
            _5091 = _4906;
            _5073 = _4906;
            _5056 = _4906;
            _5040 = _4906;
            _5025 = _4906;
            _5011 = _4906;
            _4998 = _4906;
            uint _3217;
            vec2 _3399;
            vec2 _3406;
            vec2 _3414;
            vec2 _3421;
            vec2 _3430;
            vec2 _3437;
            vec2 _3445;
            vec2 _3452;
            vec3 _5243;
            bool _5244;
            bool _5245;
            vec3 _5266;
            bool _5290;
            bool _5314;
            uint _4997 = 0u;
            for (;;)
            {
                bool _3027_ladder_break = false;
                do
                {
                    if (!(_4997 < _1812))
                    {
                        _5314 = _5302;
                        _5290 = _5302;
                        _5266 = _5278;
                        _5245 = false;
                        _5244 = false;
                        _5243 = vec3(0.0);
                        _3027_ladder_break = true;
                        break;
                    }
                    uint _3258 = material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x + (4u * (_3238 + _4997));
                    uvec2 _5400 = uvec2(uintPointer(uvec2(_3258, material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.y + uint(_3258 < material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x))));
                    uint _5401 = _5400.x;
                    _5399 _5403;
                    imulExtended(0, 4, _5403._m1, _5403._m0);
                    uint _5408 = _5401 + uint(_5403._m0);
                    uint _3244 = uintPointer(uvec2(_5408, (_5400.y + uint(_5403._m1)) + uint(_5408 < _5401))).value;
                    uint _3320 = material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x + (48u * _3244);
                    uvec4Pointer _3343 = uvec4Pointer(uvec2(_3320, material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.y + uint(_3320 < material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x)));
                    uvec2 _5415 = uvec2(_3343);
                    uint _5416 = _5415.x;
                    _5399 _5418;
                    imulExtended(0, 16, _5418._m1, _5418._m0);
                    uint _5423 = _5416 + uint(_5418._m0);
                    uvec4 _3288 = uvec4Pointer(uvec2(_5423, (_5415.y + uint(_5418._m1)) + uint(_5423 < _5416))).value;
                    uvec2 _5429 = uvec2(_3343);
                    uint _5430 = _5429.x;
                    _5399 _5432;
                    imulExtended(1, 16, _5432._m1, _5432._m0);
                    uint _5437 = _5430 + uint(_5432._m0);
                    uvec4 _3290 = uvec4Pointer(uvec2(_5437, (_5429.y + uint(_5432._m1)) + uint(_5437 < _5430))).value;
                    uvec2 _5443 = uvec2(_3343);
                    uint _5444 = _5443.x;
                    _5399 _5446;
                    imulExtended(2, 16, _5446._m1, _5446._m0);
                    uint _5451 = _5444 + uint(_5446._m0);
                    uvec4 _3292 = uvec4Pointer(uvec2(_5451, (_5443.y + uint(_5446._m1)) + uint(_5451 < _5444))).value;
                    vec3 _3295 = uintBitsToFloat(_3288.xyz);
                    vec2 _3300 = uintBitsToFloat(_3290.xy);
                    vec2 _3303 = uintBitsToFloat(_3290.zw);
                    vec3 _3353 = normalize(vec3(_3300.x, 0.0, _3300.y));
                    vec3 _3355 = cross(vec3(0.0, 1.0, 0.0), _3353);
                    vec3 _3364 = _3295 * 0.4000000059604644775390625;
                    ivec3 _3390 = ivec3(floor(_3364));
                    vec3 _3391 = fract(_3364);
                    uvec3 _3392 = uvec3(_3390);
                    uint _3506 = _3392.z;
                    uint _3512 = _3506 + (_3506 << 10u);
                    uint _3514 = _3512 ^ (_3512 >> 6u);
                    uint _3516 = _3514 + (_3514 << 3u);
                    uint _3518 = _3516 ^ (_3516 >> 11u);
                    uint _3526 = (((_3392.y * 1664525u) + (_3518 + (_3518 << 15u))) + 1013904223u) * 1664525u;
                    uint _3528 = _3526 ^ (_3526 >> 11u);
                    uint _3531 = _3528 ^ ((_3528 << 7u) & 2636928640u);
                    uint _3534 = _3531 ^ ((_3531 << 15u) & 4022730752u);
                    uint _3542 = (((_3392.x * 1664525u) + (_3534 ^ (_3534 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3544 = _3542 ^ (_3542 >> 11u);
                    uint _3547 = _3544 ^ ((_3544 << 7u) & 2636928640u);
                    uint _3550 = _3547 ^ ((_3547 << 15u) & 4022730752u);
                    uint _3552 = _3550 ^ (_3550 >> 18u);
                    vec2 _3379 = _4998;
                    uint _3571;
                    uint _3590;
                    uint _5009 = 0u;
                    uint _5264 = _3552;
                    for (;;)
                    {
                        if (!(_5009 < 2u))
                        {
                            break;
                        }
                        uint _3582 = _5264 + (_5264 << 10u);
                        uint _3584 = _3582 ^ (_3582 >> 6u);
                        uint _3586 = _3584 + (_3584 << 3u);
                        uint _3588 = _3586 ^ (_3586 >> 11u);
                        _3590 = _3588 + (_3588 << 15u);
                        _3379[_5009] = uintBitsToFloat((_5264 & 8388607u) | 1065353216u) - 1.0;
                        _3571 = _5009 + 1u;
                        _5264 = _3590;
                        _5009 = _3571;
                        continue;
                    }
                    _3399 = _3379;
                    uvec3 _3401 = uvec3(_3390 + ivec3(1, 0, 0));
                    uint _3606 = _3401.z;
                    uint _3612 = _3606 + (_3606 << 10u);
                    uint _3614 = _3612 ^ (_3612 >> 6u);
                    uint _3616 = _3614 + (_3614 << 3u);
                    uint _3618 = _3616 ^ (_3616 >> 11u);
                    uint _3626 = (((_3401.y * 1664525u) + (_3618 + (_3618 << 15u))) + 1013904223u) * 1664525u;
                    uint _3628 = _3626 ^ (_3626 >> 11u);
                    uint _3631 = _3628 ^ ((_3628 << 7u) & 2636928640u);
                    uint _3634 = _3631 ^ ((_3631 << 15u) & 4022730752u);
                    uint _3642 = (((_3401.x * 1664525u) + (_3634 ^ (_3634 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3644 = _3642 ^ (_3642 >> 11u);
                    uint _3647 = _3644 ^ ((_3644 << 7u) & 2636928640u);
                    uint _3650 = _3647 ^ ((_3647 << 15u) & 4022730752u);
                    uint _3652 = _3650 ^ (_3650 >> 18u);
                    vec2 _3380 = _5011;
                    uint _3671;
                    uint _3690;
                    uint _5022 = 0u;
                    uint _5263 = _3652;
                    for (;;)
                    {
                        if (!(_5022 < 2u))
                        {
                            break;
                        }
                        uint _3682 = _5263 + (_5263 << 10u);
                        uint _3684 = _3682 ^ (_3682 >> 6u);
                        uint _3686 = _3684 + (_3684 << 3u);
                        uint _3688 = _3686 ^ (_3686 >> 11u);
                        _3690 = _3688 + (_3688 << 15u);
                        _3380[_5022] = uintBitsToFloat((_5263 & 8388607u) | 1065353216u) - 1.0;
                        _3671 = _5022 + 1u;
                        _5263 = _3690;
                        _5022 = _3671;
                        continue;
                    }
                    _3406 = _3380;
                    uvec3 _3408 = uvec3(_3390 + ivec3(0, 1, 0));
                    uint _3706 = _3408.z;
                    uint _3712 = _3706 + (_3706 << 10u);
                    uint _3714 = _3712 ^ (_3712 >> 6u);
                    uint _3716 = _3714 + (_3714 << 3u);
                    uint _3718 = _3716 ^ (_3716 >> 11u);
                    uint _3726 = (((_3408.y * 1664525u) + (_3718 + (_3718 << 15u))) + 1013904223u) * 1664525u;
                    uint _3728 = _3726 ^ (_3726 >> 11u);
                    uint _3731 = _3728 ^ ((_3728 << 7u) & 2636928640u);
                    uint _3734 = _3731 ^ ((_3731 << 15u) & 4022730752u);
                    uint _3742 = (((_3408.x * 1664525u) + (_3734 ^ (_3734 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3744 = _3742 ^ (_3742 >> 11u);
                    uint _3747 = _3744 ^ ((_3744 << 7u) & 2636928640u);
                    uint _3750 = _3747 ^ ((_3747 << 15u) & 4022730752u);
                    uint _3752 = _3750 ^ (_3750 >> 18u);
                    vec2 _3381 = _5025;
                    uint _3771;
                    uint _3790;
                    uint _5036 = 0u;
                    uint _5262 = _3752;
                    for (;;)
                    {
                        if (!(_5036 < 2u))
                        {
                            break;
                        }
                        uint _3782 = _5262 + (_5262 << 10u);
                        uint _3784 = _3782 ^ (_3782 >> 6u);
                        uint _3786 = _3784 + (_3784 << 3u);
                        uint _3788 = _3786 ^ (_3786 >> 11u);
                        _3790 = _3788 + (_3788 << 15u);
                        _3381[_5036] = uintBitsToFloat((_5262 & 8388607u) | 1065353216u) - 1.0;
                        _3771 = _5036 + 1u;
                        _5262 = _3790;
                        _5036 = _3771;
                        continue;
                    }
                    _3414 = _3381;
                    uvec3 _3416 = uvec3(_3390 + ivec3(1, 1, 0));
                    uint _3806 = _3416.z;
                    uint _3812 = _3806 + (_3806 << 10u);
                    uint _3814 = _3812 ^ (_3812 >> 6u);
                    uint _3816 = _3814 + (_3814 << 3u);
                    uint _3818 = _3816 ^ (_3816 >> 11u);
                    uint _3826 = (((_3416.y * 1664525u) + (_3818 + (_3818 << 15u))) + 1013904223u) * 1664525u;
                    uint _3828 = _3826 ^ (_3826 >> 11u);
                    uint _3831 = _3828 ^ ((_3828 << 7u) & 2636928640u);
                    uint _3834 = _3831 ^ ((_3831 << 15u) & 4022730752u);
                    uint _3842 = (((_3416.x * 1664525u) + (_3834 ^ (_3834 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3844 = _3842 ^ (_3842 >> 11u);
                    uint _3847 = _3844 ^ ((_3844 << 7u) & 2636928640u);
                    uint _3850 = _3847 ^ ((_3847 << 15u) & 4022730752u);
                    uint _3852 = _3850 ^ (_3850 >> 18u);
                    vec2 _3382 = _5040;
                    uint _3871;
                    uint _3890;
                    uint _5051 = 0u;
                    uint _5261 = _3852;
                    for (;;)
                    {
                        if (!(_5051 < 2u))
                        {
                            break;
                        }
                        uint _3882 = _5261 + (_5261 << 10u);
                        uint _3884 = _3882 ^ (_3882 >> 6u);
                        uint _3886 = _3884 + (_3884 << 3u);
                        uint _3888 = _3886 ^ (_3886 >> 11u);
                        _3890 = _3888 + (_3888 << 15u);
                        _3382[_5051] = uintBitsToFloat((_5261 & 8388607u) | 1065353216u) - 1.0;
                        _3871 = _5051 + 1u;
                        _5261 = _3890;
                        _5051 = _3871;
                        continue;
                    }
                    _3421 = _3382;
                    uvec3 _3423 = uvec3(_3390 + ivec3(0, 0, 1));
                    uint _3906 = _3423.z;
                    uint _3912 = _3906 + (_3906 << 10u);
                    uint _3914 = _3912 ^ (_3912 >> 6u);
                    uint _3916 = _3914 + (_3914 << 3u);
                    uint _3918 = _3916 ^ (_3916 >> 11u);
                    uint _3926 = (((_3423.y * 1664525u) + (_3918 + (_3918 << 15u))) + 1013904223u) * 1664525u;
                    uint _3928 = _3926 ^ (_3926 >> 11u);
                    uint _3931 = _3928 ^ ((_3928 << 7u) & 2636928640u);
                    uint _3934 = _3931 ^ ((_3931 << 15u) & 4022730752u);
                    uint _3942 = (((_3423.x * 1664525u) + (_3934 ^ (_3934 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3944 = _3942 ^ (_3942 >> 11u);
                    uint _3947 = _3944 ^ ((_3944 << 7u) & 2636928640u);
                    uint _3950 = _3947 ^ ((_3947 << 15u) & 4022730752u);
                    uint _3952 = _3950 ^ (_3950 >> 18u);
                    vec2 _3383 = _5056;
                    uint _3971;
                    uint _3990;
                    uint _5067 = 0u;
                    uint _5260 = _3952;
                    for (;;)
                    {
                        if (!(_5067 < 2u))
                        {
                            break;
                        }
                        uint _3982 = _5260 + (_5260 << 10u);
                        uint _3984 = _3982 ^ (_3982 >> 6u);
                        uint _3986 = _3984 + (_3984 << 3u);
                        uint _3988 = _3986 ^ (_3986 >> 11u);
                        _3990 = _3988 + (_3988 << 15u);
                        _3383[_5067] = uintBitsToFloat((_5260 & 8388607u) | 1065353216u) - 1.0;
                        _3971 = _5067 + 1u;
                        _5260 = _3990;
                        _5067 = _3971;
                        continue;
                    }
                    _3430 = _3383;
                    uvec3 _3432 = uvec3(_3390 + ivec3(1, 0, 1));
                    uint _4006 = _3432.z;
                    uint _4012 = _4006 + (_4006 << 10u);
                    uint _4014 = _4012 ^ (_4012 >> 6u);
                    uint _4016 = _4014 + (_4014 << 3u);
                    uint _4018 = _4016 ^ (_4016 >> 11u);
                    uint _4026 = (((_3432.y * 1664525u) + (_4018 + (_4018 << 15u))) + 1013904223u) * 1664525u;
                    uint _4028 = _4026 ^ (_4026 >> 11u);
                    uint _4031 = _4028 ^ ((_4028 << 7u) & 2636928640u);
                    uint _4034 = _4031 ^ ((_4031 << 15u) & 4022730752u);
                    uint _4042 = (((_3432.x * 1664525u) + (_4034 ^ (_4034 >> 18u))) + 1013904223u) * 1664525u;
                    uint _4044 = _4042 ^ (_4042 >> 11u);
                    uint _4047 = _4044 ^ ((_4044 << 7u) & 2636928640u);
                    uint _4050 = _4047 ^ ((_4047 << 15u) & 4022730752u);
                    uint _4052 = _4050 ^ (_4050 >> 18u);
                    vec2 _3384 = _5073;
                    uint _4071;
                    uint _4090;
                    uint _5084 = 0u;
                    uint _5259 = _4052;
                    for (;;)
                    {
                        if (!(_5084 < 2u))
                        {
                            break;
                        }
                        uint _4082 = _5259 + (_5259 << 10u);
                        uint _4084 = _4082 ^ (_4082 >> 6u);
                        uint _4086 = _4084 + (_4084 << 3u);
                        uint _4088 = _4086 ^ (_4086 >> 11u);
                        _4090 = _4088 + (_4088 << 15u);
                        _3384[_5084] = uintBitsToFloat((_5259 & 8388607u) | 1065353216u) - 1.0;
                        _4071 = _5084 + 1u;
                        _5259 = _4090;
                        _5084 = _4071;
                        continue;
                    }
                    _3437 = _3384;
                    uvec3 _3439 = uvec3(_3390 + ivec3(0, 1, 1));
                    uint _4106 = _3439.z;
                    uint _4112 = _4106 + (_4106 << 10u);
                    uint _4114 = _4112 ^ (_4112 >> 6u);
                    uint _4116 = _4114 + (_4114 << 3u);
                    uint _4118 = _4116 ^ (_4116 >> 11u);
                    uint _4126 = (((_3439.y * 1664525u) + (_4118 + (_4118 << 15u))) + 1013904223u) * 1664525u;
                    uint _4128 = _4126 ^ (_4126 >> 11u);
                    uint _4131 = _4128 ^ ((_4128 << 7u) & 2636928640u);
                    uint _4134 = _4131 ^ ((_4131 << 15u) & 4022730752u);
                    uint _4142 = (((_3439.x * 1664525u) + (_4134 ^ (_4134 >> 18u))) + 1013904223u) * 1664525u;
                    uint _4144 = _4142 ^ (_4142 >> 11u);
                    uint _4147 = _4144 ^ ((_4144 << 7u) & 2636928640u);
                    uint _4150 = _4147 ^ ((_4147 << 15u) & 4022730752u);
                    uint _4152 = _4150 ^ (_4150 >> 18u);
                    vec2 _3385 = _5091;
                    uint _4171;
                    uint _4190;
                    uint _5102 = 0u;
                    uint _5258 = _4152;
                    for (;;)
                    {
                        if (!(_5102 < 2u))
                        {
                            break;
                        }
                        uint _4182 = _5258 + (_5258 << 10u);
                        uint _4184 = _4182 ^ (_4182 >> 6u);
                        uint _4186 = _4184 + (_4184 << 3u);
                        uint _4188 = _4186 ^ (_4186 >> 11u);
                        _4190 = _4188 + (_4188 << 15u);
                        _3385[_5102] = uintBitsToFloat((_5258 & 8388607u) | 1065353216u) - 1.0;
                        _4171 = _5102 + 1u;
                        _5258 = _4190;
                        _5102 = _4171;
                        continue;
                    }
                    _3445 = _3385;
                    uvec3 _3447 = uvec3(_3390 + ivec3(1));
                    uint _4206 = _3447.z;
                    uint _4212 = _4206 + (_4206 << 10u);
                    uint _4214 = _4212 ^ (_4212 >> 6u);
                    uint _4216 = _4214 + (_4214 << 3u);
                    uint _4218 = _4216 ^ (_4216 >> 11u);
                    uint _4226 = (((_3447.y * 1664525u) + (_4218 + (_4218 << 15u))) + 1013904223u) * 1664525u;
                    uint _4228 = _4226 ^ (_4226 >> 11u);
                    uint _4231 = _4228 ^ ((_4228 << 7u) & 2636928640u);
                    uint _4234 = _4231 ^ ((_4231 << 15u) & 4022730752u);
                    uint _4242 = (((_3447.x * 1664525u) + (_4234 ^ (_4234 >> 18u))) + 1013904223u) * 1664525u;
                    uint _4244 = _4242 ^ (_4242 >> 11u);
                    uint _4247 = _4244 ^ ((_4244 << 7u) & 2636928640u);
                    uint _4250 = _4247 ^ ((_4247 << 15u) & 4022730752u);
                    uint _4252 = _4250 ^ (_4250 >> 18u);
                    vec2 _3386 = _5110;
                    uint _4271;
                    uint _4290;
                    uint _5121 = 0u;
                    uint _5257 = _4252;
                    for (;;)
                    {
                        if (!(_5121 < 2u))
                        {
                            break;
                        }
                        uint _4282 = _5257 + (_5257 << 10u);
                        uint _4284 = _4282 ^ (_4282 >> 6u);
                        uint _4286 = _4284 + (_4284 << 3u);
                        uint _4288 = _4286 ^ (_4286 >> 11u);
                        _4290 = _4288 + (_4288 << 15u);
                        _3386[_5121] = uintBitsToFloat((_5257 & 8388607u) | 1065353216u) - 1.0;
                        _4271 = _5121 + 1u;
                        _5257 = _4290;
                        _5121 = _4271;
                        continue;
                    }
                    _3452 = _3386;
                    vec3 _4302 = (_3391 * _3391) * (vec3(3.0) - (vec3(2.0) * _3391));
                    float _3455 = _4302.x;
                    float _3456 = 1.0 - _3455;
                    float _3458 = _4302.y;
                    float _3459 = 1.0 - _3458;
                    float _3461 = _4302.z;
                    float _3462 = 1.0 - _3461;
                    vec2 _3369 = clamp((((((((((((_3399 * _3456) * _3459) * _3462) + (((_3406 * _3455) * _3459) * _3462)) + (((_3414 * _3456) * _3458) * _3462)) + (((_3421 * _3455) * _3458) * _3462)) + (((_3430 * _3456) * _3459) * _3461)) + (((_3437 * _3455) * _3459) * _3461)) + (((_3445 * _3456) * _3458) * _3461)) + (((_3452 * _3455) * _3458) * _3461)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
                    vec3 _4309 = vs_out_frag_position_ws - (_3295 + (vec3(_3369.x, 0.0, _3369.y) * 0.0599999986588954925537109375));
                    float _4319 = dot(_4309, _3353);
                    bool _3040 = !((_3288.w & 1u) != 0u);
                    bool _5162;
                    if (_3040)
                    {
                        _5162 = _4319 <= (-0.5);
                    }
                    else
                    {
                        _5162 = false;
                    }
                    if (_5162)
                    {
                        break;
                    }
                    vec2 _3049 = vec3(dot(_4309, _3355), _4309.y, _4319).xy;
                    vec2 _4334 = uintBitsToFloat(_3292.xy) - _3303;
                    float _4350 = float(_3288.w >> 8u);
                    float _4344 = textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3((_3049 - _3303) / _4334, _4350), 0.0).x * 0.25;
                    float _3051 = _4344 - 0.008000000379979610443115234375;
                    if (_3051 >= 0.0)
                    {
                        break;
                    }
                    float _4359 = dot(_1839, _3353);
                    vec2 _3057 = vec3(dot(_1839, _3355), _1839.y, _4359).xy;
                    float _3058 = length(_3057);
                    float _3059 = max(_3058, 9.9999997473787516355514526367188e-05);
                    bool _5167;
                    if (_3024 > 9.9999997473787516355514526367188e-05)
                    {
                        _5167 = _4344 >= 0.0;
                    }
                    else
                    {
                        _5167 = false;
                    }
                    bool _5163;
                    if (_3040)
                    {
                        _5163 = _4359 < 0.0;
                    }
                    else
                    {
                        _5163 = false;
                    }
                    float _5173;
                    if (_5163)
                    {
                        _5173 = (_4319 + 0.5) / (-_4359);
                    }
                    else
                    {
                        _5173 = 3.4028234663852885981170418348452e+38;
                    }
                    float _5176;
                    if ((_3058 > 9.9999997473787516355514526367188e-05) ? true : _5167)
                    {
                        float _3143;
                        float _3149;
                        uint _3156;
                        float _5177;
                        uint _5168 = 0u;
                        float _5169 = 0.0;
                        float _5170 = _3051;
                        for (;;)
                        {
                            if (!(_5168 < 3u))
                            {
                                _5177 = _5169;
                                break;
                            }
                            float _3104 = _5169 + (max(-_5170, 0.0) / (_3059 - ((max(0.008000000379979610443115234375 - (_3024 * _5169), 0.0) * (-249.9999847412109375)) * _3024)));
                            float _4394 = max(0.008000000379979610443115234375 - (_3024 * _3104), 0.0);
                            float _3117 = _3104 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3049 + (_3057 * _3104)) - _3303) / _4334, _4350), 0.0).x * 0.25) - ((_4394 * _4394) * 124.99999237060546875)), 0.0) / (_3059 - ((_4394 * (-249.9999847412109375)) * _3024)));
                            float _4430 = max(0.008000000379979610443115234375 - (_3024 * _3117), 0.0);
                            float _3130 = _3117 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3049 + (_3057 * _3117)) - _3303) / _4334, _4350), 0.0).x * 0.25) - ((_4430 * _4430) * 124.99999237060546875)), 0.0) / (_3059 - ((_4430 * (-249.9999847412109375)) * _3024)));
                            float _4466 = max(0.008000000379979610443115234375 - (_3024 * _3130), 0.0);
                            _3143 = _3130 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3049 + (_3057 * _3130)) - _3303) / _4334, _4350), 0.0).x * 0.25) - ((_4466 * _4466) * 124.99999237060546875)), 0.0) / (_3059 - ((_4466 * (-249.9999847412109375)) * _3024)));
                            float _4502 = max(0.008000000379979610443115234375 - (_3024 * _3143), 0.0);
                            _3149 = (textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3049 + (_3057 * _3143)) - _3303) / _4334, _4350), 0.0).x * 0.25) - ((_4502 * _4502) * 124.99999237060546875);
                            if (_3149 >= (-0.001000000047497451305389404296875))
                            {
                                _5177 = _3143;
                                break;
                            }
                            _3156 = _5168 + 1u;
                            _5170 = _3149;
                            _5169 = _3143;
                            _5168 = _3156;
                            continue;
                        }
                        _5176 = _5177;
                    }
                    else
                    {
                        _5176 = 3.4028234663852885981170418348452e+38;
                    }
                    bool _3163 = _5176 <= min(_5173, _2987);
                    vec3 _5196;
                    if (_3163)
                    {
                        vec2 _3167 = _3049 + (_3057 * _5176);
                        vec2 _3172 = _4334 * vec2(0.0078125);
                        float _4522 = textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3((_3167 - _3303) / _4334, _4350), 0.0).x * 0.25;
                        if ((dot(vec2((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3167 + vec2(_3172.x, 0.0)) - _3303) / _4334, _4350), 0.0).x * 0.25) - _4522, (textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_3167 + vec2(0.0, _3172.y)) - _3303) / _4334, _4350), 0.0).x * 0.25) - _4522) / _3172, _3057) - ((max(0.008000000379979610443115234375 - (_3024 * _5176), 0.0) * (-249.9999847412109375)) * _3024)) <= 0.0)
                        {
                            _5314 = true;
                            _5290 = false;
                            _5266 = vec3(0.0);
                            _5245 = true;
                            _5244 = false;
                            _5243 = vec3(0.0);
                            _3027_ladder_break = true;
                            break;
                        }
                        _5196 = vs_out_frag_position_ws + (_1839 * _5176);
                    }
                    else
                    {
                        _5196 = vec3(0.0);
                    }
                    bool _5398 = _3163 ? true : false;
                    _5314 = true;
                    _5290 = _5398;
                    _5266 = _5196;
                    _5245 = true;
                    _5244 = _5398;
                    _5243 = _5196;
                    _3027_ladder_break = true;
                    break;
                } while(false);
                if (_3027_ladder_break)
                {
                    break;
                }
                _3217 = _4997 + 1u;
                _5110 = _3452;
                _5091 = _3445;
                _5073 = _3437;
                _5056 = _3430;
                _5040 = _3421;
                _5025 = _3414;
                _5011 = _3406;
                _4998 = _3399;
                _4997 = _3217;
                continue;
            }
            if (_5245)
            {
                _5313 = _5314;
                _5289 = _5290;
                _5265 = _5266;
                break;
            }
            _5313 = _5245;
            _5289 = _5244;
            _5265 = _5243;
            break;
        } while(false);
        float _5338;
        if (_5313)
        {
            if (!_5289)
            {
                demote;
            }
            vec4 _4602 = (vec4(_5265, 1.0) * current_view.world_to_view) * current_view.view_to_sample;
            _5338 = max((_4602.xyz / vec3(_4602.w)).z, gl_FragCoord.z);
        }
        else
        {
            _5338 = gl_FragCoord.z;
        }
        _5337 = _5338;
    }
    else
    {
        _5337 = gl_FragCoord.z;
    }
    gl_FragDepth = _5337;
}

