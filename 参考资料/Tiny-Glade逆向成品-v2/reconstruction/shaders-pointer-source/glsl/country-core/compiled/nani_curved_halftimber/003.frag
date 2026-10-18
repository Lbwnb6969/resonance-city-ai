#version 460
#extension GL_EXT_buffer_reference2 : require
#extension GL_ARB_conservative_depth : require
#extension GL_EXT_buffer_reference_uvec2 : require
#extension GL_EXT_demote_to_helper_invocation : require
layout(depth_greater) out float gl_FragDepth;

layout(buffer_reference) buffer uintPointer;
layout(buffer_reference) buffer uvec4Pointer;

struct CurvedHalftimberInstanceData_natural
{
    vec3 position;
    uint color_id;
    float radius0;
    float radius1;
    float angle0;
    float angle1;
    int is_straight;
    int is_xz;
    float plank_depth;
    int caps;
    int mesh_atlas_part_idx;
    uint seed;
    uint flags;
    uint wall_slot_id;
    uvec2 window_cut_buffer_address;
    uint window_cut_list;
    uint pad3;
};

vec2 _4330;
vec3 _4576;
bool _4597;

struct _4687
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
    CurvedHalftimberInstanceData_natural _member0[];
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

layout(set = 0, binding = 5) uniform texture2DArray material_data_window_cut_sdf;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 0, binding = 4) uniform texture2D material_data_wood_edge_damage;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 8, binding = 1) uniform texture2DArray wooden_wall_colors_tex;
layout(set = 7, binding = 1) uniform texture2DArray halftimber_colors_tex;
layout(set = 0, binding = 3) uniform texture2D material_data_wood_roughness;
layout(set = 0, binding = 2) uniform texture2D material_data_wood_normal;
layout(set = 0, binding = 1) uniform texture2D material_data_dirtpath_heightmap;

layout(location = 2) flat in uint vs_out_instance_index;
layout(location = 1) in vec3 vs_out_frag_position_ws;
layout(location = 0) in vec3 vs_out_frag_normal_ws;

