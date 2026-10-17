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

layout(set = 0, binding = 1) uniform texture2D material_data_bird_texture;
layout(set = 2, binding = 6) uniform sampler samplers_llr_iso;

layout(location = 3) in vec2 vs_out_frag_uv;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 2) in vec3 vs_out_frag_position_ws;
layout(location = 4) in vec3 vs_out_prev_pos_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;
layout(location = 1) out vec3 entryPointParam_ps_main_velocity;

void main()
{
    vec3 _366 = (normalize(vs_out_frag_normal_ws) * 0.5) + vec3(0.5);
    vec3 _474 = sqrt(clamp(texture(sampler2D(material_data_bird_texture, samplers_llr_iso), vs_out_frag_uv, current_view.mip_bias).xyz, vec3(0.0), vec3(1.0)));
    uint _489 = (uint((clamp(_474.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_474.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_474.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _674 = uvec2(((uint((clamp(_366.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_366.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_366.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3422552064u, _489);
    _674.y = _489 | 117440512u;
    entryPointParam_ps_main_gbuffer = _674;
    entryPointParam_ps_main_velocity = vs_out_frag_position_ws - vs_out_prev_pos_ws;
}

