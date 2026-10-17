#version 460

layout(location = 0) in vec3 input_normal_ws;
layout(location = 0) out vec4 entryPointParam_ps_main;

void main()
{
    entryPointParam_ps_main = vec4((vec3(0.100000001490116119384765625, 0.89999997615814208984375, 1.0) * (0.550000011920928955078125 + (0.449999988079071044921875 * clamp((input_normal_ws.y * 0.5) + 0.5, 0.0, 1.0)))) * 0.3499999940395355224609375, 0.3499999940395355224609375);
}

