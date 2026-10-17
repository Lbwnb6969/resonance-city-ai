#version 460
#extension GL_EXT_scalar_block_layout : require

struct Butterfly_natural
{
    vec3 position;
    float anim_t;
    vec3 forward;
    uint pad;
};

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 1, std430) readonly buffer StructuredBuffer
{
    Butterfly_natural _member0[];
} material_data_butterflies;

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

layout(set = 19, binding = 1) uniform texture2D terrain_heightmap_terrain_heightmap;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;

layout(location = 0) in vec3 Vertex_Position;
layout(location = 2) in float is_wing;
layout(location = 1) in vec2 Vertex_UV;
layout(location = 0) out vec2 entryPointParam_vs_main_frag_uv;

void main()
{
    uint _37 = uint(gl_InstanceIndex);
    vec3 _81 = Vertex_Position * 0.4000000059604644775390625;
    vec3 _312;
    if (is_wing > 0.0)
    {
        float _99 = abs(0.5 - material_data_butterflies._member0[_37].anim_t);
        float flap_angle = mix(-0.60000002384185791015625, 1.39999997615814208984375, (cos(((material_data_butterflies._member0[_37].anim_t + (((_81.z + 0.300000011920928955078125) * (-0.25)) * smoothstep(0.0, 0.5, _99))) + 0.5) * 6.283185482025146484375) * 0.5) + 0.5) * float(int(sign(_81.x)));
        float _118 = cos(flap_angle);
        float _119 = sin(flap_angle);
        vec2 _132 = _81.xy;
        vec2 _137 = mix(_132, _132 * transpose(mat2(vec2(_118, _119), vec2(-_119, _118))), vec2(mix(is_wing, 1.0, 1.0 - (_99 * 2.0))));
        vec3 _298 = _81;
        _298.x = _137.x;
        _298.y = _137.y;
        _312 = _298;
    }
    else
    {
        _312 = _81;
    }
    vec2 _203 = Vertex_UV;
    _203.y = 1.0 - _203.y;
    vec2 _212 = _203 * 0.5;
    float _214 = _212.y;
    vec2 _305 = _212;
    _305.y = _214 + 0.5;
    uint _219 = _37 % 8u;
    vec2 _313;
    if (_219 == 3u)
    {
        vec2 _308 = _305;
        _308.y = _214;
        _313 = _308;
    }
    else
    {
        _313 = _305;
    }
    vec2 _314;
    if (_219 == 4u)
    {
        vec2 _311 = _313;
        _311.x = _313.x - 0.5;
        _314 = _311;
    }
    else
    {
        _314 = _313;
    }
    vec2 _315;
    if (_219 == 5u)
    {
        _315 = _314 - vec2(0.5);
    }
    else
    {
        _315 = _314;
    }
    gl_Position = vec4(((_312 * mat3(cross(material_data_butterflies._member0[_37].forward, vec3(0.0, 1.0, 0.0)), vec3(0.0, 1.0, 0.0), material_data_butterflies._member0[_37].forward)) + material_data_butterflies._member0[_37].position) + vec3(0.0, mix(-2.5, 24.0, textureLod(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), (material_data_butterflies._member0[_37].position.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0).x), 0.0), 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_frag_uv = _315;
}

