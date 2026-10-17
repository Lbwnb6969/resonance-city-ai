#version 460
#extension GL_EXT_scalar_block_layout : require

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    layout(row_major) mat4 world_to_clip;
    layout(row_major) mat4 world_to_view;
    uint has_albedo_map;
    uint has_emissive_map;
    uint albedo_gated_by_vertex_flag;
    vec3 emissive_factor;
} globalParams;

layout(location = 0) in vec3 Vertex_Position;
layout(location = 1) in vec3 Vertex_Color;
layout(location = 3) in vec2 Vertex_UV;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 4) in int flags;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec2 entryPointParam_vs_main_uv;
layout(location = 2) out vec3 entryPointParam_vs_main_normal_view;
layout(location = 3) out float entryPointParam_vs_main_view_z;
layout(location = 4) flat out int entryPointParam_vs_main_flags;

void main()
{
    vec4 _19 = vec4(Vertex_Position, 1.0);
    gl_Position = _19 * globalParams.world_to_clip;
    entryPointParam_vs_main_color = Vertex_Color;
    entryPointParam_vs_main_uv = Vertex_UV;
    entryPointParam_vs_main_normal_view = Vertex_Normal * mat3(globalParams.world_to_view[0].xyz, globalParams.world_to_view[1].xyz, globalParams.world_to_view[2].xyz);
    entryPointParam_vs_main_view_z = (_19 * globalParams.world_to_view).z;
    entryPointParam_vs_main_flags = flags;
}

