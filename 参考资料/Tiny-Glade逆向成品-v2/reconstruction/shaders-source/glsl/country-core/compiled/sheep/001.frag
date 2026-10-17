#version 460

layout(location = 0) in vec3 vs_out_color;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 2) in vec3 vs_out_frag_pos_ws;
layout(location = 3) in vec3 vs_out_prev_pos_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;
layout(location = 1) out vec3 entryPointParam_ps_main_velocity;

void main()
{
    vec3 _347 = (normalize(vs_out_frag_normal_ws) * 0.5) + vec3(0.5);
    vec3 _455 = sqrt(clamp(vs_out_color * 0.800000011920928955078125, vec3(0.0), vec3(1.0)));
    uint _470 = (uint((clamp(_455.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_455.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_455.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _655 = uvec2(((uint((clamp(_347.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_347.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_347.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3422552064u, _470);
    _655.y = _470 | 67108864u;
    entryPointParam_ps_main_gbuffer = _655;
    entryPointParam_ps_main_velocity = vs_out_frag_pos_ws - vs_out_prev_pos_ws;
}

