#version 460

layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 0, binding = 1) uniform texture2D material_data_ivy_leaf_color;

layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 2) in vec2 vs_out_frag_uv;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec3 _197 = (vs_out_frag_normal_ws * 0.5) + vec3(0.5);
    vec3 _265 = sqrt(clamp(texture(sampler2D(material_data_ivy_leaf_color, samplers_llr), vs_out_frag_uv).xyz * 1.10000002384185791015625, vec3(0.0), vec3(1.0)));
    entryPointParam_ps_main_gbuffer = uvec2(((uint((clamp(_197.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_197.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_197.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 4278190080u, ((uint((clamp(_265.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_265.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_265.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 1291845632u);
}

