#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_demote_to_helper_invocation : require
#extension GL_EXT_samplerless_texture_functions : require

struct Bindless_natural
{
    uint bindless_handle;
};

struct Grass2ExemplarParams_natural
{
    float radius_xz;
    float center_y;
    float half_y;
    float max_y;
    float wind_wave_scale;
    uint shadow_opacity;
    float height_scale_min;
    float height_scale_max;
    float xz_scale_min;
    float xz_scale_max;
    Bindless_natural world_albedo_tint;
};

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 2, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} clump_attribs;

layout(set = 6, binding = 0, std430) readonly buffer grass2_exemplar_params_params
{
    Grass2ExemplarParams_natural _member0[];
} grass2_exemplar_params_params_1;

layout(set = 7, binding = 0, scalar) uniform TerrainHeightmap_natural
{
    uvec2 terrain_heightmap_dims;
    Tex2D_natural bg_terrain_heightmap;
    Tex2D_natural bg_terrain_fog_height;
    vec2 bg_terrain_height_bounds_ws;
    vec4 bg_water_footprint_ws;
} terrain_heightmap;

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

layout(set = 0, binding = 0, std140) uniform GlobalParams_natural
{
    uvec2 hzb_tex_inner_dims;
} globalParams;

layout(push_constant, std430) uniform EntryPointParams_natural
{
    uint instance_index;
} entryPointParams;

layout(set = 7, binding = 1) uniform texture2D terrain_heightmap_terrain_heightmap;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 0, binding = 1) uniform texture2D hzb_tex;

layout(location = 0) in vec2 vs_out_uv;
layout(location = 0) out vec4 entryPointParam_ps_main;

