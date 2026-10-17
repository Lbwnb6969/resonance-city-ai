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

float _18268;
uvec4 _21647;
DistanceWithPenetration _9601;
DistanceWithPenetration _11894;

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
layout(set = 0, binding = 10) uniform texture2D indirect_radiance_tex;
layout(set = 0, binding = 11) uniform utexture2D rdi_reservoir_tex;

layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    ivec2 _335 = ivec2(gl_FragCoord.xy);
    uvec2 _337 = uvec2(_335);
    vec4 _5329 = ((texelFetch(blue_noise_textures_uniform01, ivec2((_337 + uvec2(fract((vec2(0.75487768650054931640625, 0.56984031200408935546875) * float(frame_counter.index)) + vec2(0.5)) * vec2(256.0))) % uvec2(256u)), 0) * 255.0) * vec4(0.00390625)) + vec4(0.001953125);
    uvec4 sampled = texelFetch(gbuffer_tex, ivec2(_337), 0);
    vec4 sampled_1 = texelFetch(depth_tex, ivec2(_337), 0);
    float _427 = sampled_1.x;
    uint _5350 = sampled.x;
    float _5407 = float((_5350 >> uint(24)) & 255u) * 0.0039215688593685626983642578125;
    uint _5352 = sampled.y;
    float _5449 = float((_5352 >> uint(24)) & 255u) * 0.0039215688593685626983642578125;
    vec3 _5358 = (vec4(float(_5350 & 255u) * 0.0039215688593685626983642578125, float((_5350 >> uint(8)) & 255u) * 0.0039215688593685626983642578125, float((_5350 >> uint(16)) & 255u) * 0.0039215688593685626983642578125, _5407).xyz * 2.0) - vec3(1.0);
    vec3 _5362 = vec4(float(_5352 & 255u) * 0.0039215688593685626983642578125, float((_5352 >> uint(8)) & 255u) * 0.0039215688593685626983642578125, float((_5352 >> uint(16)) & 255u) * 0.0039215688593685626983642578125, _5449).xyz;
    vec2 _515 = vec2(globalParams.depth_tex_dims);
    vec2 _5462 = (vec2(_335) + vec2(0.5)) / _515;
    vec2 _5493 = (_5462 - vec2(0.5)) * vec2(2.0, -2.0);
    vec4 _5484 = vec4(_5493, _427, 1.0);
    vec4 _5488 = (_5484 * current_view.sample_to_view) * current_view.view_to_world;
    vec3 wo = -normalize(((vec4(_5493, 0.0, 1.0) * current_view.sample_to_view) * current_view.view_to_world).xyz);
    vec3 _5507 = _5488.xyz / vec3(_5488.w);
    float _625 = clamp(0.100000001490116119384765625 + textureLod(sampler2D(ssgi_tex, samplers_nnc), _5462, 0.0).x, 0.0, 1.0);
    vec2 _5515 = _5507.xz;
    vec2 _5546 = (_5515 * vec2(0.0076923076994717121124267578125)) * 0.5;
    float _5521 = max(0.00999999977648258209228515625, frame_constants.ground_fog.y);
    vec2 _5594 = (_5515 * vec2(0.001000000047497451305389404296875)) + vec2(0.5);
    float _5524 = _5507.y - (textureLod(nonuniformEXT(sampler2D(resource_handles[terrain_heightmap.bg_terrain_fog_height.bindless_handle], samplers_lnc_iso)), vec2(_5594.y, 1.0 - _5594.x), 0.0).x + (40.0 * frame_constants.ground_fog.x));
    float _5530 = 1.0 + (_5521 * max(0.0, _5524));
    vec3 _821 = frame_constants.sun_color.xyz * exp(-((((0.00999999977648258209228515625 * frame_constants.fog_relative_extinction) * ((3.2200000286102294921875 * exp2(-dot(_5546, _5546))) * frame_constants.ground_fog.z)) * ((1.0 / ((2.0 * _5521) * (_5530 * _5530))) + max(0.0, -_5524))) / max(0.0500000007450580596923828125, frame_constants.dir_to_primary_directional_light.y)));
    vec3 _21649 = mix(_5362 * _5362, vec3(0.5), bvec3((frame_constants.render_overrides & 1u) != 0u));
    vec4 _6835 = texelFetch(shadows_screen_shadows_tex, ivec2(_337), 0);
    float _6836 = _6835.x;
    float _6760 = dot(_5358, frame_constants.dir_to_primary_directional_light);
    vec3 _17892;
    do
    {
        bool _17891;
        if (_6760 <= 0.0)
        {
            _17891 = true;
        }
        else
        {
            _17891 = dot(_5358, wo) <= 0.0;
        }
        if (_17891)
        {
            _17892 = vec3(0.0);
            break;
        }
        vec3 _6881 = normalize(wo + frame_constants.dir_to_primary_directional_light);
        float _6937 = dot(_5358, _6881);
        float _6958 = dot(_5358, wo);
        float _6979 = ((_6937 * _6937) * (-0.9375)) + 1.0;
        _17892 = ((mix(vec3(0.039999999105930328369140625), vec3(1.0), vec3(pow(max(0.0, 1.0 - dot(_6881, frame_constants.dir_to_primary_directional_light)), 5.0))) * (((2.0 * _6760) * _6958) / ((_6760 * sqrt((((_6958 * (-0.0625)) + _6958) * _6958) + 0.0625)) + (_6958 * sqrt((((_6760 * (-0.0625)) + _6760) * _6760) + 0.0625))))) * (0.0625 / ((3.1415927410125732421875 * _6979) * _6979))) / vec3((4.0 * _6958) * _6760);
        break;
    } while(false);
    vec4 _15713[3] = vec4[](vec4(0.0), vec4(0.0), vec4(0.0));
    float _7060 = _5329.x;
    uint _7064 = uint((_7060 * 3.0) + 0.5) & 3u;
    float _17896;
    _17896 = 0.0;
    float _7127;
    uint _7131;
    uint _17895 = 0u;
    for (;;)
    {
        if (!(_17895 < 3u))
        {
            break;
        }
        uvec2 _7084 = (_337 / uvec2(2u)) + uvec2(spatial_resolve_offsets.values.data[(_7064 * 16u) + _17895].xy);
        float _7094 = exp2(-min(30.0, 80.0 * abs(1.0 - (texelFetch(half_depth_tex, ivec2(_7084), 0).x / _427))));
        uint _7123;
        uint _20160 = 0u;
        for (;;)
        {
            if (!(_20160 < 3u))
            {
                break;
            }
            _15713[_20160] += (texelFetch(indirect_radiance_tex, ivec2(_7084 + uvec2((_20160 * globalParams.indirect_radiance_tex_dims.x) / 3u, 0u)), 0) * _7094);
            _7123 = _20160 + 1u;
            _20160 = _7123;
            continue;
        }
        _7127 = _17896 + _7094;
        _7131 = _17895 + 1u;
        _17896 = _7127;
        _17895 = _7131;
        continue;
    }
    float _17898;
    if (_17896 < 0.001000000047497451305389404296875)
    {
        float _17899;
        _17899 = _17896;
        float _7200;
        uint _7204;
        uint _17897 = 3u;
        for (;;)
        {
            if (!(_17897 < 6u))
            {
                break;
            }
            uvec2 _7157 = (_337 / uvec2(2u)) + uvec2(spatial_resolve_offsets.values.data[(_7064 * 16u) + _17897].xy);
            float _7167 = exp2(-min(30.0, 80.0 * abs(1.0 - (texelFetch(half_depth_tex, ivec2(_7157), 0).x / _427))));
            uint _7196;
            uint _20157 = 0u;
            for (;;)
            {
                if (!(_20157 < 3u))
                {
                    break;
                }
                _15713[_20157] += (texelFetch(indirect_radiance_tex, ivec2(_7157 + uvec2((_20157 * globalParams.indirect_radiance_tex_dims.x) / 3u, 0u)), 0) * _7167);
                _7196 = _20157 + 1u;
                _20157 = _7196;
                continue;
            }
            _7200 = _17899 + _7167;
            _7204 = _17897 + 1u;
            _17899 = _7200;
            _17897 = _7204;
            continue;
        }
        _17898 = _17899;
    }
    else
    {
        _17898 = _17896;
    }
    float _7212 = 1.0 / max(9.9999997473787516355514526367188e-05, _17898);
    _15713[0] *= _7212;
    _15713[1] *= _7212;
    _15713[2] *= _7212;
    vec3 _7239 = (_15713[0].yzw + _15713[1].yzw) + _15713[2].yzw;
    vec3 _7243 = _7239 / vec3(max(9.9999996826552253889678874634872e-21, length(_7239)));
    vec3 _7258 = vec3(_15713[0].x, _15713[1].x, _15713[2].x);
    vec3 _7264 = _15713[0].yzw / vec3(max(9.9999996826552253889678874634872e-21, _15713[0].x));
    vec3 _7269 = _15713[1].yzw / vec3(max(9.9999996826552253889678874634872e-21, _15713[1].x));
    vec3 _7274 = _15713[2].yzw / vec3(max(9.9999996826552253889678874634872e-21, _15713[2].x));
    vec3 _7285 = max(vec3(0.0), vec3(1.0) - (color_library_data.indirect_light_tint.xyz * 0.920000016689300537109375));
    vec3 _7298 = max(vec3(0.0), mix((_7285 / vec3(dot(_7285, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)))) * dot(_7258, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)), _7258, vec3(1.16999995708465576171875)) * 1.2000000476837158203125);
    vec3 _17927;
    if (any(notEqual(_7243, vec3(0.0))))
    {
        vec3 _15015[4] = vec3[](_7298, (-vec3(_7264.y, _7269.y, _7274.y)) * _7298, vec3(_7264.z, _7269.z, _7274.z) * _7298, (-vec3(_7264.x, _7269.x, _7274.x)) * _7298);
        vec3 _8650 = normalize(vec3(-dot(_15015[3], vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)), -dot(_15015[1], vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)), dot(_15015[2], vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875))));
        vec3 _8678 = vec3(abs(dot(vec3(-_15015[3].x, -_15015[1].x, _15015[2].x), _8650)), abs(dot(vec3(-_15015[3].y, -_15015[1].y, _15015[2].y), _8650)), abs(dot(vec3(-_15015[3].z, -_15015[1].z, _15015[2].z), _8650))) / _15015[0];
        float _8684 = dot(_8650, _5358);
        vec3 _15010[4] = vec3[](vec3(0.886227548122406005859375), vec3(1.0) * (_5358.y * (-1.02332770824432373046875)), vec3(1.0) * (_5358.z * 1.02332770824432373046875), vec3(1.0) * (_5358.x * (-1.02332770824432373046875)));
        vec3 _17921;
        _17921 = vec3(0.0);
        vec3 _8744;
        uint _8748;
        uint _17920 = 0u;
        SPIRV_CROSS_UNROLL
        for (;;)
        {
            if (!(_17920 < 4u))
            {
                break;
            }
            _8744 = _17921 + (_15010[_17920] * _15015[_17920]);
            _8748 = _17920 + 1u;
            _17921 = _8744;
            _17920 = _8748;
            continue;
        }
        float _8844;
        vec3 _8543 = max(max(vec3(0.0), _17921 + (((_15015[0] * ((_8678 * 0.07999999821186065673828125) + ((_8678 * 0.60000002384185791015625) * _8678))) * 0.25) * (0.3153915703296661376953125 * (((3.0 * _8684) * _8684) - 1.0)))), _7298 * 2.0);
        float _8546 = mix(0.5, 1.0, _625);
        vec3 _17924;
        do
        {
            _8844 = dot(_5358, _7243);
            bool _17923;
            if (_8844 <= 0.0)
            {
                _17923 = true;
            }
            else
            {
                _17923 = dot(_5358, wo) <= 0.0;
            }
            if (_17923)
            {
                _17924 = vec3(0.0);
                break;
            }
            vec3 _8806 = normalize(wo + _7243);
            float _8862 = dot(_5358, _8806);
            float _8883 = dot(_5358, wo);
            float _8904 = ((_8862 * _8862) * (-0.9084937572479248046875)) + 1.0;
            _17924 = ((mix(vec3(0.039999999105930328369140625), vec3(1.0), vec3(pow(max(0.0, 1.0 - dot(_8806, _7243)), 5.0))) * (((2.0 * _8844) * _8883) / ((_8844 * sqrt((((_8883 * (-0.09150625765323638916015625)) + _8883) * _8883) + 0.09150625765323638916015625)) + (_8883 * sqrt((((_8844 * (-0.09150625765323638916015625)) + _8844) * _8844) + 0.09150625765323638916015625))))) * (0.09150625765323638916015625 / ((3.1415927410125732421875 * _8904) * _8904))) / vec3((4.0 * _8883) * _8844);
            break;
        } while(false);
        _17927 = (((max(vec3(_8546), ((((((_21649 * 2.040400028228759765625) - vec3(0.3323999941349029541015625)) * _8546) + ((_21649 * (-4.79510021209716796875)) + vec3(0.6417000293731689453125))) * _8546) + ((_21649 * 2.755199909210205078125) + vec3(0.69029998779296875))) * _8546) * 1.10000002384185791015625) * _21649) * _8543) + ((((_8543 * _5407) * _17924) * _625) * clamp(_8844 * 12.0, 0.0, 4.0));
    }
    else
    {
        _17927 = vec3(0.0);
    }
    vec3 result = (((((_21649 * mix(mix(0.0, 0.5, _5449), 1.0, smoothstep(mix(0.0, -0.699999988079071044921875, _5449), mix(1.0, 0.699999988079071044921875, _5449), _6760))) * _821) * _6836) * 0.3183098733425140380859375) + (((((((_17892 * _821) * _5407) * (color_library_data.sky_base.xyz * color_library_data.sky_base.xyz)) * max(0.0, _6760)) * _821) * _6836) * 0.3183098733425140380859375)) + _17927;
    vec3 _18797;
    if (globalParams.lantern_count > 0u)
    {
        uvec3 _8989 = uvec3(clamp(floor((_5507 * vec3(0.24615384638309478759765625, 0.123076923191547393798828125, 0.24615384638309478759765625)) + vec3(16.0, 2.0, 16.0)), vec3(0.0), vec3(31.0, 15.0, 31.0)));
        uint _9018 = (32u * ((32u * _8989.y) + _8989.z)) + _8989.x;
        uint cell_light_count = light_indirection_grid._member0[_9018] >> 20u;
        bool _3924 = subgroupAll(cell_light_count <= 2u);
        uint _21650 = _3924 ? 2u : 6u;
        vec3 _18798;
        if (6u == _21650)
        {
            uint i;
            uint lanterns_found[8];
            uint _18766 = 0u;
            for (;;)
            {
                if (!(_18766 < 8u))
                {
                    break;
                }
                lanterns_found[_18766] = 4294967295u;
                i = _18766 + 1u;
                _18766 = i;
                continue;
            }
            uvec2 _11018 = uvec2(1u, 2u);
            uvec2 _11019 = uvec2(_335 & ivec2(1));
            uint _18768;
            _18768 = 0u;
            uint _11040;
            int _11044;
            int _18767 = 0;
            for (;;)
            {
                if (!(_18767 < 2))
                {
                    break;
                }
                _11040 = _18768 + (_11019[_18767] * _11018[_18767]);
                _11044 = _18767 + 1;
                _18768 = _11040;
                _18767 = _11044;
                continue;
            }
            uint _4000 = _18768 & 3u;
            uint _18770;
            _18770 = 0u;
            uint reservoir_sample_idx;
            uint _20942;
            uint _18769 = 0u;
            for (;;)
            {
                bool _18771;
                if (_18769 < 8u)
                {
                    _18771 = _18770 < 8u;
                }
                else
                {
                    _18771 = false;
                }
                if (!_18771)
                {
                    break;
                }
                uvec4 sampled_2 = texelFetch(rdi_reservoir_tex, ivec2(uvec2((_335 / ivec2(2)) + spatial_resolve_offsets.values.data[((_4000 * 16u) + _18769) + 256u].xy)), 0);
                uint _11053 = sampled_2.x;
                bool _19722;
                if (any(notEqual(sampled_2.xy, uvec2(0u))))
                {
                    _19722 = _11053 < globalParams.lantern_count;
                }
                else
                {
                    _19722 = false;
                }
                bool _19723;
                if (_19722)
                {
                    _19723 = lanterns_found[0u] != _11053;
                }
                else
                {
                    _19723 = false;
                }
                bool _19724;
                if (_19723)
                {
                    _19724 = lanterns_found[1u] != _11053;
                }
                else
                {
                    _19724 = false;
                }
                bool _19725;
                if (_19724)
                {
                    _19725 = lanterns_found[2u] != _11053;
                }
                else
                {
                    _19725 = false;
                }
                bool _19726;
                if (_19725)
                {
                    _19726 = lanterns_found[3u] != _11053;
                }
                else
                {
                    _19726 = false;
                }
                bool _19727;
                if (_19726)
                {
                    _19727 = lanterns_found[4u] != _11053;
                }
                else
                {
                    _19727 = false;
                }
                bool _19728;
                if (_19727)
                {
                    _19728 = lanterns_found[5u] != _11053;
                }
                else
                {
                    _19728 = false;
                }
                bool _19729;
                if (_19728)
                {
                    _19729 = lanterns_found[6u] != _11053;
                }
                else
                {
                    _19729 = false;
                }
                bool _19730;
                if (_19729)
                {
                    _19730 = lanterns_found[7u] != _11053;
                }
                else
                {
                    _19730 = false;
                }
                if (_19730)
                {
                    lanterns_found[_18770] = _11053;
                    _20942 = _18770 + 1u;
                }
                else
                {
                    _20942 = _18770;
                }
                reservoir_sample_idx = _18769 + 1u;
                _18770 = _20942;
                _18769 = reservoir_sample_idx;
                continue;
            }
            uint _18776;
            _18776 = _18770;
            uint reservoir_sample_idx_1;
            uint _20943;
            uint _18772 = 0u;
            for (;;)
            {
                if (!(_18772 < 8u))
                {
                    break;
                }
                uint _4183 = subgroupQuadSwapDiagonal(lanterns_found[_18772]);
                bool _19694;
                if (_4183 < globalParams.lantern_count)
                {
                    _19694 = _18776 < 8u;
                }
                else
                {
                    _19694 = false;
                }
                if (_19694)
                {
                    bool _19695;
                    if (lanterns_found[0u] != _4183)
                    {
                        _19695 = lanterns_found[1u] != _4183;
                    }
                    else
                    {
                        _19695 = false;
                    }
                    bool _19696;
                    if (_19695)
                    {
                        _19696 = lanterns_found[2u] != _4183;
                    }
                    else
                    {
                        _19696 = false;
                    }
                    bool _19697;
                    if (_19696)
                    {
                        _19697 = lanterns_found[3u] != _4183;
                    }
                    else
                    {
                        _19697 = false;
                    }
                    bool _19698;
                    if (_19697)
                    {
                        _19698 = lanterns_found[4u] != _4183;
                    }
                    else
                    {
                        _19698 = false;
                    }
                    bool _19699;
                    if (_19698)
                    {
                        _19699 = lanterns_found[5u] != _4183;
                    }
                    else
                    {
                        _19699 = false;
                    }
                    bool _19700;
                    if (_19699)
                    {
                        _19700 = lanterns_found[6u] != _4183;
                    }
                    else
                    {
                        _19700 = false;
                    }
                    bool _19701;
                    if (_19700)
                    {
                        _19701 = lanterns_found[7u] != _4183;
                    }
                    else
                    {
                        _19701 = false;
                    }
                    uint _19710;
                    if (_19701)
                    {
                        lanterns_found[_18776] = _4183;
                        _19710 = _18776 + 1u;
                    }
                    else
                    {
                        _19710 = _18776;
                    }
                    _20943 = _19710;
                }
                else
                {
                    _20943 = _18776;
                }
                reservoir_sample_idx_1 = _18772 + 1u;
                _18776 = _20943;
                _18772 = reservoir_sample_idx_1;
                continue;
            }
            uint ridx;
            Reservoir1sppStreamState stream_state[2];
            Reservoir1spp reservoir[2];
            uint _18773 = 0u;
            for (;;)
            {
                if (!(_18773 < 2u))
                {
                    break;
                }
                stream_state[_18773] = Reservoir1sppStreamState(0.0, 0.0);
                reservoir[_18773] = Reservoir1spp(0.0, 0u, 0.0, 0.0);
                ridx = _18773 + 1u;
                _18773 = ridx;
                continue;
            }
            uint found_lantern_idx;
            uint _18778 = 0u;
            for (;;)
            {
                if (!(_18778 < _18776))
                {
                    break;
                }
                vec2 _11091 = unpackHalf2x16(lantern_buf_1._member0[lanterns_found[_18778]].intensity_color_id);
                float _11092 = _11091.x;
                uint _11097 = lantern_buf_1._member0[lanterns_found[_18778]].intensity_color_id >> uint(16);
                vec3 _11115 = lantern_buf_1._member0[lanterns_found[_18778]].position.xyz - _5507;
                float _11117 = dot(_11115, _11115);
                vec3 _11124 = _11115 + vec3(0.0, 0.1500000059604644775390625, 0.0);
                vec3 _19666;
                do
                {
                    if (_11097 == 0u)
                    {
                        _19666 = vec3(1.0, 0.800000011920928955078125, 0.100000001490116119384765625);
                        break;
                    }
                    else
                    {
                        if (_11097 == 1u)
                        {
                            _19666 = vec3(0.0, 0.735904157161712646484375, 3.67952060699462890625);
                            break;
                        }
                        else
                        {
                            if (_11097 == 2u)
                            {
                                _19666 = vec3(0.20513366162776947021484375, 1.02566826343536376953125, 0.20513366162776947021484375);
                                break;
                            }
                            else
                            {
                                if (_11097 == 3u)
                                {
                                    _19666 = vec3(0.85153043270111083984375, 0.56768691539764404296875, 2.8384344577789306640625);
                                    break;
                                }
                                else
                                {
                                    _19666 = vec3(1.82324230670928955078125, 0.546972692012786865234375, 0.182324230670928955078125);
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
                float _11227 = dot(((_19666 * 4.0) * _11092) * ((max(0.0, dot(_5358, _11115 / vec3(length(_11115)))) * ((1.0 / (0.3359999954700469970703125 + _11117)) * smoothstep(36.0 * _11092, 16.0 * _11092, _11117))) * smoothstep(-0.5, 0.20000000298023223876953125, (_11124 / vec3(length(_11124))).y)), vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875));
                float inv_pdf_q = float(_18776);
                float _4536 = fract(_7060 + (float(_18778) / inv_pdf_q));
                if (reservoir[0].w_sum <= reservoir[1].w_sum)
                {
                    float _11273;
                    float _11283;
                    float _11286;
                    uint _19682;
                    float _19687;
                    do
                    {
                        bool _11288;
                        _11273 = stream_state[0].M_sum + 1.0;
                        float _11274 = _11227 * inv_pdf_q;
                        do
                        {
                            _11283 = reservoir[0].w_sum + _11274;
                            _11286 = reservoir[0].M + 1.0;
                            _11288 = (_11274 / _11283) >= _4536;
                            if (_11288)
                            {
                                _19682 = lanterns_found[_18778];
                                break;
                            }
                            else
                            {
                                _19682 = reservoir[0].payload;
                                break;
                            }
                            break; // unreachable workaround
                        } while(false);
                        if (_11288)
                        {
                            _19687 = _11227;
                            break;
                        }
                        else
                        {
                            _19687 = stream_state[0].p_q_sel;
                            break;
                        }
                        break; // unreachable workaround
                    } while(false);
                    reservoir[0] = Reservoir1spp(_11283, _19682, _11286, reservoir[0].W);
                    stream_state[0] = Reservoir1sppStreamState(_19687, _11273);
                }
                else
                {
                    float _11237;
                    float _11247;
                    float _11250;
                    uint _19672;
                    float _19677;
                    do
                    {
                        bool _11252;
                        _11237 = stream_state[1].M_sum + 1.0;
                        float _11238 = _11227 * inv_pdf_q;
                        do
                        {
                            _11247 = reservoir[1].w_sum + _11238;
                            _11250 = reservoir[1].M + 1.0;
                            _11252 = (_11238 / _11247) >= _4536;
                            if (_11252)
                            {
                                _19672 = lanterns_found[_18778];
                                break;
                            }
                            else
                            {
                                _19672 = reservoir[1].payload;
                                break;
                            }
                            break; // unreachable workaround
                        } while(false);
                        if (_11252)
                        {
                            _19677 = _11227;
                            break;
                        }
                        else
                        {
                            _19677 = stream_state[1].p_q_sel;
                            break;
                        }
                        break; // unreachable workaround
                    } while(false);
                    reservoir[1] = Reservoir1spp(_11247, _19672, _11250, reservoir[1].W);
                    stream_state[1] = Reservoir1sppStreamState(_19677, _11237);
                }
                found_lantern_idx = _18778 + 1u;
                _18778 = found_lantern_idx;
                continue;
            }
            uint ridx_1;
            uint _18779 = 1u;
            for (;;)
            {
                if (!(_18779 < 2u))
                {
                    break;
                }
                stream_state[0].M_sum += stream_state[_18779].M_sum;
                ridx_1 = _18779 + 1u;
                _18779 = ridx_1;
                continue;
            }
            uint ridx_2;
            uint _18780 = 1u;
            for (;;)
            {
                if (!(_18780 < 2u))
                {
                    break;
                }
                stream_state[_18780].M_sum = stream_state[0].M_sum;
                ridx_2 = _18780 + 1u;
                _18780 = ridx_2;
                continue;
            }
            vec3 _18800;
            _18800 = result;
            uint ridx_3;
            vec3 _21029;
            float _21182;
            float _21269;
            float _21355;
            float _21440;
            uint _18781 = 0u;
            float _19123;
            float _19225;
            float _19328;
            float _19432;
            for (;;)
            {
                if (!(_18781 < 2u))
                {
                    break;
                }
                reservoir[_18781] = Reservoir1spp(reservoir[_18781].w_sum, reservoir[_18781].payload, stream_state[_18781].M_sum, reservoir[_18781].w_sum / max(9.9999999392252902907785028219223e-09, stream_state[_18781].M_sum * stream_state[_18781].p_q_sel));
                if (reservoir[_18781].W > 0.0)
                {
                    vec2 _11456 = unpackHalf2x16(lantern_buf_1._member0[reservoir[_18781].payload].intensity_color_id);
                    float _11457 = _11456.x;
                    uint _11462 = lantern_buf_1._member0[reservoir[_18781].payload].intensity_color_id >> uint(16);
                    vec3 _11476 = lantern_buf_1._member0[reservoir[_18781].payload].position.xyz - _5507;
                    float _11477 = length(_11476);
                    float _11478 = dot(_11476, _11476);
                    vec3 _11485 = _11476 + vec3(0.0, 0.1500000059604644775390625, 0.0);
                    vec3 _11491 = vec3(_11477);
                    vec3 _18801;
                    do
                    {
                        if (_11462 == 0u)
                        {
                            _18801 = vec3(1.0, 0.800000011920928955078125, 0.100000001490116119384765625);
                            break;
                        }
                        else
                        {
                            if (_11462 == 1u)
                            {
                                _18801 = vec3(0.0, 0.735904157161712646484375, 3.67952060699462890625);
                                break;
                            }
                            else
                            {
                                if (_11462 == 2u)
                                {
                                    _18801 = vec3(0.20513366162776947021484375, 1.02566826343536376953125, 0.20513366162776947021484375);
                                    break;
                                }
                                else
                                {
                                    if (_11462 == 3u)
                                    {
                                        _18801 = vec3(0.85153043270111083984375, 0.56768691539764404296875, 2.8384344577789306640625);
                                        break;
                                    }
                                    else
                                    {
                                        _18801 = vec3(1.82324230670928955078125, 0.546972692012786865234375, 0.182324230670928955078125);
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
                    vec3 _11502 = ((_18801 * 4.0) * _11457) * ((max(0.0, dot(_5358, _11476 / _11491)) * ((1.0 / (0.3359999954700469970703125 + _11478)) * smoothstep(36.0 * _11457, 16.0 * _11457, _11478))) * smoothstep(-0.5, 0.20000000298023223876953125, (_11485 / vec3(length(_11485))).y));
                    vec3 _11586 = _11502;
                    float _18803;
                    _18803 = _11502.x;
                    float _11604;
                    int _11608;
                    int _18802 = 1;
                    SPIRV_CROSS_UNROLL
                    for (;;)
                    {
                        if (!(_18802 < 3))
                        {
                            break;
                        }
                        _11604 = max(_18803, _11586[_18802]);
                        _11608 = _18802 + 1;
                        _18803 = _11604;
                        _18802 = _11608;
                        continue;
                    }
                    vec3 _19538;
                    float _21183;
                    float _21270;
                    float _21356;
                    float _21441;
                    if ((reservoir[_18781].W * _18803) > 0.0)
                    {
                        vec3 _19535;
                        if (_11477 > 0.5)
                        {
                            vec3 _11369 = _5484.xyz;
                            vec4 _11647 = (vec4((_5507 + ((_11476 * (_11477 - 0.5)) / _11491)) + (_5358 * (0.0199999995529651641845703125 * _5329.y)), 1.0) * current_view.world_to_view) * current_view.view_to_sample;
                            vec3 _11651 = _11647.xyz / vec3(_11647.w);
                            vec4 _11673 = vec4(_11369, 1.0) + (vec4(_11651 - _11369, 0.0) * float(int(sign(_11651.z))));
                            float _11674 = _11673.w;
                            vec3 _11687 = (_11673 / vec4(float((_11674 >= 0.0) ? 1 : (-1)) * max(1.0000000133514319600180897396058e-10, abs(_11674)))).xyz;
                            vec3 _11689 = _11687 - _11369;
                            vec3 _11695 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), lessThan(_11689, vec3(0.0))) - _11369) / _11689;
                            vec3 _11702 = _11369 + (_11689 * max(0.0, max(_11695.x, _11695.y)));
                            vec3 _11703 = _11687 - _11702;
                            vec3 _11708 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), greaterThanEqual(_11703, vec3(0.0))) - _11702) / _11703;
                            vec3 _11723 = _11702 + (_11703 * min(1.0, min(min(_11708.x, _11708.y), _11708.z)));
                            float _19112;
                            float _19113;
                            bool _19114;
                            do
                            {
                                float _11793 = 0.800000011920928955078125 * current_view.clip_to_view[3].z;
                                uint _11809 = uint(int(max(2u, min(4u, uint(int(floor(length((((_11723.xy * vec2(0.5, -0.5)) + vec2(0.5)) - ((_11702.xy * vec2(0.5, -0.5)) + vec2(0.5))) * _515))))))));
                                float _18834;
                                bool _18953;
                                float _18954;
                                float _18956;
                                float _18975;
                                float _18994;
                                do
                                {
                                    vec3 _11961 = _11723 - _11702;
                                    float _11970 = float(_11809);
                                    float _18808;
                                    do
                                    {
                                        if (_11723.z > 9.5367431640625e-07)
                                        {
                                            _18808 = _11970;
                                            break;
                                        }
                                        else
                                        {
                                            _18808 = max(1.0, _11970 - 1.0);
                                            break;
                                        }
                                        break; // unreachable workaround
                                    } while(false);
                                    float _11980 = 1.0 / _18808;
                                    bool _18844;
                                    float _18850;
                                    float _18854;
                                    float _18858;
                                    float _18866;
                                    if (_11809 > 0u)
                                    {
                                        float _11990 = mix(0.0, 1.0, pow(_7060 * _11980, 1.0));
                                        vec3 _11993 = _11702 + (_11961 * vec3(_11990));
                                        vec2 _12209 = (_11993.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                        float _12141 = 1.0 / _11993.z;
                                        float _12148 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _12209, 0.0).x;
                                        float _12155 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _12209, 0.0).x;
                                        float _12167 = (max(_12148, _12155) * 1.00000202655792236328125) - _12141;
                                        float _12171 = _12141 - min(_12148, _12155);
                                        bool _21657 = (_12167 < 0.0) ? (_12171 < _11793) : false;
                                        float _18835;
                                        bool _18845;
                                        float _18851;
                                        float _18855;
                                        float _18859;
                                        float _18867;
                                        if (_21657)
                                        {
                                            _18867 = _12167;
                                            _18859 = _12171;
                                            _18855 = _11793;
                                            _18851 = _11990;
                                            _18845 = _21657;
                                            _18835 = 0.0;
                                        }
                                        else
                                        {
                                            float _18837;
                                            _18837 = _11990;
                                            float _12019;
                                            uint _12037;
                                            bool _21658;
                                            bool _18846;
                                            float _18852;
                                            float _18856;
                                            float _18860;
                                            float _18868;
                                            uint _18818 = 1u;
                                            bool _18847 = _21657;
                                            for (;;)
                                            {
                                                if (!(_18818 < _11809))
                                                {
                                                    _18868 = 0.0;
                                                    _18860 = 0.0;
                                                    _18856 = 0.0;
                                                    _18852 = 1.0;
                                                    _18846 = _18847;
                                                    break;
                                                }
                                                _12019 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_18818) + _7060) * _11980, 1.0)));
                                                vec3 _12022 = _11702 + (_11961 * vec3(_12019));
                                                vec2 _12351 = (_12022.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                                float _12283 = 1.0 / _12022.z;
                                                float _12290 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _12351, 0.0).x;
                                                float _12297 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _12351, 0.0).x;
                                                float _12309 = (max(_12290, _12297) * 1.00000202655792236328125) - _12283;
                                                float _12313 = _12283 - min(_12290, _12297);
                                                _21658 = (_12309 < 0.0) ? (_12313 < _11793) : false;
                                                if (_21658)
                                                {
                                                    _18868 = _12309;
                                                    _18860 = _12313;
                                                    _18856 = _11793;
                                                    _18852 = _12019;
                                                    _18846 = _21658;
                                                    break;
                                                }
                                                _12037 = _18818 + 1u;
                                                _18818 = _12037;
                                                _18847 = _21658;
                                                _18837 = _12019;
                                                continue;
                                            }
                                            _18867 = _18868;
                                            _18859 = _18860;
                                            _18855 = _18856;
                                            _18851 = _18852;
                                            _18845 = _18846;
                                            _18835 = _18837;
                                        }
                                        _18866 = _18867;
                                        _18858 = _18859;
                                        _18854 = _18855;
                                        _18850 = _18851;
                                        _18844 = _18845;
                                        _18834 = _18835;
                                    }
                                    else
                                    {
                                        _18866 = 0.0;
                                        _18858 = 0.0;
                                        _18854 = 0.0;
                                        _18850 = 1.0;
                                        _18844 = false;
                                        _18834 = 0.0;
                                    }
                                    if (_18844)
                                    {
                                        _18994 = _18866;
                                        _18975 = _18854;
                                        _18956 = _18858;
                                        _18954 = _18850;
                                        _18953 = true;
                                        break;
                                    }
                                    else
                                    {
                                        _18994 = _11894.base._distance;
                                        _18975 = _11894.thickness;
                                        _18956 = _11894.penetration;
                                        _18954 = _18834;
                                        _18953 = false;
                                        break;
                                    }
                                    break; // unreachable workaround
                                } while(false);
                                bool _19013;
                                if (_18953)
                                {
                                    bool _19015;
                                    if (_18956 < _18975)
                                    {
                                        _19015 = _18994 < _18975;
                                    }
                                    else
                                    {
                                        _19015 = false;
                                    }
                                    _19013 = _19015;
                                }
                                else
                                {
                                    _19013 = false;
                                }
                                if (_19013)
                                {
                                    _19114 = true;
                                    _19113 = _18954;
                                    _19112 = _18956 / current_view.clip_to_view[3].z;
                                    break;
                                }
                                _19114 = false;
                                _19113 = _18834;
                                _19112 = 0.0;
                                break;
                            } while(false);
                            vec3 _19536;
                            if (_19114)
                            {
                                vec4 _12725 = (vec4(mix(_11702, _11723, vec3(_19113)), 1.0) * current_view.sample_to_view) * current_view.view_to_world;
                                vec3 _11391 = ((_12725.xyz / vec3(_12725.w)) + (wo * _19112)) - lantern_buf_1._member0[reservoir[_18781].payload].position.xyz;
                                bool _19115;
                                if (abs(_11391.y) > 0.5)
                                {
                                    _19115 = true;
                                }
                                else
                                {
                                    vec2 _11396 = _11391.xz;
                                    _19115 = dot(_11396, _11396) > 0.136900007724761962890625;
                                }
                                _19536 = mix(_11502, vec3(0.0), bvec3(_19115));
                            }
                            else
                            {
                                _19536 = _11502;
                            }
                            _19535 = _19536;
                        }
                        else
                        {
                            _19535 = _11502;
                        }
                        vec2 _11423 = vec2((float(frame_constants.game_time_sec) + frame_constants.game_time_frac) * 4.0, float(reservoir[_18781].payload * 10u));
                        ivec2 _12946 = ivec2(floor(_11423));
                        vec2 _12947 = fract(_11423);
                        uvec2 _12948 = uvec2(_12946);
                        uint _12998 = _12948.y;
                        uint _13004 = _12998 + (_12998 << 10u);
                        uint _13006 = _13004 ^ (_13004 >> 6u);
                        uint _13008 = _13006 + (_13006 << 3u);
                        uint _13010 = _13008 ^ (_13008 >> 11u);
                        uint _13018 = (((_12948.x * 1664525u) + (_13010 + (_13010 << 15u))) + 1013904223u) * 1664525u;
                        uint _13020 = _13018 ^ (_13018 >> 11u);
                        uint _13023 = _13020 ^ ((_13020 << 7u) & 2636928640u);
                        uint _13026 = _13023 ^ ((_13023 << 15u) & 4022730752u);
                        uint _13028 = _13026 ^ (_13026 >> 18u);
                        float _19218;
                        _19218 = _19123;
                        uint _13045;
                        uint _13064;
                        float _13070;
                        uint _19217 = 0u;
                        uint _19635 = _13028;
                        for (;;)
                        {
                            if (!(_19217 < 1u))
                            {
                                break;
                            }
                            uint _13056 = _19635 + (_19635 << 10u);
                            uint _13058 = _13056 ^ (_13056 >> 6u);
                            uint _13060 = _13058 + (_13058 << 3u);
                            uint _13062 = _13060 ^ (_13060 >> 11u);
                            _13064 = _13062 + (_13062 << 15u);
                            _13070 = uintBitsToFloat((_19635 & 8388607u) | 1065353216u) - 1.0;
                            _13045 = _19217 + 1u;
                            _19635 = _13064;
                            _19218 = _13070;
                            _19217 = _13045;
                            continue;
                        }
                        uvec2 _12956 = uvec2(_12946 + ivec2(1, 0));
                        uint _13074 = _12956.y;
                        uint _13080 = _13074 + (_13074 << 10u);
                        uint _13082 = _13080 ^ (_13080 >> 6u);
                        uint _13084 = _13082 + (_13082 << 3u);
                        uint _13086 = _13084 ^ (_13084 >> 11u);
                        uint _13094 = (((_12956.x * 1664525u) + (_13086 + (_13086 << 15u))) + 1013904223u) * 1664525u;
                        uint _13096 = _13094 ^ (_13094 >> 11u);
                        uint _13099 = _13096 ^ ((_13096 << 7u) & 2636928640u);
                        uint _13102 = _13099 ^ ((_13099 << 15u) & 4022730752u);
                        uint _13104 = _13102 ^ (_13102 >> 18u);
                        float _19320;
                        _19320 = _19225;
                        uint _13121;
                        uint _13140;
                        float _13146;
                        uint _19319 = 0u;
                        uint _19634 = _13104;
                        for (;;)
                        {
                            if (!(_19319 < 1u))
                            {
                                break;
                            }
                            uint _13132 = _19634 + (_19634 << 10u);
                            uint _13134 = _13132 ^ (_13132 >> 6u);
                            uint _13136 = _13134 + (_13134 << 3u);
                            uint _13138 = _13136 ^ (_13136 >> 11u);
                            _13140 = _13138 + (_13138 << 15u);
                            _13146 = uintBitsToFloat((_19634 & 8388607u) | 1065353216u) - 1.0;
                            _13121 = _19319 + 1u;
                            _19634 = _13140;
                            _19320 = _13146;
                            _19319 = _13121;
                            continue;
                        }
                        uvec2 _12963 = uvec2(_12946 + ivec2(0, 1));
                        uint _13150 = _12963.y;
                        uint _13156 = _13150 + (_13150 << 10u);
                        uint _13158 = _13156 ^ (_13156 >> 6u);
                        uint _13160 = _13158 + (_13158 << 3u);
                        uint _13162 = _13160 ^ (_13160 >> 11u);
                        uint _13170 = (((_12963.x * 1664525u) + (_13162 + (_13162 << 15u))) + 1013904223u) * 1664525u;
                        uint _13172 = _13170 ^ (_13170 >> 11u);
                        uint _13175 = _13172 ^ ((_13172 << 7u) & 2636928640u);
                        uint _13178 = _13175 ^ ((_13175 << 15u) & 4022730752u);
                        uint _13180 = _13178 ^ (_13178 >> 18u);
                        float _19423;
                        _19423 = _19328;
                        uint _13197;
                        uint _13216;
                        float _13222;
                        uint _19422 = 0u;
                        uint _19633 = _13180;
                        for (;;)
                        {
                            if (!(_19422 < 1u))
                            {
                                break;
                            }
                            uint _13208 = _19633 + (_19633 << 10u);
                            uint _13210 = _13208 ^ (_13208 >> 6u);
                            uint _13212 = _13210 + (_13210 << 3u);
                            uint _13214 = _13212 ^ (_13212 >> 11u);
                            _13216 = _13214 + (_13214 << 15u);
                            _13222 = uintBitsToFloat((_19633 & 8388607u) | 1065353216u) - 1.0;
                            _13197 = _19422 + 1u;
                            _19633 = _13216;
                            _19423 = _13222;
                            _19422 = _13197;
                            continue;
                        }
                        uvec2 _12971 = uvec2(_12946 + ivec2(1));
                        uint _13226 = _12971.y;
                        uint _13232 = _13226 + (_13226 << 10u);
                        uint _13234 = _13232 ^ (_13232 >> 6u);
                        uint _13236 = _13234 + (_13234 << 3u);
                        uint _13238 = _13236 ^ (_13236 >> 11u);
                        uint _13246 = (((_12971.x * 1664525u) + (_13238 + (_13238 << 15u))) + 1013904223u) * 1664525u;
                        uint _13248 = _13246 ^ (_13246 >> 11u);
                        uint _13251 = _13248 ^ ((_13248 << 7u) & 2636928640u);
                        uint _13254 = _13251 ^ ((_13251 << 15u) & 4022730752u);
                        uint _13256 = _13254 ^ (_13254 >> 18u);
                        float _19527;
                        _19527 = _19432;
                        uint _13273;
                        uint _13292;
                        float _13298;
                        uint _19526 = 0u;
                        uint _19632 = _13256;
                        for (;;)
                        {
                            if (!(_19526 < 1u))
                            {
                                break;
                            }
                            uint _13284 = _19632 + (_19632 << 10u);
                            uint _13286 = _13284 ^ (_13284 >> 6u);
                            uint _13288 = _13286 + (_13286 << 3u);
                            uint _13290 = _13288 ^ (_13288 >> 11u);
                            _13292 = _13290 + (_13290 << 15u);
                            _13298 = uintBitsToFloat((_19632 & 8388607u) | 1065353216u) - 1.0;
                            _13273 = _19526 + 1u;
                            _19632 = _13292;
                            _19527 = _13298;
                            _19526 = _13273;
                            continue;
                        }
                        vec2 _13304 = (_12947 * _12947) * (vec2(3.0) - (vec2(2.0) * _12947));
                        float _12979 = _13304.x;
                        float _12980 = 1.0 - _12979;
                        float _12982 = _13304.y;
                        _21441 = _19527;
                        _21356 = _19423;
                        _21270 = _19320;
                        _21183 = _19218;
                        _19538 = (((_19535 * mix(0.5, 1.0, (((1.0 - _12982) * ((_19218 * _12980) + (_19320 * _12979))) + ((_19423 * _12980) * _12982)) + ((_19527 * _12979) * _12982))) * reservoir[_18781].W) * _21649) * frame_constants.ev_mult;
                    }
                    else
                    {
                        _21441 = _19432;
                        _21356 = _19328;
                        _21270 = _19225;
                        _21183 = _19123;
                        _19538 = vec3(0.0);
                    }
                    _21440 = _21441;
                    _21355 = _21356;
                    _21269 = _21270;
                    _21182 = _21183;
                    _21029 = _18800 + _19538;
                }
                else
                {
                    _21440 = _19432;
                    _21355 = _19328;
                    _21269 = _19225;
                    _21182 = _19123;
                    _21029 = _18800;
                }
                ridx_3 = _18781 + 1u;
                _19432 = _21440;
                _19328 = _21355;
                _19225 = _21269;
                _19123 = _21182;
                _18800 = _21029;
                _18781 = ridx_3;
                continue;
            }
            _18798 = _18800;
        }
        else
        {
            vec3 _18799;
            if (2u == _21650)
            {
                uint _5183 = light_indirection_grid._member0[_9018] & 1048575u;
                uint _5186 = min(64u, cell_light_count);
                vec3 _18642;
                _18642 = result;
                vec3 result_1;
                uint slot_idx;
                float _20743;
                float _20803;
                float _20862;
                float _20920;
                uint _17929 = 0u;
                float _18258;
                float _18352;
                float _18446;
                float _18541;
                for (;;)
                {
                    if (!(_17929 < _5186))
                    {
                        break;
                    }
                    uint _5194 = _5183 + _17929;
                    vec2 _9163 = unpackHalf2x16(lantern_buf_1._member0[grid_light_indices_1._member0[_5194]].intensity_color_id);
                    float _9164 = _9163.x;
                    uint _9169 = lantern_buf_1._member0[grid_light_indices_1._member0[_5194]].intensity_color_id >> uint(16);
                    vec3 _9183 = lantern_buf_1._member0[grid_light_indices_1._member0[_5194]].position.xyz - _5507;
                    float _9184 = length(_9183);
                    float _9185 = dot(_9183, _9183);
                    vec3 _9192 = _9183 + vec3(0.0, 0.1500000059604644775390625, 0.0);
                    vec3 _9198 = vec3(_9184);
                    vec3 _17936;
                    do
                    {
                        if (_9169 == 0u)
                        {
                            _17936 = vec3(1.0, 0.800000011920928955078125, 0.100000001490116119384765625);
                            break;
                        }
                        else
                        {
                            if (_9169 == 1u)
                            {
                                _17936 = vec3(0.0, 0.735904157161712646484375, 3.67952060699462890625);
                                break;
                            }
                            else
                            {
                                if (_9169 == 2u)
                                {
                                    _17936 = vec3(0.20513366162776947021484375, 1.02566826343536376953125, 0.20513366162776947021484375);
                                    break;
                                }
                                else
                                {
                                    if (_9169 == 3u)
                                    {
                                        _17936 = vec3(0.85153043270111083984375, 0.56768691539764404296875, 2.8384344577789306640625);
                                        break;
                                    }
                                    else
                                    {
                                        _17936 = vec3(1.82324230670928955078125, 0.546972692012786865234375, 0.182324230670928955078125);
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
                    vec3 _9209 = ((_17936 * 4.0) * _9164) * ((max(0.0, dot(_5358, _9183 / _9198)) * ((1.0 / (0.3359999954700469970703125 + _9185)) * smoothstep(36.0 * _9164, 16.0 * _9164, _9185))) * smoothstep(-0.5, 0.20000000298023223876953125, (_9192 / vec3(length(_9192))).y));
                    vec3 _9293 = _9209;
                    float _17938;
                    _17938 = _9209.x;
                    float _9311;
                    int _9315;
                    int _17937 = 1;
                    SPIRV_CROSS_UNROLL
                    for (;;)
                    {
                        if (!(_17937 < 3))
                        {
                            break;
                        }
                        _9311 = max(_17938, _9293[_17937]);
                        _9315 = _17937 + 1;
                        _17938 = _9311;
                        _17937 = _9315;
                        continue;
                    }
                    vec3 _18638;
                    if (_17938 > 0.0)
                    {
                        vec3 _18635;
                        if (_9184 > 0.5)
                        {
                            vec3 _9076 = _5484.xyz;
                            vec4 _9354 = (vec4((_5507 + ((_9183 * (_9184 - 0.5)) / _9198)) + (_5358 * (0.0199999995529651641845703125 * _5329.y)), 1.0) * current_view.world_to_view) * current_view.view_to_sample;
                            vec3 _9358 = _9354.xyz / vec3(_9354.w);
                            vec4 _9380 = vec4(_9076, 1.0) + (vec4(_9358 - _9076, 0.0) * float(int(sign(_9358.z))));
                            float _9381 = _9380.w;
                            vec3 _9394 = (_9380 / vec4(float((_9381 >= 0.0) ? 1 : (-1)) * max(1.0000000133514319600180897396058e-10, abs(_9381)))).xyz;
                            vec3 _9396 = _9394 - _9076;
                            vec3 _9402 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), lessThan(_9396, vec3(0.0))) - _9076) / _9396;
                            vec3 _9409 = _9076 + (_9396 * max(0.0, max(_9402.x, _9402.y)));
                            vec3 _9410 = _9394 - _9409;
                            vec3 _9415 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), greaterThanEqual(_9410, vec3(0.0))) - _9409) / _9410;
                            vec3 _9430 = _9409 + (_9410 * min(1.0, min(min(_9415.x, _9415.y), _9415.z)));
                            float _18247;
                            float _18248;
                            bool _18249;
                            do
                            {
                                float _9500 = 0.800000011920928955078125 * current_view.clip_to_view[3].z;
                                uint _9516 = uint(int(max(2u, min(4u, uint(int(floor(length((((_9430.xy * vec2(0.5, -0.5)) + vec2(0.5)) - ((_9409.xy * vec2(0.5, -0.5)) + vec2(0.5))) * _515))))))));
                                float _17969;
                                bool _18088;
                                float _18089;
                                float _18091;
                                float _18110;
                                float _18129;
                                do
                                {
                                    vec3 _9668 = _9430 - _9409;
                                    float _9677 = float(_9516);
                                    float _17943;
                                    do
                                    {
                                        if (_9430.z > 9.5367431640625e-07)
                                        {
                                            _17943 = _9677;
                                            break;
                                        }
                                        else
                                        {
                                            _17943 = max(1.0, _9677 - 1.0);
                                            break;
                                        }
                                        break; // unreachable workaround
                                    } while(false);
                                    float _9687 = 1.0 / _17943;
                                    bool _17979;
                                    float _17985;
                                    float _17989;
                                    float _17993;
                                    float _18001;
                                    if (_9516 > 0u)
                                    {
                                        float _9697 = mix(0.0, 1.0, pow(_7060 * _9687, 1.0));
                                        vec3 _9700 = _9409 + (_9668 * vec3(_9697));
                                        vec2 _9916 = (_9700.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                        float _9848 = 1.0 / _9700.z;
                                        float _9855 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _9916, 0.0).x;
                                        float _9862 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _9916, 0.0).x;
                                        float _9874 = (max(_9855, _9862) * 1.00000202655792236328125) - _9848;
                                        float _9878 = _9848 - min(_9855, _9862);
                                        bool _21652 = (_9874 < 0.0) ? (_9878 < _9500) : false;
                                        float _17970;
                                        bool _17980;
                                        float _17986;
                                        float _17990;
                                        float _17994;
                                        float _18002;
                                        if (_21652)
                                        {
                                            _18002 = _9874;
                                            _17994 = _9878;
                                            _17990 = _9500;
                                            _17986 = _9697;
                                            _17980 = _21652;
                                            _17970 = 0.0;
                                        }
                                        else
                                        {
                                            float _17972;
                                            _17972 = _9697;
                                            float _9726;
                                            uint _9744;
                                            bool _21653;
                                            bool _17981;
                                            float _17987;
                                            float _17991;
                                            float _17995;
                                            float _18003;
                                            uint _17953 = 1u;
                                            bool _17982 = _21652;
                                            for (;;)
                                            {
                                                if (!(_17953 < _9516))
                                                {
                                                    _18003 = 0.0;
                                                    _17995 = 0.0;
                                                    _17991 = 0.0;
                                                    _17987 = 1.0;
                                                    _17981 = _17982;
                                                    break;
                                                }
                                                _9726 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_17953) + _7060) * _9687, 1.0)));
                                                vec3 _9729 = _9409 + (_9668 * vec3(_9726));
                                                vec2 _10058 = (_9729.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                                float _9990 = 1.0 / _9729.z;
                                                float _9997 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _10058, 0.0).x;
                                                float _10004 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _10058, 0.0).x;
                                                float _10016 = (max(_9997, _10004) * 1.00000202655792236328125) - _9990;
                                                float _10020 = _9990 - min(_9997, _10004);
                                                _21653 = (_10016 < 0.0) ? (_10020 < _9500) : false;
                                                if (_21653)
                                                {
                                                    _18003 = _10016;
                                                    _17995 = _10020;
                                                    _17991 = _9500;
                                                    _17987 = _9726;
                                                    _17981 = _21653;
                                                    break;
                                                }
                                                _9744 = _17953 + 1u;
                                                _17953 = _9744;
                                                _17982 = _21653;
                                                _17972 = _9726;
                                                continue;
                                            }
                                            _18002 = _18003;
                                            _17994 = _17995;
                                            _17990 = _17991;
                                            _17986 = _17987;
                                            _17980 = _17981;
                                            _17970 = _17972;
                                        }
                                        _18001 = _18002;
                                        _17993 = _17994;
                                        _17989 = _17990;
                                        _17985 = _17986;
                                        _17979 = _17980;
                                        _17969 = _17970;
                                    }
                                    else
                                    {
                                        _18001 = 0.0;
                                        _17993 = 0.0;
                                        _17989 = 0.0;
                                        _17985 = 1.0;
                                        _17979 = false;
                                        _17969 = 0.0;
                                    }
                                    if (_17979)
                                    {
                                        _18129 = _18001;
                                        _18110 = _17989;
                                        _18091 = _17993;
                                        _18089 = _17985;
                                        _18088 = true;
                                        break;
                                    }
                                    else
                                    {
                                        _18129 = _9601.base._distance;
                                        _18110 = _9601.thickness;
                                        _18091 = _9601.penetration;
                                        _18089 = _17969;
                                        _18088 = false;
                                        break;
                                    }
                                    break; // unreachable workaround
                                } while(false);
                                bool _18148;
                                if (_18088)
                                {
                                    bool _18150;
                                    if (_18091 < _18110)
                                    {
                                        _18150 = _18129 < _18110;
                                    }
                                    else
                                    {
                                        _18150 = false;
                                    }
                                    _18148 = _18150;
                                }
                                else
                                {
                                    _18148 = false;
                                }
                                if (_18148)
                                {
                                    _18249 = true;
                                    _18248 = _18089;
                                    _18247 = _18091 / current_view.clip_to_view[3].z;
                                    break;
                                }
                                _18249 = false;
                                _18248 = _17969;
                                _18247 = 0.0;
                                break;
                            } while(false);
                            vec3 _18636;
                            if (_18249)
                            {
                                vec4 _10432 = (vec4(mix(_9409, _9430, vec3(_18248)), 1.0) * current_view.sample_to_view) * current_view.view_to_world;
                                vec3 _9098 = ((_10432.xyz / vec3(_10432.w)) + (wo * _18247)) - lantern_buf_1._member0[grid_light_indices_1._member0[_5194]].position.xyz;
                                bool _18250;
                                if (abs(_9098.y) > 0.5)
                                {
                                    _18250 = true;
                                }
                                else
                                {
                                    vec2 _9103 = _9098.xz;
                                    _18250 = dot(_9103, _9103) > 0.136900007724761962890625;
                                }
                                _18636 = mix(_9209, vec3(0.0), bvec3(_18250));
                            }
                            else
                            {
                                _18636 = _9209;
                            }
                            _18635 = _18636;
                        }
                        else
                        {
                            _18635 = _9209;
                        }
                        vec2 _9130 = vec2((float(frame_constants.game_time_sec) + frame_constants.game_time_frac) * 4.0, float(grid_light_indices_1._member0[_5194] * 10u));
                        ivec2 _10653 = ivec2(floor(_9130));
                        vec2 _10654 = fract(_9130);
                        uvec2 _10655 = uvec2(_10653);
                        uint _10705 = _10655.y;
                        uint _10711 = _10705 + (_10705 << 10u);
                        uint _10713 = _10711 ^ (_10711 >> 6u);
                        uint _10715 = _10713 + (_10713 << 3u);
                        uint _10717 = _10715 ^ (_10715 >> 11u);
                        uint _10725 = (((_10655.x * 1664525u) + (_10717 + (_10717 << 15u))) + 1013904223u) * 1664525u;
                        uint _10727 = _10725 ^ (_10725 >> 11u);
                        uint _10730 = _10727 ^ ((_10727 << 7u) & 2636928640u);
                        uint _10733 = _10730 ^ ((_10730 << 15u) & 4022730752u);
                        uint _10735 = _10733 ^ (_10733 >> 18u);
                        float _18345;
                        _18345 = _18258;
                        uint _10752;
                        uint _10771;
                        float _10777;
                        uint _18344 = 0u;
                        uint _18735 = _10735;
                        for (;;)
                        {
                            if (!(_18344 < 1u))
                            {
                                break;
                            }
                            uint _10763 = _18735 + (_18735 << 10u);
                            uint _10765 = _10763 ^ (_10763 >> 6u);
                            uint _10767 = _10765 + (_10765 << 3u);
                            uint _10769 = _10767 ^ (_10767 >> 11u);
                            _10771 = _10769 + (_10769 << 15u);
                            _10777 = uintBitsToFloat((_18735 & 8388607u) | 1065353216u) - 1.0;
                            _10752 = _18344 + 1u;
                            _18735 = _10771;
                            _18345 = _10777;
                            _18344 = _10752;
                            continue;
                        }
                        uvec2 _10663 = uvec2(_10653 + ivec2(1, 0));
                        uint _10781 = _10663.y;
                        uint _10787 = _10781 + (_10781 << 10u);
                        uint _10789 = _10787 ^ (_10787 >> 6u);
                        uint _10791 = _10789 + (_10789 << 3u);
                        uint _10793 = _10791 ^ (_10791 >> 11u);
                        uint _10801 = (((_10663.x * 1664525u) + (_10793 + (_10793 << 15u))) + 1013904223u) * 1664525u;
                        uint _10803 = _10801 ^ (_10801 >> 11u);
                        uint _10806 = _10803 ^ ((_10803 << 7u) & 2636928640u);
                        uint _10809 = _10806 ^ ((_10806 << 15u) & 4022730752u);
                        uint _10811 = _10809 ^ (_10809 >> 18u);
                        float _18438;
                        _18438 = _18352;
                        uint _10828;
                        uint _10847;
                        float _10853;
                        uint _18437 = 0u;
                        uint _18734 = _10811;
                        for (;;)
                        {
                            if (!(_18437 < 1u))
                            {
                                break;
                            }
                            uint _10839 = _18734 + (_18734 << 10u);
                            uint _10841 = _10839 ^ (_10839 >> 6u);
                            uint _10843 = _10841 + (_10841 << 3u);
                            uint _10845 = _10843 ^ (_10843 >> 11u);
                            _10847 = _10845 + (_10845 << 15u);
                            _10853 = uintBitsToFloat((_18734 & 8388607u) | 1065353216u) - 1.0;
                            _10828 = _18437 + 1u;
                            _18734 = _10847;
                            _18438 = _10853;
                            _18437 = _10828;
                            continue;
                        }
                        uvec2 _10670 = uvec2(_10653 + ivec2(0, 1));
                        uint _10857 = _10670.y;
                        uint _10863 = _10857 + (_10857 << 10u);
                        uint _10865 = _10863 ^ (_10863 >> 6u);
                        uint _10867 = _10865 + (_10865 << 3u);
                        uint _10869 = _10867 ^ (_10867 >> 11u);
                        uint _10877 = (((_10670.x * 1664525u) + (_10869 + (_10869 << 15u))) + 1013904223u) * 1664525u;
                        uint _10879 = _10877 ^ (_10877 >> 11u);
                        uint _10882 = _10879 ^ ((_10879 << 7u) & 2636928640u);
                        uint _10885 = _10882 ^ ((_10882 << 15u) & 4022730752u);
                        uint _10887 = _10885 ^ (_10885 >> 18u);
                        float _18532;
                        _18532 = _18446;
                        uint _10904;
                        uint _10923;
                        float _10929;
                        uint _18531 = 0u;
                        uint _18733 = _10887;
                        for (;;)
                        {
                            if (!(_18531 < 1u))
                            {
                                break;
                            }
                            uint _10915 = _18733 + (_18733 << 10u);
                            uint _10917 = _10915 ^ (_10915 >> 6u);
                            uint _10919 = _10917 + (_10917 << 3u);
                            uint _10921 = _10919 ^ (_10919 >> 11u);
                            _10923 = _10921 + (_10921 << 15u);
                            _10929 = uintBitsToFloat((_18733 & 8388607u) | 1065353216u) - 1.0;
                            _10904 = _18531 + 1u;
                            _18733 = _10923;
                            _18532 = _10929;
                            _18531 = _10904;
                            continue;
                        }
                        uvec2 _10678 = uvec2(_10653 + ivec2(1));
                        uint _10933 = _10678.y;
                        uint _10939 = _10933 + (_10933 << 10u);
                        uint _10941 = _10939 ^ (_10939 >> 6u);
                        uint _10943 = _10941 + (_10941 << 3u);
                        uint _10945 = _10943 ^ (_10943 >> 11u);
                        uint _10953 = (((_10678.x * 1664525u) + (_10945 + (_10945 << 15u))) + 1013904223u) * 1664525u;
                        uint _10955 = _10953 ^ (_10953 >> 11u);
                        uint _10958 = _10955 ^ ((_10955 << 7u) & 2636928640u);
                        uint _10961 = _10958 ^ ((_10958 << 15u) & 4022730752u);
                        uint _10963 = _10961 ^ (_10961 >> 18u);
                        float _18627;
                        _18627 = _18541;
                        uint _10980;
                        uint _10999;
                        float _11005;
                        uint _18626 = 0u;
                        uint _18732 = _10963;
                        for (;;)
                        {
                            if (!(_18626 < 1u))
                            {
                                break;
                            }
                            uint _10991 = _18732 + (_18732 << 10u);
                            uint _10993 = _10991 ^ (_10991 >> 6u);
                            uint _10995 = _10993 + (_10993 << 3u);
                            uint _10997 = _10995 ^ (_10995 >> 11u);
                            _10999 = _10997 + (_10997 << 15u);
                            _11005 = uintBitsToFloat((_18732 & 8388607u) | 1065353216u) - 1.0;
                            _10980 = _18626 + 1u;
                            _18732 = _10999;
                            _18627 = _11005;
                            _18626 = _10980;
                            continue;
                        }
                        vec2 _11011 = (_10654 * _10654) * (vec2(3.0) - (vec2(2.0) * _10654));
                        float _10686 = _11011.x;
                        float _10687 = 1.0 - _10686;
                        float _10689 = _11011.y;
                        _20920 = _18627;
                        _20862 = _18532;
                        _20803 = _18438;
                        _20743 = _18345;
                        _18638 = (((_18635 * mix(0.5, 1.0, (((1.0 - _10689) * ((_18345 * _10687) + (_18438 * _10686))) + ((_18532 * _10687) * _10689)) + ((_18627 * _10686) * _10689))) * 1.0) * _21649) * frame_constants.ev_mult;
                    }
                    else
                    {
                        _20920 = _18541;
                        _20862 = _18446;
                        _20803 = _18352;
                        _20743 = _18258;
                        _18638 = vec3(0.0);
                    }
                    result_1 = _18642 + _18638;
                    slot_idx = _17929 + 1u;
                    _18642 = result_1;
                    _18541 = _20920;
                    _18446 = _20862;
                    _18352 = _20803;
                    _18258 = _20743;
                    _17929 = slot_idx;
                    continue;
                }
                _18799 = _18642;
            }
            else
            {
                _18799 = result;
            }
            _18798 = _18799;
        }
        _18797 = _18798;
    }
    else
    {
        _18797 = result;
    }
    vec3 _18795;
    if ((frame_constants.render_overrides & 4u) != 0u)
    {
        _18795 = _21649;
    }
    else
    {
        vec3 _18796;
        if ((frame_constants.render_overrides & 8u) != 0u)
        {
            vec3 _5250 = (_5358 * 0.5) + vec3(0.5);
            _18796 = _5250 * _5250;
        }
        else
        {
            _18796 = _18797;
        }
        _18795 = _18796;
    }
    entryPointParam_ps_main_color = vec4(_18795, 0.0);
}

