#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_samplerless_texture_functions : require
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
#extension GL_KHR_shader_subgroup_vote : require
#extension GL_KHR_shader_subgroup_quad : require

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

float _19234;
uvec4 _22713;
float _22714;
DistanceWithPenetration _6359;
DistanceWithPenetration _8346;
DistanceWithPenetration _10319;
DistanceWithPenetration _12614;

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
    ivec2 _335 = ivec2(gl_FragCoord.xy);
    uvec2 _337 = uvec2(_335);
    vec4 _5758 = ((texelFetch(blue_noise_textures_uniform01, ivec2((_337 + uvec2(fract((vec2(0.75487768650054931640625, 0.56984031200408935546875) * float(frame_counter.index)) + vec2(0.5)) * vec2(256.0))) % uvec2(256u)), 0) * 255.0) * vec4(0.00390625)) + vec4(0.001953125);
    float _415 = fract(fract(52.98291778564453125 * fract((0.067110560834407806396484375 * float(_337.x)) + (0.005837149918079376220703125 * float(_337.y)))) + (float(frame_counter.index % 4u) * 0.25));
    uvec4 sampled = texelFetch(gbuffer_tex, ivec2(_337), 0);
    vec4 sampled_1 = texelFetch(depth_tex, ivec2(_337), 0);
    float _427 = sampled_1.x;
    uint _5779 = sampled.x;
    float _5868 = float((_5779 >> uint(24)) & 255u) * 0.0039215688593685626983642578125;
    uint _5781 = sampled.y;
    vec3 _5788 = normalize((vec4(float(_5779 & 255u) * 0.0039215688593685626983642578125, float((_5779 >> uint(8)) & 255u) * 0.0039215688593685626983642578125, float((_5779 >> uint(16)) & 255u) * 0.0039215688593685626983642578125, _5868).xyz * 2.0) - vec3(1.0));
    vec3 _5792 = vec4(float(_5781 & 255u) * 0.0039215688593685626983642578125, float((_5781 >> uint(8)) & 255u) * 0.0039215688593685626983642578125, float((_5781 >> uint(16)) & 255u) * 0.0039215688593685626983642578125, _22714).xyz;
    uint _5794 = _5781 >> 24u;
    bool _5798 = (_5794 & 1u) != 0u;
    bool _5802 = ((_5794 >> 1u) & 1u) != 0u;
    bool _5822 = ((_5794 >> 6u) & 1u) != 0u;
    vec2 _568 = vec2(globalParams.depth_tex_dims);
    vec2 _5923 = (vec2(_335) + vec2(0.5)) / _568;
    vec2 _5954 = (_5923 - vec2(0.5)) * vec2(2.0, -2.0);
    vec4 _5945 = vec4(_5954, _427, 1.0);
    vec4 _5947 = _5945 * current_view.sample_to_view;
    vec4 _5949 = _5947 * current_view.view_to_world;
    vec3 _5960 = normalize(((vec4(_5954, 0.0, 1.0) * current_view.sample_to_view) * current_view.view_to_world).xyz);
    vec3 wo = -_5960;
    vec3 _5968 = _5949.xyz / vec3(_5949.w);
    float _674 = clamp(0.100000001490116119384765625 + textureLod(sampler2D(ssgi_tex, samplers_nnc), _5923, 0.0).x, 0.0, 1.0);
    vec2 _5976 = _5968.xz;
    vec2 _6006 = _5976 * vec2(0.0076923076994717121124267578125);
    vec2 _6007 = _6006 * 0.5;
    float _5982 = max(0.00999999977648258209228515625, frame_constants.ground_fog.y);
    vec2 _6055 = (_5976 * vec2(0.001000000047497451305389404296875)) + vec2(0.5);
    float _5985 = _5968.y - (textureLod(nonuniformEXT(sampler2D(resource_handles[terrain_heightmap.bg_terrain_fog_height.bindless_handle], samplers_lnc_iso)), vec2(_6055.y, 1.0 - _6055.x), 0.0).x + (40.0 * frame_constants.ground_fog.x));
    float _5991 = 1.0 + (_5982 * max(0.0, _5985));
    bool _18441;
    if (_5798)
    {
        _18441 = texelFetch(shadows_screen_shadows_tex, ivec2(_337), 0).x > 0.0500000007450580596923828125;
    }
    else
    {
        _18441 = false;
    }
    float _18755;
    if (_18441)
    {
        vec3 _942 = _5945.xyz;
        vec4 _6112 = (vec4(_5968 + (frame_constants.dir_to_primary_directional_light * 0.300000011920928955078125), 1.0) * current_view.world_to_view) * current_view.view_to_sample;
        vec3 _6116 = _6112.xyz / vec3(_6112.w);
        vec4 _6138 = vec4(_942, 1.0) + (vec4(_6116 - _942, 0.0) * float(int(sign(_6116.z))));
        float _6139 = _6138.w;
        vec3 _6152 = (_6138 / vec4(float((_6139 >= 0.0) ? 1 : (-1)) * max(1.0000000133514319600180897396058e-10, abs(_6139)))).xyz;
        vec3 _6154 = _6152 - _942;
        vec3 _6160 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), lessThan(_6154, vec3(0.0))) - _942) / _6154;
        vec3 _6167 = _942 + (_6154 * max(0.0, max(_6160.x, _6160.y)));
        vec3 _6168 = _6152 - _6167;
        vec3 _6173 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), greaterThanEqual(_6168, vec3(0.0))) - _6167) / _6168;
        vec3 _6188 = _6167 + (_6168 * min(1.0, min(min(_6173.x, _6173.y), _6173.z)));
        float _18750;
        vec2 _18751;
        bool _18752;
        do
        {
            vec2 _6345 = (_6167.xy * vec2(0.5, -0.5)) + vec2(0.5);
            vec2 _6349 = (_6188.xy * vec2(0.5, -0.5)) + vec2(0.5);
            float _6258 = 0.5 * current_view.clip_to_view[3].z;
            uint _6274 = uint(int(max(2u, min(3u, uint(int(floor(length((_6349 - _6345) * _568))))))));
            float _18472;
            bool _18591;
            float _18592;
            float _18594;
            float _18613;
            float _18632;
            do
            {
                vec3 _6426 = _6188 - _6167;
                float _6435 = float(_6274);
                float _18446;
                do
                {
                    if (_6188.z > 9.5367431640625e-07)
                    {
                        _18446 = _6435;
                        break;
                    }
                    else
                    {
                        _18446 = max(1.0, _6435 - 1.0);
                        break;
                    }
                    break; // unreachable workaround
                } while(false);
                float _6445 = 1.0 / _18446;
                bool _18482;
                float _18488;
                float _18492;
                float _18496;
                float _18504;
                if (_6274 > 0u)
                {
                    float _6455 = mix(0.0, 1.0, pow(_415 * _6445, 1.0));
                    vec3 _6458 = _6167 + (_6426 * vec3(_6455));
                    vec2 _6674 = (_6458.xy * vec2(0.5, -0.5)) + vec2(0.5);
                    float _6606 = 1.0 / _6458.z;
                    float _6613 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _6674, 0.0).x;
                    float _6620 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _6674, 0.0).x;
                    float _6632 = (max(_6613, _6620) * 1.00000202655792236328125) - _6606;
                    float _6636 = _6606 - min(_6613, _6620);
                    bool _22717 = (_6632 < 0.0) ? (_6636 < _6258) : false;
                    float _18473;
                    bool _18483;
                    float _18489;
                    float _18493;
                    float _18497;
                    float _18505;
                    if (_22717)
                    {
                        _18505 = _6632;
                        _18497 = _6636;
                        _18493 = _6258;
                        _18489 = _6455;
                        _18483 = _22717;
                        _18473 = 0.0;
                    }
                    else
                    {
                        float _18475;
                        _18475 = _6455;
                        float _6484;
                        uint _6502;
                        bool _22718;
                        bool _18484;
                        float _18490;
                        float _18494;
                        float _18498;
                        float _18506;
                        uint _18456 = 1u;
                        bool _18485 = _22717;
                        for (;;)
                        {
                            if (!(_18456 < _6274))
                            {
                                _18506 = 0.0;
                                _18498 = 0.0;
                                _18494 = 0.0;
                                _18490 = 1.0;
                                _18484 = _18485;
                                break;
                            }
                            _6484 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_18456) + _415) * _6445, 1.0)));
                            vec3 _6487 = _6167 + (_6426 * vec3(_6484));
                            vec2 _6816 = (_6487.xy * vec2(0.5, -0.5)) + vec2(0.5);
                            float _6748 = 1.0 / _6487.z;
                            float _6755 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _6816, 0.0).x;
                            float _6762 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _6816, 0.0).x;
                            float _6774 = (max(_6755, _6762) * 1.00000202655792236328125) - _6748;
                            float _6778 = _6748 - min(_6755, _6762);
                            _22718 = (_6774 < 0.0) ? (_6778 < _6258) : false;
                            if (_22718)
                            {
                                _18506 = _6774;
                                _18498 = _6778;
                                _18494 = _6258;
                                _18490 = _6484;
                                _18484 = _22718;
                                break;
                            }
                            _6502 = _18456 + 1u;
                            _18456 = _6502;
                            _18485 = _22718;
                            _18475 = _6484;
                            continue;
                        }
                        _18505 = _18506;
                        _18497 = _18498;
                        _18493 = _18494;
                        _18489 = _18490;
                        _18483 = _18484;
                        _18473 = _18475;
                    }
                    _18504 = _18505;
                    _18496 = _18497;
                    _18492 = _18493;
                    _18488 = _18489;
                    _18482 = _18483;
                    _18472 = _18473;
                }
                else
                {
                    _18504 = 0.0;
                    _18496 = 0.0;
                    _18492 = 0.0;
                    _18488 = 1.0;
                    _18482 = false;
                    _18472 = 0.0;
                }
                if (_18482)
                {
                    _18632 = _18504;
                    _18613 = _18492;
                    _18594 = _18496;
                    _18592 = _18488;
                    _18591 = true;
                    break;
                }
                else
                {
                    _18632 = _6359.base._distance;
                    _18613 = _6359.thickness;
                    _18594 = _6359.penetration;
                    _18592 = _18472;
                    _18591 = false;
                    break;
                }
                break; // unreachable workaround
            } while(false);
            bool _18651;
            if (_18591)
            {
                bool _18653;
                if (_18594 < _18613)
                {
                    _18653 = _18632 < _18613;
                }
                else
                {
                    _18653 = false;
                }
                _18651 = _18653;
            }
            else
            {
                _18651 = false;
            }
            if (_18651)
            {
                _18752 = true;
                _18751 = mix(_6345, _6349, vec2(_18592));
                _18750 = _18594 / _18613;
                break;
            }
            _18752 = false;
            _18751 = mix(_6345, _6349, vec2(_18472));
            _18750 = 0.0;
            break;
        } while(false);
        float _18754;
        if (_18752)
        {
            vec4 _1938 = textureGather(sampler2D(half_depth_tex, samplers_lnc), _18751);
            _18754 = (((floatBitsToUint(max(max(_1938.x, _1938.y), max(_1938.z, _1938.w))) & 1u) != 0u) ? 0.0 : 1.0) * smoothstep(1.0, 0.5, _18750);
        }
        else
        {
            _18754 = 0.0;
        }
        _18755 = _18754;
    }
    else
    {
        _18755 = 0.0;
    }
    vec3 _22721 = mix(_5792 * _5792, vec3(0.5), bvec3((frame_constants.render_overrides & 1u) != 0u));
    vec3 _7340 = normalize(_5788);
    float _7346 = clamp(dot(_7340, frame_constants.dir_to_primary_directional_light), 0.0, 1.0);
    float _7350 = clamp(dot(frame_constants.dir_to_primary_directional_light, normalize(frame_constants.dir_to_primary_directional_light + wo)), 0.0, 1.0);
    float _7367 = _5868 * _5868;
    float _18794;
    if (_5822)
    {
        _18794 = 0.20000000298023223876953125 + (_7346 * 0.60000002384185791015625);
    }
    else
    {
        _18794 = _7346;
    }
    float _7392 = (((2.0 * _7367) * _7350) * _7350) + (-0.5);
    float _7393 = 1.0 - _18794;
    float _7406 = 1.0 - max(dot(_7340, wo), 9.9999997473787516355514526367188e-05);
    vec3 _18798;
    do
    {
        float _7486 = dot(_5788, frame_constants.dir_to_primary_directional_light);
        bool _18797;
        if (_7486 <= 0.0)
        {
            _18797 = true;
        }
        else
        {
            _18797 = dot(_5788, wo) <= 0.0;
        }
        if (_18797)
        {
            _18798 = vec3(0.0);
            break;
        }
        float _7446 = _7367 * _7367;
        vec3 _7448 = normalize(wo + frame_constants.dir_to_primary_directional_light);
        float _7504 = dot(_5788, _7448);
        float _7525 = dot(_5788, wo);
        float _7546 = ((_7504 * _7504) * (_7446 - 1.0)) + 1.0;
        _18798 = ((mix(vec3(0.039999999105930328369140625), vec3(1.0), vec3(pow(max(0.0, 1.0 - dot(_7448, frame_constants.dir_to_primary_directional_light)), 5.0))) * (((2.0 * _7486) * _7525) / ((_7486 * sqrt(((((-_7525) * _7446) + _7525) * _7525) + _7446)) + (_7525 * sqrt(((((-_7486) * _7446) + _7486) * _7486) + _7446))))) * (_7446 / ((3.1415927410125732421875 * _7546) * _7546))) / vec3((4.0 * _7525) * _7486);
        break;
    } while(false);
    vec3 _7617 = (((frame_constants.sun_color.xyz * exp(-((((0.00999999977648258209228515625 * frame_constants.fog_relative_extinction) * ((3.2200000286102294921875 * exp2(-dot(_6007, _6007))) * frame_constants.ground_fog.z)) * ((1.0 / ((2.0 * _5982) * (_5991 * _5991))) + max(0.0, -_5985))) / max(0.0500000007450580596923828125, frame_constants.dir_to_primary_directional_light.y)))) * ((_22721 * (((1.0 + (_7392 * ((((_7393 * _7393) * _7393) * _7393) * _7393))) * (1.0 + (_7392 * ((((_7406 * _7406) * _7406) * _7406) * _7406)))) * 0.3183098733425140380859375)) + _18798)) * _18794) * 1.0;
    vec3 _18807;
    if (((_5794 >> 2u) & 1u) != 0u)
    {
        _18807 = _7617 * ((1.0 - _18755) * texelFetch(shadows_screen_shadows_tex, ivec2(_337), 0).x);
    }
    else
    {
        _18807 = _7617;
    }
    vec3 _18808;
    if (((_5794 >> 5u) & 1u) != 0u)
    {
        _18808 = _18807 * mix(0.60000002384185791015625, 1.0, _674);
    }
    else
    {
        _18808 = _18807;
    }
    vec3 _18819;
    SPIRV_CROSS_BRANCH
    if (((_5794 >> 4u) & 1u) != 0u)
    {
        vec3 _18816;
        do
        {
            bool _18815;
            if (abs(_5968.x) > 65.0)
            {
                _18815 = true;
            }
            else
            {
                _18815 = abs(_5968.z) > 65.0;
            }
            if (_18815)
            {
                _18816 = vec3(0.0);
                break;
            }
            _18816 = color_library_data.terrain_highlight.xyz * textureLod(sampler2D(highlight_active_terrain_highlight_active_hill, samplers_lnc_iso), _6006 + vec2(0.5), 0.0).x;
            break;
        } while(false);
        _18819 = _18808 + _18816;
    }
    else
    {
        _18819 = _18808;
    }
    vec3 _18820;
    if (((_5794 >> 3u) & 1u) != 0u)
    {
        _18820 = _18819 + ((frame_constants.editing_highlight_color * dot(frame_constants.sky_high_color.xyz, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875))) * 2.0);
    }
    else
    {
        _18820 = _18819;
    }
    vec4 _16417[3] = vec4[](vec4(0.0), vec4(0.0), vec4(0.0));
    float _7702 = _5758.x;
    uint _7706 = uint((_7702 * 3.0) + 0.5) & 3u;
    float _18822;
    _18822 = 0.0;
    float _7769;
    uint _7773;
    uint _18821 = 0u;
    for (;;)
    {
        if (!(_18821 < 3u))
        {
            break;
        }
        uvec2 _7726 = (_337 / uvec2(2u)) + uvec2(spatial_resolve_offsets.values.data[(_7706 * 16u) + _18821].xy);
        float _7736 = exp2(-min(30.0, 80.0 * abs(1.0 - (texelFetch(half_depth_tex, ivec2(_7726), 0).x / _427))));
        uint _7765;
        uint _21224 = 0u;
        for (;;)
        {
            if (!(_21224 < 3u))
            {
                break;
            }
            _16417[_21224] += (texelFetch(indirect_radiance_tex, ivec2(_7726 + uvec2((_21224 * globalParams.indirect_radiance_tex_dims.x) / 3u, 0u)), 0) * _7736);
            _7765 = _21224 + 1u;
            _21224 = _7765;
            continue;
        }
        _7769 = _18822 + _7736;
        _7773 = _18821 + 1u;
        _18822 = _7769;
        _18821 = _7773;
        continue;
    }
    float _18824;
    if (_18822 < 0.001000000047497451305389404296875)
    {
        float _18825;
        _18825 = _18822;
        float _7842;
        uint _7846;
        uint _18823 = 3u;
        for (;;)
        {
            if (!(_18823 < 6u))
            {
                break;
            }
            uvec2 _7799 = (_337 / uvec2(2u)) + uvec2(spatial_resolve_offsets.values.data[(_7706 * 16u) + _18823].xy);
            float _7809 = exp2(-min(30.0, 80.0 * abs(1.0 - (texelFetch(half_depth_tex, ivec2(_7799), 0).x / _427))));
            uint _7838;
            uint _21221 = 0u;
            for (;;)
            {
                if (!(_21221 < 3u))
                {
                    break;
                }
                _16417[_21221] += (texelFetch(indirect_radiance_tex, ivec2(_7799 + uvec2((_21221 * globalParams.indirect_radiance_tex_dims.x) / 3u, 0u)), 0) * _7809);
                _7838 = _21221 + 1u;
                _21221 = _7838;
                continue;
            }
            _7842 = _18825 + _7809;
            _7846 = _18823 + 1u;
            _18825 = _7842;
            _18823 = _7846;
            continue;
        }
        _18824 = _18825;
    }
    else
    {
        _18824 = _18822;
    }
    float _7854 = 1.0 / max(9.9999997473787516355514526367188e-05, _18824);
    _16417[0] *= _7854;
    _16417[1] *= _7854;
    _16417[2] *= _7854;
    vec3 _7881 = (_16417[0].yzw + _16417[1].yzw) + _16417[2].yzw;
    vec3 _7900 = vec3(_16417[0].x, _16417[1].x, _16417[2].x);
    vec3 _7906 = _16417[0].yzw / vec3(max(9.9999996826552253889678874634872e-21, _16417[0].x));
    vec3 _7911 = _16417[1].yzw / vec3(max(9.9999996826552253889678874634872e-21, _16417[1].x));
    vec3 _7916 = _16417[2].yzw / vec3(max(9.9999996826552253889678874634872e-21, _16417[2].x));
    vec3 _7927 = max(vec3(0.0), vec3(1.0) - (color_library_data.indirect_light_tint.xyz * 0.920000016689300537109375));
    vec3 _7940 = max(vec3(0.0), mix((_7927 / vec3(dot(_7927, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)))) * dot(_7900, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)), _7900, vec3(1.16999995708465576171875)) * 1.2000000476837158203125);
    vec3 _18882;
    if (any(notEqual(_7881 / vec3(max(9.9999996826552253889678874634872e-21, length(_7881))), vec3(0.0))))
    {
        float _7979 = 0.004999999888241291046142578125 / (((-0.5) / (_5947.xyz / vec3(_5947.w)).z) * current_view.view_to_clip[1].y);
        vec2 _7958[4] = vec2[](_5758.xw, _5758.yz, _5758.zy, _5758.wx);
        float _18836;
        _18836 = 0.0;
        float _8026;
        uint _8030;
        uint _18835 = 0u;
        for (;;)
        {
            if (!(_18835 < 2u))
            {
                break;
            }
            float _8050 = 1.0 - (2.0 * _7958[_18835].x);
            float _8054 = sqrt(max(0.0, 1.0 - (_8050 * _8050)));
            float _8056 = 6.283185482025146484375 * _7958[_18835].y;
            vec3 _8006 = _5945.xyz;
            vec4 _8105 = (vec4(_5968 + (normalize(vec3(cos(_8056) * _8054, sin(_8056) * _8054, _8050) + _5788) * _7979), 1.0) * current_view.world_to_view) * current_view.view_to_sample;
            vec3 _8109 = _8105.xyz / vec3(_8105.w);
            vec4 _8131 = vec4(_8006, 1.0) + (vec4(_8109 - _8006, 0.0) * float(int(sign(_8109.z))));
            float _8132 = _8131.w;
            vec3 _8145 = (_8131 / vec4(float((_8132 >= 0.0) ? 1 : (-1)) * max(1.0000000133514319600180897396058e-10, abs(_8132)))).xyz;
            vec3 _8147 = _8145 - _8006;
            vec3 _8153 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), lessThan(_8147, vec3(0.0))) - _8006) / _8147;
            vec3 _8160 = _8006 + (_8147 * max(0.0, max(_8153.x, _8153.y)));
            vec3 _8161 = _8145 - _8160;
            vec3 _8166 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), greaterThanEqual(_8161, vec3(0.0))) - _8160) / _8161;
            vec3 _8181 = _8160 + (_8161 * min(1.0, min(min(_8166.x, _8166.y), _8166.z)));
            float _21122;
            bool _21123;
            do
            {
                float _8245 = 0.300000011920928955078125 * current_view.clip_to_view[3].z;
                uint _8261 = uint(int(max(2u, min(2u, uint(int(floor(length((((_8181.xy * vec2(0.5, -0.5)) + vec2(0.5)) - ((_8160.xy * vec2(0.5, -0.5)) + vec2(0.5))) * _568))))))));
                bool _20963;
                float _20966;
                float _20985;
                float _21004;
                do
                {
                    vec3 _8413 = _8181 - _8160;
                    float _8422 = float(_8261);
                    float _20818;
                    do
                    {
                        if (_8181.z > 9.5367431640625e-07)
                        {
                            _20818 = _8422;
                            break;
                        }
                        else
                        {
                            _20818 = max(1.0, _8422 - 1.0);
                            break;
                        }
                        break; // unreachable workaround
                    } while(false);
                    float _8432 = 1.0 / _20818;
                    bool _20854;
                    float _20864;
                    float _20868;
                    float _20876;
                    if (_8261 > 0u)
                    {
                        vec3 _8445 = _8160 + (_8413 * vec3(mix(0.0, 1.0, pow(_8432, 1.0))));
                        vec2 _8661 = (_8445.xy * vec2(0.5, -0.5)) + vec2(0.5);
                        float _8593 = 1.0 / _8445.z;
                        float _8600 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _8661, 0.0).x;
                        float _8607 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _8661, 0.0).x;
                        float _8619 = (max(_8600, _8607) * 1.00000202655792236328125) - _8593;
                        float _20821;
                        do
                        {
                            vec4 _8679 = textureGather(sampler2D(half_depth_tex, samplers_lnc), _8661);
                            if ((floatBitsToUint(max(max(_8679.x, _8679.y), max(_8679.z, _8679.w))) & 1u) != 0u)
                            {
                                _20821 = current_view.clip_to_view[3].z * 0.060000002384185791015625;
                                break;
                            }
                            else
                            {
                                _20821 = _8245;
                                break;
                            }
                            break; // unreachable workaround
                        } while(false);
                        bool _22723 = (_8619 < 0.0) ? true : false;
                        bool _20855;
                        float _20865;
                        float _20869;
                        float _20877;
                        if (_22723)
                        {
                            _20877 = _8619;
                            _20869 = _8593 - min(_8600, _8607);
                            _20865 = _20821;
                            _20855 = _22723;
                        }
                        else
                        {
                            uint _8489;
                            bool _22724;
                            bool _20856;
                            float _20866;
                            float _20870;
                            float _20878;
                            uint _20828 = 1u;
                            bool _20857 = _22723;
                            for (;;)
                            {
                                if (!(_20828 < _8261))
                                {
                                    _20878 = 0.0;
                                    _20870 = 0.0;
                                    _20866 = 0.0;
                                    _20856 = _20857;
                                    break;
                                }
                                vec3 _8474 = _8160 + (_8413 * vec3(mix(0.0, 1.0, min(0.9999847412109375, pow((float(_20828) + 1.0) * _8432, 1.0)))));
                                vec2 _8803 = (_8474.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                float _8735 = 1.0 / _8474.z;
                                float _8742 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _8803, 0.0).x;
                                float _8749 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _8803, 0.0).x;
                                float _8761 = (max(_8742, _8749) * 1.00000202655792236328125) - _8735;
                                float _20831;
                                do
                                {
                                    vec4 _8821 = textureGather(sampler2D(half_depth_tex, samplers_lnc), _8803);
                                    if ((floatBitsToUint(max(max(_8821.x, _8821.y), max(_8821.z, _8821.w))) & 1u) != 0u)
                                    {
                                        _20831 = current_view.clip_to_view[3].z * 0.060000002384185791015625;
                                        break;
                                    }
                                    else
                                    {
                                        _20831 = _8245;
                                        break;
                                    }
                                    break; // unreachable workaround
                                } while(false);
                                _22724 = (_8761 < 0.0) ? true : false;
                                if (_22724)
                                {
                                    _20878 = _8761;
                                    _20870 = _8735 - min(_8742, _8749);
                                    _20866 = _20831;
                                    _20856 = _22724;
                                    break;
                                }
                                _8489 = _20828 + 1u;
                                _20828 = _8489;
                                _20857 = _22724;
                                continue;
                            }
                            _20877 = _20878;
                            _20869 = _20870;
                            _20865 = _20866;
                            _20855 = _20856;
                        }
                        _20876 = _20877;
                        _20868 = _20869;
                        _20864 = _20865;
                        _20854 = _20855;
                    }
                    else
                    {
                        _20876 = 0.0;
                        _20868 = 0.0;
                        _20864 = 0.0;
                        _20854 = false;
                    }
                    if (_20854)
                    {
                        _21004 = _20876;
                        _20985 = _20864;
                        _20966 = _20868;
                        _20963 = true;
                        break;
                    }
                    else
                    {
                        _21004 = _8346.base._distance;
                        _20985 = _8346.thickness;
                        _20966 = _8346.penetration;
                        _20963 = false;
                        break;
                    }
                    break; // unreachable workaround
                } while(false);
                bool _21023;
                if (_20963)
                {
                    bool _21025;
                    if (_20966 < _20985)
                    {
                        _21025 = _21004 < _20985;
                    }
                    else
                    {
                        _21025 = false;
                    }
                    _21023 = _21025;
                }
                else
                {
                    _21023 = false;
                }
                if (_21023)
                {
                    _21123 = true;
                    _21122 = _20966 / _20985;
                    break;
                }
                _21123 = false;
                _21122 = 0.0;
                break;
            } while(false);
            float _21157;
            do
            {
                if (_21123)
                {
                    _21157 = _21122;
                    break;
                }
                else
                {
                    _21157 = 1.0;
                    break;
                }
                break; // unreachable workaround
            } while(false);
            _8026 = _18836 + _21157;
            _8030 = _18835 + 1u;
            _18836 = _8026;
            _18835 = _8030;
            continue;
        }
        float _8036 = mix(_18836 * 0.5, 1.0, 0.4000000059604644775390625);
        bool _9185 = !_5822;
        vec3 _18865;
        if (_9185)
        {
            vec3 _15716[4] = vec3[](_7940, (-vec3(_7906.y, _7911.y, _7916.y)) * _7940, vec3(_7906.z, _7911.z, _7916.z) * _7940, (-vec3(_7906.x, _7911.x, _7916.x)) * _7940);
            vec3 _9340 = normalize(vec3(-dot(_15716[3], vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)), -dot(_15716[1], vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)), dot(_15716[2], vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875))));
            vec3 _9368 = vec3(abs(dot(vec3(-_15716[3].x, -_15716[1].x, _15716[2].x), _9340)), abs(dot(vec3(-_15716[3].y, -_15716[1].y, _15716[2].y), _9340)), abs(dot(vec3(-_15716[3].z, -_15716[1].z, _15716[2].z), _9340))) / _15716[0];
            float _9374 = dot(_9340, _5788);
            vec3 _15711[4] = vec3[](vec3(0.886227548122406005859375), vec3(1.0) * (_5788.y * (-1.02332770824432373046875)), vec3(1.0) * (_5788.z * 1.02332770824432373046875), vec3(1.0) * (_5788.x * (-1.02332770824432373046875)));
            vec3 _18859;
            _18859 = vec3(0.0);
            vec3 _9434;
            uint _9438;
            uint _18858 = 0u;
            SPIRV_CROSS_UNROLL
            for (;;)
            {
                if (!(_18858 < 4u))
                {
                    break;
                }
                _9434 = _18859 + (_15711[_18858] * _15716[_18858]);
                _9438 = _18858 + 1u;
                _18859 = _9434;
                _18858 = _9438;
                continue;
            }
            _18865 = max(vec3(0.0), _18859 + (((_15716[0] * ((_9368 * 0.07999999821186065673828125) + ((_9368 * 0.60000002384185791015625) * _9368))) * 0.25) * (0.3153915703296661376953125 * (((3.0 * _9374) * _9374) - 1.0))));
        }
        else
        {
            _18865 = _7940 * 1.7999999523162841796875;
        }
        float _18862;
        if (_5802)
        {
            _18862 = mix(_674, 1.0, 0.300000011920928955078125);
        }
        else
        {
            _18862 = 1.0;
        }
        vec4 _9492 = textureLod(sampler2D(brdf_lut_data_lut, samplers_lnc), (vec2(dot(_5788, wo), _7367) * vec2(0.984375)) + vec2(0.0078125), 0.0);
        float _9453 = _9492.x;
        float _9455 = _9492.y;
        vec3 _9457 = (vec3(0.039999999105930328369140625) * _9453) + vec3(_9455);
        float _9460 = _9453 + _9455;
        vec3 _9465 = mix(_9457 / vec3(_9460), vec3(1.0), vec3(0.4000000059604644775390625)) * (1.0 - _9460);
        vec3 _9472 = _9457 * (vec3(1.0) + (_9465 / (vec3(1.0) - _9465)));
        vec3 _18877;
        if (_9185)
        {
            float _9240 = mix(1.0, _5868, 0.5);
            float _9501 = _9240 * _9240;
            float _9506 = 1.0 - _9501;
            vec3 _9512 = normalize(mix(_5788, reflect(_5960, _5788), vec3(_9506 * (sqrt(_9506) + _9501))));
            vec3 _15697[4] = vec3[](_7940, (-vec3(_7906.y, _7911.y, _7916.y)) * _7940, vec3(_7906.z, _7911.z, _7916.z) * _7940, (-vec3(_7906.x, _7911.x, _7916.x)) * _7940);
            vec3 _9578 = normalize(vec3(-dot(_15697[3], vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)), -dot(_15697[1], vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)), dot(_15697[2], vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875))));
            vec3 _9606 = vec3(abs(dot(vec3(-_15697[3].x, -_15697[1].x, _15697[2].x), _9578)), abs(dot(vec3(-_15697[3].y, -_15697[1].y, _15697[2].y), _9578)), abs(dot(vec3(-_15697[3].z, -_15697[1].z, _15697[2].z), _9578))) / _15697[0];
            float _9612 = dot(_9578, _9512);
            vec3 _15692[4] = vec3[](vec3(0.886227548122406005859375), vec3(1.0) * (_9512.y * (-1.02332770824432373046875)), vec3(1.0) * (_9512.z * 1.02332770824432373046875), vec3(1.0) * (_9512.x * (-1.02332770824432373046875)));
            vec3 _18871;
            _18871 = vec3(0.0);
            vec3 _9672;
            uint _9676;
            uint _18870 = 0u;
            SPIRV_CROSS_UNROLL
            for (;;)
            {
                if (!(_18870 < 4u))
                {
                    break;
                }
                _9672 = _18871 + (_15692[_18870] * _15697[_18870]);
                _9676 = _18870 + 1u;
                _18871 = _9672;
                _18870 = _9676;
                continue;
            }
            _18877 = max(vec3(0.0), _18871 + (((_15697[0] * ((_9606 * 0.07999999821186065673828125) + ((_9606 * 0.60000002384185791015625) * _9606))) * 0.25) * (0.3153915703296661376953125 * (((3.0 * _9612) * _9612) - 1.0))));
        }
        else
        {
            _18877 = _18865;
        }
        float _18873;
        if (_5798)
        {
            _18873 = (((_8036 * _8036) * _8036) * _8036) * _8036;
        }
        else
        {
            _18873 = 1.0;
        }
        float _18874;
        if (_5802)
        {
            _18874 = mix(_674, 1.0, 0.300000011920928955078125);
        }
        else
        {
            _18874 = 1.0;
        }
        _18882 = ((((vec3(1.0) - _9472) * min(_5798 ? _8036 : 1.0, _18862)) * _22721) * _18865) + ((_18877 * _9472) * min(_18873, _18874));
    }
    else
    {
        _18882 = vec3(0.0);
    }
    vec3 result = _18820 + _18882;
    vec3 _19809;
    if (globalParams.lantern_count > 0u)
    {
        uvec3 _9707 = uvec3(clamp(floor((_5968 * vec3(0.24615384638309478759765625, 0.123076923191547393798828125, 0.24615384638309478759765625)) + vec3(16.0, 2.0, 16.0)), vec3(0.0), vec3(31.0, 15.0, 31.0)));
        uint _9736 = (32u * ((32u * _9707.y) + _9707.z)) + _9707.x;
        uint cell_light_count = light_indirection_grid._member0[_9736] >> 20u;
        bool _4339 = subgroupAll(cell_light_count <= 2u);
        uint _22726 = _4339 ? 2u : 6u;
        vec3 _19810;
        if (6u == _22726)
        {
            uint i;
            uint lanterns_found[8];
            uint _19778 = 0u;
            for (;;)
            {
                if (!(_19778 < 8u))
                {
                    break;
                }
                lanterns_found[_19778] = 4294967295u;
                i = _19778 + 1u;
                _19778 = i;
                continue;
            }
            uvec2 _11738 = uvec2(1u, 2u);
            uvec2 _11739 = uvec2(_335 & ivec2(1));
            uint _19780;
            _19780 = 0u;
            uint _11760;
            int _11764;
            int _19779 = 0;
            for (;;)
            {
                if (!(_19779 < 2))
                {
                    break;
                }
                _11760 = _19780 + (_11739[_19779] * _11738[_19779]);
                _11764 = _19779 + 1;
                _19780 = _11760;
                _19779 = _11764;
                continue;
            }
            uint _4415 = _19780 & 3u;
            uint _19782;
            _19782 = 0u;
            uint reservoir_sample_idx;
            uint _22006;
            uint _19781 = 0u;
            for (;;)
            {
                bool _19783;
                if (_19781 < 8u)
                {
                    _19783 = _19782 < 8u;
                }
                else
                {
                    _19783 = false;
                }
                if (!_19783)
                {
                    break;
                }
                uvec4 sampled_2 = texelFetch(rdi_reservoir_tex, ivec2(uvec2((_335 / ivec2(2)) + spatial_resolve_offsets.values.data[((_4415 * 16u) + _19781) + 256u].xy)), 0);
                uint _11773 = sampled_2.x;
                bool _20786;
                if (any(notEqual(sampled_2.xy, uvec2(0u))))
                {
                    _20786 = _11773 < globalParams.lantern_count;
                }
                else
                {
                    _20786 = false;
                }
                bool _20787;
                if (_20786)
                {
                    _20787 = lanterns_found[0u] != _11773;
                }
                else
                {
                    _20787 = false;
                }
                bool _20788;
                if (_20787)
                {
                    _20788 = lanterns_found[1u] != _11773;
                }
                else
                {
                    _20788 = false;
                }
                bool _20789;
                if (_20788)
                {
                    _20789 = lanterns_found[2u] != _11773;
                }
                else
                {
                    _20789 = false;
                }
                bool _20790;
                if (_20789)
                {
                    _20790 = lanterns_found[3u] != _11773;
                }
                else
                {
                    _20790 = false;
                }
                bool _20791;
                if (_20790)
                {
                    _20791 = lanterns_found[4u] != _11773;
                }
                else
                {
                    _20791 = false;
                }
                bool _20792;
                if (_20791)
                {
                    _20792 = lanterns_found[5u] != _11773;
                }
                else
                {
                    _20792 = false;
                }
                bool _20793;
                if (_20792)
                {
                    _20793 = lanterns_found[6u] != _11773;
                }
                else
                {
                    _20793 = false;
                }
                bool _20794;
                if (_20793)
                {
                    _20794 = lanterns_found[7u] != _11773;
                }
                else
                {
                    _20794 = false;
                }
                if (_20794)
                {
                    lanterns_found[_19782] = _11773;
                    _22006 = _19782 + 1u;
                }
                else
                {
                    _22006 = _19782;
                }
                reservoir_sample_idx = _19781 + 1u;
                _19782 = _22006;
                _19781 = reservoir_sample_idx;
                continue;
            }
            uint _19788;
            _19788 = _19782;
            uint reservoir_sample_idx_1;
            uint _22007;
            uint _19784 = 0u;
            for (;;)
            {
                if (!(_19784 < 8u))
                {
                    break;
                }
                uint _4596 = subgroupQuadSwapDiagonal(lanterns_found[_19784]);
                bool _20758;
                if (_4596 < globalParams.lantern_count)
                {
                    _20758 = _19788 < 8u;
                }
                else
                {
                    _20758 = false;
                }
                if (_20758)
                {
                    bool _20759;
                    if (lanterns_found[0u] != _4596)
                    {
                        _20759 = lanterns_found[1u] != _4596;
                    }
                    else
                    {
                        _20759 = false;
                    }
                    bool _20760;
                    if (_20759)
                    {
                        _20760 = lanterns_found[2u] != _4596;
                    }
                    else
                    {
                        _20760 = false;
                    }
                    bool _20761;
                    if (_20760)
                    {
                        _20761 = lanterns_found[3u] != _4596;
                    }
                    else
                    {
                        _20761 = false;
                    }
                    bool _20762;
                    if (_20761)
                    {
                        _20762 = lanterns_found[4u] != _4596;
                    }
                    else
                    {
                        _20762 = false;
                    }
                    bool _20763;
                    if (_20762)
                    {
                        _20763 = lanterns_found[5u] != _4596;
                    }
                    else
                    {
                        _20763 = false;
                    }
                    bool _20764;
                    if (_20763)
                    {
                        _20764 = lanterns_found[6u] != _4596;
                    }
                    else
                    {
                        _20764 = false;
                    }
                    bool _20765;
                    if (_20764)
                    {
                        _20765 = lanterns_found[7u] != _4596;
                    }
                    else
                    {
                        _20765 = false;
                    }
                    uint _20774;
                    if (_20765)
                    {
                        lanterns_found[_19788] = _4596;
                        _20774 = _19788 + 1u;
                    }
                    else
                    {
                        _20774 = _19788;
                    }
                    _22007 = _20774;
                }
                else
                {
                    _22007 = _19788;
                }
                reservoir_sample_idx_1 = _19784 + 1u;
                _19788 = _22007;
                _19784 = reservoir_sample_idx_1;
                continue;
            }
            uint ridx;
            Reservoir1sppStreamState stream_state[2];
            Reservoir1spp reservoir[2];
            uint _19785 = 0u;
            for (;;)
            {
                if (!(_19785 < 2u))
                {
                    break;
                }
                stream_state[_19785] = Reservoir1sppStreamState(0.0, 0.0);
                reservoir[_19785] = Reservoir1spp(0.0, 0u, 0.0, 0.0);
                ridx = _19785 + 1u;
                _19785 = ridx;
                continue;
            }
            uint found_lantern_idx;
            uint _19790 = 0u;
            for (;;)
            {
                if (!(_19790 < _19788))
                {
                    break;
                }
                vec2 _11811 = unpackHalf2x16(lantern_buf_1._member0[lanterns_found[_19790]].intensity_color_id);
                float _11812 = _11811.x;
                uint _11817 = lantern_buf_1._member0[lanterns_found[_19790]].intensity_color_id >> uint(16);
                vec3 _11835 = lantern_buf_1._member0[lanterns_found[_19790]].position.xyz - _5968;
                float _11837 = dot(_11835, _11835);
                vec3 _11844 = _11835 + vec3(0.0, 0.1500000059604644775390625, 0.0);
                vec3 _20730;
                do
                {
                    if (_11817 == 0u)
                    {
                        _20730 = vec3(1.0, 0.800000011920928955078125, 0.100000001490116119384765625);
                        break;
                    }
                    else
                    {
                        if (_11817 == 1u)
                        {
                            _20730 = vec3(0.0, 0.735904157161712646484375, 3.67952060699462890625);
                            break;
                        }
                        else
                        {
                            if (_11817 == 2u)
                            {
                                _20730 = vec3(0.20513366162776947021484375, 1.02566826343536376953125, 0.20513366162776947021484375);
                                break;
                            }
                            else
                            {
                                if (_11817 == 3u)
                                {
                                    _20730 = vec3(0.85153043270111083984375, 0.56768691539764404296875, 2.8384344577789306640625);
                                    break;
                                }
                                else
                                {
                                    _20730 = vec3(1.82324230670928955078125, 0.546972692012786865234375, 0.182324230670928955078125);
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
                float _11947 = dot(((_20730 * 4.0) * _11812) * ((max(0.0, dot(_5788, _11835 / vec3(length(_11835)))) * ((1.0 / (0.3359999954700469970703125 + _11837)) * smoothstep(36.0 * _11812, 16.0 * _11812, _11837))) * smoothstep(-0.5, 0.20000000298023223876953125, (_11844 / vec3(length(_11844))).y)), vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875));
                float inv_pdf_q = float(_19788);
                float _4949 = fract(_7702 + (float(_19790) / inv_pdf_q));
                if (reservoir[0].w_sum <= reservoir[1].w_sum)
                {
                    float _11993;
                    float _12003;
                    float _12006;
                    uint _20746;
                    float _20751;
                    do
                    {
                        bool _12008;
                        _11993 = stream_state[0].M_sum + 1.0;
                        float _11994 = _11947 * inv_pdf_q;
                        do
                        {
                            _12003 = reservoir[0].w_sum + _11994;
                            _12006 = reservoir[0].M + 1.0;
                            _12008 = (_11994 / _12003) >= _4949;
                            if (_12008)
                            {
                                _20746 = lanterns_found[_19790];
                                break;
                            }
                            else
                            {
                                _20746 = reservoir[0].payload;
                                break;
                            }
                            break; // unreachable workaround
                        } while(false);
                        if (_12008)
                        {
                            _20751 = _11947;
                            break;
                        }
                        else
                        {
                            _20751 = stream_state[0].p_q_sel;
                            break;
                        }
                        break; // unreachable workaround
                    } while(false);
                    reservoir[0] = Reservoir1spp(_12003, _20746, _12006, reservoir[0].W);
                    stream_state[0] = Reservoir1sppStreamState(_20751, _11993);
                }
                else
                {
                    float _11957;
                    float _11967;
                    float _11970;
                    uint _20736;
                    float _20741;
                    do
                    {
                        bool _11972;
                        _11957 = stream_state[1].M_sum + 1.0;
                        float _11958 = _11947 * inv_pdf_q;
                        do
                        {
                            _11967 = reservoir[1].w_sum + _11958;
                            _11970 = reservoir[1].M + 1.0;
                            _11972 = (_11958 / _11967) >= _4949;
                            if (_11972)
                            {
                                _20736 = lanterns_found[_19790];
                                break;
                            }
                            else
                            {
                                _20736 = reservoir[1].payload;
                                break;
                            }
                            break; // unreachable workaround
                        } while(false);
                        if (_11972)
                        {
                            _20741 = _11947;
                            break;
                        }
                        else
                        {
                            _20741 = stream_state[1].p_q_sel;
                            break;
                        }
                        break; // unreachable workaround
                    } while(false);
                    reservoir[1] = Reservoir1spp(_11967, _20736, _11970, reservoir[1].W);
                    stream_state[1] = Reservoir1sppStreamState(_20741, _11957);
                }
                found_lantern_idx = _19790 + 1u;
                _19790 = found_lantern_idx;
                continue;
            }
            uint ridx_1;
            uint _19791 = 1u;
            for (;;)
            {
                if (!(_19791 < 2u))
                {
                    break;
                }
                stream_state[0].M_sum += stream_state[_19791].M_sum;
                ridx_1 = _19791 + 1u;
                _19791 = ridx_1;
                continue;
            }
            uint ridx_2;
            uint _19792 = 1u;
            for (;;)
            {
                if (!(_19792 < 2u))
                {
                    break;
                }
                stream_state[_19792].M_sum = stream_state[0].M_sum;
                ridx_2 = _19792 + 1u;
                _19792 = ridx_2;
                continue;
            }
            vec3 _19812;
            _19812 = result;
            uint ridx_3;
            vec3 _22093;
            float _22246;
            float _22333;
            float _22419;
            float _22504;
            uint _19793 = 0u;
            float _20135;
            float _20250;
            float _20366;
            float _20483;
            for (;;)
            {
                if (!(_19793 < 2u))
                {
                    break;
                }
                reservoir[_19793] = Reservoir1spp(reservoir[_19793].w_sum, reservoir[_19793].payload, stream_state[_19793].M_sum, reservoir[_19793].w_sum / max(9.9999999392252902907785028219223e-09, stream_state[_19793].M_sum * stream_state[_19793].p_q_sel));
                if (reservoir[_19793].W > 0.0)
                {
                    vec2 _12176 = unpackHalf2x16(lantern_buf_1._member0[reservoir[_19793].payload].intensity_color_id);
                    float _12177 = _12176.x;
                    uint _12182 = lantern_buf_1._member0[reservoir[_19793].payload].intensity_color_id >> uint(16);
                    vec3 _12196 = lantern_buf_1._member0[reservoir[_19793].payload].position.xyz - _5968;
                    float _12197 = length(_12196);
                    float _12198 = dot(_12196, _12196);
                    vec3 _12205 = _12196 + vec3(0.0, 0.1500000059604644775390625, 0.0);
                    vec3 _12211 = vec3(_12197);
                    vec3 _19813;
                    do
                    {
                        if (_12182 == 0u)
                        {
                            _19813 = vec3(1.0, 0.800000011920928955078125, 0.100000001490116119384765625);
                            break;
                        }
                        else
                        {
                            if (_12182 == 1u)
                            {
                                _19813 = vec3(0.0, 0.735904157161712646484375, 3.67952060699462890625);
                                break;
                            }
                            else
                            {
                                if (_12182 == 2u)
                                {
                                    _19813 = vec3(0.20513366162776947021484375, 1.02566826343536376953125, 0.20513366162776947021484375);
                                    break;
                                }
                                else
                                {
                                    if (_12182 == 3u)
                                    {
                                        _19813 = vec3(0.85153043270111083984375, 0.56768691539764404296875, 2.8384344577789306640625);
                                        break;
                                    }
                                    else
                                    {
                                        _19813 = vec3(1.82324230670928955078125, 0.546972692012786865234375, 0.182324230670928955078125);
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
                    vec3 _12222 = ((_19813 * 4.0) * _12177) * ((max(0.0, dot(_5788, _12196 / _12211)) * ((1.0 / (0.3359999954700469970703125 + _12198)) * smoothstep(36.0 * _12177, 16.0 * _12177, _12198))) * smoothstep(-0.5, 0.20000000298023223876953125, (_12205 / vec3(length(_12205))).y));
                    vec3 _12306 = _12222;
                    float _19815;
                    _19815 = _12222.x;
                    float _12324;
                    int _12328;
                    int _19814 = 1;
                    SPIRV_CROSS_UNROLL
                    for (;;)
                    {
                        if (!(_19814 < 3))
                        {
                            break;
                        }
                        _12324 = max(_19815, _12306[_19814]);
                        _12328 = _19814 + 1;
                        _19815 = _12324;
                        _19814 = _12328;
                        continue;
                    }
                    vec3 _20602;
                    float _22247;
                    float _22334;
                    float _22420;
                    float _22505;
                    if ((reservoir[_19793].W * _19815) > 0.0)
                    {
                        vec3 _20599;
                        if (_12197 > 0.5)
                        {
                            vec3 _12089 = _5945.xyz;
                            vec4 _12367 = (vec4((_5968 + ((_12196 * (_12197 - 0.5)) / _12211)) + (_5788 * (0.0199999995529651641845703125 * _5758.y)), 1.0) * current_view.world_to_view) * current_view.view_to_sample;
                            vec3 _12371 = _12367.xyz / vec3(_12367.w);
                            vec4 _12393 = vec4(_12089, 1.0) + (vec4(_12371 - _12089, 0.0) * float(int(sign(_12371.z))));
                            float _12394 = _12393.w;
                            vec3 _12407 = (_12393 / vec4(float((_12394 >= 0.0) ? 1 : (-1)) * max(1.0000000133514319600180897396058e-10, abs(_12394)))).xyz;
                            vec3 _12409 = _12407 - _12089;
                            vec3 _12415 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), lessThan(_12409, vec3(0.0))) - _12089) / _12409;
                            vec3 _12422 = _12089 + (_12409 * max(0.0, max(_12415.x, _12415.y)));
                            vec3 _12423 = _12407 - _12422;
                            vec3 _12428 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), greaterThanEqual(_12423, vec3(0.0))) - _12422) / _12423;
                            vec3 _12443 = _12422 + (_12423 * min(1.0, min(min(_12428.x, _12428.y), _12428.z)));
                            float _20124;
                            float _20125;
                            bool _20126;
                            do
                            {
                                float _12513 = 0.800000011920928955078125 * current_view.clip_to_view[3].z;
                                uint _12529 = uint(int(max(2u, min(4u, uint(int(floor(length((((_12443.xy * vec2(0.5, -0.5)) + vec2(0.5)) - ((_12422.xy * vec2(0.5, -0.5)) + vec2(0.5))) * _568))))))));
                                float _19846;
                                bool _19965;
                                float _19966;
                                float _19968;
                                float _19987;
                                float _20006;
                                do
                                {
                                    vec3 _12681 = _12443 - _12422;
                                    float _12690 = float(_12529);
                                    float _19820;
                                    do
                                    {
                                        if (_12443.z > 9.5367431640625e-07)
                                        {
                                            _19820 = _12690;
                                            break;
                                        }
                                        else
                                        {
                                            _19820 = max(1.0, _12690 - 1.0);
                                            break;
                                        }
                                        break; // unreachable workaround
                                    } while(false);
                                    float _12700 = 1.0 / _19820;
                                    bool _19856;
                                    float _19862;
                                    float _19866;
                                    float _19870;
                                    float _19878;
                                    if (_12529 > 0u)
                                    {
                                        float _12710 = mix(0.0, 1.0, pow(_7702 * _12700, 1.0));
                                        vec3 _12713 = _12422 + (_12681 * vec3(_12710));
                                        vec2 _12929 = (_12713.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                        float _12861 = 1.0 / _12713.z;
                                        float _12868 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _12929, 0.0).x;
                                        float _12875 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _12929, 0.0).x;
                                        float _12887 = (max(_12868, _12875) * 1.00000202655792236328125) - _12861;
                                        float _12891 = _12861 - min(_12868, _12875);
                                        bool _22733 = (_12887 < 0.0) ? (_12891 < _12513) : false;
                                        float _19847;
                                        bool _19857;
                                        float _19863;
                                        float _19867;
                                        float _19871;
                                        float _19879;
                                        if (_22733)
                                        {
                                            _19879 = _12887;
                                            _19871 = _12891;
                                            _19867 = _12513;
                                            _19863 = _12710;
                                            _19857 = _22733;
                                            _19847 = 0.0;
                                        }
                                        else
                                        {
                                            float _19849;
                                            _19849 = _12710;
                                            float _12739;
                                            uint _12757;
                                            bool _22734;
                                            bool _19858;
                                            float _19864;
                                            float _19868;
                                            float _19872;
                                            float _19880;
                                            uint _19830 = 1u;
                                            bool _19859 = _22733;
                                            for (;;)
                                            {
                                                if (!(_19830 < _12529))
                                                {
                                                    _19880 = 0.0;
                                                    _19872 = 0.0;
                                                    _19868 = 0.0;
                                                    _19864 = 1.0;
                                                    _19858 = _19859;
                                                    break;
                                                }
                                                _12739 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_19830) + _7702) * _12700, 1.0)));
                                                vec3 _12742 = _12422 + (_12681 * vec3(_12739));
                                                vec2 _13071 = (_12742.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                                float _13003 = 1.0 / _12742.z;
                                                float _13010 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _13071, 0.0).x;
                                                float _13017 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _13071, 0.0).x;
                                                float _13029 = (max(_13010, _13017) * 1.00000202655792236328125) - _13003;
                                                float _13033 = _13003 - min(_13010, _13017);
                                                _22734 = (_13029 < 0.0) ? (_13033 < _12513) : false;
                                                if (_22734)
                                                {
                                                    _19880 = _13029;
                                                    _19872 = _13033;
                                                    _19868 = _12513;
                                                    _19864 = _12739;
                                                    _19858 = _22734;
                                                    break;
                                                }
                                                _12757 = _19830 + 1u;
                                                _19830 = _12757;
                                                _19859 = _22734;
                                                _19849 = _12739;
                                                continue;
                                            }
                                            _19879 = _19880;
                                            _19871 = _19872;
                                            _19867 = _19868;
                                            _19863 = _19864;
                                            _19857 = _19858;
                                            _19847 = _19849;
                                        }
                                        _19878 = _19879;
                                        _19870 = _19871;
                                        _19866 = _19867;
                                        _19862 = _19863;
                                        _19856 = _19857;
                                        _19846 = _19847;
                                    }
                                    else
                                    {
                                        _19878 = 0.0;
                                        _19870 = 0.0;
                                        _19866 = 0.0;
                                        _19862 = 1.0;
                                        _19856 = false;
                                        _19846 = 0.0;
                                    }
                                    if (_19856)
                                    {
                                        _20006 = _19878;
                                        _19987 = _19866;
                                        _19968 = _19870;
                                        _19966 = _19862;
                                        _19965 = true;
                                        break;
                                    }
                                    else
                                    {
                                        _20006 = _12614.base._distance;
                                        _19987 = _12614.thickness;
                                        _19968 = _12614.penetration;
                                        _19966 = _19846;
                                        _19965 = false;
                                        break;
                                    }
                                    break; // unreachable workaround
                                } while(false);
                                bool _20025;
                                if (_19965)
                                {
                                    bool _20027;
                                    if (_19968 < _19987)
                                    {
                                        _20027 = _20006 < _19987;
                                    }
                                    else
                                    {
                                        _20027 = false;
                                    }
                                    _20025 = _20027;
                                }
                                else
                                {
                                    _20025 = false;
                                }
                                if (_20025)
                                {
                                    _20126 = true;
                                    _20125 = _19966;
                                    _20124 = _19968 / current_view.clip_to_view[3].z;
                                    break;
                                }
                                _20126 = false;
                                _20125 = _19846;
                                _20124 = 0.0;
                                break;
                            } while(false);
                            vec3 _20600;
                            if (_20126)
                            {
                                vec4 _13445 = (vec4(mix(_12422, _12443, vec3(_20125)), 1.0) * current_view.sample_to_view) * current_view.view_to_world;
                                vec3 _12111 = ((_13445.xyz / vec3(_13445.w)) + (wo * _20124)) - lantern_buf_1._member0[reservoir[_19793].payload].position.xyz;
                                bool _20127;
                                if (abs(_12111.y) > 0.5)
                                {
                                    _20127 = true;
                                }
                                else
                                {
                                    vec2 _12116 = _12111.xz;
                                    _20127 = dot(_12116, _12116) > 0.136900007724761962890625;
                                }
                                _20600 = mix(_12222, vec3(0.0), bvec3(_20127));
                            }
                            else
                            {
                                _20600 = _12222;
                            }
                            _20599 = _20600;
                        }
                        else
                        {
                            _20599 = _12222;
                        }
                        vec2 _12143 = vec2((float(frame_constants.game_time_sec) + frame_constants.game_time_frac) * 4.0, float(reservoir[_19793].payload * 10u));
                        ivec2 _13668 = ivec2(floor(_12143));
                        vec2 _13669 = fract(_12143);
                        uvec2 _13670 = uvec2(_13668);
                        uint _13720 = _13670.y;
                        uint _13726 = _13720 + (_13720 << 10u);
                        uint _13728 = _13726 ^ (_13726 >> 6u);
                        uint _13730 = _13728 + (_13728 << 3u);
                        uint _13732 = _13730 ^ (_13730 >> 11u);
                        uint _13740 = (((_13670.x * 1664525u) + (_13732 + (_13732 << 15u))) + 1013904223u) * 1664525u;
                        uint _13742 = _13740 ^ (_13740 >> 11u);
                        uint _13745 = _13742 ^ ((_13742 << 7u) & 2636928640u);
                        uint _13748 = _13745 ^ ((_13745 << 15u) & 4022730752u);
                        uint _13750 = _13748 ^ (_13748 >> 18u);
                        float _20243;
                        _20243 = _20135;
                        uint _13767;
                        uint _13786;
                        float _13792;
                        uint _20242 = 0u;
                        uint _20699 = _13750;
                        for (;;)
                        {
                            if (!(_20242 < 1u))
                            {
                                break;
                            }
                            uint _13778 = _20699 + (_20699 << 10u);
                            uint _13780 = _13778 ^ (_13778 >> 6u);
                            uint _13782 = _13780 + (_13780 << 3u);
                            uint _13784 = _13782 ^ (_13782 >> 11u);
                            _13786 = _13784 + (_13784 << 15u);
                            _13792 = uintBitsToFloat((_20699 & 8388607u) | 1065353216u) - 1.0;
                            _13767 = _20242 + 1u;
                            _20699 = _13786;
                            _20243 = _13792;
                            _20242 = _13767;
                            continue;
                        }
                        uvec2 _13678 = uvec2(_13668 + ivec2(1, 0));
                        uint _13796 = _13678.y;
                        uint _13802 = _13796 + (_13796 << 10u);
                        uint _13804 = _13802 ^ (_13802 >> 6u);
                        uint _13806 = _13804 + (_13804 << 3u);
                        uint _13808 = _13806 ^ (_13806 >> 11u);
                        uint _13816 = (((_13678.x * 1664525u) + (_13808 + (_13808 << 15u))) + 1013904223u) * 1664525u;
                        uint _13818 = _13816 ^ (_13816 >> 11u);
                        uint _13821 = _13818 ^ ((_13818 << 7u) & 2636928640u);
                        uint _13824 = _13821 ^ ((_13821 << 15u) & 4022730752u);
                        uint _13826 = _13824 ^ (_13824 >> 18u);
                        float _20358;
                        _20358 = _20250;
                        uint _13843;
                        uint _13862;
                        float _13868;
                        uint _20357 = 0u;
                        uint _20698 = _13826;
                        for (;;)
                        {
                            if (!(_20357 < 1u))
                            {
                                break;
                            }
                            uint _13854 = _20698 + (_20698 << 10u);
                            uint _13856 = _13854 ^ (_13854 >> 6u);
                            uint _13858 = _13856 + (_13856 << 3u);
                            uint _13860 = _13858 ^ (_13858 >> 11u);
                            _13862 = _13860 + (_13860 << 15u);
                            _13868 = uintBitsToFloat((_20698 & 8388607u) | 1065353216u) - 1.0;
                            _13843 = _20357 + 1u;
                            _20698 = _13862;
                            _20358 = _13868;
                            _20357 = _13843;
                            continue;
                        }
                        uvec2 _13685 = uvec2(_13668 + ivec2(0, 1));
                        uint _13872 = _13685.y;
                        uint _13878 = _13872 + (_13872 << 10u);
                        uint _13880 = _13878 ^ (_13878 >> 6u);
                        uint _13882 = _13880 + (_13880 << 3u);
                        uint _13884 = _13882 ^ (_13882 >> 11u);
                        uint _13892 = (((_13685.x * 1664525u) + (_13884 + (_13884 << 15u))) + 1013904223u) * 1664525u;
                        uint _13894 = _13892 ^ (_13892 >> 11u);
                        uint _13897 = _13894 ^ ((_13894 << 7u) & 2636928640u);
                        uint _13900 = _13897 ^ ((_13897 << 15u) & 4022730752u);
                        uint _13902 = _13900 ^ (_13900 >> 18u);
                        float _20474;
                        _20474 = _20366;
                        uint _13919;
                        uint _13938;
                        float _13944;
                        uint _20473 = 0u;
                        uint _20697 = _13902;
                        for (;;)
                        {
                            if (!(_20473 < 1u))
                            {
                                break;
                            }
                            uint _13930 = _20697 + (_20697 << 10u);
                            uint _13932 = _13930 ^ (_13930 >> 6u);
                            uint _13934 = _13932 + (_13932 << 3u);
                            uint _13936 = _13934 ^ (_13934 >> 11u);
                            _13938 = _13936 + (_13936 << 15u);
                            _13944 = uintBitsToFloat((_20697 & 8388607u) | 1065353216u) - 1.0;
                            _13919 = _20473 + 1u;
                            _20697 = _13938;
                            _20474 = _13944;
                            _20473 = _13919;
                            continue;
                        }
                        uvec2 _13693 = uvec2(_13668 + ivec2(1));
                        uint _13948 = _13693.y;
                        uint _13954 = _13948 + (_13948 << 10u);
                        uint _13956 = _13954 ^ (_13954 >> 6u);
                        uint _13958 = _13956 + (_13956 << 3u);
                        uint _13960 = _13958 ^ (_13958 >> 11u);
                        uint _13968 = (((_13693.x * 1664525u) + (_13960 + (_13960 << 15u))) + 1013904223u) * 1664525u;
                        uint _13970 = _13968 ^ (_13968 >> 11u);
                        uint _13973 = _13970 ^ ((_13970 << 7u) & 2636928640u);
                        uint _13976 = _13973 ^ ((_13973 << 15u) & 4022730752u);
                        uint _13978 = _13976 ^ (_13976 >> 18u);
                        float _20591;
                        _20591 = _20483;
                        uint _13995;
                        uint _14014;
                        float _14020;
                        uint _20590 = 0u;
                        uint _20696 = _13978;
                        for (;;)
                        {
                            if (!(_20590 < 1u))
                            {
                                break;
                            }
                            uint _14006 = _20696 + (_20696 << 10u);
                            uint _14008 = _14006 ^ (_14006 >> 6u);
                            uint _14010 = _14008 + (_14008 << 3u);
                            uint _14012 = _14010 ^ (_14010 >> 11u);
                            _14014 = _14012 + (_14012 << 15u);
                            _14020 = uintBitsToFloat((_20696 & 8388607u) | 1065353216u) - 1.0;
                            _13995 = _20590 + 1u;
                            _20696 = _14014;
                            _20591 = _14020;
                            _20590 = _13995;
                            continue;
                        }
                        vec2 _14026 = (_13669 * _13669) * (vec2(3.0) - (vec2(2.0) * _13669));
                        float _13701 = _14026.x;
                        float _13702 = 1.0 - _13701;
                        float _13704 = _14026.y;
                        _22505 = _20591;
                        _22420 = _20474;
                        _22334 = _20358;
                        _22247 = _20243;
                        _20602 = (((_20599 * mix(0.5, 1.0, (((1.0 - _13704) * ((_20243 * _13702) + (_20358 * _13701))) + ((_20474 * _13702) * _13704)) + ((_20591 * _13701) * _13704))) * reservoir[_19793].W) * _22721) * frame_constants.ev_mult;
                    }
                    else
                    {
                        _22505 = _20483;
                        _22420 = _20366;
                        _22334 = _20250;
                        _22247 = _20135;
                        _20602 = vec3(0.0);
                    }
                    _22504 = _22505;
                    _22419 = _22420;
                    _22333 = _22334;
                    _22246 = _22247;
                    _22093 = _19812 + _20602;
                }
                else
                {
                    _22504 = _20483;
                    _22419 = _20366;
                    _22333 = _20250;
                    _22246 = _20135;
                    _22093 = _19812;
                }
                ridx_3 = _19793 + 1u;
                _20483 = _22504;
                _20366 = _22419;
                _20250 = _22333;
                _20135 = _22246;
                _19812 = _22093;
                _19793 = ridx_3;
                continue;
            }
            _19810 = _19812;
        }
        else
        {
            vec3 _19811;
            if (2u == _22726)
            {
                uint _5603 = light_indirection_grid._member0[_9736] & 1048575u;
                uint _5606 = min(64u, cell_light_count);
                vec3 _19654;
                _19654 = result;
                vec3 result_1;
                uint slot_idx;
                float _21807;
                float _21867;
                float _21926;
                float _21984;
                uint _18884 = 0u;
                float _19218;
                float _19325;
                float _19432;
                float _19540;
                for (;;)
                {
                    if (!(_18884 < _5606))
                    {
                        break;
                    }
                    uint _5613 = _5603 + _18884;
                    vec2 _9881 = unpackHalf2x16(lantern_buf_1._member0[grid_light_indices_1._member0[_5613]].intensity_color_id);
                    float _9882 = _9881.x;
                    uint _9887 = lantern_buf_1._member0[grid_light_indices_1._member0[_5613]].intensity_color_id >> uint(16);
                    vec3 _9901 = lantern_buf_1._member0[grid_light_indices_1._member0[_5613]].position.xyz - _5968;
                    float _9902 = length(_9901);
                    float _9903 = dot(_9901, _9901);
                    vec3 _9910 = _9901 + vec3(0.0, 0.1500000059604644775390625, 0.0);
                    vec3 _9916 = vec3(_9902);
                    vec3 _18896;
                    do
                    {
                        if (_9887 == 0u)
                        {
                            _18896 = vec3(1.0, 0.800000011920928955078125, 0.100000001490116119384765625);
                            break;
                        }
                        else
                        {
                            if (_9887 == 1u)
                            {
                                _18896 = vec3(0.0, 0.735904157161712646484375, 3.67952060699462890625);
                                break;
                            }
                            else
                            {
                                if (_9887 == 2u)
                                {
                                    _18896 = vec3(0.20513366162776947021484375, 1.02566826343536376953125, 0.20513366162776947021484375);
                                    break;
                                }
                                else
                                {
                                    if (_9887 == 3u)
                                    {
                                        _18896 = vec3(0.85153043270111083984375, 0.56768691539764404296875, 2.8384344577789306640625);
                                        break;
                                    }
                                    else
                                    {
                                        _18896 = vec3(1.82324230670928955078125, 0.546972692012786865234375, 0.182324230670928955078125);
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
                    vec3 _9927 = ((_18896 * 4.0) * _9882) * ((max(0.0, dot(_5788, _9901 / _9916)) * ((1.0 / (0.3359999954700469970703125 + _9903)) * smoothstep(36.0 * _9882, 16.0 * _9882, _9903))) * smoothstep(-0.5, 0.20000000298023223876953125, (_9910 / vec3(length(_9910))).y));
                    vec3 _10011 = _9927;
                    float _18898;
                    _18898 = _9927.x;
                    float _10029;
                    int _10033;
                    int _18897 = 1;
                    SPIRV_CROSS_UNROLL
                    for (;;)
                    {
                        if (!(_18897 < 3))
                        {
                            break;
                        }
                        _10029 = max(_18898, _10011[_18897]);
                        _10033 = _18897 + 1;
                        _18898 = _10029;
                        _18897 = _10033;
                        continue;
                    }
                    vec3 _19650;
                    if (_18898 > 0.0)
                    {
                        vec3 _19647;
                        if (_9902 > 0.5)
                        {
                            vec3 _9794 = _5945.xyz;
                            vec4 _10072 = (vec4((_5968 + ((_9901 * (_9902 - 0.5)) / _9916)) + (_5788 * (0.0199999995529651641845703125 * _5758.y)), 1.0) * current_view.world_to_view) * current_view.view_to_sample;
                            vec3 _10076 = _10072.xyz / vec3(_10072.w);
                            vec4 _10098 = vec4(_9794, 1.0) + (vec4(_10076 - _9794, 0.0) * float(int(sign(_10076.z))));
                            float _10099 = _10098.w;
                            vec3 _10112 = (_10098 / vec4(float((_10099 >= 0.0) ? 1 : (-1)) * max(1.0000000133514319600180897396058e-10, abs(_10099)))).xyz;
                            vec3 _10114 = _10112 - _9794;
                            vec3 _10120 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), lessThan(_10114, vec3(0.0))) - _9794) / _10114;
                            vec3 _10127 = _9794 + (_10114 * max(0.0, max(_10120.x, _10120.y)));
                            vec3 _10128 = _10112 - _10127;
                            vec3 _10133 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), greaterThanEqual(_10128, vec3(0.0))) - _10127) / _10128;
                            vec3 _10148 = _10127 + (_10128 * min(1.0, min(min(_10133.x, _10133.y), _10133.z)));
                            float _19207;
                            float _19208;
                            bool _19209;
                            do
                            {
                                float _10218 = 0.800000011920928955078125 * current_view.clip_to_view[3].z;
                                uint _10234 = uint(int(max(2u, min(4u, uint(int(floor(length((((_10148.xy * vec2(0.5, -0.5)) + vec2(0.5)) - ((_10127.xy * vec2(0.5, -0.5)) + vec2(0.5))) * _568))))))));
                                float _18929;
                                bool _19048;
                                float _19049;
                                float _19051;
                                float _19070;
                                float _19089;
                                do
                                {
                                    vec3 _10386 = _10148 - _10127;
                                    float _10395 = float(_10234);
                                    float _18903;
                                    do
                                    {
                                        if (_10148.z > 9.5367431640625e-07)
                                        {
                                            _18903 = _10395;
                                            break;
                                        }
                                        else
                                        {
                                            _18903 = max(1.0, _10395 - 1.0);
                                            break;
                                        }
                                        break; // unreachable workaround
                                    } while(false);
                                    float _10405 = 1.0 / _18903;
                                    bool _18939;
                                    float _18945;
                                    float _18949;
                                    float _18953;
                                    float _18961;
                                    if (_10234 > 0u)
                                    {
                                        float _10415 = mix(0.0, 1.0, pow(_7702 * _10405, 1.0));
                                        vec3 _10418 = _10127 + (_10386 * vec3(_10415));
                                        vec2 _10634 = (_10418.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                        float _10566 = 1.0 / _10418.z;
                                        float _10573 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _10634, 0.0).x;
                                        float _10580 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _10634, 0.0).x;
                                        float _10592 = (max(_10573, _10580) * 1.00000202655792236328125) - _10566;
                                        float _10596 = _10566 - min(_10573, _10580);
                                        bool _22728 = (_10592 < 0.0) ? (_10596 < _10218) : false;
                                        float _18930;
                                        bool _18940;
                                        float _18946;
                                        float _18950;
                                        float _18954;
                                        float _18962;
                                        if (_22728)
                                        {
                                            _18962 = _10592;
                                            _18954 = _10596;
                                            _18950 = _10218;
                                            _18946 = _10415;
                                            _18940 = _22728;
                                            _18930 = 0.0;
                                        }
                                        else
                                        {
                                            float _18932;
                                            _18932 = _10415;
                                            float _10444;
                                            uint _10462;
                                            bool _22729;
                                            bool _18941;
                                            float _18947;
                                            float _18951;
                                            float _18955;
                                            float _18963;
                                            uint _18913 = 1u;
                                            bool _18942 = _22728;
                                            for (;;)
                                            {
                                                if (!(_18913 < _10234))
                                                {
                                                    _18963 = 0.0;
                                                    _18955 = 0.0;
                                                    _18951 = 0.0;
                                                    _18947 = 1.0;
                                                    _18941 = _18942;
                                                    break;
                                                }
                                                _10444 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_18913) + _7702) * _10405, 1.0)));
                                                vec3 _10447 = _10127 + (_10386 * vec3(_10444));
                                                vec2 _10776 = (_10447.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                                float _10708 = 1.0 / _10447.z;
                                                float _10715 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _10776, 0.0).x;
                                                float _10722 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _10776, 0.0).x;
                                                float _10734 = (max(_10715, _10722) * 1.00000202655792236328125) - _10708;
                                                float _10738 = _10708 - min(_10715, _10722);
                                                _22729 = (_10734 < 0.0) ? (_10738 < _10218) : false;
                                                if (_22729)
                                                {
                                                    _18963 = _10734;
                                                    _18955 = _10738;
                                                    _18951 = _10218;
                                                    _18947 = _10444;
                                                    _18941 = _22729;
                                                    break;
                                                }
                                                _10462 = _18913 + 1u;
                                                _18913 = _10462;
                                                _18942 = _22729;
                                                _18932 = _10444;
                                                continue;
                                            }
                                            _18962 = _18963;
                                            _18954 = _18955;
                                            _18950 = _18951;
                                            _18946 = _18947;
                                            _18940 = _18941;
                                            _18930 = _18932;
                                        }
                                        _18961 = _18962;
                                        _18953 = _18954;
                                        _18949 = _18950;
                                        _18945 = _18946;
                                        _18939 = _18940;
                                        _18929 = _18930;
                                    }
                                    else
                                    {
                                        _18961 = 0.0;
                                        _18953 = 0.0;
                                        _18949 = 0.0;
                                        _18945 = 1.0;
                                        _18939 = false;
                                        _18929 = 0.0;
                                    }
                                    if (_18939)
                                    {
                                        _19089 = _18961;
                                        _19070 = _18949;
                                        _19051 = _18953;
                                        _19049 = _18945;
                                        _19048 = true;
                                        break;
                                    }
                                    else
                                    {
                                        _19089 = _10319.base._distance;
                                        _19070 = _10319.thickness;
                                        _19051 = _10319.penetration;
                                        _19049 = _18929;
                                        _19048 = false;
                                        break;
                                    }
                                    break; // unreachable workaround
                                } while(false);
                                bool _19108;
                                if (_19048)
                                {
                                    bool _19110;
                                    if (_19051 < _19070)
                                    {
                                        _19110 = _19089 < _19070;
                                    }
                                    else
                                    {
                                        _19110 = false;
                                    }
                                    _19108 = _19110;
                                }
                                else
                                {
                                    _19108 = false;
                                }
                                if (_19108)
                                {
                                    _19209 = true;
                                    _19208 = _19049;
                                    _19207 = _19051 / current_view.clip_to_view[3].z;
                                    break;
                                }
                                _19209 = false;
                                _19208 = _18929;
                                _19207 = 0.0;
                                break;
                            } while(false);
                            vec3 _19648;
                            if (_19209)
                            {
                                vec4 _11150 = (vec4(mix(_10127, _10148, vec3(_19208)), 1.0) * current_view.sample_to_view) * current_view.view_to_world;
                                vec3 _9816 = ((_11150.xyz / vec3(_11150.w)) + (wo * _19207)) - lantern_buf_1._member0[grid_light_indices_1._member0[_5613]].position.xyz;
                                bool _19210;
                                if (abs(_9816.y) > 0.5)
                                {
                                    _19210 = true;
                                }
                                else
                                {
                                    vec2 _9821 = _9816.xz;
                                    _19210 = dot(_9821, _9821) > 0.136900007724761962890625;
                                }
                                _19648 = mix(_9927, vec3(0.0), bvec3(_19210));
                            }
                            else
                            {
                                _19648 = _9927;
                            }
                            _19647 = _19648;
                        }
                        else
                        {
                            _19647 = _9927;
                        }
                        vec2 _9848 = vec2((float(frame_constants.game_time_sec) + frame_constants.game_time_frac) * 4.0, float(grid_light_indices_1._member0[_5613] * 10u));
                        ivec2 _11373 = ivec2(floor(_9848));
                        vec2 _11374 = fract(_9848);
                        uvec2 _11375 = uvec2(_11373);
                        uint _11425 = _11375.y;
                        uint _11431 = _11425 + (_11425 << 10u);
                        uint _11433 = _11431 ^ (_11431 >> 6u);
                        uint _11435 = _11433 + (_11433 << 3u);
                        uint _11437 = _11435 ^ (_11435 >> 11u);
                        uint _11445 = (((_11375.x * 1664525u) + (_11437 + (_11437 << 15u))) + 1013904223u) * 1664525u;
                        uint _11447 = _11445 ^ (_11445 >> 11u);
                        uint _11450 = _11447 ^ ((_11447 << 7u) & 2636928640u);
                        uint _11453 = _11450 ^ ((_11450 << 15u) & 4022730752u);
                        uint _11455 = _11453 ^ (_11453 >> 18u);
                        float _19318;
                        _19318 = _19218;
                        uint _11472;
                        uint _11491;
                        float _11497;
                        uint _19317 = 0u;
                        uint _19747 = _11455;
                        for (;;)
                        {
                            if (!(_19317 < 1u))
                            {
                                break;
                            }
                            uint _11483 = _19747 + (_19747 << 10u);
                            uint _11485 = _11483 ^ (_11483 >> 6u);
                            uint _11487 = _11485 + (_11485 << 3u);
                            uint _11489 = _11487 ^ (_11487 >> 11u);
                            _11491 = _11489 + (_11489 << 15u);
                            _11497 = uintBitsToFloat((_19747 & 8388607u) | 1065353216u) - 1.0;
                            _11472 = _19317 + 1u;
                            _19747 = _11491;
                            _19318 = _11497;
                            _19317 = _11472;
                            continue;
                        }
                        uvec2 _11383 = uvec2(_11373 + ivec2(1, 0));
                        uint _11501 = _11383.y;
                        uint _11507 = _11501 + (_11501 << 10u);
                        uint _11509 = _11507 ^ (_11507 >> 6u);
                        uint _11511 = _11509 + (_11509 << 3u);
                        uint _11513 = _11511 ^ (_11511 >> 11u);
                        uint _11521 = (((_11383.x * 1664525u) + (_11513 + (_11513 << 15u))) + 1013904223u) * 1664525u;
                        uint _11523 = _11521 ^ (_11521 >> 11u);
                        uint _11526 = _11523 ^ ((_11523 << 7u) & 2636928640u);
                        uint _11529 = _11526 ^ ((_11526 << 15u) & 4022730752u);
                        uint _11531 = _11529 ^ (_11529 >> 18u);
                        float _19424;
                        _19424 = _19325;
                        uint _11548;
                        uint _11567;
                        float _11573;
                        uint _19423 = 0u;
                        uint _19746 = _11531;
                        for (;;)
                        {
                            if (!(_19423 < 1u))
                            {
                                break;
                            }
                            uint _11559 = _19746 + (_19746 << 10u);
                            uint _11561 = _11559 ^ (_11559 >> 6u);
                            uint _11563 = _11561 + (_11561 << 3u);
                            uint _11565 = _11563 ^ (_11563 >> 11u);
                            _11567 = _11565 + (_11565 << 15u);
                            _11573 = uintBitsToFloat((_19746 & 8388607u) | 1065353216u) - 1.0;
                            _11548 = _19423 + 1u;
                            _19746 = _11567;
                            _19424 = _11573;
                            _19423 = _11548;
                            continue;
                        }
                        uvec2 _11390 = uvec2(_11373 + ivec2(0, 1));
                        uint _11577 = _11390.y;
                        uint _11583 = _11577 + (_11577 << 10u);
                        uint _11585 = _11583 ^ (_11583 >> 6u);
                        uint _11587 = _11585 + (_11585 << 3u);
                        uint _11589 = _11587 ^ (_11587 >> 11u);
                        uint _11597 = (((_11390.x * 1664525u) + (_11589 + (_11589 << 15u))) + 1013904223u) * 1664525u;
                        uint _11599 = _11597 ^ (_11597 >> 11u);
                        uint _11602 = _11599 ^ ((_11599 << 7u) & 2636928640u);
                        uint _11605 = _11602 ^ ((_11602 << 15u) & 4022730752u);
                        uint _11607 = _11605 ^ (_11605 >> 18u);
                        float _19531;
                        _19531 = _19432;
                        uint _11624;
                        uint _11643;
                        float _11649;
                        uint _19530 = 0u;
                        uint _19745 = _11607;
                        for (;;)
                        {
                            if (!(_19530 < 1u))
                            {
                                break;
                            }
                            uint _11635 = _19745 + (_19745 << 10u);
                            uint _11637 = _11635 ^ (_11635 >> 6u);
                            uint _11639 = _11637 + (_11637 << 3u);
                            uint _11641 = _11639 ^ (_11639 >> 11u);
                            _11643 = _11641 + (_11641 << 15u);
                            _11649 = uintBitsToFloat((_19745 & 8388607u) | 1065353216u) - 1.0;
                            _11624 = _19530 + 1u;
                            _19745 = _11643;
                            _19531 = _11649;
                            _19530 = _11624;
                            continue;
                        }
                        uvec2 _11398 = uvec2(_11373 + ivec2(1));
                        uint _11653 = _11398.y;
                        uint _11659 = _11653 + (_11653 << 10u);
                        uint _11661 = _11659 ^ (_11659 >> 6u);
                        uint _11663 = _11661 + (_11661 << 3u);
                        uint _11665 = _11663 ^ (_11663 >> 11u);
                        uint _11673 = (((_11398.x * 1664525u) + (_11665 + (_11665 << 15u))) + 1013904223u) * 1664525u;
                        uint _11675 = _11673 ^ (_11673 >> 11u);
                        uint _11678 = _11675 ^ ((_11675 << 7u) & 2636928640u);
                        uint _11681 = _11678 ^ ((_11678 << 15u) & 4022730752u);
                        uint _11683 = _11681 ^ (_11681 >> 18u);
                        float _19639;
                        _19639 = _19540;
                        uint _11700;
                        uint _11719;
                        float _11725;
                        uint _19638 = 0u;
                        uint _19744 = _11683;
                        for (;;)
                        {
                            if (!(_19638 < 1u))
                            {
                                break;
                            }
                            uint _11711 = _19744 + (_19744 << 10u);
                            uint _11713 = _11711 ^ (_11711 >> 6u);
                            uint _11715 = _11713 + (_11713 << 3u);
                            uint _11717 = _11715 ^ (_11715 >> 11u);
                            _11719 = _11717 + (_11717 << 15u);
                            _11725 = uintBitsToFloat((_19744 & 8388607u) | 1065353216u) - 1.0;
                            _11700 = _19638 + 1u;
                            _19744 = _11719;
                            _19639 = _11725;
                            _19638 = _11700;
                            continue;
                        }
                        vec2 _11731 = (_11374 * _11374) * (vec2(3.0) - (vec2(2.0) * _11374));
                        float _11406 = _11731.x;
                        float _11407 = 1.0 - _11406;
                        float _11409 = _11731.y;
                        _21984 = _19639;
                        _21926 = _19531;
                        _21867 = _19424;
                        _21807 = _19318;
                        _19650 = (((_19647 * mix(0.5, 1.0, (((1.0 - _11409) * ((_19318 * _11407) + (_19424 * _11406))) + ((_19531 * _11407) * _11409)) + ((_19639 * _11406) * _11409))) * 1.0) * _22721) * frame_constants.ev_mult;
                    }
                    else
                    {
                        _21984 = _19540;
                        _21926 = _19432;
                        _21867 = _19325;
                        _21807 = _19218;
                        _19650 = vec3(0.0);
                    }
                    result_1 = _19654 + _19650;
                    slot_idx = _18884 + 1u;
                    _19654 = result_1;
                    _19540 = _21984;
                    _19432 = _21926;
                    _19325 = _21867;
                    _19218 = _21807;
                    _18884 = slot_idx;
                    continue;
                }
                _19811 = _19654;
            }
            else
            {
                _19811 = result;
            }
            _19810 = _19811;
        }
        _19809 = _19810;
    }
    else
    {
        _19809 = result;
    }
    vec3 _19807;
    if ((frame_constants.render_overrides & 4u) != 0u)
    {
        _19807 = _22721;
    }
    else
    {
        vec3 _19808;
        if ((frame_constants.render_overrides & 8u) != 0u)
        {
            vec3 _5669 = (_5788 * 0.5) + vec3(0.5);
            _19808 = _5669 * _5669;
        }
        else
        {
            _19808 = _19809;
        }
        _19807 = _19808;
    }
    entryPointParam_ps_main_color = vec4(_19807, 0.0);
}

