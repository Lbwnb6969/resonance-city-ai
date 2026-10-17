#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require

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

const uvec2 _555[6] = uvec2[](uvec2(0u), uvec2(1u, 0u), uvec2(0u, 1u), uvec2(0u, 1u), uvec2(1u, 0u), uvec2(1u));

layout(set = 0, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} clump_attribs;

layout(set = 18, binding = 0, std430) readonly buffer grass2_exemplar_params_params
{
    Grass2ExemplarParams_natural _member0[];
} grass2_exemplar_params_params_1;

layout(set = 19, binding = 0, scalar) uniform TerrainHeightmap_natural
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

layout(push_constant, std430) uniform EntryPointParams_natural
{
    uint instance_index;
} entryPointParams;

layout(set = 19, binding = 1) uniform texture2D terrain_heightmap_terrain_heightmap;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 1, binding = 0) uniform texture2D resource_handles[];

layout(location = 0) out vec3 entryPointParam_vs_main_normal_ws;

void main()
{
    uint _710 = min((clump_attribs._member0[entryPointParams.instance_index] & 255u), 55u);
    uint _769 = entryPointParams.instance_index + (entryPointParams.instance_index << 10u);
    uint _771 = _769 ^ (_769 >> 6u);
    uint _773 = _771 + (_771 << 3u);
    uint _775 = _773 ^ (_773 >> 11u);
    uint _777 = _775 + (_775 << 15u);
    uint _849 = _777 * 13u;
    uint _860 = _849 + (_849 << 10u);
    uint _862 = _860 ^ (_860 >> 6u);
    uint _864 = _862 + (_862 << 3u);
    uint _866 = _864 ^ (_864 >> 11u);
    float _874 = uintBitsToFloat(((_866 + (_866 << 15u)) & 8388607u) | 1065353216u) - 1.0;
    float _650 = mix(grass2_exemplar_params_params_1._member0[_710].height_scale_min, grass2_exemplar_params_params_1._member0[_710].height_scale_max, _874 * _874) * (float(clump_attribs._member0[entryPointParams.instance_index] >> 16u) * 1.525902189314365386962890625e-05);
    vec2 _1206;
    do
    {
        if (entryPointParams.instance_index < 57344u)
        {
            uint _955 = (entryPointParams.instance_index % 14336u) + 1u;
            uint _965 = (_955 << 16u) | (_955 >> 16u);
            uint _970 = ((_965 & 1431655765u) << 1u) | ((_965 & 2863311530u) >> 1u);
            uint _975 = ((_970 & 858993459u) << 2u) | ((_970 & 3435973836u) >> 2u);
            uint _980 = ((_975 & 252645135u) << 4u) | ((_975 & 4042322160u) >> 4u);
            _1206 = (vec2(float(_955) * 6.9754467403981834650039672851562e-05, float(((_980 & 16711935u) << 8u) | ((_980 & 4278255360u) >> 8u)) * 2.3283064365386962890625e-10) - vec2(0.5)) * 130.0;
            break;
        }
        uint _990 = ((entryPointParams.instance_index - 57344u) % 30720u) + 1u;
        uint _1000 = (_990 << 16u) | (_990 >> 16u);
        uint _1005 = ((_1000 & 1431655765u) << 1u) | ((_1000 & 2863311530u) >> 1u);
        uint _1010 = ((_1005 & 858993459u) << 2u) | ((_1005 & 3435973836u) >> 2u);
        uint _1015 = ((_1010 & 252645135u) << 4u) | ((_1010 & 4042322160u) >> 4u);
        _1206 = (vec2(float(_990) * 3.2552085031056776642799377441406e-05, float(((_1015 & 16711935u) << 8u) | ((_1015 & 4278255360u) >> 8u)) * 2.3283064365386962890625e-10) - vec2(0.5)) * 190.0;
        break;
    } while(false);
    vec3 _1027 = vec3(_1206.x, 0.0, _1206.y);
    vec2 _676 = _1027.xz;
    float _1207;
    do
    {
        if ((abs(_1206.x) < 65.0) && (abs(_1206.y) < 65.0))
        {
            _1207 = mix(-2.5, 24.0, textureLod(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), (_676 * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0).x);
            break;
        }
        else
        {
            vec2 _1075 = (_676 * vec2(0.001000000047497451305389404296875)) + vec2(0.5);
            _1207 = textureLod(nonuniformEXT(sampler2D(resource_handles[terrain_heightmap.bg_terrain_heightmap.bindless_handle], samplers_lnc_iso)), vec2(_1075.y, 1.0 - _1075.x), 0.0).x;
            break;
        }
        break; // unreachable workaround
    } while(false);
    _1027.y = _1207;
    float _1091 = grass2_exemplar_params_params_1._member0[_710].radius_xz * (exp2(mix(log2(grass2_exemplar_params_params_1._member0[_710].xz_scale_min), log2(grass2_exemplar_params_params_1._member0[_710].xz_scale_max), uintBitsToFloat((_777 & 8388607u) | 1065353216u) - 1.0)) * 2.378414154052734375);
    float _1094 = grass2_exemplar_params_params_1._member0[_710].half_y * _650;
    uint _541 = uint(gl_VertexIndex - gl_BaseVertex);
    uint _1151 = _541 / 6u;
    uint _1152 = _541 % 6u;
    float _1161 = float((_1151 / 18u) + _555[_1152].x) * 0.261799395084381103515625;
    float _1166 = float((_1151 % 18u) + _555[_1152].y) * 0.3490658700466156005859375;
    float _1167 = sin(_1161);
    vec3 _1173 = vec3(_1167 * cos(_1166), cos(_1161), _1167 * sin(_1166));
    gl_Position = (vec4((_1027 + vec3(0.0, grass2_exemplar_params_params_1._member0[_710].center_y * _650, 0.0)) + (_1173 * sqrt((_1091 * _1091) + (_1094 * _1094))), 1.0) * current_view.world_to_view) * current_view.view_to_clip;
    entryPointParam_vs_main_normal_ws = _1173;
}

