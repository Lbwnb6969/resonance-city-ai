#version 460
#extension GL_EXT_scalar_block_layout : require

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

layout(set = 0, binding = 0, scalar) uniform MaterialData_natural
{
    Affine3Packed_natural model_to_world;
    int seed;
    float local_start_y;
    float body_end_y;
    float tip_end_y;
    int is_corner;
    int color_id;
    int follows_stairs;
    float attachment_left_y;
    float attachment_right_y;
} material_data;

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

layout(set = 6, binding = 1) uniform texture2DArray flag_textures_patterns;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 2, binding = 3) uniform sampler samplers_llc;
layout(set = 0, binding = 1) uniform texture2D material_data_border_mask;
layout(set = 6, binding = 0) uniform texture2D flag_textures_palettes;

void main()
{
}

