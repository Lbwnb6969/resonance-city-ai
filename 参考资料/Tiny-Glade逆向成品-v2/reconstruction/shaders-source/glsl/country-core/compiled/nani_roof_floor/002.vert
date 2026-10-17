#version 460

struct InstanceData_natural
{
    vec3 position;
    uint wall_slot_id;
    vec2 basis0_xz;
    vec2 scale;
    float roof_animation;
    uint shape;
    uint double_sided;
    uint is_roof_bottom;
    uint material_id;
    uint override_color_id;
    uint pattern_id;
    uint pad_1;
};

struct _MatrixStorage_float3x3_ColMajornatural
{
    vec3 data[3];
};

layout(set = 7, binding = 0, std430) readonly buffer StructuredBuffer
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

layout(set = 12, binding = 0, std430) readonly buffer wall_identity_data_slot_wall_ids
{
    uint _member0[];
} wall_identity_data_slot_wall_ids_1;

layout(location = 0) in vec3 Vertex_Position;
layout(location = 0) out vec3 entryPointParam_vs_main_normal_ws;
layout(location = 1) out vec3 entryPointParam_vs_main_pos_ws;
layout(location = 2) out vec2 entryPointParam_vs_main_uv;
layout(location = 3) flat out uint entryPointParam_vs_main_instance_index;
layout(location = 4) flat out uint entryPointParam_vs_main_is_roof_bottom;
layout(location = 5) flat out uint entryPointParam_vs_main_material_id;
layout(location = 6) flat out uint entryPointParam_vs_main_override_color_id;
layout(location = 7) flat out uint entryPointParam_vs_main_pattern_id;
layout(location = 8) out _MatrixStorage_float3x3_ColMajornatural entryPointParam_vs_main_tangent_to_world;

void main()
{
    uint _36 = uint(gl_InstanceIndex);
    vec3 basis0 = vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].basis0_xz, 0.0).xzy;
    vec3 basis1 = vec3(-material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].basis0_xz.y, 0.0, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].basis0_xz.x);
    vec4 _311 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    bool _373 = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].is_roof_bottom != 0u) ? true : ((material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].position - (_311.xyz / vec3(_311.w))).y > 0.0);
    vec3 _367;
    if (_373)
    {
        _367 = basis0 * (-1.0);
    }
    else
    {
        _367 = basis0;
    }
    vec3 _376 = mix(vec3(0.0, 1.0, 0.0), vec3(-0.0, -1.0, -0.0), bvec3(_373));
    vec2 _171 = Vertex_Position.xz * material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].scale;
    vec3 _176 = (mat2x3(_367, basis1) * _171) + material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].position;
    _176.y = 0.001953125 * (floor(_176.y * 512.0) + fract(float(wall_identity_data_slot_wall_ids_1._member0[material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].wall_slot_id]) * 1.61803400516510009765625));
    mat3 _231 = transpose(mat3(_367, basis1, _376));
    gl_Position = vec4(_176, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_normal_ws = _376;
    entryPointParam_vs_main_pos_ws = _176.xyz;
    entryPointParam_vs_main_uv = _171;
    entryPointParam_vs_main_instance_index = nani_instance_indirection_buffer._member0[_36];
    entryPointParam_vs_main_is_roof_bottom = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].is_roof_bottom;
    entryPointParam_vs_main_material_id = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].material_id;
    entryPointParam_vs_main_override_color_id = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].override_color_id;
    entryPointParam_vs_main_pattern_id = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].pattern_id;
    vec3 _284 = _231[0];
    vec3 _288 = _231[1];
    vec3 _292 = _231[2];
    entryPointParam_vs_main_tangent_to_world = _MatrixStorage_float3x3_ColMajornatural(vec3[](vec3(_284.x, _288.x, _292.x), vec3(_284.y, _288.y, _292.y), vec3(_284.z, _288.z, _292.z)));
}

