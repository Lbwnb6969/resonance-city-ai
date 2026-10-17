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

void main()
{
}

