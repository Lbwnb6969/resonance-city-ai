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
layout(location = 1) in vec2 Vertex_UV;
layout(location = 0) out vec2 entryPointParam_vs_main_frag_uv;

void main()
{
    vec2 _28 = Vertex_UV * vec2(0.71428573131561279296875);
    vec3 _158;
    if (Vertex_Position.x > 0.0)
    {
        vec2 _71 = Vertex_Position.xz * 1.5;
        _158 = vec3(_71.x, (Vertex_Position.y * 0.6749999523162841796875) - 74.0, _71.y);
    }
    else
    {
        vec2 _87 = Vertex_Position.xz * 1.4500000476837158203125;
        _158 = vec3(_87.x, (Vertex_Position.y * 0.6749999523162841796875) - 80.0, _87.y);
    }
    vec3 _157 = _158;
    _157.y = _158.y + 12.0;
    gl_Position = vec4(_157, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_frag_uv = vec2(fract((_28.x * 19.0) + 0.699999988079071044921875), 1.0 - _28.y);
}

