#version 460
#extension GL_EXT_demote_to_helper_invocation : require

layout(set = 4, binding = 0, std140) uniform ViewConstants_natural
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

layout(set = 0, binding = 0) uniform texture2D material_data_distant_hills_texture;
layout(set = 1, binding = 5) uniform sampler samplers_lnc_iso;

layout(location = 0) in vec2 vs_out_frag_uv;

void main()
{
    if (texture(sampler2D(material_data_distant_hills_texture, samplers_lnc_iso), vs_out_frag_uv, current_view.mip_bias).x > 0.9900000095367431640625)
    {
        demote;
    }
}

