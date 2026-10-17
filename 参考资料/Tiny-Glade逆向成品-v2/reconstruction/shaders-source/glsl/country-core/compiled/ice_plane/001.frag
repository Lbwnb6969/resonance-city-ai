#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_demote_to_helper_invocation : require
#extension GL_EXT_samplerless_texture_functions : require
#extension GL_EXT_texture_shadow_lod : require
#extension GL_KHR_shader_subgroup_quad : require
layout(early_fragment_tests) in;

struct Bindless_natural
{
    uint bindless_handle;
};

struct ViewConstants_natural
{
    mat4 view_to_clip;
    mat4 clip_to_view;
    mat4 view_to_sample;
    mat4 sample_to_view;
    mat4 world_to_view;
    mat4 view_to_world;
    mat4 world_to_sample;
    mat4 clip_to_prev_clip;
    mat4 prev_clip_to_clip;
    mat4 prev_view_to_prev_clip;
    mat4 prev_clip_to_prev_view;
    mat4 prev_world_to_prev_view;
    mat4 prev_view_to_prev_world;
    vec2 sample_offset_pixels;
    vec2 sample_offset_clip;
    vec2 prev_sample_offset_pixels;
    vec2 prev_sample_offset_clip;
    mat4 pad0;
    mat4 pad1;
    vec4 pad2;
    float pad3;
    float pad4;
    float pad5;
    float mip_bias;
};

struct RootFinderInput
{
    float _distance;
    bool _valid;
};

struct DistanceWithPenetration
{
    RootFinderInput base;
    float penetration;
    float thickness;
};

struct Tex2D_natural
{
    uint bindless_handle;
};

vec4 _10800;
DistanceWithPenetration _4735;

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    uint history_valid;
    uvec2 half_depth_tex_dims;
    uvec2 refraction_tex_dims;
    uvec2 reprojection_tex_dims;
    uvec2 shadows_history_tex_dims;
    Bindless_natural surface_roughness_tex;
} globalParams;

layout(set = 7, binding = 0, std140) uniform current_view
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
} current_view_1;

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

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

layout(set = 24, binding = 0, scalar) uniform TerrainHeightmap_natural
{
    uvec2 terrain_heightmap_dims;
    Tex2D_natural bg_terrain_heightmap;
    Tex2D_natural bg_terrain_fog_height;
    vec2 bg_terrain_height_bounds_ws;
    vec4 bg_water_footprint_ws;
} terrain_heightmap;

layout(set = 9, binding = 0, std140) uniform CascadedShadows_natural
{
    uvec2 sun_shadow_map_dims;
} csm;

layout(set = 8, binding = 0, std430) readonly buffer StructuredBuffer
{
    layout(row_major) ViewConstants_natural _member0[];
} csm_setup_sun_view;

layout(set = 8, binding = 1, std430) readonly buffer csm_setup_cascade_splits_buf
{
    vec4 _member0[];
} csm_setup_cascade_splits_buf_1;

layout(set = 0, binding = 5, std430) buffer RWStructuredBuffer
{
    uint _member0[];
} ice_refl_count_buffer;

layout(set = 0, binding = 6, std430) buffer ice_refl_px_buffer
{
    uint _member0[];
} ice_refl_px_buffer_1;

layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 0, binding = 1) uniform texture2D half_depth_tex;
layout(set = 2, binding = 3) uniform sampler samplers_llc;
layout(set = 2, binding = 2) uniform sampler samplers_nnc;
layout(set = 2, binding = 0) uniform sampler samplers_lnc;
layout(set = 0, binding = 2) uniform texture2D refraction_tex;
layout(set = 1, binding = 0) uniform texture2D resource_handles_1[];
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 6, binding = 0) uniform texture2D blue_noise_textures_uniform01;
layout(set = 9, binding = 1) uniform texture2DArray csm_sun_shadow_map;
layout(set = 9, binding = 2) uniform utexture2DArray csm_sun_shadow_stencil_map;
layout(set = 2, binding = 11) uniform samplerShadow samplers_shadow_linear;
layout(set = 0, binding = 4) uniform texture2D shadows_history_tex;

layout(location = 1) in vec3 vs_out_pos_ws;
layout(location = 0) out vec3 entryPointParam_ps_main_color;
layout(location = 1) out float entryPointParam_ps_main_refl_roughness_sqrt;
layout(location = 2) out uint entryPointParam_ps_main_refr_hit_packed;
layout(location = 3) out uint entryPointParam_ps_main_refr_hit_radiance;
layout(location = 4) out float entryPointParam_ps_main_shadow_temporal;

