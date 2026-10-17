#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_demote_to_helper_invocation : require
#extension GL_KHR_shader_subgroup_quad : require
layout(early_fragment_tests) in;

const uint _207[4] = uint[](17u, 18u, 20u, 21u);
const float _430[4] = float[](2.0, 4.0, 8.0, 12.0);
const float _467[4] = float[](2.0, 2.0, 0.5, 0.20000000298023223876953125);

struct _Array_natural_vector_float_2_32
{
    vec2 data[32];
};

struct _Array_natural_float32
{
    float data[32];
};

struct RippleSourceSsbo_natural
{
    _Array_natural_vector_float_2_32 position;
    _Array_natural_vector_float_2_32 smoothed_position;
    _Array_natural_float32 intensity;
    uint count;
    uint pad0;
    uint pad1;
    uint pad2;
};

const uvec2 _693[4] = uvec2[](uvec2(0u), uvec2(0u, 1u), uvec2(1u), uvec2(1u, 0u));

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

struct DofAutofocus_natural
{
    float focus0;
    float focus1;
    float lock_bias0;
    float lock_bias1;
    vec3 lock_pos_ws;
    uint is_locked;
    vec3 interp_lock_pos_ws;
    uint use_tilt_shift;
    float interp_lock_bias0;
    float interp_lock_bias1;
    float focus_scale;
    uint pad2;
};

vec2 _9033;
vec3 _9726;
DistanceWithPenetration _6939;

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

layout(set = 6, binding = 0, std430) readonly buffer StructuredBuffer
{
    RippleSourceSsbo_natural _member0[];
} water_waves_ripple_source_buffer;

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

layout(set = 5, binding = 0, std140) uniform current_view
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

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    uint history_valid;
    uvec2 half_depth_tex_dims;
    uvec2 refraction_tex_dims;
    uvec2 taa_history_tex_dims;
    uvec2 reprojection_tex_dims;
    vec3 water_color;
} globalParams;

layout(set = 23, binding = 0, scalar) uniform TerrainHeightmap_natural
{
    uvec2 terrain_heightmap_dims;
    Tex2D_natural bg_terrain_heightmap;
    Tex2D_natural bg_terrain_fog_height;
    vec2 bg_terrain_height_bounds_ws;
    vec4 bg_water_footprint_ws;
} terrain_heightmap;

layout(set = 27, binding = 0, std140) uniform CascadedShadows_natural
{
    uvec2 sun_shadow_map_dims;
} csm;

layout(set = 26, binding = 0, std430) readonly buffer csm_setup_sun_view
{
    layout(row_major) ViewConstants_natural _member0[];
} csm_setup_sun_view_1;

layout(set = 26, binding = 1, std430) readonly buffer csm_setup_cascade_splits_buf
{
    vec4 _member0[];
} csm_setup_cascade_splits_buf_1;

layout(set = 0, binding = 7, std430) readonly buffer autofocus_buf
{
    DofAutofocus_natural _member0[];
} autofocus_buf_1;

layout(set = 0, binding = 8, std430) buffer RWStructuredBuffer
{
    uint _member0[];
} water_rt_count_buffer;

layout(set = 0, binding = 9, std430) buffer water_rt_ray_buffer
{
    uvec4 _member0[];
} water_rt_ray_buffer_1;

layout(set = 6, binding = 1) uniform texture2D water_waves_water_noise_texture;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 8, binding = 0) uniform texture2D blue_noise_textures_uniform01;
layout(set = 0, binding = 1) uniform texture2D half_depth_tex;
layout(set = 2, binding = 3) uniform sampler samplers_llc;
layout(set = 2, binding = 2) uniform sampler samplers_nnc;
layout(set = 2, binding = 0) uniform sampler samplers_lnc;
layout(set = 0, binding = 2) uniform texture2D refraction_tex;
layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 27, binding = 1) uniform texture2DArray csm_sun_shadow_map;
layout(set = 27, binding = 2) uniform utexture2DArray csm_sun_shadow_stencil_map;
layout(set = 2, binding = 11) uniform sampler samplers_shadow_linear;
layout(set = 0, binding = 4) uniform texture2D reprojection_tex;
layout(set = 0, binding = 3) uniform texture2D taa_history_tex;

layout(location = 1) in vec3 vs_out_pos_ws;

