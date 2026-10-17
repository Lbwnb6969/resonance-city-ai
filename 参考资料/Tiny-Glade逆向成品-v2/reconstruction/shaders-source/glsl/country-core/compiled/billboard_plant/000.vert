#version 460

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

layout(location = 0) in vec3 Vertex_Position;
layout(location = 2) in vec2 Vertex_UV;
layout(location = 1) in vec3 Vertex_Normal;
layout(location = 3) in vec3 uv2;
layout(location = 4) in float bby;
layout(location = 5) in int plant_id;
layout(location = 6) in int prim_id;
layout(location = 0) out vec2 entryPointParam_vs_main_uv;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 3) out vec2 entryPointParam_vs_main_terrain_uv;
layout(location = 4) out float entryPointParam_vs_main_bby;
layout(location = 5) out int entryPointParam_vs_main_plant_id;
layout(location = 6) out int entryPointParam_vs_main_billboard_id;

void main()
{
    vec4 pos_ws = vec4(Vertex_Position, 1.0);
    gl_Position = pos_ws * current_view.world_to_sample;
    entryPointParam_vs_main_uv = Vertex_UV;
    entryPointParam_vs_main_frag_normal_ws = Vertex_Normal;
    entryPointParam_vs_main_frag_position_ws = pos_ws.xyz;
    entryPointParam_vs_main_terrain_uv = vec2(uv2.x, 1.0 - uv2.y);
    entryPointParam_vs_main_bby = bby;
    entryPointParam_vs_main_plant_id = plant_id;
    entryPointParam_vs_main_billboard_id = prim_id;
}

