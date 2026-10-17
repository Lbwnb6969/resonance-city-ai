#version 460

vec4 _698;

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

layout(set = 0, binding = 1) uniform texture2D material_data_rope_albedo;
layout(set = 2, binding = 1) uniform sampler samplers_llr;

layout(location = 2) in vec2 vs_out_tex_uv;
layout(location = 4) in float vs_out_use_hard_normal;
layout(location = 1) in vec3 vs_out_frag_position_ws;
layout(location = 0) in vec3 vs_out_frag_normal_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec4 sampled = texture(sampler2D(material_data_rope_albedo, samplers_llr), vs_out_tex_uv, current_view.mip_bias);
    vec3 _683;
    if (vs_out_use_hard_normal > 0.00999999977648258209228515625)
    {
        _683 = normalize(cross(dFdx(vs_out_frag_position_ws), dFdy(vs_out_frag_position_ws) * (-1.0)));
    }
    else
    {
        _683 = normalize(vs_out_frag_normal_ws);
    }
    vec3 _393 = (_683 * 0.5) + vec3(0.5);
    vec3 _501 = sqrt(clamp(sampled.xyz, vec3(0.0), vec3(1.0)));
    uint _516 = (uint((clamp(_501.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_501.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_501.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _696 = uvec2(((uint((clamp(_393.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_393.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_393.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3858759680u, _516);
    _696.y = _516 | 117440512u;
    entryPointParam_ps_main_gbuffer = _696;
}

