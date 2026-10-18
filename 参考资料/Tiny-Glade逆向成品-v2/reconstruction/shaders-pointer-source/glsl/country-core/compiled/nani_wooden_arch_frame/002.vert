#version 460
#extension GL_EXT_buffer_reference2 : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_buffer_reference_uvec2 : require

layout(buffer_reference) buffer uvec4Pointer;

struct WoodenArchFrameInstanceData_natural
{
    vec4 bounding_sphere;
    uvec4Pointer samples_gpu_address;
    uint sample_count;
    uint color_id;
    uint mesh_atlas_part_idx;
    uint caps;
    float profile_width;
    float profile_depth;
    float bevel_size;
    float frame_length;
};

const vec2 _208[9] = vec2[](vec2(-1.0, 0.0), vec2(-1.0, 0.0), vec2(0.0, 1.0), vec2(0.0, 1.0), vec2(1.0, 0.0), vec2(1.0, 0.0), vec2(0.0, -1.0), vec2(0.0, -1.0), vec2(-1.0, 0.0));

struct _1007
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
    WoodenArchFrameInstanceData_natural _member0[];
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
layout(location = 2) out vec3 entryPointParam_vs_main_tangent_u_ws;
layout(location = 3) out vec3 entryPointParam_vs_main_tangent_v_ws;
layout(location = 4) flat out uint entryPointParam_vs_main_instance_index;
layout(location = 5) out float entryPointParam_vs_main_use_hard_normal;
layout(location = 6) out vec2 entryPointParam_vs_main_tex_uv;
layout(location = 7) out vec2 entryPointParam_vs_main_edge_dmg_tex_uv;

