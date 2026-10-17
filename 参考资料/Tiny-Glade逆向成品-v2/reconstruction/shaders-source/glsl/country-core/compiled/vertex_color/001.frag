#version 460

layout(location = 0) in vec3 vs_out_color;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    entryPointParam_ps_main_color = vec4(vs_out_color, 1.0);
}

