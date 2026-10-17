#version 460
#extension GL_EXT_buffer_reference2 : require
#extension GL_EXT_buffer_reference_uvec2 : require

layout(buffer_reference) buffer uintPointer;
layout(buffer_reference) buffer vec3Pointer;

struct NaniTrimeshChunk_natural
{
    uintPointer gpu_address;
    uint vertex_index_count;
    uint vertex_byte_offset;
    vec4 bounding_sphere;
};

struct StairsFloorInstanceData_natural
{
    NaniTrimeshChunk_natural mesh;
    uint color_id;
    uint material_id;
    uint pad1;
    uint pad2;
};

layout(buffer_reference, buffer_reference_align = 4) buffer uintPointer
{
    uint value;
};

layout(buffer_reference, buffer_reference_align = 4) buffer vec3Pointer
{
    vec3 value;
};

layout(set = 6, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 1, std430) readonly buffer material_data_nani_instance_data
{
    StairsFloorInstanceData_natural _member0[];
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

layout(location = 0) out vec3 entryPointParam_vs_main_normal_ws;
layout(location = 1) out vec3 entryPointParam_vs_main_pos_ws;
layout(location = 2) flat out uint entryPointParam_vs_main_color_id;
layout(location = 3) flat out uint entryPointParam_vs_main_material_id;

void main()
{
    do
    {
        uint _29 = uint(gl_InstanceIndex);
        uint _113 = uint(gl_VertexIndex - gl_BaseVertex);
        if (_113 >= (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].mesh.vertex_index_count & 65535u))
        {
            gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
            entryPointParam_vs_main_normal_ws = vec3(0.0);
            entryPointParam_vs_main_pos_ws = vec3(0.0);
            entryPointParam_vs_main_color_id = 0u;
            entryPointParam_vs_main_material_id = 0u;
            break;
        }
        uint _412 = (_113 * 21846u) >> 16u;
        uvec2 _443 = uvec2(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].mesh.gpu_address);
        uint _444 = _443.x;
        uint _445 = _443.y;
        uvec2 _447;
        _447.x = _444;
        _447.y = _445;
        uint _468 = _447.x + (4u * _412);
        uint _419 = uintPointer(uvec2(_468, _447.y + uint(_468 < _447.x))).value;
        uint _506 = ((_419 >> ((_113 - (_412 * 3u)) * 8u)) & 255u) * 12u;
        uvec2 _535;
        _535.x = _444;
        _535.y = _445;
        uint _556 = _535.x + (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].mesh.vertex_byte_offset + _506);
        vec3 _513 = vec3Pointer(uvec2(_556, _535.y + uint(_556 < _535.x))).value;
        uvec2 _622;
        _622.x = _444;
        _622.y = _445;
        uint _643 = _622.x + ((material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].mesh.vertex_byte_offset + ((material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].mesh.vertex_index_count >> 16u) * 12u)) + _506);
        vec3 _601 = vec3Pointer(uvec2(_643, _622.y + uint(_643 < _622.x))).value;
        gl_Position = vec4(_513, 1.0) * current_view.world_to_sample;
        entryPointParam_vs_main_normal_ws = _601;
        entryPointParam_vs_main_pos_ws = _513;
        entryPointParam_vs_main_color_id = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].color_id;
        entryPointParam_vs_main_material_id = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].material_id;
        break;
    } while(false);
}

