#version 460

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct VelocityOnlyInstanceData_natural
{
    Affine3Packed_natural xform;
    Affine3Packed_natural prev_xform;
};

layout(set = 5, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 0, std430) readonly buffer material_data_nani_instance_data
{
    VelocityOnlyInstanceData_natural _member0[];
} material_data_nani_instance_data_1;

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

layout(location = 0) in vec3 Vertex_Position;
layout(location = 0) out vec3 entryPointParam_vs_main_velocity_ws;

void main()
{
    uint _16 = uint(gl_InstanceIndex);
    vec4 _183 = vec4(Vertex_Position, 1.0);
    vec3 _184 = _183 * transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[11])));
    gl_Position = vec4(_184, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_velocity_ws = _184 - (_183 * transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].prev_xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].prev_xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].prev_xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].prev_xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].prev_xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].prev_xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].prev_xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].prev_xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].prev_xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].prev_xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].prev_xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].prev_xform.data.data[11]))));
}

