#version 460

layout(set = 0, binding = 0) uniform texture2D material_data_butterfly_skins;
layout(set = 2, binding = 1) uniform sampler samplers_llr;

layout(location = 0) in vec2 vs_out_frag_uv;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec3 _260 = sqrt(clamp(texture(sampler2D(material_data_butterfly_skins, samplers_llr), vs_out_frag_uv).xyz, vec3(0.0), vec3(1.0)));
    entryPointParam_ps_main_gbuffer = uvec2(8454016u, ((uint((clamp(_260.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_260.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_260.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 2147483648u);
}

