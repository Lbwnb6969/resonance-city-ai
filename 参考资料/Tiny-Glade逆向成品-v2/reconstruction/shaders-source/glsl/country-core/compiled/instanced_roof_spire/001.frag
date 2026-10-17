#version 460

layout(location = 2) in vec3 vs_out_frag_pos_ws;
layout(location = 1) in vec3 vs_out_normal;
layout(location = 3) in float vs_out_vertex_morphed;
layout(location = 0) in vec3 vs_out_color;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec3 _366 = (normalize(mix(vs_out_normal, vec3(vs_out_normal.x, normalize(cross(dFdx(vs_out_frag_pos_ws), dFdy(vs_out_frag_pos_ws) * (-1.0))).y, vs_out_normal.z), vec3(vs_out_vertex_morphed))) * 0.5) + vec3(0.5);
    vec3 _474 = sqrt(clamp(vs_out_color * 0.5, vec3(0.0), vec3(1.0)));
    uint _489 = (uint((clamp(_474.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_474.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_474.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _667 = uvec2(((uint((clamp(_366.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_366.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_366.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3003121664u, _489);
    _667.y = _489 | 117440512u;
    entryPointParam_ps_main_gbuffer = _667;
}

