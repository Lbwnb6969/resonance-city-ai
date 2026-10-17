#version 460

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct InstanceFlags_natural
{
    uint _bit_field_backing_0;
};

struct Tex2D_natural
{
    uint bindless_handle;
};

struct InstanceData_natural
{
    Affine3Packed_natural xform;
    InstanceFlags_natural flags;
    Tex2D_natural albedo_texture;
    uint material_base;
    uint pad1;
};

layout(set = 6, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 0, std430) readonly buffer material_data_nani_instance_data
{
    InstanceData_natural _member0[];
} material_data_nani_instance_data_1;

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
layout(location = 3) in vec2 Vertex_UV;
layout(location = 4) in int flags;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 3) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 4) flat out uint entryPointParam_vs_main_flags;
layout(location = 5) flat out uint entryPointParam_vs_main_albedo_texture_bindless_handle;
layout(location = 6) flat out int entryPointParam_vs_main_vertex_flags;
layout(location = 7) flat out uint entryPointParam_vs_main_material_idx;

void main()
{
    uint _24 = uint(gl_InstanceIndex);
    mat3x4 _285 = transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_24]].xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_24]].xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_24]].xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_24]].xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_24]].xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_24]].xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_24]].xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_24]].xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_24]].xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_24]].xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_24]].xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_24]].xform.data.data[11])));
    vec3 _248 = vec4(Vertex_Position, 1.0) * _285;
    gl_Position = vec4(_248, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = Vertex_Color;
    entryPointParam_vs_main_frag_normal_ws = vec4(Vertex_Normal, 0.0) * _285;
    entryPointParam_vs_main_frag_position_ws = _248.xyz;
    entryPointParam_vs_main_frag_uv = Vertex_UV;
    entryPointParam_vs_main_flags = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_24]].flags._bit_field_backing_0;
    entryPointParam_vs_main_albedo_texture_bindless_handle = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_24]].albedo_texture.bindless_handle;
    entryPointParam_vs_main_vertex_flags = flags;
    entryPointParam_vs_main_material_idx = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_24]].material_base + uint((flags >> 8) & 255);
}