void main()
{
    bool _89 = helperInvocationEXT();
    uvec2 _98 = uvec2(gl_FragCoord.xy);
    uvec2 _101 = _98 / uvec2(2u);
    vec2 _113 = vec2(globalParams.half_depth_tex_dims);
    vec2 _3998 = (((vec2(ivec2(_101)) + vec2(0.5)) / _113) - vec2(0.5)) * vec2(2.0, -2.0);
    vec3 wo = -normalize(((vec4(_3998, 0.0, 1.0) * current_view_1.sample_to_view) * current_view_1.view_to_world).xyz);
    vec2 _321 = vec2(uvec2(textureSize(resource_handles[nonuniformEXT(globalParams.surface_roughness_tex.bindless_handle)], 0)));
    vec2 _323 = vs_out_pos_ws.xz * 0.100000001490116119384765625;
    vec2 _4089 = mat2(vec2(1.0, 0.0), vec2(-0.57735025882720947265625, 1.1547005176544189453125)) * (_323 * 3.4639999866485595703125);
    vec2 _4090 = floor(_4089);
    vec2 _4091 = fract(_4089);
    float _4094 = _4091.x;
    float _4095 = 1.0 - _4094;
    float _4096 = _4091.y;
    float _4097 = _4095 - _4096;
    bool _4101 = _4097 > 0.0;
    vec3 _9471;
    if (_4101)
    {
        _9471 = vec3(_4090, _4097);
    }
    else
    {
        _9471 = vec3(_4090 + vec2(1.0), -_4097);
    }
    vec3 _9473;
    if (_4101)
    {
        _9473 = vec3(_4090 + vec2(0.0, 1.0), _4096);
    }
    else
    {
        _9473 = vec3(_4090 + vec2(1.0, 0.0), 1.0 - _4096);
    }
    vec3 _9475;
    if (_4101)
    {
        _9475 = vec3(_4090 + vec2(1.0, 0.0), _4094);
    }
    else
    {
        _9475 = vec3(_4090 + vec2(0.0, 1.0), _4095);
    }
    vec4 _4150 = vec4(dFdx(_323), dFdy(_323) * (-1.0));
    uvec2 _4227 = uvec2(_9471.xy);
    uvec2 _4233 = ((_4227 >> uvec2(8u)) ^ _4227.yx) * uvec2(1103515245u);
    vec2 _4155 = _4150.xy;
    vec2 _4156 = _4150.zw;
    uvec2 _4244 = uvec2(_9473.xy);
    uvec2 _4250 = ((_4244 >> uvec2(8u)) ^ _4244.yx) * uvec2(1103515245u);
    uvec2 _4261 = uvec2(_9475.xy);
    uvec2 _4267 = ((_4261 >> uvec2(8u)) ^ _4261.yx) * uvec2(1103515245u);
    vec4 _4201 = textureLod(nonuniformEXT(sampler2D(resource_handles[globalParams.surface_roughness_tex.bindless_handle], samplers_llr)), vec2(0.0), (log(min(_321.x, _321.y)) * 1.44269502162933349609375) + 1.0);
    float refl_roughness = 0.0199999995529651641845703125 + (0.300000011920928955078125 * (1.0 - ((((((textureGrad(nonuniformEXT(sampler2D(resource_handles[globalParams.surface_roughness_tex.bindless_handle], samplers_llr)), _323 + (vec2(((_4233 >> uvec2(8u)) ^ _4233.yx) * uvec2(1103515245u)) * 2.3283064365386962890625e-10), _4155, _4156) * _9471.z) + (textureGrad(nonuniformEXT(sampler2D(resource_handles[globalParams.surface_roughness_tex.bindless_handle], samplers_llr)), _323 + (vec2(((_4250 >> uvec2(8u)) ^ _4250.yx) * uvec2(1103515245u)) * 2.3283064365386962890625e-10), _4155, _4156) * _9473.z)) + (textureGrad(nonuniformEXT(sampler2D(resource_handles[globalParams.surface_roughness_tex.bindless_handle], samplers_llr)), _323 + (vec2(((_4267 >> uvec2(8u)) ^ _4267.yx) * uvec2(1103515245u)) * 2.3283064365386962890625e-10), _4155, _4156) * _9475.z)) - _4201) / vec4(length(vec3(_9471.z, _9473.z, _9475.z)))) + _4201).x));
    vec3 _549 = mat3(vec3(1.0, -0.0, 0.0), vec3(-0.0, 0.0, 1.0), vec3(-0.0, -1.0, 0.0)) * wo;
    uint _550 = _98.x;
    uint _551 = _98.y;
    uint _9480;
    _9480 = 0u;
    uint _4309;
    uint _4328;
    uint _10748;
    uint _10749;
    uint _9479 = 32u;
    uint _10515 = _550;
    uint _10516 = _551;
    for (;;)
    {
        if (!(_9479 > 0u))
        {
            break;
        }
        uint _4296 = uint((_10515 & _9479) > 0u);
        uint _4301 = uint((_10516 & _9479) > 0u);
        _4309 = _9480 + ((_9479 * _9479) * ((3u * _4296) ^ _4301));
        if (_4301 == 0u)
        {
            uint _10517;
            uint _10518;
            if (_4296 == 1u)
            {
                _10518 = 63u - _10516;
                _10517 = 63u - _10515;
            }
            else
            {
                _10518 = _10516;
                _10517 = _10515;
            }
            _10749 = _10517;
            _10748 = _10518;
        }
        else
        {
            _10749 = _10516;
            _10748 = _10515;
        }
        _4328 = _9479 / 2u;
        _10516 = _10749;
        _10515 = _10748;
        _9480 = _4309;
        _9479 = _4328;
        continue;
    }
    mat4 _4729;
    float _4731;
    float _8590;
    float _8591;
    float _9387;
    uint _645 = frame_counter.index % 64u;
    vec2 _4338 = fract((vec2(0.75487768650054931640625, 0.56984031200408935546875) * float(_9480 + (288u * _645))) + vec2(0.5));
    vec3 _4345 = normalize(vec3(_549.xy * vec2(0.07500000298023223876953125), _549.z));
    float _4355 = 6.283185482025146484375 * _4338.x;
    float _4358 = _4345.z;
    float _4361 = fma(1.0 - (_4338.y * 0.300000011920928955078125), 1.0 + _4358, -_4358);
    float _4365 = sqrt(clamp(1.0 - (_4361 * _4361), 0.0, 1.0));
    vec3 _4371 = vec3(_4365 * cos(_4355), _4365 * sin(_4355), _4361) + _4345;
    float _717 = wo.y;
    float _4375 = 1.0 - _717;
    float _4391 = 5.588237762451171875 * float(_645);
    float _4401 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_550) + _4391)) + (0.005837149918079376220703125 * (float(_551) + _4391))));
    vec4 _4427 = (vec4(_3998, max(1.0000000458137049657431332655433e-18, texelFetch(half_depth_tex, ivec2(_101), 0).x), 1.0) * current_view_1.sample_to_view) * current_view_1.view_to_world;
    vec3 _839 = vec4(_3998, gl_FragCoord.z, 1.0).xyz;
    vec4 _4476 = (vec4(vs_out_pos_ws + ((reflect(wo, normalize(vec3(_4371.xy * vec2(0.07500000298023223876953125), _4371.z)) * mat3(vec3(1.0, -0.0, 0.0), vec3(-0.0, 0.0, 1.0), vec3(-0.0, -1.0, 0.0))) * vec3(-1.0, 1.0, -1.0)) * min(4.0, 4.0 * length(vs_out_pos_ws - (_4427.xyz / vec3(_4427.w))))), 1.0) * current_view_1.world_to_view) * current_view_1.view_to_sample;
    vec3 _4480 = _4476.xyz / vec3(_4476.w);
    vec4 _4501 = vec4(_839, 1.0);
    vec4 _4502 = _4501 + (vec4(_4480 - _839, 0.0) * float(int(sign(_4480.z))));
    float _4503 = _4502.w;
    vec3 _4516 = (_4502 / vec4(float((_4503 >= 0.0) ? 1 : (-1)) * max(1.0000000133514319600180897396058e-10, abs(_4503)))).xyz;
    vec3 _4518 = _4516 - _839;
    vec3 _4524 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), lessThan(_4518, vec3(0.0))) - _839) / _4518;
    vec3 _4531 = _839 + (_4518 * max(0.0, max(_4524.x, _4524.y)));
    vec3 _4532 = _4516 - _4531;
    vec3 _4537 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), greaterThanEqual(_4532, vec3(0.0))) - _4531) / _4532;
    vec3 _4552 = _4531 + (_4532 * min(1.0, min(min(_4537.x, _4537.y), _4537.z)));
    float _9931;
    do
    {
        _4729 = current_view_1.clip_to_view;
        _4731 = _4729[3].z;
        float _4634 = 0.100000001490116119384765625 * _4731;
        _9387 = _4735.base._distance;
        _8590 = _4735.penetration;
        _8591 = _4735.thickness;
        uint _4650 = uint(int(max(2u, min(3u, uint(int(floor(length((((_4552.xy * vec2(0.5, -0.5)) + vec2(0.5)) - ((_4531.xy * vec2(0.5, -0.5)) + vec2(0.5))) * _113))))))));
        float _9585;
        bool _9776;
        float _9777;
        float _9779;
        float _9796;
        float _9813;
        do
        {
            vec3 _4802 = _4552 - _4531;
            float _4811 = float(_4650);
            float _9507;
            do
            {
                if (_4552.z > 9.5367431640625e-07)
                {
                    _9507 = _4811;
                    break;
                }
                else
                {
                    _9507 = max(1.0, _4811 - 1.0);
                    break;
                }
                break; // unreachable workaround
            } while(false);
            float _4821 = 1.0 / _9507;
            bool _9594;
            float _9632;
            float _9636;
            float _9640;
            float _9648;
            float _9682;
            if (_4650 > 0u)
            {
                float _4831 = mix(0.0, 1.0, pow(_4401 * _4821, 1.0));
                vec3 _4834 = _4531 + (_4802 * vec3(_4831));
                float _4981 = 1.0 / _4834.z;
                vec4 _4993 = textureLod(sampler2D(half_depth_tex, samplers_nnc), (_4834.xy * vec2(0.5, -0.5)) + vec2(0.5), 0.0);
                float _4994 = _4993.x;
                float _5007 = (1.00000202655792236328125 / _4994) - _4981;
                bool _10802 = (_5007 < 0.0) ? true : false;
                float _9586;
                bool _9595;
                float _9633;
                float _9637;
                float _9641;
                float _9649;
                float _9683;
                if (_10802)
                {
                    _9683 = 0.0;
                    _9649 = _5007;
                    _9641 = _4981 - (1.0 / _4994);
                    _9637 = _4634;
                    _9633 = _4831;
                    _9595 = _10802;
                    _9586 = 0.0;
                }
                else
                {
                    float _9588;
                    float _9685;
                    _9685 = _5007;
                    _9588 = _4831;
                    float _4860;
                    uint _4878;
                    float _5111;
                    bool _10803;
                    bool _9596;
                    float _9634;
                    float _9638;
                    float _9642;
                    float _9650;
                    uint _9535 = 1u;
                    bool _9597 = _10802;
                    for (;;)
                    {
                        if (!(_9535 < _4650))
                        {
                            _9650 = 0.0;
                            _9642 = 0.0;
                            _9638 = 0.0;
                            _9634 = 1.0;
                            _9596 = _9597;
                            break;
                        }
                        _4860 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_9535) + _4401) * _4821, 1.0)));
                        vec3 _4863 = _4531 + (_4802 * vec3(_4860));
                        float _5085 = 1.0 / _4863.z;
                        vec4 _5097 = textureLod(sampler2D(half_depth_tex, samplers_nnc), (_4863.xy * vec2(0.5, -0.5)) + vec2(0.5), 0.0);
                        float _5098 = _5097.x;
                        _5111 = (1.00000202655792236328125 / _5098) - _5085;
                        _10803 = (_5111 < 0.0) ? true : false;
                        if (_10803)
                        {
                            _9650 = _5111;
                            _9642 = _5085 - (1.0 / _5098);
                            _9638 = _4634;
                            _9634 = _4860;
                            _9596 = _10803;
                            break;
                        }
                        _4878 = _9535 + 1u;
                        _9535 = _4878;
                        _9685 = _5111;
                        _9597 = _10803;
                        _9588 = _4860;
                        continue;
                    }
                    _9683 = _9685;
                    _9649 = _9650;
                    _9641 = _9642;
                    _9637 = _9638;
                    _9633 = _9634;
                    _9595 = _9596;
                    _9586 = _9588;
                }
                _9682 = _9683;
                _9648 = _9649;
                _9640 = _9641;
                _9636 = _9637;
                _9632 = _9633;
                _9594 = _9595;
                _9585 = _9586;
            }
            else
            {
                _9682 = 0.0;
                _9648 = 0.0;
                _9640 = 0.0;
                _9636 = 0.0;
                _9632 = 1.0;
                _9594 = false;
                _9585 = 0.0;
            }
            if (_9594)
            {
                float _9631;
                float _9635;
                float _9639;
                float _9647;
                float _9681;
                float _9691;
                _9691 = _9585;
                _9681 = _9682;
                _9647 = _9648;
                _9639 = _9640;
                _9635 = _9636;
                _9631 = _9632;
                uint _4924;
                float _10805;
                float _10806;
                float _10807;
                float _10808;
                float _10809;
                float _10810;
                uint _9614 = 0u;
                for (;;)
                {
                    if (!(_9614 < 1u))
                    {
                        break;
                    }
                    float _4904 = (_9691 + _9631) * 0.5;
                    vec3 _4907 = _4531 + (_4802 * vec3(_4904));
                    float _5189 = 1.0 / _4907.z;
                    vec4 _5201 = textureLod(sampler2D(half_depth_tex, samplers_nnc), (_4907.xy * vec2(0.5, -0.5)) + vec2(0.5), 0.0);
                    float _5202 = _5201.x;
                    float _5215 = (1.00000202655792236328125 / _5202) - _5189;
                    bool _10804 = (_5215 < 0.0) ? true : false;
                    _10805 = _10804 ? _9681 : _5215;
                    _10806 = _10804 ? _5215 : _9647;
                    _10807 = _10804 ? (_5189 - (1.0 / _5202)) : _9639;
                    _10808 = _10804 ? _4634 : _9635;
                    _10809 = _10804 ? _4904 : _9631;
                    _10810 = _10804 ? _9691 : _4904;
                    _4924 = _9614 + 1u;
                    _9691 = _10810;
                    _9681 = _10805;
                    _9647 = _10806;
                    _9639 = _10807;
                    _9635 = _10808;
                    _9631 = _10809;
                    _9614 = _4924;
                    continue;
                }
                float _4944 = mix(_9691, _9631, _9681 / (_9681 + (-_9647)));
                vec3 _4947 = _4531 + (_4802 * vec3(_4944));
                float _5313 = 1.0 / _4947.z;
                vec4 _5325 = textureLod(sampler2D(half_depth_tex, samplers_nnc), (_4947.xy * vec2(0.5, -0.5)) + vec2(0.5), 0.0);
                float _5326 = _5325.x;
                float _5339 = (1.00000202655792236328125 / _5326) - _5313;
                bool _10811 = (abs(_5339) < (_9681 * 0.89999997615814208984375)) ? true : false;
                _9813 = _10811 ? _5339 : _9647;
                _9796 = _10811 ? _4634 : _9635;
                _9779 = _10811 ? (_5313 - (1.0 / _5326)) : _9639;
                _9777 = _10811 ? _4944 : _9631;
                _9776 = true;
                break;
            }
            else
            {
                _9813 = _9387;
                _9796 = _8591;
                _9779 = _8590;
                _9777 = _9585;
                _9776 = false;
                break;
            }
            break; // unreachable workaround
        } while(false);
        bool _9830;
        if (_9776)
        {
            bool _9832;
            if (_9779 < _9796)
            {
                _9832 = _9813 < _9796;
            }
            else
            {
                _9832 = false;
            }
            _9830 = _9832;
        }
        else
        {
            _9830 = false;
        }
        if (_9830)
        {
            _9931 = _9777;
            break;
        }
        _9931 = _9585;
        break;
    } while(false);
    vec2 _1821 = vec4(mix(_4531, _4552, vec3(_9931)), 1.0).xy;
    vec2 _5410 = (_1821 * vec2(0.5, -0.5)) + vec2(0.5);
    vec4 _5436 = (vec4(_1821, max(1.0000000458137049657431332655433e-18, textureLod(sampler2D(half_depth_tex, samplers_nnc), _5410, 0.0).x), 1.0) * current_view_1.sample_to_view) * current_view_1.view_to_world;
    vec3 _5449 = _5436.xyz / vec3(_5436.w);
    vec3 _1842 = _5449 - vs_out_pos_ws;
    ivec2 _1848 = ivec2(_98);
    float _5468 = clamp(frame_constants.fog_tint_thickness.w, 0.0, 1.0);
    vec2 _5524 = (vs_out_pos_ws.xz * vec2(0.0076923076994717121124267578125)) * 0.5;
    float _5499 = max(0.00999999977648258209228515625, frame_constants.ground_fog.y);
    vec2 _5572 = (vs_out_pos_ws.xz * vec2(0.001000000047497451305389404296875)) + vec2(0.5);
    vec2 _5576 = vec2(_5572.y, 1.0 - _5572.x);
    float _5558 = 40.0 * frame_constants.ground_fog.x;
    float _5502 = vs_out_pos_ws.y - (textureLod(nonuniformEXT(sampler2D(resource_handles_1[terrain_heightmap.bg_terrain_fog_height.bindless_handle], samplers_lnc_iso)), _5576, 0.0).x + _5558);
    float _5504 = max(0.0500000007450580596923828125, frame_constants.dir_to_primary_directional_light.y);
    float _5505 = 2.0 * _5499;
    float _5508 = 1.0 + (_5499 * max(0.0, _5502));
    float _5517 = (0.00999999977648258209228515625 * frame_constants.fog_relative_extinction) * ((3.2200000286102294921875 * exp2(-dot(_5524, _5524))) * frame_constants.ground_fog.z);
    vec4 _5599 = vec4(vs_out_pos_ws, 1.0);
    vec4 _5603 = (_5599 * current_view_1.world_to_view) * current_view_1.view_to_clip;
    vec3 _5607 = _5603.xyz / vec3(_5603.w);
    float _5593 = _5607.z;
    vec2 _5621 = vec2(csm.sun_shadow_map_dims);
    vec2 _5623 = vec2(1.0) / _5621;
    vec4 _5900 = ((texelFetch(blue_noise_textures_uniform01, ivec2((uvec2(_1848) + uvec2(fract((vec2(0.75487768650054931640625, 0.56984031200408935546875) * float(frame_counter.index)) + vec2(0.5)) * vec2(256.0))) % uvec2(256u)), 0) * 255.0) * vec4(0.00390625)) + vec4(0.001953125);
    uint _10818 = (_5593 > csm_setup_cascade_splits_buf_1._member0[0].x) ? 0u : ((_5593 > csm_setup_cascade_splits_buf_1._member0[0].y) ? 1u : ((_5593 > csm_setup_cascade_splits_buf_1._member0[0].z) ? 2u : 3u));
    vec4 _5637 = _5599 * csm_setup_sun_view._member0[_10818].world_to_sample;
    vec3 _5638 = _5637.xyz;
    vec2 _5933 = (_5637.xy * vec2(0.5, -0.5)) + vec2(0.5);
    _5638.x = _5933.x;
    _5638.y = _5933.y;
    float _5660 = ((0.001000000047497451305389404296875 * _5623.x) * (-csm_setup_sun_view._member0[_10818].clip_to_view[2].z)) * (1.0 / max(0.100000001490116119384765625, abs(normalize((vec4(0.0, 0.0, -1.0, 0.0) * csm_setup_sun_view._member0[0].view_to_world).xyz).y)));
    float _9960;
    vec2 _9961;
    do
    {
        vec4 _5685 = vec4(vec3(0.0, 1.0, 0.0), 0.0) * csm_setup_sun_view._member0[_10818].world_to_view;
        float _5687 = _5685.z;
        vec2 _5701 = vec2(csm_setup_sun_view._member0[_10818].view_to_clip[0].x, csm_setup_sun_view._member0[_10818].view_to_clip[1].y);
        vec2 _5704 = ((((_5685.xy * float(int(sign(_5687)))) / vec2(max(0.100000001490116119384765625, abs(_5687)))) / _5701) * csm_setup_sun_view._member0[_10818].view_to_clip[2].z) * vec2(2.0, -2.0);
        vec2 _5707 = _5701 * 300.0;
        float _9948;
        float _9949;
        _9949 = 0.0;
        _9948 = 0.0;
        int _5776;
        float _10632;
        float _10633;
        int _9947 = 0;
        for (;;)
        {
            if (!(_9947 < 8))
            {
                break;
            }
            float _5719 = float(_9947);
            float _5953 = (_5719 * 2.3999631404876708984375) + (_5900.x * 6.283185482025146484375);
            vec2 _5724 = (vec2(cos(_5953), sin(_5953)) * ((_5719 + _5900.y) * 0.125)) * (_5707 * _5623);
            float _5725 = -_5660;
            vec3 _5726 = vec3(_5724, _5725);
            _5726.z = _5725 + (-max(0.0, dot(_5704, _5724)));
            vec3 _5736 = _5638 + _5726;
            vec2 _5737 = _5736.xy;
            vec4 _5744 = textureLod(sampler2DArray(csm_sun_shadow_map, samplers_lnc_iso), vec3(_5737, float(_10818)), 0.0);
            float _5745 = _5744.x;
            float _5746 = _5736.z;
            if (_5746 > _5745)
            {
                float _10474;
                if (texelFetch(csm_sun_shadow_stencil_map, ivec3(uvec3(uvec2(_5737 * _5621), _10818)), 0).x == 1u)
                {
                    _10474 = _9949 + (_5746 - max(_5746 - _5745, (-8.0) * csm_setup_sun_view._member0[_10818].view_to_clip[2].z));
                }
                else
                {
                    _10474 = _9949 + _5745;
                }
                _10633 = _10474;
                _10632 = _9948 + 1.0;
            }
            else
            {
                _10633 = _9949;
                _10632 = _9948;
            }
            _5776 = _9947 + 1;
            _9949 = _10633;
            _9948 = _10632;
            _9947 = _5776;
            continue;
        }
        if (_9948 == 0.0)
        {
            _9961 = vec2(1.0);
            _9960 = 1.0;
            break;
        }
        if (_9948 == 8.0)
        {
            _9961 = vec2(0.0);
            _9960 = 1.0;
            break;
        }
        vec2 _5812 = clamp(_5707 * (abs((max(9.9999999747524270787835121154785e-07, _9949 / _9948) - _5637.z) * csm_setup_sun_view._member0[_10818].clip_to_view[2].z) * mix(mix(0.0500000007450580596923828125, 0.5, _5468 * _5468), 0.5, 1.0 - exp(-((_5517 * ((1.0 / (_5505 * (_5508 * _5508))) + max(0.0, -_5502))) / _5504)))), vec2(1.0), _5707);
        float _9951;
        vec2 _9952;
        _9952 = vec2(0.0);
        _9951 = 0.0;
        float _5852;
        int _5856;
        vec2 _6008;
        int _9950 = 0;
        for (;;)
        {
            if (!(_9950 < 8))
            {
                break;
            }
            vec2 _5829 = fract(_5900.xy + fract((vec2(0.75487768650054931640625, 0.56984031200408935546875) * float(uint(_9950))) + vec2(0.5)));
            float _5987 = sqrt(_5829.x);
            float _5989 = _5829.y * 6.283185482025146484375;
            vec2 _5832 = (vec2(cos(_5989) * _5987, sin(_5989) * _5987) * _5812) * _5623;
            vec3 _5836 = _5638 + vec3(_5832, -_5660);
            float _6002 = textureLod(sampler2DArrayShadow(csm_sun_shadow_map, samplers_shadow_linear), vec4(vec3(_5836.xy, float(_10818)), _5836.z + (-max(0.0, dot(_5704, _5832)))), 0.0);
            _6008 = _9952 + vec2(_6002, _6002 * _6002);
            _5852 = _9951 + 1.0;
            _5856 = _9950 + 1;
            _9952 = _6008;
            _9951 = _5852;
            _9950 = _5856;
            continue;
        }
        _9961 = _9952 * (1.0 / _9951);
        _9960 = _5812.x;
        break;
    } while(false);
    float _6021 = clamp((_9961.x - 0.100000001490116119384765625) * 1.4285714626312255859375, 0.0, 1.0);
    vec2 clamp_range = vec2(_6021) + ((vec2(-1.0, 1.0) * sqrt(max(0.0, _9961.y - (_9961.x * _9961.x)))) * (3.0 * max(0.0, 1.0 - (_9960 * 0.20000000298023223876953125))));
    vec2 _6050 = (vec2(_1848) + vec2(0.5)) / vec2(frame_constants.world_render_resolution);
    vec4 _2679 = vec4((_6050 - vec2(0.5)) * vec2(2.0, -2.0), gl_FragCoord.z, 1.0);
    vec4 _6068 = ((_2679 * _4729) * current_view_1.view_to_clip) * current_view_1.clip_to_prev_clip;
    vec2 _6085 = ((_6068.xy / vec2(_6068.w)) * vec2(0.5, -0.5)) + vec2(0.5);
    vec4 reproj = vec4(_6085 - ((_2679.xy * vec2(0.5, -0.5)) + vec2(0.5)), float(all(equal(clamp(_6085, vec2(0.0), vec2(1.0)), _6085))), 1.0) * vec4(1.0, 1.0, clamp(1.0 - length(current_view_1.clip_to_prev_clip[3].xyz), 0.0, 1.0), 1.0);
    float _2730 = reproj.z;
    bool _9962;
    if (_2730 > 0.0)
    {
        bool _9963;
        if (globalParams.history_valid != 0u)
        {
            _9963 = !(0u == frame_counter.index);
        }
        else
        {
            _9963 = false;
        }
        _9962 = _9963;
    }
    else
    {
        _9962 = false;
    }
    float _9964;
    do
    {
        if (_9962)
        {
            _9964 = textureLod(sampler2D(shadows_history_tex, samplers_lnc), _6050 + reproj.xy, 0.0).x;
            break;
        }
        else
        {
            _9964 = _6021;
            break;
        }
        break; // unreachable workaround
    } while(false);
    float _2772 = mix(clamp(_9964, clamp_range.x, clamp_range.y), _6021, mix(1.0, 0.125, _2730));
    vec4 _6133 = (vec4(vs_out_pos_ws + (frame_constants.dir_to_primary_directional_light * 0.5), 1.0) * current_view_1.world_to_view) * current_view_1.view_to_sample;
    vec3 _6137 = _6133.xyz / vec3(_6133.w);
    vec4 _6159 = _4501 + (vec4(_6137 - _839, 0.0) * float(int(sign(_6137.z))));
    float _6160 = _6159.w;
    vec3 _6173 = (_6159 / vec4(float((_6160 >= 0.0) ? 1 : (-1)) * max(1.0000000133514319600180897396058e-10, abs(_6160)))).xyz;
    vec3 _6175 = _6173 - _839;
    vec3 _6181 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), lessThan(_6175, vec3(0.0))) - _839) / _6175;
    vec3 _6188 = _839 + (_6175 * max(0.0, max(_6181.x, _6181.y)));
    vec3 _6189 = _6173 - _6188;
    vec3 _6194 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), greaterThanEqual(_6189, vec3(0.0))) - _6188) / _6189;
    vec3 _6209 = _6188 + (_6189 * min(1.0, min(min(_6194.x, _6194.y), _6194.z)));
    float _10415;
    float _10416;
    bool _10417;
    do
    {
        float _6279 = 0.5 * _4731;
        uint _6295 = uint(int(max(2u, min(3u, uint(int(floor(length((((_6209.xy * vec2(0.5, -0.5)) + vec2(0.5)) - ((_6188.xy * vec2(0.5, -0.5)) + vec2(0.5))) * _113))))))));
        float _10069;
        bool _10260;
        float _10261;
        float _10263;
        float _10280;
        float _10297;
        do
        {
            vec3 _6447 = _6209 - _6188;
            float _6456 = float(_6295);
            float _9991;
            do
            {
                if (_6209.z > 9.5367431640625e-07)
                {
                    _9991 = _6456;
                    break;
                }
                else
                {
                    _9991 = max(1.0, _6456 - 1.0);
                    break;
                }
                break; // unreachable workaround
            } while(false);
            float _6466 = 1.0 / _9991;
            bool _10078;
            float _10116;
            float _10120;
            float _10124;
            float _10132;
            if (_6295 > 0u)
            {
                float _6476 = mix(0.0, 1.0, pow(_4401 * _6466, 1.0));
                vec3 _6479 = _6188 + (_6447 * vec3(_6476));
                vec2 _6692 = (_6479.xy * vec2(0.5, -0.5)) + vec2(0.5);
                float _6626 = 1.0 / _6479.z;
                float _6633 = 1.0 / textureLod(sampler2D(half_depth_tex, samplers_llc), _6692, 0.0).x;
                float _6640 = 1.0 / textureLod(sampler2D(half_depth_tex, samplers_nnc), _6692, 0.0).x;
                float _6652 = (max(_6633, _6640) * 1.00000202655792236328125) - _6626;
                float _6656 = _6626 - min(_6633, _6640);
                bool _10820 = (_6652 < 0.0) ? (_6656 < _6279) : false;
                float _10070;
                bool _10079;
                float _10117;
                float _10121;
                float _10125;
                float _10133;
                if (_10820)
                {
                    _10133 = _6652;
                    _10125 = _6656;
                    _10121 = _6279;
                    _10117 = _6476;
                    _10079 = _10820;
                    _10070 = 0.0;
                }
                else
                {
                    float _10072;
                    _10072 = _6476;
                    float _6505;
                    uint _6523;
                    bool _10821;
                    bool _10080;
                    float _10118;
                    float _10122;
                    float _10126;
                    float _10134;
                    uint _10019 = 1u;
                    bool _10081 = _10820;
                    for (;;)
                    {
                        if (!(_10019 < _6295))
                        {
                            _10134 = 0.0;
                            _10126 = 0.0;
                            _10122 = 0.0;
                            _10118 = 1.0;
                            _10080 = _10081;
                            break;
                        }
                        _6505 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_10019) + _4401) * _6466, 1.0)));
                        vec3 _6508 = _6188 + (_6447 * vec3(_6505));
                        vec2 _6796 = (_6508.xy * vec2(0.5, -0.5)) + vec2(0.5);
                        float _6730 = 1.0 / _6508.z;
                        float _6737 = 1.0 / textureLod(sampler2D(half_depth_tex, samplers_llc), _6796, 0.0).x;
                        float _6744 = 1.0 / textureLod(sampler2D(half_depth_tex, samplers_nnc), _6796, 0.0).x;
                        float _6756 = (max(_6737, _6744) * 1.00000202655792236328125) - _6730;
                        float _6760 = _6730 - min(_6737, _6744);
                        _10821 = (_6756 < 0.0) ? (_6760 < _6279) : false;
                        if (_10821)
                        {
                            _10134 = _6756;
                            _10126 = _6760;
                            _10122 = _6279;
                            _10118 = _6505;
                            _10080 = _10821;
                            break;
                        }
                        _6523 = _10019 + 1u;
                        _10019 = _6523;
                        _10081 = _10821;
                        _10072 = _6505;
                        continue;
                    }
                    _10133 = _10134;
                    _10125 = _10126;
                    _10121 = _10122;
                    _10117 = _10118;
                    _10079 = _10080;
                    _10070 = _10072;
                }
                _10132 = _10133;
                _10124 = _10125;
                _10120 = _10121;
                _10116 = _10117;
                _10078 = _10079;
                _10069 = _10070;
            }
            else
            {
                _10132 = 0.0;
                _10124 = 0.0;
                _10120 = 0.0;
                _10116 = 1.0;
                _10078 = false;
                _10069 = 0.0;
            }
            if (_10078)
            {
                _10297 = _10132;
                _10280 = _10120;
                _10263 = _10124;
                _10261 = _10116;
                _10260 = true;
                break;
            }
            else
            {
                _10297 = _9387;
                _10280 = _8591;
                _10263 = _8590;
                _10261 = _10069;
                _10260 = false;
                break;
            }
            break; // unreachable workaround
        } while(false);
        bool _10314;
        if (_10260)
        {
            bool _10316;
            if (_10263 < _10280)
            {
                _10316 = _10297 < _10280;
            }
            else
            {
                _10316 = false;
            }
            _10314 = _10316;
        }
        else
        {
            _10314 = false;
        }
        if (_10314)
        {
            _10417 = true;
            _10416 = _10261;
            _10415 = _10263 / _10280;
            break;
        }
        _10417 = false;
        _10416 = _10069;
        _10415 = 0.0;
        break;
    } while(false);
    float _10433;
    if (_10417)
    {
        _10433 = min(_2772, smoothstep(0.5, 0.0, (1.0 - _10415) * (1.0 - _10416)));
    }
    else
    {
        _10433 = _2772;
    }
    uvec2 _7052 = uvec2(1u, 2u);
    uvec2 _7053 = _98 & uvec2(1u);
    uint _10419;
    _10419 = 0u;
    uint _7074;
    int _7078;
    int _10418 = 0;
    for (;;)
    {
        if (!(_10418 < 2))
        {
            break;
        }
        _7074 = _10419 + (_7053[_10418] * _7052[_10418]);
        _7078 = _10418 + 1;
        _10419 = _7074;
        _10418 = _7078;
        continue;
    }
    uint _10420;
    do
    {
        if (_89)
        {
            _10420 = 0u;
            break;
        }
        else
        {
            _10420 = 1u << _10419;
            break;
        }
        break; // unreachable workaround
    } while(false);
    uint px_mask = _10420 + subgroupQuadSwapHorizontal(_10420);
    if (_10419 == uint(findMSB(px_mask + subgroupQuadSwapVertical(px_mask))))
    {
        uint rt_ray_index = atomicAdd(ice_refl_count_buffer._member0[3], 1u);
        uvec2 _7082 = uvec2(1u, 65536u);
        uvec2 _7083 = _101;
        uint _10422;
        _10422 = 0u;
        uint _7104;
        int _7108;
        int _10421 = 0;
        for (;;)
        {
            if (!(_10421 < 2))
            {
                break;
            }
            _7104 = _10422 + (_7083[_10421] * _7082[_10421]);
            _7108 = _10421 + 1;
            _10422 = _7104;
            _10421 = _7108;
            continue;
        }
        ice_refl_px_buffer_1._member0[rt_ray_index] = _10422;
        if ((rt_ray_index & 63u) == 0u)
        {
            uint _3509 = atomicAdd(ice_refl_count_buffer._member0[0], 1u);
        }
    }
    float _7136 = vs_out_pos_ws.y - (textureLod(nonuniformEXT(sampler2D(resource_handles_1[terrain_heightmap.bg_terrain_fog_height.bindless_handle], samplers_lnc_iso)), _5576, 0.0).x + _5558);
    float _7142 = 1.0 + (_5499 * max(0.0, _7136));
    float _7120 = 0.20000000298023223876953125 * (1.0 - exp(-((_5517 * ((1.0 / (_5505 * (_7142 * _7142))) + max(0.0, -_7136))) / _5504)));
    float _7124 = sqrt((refl_roughness * refl_roughness) + (_7120 * _7120));
    vec3 _10427;
    do
    {
        bool _10423;
        if (frame_constants.dir_to_primary_directional_light.y <= 0.0)
        {
            _10423 = true;
        }
        else
        {
            _10423 = _717 <= 0.0;
        }
        if (_10423)
        {
            _10427 = vec3(0.0);
            break;
        }
        float _7257 = _7124 * _7124;
        vec3 _7259 = normalize(wo + frame_constants.dir_to_primary_directional_light);
        float _7315 = _7259.y;
        float _7357 = ((_7315 * _7315) * (_7257 - 1.0)) + 1.0;
        _10427 = ((mix(vec3(0.02999999932944774627685546875), vec3(1.0), vec3(pow(max(0.0, 1.0 - dot(_7259, frame_constants.dir_to_primary_directional_light)), 5.0))) * (((2.0 * frame_constants.dir_to_primary_directional_light.y) * _717) / ((frame_constants.dir_to_primary_directional_light.y * sqrt(((((-_717) * _7257) + _717) * _717) + _7257)) + (_717 * sqrt(((((-frame_constants.dir_to_primary_directional_light.y) * _7257) + frame_constants.dir_to_primary_directional_light.y) * frame_constants.dir_to_primary_directional_light.y) + _7257))))) * (_7257 / ((3.1415927410125732421875 * _7357) * _7357))) / vec3((4.0 * _717) * frame_constants.dir_to_primary_directional_light.y);
        break;
    } while(false);
    vec3 _3798 = mat3(vec3(1.0, -0.0, 0.0), vec3(-0.0, 0.0, 1.0), vec3(-0.0, -1.0, 0.0)) * (_1842 * vec3(1.0, -1.0, 1.0));
    float _7431 = clamp(length(_3798), -65504.0, 65504.0);
    vec3 _7433 = _3798 * (1.0 / _7431);
    vec3 _7476 = clamp((exp(vec3(-0.5950000286102294921875, -0.374000012874603271484375, -0.3060000240802764892578125) * ((abs(vs_out_pos_ws.y - _5449.y) + length(_1842)) + 0.699999988079071044921875)) * (0.959999978542327880859375 - (0.959999978542327880859375 * ((((_4375 * _4375) * _4375) * _4375) * _4375)))) * textureLod(sampler2D(refraction_tex, samplers_lnc), _5410, 0.0).xyz, vec3(0.0), vec3(65408.0));
    float _7486 = uintBitsToFloat((floatBitsToUint(max(max(1.52587890625e-05, _7476.x), max(_7476.y, _7476.z))) + 125845504u) & 2139095040u);
    uvec3 _7489 = floatBitsToUint(_7476 + vec3(_7486));
    entryPointParam_ps_main_color = mix((frame_constants.sun_color.xyz * _10427.x) * (_10433 * clamp(frame_constants.dir_to_primary_directional_light.y, 0.0, 1.0)), ((frame_constants.sun_color.xyz * (0.699999988079071044921875 * _10433)) * 0.3183098733425140380859375) + frame_constants.sky_high_color.xyz, vec3(0.00999999977648258209228515625));
    entryPointParam_ps_main_refl_roughness_sqrt = sqrt(refl_roughness);
    entryPointParam_ps_main_refr_hit_packed = ((uint((clamp((_7433.x * 0.5) + 0.5, 0.0, 1.0) * 255.0) + 0.5) << 24u) | (uint((clamp((_7433.y * 0.5) + 0.5, 0.0, 1.0) * 255.0) + 0.5) << 16u)) | (packHalf2x16(vec2(_7431)) & 65535u);
    entryPointParam_ps_main_refr_hit_radiance = ((((floatBitsToUint(_7486) << uint(4)) + 268435456u) | (_7489.z << uint(18))) | (_7489.y << uint(9))) | (_7489.x & 511u);
    entryPointParam_ps_main_shadow_temporal = _2772 + 0.00196078442968428134918212890625;
}

