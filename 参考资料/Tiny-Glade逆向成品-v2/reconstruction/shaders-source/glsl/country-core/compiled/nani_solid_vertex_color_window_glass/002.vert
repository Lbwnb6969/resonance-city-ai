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
    uint _bit_field_backing_0;
    float light_intensity;
    uint has_albedo_texture;
    uint albedo_texture;
};

layout(set = 6, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 1, std430) readonly buffer material_data_nani_instance_data
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
layout(location = 4) in int is_glass;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 3) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 4) flat out uint entryPointParam_vs_main_instance_index;
layout(location = 5) flat out uint entryPointParam_vs_main_is_glass;
layout(location = 6) flat out vec3 entryPointParam_vs_main_instance_position;
layout(location = 7) flat out uint entryPointParam_vs_main_color_id;

void main()
{
    uint _17 = uint(gl_InstanceIndex);
    mat3x4 _566 = transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[11])));
    vec3 _529 = vec4(Vertex_Position, 1.0) * _566;
    vec3 _569 = _529 * 0.4000000059604644775390625;
    ivec3 _595 = ivec3(floor(_569));
    vec3 _596 = fract(_569);
    uvec3 _597 = uvec3(_595);
    uint _711 = _597.z;
    uint _717 = _711 + (_711 << 10u);
    uint _719 = _717 ^ (_717 >> 6u);
    uint _721 = _719 + (_719 << 3u);
    uint _723 = _721 ^ (_721 >> 11u);
    uint _731 = (((_597.y * 1664525u) + (_723 + (_723 << 15u))) + 1013904223u) * 1664525u;
    uint _733 = _731 ^ (_731 >> 11u);
    uint _736 = _733 ^ ((_733 << 7u) & 2636928640u);
    uint _739 = _736 ^ ((_736 << 15u) & 4022730752u);
    uint _747 = (((_597.x * 1664525u) + (_739 ^ (_739 >> 18u))) + 1013904223u) * 1664525u;
    uint _749 = _747 ^ (_747 >> 11u);
    uint _752 = _749 ^ ((_749 << 7u) & 2636928640u);
    uint _755 = _752 ^ ((_752 << 15u) & 4022730752u);
    uint _757 = _755 ^ (_755 >> 18u);
    uint _776;
    uint _795;
    vec2 _584;
    uint _1626 = 0u;
    uint _1669 = _757;
    for (;;)
    {
        if (!(_1626 < 2u))
        {
            break;
        }
        uint _787 = _1669 + (_1669 << 10u);
        uint _789 = _787 ^ (_787 >> 6u);
        uint _791 = _789 + (_789 << 3u);
        uint _793 = _791 ^ (_791 >> 11u);
        _795 = _793 + (_793 << 15u);
        _584[_1626] = uintBitsToFloat((_1669 & 8388607u) | 1065353216u) - 1.0;
        _776 = _1626 + 1u;
        _1669 = _795;
        _1626 = _776;
        continue;
    }
    uvec3 _606 = uvec3(_595 + ivec3(1, 0, 0));
    uint _811 = _606.z;
    uint _817 = _811 + (_811 << 10u);
    uint _819 = _817 ^ (_817 >> 6u);
    uint _821 = _819 + (_819 << 3u);
    uint _823 = _821 ^ (_821 >> 11u);
    uint _831 = (((_606.y * 1664525u) + (_823 + (_823 << 15u))) + 1013904223u) * 1664525u;
    uint _833 = _831 ^ (_831 >> 11u);
    uint _836 = _833 ^ ((_833 << 7u) & 2636928640u);
    uint _839 = _836 ^ ((_836 << 15u) & 4022730752u);
    uint _847 = (((_606.x * 1664525u) + (_839 ^ (_839 >> 18u))) + 1013904223u) * 1664525u;
    uint _849 = _847 ^ (_847 >> 11u);
    uint _852 = _849 ^ ((_849 << 7u) & 2636928640u);
    uint _855 = _852 ^ ((_852 << 15u) & 4022730752u);
    uint _857 = _855 ^ (_855 >> 18u);
    uint _876;
    uint _895;
    vec2 _585;
    uint _1628 = 0u;
    uint _1668 = _857;
    for (;;)
    {
        if (!(_1628 < 2u))
        {
            break;
        }
        uint _887 = _1668 + (_1668 << 10u);
        uint _889 = _887 ^ (_887 >> 6u);
        uint _891 = _889 + (_889 << 3u);
        uint _893 = _891 ^ (_891 >> 11u);
        _895 = _893 + (_893 << 15u);
        _585[_1628] = uintBitsToFloat((_1668 & 8388607u) | 1065353216u) - 1.0;
        _876 = _1628 + 1u;
        _1668 = _895;
        _1628 = _876;
        continue;
    }
    uvec3 _613 = uvec3(_595 + ivec3(0, 1, 0));
    uint _911 = _613.z;
    uint _917 = _911 + (_911 << 10u);
    uint _919 = _917 ^ (_917 >> 6u);
    uint _921 = _919 + (_919 << 3u);
    uint _923 = _921 ^ (_921 >> 11u);
    uint _931 = (((_613.y * 1664525u) + (_923 + (_923 << 15u))) + 1013904223u) * 1664525u;
    uint _933 = _931 ^ (_931 >> 11u);
    uint _936 = _933 ^ ((_933 << 7u) & 2636928640u);
    uint _939 = _936 ^ ((_936 << 15u) & 4022730752u);
    uint _947 = (((_613.x * 1664525u) + (_939 ^ (_939 >> 18u))) + 1013904223u) * 1664525u;
    uint _949 = _947 ^ (_947 >> 11u);
    uint _952 = _949 ^ ((_949 << 7u) & 2636928640u);
    uint _955 = _952 ^ ((_952 << 15u) & 4022730752u);
    uint _957 = _955 ^ (_955 >> 18u);
    uint _976;
    uint _995;
    vec2 _586;
    uint _1631 = 0u;
    uint _1667 = _957;
    for (;;)
    {
        if (!(_1631 < 2u))
        {
            break;
        }
        uint _987 = _1667 + (_1667 << 10u);
        uint _989 = _987 ^ (_987 >> 6u);
        uint _991 = _989 + (_989 << 3u);
        uint _993 = _991 ^ (_991 >> 11u);
        _995 = _993 + (_993 << 15u);
        _586[_1631] = uintBitsToFloat((_1667 & 8388607u) | 1065353216u) - 1.0;
        _976 = _1631 + 1u;
        _1667 = _995;
        _1631 = _976;
        continue;
    }
    uvec3 _621 = uvec3(_595 + ivec3(1, 1, 0));
    uint _1011 = _621.z;
    uint _1017 = _1011 + (_1011 << 10u);
    uint _1019 = _1017 ^ (_1017 >> 6u);
    uint _1021 = _1019 + (_1019 << 3u);
    uint _1023 = _1021 ^ (_1021 >> 11u);
    uint _1031 = (((_621.y * 1664525u) + (_1023 + (_1023 << 15u))) + 1013904223u) * 1664525u;
    uint _1033 = _1031 ^ (_1031 >> 11u);
    uint _1036 = _1033 ^ ((_1033 << 7u) & 2636928640u);
    uint _1039 = _1036 ^ ((_1036 << 15u) & 4022730752u);
    uint _1047 = (((_621.x * 1664525u) + (_1039 ^ (_1039 >> 18u))) + 1013904223u) * 1664525u;
    uint _1049 = _1047 ^ (_1047 >> 11u);
    uint _1052 = _1049 ^ ((_1049 << 7u) & 2636928640u);
    uint _1055 = _1052 ^ ((_1052 << 15u) & 4022730752u);
    uint _1057 = _1055 ^ (_1055 >> 18u);
    uint _1076;
    uint _1095;
    vec2 _587;
    uint _1635 = 0u;
    uint _1666 = _1057;
    for (;;)
    {
        if (!(_1635 < 2u))
        {
            break;
        }
        uint _1087 = _1666 + (_1666 << 10u);
        uint _1089 = _1087 ^ (_1087 >> 6u);
        uint _1091 = _1089 + (_1089 << 3u);
        uint _1093 = _1091 ^ (_1091 >> 11u);
        _1095 = _1093 + (_1093 << 15u);
        _587[_1635] = uintBitsToFloat((_1666 & 8388607u) | 1065353216u) - 1.0;
        _1076 = _1635 + 1u;
        _1666 = _1095;
        _1635 = _1076;
        continue;
    }
    uvec3 _628 = uvec3(_595 + ivec3(0, 0, 1));
    uint _1111 = _628.z;
    uint _1117 = _1111 + (_1111 << 10u);
    uint _1119 = _1117 ^ (_1117 >> 6u);
    uint _1121 = _1119 + (_1119 << 3u);
    uint _1123 = _1121 ^ (_1121 >> 11u);
    uint _1131 = (((_628.y * 1664525u) + (_1123 + (_1123 << 15u))) + 1013904223u) * 1664525u;
    uint _1133 = _1131 ^ (_1131 >> 11u);
    uint _1136 = _1133 ^ ((_1133 << 7u) & 2636928640u);
    uint _1139 = _1136 ^ ((_1136 << 15u) & 4022730752u);
    uint _1147 = (((_628.x * 1664525u) + (_1139 ^ (_1139 >> 18u))) + 1013904223u) * 1664525u;
    uint _1149 = _1147 ^ (_1147 >> 11u);
    uint _1152 = _1149 ^ ((_1149 << 7u) & 2636928640u);
    uint _1155 = _1152 ^ ((_1152 << 15u) & 4022730752u);
    uint _1157 = _1155 ^ (_1155 >> 18u);
    uint _1176;
    uint _1195;
    vec2 _588;
    uint _1640 = 0u;
    uint _1665 = _1157;
    for (;;)
    {
        if (!(_1640 < 2u))
        {
            break;
        }
        uint _1187 = _1665 + (_1665 << 10u);
        uint _1189 = _1187 ^ (_1187 >> 6u);
        uint _1191 = _1189 + (_1189 << 3u);
        uint _1193 = _1191 ^ (_1191 >> 11u);
        _1195 = _1193 + (_1193 << 15u);
        _588[_1640] = uintBitsToFloat((_1665 & 8388607u) | 1065353216u) - 1.0;
        _1176 = _1640 + 1u;
        _1665 = _1195;
        _1640 = _1176;
        continue;
    }
    uvec3 _637 = uvec3(_595 + ivec3(1, 0, 1));
    uint _1211 = _637.z;
    uint _1217 = _1211 + (_1211 << 10u);
    uint _1219 = _1217 ^ (_1217 >> 6u);
    uint _1221 = _1219 + (_1219 << 3u);
    uint _1223 = _1221 ^ (_1221 >> 11u);
    uint _1231 = (((_637.y * 1664525u) + (_1223 + (_1223 << 15u))) + 1013904223u) * 1664525u;
    uint _1233 = _1231 ^ (_1231 >> 11u);
    uint _1236 = _1233 ^ ((_1233 << 7u) & 2636928640u);
    uint _1239 = _1236 ^ ((_1236 << 15u) & 4022730752u);
    uint _1247 = (((_637.x * 1664525u) + (_1239 ^ (_1239 >> 18u))) + 1013904223u) * 1664525u;
    uint _1249 = _1247 ^ (_1247 >> 11u);
    uint _1252 = _1249 ^ ((_1249 << 7u) & 2636928640u);
    uint _1255 = _1252 ^ ((_1252 << 15u) & 4022730752u);
    uint _1257 = _1255 ^ (_1255 >> 18u);
    uint _1276;
    uint _1295;
    vec2 _589;
    uint _1646 = 0u;
    uint _1664 = _1257;
    for (;;)
    {
        if (!(_1646 < 2u))
        {
            break;
        }
        uint _1287 = _1664 + (_1664 << 10u);
        uint _1289 = _1287 ^ (_1287 >> 6u);
        uint _1291 = _1289 + (_1289 << 3u);
        uint _1293 = _1291 ^ (_1291 >> 11u);
        _1295 = _1293 + (_1293 << 15u);
        _589[_1646] = uintBitsToFloat((_1664 & 8388607u) | 1065353216u) - 1.0;
        _1276 = _1646 + 1u;
        _1664 = _1295;
        _1646 = _1276;
        continue;
    }
    uvec3 _644 = uvec3(_595 + ivec3(0, 1, 1));
    uint _1311 = _644.z;
    uint _1317 = _1311 + (_1311 << 10u);
    uint _1319 = _1317 ^ (_1317 >> 6u);
    uint _1321 = _1319 + (_1319 << 3u);
    uint _1323 = _1321 ^ (_1321 >> 11u);
    uint _1331 = (((_644.y * 1664525u) + (_1323 + (_1323 << 15u))) + 1013904223u) * 1664525u;
    uint _1333 = _1331 ^ (_1331 >> 11u);
    uint _1336 = _1333 ^ ((_1333 << 7u) & 2636928640u);
    uint _1339 = _1336 ^ ((_1336 << 15u) & 4022730752u);
    uint _1347 = (((_644.x * 1664525u) + (_1339 ^ (_1339 >> 18u))) + 1013904223u) * 1664525u;
    uint _1349 = _1347 ^ (_1347 >> 11u);
    uint _1352 = _1349 ^ ((_1349 << 7u) & 2636928640u);
    uint _1355 = _1352 ^ ((_1352 << 15u) & 4022730752u);
    uint _1357 = _1355 ^ (_1355 >> 18u);
    uint _1376;
    uint _1395;
    vec2 _590;
    uint _1653 = 0u;
    uint _1663 = _1357;
    for (;;)
    {
        if (!(_1653 < 2u))
        {
            break;
        }
        uint _1387 = _1663 + (_1663 << 10u);
        uint _1389 = _1387 ^ (_1387 >> 6u);
        uint _1391 = _1389 + (_1389 << 3u);
        uint _1393 = _1391 ^ (_1391 >> 11u);
        _1395 = _1393 + (_1393 << 15u);
        _590[_1653] = uintBitsToFloat((_1663 & 8388607u) | 1065353216u) - 1.0;
        _1376 = _1653 + 1u;
        _1663 = _1395;
        _1653 = _1376;
        continue;
    }
    uvec3 _652 = uvec3(_595 + ivec3(1));
    uint _1411 = _652.z;
    uint _1417 = _1411 + (_1411 << 10u);
    uint _1419 = _1417 ^ (_1417 >> 6u);
    uint _1421 = _1419 + (_1419 << 3u);
    uint _1423 = _1421 ^ (_1421 >> 11u);
    uint _1431 = (((_652.y * 1664525u) + (_1423 + (_1423 << 15u))) + 1013904223u) * 1664525u;
    uint _1433 = _1431 ^ (_1431 >> 11u);
    uint _1436 = _1433 ^ ((_1433 << 7u) & 2636928640u);
    uint _1439 = _1436 ^ ((_1436 << 15u) & 4022730752u);
    uint _1447 = (((_652.x * 1664525u) + (_1439 ^ (_1439 >> 18u))) + 1013904223u) * 1664525u;
    uint _1449 = _1447 ^ (_1447 >> 11u);
    uint _1452 = _1449 ^ ((_1449 << 7u) & 2636928640u);
    uint _1455 = _1452 ^ ((_1452 << 15u) & 4022730752u);
    uint _1457 = _1455 ^ (_1455 >> 18u);
    uint _1476;
    uint _1495;
    vec2 _591;
    uint _1661 = 0u;
    uint _1662 = _1457;
    for (;;)
    {
        if (!(_1661 < 2u))
        {
            break;
        }
        uint _1487 = _1662 + (_1662 << 10u);
        uint _1489 = _1487 ^ (_1487 >> 6u);
        uint _1491 = _1489 + (_1489 << 3u);
        uint _1493 = _1491 ^ (_1491 >> 11u);
        _1495 = _1493 + (_1493 << 15u);
        _591[_1661] = uintBitsToFloat((_1662 & 8388607u) | 1065353216u) - 1.0;
        _1476 = _1661 + 1u;
        _1662 = _1495;
        _1661 = _1476;
        continue;
    }
    vec3 _1507 = (_596 * _596) * (vec3(3.0) - (vec3(2.0) * _596));
    float _660 = _1507.x;
    float _661 = 1.0 - _660;
    float _663 = _1507.y;
    float _664 = 1.0 - _663;
    float _666 = _1507.z;
    float _667 = 1.0 - _666;
    vec2 _574 = clamp((((((((((((_584 * _661) * _664) * _667) + (((_585 * _660) * _664) * _667)) + (((_586 * _661) * _663) * _667)) + (((_587 * _660) * _663) * _667)) + (((_588 * _661) * _664) * _666)) + (((_589 * _660) * _664) * _666)) + (((_590 * _661) * _663) * _666)) + (((_591 * _660) * _663) * _666)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
    vec3 pos_ws = _529 + (vec3(_574.x, 0.0, _574.y) * 0.0599999986588954925537109375);
    gl_Position = vec4(pos_ws, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = Vertex_Color;
    entryPointParam_vs_main_frag_normal_ws = vec4(Vertex_Normal, 0.0) * _566;
    entryPointParam_vs_main_frag_position_ws = pos_ws;
    entryPointParam_vs_main_frag_uv = Vertex_UV * 0.75;
    entryPointParam_vs_main_instance_index = nani_instance_indirection_buffer._member0[_17];
    entryPointParam_vs_main_is_glass = uint(is_glass);
    entryPointParam_vs_main_instance_position = vec4(vec3(0.0), 1.0) * _566;
    entryPointParam_vs_main_color_id = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]]._bit_field_backing_0 << uint(1)) >> uint(1);
}

