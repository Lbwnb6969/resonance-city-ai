#version 460

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct InstanceData_natural
{
    Affine3Packed_natural xform;
    Affine3Packed_natural prev_xform;
    float flap_t;
    float wing_fold_t;
    int id;
    uint pad0;
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
layout(location = 7) in float wing_t;
layout(location = 4) in vec3 rest_pos;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 5) in vec3 rest_n;
layout(location = 3) in vec2 Vertex_UV;
layout(location = 1) in vec3 Vertex_Color;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 3) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 4) out vec3 entryPointParam_vs_main_prev_pos_ws;

void main()
{
    uint _27 = uint(gl_InstanceIndex);
    vec3 _61 = Vertex_Position * 0.4000000059604644775390625;
    _61.y = _61.y + ((wing_t * 0.4000000059604644775390625) * sin((material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].flap_t * 6.283185482025146484375) - (wing_t * 0.31415927410125732421875)));
    vec3 _89 = vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].wing_fold_t);
    mat3x4 _339 = transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].xform.data.data[11])));
    vec4 _301 = vec4(mix(_61, rest_pos * 0.4000000059604644775390625, _89), 1.0);
    vec3 _302 = _301 * _339;
    vec2 _162 = Vertex_UV * 0.5;
    float _166 = _162.y;
    vec2 _440 = _162;
    _440.y = _166 + 0.5;
    int _169 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].id - 8 * (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].id / 8);
    vec2 _447;
    if (_169 == 3)
    {
        vec2 _443 = _440;
        _443.y = _166;
        _447 = _443;
    }
    else
    {
        _447 = _440;
    }
    vec2 _448;
    if (_169 == 4)
    {
        vec2 _446 = _447;
        _446.x = _447.x - 0.5;
        _448 = _446;
    }
    else
    {
        _448 = _447;
    }
    vec2 _449;
    if (_169 == 5)
    {
        _449 = _448 - vec2(0.5);
    }
    else
    {
        _449 = _448;
    }
    gl_Position = vec4(_302, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = Vertex_Color;
    entryPointParam_vs_main_frag_normal_ws = vec4(mix(Vertex_Normal, rest_n, _89), 0.0) * _339;
    entryPointParam_vs_main_frag_position_ws = _302.xyz;
    entryPointParam_vs_main_frag_uv = _449;
    entryPointParam_vs_main_prev_pos_ws = _301 * transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].prev_xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].prev_xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].prev_xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].prev_xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].prev_xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].prev_xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].prev_xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].prev_xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].prev_xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].prev_xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].prev_xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].prev_xform.data.data[11])));
}

