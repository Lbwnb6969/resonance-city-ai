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
layout(location = 2) in float bbx_y;
layout(location = 1) in vec3 Vertex_Normal;
layout(location = 0) out float entryPointParam_vs_main_frag_bbx_y;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_ws_normal;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_ws_position;

void main()
{
    vec3 _16 = Vertex_Position * 5000.0;
    _16.y = (_16.y * 0.5) - 2.0;
    gl_Position = vec4(_16, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_frag_bbx_y = bbx_y;
    entryPointParam_vs_main_frag_ws_normal = Vertex_Normal;
    entryPointParam_vs_main_frag_ws_position = _16.xyz;
}

