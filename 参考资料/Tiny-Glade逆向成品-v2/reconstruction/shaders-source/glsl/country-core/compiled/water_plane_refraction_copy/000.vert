#version 460

layout(set = 4, binding = 0, std140) uniform ViewConstants_natural
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
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_pos_ws;

void main()
{
    vec2 _22 = Vertex_Position.xz * vec2(130.0);
    vec3 _95 = vec3(_22.x, 0.0, _22.y);
    gl_Position = vec4(_95, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = vec3(0.0500000007450580596923828125, 0.0500000007450580596923828125, 0.20000000298023223876953125);
    entryPointParam_vs_main_frag_normal_ws = vec3(0.0, 1.0, 0.0);
    entryPointParam_vs_main_pos_ws = _95.xyz;
}

