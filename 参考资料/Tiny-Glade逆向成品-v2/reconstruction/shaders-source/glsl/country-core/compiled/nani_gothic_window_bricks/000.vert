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

layout(set = 6, binding = 0, std430) readonly buffer wall_color_data_wall_color_ids
{
    uint _member0[];
} wall_color_data_wall_color_ids_1;

layout(set = 22, binding = 0, std430) readonly buffer wall_identity_data_slot_wall_ids
{
    uint _member0[];
} wall_identity_data_slot_wall_ids_1;

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
    vec3 _2109;
    vec3 _2185;
    if ((material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].flags & 4u) != 0u)
    {
        vec3 _865 = vec4(Vertex_Position, 1.0) * transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[11])));
        _2185 = _865;
        _2109 = _865;
    }
    else
    {
        vec2 _165 = unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_1_normal_packed);
        vec3 _2110;
        vec3 _2186;
        if (bbx_x < 0.5)
        {
            float local_bbx = bbx_x * 2.0;
            float _198 = clamp(local_bbx, 0.0, 1.0);
            vec3 _2234 = vec3(mix(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_0_pos.x, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_1_pos.x, local_bbx), Vertex_Position.y + mix(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_0_pos.y, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_1_pos.y, _198), mix(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_0_pos.z, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_1_pos.z, local_bbx));
            vec2 _210 = _2234.xz + (normalize(mix(unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_0_normal_packed), _165, vec2(_198))) * Vertex_Position.z);
            vec3 _2106 = _2234;
            _2106.x = _210.x;
            _2106.z = _210.y;
            _2186 = _2234;
            _2110 = _2106;
        }
        else
        {
            float local_bbx_1 = (bbx_x - 0.5) * 2.0;
            float _234 = clamp(local_bbx_1, 0.0, 1.0);
            vec3 _2233 = vec3(mix(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_1_pos.x, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_2_pos.x, local_bbx_1), Vertex_Position.y + mix(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_1_pos.y, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_2_pos.y, _234), mix(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_1_pos.z, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_2_pos.z, local_bbx_1));
            vec2 _246 = _2233.xz + (normalize(mix(_165, unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].bone_2_normal_packed), vec2(_234))) * Vertex_Position.z);
            vec3 _2095 = _2233;
            _2095.x = _246.x;
            _2095.z = _246.y;
            _2186 = _2233;
            _2110 = _2095;
        }
        _2185 = _2186;
        _2109 = _2110;
    }
    vec3 _905 = _2109 * 0.4000000059604644775390625;
    ivec3 _931 = ivec3(floor(_905));
    vec3 _932 = fract(_905);
    uvec3 _933 = uvec3(_931);
    uint _1047 = _933.z;
    uint _1053 = _1047 + (_1047 << 10u);
    uint _1055 = _1053 ^ (_1053 >> 6u);
    uint _1057 = _1055 + (_1055 << 3u);
    uint _1059 = _1057 ^ (_1057 >> 11u);
    uint _1067 = (((_933.y * 1664525u) + (_1059 + (_1059 << 15u))) + 1013904223u) * 1664525u;
    uint _1069 = _1067 ^ (_1067 >> 11u);
    uint _1072 = _1069 ^ ((_1069 << 7u) & 2636928640u);
    uint _1075 = _1072 ^ ((_1072 << 15u) & 4022730752u);
    uint _1083 = (((_933.x * 1664525u) + (_1075 ^ (_1075 >> 18u))) + 1013904223u) * 1664525u;
    uint _1085 = _1083 ^ (_1083 >> 11u);
    uint _1088 = _1085 ^ ((_1085 << 7u) & 2636928640u);
    uint _1091 = _1088 ^ ((_1088 << 15u) & 4022730752u);
    uint _1093 = _1091 ^ (_1091 >> 18u);
    uint _1112;
    uint _1131;
    vec2 _920;
    uint _2114 = 0u;
    uint _2231 = _1093;
    for (;;)
    {
        if (!(_2114 < 2u))
        {
            break;
        }
        uint _1123 = _2231 + (_2231 << 10u);
        uint _1125 = _1123 ^ (_1123 >> 6u);
        uint _1127 = _1125 + (_1125 << 3u);
        uint _1129 = _1127 ^ (_1127 >> 11u);
        _1131 = _1129 + (_1129 << 15u);
        _920[_2114] = uintBitsToFloat((_2231 & 8388607u) | 1065353216u) - 1.0;
        _1112 = _2114 + 1u;
        _2231 = _1131;
        _2114 = _1112;
        continue;
    }
    uvec3 _942 = uvec3(_931 + ivec3(1, 0, 0));
    uint _1147 = _942.z;
    uint _1153 = _1147 + (_1147 << 10u);
    uint _1155 = _1153 ^ (_1153 >> 6u);
    uint _1157 = _1155 + (_1155 << 3u);
    uint _1159 = _1157 ^ (_1157 >> 11u);
    uint _1167 = (((_942.y * 1664525u) + (_1159 + (_1159 << 15u))) + 1013904223u) * 1664525u;
    uint _1169 = _1167 ^ (_1167 >> 11u);
    uint _1172 = _1169 ^ ((_1169 << 7u) & 2636928640u);
    uint _1175 = _1172 ^ ((_1172 << 15u) & 4022730752u);
    uint _1183 = (((_942.x * 1664525u) + (_1175 ^ (_1175 >> 18u))) + 1013904223u) * 1664525u;
    uint _1185 = _1183 ^ (_1183 >> 11u);
    uint _1188 = _1185 ^ ((_1185 << 7u) & 2636928640u);
    uint _1191 = _1188 ^ ((_1188 << 15u) & 4022730752u);
    uint _1193 = _1191 ^ (_1191 >> 18u);
    uint _1212;
    uint _1231;
    vec2 _921;
    uint _2118 = 0u;
    uint _2230 = _1193;
    for (;;)
    {
        if (!(_2118 < 2u))
        {
            break;
        }
        uint _1223 = _2230 + (_2230 << 10u);
        uint _1225 = _1223 ^ (_1223 >> 6u);
        uint _1227 = _1225 + (_1225 << 3u);
        uint _1229 = _1227 ^ (_1227 >> 11u);
        _1231 = _1229 + (_1229 << 15u);
        _921[_2118] = uintBitsToFloat((_2230 & 8388607u) | 1065353216u) - 1.0;
        _1212 = _2118 + 1u;
        _2230 = _1231;
        _2118 = _1212;
        continue;
    }
    uvec3 _949 = uvec3(_931 + ivec3(0, 1, 0));
    uint _1247 = _949.z;
    uint _1253 = _1247 + (_1247 << 10u);
    uint _1255 = _1253 ^ (_1253 >> 6u);
    uint _1257 = _1255 + (_1255 << 3u);
    uint _1259 = _1257 ^ (_1257 >> 11u);
    uint _1267 = (((_949.y * 1664525u) + (_1259 + (_1259 << 15u))) + 1013904223u) * 1664525u;
    uint _1269 = _1267 ^ (_1267 >> 11u);
    uint _1272 = _1269 ^ ((_1269 << 7u) & 2636928640u);
    uint _1275 = _1272 ^ ((_1272 << 15u) & 4022730752u);
    uint _1283 = (((_949.x * 1664525u) + (_1275 ^ (_1275 >> 18u))) + 1013904223u) * 1664525u;
    uint _1285 = _1283 ^ (_1283 >> 11u);
    uint _1288 = _1285 ^ ((_1285 << 7u) & 2636928640u);
    uint _1291 = _1288 ^ ((_1288 << 15u) & 4022730752u);
    uint _1293 = _1291 ^ (_1291 >> 18u);
    uint _1312;
    uint _1331;
    vec2 _922;
    uint _2123 = 0u;
    uint _2229 = _1293;
    for (;;)
    {
        if (!(_2123 < 2u))
        {
            break;
        }
        uint _1323 = _2229 + (_2229 << 10u);
        uint _1325 = _1323 ^ (_1323 >> 6u);
        uint _1327 = _1325 + (_1325 << 3u);
        uint _1329 = _1327 ^ (_1327 >> 11u);
        _1331 = _1329 + (_1329 << 15u);
        _922[_2123] = uintBitsToFloat((_2229 & 8388607u) | 1065353216u) - 1.0;
        _1312 = _2123 + 1u;
        _2229 = _1331;
        _2123 = _1312;
        continue;
    }
    uvec3 _957 = uvec3(_931 + ivec3(1, 1, 0));
    uint _1347 = _957.z;
    uint _1353 = _1347 + (_1347 << 10u);
    uint _1355 = _1353 ^ (_1353 >> 6u);
    uint _1357 = _1355 + (_1355 << 3u);
    uint _1359 = _1357 ^ (_1357 >> 11u);
    uint _1367 = (((_957.y * 1664525u) + (_1359 + (_1359 << 15u))) + 1013904223u) * 1664525u;
    uint _1369 = _1367 ^ (_1367 >> 11u);
    uint _1372 = _1369 ^ ((_1369 << 7u) & 2636928640u);
    uint _1375 = _1372 ^ ((_1372 << 15u) & 4022730752u);
    uint _1383 = (((_957.x * 1664525u) + (_1375 ^ (_1375 >> 18u))) + 1013904223u) * 1664525u;
    uint _1385 = _1383 ^ (_1383 >> 11u);
    uint _1388 = _1385 ^ ((_1385 << 7u) & 2636928640u);
    uint _1391 = _1388 ^ ((_1388 << 15u) & 4022730752u);
    uint _1393 = _1391 ^ (_1391 >> 18u);
    uint _1412;
    uint _1431;
    vec2 _923;
    uint _2129 = 0u;
    uint _2228 = _1393;
    for (;;)
    {
        if (!(_2129 < 2u))
        {
            break;
        }
        uint _1423 = _2228 + (_2228 << 10u);
        uint _1425 = _1423 ^ (_1423 >> 6u);
        uint _1427 = _1425 + (_1425 << 3u);
        uint _1429 = _1427 ^ (_1427 >> 11u);
        _1431 = _1429 + (_1429 << 15u);
        _923[_2129] = uintBitsToFloat((_2228 & 8388607u) | 1065353216u) - 1.0;
        _1412 = _2129 + 1u;
        _2228 = _1431;
        _2129 = _1412;
        continue;
    }
    uvec3 _964 = uvec3(_931 + ivec3(0, 0, 1));
    uint _1447 = _964.z;
    uint _1453 = _1447 + (_1447 << 10u);
    uint _1455 = _1453 ^ (_1453 >> 6u);
    uint _1457 = _1455 + (_1455 << 3u);
    uint _1459 = _1457 ^ (_1457 >> 11u);
    uint _1467 = (((_964.y * 1664525u) + (_1459 + (_1459 << 15u))) + 1013904223u) * 1664525u;
    uint _1469 = _1467 ^ (_1467 >> 11u);
    uint _1472 = _1469 ^ ((_1469 << 7u) & 2636928640u);
    uint _1475 = _1472 ^ ((_1472 << 15u) & 4022730752u);
    uint _1483 = (((_964.x * 1664525u) + (_1475 ^ (_1475 >> 18u))) + 1013904223u) * 1664525u;
    uint _1485 = _1483 ^ (_1483 >> 11u);
    uint _1488 = _1485 ^ ((_1485 << 7u) & 2636928640u);
    uint _1491 = _1488 ^ ((_1488 << 15u) & 4022730752u);
    uint _1493 = _1491 ^ (_1491 >> 18u);
    uint _1512;
    uint _1531;
    vec2 _924;
    uint _2136 = 0u;
    uint _2227 = _1493;
    for (;;)
    {
        if (!(_2136 < 2u))
        {
            break;
        }
        uint _1523 = _2227 + (_2227 << 10u);
        uint _1525 = _1523 ^ (_1523 >> 6u);
        uint _1527 = _1525 + (_1525 << 3u);
        uint _1529 = _1527 ^ (_1527 >> 11u);
        _1531 = _1529 + (_1529 << 15u);
        _924[_2136] = uintBitsToFloat((_2227 & 8388607u) | 1065353216u) - 1.0;
        _1512 = _2136 + 1u;
        _2227 = _1531;
        _2136 = _1512;
        continue;
    }
    uvec3 _973 = uvec3(_931 + ivec3(1, 0, 1));
    uint _1547 = _973.z;
    uint _1553 = _1547 + (_1547 << 10u);
    uint _1555 = _1553 ^ (_1553 >> 6u);
    uint _1557 = _1555 + (_1555 << 3u);
    uint _1559 = _1557 ^ (_1557 >> 11u);
    uint _1567 = (((_973.y * 1664525u) + (_1559 + (_1559 << 15u))) + 1013904223u) * 1664525u;
    uint _1569 = _1567 ^ (_1567 >> 11u);
    uint _1572 = _1569 ^ ((_1569 << 7u) & 2636928640u);
    uint _1575 = _1572 ^ ((_1572 << 15u) & 4022730752u);
    uint _1583 = (((_973.x * 1664525u) + (_1575 ^ (_1575 >> 18u))) + 1013904223u) * 1664525u;
    uint _1585 = _1583 ^ (_1583 >> 11u);
    uint _1588 = _1585 ^ ((_1585 << 7u) & 2636928640u);
    uint _1591 = _1588 ^ ((_1588 << 15u) & 4022730752u);
    uint _1593 = _1591 ^ (_1591 >> 18u);
    uint _1612;
    uint _1631;
    vec2 _925;
    uint _2144 = 0u;
    uint _2226 = _1593;
    for (;;)
    {
        if (!(_2144 < 2u))
        {
            break;
        }
        uint _1623 = _2226 + (_2226 << 10u);
        uint _1625 = _1623 ^ (_1623 >> 6u);
        uint _1627 = _1625 + (_1625 << 3u);
        uint _1629 = _1627 ^ (_1627 >> 11u);
        _1631 = _1629 + (_1629 << 15u);
        _925[_2144] = uintBitsToFloat((_2226 & 8388607u) | 1065353216u) - 1.0;
        _1612 = _2144 + 1u;
        _2226 = _1631;
        _2144 = _1612;
        continue;
    }
    uvec3 _980 = uvec3(_931 + ivec3(0, 1, 1));
    uint _1647 = _980.z;
    uint _1653 = _1647 + (_1647 << 10u);
    uint _1655 = _1653 ^ (_1653 >> 6u);
    uint _1657 = _1655 + (_1655 << 3u);
    uint _1659 = _1657 ^ (_1657 >> 11u);
    uint _1667 = (((_980.y * 1664525u) + (_1659 + (_1659 << 15u))) + 1013904223u) * 1664525u;
    uint _1669 = _1667 ^ (_1667 >> 11u);
    uint _1672 = _1669 ^ ((_1669 << 7u) & 2636928640u);
    uint _1675 = _1672 ^ ((_1672 << 15u) & 4022730752u);
    uint _1683 = (((_980.x * 1664525u) + (_1675 ^ (_1675 >> 18u))) + 1013904223u) * 1664525u;
    uint _1685 = _1683 ^ (_1683 >> 11u);
    uint _1688 = _1685 ^ ((_1685 << 7u) & 2636928640u);
    uint _1691 = _1688 ^ ((_1688 << 15u) & 4022730752u);
    uint _1693 = _1691 ^ (_1691 >> 18u);
    uint _1712;
    uint _1731;
    vec2 _926;
    uint _2153 = 0u;
    uint _2225 = _1693;
    for (;;)
    {
        if (!(_2153 < 2u))
        {
            break;
        }
        uint _1723 = _2225 + (_2225 << 10u);
        uint _1725 = _1723 ^ (_1723 >> 6u);
        uint _1727 = _1725 + (_1725 << 3u);
        uint _1729 = _1727 ^ (_1727 >> 11u);
        _1731 = _1729 + (_1729 << 15u);
        _926[_2153] = uintBitsToFloat((_2225 & 8388607u) | 1065353216u) - 1.0;
        _1712 = _2153 + 1u;
        _2225 = _1731;
        _2153 = _1712;
        continue;
    }
    uvec3 _988 = uvec3(_931 + ivec3(1));
    uint _1747 = _988.z;
    uint _1753 = _1747 + (_1747 << 10u);
    uint _1755 = _1753 ^ (_1753 >> 6u);
    uint _1757 = _1755 + (_1755 << 3u);
    uint _1759 = _1757 ^ (_1757 >> 11u);
    uint _1767 = (((_988.y * 1664525u) + (_1759 + (_1759 << 15u))) + 1013904223u) * 1664525u;
    uint _1769 = _1767 ^ (_1767 >> 11u);
    uint _1772 = _1769 ^ ((_1769 << 7u) & 2636928640u);
    uint _1775 = _1772 ^ ((_1772 << 15u) & 4022730752u);
    uint _1783 = (((_988.x * 1664525u) + (_1775 ^ (_1775 >> 18u))) + 1013904223u) * 1664525u;
    uint _1785 = _1783 ^ (_1783 >> 11u);
    uint _1788 = _1785 ^ ((_1785 << 7u) & 2636928640u);
    uint _1791 = _1788 ^ ((_1788 << 15u) & 4022730752u);
    uint _1793 = _1791 ^ (_1791 >> 18u);
    uint _1812;
    uint _1831;
    vec2 _927;
    uint _2163 = 0u;
    uint _2224 = _1793;
    for (;;)
    {
        if (!(_2163 < 2u))
        {
            break;
        }
        uint _1823 = _2224 + (_2224 << 10u);
        uint _1825 = _1823 ^ (_1823 >> 6u);
        uint _1827 = _1825 + (_1825 << 3u);
        uint _1829 = _1827 ^ (_1827 >> 11u);
        _1831 = _1829 + (_1829 << 15u);
        _927[_2163] = uintBitsToFloat((_2224 & 8388607u) | 1065353216u) - 1.0;
        _1812 = _2163 + 1u;
        _2224 = _1831;
        _2163 = _1812;
        continue;
    }
    vec3 _1843 = (_932 * _932) * (vec3(3.0) - (vec3(2.0) * _932));
    float _996 = _1843.x;
    float _997 = 1.0 - _996;
    float _999 = _1843.y;
    float _1000 = 1.0 - _999;
    float _1002 = _1843.z;
    float _1003 = 1.0 - _1002;
    vec2 _910 = clamp((((((((((((_920 * _997) * _1000) * _1003) + (((_921 * _996) * _1000) * _1003)) + (((_922 * _997) * _999) * _1003)) + (((_923 * _996) * _999) * _1003)) + (((_924 * _997) * _1000) * _1002)) + (((_925 * _996) * _1000) * _1002)) + (((_926 * _997) * _999) * _1002)) + (((_927 * _996) * _999) * _1002)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
    vec3 _577 = _2109 + (vec3(_910.x, 0.0, _910.y) * 0.0599999986588954925537109375);
    int _2237 = (is_bevel != 0) ? 768 : 512;
    bool _1852 = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].flags & 1u) != 0u;
    int _2187;
    if (_1852)
    {
        _2187 = _2237 | 1024;
    }
    else
    {
        _2187 = _2237;
    }
    uint _628 = uint(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].seed + brick_id);
    vec2 _665 = unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].wallspace_x_range_packed);
    uint _1899 = uint(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]]._wall_slot_id);
    uint _1912 = wall_identity_data_slot_wall_ids_1._member0[_1899] & 65535u;
    uint _1917 = _1912 ^ 7993234u;
    uint _1957 = _1917 + (_1917 << 10u);
    uint _1959 = _1957 ^ (_1957 >> 6u);
    uint _1961 = _1959 + (_1959 << 3u);
    uint _1963 = _1961 ^ (_1961 >> 11u);
    uint _1919 = _1912 ^ 3450234u;
    uint _1979 = _1919 + (_1919 << 10u);
    uint _1981 = _1979 ^ (_1979 >> 6u);
    uint _1983 = _1981 + (_1981 << 3u);
    uint _1985 = _1983 ^ (_1983 >> 11u);
    vec2 _1930 = (((vec2(mix(_665.x, _665.y, bbx_x), _577.y) * 0.100000001490116119384765625) * 0.699999988079071044921875) + vec2(float(_1912) * 0.20000000298023223876953125)) + vec2(uintBitsToFloat(((_1963 + (_1963 << 15u)) & 8388607u) | 1065353216u) - 1.0, uintBitsToFloat(((_1985 + (_1985 << 15u)) & 8388607u) | 1065353216u) - 1.0);
    uint _1933 = _628 ^ 292478890u;
    uint _2001 = _1933 + (_1933 << 10u);
    uint _2003 = _2001 ^ (_2001 >> 6u);
    uint _2005 = _2003 + (_2003 << 3u);
    uint _2007 = _2005 ^ (_2005 >> 11u);
    float _2015 = uintBitsToFloat(((_2007 + (_2007 << 15u)) & 8388607u) | 1065353216u) - 1.0;
    vec2 _2188;
    if (_2015 > 0.89999997615814208984375)
    {
        _2188 = _1930 * 3.0;
    }
    else
    {
        _2188 = _1930 + vec2(0.61000001430511474609375 * _2015);
    }
    vec2 _2189;
    if (int((_2187 & 512) != 0) == 1)
    {
        _2189 = _2188 * 2.2000000476837158203125;
    }
    else
    {
        _2189 = _2188;
    }
    vec2 _2202;
    if (_1852)
    {
        _2202 = Vertex_UV;
    }
    else
    {
        _2202 = _2189;
    }
    gl_Position = vec4(_577, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_instance_seed = _628;
    entryPointParam_vs_main_vertex_normal_ws = vec4(Vertex_Normal, 0.0) * transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].xform.data.data[11])));
    entryPointParam_vs_main_vertex_position_ws = _577;
    entryPointParam_vs_main_pos_ms = vec3(0.0);
    entryPointParam_vs_main_dir_ms = vec3(0.0);
    entryPointParam_vs_main_squish_factor = 0.0;
    entryPointParam_vs_main_offset_from_instance_transform = vec3(0.0);
    entryPointParam_vs_main_global_arch_height = 0.0;
    entryPointParam_vs_main_stone_foundation_clip_y = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_47]].stone_foundation_clip_y;
    entryPointParam_vs_main_frag_wall_uv = _2202;
    entryPointParam_vs_main_color_id = int(wall_color_data_wall_color_ids_1._member0[_1899]);
    entryPointParam_vs_main_frag_position_ws_no_brick_depth_xz = _2185.xz;
    entryPointParam_vs_main_flags = _2187;
    entryPointParam_vs_main_instance_index = nani_instance_indirection_buffer._member0[_47];
    entryPointParam_vs_main_normal_matrix = _MatrixStorage_float3x3_ColMajornatural(vec3[](vec3(0.0), vec3(0.0), vec3(0.0)));
}

