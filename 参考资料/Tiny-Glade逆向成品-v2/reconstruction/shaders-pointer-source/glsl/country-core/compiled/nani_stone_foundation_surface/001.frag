#version 460
#extension GL_EXT_buffer_reference2 : require
#extension GL_ARB_conservative_depth : require
#extension GL_EXT_buffer_reference_uvec2 : require
#extension GL_EXT_demote_to_helper_invocation : require
layout(depth_less) out float gl_FragDepth;

layout(buffer_reference) buffer uvec4Pointer;

struct StoneFoundationSurfaceInstanceData_natural
{
    vec4 bounding_sphere;
    uint wall_slot_id;
    float wall_length;
    uint blend_uv_seam;
    uint quad_count;
    uvec4Pointer verts_gpu_address;
    int row_stride;
    uvec4Pointer stone_foundation_cutouts_gpu_address;
    uint stone_foundation_cutout_count;
    uint is_inner_surface;
};

struct _MatrixStorage_float3x3_ColMajornatural
{
    vec3 data[3];
};

bool _4122;

struct _4811
{
    uint _m0;
    uint _m1;
};

layout(buffer_reference, buffer_reference_align = 4) buffer uvec4Pointer
{
    uvec4 value;
};

layout(set = 0, binding = 0, std430) readonly buffer StructuredBuffer
{
    StoneFoundationSurfaceInstanceData_natural _member0[];
} material_data_nani_instance_data;

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

layout(set = 8, binding = 0, std430) readonly buffer stone_foundation_colors_ids
{
    uint _member0[];
} stone_foundation_colors_ids_1;

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

layout(set = 9, binding = 0, std140) uniform StoneFloorTextures_natural
{
    uvec2 stone_floor_height_dims;
} stone_floor_textures;

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

layout(set = 0, binding = 1) uniform texture2DArray material_data_window_cutouts;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 9, binding = 3) uniform texture2D stone_floor_textures_stone_floor_height;
layout(set = 9, binding = 1) uniform texture2D stone_floor_textures_stone_floor_normal;
layout(set = 9, binding = 2) uniform texture2D stone_floor_textures_stone_floor_seed;
layout(set = 9, binding = 4) uniform texture2D stone_floor_textures_stone_floor_roughness;
layout(set = 11, binding = 1) uniform texture2DArray wall_color_data_brick_colors;

