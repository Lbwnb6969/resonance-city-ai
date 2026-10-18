#version 460
#extension GL_EXT_buffer_reference2 : require
#extension GL_ARB_conservative_depth : require
#extension GL_EXT_buffer_reference_uvec2 : require
#extension GL_EXT_demote_to_helper_invocation : require
layout(depth_less) out float gl_FragDepth;

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

vec2 _4755;
vec3 _5001;
bool _5042;

struct _5797
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
layout(location = 5) in vec2 vs_out_tex_uv;
layout(location = 3) in float vs_out_use_hard_normal;
layout(location = 6) in float vs_out_angle01;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec2 uv = vs_out_tex_uv * vec2(0.4000000059604644775390625, 0.0599999986588954925537109375);
    uint _282 = material_data_nani_instance_data._member0[vs_out_instance_index].seed ^ 2340774u;
    uint _2226 = _282 + (_282 << 10u);
    uint _2228 = _2226 ^ (_2226 >> 6u);
    uint _2230 = _2228 + (_2228 << 3u);
    uint _2232 = _2230 ^ (_2230 >> 11u);
    uint _323 = material_data_nani_instance_data._member0[vs_out_instance_index].seed ^ 934565u;
    uint _2248 = _323 + (_323 << 10u);
    uint _2250 = _2248 ^ (_2248 >> 6u);
    uint _2252 = _2250 + (_2250 << 3u);
    uint _2254 = _2252 ^ (_2252 >> 11u);
    vec2 seed_uv_offset = vec2(uintBitsToFloat(((_2232 + (_2232 << 15u)) & 8388607u) | 1065353216u) - 1.0, uintBitsToFloat(((_2254 + (_2254 << 15u)) & 8388607u) | 1065353216u) - 1.0);
    uint _2265 = material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_list >> 24u;
    bool _5078;
    vec3 _5132;
    vec3 _5253;
    float _5719;
    if (_2265 != 0u)
    {
        vec4 _2281 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
        vec3 _2272 = normalize(vs_out_frag_position_ws - (_2281.xyz / vec3(_2281.w)));
        vec3 _387 = normalize(vs_out_frag_normal_ws);
        vec3 _2300 = vs_out_frag_position_ws - material_data_nani_instance_data._member0[vs_out_instance_index].position;
        float _2306 = 0.0500000007450580596923828125 * (material_data_nani_instance_data._member0[vs_out_instance_index].radius1 - material_data_nani_instance_data._member0[vs_out_instance_index].radius0);
        float _2310 = (0.0500000007450580596923828125 * material_data_nani_instance_data._member0[vs_out_instance_index].plank_depth) + 0.0040000001899898052215576171875;
        float _2311 = _2272.y;
        float _4744;
        if (_2311 > 0.0)
        {
            _4744 = ((material_data_nani_instance_data._member0[vs_out_instance_index].plank_depth + _2310) - _2300.y) / _2311;
        }
        else
        {
            float _4745;
            if (_2311 < 0.0)
            {
                _4745 = (-(_2300.y + _2310)) / _2311;
            }
            else
            {
                _4745 = 3.4028234663852885981170418348452e+38;
            }
            _4744 = _4745;
        }
        vec2 _2328 = _2300.xz;
        vec2 _2329 = _2272.xz;
        float _2330 = dot(_2329, _2329);
        float _4736;
        float _4740;
        if (_2330 > 9.9999999392252902907785028219223e-09)
        {
            float _2334 = dot(_2328, _2329);
            float _2335 = material_data_nani_instance_data._member0[vs_out_instance_index].radius1 + _2306;
            float _2336 = dot(_2328, _2328);
            float _2339 = _2334 * _2334;
            float _2341 = _2339 - (_2330 * (_2336 - (_2335 * _2335)));
            float _4738;
            if (_2341 >= 0.0)
            {
                _4738 = ((-_2334) + sqrt(_2341)) / _2330;
            }
            else
            {
                _4738 = 3.4028234663852885981170418348452e+38;
            }
            float _2351 = max(material_data_nani_instance_data._member0[vs_out_instance_index].radius0 - _2306, 0.0);
            float _2355 = _2339 - (_2330 * (_2336 - (_2351 * _2351)));
            float _4741;
            if (_2355 >= 0.0)
            {
                float _2362 = ((-_2334) - sqrt(_2355)) / _2330;
                _4741 = (_2362 >= 0.0) ? _2362 : 3.4028234663852885981170418348452e+38;
            }
            else
            {
                _4741 = 3.4028234663852885981170418348452e+38;
            }
            _4740 = _4741;
            _4736 = _4738;
        }
        else
        {
            _4740 = 3.4028234663852885981170418348452e+38;
            _4736 = 3.4028234663852885981170418348452e+38;
        }
        float _2374 = max(0.0, min(_4744, min(_4736, _4740)));
        vec3 _4994;
        vec3 _5015;
        bool _5035;
        bool _5056;
        do
        {
            if (all(equal(material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address, uvec2(0u))))
            {
                _5056 = false;
                _5035 = false;
                _5015 = vec3(0.0);
                _4994 = vec3(0.0);
                break;
            }
            uint _2624 = material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_list & 16777215u;
            float _2410 = max(-dot(_2272, _387), 0.0);
            vec2 _4750;
            vec2 _4761;
            vec2 _4772;
            vec2 _4784;
            vec2 _4797;
            vec2 _4811;
            vec2 _4826;
            vec2 _4842;
            _4842 = _4755;
            _4826 = _4755;
            _4811 = _4755;
            _4797 = _4755;
            _4784 = _4755;
            _4772 = _4755;
            _4761 = _4755;
            _4750 = _4755;
            uint _2603;
            vec2 _2784;
            vec2 _2791;
            vec2 _2799;
            vec2 _2806;
            vec2 _2815;
            vec2 _2822;
            vec2 _2830;
            vec2 _2837;
            vec3 _4971;
            vec3 _4972;
            bool _4973;
            bool _4974;
            vec3 _4995;
            vec3 _5016;
            bool _5036;
            bool _5057;
            uint _4749 = 0u;
            for (;;)
            {
                bool _2413_ladder_break = false;
                do
                {
                    if (!(_4749 < _2265))
                    {
                        _5057 = _5042;
                        _5036 = _5042;
                        _5016 = _5001;
                        _4995 = _5001;
                        _4974 = false;
                        _4973 = false;
                        _4972 = vec3(0.0);
                        _4971 = vec3(0.0);
                        _2413_ladder_break = true;
                        break;
                    }
                    uint _2643 = material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x + (4u * (_2624 + _4749));
                    uvec2 _5798 = uvec2(uintPointer(uvec2(_2643, material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.y + uint(_2643 < material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x))));
                    uint _5799 = _5798.x;
                    _5797 _5801;
                    imulExtended(0, 4, _5801._m1, _5801._m0);
                    uint _5806 = _5799 + uint(_5801._m0);
                    uint _2630 = uintPointer(uvec2(_5806, (_5798.y + uint(_5801._m1)) + uint(_5806 < _5799))).value;
                    uint _2705 = material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x + (48u * _2630);
                    uvec4Pointer _2728 = uvec4Pointer(uvec2(_2705, material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.y + uint(_2705 < material_data_nani_instance_data._member0[vs_out_instance_index].window_cut_buffer_address.x)));
                    uvec2 _5812 = uvec2(_2728);
                    uint _5813 = _5812.x;
                    _5797 _5815;
                    imulExtended(0, 16, _5815._m1, _5815._m0);
                    uint _5820 = _5813 + uint(_5815._m0);
                    uvec4 _2673 = uvec4Pointer(uvec2(_5820, (_5812.y + uint(_5815._m1)) + uint(_5820 < _5813))).value;
                    uvec2 _5826 = uvec2(_2728);
                    uint _5827 = _5826.x;
                    _5797 _5829;
                    imulExtended(1, 16, _5829._m1, _5829._m0);
                    uint _5834 = _5827 + uint(_5829._m0);
                    uvec4 _2675 = uvec4Pointer(uvec2(_5834, (_5826.y + uint(_5829._m1)) + uint(_5834 < _5827))).value;
                    uvec2 _5840 = uvec2(_2728);
                    uint _5841 = _5840.x;
                    _5797 _5843;
                    imulExtended(2, 16, _5843._m1, _5843._m0);
                    uint _5848 = _5841 + uint(_5843._m0);
                    uvec4 _2677 = uvec4Pointer(uvec2(_5848, (_5840.y + uint(_5843._m1)) + uint(_5848 < _5841))).value;
                    vec3 _2680 = uintBitsToFloat(_2673.xyz);
                    vec2 _2685 = uintBitsToFloat(_2675.xy);
                    vec2 _2688 = uintBitsToFloat(_2675.zw);
                    vec3 _2738 = normalize(vec3(_2685.x, 0.0, _2685.y));
                    vec3 _2740 = cross(vec3(0.0, 1.0, 0.0), _2738);
                    vec3 _2749 = _2680 * 0.4000000059604644775390625;
                    ivec3 _2775 = ivec3(floor(_2749));
                    vec3 _2776 = fract(_2749);
                    uvec3 _2777 = uvec3(_2775);
                    uint _2891 = _2777.z;
                    uint _2897 = _2891 + (_2891 << 10u);
                    uint _2899 = _2897 ^ (_2897 >> 6u);
                    uint _2901 = _2899 + (_2899 << 3u);
                    uint _2903 = _2901 ^ (_2901 >> 11u);
                    uint _2911 = (((_2777.y * 1664525u) + (_2903 + (_2903 << 15u))) + 1013904223u) * 1664525u;
                    uint _2913 = _2911 ^ (_2911 >> 11u);
                    uint _2916 = _2913 ^ ((_2913 << 7u) & 2636928640u);
                    uint _2919 = _2916 ^ ((_2916 << 15u) & 4022730752u);
                    uint _2927 = (((_2777.x * 1664525u) + (_2919 ^ (_2919 >> 18u))) + 1013904223u) * 1664525u;
                    uint _2929 = _2927 ^ (_2927 >> 11u);
                    uint _2932 = _2929 ^ ((_2929 << 7u) & 2636928640u);
                    uint _2935 = _2932 ^ ((_2932 << 15u) & 4022730752u);
                    uint _2937 = _2935 ^ (_2935 >> 18u);
                    vec2 _2764 = _4750;
                    uint _2956;
                    uint _2975;
                    uint _4759 = 0u;
                    uint _4993 = _2937;
                    for (;;)
                    {
                        if (!(_4759 < 2u))
                        {
                            break;
                        }
                        uint _2967 = _4993 + (_4993 << 10u);
                        uint _2969 = _2967 ^ (_2967 >> 6u);
                        uint _2971 = _2969 + (_2969 << 3u);
                        uint _2973 = _2971 ^ (_2971 >> 11u);
                        _2975 = _2973 + (_2973 << 15u);
                        _2764[_4759] = uintBitsToFloat((_4993 & 8388607u) | 1065353216u) - 1.0;
                        _2956 = _4759 + 1u;
                        _4993 = _2975;
                        _4759 = _2956;
                        continue;
                    }
                    _2784 = _2764;
                    uvec3 _2786 = uvec3(_2775 + ivec3(1, 0, 0));
                    uint _2991 = _2786.z;
                    uint _2997 = _2991 + (_2991 << 10u);
                    uint _2999 = _2997 ^ (_2997 >> 6u);
                    uint _3001 = _2999 + (_2999 << 3u);
                    uint _3003 = _3001 ^ (_3001 >> 11u);
                    uint _3011 = (((_2786.y * 1664525u) + (_3003 + (_3003 << 15u))) + 1013904223u) * 1664525u;
                    uint _3013 = _3011 ^ (_3011 >> 11u);
                    uint _3016 = _3013 ^ ((_3013 << 7u) & 2636928640u);
                    uint _3019 = _3016 ^ ((_3016 << 15u) & 4022730752u);
                    uint _3027 = (((_2786.x * 1664525u) + (_3019 ^ (_3019 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3029 = _3027 ^ (_3027 >> 11u);
                    uint _3032 = _3029 ^ ((_3029 << 7u) & 2636928640u);
                    uint _3035 = _3032 ^ ((_3032 << 15u) & 4022730752u);
                    uint _3037 = _3035 ^ (_3035 >> 18u);
                    vec2 _2765 = _4761;
                    uint _3056;
                    uint _3075;
                    uint _4769 = 0u;
                    uint _4992 = _3037;
                    for (;;)
                    {
                        if (!(_4769 < 2u))
                        {
                            break;
                        }
                        uint _3067 = _4992 + (_4992 << 10u);
                        uint _3069 = _3067 ^ (_3067 >> 6u);
                        uint _3071 = _3069 + (_3069 << 3u);
                        uint _3073 = _3071 ^ (_3071 >> 11u);
                        _3075 = _3073 + (_3073 << 15u);
                        _2765[_4769] = uintBitsToFloat((_4992 & 8388607u) | 1065353216u) - 1.0;
                        _3056 = _4769 + 1u;
                        _4992 = _3075;
                        _4769 = _3056;
                        continue;
                    }
                    _2791 = _2765;
                    uvec3 _2793 = uvec3(_2775 + ivec3(0, 1, 0));
                    uint _3091 = _2793.z;
                    uint _3097 = _3091 + (_3091 << 10u);
                    uint _3099 = _3097 ^ (_3097 >> 6u);
                    uint _3101 = _3099 + (_3099 << 3u);
                    uint _3103 = _3101 ^ (_3101 >> 11u);
                    uint _3111 = (((_2793.y * 1664525u) + (_3103 + (_3103 << 15u))) + 1013904223u) * 1664525u;
                    uint _3113 = _3111 ^ (_3111 >> 11u);
                    uint _3116 = _3113 ^ ((_3113 << 7u) & 2636928640u);
                    uint _3119 = _3116 ^ ((_3116 << 15u) & 4022730752u);
                    uint _3127 = (((_2793.x * 1664525u) + (_3119 ^ (_3119 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3129 = _3127 ^ (_3127 >> 11u);
                    uint _3132 = _3129 ^ ((_3129 << 7u) & 2636928640u);
                    uint _3135 = _3132 ^ ((_3132 << 15u) & 4022730752u);
                    uint _3137 = _3135 ^ (_3135 >> 18u);
                    vec2 _2766 = _4772;
                    uint _3156;
                    uint _3175;
                    uint _4780 = 0u;
                    uint _4991 = _3137;
                    for (;;)
                    {
                        if (!(_4780 < 2u))
                        {
                            break;
                        }
                        uint _3167 = _4991 + (_4991 << 10u);
                        uint _3169 = _3167 ^ (_3167 >> 6u);
                        uint _3171 = _3169 + (_3169 << 3u);
                        uint _3173 = _3171 ^ (_3171 >> 11u);
                        _3175 = _3173 + (_3173 << 15u);
                        _2766[_4780] = uintBitsToFloat((_4991 & 8388607u) | 1065353216u) - 1.0;
                        _3156 = _4780 + 1u;
                        _4991 = _3175;
                        _4780 = _3156;
                        continue;
                    }
                    _2799 = _2766;
                    uvec3 _2801 = uvec3(_2775 + ivec3(1, 1, 0));
                    uint _3191 = _2801.z;
                    uint _3197 = _3191 + (_3191 << 10u);
                    uint _3199 = _3197 ^ (_3197 >> 6u);
                    uint _3201 = _3199 + (_3199 << 3u);
                    uint _3203 = _3201 ^ (_3201 >> 11u);
                    uint _3211 = (((_2801.y * 1664525u) + (_3203 + (_3203 << 15u))) + 1013904223u) * 1664525u;
                    uint _3213 = _3211 ^ (_3211 >> 11u);
                    uint _3216 = _3213 ^ ((_3213 << 7u) & 2636928640u);
                    uint _3219 = _3216 ^ ((_3216 << 15u) & 4022730752u);
                    uint _3227 = (((_2801.x * 1664525u) + (_3219 ^ (_3219 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3229 = _3227 ^ (_3227 >> 11u);
                    uint _3232 = _3229 ^ ((_3229 << 7u) & 2636928640u);
                    uint _3235 = _3232 ^ ((_3232 << 15u) & 4022730752u);
                    uint _3237 = _3235 ^ (_3235 >> 18u);
                    vec2 _2767 = _4784;
                    uint _3256;
                    uint _3275;
                    uint _4792 = 0u;
                    uint _4990 = _3237;
                    for (;;)
                    {
                        if (!(_4792 < 2u))
                        {
                            break;
                        }
                        uint _3267 = _4990 + (_4990 << 10u);
                        uint _3269 = _3267 ^ (_3267 >> 6u);
                        uint _3271 = _3269 + (_3269 << 3u);
                        uint _3273 = _3271 ^ (_3271 >> 11u);
                        _3275 = _3273 + (_3273 << 15u);
                        _2767[_4792] = uintBitsToFloat((_4990 & 8388607u) | 1065353216u) - 1.0;
                        _3256 = _4792 + 1u;
                        _4990 = _3275;
                        _4792 = _3256;
                        continue;
                    }
                    _2806 = _2767;
                    uvec3 _2808 = uvec3(_2775 + ivec3(0, 0, 1));
                    uint _3291 = _2808.z;
                    uint _3297 = _3291 + (_3291 << 10u);
                    uint _3299 = _3297 ^ (_3297 >> 6u);
                    uint _3301 = _3299 + (_3299 << 3u);
                    uint _3303 = _3301 ^ (_3301 >> 11u);
                    uint _3311 = (((_2808.y * 1664525u) + (_3303 + (_3303 << 15u))) + 1013904223u) * 1664525u;
                    uint _3313 = _3311 ^ (_3311 >> 11u);
                    uint _3316 = _3313 ^ ((_3313 << 7u) & 2636928640u);
                    uint _3319 = _3316 ^ ((_3316 << 15u) & 4022730752u);
                    uint _3327 = (((_2808.x * 1664525u) + (_3319 ^ (_3319 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3329 = _3327 ^ (_3327 >> 11u);
                    uint _3332 = _3329 ^ ((_3329 << 7u) & 2636928640u);
                    uint _3335 = _3332 ^ ((_3332 << 15u) & 4022730752u);
                    uint _3337 = _3335 ^ (_3335 >> 18u);
                    vec2 _2768 = _4797;
                    uint _3356;
                    uint _3375;
                    uint _4805 = 0u;
                    uint _4989 = _3337;
                    for (;;)
                    {
                        if (!(_4805 < 2u))
                        {
                            break;
                        }
                        uint _3367 = _4989 + (_4989 << 10u);
                        uint _3369 = _3367 ^ (_3367 >> 6u);
                        uint _3371 = _3369 + (_3369 << 3u);
                        uint _3373 = _3371 ^ (_3371 >> 11u);
                        _3375 = _3373 + (_3373 << 15u);
                        _2768[_4805] = uintBitsToFloat((_4989 & 8388607u) | 1065353216u) - 1.0;
                        _3356 = _4805 + 1u;
                        _4989 = _3375;
                        _4805 = _3356;
                        continue;
                    }
                    _2815 = _2768;
                    uvec3 _2817 = uvec3(_2775 + ivec3(1, 0, 1));
                    uint _3391 = _2817.z;
                    uint _3397 = _3391 + (_3391 << 10u);
                    uint _3399 = _3397 ^ (_3397 >> 6u);
                    uint _3401 = _3399 + (_3399 << 3u);
                    uint _3403 = _3401 ^ (_3401 >> 11u);
                    uint _3411 = (((_2817.y * 1664525u) + (_3403 + (_3403 << 15u))) + 1013904223u) * 1664525u;
                    uint _3413 = _3411 ^ (_3411 >> 11u);
                    uint _3416 = _3413 ^ ((_3413 << 7u) & 2636928640u);
                    uint _3419 = _3416 ^ ((_3416 << 15u) & 4022730752u);
                    uint _3427 = (((_2817.x * 1664525u) + (_3419 ^ (_3419 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3429 = _3427 ^ (_3427 >> 11u);
                    uint _3432 = _3429 ^ ((_3429 << 7u) & 2636928640u);
                    uint _3435 = _3432 ^ ((_3432 << 15u) & 4022730752u);
                    uint _3437 = _3435 ^ (_3435 >> 18u);
                    vec2 _2769 = _4811;
                    uint _3456;
                    uint _3475;
                    uint _4819 = 0u;
                    uint _4988 = _3437;
                    for (;;)
                    {
                        if (!(_4819 < 2u))
                        {
                            break;
                        }
                        uint _3467 = _4988 + (_4988 << 10u);
                        uint _3469 = _3467 ^ (_3467 >> 6u);
                        uint _3471 = _3469 + (_3469 << 3u);
                        uint _3473 = _3471 ^ (_3471 >> 11u);
                        _3475 = _3473 + (_3473 << 15u);
                        _2769[_4819] = uintBitsToFloat((_4988 & 8388607u) | 1065353216u) - 1.0;
                        _3456 = _4819 + 1u;
                        _4988 = _3475;
                        _4819 = _3456;
                        continue;
                    }
                    _2822 = _2769;
                    uvec3 _2824 = uvec3(_2775 + ivec3(0, 1, 1));
                    uint _3491 = _2824.z;
                    uint _3497 = _3491 + (_3491 << 10u);
                    uint _3499 = _3497 ^ (_3497 >> 6u);
                    uint _3501 = _3499 + (_3499 << 3u);
                    uint _3503 = _3501 ^ (_3501 >> 11u);
                    uint _3511 = (((_2824.y * 1664525u) + (_3503 + (_3503 << 15u))) + 1013904223u) * 1664525u;
                    uint _3513 = _3511 ^ (_3511 >> 11u);
                    uint _3516 = _3513 ^ ((_3513 << 7u) & 2636928640u);
                    uint _3519 = _3516 ^ ((_3516 << 15u) & 4022730752u);
                    uint _3527 = (((_2824.x * 1664525u) + (_3519 ^ (_3519 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3529 = _3527 ^ (_3527 >> 11u);
                    uint _3532 = _3529 ^ ((_3529 << 7u) & 2636928640u);
                    uint _3535 = _3532 ^ ((_3532 << 15u) & 4022730752u);
                    uint _3537 = _3535 ^ (_3535 >> 18u);
                    vec2 _2770 = _4826;
                    uint _3556;
                    uint _3575;
                    uint _4834 = 0u;
                    uint _4987 = _3537;
                    for (;;)
                    {
                        if (!(_4834 < 2u))
                        {
                            break;
                        }
                        uint _3567 = _4987 + (_4987 << 10u);
                        uint _3569 = _3567 ^ (_3567 >> 6u);
                        uint _3571 = _3569 + (_3569 << 3u);
                        uint _3573 = _3571 ^ (_3571 >> 11u);
                        _3575 = _3573 + (_3573 << 15u);
                        _2770[_4834] = uintBitsToFloat((_4987 & 8388607u) | 1065353216u) - 1.0;
                        _3556 = _4834 + 1u;
                        _4987 = _3575;
                        _4834 = _3556;
                        continue;
                    }
                    _2830 = _2770;
                    uvec3 _2832 = uvec3(_2775 + ivec3(1));
                    uint _3591 = _2832.z;
                    uint _3597 = _3591 + (_3591 << 10u);
                    uint _3599 = _3597 ^ (_3597 >> 6u);
                    uint _3601 = _3599 + (_3599 << 3u);
                    uint _3603 = _3601 ^ (_3601 >> 11u);
                    uint _3611 = (((_2832.y * 1664525u) + (_3603 + (_3603 << 15u))) + 1013904223u) * 1664525u;
                    uint _3613 = _3611 ^ (_3611 >> 11u);
                    uint _3616 = _3613 ^ ((_3613 << 7u) & 2636928640u);
                    uint _3619 = _3616 ^ ((_3616 << 15u) & 4022730752u);
                    uint _3627 = (((_2832.x * 1664525u) + (_3619 ^ (_3619 >> 18u))) + 1013904223u) * 1664525u;
                    uint _3629 = _3627 ^ (_3627 >> 11u);
                    uint _3632 = _3629 ^ ((_3629 << 7u) & 2636928640u);
                    uint _3635 = _3632 ^ ((_3632 << 15u) & 4022730752u);
                    uint _3637 = _3635 ^ (_3635 >> 18u);
                    vec2 _2771 = _4842;
                    uint _3656;
                    uint _3675;
                    uint _4850 = 0u;
                    uint _4986 = _3637;
                    for (;;)
                    {
                        if (!(_4850 < 2u))
                        {
                            break;
                        }
                        uint _3667 = _4986 + (_4986 << 10u);
                        uint _3669 = _3667 ^ (_3667 >> 6u);
                        uint _3671 = _3669 + (_3669 << 3u);
                        uint _3673 = _3671 ^ (_3671 >> 11u);
                        _3675 = _3673 + (_3673 << 15u);
                        _2771[_4850] = uintBitsToFloat((_4986 & 8388607u) | 1065353216u) - 1.0;
                        _3656 = _4850 + 1u;
                        _4986 = _3675;
                        _4850 = _3656;
                        continue;
                    }
                    _2837 = _2771;
                    vec3 _3687 = (_2776 * _2776) * (vec3(3.0) - (vec3(2.0) * _2776));
                    float _2840 = _3687.x;
                    float _2841 = 1.0 - _2840;
                    float _2843 = _3687.y;
                    float _2844 = 1.0 - _2843;
                    float _2846 = _3687.z;
                    float _2847 = 1.0 - _2846;
                    vec2 _2754 = clamp((((((((((((_2784 * _2841) * _2844) * _2847) + (((_2791 * _2840) * _2844) * _2847)) + (((_2799 * _2841) * _2843) * _2847)) + (((_2806 * _2840) * _2843) * _2847)) + (((_2815 * _2841) * _2844) * _2846)) + (((_2822 * _2840) * _2844) * _2846)) + (((_2830 * _2841) * _2843) * _2846)) + (((_2837 * _2840) * _2843) * _2846)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
                    vec3 _3694 = vs_out_frag_position_ws - (_2680 + (vec3(_2754.x, 0.0, _2754.y) * 0.0599999986588954925537109375));
                    float _3704 = dot(_3694, _2738);
                    bool _2426 = !((_2673.w & 1u) != 0u);
                    bool _4891;
                    if (_2426)
                    {
                        _4891 = _3704 <= (-0.5);
                    }
                    else
                    {
                        _4891 = false;
                    }
                    if (_4891)
                    {
                        break;
                    }
                    vec2 _2435 = vec3(dot(_3694, _2740), _3694.y, _3704).xy;
                    vec2 _3719 = uintBitsToFloat(_2677.xy) - _2688;
                    float _3735 = float(_2673.w >> 8u);
                    float _3729 = textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3((_2435 - _2688) / _3719, _3735), 0.0).x * 0.25;
                    float _2437 = _3729 - 0.008000000379979610443115234375;
                    if (_2437 >= 0.0)
                    {
                        break;
                    }
                    float _3744 = dot(_2272, _2738);
                    vec2 _2443 = vec3(dot(_2272, _2740), _2311, _3744).xy;
                    float _2444 = length(_2443);
                    float _2445 = max(_2444, 9.9999997473787516355514526367188e-05);
                    bool _4896;
                    if (_2410 > 9.9999997473787516355514526367188e-05)
                    {
                        _4896 = _3729 >= 0.0;
                    }
                    else
                    {
                        _4896 = false;
                    }
                    bool _4892;
                    if (_2426)
                    {
                        _4892 = _3744 < 0.0;
                    }
                    else
                    {
                        _4892 = false;
                    }
                    float _4902;
                    if (_4892)
                    {
                        _4902 = (_3704 + 0.5) / (-_3744);
                    }
                    else
                    {
                        _4902 = 3.4028234663852885981170418348452e+38;
                    }
                    float _4905;
                    if ((_2444 > 9.9999997473787516355514526367188e-05) ? true : _4896)
                    {
                        float _2529;
                        float _2535;
                        uint _2542;
                        float _4906;
                        uint _4897 = 0u;
                        float _4898 = 0.0;
                        float _4899 = _2437;
                        for (;;)
                        {
                            if (!(_4897 < 3u))
                            {
                                _4906 = _4898;
                                break;
                            }
                            float _2490 = _4898 + (max(-_4899, 0.0) / (_2445 - ((max(0.008000000379979610443115234375 - (_2410 * _4898), 0.0) * (-249.9999847412109375)) * _2410)));
                            float _3779 = max(0.008000000379979610443115234375 - (_2410 * _2490), 0.0);
                            float _2503 = _2490 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_2435 + (_2443 * _2490)) - _2688) / _3719, _3735), 0.0).x * 0.25) - ((_3779 * _3779) * 124.99999237060546875)), 0.0) / (_2445 - ((_3779 * (-249.9999847412109375)) * _2410)));
                            float _3815 = max(0.008000000379979610443115234375 - (_2410 * _2503), 0.0);
                            float _2516 = _2503 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_2435 + (_2443 * _2503)) - _2688) / _3719, _3735), 0.0).x * 0.25) - ((_3815 * _3815) * 124.99999237060546875)), 0.0) / (_2445 - ((_3815 * (-249.9999847412109375)) * _2410)));
                            float _3851 = max(0.008000000379979610443115234375 - (_2410 * _2516), 0.0);
                            _2529 = _2516 + (max(-((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_2435 + (_2443 * _2516)) - _2688) / _3719, _3735), 0.0).x * 0.25) - ((_3851 * _3851) * 124.99999237060546875)), 0.0) / (_2445 - ((_3851 * (-249.9999847412109375)) * _2410)));
                            float _3887 = max(0.008000000379979610443115234375 - (_2410 * _2529), 0.0);
                            _2535 = (textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_2435 + (_2443 * _2529)) - _2688) / _3719, _3735), 0.0).x * 0.25) - ((_3887 * _3887) * 124.99999237060546875);
                            if (_2535 >= (-0.001000000047497451305389404296875))
                            {
                                _4906 = _2529;
                                break;
                            }
                            _2542 = _4897 + 1u;
                            _4899 = _2535;
                            _4898 = _2529;
                            _4897 = _2542;
                            continue;
                        }
                        _4905 = _4906;
                    }
                    else
                    {
                        _4905 = 3.4028234663852885981170418348452e+38;
                    }
                    bool _2549 = _4905 <= min(_4902, _2374);
                    vec3 _4907;
                    vec3 _4925;
                    if (_2549)
                    {
                        vec2 _2553 = _2435 + (_2443 * _4905);
                        vec2 _2558 = _3719 * vec2(0.0078125);
                        float _3907 = textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3((_2553 - _2688) / _3719, _3735), 0.0).x * 0.25;
                        vec2 _2571 = vec2((textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_2553 + vec2(_2558.x, 0.0)) - _2688) / _3719, _3735), 0.0).x * 0.25) - _3907, (textureLod(sampler2DArray(material_data_window_cut_sdf, samplers_lnc_iso), vec3(((_2553 + vec2(0.0, _2558.y)) - _2688) / _3719, _3735), 0.0).x * 0.25) - _3907) / _2558;
                        float _3967 = max(0.008000000379979610443115234375 - (_2410 * _4905), 0.0) * (-249.9999847412109375);
                        if ((dot(_2571, _2443) - (_3967 * _2410)) <= 0.0)
                        {
                            _5057 = true;
                            _5036 = false;
                            _5016 = vec3(0.0);
                            _4995 = vec3(0.0);
                            _4974 = true;
                            _4973 = false;
                            _4972 = vec3(0.0);
                            _4971 = vec3(0.0);
                            _2413_ladder_break = true;
                            break;
                        }
                        _4925 = vs_out_frag_position_ws + (_2272 * _4905);
                        _4907 = -normalize(((_2740 * _2571.x) + vec3(0.0, _2571.y, 0.0)) + (_387 * _3967));
                    }
                    else
                    {
                        _4925 = vec3(0.0);
                        _4907 = vec3(0.0);
                    }
                    bool _5786 = _2549 ? true : false;
                    _5057 = true;
                    _5036 = _5786;
                    _5016 = _4925;
                    _4995 = _4907;
                    _4974 = true;
                    _4973 = _5786;
                    _4972 = _4925;
                    _4971 = _4907;
                    _2413_ladder_break = true;
                    break;
                } while(false);
                if (_2413_ladder_break)
                {
                    break;
                }
                _2603 = _4749 + 1u;
                _4842 = _2837;
                _4826 = _2830;
                _4811 = _2822;
                _4797 = _2815;
                _4784 = _2806;
                _4772 = _2799;
                _4761 = _2791;
                _4750 = _2784;
                _4749 = _2603;
                continue;
            }
            if (_4974)
            {
                _5056 = _5057;
                _5035 = _5036;
                _5015 = _5016;
                _4994 = _4995;
                break;
            }
            _5056 = _4974;
            _5035 = _4973;
            _5015 = _4972;
            _4994 = _4971;
            break;
        } while(false);
        float _5720;
        if (_5056)
        {
            if (!_5035)
            {
                demote;
            }
            vec4 _3987 = (vec4(_5015, 1.0) * current_view.world_to_view) * current_view.view_to_sample;
            vec2 _5077;
            do
            {
                vec3 _3997 = abs(_4994);
                float _3999 = _3997.y;
                float _4000 = _3997.z;
                if (_3997.x > max(_3999, _4000))
                {
                    _5077 = _5015.zy * 0.4000000059604644775390625;
                    break;
                }
                else
                {
                    if (_3999 > _4000)
                    {
                        _5077 = _5015.xz * 0.4000000059604644775390625;
                        break;
                    }
                }
                _5077 = _5015.xy * 0.4000000059604644775390625;
                break;
            } while(false);
            uv = _5077;
            _5720 = min((_3987.xyz / vec3(_3987.w)).z, gl_FragCoord.z);
        }
        else
        {
            _5720 = gl_FragCoord.z;
        }
        bvec3 _5788 = bvec3(_5056);
        _5719 = _5720;
        _5253 = mix(vs_out_frag_position_ws, _5015, _5788);
        _5132 = mix(vs_out_frag_normal_ws, _4994, _5788);
        _5078 = _5056 ? true : false;
    }
    else
    {
        _5719 = gl_FragCoord.z;
        _5253 = vs_out_frag_position_ws;
        _5132 = vs_out_frag_normal_ws;
        _5078 = false;
    }
    float _5115;
    vec3 _5130;
    if (_5078)
    {
        _5130 = _5132;
        _5115 = 0.0;
    }
    else
    {
        float _5116;
        vec3 _5131;
        if (vs_out_use_hard_normal > 0.00999999977648258209228515625)
        {
            vec2 _1503 = uv;
            vec2 _1504 = _1503 + seed_uv_offset;
            uv = _1504;
            uv.x = _1504.y;
            uv.y = _1504.x * 2.0;
            uv += vec2(0.87000000476837158203125);
            _5131 = normalize(cross(dFdx(vs_out_frag_position_ws), dFdy(vs_out_frag_position_ws) * (-1.0)));
            _5116 = 0.0;
        }
        else
        {
            uv += seed_uv_offset;
            _5131 = _5132;
            _5116 = 1.0 - texture(sampler2D(material_data_wood_edge_damage, samplers_llr), vs_out_tex_uv * vec2(1.0, 0.0500000007450580596923828125), current_view.mip_bias).x;
        }
        _5130 = _5131;
        _5115 = _5116;
    }
    int color_id = int(material_data_nani_instance_data._member0[vs_out_instance_index].color_id);
    bool use_wooden_wall_color = (material_data_nani_instance_data._member0[vs_out_instance_index].flags & 2u) != 0u;
    vec2 albedo_uv = uv + (vec2(_5115) * 0.300000011920928955078125);
    vec3 _5117;
    do
    {
        if (use_wooden_wall_color)
        {
            _5117 = texture(sampler2DArray(wooden_wall_colors_tex, samplers_llr), vec3(albedo_uv, float(color_id)), current_view.mip_bias).xyz;
            break;
        }
        _5117 = texture(sampler2DArray(halftimber_colors_tex, samplers_llr), vec3(albedo_uv, float(color_id)), current_view.mip_bias).xyz;
        break;
    } while(false);
    vec2 my_uv = albedo_uv * vec2(0.5, (vs_out_angle01 < 0.0) ? 3.0 : 2.0);
    vec4 sampled = texture(sampler2D(material_data_wood_roughness, samplers_llr), my_uv, current_view.mip_bias);
    float _1708 = mix(0.699999988079071044921875, 0.89999997615814208984375, 1.0 - sampled.x);
    bool _1713 = !_5078;
    bool _5123;
    if (_1713)
    {
        _5123 = vs_out_use_hard_normal <= 0.00999999977648258209228515625;
    }
    else
    {
        _5123 = false;
    }
    vec3 _5126;
    if (_5123)
    {
        vec2 _4099 = dFdx(my_uv);
        vec2 _4103 = dFdy(my_uv) * (-1.0);
        vec3 _4067 = cross(vs_out_frag_normal_ws, dFdy(vs_out_frag_position_ws) * (-1.0));
        vec3 _4068 = cross(dFdx(vs_out_frag_position_ws), vs_out_frag_normal_ws);
        float _4069 = _4099.x;
        float _4070 = _4103.y;
        float _4072 = _4099.y;
        float _4073 = _4103.x;
        float _4076 = 1.0 / ((_4069 * _4070) - (_4072 * _4073));
        vec3 normal_tangent_space = (texture(sampler2D(material_data_wood_normal, samplers_llr), my_uv, current_view.mip_bias).xyz * 2.0) - vec3(1.0);
        normal_tangent_space.z *= 18.1818180084228515625;
        _5126 = normalize(normal_tangent_space * transpose(mat3(((_4067 * _4069) + (_4068 * _4073)) * _4076, ((_4067 * _4072) + (_4068 * _4070)) * _4076, vs_out_frag_normal_ws)));
    }
    else
    {
        _5126 = _5130;
    }
    bool _5124;
    if (_1713)
    {
        _5124 = vs_out_angle01 > 0.0;
    }
    else
    {
        _5124 = false;
    }
    vec3 _5178;
    float _5266;
    vec3 _5276;
    if (_5124)
    {
        vec3 _5179;
        float _5267;
        vec3 _5277;
        if (vs_out_angle01 > 0.89999997615814208984375)
        {
            float _1811 = smoothstep(0.89999997615814208984375, 1.0, vs_out_angle01);
            vec2 new_uv = uv;
            new_uv.y = -_1811;
            vec3 _5167;
            do
            {
                if (use_wooden_wall_color)
                {
                    _5167 = texture(sampler2DArray(wooden_wall_colors_tex, samplers_llr), vec3(new_uv, float(color_id)), current_view.mip_bias).xyz;
                    break;
                }
                _5167 = texture(sampler2DArray(halftimber_colors_tex, samplers_llr), vec3(new_uv, float(color_id)), current_view.mip_bias).xyz;
                break;
            } while(false);
            vec3 _1820 = vec3(_1811);
            _5277 = mix(_5126, vs_out_frag_normal_ws, _1820);
            _5267 = mix(_1708, 0.89999997615814208984375, _1811);
            _5179 = mix(_5117, _5167, _1820);
        }
        else
        {
            float _5268;
            vec3 _5278;
            if (vs_out_angle01 < 0.100000001490116119384765625)
            {
                float _1839 = (0.100000001490116119384765625 - vs_out_angle01) * 10.0;
                _5278 = mix(_5126, vs_out_frag_normal_ws, vec3(_1839));
                _5268 = mix(_1708, 0.89999997615814208984375, _1839);
            }
            else
            {
                _5278 = _5126;
                _5268 = _1708;
            }
            _5277 = _5278;
            _5267 = _5268;
            _5179 = _5117;
        }
        _5276 = _5277;
        _5266 = _5267;
        _5178 = _5179;
    }
    else
    {
        _5276 = _5126;
        _5266 = _1708;
        _5178 = _5117;
    }
    vec3 _5175;
    do
    {
        if (use_wooden_wall_color)
        {
            _5175 = texture(sampler2DArray(wooden_wall_colors_tex, samplers_llr), vec3(albedo_uv, 0.0), current_view.mip_bias).xyz;
            break;
        }
        _5175 = texture(sampler2DArray(halftimber_colors_tex, samplers_llr), vec3(albedo_uv, 0.0), current_view.mip_bias).xyz;
        break;
    } while(false);
    vec3 _1865 = mix(_5178, _5175 * ((color_id == 0) ? 2.0 : 1.0), vec3(_5115 * 0.4000000059604644775390625));
    uint _5239;
    if (material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id == frame_constants.wall_highlighted_slot_id)
    {
        _5239 = frame_constants.wall_highlight_mode;
    }
    else
    {
        _5239 = 0u;
    }
    vec3 _5281;
    bool _5495;
    if (_5239 == 1u)
    {
        _5495 = true;
        _5281 = mix(_1865, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.5));
    }
    else
    {
        bool _4188 = _5239 == 2u;
        vec3 _5282;
        if (_4188)
        {
            _5282 = mix(_1865, vec3(0.5), vec3(0.100000001490116119384765625));
        }
        else
        {
            _5282 = _1865;
        }
        _5495 = _4188 ? true : false;
        _5281 = _5282;
    }
    bool _5258;
    if (frame_constants.highlight_bricks_to_delete == 1u)
    {
        _5258 = distance(frame_constants.brush_position.xz, _5253.xz) < ((1.88900005817413330078125 * frame_constants.eraser_size_multiplier) - 0.20000000298023223876953125);
    }
    else
    {
        _5258 = false;
    }
    vec3 _5279;
    if (_5258)
    {
        _5279 = mix(_1865, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.800000011920928955078125));
    }
    else
    {
        _5279 = _5281;
    }
    vec3 _5700;
    if (frame_constants.glade_theme_id == 4u)
    {
        vec4 sampled_1 = texture(sampler2D(material_data_dirtpath_heightmap, samplers_llr), _5253.xz * 0.0500000007450580596923828125, current_view.mip_bias);
        float _2000 = sampled_1.x;
        _5700 = mix(_5279, vec3(0.699999988079071044921875), vec3(((smoothstep(0.0, 0.20000000298023223876953125, smoothstep(0.5, 1.0, _5266) * mix(0.0, 0.5, _2000)) * 0.60000002384185791015625) + (_2000 * 0.20000000298023223876953125)) * clamp(_5276.y, 0.0, 1.0)));
    }
    else
    {
        _5700 = _5279;
    }
    uvec2 _4232;
    vec3 _4243 = (_5276 * 0.5) + vec3(0.5);
    _4232.x = ((uint((clamp(_4243.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_4243.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_4243.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(_5266, 0.0, 1.0) * 255.0) + 0.5) << uint(24));
    vec3 _4351 = sqrt(clamp(_5700, vec3(0.0), vec3(1.0)));
    uint _4366 = (uint((clamp(_4351.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_4351.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_4351.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    _4232.y = _4366;
    _4232.y = _4366 | ((7u | (uint(_5258 ? true : _5495) << 3u)) << 24u);
    entryPointParam_ps_main_gbuffer = _4232;
    gl_FragDepth = _5719;
}

