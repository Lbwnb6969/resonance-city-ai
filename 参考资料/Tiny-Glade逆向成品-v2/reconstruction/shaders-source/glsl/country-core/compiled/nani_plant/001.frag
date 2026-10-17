#version 460

layout(location = 2) in vec3 vs_out_color;
layout(location = 0) in vec3 vs_out_frag_normal_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec3 _178 = (vs_out_frag_normal_ws * 0.5) + vec3(0.5);
    vec3 _246 = sqrt(clamp(vs_out_color, vec3(0.0), vec3(1.0)));
    entryPointParam_ps_main_gbuffer = uvec2(((uint((clamp(_178.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_178.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_178.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 4278190080u, ((uint((clamp(_246.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_246.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_246.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 4278190080u);
}

