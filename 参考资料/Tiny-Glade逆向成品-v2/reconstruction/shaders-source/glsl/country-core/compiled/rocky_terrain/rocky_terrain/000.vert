#version 460

struct Vertex_natural
{
    vec3 rest_position;
    float cell_bby;
    vec3 position;
    int cell_id;
    vec3 dir_to_centroid;
    int is_corner;
};

layout(set = 7, binding = 0, std430) readonly buffer StructuredBuffer
{
    Vertex_natural _member0[];
} rocky_terrain_mesh_vertices;

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

layout(location = 0) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 1) flat out int entryPointParam_vs_main_frag_triangle_id;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_barycentric;
layout(location = 3) flat out int entryPointParam_vs_main_cell_id;

void main()
{
    uint _25 = uint(gl_VertexIndex - gl_BaseVertex);
    vec3 barycentric = vec3(0.0);
    barycentric[_25 % 3u] = 1.0;
    gl_Position = vec4(rocky_terrain_mesh_vertices._member0[_25].position, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_frag_position_ws = rocky_terrain_mesh_vertices._member0[_25].position;
    entryPointParam_vs_main_frag_triangle_id = int(_25 / 3u);
    entryPointParam_vs_main_frag_barycentric = barycentric;
    entryPointParam_vs_main_cell_id = rocky_terrain_mesh_vertices._member0[_25].cell_id;
}

