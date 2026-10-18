#version 460
#extension GL_EXT_buffer_reference2 : require
#extension GL_EXT_buffer_reference_uvec2 : require

layout(buffer_reference) buffer uvec4Pointer;

struct StoneFoundationSurfaceInstanceData_natural
{
    vec4 bounding_sphere;
    uint wall_slot_id;
    float wall_length;
    uint blend_uv_seam;
    uint quad_count;
    uvec4Pointer verts_gpu_address;
    int row_stride;
    uvec4Pointer stone_foundation_cutouts_gpu_address;
    uint stone_foundation_cutout_count;
    uint is_inner_surface;
};

struct _MatrixStorage_float3x3_ColMajornatural
{
    vec3 data[3];
};

struct _1959
{
    int _m0;
    int _m1;
};

layout(buffer_reference, buffer_reference_align = 4) buffer uvec4Pointer
{
    uvec4 value;
};

layout(set = 10, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 0, std430) readonly buffer material_data_nani_instance_data
{
    StoneFoundationSurfaceInstanceData_natural _member0[];
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

layout(location = 0) flat out uint entryPointParam_vs_main_instance_index;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 3) out vec2 entryPointParam_vs_main_frag_wall_space;
layout(location = 4) out vec2 entryPointParam_vs_main_frag_curve_uv;
layout(location = 5) out vec3 entryPointParam_vs_main_tangent;
layout(location = 6) out vec3 entryPointParam_vs_main_bitangent;
layout(location = 7) out vec3 entryPointParam_vs_main_frag_barycentric;
layout(location = 8) out _MatrixStorage_float3x3_ColMajornatural entryPointParam_vs_main_frag_tangent_to_world;

