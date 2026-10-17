#version 460

layout(set = 5, binding = 0, std140) uniform ViewConstants_natural
{
    layout(row_major) mat4 view_to_clip;
    layout(row_major) mat4 clip_to_view;
    layout(row_major) mat4 view_to_sample;
    layout(row_major) mat4 sample_to_view;
    layout(row_major) mat4 world_to_view;
    layout(row_major) mat4 view_to_world;
    layout(row_major) mat4 world_to_sample;
    layout(row_major) mat4 clip_to_prev_clip;
    layout(row_major) mat4 prev_clip_to_clip;
    layout(row_major) mat4 prev_view_to_prev_clip;
    layout(row_major) mat4 prev_clip_to_prev_view;
    layout(row_major) mat4 prev_world_to_prev_view;
    layout(row_major) mat4 prev_view_to_prev_world;
    vec2 sample_offset_pixels;
    vec2 sample_offset_clip;
    vec2 prev_sample_offset_pixels;
    vec2 prev_sample_offset_clip;
    layout(row_major) mat4 pad0;
    layout(row_major) mat4 pad1;
    vec4 pad2;
    float pad3;
    float pad4;
    float pad5;
    float mip_bias;
} current_view;

layout(set = 0, binding = 0) uniform texture2D material_data_albedo_map;
layout(set = 2, binding = 1) uniform sampler samplers_llr;

layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 2) in vec2 vs_out_frag_uv;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec3 _203 = (vs_out_frag_normal_ws * 0.5) + vec3(0.5);
    vec3 _271 = sqrt(clamp(texture(sampler2D(material_data_albedo_map, samplers_llr), vs_out_frag_uv, current_view.mip_bias).xyz, vec3(0.0), vec3(1.0)));
    entryPointParam_ps_main_gbuffer = uvec2(((uint((clamp(_203.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_203.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_203.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 2147483648u, ((uint((clamp(_271.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_271.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_271.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 1291845632u);
}

