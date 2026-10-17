#version 460

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct InstanceParams_natural
{
    Affine3Packed_natural transform;
};

layout(set = 0, binding = 0, std430) readonly buffer StructuredBuffer
{
    InstanceParams_natural _member0[];
} instance_buffer;

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

layout(location = 0) in vec3 Vertex_Position;
layout(location = 1) in vec3 Vertex_Color;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;

void main()
{
    uint _16 = uint(gl_InstanceIndex);
    mat3x4 _190 = transpose(mat4x3(vec3(instance_buffer._member0[_16].transform.data.data[0], instance_buffer._member0[_16].transform.data.data[1], instance_buffer._member0[_16].transform.data.data[2]), vec3(instance_buffer._member0[_16].transform.data.data[3], instance_buffer._member0[_16].transform.data.data[4], instance_buffer._member0[_16].transform.data.data[5]), vec3(instance_buffer._member0[_16].transform.data.data[6], instance_buffer._member0[_16].transform.data.data[7], instance_buffer._member0[_16].transform.data.data[8]), vec3(instance_buffer._member0[_16].transform.data.data[9], instance_buffer._member0[_16].transform.data.data[10], instance_buffer._member0[_16].transform.data.data[11])));
    vec3 _153 = vec4(Vertex_Position, 1.0) * _190;
    gl_Position = vec4(_153, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = Vertex_Color;
    entryPointParam_vs_main_frag_normal_ws = vec4(Vertex_Normal, 0.0) * _190;
    entryPointParam_vs_main_frag_position_ws = _153.xyz;
}

