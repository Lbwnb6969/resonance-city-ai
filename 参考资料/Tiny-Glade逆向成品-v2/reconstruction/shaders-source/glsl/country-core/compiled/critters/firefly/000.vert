#version 460
#extension GL_EXT_scalar_block_layout : require

struct Firefly_natural
{
    vec3 position;
    uint pad;
};

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 1, std430) readonly buffer StructuredBuffer
{
    Firefly_natural _member0[];
} material_data_fireflies;

layout(set = 20, binding = 0, scalar) uniform TerrainHeightmap_natural
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

layout(set = 20, binding = 1) uniform texture2D terrain_heightmap_terrain_heightmap;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;

layout(location = 0) in vec3 Vertex_Position;

void main()
{
    uint _25 = uint(gl_InstanceIndex);
    gl_Position = vec4(((Vertex_Position * 0.039999999105930328369140625) + material_data_fireflies._member0[_25].position) + vec3(0.0, mix(-2.5, 24.0, textureLod(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), (material_data_fireflies._member0[_25].position.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0).x), 0.0), 1.0) * current_view.world_to_sample;
}

