#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_demote_to_helper_invocation : require
#extension GL_EXT_samplerless_texture_functions : require
#extension GL_EXT_texture_shadow_lod : require
#extension GL_KHR_shader_subgroup_quad : require
layout(early_fragment_tests) in;

const uint _214[4] = uint[](17u, 18u, 20u, 21u);
const float _437[4] = float[](2.0, 4.0, 8.0, 12.0);
const float _474[4] = float[](2.0, 2.0, 0.5, 0.20000000298023223876953125);

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

const uvec2 _700[4] = uvec2[](uvec2(0u), uvec2(0u, 1u), uvec2(1u), uvec2(1u, 0u));

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

vec2 _11906;
float _13163;
vec3 _13988;
vec4 _13989;
float _13990;
DistanceWithPenetration _5818;

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
layout(set = 2, binding = 11) uniform samplerShadow samplers_shadow_linear;
layout(set = 0, binding = 4) uniform texture2D reprojection_tex;
layout(set = 0, binding = 3) uniform texture2D taa_history_tex;
layout(set = 0, binding = 5) uniform texture3D froxel_scattering_tex;
layout(set = 0, binding = 6) uniform texture3D froxel_extinction_tex;
layout(set = 14, binding = 0) uniform texture2D water_mask_tex;

layout(location = 1) in vec3 vs_out_pos_ws;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    bool _4875;
    bool _96 = helperInvocationEXT();
    vec3 _97 = vs_out_pos_ws;
    uvec2 _105 = uvec2(gl_FragCoord.xy);
    vec3 _11919;
    do
    {
        _4875 = frame_constants.glade_theme_id == 4u;
        if (_4875)
        {
            _11919 = vec3(0.0, 1.0, 0.0);
            break;
        }
        vec3 _11915;
        do
        {
            if (_4875)
            {
                _11915 = vec3(0.0);
                break;
            }
            float _4997 = float(frame_constants.game_time_sec) + frame_constants.game_time_frac;
            vec2 _11905;
            vec2 _11909;
            _11909 = _11906;
            _11905 = _11906;
            uint _4916;
            vec2 _5017;
            vec2 _5025;
            vec2 _4879[4];
            uint _11901 = 0u;
            for (;;)
            {
                if (!(_11901 < 4u))
                {
                    break;
                }
                float _4906 = float(_214[_11901]);
                int _5008 = int(floor(_4906));
                float _5010 = fract(_4906);
                uvec2 _5012 = uvec2(ivec2(_5008));
                uint _5036 = _5012.y;
                uint _5042 = _5036 + (_5036 << 10u);
                uint _5044 = _5042 ^ (_5042 >> 6u);
                uint _5046 = _5044 + (_5044 << 3u);
                uint _5048 = _5046 ^ (_5046 >> 11u);
                uint _5056 = (((_5012.x * 1664525u) + (_5048 + (_5048 << 15u))) + 1013904223u) * 1664525u;
                uint _5058 = _5056 ^ (_5056 >> 11u);
                uint _5061 = _5058 ^ ((_5058 << 7u) & 2636928640u);
                uint _5064 = _5061 ^ ((_5061 << 15u) & 4022730752u);
                uint _5066 = _5064 ^ (_5064 >> 18u);
                vec2 _5003 = _11905;
                uint _5085;
                uint _5104;
                uint _11907 = 0u;
                uint _11914 = _5066;
                for (;;)
                {
                    if (!(_11907 < 2u))
                    {
                        break;
                    }
                    uint _5096 = _11914 + (_11914 << 10u);
                    uint _5098 = _5096 ^ (_5096 >> 6u);
                    uint _5100 = _5098 + (_5098 << 3u);
                    uint _5102 = _5100 ^ (_5100 >> 11u);
                    _5104 = _5102 + (_5102 << 15u);
                    _5003[_11907] = uintBitsToFloat((_11914 & 8388607u) | 1065353216u) - 1.0;
                    _5085 = _11907 + 1u;
                    _11914 = _5104;
                    _11907 = _5085;
                    continue;
                }
                _5017 = _5003;
                uvec2 _5020 = uvec2(ivec2(_5008 + 1));
                uint _5114 = _5020.y;
                uint _5120 = _5114 + (_5114 << 10u);
                uint _5122 = _5120 ^ (_5120 >> 6u);
                uint _5124 = _5122 + (_5122 << 3u);
                uint _5126 = _5124 ^ (_5124 >> 11u);
                uint _5134 = (((_5020.x * 1664525u) + (_5126 + (_5126 << 15u))) + 1013904223u) * 1664525u;
                uint _5136 = _5134 ^ (_5134 >> 11u);
                uint _5139 = _5136 ^ ((_5136 << 7u) & 2636928640u);
                uint _5142 = _5139 ^ ((_5139 << 15u) & 4022730752u);
                uint _5144 = _5142 ^ (_5142 >> 18u);
                vec2 _5004 = _11909;
                uint _5163;
                uint _5182;
                uint _11910 = 0u;
                uint _11913 = _5144;
                for (;;)
                {
                    if (!(_11910 < 2u))
                    {
                        break;
                    }
                    uint _5174 = _11913 + (_11913 << 10u);
                    uint _5176 = _5174 ^ (_5174 >> 6u);
                    uint _5178 = _5176 + (_5176 << 3u);
                    uint _5180 = _5178 ^ (_5178 >> 11u);
                    _5182 = _5180 + (_5180 << 15u);
                    _5004[_11910] = uintBitsToFloat((_11913 & 8388607u) | 1065353216u) - 1.0;
                    _5163 = _11910 + 1u;
                    _11913 = _5182;
                    _11910 = _5163;
                    continue;
                }
                _5025 = _5004;
                float _5194 = (_5010 * _5010) * (3.0 - (2.0 * _5010));
                _4879[_11901] = (normalize(((_5017 * (1.0 - _5194)) + (_5025 * _5194)) - vec2(0.5)) * _4997) * 3.0;
                _4916 = _11901 + 1u;
                _11909 = _5025;
                _11905 = _5017;
                _11901 = _4916;
                continue;
            }
            vec3 _11903;
            _11903 = vec3(0.0);
            uint _4929;
            vec3 _13968;
            uint _11902 = 0u;
            for (;;)
            {
                if (!(_11902 < 4u))
                {
                    break;
                }
                _4929 = _11902 + 1u;
                float _4931 = float(_4929) * 10.16640758514404296875;
                float _4932 = cos(_4931);
                float _4933 = sin(_4931);
                mat2 _4937 = mat2(vec2(_4932, _4933), vec2(-_4933, _4932));
                float _4962 = _437[_11902] * 0.01200000010430812835693359375;
                vec3 _4964 = (((texture(sampler2D(water_waves_water_noise_texture, samplers_llr), (((_97.xz * _437[_11902]) + _4879[_11902]) * _4937) * 0.01200000010430812835693359375).xyz * vec3(1.0, 2.0, 2.0)) + vec3(-0.5, -1.0, -1.0)) * _474[_11902]) * vec3(1.0, _4962, _4962);
                _13968 = vec3(_11903.x + _4964.x, _11903.yz + (_4937 * _4964.yz));
                _11903 = _13968;
                _11902 = _4929;
                continue;
            }
            _11915 = _11903;
            break;
        } while(false);
        vec3 _11918;
        do
        {
            if (_4875)
            {
                _11918 = vec3(0.0);
                break;
            }
            uint _5211 = min(32u, water_waves_ripple_source_buffer._member0[0].count);
            vec3 _11917;
            _11917 = vec3(0.0);
            vec3 _5241;
            uint _5245;
            uint _11916 = 0u;
            for (;;)
            {
                if (!(_11916 < _5211))
                {
                    break;
                }
                vec2 _5280 = mix(water_waves_ripple_source_buffer._member0[0].position.data[_11916], water_waves_ripple_source_buffer._member0[0].smoothed_position.data[_11916], vec2(0.5));
                vec2 _5281 = _5280 - _97.xz;
                float _5282 = length(_5281);
                vec2 _5284 = (water_waves_ripple_source_buffer._member0[0].smoothed_position.data[_11916] - water_waves_ripple_source_buffer._member0[0].position.data[_11916]) * 3.0;
                float _5286 = _5282 + dot(_5281, _5284);
                float _5290 = (float(frame_constants.game_time_sec) + frame_constants.game_time_frac) * 6.0;
                float _5293 = max(_5282, _5286);
                float _5296 = sin((_5286 * 16.3649997711181640625) - _5290) / (1.0 + (((_5293 * _5293) * _5293) * _5293));
                vec2 _5313 = _5280 - (_97.xz - vec2(0.00999999977648258209228515625, 0.0));
                float _5314 = length(_5313);
                float _5318 = _5314 + dot(_5313, _5284);
                float _5325 = max(_5314, _5318);
                vec2 _5345 = _5280 - (_97.xz - vec2(0.0, 0.00999999977648258209228515625));
                float _5346 = length(_5345);
                float _5350 = _5346 + dot(_5345, _5284);
                float _5357 = max(_5346, _5350);
                vec2 _5272 = vec3(_5296, (sin((_5318 * 16.3649997711181640625) - _5290) / (1.0 + (((_5325 * _5325) * _5325) * _5325))) - _5296, (sin((_5350 * 16.3649997711181640625) - _5290) / (1.0 + (((_5357 * _5357) * _5357) * _5357))) - _5296).yz * 0.5;
                vec3 _11854;
                _11854.y = _5272.x;
                _11854.z = _5272.y;
                _5241 = _11917 + (_11854 * water_waves_ripple_source_buffer._member0[0].intensity.data[_11916]);
                _5245 = _11916 + 1u;
                _11917 = _5241;
                _11916 = _5245;
                continue;
            }
            _11918 = _11917;
            break;
        } while(false);
        vec3 _4854 = vec3(_11915.y, 1.0, _11915.z);
        float _4859 = abs(1.0);
        vec2 _4862 = vec2(_11915.yz) + (vec2(_11918.yz) / vec2(_4859));
        _4854.x = _4862.x;
        _4854.z = _4862.y;
        _11919 = normalize(_4854);
        break;
    } while(false);
    mat4 _5812;
    float _5814;
    float _10960;
    float _10961;
    float _11773;
    vec2 _716 = vec2(frame_constants.world_render_resolution);
    vec2 _5390 = (vec2(ivec2((_105 + uvec2(1u)) - _700[frame_counter.index & 3u])) + vec2(0.5)) / _716;
    vec2 _5421 = (_5390 - vec2(0.5)) * vec2(2.0, -2.0);
    vec4 _5412 = vec4(_5421, gl_FragCoord.z, 1.0);
    vec4 _5414 = _5412 * current_view_1.sample_to_view;
    vec4 _5416 = _5414 * current_view_1.view_to_world;
    vec3 _5427 = normalize(((vec4(_5421, 0.0, 1.0) * current_view_1.sample_to_view) * current_view_1.view_to_world).xyz);
    vec3 wo = -_5427;
    float _5435 = 1.0 - dot(wo, _11919);
    float _5437 = 0.959999978542327880859375 * ((((_5435 * _5435) * _5435) * _5435) * _5435);
    float _5451 = 5.588237762451171875 * float(frame_counter.index % 64u);
    float _5461 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_105.x) + _5451)) + (0.005837149918079376220703125 * (float(_105.y) + _5451))));
    uvec2 _5467 = uvec2(fract((vec2(0.75487768650054931640625, 0.56984031200408935546875) * float(frame_counter.index)) + vec2(0.5)) * vec2(256.0));
    vec4 _5477 = ((texelFetch(blue_noise_textures_uniform01, ivec2((_105 + _5467) % uvec2(256u)), 0) * 255.0) * vec4(0.00390625)) + vec4(0.001953125);
    uvec2 _905 = _105 / uvec2(2u);
    vec4 _5510 = (vec4(_5421, max(9.9999996826552253889678874634872e-21, texelFetch(half_depth_tex, ivec2(_905), 0).x), 1.0) * current_view_1.sample_to_view) * current_view_1.view_to_world;
    vec2 _938 = vec2(globalParams.half_depth_tex_dims);
    vec3 _980 = _5412.xyz;
    vec4 _5559 = (vec4(_97 + (normalize(_5427 - ((vec3(_11919.x, 0.0, _11919.z) * 0.5) * 2.0)) * min(4.0, 4.0 * length(_97 - (_5510.xyz / vec3(_5510.w))))), 1.0) * current_view_1.world_to_view) * current_view_1.view_to_sample;
    vec3 _5563 = _5559.xyz / vec3(_5559.w);
    vec4 _5584 = vec4(_980, 1.0);
    vec4 _5585 = _5584 + (vec4(_5563 - _980, 0.0) * float(int(sign(_5563.z))));
    float _5586 = _5585.w;
    vec3 _5599 = (_5585 / vec4(float((_5586 >= 0.0) ? 1 : (-1)) * max(1.0000000133514319600180897396058e-10, abs(_5586)))).xyz;
    vec3 _5601 = _5599 - _980;
    vec3 _5607 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), lessThan(_5601, vec3(0.0))) - _980) / _5601;
    vec3 _5614 = _980 + (_5601 * max(0.0, max(_5607.x, _5607.y)));
    vec3 _5615 = _5599 - _5614;
    vec3 _5620 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), greaterThanEqual(_5615, vec3(0.0))) - _5614) / _5615;
    vec3 _5635 = _5614 + (_5615 * min(1.0, min(min(_5620.x, _5620.y), _5620.z)));
    float _12370;
    do
    {
        _5812 = current_view_1.clip_to_view;
        _5814 = _5812[3].z;
        float _5717 = 0.100000001490116119384765625 * _5814;
        _11773 = _5818.base._distance;
        _10960 = _5818.penetration;
        _10961 = _5818.thickness;
        uint _5733 = uint(int(max(2u, min(3u, uint(int(floor(length((((_5635.xy * vec2(0.5, -0.5)) + vec2(0.5)) - ((_5614.xy * vec2(0.5, -0.5)) + vec2(0.5))) * _938))))))));
        float _12024;
        bool _12215;
        float _12216;
        float _12218;
        float _12235;
        float _12252;
        do
        {
            vec3 _5885 = _5635 - _5614;
            float _5894 = float(_5733);
            float _11946;
            do
            {
                if (_5635.z > 9.5367431640625e-07)
                {
                    _11946 = _5894;
                    break;
                }
                else
                {
                    _11946 = max(1.0, _5894 - 1.0);
                    break;
                }
                break; // unreachable workaround
            } while(false);
            float _5904 = 1.0 / _11946;
            bool _12033;
            float _12071;
            float _12075;
            float _12079;
            float _12087;
            float _12121;
            if (_5733 > 0u)
            {
                float _5914 = mix(0.0, 1.0, pow(_5461 * _5904, 1.0));
                vec3 _5917 = _5614 + (_5885 * vec3(_5914));
                float _6064 = 1.0 / _5917.z;
                vec4 _6076 = textureLod(sampler2D(half_depth_tex, samplers_nnc), (_5917.xy * vec2(0.5, -0.5)) + vec2(0.5), 0.0);
                float _6077 = _6076.x;
                float _6090 = (1.00000202655792236328125 / _6077) - _6064;
                bool _13992 = (_6090 < 0.0) ? true : false;
                float _12025;
                bool _12034;
                float _12072;
                float _12076;
                float _12080;
                float _12088;
                float _12122;
                if (_13992)
                {
                    _12122 = 0.0;
                    _12088 = _6090;
                    _12080 = _6064 - (1.0 / _6077);
                    _12076 = _5717;
                    _12072 = _5914;
                    _12034 = _13992;
                    _12025 = 0.0;
                }
                else
                {
                    float _12027;
                    float _12124;
                    _12124 = _6090;
                    _12027 = _5914;
                    float _5943;
                    uint _5961;
                    float _6194;
                    bool _13993;
                    bool _12035;
                    float _12073;
                    float _12077;
                    float _12081;
                    float _12089;
                    uint _11974 = 1u;
                    bool _12036 = _13992;
                    for (;;)
                    {
                        if (!(_11974 < _5733))
                        {
                            _12089 = 0.0;
                            _12081 = 0.0;
                            _12077 = 0.0;
                            _12073 = 1.0;
                            _12035 = _12036;
                            break;
                        }
                        _5943 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_11974) + _5461) * _5904, 1.0)));
                        vec3 _5946 = _5614 + (_5885 * vec3(_5943));
                        float _6168 = 1.0 / _5946.z;
                        vec4 _6180 = textureLod(sampler2D(half_depth_tex, samplers_nnc), (_5946.xy * vec2(0.5, -0.5)) + vec2(0.5), 0.0);
                        float _6181 = _6180.x;
                        _6194 = (1.00000202655792236328125 / _6181) - _6168;
                        _13993 = (_6194 < 0.0) ? true : false;
                        if (_13993)
                        {
                            _12089 = _6194;
                            _12081 = _6168 - (1.0 / _6181);
                            _12077 = _5717;
                            _12073 = _5943;
                            _12035 = _13993;
                            break;
                        }
                        _5961 = _11974 + 1u;
                        _11974 = _5961;
                        _12124 = _6194;
                        _12036 = _13993;
                        _12027 = _5943;
                        continue;
                    }
                    _12122 = _12124;
                    _12088 = _12089;
                    _12080 = _12081;
                    _12076 = _12077;
                    _12072 = _12073;
                    _12034 = _12035;
                    _12025 = _12027;
                }
                _12121 = _12122;
                _12087 = _12088;
                _12079 = _12080;
                _12075 = _12076;
                _12071 = _12072;
                _12033 = _12034;
                _12024 = _12025;
            }
            else
            {
                _12121 = 0.0;
                _12087 = 0.0;
                _12079 = 0.0;
                _12075 = 0.0;
                _12071 = 1.0;
                _12033 = false;
                _12024 = 0.0;
            }
            if (_12033)
            {
                float _12070;
                float _12074;
                float _12078;
                float _12086;
                float _12120;
                float _12130;
                _12130 = _12024;
                _12120 = _12121;
                _12086 = _12087;
                _12078 = _12079;
                _12074 = _12075;
                _12070 = _12071;
                uint _6007;
                float _13995;
                float _13996;
                float _13997;
                float _13998;
                float _13999;
                float _14000;
                uint _12053 = 0u;
                for (;;)
                {
                    if (!(_12053 < 1u))
                    {
                        break;
                    }
                    float _5987 = (_12130 + _12070) * 0.5;
                    vec3 _5990 = _5614 + (_5885 * vec3(_5987));
                    float _6272 = 1.0 / _5990.z;
                    vec4 _6284 = textureLod(sampler2D(half_depth_tex, samplers_nnc), (_5990.xy * vec2(0.5, -0.5)) + vec2(0.5), 0.0);
                    float _6285 = _6284.x;
                    float _6298 = (1.00000202655792236328125 / _6285) - _6272;
                    bool _13994 = (_6298 < 0.0) ? true : false;
                    _13995 = _13994 ? _12120 : _6298;
                    _13996 = _13994 ? _6298 : _12086;
                    _13997 = _13994 ? (_6272 - (1.0 / _6285)) : _12078;
                    _13998 = _13994 ? _5717 : _12074;
                    _13999 = _13994 ? _5987 : _12070;
                    _14000 = _13994 ? _12130 : _5987;
                    _6007 = _12053 + 1u;
                    _12130 = _14000;
                    _12120 = _13995;
                    _12086 = _13996;
                    _12078 = _13997;
                    _12074 = _13998;
                    _12070 = _13999;
                    _12053 = _6007;
                    continue;
                }
                float _6027 = mix(_12130, _12070, _12120 / (_12120 + (-_12086)));
                vec3 _6030 = _5614 + (_5885 * vec3(_6027));
                float _6396 = 1.0 / _6030.z;
                vec4 _6408 = textureLod(sampler2D(half_depth_tex, samplers_nnc), (_6030.xy * vec2(0.5, -0.5)) + vec2(0.5), 0.0);
                float _6409 = _6408.x;
                float _6422 = (1.00000202655792236328125 / _6409) - _6396;
                bool _14001 = (abs(_6422) < (_12120 * 0.89999997615814208984375)) ? true : false;
                _12252 = _14001 ? _6422 : _12086;
                _12235 = _14001 ? _5717 : _12074;
                _12218 = _14001 ? (_6396 - (1.0 / _6409)) : _12078;
                _12216 = _14001 ? _6027 : _12070;
                _12215 = true;
                break;
            }
            else
            {
                _12252 = _11773;
                _12235 = _10961;
                _12218 = _10960;
                _12216 = _12024;
                _12215 = false;
                break;
            }
            break; // unreachable workaround
        } while(false);
        bool _12269;
        if (_12215)
        {
            bool _12271;
            if (_12218 < _12235)
            {
                _12271 = _12252 < _12235;
            }
            else
            {
                _12271 = false;
            }
            _12269 = _12271;
        }
        else
        {
            _12269 = false;
        }
        if (_12269)
        {
            _12370 = _12216;
            break;
        }
        _12370 = _12024;
        break;
    } while(false);
    vec2 _1958 = vec4(mix(_5614, _5635, vec3(_12370)), 1.0).xy;
    vec2 _6493 = (_1958 * vec2(0.5, -0.5)) + vec2(0.5);
    vec4 _6519 = (vec4(_1958, max(9.9999996826552253889678874634872e-21, textureLod(sampler2D(half_depth_tex, samplers_nnc), _6493, 0.0).x), 1.0) * current_view_1.sample_to_view) * current_view_1.view_to_world;
    vec3 _6532 = _6519.xyz / vec3(_6519.w);
    float _1984 = abs(_97.y - _6532.y);
    float _6551 = clamp(frame_constants.fog_tint_thickness.w, 0.0, 1.0);
    vec2 _6606 = _97.xz * vec2(0.0076923076994717121124267578125);
    vec2 _6607 = _6606 * 0.5;
    float _6582 = max(0.00999999977648258209228515625, frame_constants.ground_fog.y);
    vec2 _6655 = (_97.xz * vec2(0.001000000047497451305389404296875)) + vec2(0.5);
    vec2 _6659 = vec2(_6655.y, 1.0 - _6655.x);
    float _6641 = 40.0 * frame_constants.ground_fog.x;
    float _6585 = _97.y - (textureLod(nonuniformEXT(sampler2D(resource_handles[terrain_heightmap.bg_terrain_fog_height.bindless_handle], samplers_lnc_iso)), _6659, 0.0).x + _6641);
    float _6587 = max(0.0500000007450580596923828125, frame_constants.dir_to_primary_directional_light.y);
    float _6588 = 2.0 * _6582;
    float _6591 = 1.0 + (_6582 * max(0.0, _6585));
    float _6600 = (0.00999999977648258209228515625 * frame_constants.fog_relative_extinction) * ((3.2200000286102294921875 * exp2(-dot(_6607, _6607))) * frame_constants.ground_fog.z);
    vec4 _6687 = vec4(_97, 1.0);
    vec4 _6691 = (_6687 * current_view_1.world_to_view) * current_view_1.view_to_clip;
    vec3 _6695 = _6691.xyz / vec3(_6691.w);
    float _6681 = _6695.z;
    vec2 _6709 = vec2(csm.sun_shadow_map_dims);
    vec2 _6711 = vec2(1.0) / _6709;
    vec4 _6988 = ((texelFetch(blue_noise_textures_uniform01, ivec2((uvec2(ivec2(_105)) + _5467) % uvec2(256u)), 0) * 255.0) * vec4(0.00390625)) + vec4(0.001953125);
    uint _14008 = (_6681 > csm_setup_cascade_splits_buf_1._member0[0].x) ? 0u : ((_6681 > csm_setup_cascade_splits_buf_1._member0[0].y) ? 1u : ((_6681 > csm_setup_cascade_splits_buf_1._member0[0].z) ? 2u : 3u));
    vec4 _6725 = _6687 * csm_setup_sun_view_1._member0[_14008].world_to_sample;
    vec3 _6726 = _6725.xyz;
    vec2 _7021 = (_6725.xy * vec2(0.5, -0.5)) + vec2(0.5);
    _6726.x = _7021.x;
    _6726.y = _7021.y;
    float _6748 = ((0.001000000047497451305389404296875 * _6711.x) * (-csm_setup_sun_view_1._member0[_14008].clip_to_view[2].z)) * (1.0 / max(0.100000001490116119384765625, abs(dot(_11919, normalize((vec4(0.0, 0.0, -1.0, 0.0) * csm_setup_sun_view_1._member0[0].view_to_world).xyz)))));
    vec2 _12400;
    do
    {
        vec4 _6773 = vec4(_11919, 0.0) * csm_setup_sun_view_1._member0[_14008].world_to_view;
        float _6775 = _6773.z;
        vec2 _6789 = vec2(csm_setup_sun_view_1._member0[_14008].view_to_clip[0].x, csm_setup_sun_view_1._member0[_14008].view_to_clip[1].y);
        vec2 _6792 = ((((_6773.xy * float(int(sign(_6775)))) / vec2(max(0.100000001490116119384765625, abs(_6775)))) / _6789) * csm_setup_sun_view_1._member0[_14008].view_to_clip[2].z) * vec2(2.0, -2.0);
        vec2 _6795 = _6789 * 300.0;
        float _12387;
        float _12388;
        _12388 = 0.0;
        _12387 = 0.0;
        int _6864;
        float _13740;
        float _13741;
        int _12386 = 0;
        for (;;)
        {
            if (!(_12386 < 8))
            {
                break;
            }
            float _6807 = float(_12386);
            float _7041 = (_6807 * 2.3999631404876708984375) + (_6988.x * 6.283185482025146484375);
            vec2 _6812 = (vec2(cos(_7041), sin(_7041)) * ((_6807 + _6988.y) * 0.125)) * (_6795 * _6711);
            float _6813 = -_6748;
            vec3 _6814 = vec3(_6812, _6813);
            _6814.z = _6813 + (-max(0.0, dot(_6792, _6812)));
            vec3 _6824 = _6726 + _6814;
            vec2 _6825 = _6824.xy;
            vec4 _6832 = textureLod(sampler2DArray(csm_sun_shadow_map, samplers_lnc_iso), vec3(_6825, float(_14008)), 0.0);
            float _6833 = _6832.x;
            float _6834 = _6824.z;
            if (_6834 > _6833)
            {
                float _13586;
                if (texelFetch(csm_sun_shadow_stencil_map, ivec3(uvec3(uvec2(_6825 * _6709), _14008)), 0).x == 1u)
                {
                    _13586 = _12388 + (_6834 - max(_6834 - _6833, (-8.0) * csm_setup_sun_view_1._member0[_14008].view_to_clip[2].z));
                }
                else
                {
                    _13586 = _12388 + _6833;
                }
                _13741 = _13586;
                _13740 = _12387 + 1.0;
            }
            else
            {
                _13741 = _12388;
                _13740 = _12387;
            }
            _6864 = _12386 + 1;
            _12388 = _13741;
            _12387 = _13740;
            _12386 = _6864;
            continue;
        }
        if (_12387 == 0.0)
        {
            _12400 = vec2(1.0);
            break;
        }
        if (_12387 == 8.0)
        {
            _12400 = vec2(0.0);
            break;
        }
        vec2 _6900 = clamp(_6795 * (abs((max(9.9999999747524270787835121154785e-07, _12388 / _12387) - _6725.z) * csm_setup_sun_view_1._member0[_14008].clip_to_view[2].z) * mix(mix(0.0500000007450580596923828125, 0.5, _6551 * _6551), 0.5, 1.0 - exp(-((_6600 * ((1.0 / (_6588 * (_6591 * _6591))) + max(0.0, -_6585))) / _6587)))), vec2(1.0), _6795);
        float _12390;
        vec2 _12391;
        _12391 = vec2(0.0);
        _12390 = 0.0;
        float _6940;
        int _6944;
        vec2 _7096;
        int _12389 = 0;
        for (;;)
        {
            if (!(_12389 < 8))
            {
                break;
            }
            vec2 _6917 = fract(_6988.xy + fract((vec2(0.75487768650054931640625, 0.56984031200408935546875) * float(uint(_12389))) + vec2(0.5)));
            float _7075 = sqrt(_6917.x);
            float _7077 = _6917.y * 6.283185482025146484375;
            vec2 _6920 = (vec2(cos(_7077) * _7075, sin(_7077) * _7075) * _6900) * _6711;
            vec3 _6924 = _6726 + vec3(_6920, -_6748);
            _7096 = _12391 + vec2(textureLod(sampler2DArrayShadow(csm_sun_shadow_map, samplers_shadow_linear), vec4(vec3(_6924.xy, float(_14008)), _6924.z + (-max(0.0, dot(_6792, _6920)))), 0.0), _13990);
            _6940 = _12390 + 1.0;
            _6944 = _12389 + 1;
            _12391 = _7096;
            _12390 = _6940;
            _12389 = _6944;
            continue;
        }
        _12400 = _12391 * (1.0 / _12390);
        break;
    } while(false);
    float _2803 = autofocus_buf_1._member0[frame_constants.camera_idx].focus_scale;
    float _7136 = 1.0 / autofocus_buf_1._member0[frame_constants.camera_idx].focus0;
    float _7139 = 1.0 / autofocus_buf_1._member0[frame_constants.camera_idx].focus1;
    float _7142 = max(0.001000000047497451305389404296875, max(_7136, _7139)) + 9.9999997473787516355514526367188e-06;
    float _7145 = max(0.001000000047497451305389404296875, min(_7136, _7139)) - 9.9999997473787516355514526367188e-06;
    bool _7148 = autofocus_buf_1._member0[frame_constants.camera_idx].use_tilt_shift != 0u;
    vec3 _11873 = _97;
    _11873.y = _97.y * float(_7148 ? 0 : 1);
    vec4 _7212 = vec4(0.0, 0.0, 0.0, 1.0) * current_view_1.view_to_world;
    vec3 _7216 = _7212.xyz / vec3(_7212.w);
    vec3 _7223 = normalize((vec4(0.0, 0.0, -1.0, 0.0) * current_view_1.view_to_world).xyz);
    float _7151 = 1.0 / max(1.0000000133514319600180897396058e-10, dot(_11873 - _7216, _7223));
    float _7152 = _7142 - _7145;
    float _7154 = min(0.00999999977648258209228515625, 0.0500000007450580596923828125 * _7152);
    float _12403;
    if (_7151 > _7142)
    {
        _12403 = (_7151 - _7142) + _7154;
    }
    else
    {
        float _12404;
        if (_7151 < _7145)
        {
            _12404 = (_7151 - _7145) - _7154;
        }
        else
        {
            _12404 = (-_7154) + (((2.0 * _7154) * (_7151 - _7145)) / _7152);
        }
        _12403 = _12404;
    }
    float _12405;
    if (_7148)
    {
        _12405 = _12403 / max(0.00999999977648258209228515625, length(_7223.xz));
    }
    else
    {
        _12405 = _12403;
    }
    float _3006 = sqrt(mix(0.16000001132488250732421875, 9.9999997473787516355514526367188e-05, exp2((-0.014999999664723873138427734375) * sqrt(max(abs(((-_12405) * _2803) * current_view_1.view_to_clip[1].y), (_5414.xyz / vec3(_5414.w)).z * (-0.0030000000260770320892333984375))))));
    vec3 _3008 = -reflect(wo, _11919);
    float _3010 = _3008.y;
    vec3 _12410;
    if (_3010 < 0.0)
    {
        vec3 _11875 = _3008;
        _11875.y = -_3010;
        _12410 = _11875;
    }
    else
    {
        _12410 = _3008;
    }
    vec4 _7290 = _5584 + ((vec4(_12410, 0.0) * current_view_1.world_to_view) * current_view_1.view_to_clip);
    float _7291 = _7290.w;
    vec3 _7304 = (_7290 / vec4(float((_7291 >= 0.0) ? 1 : (-1)) * max(1.0000000133514319600180897396058e-10, abs(_7291)))).xyz;
    vec3 _7306 = _7304 - _980;
    vec3 _7312 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), lessThan(_7306, vec3(0.0))) - _980) / _7306;
    vec3 _7319 = _980 + (_7306 * max(0.0, max(_7312.x, _7312.y)));
    vec3 _7320 = _7304 - _7319;
    vec3 _7325 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), greaterThanEqual(_7320, vec3(0.0))) - _7319) / _7320;
    vec3 _7340 = _7319 + (_7320 * min(min(_7325.x, _7325.y), _7325.z));
    float _12864;
    bool _12865;
    do
    {
        uint _7438 = uint(int(max(2u, min(8u, uint(int(floor(length((((_7340.xy * vec2(0.5, -0.5)) + vec2(0.5)) - ((_7319.xy * vec2(0.5, -0.5)) + vec2(0.5))) * _938))))))));
        float _12515;
        bool _12706;
        float _12707;
        float _12709;
        float _12726;
        float _12743;
        do
        {
            vec3 _7590 = _7340 - _7319;
            float _7599 = float(_7438);
            float _12437;
            do
            {
                if (_7340.z > 9.5367431640625e-07)
                {
                    _12437 = _7599;
                    break;
                }
                else
                {
                    _12437 = max(1.0, _7599 - 1.0);
                    break;
                }
                break; // unreachable workaround
            } while(false);
            float _7609 = 1.0 / _12437;
            bool _12524;
            float _12562;
            float _12566;
            float _12570;
            float _12578;
            float _12612;
            if (_7438 > 0u)
            {
                float _7619 = mix(0.0, 1.0, pow(_5461 * _7609, 1.0));
                vec3 _7622 = _7319 + (_7590 * vec3(_7619));
                float _7769 = 1.0 / _7622.z;
                vec4 _7781 = textureLod(sampler2D(half_depth_tex, samplers_nnc), (_7622.xy * vec2(0.5, -0.5)) + vec2(0.5), 0.0);
                float _7782 = _7781.x;
                float _7795 = (1.00000202655792236328125 / _7782) - _7769;
                bool _14011 = (_7795 < 0.0) ? true : false;
                float _12516;
                bool _12525;
                float _12563;
                float _12567;
                float _12571;
                float _12579;
                float _12613;
                if (_14011)
                {
                    _12613 = 0.0;
                    _12579 = _7795;
                    _12571 = _7769 - (1.0 / _7782);
                    _12567 = _5814;
                    _12563 = _7619;
                    _12525 = _14011;
                    _12516 = 0.0;
                }
                else
                {
                    float _12518;
                    float _12615;
                    _12615 = _7795;
                    _12518 = _7619;
                    float _7648;
                    uint _7666;
                    float _7899;
                    bool _14012;
                    bool _12526;
                    float _12564;
                    float _12568;
                    float _12572;
                    float _12580;
                    uint _12465 = 1u;
                    bool _12527 = _14011;
                    for (;;)
                    {
                        if (!(_12465 < _7438))
                        {
                            _12580 = 0.0;
                            _12572 = 0.0;
                            _12568 = 0.0;
                            _12564 = 1.0;
                            _12526 = _12527;
                            break;
                        }
                        _7648 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_12465) + _5461) * _7609, 1.0)));
                        vec3 _7651 = _7319 + (_7590 * vec3(_7648));
                        float _7873 = 1.0 / _7651.z;
                        vec4 _7885 = textureLod(sampler2D(half_depth_tex, samplers_nnc), (_7651.xy * vec2(0.5, -0.5)) + vec2(0.5), 0.0);
                        float _7886 = _7885.x;
                        _7899 = (1.00000202655792236328125 / _7886) - _7873;
                        _14012 = (_7899 < 0.0) ? true : false;
                        if (_14012)
                        {
                            _12580 = _7899;
                            _12572 = _7873 - (1.0 / _7886);
                            _12568 = _5814;
                            _12564 = _7648;
                            _12526 = _14012;
                            break;
                        }
                        _7666 = _12465 + 1u;
                        _12465 = _7666;
                        _12615 = _7899;
                        _12527 = _14012;
                        _12518 = _7648;
                        continue;
                    }
                    _12613 = _12615;
                    _12579 = _12580;
                    _12571 = _12572;
                    _12567 = _12568;
                    _12563 = _12564;
                    _12525 = _12526;
                    _12516 = _12518;
                }
                _12612 = _12613;
                _12578 = _12579;
                _12570 = _12571;
                _12566 = _12567;
                _12562 = _12563;
                _12524 = _12525;
                _12515 = _12516;
            }
            else
            {
                _12612 = 0.0;
                _12578 = 0.0;
                _12570 = 0.0;
                _12566 = 0.0;
                _12562 = 1.0;
                _12524 = false;
                _12515 = 0.0;
            }
            if (_12524)
            {
                float _12561;
                float _12565;
                float _12569;
                float _12577;
                float _12611;
                float _12621;
                _12621 = _12515;
                _12611 = _12612;
                _12577 = _12578;
                _12569 = _12570;
                _12565 = _12566;
                _12561 = _12562;
                uint _7712;
                float _14014;
                float _14015;
                float _14016;
                float _14017;
                float _14018;
                float _14019;
                uint _12544 = 0u;
                for (;;)
                {
                    if (!(_12544 < 3u))
                    {
                        break;
                    }
                    float _7692 = (_12621 + _12561) * 0.5;
                    vec3 _7695 = _7319 + (_7590 * vec3(_7692));
                    float _7977 = 1.0 / _7695.z;
                    vec4 _7989 = textureLod(sampler2D(half_depth_tex, samplers_nnc), (_7695.xy * vec2(0.5, -0.5)) + vec2(0.5), 0.0);
                    float _7990 = _7989.x;
                    float _8003 = (1.00000202655792236328125 / _7990) - _7977;
                    bool _14013 = (_8003 < 0.0) ? true : false;
                    _14014 = _14013 ? _12611 : _8003;
                    _14015 = _14013 ? _8003 : _12577;
                    _14016 = _14013 ? (_7977 - (1.0 / _7990)) : _12569;
                    _14017 = _14013 ? _5814 : _12565;
                    _14018 = _14013 ? _7692 : _12561;
                    _14019 = _14013 ? _12621 : _7692;
                    _7712 = _12544 + 1u;
                    _12621 = _14019;
                    _12611 = _14014;
                    _12577 = _14015;
                    _12569 = _14016;
                    _12565 = _14017;
                    _12561 = _14018;
                    _12544 = _7712;
                    continue;
                }
                float _7732 = mix(_12621, _12561, _12611 / (_12611 + (-_12577)));
                vec3 _7735 = _7319 + (_7590 * vec3(_7732));
                float _8101 = 1.0 / _7735.z;
                vec4 _8113 = textureLod(sampler2D(half_depth_tex, samplers_nnc), (_7735.xy * vec2(0.5, -0.5)) + vec2(0.5), 0.0);
                float _8114 = _8113.x;
                float _8127 = (1.00000202655792236328125 / _8114) - _8101;
                bool _14020 = (abs(_8127) < (_12611 * 0.89999997615814208984375)) ? true : false;
                _12743 = _14020 ? _8127 : _12577;
                _12726 = _14020 ? _5814 : _12565;
                _12709 = _14020 ? (_8101 - (1.0 / _8114)) : _12569;
                _12707 = _14020 ? _7732 : _12561;
                _12706 = true;
                break;
            }
            else
            {
                _12743 = _11773;
                _12726 = _10961;
                _12709 = _10960;
                _12707 = _12515;
                _12706 = false;
                break;
            }
            break; // unreachable workaround
        } while(false);
        bool _12760;
        if (_12706)
        {
            bool _12762;
            if (_12709 < _12726)
            {
                _12762 = _12743 < _12726;
            }
            else
            {
                _12762 = false;
            }
            _12760 = _12762;
        }
        else
        {
            _12760 = false;
        }
        if (_12760)
        {
            _12865 = true;
            _12864 = _12707;
            break;
        }
        _12865 = false;
        _12864 = _12515;
        break;
    } while(false);
    float _3794 = subgroupQuadSwapHorizontal(_12864);
    bool _3797 = subgroupQuadSwapHorizontal(_12865);
    bool _3802 = (int(_3797) != 0) && (!_12865);
    bool _14025 = _3802 ? true : _12865;
    float _14026 = _3802 ? _3794 : _12864;
    float _3808 = subgroupQuadSwapVertical(_14026);
    bool _3810 = subgroupQuadSwapVertical(_14025);
    bool _3815 = (int(_3810) != 0) && (!_14025);
    float _14027 = _3815 ? _3808 : _14026;
    vec3 _12923;
    if (_3815 ? true : _14025)
    {
        vec2 _8327 = (mix(_7319, _7340, vec3(_14027)).xy * vec2(0.5, -0.5)) + vec2(0.5);
        vec4 _8335 = (vec4(mix(_7319, _7340, vec3(_12864)), 1.0) * _5812) * current_view_1.view_to_world;
        vec3 _8339 = _8335.xyz / vec3(_8335.w);
        bool _12915;
        if (globalParams.history_valid != 0u)
        {
            _12915 = !(0u == frame_counter.index);
        }
        else
        {
            _12915 = false;
        }
        vec3 _12924;
        if (_12915)
        {
            float _8348 = distance(_8339, _7216);
            vec3 _8392 = vec3(_8327 + (((_5477.zw - vec2(0.5)) / _716) * 30.0), clamp(pow((((-(vec4(_8339, 1.0) * current_view_1.world_to_view).z) * max(0.0, _8348 - distance(_8339, _97))) / max(9.9999997473787516355514526367188e-06, _8348)) * 0.0009765625, 0.5), 0.0, 1.0) - 0.0078125);
            _12924 = max(vec3(0.0), textureLod(sampler2D(taa_history_tex, samplers_lnc), textureLod(sampler2D(reprojection_tex, samplers_nnc), _8327, 0.0).xy + _8327, 0.0).xyz - (textureLod(sampler3D(froxel_scattering_tex, samplers_lnc_iso), _8392, 0.0).xyz * frame_constants.fog_tint_thickness.xyz)) / vec3(max(9.9999997473787516355514526367188e-05, textureLod(sampler3D(froxel_extinction_tex, samplers_lnc_iso), _8392, 0.0).x));
        }
        else
        {
            _12924 = vec3(0.0);
        }
        _12923 = _12924;
    }
    else
    {
        vec4 _8202 = (vec4(mix(_7319, _7340, vec3(_14027)), 1.0) * current_view_1.sample_to_view) * current_view_1.view_to_world;
        uvec2 _8207 = uvec2(1u, 2u);
        uvec2 _8208 = _105 & uvec2(1u);
        uint _12902;
        _12902 = 0u;
        uint _8229;
        int _8233;
        int _12901 = 0;
        for (;;)
        {
            if (!(_12901 < 2))
            {
                break;
            }
            _8229 = _12902 + (_8208[_12901] * _8207[_12901]);
            _8233 = _12901 + 1;
            _12902 = _8229;
            _12901 = _8233;
            continue;
        }
        uint _12903;
        do
        {
            if (_96)
            {
                _12903 = 0u;
                break;
            }
            else
            {
                _12903 = 1u << _12902;
                break;
            }
            break; // unreachable workaround
        } while(false);
        uint _4067 = subgroupQuadSwapHorizontal(_12903);
        uint px_mask = _12903 + _4067;
        uint _4070 = subgroupQuadSwapVertical(px_mask);
        uint px_mask_1 = px_mask + _4070;
        if (_12902 == uint(findMSB(px_mask_1)))
        {
            uint rt_ray_index = atomicAdd(water_rt_count_buffer._member0[0], 1u);
            uvec2 _8237 = uvec2(1u, 65536u);
            uvec2 _8238 = _905;
            uint _12905;
            _12905 = 0u;
            uint _8259;
            int _8263;
            int _12904 = 0;
            for (;;)
            {
                if (!(_12904 < 2))
                {
                    break;
                }
                _8259 = _12905 + (_8238[_12904] * _8237[_12904]);
                _8263 = _12904 + 1;
                _12905 = _8259;
                _12904 = _8263;
                continue;
            }
            vec3 _8279 = _11919 / vec3((abs(_11919.x) + abs(_11919.y)) + abs(_11919.z));
            vec3 _12906;
            if (_8279.z < 0.0)
            {
                vec2 _8313 = (vec2(1.0) - abs(_8279.yx)) * ((step(vec2(0.0), _8279.xy) * 2.0) - vec2(1.0));
                vec3 _11877;
                _11877.x = _8313.x;
                _11877.y = _8313.y;
                _12906 = _11877;
            }
            else
            {
                _12906 = _8279;
            }
            vec2 _8295 = (_12906.xy * 0.5) + vec2(0.5);
            vec3 _11881;
            _11881.x = _8295.x;
            _11881.y = _8295.y;
            water_rt_ray_buffer_1._member0[rt_ray_index] = uvec4(_12905, packHalf2x16(_11881.xy), floatBitsToUint(dot(_12410, (_8202.xyz / vec3(_8202.w)) - (_5416.xyz / vec3(_5416.w)))), (floatBitsToUint(gl_FragCoord.z) & 4294967280u) + px_mask_1);
        }
        _12923 = vec3(0.0);
    }
    float _8607;
    float _8423 = _3006 * _3006;
    float _8446 = _97.y - (textureLod(nonuniformEXT(sampler2D(resource_handles[terrain_heightmap.bg_terrain_fog_height.bindless_handle], samplers_lnc_iso)), _6659, 0.0).x + _6641);
    float _8452 = 1.0 + (_6582 * max(0.0, _8446));
    float _8430 = 0.20000000298023223876953125 * (1.0 - exp(-((_6600 * ((1.0 / (_6588 * (_8452 * _8452))) + max(0.0, -_8446))) / _6587)));
    float _8434 = sqrt((_8423 * _8423) + (_8430 * _8430));
    vec3 _12920;
    do
    {
        _8607 = dot(_11919, frame_constants.dir_to_primary_directional_light);
        bool _12916;
        if (_8607 <= 0.0)
        {
            _12916 = true;
        }
        else
        {
            _12916 = dot(_11919, wo) <= 0.0;
        }
        if (_12916)
        {
            _12920 = vec3(0.0);
            break;
        }
        float _8567 = _8434 * _8434;
        vec3 _8569 = normalize(wo + frame_constants.dir_to_primary_directional_light);
        float _8625 = dot(_11919, _8569);
        float _8646 = dot(_11919, wo);
        float _8667 = ((_8625 * _8625) * (_8567 - 1.0)) + 1.0;
        _12920 = ((mix(vec3(0.039999999105930328369140625), vec3(1.0), vec3(pow(max(0.0, 1.0 - dot(_8569, frame_constants.dir_to_primary_directional_light)), 5.0))) * (((2.0 * _8607) * _8646) / ((_8607 * sqrt(((((-_8646) * _8567) + _8646) * _8646) + _8567)) + (_8646 * sqrt(((((-_8607) * _8567) + _8607) * _8607) + _8567))))) * (_8567 / ((3.1415927410125732421875 * _8667) * _8667))) / vec3((4.0 * _8646) * _8607);
        break;
    } while(false);
    vec3 _4452 = clamp(_6532, vec3(-1000.0), vec3(1000.0));
    vec2 _4468 = (_4452 - ((frame_constants.dir_to_primary_directional_light * _4452.y) / vec3(frame_constants.dir_to_primary_directional_light.y))).xz;
    vec3 _13116;
    do
    {
        if (_4875)
        {
            _13116 = vec3(0.0);
            break;
        }
        float _8862 = float(frame_constants.game_time_sec) + frame_constants.game_time_frac;
        vec2 _12929;
        vec2 _13021;
        _13021 = _11906;
        _12929 = _11906;
        uint _8781;
        vec2 _8882;
        vec2 _8890;
        vec2 _8744[4];
        uint _12925 = 0u;
        for (;;)
        {
            if (!(_12925 < 4u))
            {
                break;
            }
            float _8771 = float(_214[_12925]);
            int _8873 = int(floor(_8771));
            float _8875 = fract(_8771);
            uvec2 _8877 = uvec2(ivec2(_8873));
            uint _8901 = _8877.y;
            uint _8907 = _8901 + (_8901 << 10u);
            uint _8909 = _8907 ^ (_8907 >> 6u);
            uint _8911 = _8909 + (_8909 << 3u);
            uint _8913 = _8911 ^ (_8911 >> 11u);
            uint _8921 = (((_8877.x * 1664525u) + (_8913 + (_8913 << 15u))) + 1013904223u) * 1664525u;
            uint _8923 = _8921 ^ (_8921 >> 11u);
            uint _8926 = _8923 ^ ((_8923 << 7u) & 2636928640u);
            uint _8929 = _8926 ^ ((_8926 << 15u) & 4022730752u);
            uint _8931 = _8929 ^ (_8929 >> 18u);
            vec2 _8868 = _12929;
            uint _8950;
            uint _8969;
            uint _13019 = 0u;
            uint _13115 = _8931;
            for (;;)
            {
                if (!(_13019 < 2u))
                {
                    break;
                }
                uint _8961 = _13115 + (_13115 << 10u);
                uint _8963 = _8961 ^ (_8961 >> 6u);
                uint _8965 = _8963 + (_8963 << 3u);
                uint _8967 = _8965 ^ (_8965 >> 11u);
                _8969 = _8967 + (_8967 << 15u);
                _8868[_13019] = uintBitsToFloat((_13115 & 8388607u) | 1065353216u) - 1.0;
                _8950 = _13019 + 1u;
                _13115 = _8969;
                _13019 = _8950;
                continue;
            }
            _8882 = _8868;
            uvec2 _8885 = uvec2(ivec2(_8873 + 1));
            uint _8979 = _8885.y;
            uint _8985 = _8979 + (_8979 << 10u);
            uint _8987 = _8985 ^ (_8985 >> 6u);
            uint _8989 = _8987 + (_8987 << 3u);
            uint _8991 = _8989 ^ (_8989 >> 11u);
            uint _8999 = (((_8885.x * 1664525u) + (_8991 + (_8991 << 15u))) + 1013904223u) * 1664525u;
            uint _9001 = _8999 ^ (_8999 >> 11u);
            uint _9004 = _9001 ^ ((_9001 << 7u) & 2636928640u);
            uint _9007 = _9004 ^ ((_9004 << 15u) & 4022730752u);
            uint _9009 = _9007 ^ (_9007 >> 18u);
            vec2 _8869 = _13021;
            uint _9028;
            uint _9047;
            uint _13111 = 0u;
            uint _13114 = _9009;
            for (;;)
            {
                if (!(_13111 < 2u))
                {
                    break;
                }
                uint _9039 = _13114 + (_13114 << 10u);
                uint _9041 = _9039 ^ (_9039 >> 6u);
                uint _9043 = _9041 + (_9041 << 3u);
                uint _9045 = _9043 ^ (_9043 >> 11u);
                _9047 = _9045 + (_9045 << 15u);
                _8869[_13111] = uintBitsToFloat((_13114 & 8388607u) | 1065353216u) - 1.0;
                _9028 = _13111 + 1u;
                _13114 = _9047;
                _13111 = _9028;
                continue;
            }
            _8890 = _8869;
            float _9059 = (_8875 * _8875) * (3.0 - (2.0 * _8875));
            _8744[_12925] = (normalize(((_8882 * (1.0 - _9059)) + (_8890 * _9059)) - vec2(0.5)) * _8862) * 3.0;
            _8781 = _12925 + 1u;
            _13021 = _8890;
            _12929 = _8882;
            _12925 = _8781;
            continue;
        }
        vec3 _12927;
        _12927 = vec3(0.0);
        uint _8794;
        vec3 _13983;
        uint _12926 = 0u;
        for (;;)
        {
            if (!(_12926 < 4u))
            {
                break;
            }
            _8794 = _12926 + 1u;
            float _8796 = float(_8794) * 10.16640758514404296875;
            float _8797 = cos(_8796);
            float _8798 = sin(_8796);
            mat2 _8802 = mat2(vec2(_8797, _8798), vec2(-_8798, _8797));
            float _8827 = _437[_12926] * 0.01200000010430812835693359375;
            vec3 _8829 = (((texture(sampler2D(water_waves_water_noise_texture, samplers_llr), (((_4468 * _437[_12926]) + _8744[_12926]) * _8802) * 0.01200000010430812835693359375).xyz * vec3(1.0, 2.0, 2.0)) + vec3(-0.5, -1.0, -1.0)) * _474[_12926]) * vec3(1.0, _8827, _8827);
            _13983 = vec3(_12927.x + _8829.x, _12927.yz + (_8802 * _8829.yz));
            _12927 = _13983;
            _12926 = _8794;
            continue;
        }
        _13116 = _12927;
        break;
    } while(false);
    vec3 _13119;
    do
    {
        if (_4875)
        {
            _13119 = vec3(0.0);
            break;
        }
        uint _9076 = min(32u, water_waves_ripple_source_buffer._member0[0].count);
        vec3 _13118;
        _13118 = vec3(0.0);
        vec3 _9106;
        uint _9110;
        uint _13117 = 0u;
        for (;;)
        {
            if (!(_13117 < _9076))
            {
                break;
            }
            vec2 _9146 = mix(water_waves_ripple_source_buffer._member0[0].position.data[_13117], water_waves_ripple_source_buffer._member0[0].smoothed_position.data[_13117], vec2(0.5)) - _4468;
            float _9147 = length(_9146);
            float _9151 = _9147 + dot(_9146, (water_waves_ripple_source_buffer._member0[0].smoothed_position.data[_13117] - water_waves_ripple_source_buffer._member0[0].position.data[_13117]) * 3.0);
            float _9158 = max(_9147, _9151);
            _9106 = _13118 + (vec3(sin((_9151 * 16.3649997711181640625) - ((float(frame_constants.game_time_sec) + frame_constants.game_time_frac) * 6.0)) / (1.0 + (((_9158 * _9158) * _9158) * _9158)), _13990, _13990) * water_waves_ripple_source_buffer._member0[0].intensity.data[_13117]);
            _9110 = _13117 + 1u;
            _13118 = _9106;
            _13117 = _9110;
            continue;
        }
        _13119 = _13118;
        break;
    } while(false);
    float _4479 = 0.60000002384185791015625 + ((0.4000000059604644775390625 * (exp2((-0.4000000059604644775390625) * _1984) * smoothstep(0.0, 1.0, _1984))) * (_13116 + _13119).x);
    vec3 _13543;
    if (_4875)
    {
        float _13123;
        do
        {
            vec2 _9259 = _6606 + vec2(0.5);
            float _9276 = _9259.x;
            bool _13120;
            if (_9276 < 0.0)
            {
                _13120 = true;
            }
            else
            {
                _13120 = _9276 > 1.0;
            }
            bool _13121;
            if (_13120)
            {
                _13121 = true;
            }
            else
            {
                _13121 = _9259.y < 0.0;
            }
            bool _13122;
            if (_13121)
            {
                _13122 = true;
            }
            else
            {
                _13122 = _9259.y > 1.0;
            }
            if (_13122)
            {
                _13123 = 0.0;
                break;
            }
            else
            {
                _13123 = textureLod(sampler2D(water_mask_tex, samplers_lnc_iso), _9259, 0.0).y;
                break;
            }
            break; // unreachable workaround
        } while(false);
        ivec2 _9310 = ivec2(floor(_97.xz));
        vec2 _9311 = fract(_97.xz);
        uvec2 _9312 = uvec2(_9310);
        uint _9362 = _9312.y;
        uint _9368 = _9362 + (_9362 << 10u);
        uint _9370 = _9368 ^ (_9368 >> 6u);
        uint _9372 = _9370 + (_9370 << 3u);
        uint _9374 = _9372 ^ (_9372 >> 11u);
        uint _9382 = (((_9312.x * 1664525u) + (_9374 + (_9374 << 15u))) + 1013904223u) * 1664525u;
        uint _9384 = _9382 ^ (_9382 >> 11u);
        uint _9387 = _9384 ^ ((_9384 << 7u) & 2636928640u);
        uint _9390 = _9387 ^ ((_9387 << 15u) & 4022730752u);
        uint _9392 = _9390 ^ (_9390 >> 18u);
        float _13226;
        _13226 = _13163;
        uint _9409;
        uint _9428;
        float _9434;
        uint _13225 = 0u;
        uint _13547 = _9392;
        for (;;)
        {
            if (!(_13225 < 1u))
            {
                break;
            }
            uint _9420 = _13547 + (_13547 << 10u);
            uint _9422 = _9420 ^ (_9420 >> 6u);
            uint _9424 = _9422 + (_9422 << 3u);
            uint _9426 = _9424 ^ (_9424 >> 11u);
            _9428 = _9426 + (_9426 << 15u);
            _9434 = uintBitsToFloat((_13547 & 8388607u) | 1065353216u) - 1.0;
            _9409 = _13225 + 1u;
            _13547 = _9428;
            _13226 = _9434;
            _13225 = _9409;
            continue;
        }
        uvec2 _9320 = uvec2(_9310 + ivec2(1, 0));
        uint _9438 = _9320.y;
        uint _9444 = _9438 + (_9438 << 10u);
        uint _9446 = _9444 ^ (_9444 >> 6u);
        uint _9448 = _9446 + (_9446 << 3u);
        uint _9450 = _9448 ^ (_9448 >> 11u);
        uint _9458 = (((_9320.x * 1664525u) + (_9450 + (_9450 << 15u))) + 1013904223u) * 1664525u;
        uint _9460 = _9458 ^ (_9458 >> 11u);
        uint _9463 = _9460 ^ ((_9460 << 7u) & 2636928640u);
        uint _9466 = _9463 ^ ((_9463 << 15u) & 4022730752u);
        uint _9468 = _9466 ^ (_9466 >> 18u);
        float _13329;
        _13329 = _13163;
        uint _9485;
        uint _9504;
        float _9510;
        uint _13328 = 0u;
        uint _13546 = _9468;
        for (;;)
        {
            if (!(_13328 < 1u))
            {
                break;
            }
            uint _9496 = _13546 + (_13546 << 10u);
            uint _9498 = _9496 ^ (_9496 >> 6u);
            uint _9500 = _9498 + (_9498 << 3u);
            uint _9502 = _9500 ^ (_9500 >> 11u);
            _9504 = _9502 + (_9502 << 15u);
            _9510 = uintBitsToFloat((_13546 & 8388607u) | 1065353216u) - 1.0;
            _9485 = _13328 + 1u;
            _13546 = _9504;
            _13329 = _9510;
            _13328 = _9485;
            continue;
        }
        uvec2 _9327 = uvec2(_9310 + ivec2(0, 1));
        uint _9514 = _9327.y;
        uint _9520 = _9514 + (_9514 << 10u);
        uint _9522 = _9520 ^ (_9520 >> 6u);
        uint _9524 = _9522 + (_9522 << 3u);
        uint _9526 = _9524 ^ (_9524 >> 11u);
        uint _9534 = (((_9327.x * 1664525u) + (_9526 + (_9526 << 15u))) + 1013904223u) * 1664525u;
        uint _9536 = _9534 ^ (_9534 >> 11u);
        uint _9539 = _9536 ^ ((_9536 << 7u) & 2636928640u);
        uint _9542 = _9539 ^ ((_9539 << 15u) & 4022730752u);
        uint _9544 = _9542 ^ (_9542 >> 18u);
        float _13433;
        _13433 = _13163;
        uint _9561;
        uint _9580;
        float _9586;
        uint _13432 = 0u;
        uint _13545 = _9544;
        for (;;)
        {
            if (!(_13432 < 1u))
            {
                break;
            }
            uint _9572 = _13545 + (_13545 << 10u);
            uint _9574 = _9572 ^ (_9572 >> 6u);
            uint _9576 = _9574 + (_9574 << 3u);
            uint _9578 = _9576 ^ (_9576 >> 11u);
            _9580 = _9578 + (_9578 << 15u);
            _9586 = uintBitsToFloat((_13545 & 8388607u) | 1065353216u) - 1.0;
            _9561 = _13432 + 1u;
            _13545 = _9580;
            _13433 = _9586;
            _13432 = _9561;
            continue;
        }
        uvec2 _9335 = uvec2(_9310 + ivec2(1));
        uint _9590 = _9335.y;
        uint _9596 = _9590 + (_9590 << 10u);
        uint _9598 = _9596 ^ (_9596 >> 6u);
        uint _9600 = _9598 + (_9598 << 3u);
        uint _9602 = _9600 ^ (_9600 >> 11u);
        uint _9610 = (((_9335.x * 1664525u) + (_9602 + (_9602 << 15u))) + 1013904223u) * 1664525u;
        uint _9612 = _9610 ^ (_9610 >> 11u);
        uint _9615 = _9612 ^ ((_9612 << 7u) & 2636928640u);
        uint _9618 = _9615 ^ ((_9615 << 15u) & 4022730752u);
        uint _9620 = _9618 ^ (_9618 >> 18u);
        float _13538;
        _13538 = _13163;
        uint _9637;
        uint _9656;
        float _9662;
        uint _13537 = 0u;
        uint _13544 = _9620;
        for (;;)
        {
            if (!(_13537 < 1u))
            {
                break;
            }
            uint _9648 = _13544 + (_13544 << 10u);
            uint _9650 = _9648 ^ (_9648 >> 6u);
            uint _9652 = _9650 + (_9650 << 3u);
            uint _9654 = _9652 ^ (_9652 >> 11u);
            _9656 = _9654 + (_9654 << 15u);
            _9662 = uintBitsToFloat((_13544 & 8388607u) | 1065353216u) - 1.0;
            _9637 = _13537 + 1u;
            _13544 = _9656;
            _13538 = _9662;
            _13537 = _9637;
            continue;
        }
        vec2 _9668 = (_9311 * _9311) * (vec2(3.0) - (vec2(2.0) * _9311));
        float _9343 = _9668.x;
        float _9344 = 1.0 - _9343;
        float _9346 = _9668.y;
        float _9358 = (((1.0 - _9346) * ((_13226 * _9344) + (_13329 * _9343))) + ((_13433 * _9344) * _9346)) + ((_13538 * _9343) * _9346);
        _13543 = mix(vec3(0.0), vec3(2.0), vec3(clamp((1.0 - smoothstep(0.699999988079071044921875, 0.85000002384185791015625, _13123 + ((_9358 * _9358) * 0.20000000298023223876953125))) * 0.20000000298023223876953125, 0.0, 1.0) + 0.100000001490116119384765625));
    }
    else
    {
        _13543 = vec3(0.0);
    }
    vec3 _9702 = vec3(_5390 + (((_5477.xy - vec2(0.5)) / _716) * 30.0), clamp(pow((-0.0009765625) / (gl_FragCoord.z * (-_5814)), 0.5), 0.0, 1.0) - 0.0078125);
    entryPointParam_ps_main_color = vec4(((((((exp((-globalParams.water_color) * ((_1984 + length(_6532 - _97)) + 0.699999988079071044921875)) * (0.959999978542327880859375 - _5437)) * textureLod(sampler2D(refraction_tex, samplers_lnc), _6493, 0.0).xyz) * (1.0 + ((_4479 * _4479) * _4479))) + ((_12923 + ((frame_constants.sun_color.xyz * min(30.0, _12920.x)) * (_12400.x * clamp(_8607, 0.0, 1.0)))) * (0.039999999105930328369140625 + _5437))) + _13543) * textureLod(sampler3D(froxel_extinction_tex, samplers_lnc_iso), _9702, 0.0).x) + (textureLod(sampler3D(froxel_scattering_tex, samplers_lnc_iso), _9702, 0.0).xyz * frame_constants.fog_tint_thickness.xyz), 0.0);
}

