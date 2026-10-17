#version 460

layout(location = 0) in vec3 vs_out_color;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 2) in vec3 vs_out_frag_position_ws;
layout(location = 3) in vec3 vs_out_prev_pos_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;
layout(location = 1) out vec3 entryPointParam_ps_main_velocity;

void main()
{
    vec3 _342 = (normalize(vs_out_frag_normal_ws) * 0.5) + vec3(0.5);
    vec3 _450 = sqrt(clamp(vs_out_color, vec3(0.0), vec3(1.0)));
    uint _465 = (uint((clamp(_450.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_450.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_450.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _650 = uvec2(((uint((clamp(_342.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_342.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_342.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3422552064u, _465);
    _650.y = _465 | 117440512u;
    entryPointParam_ps_main_gbuffer = _650;
    entryPointParam_ps_main_velocity = vs_out_frag_position_ws - vs_out_prev_pos_ws;
}

