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

struct InstanceData_natural
{
    Affine3Packed_natural xform;
    int seed;
    int _wall_slot_id;
    uint wallspace_x_range_packed;
    uint flags;
    vec3 bone_0_pos;
    uint bone_0_normal_packed;
    vec3 bone_1_pos;
    uint bone_1_normal_packed;
    vec3 bone_2_pos;
    uint bone_2_normal_packed;
    float stone_foundation_clip_y;
    uvec3 pad0;
};

struct _MatrixStorage_float3x3_ColMajornatural
{
    vec3 data[3];
};

layout(set = 7, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 0, scalar) readonly buffer material_data_nani_instance_data
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
layout(location = 6) in float bbx_x;
layout(location = 4) in int is_bevel;
layout(location = 5) in int brick_id;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 3) in vec2 Vertex_UV;
layout(location = 0) flat out uint entryPointParam_vs_main_instance_seed;
layout(location = 1) out vec3 entryPointParam_vs_main_vertex_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_vertex_position_ws;
layout(location = 3) out vec3 entryPointParam_vs_main_pos_ms;
layout(location = 4) out vec3 entryPointParam_vs_main_dir_ms;
layout(location = 5) out float entryPointParam_vs_main_squish_factor;
layout(location = 6) flat out vec3 entryPointParam_vs_main_offset_from_instance_transform;
layout(location = 7) out float entryPointParam_vs_main_global_arch_height;
layout(location = 8) flat out float entryPointParam_vs_main_stone_foundation_clip_y;
layout(location = 9) out vec2 entryPointParam_vs_main_frag_wall_uv;
layout(location = 10) flat out int entryPointParam_vs_main_color_id;
layout(location = 11) flat out vec2 entryPointParam_vs_main_frag_position_ws_no_brick_depth_xz;
layout(location = 12) flat out int entryPointParam_vs_main_flags;
layout(location = 13) flat out uint entryPointParam_vs_main_instance_index;
layout(location = 14) flat out _MatrixStorage_float3x3_ColMajornatural entryPointParam_vs_main_normal_matrix;