void main()
{
    uint _920 = min((clump_attribs._member0[entryPointParams.instance_index] & 255u), 55u);
    uint _979 = entryPointParams.instance_index + (entryPointParams.instance_index << 10u);
    uint _981 = _979 ^ (_979 >> 6u);
    uint _983 = _981 + (_981 << 3u);
    uint _985 = _983 ^ (_983 >> 11u);
    uint _987 = _985 + (_985 << 15u);
    uint _1059 = _987 * 13u;
    uint _1070 = _1059 + (_1059 << 10u);
    uint _1072 = _1070 ^ (_1070 >> 6u);
    uint _1074 = _1072 + (_1072 << 3u);
    uint _1076 = _1074 ^ (_1074 >> 11u);
    float _1084 = uintBitsToFloat(((_1076 + (_1076 << 15u)) & 8388607u) | 1065353216u) - 1.0;
    float _860 = mix(grass2_exemplar_params_params_1._member0[_920].height_scale_min, grass2_exemplar_params_params_1._member0[_920].height_scale_max, _1084 * _1084) * (float(clump_attribs._member0[entryPointParams.instance_index] >> 16u) * 1.525902189314365386962890625e-05);
    vec2 _1501;
    do
    {
        if (entryPointParams.instance_index < 57344u)
        {
            uint _1165 = (entryPointParams.instance_index % 14336u) + 1u;
            uint _1175 = (_1165 << 16u) | (_1165 >> 16u);
            uint _1180 = ((_1175 & 1431655765u) << 1u) | ((_1175 & 2863311530u) >> 1u);
            uint _1185 = ((_1180 & 858993459u) << 2u) | ((_1180 & 3435973836u) >> 2u);
            uint _1190 = ((_1185 & 252645135u) << 4u) | ((_1185 & 4042322160u) >> 4u);
            _1501 = (vec2(float(_1165) * 6.9754467403981834650039672851562e-05, float(((_1190 & 16711935u) << 8u) | ((_1190 & 4278255360u) >> 8u)) * 2.3283064365386962890625e-10) - vec2(0.5)) * 130.0;
            break;
        }
        uint _1200 = ((entryPointParams.instance_index - 57344u) % 30720u) + 1u;
        uint _1210 = (_1200 << 16u) | (_1200 >> 16u);
        uint _1215 = ((_1210 & 1431655765u) << 1u) | ((_1210 & 2863311530u) >> 1u);
        uint _1220 = ((_1215 & 858993459u) << 2u) | ((_1215 & 3435973836u) >> 2u);
        uint _1225 = ((_1220 & 252645135u) << 4u) | ((_1220 & 4042322160u) >> 4u);
        _1501 = (vec2(float(_1200) * 3.2552085031056776642799377441406e-05, float(((_1225 & 16711935u) << 8u) | ((_1225 & 4278255360u) >> 8u)) * 2.3283064365386962890625e-10) - vec2(0.5)) * 190.0;
        break;
    } while(false);
    vec3 _1237 = vec3(_1501.x, 0.0, _1501.y);
    vec2 _886 = _1237.xz;
    float _1502;
    do
    {
        if ((abs(_1501.x) < 65.0) && (abs(_1501.y) < 65.0))
        {
            _1502 = mix(-2.5, 24.0, textureLod(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), (_886 * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0).x);
            break;
        }
        else
        {
            vec2 _1285 = (_886 * vec2(0.001000000047497451305389404296875)) + vec2(0.5);
            _1502 = textureLod(nonuniformEXT(sampler2D(resource_handles[terrain_heightmap.bg_terrain_heightmap.bindless_handle], samplers_lnc_iso)), vec2(_1285.y, 1.0 - _1285.x), 0.0).x;
            break;
        }
        break; // unreachable workaround
    } while(false);
    _1237.y = _1502;
    float _1301 = grass2_exemplar_params_params_1._member0[_920].radius_xz * (exp2(mix(log2(grass2_exemplar_params_params_1._member0[_920].xz_scale_min), log2(grass2_exemplar_params_params_1._member0[_920].xz_scale_max), uintBitsToFloat((_987 & 8388607u) | 1065353216u) - 1.0)) * 2.378414154052734375);
    float _1304 = grass2_exemplar_params_params_1._member0[_920].half_y * _860;
    float _1314 = sqrt((_1301 * _1301) + (_1304 * _1304));
    vec4 _1363 = vec4(_1237 + vec3(0.0, grass2_exemplar_params_params_1._member0[_920].center_y * _860, 0.0), 1.0) * current_view.world_to_view;
    vec3 _1364 = _1363.xyz;
    float _569 = _1363.z;
    float _570 = -_569;
    if (_570 <= _1314)
    {
        demote;
    }
    _1364.z = _570;
    float _1376 = current_view.view_to_clip[0].x * 0.5;
    float _1379 = current_view.view_to_clip[1].y * 0.5;
    vec3 _1381 = _1364 * _1314;
    float _1388 = (_570 * _570) - (_1314 * _1314);
    float _1390 = _1363.x;
    float _1395 = sqrt((_1390 * _1390) + _1388);
    float _1398 = _1395 * _1390;
    float _1403 = _1395 * _570;
    float _1417 = _1363.y;
    float _1422 = sqrt((_1417 * _1417) + _1388);
    float _1425 = _1422 * _1417;
    float _1429 = _1422 * _570;
    vec4 _675 = vec4(globalParams.hzb_tex_inner_dims.xyxy);
    vec4 _682 = clamp((vec4(((_1398 - _1381.z) / (_1403 + _1381.x)) * _1376, (-((_1425 + _1381.z) / (_1429 - _1381.y))) * _1379, ((_1398 + _1381.z) / (_1403 - _1381.x)) * _1376, (-((_1425 - _1381.z) / (_1429 + _1381.y))) * _1379) + vec4(0.5)) * _675, vec4(0.0), _675 - vec4(1.0));
    uint mip = uint(max(0.0, ceil(log2(max(9.9999996826552253889678874634872e-21, max(_682.z - _682.x, _682.w - _682.y))))));
    uvec2 _699 = uvec2(mip);
    uvec2 px0 = uvec2(_682.xy) >> _699;
    uvec2 px1 = uvec2(_682.zw) >> _699;
    vec2 _710 = vs_out_uv * vec2(globalParams.hzb_tex_inner_dims);
    uvec2 texel = uvec2(_710) >> _699;
    uint _714 = texel.x;
    bool _1506;
    if (_714 < px0.x)
    {
        _1506 = true;
    }
    else
    {
        _1506 = _714 > px1.x;
    }
    bool _1507;
    if (_1506)
    {
        _1507 = true;
    }
    else
    {
        _1507 = texel.y < px0.y;
    }
    bool _1508;
    if (_1507)
    {
        _1508 = true;
    }
    else
    {
        _1508 = texel.y > px1.y;
    }
    if (_1508)
    {
        demote;
    }
    int _747 = int(mip);
    vec2 _808 = fract(_710 / vec2(float(1u << mip)));
    vec2 _811 = min(_808, vec2(1.0) - _808);
    entryPointParam_ps_main = vec4((mix(vec3(0.20000000298023223876953125, 1.0, 0.300000011920928955078125), vec3(1.0, 0.20000000298023223876953125, 0.100000001490116119384765625), bvec3((_569 + _1314) <= (1.0 / (texelFetch(hzb_tex, ivec3(ivec2(texel), _747).xy, _747).x * (-current_view.clip_to_view[3].z))))) * mix(0.3499999940395355224609375, 1.0, smoothstep(0.0, 0.00999999977648258209228515625, min(_811.x, _811.y)))) * 0.449999988079071044921875, 0.449999988079071044921875);
}

