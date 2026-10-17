#version 460
#extension GL_EXT_scalar_block_layout : require

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

layout(set = 0, binding = 0, scalar) uniform MaterialData_natural
{
    int seed;
    int wall_slot_id;
    layout(row_major) mat4 model_to_world;
} material_data;

layout(set = 0, binding = 3, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} material_data_gate_color_ids;

layout(set = 0, binding = 1) uniform texture2D material_data_normal_map;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 0, binding = 2) uniform texture2D material_data_seed_map;
layout(set = 18, binding = 0) uniform texture2DArray window_colors_window_colors;

void main()
{
}

