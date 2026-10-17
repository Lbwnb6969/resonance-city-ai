#version 460

layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 0) in vec3 vs_out_color;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec3 _320 = (normalize(vs_out_frag_normal_ws) * 0.5) + vec3(0.5);
    vec3 _428 = sqrt(clamp(vs_out_color, vec3(0.0), vec3(1.0)));
    uint _443 = (uint((clamp(_428.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_428.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_428.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _621 = uvec2(((uint((clamp(_320.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_320.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_320.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3003121664u, _443);
    _621.y = _443 | 117440512u;
    entryPointParam_ps_main_gbuffer = _621;
}

