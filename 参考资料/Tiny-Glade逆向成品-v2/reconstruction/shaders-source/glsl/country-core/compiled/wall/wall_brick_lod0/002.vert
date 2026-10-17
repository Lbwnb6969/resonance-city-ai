#version 460

struct _Array_natural_uint5
{
    uint data[5];
};

struct _Array_natural_uint3
{
    uint data[3];
};

struct _Array_natural_uint2
{
    uint data[2];
};

struct InstancedWallData_natural
{
    _Array_natural_uint5 transform_matrix_packed;
    _Array_natural_uint3 transform_translation;
    _Array_natural_uint2 sin_deform_y_packed;
    _Array_natural_uint3 arch_and_wallspace_packed;
    uint seed;
    uint source_id;
    uint flags;
};

struct _MatrixStorage_float3x3_ColMajornatural
{
    vec3 data[3];
};

layout(set = 6, binding = 0, std140) uniform CurrentView_natural
{
    uint index;
} current_view_extra;

layout(set = 0, binding = 2, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} material_data_instance_list;

layout(set = 0, binding = 1, std430) readonly buffer material_data_instanced_wall_data
{
    InstancedWallData_natural _member0[];
} material_data_instanced_wall_data_1;

layout(set = 0, binding = 0, std140) uniform MaterialData_natural
{
    uint use_highlight_draw_list;
} material_data;

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
layout(location = 1) in vec3 Vertex_Normal;
layout(location = 2) in int is_bevel;
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
    uint _105 = ((current_view_extra.index + 2u) * 2097152u) + uint(gl_InstanceIndex);
    vec2 _1182 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].sin_deform_y_packed.data[0]);
    vec2 _1184 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].sin_deform_y_packed.data[1]);
    uint _1189 = uint(int(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].seed & 3u)) & 3u;
    int _1192 = -int(_1189 & 1u);
    int _1197 = 1 - int((_1189 >> uint(1)) << uint(1));
    float _1199 = float((~_1192) & _1197);
    float _1201 = float(_1192 & _1197);
    vec4 _1203 = vec4(_1199, 0.0, -_1201, 0.0);
    vec4 _1205 = vec4(_1201, 0.0, _1199, 0.0);
    mat4 _1207 = mat4(_1203, vec4(0.0, 1.0, 0.0, 0.0), _1205, vec4(0.0, 0.0, 0.0, 1.0));
    vec2 _1220 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].transform_matrix_packed.data[1]);
    mat3x4 _1296 = transpose(mat4x3(vec3(unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].transform_matrix_packed.data[0]), _1220.x), vec3(_1220.y, unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].transform_matrix_packed.data[2])), vec3(unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].transform_matrix_packed.data[3]), unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].transform_matrix_packed.data[4]).x), vec3(uintBitsToFloat(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].transform_translation.data[0]), uintBitsToFloat(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].transform_translation.data[1]), uintBitsToFloat(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].transform_translation.data[2]))));
    mat3x4 _2752 = _1296;
    _2752[0].w = _1296[0].w;
    mat3x4 _2754 = _2752;
    _2754[1].w = _1296[1].w;
    mat3x4 _2756 = _2754;
    _2756[2].w = _1296[2].w;
    vec4 _340 = vec4(Vertex_Position, 1.0) * _1207;
    vec3 vertex_rotated = _340.xyz;
    int _349 = int(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].flags);
    mat3x4 _2765;
    if ((_349 & 32) != 0)
    {
        vec2 _1313 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].arch_and_wallspace_packed.data[0]);
        vec3 _424 = vec3(_2752[0].z, _2754[1].z, _2756[2].z) * mix(_1313.x, _1313.y, 0.5 - _340.x);
        mat3x4 _2758 = _2756;
        _2758[0].z = _424.x;
        _2758[1].z = _424.y;
        _2758[2].z = _424.z;
        _2765 = _2758;
    }
    else
    {
        _2765 = _2756;
    }
    int _2567;
    if (material_data.use_highlight_draw_list != 0u)
    {
        _2567 = _349 | 4096;
    }
    else
    {
        _2567 = _349;
    }
    vec3 _2569;
    if ((_2567 & 4) != 0)
    {
        uint _1336 = material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].seed + (material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].seed << 10u);
        uint _1338 = _1336 ^ (_1336 >> 6u);
        uint _1340 = _1338 + (_1338 << 3u);
        uint _1342 = _1340 ^ (_1340 >> 11u);
        float _2778 = ((uintBitsToFloat(((_1342 + (_1342 << 15u)) & 8388607u) | 1065353216u) - 1.0) > 0.89999997615814208984375) ? 1.0 : 1.10000002384185791015625;
        _2569 = mix(vec3(_2778, _2778, 1.0), vec3(1.0499999523162841796875), bvec3((_349 & 1) != 0));
    }
    else
    {
        _2569 = vec3(1.0);
    }
    vec3 multmult = _2569 * 0.949999988079071044921875;
    mat3x4 _527 = mat4(vec4(multmult.x, 0.0, 0.0, 0.0), vec4(0.0, multmult.y, 0.0, 0.0), vec4(0.0, 0.0, multmult.z, 0.0), vec4(0.0, 0.0, 0.0, 1.0)) * _2765;
    vec4 _531 = vec4(vec4(vertex_rotated, 1.0) * _527, 1.0);
    vec3 _533 = _531.xyz;
    vec3 _1353 = _533 * 0.4000000059604644775390625;
    ivec3 _1379 = ivec3(floor(_1353));
    vec3 _1380 = fract(_1353);
    uvec3 _1381 = uvec3(_1379);
    uint _1495 = _1381.z;
    uint _1501 = _1495 + (_1495 << 10u);
    uint _1503 = _1501 ^ (_1501 >> 6u);
    uint _1505 = _1503 + (_1503 << 3u);
    uint _1507 = _1505 ^ (_1505 >> 11u);
    uint _1515 = (((_1381.y * 1664525u) + (_1507 + (_1507 << 15u))) + 1013904223u) * 1664525u;
    uint _1517 = _1515 ^ (_1515 >> 11u);
    uint _1520 = _1517 ^ ((_1517 << 7u) & 2636928640u);
    uint _1523 = _1520 ^ ((_1520 << 15u) & 4022730752u);
    uint _1531 = (((_1381.x * 1664525u) + (_1523 ^ (_1523 >> 18u))) + 1013904223u) * 1664525u;
    uint _1533 = _1531 ^ (_1531 >> 11u);
    uint _1536 = _1533 ^ ((_1533 << 7u) & 2636928640u);
    uint _1539 = _1536 ^ ((_1536 << 15u) & 4022730752u);
    uint _1541 = _1539 ^ (_1539 >> 18u);
    uint _1560;
    uint _1579;
    vec2 _1368;
    uint _2577 = 0u;
    uint _2742 = _1541;
    for (;;)
    {
        if (!(_2577 < 2u))
        {
            break;
        }
        uint _1571 = _2742 + (_2742 << 10u);
        uint _1573 = _1571 ^ (_1571 >> 6u);
        uint _1575 = _1573 + (_1573 << 3u);
        uint _1577 = _1575 ^ (_1575 >> 11u);
        _1579 = _1577 + (_1577 << 15u);
        _1368[_2577] = uintBitsToFloat((_2742 & 8388607u) | 1065353216u) - 1.0;
        _1560 = _2577 + 1u;
        _2742 = _1579;
        _2577 = _1560;
        continue;
    }
    uvec3 _1390 = uvec3(_1379 + ivec3(1, 0, 0));
    uint _1595 = _1390.z;
    uint _1601 = _1595 + (_1595 << 10u);
    uint _1603 = _1601 ^ (_1601 >> 6u);
    uint _1605 = _1603 + (_1603 << 3u);
    uint _1607 = _1605 ^ (_1605 >> 11u);
    uint _1615 = (((_1390.y * 1664525u) + (_1607 + (_1607 << 15u))) + 1013904223u) * 1664525u;
    uint _1617 = _1615 ^ (_1615 >> 11u);
    uint _1620 = _1617 ^ ((_1617 << 7u) & 2636928640u);
    uint _1623 = _1620 ^ ((_1620 << 15u) & 4022730752u);
    uint _1631 = (((_1390.x * 1664525u) + (_1623 ^ (_1623 >> 18u))) + 1013904223u) * 1664525u;
    uint _1633 = _1631 ^ (_1631 >> 11u);
    uint _1636 = _1633 ^ ((_1633 << 7u) & 2636928640u);
    uint _1639 = _1636 ^ ((_1636 << 15u) & 4022730752u);
    uint _1641 = _1639 ^ (_1639 >> 18u);
    uint _1660;
    uint _1679;
    vec2 _1369;
    uint _2584 = 0u;
    uint _2741 = _1641;
    for (;;)
    {
        if (!(_2584 < 2u))
        {
            break;
        }
        uint _1671 = _2741 + (_2741 << 10u);
        uint _1673 = _1671 ^ (_1671 >> 6u);
        uint _1675 = _1673 + (_1673 << 3u);
        uint _1677 = _1675 ^ (_1675 >> 11u);
        _1679 = _1677 + (_1677 << 15u);
        _1369[_2584] = uintBitsToFloat((_2741 & 8388607u) | 1065353216u) - 1.0;
        _1660 = _2584 + 1u;
        _2741 = _1679;
        _2584 = _1660;
        continue;
    }
    uvec3 _1397 = uvec3(_1379 + ivec3(0, 1, 0));
    uint _1695 = _1397.z;
    uint _1701 = _1695 + (_1695 << 10u);
    uint _1703 = _1701 ^ (_1701 >> 6u);
    uint _1705 = _1703 + (_1703 << 3u);
    uint _1707 = _1705 ^ (_1705 >> 11u);
    uint _1715 = (((_1397.y * 1664525u) + (_1707 + (_1707 << 15u))) + 1013904223u) * 1664525u;
    uint _1717 = _1715 ^ (_1715 >> 11u);
    uint _1720 = _1717 ^ ((_1717 << 7u) & 2636928640u);
    uint _1723 = _1720 ^ ((_1720 << 15u) & 4022730752u);
    uint _1731 = (((_1397.x * 1664525u) + (_1723 ^ (_1723 >> 18u))) + 1013904223u) * 1664525u;
    uint _1733 = _1731 ^ (_1731 >> 11u);
    uint _1736 = _1733 ^ ((_1733 << 7u) & 2636928640u);
    uint _1739 = _1736 ^ ((_1736 << 15u) & 4022730752u);
    uint _1741 = _1739 ^ (_1739 >> 18u);
    uint _1760;
    uint _1779;
    vec2 _1370;
    uint _2592 = 0u;
    uint _2740 = _1741;
    for (;;)
    {
        if (!(_2592 < 2u))
        {
            break;
        }
        uint _1771 = _2740 + (_2740 << 10u);
        uint _1773 = _1771 ^ (_1771 >> 6u);
        uint _1775 = _1773 + (_1773 << 3u);
        uint _1777 = _1775 ^ (_1775 >> 11u);
        _1779 = _1777 + (_1777 << 15u);
        _1370[_2592] = uintBitsToFloat((_2740 & 8388607u) | 1065353216u) - 1.0;
        _1760 = _2592 + 1u;
        _2740 = _1779;
        _2592 = _1760;
        continue;
    }
    uvec3 _1405 = uvec3(_1379 + ivec3(1, 1, 0));
    uint _1795 = _1405.z;
    uint _1801 = _1795 + (_1795 << 10u);
    uint _1803 = _1801 ^ (_1801 >> 6u);
    uint _1805 = _1803 + (_1803 << 3u);
    uint _1807 = _1805 ^ (_1805 >> 11u);
    uint _1815 = (((_1405.y * 1664525u) + (_1807 + (_1807 << 15u))) + 1013904223u) * 1664525u;
    uint _1817 = _1815 ^ (_1815 >> 11u);
    uint _1820 = _1817 ^ ((_1817 << 7u) & 2636928640u);
    uint _1823 = _1820 ^ ((_1820 << 15u) & 4022730752u);
    uint _1831 = (((_1405.x * 1664525u) + (_1823 ^ (_1823 >> 18u))) + 1013904223u) * 1664525u;
    uint _1833 = _1831 ^ (_1831 >> 11u);
    uint _1836 = _1833 ^ ((_1833 << 7u) & 2636928640u);
    uint _1839 = _1836 ^ ((_1836 << 15u) & 4022730752u);
    uint _1841 = _1839 ^ (_1839 >> 18u);
    uint _1860;
    uint _1879;
    vec2 _1371;
    uint _2601 = 0u;
    uint _2739 = _1841;
    for (;;)
    {
        if (!(_2601 < 2u))
        {
            break;
        }
        uint _1871 = _2739 + (_2739 << 10u);
        uint _1873 = _1871 ^ (_1871 >> 6u);
        uint _1875 = _1873 + (_1873 << 3u);
        uint _1877 = _1875 ^ (_1875 >> 11u);
        _1879 = _1877 + (_1877 << 15u);
        _1371[_2601] = uintBitsToFloat((_2739 & 8388607u) | 1065353216u) - 1.0;
        _1860 = _2601 + 1u;
        _2739 = _1879;
        _2601 = _1860;
        continue;
    }
    uvec3 _1412 = uvec3(_1379 + ivec3(0, 0, 1));
    uint _1895 = _1412.z;
    uint _1901 = _1895 + (_1895 << 10u);
    uint _1903 = _1901 ^ (_1901 >> 6u);
    uint _1905 = _1903 + (_1903 << 3u);
    uint _1907 = _1905 ^ (_1905 >> 11u);
    uint _1915 = (((_1412.y * 1664525u) + (_1907 + (_1907 << 15u))) + 1013904223u) * 1664525u;
    uint _1917 = _1915 ^ (_1915 >> 11u);
    uint _1920 = _1917 ^ ((_1917 << 7u) & 2636928640u);
    uint _1923 = _1920 ^ ((_1920 << 15u) & 4022730752u);
    uint _1931 = (((_1412.x * 1664525u) + (_1923 ^ (_1923 >> 18u))) + 1013904223u) * 1664525u;
    uint _1933 = _1931 ^ (_1931 >> 11u);
    uint _1936 = _1933 ^ ((_1933 << 7u) & 2636928640u);
    uint _1939 = _1936 ^ ((_1936 << 15u) & 4022730752u);
    uint _1941 = _1939 ^ (_1939 >> 18u);
    uint _1960;
    uint _1979;
    vec2 _1372;
    uint _2611 = 0u;
    uint _2738 = _1941;
    for (;;)
    {
        if (!(_2611 < 2u))
        {
            break;
        }
        uint _1971 = _2738 + (_2738 << 10u);
        uint _1973 = _1971 ^ (_1971 >> 6u);
        uint _1975 = _1973 + (_1973 << 3u);
        uint _1977 = _1975 ^ (_1975 >> 11u);
        _1979 = _1977 + (_1977 << 15u);
        _1372[_2611] = uintBitsToFloat((_2738 & 8388607u) | 1065353216u) - 1.0;
        _1960 = _2611 + 1u;
        _2738 = _1979;
        _2611 = _1960;
        continue;
    }
    uvec3 _1421 = uvec3(_1379 + ivec3(1, 0, 1));
    uint _1995 = _1421.z;
    uint _2001 = _1995 + (_1995 << 10u);
    uint _2003 = _2001 ^ (_2001 >> 6u);
    uint _2005 = _2003 + (_2003 << 3u);
    uint _2007 = _2005 ^ (_2005 >> 11u);
    uint _2015 = (((_1421.y * 1664525u) + (_2007 + (_2007 << 15u))) + 1013904223u) * 1664525u;
    uint _2017 = _2015 ^ (_2015 >> 11u);
    uint _2020 = _2017 ^ ((_2017 << 7u) & 2636928640u);
    uint _2023 = _2020 ^ ((_2020 << 15u) & 4022730752u);
    uint _2031 = (((_1421.x * 1664525u) + (_2023 ^ (_2023 >> 18u))) + 1013904223u) * 1664525u;
    uint _2033 = _2031 ^ (_2031 >> 11u);
    uint _2036 = _2033 ^ ((_2033 << 7u) & 2636928640u);
    uint _2039 = _2036 ^ ((_2036 << 15u) & 4022730752u);
    uint _2041 = _2039 ^ (_2039 >> 18u);
    uint _2060;
    uint _2079;
    vec2 _1373;
    uint _2622 = 0u;
    uint _2737 = _2041;
    for (;;)
    {
        if (!(_2622 < 2u))
        {
            break;
        }
        uint _2071 = _2737 + (_2737 << 10u);
        uint _2073 = _2071 ^ (_2071 >> 6u);
        uint _2075 = _2073 + (_2073 << 3u);
        uint _2077 = _2075 ^ (_2075 >> 11u);
        _2079 = _2077 + (_2077 << 15u);
        _1373[_2622] = uintBitsToFloat((_2737 & 8388607u) | 1065353216u) - 1.0;
        _2060 = _2622 + 1u;
        _2737 = _2079;
        _2622 = _2060;
        continue;
    }
    uvec3 _1428 = uvec3(_1379 + ivec3(0, 1, 1));
    uint _2095 = _1428.z;
    uint _2101 = _2095 + (_2095 << 10u);
    uint _2103 = _2101 ^ (_2101 >> 6u);
    uint _2105 = _2103 + (_2103 << 3u);
    uint _2107 = _2105 ^ (_2105 >> 11u);
    uint _2115 = (((_1428.y * 1664525u) + (_2107 + (_2107 << 15u))) + 1013904223u) * 1664525u;
    uint _2117 = _2115 ^ (_2115 >> 11u);
    uint _2120 = _2117 ^ ((_2117 << 7u) & 2636928640u);
    uint _2123 = _2120 ^ ((_2120 << 15u) & 4022730752u);
    uint _2131 = (((_1428.x * 1664525u) + (_2123 ^ (_2123 >> 18u))) + 1013904223u) * 1664525u;
    uint _2133 = _2131 ^ (_2131 >> 11u);
    uint _2136 = _2133 ^ ((_2133 << 7u) & 2636928640u);
    uint _2139 = _2136 ^ ((_2136 << 15u) & 4022730752u);
    uint _2141 = _2139 ^ (_2139 >> 18u);
    uint _2160;
    uint _2179;
    vec2 _1374;
    uint _2634 = 0u;
    uint _2736 = _2141;
    for (;;)
    {
        if (!(_2634 < 2u))
        {
            break;
        }
        uint _2171 = _2736 + (_2736 << 10u);
        uint _2173 = _2171 ^ (_2171 >> 6u);
        uint _2175 = _2173 + (_2173 << 3u);
        uint _2177 = _2175 ^ (_2175 >> 11u);
        _2179 = _2177 + (_2177 << 15u);
        _1374[_2634] = uintBitsToFloat((_2736 & 8388607u) | 1065353216u) - 1.0;
        _2160 = _2634 + 1u;
        _2736 = _2179;
        _2634 = _2160;
        continue;
    }
    uvec3 _1436 = uvec3(_1379 + ivec3(1));
    uint _2195 = _1436.z;
    uint _2201 = _2195 + (_2195 << 10u);
    uint _2203 = _2201 ^ (_2201 >> 6u);
    uint _2205 = _2203 + (_2203 << 3u);
    uint _2207 = _2205 ^ (_2205 >> 11u);
    uint _2215 = (((_1436.y * 1664525u) + (_2207 + (_2207 << 15u))) + 1013904223u) * 1664525u;
    uint _2217 = _2215 ^ (_2215 >> 11u);
    uint _2220 = _2217 ^ ((_2217 << 7u) & 2636928640u);
    uint _2223 = _2220 ^ ((_2220 << 15u) & 4022730752u);
    uint _2231 = (((_1436.x * 1664525u) + (_2223 ^ (_2223 >> 18u))) + 1013904223u) * 1664525u;
    uint _2233 = _2231 ^ (_2231 >> 11u);
    uint _2236 = _2233 ^ ((_2233 << 7u) & 2636928640u);
    uint _2239 = _2236 ^ ((_2236 << 15u) & 4022730752u);
    uint _2241 = _2239 ^ (_2239 >> 18u);
    uint _2260;
    uint _2279;
    vec2 _1375;
    uint _2647 = 0u;
    uint _2735 = _2241;
    for (;;)
    {
        if (!(_2647 < 2u))
        {
            break;
        }
        uint _2271 = _2735 + (_2735 << 10u);
        uint _2273 = _2271 ^ (_2271 >> 6u);
        uint _2275 = _2273 + (_2273 << 3u);
        uint _2277 = _2275 ^ (_2275 >> 11u);
        _2279 = _2277 + (_2277 << 15u);
        _1375[_2647] = uintBitsToFloat((_2735 & 8388607u) | 1065353216u) - 1.0;
        _2260 = _2647 + 1u;
        _2735 = _2279;
        _2647 = _2260;
        continue;
    }
    vec3 _2291 = (_1380 * _1380) * (vec3(3.0) - (vec3(2.0) * _1380));
    float _1444 = _2291.x;
    float _1445 = 1.0 - _1444;
    float _1447 = _2291.y;
    float _1448 = 1.0 - _1447;
    float _1450 = _2291.z;
    float _1451 = 1.0 - _1450;
    vec2 _1358 = clamp((((((((((((_1368 * _1445) * _1448) * _1451) + (((_1369 * _1444) * _1448) * _1451)) + (((_1370 * _1445) * _1447) * _1451)) + (((_1371 * _1444) * _1447) * _1451)) + (((_1372 * _1445) * _1448) * _1450)) + (((_1373 * _1444) * _1448) * _1450)) + (((_1374 * _1445) * _1447) * _1450)) + (((_1375 * _1444) * _1447) * _1450)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
    vec3 _820 = _533 + (vec3(_1358.x, 0.0, _1358.y) * 0.0599999986588954925537109375);
    vec4 _2559 = _531;
    _2559.x = _820.x;
    _2559.z = _820.z;
    vec3 _828 = vec4(0.0, 0.0, 0.0, 1.0) * _527;
    float _2296 = _340.x - (-0.5);
    _2559.y = _820.y + mix(mix(_1182.x, _1182.y, _2296), mix(_1184.x, _1184.y, _2296), _340.y - (-0.5));
    vec2 _2332 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].arch_and_wallspace_packed.data[1]);
    mat3 _881 = mat3(_527[0].xyz, _527[1].xyz, _527[2].xyz);
    vec3 _2340 = vec3(1.0, 0.0, 0.0) * _881;
    vec3 _2341 = vec3(0.0, 1.0, 0.0) * _881;
    vec3 _2342 = vec3(0.0, 0.0, 1.0) * _881;
    vec3 _2345 = cross(_2340, _2341);
    vec3 _2348 = vec3(1.0 / dot(_2342, _2345));
    mat3 _904 = transpose(mat3(cross(_2341, _2342) * _2348, cross(_2342, _2340) * _2348, _2345 * _2348));
    vec3 _927 = (vec4(Vertex_Normal, 0.0) * _1207).xyz * _904;
    bool _931 = is_bevel != 0;
    int _2667;
    if (_931)
    {
        _2667 = _2567 | 256;
    }
    else
    {
        _2667 = _2567;
    }
    int _2670;
    if (material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].seed < 10u)
    {
        _2670 = _2667 | 512;
    }
    else
    {
        _2670 = _2667;
    }
    mat3 _977 = mat3(_1203.xyz, vec3(0.0, 1.0, 0.0), _1205.xyz);
    vec3 _978 = _977 * vertex_rotated;
    vec4 _2357 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    vec3 camera_offset_ws = (_2357.xyz / vec3(_2357.w)) - _828;
    vec3 _998 = _977 * (_904 * camera_offset_ws);
    mat3 _1011 = _977 * _904;
    vec2 _2378 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].arch_and_wallspace_packed.data[0]);
    float _2671;
    if (_2296 < 0.5)
    {
        _2671 = mix(_2378.x, _2378.y, _2296 * 2.0);
    }
    else
    {
        _2671 = mix(_2378.y, _2332.x, (_2296 * 2.0) - 1.0);
    }
    bool _1035 = (_2670 & 32) != 0;
    vec2 _2697;
    if (_1035)
    {
        vec2 _2675;
        if (_927.y > 0.89999997615814208984375)
        {
            _2675 = _2559.xz * 0.699999988079071044921875;
        }
        else
        {
            vec2 _2676;
            if (abs(_927.x) > 0.89999997615814208984375)
            {
                _2676 = _2559.zy * 0.699999988079071044921875;
            }
            else
            {
                _2676 = _2559.xy * 0.699999988079071044921875;
            }
            _2675 = _2676;
        }
        vec2 _2674;
        if (_931)
        {
            _2674 = vec2(_2332.y);
        }
        else
        {
            _2674 = _2675;
        }
        uint _2390 = material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].seed + (material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].seed << 10u);
        uint _2392 = _2390 ^ (_2390 >> 6u);
        uint _2394 = _2392 + (_2392 << 3u);
        uint _2396 = _2394 ^ (_2394 >> 11u);
        _2697 = (_2674 * 0.300000011920928955078125) + vec2(uintBitsToFloat(((_2396 + (_2396 << 15u)) & 8388607u) | 1065353216u) - 1.0);
    }
    else
    {
        _2697 = vec2(0.0);
    }
    gl_Position = _2559 * current_view.world_to_sample;
    entryPointParam_vs_main_instance_seed = material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_105]].seed & 65535u;
    entryPointParam_vs_main_vertex_normal_ws = _927;
    entryPointParam_vs_main_vertex_position_ws = _2559.xyz;
    entryPointParam_vs_main_pos_ms = _978;
    entryPointParam_vs_main_dir_ms = normalize(_978 - _998);
    entryPointParam_vs_main_squish_factor = length(camera_offset_ws) / length(_998);
    entryPointParam_vs_main_offset_from_instance_transform = vec3(0.0);
    entryPointParam_vs_main_global_arch_height = _1035 ? (-100.0) : _2671;
    entryPointParam_vs_main_stone_foundation_clip_y = -100000.0;
    entryPointParam_vs_main_frag_wall_uv = _2697;
    entryPointParam_vs_main_color_id = 0;
    entryPointParam_vs_main_frag_position_ws_no_brick_depth_xz = vec4(_828, 1.0).xz;
    entryPointParam_vs_main_flags = _2670;
    entryPointParam_vs_main_instance_index = material_data_instance_list._member0[_105];
    vec3 _1135 = _1011[0];
    vec3 _1139 = _1011[1];
    vec3 _1143 = _1011[2];
    entryPointParam_vs_main_normal_matrix = _MatrixStorage_float3x3_ColMajornatural(vec3[](vec3(_1135.x, _1139.x, _1143.x), vec3(_1135.y, _1139.y, _1143.y), vec3(_1135.z, _1139.z, _1143.z)));
}