layout(location = 0) flat in uint vs_out_instance_index;
layout(location = 2) in vec3 vs_out_frag_position_ws;
layout(location = 3) in vec2 vs_out_frag_wall_space;
layout(location = 4) in vec2 vs_out_frag_curve_uv;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 8) in _MatrixStorage_float3x3_ColMajornatural vs_out_frag_tangent_to_world;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    uint _4113;
    if (material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id == frame_constants.wall_highlighted_slot_id)
    {
        _4113 = frame_constants.wall_highlight_mode;
    }
    else
    {
        _4113 = 0u;
    }
    bool _4118;
    do
    {
        uint _2124;
        bool _4116;
        bool _4119;
        uint _4114 = 0u;
        for (;;)
        {
            bool _2075_ladder_break = false;
            do
            {
                if (!(_4114 < material_data_nani_instance_data._member0[vs_out_instance_index].stone_foundation_cutout_count))
                {
                    _4119 = _4122;
                    _4116 = false;
                    _2075_ladder_break = true;
                    break;
                }
                uint _2082 = _4114 * 2u;
                uvec2 _4813 = uvec2(material_data_nani_instance_data._member0[vs_out_instance_index].stone_foundation_cutouts_gpu_address);
                uint _4814 = _4813.x;
                _4811 _4816;
                umulExtended(_2082, 16u, _4816._m1, _4816._m0);
                uint _4819 = _4814 + _4816._m0;
                uvec4 _2084 = uvec4Pointer(uvec2(_4819, (_4813.y + _4816._m1) + uint(_4819 < _4814))).value;
                uvec2 _4825 = uvec2(material_data_nani_instance_data._member0[vs_out_instance_index].stone_foundation_cutouts_gpu_address);
                uint _4826 = _4825.x;
                _4811 _4828;
                umulExtended(_2082 + 1u, 16u, _4828._m1, _4828._m0);
                uint _4831 = _4826 + _4828._m0;
                uvec4 _2087 = uvec4Pointer(uvec2(_4831, (_4825.y + _4828._m1) + uint(_4831 < _4826))).value;
                vec2 _2097 = ((vs_out_frag_wall_space - uintBitsToFloat(_2084.xy)) / uintBitsToFloat(_2084.zw)) + vec2(0.5);
                bool _4115;
                if (any(lessThan(_2097, vec2(0.0))))
                {
                    _4115 = true;
                }
                else
                {
                    _4115 = any(greaterThan(_2097, vec2(1.0)));
                }
                if (_4115)
                {
                    break;
                }
                if (textureLod(sampler2DArray(material_data_window_cutouts, samplers_llr), vec3(_2097, float(int(_2087.x))), 0.0).x > 0.5)
                {
                    _4119 = true;
                    _4116 = true;
                    _2075_ladder_break = true;
                    break;
                }
                break;
            } while(false);
            if (_2075_ladder_break)
            {
                break;
            }
            _2124 = _4114 + 1u;
            _4114 = _2124;
            continue;
        }
        if (_4116)
        {
            _4118 = _4119;
            break;
        }
        _4118 = false;
        break;
    } while(false);
    if (_4118)
    {
        demote;
    }
    int _413 = int(stone_foundation_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id]);
    vec2 _4276;
    vec3 _4389;
    float _4419;
    if (material_data_nani_instance_data._member0[vs_out_instance_index].is_inner_surface == 0u)
    {
        vec3 _2767;
        uvec2 _2229 = uvec2(gl_FragCoord.yx);
        float _2482 = 5.588237762451171875 * float(frame_counter.index % 64u);
        float _2492 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_2229.x) + _2482)) + (0.005837149918079376220703125 * (float(_2229.y) + _2482))));
        vec2 _2243 = textureQueryLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), vs_out_frag_curve_uv);
        float _2247 = _2243.x + current_view.mip_bias;
        vec3 _2615 = dFdx(vs_out_frag_position_ws);
        vec3 _2622 = dFdy(vs_out_frag_position_ws);
        vec2 _2625 = dFdx(vs_out_frag_curve_uv);
        vec2 _2632 = dFdy(vs_out_frag_curve_uv);
        vec2 _2629 = _2632 * (-1.0);
        vec3 _2593 = cross(vs_out_frag_normal_ws, _2622 * (-1.0));
        vec3 _2594 = cross(_2615, vs_out_frag_normal_ws);
        float _2595 = _2625.x;
        float _2596 = _2629.y;
        float _2598 = _2625.y;
        float _2599 = _2629.x;
        float _2602 = 1.0 / ((_2595 * _2596) - (_2598 * _2599));
        mat3 _2612 = transpose(mat3(((_2593 * _2595) + (_2594 * _2599)) * _2602, ((_2593 * _2598) + (_2594 * _2596)) * _2602, vs_out_frag_normal_ws));
        vec4 _2637 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
        vec3 _2644 = vec3(1.0, 0.0, 0.0) * _2612;
        vec3 _2645 = vec3(0.0, 1.0, 0.0) * _2612;
        vec3 _2646 = vec3(0.0, 0.0, 1.0) * _2612;
        vec3 _2649 = cross(_2644, _2645);
        vec3 _2652 = vec3(1.0 / dot(_2646, _2649));
        mat3 _2656 = mat3(cross(_2645, _2646) * _2652, cross(_2646, _2644) * _2652, _2649 * _2652);
        vec3 _2516 = (vs_out_frag_position_ws - (_2637.xyz / vec3(_2637.w))) * _2656;
        float _2671 = _2516.z;
        vec3 _2676 = vec3(vs_out_frag_curve_uv, 0.0);
        float _4212;
        do
        {
            _2767 = (_2676 + (_2516 * ((-0.07500000298023223876953125) / _2671))) - _2676;
            float _2796 = mix(0.0, 1.0, pow(_2492 * 0.5, 2.0));
            vec3 _2799 = _2676 + (_2767 * vec3(_2796));
            float _2945 = _2799.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _2799.xy, _2247).x - 1.0) * 0.07500000298023223876953125);
            bool _4797 = (_2945 < 0.0) ? true : false;
            float _4150;
            bool _4155;
            float _4177;
            float _4187;
            float _4197;
            if (_4797)
            {
                _4197 = _2945;
                _4187 = 0.0;
                _4177 = _2796;
                _4155 = _4797;
                _4150 = 0.0;
            }
            else
            {
                float _4152;
                float _4189;
                _4189 = _2945;
                _4152 = _2796;
                float _2825;
                uint _2843;
                float _2990;
                bool _4798;
                bool _4156;
                float _4178;
                float _4198;
                uint _4142 = 1u;
                bool _4157 = _4797;
                for (;;)
                {
                    if (!(_4142 < 3u))
                    {
                        _4198 = 0.0;
                        _4178 = 1.0;
                        _4156 = _4157;
                        break;
                    }
                    _2825 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_4142) + _2492) * 0.5, 2.0)));
                    vec3 _2828 = _2676 + (_2767 * vec3(_2825));
                    _2990 = _2828.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _2828.xy, _2247).x - 1.0) * 0.07500000298023223876953125);
                    _4798 = (_2990 < 0.0) ? true : false;
                    if (_4798)
                    {
                        _4198 = _2990;
                        _4178 = _2825;
                        _4156 = _4798;
                        break;
                    }
                    _2843 = _4142 + 1u;
                    _4142 = _2843;
                    _4189 = _2990;
                    _4157 = _4798;
                    _4152 = _2825;
                    continue;
                }
                _4197 = _4198;
                _4187 = _4189;
                _4177 = _4178;
                _4155 = _4156;
                _4150 = _4152;
            }
            if (_4155)
            {
                float _4175;
                float _4185;
                float _4195;
                float _4199;
                _4199 = _4150;
                _4195 = _4197;
                _4185 = _4187;
                _4175 = _4177;
                uint _2889;
                float _4800;
                float _4801;
                float _4802;
                float _4803;
                uint _4166 = 0u;
                for (;;)
                {
                    if (!(_4166 < 4u))
                    {
                        break;
                    }
                    float _2869 = (_4199 + _4175) * 0.5;
                    vec3 _2872 = _2676 + (_2767 * vec3(_2869));
                    float _3035 = _2872.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _2872.xy, _2247).x - 1.0) * 0.07500000298023223876953125);
                    bool _4799 = (_3035 < 0.0) ? true : false;
                    _4800 = _4799 ? _3035 : _4195;
                    _4801 = _4799 ? _4185 : _3035;
                    _4802 = _4799 ? _2869 : _4175;
                    _4803 = _4799 ? _4199 : _2869;
                    _2889 = _4166 + 1u;
                    _4199 = _4803;
                    _4195 = _4800;
                    _4185 = _4801;
                    _4175 = _4802;
                    _4166 = _2889;
                    continue;
                }
                float _2909 = mix(_4199, _4175, _4185 / (_4185 + (-_4195)));
                vec3 _2912 = _2676 + (_2767 * vec3(_2909));
                _4212 = ((abs(_2912.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _2912.xy, _2247).x - 1.0) * 0.07500000298023223876953125)) < (_4185 * 0.89999997615814208984375)) ? true : false) ? _2909 : _4175;
                break;
            }
            else
            {
                _4212 = _4150;
                break;
            }
            break; // unreachable workaround
        } while(false);
        vec3 _4808 = mix(_2767 * _4212, vec3(0.0), bvec3(_2671 > (-1.1754943508222875079687365372222e-38)));
        vec2 _2530 = vs_out_frag_curve_uv + _4808.xy;
        vec4 _3128 = (vec4(vs_out_frag_position_ws + (_4808 * _2612), 1.0) * current_view.world_to_view) * current_view.view_to_clip;
        vec3 _3206 = (textureLod(sampler2D(stone_floor_textures_stone_floor_normal, samplers_llr), _2530, _2247).xyz * 2.0) - vec3(1.0);
        _3206.z *= 0.13333332538604736328125;
        _4419 = (_3128.xyz / vec3(_3128.w)).z;
        _4389 = normalize(_2656 * _3206);
        _4276 = _2530;
    }
    else
    {
        _4419 = gl_FragCoord.z;
        _4389 = normalize(((texture(sampler2D(stone_floor_textures_stone_floor_normal, samplers_llr), vs_out_frag_curve_uv, (-2.0) + current_view.mip_bias).xyz * 2.0) - vec3(1.0)) * mat3(vec3(vs_out_frag_tangent_to_world.data[0].x, vs_out_frag_tangent_to_world.data[1].x, vs_out_frag_tangent_to_world.data[2].x), vec3(vs_out_frag_tangent_to_world.data[0].y, vs_out_frag_tangent_to_world.data[1].y, vs_out_frag_tangent_to_world.data[2].y), vec3(vs_out_frag_tangent_to_world.data[0].z, vs_out_frag_tangent_to_world.data[1].z, vs_out_frag_tangent_to_world.data[2].z)));
        _4276 = vs_out_frag_curve_uv;
    }
    vec4 _2266 = texture(sampler2D(stone_floor_textures_stone_floor_seed, samplers_llr), _4276, current_view.mip_bias);
    float _2270 = _2266.z;
    int _2280 = int(trunc((_2266.x * 32.0) - 0.5) + trunc((_2266.y * 32.0) - 0.5));
    uint _2282 = uint(_2280 ^ 7993234);
    uint _3238 = _2282 + (_2282 << 10u);
    uint _3240 = _3238 ^ (_3238 >> 6u);
    uint _3242 = _3240 + (_3240 << 3u);
    uint _3244 = _3242 ^ (_3242 >> 11u);
    uint _2286 = uint(_2280 ^ 9730541);
    uint _3260 = _2286 + (_2286 << 10u);
    uint _3262 = _3260 ^ (_3260 >> 6u);
    uint _3264 = _3262 + (_3262 << 3u);
    uint _3266 = _3264 ^ (_3264 >> 11u);
    float _3274 = uintBitsToFloat(((_3266 + (_3266 << 15u)) & 8388607u) | 1065353216u) - 1.0;
    vec4 _2323 = texture(sampler2D(stone_floor_textures_stone_floor_roughness, samplers_llr), _4276, current_view.mip_bias);
    float _2324 = _2323.x;
    vec2 _2331 = ((((vs_out_frag_position_ws.xz * 0.100000001490116119384765625) + vec2((uintBitsToFloat(((_3244 + (_3244 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 0.300000011920928955078125, _3274 * 0.300000011920928955078125)) + vec2(vs_out_frag_position_ws.y * 0.100000001490116119384765625)) + vec2(0.5 * _2270)) + vec2(_2324 * 0.100000001490116119384765625);
    bool _4338;
    if (_413 == 0)
    {
        _4338 = true;
    }
    else
    {
        _4338 = _413 == 4;
    }
    bool _4339;
    if (_4338)
    {
        _4339 = true;
    }
    else
    {
        _4339 = _413 == 10;
    }
    bool _4340;
    if (_4339)
    {
        _4340 = true;
    }
    else
    {
        _4340 = _413 == 12;
    }
    vec3 _4355;
    if (_4340)
    {
        _4355 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_2331, 0.0)).xyz * 0.89999997615814208984375;
    }
    else
    {
        bool _4341;
        if (_413 == 1)
        {
            _4341 = true;
        }
        else
        {
            _4341 = _413 == 5;
        }
        vec3 _4356;
        if (_4341)
        {
            _4356 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_2331, 1.0)).xyz;
        }
        else
        {
            bool _4342;
            if (_413 == 2)
            {
                _4342 = true;
            }
            else
            {
                _4342 = _413 == 7;
            }
            vec3 _4357;
            if (_4342)
            {
                _4357 = (texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_2331, 2.0)).xyz * 1.2999999523162841796875) * mix(1.0, 1.2999999523162841796875, _2270);
            }
            else
            {
                bool _4343;
                if (_413 == 3)
                {
                    _4343 = true;
                }
                else
                {
                    _4343 = _413 == 6;
                }
                bool _4344;
                if (_4343)
                {
                    _4344 = true;
                }
                else
                {
                    _4344 = _413 == 8;
                }
                bool _4345;
                if (_4344)
                {
                    _4345 = true;
                }
                else
                {
                    _4345 = _413 == 9;
                }
                vec3 _4358;
                if (_4345)
                {
                    _4358 = (texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_2331, 3.0)).xyz * 0.89999997615814208984375) * mix(1.0, 1.10000002384185791015625, _2270);
                }
                else
                {
                    vec3 _4359;
                    if (_413 == 11)
                    {
                        _4359 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_2331, 4.0)).xyz * mix(1.0, 1.39999997615814208984375, _2270);
                    }
                    else
                    {
                        _4359 = vec3(0.0);
                    }
                    _4358 = _4359;
                }
                _4357 = _4358;
            }
            _4356 = _4357;
        }
        _4355 = _4356;
    }
    vec4 _2462 = texture(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _4276, current_view.mip_bias);
    vec3 _2468 = (_4355 * 0.800000011920928955078125) * mix(0.699999988079071044921875, 1.0, _2462.x);
    vec3 _4420;
    bool _4568;
    if (_4113 == 1u)
    {
        _4568 = true;
        _4420 = mix(_2468, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.5));
    }
    else
    {
        bool _3278 = _4113 == 2u;
        vec3 _4421;
        if (_3278)
        {
            _4421 = mix(_2468, vec3(0.5), vec3(0.100000001490116119384765625));
        }
        else
        {
            _4421 = _2468;
        }
        _4568 = _3278 ? true : false;
        _4420 = _4421;
    }
    bool _4422;
    if (frame_constants.highlight_bricks_to_delete == 1u)
    {
        _4422 = distance(frame_constants.brush_position.xz, vs_out_frag_position_ws.xz) < ((1.88900005817413330078125 * frame_constants.eraser_size_multiplier) - 0.2700000107288360595703125);
    }
    else
    {
        _4422 = false;
    }
    vec3 _4427;
    if (_4422)
    {
        _4427 = mix(_4420, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.800000011920928955078125));
    }
    else
    {
        _4427 = _4420;
    }
    vec3 _4701;
    if (frame_constants.glade_theme_id == 4u)
    {
        _4701 = mix(_4427, vec3(0.699999988079071044921875), vec3(smoothstep(0.0, 1.0, clamp(_4389.y, 0.0, 1.0)) * smoothstep(-0.100000001490116119384765625, 0.0, vs_out_frag_position_ws.y)));
    }
    else
    {
        _4701 = _4427;
    }
    uvec2 _3324;
    vec3 _3335 = (_4389 * 0.5) + vec3(0.5);
    _3324.x = ((uint((clamp(_3335.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_3335.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_3335.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(mix(0.75, 1.0, _2324) * mix(0.800000011920928955078125, 1.0, _3274), 0.0, 1.0) * 255.0) + 0.5) << uint(24));
    vec3 _3443 = sqrt(clamp(_4701, vec3(0.0), vec3(1.0)));
    uint _3458 = (uint((clamp(_3443.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_3443.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_3443.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    _3324.y = _3458;
    _3324.y = _3458 | (((7u | (uint(_4422 ? true : _4568) << 3u)) | 128u) << 24u);
    entryPointParam_ps_main_gbuffer = _3324;
    gl_FragDepth = _4419;
}

