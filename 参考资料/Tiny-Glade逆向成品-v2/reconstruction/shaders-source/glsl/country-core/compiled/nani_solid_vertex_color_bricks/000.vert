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
    uint wallspace_x_range_packed;
    uint seed;
    uint wall_slot_is_wooden_packed;
    float mesh_size_x;
};

struct _MatrixStorage_float3x3_ColMajornatural
{
    vec3 data[3];
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

layout(set = 19, binding = 0, std430) readonly buffer wall_color_data_wall_color_ids
{
    uint _member0[];
} wall_color_data_wall_color_ids_1;

layout(set = 21, binding = 0, std430) readonly buffer wall_identity_data_slot_wall_ids
{
    uint _member0[];
} wall_identity_data_slot_wall_ids_1;

layout(location = 0) in vec3 Vertex_Position;
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
    uint _36 = uint(gl_InstanceIndex);
    mat3x4 _764 = transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[11])));
    vec3 _727 = vec4(Vertex_Position, 1.0) * _764;
    vec3 _767 = _727.xyz * 0.4000000059604644775390625;
    ivec3 _793 = ivec3(floor(_767));
    vec3 _794 = fract(_767);
    uvec3 _795 = uvec3(_793);
    uint _909 = _795.z;
    uint _915 = _909 + (_909 << 10u);
    uint _917 = _915 ^ (_915 >> 6u);
    uint _919 = _917 + (_917 << 3u);
    uint _921 = _919 ^ (_919 >> 11u);
    uint _929 = (((_795.y * 1664525u) + (_921 + (_921 << 15u))) + 1013904223u) * 1664525u;
    uint _931 = _929 ^ (_929 >> 11u);
    uint _934 = _931 ^ ((_931 << 7u) & 2636928640u);
    uint _937 = _934 ^ ((_934 << 15u) & 4022730752u);
    uint _945 = (((_795.x * 1664525u) + (_937 ^ (_937 >> 18u))) + 1013904223u) * 1664525u;
    uint _947 = _945 ^ (_945 >> 11u);
    uint _950 = _947 ^ ((_947 << 7u) & 2636928640u);
    uint _953 = _950 ^ ((_950 << 15u) & 4022730752u);
    uint _955 = _953 ^ (_953 >> 18u);
    uint _974;
    uint _993;
    vec2 _782;
    uint _1951 = 0u;
    uint _2031 = _955;
    for (;;)
    {
        if (!(_1951 < 2u))
        {
            break;
        }
        uint _985 = _2031 + (_2031 << 10u);
        uint _987 = _985 ^ (_985 >> 6u);
        uint _989 = _987 + (_987 << 3u);
        uint _991 = _989 ^ (_989 >> 11u);
        _993 = _991 + (_991 << 15u);
        _782[_1951] = uintBitsToFloat((_2031 & 8388607u) | 1065353216u) - 1.0;
        _974 = _1951 + 1u;
        _2031 = _993;
        _1951 = _974;
        continue;
    }
    uvec3 _804 = uvec3(_793 + ivec3(1, 0, 0));
    uint _1009 = _804.z;
    uint _1015 = _1009 + (_1009 << 10u);
    uint _1017 = _1015 ^ (_1015 >> 6u);
    uint _1019 = _1017 + (_1017 << 3u);
    uint _1021 = _1019 ^ (_1019 >> 11u);
    uint _1029 = (((_804.y * 1664525u) + (_1021 + (_1021 << 15u))) + 1013904223u) * 1664525u;
    uint _1031 = _1029 ^ (_1029 >> 11u);
    uint _1034 = _1031 ^ ((_1031 << 7u) & 2636928640u);
    uint _1037 = _1034 ^ ((_1034 << 15u) & 4022730752u);
    uint _1045 = (((_804.x * 1664525u) + (_1037 ^ (_1037 >> 18u))) + 1013904223u) * 1664525u;
    uint _1047 = _1045 ^ (_1045 >> 11u);
    uint _1050 = _1047 ^ ((_1047 << 7u) & 2636928640u);
    uint _1053 = _1050 ^ ((_1050 << 15u) & 4022730752u);
    uint _1055 = _1053 ^ (_1053 >> 18u);
    uint _1074;
    uint _1093;
    vec2 _783;
    uint _1953 = 0u;
    uint _2030 = _1055;
    for (;;)
    {
        if (!(_1953 < 2u))
        {
            break;
        }
        uint _1085 = _2030 + (_2030 << 10u);
        uint _1087 = _1085 ^ (_1085 >> 6u);
        uint _1089 = _1087 + (_1087 << 3u);
        uint _1091 = _1089 ^ (_1089 >> 11u);
        _1093 = _1091 + (_1091 << 15u);
        _783[_1953] = uintBitsToFloat((_2030 & 8388607u) | 1065353216u) - 1.0;
        _1074 = _1953 + 1u;
        _2030 = _1093;
        _1953 = _1074;
        continue;
    }
    uvec3 _811 = uvec3(_793 + ivec3(0, 1, 0));
    uint _1109 = _811.z;
    uint _1115 = _1109 + (_1109 << 10u);
    uint _1117 = _1115 ^ (_1115 >> 6u);
    uint _1119 = _1117 + (_1117 << 3u);
    uint _1121 = _1119 ^ (_1119 >> 11u);
    uint _1129 = (((_811.y * 1664525u) + (_1121 + (_1121 << 15u))) + 1013904223u) * 1664525u;
    uint _1131 = _1129 ^ (_1129 >> 11u);
    uint _1134 = _1131 ^ ((_1131 << 7u) & 2636928640u);
    uint _1137 = _1134 ^ ((_1134 << 15u) & 4022730752u);
    uint _1145 = (((_811.x * 1664525u) + (_1137 ^ (_1137 >> 18u))) + 1013904223u) * 1664525u;
    uint _1147 = _1145 ^ (_1145 >> 11u);
    uint _1150 = _1147 ^ ((_1147 << 7u) & 2636928640u);
    uint _1153 = _1150 ^ ((_1150 << 15u) & 4022730752u);
    uint _1155 = _1153 ^ (_1153 >> 18u);
    uint _1174;
    uint _1193;
    vec2 _784;
    uint _1956 = 0u;
    uint _2029 = _1155;
    for (;;)
    {
        if (!(_1956 < 2u))
        {
            break;
        }
        uint _1185 = _2029 + (_2029 << 10u);
        uint _1187 = _1185 ^ (_1185 >> 6u);
        uint _1189 = _1187 + (_1187 << 3u);
        uint _1191 = _1189 ^ (_1189 >> 11u);
        _1193 = _1191 + (_1191 << 15u);
        _784[_1956] = uintBitsToFloat((_2029 & 8388607u) | 1065353216u) - 1.0;
        _1174 = _1956 + 1u;
        _2029 = _1193;
        _1956 = _1174;
        continue;
    }
    uvec3 _819 = uvec3(_793 + ivec3(1, 1, 0));
    uint _1209 = _819.z;
    uint _1215 = _1209 + (_1209 << 10u);
    uint _1217 = _1215 ^ (_1215 >> 6u);
    uint _1219 = _1217 + (_1217 << 3u);
    uint _1221 = _1219 ^ (_1219 >> 11u);
    uint _1229 = (((_819.y * 1664525u) + (_1221 + (_1221 << 15u))) + 1013904223u) * 1664525u;
    uint _1231 = _1229 ^ (_1229 >> 11u);
    uint _1234 = _1231 ^ ((_1231 << 7u) & 2636928640u);
    uint _1237 = _1234 ^ ((_1234 << 15u) & 4022730752u);
    uint _1245 = (((_819.x * 1664525u) + (_1237 ^ (_1237 >> 18u))) + 1013904223u) * 1664525u;
    uint _1247 = _1245 ^ (_1245 >> 11u);
    uint _1250 = _1247 ^ ((_1247 << 7u) & 2636928640u);
    uint _1253 = _1250 ^ ((_1250 << 15u) & 4022730752u);
    uint _1255 = _1253 ^ (_1253 >> 18u);
    uint _1274;
    uint _1293;
    vec2 _785;
    uint _1960 = 0u;
    uint _2028 = _1255;
    for (;;)
    {
        if (!(_1960 < 2u))
        {
            break;
        }
        uint _1285 = _2028 + (_2028 << 10u);
        uint _1287 = _1285 ^ (_1285 >> 6u);
        uint _1289 = _1287 + (_1287 << 3u);
        uint _1291 = _1289 ^ (_1289 >> 11u);
        _1293 = _1291 + (_1291 << 15u);
        _785[_1960] = uintBitsToFloat((_2028 & 8388607u) | 1065353216u) - 1.0;
        _1274 = _1960 + 1u;
        _2028 = _1293;
        _1960 = _1274;
        continue;
    }
    uvec3 _826 = uvec3(_793 + ivec3(0, 0, 1));
    uint _1309 = _826.z;
    uint _1315 = _1309 + (_1309 << 10u);
    uint _1317 = _1315 ^ (_1315 >> 6u);
    uint _1319 = _1317 + (_1317 << 3u);
    uint _1321 = _1319 ^ (_1319 >> 11u);
    uint _1329 = (((_826.y * 1664525u) + (_1321 + (_1321 << 15u))) + 1013904223u) * 1664525u;
    uint _1331 = _1329 ^ (_1329 >> 11u);
    uint _1334 = _1331 ^ ((_1331 << 7u) & 2636928640u);
    uint _1337 = _1334 ^ ((_1334 << 15u) & 4022730752u);
    uint _1345 = (((_826.x * 1664525u) + (_1337 ^ (_1337 >> 18u))) + 1013904223u) * 1664525u;
    uint _1347 = _1345 ^ (_1345 >> 11u);
    uint _1350 = _1347 ^ ((_1347 << 7u) & 2636928640u);
    uint _1353 = _1350 ^ ((_1350 << 15u) & 4022730752u);
    uint _1355 = _1353 ^ (_1353 >> 18u);
    uint _1374;
    uint _1393;
    vec2 _786;
    uint _1965 = 0u;
    uint _2027 = _1355;
    for (;;)
    {
        if (!(_1965 < 2u))
        {
            break;
        }
        uint _1385 = _2027 + (_2027 << 10u);
        uint _1387 = _1385 ^ (_1385 >> 6u);
        uint _1389 = _1387 + (_1387 << 3u);
        uint _1391 = _1389 ^ (_1389 >> 11u);
        _1393 = _1391 + (_1391 << 15u);
        _786[_1965] = uintBitsToFloat((_2027 & 8388607u) | 1065353216u) - 1.0;
        _1374 = _1965 + 1u;
        _2027 = _1393;
        _1965 = _1374;
        continue;
    }
    uvec3 _835 = uvec3(_793 + ivec3(1, 0, 1));
    uint _1409 = _835.z;
    uint _1415 = _1409 + (_1409 << 10u);
    uint _1417 = _1415 ^ (_1415 >> 6u);
    uint _1419 = _1417 + (_1417 << 3u);
    uint _1421 = _1419 ^ (_1419 >> 11u);
    uint _1429 = (((_835.y * 1664525u) + (_1421 + (_1421 << 15u))) + 1013904223u) * 1664525u;
    uint _1431 = _1429 ^ (_1429 >> 11u);
    uint _1434 = _1431 ^ ((_1431 << 7u) & 2636928640u);
    uint _1437 = _1434 ^ ((_1434 << 15u) & 4022730752u);
    uint _1445 = (((_835.x * 1664525u) + (_1437 ^ (_1437 >> 18u))) + 1013904223u) * 1664525u;
    uint _1447 = _1445 ^ (_1445 >> 11u);
    uint _1450 = _1447 ^ ((_1447 << 7u) & 2636928640u);
    uint _1453 = _1450 ^ ((_1450 << 15u) & 4022730752u);
    uint _1455 = _1453 ^ (_1453 >> 18u);
    uint _1474;
    uint _1493;
    vec2 _787;
    uint _1971 = 0u;
    uint _2026 = _1455;
    for (;;)
    {
        if (!(_1971 < 2u))
        {
            break;
        }
        uint _1485 = _2026 + (_2026 << 10u);
        uint _1487 = _1485 ^ (_1485 >> 6u);
        uint _1489 = _1487 + (_1487 << 3u);
        uint _1491 = _1489 ^ (_1489 >> 11u);
        _1493 = _1491 + (_1491 << 15u);
        _787[_1971] = uintBitsToFloat((_2026 & 8388607u) | 1065353216u) - 1.0;
        _1474 = _1971 + 1u;
        _2026 = _1493;
        _1971 = _1474;
        continue;
    }
    uvec3 _842 = uvec3(_793 + ivec3(0, 1, 1));
    uint _1509 = _842.z;
    uint _1515 = _1509 + (_1509 << 10u);
    uint _1517 = _1515 ^ (_1515 >> 6u);
    uint _1519 = _1517 + (_1517 << 3u);
    uint _1521 = _1519 ^ (_1519 >> 11u);
    uint _1529 = (((_842.y * 1664525u) + (_1521 + (_1521 << 15u))) + 1013904223u) * 1664525u;
    uint _1531 = _1529 ^ (_1529 >> 11u);
    uint _1534 = _1531 ^ ((_1531 << 7u) & 2636928640u);
    uint _1537 = _1534 ^ ((_1534 << 15u) & 4022730752u);
    uint _1545 = (((_842.x * 1664525u) + (_1537 ^ (_1537 >> 18u))) + 1013904223u) * 1664525u;
    uint _1547 = _1545 ^ (_1545 >> 11u);
    uint _1550 = _1547 ^ ((_1547 << 7u) & 2636928640u);
    uint _1553 = _1550 ^ ((_1550 << 15u) & 4022730752u);
    uint _1555 = _1553 ^ (_1553 >> 18u);
    uint _1574;
    uint _1593;
    vec2 _788;
    uint _1978 = 0u;
    uint _2025 = _1555;
    for (;;)
    {
        if (!(_1978 < 2u))
        {
            break;
        }
        uint _1585 = _2025 + (_2025 << 10u);
        uint _1587 = _1585 ^ (_1585 >> 6u);
        uint _1589 = _1587 + (_1587 << 3u);
        uint _1591 = _1589 ^ (_1589 >> 11u);
        _1593 = _1591 + (_1591 << 15u);
        _788[_1978] = uintBitsToFloat((_2025 & 8388607u) | 1065353216u) - 1.0;
        _1574 = _1978 + 1u;
        _2025 = _1593;
        _1978 = _1574;
        continue;
    }
    uvec3 _850 = uvec3(_793 + ivec3(1));
    uint _1609 = _850.z;
    uint _1615 = _1609 + (_1609 << 10u);
    uint _1617 = _1615 ^ (_1615 >> 6u);
    uint _1619 = _1617 + (_1617 << 3u);
    uint _1621 = _1619 ^ (_1619 >> 11u);
    uint _1629 = (((_850.y * 1664525u) + (_1621 + (_1621 << 15u))) + 1013904223u) * 1664525u;
    uint _1631 = _1629 ^ (_1629 >> 11u);
    uint _1634 = _1631 ^ ((_1631 << 7u) & 2636928640u);
    uint _1637 = _1634 ^ ((_1634 << 15u) & 4022730752u);
    uint _1645 = (((_850.x * 1664525u) + (_1637 ^ (_1637 >> 18u))) + 1013904223u) * 1664525u;
    uint _1647 = _1645 ^ (_1645 >> 11u);
    uint _1650 = _1647 ^ ((_1647 << 7u) & 2636928640u);
    uint _1653 = _1650 ^ ((_1650 << 15u) & 4022730752u);
    uint _1655 = _1653 ^ (_1653 >> 18u);
    uint _1674;
    uint _1693;
    vec2 _789;
    uint _1986 = 0u;
    uint _2024 = _1655;
    for (;;)
    {
        if (!(_1986 < 2u))
        {
            break;
        }
        uint _1685 = _2024 + (_2024 << 10u);
        uint _1687 = _1685 ^ (_1685 >> 6u);
        uint _1689 = _1687 + (_1687 << 3u);
        uint _1691 = _1689 ^ (_1689 >> 11u);
        _1693 = _1691 + (_1691 << 15u);
        _789[_1986] = uintBitsToFloat((_2024 & 8388607u) | 1065353216u) - 1.0;
        _1674 = _1986 + 1u;
        _2024 = _1693;
        _1986 = _1674;
        continue;
    }
    vec3 _1705 = (_794 * _794) * (vec3(3.0) - (vec3(2.0) * _794));
    float _858 = _1705.x;
    float _859 = 1.0 - _858;
    float _861 = _1705.y;
    float _862 = 1.0 - _861;
    float _864 = _1705.z;
    float _865 = 1.0 - _864;
    vec2 _772 = clamp((((((((((((_782 * _859) * _862) * _865) + (((_783 * _858) * _862) * _865)) + (((_784 * _859) * _861) * _865)) + (((_785 * _858) * _861) * _865)) + (((_786 * _859) * _862) * _864)) + (((_787 * _858) * _862) * _864)) + (((_788 * _859) * _861) * _864)) + (((_789 * _858) * _861) * _864)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
    vec3 pos_ws = _727 + (vec3(_772.x, 0.0, _772.y) * 0.0599999986588954925537109375);
    bool _1715 = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].wall_slot_is_wooden_packed & 2147483648u) != 0u;
    int _2035 = _1715 ? 1536 : 512;
    vec2 _536 = unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].wallspace_x_range_packed);
    uint _1762 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].wall_slot_is_wooden_packed & 2147483647u;
    uint _1775 = wall_identity_data_slot_wall_ids_1._member0[_1762] & 65535u;
    uint _1780 = _1775 ^ 7993234u;
    uint _1820 = _1780 + (_1780 << 10u);
    uint _1822 = _1820 ^ (_1820 >> 6u);
    uint _1824 = _1822 + (_1822 << 3u);
    uint _1826 = _1824 ^ (_1824 >> 11u);
    uint _1782 = _1775 ^ 3450234u;
    uint _1842 = _1782 + (_1782 << 10u);
    uint _1844 = _1842 ^ (_1842 >> 6u);
    uint _1846 = _1844 + (_1844 << 3u);
    uint _1848 = _1846 ^ (_1846 >> 11u);
    vec2 _1793 = (((vec2(mix(_536.x, _536.y, ((Vertex_Position.x / (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].mesh_size_x * 0.5)) * 0.5) + 0.5), pos_ws.y) * 0.100000001490116119384765625) * 0.699999988079071044921875) + vec2(float(_1775) * 0.20000000298023223876953125)) + vec2(uintBitsToFloat(((_1826 + (_1826 << 15u)) & 8388607u) | 1065353216u) - 1.0, uintBitsToFloat(((_1848 + (_1848 << 15u)) & 8388607u) | 1065353216u) - 1.0);
    uint _1796 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].seed ^ 292478890u;
    uint _1864 = _1796 + (_1796 << 10u);
    uint _1866 = _1864 ^ (_1864 >> 6u);
    uint _1868 = _1866 + (_1866 << 3u);
    uint _1870 = _1868 ^ (_1868 >> 11u);
    float _1878 = uintBitsToFloat(((_1870 + (_1870 << 15u)) & 8388607u) | 1065353216u) - 1.0;
    vec2 _1988;
    if (_1878 > 0.89999997615814208984375)
    {
        _1988 = _1793 * 3.0;
    }
    else
    {
        _1988 = _1793 + vec2(0.61000001430511474609375 * _1878);
    }
    vec2 _1989;
    if (int((_2035 & 512) != 0) == 1)
    {
        _1989 = _1988 * 2.2000000476837158203125;
    }
    else
    {
        _1989 = _1988;
    }
    vec2 _2002;
    if (_1715)
    {
        _2002 = Vertex_UV;
    }
    else
    {
        _2002 = _1989;
    }
    gl_Position = vec4(pos_ws, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_instance_seed = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].seed;
    entryPointParam_vs_main_vertex_normal_ws = vec4(Vertex_Normal, 0.0) * _764;
    entryPointParam_vs_main_vertex_position_ws = pos_ws.xyz;
    entryPointParam_vs_main_pos_ms = vec3(0.0);
    entryPointParam_vs_main_dir_ms = vec3(0.0);
    entryPointParam_vs_main_squish_factor = 0.0;
    entryPointParam_vs_main_offset_from_instance_transform = vec3(0.0);
    entryPointParam_vs_main_global_arch_height = 0.0;
    entryPointParam_vs_main_stone_foundation_clip_y = -100000.0;
    entryPointParam_vs_main_frag_wall_uv = _2002;
    entryPointParam_vs_main_color_id = int(wall_color_data_wall_color_ids_1._member0[_1762]);
    entryPointParam_vs_main_frag_position_ws_no_brick_depth_xz = vec2(100000.0);
    entryPointParam_vs_main_flags = _2035;
    entryPointParam_vs_main_instance_index = nani_instance_indirection_buffer._member0[_36];
    entryPointParam_vs_main_normal_matrix = _MatrixStorage_float3x3_ColMajornatural(vec3[](vec3(0.0), vec3(0.0), vec3(0.0)));
}

