#version 460
#extension GL_EXT_buffer_reference2 : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_buffer_reference_uvec2 : require

layout(buffer_reference) buffer uvec4Pointer;

struct StairRopeInstanceData_natural
{
    vec4 bounding_sphere;
    uvec4Pointer samples_gpu_address;
    uint sample_count;
    uint mesh_atlas_part_idx;
    uint caps;
    uint pad0;
    float radius;
    float pad1;
    uint pad2;
    uint pad3;
};

struct _483
{
    uint _m0;
    uint _m1;
};

layout(buffer_reference, buffer_reference_align = 4) buffer uvec4Pointer
{
    uvec4 value;
};

layout(set = 6, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 0, scalar) readonly buffer material_data_nani_instance_data
{
    StairRopeInstanceData_natural _member0[];
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
layout(location = 0) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 2) out vec2 entryPointParam_vs_main_tex_uv;
layout(location = 3) flat out uint entryPointParam_vs_main_instance_index;
layout(location = 4) out float entryPointParam_vs_main_use_hard_normal;

void main()
{
    uint _47 = uint(gl_InstanceIndex);
    float step = 1.0 / float(1u << material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].mesh_atlas_part_idx);
    bool cap_start = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].caps & 1u) != 0u;
    bool cap_end = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].caps & 2u) != 0u;
    bool _464;
    if (cap_start)
    {
        _464 = Vertex_Position.z < step;
    }
    else
    {
        _464 = false;
    }
    float _469;
    float _471;
    float _473;
    if (_464)
    {
        _473 = 1.0;
        _471 = 0.0;
        _469 = 0.0;
    }
    else
    {
        bool _465;
        if (cap_end)
        {
            _465 = Vertex_Position.z > (1.0 - step);
        }
        else
        {
            _465 = false;
        }
        float _470;
        if (_465)
        {
            _470 = 1.0;
        }
        else
        {
            float _479 = cap_start ? step : 0.0;
            float _468;
            if (cap_end)
            {
                _468 = 1.0 - step;
            }
            else
            {
                _468 = 1.0;
            }
            _470 = (Vertex_Position.z - _479) / (_468 - _479);
        }
        _473 = float(_465);
        _471 = _465 ? 0.0 : material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].radius;
        _469 = _470;
    }
    float curve_pos = _469 * float(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].sample_count - 1u);
    uint _201 = min(uint(floor(curve_pos)), (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].sample_count - 2u));
    float _205 = clamp(curve_pos - float(_201), 0.0, 1.0);
    uint _356 = _201 * 3u;
    uvec2 _485 = uvec2(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].samples_gpu_address);
    uint _486 = _485.x;
    _483 _488;
    umulExtended(_356, 16u, _488._m1, _488._m0);
    uint _491 = _486 + _488._m0;
    uvec4 _358 = uvec4Pointer(uvec2(_491, (_485.y + _488._m1) + uint(_491 < _486))).value;
    uvec2 _497 = uvec2(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].samples_gpu_address);
    uint _498 = _497.x;
    _483 _500;
    umulExtended(_356 + 1u, 16u, _500._m1, _500._m0);
    uint _503 = _498 + _500._m0;
    uvec4 _361 = uvec4Pointer(uvec2(_503, (_497.y + _500._m1) + uint(_503 < _498))).value;
    uvec2 _509 = uvec2(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].samples_gpu_address);
    uint _510 = _509.x;
    _483 _512;
    umulExtended(_356 + 2u, 16u, _512._m1, _512._m0);
    uint _515 = _510 + _512._m0;
    uvec4 _364 = uvec4Pointer(uvec2(_515, (_509.y + _512._m1) + uint(_515 < _510))).value;
    uint _387 = (_201 + 1u) * 3u;
    uvec2 _521 = uvec2(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].samples_gpu_address);
    uint _522 = _521.x;
    _483 _524;
    umulExtended(_387, 16u, _524._m1, _524._m0);
    uint _527 = _522 + _524._m0;
    uvec4 _389 = uvec4Pointer(uvec2(_527, (_521.y + _524._m1) + uint(_527 < _522))).value;
    uvec2 _533 = uvec2(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].samples_gpu_address);
    uint _534 = _533.x;
    _483 _536;
    umulExtended(_387 + 1u, 16u, _536._m1, _536._m0);
    uint _539 = _534 + _536._m0;
    uvec4 _392 = uvec4Pointer(uvec2(_539, (_533.y + _536._m1) + uint(_539 < _534))).value;
    uvec2 _545 = uvec2(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].samples_gpu_address);
    uint _546 = _545.x;
    _483 _548;
    umulExtended(_387 + 2u, 16u, _548._m1, _548._m0);
    uint _551 = _546 + _548._m0;
    uvec4 _395 = uvec4Pointer(uvec2(_551, (_545.y + _548._m1) + uint(_551 < _546))).value;
    vec3 _257 = vec3(_205);
    vec3 _266 = normalize(mix(uintBitsToFloat(_364.xyz), uintBitsToFloat(_395.xyz), _257));
    float _277 = float(uint(gl_VertexIndex - gl_BaseVertex) % 9u);
    float angle = _277 * (-0.785398185253143310546875);
    vec3 _288 = normalize((_266 * cos(angle)) + (normalize(cross(_266, normalize(mix(uintBitsToFloat(_361.xyz), uintBitsToFloat(_392.xyz), _257)))) * sin(angle)));
    vec3 pos_ws = mix(uintBitsToFloat(_358.xyz), uintBitsToFloat(_389.xyz), _257) + (_288 * _471);
    gl_Position = vec4(pos_ws, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_frag_normal_ws = _288;
    entryPointParam_vs_main_frag_position_ws = pos_ws;
    entryPointParam_vs_main_tex_uv = vec2(_277 * 0.125, mix(uintBitsToFloat(_358.w), uintBitsToFloat(_389.w), _205) / max(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].radius * 8.0, 0.00999999977648258209228515625));
    entryPointParam_vs_main_instance_index = nani_instance_indirection_buffer._member0[_47];
    entryPointParam_vs_main_use_hard_normal = _473;
}

