#version 460

layout(set = 0, binding = 0, std140) uniform MaterialData_natural
{
    float anim_t;
    float fade_out;
    float swapchain_aspect_ratio;
} material_data;

layout(location = 0) in vec3 Vertex_Position;
layout(location = 1) in vec2 Vertex_UV;
layout(location = 0) out vec2 entryPointParam_vs_main_frag_uv;

void main()
{
    vec2 _17 = Vertex_Position.xy;
    _17.x = Vertex_Position.x / material_data.swapchain_aspect_ratio;
    gl_Position = vec4(_17 * 0.449999988079071044921875, 1.0, 1.0);
    entryPointParam_vs_main_frag_uv = Vertex_UV;
}

