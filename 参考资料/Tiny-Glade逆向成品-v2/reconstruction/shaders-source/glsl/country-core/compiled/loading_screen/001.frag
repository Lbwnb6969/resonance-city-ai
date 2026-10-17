#version 460

layout(set = 0, binding = 0, std140) uniform MaterialData_natural
{
    uvec2 animation_dims;
    float progress_time;
    float fade;
    float swapchain_aspect_ratio;
} material_data;

layout(set = 0, binding = 1) uniform texture2DArray material_data_animation;
layout(set = 1, binding = 0) uniform sampler samplers_lnc;

layout(location = 0) in vec2 vs_out_uv;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    entryPointParam_ps_main_color = (vec4(1.0 - texture(sampler2DArray(material_data_animation, samplers_lnc), vec3(vs_out_uv, float(int(material_data.progress_time * 8.0) - 4 * (int(material_data.progress_time * 8.0) / 4)))).x) * (1.0 - material_data.fade)) * smoothstep(3.0, 3.5, material_data.progress_time);
}

