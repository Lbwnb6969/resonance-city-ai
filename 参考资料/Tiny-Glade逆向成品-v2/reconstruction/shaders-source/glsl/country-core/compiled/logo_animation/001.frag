#version 460

layout(set = 0, binding = 0, std140) uniform MaterialData_natural
{
    float anim_t;
    float fade_out;
    float swapchain_aspect_ratio;
} material_data;

layout(set = 0, binding = 1) uniform texture2D material_data_logo;
layout(set = 1, binding = 1) uniform sampler samplers_llr;
layout(set = 0, binding = 2) uniform texture2D material_data_animation;

layout(location = 0) in vec2 vs_out_frag_uv;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    float _14 = pow(material_data.anim_t, 0.75);
    vec4 sampled = texture(sampler2D(material_data_logo, samplers_llr), vs_out_frag_uv, -0.5);
    float alpha = (sampled.w * (1.0 - smoothstep(_14, _14 + 0.0500000007450580596923828125, texture(sampler2D(material_data_animation, samplers_llr), vs_out_frag_uv, -0.5).x))) * smoothstep(1.0, 0.0, material_data.fade_out);
    entryPointParam_ps_main_color = vec4(sampled.xyz * alpha, alpha);
}