void main()
{
    uint _2138 = material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_list >> 24u;
    float _4632;
    if (_2138 != 0u)
    {
        vec3 _2165 = normalize((vec4(0.0, 0.0, -1.0, 0.0) * current_view.view_to_world).xyz);
        vec3 _2173 = vs_out_frag_position_ws - material_data_nani_instance_data._member0[vs_out_instance_index].position;
        float _2179 = 0.0500000007450580596923828125 * (material_data_nani_instance_data._member0[vs_out_instance_index].radius1 - material_data_nani_instance_data._member0[vs_out_instance_index].radius0);
        float _2183 = (0.0500000007450580596923828125 * material_data_nani_instance_data._member0[vs_out_instance_index].plank_depth) + 0.0040000001899898052215576171875;
        float _2184 = _2165.y;
        float _4319;
        if (_2184 > 0.0)
        {
            _4319 = ((material_data_nani_instance_data._member0[vs_out_instance_index].plank_depth + _2183) - _2173.y) / _2184;
        }
        else
        {
            float _4320;
            if (_2184 < 0.0)
            {
                _4320 = (-(_2173.y + _2183)) / _2184;
            }
            else
            {
                _4320 = 3.4028234663852885981170418348452e+38;
            }
            _4319 = _4320;
        }
        vec2 _2201 = _2173.xz;
        vec2 _2202 = _2165.xz;
        float _2203 = dot(_2202, _2202);
        float _4311;
        float _4315;
        if (_2203 > 9.9999999392252902907785028219223e-09)
        {
            float _2207 = dot(_2201, _2202);
            float _2208 = material_data_nani_instance_data._member0[vs_out_instance_index].radius1 + _2179;
            float _2209 = dot(_2201, _2201);
            float _2212 = _2207 * _2207;
            float _2214 = _2212 - (_2203 * (_2209 - (_2208 * _2208)));
            float _4313;
            if (_2214 >= 0.0)
            {
                _4313 = ((-_2207) + sqrt(_2214)) / _2203;
            }
            else
            {
                _4313 = 3.4028234663852885981170418348452e+38;
            }
            float _2224 = max(material_data_nani_instance_data._member0[vs_out_instance_index].radius0 - _2179, 0.0);
            float _2228 = _2212 - (_2203 * (_2209 - (_2224 * _2224)));
            float _4316;
            if (_2228 >= 0.0)
            {
                float _2235 = ((-_2207) - sqrt(_2228)) / _2203;
                _4316 = (_2235 >= 0.0) ? _2235 : 3.4028234663852885981170418348452e+38;
            }
            else
            {
                _4316 = 3.4028234663852885981170418348452e+38;
            }
            _4315 = _4316;
            _4311 = _4313;
        }
        else
        {
            _4315 = 3.4028234663852885981170418348452e+38;
            _4311 = 3.4028234663852885981170418348452e+38;
        }
        float _2247 = max(0.0, min(_4319, min(_4311, _4315)));
        vec3 _4569;
        bool _4590;
        bool _4611;
        do
        {
            if (all(equal(material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address, uvec2(0u))))
            {
                _4611 = false;
                _4590 = false;
                _4569 = vec3(0.0);
                break;
            }
            uint _2497 = material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_list & 16777215u;
            float _2283 = max(-dot(_2165, normalize(vs_out_frag_normal_ws)), 0.0);
            vec2 _4325;
            vec2 _4336;
            vec2 _4347;
            vec2 _4359;
            vec2 _4372;
            vec2 _4386;
            vec2 _4401;
            vec2 _4417;
            _4417 = _4330;
            _4401 = _4330;
            _4386 = _4330;
            _4372 = _4330;
            _4359 = _4330;
            _4347 = _4330;
            _4336 = _4330;
            _4325 = _4330;
            uint _2476;
            vec2 _2657;
            vec2 _2664;
            vec2 _2672;
            vec2 _2679;
            vec2 _2688;
            vec2 _2695;
            vec2 _2703;
            vec2 _2710;
            vec3 _4547;
            bool _4548;
            bool _4549;
            vec3 _4570;
            bool _4591;
            bool _4612;
            uint _4324 = 0u;
            for (;;)
            {
                bool _2286_ladder_break = false;
                do
                {
                    if (!(_4324 < _2138))
                    {
                        _4612 = _4597;
                        _4591 = _4597;
                        _4570 = _4576;
                        _4549 = false;
                        _4548 = false;
                        _4547 = vec3(0.0);
                        _2286_ladder_break = true;
                        break;
                    }
                    uint _2516 = material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x + (4u * (_2497 + _4324));
                    uvec2 _4688 = uvec2(uintPointer(uvec2(_2516, material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.y + uint(_2516 < material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x))));
                    uint _4689 = _4688.x;
                    _4687 _4691;
                    imulExtended(0, 4, _4691._m1, _4691._m0);
                    uint _4696 = _4689 + uint(_4691._m0);
                    uint _2503 = uintPointer(uvec2(_4696, (_4688.y + uint(_4691._m1)) + uint(_4696 < _4689))).value;
                    uint _2578 = material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x + (48u * _2503);
                    uvec4Pointer _2601 = uvec4Pointer(uvec2(_2578, material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.y + uint(_2578 < material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x)));
                    uvec2 _4703 = uvec2(_2601);
                    uint _4704 = _4703.x;
                    _4687 _4706;
                    imulExtended(0, 16, _4706._m1, _4706._m0);
                    uint _4711 = _4704 + uint(_4706._m0);
                    uvec4 _2546 = uvec4Pointer(uvec2(_4711, (_4703.y + uint(_4706._m1)) + uint(_4711 < _4704))).value;
                    uvec2 _4717 = uvec2(_2601);
                    uint _4718 = _4717.x;
                    _4687 _4720;
                    imulExtended(1, 16, _4720._m1, _4720._m0);
                    uint _4725 = _4718 + uint(_4720._m0);
                    uvec4 _2548 = uvec4Pointer(uvec2(_4725, (_4717.y + uint(_4720._m1)) + uint(_4725 < _4718))).value;
                    uvec2 _4731 = uvec2(_2601);
                    uint _4732 = _4731.x;
                    _4687 _4734;
                    imulExtended(2, 16, _4734._m1, _4734._m0);
                    uint _4739 = _4732 + uint(_4734._m0);
                    uvec4 _2550 = uvec4Pointer(uvec2(_4739, (_4731.y + uint(_4734._m1)) + uint(_4739 < _4732))).value;
                    vec3 _2553 = uintBitsToFloat(_2546.xyz);
                    vec2 _2558 = uintBitsToFloat(_2548.xy);
                    vec2 _2561 = uintBitsToFloat(_2548.zw);
                    vec3 _2611 = normalize(vec3(_2558.x, 0.0, _2558.y));
                    vec3 _2613 = cross(vec3(0.0, 1.0, 0.0), _2611);
                    vec3 _2622 = _2553 * 0.4000000059604644775390625;
                    ivec3 _2648 = ivec3(floor(_2622));
                    vec3 _2649 = fract(_2622);
                    uvec3 _2650 = uvec3(_2648);
                    uint _2764 = _2650.z;
                    uint _2770 = _2764 + (_2764 << 10u);
                    uint _2772 = _2770 ^ (_2770 >> 6u);
                    uint _2774 = _2772 + (_2772 << 3u);
                    uint _2776 = _2774 ^ (_2774 >> 11u);
                    uint _2784 = (((_2650.y * 1664525u) + (_2776 + (_2776 << 15u))) + 1013904223u) * 1664525u;
                    uint _2786 = _2784 ^ (_2784 >> 11u);
                    uint _2789 = _2786 ^ ((_2786 << 7u) & 2636928640u);
                    uint _2792 = _2789 ^ ((_2789 << 15u) & 4022730752u);
                    uint _2800 = (((_2650.x * 1664525u) + (_2792 ^ (_2792 >> 18u))) + 1013904223u) * 1664525u;
                    uint _2802 = _2800 ^ (_2800 >> 11u);
                    uint _2805 = _2802 ^ ((_2802 << 7u) & 2636928640u);
                    uint _2808 = _2805 ^ ((_2805 << 15u) & 4022730752u);
                    uint _2810 = _2808 ^ (_2808 >> 18u);
                    vec2 _2637 = _4325;
                    uint _2829;
                    uint _2848;
                    uint _4334 = 0u;
                    uint _4568 = _2810;
                    for (;;)
                    {
                        if (!(_4334 < 2u))
                        {
                            break;
                        }
                        uint _2840 = _4568 + (_4568 << 10u);
                        uint _2842 = _2840 ^ (_2840 >> 6u);
                        uint _2844 = _2842 + (_2842 << 3u);
                        uint _2846 = _2844 ^ (_2844 >> 11u);
                        _2848 = _2846 + (_2846 << 15u);
                        _2637[_4334] = uintBitsToFloat((_4568 & 8388607u) | 1065353216u) - 1.0;
                        _2829 = _4334 + 1u;
                        _4568 = _2848;
                        _4334 = _2829;
                        continue;
                    }
                    _2657 = _2637;
                    uvec3 _2659 = uvec3(_2648 + ivec3(1, 0, 0));
                    uint _2864 = _2659.z;
                    uint _2870 = _2864 + (_2864 << 10u);
                    uint _2872 = _2870 ^ (_2870 >> 6u);
                    uint _2874 = _2872 + (_2872 << 3u);
                    uint _2876 = _2874 ^ (_2874 >> 11u);
                    uint _2884 = (((_2659.y * 1664525u) + (_2876 + (_2876 << 15u))) + 1013904223u) * 1664525u;
                    uint _2886 = _2884 ^ (_2884 >> 11u);
                    uint _2889 = _2886 ^ ((_2886 << 7u) & 2636928640u);
                    uint _2892 = _2889 ^ ((_2889 << 15u) & 4022730752u);
                    uint _2900 = (((_2659.x * 1664525u) + (_2892 ^ (_2892 >> 18u))) + 1013904223u) * 1664525u;
                    uint _2902 = _2900 ^ (_2900 >> 11u);
                    uint _2905 = _2902 ^ ((_2902 << 7u) & 2636928640u);
                    uint _2908 = _2905 ^ ((_2905 << 15u) & 4022730752u);
                    uint _2910 = _2908 ^ (_2908 >> 18u);
                    vec2 _2638 = _4336;
                    uint _2929;
                    uint _2948;
                    uint _4344 = 0u;
                    uint _4567 = _2910;
                    for (;;)
                    {
                        if (!(_4344 < 2u))
                        {
                            break;
                        }
                        uint _2940 = _4567 + (_4567 << 10u);
                        uint _2942 = _2940 ^ (_2940 >> 6u);
                        uint _2944 = _2942 + (_2942 << 3u);
                        uint _2946 = _2944 ^ (_2944 >> 11u);
                        _2948 = _2946 + (_2946 << 15u);
                        _2638[_4344] = uintBitsToFloat((_4567 & 8388607u) | 1065353216u) - 1.0;
                        _2929 = _4344 + 1u;
                        _4567 = _2948;
                        _4344 = _2929;
                        continue;
                    }
                    _2664 = _2638;
                    uvec3 _2666 = uvec3(_2648 + ivec3(0, 1, 0));
                    uint _2964 = _2666.z;
                    uint _2970 = _2964 + (_2964 << 10u);
                    uint _2972 = _2970 ^ (_2970 >> 6u);
                    uint _2974 = _2972 + (_2972 << 3u);
                    uint _2976 = _2974 ^ (_2974 >> 11u);
                    uint _2984 = (((_2666.y * 1664525u) + (_2976 + (_2976 << 15u))) + 1013904223u) * 1664525u;
                    uint _2986 = _2984 ^ (_2984 >> 11u);
                    uint _2989 = _2986 ^ ((_2986 << 7u) & 2636928640u);
                    uint _2992 = _2989 ^ ((_2989 << 15u) & 4022730752u);
                    uint _3000 = (((_2666.x * 1664525u) + (_2992 ^ (_2992 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3002 = _3000 ^ (_3000 >> 11u);
                    uint _3005 = _3002 ^ ((_3002 << 7u) & 2636928640u);
                    uint _3008 = _3005 ^ ((_3005 << 15u) & 4022730752u);
                    uint _3010 = _3008 ^ (_3008 >> 18u);
                    vec2 _2639 = _4347;
                    uint _3029;
                    uint _3048;
                    uint _4355 = 0u;
                    uint _4566 = _3010;
                    for (;;)
                    {
                        if (!(_4355 < 2u))
                        {
                            break;
                        }
                        uint _3040 = _4566 + (_4566 << 10u);
                        uint _3042 = _3040 ^ (_3040 >> 6u);
                        uint _3044 = _3042 + (_3042 << 3u);
                        uint _3046 = _3044 ^ (_3044 >> 11u);
                        _3048 = _3046 + (_3046 << 15u);
                        _2639[_4355] = uintBitsToFloat((_4566 & 8388607u) | 1065353216u) - 1.0;
                        _3029 = _4355 + 1u;
                        _4566 = _3048;
                        _4355 = _3029;
                        continue;
                    }
                    _2672 = _2639;
                    uvec3 _2674 = uvec3(_2648 + ivec3(1, 1, 0));
                    uint _3064 = _2674.z;
                    uint _3070 = _3064 + (_3064 << 10u);
                    uint _3072 = _3070 ^ (_3070 >> 6u);
                    uint _3074 = _3072 + (_3072 << 3u);
                    uint _3076 = _3074 ^ (_3074 >> 11u);
                    uint _3084 = (((_2674.y * 1664525u) + (_3076 + (_3076 << 15u))) + 1013904223u) * 1664525u;
                    uint _3086 = _3084 ^ (_3084 >> 11u);
                    uint _3089 = _3086 ^ ((_3086 << 7u) & 2636928640u);
                    uint _3092 = _3089 ^ ((_3089 << 15u) & 4022730752u);
                    uint _3100 = (((_2674.x * 1664525u) + (_3092 ^ (_3092 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3102 = _3100 ^ (_3100 >> 11u);
                    uint _3105 = _3102 ^ ((_3102 << 7u) & 2636928640u);
                    uint _3108 = _3105 ^ ((_3105 << 15u) & 4022730752u);
                    uint _3110 = _3108 ^ (_3108 >> 18u);
                    vec2 _2640 = _4359;
                    uint _3129;
                    uint _3148;
                    uint _4367 = 0u;
                    uint _4565 = _3110;
                    for (;;)
                    {
                        if (!(_4367 < 2u))
                        {
                            break;
                        }
                        uint _3140 = _4565 + (_4565 << 10u);
                        uint _3142 = _3140 ^ (_3140 >> 6u);
                        uint _3144 = _3142 + (_3142 << 3u);
                        uint _3146 = _3144 ^ (_3144 >> 11u);
                        _3148 = _3146 + (_3146 << 15u);
                        _2640[_4367] = uintBitsToFloat((_4565 & 8388607u) | 1065353216u) - 1.0;
                        _3129 = _4367 + 1u;
                        _4565 = _3148;
                        _4367 = _3129;
                        continue;
                    }
                    _2679 = _2640;
                    uvec3 _2681 = uvec3(_2648 + ivec3(0, 0, 1));
                    uint _3164 = _2681.z;
                    uint _3170 = _3164 + (_3164 << 10u);
                    uint _3172 = _3170 ^ (_3170 >> 6u);
                    uint _3174 = _3172 + (_3172 << 3u);
                    uint _3176 = _3174 ^ (_3174 >> 11u);
                    uint _3184 = (((_2681.y * 1664525u) + (_3176 + (_3176 << 15u))) + 1013904223u) * 1664525u;
                    uint _3186 = _3184 ^ (_3184 >> 11u);
                    uint _3189 = _3186 ^ ((_3186 << 7u) & 2636928640u);
                    uint _3192 = _3189 ^ ((_3189 << 15u) & 4022730752u);
                    uint _3200 = (((_2681.x * 1664525u) + (_3192 ^ (_3192 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3202 = _3200 ^ (_3200 >> 11u);
                    uint _3205 = _3202 ^ ((_3202 << 7u) & 2636928640u);
                    uint _3208 = _3205 ^ ((_3205 << 15u) & 4022730752u);
                    uint _3210 = _3208 ^ (_3208 >> 18u);
                    vec2 _2641 = _4372;
                    uint _3229;
                    uint _3248;
                    uint _4380 = 0u;
                    uint _4564 = _3210;
                    for (;;)
                    {
                        if (!(_4380 < 2u))
                        {
                            break;
                        }
                        uint _3240 = _4564 + (_4564 << 10u);
                        uint _3242 = _3240 ^ (_3240 >> 6u);
                        uint _3244 = _3242 + (_3242 << 3u);
                        uint _3246 = _3244 ^ (_3244 >> 11u);
                        _3248 = _3246 + (_3246 << 15u);
                        _2641[_4380] = uintBitsToFloat((_4564 & 8388607u) | 1065353216u) - 1.0;
                        _3229 = _4380 + 1u;
                        _4564 = _3248;
                        _4380 = _3229;
                        continue;
                    }
                    _2688 = _2641;
                    uvec3 _2690 = uvec3(_2648 + ivec3(1, 0, 1));
                    uint _3264 = _2690.z;
                    uint _3270 = _3264 + (_3264 << 10u);
                    uint _3272 = _3270 ^ (_3270 >> 6u);
                    uint _3274 = _3272 + (_3272 << 3u);
                    uint _3276 = _3274 ^ (_3274 >> 11u);
                    uint _3284 = (((_2690.y * 1664525u) + (_3276 + (_3276 << 15u))) + 1013904223u) * 1664525u;
                    uint _3286 = _3284 ^ (_3284 >> 11u);
                    uint _3289 = _3286 ^ ((_3286 << 7u) & 2636928640u);
                    uint _3292 = _3289 ^ ((_3289 << 15u) & 4022730752u);
                    uint _3300 = (((_2690.x * 1664525u) + (_3292 ^ (_3292 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3302 = _3300 ^ (_3300 >> 11u);
                    uint _3305 = _3302 ^ ((_3302 << 7u) & 2636928640u);
                    uint _3308 = _3305 ^ ((_3305 << 15u) & 4022730752u);
                    uint _3310 = _3308 ^ (_3308 >> 18u);
                    vec2 _2642 = _4386;
                    uint _3329;
                    uint _3348;
                    uint _4394 = 0u;
                    uint _4563 = _3310;
                    for (;;)
                    {
                        if (!(_4394 < 2u))
                        {
                            break;
                        }
                        uint _3340 = _4563 + (_4563 << 10u);
                        uint _3342 = _3340 ^ (_3340 >> 6u);
                        uint _3344 = _3342 + (_3342 << 3u);
                        uint _3346 = _3344 ^ (_3344 >> 11u);
                        _3348 = _3346 + (_3346 << 15u);
                        _2642[_4394] = uintBitsToFloat((_4563 & 8388607u) | 1065353216u) - 1.0;
                        _3329 = _4394 + 1u;
                        _4563 = _3348;
                        _4394 = _3329;
                        continue;
                    }
                    _2695 = _2642;
                    uvec3 _2697 = uvec3(_2648 + ivec3(0, 1, 1));
                    uint _3364 = _2697.z;
                    uint _3370 = _3364 + (_3364 << 10u);
                    uint _3372 = _3370 ^ (_3370 >> 6u);
                    uint _3374 = _3372 + (_3372 << 3u);
                    uint _3376 = _3374 ^ (_3374 >> 11u);
                    uint _3384 = (((_2697.y * 1664525u) + (_3376 + (_3376 << 15u))) + 1013904223u) * 1664525u;
                    uint _3386 = _3384 ^ (_3384 >> 11u);
                    uint _3389 = _3386 ^ ((_3386 << 7u) & 2636928640u);
                    uint _3392 = _3389 ^ ((_3389 << 15u) & 4022730752u);
                    uint _3400 = (((_2697.x * 1664525u) + (_3392 ^ (_3392 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3402 = _3400 ^ (_3400 >> 11u);
                    uint _3405 = _3402 ^ ((_3402 << 7u) & 2636928640u);
                    uint _3408 = _3405 ^ ((_3405 << 15u) & 4022730752u);
                    uint _3410 = _3408 ^ (_3408 >> 18u);
                    vec2 _2643 = _4401;
                    uint _3429;
                    uint _3448;
                    uint _4409 = 0u;
                    uint _4562 = _3410;
                    for (;;)
                    {
                        if (!(_4409 < 2u))
                        {
                            break;
                        }
                        uint _3440 = _4562 + (_4562 << 10u);
                        uint _3442 = _3440 ^ (_3440 >> 6u);
                        uint _3444 = _3442 + (_3442 << 3u);
                        uint _3446 = _3444 ^ (_3444 >> 11u);
                        _3448 = _3446 + (_3446 << 15u);
                        _2643[_4409] = uintBitsToFloat((_4562 & 8388607u) | 1065353216u) - 1.0;
                        _3429 = _4409 + 1u;
                        _4562 = _3448;
                        _4409 = _3429;
                        continue;
                    }
                    _2703 = _2643;
                    uvec3 _2705 = uvec3(_2648 + ivec3(1));
                    uint _3464 = _2705.z;
                    uint _3470 = _3464 + (_3464 << 10u);
                    uint _3472 = _3470 ^ (_3470 >> 6u);
                    uint _3474 = _3472 + (_3472 << 3u);
                    uint _3476 = _3474 ^ (_3474 >> 11u);
                    uint _3484 = (((_2705.y * 1664525u) + (_3476 + (_3476 << 15u))) + 1013904223u) * 1664525u;
                    uint _3486 = _3484 ^ (_3484 >> 11u);
                    uint _3489 = _3486 ^ ((_3486 << 7u) & 2636928640u);
                    uint _3492 = _3489 ^ ((_3489 << 15u) & 4022730752u);
                    uint _3500 = (((_2705.x * 1664525u) + (_3492 ^ (_3492 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3502 = _3500 ^ (_3500 >> 11u);
                    uint _3505 = _3502 ^ ((_3502 << 7u) & 2636928640u);
                    uint _3508 = _3505 ^ ((_3505 << 15u) & 4022730752u);
                    uint _3510 = _3508 ^ (_3508 >> 18u);
                    vec2 _2644 = _4417;
                    uint _3529;
                    uint _3548;
                    uint _4425 = 0u;
                    uint _4561 = _3510;
                    for (;;)
                    {
                        if (!(_4425 < 2u))
                        {
                            break;
                        }
                        uint _3540 = _4561 + (_4561 << 10u);
                        uint _3542 = _3540 ^ (_3540 >> 6u);
                        uint _3544 = _3542 + (_3542 << 3u);
                        uint _3546 = _3544 ^ (_3544 >> 11u);
                        _3548 = _3546 + (_3546 << 15u);
                        _2644[_4425] = uintBitsToFloat((_4561 & 8388607u) | 1065353216u) - 1.0;
                        _3529 = _4425 + 1u;
                        _4561 = _3548;
                        _4425 = _3529;
                        continue;
                    }
                    _2710 = _2644;
                    vec3 _3560 = (_2649 * _2649) * (vec3(3.0) - (vec3(2.0) * _2649));
                    float _2713 = _3560.x;
                    float _2714 = 1.0 - _2713;
                    float _2716 = _3560.y;
                    float _2717 = 1.0 - _2716;
                    float _2719 = _3560.z;
                    float _2720 = 1.0 - _2719;
                    vec2 _2627 = clamp((((((((((((_2657 * _2714) * _2717) * _2720) + (((_2664 * _2713) * _2717) * _2720)) + (((_2672 * _2714) * _2716) * _2720)) + (((_2679 * _2713) * _2716) * _2720)) + (((_2688 * _2714) * _2717) * _2719)) + (((_2695 * _2713) * _2717) * _2719)) + (((_2703 * _2714) * _2716) * _2719)) + (((_2710 * _2713) * _2716) * _2719)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
                    vec3 _3567 = vs_out_frag_position_ws - (_2553 + (vec3(_2627.x, 0.0, _2627.y) * 0.0599999986588954925537109375));
                    float _3577 = dot(_3567, _2611);
                    bool _2299 = !((_2546.w & 1u) != 0u);
                    bool _4466;
                    if (_2299)
                    {
                        _4466 = _3577 <= (-0.5);
                    }
                    else
                    {
                        _4466 = false;
                    }
                    if (_4466)
                    {
                        break;
                    }
                    vec2 _2308 = vec3(dot(_3567, _2613), _3567.y, _3577).xy;
                    vec2 _3592 = uintBitsToFloat(_2550.xy) - _2561;
                    float _3608 = float(_2546.w >> 8u);
                    float _3602 = textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3((_2308 - _2561) / _3592, _3608), 0.0).x * 0.25;
                    float _2310 = _3602 - 0.008000000379979610443115234375;
                    if (_2310 >= 0.0)
                    {
                        break;
                    }
                    float _3617 = dot(_2165, _2611);
                    vec2 _2316 = vec3(dot(_2165, _2613), _2184, _3617).xy;
                    float _2317 = length(_2316);
                    float _2318 = max(_2317, 9.9999997473787516355514526367188e-05);
                    bool _4471;
                    if (_2283 > 9.9999997473787516355514526367188e-05)
                    {
                        _4471 = _3602 >= 0.0;
                    }
                    else
                    {
                        _4471 = false;
                    }
                    bool _4467;
                    if (_2299)
                    {
                        _4467 = _3617 < 0.0;
                    }
                    else
                    {
                        _4467 = false;
                    }
                    float _4477;
                    if (_4467)
                    {
                        _4477 = (_3577 + 0.5) / (-_3617);
                    }
                    else
                    {
                        _4477 = 3.4028234663852885981170418348452e+38;
                    }
                    float _4480;
                    if ((_2317 > 9.9999997473787516355514526367188e-05) ? true : _4471)
                    {
                        float _2402;
                        float _2408;
                        uint _2415;
                        float _4481;
                        uint _4472 = 0u;
                        float _4473 = 0.0;
                        float _4474 = _2310;
                        for (;;)
                        {
                            if (!(_4472 < 3u))
                            {
                                _4481 = _4473;
                                break;
                            }
                            float _2363 = _4473 + (max(-_4474, 0.0) / (_2318 - ((max(0.008000000379979610443115234375 - (_2283 * _4473), 0.0) * (-249.9999847412109375)) * _2283)));
                            float _3652 = max(0.008000000379979610443115234375 - (_2283 * _2363), 0.0);
                            float _2376 = _2363 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_2308 + (_2316 * _2363)) - _2561) / _3592, _3608), 0.0).x * 0.25) - ((_3652 * _3652) * 124.99999237060546875)), 0.0) / (_2318 - ((_3652 * (-249.9999847412109375)) * _2283)));
                            float _3688 = max(0.008000000379979610443115234375 - (_2283 * _2376), 0.0);
                            float _2389 = _2376 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_2308 + (_2316 * _2376)) - _2561) / _3592, _3608), 0.0).x * 0.25) - ((_3688 * _3688) * 124.99999237060546875)), 0.0) / (_2318 - ((_3688 * (-249.9999847412109375)) * _2283)));
                            float _3724 = max(0.008000000379979610443115234375 - (_2283 * _2389), 0.0);
                            _2402 = _2389 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_2308 + (_2316 * _2389)) - _2561) / _3592, _3608), 0.0).x * 0.25) - ((_3724 * _3724) * 124.99999237060546875)), 0.0) / (_2318 - ((_3724 * (-249.9999847412109375)) * _2283)));
                            float _3760 = max(0.008000000379979610443115234375 - (_2283 * _2402), 0.0);
                            _2408 = (textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_2308 + (_2316 * _2402)) - _2561) / _3592, _3608), 0.0).x * 0.25) - ((_3760 * _3760) * 124.99999237060546875);
                            if (_2408 >= (-0.001000000047497451305389404296875))
                            {
                                _4481 = _2402;
                                break;
                            }
                            _2415 = _4472 + 1u;
                            _4474 = _2408;
                            _4473 = _2402;
                            _4472 = _2415;
                            continue;
                        }
                        _4480 = _4481;
                    }
                    else
                    {
                        _4480 = 3.4028234663852885981170418348452e+38;
                    }
                    bool _2422 = _4480 <= min(_4477, _2247);
                    vec3 _4500;
                    if (_2422)
                    {
                        vec2 _2426 = _2308 + (_2316 * _4480);
                        vec2 _2431 = _3592 * vec2(0.0078125);
                        float _3780 = textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3((_2426 - _2561) / _3592, _3608), 0.0).x * 0.25;
                        if ((dot(vec2((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_2426 + vec2(_2431.x, 0.0)) - _2561) / _3592, _3608), 0.0).x * 0.25) - _3780, (textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_2426 + vec2(0.0, _2431.y)) - _2561) / _3592, _3608), 0.0).x * 0.25) - _3780) / _2431, _2316) - ((max(0.008000000379979610443115234375 - (_2283 * _4480), 0.0) * (-249.9999847412109375)) * _2283)) <= 0.0)
                        {
                            _4612 = true;
                            _4591 = false;
                            _4570 = vec3(0.0);
                            _4549 = true;
                            _4548 = false;
                            _4547 = vec3(0.0);
                            _2286_ladder_break = true;
                            break;
                        }
                        _4500 = vs_out_frag_position_ws + (_2165 * _4480);
                    }
                    else
                    {
                        _4500 = vec3(0.0);
                    }
                    bool _4686 = _2422 ? true : false;
                    _4612 = true;
                    _4591 = _4686;
                    _4570 = _4500;
                    _4549 = true;
                    _4548 = _4686;
                    _4547 = _4500;
                    _2286_ladder_break = true;
                    break;
                } while(false);
                if (_2286_ladder_break)
                {
                    break;
                }
                _2476 = _4324 + 1u;
                _4417 = _2710;
                _4401 = _2703;
                _4386 = _2695;
                _4372 = _2688;
                _4359 = _2679;
                _4347 = _2672;
                _4336 = _2664;
                _4325 = _2657;
                _4324 = _2476;
                continue;
            }
            if (_4549)
            {
                _4611 = _4612;
                _4590 = _4591;
                _4569 = _4570;
                break;
            }
            _4611 = _4549;
            _4590 = _4548;
            _4569 = _4547;
            break;
        } while(false);
        float _4633;
        if (_4611)
        {
            if (!_4590)
            {
                demote;
            }
            vec4 _3860 = (vec4(_4569, 1.0) * current_view.world_to_view) * current_view.view_to_sample;
            _4633 = max((_3860.xyz / vec3(_3860.w)).z, gl_FragCoord.z);
        }
        else
        {
            _4633 = gl_FragCoord.z;
        }
        _4632 = _4633;
    }
    else
    {
        _4632 = gl_FragCoord.z;
    }
    gl_FragDepth = _4632;
}

