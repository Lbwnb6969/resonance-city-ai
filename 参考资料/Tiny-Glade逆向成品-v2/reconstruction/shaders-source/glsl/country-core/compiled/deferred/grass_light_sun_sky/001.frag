#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_samplerless_texture_functions : require
#extension GL_KHR_shader_subgroup_vote : require
#extension GL_KHR_shader_subgroup_quad : require
#if defined(GL_EXT_control_flow_attributes)
#extension GL_EXT_control_flow_attributes : require
#define SPIRV_CROSS_FLATTEN [[flatten]]
#define SPIRV_CROSS_BRANCH [[dont_flatten]]
#define SPIRV_CROSS_UNROLL [[unroll]]
#define SPIRV_CROSS_LOOP [[dont_unroll]]
#else
#define SPIRV_CROSS_FLATTEN
#define SPIRV_CROSS_BRANCH
#define SPIRV_CROSS_UNROLL
#define SPIRV_CROSS_LOOP
#endif

struct Reservoir1sppStreamState
{
    float p_q_sel;
    float M_sum;
};

struct Reservoir1spp
{
    float w_sum;
    uint payload;
    float M;
    float W;
};

struct Tex2D_natural
{
    uint bindless_handle;
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

struct _Array_natural_vector_int_4_512
{
    ivec4 data[512];
};

struct LanternPacked_natural
{
    vec3 position;
    uint intensity_color_id;
};

float _20433;
uvec4 _24815;
DistanceWithPenetration _6275;
DistanceWithPenetration _11035;
DistanceWithPenetration _13331;

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

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

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    uvec2 gbuffer_tex_dims;
    uvec2 depth_tex_dims;
    uvec2 half_depth_tex_dims;
    uvec2 taa_history_tex_dims;
    uint taa_history_valid;
    uvec2 ssgi_tex_dims;
    uint lantern_count;
    uvec2 indirect_radiance_tex_dims;
    uvec2 rdi_reservoir_tex_dims;
} globalParams;

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

layout(set = 22, binding = 0, scalar) uniform TerrainHeightmap_natural
{
    uvec2 terrain_heightmap_dims;
    Tex2D_natural bg_terrain_heightmap;
    Tex2D_natural bg_terrain_fog_height;
    vec2 bg_terrain_height_bounds_ws;
    vec4 bg_water_footprint_ws;
} terrain_heightmap;

layout(set = 21, binding = 0, std140) uniform ColorLibraryData_natural
{
    vec4 temp_color_1;
    vec4 temp_color_2;
    vec4 temp_color_3;
    vec4 roof_color_1;
    vec4 roof_color_2;
    vec4 sky_low_day;
    vec4 sky_high_day;
    vec4 sun_tint_day;
    vec4 sky_low_dusk;
    vec4 sky_high_dusk;
    vec4 sun_tint_dusk;
    vec4 indirect_light_tint;
    vec4 fence_color_1;
    vec4 fence_color_2;
    vec4 flower_color_1;
    vec4 flower_color_2;
    vec4 canopy_color_1;
    vec4 canopy_color_2;
    vec4 grass_1;
    vec4 grass_2;
    vec4 path;
    vec4 sky_base;
    vec4 sky_horizon;
    vec4 sky_clouds_1;
    vec4 sky_clouds_2;
    vec4 terrain_1;
    vec4 terrain_2;
    vec4 terrain_flattened;
    vec4 wall_1;
    vec4 wall_2;
    vec4 wall_moss;
    vec4 wall_bricks;
    vec4 ivy_branch;
    vec4 ivy_leaf_1;
    vec4 ivy_leaf_2;
    vec4 terrain_highlight;
    vec4 night_tint;
} color_library_data;

layout(set = 0, binding = 8, std140) uniform SpatialResolveOffsets_natural
{
    _Array_natural_vector_int_4_512 values;
} spatial_resolve_offsets;

layout(set = 0, binding = 12, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} light_indirection_grid;

layout(set = 0, binding = 9, std430) readonly buffer lantern_buf
{
    LanternPacked_natural _member0[];
} lantern_buf_1;

layout(set = 0, binding = 13, std430) readonly buffer grid_light_indices
{
    uint _member0[];
} grid_light_indices_1;

layout(set = 7, binding = 0) uniform texture2D blue_noise_textures_uniform01;
layout(set = 0, binding = 1) uniform utexture2D gbuffer_tex;
layout(set = 0, binding = 2) uniform texture2D depth_tex;
layout(set = 2, binding = 2) uniform sampler samplers_nnc;
layout(set = 0, binding = 5) uniform texture2D ssgi_tex;
layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 0, binding = 6) uniform texture2D shadows_screen_shadows_tex;
layout(set = 2, binding = 3) uniform sampler samplers_llc;
layout(set = 0, binding = 3) uniform texture2D half_depth_tex;
layout(set = 2, binding = 0) uniform sampler samplers_lnc;
layout(set = 0, binding = 7) uniform texture2D highlight_active_terrain_highlight_active_hill;
layout(set = 0, binding = 10) uniform texture2D indirect_radiance_tex;
layout(set = 25, binding = 0) uniform texture2D brdf_lut_data_lut;
layout(set = 0, binding = 11) uniform utexture2D rdi_reservoir_tex;

layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    ivec2 _382 = ivec2(gl_FragCoord.xy);
    uvec2 _384 = uvec2(_382);
    vec4 _5596 = ((texelFetch(blue_noise_textures_uniform01, ivec2((_384 + uvec2(fract((vec2(0.75487768650054931640625, 0.56984031200408935546875) * float(frame_counter.index)) + vec2(0.5)) * vec2(256.0))) % uvec2(256u)), 0) * 255.0) * vec4(0.00390625)) + vec4(0.001953125);
    float _436 = _5596.y;
    uvec4 sampled = texelFetch(gbuffer_tex, ivec2(_384), 0);
    vec4 sampled_1 = texelFetch(depth_tex, ivec2(_384), 0);
    float _448 = sampled_1.x;
    uint _5605 = sampled.x;
    float _5674 = float((_5605 >> uint(24)) & 255u) * 0.0039215688593685626983642578125;
    uint _5607 = sampled.y;
    float _5716 = float((_5607 >> uint(24)) & 255u) * 0.0039215688593685626983642578125;
    vec3 _5610 = vec4(float(_5607 & 255u) * 0.0039215688593685626983642578125, float((_5607 >> uint(8)) & 255u) * 0.0039215688593685626983642578125, float((_5607 >> uint(16)) & 255u) * 0.0039215688593685626983642578125, _5716).xyz;
    float _5620 = float(((_5605 & 1u) | ((_5605 >> uint(7)) & 2u)) | ((_5605 >> uint(14)) & 4u));
    vec3 _5626 = normalize((vec4(float(_5605 & 255u) * 0.0039215688593685626983642578125, float((_5605 >> uint(8)) & 255u) * 0.0039215688593685626983642578125, float((_5605 >> uint(16)) & 255u) * 0.0039215688593685626983642578125, _5674).xyz * 2.0) - vec3(1.0));
    vec2 _5725 = (vec2(_5674, _5716) * 2.0) - vec2(1.0);
    float _5726 = _5725.x;
    float _5731 = (1.0 - abs(_5726)) - abs(_5725.y);
    vec3 _5732 = vec3(_5726, _5725.y, _5731);
    vec2 _5741 = _5725 - (((step(vec2(0.0), _5725) * 2.0) - vec2(1.0)) * clamp(-_5731, 0.0, 1.0));
    _5732.x = _5741.x;
    _5732.y = _5741.y;
    vec3 _5747 = normalize(_5732);
    vec2 _587 = vec2(globalParams.depth_tex_dims);
    vec2 _5757 = (vec2(_382) + vec2(0.5)) / _587;
    vec2 _5788 = (_5757 - vec2(0.5)) * vec2(2.0, -2.0);
    vec4 _5779 = vec4(_5788, _448, 1.0);
    vec4 _5783 = (_5779 * current_view.sample_to_view) * current_view.view_to_world;
    vec3 _5794 = normalize(((vec4(_5788, 0.0, 1.0) * current_view.sample_to_view) * current_view.view_to_world).xyz);
    vec3 wo = -_5794;
    vec3 _5802 = _5783.xyz / vec3(_5783.w);
    float _696 = clamp(0.100000001490116119384765625 + textureLod(sampler2D(ssgi_tex, samplers_nnc), _5757, 0.0).x, 0.0, 1.0);
    vec2 _5810 = _5802.xz;
    vec2 _5840 = _5810 * vec2(0.0076923076994717121124267578125);
    vec2 _5841 = _5840 * 0.5;
    float _5816 = max(0.00999999977648258209228515625, frame_constants.ground_fog.y);
    vec2 _5889 = (_5810 * vec2(0.001000000047497451305389404296875)) + vec2(0.5);
    float _5819 = _5802.y - (textureLod(nonuniformEXT(sampler2D(resource_handles[terrain_heightmap.bg_terrain_fog_height.bindless_handle], samplers_lnc_iso)), vec2(_5889.y, 1.0 - _5889.x), 0.0).x + (40.0 * frame_constants.ground_fog.x));
    float _5825 = 1.0 + (_5816 * max(0.0, _5819));
    vec3 _892 = frame_constants.sun_color.xyz * exp(-((((0.00999999977648258209228515625 * frame_constants.fog_relative_extinction) * ((3.2200000286102294921875 * exp2(-dot(_5841, _5841))) * frame_constants.ground_fog.z)) * ((1.0 / ((2.0 * _5816) * (_5825 * _5825))) + max(0.0, -_5819))) / max(0.0500000007450580596923828125, frame_constants.dir_to_primary_directional_light.y)));
    float _20523;
    if (texelFetch(shadows_screen_shadows_tex, ivec2(_384), 0).x > 0.0500000007450580596923828125)
    {
        float _20520;
        do
        {
            vec2 _996;
            vec3 _1069;
            mat3 _5968;
            mat4 _6023;
            mat4 _6027;
            vec4 _6053;
            float _6174;
            float _18223;
            float _18224;
            float _19683;
            int _20103;
            float _20423;
            do
            {
                int _20102;
                do
                {
                    vec3 _19790;
                    vec3 _19791;
                    if (frame_constants.dir_to_primary_directional_light.z < 0.0)
                    {
                        float _5935 = 1.0 / (1.0 - frame_constants.dir_to_primary_directional_light.z);
                        float _5939 = (frame_constants.dir_to_primary_directional_light.x * frame_constants.dir_to_primary_directional_light.y) * _5935;
                        _19791 = vec3(_5939, ((frame_constants.dir_to_primary_directional_light.y * frame_constants.dir_to_primary_directional_light.y) * _5935) - 1.0, -frame_constants.dir_to_primary_directional_light.y);
                        _19790 = vec3(1.0 - ((frame_constants.dir_to_primary_directional_light.x * frame_constants.dir_to_primary_directional_light.x) * _5935), -_5939, frame_constants.dir_to_primary_directional_light.x);
                    }
                    else
                    {
                        float _5918 = 1.0 / (1.0 + frame_constants.dir_to_primary_directional_light.z);
                        float _5920 = -frame_constants.dir_to_primary_directional_light.x;
                        float _5923 = (_5920 * frame_constants.dir_to_primary_directional_light.y) * _5918;
                        _19791 = vec3(_5923, 1.0 - ((frame_constants.dir_to_primary_directional_light.y * frame_constants.dir_to_primary_directional_light.y) * _5918), -frame_constants.dir_to_primary_directional_light.y);
                        _19790 = vec3(1.0 - ((frame_constants.dir_to_primary_directional_light.x * frame_constants.dir_to_primary_directional_light.x) * _5918), _5923, _5920);
                    }
                    _5968 = mat3(vec3(_19790.x, _19791.x, frame_constants.dir_to_primary_directional_light.x), vec3(_19790.y, _19791.y, frame_constants.dir_to_primary_directional_light.y), vec3(_19790.z, _19791.z, frame_constants.dir_to_primary_directional_light.z));
                    vec2 _5975 = fract(vec2(0.5));
                    _996 = _5596.zw;
                    vec2 _998 = fract(_5975 + _996);
                    float _5978 = _998.x;
                    float _5981 = (1.0 - _5978) + (_5978 * 0.89999997615814208984375);
                    float _5985 = sqrt(clamp(1.0 - (_5981 * _5981), 0.0, 1.0));
                    float _5987 = _998.y * 6.283185482025146484375;
                    _1069 = _5779.xyz;
                    _6023 = current_view.world_to_view;
                    _6027 = current_view.view_to_sample;
                    vec4 _6028 = (vec4(_5802 + ((vec3(_5985 * cos(_5987), _5985 * sin(_5987), _5981) * _5968) * 0.300000011920928955078125), 1.0) * _6023) * _6027;
                    vec3 _6032 = _6028.xyz / vec3(_6028.w);
                    _6053 = vec4(_1069, 1.0);
                    vec4 _6054 = _6053 + (vec4(_6032 - _1069, 0.0) * float(int(sign(_6032.z))));
                    float _6055 = _6054.w;
                    vec3 _6068 = (_6054 / vec4(float((_6055 >= 0.0) ? 1 : (-1)) * max(1.0000000133514319600180897396058e-10, abs(_6055)))).xyz;
                    vec3 _6070 = _6068 - _1069;
                    vec3 _6076 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), lessThan(_6070, vec3(0.0))) - _1069) / _6070;
                    vec3 _6083 = _1069 + (_6070 * max(0.0, max(_6076.x, _6076.y)));
                    vec3 _6084 = _6068 - _6083;
                    vec3 _6089 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), greaterThanEqual(_6084, vec3(0.0))) - _6083) / _6084;
                    vec3 _6104 = _6083 + (_6084 * min(1.0, min(min(_6089.x, _6089.y), _6089.z)));
                    float _20100;
                    bool _20101;
                    do
                    {
                        _6174 = 0.5 * current_view.clip_to_view[3].z;
                        _19683 = _6275.base._distance;
                        _18223 = _6275.penetration;
                        _18224 = _6275.thickness;
                        uint _6190 = uint(int(max(2u, min(3u, uint(int(floor(length((((_6104.xy * vec2(0.5, -0.5)) + vec2(0.5)) - ((_6083.xy * vec2(0.5, -0.5)) + vec2(0.5))) * _587))))))));
                        bool _19941;
                        float _19944;
                        float _19963;
                        float _19982;
                        do
                        {
                            vec3 _6342 = _6104 - _6083;
                            float _6351 = float(_6190);
                            float _19796;
                            do
                            {
                                if (_6104.z > 9.5367431640625e-07)
                                {
                                    _19796 = _6351;
                                    break;
                                }
                                else
                                {
                                    _19796 = max(1.0, _6351 - 1.0);
                                    break;
                                }
                                break; // unreachable workaround
                            } while(false);
                            float _6361 = 1.0 / _19796;
                            bool _19832;
                            float _19842;
                            float _19846;
                            float _19854;
                            if (_6190 > 0u)
                            {
                                vec3 _6374 = _6083 + (_6342 * vec3(mix(0.0, 1.0, pow(_436 * _6361, 1.0))));
                                vec2 _6590 = (_6374.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                float _6522 = 1.0 / _6374.z;
                                float _6529 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _6590, 0.0).x;
                                float _6536 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _6590, 0.0).x;
                                float _6548 = (max(_6529, _6536) * 1.00000202655792236328125) - _6522;
                                float _6552 = _6522 - min(_6529, _6536);
                                bool _24818 = (_6548 < 0.0) ? (_6552 < _6174) : false;
                                bool _19833;
                                float _19843;
                                float _19847;
                                float _19855;
                                if (_24818)
                                {
                                    _19855 = _6548;
                                    _19847 = _6552;
                                    _19843 = _6174;
                                    _19833 = _24818;
                                }
                                else
                                {
                                    uint _6418;
                                    bool _24819;
                                    bool _19834;
                                    float _19844;
                                    float _19848;
                                    float _19856;
                                    uint _19806 = 1u;
                                    bool _19835 = _24818;
                                    for (;;)
                                    {
                                        if (!(_19806 < _6190))
                                        {
                                            _19856 = 0.0;
                                            _19848 = 0.0;
                                            _19844 = 0.0;
                                            _19834 = _19835;
                                            break;
                                        }
                                        vec3 _6403 = _6083 + (_6342 * vec3(mix(0.0, 1.0, min(0.9999847412109375, pow((float(_19806) + _436) * _6361, 1.0)))));
                                        vec2 _6732 = (_6403.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                        float _6664 = 1.0 / _6403.z;
                                        float _6671 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _6732, 0.0).x;
                                        float _6678 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _6732, 0.0).x;
                                        float _6690 = (max(_6671, _6678) * 1.00000202655792236328125) - _6664;
                                        float _6694 = _6664 - min(_6671, _6678);
                                        _24819 = (_6690 < 0.0) ? (_6694 < _6174) : false;
                                        if (_24819)
                                        {
                                            _19856 = _6690;
                                            _19848 = _6694;
                                            _19844 = _6174;
                                            _19834 = _24819;
                                            break;
                                        }
                                        _6418 = _19806 + 1u;
                                        _19806 = _6418;
                                        _19835 = _24819;
                                        continue;
                                    }
                                    _19855 = _19856;
                                    _19847 = _19848;
                                    _19843 = _19844;
                                    _19833 = _19834;
                                }
                                _19854 = _19855;
                                _19846 = _19847;
                                _19842 = _19843;
                                _19832 = _19833;
                            }
                            else
                            {
                                _19854 = 0.0;
                                _19846 = 0.0;
                                _19842 = 0.0;
                                _19832 = false;
                            }
                            if (_19832)
                            {
                                _19982 = _19854;
                                _19963 = _19842;
                                _19944 = _19846;
                                _19941 = true;
                                break;
                            }
                            else
                            {
                                _19982 = _19683;
                                _19963 = _18224;
                                _19944 = _18223;
                                _19941 = false;
                                break;
                            }
                            break; // unreachable workaround
                        } while(false);
                        bool _20001;
                        if (_19941)
                        {
                            bool _20003;
                            if (_19944 < _19963)
                            {
                                _20003 = _19982 < _19963;
                            }
                            else
                            {
                                _20003 = false;
                            }
                            _20001 = _20003;
                        }
                        else
                        {
                            _20001 = false;
                        }
                        if (_20001)
                        {
                            _20101 = true;
                            _20100 = _19944 / _19963;
                            break;
                        }
                        _20101 = false;
                        _20100 = 0.0;
                        break;
                    } while(false);
                    if (!subgroupAny(_20101))
                    {
                        _20423 = _20433;
                        _20102 = 0;
                        break;
                    }
                    float _20459;
                    if (_20101)
                    {
                        _20459 = 0.300000011920928955078125 * smoothstep(1.0, 0.5, _20100);
                    }
                    else
                    {
                        _20459 = 0.0;
                    }
                    _20423 = _20459;
                    _20102 = 2;
                    break;
                } while(false);
                if (_20102 != 2)
                {
                    _20103 = _20102;
                    break;
                }
                _20103 = 1;
                break;
            } while(false);
            if (_20103 != 1)
            {
                _20520 = 0.0;
                break;
            }
            int _20487;
            float _20489;
            float _20522;
            do
            {
                int _20486;
                do
                {
                    vec2 _7105 = fract(vec2(1.25487768650054931640625, 1.06984031200408935546875));
                    vec2 _2090 = fract(_7105 + _996);
                    float _7108 = _2090.x;
                    float _7111 = (1.0 - _7108) + (_7108 * 0.89999997615814208984375);
                    float _7115 = sqrt(clamp(1.0 - (_7111 * _7111), 0.0, 1.0));
                    float _7117 = _2090.y * 6.283185482025146484375;
                    vec4 _7158 = (vec4(_5802 + ((vec3(_7115 * cos(_7117), _7115 * sin(_7117), _7111) * _5968) * 0.300000011920928955078125), 1.0) * _6023) * _6027;
                    vec3 _7162 = _7158.xyz / vec3(_7158.w);
                    vec4 _7184 = _6053 + (vec4(_7162 - _1069, 0.0) * float(int(sign(_7162.z))));
                    float _7185 = _7184.w;
                    vec3 _7198 = (_7184 / vec4(float((_7185 >= 0.0) ? 1 : (-1)) * max(1.0000000133514319600180897396058e-10, abs(_7185)))).xyz;
                    vec3 _7200 = _7198 - _1069;
                    vec3 _7206 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), lessThan(_7200, vec3(0.0))) - _1069) / _7200;
                    vec3 _7213 = _1069 + (_7200 * max(0.0, max(_7206.x, _7206.y)));
                    vec3 _7214 = _7198 - _7213;
                    vec3 _7219 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), greaterThanEqual(_7214, vec3(0.0))) - _7213) / _7214;
                    vec3 _7234 = _7213 + (_7214 * min(1.0, min(min(_7219.x, _7219.y), _7219.z)));
                    float _20412;
                    bool _20413;
                    do
                    {
                        uint _7320 = uint(int(max(2u, min(3u, uint(int(floor(length((((_7234.xy * vec2(0.5, -0.5)) + vec2(0.5)) - ((_7213.xy * vec2(0.5, -0.5)) + vec2(0.5))) * _587))))))));
                        bool _20253;
                        float _20256;
                        float _20275;
                        float _20294;
                        do
                        {
                            vec3 _7472 = _7234 - _7213;
                            float _7481 = float(_7320);
                            float _20108;
                            do
                            {
                                if (_7234.z > 9.5367431640625e-07)
                                {
                                    _20108 = _7481;
                                    break;
                                }
                                else
                                {
                                    _20108 = max(1.0, _7481 - 1.0);
                                    break;
                                }
                                break; // unreachable workaround
                            } while(false);
                            float _7491 = 1.0 / _20108;
                            bool _20144;
                            float _20154;
                            float _20158;
                            float _20166;
                            if (_7320 > 0u)
                            {
                                vec3 _7504 = _7213 + (_7472 * vec3(mix(0.0, 1.0, pow(_436 * _7491, 1.0))));
                                vec2 _7720 = (_7504.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                float _7652 = 1.0 / _7504.z;
                                float _7659 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _7720, 0.0).x;
                                float _7666 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _7720, 0.0).x;
                                float _7678 = (max(_7659, _7666) * 1.00000202655792236328125) - _7652;
                                float _7682 = _7652 - min(_7659, _7666);
                                bool _24821 = (_7678 < 0.0) ? (_7682 < _6174) : false;
                                bool _20145;
                                float _20155;
                                float _20159;
                                float _20167;
                                if (_24821)
                                {
                                    _20167 = _7678;
                                    _20159 = _7682;
                                    _20155 = _6174;
                                    _20145 = _24821;
                                }
                                else
                                {
                                    uint _7548;
                                    bool _24822;
                                    bool _20146;
                                    float _20156;
                                    float _20160;
                                    float _20168;
                                    uint _20118 = 1u;
                                    bool _20147 = _24821;
                                    for (;;)
                                    {
                                        if (!(_20118 < _7320))
                                        {
                                            _20168 = 0.0;
                                            _20160 = 0.0;
                                            _20156 = 0.0;
                                            _20146 = _20147;
                                            break;
                                        }
                                        vec3 _7533 = _7213 + (_7472 * vec3(mix(0.0, 1.0, min(0.9999847412109375, pow((float(_20118) + _436) * _7491, 1.0)))));
                                        vec2 _7862 = (_7533.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                        float _7794 = 1.0 / _7533.z;
                                        float _7801 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _7862, 0.0).x;
                                        float _7808 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _7862, 0.0).x;
                                        float _7820 = (max(_7801, _7808) * 1.00000202655792236328125) - _7794;
                                        float _7824 = _7794 - min(_7801, _7808);
                                        _24822 = (_7820 < 0.0) ? (_7824 < _6174) : false;
                                        if (_24822)
                                        {
                                            _20168 = _7820;
                                            _20160 = _7824;
                                            _20156 = _6174;
                                            _20146 = _24822;
                                            break;
                                        }
                                        _7548 = _20118 + 1u;
                                        _20118 = _7548;
                                        _20147 = _24822;
                                        continue;
                                    }
                                    _20167 = _20168;
                                    _20159 = _20160;
                                    _20155 = _20156;
                                    _20145 = _20146;
                                }
                                _20166 = _20167;
                                _20158 = _20159;
                                _20154 = _20155;
                                _20144 = _20145;
                            }
                            else
                            {
                                _20166 = 0.0;
                                _20158 = 0.0;
                                _20154 = 0.0;
                                _20144 = false;
                            }
                            if (_20144)
                            {
                                _20294 = _20166;
                                _20275 = _20154;
                                _20256 = _20158;
                                _20253 = true;
                                break;
                            }
                            else
                            {
                                _20294 = _19683;
                                _20275 = _18224;
                                _20256 = _18223;
                                _20253 = false;
                                break;
                            }
                            break; // unreachable workaround
                        } while(false);
                        bool _20313;
                        if (_20253)
                        {
                            bool _20315;
                            if (_20256 < _20275)
                            {
                                _20315 = _20294 < _20275;
                            }
                            else
                            {
                                _20315 = false;
                            }
                            _20313 = _20315;
                        }
                        else
                        {
                            _20313 = false;
                        }
                        if (_20313)
                        {
                            _20413 = true;
                            _20412 = _20256 / _20275;
                            break;
                        }
                        _20413 = false;
                        _20412 = 0.0;
                        break;
                    } while(false);
                    if (!subgroupAny(_20413))
                    {
                        _20522 = _20423;
                        _20489 = 0.0;
                        _20486 = 0;
                        break;
                    }
                    float _20485;
                    if (_20413)
                    {
                        _20485 = 0.300000011920928955078125 * smoothstep(1.0, 0.5, _20412);
                    }
                    else
                    {
                        _20485 = 0.0;
                    }
                    _20522 = 0.0;
                    _20489 = _20423 + _20485;
                    _20486 = 2;
                    break;
                } while(false);
                if (_20486 != 2)
                {
                    _20487 = _20486;
                    break;
                }
                _20487 = 1;
                break;
            } while(false);
            if (_20487 != 1)
            {
                _20520 = _20522;
                break;
            }
            _20520 = _20489;
            break;
        } while(false);
        _20523 = _20520 * 0.5;
    }
    else
    {
        _20523 = 0.0;
    }
    vec3 _24824 = mix(_5610 * _5610, vec3(0.5), bvec3((frame_constants.render_overrides & 1u) != 0u));
    float _8364 = mix(0.550000011920928955078125, 1.0, _5620 * 0.14285714924335479736328125);
    float _8368 = clamp((dot(_5626, frame_constants.dir_to_primary_directional_light) - (-0.100000001490116119384765625)) * 0.90909087657928466796875, 0.0, 1.0);
    float _8261 = dot(_5747, frame_constants.dir_to_primary_directional_light);
    float _8376 = _8364 * _8364;
    float _8295 = ((1.0 - _20523) * texelFetch(shadows_screen_shadows_tex, ivec2(_384), 0).x) * smoothstep(0.0, 0.5, _8368);
    vec3 _8433 = mix(vec3(1.0), _24824 / vec3(max(_24824.x, max(_24824.y, _24824.z))), vec3(_5620 * 0.100000001490116119384765625));
    vec3 _20610;
    do
    {
        bool _20609;
        if (_8261 <= 0.0)
        {
            _20609 = true;
        }
        else
        {
            _20609 = dot(_5747, wo) <= 0.0;
        }
        if (_20609)
        {
            _20610 = vec3(0.0);
            break;
        }
        float _8461 = _8376 * _8376;
        vec3 _8463 = normalize(wo + frame_constants.dir_to_primary_directional_light);
        float _8519 = dot(_5747, _8463);
        float _8540 = dot(_5747, wo);
        float _8561 = ((_8519 * _8519) * (_8461 - 1.0)) + 1.0;
        _20610 = ((mix(vec3(0.039999999105930328369140625), vec3(1.0), vec3(pow(max(0.0, 1.0 - dot(_8463, frame_constants.dir_to_primary_directional_light)), 5.0))) * (((2.0 * _8261) * _8540) / ((_8261 * sqrt(((((-_8540) * _8461) + _8540) * _8540) + _8461)) + (_8540 * sqrt(((((-_8261) * _8461) + _8261) * _8261) + _8461))))) * (_8461 / ((3.1415927410125732421875 * _8561) * _8561))) / vec3((4.0 * _8540) * _8261);
        break;
    } while(false);
    vec3 _8311 = (((_892 * _8295) * _8368) * _24824) * 0.3183098733425140380859375;
    float _8333 = 1.0 - clamp(dot(_5626, wo), 0.0, 1.0);
    float _8335 = 1.0 - clamp(dot(frame_constants.dir_to_primary_directional_light, wo), 0.0, 1.0);
    vec3 _20616;
    do
    {
        bool _20615;
        if (abs(_5802.x) > 65.0)
        {
            _20615 = true;
        }
        else
        {
            _20615 = abs(_5802.z) > 65.0;
        }
        if (_20615)
        {
            _20616 = vec3(0.0);
            break;
        }
        _20616 = color_library_data.terrain_highlight.xyz * textureLod(sampler2D(highlight_active_terrain_highlight_active_hill, samplers_lnc_iso), _5840 + vec2(0.5), 0.0).x;
        break;
    } while(false);
    vec4 _17115[3] = vec4[](vec4(0.0), vec4(0.0), vec4(0.0));
    float _8714 = _5596.x;
    uint _8718 = uint((_8714 * 3.0) + 0.5) & 3u;
    float _20620;
    _20620 = 0.0;
    float _8781;
    uint _8785;
    uint _20619 = 0u;
    for (;;)
    {
        if (!(_20619 < 3u))
        {
            break;
        }
        uvec2 _8738 = (_384 / uvec2(2u)) + uvec2(spatial_resolve_offsets.values.data[(_8718 * 16u) + _20619].xy);
        float _8748 = exp2(-min(30.0, 80.0 * abs(1.0 - (texelFetch(half_depth_tex, ivec2(_8738), 0).x / _448))));
        uint _8777;
        uint _23236 = 0u;
        for (;;)
        {
            if (!(_23236 < 3u))
            {
                break;
            }
            _17115[_23236] += (texelFetch(indirect_radiance_tex, ivec2(_8738 + uvec2((_23236 * globalParams.indirect_radiance_tex_dims.x) / 3u, 0u)), 0) * _8748);
            _8777 = _23236 + 1u;
            _23236 = _8777;
            continue;
        }
        _8781 = _20620 + _8748;
        _8785 = _20619 + 1u;
        _20620 = _8781;
        _20619 = _8785;
        continue;
    }
    float _20622;
    if (_20620 < 0.001000000047497451305389404296875)
    {
        float _20623;
        _20623 = _20620;
        float _8854;
        uint _8858;
        uint _20621 = 3u;
        for (;;)
        {
            if (!(_20621 < 6u))
            {
                break;
            }
            uvec2 _8811 = (_384 / uvec2(2u)) + uvec2(spatial_resolve_offsets.values.data[(_8718 * 16u) + _20621].xy);
            float _8821 = exp2(-min(30.0, 80.0 * abs(1.0 - (texelFetch(half_depth_tex, ivec2(_8811), 0).x / _448))));
            uint _8850;
            uint _23233 = 0u;
            for (;;)
            {
                if (!(_23233 < 3u))
                {
                    break;
                }
                _17115[_23233] += (texelFetch(indirect_radiance_tex, ivec2(_8811 + uvec2((_23233 * globalParams.indirect_radiance_tex_dims.x) / 3u, 0u)), 0) * _8821);
                _8850 = _23233 + 1u;
                _23233 = _8850;
                continue;
            }
            _8854 = _20623 + _8821;
            _8858 = _20621 + 1u;
            _20623 = _8854;
            _20621 = _8858;
            continue;
        }
        _20622 = _20623;
    }
    else
    {
        _20622 = _20620;
    }
    float _8866 = 1.0 / max(9.9999997473787516355514526367188e-05, _20622);
    _17115[0] *= _8866;
    _17115[1] *= _8866;
    _17115[2] *= _8866;
    vec3 _8893 = (_17115[0].yzw + _17115[1].yzw) + _17115[2].yzw;
    vec3 _8912 = vec3(_17115[0].x, _17115[1].x, _17115[2].x);
    vec3 _8939 = max(vec3(0.0), vec3(1.0) - (color_library_data.indirect_light_tint.xyz * 0.920000016689300537109375));
    vec3 _8952 = max(vec3(0.0), mix((_8939 / vec3(dot(_8939, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)))) * dot(_8912, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)), _8912, vec3(1.16999995708465576171875)) * 1.2000000476837158203125);
    vec3 _20647;
    if (any(notEqual(_8893 / vec3(max(9.9999996826552253889678874634872e-21, length(_8893))), vec3(0.0))))
    {
        float _10239 = _8952.x;
        vec4 _10256 = vec4(_10239, (_17115[0].yzw / vec3(max(9.9999996826552253889678874634872e-21, _17115[0].x))) * _10239);
        vec4 _10258 = vec4(0.886200010776519775390625, _5626 * 1.02330005168914794921875);
        float _10244 = _8952.y;
        vec4 _10263 = vec4(_10244, (_17115[1].yzw / vec3(max(9.9999996826552253889678874634872e-21, _17115[1].x))) * _10244);
        float _10248 = _8952.z;
        vec4 _10270 = vec4(_10248, (_17115[2].yzw / vec3(max(9.9999996826552253889678874634872e-21, _17115[2].x))) * _10248);
        vec4 _10345 = textureLod(sampler2D(brdf_lut_data_lut, samplers_lnc), (vec2(dot(_5747, wo), _8376) * vec2(0.984375)) + vec2(0.0078125), 0.0);
        float _10306 = _10345.x;
        float _10308 = _10345.y;
        vec3 _10310 = (vec3(0.0199999995529651641845703125) * _10306) + vec3(_10308);
        float _10313 = _10306 + _10308;
        vec3 _10318 = mix(_10310 / vec3(_10313), vec3(1.0), vec3(0.4000000059604644775390625)) * (1.0 - _10313);
        vec3 _10325 = _10310 * (vec3(1.0) + (_10318 / (vec3(1.0) - _10318)));
        float _10352 = 1.0 - _8376;
        vec4 _10386 = vec4(0.886200010776519775390625, normalize(mix(_5747, reflect(_5794, _5747), vec3(_10352 * (sqrt(_10352) + _8376)))) * 1.02330005168914794921875);
        _20647 = ((((vec3(1.0) - _10325) * mix(_696, 1.0, 0.4000000059604644775390625)) * _24824) * (vec3(dot(_10256, _10258), dot(_10263, _10258), dot(_10270, _10258)) * 1.10000002384185791015625)) + (((_8433 * vec3(dot(_10256, _10386), dot(_10263, _10386), dot(_10270, _10386))) * _10325) * _696);
    }
    else
    {
        _20647 = vec3(0.0);
    }
    vec3 result = (((((((_8433 * _892) * _8295) * max(0.0, _8261)) * _20610) + _8311) + (_8311 * (((((_8333 * _8333) * _8333) * _8333) * _8333) * ((_8335 * _8335) * _8335)))) + _20616) + _20647;
    vec3 _21693;
    if (globalParams.lantern_count > 0u)
    {
        uvec3 _10423 = uvec3(clamp(floor((_5802 * vec3(0.24615384638309478759765625, 0.123076923191547393798828125, 0.24615384638309478759765625)) + vec3(16.0, 2.0, 16.0)), vec3(0.0), vec3(31.0, 15.0, 31.0)));
        uint _10452 = (32u * ((32u * _10423.y) + _10423.z)) + _10423.x;
        uint cell_light_count = light_indirection_grid._member0[_10452] >> 20u;
        bool _4185 = subgroupAll(cell_light_count <= 2u);
        uint _24825 = _4185 ? 2u : 6u;
        vec3 _21694;
        if (6u == _24825)
        {
            uint i;
            uint lanterns_found[8];
            uint _21662 = 0u;
            for (;;)
            {
                if (!(_21662 < 8u))
                {
                    break;
                }
                lanterns_found[_21662] = 4294967295u;
                i = _21662 + 1u;
                _21662 = i;
                continue;
            }
            uvec2 _12455 = uvec2(1u, 2u);
            uvec2 _12456 = uvec2(_382 & ivec2(1));
            uint _21664;
            _21664 = 0u;
            uint _12477;
            int _12481;
            int _21663 = 0;
            for (;;)
            {
                if (!(_21663 < 2))
                {
                    break;
                }
                _12477 = _21664 + (_12456[_21663] * _12455[_21663]);
                _12481 = _21663 + 1;
                _21664 = _12477;
                _21663 = _12481;
                continue;
            }
            uint _4261 = _21664 & 3u;
            uint _21666;
            _21666 = 0u;
            uint reservoir_sample_idx;
            uint _24109;
            uint _21665 = 0u;
            for (;;)
            {
                bool _21667;
                if (_21665 < 8u)
                {
                    _21667 = _21666 < 8u;
                }
                else
                {
                    _21667 = false;
                }
                if (!_21667)
                {
                    break;
                }
                uvec4 sampled_2 = texelFetch(rdi_reservoir_tex, ivec2(uvec2((_382 / ivec2(2)) + spatial_resolve_offsets.values.data[((_4261 * 16u) + _21665) + 256u].xy)), 0);
                uint _12490 = sampled_2.x;
                bool _22798;
                if (any(notEqual(sampled_2.xy, uvec2(0u))))
                {
                    _22798 = _12490 < globalParams.lantern_count;
                }
                else
                {
                    _22798 = false;
                }
                bool _22799;
                if (_22798)
                {
                    _22799 = lanterns_found[0u] != _12490;
                }
                else
                {
                    _22799 = false;
                }
                bool _22800;
                if (_22799)
                {
                    _22800 = lanterns_found[1u] != _12490;
                }
                else
                {
                    _22800 = false;
                }
                bool _22801;
                if (_22800)
                {
                    _22801 = lanterns_found[2u] != _12490;
                }
                else
                {
                    _22801 = false;
                }
                bool _22802;
                if (_22801)
                {
                    _22802 = lanterns_found[3u] != _12490;
                }
                else
                {
                    _22802 = false;
                }
                bool _22803;
                if (_22802)
                {
                    _22803 = lanterns_found[4u] != _12490;
                }
                else
                {
                    _22803 = false;
                }
                bool _22804;
                if (_22803)
                {
                    _22804 = lanterns_found[5u] != _12490;
                }
                else
                {
                    _22804 = false;
                }
                bool _22805;
                if (_22804)
                {
                    _22805 = lanterns_found[6u] != _12490;
                }
                else
                {
                    _22805 = false;
                }
                bool _22806;
                if (_22805)
                {
                    _22806 = lanterns_found[7u] != _12490;
                }
                else
                {
                    _22806 = false;
                }
                if (_22806)
                {
                    lanterns_found[_21666] = _12490;
                    _24109 = _21666 + 1u;
                }
                else
                {
                    _24109 = _21666;
                }
                reservoir_sample_idx = _21665 + 1u;
                _21666 = _24109;
                _21665 = reservoir_sample_idx;
                continue;
            }
            uint _21672;
            _21672 = _21666;
            uint reservoir_sample_idx_1;
            uint _24110;
            uint _21668 = 0u;
            for (;;)
            {
                if (!(_21668 < 8u))
                {
                    break;
                }
                uint _4444 = subgroupQuadSwapDiagonal(lanterns_found[_21668]);
                bool _22770;
                if (_4444 < globalParams.lantern_count)
                {
                    _22770 = _21672 < 8u;
                }
                else
                {
                    _22770 = false;
                }
                if (_22770)
                {
                    bool _22771;
                    if (lanterns_found[0u] != _4444)
                    {
                        _22771 = lanterns_found[1u] != _4444;
                    }
                    else
                    {
                        _22771 = false;
                    }
                    bool _22772;
                    if (_22771)
                    {
                        _22772 = lanterns_found[2u] != _4444;
                    }
                    else
                    {
                        _22772 = false;
                    }
                    bool _22773;
                    if (_22772)
                    {
                        _22773 = lanterns_found[3u] != _4444;
                    }
                    else
                    {
                        _22773 = false;
                    }
                    bool _22774;
                    if (_22773)
                    {
                        _22774 = lanterns_found[4u] != _4444;
                    }
                    else
                    {
                        _22774 = false;
                    }
                    bool _22775;
                    if (_22774)
                    {
                        _22775 = lanterns_found[5u] != _4444;
                    }
                    else
                    {
                        _22775 = false;
                    }
                    bool _22776;
                    if (_22775)
                    {
                        _22776 = lanterns_found[6u] != _4444;
                    }
                    else
                    {
                        _22776 = false;
                    }
                    bool _22777;
                    if (_22776)
                    {
                        _22777 = lanterns_found[7u] != _4444;
                    }
                    else
                    {
                        _22777 = false;
                    }
                    uint _22786;
                    if (_22777)
                    {
                        lanterns_found[_21672] = _4444;
                        _22786 = _21672 + 1u;
                    }
                    else
                    {
                        _22786 = _21672;
                    }
                    _24110 = _22786;
                }
                else
                {
                    _24110 = _21672;
                }
                reservoir_sample_idx_1 = _21668 + 1u;
                _21672 = _24110;
                _21668 = reservoir_sample_idx_1;
                continue;
            }
            uint ridx;
            Reservoir1sppStreamState stream_state[2];
            Reservoir1spp reservoir[2];
            uint _21669 = 0u;
            for (;;)
            {
                if (!(_21669 < 2u))
                {
                    break;
                }
                stream_state[_21669] = Reservoir1sppStreamState(0.0, 0.0);
                reservoir[_21669] = Reservoir1spp(0.0, 0u, 0.0, 0.0);
                ridx = _21669 + 1u;
                _21669 = ridx;
                continue;
            }
            uint found_lantern_idx;
            uint _21674 = 0u;
            for (;;)
            {
                if (!(_21674 < _21672))
                {
                    break;
                }
                vec2 _12528 = unpackHalf2x16(lantern_buf_1._member0[lanterns_found[_21674]].intensity_color_id);
                float _12529 = _12528.x;
                uint _12534 = lantern_buf_1._member0[lanterns_found[_21674]].intensity_color_id >> uint(16);
                vec3 _12552 = lantern_buf_1._member0[lanterns_found[_21674]].position.xyz - _5802;
                float _12554 = dot(_12552, _12552);
                vec3 _12561 = _12552 + vec3(0.0, 0.1500000059604644775390625, 0.0);
                vec3 _22742;
                do
                {
                    if (_12534 == 0u)
                    {
                        _22742 = vec3(1.0, 0.800000011920928955078125, 0.100000001490116119384765625);
                        break;
                    }
                    else
                    {
                        if (_12534 == 1u)
                        {
                            _22742 = vec3(0.0, 0.735904157161712646484375, 3.67952060699462890625);
                            break;
                        }
                        else
                        {
                            if (_12534 == 2u)
                            {
                                _22742 = vec3(0.20513366162776947021484375, 1.02566826343536376953125, 0.20513366162776947021484375);
                                break;
                            }
                            else
                            {
                                if (_12534 == 3u)
                                {
                                    _22742 = vec3(0.85153043270111083984375, 0.56768691539764404296875, 2.8384344577789306640625);
                                    break;
                                }
                                else
                                {
                                    _22742 = vec3(1.82324230670928955078125, 0.546972692012786865234375, 0.182324230670928955078125);
                                    break;
                                }
                                break; // unreachable workaround
                            }
                            break; // unreachable workaround
                        }
                        break; // unreachable workaround
                    }
                    break; // unreachable workaround
                } while(false);
                float _12664 = dot(((_22742 * 4.0) * _12529) * ((max(0.0, dot(_5626, _12552 / vec3(length(_12552)))) * ((1.0 / (0.3359999954700469970703125 + _12554)) * smoothstep(36.0 * _12529, 16.0 * _12529, _12554))) * smoothstep(-0.5, 0.20000000298023223876953125, (_12561 / vec3(length(_12561))).y)), vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875));
                float inv_pdf_q = float(_21672);
                float _4796 = fract(_8714 + (float(_21674) / inv_pdf_q));
                if (reservoir[0].w_sum <= reservoir[1].w_sum)
                {
                    float _12710;
                    float _12720;
                    float _12723;
                    uint _22758;
                    float _22763;
                    do
                    {
                        bool _12725;
                        _12710 = stream_state[0].M_sum + 1.0;
                        float _12711 = _12664 * inv_pdf_q;
                        do
                        {
                            _12720 = reservoir[0].w_sum + _12711;
                            _12723 = reservoir[0].M + 1.0;
                            _12725 = (_12711 / _12720) >= _4796;
                            if (_12725)
                            {
                                _22758 = lanterns_found[_21674];
                                break;
                            }
                            else
                            {
                                _22758 = reservoir[0].payload;
                                break;
                            }
                            break; // unreachable workaround
                        } while(false);
                        if (_12725)
                        {
                            _22763 = _12664;
                            break;
                        }
                        else
                        {
                            _22763 = stream_state[0].p_q_sel;
                            break;
                        }
                        break; // unreachable workaround
                    } while(false);
                    reservoir[0] = Reservoir1spp(_12720, _22758, _12723, reservoir[0].W);
                    stream_state[0] = Reservoir1sppStreamState(_22763, _12710);
                }
                else
                {
                    float _12674;
                    float _12684;
                    float _12687;
                    uint _22748;
                    float _22753;
                    do
                    {
                        bool _12689;
                        _12674 = stream_state[1].M_sum + 1.0;
                        float _12675 = _12664 * inv_pdf_q;
                        do
                        {
                            _12684 = reservoir[1].w_sum + _12675;
                            _12687 = reservoir[1].M + 1.0;
                            _12689 = (_12675 / _12684) >= _4796;
                            if (_12689)
                            {
                                _22748 = lanterns_found[_21674];
                                break;
                            }
                            else
                            {
                                _22748 = reservoir[1].payload;
                                break;
                            }
                            break; // unreachable workaround
                        } while(false);
                        if (_12689)
                        {
                            _22753 = _12664;
                            break;
                        }
                        else
                        {
                            _22753 = stream_state[1].p_q_sel;
                            break;
                        }
                        break; // unreachable workaround
                    } while(false);
                    reservoir[1] = Reservoir1spp(_12684, _22748, _12687, reservoir[1].W);
                    stream_state[1] = Reservoir1sppStreamState(_22753, _12674);
                }
                found_lantern_idx = _21674 + 1u;
                _21674 = found_lantern_idx;
                continue;
            }
            uint ridx_1;
            uint _21675 = 1u;
            for (;;)
            {
                if (!(_21675 < 2u))
                {
                    break;
                }
                stream_state[0].M_sum += stream_state[_21675].M_sum;
                ridx_1 = _21675 + 1u;
                _21675 = ridx_1;
                continue;
            }
            uint ridx_2;
            uint _21676 = 1u;
            for (;;)
            {
                if (!(_21676 < 2u))
                {
                    break;
                }
                stream_state[_21676].M_sum = stream_state[0].M_sum;
                ridx_2 = _21676 + 1u;
                _21676 = ridx_2;
                continue;
            }
            vec3 _21696;
            _21696 = result;
            uint ridx_3;
            vec3 _24196;
            float _24349;
            float _24436;
            float _24522;
            float _24607;
            uint _21677 = 0u;
            float _22019;
            float _22166;
            float _22314;
            float _22463;
            for (;;)
            {
                if (!(_21677 < 2u))
                {
                    break;
                }
                reservoir[_21677] = Reservoir1spp(reservoir[_21677].w_sum, reservoir[_21677].payload, stream_state[_21677].M_sum, reservoir[_21677].w_sum / max(9.9999999392252902907785028219223e-09, stream_state[_21677].M_sum * stream_state[_21677].p_q_sel));
                if (reservoir[_21677].W > 0.0)
                {
                    vec2 _12893 = unpackHalf2x16(lantern_buf_1._member0[reservoir[_21677].payload].intensity_color_id);
                    float _12894 = _12893.x;
                    uint _12899 = lantern_buf_1._member0[reservoir[_21677].payload].intensity_color_id >> uint(16);
                    vec3 _12913 = lantern_buf_1._member0[reservoir[_21677].payload].position.xyz - _5802;
                    float _12914 = length(_12913);
                    float _12915 = dot(_12913, _12913);
                    vec3 _12922 = _12913 + vec3(0.0, 0.1500000059604644775390625, 0.0);
                    vec3 _12928 = vec3(_12914);
                    vec3 _21697;
                    do
                    {
                        if (_12899 == 0u)
                        {
                            _21697 = vec3(1.0, 0.800000011920928955078125, 0.100000001490116119384765625);
                            break;
                        }
                        else
                        {
                            if (_12899 == 1u)
                            {
                                _21697 = vec3(0.0, 0.735904157161712646484375, 3.67952060699462890625);
                                break;
                            }
                            else
                            {
                                if (_12899 == 2u)
                                {
                                    _21697 = vec3(0.20513366162776947021484375, 1.02566826343536376953125, 0.20513366162776947021484375);
                                    break;
                                }
                                else
                                {
                                    if (_12899 == 3u)
                                    {
                                        _21697 = vec3(0.85153043270111083984375, 0.56768691539764404296875, 2.8384344577789306640625);
                                        break;
                                    }
                                    else
                                    {
                                        _21697 = vec3(1.82324230670928955078125, 0.546972692012786865234375, 0.182324230670928955078125);
                                        break;
                                    }
                                    break; // unreachable workaround
                                }
                                break; // unreachable workaround
                            }
                            break; // unreachable workaround
                        }
                        break; // unreachable workaround
                    } while(false);
                    vec3 _12939 = ((_21697 * 4.0) * _12894) * ((max(0.0, dot(_5626, _12913 / _12928)) * ((1.0 / (0.3359999954700469970703125 + _12915)) * smoothstep(36.0 * _12894, 16.0 * _12894, _12915))) * smoothstep(-0.5, 0.20000000298023223876953125, (_12922 / vec3(length(_12922))).y));
                    vec3 _13023 = _12939;
                    float _21699;
                    _21699 = _12939.x;
                    float _13041;
                    int _13045;
                    int _21698 = 1;
                    SPIRV_CROSS_UNROLL
                    for (;;)
                    {
                        if (!(_21698 < 3))
                        {
                            break;
                        }
                        _13041 = max(_21699, _13023[_21698]);
                        _13045 = _21698 + 1;
                        _21699 = _13041;
                        _21698 = _13045;
                        continue;
                    }
                    vec3 _22614;
                    float _24350;
                    float _24437;
                    float _24523;
                    float _24608;
                    if ((reservoir[_21677].W * _21699) > 0.0)
                    {
                        vec3 _22611;
                        if (_12914 > 0.5)
                        {
                            vec3 _12806 = _5779.xyz;
                            vec4 _13084 = (vec4((_5802 + ((_12913 * (_12914 - 0.5)) / _12928)) + (_5626 * (0.0199999995529651641845703125 * _436)), 1.0) * current_view.world_to_view) * current_view.view_to_sample;
                            vec3 _13088 = _13084.xyz / vec3(_13084.w);
                            vec4 _13110 = vec4(_12806, 1.0) + (vec4(_13088 - _12806, 0.0) * float(int(sign(_13088.z))));
                            float _13111 = _13110.w;
                            vec3 _13124 = (_13110 / vec4(float((_13111 >= 0.0) ? 1 : (-1)) * max(1.0000000133514319600180897396058e-10, abs(_13111)))).xyz;
                            vec3 _13126 = _13124 - _12806;
                            vec3 _13132 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), lessThan(_13126, vec3(0.0))) - _12806) / _13126;
                            vec3 _13139 = _12806 + (_13126 * max(0.0, max(_13132.x, _13132.y)));
                            vec3 _13140 = _13124 - _13139;
                            vec3 _13145 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), greaterThanEqual(_13140, vec3(0.0))) - _13139) / _13140;
                            vec3 _13160 = _13139 + (_13140 * min(1.0, min(min(_13145.x, _13145.y), _13145.z)));
                            float _22008;
                            float _22009;
                            bool _22010;
                            do
                            {
                                float _13230 = 0.800000011920928955078125 * current_view.clip_to_view[3].z;
                                uint _13246 = uint(int(max(2u, min(4u, uint(int(floor(length((((_13160.xy * vec2(0.5, -0.5)) + vec2(0.5)) - ((_13139.xy * vec2(0.5, -0.5)) + vec2(0.5))) * _587))))))));
                                float _21730;
                                bool _21849;
                                float _21850;
                                float _21852;
                                float _21871;
                                float _21890;
                                do
                                {
                                    vec3 _13398 = _13160 - _13139;
                                    float _13407 = float(_13246);
                                    float _21704;
                                    do
                                    {
                                        if (_13160.z > 9.5367431640625e-07)
                                        {
                                            _21704 = _13407;
                                            break;
                                        }
                                        else
                                        {
                                            _21704 = max(1.0, _13407 - 1.0);
                                            break;
                                        }
                                        break; // unreachable workaround
                                    } while(false);
                                    float _13417 = 1.0 / _21704;
                                    bool _21740;
                                    float _21746;
                                    float _21750;
                                    float _21754;
                                    float _21762;
                                    if (_13246 > 0u)
                                    {
                                        float _13427 = mix(0.0, 1.0, pow(_8714 * _13417, 1.0));
                                        vec3 _13430 = _13139 + (_13398 * vec3(_13427));
                                        vec2 _13646 = (_13430.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                        float _13578 = 1.0 / _13430.z;
                                        float _13585 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _13646, 0.0).x;
                                        float _13592 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _13646, 0.0).x;
                                        float _13604 = (max(_13585, _13592) * 1.00000202655792236328125) - _13578;
                                        float _13608 = _13578 - min(_13585, _13592);
                                        bool _24832 = (_13604 < 0.0) ? (_13608 < _13230) : false;
                                        float _21731;
                                        bool _21741;
                                        float _21747;
                                        float _21751;
                                        float _21755;
                                        float _21763;
                                        if (_24832)
                                        {
                                            _21763 = _13604;
                                            _21755 = _13608;
                                            _21751 = _13230;
                                            _21747 = _13427;
                                            _21741 = _24832;
                                            _21731 = 0.0;
                                        }
                                        else
                                        {
                                            float _21733;
                                            _21733 = _13427;
                                            float _13456;
                                            uint _13474;
                                            bool _24833;
                                            bool _21742;
                                            float _21748;
                                            float _21752;
                                            float _21756;
                                            float _21764;
                                            uint _21714 = 1u;
                                            bool _21743 = _24832;
                                            for (;;)
                                            {
                                                if (!(_21714 < _13246))
                                                {
                                                    _21764 = 0.0;
                                                    _21756 = 0.0;
                                                    _21752 = 0.0;
                                                    _21748 = 1.0;
                                                    _21742 = _21743;
                                                    break;
                                                }
                                                _13456 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_21714) + _8714) * _13417, 1.0)));
                                                vec3 _13459 = _13139 + (_13398 * vec3(_13456));
                                                vec2 _13788 = (_13459.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                                float _13720 = 1.0 / _13459.z;
                                                float _13727 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _13788, 0.0).x;
                                                float _13734 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _13788, 0.0).x;
                                                float _13746 = (max(_13727, _13734) * 1.00000202655792236328125) - _13720;
                                                float _13750 = _13720 - min(_13727, _13734);
                                                _24833 = (_13746 < 0.0) ? (_13750 < _13230) : false;
                                                if (_24833)
                                                {
                                                    _21764 = _13746;
                                                    _21756 = _13750;
                                                    _21752 = _13230;
                                                    _21748 = _13456;
                                                    _21742 = _24833;
                                                    break;
                                                }
                                                _13474 = _21714 + 1u;
                                                _21714 = _13474;
                                                _21743 = _24833;
                                                _21733 = _13456;
                                                continue;
                                            }
                                            _21763 = _21764;
                                            _21755 = _21756;
                                            _21751 = _21752;
                                            _21747 = _21748;
                                            _21741 = _21742;
                                            _21731 = _21733;
                                        }
                                        _21762 = _21763;
                                        _21754 = _21755;
                                        _21750 = _21751;
                                        _21746 = _21747;
                                        _21740 = _21741;
                                        _21730 = _21731;
                                    }
                                    else
                                    {
                                        _21762 = 0.0;
                                        _21754 = 0.0;
                                        _21750 = 0.0;
                                        _21746 = 1.0;
                                        _21740 = false;
                                        _21730 = 0.0;
                                    }
                                    if (_21740)
                                    {
                                        _21890 = _21762;
                                        _21871 = _21750;
                                        _21852 = _21754;
                                        _21850 = _21746;
                                        _21849 = true;
                                        break;
                                    }
                                    else
                                    {
                                        _21890 = _13331.base._distance;
                                        _21871 = _13331.thickness;
                                        _21852 = _13331.penetration;
                                        _21850 = _21730;
                                        _21849 = false;
                                        break;
                                    }
                                    break; // unreachable workaround
                                } while(false);
                                bool _21909;
                                if (_21849)
                                {
                                    bool _21911;
                                    if (_21852 < _21871)
                                    {
                                        _21911 = _21890 < _21871;
                                    }
                                    else
                                    {
                                        _21911 = false;
                                    }
                                    _21909 = _21911;
                                }
                                else
                                {
                                    _21909 = false;
                                }
                                if (_21909)
                                {
                                    _22010 = true;
                                    _22009 = _21850;
                                    _22008 = _21852 / current_view.clip_to_view[3].z;
                                    break;
                                }
                                _22010 = false;
                                _22009 = _21730;
                                _22008 = 0.0;
                                break;
                            } while(false);
                            vec3 _22612;
                            if (_22010)
                            {
                                vec4 _14162 = (vec4(mix(_13139, _13160, vec3(_22009)), 1.0) * current_view.sample_to_view) * current_view.view_to_world;
                                vec3 _12828 = ((_14162.xyz / vec3(_14162.w)) + (wo * _22008)) - lantern_buf_1._member0[reservoir[_21677].payload].position.xyz;
                                bool _22011;
                                if (abs(_12828.y) > 0.5)
                                {
                                    _22011 = true;
                                }
                                else
                                {
                                    vec2 _12833 = _12828.xz;
                                    _22011 = dot(_12833, _12833) > 0.136900007724761962890625;
                                }
                                _22612 = mix(_12939, vec3(0.0), bvec3(_22011));
                            }
                            else
                            {
                                _22612 = _12939;
                            }
                            _22611 = _22612;
                        }
                        else
                        {
                            _22611 = _12939;
                        }
                        vec2 _12860 = vec2((float(frame_constants.game_time_sec) + frame_constants.game_time_frac) * 4.0, float(reservoir[_21677].payload * 10u));
                        ivec2 _14386 = ivec2(floor(_12860));
                        vec2 _14387 = fract(_12860);
                        uvec2 _14388 = uvec2(_14386);
                        uint _14438 = _14388.y;
                        uint _14444 = _14438 + (_14438 << 10u);
                        uint _14446 = _14444 ^ (_14444 >> 6u);
                        uint _14448 = _14446 + (_14446 << 3u);
                        uint _14450 = _14448 ^ (_14448 >> 11u);
                        uint _14458 = (((_14388.x * 1664525u) + (_14450 + (_14450 << 15u))) + 1013904223u) * 1664525u;
                        uint _14460 = _14458 ^ (_14458 >> 11u);
                        uint _14463 = _14460 ^ ((_14460 << 7u) & 2636928640u);
                        uint _14466 = _14463 ^ ((_14463 << 15u) & 4022730752u);
                        uint _14468 = _14466 ^ (_14466 >> 18u);
                        float _22159;
                        _22159 = _22019;
                        uint _14485;
                        uint _14504;
                        float _14510;
                        uint _22158 = 0u;
                        uint _22711 = _14468;
                        for (;;)
                        {
                            if (!(_22158 < 1u))
                            {
                                break;
                            }
                            uint _14496 = _22711 + (_22711 << 10u);
                            uint _14498 = _14496 ^ (_14496 >> 6u);
                            uint _14500 = _14498 + (_14498 << 3u);
                            uint _14502 = _14500 ^ (_14500 >> 11u);
                            _14504 = _14502 + (_14502 << 15u);
                            _14510 = uintBitsToFloat((_22711 & 8388607u) | 1065353216u) - 1.0;
                            _14485 = _22158 + 1u;
                            _22711 = _14504;
                            _22159 = _14510;
                            _22158 = _14485;
                            continue;
                        }
                        uvec2 _14396 = uvec2(_14386 + ivec2(1, 0));
                        uint _14514 = _14396.y;
                        uint _14520 = _14514 + (_14514 << 10u);
                        uint _14522 = _14520 ^ (_14520 >> 6u);
                        uint _14524 = _14522 + (_14522 << 3u);
                        uint _14526 = _14524 ^ (_14524 >> 11u);
                        uint _14534 = (((_14396.x * 1664525u) + (_14526 + (_14526 << 15u))) + 1013904223u) * 1664525u;
                        uint _14536 = _14534 ^ (_14534 >> 11u);
                        uint _14539 = _14536 ^ ((_14536 << 7u) & 2636928640u);
                        uint _14542 = _14539 ^ ((_14539 << 15u) & 4022730752u);
                        uint _14544 = _14542 ^ (_14542 >> 18u);
                        float _22306;
                        _22306 = _22166;
                        uint _14561;
                        uint _14580;
                        float _14586;
                        uint _22305 = 0u;
                        uint _22710 = _14544;
                        for (;;)
                        {
                            if (!(_22305 < 1u))
                            {
                                break;
                            }
                            uint _14572 = _22710 + (_22710 << 10u);
                            uint _14574 = _14572 ^ (_14572 >> 6u);
                            uint _14576 = _14574 + (_14574 << 3u);
                            uint _14578 = _14576 ^ (_14576 >> 11u);
                            _14580 = _14578 + (_14578 << 15u);
                            _14586 = uintBitsToFloat((_22710 & 8388607u) | 1065353216u) - 1.0;
                            _14561 = _22305 + 1u;
                            _22710 = _14580;
                            _22306 = _14586;
                            _22305 = _14561;
                            continue;
                        }
                        uvec2 _14403 = uvec2(_14386 + ivec2(0, 1));
                        uint _14590 = _14403.y;
                        uint _14596 = _14590 + (_14590 << 10u);
                        uint _14598 = _14596 ^ (_14596 >> 6u);
                        uint _14600 = _14598 + (_14598 << 3u);
                        uint _14602 = _14600 ^ (_14600 >> 11u);
                        uint _14610 = (((_14403.x * 1664525u) + (_14602 + (_14602 << 15u))) + 1013904223u) * 1664525u;
                        uint _14612 = _14610 ^ (_14610 >> 11u);
                        uint _14615 = _14612 ^ ((_14612 << 7u) & 2636928640u);
                        uint _14618 = _14615 ^ ((_14615 << 15u) & 4022730752u);
                        uint _14620 = _14618 ^ (_14618 >> 18u);
                        float _22454;
                        _22454 = _22314;
                        uint _14637;
                        uint _14656;
                        float _14662;
                        uint _22453 = 0u;
                        uint _22709 = _14620;
                        for (;;)
                        {
                            if (!(_22453 < 1u))
                            {
                                break;
                            }
                            uint _14648 = _22709 + (_22709 << 10u);
                            uint _14650 = _14648 ^ (_14648 >> 6u);
                            uint _14652 = _14650 + (_14650 << 3u);
                            uint _14654 = _14652 ^ (_14652 >> 11u);
                            _14656 = _14654 + (_14654 << 15u);
                            _14662 = uintBitsToFloat((_22709 & 8388607u) | 1065353216u) - 1.0;
                            _14637 = _22453 + 1u;
                            _22709 = _14656;
                            _22454 = _14662;
                            _22453 = _14637;
                            continue;
                        }
                        uvec2 _14411 = uvec2(_14386 + ivec2(1));
                        uint _14666 = _14411.y;
                        uint _14672 = _14666 + (_14666 << 10u);
                        uint _14674 = _14672 ^ (_14672 >> 6u);
                        uint _14676 = _14674 + (_14674 << 3u);
                        uint _14678 = _14676 ^ (_14676 >> 11u);
                        uint _14686 = (((_14411.x * 1664525u) + (_14678 + (_14678 << 15u))) + 1013904223u) * 1664525u;
                        uint _14688 = _14686 ^ (_14686 >> 11u);
                        uint _14691 = _14688 ^ ((_14688 << 7u) & 2636928640u);
                        uint _14694 = _14691 ^ ((_14691 << 15u) & 4022730752u);
                        uint _14696 = _14694 ^ (_14694 >> 18u);
                        float _22603;
                        _22603 = _22463;
                        uint _14713;
                        uint _14732;
                        float _14738;
                        uint _22602 = 0u;
                        uint _22708 = _14696;
                        for (;;)
                        {
                            if (!(_22602 < 1u))
                            {
                                break;
                            }
                            uint _14724 = _22708 + (_22708 << 10u);
                            uint _14726 = _14724 ^ (_14724 >> 6u);
                            uint _14728 = _14726 + (_14726 << 3u);
                            uint _14730 = _14728 ^ (_14728 >> 11u);
                            _14732 = _14730 + (_14730 << 15u);
                            _14738 = uintBitsToFloat((_22708 & 8388607u) | 1065353216u) - 1.0;
                            _14713 = _22602 + 1u;
                            _22708 = _14732;
                            _22603 = _14738;
                            _22602 = _14713;
                            continue;
                        }
                        vec2 _14744 = (_14387 * _14387) * (vec2(3.0) - (vec2(2.0) * _14387));
                        float _14419 = _14744.x;
                        float _14420 = 1.0 - _14419;
                        float _14422 = _14744.y;
                        _24608 = _22603;
                        _24523 = _22454;
                        _24437 = _22306;
                        _24350 = _22159;
                        _22614 = (((_22611 * mix(0.5, 1.0, (((1.0 - _14422) * ((_22159 * _14420) + (_22306 * _14419))) + ((_22454 * _14420) * _14422)) + ((_22603 * _14419) * _14422))) * reservoir[_21677].W) * _24824) * frame_constants.ev_mult;
                    }
                    else
                    {
                        _24608 = _22463;
                        _24523 = _22314;
                        _24437 = _22166;
                        _24350 = _22019;
                        _22614 = vec3(0.0);
                    }
                    _24607 = _24608;
                    _24522 = _24523;
                    _24436 = _24437;
                    _24349 = _24350;
                    _24196 = _21696 + _22614;
                }
                else
                {
                    _24607 = _22463;
                    _24522 = _22314;
                    _24436 = _22166;
                    _24349 = _22019;
                    _24196 = _21696;
                }
                ridx_3 = _21677 + 1u;
                _22463 = _24607;
                _22314 = _24522;
                _22166 = _24436;
                _22019 = _24349;
                _21696 = _24196;
                _21677 = ridx_3;
                continue;
            }
            _21694 = _21696;
        }
        else
        {
            vec3 _21695;
            if (2u == _24825)
            {
                uint _5441 = light_indirection_grid._member0[_10452] & 1048575u;
                uint _5444 = min(64u, cell_light_count);
                vec3 _21538;
                _21538 = result;
                vec3 result_1;
                uint slot_idx;
                float _23910;
                float _23970;
                float _24029;
                float _24087;
                uint _20649 = 0u;
                float _20975;
                float _21113;
                float _21252;
                float _21392;
                for (;;)
                {
                    if (!(_20649 < _5444))
                    {
                        break;
                    }
                    uint _5451 = _5441 + _20649;
                    vec2 _10597 = unpackHalf2x16(lantern_buf_1._member0[grid_light_indices_1._member0[_5451]].intensity_color_id);
                    float _10598 = _10597.x;
                    uint _10603 = lantern_buf_1._member0[grid_light_indices_1._member0[_5451]].intensity_color_id >> uint(16);
                    vec3 _10617 = lantern_buf_1._member0[grid_light_indices_1._member0[_5451]].position.xyz - _5802;
                    float _10618 = length(_10617);
                    float _10619 = dot(_10617, _10617);
                    vec3 _10626 = _10617 + vec3(0.0, 0.1500000059604644775390625, 0.0);
                    vec3 _10632 = vec3(_10618);
                    vec3 _20653;
                    do
                    {
                        if (_10603 == 0u)
                        {
                            _20653 = vec3(1.0, 0.800000011920928955078125, 0.100000001490116119384765625);
                            break;
                        }
                        else
                        {
                            if (_10603 == 1u)
                            {
                                _20653 = vec3(0.0, 0.735904157161712646484375, 3.67952060699462890625);
                                break;
                            }
                            else
                            {
                                if (_10603 == 2u)
                                {
                                    _20653 = vec3(0.20513366162776947021484375, 1.02566826343536376953125, 0.20513366162776947021484375);
                                    break;
                                }
                                else
                                {
                                    if (_10603 == 3u)
                                    {
                                        _20653 = vec3(0.85153043270111083984375, 0.56768691539764404296875, 2.8384344577789306640625);
                                        break;
                                    }
                                    else
                                    {
                                        _20653 = vec3(1.82324230670928955078125, 0.546972692012786865234375, 0.182324230670928955078125);
                                        break;
                                    }
                                    break; // unreachable workaround
                                }
                                break; // unreachable workaround
                            }
                            break; // unreachable workaround
                        }
                        break; // unreachable workaround
                    } while(false);
                    vec3 _10643 = ((_20653 * 4.0) * _10598) * ((max(0.0, dot(_5626, _10617 / _10632)) * ((1.0 / (0.3359999954700469970703125 + _10619)) * smoothstep(36.0 * _10598, 16.0 * _10598, _10619))) * smoothstep(-0.5, 0.20000000298023223876953125, (_10626 / vec3(length(_10626))).y));
                    vec3 _10727 = _10643;
                    float _20655;
                    _20655 = _10643.x;
                    float _10745;
                    int _10749;
                    int _20654 = 1;
                    SPIRV_CROSS_UNROLL
                    for (;;)
                    {
                        if (!(_20654 < 3))
                        {
                            break;
                        }
                        _10745 = max(_20655, _10727[_20654]);
                        _10749 = _20654 + 1;
                        _20655 = _10745;
                        _20654 = _10749;
                        continue;
                    }
                    vec3 _21534;
                    if (_20655 > 0.0)
                    {
                        vec3 _21531;
                        if (_10618 > 0.5)
                        {
                            vec3 _10510 = _5779.xyz;
                            vec4 _10788 = (vec4((_5802 + ((_10617 * (_10618 - 0.5)) / _10632)) + (_5626 * (0.0199999995529651641845703125 * _436)), 1.0) * current_view.world_to_view) * current_view.view_to_sample;
                            vec3 _10792 = _10788.xyz / vec3(_10788.w);
                            vec4 _10814 = vec4(_10510, 1.0) + (vec4(_10792 - _10510, 0.0) * float(int(sign(_10792.z))));
                            float _10815 = _10814.w;
                            vec3 _10828 = (_10814 / vec4(float((_10815 >= 0.0) ? 1 : (-1)) * max(1.0000000133514319600180897396058e-10, abs(_10815)))).xyz;
                            vec3 _10830 = _10828 - _10510;
                            vec3 _10836 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), lessThan(_10830, vec3(0.0))) - _10510) / _10830;
                            vec3 _10843 = _10510 + (_10830 * max(0.0, max(_10836.x, _10836.y)));
                            vec3 _10844 = _10828 - _10843;
                            vec3 _10849 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), greaterThanEqual(_10844, vec3(0.0))) - _10843) / _10844;
                            vec3 _10864 = _10843 + (_10844 * min(1.0, min(min(_10849.x, _10849.y), _10849.z)));
                            float _20964;
                            float _20965;
                            bool _20966;
                            do
                            {
                                float _10934 = 0.800000011920928955078125 * current_view.clip_to_view[3].z;
                                uint _10950 = uint(int(max(2u, min(4u, uint(int(floor(length((((_10864.xy * vec2(0.5, -0.5)) + vec2(0.5)) - ((_10843.xy * vec2(0.5, -0.5)) + vec2(0.5))) * _587))))))));
                                float _20686;
                                bool _20805;
                                float _20806;
                                float _20808;
                                float _20827;
                                float _20846;
                                do
                                {
                                    vec3 _11102 = _10864 - _10843;
                                    float _11111 = float(_10950);
                                    float _20660;
                                    do
                                    {
                                        if (_10864.z > 9.5367431640625e-07)
                                        {
                                            _20660 = _11111;
                                            break;
                                        }
                                        else
                                        {
                                            _20660 = max(1.0, _11111 - 1.0);
                                            break;
                                        }
                                        break; // unreachable workaround
                                    } while(false);
                                    float _11121 = 1.0 / _20660;
                                    bool _20696;
                                    float _20702;
                                    float _20706;
                                    float _20710;
                                    float _20718;
                                    if (_10950 > 0u)
                                    {
                                        float _11131 = mix(0.0, 1.0, pow(_8714 * _11121, 1.0));
                                        vec3 _11134 = _10843 + (_11102 * vec3(_11131));
                                        vec2 _11350 = (_11134.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                        float _11282 = 1.0 / _11134.z;
                                        float _11289 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _11350, 0.0).x;
                                        float _11296 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _11350, 0.0).x;
                                        float _11308 = (max(_11289, _11296) * 1.00000202655792236328125) - _11282;
                                        float _11312 = _11282 - min(_11289, _11296);
                                        bool _24827 = (_11308 < 0.0) ? (_11312 < _10934) : false;
                                        float _20687;
                                        bool _20697;
                                        float _20703;
                                        float _20707;
                                        float _20711;
                                        float _20719;
                                        if (_24827)
                                        {
                                            _20719 = _11308;
                                            _20711 = _11312;
                                            _20707 = _10934;
                                            _20703 = _11131;
                                            _20697 = _24827;
                                            _20687 = 0.0;
                                        }
                                        else
                                        {
                                            float _20689;
                                            _20689 = _11131;
                                            float _11160;
                                            uint _11178;
                                            bool _24828;
                                            bool _20698;
                                            float _20704;
                                            float _20708;
                                            float _20712;
                                            float _20720;
                                            uint _20670 = 1u;
                                            bool _20699 = _24827;
                                            for (;;)
                                            {
                                                if (!(_20670 < _10950))
                                                {
                                                    _20720 = 0.0;
                                                    _20712 = 0.0;
                                                    _20708 = 0.0;
                                                    _20704 = 1.0;
                                                    _20698 = _20699;
                                                    break;
                                                }
                                                _11160 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_20670) + _8714) * _11121, 1.0)));
                                                vec3 _11163 = _10843 + (_11102 * vec3(_11160));
                                                vec2 _11492 = (_11163.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                                float _11424 = 1.0 / _11163.z;
                                                float _11431 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _11492, 0.0).x;
                                                float _11438 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _11492, 0.0).x;
                                                float _11450 = (max(_11431, _11438) * 1.00000202655792236328125) - _11424;
                                                float _11454 = _11424 - min(_11431, _11438);
                                                _24828 = (_11450 < 0.0) ? (_11454 < _10934) : false;
                                                if (_24828)
                                                {
                                                    _20720 = _11450;
                                                    _20712 = _11454;
                                                    _20708 = _10934;
                                                    _20704 = _11160;
                                                    _20698 = _24828;
                                                    break;
                                                }
                                                _11178 = _20670 + 1u;
                                                _20670 = _11178;
                                                _20699 = _24828;
                                                _20689 = _11160;
                                                continue;
                                            }
                                            _20719 = _20720;
                                            _20711 = _20712;
                                            _20707 = _20708;
                                            _20703 = _20704;
                                            _20697 = _20698;
                                            _20687 = _20689;
                                        }
                                        _20718 = _20719;
                                        _20710 = _20711;
                                        _20706 = _20707;
                                        _20702 = _20703;
                                        _20696 = _20697;
                                        _20686 = _20687;
                                    }
                                    else
                                    {
                                        _20718 = 0.0;
                                        _20710 = 0.0;
                                        _20706 = 0.0;
                                        _20702 = 1.0;
                                        _20696 = false;
                                        _20686 = 0.0;
                                    }
                                    if (_20696)
                                    {
                                        _20846 = _20718;
                                        _20827 = _20706;
                                        _20808 = _20710;
                                        _20806 = _20702;
                                        _20805 = true;
                                        break;
                                    }
                                    else
                                    {
                                        _20846 = _11035.base._distance;
                                        _20827 = _11035.thickness;
                                        _20808 = _11035.penetration;
                                        _20806 = _20686;
                                        _20805 = false;
                                        break;
                                    }
                                    break; // unreachable workaround
                                } while(false);
                                bool _20865;
                                if (_20805)
                                {
                                    bool _20867;
                                    if (_20808 < _20827)
                                    {
                                        _20867 = _20846 < _20827;
                                    }
                                    else
                                    {
                                        _20867 = false;
                                    }
                                    _20865 = _20867;
                                }
                                else
                                {
                                    _20865 = false;
                                }
                                if (_20865)
                                {
                                    _20966 = true;
                                    _20965 = _20806;
                                    _20964 = _20808 / current_view.clip_to_view[3].z;
                                    break;
                                }
                                _20966 = false;
                                _20965 = _20686;
                                _20964 = 0.0;
                                break;
                            } while(false);
                            vec3 _21532;
                            if (_20966)
                            {
                                vec4 _11866 = (vec4(mix(_10843, _10864, vec3(_20965)), 1.0) * current_view.sample_to_view) * current_view.view_to_world;
                                vec3 _10532 = ((_11866.xyz / vec3(_11866.w)) + (wo * _20964)) - lantern_buf_1._member0[grid_light_indices_1._member0[_5451]].position.xyz;
                                bool _20967;
                                if (abs(_10532.y) > 0.5)
                                {
                                    _20967 = true;
                                }
                                else
                                {
                                    vec2 _10537 = _10532.xz;
                                    _20967 = dot(_10537, _10537) > 0.136900007724761962890625;
                                }
                                _21532 = mix(_10643, vec3(0.0), bvec3(_20967));
                            }
                            else
                            {
                                _21532 = _10643;
                            }
                            _21531 = _21532;
                        }
                        else
                        {
                            _21531 = _10643;
                        }
                        vec2 _10564 = vec2((float(frame_constants.game_time_sec) + frame_constants.game_time_frac) * 4.0, float(grid_light_indices_1._member0[_5451] * 10u));
                        ivec2 _12090 = ivec2(floor(_10564));
                        vec2 _12091 = fract(_10564);
                        uvec2 _12092 = uvec2(_12090);
                        uint _12142 = _12092.y;
                        uint _12148 = _12142 + (_12142 << 10u);
                        uint _12150 = _12148 ^ (_12148 >> 6u);
                        uint _12152 = _12150 + (_12150 << 3u);
                        uint _12154 = _12152 ^ (_12152 >> 11u);
                        uint _12162 = (((_12092.x * 1664525u) + (_12154 + (_12154 << 15u))) + 1013904223u) * 1664525u;
                        uint _12164 = _12162 ^ (_12162 >> 11u);
                        uint _12167 = _12164 ^ ((_12164 << 7u) & 2636928640u);
                        uint _12170 = _12167 ^ ((_12167 << 15u) & 4022730752u);
                        uint _12172 = _12170 ^ (_12170 >> 18u);
                        float _21106;
                        _21106 = _20975;
                        uint _12189;
                        uint _12208;
                        float _12214;
                        uint _21105 = 0u;
                        uint _21631 = _12172;
                        for (;;)
                        {
                            if (!(_21105 < 1u))
                            {
                                break;
                            }
                            uint _12200 = _21631 + (_21631 << 10u);
                            uint _12202 = _12200 ^ (_12200 >> 6u);
                            uint _12204 = _12202 + (_12202 << 3u);
                            uint _12206 = _12204 ^ (_12204 >> 11u);
                            _12208 = _12206 + (_12206 << 15u);
                            _12214 = uintBitsToFloat((_21631 & 8388607u) | 1065353216u) - 1.0;
                            _12189 = _21105 + 1u;
                            _21631 = _12208;
                            _21106 = _12214;
                            _21105 = _12189;
                            continue;
                        }
                        uvec2 _12100 = uvec2(_12090 + ivec2(1, 0));
                        uint _12218 = _12100.y;
                        uint _12224 = _12218 + (_12218 << 10u);
                        uint _12226 = _12224 ^ (_12224 >> 6u);
                        uint _12228 = _12226 + (_12226 << 3u);
                        uint _12230 = _12228 ^ (_12228 >> 11u);
                        uint _12238 = (((_12100.x * 1664525u) + (_12230 + (_12230 << 15u))) + 1013904223u) * 1664525u;
                        uint _12240 = _12238 ^ (_12238 >> 11u);
                        uint _12243 = _12240 ^ ((_12240 << 7u) & 2636928640u);
                        uint _12246 = _12243 ^ ((_12243 << 15u) & 4022730752u);
                        uint _12248 = _12246 ^ (_12246 >> 18u);
                        float _21244;
                        _21244 = _21113;
                        uint _12265;
                        uint _12284;
                        float _12290;
                        uint _21243 = 0u;
                        uint _21630 = _12248;
                        for (;;)
                        {
                            if (!(_21243 < 1u))
                            {
                                break;
                            }
                            uint _12276 = _21630 + (_21630 << 10u);
                            uint _12278 = _12276 ^ (_12276 >> 6u);
                            uint _12280 = _12278 + (_12278 << 3u);
                            uint _12282 = _12280 ^ (_12280 >> 11u);
                            _12284 = _12282 + (_12282 << 15u);
                            _12290 = uintBitsToFloat((_21630 & 8388607u) | 1065353216u) - 1.0;
                            _12265 = _21243 + 1u;
                            _21630 = _12284;
                            _21244 = _12290;
                            _21243 = _12265;
                            continue;
                        }
                        uvec2 _12107 = uvec2(_12090 + ivec2(0, 1));
                        uint _12294 = _12107.y;
                        uint _12300 = _12294 + (_12294 << 10u);
                        uint _12302 = _12300 ^ (_12300 >> 6u);
                        uint _12304 = _12302 + (_12302 << 3u);
                        uint _12306 = _12304 ^ (_12304 >> 11u);
                        uint _12314 = (((_12107.x * 1664525u) + (_12306 + (_12306 << 15u))) + 1013904223u) * 1664525u;
                        uint _12316 = _12314 ^ (_12314 >> 11u);
                        uint _12319 = _12316 ^ ((_12316 << 7u) & 2636928640u);
                        uint _12322 = _12319 ^ ((_12319 << 15u) & 4022730752u);
                        uint _12324 = _12322 ^ (_12322 >> 18u);
                        float _21383;
                        _21383 = _21252;
                        uint _12341;
                        uint _12360;
                        float _12366;
                        uint _21382 = 0u;
                        uint _21629 = _12324;
                        for (;;)
                        {
                            if (!(_21382 < 1u))
                            {
                                break;
                            }
                            uint _12352 = _21629 + (_21629 << 10u);
                            uint _12354 = _12352 ^ (_12352 >> 6u);
                            uint _12356 = _12354 + (_12354 << 3u);
                            uint _12358 = _12356 ^ (_12356 >> 11u);
                            _12360 = _12358 + (_12358 << 15u);
                            _12366 = uintBitsToFloat((_21629 & 8388607u) | 1065353216u) - 1.0;
                            _12341 = _21382 + 1u;
                            _21629 = _12360;
                            _21383 = _12366;
                            _21382 = _12341;
                            continue;
                        }
                        uvec2 _12115 = uvec2(_12090 + ivec2(1));
                        uint _12370 = _12115.y;
                        uint _12376 = _12370 + (_12370 << 10u);
                        uint _12378 = _12376 ^ (_12376 >> 6u);
                        uint _12380 = _12378 + (_12378 << 3u);
                        uint _12382 = _12380 ^ (_12380 >> 11u);
                        uint _12390 = (((_12115.x * 1664525u) + (_12382 + (_12382 << 15u))) + 1013904223u) * 1664525u;
                        uint _12392 = _12390 ^ (_12390 >> 11u);
                        uint _12395 = _12392 ^ ((_12392 << 7u) & 2636928640u);
                        uint _12398 = _12395 ^ ((_12395 << 15u) & 4022730752u);
                        uint _12400 = _12398 ^ (_12398 >> 18u);
                        float _21523;
                        _21523 = _21392;
                        uint _12417;
                        uint _12436;
                        float _12442;
                        uint _21522 = 0u;
                        uint _21628 = _12400;
                        for (;;)
                        {
                            if (!(_21522 < 1u))
                            {
                                break;
                            }
                            uint _12428 = _21628 + (_21628 << 10u);
                            uint _12430 = _12428 ^ (_12428 >> 6u);
                            uint _12432 = _12430 + (_12430 << 3u);
                            uint _12434 = _12432 ^ (_12432 >> 11u);
                            _12436 = _12434 + (_12434 << 15u);
                            _12442 = uintBitsToFloat((_21628 & 8388607u) | 1065353216u) - 1.0;
                            _12417 = _21522 + 1u;
                            _21628 = _12436;
                            _21523 = _12442;
                            _21522 = _12417;
                            continue;
                        }
                        vec2 _12448 = (_12091 * _12091) * (vec2(3.0) - (vec2(2.0) * _12091));
                        float _12123 = _12448.x;
                        float _12124 = 1.0 - _12123;
                        float _12126 = _12448.y;
                        _24087 = _21523;
                        _24029 = _21383;
                        _23970 = _21244;
                        _23910 = _21106;
                        _21534 = (((_21531 * mix(0.5, 1.0, (((1.0 - _12126) * ((_21106 * _12124) + (_21244 * _12123))) + ((_21383 * _12124) * _12126)) + ((_21523 * _12123) * _12126))) * 1.0) * _24824) * frame_constants.ev_mult;
                    }
                    else
                    {
                        _24087 = _21392;
                        _24029 = _21252;
                        _23970 = _21113;
                        _23910 = _20975;
                        _21534 = vec3(0.0);
                    }
                    result_1 = _21538 + _21534;
                    slot_idx = _20649 + 1u;
                    _21538 = result_1;
                    _21392 = _24087;
                    _21252 = _24029;
                    _21113 = _23970;
                    _20975 = _23910;
                    _20649 = slot_idx;
                    continue;
                }
                _21695 = _21538;
            }
            else
            {
                _21695 = result;
            }
            _21694 = _21695;
        }
        _21693 = _21694;
    }
    else
    {
        _21693 = result;
    }
    vec3 _21691;
    if ((frame_constants.render_overrides & 4u) != 0u)
    {
        _21691 = _24824;
    }
    else
    {
        vec3 _21692;
        if ((frame_constants.render_overrides & 8u) != 0u)
        {
            vec3 _5507 = (_5747 * 0.5) + vec3(0.5);
            _21692 = _5507 * _5507;
        }
        else
        {
            _21692 = _21693;
        }
        _21691 = _21692;
    }
    entryPointParam_ps_main_color = vec4(_21691, 0.0);
}

