#version 460

layout(location = 0) in vec3 vs_out_velocity_ws;
layout(location = 0) out vec3 entryPointParam_ps_main_velocity;

void main()
{
    entryPointParam_ps_main_velocity = vs_out_velocity_ws;
}