void main()
{
    uint _90 = uint(gl_InstanceIndex);
    float half_depth = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].profile_depth * 0.5;
    float half_width = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].profile_width * 0.5;
    float _173 = min(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].bevel_size, min(half_depth, half_width) * 0.949999988079071044921875);
    float bevel_size = _173 * 0.4000000059604644775390625;
    float _176 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].profile_depth * (-0.5);
    float _177 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].profile_width * (-0.5);
    vec2 _178 = vec2(_176, _177);
    float _179 = half_width - bevel_size;
    vec2 _180 = vec2(_176, _179);
    float _181 = _176 + bevel_size;
    vec2 _182 = vec2(_181, half_width);
    float _183 = half_depth - bevel_size;
    vec2 _184 = vec2(_183, half_width);
    vec2 _185 = vec2(half_depth, _179);
    vec2 _187 = vec2(half_depth, _177 + bevel_size);
    vec2 _188 = vec2(_183, _177);
    vec2 _189 = vec2(_181, _177);
    vec2 _22[9] = vec2[](_178, _180, _182, _184, _185, _187, _188, _189, _178);
    uint _198 = uint(gl_VertexIndex - gl_BaseVertex) % 9u;
    vec2 _219 = normalize(vec2(1.0));
    vec2 _221 = normalize(vec2(1.0, -1.0));
    vec2 _223 = normalize(vec2(-1.0));
    vec2 _24[9] = vec2[](vec2(0.0, 1.0), vec2(0.0, 1.0), _219, vec2(1.0, 0.0), _221, vec2(0.0, -1.0), _223, vec2(-1.0, 0.0), _223);
    float profile_distance[9];
    profile_distance[0] = 0.0;
    float _239 = profile_distance[0u];
    float _241 = _239 + distance(_180, _178);
    profile_distance[1u] = _241;
    float _246 = _241 + distance(_182, _180);
    profile_distance[2u] = _246;
    float _251 = _246 + distance(_184, _182);
    profile_distance[3u] = _251;
    float _256 = _251 + distance(_185, _184);
    profile_distance[4u] = _256;
    float _261 = _256 + distance(_187, _185);
    profile_distance[5u] = _261;
    float _266 = _261 + distance(_188, _187);
    profile_distance[6u] = _266;
    float _271 = _266 + distance(_189, _188);
    profile_distance[7u] = _271;
    profile_distance[8u] = _271 + distance(_178, _189);
    float _285 = _173 * 0.20000000298023223876953125;
    float _28[9] = float[](0.0, 1.0 - _285, 1.0 + _285, 2.0 - _285, 2.0 + _285, 3.0 - _285, 3.0 + _285, 4.0 - _285, 4.0);
    float step = 1.0 / float(1u << material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].mesh_atlas_part_idx);
    bool cap_start = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].caps & 1u) != 0u;
    bool cap_end = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].caps & 2u) != 0u;
    bool _959;
    if (cap_start)
    {
        _959 = Vertex_Position.z < step;
    }
    else
    {
        _959 = false;
    }
    float _964;
    float _966;
    if (_959)
    {
        _966 = 1.0;
        _964 = 0.0;
    }
    else
    {
        bool _960;
        if (cap_end)
        {
            _960 = Vertex_Position.z > (1.0 - step);
        }
        else
        {
            _960 = false;
        }
        float _965;
        if (_960)
        {
            _965 = 1.0;
        }
        else
        {
            float _1003 = cap_start ? step : 0.0;
            float _963;
            if (cap_end)
            {
                _963 = 1.0 - step;
            }
            else
            {
                _963 = 1.0;
            }
            _965 = (Vertex_Position.z - _1003) / (_963 - _1003);
        }
        _966 = float(_960);
        _964 = _965;
    }
    float curve_pos = _964 * float(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].sample_count - 1u);
    uint _376 = min(uint(floor(curve_pos)), (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].sample_count - 2u));
    float _380 = clamp(curve_pos - float(_376), 0.0, 1.0);
    uint _739 = _376 * 3u;
    uvec2 _1009 = uvec2(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].samples_gpu_address);
    uint _1010 = _1009.x;
    _1007 _1012;
    umulExtended(_739, 16u, _1012._m1, _1012._m0);
    uint _1015 = _1010 + _1012._m0;
    uvec4 _741 = uvec4Pointer(uvec2(_1015, (_1009.y + _1012._m1) + uint(_1015 < _1010))).value;
    uvec2 _1021 = uvec2(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].samples_gpu_address);
    uint _1022 = _1021.x;
    _1007 _1024;
    umulExtended(_739 + 1u, 16u, _1024._m1, _1024._m0);
    uint _1027 = _1022 + _1024._m0;
    uvec4 _744 = uvec4Pointer(uvec2(_1027, (_1021.y + _1024._m1) + uint(_1027 < _1022))).value;
    uvec2 _1033 = uvec2(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].samples_gpu_address);
    uint _1034 = _1033.x;
    _1007 _1036;
    umulExtended(_739 + 2u, 16u, _1036._m1, _1036._m0);
    uint _1039 = _1034 + _1036._m0;
    uvec4 _747 = uvec4Pointer(uvec2(_1039, (_1033.y + _1036._m1) + uint(_1039 < _1034))).value;
    uint _770 = (_376 + 1u) * 3u;
    uvec2 _1045 = uvec2(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].samples_gpu_address);
    uint _1046 = _1045.x;
    _1007 _1048;
    umulExtended(_770, 16u, _1048._m1, _1048._m0);
    uint _1051 = _1046 + _1048._m0;
    uvec4 _772 = uvec4Pointer(uvec2(_1051, (_1045.y + _1048._m1) + uint(_1051 < _1046))).value;
    uvec2 _1057 = uvec2(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].samples_gpu_address);
    uint _1058 = _1057.x;
    _1007 _1060;
    umulExtended(_770 + 1u, 16u, _1060._m1, _1060._m0);
    uint _1063 = _1058 + _1060._m0;
    uvec4 _775 = uvec4Pointer(uvec2(_1063, (_1057.y + _1060._m1) + uint(_1063 < _1058))).value;
    uvec2 _1069 = uvec2(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].samples_gpu_address);
    uint _1070 = _1069.x;
    _1007 _1072;
    umulExtended(_770 + 2u, 16u, _1072._m1, _1072._m0);
    uint _1075 = _1070 + _1072._m0;
    uvec4 _778 = uvec4Pointer(uvec2(_1075, (_1069.y + _1072._m1) + uint(_1075 < _1070))).value;
    vec3 _430 = vec3(_380);
    vec3 _435 = normalize(mix(uintBitsToFloat(_744.xyz), uintBitsToFloat(_775.xyz), _430));
    vec3 _439 = normalize(mix(uintBitsToFloat(_747.xyz), uintBitsToFloat(_778.xyz), _430));
    vec3 _441 = normalize(cross(_439, _435));
    vec3 _990;
    if (_966 > 0.0)
    {
        _990 = vec3(0.0);
    }
    else
    {
        _990 = (_439 * _22[_198].x) + (_441 * _22[_198].y);
    }
    bool _968;
    if (cap_start)
    {
        _968 = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].caps & 4u) != 0u;
    }
    else
    {
        _968 = false;
    }
    bool _971;
    if (_968)
    {
        _971 = _966 <= 0.0;
    }
    else
    {
        _971 = false;
    }
    bool _980;
    if (_971)
    {
        _980 = Vertex_Position.z <= step;
    }
    else
    {
        _980 = false;
    }
    bool _972;
    if (cap_end)
    {
        _972 = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].caps & 8u) != 0u;
    }
    else
    {
        _972 = false;
    }
    bool _976;
    if (_972)
    {
        _976 = _966 <= 0.0;
    }
    else
    {
        _976 = false;
    }
    bool _981;
    if (_976)
    {
        _981 = Vertex_Position.z >= (1.0 - step);
    }
    else
    {
        _981 = false;
    }
    vec3 _991;
    if (_980 ? true : _981)
    {
        vec3 horizontal_tangent = vec3(_435.x, 0.0, _435.z);
        float _515 = length(horizontal_tangent);
        vec3 _992;
        if (_515 > 9.9999997473787516355514526367188e-05)
        {
            vec3 cap_normal = horizontal_tangent / vec3(_515);
            _992 = _990 + (_435 * ((-dot(cap_normal, _990)) / dot(cap_normal, _435)));
        }
        else
        {
            _992 = _990;
        }
        _991 = _992;
    }
    else
    {
        _991 = _990;
    }
    vec3 pos_ws = mix(uintBitsToFloat(_741.xyz), uintBitsToFloat(_772.xyz), _430) + _991;
    float _572 = mix(uintBitsToFloat(_741.w), uintBitsToFloat(_772.w), _380);
    vec2 _998;
    vec2 _999;
    if (_966 > 0.00999999977648258209228515625)
    {
        _999 = (_22[_198] * 2.0) + vec2(0.37000000476837158203125);
        _998 = vec2(0.0);
    }
    else
    {
        uvec3 _592 = uvec3(abs(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].bounding_sphere.xyz) * 100.0);
        uint _807 = _592.z;
        uint _813 = _807 + (_807 << 10u);
        uint _815 = _813 ^ (_813 >> 6u);
        uint _817 = _815 + (_815 << 3u);
        uint _819 = _817 ^ (_817 >> 11u);
        uint _827 = (((_592.y * 1664525u) + (_819 + (_819 << 15u))) + 1013904223u) * 1664525u;
        uint _829 = _827 ^ (_827 >> 11u);
        uint _832 = _829 ^ ((_829 << 7u) & 2636928640u);
        uint _835 = _832 ^ ((_832 << 15u) & 4022730752u);
        uint _843 = (((_592.x * 1664525u) + (_835 ^ (_835 >> 18u))) + 1013904223u) * 1664525u;
        uint _845 = _843 ^ (_843 >> 11u);
        uint _848 = _845 ^ ((_845 << 7u) & 2636928640u);
        uint _851 = _848 ^ ((_848 << 15u) & 4022730752u);
        uint _853 = _851 ^ (_851 >> 18u);
        uint _867 = _853 + (_853 << 10u);
        uint _869 = _867 ^ (_867 >> 6u);
        uint _871 = _869 + (_869 << 3u);
        uint _873 = _871 ^ (_871 >> 11u);
        uint _857 = _853 ^ 188053769u;
        uint _889 = _857 + (_857 << 10u);
        uint _891 = _889 ^ (_889 >> 6u);
        uint _893 = _891 + (_891 << 3u);
        uint _895 = _893 ^ (_893 >> 11u);
        _999 = (vec2(profile_distance[_198] * 0.20000000298023223876953125, min(_572, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_90]].frame_length)) * 3.0) + vec2(uintBitsToFloat(((_873 + (_873 << 15u)) & 8388607u) | 1065353216u) - 1.0, uintBitsToFloat(((_895 + (_895 << 15u)) & 8388607u) | 1065353216u) - 1.0);
        _998 = vec2(_28[_198] * 0.3333333432674407958984375, _572);
    }
    gl_Position = vec4(pos_ws, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_frag_normal_ws = normalize((_439 * _208[_198].x) + (_441 * _208[_198].y));
    entryPointParam_vs_main_frag_position_ws = pos_ws;
    entryPointParam_vs_main_tangent_u_ws = normalize((_439 * _24[_198].x) + (_441 * _24[_198].y));
    entryPointParam_vs_main_tangent_v_ws = _435;
    entryPointParam_vs_main_instance_index = nani_instance_indirection_buffer._member0[_90];
    entryPointParam_vs_main_use_hard_normal = _966;
    entryPointParam_vs_main_tex_uv = _999;
    entryPointParam_vs_main_edge_dmg_tex_uv = _998;
}