void main()
{
    do
    {
        uint _32 = uint(gl_InstanceIndex);
        uint _109 = uint(gl_VertexIndex - gl_BaseVertex);
        uint grid_x = _109 & 65535u;
        uint grid_y = _109 >> 16u;
        if (grid_x > material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_32]].quad_count)
        {
            gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
            entryPointParam_vs_main_instance_index = 0u;
            entryPointParam_vs_main_frag_normal_ws = vec3(0.0);
            entryPointParam_vs_main_frag_position_ws = vec3(0.0);
            entryPointParam_vs_main_frag_wall_space = vec2(0.0);
            entryPointParam_vs_main_frag_curve_uv = vec2(0.0);
            entryPointParam_vs_main_tangent = vec3(0.0);
            entryPointParam_vs_main_bitangent = vec3(0.0);
            entryPointParam_vs_main_frag_barycentric = vec3(0.0);
            entryPointParam_vs_main_frag_tangent_to_world = _MatrixStorage_float3x3_ColMajornatural(vec3[](vec3(0.0), vec3(0.0), vec3(0.0)));
            break;
        }
        int _231 = 48 * (int(grid_x) + (int(grid_y) * material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_32]].row_stride));
        uvec2 _809 = uvec2(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_32]].verts_gpu_address);
        uvec2 _813;
        _813.x = _809.x;
        _813.y = _809.y;
        uint _837 = _813.x + uint(_231);
        uvec4Pointer _860 = uvec4Pointer(uvec2(_837, (_813.y + uint(_231 >> 31)) + uint(_837 < _813.x)));
        uvec2 _1961 = uvec2(_860);
        uint _1962 = _1961.x;
        _1959 _1964;
        imulExtended(0, 16, _1964._m1, _1964._m0);
        uint _1969 = _1962 + uint(_1964._m0);
        uvec4 vdata0 = uvec4Pointer(uvec2(_1969, (_1961.y + uint(_1964._m1)) + uint(_1969 < _1962))).value;
        uvec2 _1975 = uvec2(_860);
        uint _1976 = _1975.x;
        _1959 _1978;
        imulExtended(1, 16, _1978._m1, _1978._m0);
        uint _1983 = _1976 + uint(_1978._m0);
        uvec4 vdata1 = uvec4Pointer(uvec2(_1983, (_1975.y + uint(_1978._m1)) + uint(_1983 < _1976))).value;
        uvec2 _1989 = uvec2(_860);
        uint _1990 = _1989.x;
        _1959 _1992;
        imulExtended(2, 16, _1992._m1, _1992._m0);
        uint _1997 = _1990 + uint(_1992._m0);
        uvec4 vdata2 = uvec4Pointer(uvec2(_1997, (_1989.y + uint(_1992._m1)) + uint(_1997 < _1990))).value;
        vec3 _1863 = vec3(0.0);
        vec3 _354 = uintBitsToFloat(vdata1.xyz);
        vec4 _359 = vec4(uintBitsToFloat(vdata0.xyz), 1.0);
        vec4 pos_ws = _359;
        vec3 _362 = _359.xyz;
        vec3 _863 = _362 * 0.4000000059604644775390625;
        ivec3 _889 = ivec3(floor(_863));
        vec3 _890 = fract(_863);
        uvec3 _891 = uvec3(_889);
        uint _1005 = _891.z;
        uint _1011 = _1005 + (_1005 << 10u);
        uint _1013 = _1011 ^ (_1011 >> 6u);
        uint _1015 = _1013 + (_1013 << 3u);
        uint _1017 = _1015 ^ (_1015 >> 11u);
        uint _1025 = (((_891.y * 1664525u) + (_1017 + (_1017 << 15u))) + 1013904223u) * 1664525u;
        uint _1027 = _1025 ^ (_1025 >> 11u);
        uint _1030 = _1027 ^ ((_1027 << 7u) & 2636928640u);
        uint _1033 = _1030 ^ ((_1030 << 15u) & 4022730752u);
        uint _1041 = (((_891.x * 1664525u) + (_1033 ^ (_1033 >> 18u))) + 1013904223u) * 1664525u;
        uint _1043 = _1041 ^ (_1041 >> 11u);
        uint _1046 = _1043 ^ ((_1043 << 7u) & 2636928640u);
        uint _1049 = _1046 ^ ((_1046 << 15u) & 4022730752u);
        uint _1051 = _1049 ^ (_1049 >> 18u);
        uint _1070;
        uint _1089;
        vec2 _878;
        uint _1899 = 0u;
        uint _1952 = _1051;
        for (;;)
        {
            if (!(_1899 < 2u))
            {
                break;
            }
            uint _1081 = _1952 + (_1952 << 10u);
            uint _1083 = _1081 ^ (_1081 >> 6u);
            uint _1085 = _1083 + (_1083 << 3u);
            uint _1087 = _1085 ^ (_1085 >> 11u);
            _1089 = _1087 + (_1087 << 15u);
            _878[_1899] = uintBitsToFloat((_1952 & 8388607u) | 1065353216u) - 1.0;
            _1070 = _1899 + 1u;
            _1952 = _1089;
            _1899 = _1070;
            continue;
        }
        uvec3 _900 = uvec3(_889 + ivec3(1, 0, 0));
        uint _1105 = _900.z;
        uint _1111 = _1105 + (_1105 << 10u);
        uint _1113 = _1111 ^ (_1111 >> 6u);
        uint _1115 = _1113 + (_1113 << 3u);
        uint _1117 = _1115 ^ (_1115 >> 11u);
        uint _1125 = (((_900.y * 1664525u) + (_1117 + (_1117 << 15u))) + 1013904223u) * 1664525u;
        uint _1127 = _1125 ^ (_1125 >> 11u);
        uint _1130 = _1127 ^ ((_1127 << 7u) & 2636928640u);
        uint _1133 = _1130 ^ ((_1130 << 15u) & 4022730752u);
        uint _1141 = (((_900.x * 1664525u) + (_1133 ^ (_1133 >> 18u))) + 1013904223u) * 1664525u;
        uint _1143 = _1141 ^ (_1141 >> 11u);
        uint _1146 = _1143 ^ ((_1143 << 7u) & 2636928640u);
        uint _1149 = _1146 ^ ((_1146 << 15u) & 4022730752u);
        uint _1151 = _1149 ^ (_1149 >> 18u);
        uint _1170;
        uint _1189;
        vec2 _879;
        uint _1901 = 0u;
        uint _1951 = _1151;
        for (;;)
        {
            if (!(_1901 < 2u))
            {
                break;
            }
            uint _1181 = _1951 + (_1951 << 10u);
            uint _1183 = _1181 ^ (_1181 >> 6u);
            uint _1185 = _1183 + (_1183 << 3u);
            uint _1187 = _1185 ^ (_1185 >> 11u);
            _1189 = _1187 + (_1187 << 15u);
            _879[_1901] = uintBitsToFloat((_1951 & 8388607u) | 1065353216u) - 1.0;
            _1170 = _1901 + 1u;
            _1951 = _1189;
            _1901 = _1170;
            continue;
        }
        uvec3 _907 = uvec3(_889 + ivec3(0, 1, 0));
        uint _1205 = _907.z;
        uint _1211 = _1205 + (_1205 << 10u);
        uint _1213 = _1211 ^ (_1211 >> 6u);
        uint _1215 = _1213 + (_1213 << 3u);
        uint _1217 = _1215 ^ (_1215 >> 11u);
        uint _1225 = (((_907.y * 1664525u) + (_1217 + (_1217 << 15u))) + 1013904223u) * 1664525u;
        uint _1227 = _1225 ^ (_1225 >> 11u);
        uint _1230 = _1227 ^ ((_1227 << 7u) & 2636928640u);
        uint _1233 = _1230 ^ ((_1230 << 15u) & 4022730752u);
        uint _1241 = (((_907.x * 1664525u) + (_1233 ^ (_1233 >> 18u))) + 1013904223u) * 1664525u;
        uint _1243 = _1241 ^ (_1241 >> 11u);
        uint _1246 = _1243 ^ ((_1243 << 7u) & 2636928640u);
        uint _1249 = _1246 ^ ((_1246 << 15u) & 4022730752u);
        uint _1251 = _1249 ^ (_1249 >> 18u);
        uint _1270;
        uint _1289;
        vec2 _880;
        uint _1904 = 0u;
        uint _1950 = _1251;
        for (;;)
        {
            if (!(_1904 < 2u))
            {
                break;
            }
            uint _1281 = _1950 + (_1950 << 10u);
            uint _1283 = _1281 ^ (_1281 >> 6u);
            uint _1285 = _1283 + (_1283 << 3u);
            uint _1287 = _1285 ^ (_1285 >> 11u);
            _1289 = _1287 + (_1287 << 15u);
            _880[_1904] = uintBitsToFloat((_1950 & 8388607u) | 1065353216u) - 1.0;
            _1270 = _1904 + 1u;
            _1950 = _1289;
            _1904 = _1270;
            continue;
        }
        uvec3 _915 = uvec3(_889 + ivec3(1, 1, 0));
        uint _1305 = _915.z;
        uint _1311 = _1305 + (_1305 << 10u);
        uint _1313 = _1311 ^ (_1311 >> 6u);
        uint _1315 = _1313 + (_1313 << 3u);
        uint _1317 = _1315 ^ (_1315 >> 11u);
        uint _1325 = (((_915.y * 1664525u) + (_1317 + (_1317 << 15u))) + 1013904223u) * 1664525u;
        uint _1327 = _1325 ^ (_1325 >> 11u);
        uint _1330 = _1327 ^ ((_1327 << 7u) & 2636928640u);
        uint _1333 = _1330 ^ ((_1330 << 15u) & 4022730752u);
        uint _1341 = (((_915.x * 1664525u) + (_1333 ^ (_1333 >> 18u))) + 1013904223u) * 1664525u;
        uint _1343 = _1341 ^ (_1341 >> 11u);
        uint _1346 = _1343 ^ ((_1343 << 7u) & 2636928640u);
        uint _1349 = _1346 ^ ((_1346 << 15u) & 4022730752u);
        uint _1351 = _1349 ^ (_1349 >> 18u);
        uint _1370;
        uint _1389;
        vec2 _881;
        uint _1908 = 0u;
        uint _1949 = _1351;
        for (;;)
        {
            if (!(_1908 < 2u))
            {
                break;
            }
            uint _1381 = _1949 + (_1949 << 10u);
            uint _1383 = _1381 ^ (_1381 >> 6u);
            uint _1385 = _1383 + (_1383 << 3u);
            uint _1387 = _1385 ^ (_1385 >> 11u);
            _1389 = _1387 + (_1387 << 15u);
            _881[_1908] = uintBitsToFloat((_1949 & 8388607u) | 1065353216u) - 1.0;
            _1370 = _1908 + 1u;
            _1949 = _1389;
            _1908 = _1370;
            continue;
        }
        uvec3 _922 = uvec3(_889 + ivec3(0, 0, 1));
        uint _1405 = _922.z;
        uint _1411 = _1405 + (_1405 << 10u);
        uint _1413 = _1411 ^ (_1411 >> 6u);
        uint _1415 = _1413 + (_1413 << 3u);
        uint _1417 = _1415 ^ (_1415 >> 11u);
        uint _1425 = (((_922.y * 1664525u) + (_1417 + (_1417 << 15u))) + 1013904223u) * 1664525u;
        uint _1427 = _1425 ^ (_1425 >> 11u);
        uint _1430 = _1427 ^ ((_1427 << 7u) & 2636928640u);
        uint _1433 = _1430 ^ ((_1430 << 15u) & 4022730752u);
        uint _1441 = (((_922.x * 1664525u) + (_1433 ^ (_1433 >> 18u))) + 1013904223u) * 1664525u;
        uint _1443 = _1441 ^ (_1441 >> 11u);
        uint _1446 = _1443 ^ ((_1443 << 7u) & 2636928640u);
        uint _1449 = _1446 ^ ((_1446 << 15u) & 4022730752u);
        uint _1451 = _1449 ^ (_1449 >> 18u);
        uint _1470;
        uint _1489;
        vec2 _882;
        uint _1913 = 0u;
        uint _1948 = _1451;
        for (;;)
        {
            if (!(_1913 < 2u))
            {
                break;
            }
            uint _1481 = _1948 + (_1948 << 10u);
            uint _1483 = _1481 ^ (_1481 >> 6u);
            uint _1485 = _1483 + (_1483 << 3u);
            uint _1487 = _1485 ^ (_1485 >> 11u);
            _1489 = _1487 + (_1487 << 15u);
            _882[_1913] = uintBitsToFloat((_1948 & 8388607u) | 1065353216u) - 1.0;
            _1470 = _1913 + 1u;
            _1948 = _1489;
            _1913 = _1470;
            continue;
        }
        uvec3 _931 = uvec3(_889 + ivec3(1, 0, 1));
        uint _1505 = _931.z;
        uint _1511 = _1505 + (_1505 << 10u);
        uint _1513 = _1511 ^ (_1511 >> 6u);
        uint _1515 = _1513 + (_1513 << 3u);
        uint _1517 = _1515 ^ (_1515 >> 11u);
        uint _1525 = (((_931.y * 1664525u) + (_1517 + (_1517 << 15u))) + 1013904223u) * 1664525u;
        uint _1527 = _1525 ^ (_1525 >> 11u);
        uint _1530 = _1527 ^ ((_1527 << 7u) & 2636928640u);
        uint _1533 = _1530 ^ ((_1530 << 15u) & 4022730752u);
        uint _1541 = (((_931.x * 1664525u) + (_1533 ^ (_1533 >> 18u))) + 1013904223u) * 1664525u;
        uint _1543 = _1541 ^ (_1541 >> 11u);
        uint _1546 = _1543 ^ ((_1543 << 7u) & 2636928640u);
        uint _1549 = _1546 ^ ((_1546 << 15u) & 4022730752u);
        uint _1551 = _1549 ^ (_1549 >> 18u);
        uint _1570;
        uint _1589;
        vec2 _883;
        uint _1919 = 0u;
        uint _1947 = _1551;
        for (;;)
        {
            if (!(_1919 < 2u))
            {
                break;
            }
            uint _1581 = _1947 + (_1947 << 10u);
            uint _1583 = _1581 ^ (_1581 >> 6u);
            uint _1585 = _1583 + (_1583 << 3u);
            uint _1587 = _1585 ^ (_1585 >> 11u);
            _1589 = _1587 + (_1587 << 15u);
            _883[_1919] = uintBitsToFloat((_1947 & 8388607u) | 1065353216u) - 1.0;
            _1570 = _1919 + 1u;
            _1947 = _1589;
            _1919 = _1570;
            continue;
        }
        uvec3 _938 = uvec3(_889 + ivec3(0, 1, 1));
        uint _1605 = _938.z;
        uint _1611 = _1605 + (_1605 << 10u);
        uint _1613 = _1611 ^ (_1611 >> 6u);
        uint _1615 = _1613 + (_1613 << 3u);
        uint _1617 = _1615 ^ (_1615 >> 11u);
        uint _1625 = (((_938.y * 1664525u) + (_1617 + (_1617 << 15u))) + 1013904223u) * 1664525u;
        uint _1627 = _1625 ^ (_1625 >> 11u);
        uint _1630 = _1627 ^ ((_1627 << 7u) & 2636928640u);
        uint _1633 = _1630 ^ ((_1630 << 15u) & 4022730752u);
        uint _1641 = (((_938.x * 1664525u) + (_1633 ^ (_1633 >> 18u))) + 1013904223u) * 1664525u;
        uint _1643 = _1641 ^ (_1641 >> 11u);
        uint _1646 = _1643 ^ ((_1643 << 7u) & 2636928640u);
        uint _1649 = _1646 ^ ((_1646 << 15u) & 4022730752u);
        uint _1651 = _1649 ^ (_1649 >> 18u);
        uint _1670;
        uint _1689;
        vec2 _884;
        uint _1926 = 0u;
        uint _1946 = _1651;
        for (;;)
        {
            if (!(_1926 < 2u))
            {
                break;
            }
            uint _1681 = _1946 + (_1946 << 10u);
            uint _1683 = _1681 ^ (_1681 >> 6u);
            uint _1685 = _1683 + (_1683 << 3u);
            uint _1687 = _1685 ^ (_1685 >> 11u);
            _1689 = _1687 + (_1687 << 15u);
            _884[_1926] = uintBitsToFloat((_1946 & 8388607u) | 1065353216u) - 1.0;
            _1670 = _1926 + 1u;
            _1946 = _1689;
            _1926 = _1670;
            continue;
        }
        uvec3 _946 = uvec3(_889 + ivec3(1));
        uint _1705 = _946.z;
        uint _1711 = _1705 + (_1705 << 10u);
        uint _1713 = _1711 ^ (_1711 >> 6u);
        uint _1715 = _1713 + (_1713 << 3u);
        uint _1717 = _1715 ^ (_1715 >> 11u);
        uint _1725 = (((_946.y * 1664525u) + (_1717 + (_1717 << 15u))) + 1013904223u) * 1664525u;
        uint _1727 = _1725 ^ (_1725 >> 11u);
        uint _1730 = _1727 ^ ((_1727 << 7u) & 2636928640u);
        uint _1733 = _1730 ^ ((_1730 << 15u) & 4022730752u);
        uint _1741 = (((_946.x * 1664525u) + (_1733 ^ (_1733 >> 18u))) + 1013904223u) * 1664525u;
        uint _1743 = _1741 ^ (_1741 >> 11u);
        uint _1746 = _1743 ^ ((_1743 << 7u) & 2636928640u);
        uint _1749 = _1746 ^ ((_1746 << 15u) & 4022730752u);
        uint _1751 = _1749 ^ (_1749 >> 18u);
        uint _1770;
        uint _1789;
        vec2 _885;
        uint _1934 = 0u;
        uint _1945 = _1751;
        for (;;)
        {
            if (!(_1934 < 2u))
            {
                break;
            }
            uint _1781 = _1945 + (_1945 << 10u);
            uint _1783 = _1781 ^ (_1781 >> 6u);
            uint _1785 = _1783 + (_1783 << 3u);
            uint _1787 = _1785 ^ (_1785 >> 11u);
            _1789 = _1787 + (_1787 << 15u);
            _885[_1934] = uintBitsToFloat((_1945 & 8388607u) | 1065353216u) - 1.0;
            _1770 = _1934 + 1u;
            _1945 = _1789;
            _1934 = _1770;
            continue;
        }
        vec3 _1801 = (_890 * _890) * (vec3(3.0) - (vec3(2.0) * _890));
        float _954 = _1801.x;
        float _955 = 1.0 - _954;
        float _957 = _1801.y;
        float _958 = 1.0 - _957;
        float _960 = _1801.z;
        float _961 = 1.0 - _960;
        vec2 _868 = clamp((((((((((((_878 * _955) * _958) * _961) + (((_879 * _954) * _958) * _961)) + (((_880 * _955) * _957) * _961)) + (((_881 * _954) * _957) * _961)) + (((_882 * _955) * _958) * _960)) + (((_883 * _954) * _958) * _960)) + (((_884 * _955) * _957) * _960)) + (((_885 * _954) * _957) * _960)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
        vec3 _682 = _362 + (vec3(_868.x, 0.0, _868.y) * 0.0599999986588954925537109375);
        pos_ws.x = _682.x;
        pos_ws.y = _682.y;
        pos_ws.z = _682.z;
        vec3 _713 = cross(_354, vec3(0.0, 1.0, 0.0));
        vec3 _716 = normalize(vec3(0.0, 1.0, 0.0));
        mat3 _719 = transpose(mat3(normalize(_713), _716, normalize(_354)));
        uint _1935;
        if (grid_y == 0u)
        {
            _1935 = grid_x % 3u;
        }
        else
        {
            _1935 = (grid_x + 2u) % 3u;
        }
        _1863[_1935] = 1.0;
        gl_Position = pos_ws * current_view.world_to_sample;
        entryPointParam_vs_main_instance_index = nani_instance_indirection_buffer._member0[_32];
        entryPointParam_vs_main_frag_normal_ws = _354;
        entryPointParam_vs_main_frag_position_ws = pos_ws.xyz;
        entryPointParam_vs_main_frag_wall_space = uintBitsToFloat(vdata2.xy);
        entryPointParam_vs_main_frag_curve_uv = uintBitsToFloat(vdata2.zw);
        entryPointParam_vs_main_tangent = _713;
        entryPointParam_vs_main_bitangent = vec3(0.0, 1.0, 0.0);
        entryPointParam_vs_main_frag_barycentric = _1863;
        vec3 _759 = _719[0];
        vec3 _763 = _719[1];
        vec3 _767 = _719[2];
        entryPointParam_vs_main_frag_tangent_to_world = _MatrixStorage_float3x3_ColMajornatural(vec3[](vec3(_759.x, _763.x, _767.x), vec3(_759.y, _763.y, _767.y), vec3(_759.z, _763.z, _767.z)));
        break;
    } while(false);
}

