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

layout(set = 0, binding = 0, std140) uniform MaterialData_natural
{
    uint use_highlight_draw_list;
} material_data;

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
    uint _95 = ((current_view_extra.index + 2u) * 2097152u) + uint(gl_InstanceIndex);
    vec2 _1152 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].sin_deform_y_packed.data[0]);
    vec2 _1154 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].sin_deform_y_packed.data[1]);
    uint _1159 = uint(int(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].seed & 3u)) & 3u;
    int _1162 = -int(_1159 & 1u);
    int _1167 = 1 - int((_1159 >> uint(1)) << uint(1));
    float _1169 = float((~_1162) & _1167);
    float _1171 = float(_1162 & _1167);
    vec2 _1190 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].transform_matrix_packed.data[1]);
    mat3x4 _1266 = transpose(mat4x3(vec3(unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].transform_matrix_packed.data[0]), _1190.x), vec3(_1190.y, unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].transform_matrix_packed.data[2])), vec3(unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].transform_matrix_packed.data[3]), unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].transform_matrix_packed.data[4]).x), vec3(uintBitsToFloat(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].transform_translation.data[0]), uintBitsToFloat(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].transform_translation.data[1]), uintBitsToFloat(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].transform_translation.data[2]))));
    mat3x4 _2662 = _1266;
    _2662[0].w = _1266[0].w;
    mat3x4 _2664 = _2662;
    _2664[1].w = _1266[1].w;
    mat3x4 _2666 = _2664;
    _2666[2].w = _1266[2].w;
    uint _331 = uint(gl_VertexIndex - gl_BaseVertex);
    uvec3 coord = uvec3((_331 & 4u) >> uint(2), (_331 & 2u) >> uint(1), _331 & 1u);
    vec4 _1271 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    vec3 _1275 = _1271.xyz / vec3(_1271.w);
    vec3 Vertex_Position = vec3(mix(uvec3(1u) - coord, coord, greaterThan(mat3(_2662[0].xyz, _2664[1].xyz, _2666[2].xyz) * (_1275 - (vec4(0.0, 0.0, 0.0, 1.0) * _2666)), vec3(0.0)))) - vec3(0.5);
    int _390 = int(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].flags);
    mat3x4 _2675;
    if ((_390 & 32) != 0)
    {
        vec2 _1292 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].arch_and_wallspace_packed.data[0]);
        vec3 _463 = vec3(_2662[0].z, _2664[1].z, _2666[2].z) * mix(_1292.x, _1292.y, 0.5 - Vertex_Position.x);
        mat3x4 _2668 = _2666;
        _2668[0].z = _463.x;
        _2668[1].z = _463.y;
        _2668[2].z = _463.z;
        _2675 = _2668;
    }
    else
    {
        _2675 = _2666;
    }
    int _2515;
    if (material_data.use_highlight_draw_list != 0u)
    {
        _2515 = _390 | 4096;
    }
    else
    {
        _2515 = _390;
    }
    vec3 _2517;
    if ((_2515 & 4) != 0)
    {
        uint _1315 = material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].seed + (material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].seed << 10u);
        uint _1317 = _1315 ^ (_1315 >> 6u);
        uint _1319 = _1317 + (_1317 << 3u);
        uint _1321 = _1319 ^ (_1319 >> 11u);
        float _2687 = ((uintBitsToFloat(((_1321 + (_1321 << 15u)) & 8388607u) | 1065353216u) - 1.0) > 0.89999997615814208984375) ? 1.0 : 1.10000002384185791015625;
        _2517 = mix(vec3(_2687, _2687, 1.0), vec3(1.0499999523162841796875), bvec3((_390 & 1) != 0));
    }
    else
    {
        _2517 = vec3(1.0);
    }
    vec3 multmult = _2517 * 0.949999988079071044921875;
    mat3x4 _566 = mat4(vec4(multmult.x, 0.0, 0.0, 0.0), vec4(0.0, multmult.y, 0.0, 0.0), vec4(0.0, 0.0, multmult.z, 0.0), vec4(0.0, 0.0, 0.0, 1.0)) * _2675;
    vec4 _570 = vec4(vec4(Vertex_Position, 1.0) * _566, 1.0);
    vec3 _572 = _570.xyz;
    vec3 _1332 = _572 * 0.4000000059604644775390625;
    ivec3 _1358 = ivec3(floor(_1332));
    vec3 _1359 = fract(_1332);
    uvec3 _1360 = uvec3(_1358);
    uint _1474 = _1360.z;
    uint _1480 = _1474 + (_1474 << 10u);
    uint _1482 = _1480 ^ (_1480 >> 6u);
    uint _1484 = _1482 + (_1482 << 3u);
    uint _1486 = _1484 ^ (_1484 >> 11u);
    uint _1494 = (((_1360.y * 1664525u) + (_1486 + (_1486 << 15u))) + 1013904223u) * 1664525u;
    uint _1496 = _1494 ^ (_1494 >> 11u);
    uint _1499 = _1496 ^ ((_1496 << 7u) & 2636928640u);
    uint _1502 = _1499 ^ ((_1499 << 15u) & 4022730752u);
    uint _1510 = (((_1360.x * 1664525u) + (_1502 ^ (_1502 >> 18u))) + 1013904223u) * 1664525u;
    uint _1512 = _1510 ^ (_1510 >> 11u);
    uint _1515 = _1512 ^ ((_1512 << 7u) & 2636928640u);
    uint _1518 = _1515 ^ ((_1515 << 15u) & 4022730752u);
    uint _1520 = _1518 ^ (_1518 >> 18u);
    uint _1539;
    uint _1558;
    vec2 _1347;
    uint _2525 = 0u;
    uint _2650 = _1520;
    for (;;)
    {
        if (!(_2525 < 2u))
        {
            break;
        }
        uint _1550 = _2650 + (_2650 << 10u);
        uint _1552 = _1550 ^ (_1550 >> 6u);
        uint _1554 = _1552 + (_1552 << 3u);
        uint _1556 = _1554 ^ (_1554 >> 11u);
        _1558 = _1556 + (_1556 << 15u);
        _1347[_2525] = uintBitsToFloat((_2650 & 8388607u) | 1065353216u) - 1.0;
        _1539 = _2525 + 1u;
        _2650 = _1558;
        _2525 = _1539;
        continue;
    }
    uvec3 _1369 = uvec3(_1358 + ivec3(1, 0, 0));
    uint _1574 = _1369.z;
    uint _1580 = _1574 + (_1574 << 10u);
    uint _1582 = _1580 ^ (_1580 >> 6u);
    uint _1584 = _1582 + (_1582 << 3u);
    uint _1586 = _1584 ^ (_1584 >> 11u);
    uint _1594 = (((_1369.y * 1664525u) + (_1586 + (_1586 << 15u))) + 1013904223u) * 1664525u;
    uint _1596 = _1594 ^ (_1594 >> 11u);
    uint _1599 = _1596 ^ ((_1596 << 7u) & 2636928640u);
    uint _1602 = _1599 ^ ((_1599 << 15u) & 4022730752u);
    uint _1610 = (((_1369.x * 1664525u) + (_1602 ^ (_1602 >> 18u))) + 1013904223u) * 1664525u;
    uint _1612 = _1610 ^ (_1610 >> 11u);
    uint _1615 = _1612 ^ ((_1612 << 7u) & 2636928640u);
    uint _1618 = _1615 ^ ((_1615 << 15u) & 4022730752u);
    uint _1620 = _1618 ^ (_1618 >> 18u);
    uint _1639;
    uint _1658;
    vec2 _1348;
    uint _2532 = 0u;
    uint _2649 = _1620;
    for (;;)
    {
        if (!(_2532 < 2u))
        {
            break;
        }
        uint _1650 = _2649 + (_2649 << 10u);
        uint _1652 = _1650 ^ (_1650 >> 6u);
        uint _1654 = _1652 + (_1652 << 3u);
        uint _1656 = _1654 ^ (_1654 >> 11u);
        _1658 = _1656 + (_1656 << 15u);
        _1348[_2532] = uintBitsToFloat((_2649 & 8388607u) | 1065353216u) - 1.0;
        _1639 = _2532 + 1u;
        _2649 = _1658;
        _2532 = _1639;
        continue;
    }
    uvec3 _1376 = uvec3(_1358 + ivec3(0, 1, 0));
    uint _1674 = _1376.z;
    uint _1680 = _1674 + (_1674 << 10u);
    uint _1682 = _1680 ^ (_1680 >> 6u);
    uint _1684 = _1682 + (_1682 << 3u);
    uint _1686 = _1684 ^ (_1684 >> 11u);
    uint _1694 = (((_1376.y * 1664525u) + (_1686 + (_1686 << 15u))) + 1013904223u) * 1664525u;
    uint _1696 = _1694 ^ (_1694 >> 11u);
    uint _1699 = _1696 ^ ((_1696 << 7u) & 2636928640u);
    uint _1702 = _1699 ^ ((_1699 << 15u) & 4022730752u);
    uint _1710 = (((_1376.x * 1664525u) + (_1702 ^ (_1702 >> 18u))) + 1013904223u) * 1664525u;
    uint _1712 = _1710 ^ (_1710 >> 11u);
    uint _1715 = _1712 ^ ((_1712 << 7u) & 2636928640u);
    uint _1718 = _1715 ^ ((_1715 << 15u) & 4022730752u);
    uint _1720 = _1718 ^ (_1718 >> 18u);
    uint _1739;
    uint _1758;
    vec2 _1349;
    uint _2540 = 0u;
    uint _2648 = _1720;
    for (;;)
    {
        if (!(_2540 < 2u))
        {
            break;
        }
        uint _1750 = _2648 + (_2648 << 10u);
        uint _1752 = _1750 ^ (_1750 >> 6u);
        uint _1754 = _1752 + (_1752 << 3u);
        uint _1756 = _1754 ^ (_1754 >> 11u);
        _1758 = _1756 + (_1756 << 15u);
        _1349[_2540] = uintBitsToFloat((_2648 & 8388607u) | 1065353216u) - 1.0;
        _1739 = _2540 + 1u;
        _2648 = _1758;
        _2540 = _1739;
        continue;
    }
    uvec3 _1384 = uvec3(_1358 + ivec3(1, 1, 0));
    uint _1774 = _1384.z;
    uint _1780 = _1774 + (_1774 << 10u);
    uint _1782 = _1780 ^ (_1780 >> 6u);
    uint _1784 = _1782 + (_1782 << 3u);
    uint _1786 = _1784 ^ (_1784 >> 11u);
    uint _1794 = (((_1384.y * 1664525u) + (_1786 + (_1786 << 15u))) + 1013904223u) * 1664525u;
    uint _1796 = _1794 ^ (_1794 >> 11u);
    uint _1799 = _1796 ^ ((_1796 << 7u) & 2636928640u);
    uint _1802 = _1799 ^ ((_1799 << 15u) & 4022730752u);
    uint _1810 = (((_1384.x * 1664525u) + (_1802 ^ (_1802 >> 18u))) + 1013904223u) * 1664525u;
    uint _1812 = _1810 ^ (_1810 >> 11u);
    uint _1815 = _1812 ^ ((_1812 << 7u) & 2636928640u);
    uint _1818 = _1815 ^ ((_1815 << 15u) & 4022730752u);
    uint _1820 = _1818 ^ (_1818 >> 18u);
    uint _1839;
    uint _1858;
    vec2 _1350;
    uint _2549 = 0u;
    uint _2647 = _1820;
    for (;;)
    {
        if (!(_2549 < 2u))
        {
            break;
        }
        uint _1850 = _2647 + (_2647 << 10u);
        uint _1852 = _1850 ^ (_1850 >> 6u);
        uint _1854 = _1852 + (_1852 << 3u);
        uint _1856 = _1854 ^ (_1854 >> 11u);
        _1858 = _1856 + (_1856 << 15u);
        _1350[_2549] = uintBitsToFloat((_2647 & 8388607u) | 1065353216u) - 1.0;
        _1839 = _2549 + 1u;
        _2647 = _1858;
        _2549 = _1839;
        continue;
    }
    uvec3 _1391 = uvec3(_1358 + ivec3(0, 0, 1));
    uint _1874 = _1391.z;
    uint _1880 = _1874 + (_1874 << 10u);
    uint _1882 = _1880 ^ (_1880 >> 6u);
    uint _1884 = _1882 + (_1882 << 3u);
    uint _1886 = _1884 ^ (_1884 >> 11u);
    uint _1894 = (((_1391.y * 1664525u) + (_1886 + (_1886 << 15u))) + 1013904223u) * 1664525u;
    uint _1896 = _1894 ^ (_1894 >> 11u);
    uint _1899 = _1896 ^ ((_1896 << 7u) & 2636928640u);
    uint _1902 = _1899 ^ ((_1899 << 15u) & 4022730752u);
    uint _1910 = (((_1391.x * 1664525u) + (_1902 ^ (_1902 >> 18u))) + 1013904223u) * 1664525u;
    uint _1912 = _1910 ^ (_1910 >> 11u);
    uint _1915 = _1912 ^ ((_1912 << 7u) & 2636928640u);
    uint _1918 = _1915 ^ ((_1915 << 15u) & 4022730752u);
    uint _1920 = _1918 ^ (_1918 >> 18u);
    uint _1939;
    uint _1958;
    vec2 _1351;
    uint _2559 = 0u;
    uint _2646 = _1920;
    for (;;)
    {
        if (!(_2559 < 2u))
        {
            break;
        }
        uint _1950 = _2646 + (_2646 << 10u);
        uint _1952 = _1950 ^ (_1950 >> 6u);
        uint _1954 = _1952 + (_1952 << 3u);
        uint _1956 = _1954 ^ (_1954 >> 11u);
        _1958 = _1956 + (_1956 << 15u);
        _1351[_2559] = uintBitsToFloat((_2646 & 8388607u) | 1065353216u) - 1.0;
        _1939 = _2559 + 1u;
        _2646 = _1958;
        _2559 = _1939;
        continue;
    }
    uvec3 _1400 = uvec3(_1358 + ivec3(1, 0, 1));
    uint _1974 = _1400.z;
    uint _1980 = _1974 + (_1974 << 10u);
    uint _1982 = _1980 ^ (_1980 >> 6u);
    uint _1984 = _1982 + (_1982 << 3u);
    uint _1986 = _1984 ^ (_1984 >> 11u);
    uint _1994 = (((_1400.y * 1664525u) + (_1986 + (_1986 << 15u))) + 1013904223u) * 1664525u;
    uint _1996 = _1994 ^ (_1994 >> 11u);
    uint _1999 = _1996 ^ ((_1996 << 7u) & 2636928640u);
    uint _2002 = _1999 ^ ((_1999 << 15u) & 4022730752u);
    uint _2010 = (((_1400.x * 1664525u) + (_2002 ^ (_2002 >> 18u))) + 1013904223u) * 1664525u;
    uint _2012 = _2010 ^ (_2010 >> 11u);
    uint _2015 = _2012 ^ ((_2012 << 7u) & 2636928640u);
    uint _2018 = _2015 ^ ((_2015 << 15u) & 4022730752u);
    uint _2020 = _2018 ^ (_2018 >> 18u);
    uint _2039;
    uint _2058;
    vec2 _1352;
    uint _2570 = 0u;
    uint _2645 = _2020;
    for (;;)
    {
        if (!(_2570 < 2u))
        {
            break;
        }
        uint _2050 = _2645 + (_2645 << 10u);
        uint _2052 = _2050 ^ (_2050 >> 6u);
        uint _2054 = _2052 + (_2052 << 3u);
        uint _2056 = _2054 ^ (_2054 >> 11u);
        _2058 = _2056 + (_2056 << 15u);
        _1352[_2570] = uintBitsToFloat((_2645 & 8388607u) | 1065353216u) - 1.0;
        _2039 = _2570 + 1u;
        _2645 = _2058;
        _2570 = _2039;
        continue;
    }
    uvec3 _1407 = uvec3(_1358 + ivec3(0, 1, 1));
    uint _2074 = _1407.z;
    uint _2080 = _2074 + (_2074 << 10u);
    uint _2082 = _2080 ^ (_2080 >> 6u);
    uint _2084 = _2082 + (_2082 << 3u);
    uint _2086 = _2084 ^ (_2084 >> 11u);
    uint _2094 = (((_1407.y * 1664525u) + (_2086 + (_2086 << 15u))) + 1013904223u) * 1664525u;
    uint _2096 = _2094 ^ (_2094 >> 11u);
    uint _2099 = _2096 ^ ((_2096 << 7u) & 2636928640u);
    uint _2102 = _2099 ^ ((_2099 << 15u) & 4022730752u);
    uint _2110 = (((_1407.x * 1664525u) + (_2102 ^ (_2102 >> 18u))) + 1013904223u) * 1664525u;
    uint _2112 = _2110 ^ (_2110 >> 11u);
    uint _2115 = _2112 ^ ((_2112 << 7u) & 2636928640u);
    uint _2118 = _2115 ^ ((_2115 << 15u) & 4022730752u);
    uint _2120 = _2118 ^ (_2118 >> 18u);
    uint _2139;
    uint _2158;
    vec2 _1353;
    uint _2582 = 0u;
    uint _2644 = _2120;
    for (;;)
    {
        if (!(_2582 < 2u))
        {
            break;
        }
        uint _2150 = _2644 + (_2644 << 10u);
        uint _2152 = _2150 ^ (_2150 >> 6u);
        uint _2154 = _2152 + (_2152 << 3u);
        uint _2156 = _2154 ^ (_2154 >> 11u);
        _2158 = _2156 + (_2156 << 15u);
        _1353[_2582] = uintBitsToFloat((_2644 & 8388607u) | 1065353216u) - 1.0;
        _2139 = _2582 + 1u;
        _2644 = _2158;
        _2582 = _2139;
        continue;
    }
    uvec3 _1415 = uvec3(_1358 + ivec3(1));
    uint _2174 = _1415.z;
    uint _2180 = _2174 + (_2174 << 10u);
    uint _2182 = _2180 ^ (_2180 >> 6u);
    uint _2184 = _2182 + (_2182 << 3u);
    uint _2186 = _2184 ^ (_2184 >> 11u);
    uint _2194 = (((_1415.y * 1664525u) + (_2186 + (_2186 << 15u))) + 1013904223u) * 1664525u;
    uint _2196 = _2194 ^ (_2194 >> 11u);
    uint _2199 = _2196 ^ ((_2196 << 7u) & 2636928640u);
    uint _2202 = _2199 ^ ((_2199 << 15u) & 4022730752u);
    uint _2210 = (((_1415.x * 1664525u) + (_2202 ^ (_2202 >> 18u))) + 1013904223u) * 1664525u;
    uint _2212 = _2210 ^ (_2210 >> 11u);
    uint _2215 = _2212 ^ ((_2212 << 7u) & 2636928640u);
    uint _2218 = _2215 ^ ((_2215 << 15u) & 4022730752u);
    uint _2220 = _2218 ^ (_2218 >> 18u);
    uint _2239;
    uint _2258;
    vec2 _1354;
    uint _2595 = 0u;
    uint _2643 = _2220;
    for (;;)
    {
        if (!(_2595 < 2u))
        {
            break;
        }
        uint _2250 = _2643 + (_2643 << 10u);
        uint _2252 = _2250 ^ (_2250 >> 6u);
        uint _2254 = _2252 + (_2252 << 3u);
        uint _2256 = _2254 ^ (_2254 >> 11u);
        _2258 = _2256 + (_2256 << 15u);
        _1354[_2595] = uintBitsToFloat((_2643 & 8388607u) | 1065353216u) - 1.0;
        _2239 = _2595 + 1u;
        _2643 = _2258;
        _2595 = _2239;
        continue;
    }
    vec3 _2270 = (_1359 * _1359) * (vec3(3.0) - (vec3(2.0) * _1359));
    float _1423 = _2270.x;
    float _1424 = 1.0 - _1423;
    float _1426 = _2270.y;
    float _1427 = 1.0 - _1426;
    float _1429 = _2270.z;
    float _1430 = 1.0 - _1429;
    vec2 _1337 = clamp((((((((((((_1347 * _1424) * _1427) * _1430) + (((_1348 * _1423) * _1427) * _1430)) + (((_1349 * _1424) * _1426) * _1430)) + (((_1350 * _1423) * _1426) * _1430)) + (((_1351 * _1424) * _1427) * _1429)) + (((_1352 * _1423) * _1427) * _1429)) + (((_1353 * _1424) * _1426) * _1429)) + (((_1354 * _1423) * _1426) * _1429)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
    vec3 _858 = _572 + (vec3(_1337.x, 0.0, _1337.y) * 0.0599999986588954925537109375);
    vec4 _2507 = _570;
    _2507.x = _858.x;
    _2507.z = _858.z;
    vec3 _866 = vec4(0.0, 0.0, 0.0, 1.0) * _566;
    float _2275 = Vertex_Position.x - (-0.5);
    float _882 = _858.y + mix(mix(_1152.x, _1152.y, _2275), mix(_1154.x, _1154.y, _2275), Vertex_Position.y - (-0.5));
    _2507.y = _882;
    vec2 _2311 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].arch_and_wallspace_packed.data[1]);
    mat3 _919 = mat3(_566[0].xyz, _566[1].xyz, _566[2].xyz);
    vec3 _2319 = vec3(1.0, 0.0, 0.0) * _919;
    vec3 _2320 = vec3(0.0, 1.0, 0.0) * _919;
    vec3 _2321 = vec3(0.0, 0.0, 1.0) * _919;
    vec3 _2324 = cross(_2319, _2320);
    vec3 _2327 = vec3(1.0 / dot(_2321, _2324));
    mat3 _942 = transpose(mat3(cross(_2320, _2321) * _2327, cross(_2321, _2319) * _2327, _2324 * _2327));
    int _2616;
    if (material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].seed < 10u)
    {
        _2616 = _2515 | 512;
    }
    else
    {
        _2616 = _2515;
    }
    mat3 _999 = mat3(vec4(_1169, 0.0, -_1171, 0.0).xyz, vec3(0.0, 1.0, 0.0), vec4(_1171, 0.0, _1169, 0.0).xyz);
    vec3 _1000 = _999 * Vertex_Position;
    vec3 camera_offset_ws = _1275 - _866;
    vec3 _1006 = _999 * (_942 * camera_offset_ws);
    mat3 _1019 = _999 * _942;
    vec2 _2348 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].arch_and_wallspace_packed.data[0]);
    float _2617;
    if (_2275 < 0.5)
    {
        _2617 = mix(_2348.x, _2348.y, _2275 * 2.0);
    }
    else
    {
        _2617 = mix(_2348.y, _2311.x, (_2275 * 2.0) - 1.0);
    }
    bool _1043 = (_2616 & 32) != 0;
    vec2 _2627;
    if (_1043)
    {
        _2627 = vec2(mix(_2311.y, unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].arch_and_wallspace_packed.data[2]).x, _2275), _882) * 0.699999988079071044921875;
    }
    else
    {
        _2627 = vec2(0.0);
    }
    gl_Position = _2507 * current_view.world_to_sample;
    entryPointParam_vs_main_instance_seed = material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_95]].seed & 65535u;
    entryPointParam_vs_main_vertex_normal_ws = vec3(0.0);
    entryPointParam_vs_main_vertex_position_ws = _2507.xyz;
    entryPointParam_vs_main_pos_ms = _1000;
    entryPointParam_vs_main_dir_ms = normalize(_1000 - _1006);
    entryPointParam_vs_main_squish_factor = length(camera_offset_ws) / length(_1006);
    entryPointParam_vs_main_offset_from_instance_transform = vec3(0.0);
    entryPointParam_vs_main_global_arch_height = _1043 ? (-100.0) : _2617;
    entryPointParam_vs_main_stone_foundation_clip_y = -100000.0;
    entryPointParam_vs_main_frag_wall_uv = _2627;
    entryPointParam_vs_main_color_id = 0;
    entryPointParam_vs_main_frag_position_ws_no_brick_depth_xz = vec4(_866, 1.0).xz;
    entryPointParam_vs_main_flags = _2616;
    entryPointParam_vs_main_instance_index = material_data_instance_list._member0[_95];
    vec3 _1105 = _1019[0];
    vec3 _1109 = _1019[1];
    vec3 _1113 = _1019[2];
    entryPointParam_vs_main_normal_matrix = _MatrixStorage_float3x3_ColMajornatural(vec3[](vec3(_1105.x, _1109.x, _1113.x), vec3(_1105.y, _1109.y, _1113.y), vec3(_1105.z, _1109.z, _1113.z)));
}

