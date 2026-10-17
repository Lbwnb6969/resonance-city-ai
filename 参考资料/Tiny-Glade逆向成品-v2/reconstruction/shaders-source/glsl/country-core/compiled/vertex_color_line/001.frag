#version 460

layout(push_constant, std430) uniform PushConstants_natural
{
    float opacity;
} push_constants;

layout(location = 0) in vec3 vs_out_color;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    entryPointParam_ps_main_color = vec4(vs_out_color * push_constants.opacity, push_constants.opacity);
}

