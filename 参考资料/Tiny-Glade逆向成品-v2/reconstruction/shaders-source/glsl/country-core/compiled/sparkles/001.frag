#version 460

layout(location = 0) in vec3 vs_out_color;
layout(location = 1) in vec3 vs_out_velocity;
layout(location = 0) out vec4 entryPointParam_ps_main_color;
layout(location = 1) out vec3 entryPointParam_ps_main_velocity;

void main()
{
    entryPointParam_ps_main_color = vec4(vs_out_color, 1.0);
    entryPointParam_ps_main_velocity = vs_out_velocity;
}

