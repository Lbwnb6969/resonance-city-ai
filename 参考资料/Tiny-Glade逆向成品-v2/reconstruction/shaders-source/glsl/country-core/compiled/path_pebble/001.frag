#version 460

layout(set = 0, binding = 1) uniform texture2D material_data_dirtpath_1;
layout(set = 2, binding = 1) uniform sampler samplers_llr;

layout(location = 1) in vec3 vs_out_frag_position_ws;
layout(location = 0) in vec3 vs_out_frag_normal_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec4 sampled = texture(sampler2D(material_data_dirtpath_1, samplers_llr), vs_out_frag_position_ws.xz * 0.1500000059604644775390625);
    vec3 _55 = sampled.xyz;
    _55.x = sampled.x * 0.699999988079071044921875;
    _55.y = sampled.y * 0.89999997615814208984375;
    vec3 _350 = (normalize(vs_out_frag_normal_ws) * 0.5) + vec3(0.5);
    vec3 _458 = sqrt(clamp(_55, vec3(0.0), vec3(1.0)));
    uint _473 = (uint((clamp(_458.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_458.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_458.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _656 = uvec2(((uint((clamp(_350.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_350.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_350.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 4278190080u, _473);
    _656.y = _473 | 117440512u;
    entryPointParam_ps_main_gbuffer = _656;
}

