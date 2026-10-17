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

float _18804;
uvec4 _22202;
vec3 _22203;
DistanceWithPenetration _10202;
DistanceWithPenetration _12495;

layout(set = 4, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

layout(set = 5, binding = 0, std140) uniform FrameConstants_natural
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

layout(set = 2, binding = 0, std140) uniform current_view
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

layout(set = 22, binding = 0, scalar) uniform TerrainHeightmap_natural
{
    uvec2 terrain_heightmap_dims;
    Tex2D_natural bg_terrain_heightmap;
    Tex2D_natural bg_terrain_fog_height;
    vec2 bg_terrain_height_bounds_ws;
    vec4 bg_water_footprint_ws;
} terrain_heightmap;

layout(set = 25, binding = 1, std430) readonly buffer StructuredBuffer
{
    vec4 _member0[];
} csm_setup_cascade_splits_buf;

layout(set = 25, binding = 0, std430) readonly buffer csm_setup_sun_view
{
    layout(row_major) ViewConstants_natural _member0[];
} csm_setup_sun_view_1;

layout(set = 0, binding = 8, std140) uniform SpatialResolveOffsets_natural
{
    _Array_natural_vector_int_4_512 values;
} spatial_resolve_offsets;

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

layout(set = 0, binding = 12, std430) readonly buffer light_indirection_grid
{
    uint _member0[];
} light_indirection_grid_1;

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
layout(set = 3, binding = 2) uniform sampler samplers_nnc;
layout(set = 0, binding = 5) uniform texture2D ssgi_tex;
layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 3, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 0, binding = 6) uniform texture2D shadows_screen_shadows_tex;
layout(set = 3, binding = 3) uniform sampler samplers_llc;
layout(set = 0, binding = 3) uniform texture2D half_depth_tex;
layout(set = 3, binding = 0) uniform sampler samplers_lnc;
layout(set = 3, binding = 10) uniform sampler samplers_shadow_nearest_b1;
layout(set = 26, binding = 1) uniform texture2DArray csm_sun_shadow_map;
layout(set = 0, binding = 10) uniform texture2D indirect_radiance_tex;
layout(set = 0, binding = 11) uniform utexture2D rdi_reservoir_tex;

layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    ivec2 _335 = ivec2(gl_FragCoord.xy);
    uvec2 _337 = uvec2(_335);
    vec4 _5693 = ((texelFetch(blue_noise_textures_uniform01, ivec2((_337 + uvec2(fract((vec2(0.75487768650054931640625, 0.56984031200408935546875) * float(frame_counter.index)) + vec2(0.5)) * vec2(256.0))) % uvec2(256u)), 0) * 255.0) * vec4(0.00390625)) + vec4(0.001953125);
    uvec4 sampled = texelFetch(gbuffer_tex, ivec2(_337), 0);
    vec4 sampled_1 = texelFetch(depth_tex, ivec2(_337), 0);
    float _427 = sampled_1.x;
    uint _5714 = sampled.x;
    float _5769 = float((_5714 >> uint(24)) & 255u);
    float _5771 = _5769 * 0.0039215688593685626983642578125;
    vec3 _5720 = (vec4(float(_5714 & 255u) * 0.0039215688593685626983642578125, float((_5714 >> uint(8)) & 255u) * 0.0039215688593685626983642578125, float((_5714 >> uint(16)) & 255u) * 0.0039215688593685626983642578125, _5771).xyz * 2.0) - vec3(1.0);
    uint _5723 = sampled.y;
    float _5813 = float((_5723 >> uint(24)) & 255u) * 0.0039215688593685626983642578125;
    vec3 _5726 = vec4(float(_5723 & 255u) * 0.0039215688593685626983642578125, float((_5723 >> uint(8)) & 255u) * 0.0039215688593685626983642578125, float((_5723 >> uint(16)) & 255u) * 0.0039215688593685626983642578125, _5813).xyz;
    vec2 _515 = vec2(globalParams.depth_tex_dims);
    vec2 _5857 = (((vec2(_335) + vec2(0.5)) / _515) - vec2(0.5)) * vec2(2.0, -2.0);
    vec4 _5848 = vec4(_5857, _427, 1.0);
    vec4 _5852 = (_5848 * current_view_1.sample_to_view) * current_view_1.view_to_world;
    vec3 _5863 = normalize(((vec4(_5857, 0.0, 1.0) * current_view_1.sample_to_view) * current_view_1.view_to_world).xyz);
    vec3 wo = -_5863;
    vec3 ray_hit_ws = (_5852.xyz / vec3(_5852.w)) + ((_5863 * _5813) * 1.60000002384185791015625);
    vec2 _5879 = ray_hit_ws.xz;
    vec2 _5910 = (_5879 * vec2(0.0076923076994717121124267578125)) * 0.5;
    float _5885 = max(0.00999999977648258209228515625, frame_constants.ground_fog.y);
    vec2 _5958 = (_5879 * vec2(0.001000000047497451305389404296875)) + vec2(0.5);
    float _5888 = ray_hit_ws.y - (textureLod(nonuniformEXT(sampler2D(resource_handles[terrain_heightmap.bg_terrain_fog_height.bindless_handle], samplers_lnc_iso)), vec2(_5958.y, 1.0 - _5958.x), 0.0).x + (40.0 * frame_constants.ground_fog.x));
    float _5894 = 1.0 + (_5885 * max(0.0, _5888));
    vec3 _827 = frame_constants.sun_color.xyz * exp(-((((0.00999999977648258209228515625 * frame_constants.fog_relative_extinction) * ((3.2200000286102294921875 * exp2(-dot(_5910, _5910))) * frame_constants.ground_fog.z)) * ((1.0 / ((2.0 * _5885) * (_5894 * _5894))) + max(0.0, -_5888))) / max(0.0500000007450580596923828125, frame_constants.dir_to_primary_directional_light.y)));
    vec3 _22205 = mix(_5726 * _5726, vec3(0.5), bvec3((frame_constants.render_overrides & 1u) != 0u));
    bool _7103 = _5771 > 0.0;
    vec3 _18410;
    if (_7103)
    {
        uint _7109 = uint(_5769);
        uint _7211 = _7109 + (_7109 << 10u);
        uint _7213 = _7211 ^ (_7211 >> 6u);
        uint _7215 = _7213 + (_7213 << 3u);
        uint _7217 = _7215 ^ (_7215 >> 11u);
        uint _7201 = _7109 ^ 188053769u;
        uint _7233 = _7201 + (_7201 << 10u);
        uint _7235 = _7233 ^ (_7233 >> 6u);
        uint _7237 = _7235 + (_7235 << 3u);
        uint _7239 = _7237 ^ (_7237 >> 11u);
        float _7247 = uintBitsToFloat(((_7239 + (_7239 << 15u)) & 8388607u) | 1065353216u) - 1.0;
        float _7252 = uintBitsToFloat(((_7217 + (_7217 << 15u)) & 8388607u) | 1065353216u) * 3.141499996185302734375;
        float _7256 = sqrt(1.0 - (_7247 * _7247));
        _18410 = vec3(_7256 * cos(_7252), _7256 * sin(_7252), _7247) * 0.5;
    }
    else
    {
        _18410 = vec3(0.0);
    }
    vec4 _7273 = vec4(ray_hit_ws, 1.0);
    vec4 _7277 = (_7273 * current_view_1.world_to_view) * current_view_1.view_to_clip;
    vec3 _7281 = _7277.xyz / vec3(_7277.w);
    float _7265 = _7281.z;
    uint _22208 = (_7265 > csm_setup_cascade_splits_buf._member0[0].x) ? 0u : ((_7265 > csm_setup_cascade_splits_buf._member0[0].y) ? 1u : ((_7265 > csm_setup_cascade_splits_buf._member0[0].z) ? 2u : 3u));
    int _7288 = int(_22208);
    vec4 _7292 = _7273 * csm_setup_sun_view_1._member0[_7288].world_to_sample;
    vec2 _7299 = vec2(csm_setup_sun_view_1._member0[_7288].view_to_clip[0].x, csm_setup_sun_view_1._member0[_7288].view_to_clip[1].y) * 300.0;
    vec2 _7476 = (_7292.xy * vec2(0.5, -0.5)) + vec2(0.5);
    vec3 _18036;
    _18036.x = _7476.x;
    _18036.y = _7476.y;
    float _7310 = _7292.z;
    float _7322 = float((uint((_335.x * 11) + (_335.y * 7)) + (frame_counter.index * 5u)) % 64u);
    float _7483 = 5.588237762451171875 * float(frame_counter.index % 64u);
    float _7493 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_337.x) + _7483)) + (0.005837149918079376220703125 * (float(_337.y) + _7483))));
    float _7333 = -csm_setup_sun_view_1._member0[_7288].clip_to_view[2].z;
    float _18415;
    _18415 = 0.0;
    float _7364;
    int _7368;
    int _18414 = 0;
    for (;;)
    {
        if (!(_18414 < 6))
        {
            break;
        }
        float _7343 = float(_18414);
        float _7576 = (_7343 * 2.3999631404876708984375) + (_7322 * 10.16640758514404296875);
        _7364 = _18415 + exp((-0.5) * max(0.0, (_7310 - textureLod(sampler2DArray(csm_sun_shadow_map, samplers_shadow_nearest_b1), vec3(_18036.xy + (((vec2(cos(_7576), sin(_7576)) * ((_7343 + _7493) * 0.16666667163372039794921875)) * _7299) * vec2(0.0009765625)), float(_22208)), 0.0).x) * _7333));
        _7368 = _18414 + 1;
        _18415 = _7364;
        _18414 = _7368;
        continue;
    }
    float _7372 = _18415 * 0.16666667163372039794921875;
    float _7133 = dot(_5720, (normalize(wo) * (((1.0 - _5813) * 2.0) - 1.0)) * 5.0);
    vec3 _7141 = normalize(_5720);
    float _7147 = mix(0.20000000298023223876953125, 1.0, smoothstep(-0.20000000298023223876953125, 1.0, dot(_7141, frame_constants.dir_to_primary_directional_light))) * 0.800000011920928955078125;
    float _7151 = max(0.0, 1.0 - abs(dot(_7141, wo)));
    float _7162 = abs(dot(normalize(_5720 + _18410), normalize(frame_constants.dir_to_primary_directional_light + wo)));
    float _7594 = ((_7162 * _7162) * (-0.5)) + 1.0;
    float _7166 = max(0.0, (-0.75) * dot(wo, frame_constants.dir_to_primary_directional_light));
    vec4 _16275[3] = vec4[](vec4(0.0), vec4(0.0), vec4(0.0));
    float _7616 = _5693.x;
    uint _7620 = uint((_7616 * 3.0) + 0.5) & 3u;
    float _18427;
    _18427 = 0.0;
    float _7683;
    uint _7687;
    uint _18426 = 0u;
    for (;;)
    {
        if (!(_18426 < 3u))
        {
            break;
        }
        uvec2 _7640 = (_337 / uvec2(2u)) + uvec2(spatial_resolve_offsets.values.data[(_7620 * 16u) + _18426].xy);
        float _7650 = exp2(-min(30.0, 80.0 * abs(1.0 - (texelFetch(half_depth_tex, ivec2(_7640), 0).x / _427))));
        uint _7679;
        uint _20717 = 0u;
        for (;;)
        {
            if (!(_20717 < 3u))
            {
                break;
            }
            _16275[_20717] += (texelFetch(indirect_radiance_tex, ivec2(_7640 + uvec2((_20717 * globalParams.indirect_radiance_tex_dims.x) / 3u, 0u)), 0) * _7650);
            _7679 = _20717 + 1u;
            _20717 = _7679;
            continue;
        }
        _7683 = _18427 + _7650;
        _7687 = _18426 + 1u;
        _18427 = _7683;
        _18426 = _7687;
        continue;
    }
    float _18429;
    if (_18427 < 0.001000000047497451305389404296875)
    {
        float _18430;
        _18430 = _18427;
        float _7756;
        uint _7760;
        uint _18428 = 3u;
        for (;;)
        {
            if (!(_18428 < 6u))
            {
                break;
            }
            uvec2 _7713 = (_337 / uvec2(2u)) + uvec2(spatial_resolve_offsets.values.data[(_7620 * 16u) + _18428].xy);
            float _7723 = exp2(-min(30.0, 80.0 * abs(1.0 - (texelFetch(half_depth_tex, ivec2(_7713), 0).x / _427))));
            uint _7752;
            uint _20714 = 0u;
            for (;;)
            {
                if (!(_20714 < 3u))
                {
                    break;
                }
                _16275[_20714] += (texelFetch(indirect_radiance_tex, ivec2(_7713 + uvec2((_20714 * globalParams.indirect_radiance_tex_dims.x) / 3u, 0u)), 0) * _7723);
                _7752 = _20714 + 1u;
                _20714 = _7752;
                continue;
            }
            _7756 = _18430 + _7723;
            _7760 = _18428 + 1u;
            _18430 = _7756;
            _18428 = _7760;
            continue;
        }
        _18429 = _18430;
    }
    else
    {
        _18429 = _18427;
    }
    float _7768 = 1.0 / max(9.9999997473787516355514526367188e-05, _18429);
    _16275[0] *= _7768;
    _16275[1] *= _7768;
    _16275[2] *= _7768;
    vec3 _7795 = (_16275[0].yzw + _16275[1].yzw) + _16275[2].yzw;
    vec3 _7799 = _7795 / vec3(max(9.9999996826552253889678874634872e-21, length(_7795)));
    vec3 _7814 = vec3(_16275[0].x, _16275[1].x, _16275[2].x);
    vec3 _7820 = _16275[0].yzw / vec3(max(9.9999996826552253889678874634872e-21, _16275[0].x));
    vec3 _7825 = _16275[1].yzw / vec3(max(9.9999996826552253889678874634872e-21, _16275[1].x));
    vec3 _7830 = _16275[2].yzw / vec3(max(9.9999996826552253889678874634872e-21, _16275[2].x));
    vec3 _7841 = max(vec3(0.0), vec3(1.0) - (color_library_data.indirect_light_tint.xyz * 0.920000016689300537109375));
    vec3 _7854 = max(vec3(0.0), mix((_7841 / vec3(dot(_7841, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)))) * dot(_7814, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)), _7814, vec3(1.16999995708465576171875)) * 1.2000000476837158203125);
    vec3 _18460;
    if (any(notEqual(_7799, vec3(0.0))))
    {
        vec3 _18452;
        if (_7103)
        {
            uint _9098 = uint(_5769);
            uint _9177 = _9098 + (_9098 << 10u);
            uint _9179 = _9177 ^ (_9177 >> 6u);
            uint _9181 = _9179 + (_9179 << 3u);
            uint _9183 = _9181 ^ (_9181 >> 11u);
            uint _9167 = _9098 ^ 188053769u;
            uint _9199 = _9167 + (_9167 << 10u);
            uint _9201 = _9199 ^ (_9199 >> 6u);
            uint _9203 = _9201 + (_9201 << 3u);
            uint _9205 = _9203 ^ (_9203 >> 11u);
            float _9213 = uintBitsToFloat(((_9205 + (_9205 << 15u)) & 8388607u) | 1065353216u) - 1.0;
            float _9218 = uintBitsToFloat(((_9183 + (_9183 << 15u)) & 8388607u) | 1065353216u) * 3.141499996185302734375;
            float _9222 = sqrt(1.0 - (_9213 * _9213));
            _18452 = vec3(_9222 * cos(_9218), _9222 * sin(_9218), _9213) * 0.5;
        }
        else
        {
            _18452 = vec3(0.0);
        }
        vec3 _17660[4] = vec3[](_7854, (-vec3(_7820.y, _7825.y, _7830.y)) * _7854, vec3(_7820.z, _7825.z, _7830.z) * _7854, (-vec3(_7820.x, _7825.x, _7830.x)) * _7854);
        vec3 _15586[4] = _17660;
        vec3 _9293 = normalize(vec3(-dot(_15586[3], vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)), -dot(_15586[1], vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)), dot(_15586[2], vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875))));
        vec3 _9321 = vec3(abs(dot(vec3(-_15586[3].x, -_15586[1].x, _15586[2].x), _9293)), abs(dot(vec3(-_15586[3].y, -_15586[1].y, _15586[2].y), _9293)), abs(dot(vec3(-_15586[3].z, -_15586[1].z, _15586[2].z), _9293))) / _15586[0];
        float _9327 = dot(_9293, _5720);
        vec3 _15581[4] = vec3[](vec3(0.886227548122406005859375), vec3(1.0) * (_5720.y * (-1.02332770824432373046875)), vec3(1.0) * (_5720.z * 1.02332770824432373046875), vec3(1.0) * (_5720.x * (-1.02332770824432373046875)));
        vec3 _18454;
        _18454 = vec3(0.0);
        vec3 _9387;
        uint _9391;
        uint _18453 = 0u;
        SPIRV_CROSS_UNROLL
        for (;;)
        {
            if (!(_18453 < 4u))
            {
                break;
            }
            _9387 = _18454 + (_15581[_18453] * _15586[_18453]);
            _9391 = _18453 + 1u;
            _18454 = _9387;
            _18453 = _9391;
            continue;
        }
        float _9125 = clamp(exp(_7133 * (-0.20000000298023223876953125)), 0.0, 1.0);
        vec3 _9138 = normalize(reflect(_5863, normalize(_5720 + _18452)));
        float _9144 = clamp(dot(normalize(reflect(_5863, _5720)), _7799), 0.0, 1.0);
        vec3 _15576[4] = _17660;
        vec3 _9467 = normalize(vec3(-dot(_15576[3], vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)), -dot(_15576[1], vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)), dot(_15576[2], vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875))));
        vec3 _9495 = vec3(abs(dot(vec3(-_15576[3].x, -_15576[1].x, _15576[2].x), _9467)), abs(dot(vec3(-_15576[3].y, -_15576[1].y, _15576[2].y), _9467)), abs(dot(vec3(-_15576[3].z, -_15576[1].z, _15576[2].z), _9467))) / _15576[0];
        float _9501 = dot(_9467, _9138);
        vec3 _15571[4] = vec3[](vec3(0.886227548122406005859375), vec3(1.0) * (_9138.y * (-1.02332770824432373046875)), vec3(1.0) * (_9138.z * 1.02332770824432373046875), vec3(1.0) * (_9138.x * (-1.02332770824432373046875)));
        vec3 _18458;
        _18458 = vec3(0.0);
        vec3 _9561;
        uint _9565;
        uint _18457 = 0u;
        SPIRV_CROSS_UNROLL
        for (;;)
        {
            if (!(_18457 < 4u))
            {
                break;
            }
            _9561 = _18458 + (_15571[_18457] * _15576[_18457]);
            _9565 = _18457 + 1u;
            _18458 = _9561;
            _18457 = _9565;
            continue;
        }
        _18460 = ((vec3(mix(0.300000011920928955078125, 1.0, _9125)) * _22205) * (max(vec3(0.0), _18454 + (((_15586[0] * ((_9321 * 0.07999999821186065673828125) + ((_9321 * 0.60000002384185791015625) * _9321))) * 0.25) * (0.3153915703296661376953125 * (((3.0 * _9327) * _9327) - 1.0)))) * 1.2999999523162841796875)) + ((max(vec3(0.0), _18458 + (((_15576[0] * ((_9495 * 0.07999999821186065673828125) + ((_9495 * 0.60000002384185791015625) * _9495))) * 0.25) * (0.3153915703296661376953125 * (((3.0 * _9501) * _9501) - 1.0)))) * (0.039999999105930328369140625 * mix(_9125, (0.75 * _9125) + 0.75, _9144 * _9144))) * 2.0);
    }
    else
    {
        _18460 = vec3(0.0);
    }
    vec3 result = (((((_22205 * 0.3183098733425140380859375) * _7147) * _827) * _7372) + (((((((vec3(mix(0.20000000298023223876953125, 0.699999988079071044921875, ((_7151 * _7151) * _7151) * _7151)) * (0.15915493667125701904296875 / ((3.1415927410125732421875 * _7594) * _7594))) * mix(_7147, 1.0, _7166)) * mix(mix(float(_7103), clamp(exp(_7133 * (-0.4000000059604644775390625)), 0.0, 1.0), 0.5), 1.0, _7166)) * _827) * mix(0.800000011920928955078125, 0.300000011920928955078125, smoothstep(50.0, 150.0, length(_5879)))) * _7372) * 1.5)) + _18460;
    vec3 _19342;
    if (globalParams.lantern_count > 0u)
    {
        uvec3 _9590 = uvec3(clamp(floor((ray_hit_ws * vec3(0.24615384638309478759765625, 0.123076923191547393798828125, 0.24615384638309478759765625)) + vec3(16.0, 2.0, 16.0)), vec3(0.0), vec3(31.0, 15.0, 31.0)));
        uint _9619 = (32u * ((32u * _9590.y) + _9590.z)) + _9590.x;
        uint cell_light_count = light_indirection_grid_1._member0[_9619] >> 20u;
        bool _4107 = subgroupAll(cell_light_count <= 2u);
        uint _22209 = _4107 ? 2u : 6u;
        vec3 _19343;
        if (6u == _22209)
        {
            uint i;
            uint lanterns_found[8];
            uint _19311 = 0u;
            for (;;)
            {
                if (!(_19311 < 8u))
                {
                    break;
                }
                lanterns_found[_19311] = 4294967295u;
                i = _19311 + 1u;
                _19311 = i;
                continue;
            }
            uvec2 _11619 = uvec2(1u, 2u);
            uvec2 _11620 = uvec2(_335 & ivec2(1));
            uint _19313;
            _19313 = 0u;
            uint _11641;
            int _11645;
            int _19312 = 0;
            for (;;)
            {
                if (!(_19312 < 2))
                {
                    break;
                }
                _11641 = _19313 + (_11620[_19312] * _11619[_19312]);
                _11645 = _19312 + 1;
                _19313 = _11641;
                _19312 = _11645;
                continue;
            }
            uint _4183 = _19313 & 3u;
            uint _19315;
            _19315 = 0u;
            uint reservoir_sample_idx;
            uint _21499;
            uint _19314 = 0u;
            for (;;)
            {
                bool _19316;
                if (_19314 < 8u)
                {
                    _19316 = _19315 < 8u;
                }
                else
                {
                    _19316 = false;
                }
                if (!_19316)
                {
                    break;
                }
                uvec4 sampled_2 = texelFetch(rdi_reservoir_tex, ivec2(uvec2((_335 / ivec2(2)) + spatial_resolve_offsets.values.data[((_4183 * 16u) + _19314) + 256u].xy)), 0);
                uint _11654 = sampled_2.x;
                bool _20279;
                if (any(notEqual(sampled_2.xy, uvec2(0u))))
                {
                    _20279 = _11654 < globalParams.lantern_count;
                }
                else
                {
                    _20279 = false;
                }
                bool _20280;
                if (_20279)
                {
                    _20280 = lanterns_found[0u] != _11654;
                }
                else
                {
                    _20280 = false;
                }
                bool _20281;
                if (_20280)
                {
                    _20281 = lanterns_found[1u] != _11654;
                }
                else
                {
                    _20281 = false;
                }
                bool _20282;
                if (_20281)
                {
                    _20282 = lanterns_found[2u] != _11654;
                }
                else
                {
                    _20282 = false;
                }
                bool _20283;
                if (_20282)
                {
                    _20283 = lanterns_found[3u] != _11654;
                }
                else
                {
                    _20283 = false;
                }
                bool _20284;
                if (_20283)
                {
                    _20284 = lanterns_found[4u] != _11654;
                }
                else
                {
                    _20284 = false;
                }
                bool _20285;
                if (_20284)
                {
                    _20285 = lanterns_found[5u] != _11654;
                }
                else
                {
                    _20285 = false;
                }
                bool _20286;
                if (_20285)
                {
                    _20286 = lanterns_found[6u] != _11654;
                }
                else
                {
                    _20286 = false;
                }
                bool _20287;
                if (_20286)
                {
                    _20287 = lanterns_found[7u] != _11654;
                }
                else
                {
                    _20287 = false;
                }
                if (_20287)
                {
                    lanterns_found[_19315] = _11654;
                    _21499 = _19315 + 1u;
                }
                else
                {
                    _21499 = _19315;
                }
                reservoir_sample_idx = _19314 + 1u;
                _19315 = _21499;
                _19314 = reservoir_sample_idx;
                continue;
            }
            uint _19321;
            _19321 = _19315;
            uint reservoir_sample_idx_1;
            uint _21500;
            uint _19317 = 0u;
            for (;;)
            {
                if (!(_19317 < 8u))
                {
                    break;
                }
                uint _4365 = subgroupQuadSwapDiagonal(lanterns_found[_19317]);
                bool _20251;
                if (_4365 < globalParams.lantern_count)
                {
                    _20251 = _19321 < 8u;
                }
                else
                {
                    _20251 = false;
                }
                if (_20251)
                {
                    bool _20252;
                    if (lanterns_found[0u] != _4365)
                    {
                        _20252 = lanterns_found[1u] != _4365;
                    }
                    else
                    {
                        _20252 = false;
                    }
                    bool _20253;
                    if (_20252)
                    {
                        _20253 = lanterns_found[2u] != _4365;
                    }
                    else
                    {
                        _20253 = false;
                    }
                    bool _20254;
                    if (_20253)
                    {
                        _20254 = lanterns_found[3u] != _4365;
                    }
                    else
                    {
                        _20254 = false;
                    }
                    bool _20255;
                    if (_20254)
                    {
                        _20255 = lanterns_found[4u] != _4365;
                    }
                    else
                    {
                        _20255 = false;
                    }
                    bool _20256;
                    if (_20255)
                    {
                        _20256 = lanterns_found[5u] != _4365;
                    }
                    else
                    {
                        _20256 = false;
                    }
                    bool _20257;
                    if (_20256)
                    {
                        _20257 = lanterns_found[6u] != _4365;
                    }
                    else
                    {
                        _20257 = false;
                    }
                    bool _20258;
                    if (_20257)
                    {
                        _20258 = lanterns_found[7u] != _4365;
                    }
                    else
                    {
                        _20258 = false;
                    }
                    uint _20267;
                    if (_20258)
                    {
                        lanterns_found[_19321] = _4365;
                        _20267 = _19321 + 1u;
                    }
                    else
                    {
                        _20267 = _19321;
                    }
                    _21500 = _20267;
                }
                else
                {
                    _21500 = _19321;
                }
                reservoir_sample_idx_1 = _19317 + 1u;
                _19321 = _21500;
                _19317 = reservoir_sample_idx_1;
                continue;
            }
            uint ridx;
            Reservoir1sppStreamState stream_state[2];
            Reservoir1spp reservoir[2];
            uint _19318 = 0u;
            for (;;)
            {
                if (!(_19318 < 2u))
                {
                    break;
                }
                stream_state[_19318] = Reservoir1sppStreamState(0.0, 0.0);
                reservoir[_19318] = Reservoir1spp(0.0, 0u, 0.0, 0.0);
                ridx = _19318 + 1u;
                _19318 = ridx;
                continue;
            }
            uint found_lantern_idx;
            uint _19323 = 0u;
            for (;;)
            {
                if (!(_19323 < _19321))
                {
                    break;
                }
                vec2 _11692 = unpackHalf2x16(lantern_buf_1._member0[lanterns_found[_19323]].intensity_color_id);
                float _11693 = _11692.x;
                uint _11698 = lantern_buf_1._member0[lanterns_found[_19323]].intensity_color_id >> uint(16);
                vec3 _11716 = lantern_buf_1._member0[lanterns_found[_19323]].position.xyz - ray_hit_ws;
                float _11718 = dot(_11716, _11716);
                vec3 _11725 = _11716 + vec3(0.0, 0.1500000059604644775390625, 0.0);
                vec3 _20223;
                do
                {
                    if (_11698 == 0u)
                    {
                        _20223 = vec3(1.0, 0.800000011920928955078125, 0.100000001490116119384765625);
                        break;
                    }
                    else
                    {
                        if (_11698 == 1u)
                        {
                            _20223 = vec3(0.0, 0.735904157161712646484375, 3.67952060699462890625);
                            break;
                        }
                        else
                        {
                            if (_11698 == 2u)
                            {
                                _20223 = vec3(0.20513366162776947021484375, 1.02566826343536376953125, 0.20513366162776947021484375);
                                break;
                            }
                            else
                            {
                                if (_11698 == 3u)
                                {
                                    _20223 = vec3(0.85153043270111083984375, 0.56768691539764404296875, 2.8384344577789306640625);
                                    break;
                                }
                                else
                                {
                                    _20223 = vec3(1.82324230670928955078125, 0.546972692012786865234375, 0.182324230670928955078125);
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
                float _11828 = dot(((_20223 * 4.0) * _11693) * ((max(0.0, dot(_5720, _11716 / vec3(length(_11716)))) * ((1.0 / (0.3359999954700469970703125 + _11718)) * smoothstep(36.0 * _11693, 16.0 * _11693, _11718))) * smoothstep(-0.5, 0.20000000298023223876953125, (_11725 / vec3(length(_11725))).y)), vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875));
                float inv_pdf_q = float(_19321);
                float _4716 = fract(_7616 + (float(_19323) / inv_pdf_q));
                if (reservoir[0].w_sum <= reservoir[1].w_sum)
                {
                    float _11874;
                    float _11884;
                    float _11887;
                    uint _20239;
                    float _20244;
                    do
                    {
                        bool _11889;
                        _11874 = stream_state[0].M_sum + 1.0;
                        float _11875 = _11828 * inv_pdf_q;
                        do
                        {
                            _11884 = reservoir[0].w_sum + _11875;
                            _11887 = reservoir[0].M + 1.0;
                            _11889 = (_11875 / _11884) >= _4716;
                            if (_11889)
                            {
                                _20239 = lanterns_found[_19323];
                                break;
                            }
                            else
                            {
                                _20239 = reservoir[0].payload;
                                break;
                            }
                            break; // unreachable workaround
                        } while(false);
                        if (_11889)
                        {
                            _20244 = _11828;
                            break;
                        }
                        else
                        {
                            _20244 = stream_state[0].p_q_sel;
                            break;
                        }
                        break; // unreachable workaround
                    } while(false);
                    reservoir[0] = Reservoir1spp(_11884, _20239, _11887, reservoir[0].W);
                    stream_state[0] = Reservoir1sppStreamState(_20244, _11874);
                }
                else
                {
                    float _11838;
                    float _11848;
                    float _11851;
                    uint _20229;
                    float _20234;
                    do
                    {
                        bool _11853;
                        _11838 = stream_state[1].M_sum + 1.0;
                        float _11839 = _11828 * inv_pdf_q;
                        do
                        {
                            _11848 = reservoir[1].w_sum + _11839;
                            _11851 = reservoir[1].M + 1.0;
                            _11853 = (_11839 / _11848) >= _4716;
                            if (_11853)
                            {
                                _20229 = lanterns_found[_19323];
                                break;
                            }
                            else
                            {
                                _20229 = reservoir[1].payload;
                                break;
                            }
                            break; // unreachable workaround
                        } while(false);
                        if (_11853)
                        {
                            _20234 = _11828;
                            break;
                        }
                        else
                        {
                            _20234 = stream_state[1].p_q_sel;
                            break;
                        }
                        break; // unreachable workaround
                    } while(false);
                    reservoir[1] = Reservoir1spp(_11848, _20229, _11851, reservoir[1].W);
                    stream_state[1] = Reservoir1sppStreamState(_20234, _11838);
                }
                found_lantern_idx = _19323 + 1u;
                _19323 = found_lantern_idx;
                continue;
            }
            uint ridx_1;
            uint _19324 = 1u;
            for (;;)
            {
                if (!(_19324 < 2u))
                {
                    break;
                }
                stream_state[0].M_sum += stream_state[_19324].M_sum;
                ridx_1 = _19324 + 1u;
                _19324 = ridx_1;
                continue;
            }
            uint ridx_2;
            uint _19325 = 1u;
            for (;;)
            {
                if (!(_19325 < 2u))
                {
                    break;
                }
                stream_state[_19325].M_sum = stream_state[0].M_sum;
                ridx_2 = _19325 + 1u;
                _19325 = ridx_2;
                continue;
            }
            vec3 _19345;
            _19345 = result;
            uint ridx_3;
            vec3 _21586;
            float _21739;
            float _21826;
            float _21912;
            float _21997;
            uint _19326 = 0u;
            float _19668;
            float _19773;
            float _19879;
            float _19986;
            for (;;)
            {
                if (!(_19326 < 2u))
                {
                    break;
                }
                reservoir[_19326] = Reservoir1spp(reservoir[_19326].w_sum, reservoir[_19326].payload, stream_state[_19326].M_sum, reservoir[_19326].w_sum / max(9.9999999392252902907785028219223e-09, stream_state[_19326].M_sum * stream_state[_19326].p_q_sel));
                if (reservoir[_19326].W > 0.0)
                {
                    vec2 _12057 = unpackHalf2x16(lantern_buf_1._member0[reservoir[_19326].payload].intensity_color_id);
                    float _12058 = _12057.x;
                    uint _12063 = lantern_buf_1._member0[reservoir[_19326].payload].intensity_color_id >> uint(16);
                    vec3 _12077 = lantern_buf_1._member0[reservoir[_19326].payload].position.xyz - ray_hit_ws;
                    float _12078 = length(_12077);
                    float _12079 = dot(_12077, _12077);
                    vec3 _12086 = _12077 + vec3(0.0, 0.1500000059604644775390625, 0.0);
                    vec3 _12092 = vec3(_12078);
                    vec3 _19346;
                    do
                    {
                        if (_12063 == 0u)
                        {
                            _19346 = vec3(1.0, 0.800000011920928955078125, 0.100000001490116119384765625);
                            break;
                        }
                        else
                        {
                            if (_12063 == 1u)
                            {
                                _19346 = vec3(0.0, 0.735904157161712646484375, 3.67952060699462890625);
                                break;
                            }
                            else
                            {
                                if (_12063 == 2u)
                                {
                                    _19346 = vec3(0.20513366162776947021484375, 1.02566826343536376953125, 0.20513366162776947021484375);
                                    break;
                                }
                                else
                                {
                                    if (_12063 == 3u)
                                    {
                                        _19346 = vec3(0.85153043270111083984375, 0.56768691539764404296875, 2.8384344577789306640625);
                                        break;
                                    }
                                    else
                                    {
                                        _19346 = vec3(1.82324230670928955078125, 0.546972692012786865234375, 0.182324230670928955078125);
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
                    vec3 _12103 = ((_19346 * 4.0) * _12058) * ((max(0.0, dot(_5720, _12077 / _12092)) * ((1.0 / (0.3359999954700469970703125 + _12079)) * smoothstep(36.0 * _12058, 16.0 * _12058, _12079))) * smoothstep(-0.5, 0.20000000298023223876953125, (_12086 / vec3(length(_12086))).y));
                    vec3 _12187 = _12103;
                    float _19348;
                    _19348 = _12103.x;
                    float _12205;
                    int _12209;
                    int _19347 = 1;
                    SPIRV_CROSS_UNROLL
                    for (;;)
                    {
                        if (!(_19347 < 3))
                        {
                            break;
                        }
                        _12205 = max(_19348, _12187[_19347]);
                        _12209 = _19347 + 1;
                        _19348 = _12205;
                        _19347 = _12209;
                        continue;
                    }
                    vec3 _20095;
                    float _21740;
                    float _21827;
                    float _21913;
                    float _21998;
                    if ((reservoir[_19326].W * _19348) > 0.0)
                    {
                        vec3 _20092;
                        if (_12078 > 0.5)
                        {
                            vec3 _11970 = _5848.xyz;
                            vec4 _12248 = (vec4((ray_hit_ws + ((_12077 * (_12078 - 0.5)) / _12092)) + (_5720 * (0.0199999995529651641845703125 * _5693.y)), 1.0) * current_view_1.world_to_view) * current_view_1.view_to_sample;
                            vec3 _12252 = _12248.xyz / vec3(_12248.w);
                            vec4 _12274 = vec4(_11970, 1.0) + (vec4(_12252 - _11970, 0.0) * float(int(sign(_12252.z))));
                            float _12275 = _12274.w;
                            vec3 _12288 = (_12274 / vec4(float((_12275 >= 0.0) ? 1 : (-1)) * max(1.0000000133514319600180897396058e-10, abs(_12275)))).xyz;
                            vec3 _12290 = _12288 - _11970;
                            vec3 _12296 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), lessThan(_12290, vec3(0.0))) - _11970) / _12290;
                            vec3 _12303 = _11970 + (_12290 * max(0.0, max(_12296.x, _12296.y)));
                            vec3 _12304 = _12288 - _12303;
                            vec3 _12309 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), greaterThanEqual(_12304, vec3(0.0))) - _12303) / _12304;
                            vec3 _12324 = _12303 + (_12304 * min(1.0, min(min(_12309.x, _12309.y), _12309.z)));
                            float _19657;
                            float _19658;
                            bool _19659;
                            do
                            {
                                float _12394 = 0.800000011920928955078125 * current_view_1.clip_to_view[3].z;
                                uint _12410 = uint(int(max(2u, min(4u, uint(int(floor(length((((_12324.xy * vec2(0.5, -0.5)) + vec2(0.5)) - ((_12303.xy * vec2(0.5, -0.5)) + vec2(0.5))) * _515))))))));
                                float _19379;
                                bool _19498;
                                float _19499;
                                float _19501;
                                float _19520;
                                float _19539;
                                do
                                {
                                    vec3 _12562 = _12324 - _12303;
                                    float _12571 = float(_12410);
                                    float _19353;
                                    do
                                    {
                                        if (_12324.z > 9.5367431640625e-07)
                                        {
                                            _19353 = _12571;
                                            break;
                                        }
                                        else
                                        {
                                            _19353 = max(1.0, _12571 - 1.0);
                                            break;
                                        }
                                        break; // unreachable workaround
                                    } while(false);
                                    float _12581 = 1.0 / _19353;
                                    bool _19389;
                                    float _19395;
                                    float _19399;
                                    float _19403;
                                    float _19411;
                                    if (_12410 > 0u)
                                    {
                                        float _12591 = mix(0.0, 1.0, pow(_7616 * _12581, 1.0));
                                        vec3 _12594 = _12303 + (_12562 * vec3(_12591));
                                        vec2 _12810 = (_12594.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                        float _12742 = 1.0 / _12594.z;
                                        float _12749 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _12810, 0.0).x;
                                        float _12756 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _12810, 0.0).x;
                                        float _12768 = (max(_12749, _12756) * 1.00000202655792236328125) - _12742;
                                        float _12772 = _12742 - min(_12749, _12756);
                                        bool _22216 = (_12768 < 0.0) ? (_12772 < _12394) : false;
                                        float _19380;
                                        bool _19390;
                                        float _19396;
                                        float _19400;
                                        float _19404;
                                        float _19412;
                                        if (_22216)
                                        {
                                            _19412 = _12768;
                                            _19404 = _12772;
                                            _19400 = _12394;
                                            _19396 = _12591;
                                            _19390 = _22216;
                                            _19380 = 0.0;
                                        }
                                        else
                                        {
                                            float _19382;
                                            _19382 = _12591;
                                            float _12620;
                                            uint _12638;
                                            bool _22217;
                                            bool _19391;
                                            float _19397;
                                            float _19401;
                                            float _19405;
                                            float _19413;
                                            uint _19363 = 1u;
                                            bool _19392 = _22216;
                                            for (;;)
                                            {
                                                if (!(_19363 < _12410))
                                                {
                                                    _19413 = 0.0;
                                                    _19405 = 0.0;
                                                    _19401 = 0.0;
                                                    _19397 = 1.0;
                                                    _19391 = _19392;
                                                    break;
                                                }
                                                _12620 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_19363) + _7616) * _12581, 1.0)));
                                                vec3 _12623 = _12303 + (_12562 * vec3(_12620));
                                                vec2 _12952 = (_12623.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                                float _12884 = 1.0 / _12623.z;
                                                float _12891 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _12952, 0.0).x;
                                                float _12898 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _12952, 0.0).x;
                                                float _12910 = (max(_12891, _12898) * 1.00000202655792236328125) - _12884;
                                                float _12914 = _12884 - min(_12891, _12898);
                                                _22217 = (_12910 < 0.0) ? (_12914 < _12394) : false;
                                                if (_22217)
                                                {
                                                    _19413 = _12910;
                                                    _19405 = _12914;
                                                    _19401 = _12394;
                                                    _19397 = _12620;
                                                    _19391 = _22217;
                                                    break;
                                                }
                                                _12638 = _19363 + 1u;
                                                _19363 = _12638;
                                                _19392 = _22217;
                                                _19382 = _12620;
                                                continue;
                                            }
                                            _19412 = _19413;
                                            _19404 = _19405;
                                            _19400 = _19401;
                                            _19396 = _19397;
                                            _19390 = _19391;
                                            _19380 = _19382;
                                        }
                                        _19411 = _19412;
                                        _19403 = _19404;
                                        _19399 = _19400;
                                        _19395 = _19396;
                                        _19389 = _19390;
                                        _19379 = _19380;
                                    }
                                    else
                                    {
                                        _19411 = 0.0;
                                        _19403 = 0.0;
                                        _19399 = 0.0;
                                        _19395 = 1.0;
                                        _19389 = false;
                                        _19379 = 0.0;
                                    }
                                    if (_19389)
                                    {
                                        _19539 = _19411;
                                        _19520 = _19399;
                                        _19501 = _19403;
                                        _19499 = _19395;
                                        _19498 = true;
                                        break;
                                    }
                                    else
                                    {
                                        _19539 = _12495.base._distance;
                                        _19520 = _12495.thickness;
                                        _19501 = _12495.penetration;
                                        _19499 = _19379;
                                        _19498 = false;
                                        break;
                                    }
                                    break; // unreachable workaround
                                } while(false);
                                bool _19558;
                                if (_19498)
                                {
                                    bool _19560;
                                    if (_19501 < _19520)
                                    {
                                        _19560 = _19539 < _19520;
                                    }
                                    else
                                    {
                                        _19560 = false;
                                    }
                                    _19558 = _19560;
                                }
                                else
                                {
                                    _19558 = false;
                                }
                                if (_19558)
                                {
                                    _19659 = true;
                                    _19658 = _19499;
                                    _19657 = _19501 / current_view_1.clip_to_view[3].z;
                                    break;
                                }
                                _19659 = false;
                                _19658 = _19379;
                                _19657 = 0.0;
                                break;
                            } while(false);
                            vec3 _20093;
                            if (_19659)
                            {
                                vec4 _13326 = (vec4(mix(_12303, _12324, vec3(_19658)), 1.0) * current_view_1.sample_to_view) * current_view_1.view_to_world;
                                vec3 _11992 = ((_13326.xyz / vec3(_13326.w)) + (wo * _19657)) - lantern_buf_1._member0[reservoir[_19326].payload].position.xyz;
                                bool _19660;
                                if (abs(_11992.y) > 0.5)
                                {
                                    _19660 = true;
                                }
                                else
                                {
                                    vec2 _11997 = _11992.xz;
                                    _19660 = dot(_11997, _11997) > 0.136900007724761962890625;
                                }
                                _20093 = mix(_12103, vec3(0.0), bvec3(_19660));
                            }
                            else
                            {
                                _20093 = _12103;
                            }
                            _20092 = _20093;
                        }
                        else
                        {
                            _20092 = _12103;
                        }
                        vec2 _12024 = vec2((float(frame_constants.game_time_sec) + frame_constants.game_time_frac) * 4.0, float(reservoir[_19326].payload * 10u));
                        ivec2 _13547 = ivec2(floor(_12024));
                        vec2 _13548 = fract(_12024);
                        uvec2 _13549 = uvec2(_13547);
                        uint _13599 = _13549.y;
                        uint _13605 = _13599 + (_13599 << 10u);
                        uint _13607 = _13605 ^ (_13605 >> 6u);
                        uint _13609 = _13607 + (_13607 << 3u);
                        uint _13611 = _13609 ^ (_13609 >> 11u);
                        uint _13619 = (((_13549.x * 1664525u) + (_13611 + (_13611 << 15u))) + 1013904223u) * 1664525u;
                        uint _13621 = _13619 ^ (_13619 >> 11u);
                        uint _13624 = _13621 ^ ((_13621 << 7u) & 2636928640u);
                        uint _13627 = _13624 ^ ((_13624 << 15u) & 4022730752u);
                        uint _13629 = _13627 ^ (_13627 >> 18u);
                        float _19766;
                        _19766 = _19668;
                        uint _13646;
                        uint _13665;
                        float _13671;
                        uint _19765 = 0u;
                        uint _20192 = _13629;
                        for (;;)
                        {
                            if (!(_19765 < 1u))
                            {
                                break;
                            }
                            uint _13657 = _20192 + (_20192 << 10u);
                            uint _13659 = _13657 ^ (_13657 >> 6u);
                            uint _13661 = _13659 + (_13659 << 3u);
                            uint _13663 = _13661 ^ (_13661 >> 11u);
                            _13665 = _13663 + (_13663 << 15u);
                            _13671 = uintBitsToFloat((_20192 & 8388607u) | 1065353216u) - 1.0;
                            _13646 = _19765 + 1u;
                            _20192 = _13665;
                            _19766 = _13671;
                            _19765 = _13646;
                            continue;
                        }
                        uvec2 _13557 = uvec2(_13547 + ivec2(1, 0));
                        uint _13675 = _13557.y;
                        uint _13681 = _13675 + (_13675 << 10u);
                        uint _13683 = _13681 ^ (_13681 >> 6u);
                        uint _13685 = _13683 + (_13683 << 3u);
                        uint _13687 = _13685 ^ (_13685 >> 11u);
                        uint _13695 = (((_13557.x * 1664525u) + (_13687 + (_13687 << 15u))) + 1013904223u) * 1664525u;
                        uint _13697 = _13695 ^ (_13695 >> 11u);
                        uint _13700 = _13697 ^ ((_13697 << 7u) & 2636928640u);
                        uint _13703 = _13700 ^ ((_13700 << 15u) & 4022730752u);
                        uint _13705 = _13703 ^ (_13703 >> 18u);
                        float _19871;
                        _19871 = _19773;
                        uint _13722;
                        uint _13741;
                        float _13747;
                        uint _19870 = 0u;
                        uint _20191 = _13705;
                        for (;;)
                        {
                            if (!(_19870 < 1u))
                            {
                                break;
                            }
                            uint _13733 = _20191 + (_20191 << 10u);
                            uint _13735 = _13733 ^ (_13733 >> 6u);
                            uint _13737 = _13735 + (_13735 << 3u);
                            uint _13739 = _13737 ^ (_13737 >> 11u);
                            _13741 = _13739 + (_13739 << 15u);
                            _13747 = uintBitsToFloat((_20191 & 8388607u) | 1065353216u) - 1.0;
                            _13722 = _19870 + 1u;
                            _20191 = _13741;
                            _19871 = _13747;
                            _19870 = _13722;
                            continue;
                        }
                        uvec2 _13564 = uvec2(_13547 + ivec2(0, 1));
                        uint _13751 = _13564.y;
                        uint _13757 = _13751 + (_13751 << 10u);
                        uint _13759 = _13757 ^ (_13757 >> 6u);
                        uint _13761 = _13759 + (_13759 << 3u);
                        uint _13763 = _13761 ^ (_13761 >> 11u);
                        uint _13771 = (((_13564.x * 1664525u) + (_13763 + (_13763 << 15u))) + 1013904223u) * 1664525u;
                        uint _13773 = _13771 ^ (_13771 >> 11u);
                        uint _13776 = _13773 ^ ((_13773 << 7u) & 2636928640u);
                        uint _13779 = _13776 ^ ((_13776 << 15u) & 4022730752u);
                        uint _13781 = _13779 ^ (_13779 >> 18u);
                        float _19977;
                        _19977 = _19879;
                        uint _13798;
                        uint _13817;
                        float _13823;
                        uint _19976 = 0u;
                        uint _20190 = _13781;
                        for (;;)
                        {
                            if (!(_19976 < 1u))
                            {
                                break;
                            }
                            uint _13809 = _20190 + (_20190 << 10u);
                            uint _13811 = _13809 ^ (_13809 >> 6u);
                            uint _13813 = _13811 + (_13811 << 3u);
                            uint _13815 = _13813 ^ (_13813 >> 11u);
                            _13817 = _13815 + (_13815 << 15u);
                            _13823 = uintBitsToFloat((_20190 & 8388607u) | 1065353216u) - 1.0;
                            _13798 = _19976 + 1u;
                            _20190 = _13817;
                            _19977 = _13823;
                            _19976 = _13798;
                            continue;
                        }
                        uvec2 _13572 = uvec2(_13547 + ivec2(1));
                        uint _13827 = _13572.y;
                        uint _13833 = _13827 + (_13827 << 10u);
                        uint _13835 = _13833 ^ (_13833 >> 6u);
                        uint _13837 = _13835 + (_13835 << 3u);
                        uint _13839 = _13837 ^ (_13837 >> 11u);
                        uint _13847 = (((_13572.x * 1664525u) + (_13839 + (_13839 << 15u))) + 1013904223u) * 1664525u;
                        uint _13849 = _13847 ^ (_13847 >> 11u);
                        uint _13852 = _13849 ^ ((_13849 << 7u) & 2636928640u);
                        uint _13855 = _13852 ^ ((_13852 << 15u) & 4022730752u);
                        uint _13857 = _13855 ^ (_13855 >> 18u);
                        float _20084;
                        _20084 = _19986;
                        uint _13874;
                        uint _13893;
                        float _13899;
                        uint _20083 = 0u;
                        uint _20189 = _13857;
                        for (;;)
                        {
                            if (!(_20083 < 1u))
                            {
                                break;
                            }
                            uint _13885 = _20189 + (_20189 << 10u);
                            uint _13887 = _13885 ^ (_13885 >> 6u);
                            uint _13889 = _13887 + (_13887 << 3u);
                            uint _13891 = _13889 ^ (_13889 >> 11u);
                            _13893 = _13891 + (_13891 << 15u);
                            _13899 = uintBitsToFloat((_20189 & 8388607u) | 1065353216u) - 1.0;
                            _13874 = _20083 + 1u;
                            _20189 = _13893;
                            _20084 = _13899;
                            _20083 = _13874;
                            continue;
                        }
                        vec2 _13905 = (_13548 * _13548) * (vec2(3.0) - (vec2(2.0) * _13548));
                        float _13580 = _13905.x;
                        float _13581 = 1.0 - _13580;
                        float _13583 = _13905.y;
                        _21998 = _20084;
                        _21913 = _19977;
                        _21827 = _19871;
                        _21740 = _19766;
                        _20095 = (((_20092 * mix(0.5, 1.0, (((1.0 - _13583) * ((_19766 * _13581) + (_19871 * _13580))) + ((_19977 * _13581) * _13583)) + ((_20084 * _13580) * _13583))) * reservoir[_19326].W) * _22205) * frame_constants.ev_mult;
                    }
                    else
                    {
                        _21998 = _19986;
                        _21913 = _19879;
                        _21827 = _19773;
                        _21740 = _19668;
                        _20095 = vec3(0.0);
                    }
                    _21997 = _21998;
                    _21912 = _21913;
                    _21826 = _21827;
                    _21739 = _21740;
                    _21586 = _19345 + _20095;
                }
                else
                {
                    _21997 = _19986;
                    _21912 = _19879;
                    _21826 = _19773;
                    _21739 = _19668;
                    _21586 = _19345;
                }
                ridx_3 = _19326 + 1u;
                _19986 = _21997;
                _19879 = _21912;
                _19773 = _21826;
                _19668 = _21739;
                _19345 = _21586;
                _19326 = ridx_3;
                continue;
            }
            _19343 = _19345;
        }
        else
        {
            vec3 _19344;
            if (2u == _22209)
            {
                uint _5543 = light_indirection_grid_1._member0[_9619] & 1048575u;
                uint _5546 = min(64u, cell_light_count);
                vec3 _19187;
                _19187 = result;
                vec3 result_1;
                uint slot_idx;
                float _21300;
                float _21360;
                float _21419;
                float _21477;
                uint _18462 = 0u;
                float _18791;
                float _18888;
                float _18985;
                float _19083;
                for (;;)
                {
                    if (!(_18462 < _5546))
                    {
                        break;
                    }
                    uint _5553 = _5543 + _18462;
                    vec2 _9764 = unpackHalf2x16(lantern_buf_1._member0[grid_light_indices_1._member0[_5553]].intensity_color_id);
                    float _9765 = _9764.x;
                    uint _9770 = lantern_buf_1._member0[grid_light_indices_1._member0[_5553]].intensity_color_id >> uint(16);
                    vec3 _9784 = lantern_buf_1._member0[grid_light_indices_1._member0[_5553]].position.xyz - ray_hit_ws;
                    float _9785 = length(_9784);
                    float _9786 = dot(_9784, _9784);
                    vec3 _9793 = _9784 + vec3(0.0, 0.1500000059604644775390625, 0.0);
                    vec3 _9799 = vec3(_9785);
                    vec3 _18469;
                    do
                    {
                        if (_9770 == 0u)
                        {
                            _18469 = vec3(1.0, 0.800000011920928955078125, 0.100000001490116119384765625);
                            break;
                        }
                        else
                        {
                            if (_9770 == 1u)
                            {
                                _18469 = vec3(0.0, 0.735904157161712646484375, 3.67952060699462890625);
                                break;
                            }
                            else
                            {
                                if (_9770 == 2u)
                                {
                                    _18469 = vec3(0.20513366162776947021484375, 1.02566826343536376953125, 0.20513366162776947021484375);
                                    break;
                                }
                                else
                                {
                                    if (_9770 == 3u)
                                    {
                                        _18469 = vec3(0.85153043270111083984375, 0.56768691539764404296875, 2.8384344577789306640625);
                                        break;
                                    }
                                    else
                                    {
                                        _18469 = vec3(1.82324230670928955078125, 0.546972692012786865234375, 0.182324230670928955078125);
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
                    vec3 _9810 = ((_18469 * 4.0) * _9765) * ((max(0.0, dot(_5720, _9784 / _9799)) * ((1.0 / (0.3359999954700469970703125 + _9786)) * smoothstep(36.0 * _9765, 16.0 * _9765, _9786))) * smoothstep(-0.5, 0.20000000298023223876953125, (_9793 / vec3(length(_9793))).y));
                    vec3 _9894 = _9810;
                    float _18471;
                    _18471 = _9810.x;
                    float _9912;
                    int _9916;
                    int _18470 = 1;
                    SPIRV_CROSS_UNROLL
                    for (;;)
                    {
                        if (!(_18470 < 3))
                        {
                            break;
                        }
                        _9912 = max(_18471, _9894[_18470]);
                        _9916 = _18470 + 1;
                        _18471 = _9912;
                        _18470 = _9916;
                        continue;
                    }
                    vec3 _19183;
                    if (_18471 > 0.0)
                    {
                        vec3 _19180;
                        if (_9785 > 0.5)
                        {
                            vec3 _9677 = _5848.xyz;
                            vec4 _9955 = (vec4((ray_hit_ws + ((_9784 * (_9785 - 0.5)) / _9799)) + (_5720 * (0.0199999995529651641845703125 * _5693.y)), 1.0) * current_view_1.world_to_view) * current_view_1.view_to_sample;
                            vec3 _9959 = _9955.xyz / vec3(_9955.w);
                            vec4 _9981 = vec4(_9677, 1.0) + (vec4(_9959 - _9677, 0.0) * float(int(sign(_9959.z))));
                            vec3 _9995 = (_9981 / vec4(float((_9981.w >= 0.0) ? 1 : (-1)) * max(1.0000000133514319600180897396058e-10, abs(_9981.w)))).xyz;
                            vec3 _9997 = _9995 - _9677;
                            vec3 _10003 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), lessThan(_9997, vec3(0.0))) - _9677) / _9997;
                            vec3 _10010 = _9677 + (_9997 * max(0.0, max(_10003.x, _10003.y)));
                            vec3 _10011 = _9995 - _10010;
                            vec3 _10016 = (mix(vec3(-1.0, -1.0, 0.0), vec3(1.0), greaterThanEqual(_10011, vec3(0.0))) - _10010) / _10011;
                            vec3 _10031 = _10010 + (_10011 * min(1.0, min(min(_10016.x, _10016.y), _10016.z)));
                            float _18780;
                            float _18781;
                            bool _18782;
                            do
                            {
                                float _10101 = 0.800000011920928955078125 * current_view_1.clip_to_view[3].z;
                                uint _10117 = uint(int(max(2u, min(4u, uint(int(floor(length((((_10031.xy * vec2(0.5, -0.5)) + vec2(0.5)) - ((_10010.xy * vec2(0.5, -0.5)) + vec2(0.5))) * _515))))))));
                                float _18502;
                                bool _18621;
                                float _18622;
                                float _18624;
                                float _18643;
                                float _18662;
                                do
                                {
                                    vec3 _10269 = _10031 - _10010;
                                    float _10278 = float(_10117);
                                    float _18476;
                                    do
                                    {
                                        if (_10031.z > 9.5367431640625e-07)
                                        {
                                            _18476 = _10278;
                                            break;
                                        }
                                        else
                                        {
                                            _18476 = max(1.0, _10278 - 1.0);
                                            break;
                                        }
                                        break; // unreachable workaround
                                    } while(false);
                                    float _10288 = 1.0 / _18476;
                                    bool _18512;
                                    float _18518;
                                    float _18522;
                                    float _18526;
                                    float _18534;
                                    if (_10117 > 0u)
                                    {
                                        float _10298 = mix(0.0, 1.0, pow(_7616 * _10288, 1.0));
                                        vec3 _10301 = _10010 + (_10269 * vec3(_10298));
                                        vec2 _10517 = (_10301.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                        float _10449 = 1.0 / _10301.z;
                                        float _10456 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _10517, 0.0).x;
                                        float _10463 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _10517, 0.0).x;
                                        float _10475 = (max(_10456, _10463) * 1.00000202655792236328125) - _10449;
                                        float _10479 = _10449 - min(_10456, _10463);
                                        bool _22211 = (_10475 < 0.0) ? (_10479 < _10101) : false;
                                        float _18503;
                                        bool _18513;
                                        float _18519;
                                        float _18523;
                                        float _18527;
                                        float _18535;
                                        if (_22211)
                                        {
                                            _18535 = _10475;
                                            _18527 = _10479;
                                            _18523 = _10101;
                                            _18519 = _10298;
                                            _18513 = _22211;
                                            _18503 = 0.0;
                                        }
                                        else
                                        {
                                            float _18505;
                                            _18505 = _10298;
                                            float _10327;
                                            uint _10345;
                                            bool _22212;
                                            bool _18514;
                                            float _18520;
                                            float _18524;
                                            float _18528;
                                            float _18536;
                                            uint _18486 = 1u;
                                            bool _18515 = _22211;
                                            for (;;)
                                            {
                                                if (!(_18486 < _10117))
                                                {
                                                    _18536 = 0.0;
                                                    _18528 = 0.0;
                                                    _18524 = 0.0;
                                                    _18520 = 1.0;
                                                    _18514 = _18515;
                                                    break;
                                                }
                                                _10327 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_18486) + _7616) * _10288, 1.0)));
                                                vec3 _10330 = _10010 + (_10269 * vec3(_10327));
                                                vec2 _10659 = (_10330.xy * vec2(0.5, -0.5)) + vec2(0.5);
                                                float _10591 = 1.0 / _10330.z;
                                                float _10598 = 1.0 / textureLod(sampler2D(depth_tex, samplers_llc), _10659, 0.0).x;
                                                float _10605 = 1.0 / textureLod(sampler2D(depth_tex, samplers_nnc), _10659, 0.0).x;
                                                float _10617 = (max(_10598, _10605) * 1.00000202655792236328125) - _10591;
                                                float _10621 = _10591 - min(_10598, _10605);
                                                _22212 = (_10617 < 0.0) ? (_10621 < _10101) : false;
                                                if (_22212)
                                                {
                                                    _18536 = _10617;
                                                    _18528 = _10621;
                                                    _18524 = _10101;
                                                    _18520 = _10327;
                                                    _18514 = _22212;
                                                    break;
                                                }
                                                _10345 = _18486 + 1u;
                                                _18486 = _10345;
                                                _18515 = _22212;
                                                _18505 = _10327;
                                                continue;
                                            }
                                            _18535 = _18536;
                                            _18527 = _18528;
                                            _18523 = _18524;
                                            _18519 = _18520;
                                            _18513 = _18514;
                                            _18503 = _18505;
                                        }
                                        _18534 = _18535;
                                        _18526 = _18527;
                                        _18522 = _18523;
                                        _18518 = _18519;
                                        _18512 = _18513;
                                        _18502 = _18503;
                                    }
                                    else
                                    {
                                        _18534 = 0.0;
                                        _18526 = 0.0;
                                        _18522 = 0.0;
                                        _18518 = 1.0;
                                        _18512 = false;
                                        _18502 = 0.0;
                                    }
                                    if (_18512)
                                    {
                                        _18662 = _18534;
                                        _18643 = _18522;
                                        _18624 = _18526;
                                        _18622 = _18518;
                                        _18621 = true;
                                        break;
                                    }
                                    else
                                    {
                                        _18662 = _10202.base._distance;
                                        _18643 = _10202.thickness;
                                        _18624 = _10202.penetration;
                                        _18622 = _18502;
                                        _18621 = false;
                                        break;
                                    }
                                    break; // unreachable workaround
                                } while(false);
                                bool _18681;
                                if (_18621)
                                {
                                    bool _18683;
                                    if (_18624 < _18643)
                                    {
                                        _18683 = _18662 < _18643;
                                    }
                                    else
                                    {
                                        _18683 = false;
                                    }
                                    _18681 = _18683;
                                }
                                else
                                {
                                    _18681 = false;
                                }
                                if (_18681)
                                {
                                    _18782 = true;
                                    _18781 = _18622;
                                    _18780 = _18624 / current_view_1.clip_to_view[3].z;
                                    break;
                                }
                                _18782 = false;
                                _18781 = _18502;
                                _18780 = 0.0;
                                break;
                            } while(false);
                            vec3 _19181;
                            if (_18782)
                            {
                                vec4 _11033 = (vec4(mix(_10010, _10031, vec3(_18781)), 1.0) * current_view_1.sample_to_view) * current_view_1.view_to_world;
                                vec3 _9699 = ((_11033.xyz / vec3(_11033.w)) + (wo * _18780)) - lantern_buf_1._member0[grid_light_indices_1._member0[_5553]].position.xyz;
                                bool _18783;
                                if (abs(_9699.y) > 0.5)
                                {
                                    _18783 = true;
                                }
                                else
                                {
                                    _18783 = dot(_9699.xz, _9699.xz) > 0.136900007724761962890625;
                                }
                                _19181 = mix(_9810, vec3(0.0), bvec3(_18783));
                            }
                            else
                            {
                                _19181 = _9810;
                            }
                            _19180 = _19181;
                        }
                        else
                        {
                            _19180 = _9810;
                        }
                        vec2 _9731 = vec2((float(frame_constants.game_time_sec) + frame_constants.game_time_frac) * 4.0, float(grid_light_indices_1._member0[_5553] * 10u));
                        ivec2 _11254 = ivec2(floor(_9731));
                        vec2 _11255 = fract(_9731);
                        uvec2 _11256 = uvec2(_11254);
                        uint _11306 = _11256.y;
                        uint _11312 = _11306 + (_11306 << 10u);
                        uint _11314 = _11312 ^ (_11312 >> 6u);
                        uint _11316 = _11314 + (_11314 << 3u);
                        uint _11318 = _11316 ^ (_11316 >> 11u);
                        uint _11326 = (((_11256.x * 1664525u) + (_11318 + (_11318 << 15u))) + 1013904223u) * 1664525u;
                        uint _11328 = _11326 ^ (_11326 >> 11u);
                        uint _11331 = _11328 ^ ((_11328 << 7u) & 2636928640u);
                        uint _11334 = _11331 ^ ((_11331 << 15u) & 4022730752u);
                        uint _11336 = _11334 ^ (_11334 >> 18u);
                        float _18881;
                        _18881 = _18791;
                        uint _11353;
                        uint _11372;
                        float _11378;
                        uint _18880 = 0u;
                        uint _19280 = _11336;
                        for (;;)
                        {
                            if (!(_18880 < 1u))
                            {
                                break;
                            }
                            uint _11364 = _19280 + (_19280 << 10u);
                            uint _11366 = _11364 ^ (_11364 >> 6u);
                            uint _11368 = _11366 + (_11366 << 3u);
                            uint _11370 = _11368 ^ (_11368 >> 11u);
                            _11372 = _11370 + (_11370 << 15u);
                            _11378 = uintBitsToFloat((_19280 & 8388607u) | 1065353216u) - 1.0;
                            _11353 = _18880 + 1u;
                            _19280 = _11372;
                            _18881 = _11378;
                            _18880 = _11353;
                            continue;
                        }
                        uvec2 _11264 = uvec2(_11254 + ivec2(1, 0));
                        uint _11382 = _11264.y;
                        uint _11388 = _11382 + (_11382 << 10u);
                        uint _11390 = _11388 ^ (_11388 >> 6u);
                        uint _11392 = _11390 + (_11390 << 3u);
                        uint _11394 = _11392 ^ (_11392 >> 11u);
                        uint _11402 = (((_11264.x * 1664525u) + (_11394 + (_11394 << 15u))) + 1013904223u) * 1664525u;
                        uint _11404 = _11402 ^ (_11402 >> 11u);
                        uint _11407 = _11404 ^ ((_11404 << 7u) & 2636928640u);
                        uint _11410 = _11407 ^ ((_11407 << 15u) & 4022730752u);
                        uint _11412 = _11410 ^ (_11410 >> 18u);
                        float _18977;
                        _18977 = _18888;
                        uint _11429;
                        uint _11448;
                        float _11454;
                        uint _18976 = 0u;
                        uint _19279 = _11412;
                        for (;;)
                        {
                            if (!(_18976 < 1u))
                            {
                                break;
                            }
                            uint _11440 = _19279 + (_19279 << 10u);
                            uint _11442 = _11440 ^ (_11440 >> 6u);
                            uint _11444 = _11442 + (_11442 << 3u);
                            uint _11446 = _11444 ^ (_11444 >> 11u);
                            _11448 = _11446 + (_11446 << 15u);
                            _11454 = uintBitsToFloat((_19279 & 8388607u) | 1065353216u) - 1.0;
                            _11429 = _18976 + 1u;
                            _19279 = _11448;
                            _18977 = _11454;
                            _18976 = _11429;
                            continue;
                        }
                        uvec2 _11271 = uvec2(_11254 + ivec2(0, 1));
                        uint _11458 = _11271.y;
                        uint _11464 = _11458 + (_11458 << 10u);
                        uint _11466 = _11464 ^ (_11464 >> 6u);
                        uint _11468 = _11466 + (_11466 << 3u);
                        uint _11470 = _11468 ^ (_11468 >> 11u);
                        uint _11478 = (((_11271.x * 1664525u) + (_11470 + (_11470 << 15u))) + 1013904223u) * 1664525u;
                        uint _11480 = _11478 ^ (_11478 >> 11u);
                        uint _11483 = _11480 ^ ((_11480 << 7u) & 2636928640u);
                        uint _11486 = _11483 ^ ((_11483 << 15u) & 4022730752u);
                        uint _11488 = _11486 ^ (_11486 >> 18u);
                        float _19074;
                        _19074 = _18985;
                        uint _11505;
                        uint _11524;
                        float _11530;
                        uint _19073 = 0u;
                        uint _19278 = _11488;
                        for (;;)
                        {
                            if (!(_19073 < 1u))
                            {
                                break;
                            }
                            uint _11516 = _19278 + (_19278 << 10u);
                            uint _11518 = _11516 ^ (_11516 >> 6u);
                            uint _11520 = _11518 + (_11518 << 3u);
                            uint _11522 = _11520 ^ (_11520 >> 11u);
                            _11524 = _11522 + (_11522 << 15u);
                            _11530 = uintBitsToFloat((_19278 & 8388607u) | 1065353216u) - 1.0;
                            _11505 = _19073 + 1u;
                            _19278 = _11524;
                            _19074 = _11530;
                            _19073 = _11505;
                            continue;
                        }
                        uvec2 _11279 = uvec2(_11254 + ivec2(1));
                        uint _11534 = _11279.y;
                        uint _11540 = _11534 + (_11534 << 10u);
                        uint _11542 = _11540 ^ (_11540 >> 6u);
                        uint _11544 = _11542 + (_11542 << 3u);
                        uint _11546 = _11544 ^ (_11544 >> 11u);
                        uint _11554 = (((_11279.x * 1664525u) + (_11546 + (_11546 << 15u))) + 1013904223u) * 1664525u;
                        uint _11556 = _11554 ^ (_11554 >> 11u);
                        uint _11559 = _11556 ^ ((_11556 << 7u) & 2636928640u);
                        uint _11562 = _11559 ^ ((_11559 << 15u) & 4022730752u);
                        uint _11564 = _11562 ^ (_11562 >> 18u);
                        float _19172;
                        _19172 = _19083;
                        uint _11581;
                        uint _11600;
                        float _11606;
                        uint _19171 = 0u;
                        uint _19277 = _11564;
                        for (;;)
                        {
                            if (!(_19171 < 1u))
                            {
                                break;
                            }
                            uint _11592 = _19277 + (_19277 << 10u);
                            uint _11594 = _11592 ^ (_11592 >> 6u);
                            uint _11596 = _11594 + (_11594 << 3u);
                            uint _11598 = _11596 ^ (_11596 >> 11u);
                            _11600 = _11598 + (_11598 << 15u);
                            _11606 = uintBitsToFloat((_19277 & 8388607u) | 1065353216u) - 1.0;
                            _11581 = _19171 + 1u;
                            _19277 = _11600;
                            _19172 = _11606;
                            _19171 = _11581;
                            continue;
                        }
                        vec2 _11612 = (_11255 * _11255) * (vec2(3.0) - (vec2(2.0) * _11255));
                        float _11287 = _11612.x;
                        float _11288 = 1.0 - _11287;
                        float _11290 = _11612.y;
                        _21477 = _19172;
                        _21419 = _19074;
                        _21360 = _18977;
                        _21300 = _18881;
                        _19183 = (((_19180 * mix(0.5, 1.0, (((1.0 - _11290) * ((_18881 * _11288) + (_18977 * _11287))) + ((_19074 * _11288) * _11290)) + ((_19172 * _11287) * _11290))) * 1.0) * _22205) * frame_constants.ev_mult;
                    }
                    else
                    {
                        _21477 = _19083;
                        _21419 = _18985;
                        _21360 = _18888;
                        _21300 = _18791;
                        _19183 = vec3(0.0);
                    }
                    result_1 = _19187 + _19183;
                    slot_idx = _18462 + 1u;
                    _19187 = result_1;
                    _19083 = _21477;
                    _18985 = _21419;
                    _18888 = _21360;
                    _18791 = _21300;
                    _18462 = slot_idx;
                    continue;
                }
                _19344 = _19187;
            }
            else
            {
                _19344 = result;
            }
            _19343 = _19344;
        }
        _19342 = _19343;
    }
    else
    {
        _19342 = result;
    }
    vec3 _19340;
    if ((frame_constants.render_overrides & 4u) != 0u)
    {
        _19340 = _22205;
    }
    else
    {
        vec3 _19341;
        if ((frame_constants.render_overrides & 8u) != 0u)
        {
            vec3 _5609 = (_5720 * 0.5) + vec3(0.5);
            _19341 = _5609 * _5609;
        }
        else
        {
            _19341 = _19342;
        }
        _19340 = _19341;
    }
    entryPointParam_ps_main_color = vec4(_19340, 0.0);
}