void main()
{
    uint _47 = uint(gl_InstanceIndex);
    vec3 _1881;
    vec3 _1957;
    if ((material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].flags & 4u) != 0u)
    {
        vec3 _759 = vec4(Vertex_Position, 1.0) * transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[11])));
        _1957 = _759;
        _1881 = _759;
    }
    else
    {
        vec2 _165 = unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_1_normal_packed);
        vec3 _1882;
        vec3 _1958;
        if (bbx_x < 0.5)
        {
            float local_bbx = bbx_x * 2.0;
            float _198 = clamp(local_bbx, 0.0, 1.0);
            vec3 _1993 = vec3(mix(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_0_pos.x, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_1_pos.x, local_bbx), Vertex_Position.y + mix(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_0_pos.y, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_1_pos.y, _198), mix(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_0_pos.z, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_1_pos.z, local_bbx));
            vec2 _210 = _1993.xz + (normalize(mix(unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_0_normal_packed), _165, vec2(_198))) * Vertex_Position.z);
            vec3 _1878 = _1993;
            _1878.x = _210.x;
            _1878.z = _210.y;
            _1958 = _1993;
            _1882 = _1878;
        }
        else
        {
            float local_bbx_1 = (bbx_x - 0.5) * 2.0;
            float _234 = clamp(local_bbx_1, 0.0, 1.0);
            vec3 _1992 = vec3(mix(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_1_pos.x, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_2_pos.x, local_bbx_1), Vertex_Position.y + mix(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_1_pos.y, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_2_pos.y, _234), mix(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_1_pos.z, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_2_pos.z, local_bbx_1));
            vec2 _246 = _1992.xz + (normalize(mix(_165, unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_2_normal_packed), vec2(_234))) * Vertex_Position.z);
            vec3 _1867 = _1992;
            _1867.x = _246.x;
            _1867.z = _246.y;
            _1958 = _1992;
            _1882 = _1867;
        }
        _1957 = _1958;
        _1881 = _1882;
    }
    vec3 _799 = _1881 * 0.4000000059604644775390625;
    ivec3 _825 = ivec3(floor(_799));
    vec3 _826 = fract(_799);
    uvec3 _827 = uvec3(_825);
    uint _941 = _827.z;
    uint _947 = _941 + (_941 << 10u);
    uint _949 = _947 ^ (_947 >> 6u);
    uint _951 = _949 + (_949 << 3u);
    uint _953 = _951 ^ (_951 >> 11u);
    uint _961 = (((_827.y * 1664525u) + (_953 + (_953 << 15u))) + 1013904223u) * 1664525u;
    uint _963 = _961 ^ (_961 >> 11u);
    uint _966 = _963 ^ ((_963 << 7u) & 2636928640u);
    uint _969 = _966 ^ ((_966 << 15u) & 4022730752u);
    uint _977 = (((_827.x * 1664525u) + (_969 ^ (_969 >> 18u))) + 1013904223u) * 1664525u;
    uint _979 = _977 ^ (_977 >> 11u);
    uint _982 = _979 ^ ((_979 << 7u) & 2636928640u);
    uint _985 = _982 ^ ((_982 << 15u) & 4022730752u);
    uint _987 = _985 ^ (_985 >> 18u);
    uint _1006;
    uint _1025;
    vec2 _814;
    uint _1886 = 0u;
    uint _1990 = _987;
    for (;;)
    {
        if (!(_1886 < 2u))
        {
            break;
        }
        uint _1017 = _1990 + (_1990 << 10u);
        uint _1019 = _1017 ^ (_1017 >> 6u);
        uint _1021 = _1019 + (_1019 << 3u);
        uint _1023 = _1021 ^ (_1021 >> 11u);
        _1025 = _1023 + (_1023 << 15u);
        _814[_1886] = uintBitsToFloat((_1990 & 8388607u) | 1065353216u) - 1.0;
        _1006 = _1886 + 1u;
        _1990 = _1025;
        _1886 = _1006;
        continue;
    }
    uvec3 _836 = uvec3(_825 + ivec3(1, 0, 0));
    uint _1041 = _836.z;
    uint _1047 = _1041 + (_1041 << 10u);
    uint _1049 = _1047 ^ (_1047 >> 6u);
    uint _1051 = _1049 + (_1049 << 3u);
    uint _1053 = _1051 ^ (_1051 >> 11u);
    uint _1061 = (((_836.y * 1664525u) + (_1053 + (_1053 << 15u))) + 1013904223u) * 1664525u;
    uint _1063 = _1061 ^ (_1061 >> 11u);
    uint _1066 = _1063 ^ ((_1063 << 7u) & 2636928640u);
    uint _1069 = _1066 ^ ((_1066 << 15u) & 4022730752u);
    uint _1077 = (((_836.x * 1664525u) + (_1069 ^ (_1069 >> 18u))) + 1013904223u) * 1664525u;
    uint _1079 = _1077 ^ (_1077 >> 11u);
    uint _1082 = _1079 ^ ((_1079 << 7u) & 2636928640u);
    uint _1085 = _1082 ^ ((_1082 << 15u) & 4022730752u);
    uint _1087 = _1085 ^ (_1085 >> 18u);
    uint _1106;
    uint _1125;
    vec2 _815;
    uint _1890 = 0u;
    uint _1989 = _1087;
    for (;;)
    {
        if (!(_1890 < 2u))
        {
            break;
        }
        uint _1117 = _1989 + (_1989 << 10u);
        uint _1119 = _1117 ^ (_1117 >> 6u);
        uint _1121 = _1119 + (_1119 << 3u);
        uint _1123 = _1121 ^ (_1121 >> 11u);
        _1125 = _1123 + (_1123 << 15u);
        _815[_1890] = uintBitsToFloat((_1989 & 8388607u) | 1065353216u) - 1.0;
        _1106 = _1890 + 1u;
        _1989 = _1125;
        _1890 = _1106;
        continue;
    }
    uvec3 _843 = uvec3(_825 + ivec3(0, 1, 0));
    uint _1141 = _843.z;
    uint _1147 = _1141 + (_1141 << 10u);
    uint _1149 = _1147 ^ (_1147 >> 6u);
    uint _1151 = _1149 + (_1149 << 3u);
    uint _1153 = _1151 ^ (_1151 >> 11u);
    uint _1161 = (((_843.y * 1664525u) + (_1153 + (_1153 << 15u))) + 1013904223u) * 1664525u;
    uint _1163 = _1161 ^ (_1161 >> 11u);
    uint _1166 = _1163 ^ ((_1163 << 7u) & 2636928640u);
    uint _1169 = _1166 ^ ((_1166 << 15u) & 4022730752u);
    uint _1177 = (((_843.x * 1664525u) + (_1169 ^ (_1169 >> 18u))) + 1013904223u) * 1664525u;
    uint _1179 = _1177 ^ (_1177 >> 11u);
    uint _1182 = _1179 ^ ((_1179 << 7u) & 2636928640u);
    uint _1185 = _1182 ^ ((_1182 << 15u) & 4022730752u);
    uint _1187 = _1185 ^ (_1185 >> 18u);
    uint _1206;
    uint _1225;
    vec2 _816;
    uint _1895 = 0u;
    uint _1988 = _1187;
    for (;;)
    {
        if (!(_1895 < 2u))
        {
            break;
        }
        uint _1217 = _1988 + (_1988 << 10u);
        uint _1219 = _1217 ^ (_1217 >> 6u);
        uint _1221 = _1219 + (_1219 << 3u);
        uint _1223 = _1221 ^ (_1221 >> 11u);
        _1225 = _1223 + (_1223 << 15u);
        _816[_1895] = uintBitsToFloat((_1988 & 8388607u) | 1065353216u) - 1.0;
        _1206 = _1895 + 1u;
        _1988 = _1225;
        _1895 = _1206;
        continue;
    }
    uvec3 _851 = uvec3(_825 + ivec3(1, 1, 0));
    uint _1241 = _851.z;
    uint _1247 = _1241 + (_1241 << 10u);
    uint _1249 = _1247 ^ (_1247 >> 6u);
    uint _1251 = _1249 + (_1249 << 3u);
    uint _1253 = _1251 ^ (_1251 >> 11u);
    uint _1261 = (((_851.y * 1664525u) + (_1253 + (_1253 << 15u))) + 1013904223u) * 1664525u;
    uint _1263 = _1261 ^ (_1261 >> 11u);
    uint _1266 = _1263 ^ ((_1263 << 7u) & 2636928640u);
    uint _1269 = _1266 ^ ((_1266 << 15u) & 4022730752u);
    uint _1277 = (((_851.x * 1664525u) + (_1269 ^ (_1269 >> 18u))) + 1013904223u) * 1664525u;
    uint _1279 = _1277 ^ (_1277 >> 11u);
    uint _1282 = _1279 ^ ((_1279 << 7u) & 2636928640u);
    uint _1285 = _1282 ^ ((_1282 << 15u) & 4022730752u);
    uint _1287 = _1285 ^ (_1285 >> 18u);
    uint _1306;
    uint _1325;
    vec2 _817;
    uint _1901 = 0u;
    uint _1987 = _1287;
    for (;;)
    {
        if (!(_1901 < 2u))
        {
            break;
        }
        uint _1317 = _1987 + (_1987 << 10u);
        uint _1319 = _1317 ^ (_1317 >> 6u);
        uint _1321 = _1319 + (_1319 << 3u);
        uint _1323 = _1321 ^ (_1321 >> 11u);
        _1325 = _1323 + (_1323 << 15u);
        _817[_1901] = uintBitsToFloat((_1987 & 8388607u) | 1065353216u) - 1.0;
        _1306 = _1901 + 1u;
        _1987 = _1325;
        _1901 = _1306;
        continue;
    }
    uvec3 _858 = uvec3(_825 + ivec3(0, 0, 1));
    uint _1341 = _858.z;
    uint _1347 = _1341 + (_1341 << 10u);
    uint _1349 = _1347 ^ (_1347 >> 6u);
    uint _1351 = _1349 + (_1349 << 3u);
    uint _1353 = _1351 ^ (_1351 >> 11u);
    uint _1361 = (((_858.y * 1664525u) + (_1353 + (_1353 << 15u))) + 1013904223u) * 1664525u;
    uint _1363 = _1361 ^ (_1361 >> 11u);
    uint _1366 = _1363 ^ ((_1363 << 7u) & 2636928640u);
    uint _1369 = _1366 ^ ((_1366 << 15u) & 4022730752u);
    uint _1377 = (((_858.x * 1664525u) + (_1369 ^ (_1369 >> 18u))) + 1013904223u) * 1664525u;
    uint _1379 = _1377 ^ (_1377 >> 11u);
    uint _1382 = _1379 ^ ((_1379 << 7u) & 2636928640u);
    uint _1385 = _1382 ^ ((_1382 << 15u) & 4022730752u);
    uint _1387 = _1385 ^ (_1385 >> 18u);
    uint _1406;
    uint _1425;
    vec2 _818;
    uint _1908 = 0u;
    uint _1986 = _1387;
    for (;;)
    {
        if (!(_1908 < 2u))
        {
            break;
        }
        uint _1417 = _1986 + (_1986 << 10u);
        uint _1419 = _1417 ^ (_1417 >> 6u);
        uint _1421 = _1419 + (_1419 << 3u);
        uint _1423 = _1421 ^ (_1421 >> 11u);
        _1425 = _1423 + (_1423 << 15u);
        _818[_1908] = uintBitsToFloat((_1986 & 8388607u) | 1065353216u) - 1.0;
        _1406 = _1908 + 1u;
        _1986 = _1425;
        _1908 = _1406;
        continue;
    }
    uvec3 _867 = uvec3(_825 + ivec3(1, 0, 1));
    uint _1441 = _867.z;
    uint _1447 = _1441 + (_1441 << 10u);
    uint _1449 = _1447 ^ (_1447 >> 6u);
    uint _1451 = _1449 + (_1449 << 3u);
    uint _1453 = _1451 ^ (_1451 >> 11u);
    uint _1461 = (((_867.y * 1664525u) + (_1453 + (_1453 << 15u))) + 1013904223u) * 1664525u;
    uint _1463 = _1461 ^ (_1461 >> 11u);
    uint _1466 = _1463 ^ ((_1463 << 7u) & 2636928640u);
    uint _1469 = _1466 ^ ((_1466 << 15u) & 4022730752u);
    uint _1477 = (((_867.x * 1664525u) + (_1469 ^ (_1469 >> 18u))) + 1013904223u) * 1664525u;
    uint _1479 = _1477 ^ (_1477 >> 11u);
    uint _1482 = _1479 ^ ((_1479 << 7u) & 2636928640u);
    uint _1485 = _1482 ^ ((_1482 << 15u) & 4022730752u);
    uint _1487 = _1485 ^ (_1485 >> 18u);
    uint _1506;
    uint _1525;
    vec2 _819;
    uint _1916 = 0u;
    uint _1985 = _1487;
    for (;;)
    {
        if (!(_1916 < 2u))
        {
            break;
        }
        uint _1517 = _1985 + (_1985 << 10u);
        uint _1519 = _1517 ^ (_1517 >> 6u);
        uint _1521 = _1519 + (_1519 << 3u);
        uint _1523 = _1521 ^ (_1521 >> 11u);
        _1525 = _1523 + (_1523 << 15u);
        _819[_1916] = uintBitsToFloat((_1985 & 8388607u) | 1065353216u) - 1.0;
        _1506 = _1916 + 1u;
        _1985 = _1525;
        _1916 = _1506;
        continue;
    }
    uvec3 _874 = uvec3(_825 + ivec3(0, 1, 1));
    uint _1541 = _874.z;
    uint _1547 = _1541 + (_1541 << 10u);
    uint _1549 = _1547 ^ (_1547 >> 6u);
    uint _1551 = _1549 + (_1549 << 3u);
    uint _1553 = _1551 ^ (_1551 >> 11u);
    uint _1561 = (((_874.y * 1664525u) + (_1553 + (_1553 << 15u))) + 1013904223u) * 1664525u;
    uint _1563 = _1561 ^ (_1561 >> 11u);
    uint _1566 = _1563 ^ ((_1563 << 7u) & 2636928640u);
    uint _1569 = _1566 ^ ((_1566 << 15u) & 4022730752u);
    uint _1577 = (((_874.x * 1664525u) + (_1569 ^ (_1569 >> 18u))) + 1013904223u) * 1664525u;
    uint _1579 = _1577 ^ (_1577 >> 11u);
    uint _1582 = _1579 ^ ((_1579 << 7u) & 2636928640u);
    uint _1585 = _1582 ^ ((_1582 << 15u) & 4022730752u);
    uint _1587 = _1585 ^ (_1585 >> 18u);
    uint _1606;
    uint _1625;
    vec2 _820;
    uint _1925 = 0u;
    uint _1984 = _1587;
    for (;;)
    {
        if (!(_1925 < 2u))
        {
            break;
        }
        uint _1617 = _1984 + (_1984 << 10u);
        uint _1619 = _1617 ^ (_1617 >> 6u);
        uint _1621 = _1619 + (_1619 << 3u);
        uint _1623 = _1621 ^ (_1621 >> 11u);
        _1625 = _1623 + (_1623 << 15u);
        _820[_1925] = uintBitsToFloat((_1984 & 8388607u) | 1065353216u) - 1.0;
        _1606 = _1925 + 1u;
        _1984 = _1625;
        _1925 = _1606;
        continue;
    }
    uvec3 _882 = uvec3(_825 + ivec3(1));
    uint _1641 = _882.z;
    uint _1647 = _1641 + (_1641 << 10u);
    uint _1649 = _1647 ^ (_1647 >> 6u);
    uint _1651 = _1649 + (_1649 << 3u);
    uint _1653 = _1651 ^ (_1651 >> 11u);
    uint _1661 = (((_882.y * 1664525u) + (_1653 + (_1653 << 15u))) + 1013904223u) * 1664525u;
    uint _1663 = _1661 ^ (_1661 >> 11u);
    uint _1666 = _1663 ^ ((_1663 << 7u) & 2636928640u);
    uint _1669 = _1666 ^ ((_1666 << 15u) & 4022730752u);
    uint _1677 = (((_882.x * 1664525u) + (_1669 ^ (_1669 >> 18u))) + 1013904223u) * 1664525u;
    uint _1679 = _1677 ^ (_1677 >> 11u);
    uint _1682 = _1679 ^ ((_1679 << 7u) & 2636928640u);
    uint _1685 = _1682 ^ ((_1682 << 15u) & 4022730752u);
    uint _1687 = _1685 ^ (_1685 >> 18u);
    uint _1706;
    uint _1725;
    vec2 _821;
    uint _1935 = 0u;
    uint _1983 = _1687;
    for (;;)
    {
        if (!(_1935 < 2u))
        {
            break;
        }
        uint _1717 = _1983 + (_1983 << 10u);
        uint _1719 = _1717 ^ (_1717 >> 6u);
        uint _1721 = _1719 + (_1719 << 3u);
        uint _1723 = _1721 ^ (_1721 >> 11u);
        _1725 = _1723 + (_1723 << 15u);
        _821[_1935] = uintBitsToFloat((_1983 & 8388607u) | 1065353216u) - 1.0;
        _1706 = _1935 + 1u;
        _1983 = _1725;
        _1935 = _1706;
        continue;
    }
    vec3 _1737 = (_826 * _826) * (vec3(3.0) - (vec3(2.0) * _826));
    float _890 = _1737.x;
    float _891 = 1.0 - _890;
    float _893 = _1737.y;
    float _894 = 1.0 - _893;
    float _896 = _1737.z;
    float _897 = 1.0 - _896;
    vec2 _804 = clamp((((((((((((_814 * _891) * _894) * _897) + (((_815 * _890) * _894) * _897)) + (((_816 * _891) * _893) * _897)) + (((_817 * _890) * _893) * _897)) + (((_818 * _891) * _894) * _896)) + (((_819 * _890) * _894) * _896)) + (((_820 * _891) * _893) * _896)) + (((_821 * _890) * _893) * _896)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
    vec3 _577 = _1881 + (vec3(_804.x, 0.0, _804.y) * 0.0599999986588954925537109375);
    int _1996 = (is_bevel != 0) ? 768 : 512;
    bool _1746 = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].flags & 1u) != 0u;
    int _1959;
    if (_1746)
    {
        _1959 = _1996 | 1024;
    }
    else
    {
        _1959 = _1996;
    }
    vec2 _1963;
    if (_1746)
    {
        _1963 = Vertex_UV;
    }
    else
    {
        _1963 = vec2(0.0);
    }
    gl_Position = vec4(_577, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_instance_seed = uint(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].seed + brick_id);
    entryPointParam_vs_main_vertex_normal_ws = vec4(Vertex_Normal, 0.0) * transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[11])));
    entryPointParam_vs_main_vertex_position_ws = _577;
    entryPointParam_vs_main_pos_ms = vec3(0.0);
    entryPointParam_vs_main_dir_ms = vec3(0.0);
    entryPointParam_vs_main_squish_factor = 0.0;
    entryPointParam_vs_main_offset_from_instance_transform = vec3(0.0);
    entryPointParam_vs_main_global_arch_height = 0.0;
    entryPointParam_vs_main_stone_foundation_clip_y = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].stone_foundation_clip_y;
    entryPointParam_vs_main_frag_wall_uv = _1963;
    entryPointParam_vs_main_color_id = 0;
    entryPointParam_vs_main_frag_position_ws_no_brick_depth_xz = _1957.xz;
    entryPointParam_vs_main_flags = _1959;
    entryPointParam_vs_main_instance_index = nani_instance_indirection_buffer._member0[_47];
    entryPointParam_vs_main_normal_matrix = _MatrixStorage_float3x3_ColMajornatural(vec3[](vec3(0.0), vec3(0.0), vec3(0.0)));
}

