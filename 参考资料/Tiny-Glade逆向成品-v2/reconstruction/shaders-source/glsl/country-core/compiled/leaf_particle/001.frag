#version 460
#extension GL_EXT_demote_to_helper_invocation : require

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

layout(set = 0, binding = 2) uniform texture2D material_data_leaf_colors;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 0, binding = 1) uniform texture2D material_data_leaf_alpha;
layout(set = 2, binding = 3) uniform sampler samplers_llc;

layout(location = 3) in vec2 vs_out_frag_uv_color;
layout(location = 2) in vec2 vs_out_frag_uv;
layout(location = 1) in vec3 vs_out_frag_position_ws;
layout(location = 0) in vec3 vs_out_frag_normal_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    if (texture(sampler2D(material_data_leaf_alpha, samplers_llc), vs_out_frag_uv, -2.0).x < 1.0)
    {
        demote;
    }
    vec4 _358 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    vec3 _692;
    if (dot(normalize((_358.xyz / vec3(_358.w)) - vs_out_frag_position_ws), vs_out_frag_normal_ws) < 0.0)
    {
        _692 = -vs_out_frag_normal_ws;
    }
    else
    {
        _692 = vs_out_frag_normal_ws;
    }
    vec3 _402 = (normalize(_692) * 0.5) + vec3(0.5);
    vec3 _510 = sqrt(clamp(textureLod(sampler2D(material_data_leaf_colors, samplers_llr), vs_out_frag_uv_color, 0.0).xyz, vec3(0.0), vec3(1.0)));
    uint _525 = (uint((clamp(_510.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_510.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_510.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _707 = uvec2(((uint((clamp(_402.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_402.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_402.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 2566914048u, _525);
    _707.y = _525 | 1174405120u;
    entryPointParam_ps_main_gbuffer = _707;
}