void main()
{
    bool _89 = helperInvocationEXT();
    uvec2 _98 = uvec2(gl_FragCoord.xy);
    vec3 _9046;
    do
    {
        bool _4343 = frame_constants.glade_theme_id == 4u;
        if (_4343)
        {
            _9046 = vec3(0.0, 1.0, 0.0);
            break;
        }
        vec3 _9042;
        do
        {
            if (_4343)
            {
                _9042 = vec3(0.0);
                break;
            }
            float _4465 = float(frame_constants.game_time_sec) + frame_constants.game_time_frac;
            vec2 _9032;
            vec2 _9036;
            _9036 = _9033;
            _9032 = _9033;
            uint _4384;
            vec2 _4485;
            vec2 _4493;
            vec2 _4347[4];
            uint _9028 = 0u;
            for (;;)
            {
                if (!(_9028 < 4u))
                {
                    break;
                }
                float _4374 = float(_207[_9028]);
                int _4476 = int(floor(_4374));
                float _4478 = fract(_4374);
                uvec2 _4480 = uvec2(ivec2(_4476));
                uint _4504 = _4480.y;
                uint _4510 = _4504 + (_4504 << 10u);
                uint _4512 = _4510 ^ (_4510 >> 6u);
                uint _4514 = _4512 + (_4512 << 3u);
                uint _4516 = _4514 ^ (_4514 >> 11u);
                uint _4524 = (((_4480.x * 1664525u) + (_4516 + (_4516 << 15u))) + 1013904223u) * 1664525u;
                uint _4526 = _4524 ^ (_4524 >> 11u);
                uint _4529 = _4526 ^ ((_4526 << 7u) & 2636928640u);
                uint _4532 = _4529 ^ ((_4529 << 15u) & 4022730752u);
                uint _4534 = _4532 ^ (_4532 >> 18u);
                vec2 _4471 = _9032;
                uint _4553;
                uint _4572;
                uint _9034 = 0u;
                uint _9041 = _4534;
                for (;;)
                {
                    if (!(_9034 < 2u))
                    {
                        break;
                    }
                    uint _4564 = _9041 + (_9041 << 10u);
                    uint _4566 = _4564 ^ (_4564 >> 6u);
                    uint _4568 = _4566 + (_4566 << 3u);
                    uint _4570 = _4568 ^ (_4568 >> 11u);
                    _4572 = _4570 + (_4570 << 15u);
                    _4471[_9034] = uintBitsToFloat((_9041 & 8388607u) | 1065353216u) - 1.0;
                    _4553 = _9034 + 1u;
                    _9041 = _4572;
                    _9034 = _4553;
                    continue;
                }
                _4485 = _4471;
                uvec2 _4488 = uvec2(ivec2(_4476 + 1));
                uint _4582 = _4488.y;
                uint _4588 = _4582 + (_4582 << 10u);
                uint _4590 = _4588 ^ (_4588 >> 6u);
                uint _4592 = _4590 + (_4590 << 3u);
                uint _4594 = _4592 ^ (_4592 >> 11u);
                uint _4602 = (((_4488.x * 1664525u) + (_4594 + (_4594 << 15u))) + 1013904223u) * 1664525u;
                uint _4604 = _4602 ^ (_4602 >> 11u);
                uint _4607 = _4604 ^ ((_4604 << 7u) & 2636928640u);
                uint _4610 = _4607 ^ ((_4607 << 15u) & 4022730752u);
                uint _4612 = _4610 ^ (_4610 >> 18u);
                vec2 _4472 = _9036;
                uint _4631;
                uint _4650;
                uint _9037 = 0u;
                uint _9040 = _4612;
                for (;;)
                {
                    if (!(_9037 < 2u))
                    {
                        break;
                    }
                    uint _4642 = _9040 + (_9040 << 10u);
                    uint _4644 = _4642 ^ (_4642 >> 6u);
                    uint _4646 = _4644 + (_4644 << 3u);
                    uint _4648 = _4646 ^ (_4646 >> 11u);
                    _4650 = _4648 + (_4648 << 15u);
                    _4472[_9037] = uintBitsToFloat((_9040 & 8388607u) | 1065353216u) - 1.0;
                    _4631 = _9037 + 1u;
                    _9040 = _4650;
                    _9037 = _4631;
                    continue;
                }
                _4493 = _4472;
                float _4662 = (_4478 * _4478) * (3.0 - (2.0 * _4478));
                _4347[_9028] = (normalize(((_4485 * (1.0 - _4662)) + (_4493 * _4662)) - vec2(0.5)) * _4465) * 3.0;
                _4384 = _9028 + 1u;
                _9036 = _4493;
                _9032 = _4485;
                _9028 = _4384;
                continue;
            }
            vec3 _9030;
            _9030 = vec3(0.0);
            uint _4397;
            vec3 _9722;
            uint _9029 = 0u;
            for (;;)
            {
                if (!(_9029 < 4u))
                {
                    break;
                }
                _4397 = _9029 + 1u;
                float _4399 = float(_4397) * 10.16640758514404296875;
                float _4400 = cos(_4399);
                float _4401 = sin(_4399);
                mat2 _4405 = mat2(vec2(_4400, _4401), vec2(-_4401, _4400));
                float _4430 = _430[_9029] * 0.01200000010430812835693359375;
                vec3 _4432 = (((texture(sampler2D(water_waves_water_noise_texture, samplers_llr), (((vs_out_pos_ws.xz * _430[_9029]) + _4347[_9029]) * _4405) * 0.01200000010430812835693359375).xyz * vec3(1.0, 2.0, 2.0)) + vec3(-0.5, -1.0, -1.0)) * _467[_9029]) * vec3(1.0, _4430, _4430);
                _9722 = vec3(_9030.x + _4432.x, _9030.yz + (_4405 * _4432.yz));
                _9030 = _9722;
                _9029 = _4397;
                continue;
            }
            _9042 = _9030;
            break;
        } while(false);
        vec3 _9045;
        do
        {
            if (_4343)
            {
                _9045 = vec3(0.0);
                break;
            }
            uint _4679 = min(32u, water_waves_ripple_source_buffer._member0[0].count);
            vec3 _9044;
            _9044 = vec3(0.0);
            vec3 _4709;
            uint _4713;
            uint _9043 = 0u;
            for (;;)
            {
                if (!(_9043 < _4679))
                {
                    break;
                }
                vec2 _4748 = mix(water_waves_ripple_source_buffer._member0[0].position.data[_9043], water_waves_ripple_source_buffer._member0[0].smoothed_position.data[_9043], vec2(0.5));
                vec2 _4749 = _4748 - vs_out_pos_ws.xz;
                float _4750 = length(_4749);
                vec2 _4752 = (water_waves_ripple_source_buffer._member0[0].smoothed_position.data[_9043] - water_waves_ripple_source_buffer._member0[0].position.data[_9043]) * 3.0;
                float _4754 = _4750 + dot(_4749, _4752);
                float _4758 = (float(frame_constants.game_time_sec) + frame_constants.game_time_frac) * 6.0;
                float _4761 = max(_4750, _4754);
                float _4764 = sin((_4754 * 16.3649997711181640625) - _4758) / (1.0 + (((_4761 * _4761) * _4761) * _4761));
                vec2 _4781 = _4748 - (vs_out_pos_ws.xz - vec2(0.00999999977648258209228515625, 0.0));
                float _4782 = length(_4781);
                float _4786 = _4782 + dot(_4781, _4752);
                float _4793 = max(_4782, _4786);
                vec2 _4813 = _4748 - (vs_out_pos_ws.xz - vec2(0.0, 0.00999999977648258209228515625));
                float _4814 = length(_4813);
                float _4818 = _4814 + dot(_4813, _4752);
                float _4825 = max(_4814, _4818);
                vec2 _4740 = vec3(_4764, (sin((_4786 * 16.3649997711181640625) - _4758) / (1.0 + (((_4793 * _4793) * _4793) * _4793))) - _4764, (sin((_4818 * 16.3649997711181640625) - _4758) / (1.0 + (((_4825 * _4825) * _4825) * _4825))) - _4764).yz * 0.5;
                vec3 _9011;
                _9011.y = _4740.x;
                _9011.z = _4740.y;
                _4709 = _9044 + (_9011 * water_waves_ripple_source_buffer._member0[0].intensity.data[_9043]);
                _4713 = _9043 + 1u;
                _9044 = _4709;
                _9043 = _4713;
                continue;
            }
            _9045 = _9044;
            break;
        } while(false);
        vec3 _4322 = vec3(_9042.y, 1.0, _9042.z);
        float _4327 = abs(1.0);
        vec2 _4330 = vec2(_9042.yz) + (vec2(_9045.yz) / vec2(_4327));
        _4322.x = _4330.x;
        _4322.z = _4330.y;
        _9046 = normalize(_4322);
        break;
    } while(false);
    vec2 _4889 = (((vec2(ivec2((_98 + uvec2(1u)) - _693[frame_counter.index & 3u])) + vec2(0.5)) / vec2(frame_constants.world_render_resolution)) - vec2(0.5)) * vec2(2.0, -2.0);
    vec4 _4880 = vec4(_4889, gl_FragCoord.z, 1.0);
    vec4 _4884 = (_4880 * current_view_1.sample_to_view) * current_view_1.view_to_world;
    float _4906 = 5.588237762451171875 * float(frame_counter.index % 64u);
    float _4916 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_98.x) + _4906)) + (0.005837149918079376220703125 * (float(_98.y) + _4906))));
    vec3 _950 = _4880.xyz;
    vec3 _2967 = -reflect(-normalize(((vec4(_4889, 0.0, 1.0) * current_view_1.sample_to_view) * current_view_1.view_to_world).xyz), _9046);
    float _2969 = _2967.y;
    vec3 _9047;
    if (_2969 < 0.0)
    {
        vec3 _9019 = _2967;
        _9019.y = -_2969;
        _9047 = _9019;
    }
    else
    {
        _9047 = _2967;
    }
    vec4 _6706 = vec4(_950, 1.0) + ((vec4(_9047, 0.0) * current_view_1.world_to_view) * current_view_1.view_to_clip);
    float _6707 = _6706.w;
    vec3 _6720 = (_6706 / vec4(float((_6707 >= 0.0) ? 1 : (-1)) * max(1.0000000133514319600180897396058e-10, abs(_6707)))).xyz;
    vec3 _6722 = _6720 - _950;
    vec3 _6728 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), lessThan(_6722, vec3(0.0))) - _950) / _6722;
    vec3 _6735 = _950 + (_6722 * max(0.0, max(_6728.x, _6728.y)));
    vec3 _6736 = _6720 - _6735;
    vec3 _6741 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), greaterThanEqual(_6736, vec3(0.0))) - _6735) / _6736;
    vec3 _6756 = _6735 + (_6736 * min(min(_6741.x, _6741.y), _6741.z));
    float _9501;
    bool _9502;
    do
    {
        uint _6854 = uint(int(max(2u, min(8u, uint(int(floor(length((((_6756.xy * vec2(0.5, -0.5)) + vec2(0.5)) - ((_6735.xy * vec2(0.5, -0.5)) + vec2(0.5))) * vec2(globalParams.half_depth_tex_dims)))))))));
        float _9152;
        bool _9343;
        float _9344;
        float _9346;
        float _9363;
        float _9380;
        do
        {
            vec3 _7006 = _6756 - _6735;
            float _7015 = float(_6854);
            float _9074;
            do
            {
                if (_6756.z > 9.5367431640625e-07)
                {
                    _9074 = _7015;
                    break;
                }
                else
                {
                    _9074 = max(1.0, _7015 - 1.0);
                    break;
                }
                break; // unreachable workaround
            } while(false);
            float _7025 = 1.0 / _9074;
            bool _9161;
            float _9199;
            float _9203;
            float _9207;
            float _9215;
            float _9249;
            if (_6854 > 0u)
            {
                float _7035 = mix(0.0, 1.0, pow(_4916 * _7025, 1.0));
                vec3 _7038 = _6735 + (_7006 * vec3(_7035));
                float _7185 = 1.0 / _7038.z;
                vec4 _7197 = textureLod(sampler2D(half_depth_tex, samplers_nnc), (_7038.xy * vec2(0.5, -0.5)) + vec2(0.5), 0.0);
                float _7198 = _7197.x;
                float _7211 = (1.00000202655792236328125 / _7198) - _7185;
                bool _9728 = (_7211 < 0.0) ? true : false;
                float _9153;
                bool _9162;
                float _9200;
                float _9204;
                float _9208;
                float _9216;
                float _9250;
                if (_9728)
                {
                    _9250 = 0.0;
                    _9216 = _7211;
                    _9208 = _7185 - (1.0 / _7198);
                    _9204 = current_view_1.clip_to_view[3].z;
                    _9200 = _7035;
                    _9162 = _9728;
                    _9153 = 0.0;
                }
                else
                {
                    float _9155;
                    float _9252;
                    _9252 = _7211;
                    _9155 = _7035;
                    float _7064;
                    uint _7082;
                    float _7315;
                    bool _9729;
                    bool _9163;
                    float _9201;
                    float _9205;
                    float _9209;
                    float _9217;
                    uint _9102 = 1u;
                    bool _9164 = _9728;
                    for (;;)
                    {
                        if (!(_9102 < _6854))
                        {
                            _9217 = 0.0;
                            _9209 = 0.0;
                            _9205 = 0.0;
                            _9201 = 1.0;
                            _9163 = _9164;
                            break;
                        }
                        _7064 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_9102) + _4916) * _7025, 1.0)));
                        vec3 _7067 = _6735 + (_7006 * vec3(_7064));
                        float _7289 = 1.0 / _7067.z;
                        vec4 _7301 = textureLod(sampler2D(half_depth_tex, samplers_nnc), (_7067.xy * vec2(0.5, -0.5)) + vec2(0.5), 0.0);
                        float _7302 = _7301.x;
                        _7315 = (1.00000202655792236328125 / _7302) - _7289;
                        _9729 = (_7315 < 0.0) ? true : false;
                        if (_9729)
                        {
                            _9217 = _7315;
                            _9209 = _7289 - (1.0 / _7302);
                            _9205 = current_view_1.clip_to_view[3].z;
                            _9201 = _7064;
                            _9163 = _9729;
                            break;
                        }
                        _7082 = _9102 + 1u;
                        _9102 = _7082;
                        _9252 = _7315;
                        _9164 = _9729;
                        _9155 = _7064;
                        continue;
                    }
                    _9250 = _9252;
                    _9216 = _9217;
                    _9208 = _9209;
                    _9204 = _9205;
                    _9200 = _9201;
                    _9162 = _9163;
                    _9153 = _9155;
                }
                _9249 = _9250;
                _9215 = _9216;
                _9207 = _9208;
                _9203 = _9204;
                _9199 = _9200;
                _9161 = _9162;
                _9152 = _9153;
            }
            else
            {
                _9249 = 0.0;
                _9215 = 0.0;
                _9207 = 0.0;
                _9203 = 0.0;
                _9199 = 1.0;
                _9161 = false;
                _9152 = 0.0;
            }
            if (_9161)
            {
                float _9198;
                float _9202;
                float _9206;
                float _9214;
                float _9248;
                float _9258;
                _9258 = _9152;
                _9248 = _9249;
                _9214 = _9215;
                _9206 = _9207;
                _9202 = _9203;
                _9198 = _9199;
                uint _7128;
                float _9731;
                float _9732;
                float _9733;
                float _9734;
                float _9735;
                float _9736;
                uint _9181 = 0u;
                for (;;)
                {
                    if (!(_9181 < 3u))
                    {
                        break;
                    }
                    float _7108 = (_9258 + _9198) * 0.5;
                    vec3 _7111 = _6735 + (_7006 * vec3(_7108));
                    float _7393 = 1.0 / _7111.z;
                    vec4 _7405 = textureLod(sampler2D(half_depth_tex, samplers_nnc), (_7111.xy * vec2(0.5, -0.5)) + vec2(0.5), 0.0);
                    float _7406 = _7405.x;
                    float _7419 = (1.00000202655792236328125 / _7406) - _7393;
                    bool _9730 = (_7419 < 0.0) ? true : false;
                    _9731 = _9730 ? _9248 : _7419;
                    _9732 = _9730 ? _7419 : _9214;
                    _9733 = _9730 ? (_7393 - (1.0 / _7406)) : _9206;
                    _9734 = _9730 ? current_view_1.clip_to_view[3].z : _9202;
                    _9735 = _9730 ? _7108 : _9198;
                    _9736 = _9730 ? _9258 : _7108;
                    _7128 = _9181 + 1u;
                    _9258 = _9736;
                    _9248 = _9731;
                    _9214 = _9732;
                    _9206 = _9733;
                    _9202 = _9734;
                    _9198 = _9735;
                    _9181 = _7128;
                    continue;
                }
                float _7148 = mix(_9258, _9198, _9248 / (_9248 + (-_9214)));
                vec3 _7151 = _6735 + (_7006 * vec3(_7148));
                float _7517 = 1.0 / _7151.z;
                vec4 _7529 = textureLod(sampler2D(half_depth_tex, samplers_nnc), (_7151.xy * vec2(0.5, -0.5)) + vec2(0.5), 0.0);
                float _7530 = _7529.x;
                float _7543 = (1.00000202655792236328125 / _7530) - _7517;
                bool _9737 = (abs(_7543) < (_9248 * 0.89999997615814208984375)) ? true : false;
                _9380 = _9737 ? _7543 : _9214;
                _9363 = _9737 ? current_view_1.clip_to_view[3].z : _9202;
                _9346 = _9737 ? (_7517 - (1.0 / _7530)) : _9206;
                _9344 = _9737 ? _7148 : _9198;
                _9343 = true;
                break;
            }
            else
            {
                _9380 = _6939.base._distance;
                _9363 = _6939.thickness;
                _9346 = _6939.penetration;
                _9344 = _9152;
                _9343 = false;
                break;
            }
            break; // unreachable workaround
        } while(false);
        bool _9397;
        if (_9343)
        {
            bool _9399;
            if (_9346 < _9363)
            {
                _9399 = _9380 < _9363;
            }
            else
            {
                _9399 = false;
            }
            _9397 = _9399;
        }
        else
        {
            _9397 = false;
        }
        if (_9397)
        {
            _9502 = true;
            _9501 = _9344;
            break;
        }
        _9502 = false;
        _9501 = _9152;
        break;
    } while(false);
    float _3747 = subgroupQuadSwapHorizontal(_9501);
    bool _3750 = subgroupQuadSwapHorizontal(_9502);
    bool _3755 = (int(_3750) != 0) && (!_9502);
    bool _9742 = _3755 ? true : _9502;
    float _9743 = _3755 ? _3747 : _9501;
    float _3761 = subgroupQuadSwapVertical(_9743);
    bool _3763 = subgroupQuadSwapVertical(_9742);
    bool _3768 = (int(_3763) != 0) && (!_9742);
    if (_3768 ? true : _9742)
    {
    }
    else
    {
        vec4 _7618 = (vec4(mix(_6735, _6756, vec3(_3768 ? _3761 : _9743)), 1.0) * current_view_1.sample_to_view) * current_view_1.view_to_world;
        uvec2 _7623 = uvec2(1u, 2u);
        uvec2 _7624 = _98 & uvec2(1u);
        uint _9539;
        _9539 = 0u;
        uint _7645;
        int _7649;
        int _9538 = 0;
        for (;;)
        {
            if (!(_9538 < 2))
            {
                break;
            }
            _7645 = _9539 + (_7624[_9538] * _7623[_9538]);
            _7649 = _9538 + 1;
            _9539 = _7645;
            _9538 = _7649;
            continue;
        }
        uint _9540;
        do
        {
            if (_89)
            {
                _9540 = 0u;
                break;
            }
            else
            {
                _9540 = 1u << _9539;
                break;
            }
            break; // unreachable workaround
        } while(false);
        uint _3902 = subgroupQuadSwapHorizontal(_9540);
        uint px_mask = _9540 + _3902;
        uint _3905 = subgroupQuadSwapVertical(px_mask);
        uint px_mask_1 = px_mask + _3905;
        if (_9539 == uint(findMSB(px_mask_1)))
        {
            uint rt_ray_index = atomicAdd(water_rt_count_buffer._member0[0], 1u);
            uvec2 _7653 = uvec2(1u, 65536u);
            uvec2 _7654 = _98 / uvec2(2u);
            uint _9542;
            _9542 = 0u;
            uint _7675;
            int _7679;
            int _9541 = 0;
            for (;;)
            {
                if (!(_9541 < 2))
                {
                    break;
                }
                _7675 = _9542 + (_7654[_9541] * _7653[_9541]);
                _7679 = _9541 + 1;
                _9542 = _7675;
                _9541 = _7679;
                continue;
            }
            vec3 _7695 = _9046 / vec3((abs(_9046.x) + abs(_9046.y)) + abs(_9046.z));
            vec3 _9543;
            if (_7695.z < 0.0)
            {
                vec2 _7729 = (vec2(1.0) - abs(_7695.yx)) * ((step(vec2(0.0), _7695.xy) * 2.0) - vec2(1.0));
                vec3 _9021;
                _9021.x = _7729.x;
                _9021.y = _7729.y;
                _9543 = _9021;
            }
            else
            {
                _9543 = _7695;
            }
            vec2 _7711 = (_9543.xy * 0.5) + vec2(0.5);
            vec3 _9025;
            _9025.x = _7711.x;
            _9025.y = _7711.y;
            water_rt_ray_buffer_1._member0[rt_ray_index] = uvec4(_9542, packHalf2x16(_9025.xy), floatBitsToUint(dot(_9047, (_7618.xyz / vec3(_7618.w)) - (_4884.xyz / vec3(_4884.w)))), (floatBitsToUint(gl_FragCoord.z) & 4294967280u) + px_mask_1);
        }
    }
}

