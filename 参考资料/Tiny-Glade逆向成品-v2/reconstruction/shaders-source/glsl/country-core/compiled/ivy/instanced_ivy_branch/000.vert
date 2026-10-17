#version 460
#extension GL_EXT_scalar_block_layout : require

struct IvySegment_natural
{
    vec3 start_pos;
    float start_thickness;
    vec3 end_pos;
    float end_thickness;
    vec3 wall_normal;
    float arch_height;
};

struct Tex2D_natural
{
    uint bindless_handle;
};

float _2365;

layout(set = 0, binding = 0, std430) readonly buffer StructuredBuffer
{
    IvySegment_natural _member0[];
} material_data_ivy_segments;

layout(set = 19, binding = 0, scalar) uniform TerrainHeightmap_natural
{
    uvec2 terrain_heightmap_dims;
    Tex2D_natural bg_terrain_heightmap;
    Tex2D_natural bg_terrain_fog_height;
    vec2 bg_terrain_height_bounds_ws;
    vec4 bg_water_footprint_ws;
} terrain_heightmap;

layout(set = 7, binding = 0, std140) uniform PathExclusionMask_natural
{
    uvec2 tex_dims;
} path_mask;

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

layout(set = 19, binding = 1) uniform texture2D terrain_heightmap_terrain_heightmap;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 2, binding = 4) uniform sampler samplers_llb;
layout(set = 7, binding = 1) uniform texture2D path_mask_tex;

layout(location = 0) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 1) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_pos_ws;
layout(location = 0) in vec3 Vertex_Position;

void main()
{
    do
    {
        uint _56 = uint(gl_InstanceIndex);
        vec3 _68 = material_data_ivy_segments._member0[_56].start_pos;
        vec3 _79 = material_data_ivy_segments._member0[_56].end_pos;
        vec2 _921 = (_68.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5);
        float _928 = mix(-2.5, 24.0, textureLod(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), _921, 0.0).x);
        float arch_height = material_data_ivy_segments._member0[_56].arch_height - min(_928, 0.0);
        vec4 _954 = textureLod(sampler2D(path_mask_tex, samplers_llb), _921, 0.0);
        float _945 = _954.x;
        float _2392;
        float _2394;
        if (_945 > 0.100000001490116119384765625)
        {
            float _961 = (1.0 - exp((-5.0) * _945)) * arch_height;
            vec2 _971 = (vec2(_68.xz) * 0.60000002384185791015625) + vec2(_68.y * 0.60000002384185791015625);
            ivec2 _994 = ivec2(floor(_971));
            vec2 _995 = fract(_971);
            uvec2 _996 = uvec2(_994);
            uint _1046 = _996.y;
            uint _1052 = _1046 + (_1046 << 10u);
            uint _1054 = _1052 ^ (_1052 >> 6u);
            uint _1056 = _1054 + (_1054 << 3u);
            uint _1058 = _1056 ^ (_1056 >> 11u);
            uint _1066 = (((_996.x * 1664525u) + (_1058 + (_1058 << 15u))) + 1013904223u) * 1664525u;
            uint _1068 = _1066 ^ (_1066 >> 11u);
            uint _1071 = _1068 ^ ((_1068 << 7u) & 2636928640u);
            uint _1074 = _1071 ^ ((_1071 << 15u) & 4022730752u);
            uint _1076 = _1074 ^ (_1074 >> 18u);
            float _2367;
            _2367 = _2365;
            uint _1093;
            uint _1112;
            float _1118;
            uint _2366 = 0u;
            uint _2531 = _1076;
            for (;;)
            {
                if (!(_2366 < 1u))
                {
                    break;
                }
                uint _1104 = _2531 + (_2531 << 10u);
                uint _1106 = _1104 ^ (_1104 >> 6u);
                uint _1108 = _1106 + (_1106 << 3u);
                uint _1110 = _1108 ^ (_1108 >> 11u);
                _1112 = _1110 + (_1110 << 15u);
                _1118 = uintBitsToFloat((_2531 & 8388607u) | 1065353216u) - 1.0;
                _1093 = _2366 + 1u;
                _2531 = _1112;
                _2367 = _1118;
                _2366 = _1093;
                continue;
            }
            uvec2 _1004 = uvec2(_994 + ivec2(1, 0));
            uint _1122 = _1004.y;
            uint _1128 = _1122 + (_1122 << 10u);
            uint _1130 = _1128 ^ (_1128 >> 6u);
            uint _1132 = _1130 + (_1130 << 3u);
            uint _1134 = _1132 ^ (_1132 >> 11u);
            uint _1142 = (((_1004.x * 1664525u) + (_1134 + (_1134 << 15u))) + 1013904223u) * 1664525u;
            uint _1144 = _1142 ^ (_1142 >> 11u);
            uint _1147 = _1144 ^ ((_1144 << 7u) & 2636928640u);
            uint _1150 = _1147 ^ ((_1147 << 15u) & 4022730752u);
            uint _1152 = _1150 ^ (_1150 >> 18u);
            float _2370;
            _2370 = _2365;
            uint _1169;
            uint _1188;
            float _1194;
            uint _2369 = 0u;
            uint _2530 = _1152;
            for (;;)
            {
                if (!(_2369 < 1u))
                {
                    break;
                }
                uint _1180 = _2530 + (_2530 << 10u);
                uint _1182 = _1180 ^ (_1180 >> 6u);
                uint _1184 = _1182 + (_1182 << 3u);
                uint _1186 = _1184 ^ (_1184 >> 11u);
                _1188 = _1186 + (_1186 << 15u);
                _1194 = uintBitsToFloat((_2530 & 8388607u) | 1065353216u) - 1.0;
                _1169 = _2369 + 1u;
                _2530 = _1188;
                _2370 = _1194;
                _2369 = _1169;
                continue;
            }
            uvec2 _1011 = uvec2(_994 + ivec2(0, 1));
            uint _1198 = _1011.y;
            uint _1204 = _1198 + (_1198 << 10u);
            uint _1206 = _1204 ^ (_1204 >> 6u);
            uint _1208 = _1206 + (_1206 << 3u);
            uint _1210 = _1208 ^ (_1208 >> 11u);
            uint _1218 = (((_1011.x * 1664525u) + (_1210 + (_1210 << 15u))) + 1013904223u) * 1664525u;
            uint _1220 = _1218 ^ (_1218 >> 11u);
            uint _1223 = _1220 ^ ((_1220 << 7u) & 2636928640u);
            uint _1226 = _1223 ^ ((_1223 << 15u) & 4022730752u);
            uint _1228 = _1226 ^ (_1226 >> 18u);
            float _2374;
            _2374 = _2365;
            uint _1245;
            uint _1264;
            float _1270;
            uint _2373 = 0u;
            uint _2529 = _1228;
            for (;;)
            {
                if (!(_2373 < 1u))
                {
                    break;
                }
                uint _1256 = _2529 + (_2529 << 10u);
                uint _1258 = _1256 ^ (_1256 >> 6u);
                uint _1260 = _1258 + (_1258 << 3u);
                uint _1262 = _1260 ^ (_1260 >> 11u);
                _1264 = _1262 + (_1262 << 15u);
                _1270 = uintBitsToFloat((_2529 & 8388607u) | 1065353216u) - 1.0;
                _1245 = _2373 + 1u;
                _2529 = _1264;
                _2374 = _1270;
                _2373 = _1245;
                continue;
            }
            uvec2 _1019 = uvec2(_994 + ivec2(1));
            uint _1274 = _1019.y;
            uint _1280 = _1274 + (_1274 << 10u);
            uint _1282 = _1280 ^ (_1280 >> 6u);
            uint _1284 = _1282 + (_1282 << 3u);
            uint _1286 = _1284 ^ (_1284 >> 11u);
            uint _1294 = (((_1019.x * 1664525u) + (_1286 + (_1286 << 15u))) + 1013904223u) * 1664525u;
            uint _1296 = _1294 ^ (_1294 >> 11u);
            uint _1299 = _1296 ^ ((_1296 << 7u) & 2636928640u);
            uint _1302 = _1299 ^ ((_1299 << 15u) & 4022730752u);
            uint _1304 = _1302 ^ (_1302 >> 18u);
            float _2379;
            _2379 = _2365;
            uint _1321;
            uint _1340;
            float _1346;
            uint _2378 = 0u;
            uint _2528 = _1304;
            for (;;)
            {
                if (!(_2378 < 1u))
                {
                    break;
                }
                uint _1332 = _2528 + (_2528 << 10u);
                uint _1334 = _1332 ^ (_1332 >> 6u);
                uint _1336 = _1334 + (_1334 << 3u);
                uint _1338 = _1336 ^ (_1336 >> 11u);
                _1340 = _1338 + (_1338 << 15u);
                _1346 = uintBitsToFloat((_2528 & 8388607u) | 1065353216u) - 1.0;
                _1321 = _2378 + 1u;
                _2528 = _1340;
                _2379 = _1346;
                _2378 = _1321;
                continue;
            }
            vec2 _1352 = (_995 * _995) * (vec2(3.0) - (vec2(2.0) * _995));
            float _1027 = _1352.x;
            float _1028 = 1.0 - _1027;
            float _1030 = _1352.y;
            float _976 = clamp(arch_height - _68.y, 0.0, 1.0);
            float _1357 = _976 * _976;
            float _2393;
            float _2395;
            if (_68.y < (_961 * (_1357 * clamp(smoothstep(0.0, 0.300000011920928955078125, (((1.0 - _1030) * ((_2367 * _1028) + (_2370 * _1027))) + ((_2374 * _1028) * _1030)) + ((_2379 * _1027) * _1030)), 0.800000011920928955078125, 1.0))))
            {
                gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
                entryPointParam_vs_main_frag_normal_ws = vec3(0.0);
                entryPointParam_vs_main_frag_uv = vec2(0.0);
                entryPointParam_vs_main_frag_pos_ws = vec3(0.0);
                break;
            }
            else
            {
                if (_68.y < _961)
                {
                    float _495 = 1.0 - _1357;
                    _2395 = min(material_data_ivy_segments._member0[_56].start_thickness * _495, 0.20000000298023223876953125);
                    _2393 = min(material_data_ivy_segments._member0[_56].end_thickness * _495, 0.20000000298023223876953125);
                }
                else
                {
                    _2395 = material_data_ivy_segments._member0[_56].start_thickness;
                    _2393 = material_data_ivy_segments._member0[_56].end_thickness;
                }
            }
            _2394 = _2395;
            _2392 = _2393;
        }
        else
        {
            _2394 = material_data_ivy_segments._member0[_56].start_thickness;
            _2392 = material_data_ivy_segments._member0[_56].end_thickness;
        }
        float _514 = _68.y + _928;
        vec3 _2344 = _68;
        _2344.y = _514;
        float _518 = _79.y + mix(-2.5, 24.0, textureLod(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), (_79.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0).x);
        vec3 _2347 = _79;
        _2347.y = _518;
        vec3 _526 = normalize(_2347 - _2344);
        vec3 _528 = normalize(cross(_526, material_data_ivy_segments._member0[_56].wall_normal));
        vec3 _531 = Vertex_Position;
        vec3 _2396;
        if (_531.y < 0.100000001490116119384765625)
        {
            vec2 _545 = _531.xz * mix(0.01679999940097332000732421875, 0.08400000631809234619140625, _2394);
            vec3 _2353 = _531;
            _2353.x = _545.x;
            _2353.z = _545.y;
            _2396 = _2353;
        }
        else
        {
            vec2 _556 = _531.xz * mix(0.01679999940097332000732421875, 0.08400000631809234619140625, _2392);
            vec3 _2349 = _531;
            _2349.x = _556.x;
            _2349.z = _556.y;
            _2396 = _2349;
        }
        vec3 _2358 = _2396;
        _2358.y = _2396.y * (distance(_2344, _2347) * 1.10000002384185791015625);
        mat4 _601 = transpose(mat4(vec4(_528, 0.0), vec4(_526, 0.0), vec4(normalize(cross(_528, _526)), 0.0), vec4(0.0, 0.0, 0.0, 1.0)));
        vec4 _605 = (vec4(_2358, 1.0) * _601) * mat4(vec4(1.0, 0.0, 0.0, _68.x), vec4(0.0, 1.0, 0.0, _514), vec4(0.0, 0.0, 1.0, _68.z), vec4(0.0, 0.0, 0.0, 1.0));
        vec3 _607 = _605.xyz;
        vec3 _1363 = _607 * 0.4000000059604644775390625;
        ivec3 _1389 = ivec3(floor(_1363));
        vec3 _1390 = fract(_1363);
        uvec3 _1391 = uvec3(_1389);
        uint _1505 = _1391.z;
        uint _1511 = _1505 + (_1505 << 10u);
        uint _1513 = _1511 ^ (_1511 >> 6u);
        uint _1515 = _1513 + (_1513 << 3u);
        uint _1517 = _1515 ^ (_1515 >> 11u);
        uint _1525 = (((_1391.y * 1664525u) + (_1517 + (_1517 << 15u))) + 1013904223u) * 1664525u;
        uint _1527 = _1525 ^ (_1525 >> 11u);
        uint _1530 = _1527 ^ ((_1527 << 7u) & 2636928640u);
        uint _1533 = _1530 ^ ((_1530 << 15u) & 4022730752u);
        uint _1541 = (((_1391.x * 1664525u) + (_1533 ^ (_1533 >> 18u))) + 1013904223u) * 1664525u;
        uint _1543 = _1541 ^ (_1541 >> 11u);
        uint _1546 = _1543 ^ ((_1543 << 7u) & 2636928640u);
        uint _1549 = _1546 ^ ((_1546 << 15u) & 4022730752u);
        uint _1551 = _1549 ^ (_1549 >> 18u);
        uint _1570;
        uint _1589;
        vec2 _1378;
        uint _2406 = 0u;
        uint _2515 = _1551;
        for (;;)
        {
            if (!(_2406 < 2u))
            {
                break;
            }
            uint _1581 = _2515 + (_2515 << 10u);
            uint _1583 = _1581 ^ (_1581 >> 6u);
            uint _1585 = _1583 + (_1583 << 3u);
            uint _1587 = _1585 ^ (_1585 >> 11u);
            _1589 = _1587 + (_1587 << 15u);
            _1378[_2406] = uintBitsToFloat((_2515 & 8388607u) | 1065353216u) - 1.0;
            _1570 = _2406 + 1u;
            _2515 = _1589;
            _2406 = _1570;
            continue;
        }
        uvec3 _1400 = uvec3(_1389 + ivec3(1, 0, 0));
        uint _1605 = _1400.z;
        uint _1611 = _1605 + (_1605 << 10u);
        uint _1613 = _1611 ^ (_1611 >> 6u);
        uint _1615 = _1613 + (_1613 << 3u);
        uint _1617 = _1615 ^ (_1615 >> 11u);
        uint _1625 = (((_1400.y * 1664525u) + (_1617 + (_1617 << 15u))) + 1013904223u) * 1664525u;
        uint _1627 = _1625 ^ (_1625 >> 11u);
        uint _1630 = _1627 ^ ((_1627 << 7u) & 2636928640u);
        uint _1633 = _1630 ^ ((_1630 << 15u) & 4022730752u);
        uint _1641 = (((_1400.x * 1664525u) + (_1633 ^ (_1633 >> 18u))) + 1013904223u) * 1664525u;
        uint _1643 = _1641 ^ (_1641 >> 11u);
        uint _1646 = _1643 ^ ((_1643 << 7u) & 2636928640u);
        uint _1649 = _1646 ^ ((_1646 << 15u) & 4022730752u);
        uint _1651 = _1649 ^ (_1649 >> 18u);
        uint _1670;
        uint _1689;
        vec2 _1379;
        uint _2415 = 0u;
        uint _2514 = _1651;
        for (;;)
        {
            if (!(_2415 < 2u))
            {
                break;
            }
            uint _1681 = _2514 + (_2514 << 10u);
            uint _1683 = _1681 ^ (_1681 >> 6u);
            uint _1685 = _1683 + (_1683 << 3u);
            uint _1687 = _1685 ^ (_1685 >> 11u);
            _1689 = _1687 + (_1687 << 15u);
            _1379[_2415] = uintBitsToFloat((_2514 & 8388607u) | 1065353216u) - 1.0;
            _1670 = _2415 + 1u;
            _2514 = _1689;
            _2415 = _1670;
            continue;
        }
        uvec3 _1407 = uvec3(_1389 + ivec3(0, 1, 0));
        uint _1705 = _1407.z;
        uint _1711 = _1705 + (_1705 << 10u);
        uint _1713 = _1711 ^ (_1711 >> 6u);
        uint _1715 = _1713 + (_1713 << 3u);
        uint _1717 = _1715 ^ (_1715 >> 11u);
        uint _1725 = (((_1407.y * 1664525u) + (_1717 + (_1717 << 15u))) + 1013904223u) * 1664525u;
        uint _1727 = _1725 ^ (_1725 >> 11u);
        uint _1730 = _1727 ^ ((_1727 << 7u) & 2636928640u);
        uint _1733 = _1730 ^ ((_1730 << 15u) & 4022730752u);
        uint _1741 = (((_1407.x * 1664525u) + (_1733 ^ (_1733 >> 18u))) + 1013904223u) * 1664525u;
        uint _1743 = _1741 ^ (_1741 >> 11u);
        uint _1746 = _1743 ^ ((_1743 << 7u) & 2636928640u);
        uint _1749 = _1746 ^ ((_1746 << 15u) & 4022730752u);
        uint _1751 = _1749 ^ (_1749 >> 18u);
        uint _1770;
        uint _1789;
        vec2 _1380;
        uint _2425 = 0u;
        uint _2513 = _1751;
        for (;;)
        {
            if (!(_2425 < 2u))
            {
                break;
            }
            uint _1781 = _2513 + (_2513 << 10u);
            uint _1783 = _1781 ^ (_1781 >> 6u);
            uint _1785 = _1783 + (_1783 << 3u);
            uint _1787 = _1785 ^ (_1785 >> 11u);
            _1789 = _1787 + (_1787 << 15u);
            _1380[_2425] = uintBitsToFloat((_2513 & 8388607u) | 1065353216u) - 1.0;
            _1770 = _2425 + 1u;
            _2513 = _1789;
            _2425 = _1770;
            continue;
        }
        uvec3 _1415 = uvec3(_1389 + ivec3(1, 1, 0));
        uint _1805 = _1415.z;
        uint _1811 = _1805 + (_1805 << 10u);
        uint _1813 = _1811 ^ (_1811 >> 6u);
        uint _1815 = _1813 + (_1813 << 3u);
        uint _1817 = _1815 ^ (_1815 >> 11u);
        uint _1825 = (((_1415.y * 1664525u) + (_1817 + (_1817 << 15u))) + 1013904223u) * 1664525u;
        uint _1827 = _1825 ^ (_1825 >> 11u);
        uint _1830 = _1827 ^ ((_1827 << 7u) & 2636928640u);
        uint _1833 = _1830 ^ ((_1830 << 15u) & 4022730752u);
        uint _1841 = (((_1415.x * 1664525u) + (_1833 ^ (_1833 >> 18u))) + 1013904223u) * 1664525u;
        uint _1843 = _1841 ^ (_1841 >> 11u);
        uint _1846 = _1843 ^ ((_1843 << 7u) & 2636928640u);
        uint _1849 = _1846 ^ ((_1846 << 15u) & 4022730752u);
        uint _1851 = _1849 ^ (_1849 >> 18u);
        uint _1870;
        uint _1889;
        vec2 _1381;
        uint _2436 = 0u;
        uint _2512 = _1851;
        for (;;)
        {
            if (!(_2436 < 2u))
            {
                break;
            }
            uint _1881 = _2512 + (_2512 << 10u);
            uint _1883 = _1881 ^ (_1881 >> 6u);
            uint _1885 = _1883 + (_1883 << 3u);
            uint _1887 = _1885 ^ (_1885 >> 11u);
            _1889 = _1887 + (_1887 << 15u);
            _1381[_2436] = uintBitsToFloat((_2512 & 8388607u) | 1065353216u) - 1.0;
            _1870 = _2436 + 1u;
            _2512 = _1889;
            _2436 = _1870;
            continue;
        }
        uvec3 _1422 = uvec3(_1389 + ivec3(0, 0, 1));
        uint _1905 = _1422.z;
        uint _1911 = _1905 + (_1905 << 10u);
        uint _1913 = _1911 ^ (_1911 >> 6u);
        uint _1915 = _1913 + (_1913 << 3u);
        uint _1917 = _1915 ^ (_1915 >> 11u);
        uint _1925 = (((_1422.y * 1664525u) + (_1917 + (_1917 << 15u))) + 1013904223u) * 1664525u;
        uint _1927 = _1925 ^ (_1925 >> 11u);
        uint _1930 = _1927 ^ ((_1927 << 7u) & 2636928640u);
        uint _1933 = _1930 ^ ((_1930 << 15u) & 4022730752u);
        uint _1941 = (((_1422.x * 1664525u) + (_1933 ^ (_1933 >> 18u))) + 1013904223u) * 1664525u;
        uint _1943 = _1941 ^ (_1941 >> 11u);
        uint _1946 = _1943 ^ ((_1943 << 7u) & 2636928640u);
        uint _1949 = _1946 ^ ((_1946 << 15u) & 4022730752u);
        uint _1951 = _1949 ^ (_1949 >> 18u);
        uint _1970;
        uint _1989;
        vec2 _1382;
        uint _2448 = 0u;
        uint _2511 = _1951;
        for (;;)
        {
            if (!(_2448 < 2u))
            {
                break;
            }
            uint _1981 = _2511 + (_2511 << 10u);
            uint _1983 = _1981 ^ (_1981 >> 6u);
            uint _1985 = _1983 + (_1983 << 3u);
            uint _1987 = _1985 ^ (_1985 >> 11u);
            _1989 = _1987 + (_1987 << 15u);
            _1382[_2448] = uintBitsToFloat((_2511 & 8388607u) | 1065353216u) - 1.0;
            _1970 = _2448 + 1u;
            _2511 = _1989;
            _2448 = _1970;
            continue;
        }
        uvec3 _1431 = uvec3(_1389 + ivec3(1, 0, 1));
        uint _2005 = _1431.z;
        uint _2011 = _2005 + (_2005 << 10u);
        uint _2013 = _2011 ^ (_2011 >> 6u);
        uint _2015 = _2013 + (_2013 << 3u);
        uint _2017 = _2015 ^ (_2015 >> 11u);
        uint _2025 = (((_1431.y * 1664525u) + (_2017 + (_2017 << 15u))) + 1013904223u) * 1664525u;
        uint _2027 = _2025 ^ (_2025 >> 11u);
        uint _2030 = _2027 ^ ((_2027 << 7u) & 2636928640u);
        uint _2033 = _2030 ^ ((_2030 << 15u) & 4022730752u);
        uint _2041 = (((_1431.x * 1664525u) + (_2033 ^ (_2033 >> 18u))) + 1013904223u) * 1664525u;
        uint _2043 = _2041 ^ (_2041 >> 11u);
        uint _2046 = _2043 ^ ((_2043 << 7u) & 2636928640u);
        uint _2049 = _2046 ^ ((_2046 << 15u) & 4022730752u);
        uint _2051 = _2049 ^ (_2049 >> 18u);
        uint _2070;
        uint _2089;
        vec2 _1383;
        uint _2461 = 0u;
        uint _2510 = _2051;
        for (;;)
        {
            if (!(_2461 < 2u))
            {
                break;
            }
            uint _2081 = _2510 + (_2510 << 10u);
            uint _2083 = _2081 ^ (_2081 >> 6u);
            uint _2085 = _2083 + (_2083 << 3u);
            uint _2087 = _2085 ^ (_2085 >> 11u);
            _2089 = _2087 + (_2087 << 15u);
            _1383[_2461] = uintBitsToFloat((_2510 & 8388607u) | 1065353216u) - 1.0;
            _2070 = _2461 + 1u;
            _2510 = _2089;
            _2461 = _2070;
            continue;
        }
        uvec3 _1438 = uvec3(_1389 + ivec3(0, 1, 1));
        uint _2105 = _1438.z;
        uint _2111 = _2105 + (_2105 << 10u);
        uint _2113 = _2111 ^ (_2111 >> 6u);
        uint _2115 = _2113 + (_2113 << 3u);
        uint _2117 = _2115 ^ (_2115 >> 11u);
        uint _2125 = (((_1438.y * 1664525u) + (_2117 + (_2117 << 15u))) + 1013904223u) * 1664525u;
        uint _2127 = _2125 ^ (_2125 >> 11u);
        uint _2130 = _2127 ^ ((_2127 << 7u) & 2636928640u);
        uint _2133 = _2130 ^ ((_2130 << 15u) & 4022730752u);
        uint _2141 = (((_1438.x * 1664525u) + (_2133 ^ (_2133 >> 18u))) + 1013904223u) * 1664525u;
        uint _2143 = _2141 ^ (_2141 >> 11u);
        uint _2146 = _2143 ^ ((_2143 << 7u) & 2636928640u);
        uint _2149 = _2146 ^ ((_2146 << 15u) & 4022730752u);
        uint _2151 = _2149 ^ (_2149 >> 18u);
        uint _2170;
        uint _2189;
        vec2 _1384;
        uint _2475 = 0u;
        uint _2509 = _2151;
        for (;;)
        {
            if (!(_2475 < 2u))
            {
                break;
            }
            uint _2181 = _2509 + (_2509 << 10u);
            uint _2183 = _2181 ^ (_2181 >> 6u);
            uint _2185 = _2183 + (_2183 << 3u);
            uint _2187 = _2185 ^ (_2185 >> 11u);
            _2189 = _2187 + (_2187 << 15u);
            _1384[_2475] = uintBitsToFloat((_2509 & 8388607u) | 1065353216u) - 1.0;
            _2170 = _2475 + 1u;
            _2509 = _2189;
            _2475 = _2170;
            continue;
        }
        uvec3 _1446 = uvec3(_1389 + ivec3(1));
        uint _2205 = _1446.z;
        uint _2211 = _2205 + (_2205 << 10u);
        uint _2213 = _2211 ^ (_2211 >> 6u);
        uint _2215 = _2213 + (_2213 << 3u);
        uint _2217 = _2215 ^ (_2215 >> 11u);
        uint _2225 = (((_1446.y * 1664525u) + (_2217 + (_2217 << 15u))) + 1013904223u) * 1664525u;
        uint _2227 = _2225 ^ (_2225 >> 11u);
        uint _2230 = _2227 ^ ((_2227 << 7u) & 2636928640u);
        uint _2233 = _2230 ^ ((_2230 << 15u) & 4022730752u);
        uint _2241 = (((_1446.x * 1664525u) + (_2233 ^ (_2233 >> 18u))) + 1013904223u) * 1664525u;
        uint _2243 = _2241 ^ (_2241 >> 11u);
        uint _2246 = _2243 ^ ((_2243 << 7u) & 2636928640u);
        uint _2249 = _2246 ^ ((_2246 << 15u) & 4022730752u);
        uint _2251 = _2249 ^ (_2249 >> 18u);
        uint _2270;
        uint _2289;
        vec2 _1385;
        uint _2490 = 0u;
        uint _2508 = _2251;
        for (;;)
        {
            if (!(_2490 < 2u))
            {
                break;
            }
            uint _2281 = _2508 + (_2508 << 10u);
            uint _2283 = _2281 ^ (_2281 >> 6u);
            uint _2285 = _2283 + (_2283 << 3u);
            uint _2287 = _2285 ^ (_2285 >> 11u);
            _2289 = _2287 + (_2287 << 15u);
            _1385[_2490] = uintBitsToFloat((_2508 & 8388607u) | 1065353216u) - 1.0;
            _2270 = _2490 + 1u;
            _2508 = _2289;
            _2490 = _2270;
            continue;
        }
        vec3 _2301 = (_1390 * _1390) * (vec3(3.0) - (vec3(2.0) * _1390));
        float _1454 = _2301.x;
        float _1455 = 1.0 - _1454;
        float _1457 = _2301.y;
        float _1458 = 1.0 - _1457;
        float _1460 = _2301.z;
        float _1461 = 1.0 - _1460;
        vec2 _1368 = clamp((((((((((((_1378 * _1455) * _1458) * _1461) + (((_1379 * _1454) * _1458) * _1461)) + (((_1380 * _1455) * _1457) * _1461)) + (((_1381 * _1454) * _1457) * _1461)) + (((_1382 * _1455) * _1458) * _1460)) + (((_1383 * _1454) * _1458) * _1460)) + (((_1384 * _1455) * _1457) * _1460)) + (((_1385 * _1454) * _1457) * _1460)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
        vec3 _857 = _607 + (vec3(_1368.x, 0.0, _1368.y) * 0.0599999986588954925537109375);
        vec4 _2360 = _605;
        _2360.x = _857.x;
        _2360.y = _857.y;
        _2360.z = _857.z;
        float _886 = _518 * 0.5;
        gl_Position = _2360 * current_view.world_to_sample;
        entryPointParam_vs_main_frag_normal_ws = (vec4(normalize(vec3(_531.x, 0.0, _531.z)), 0.0) * _601).xyz;
        entryPointParam_vs_main_frag_uv = vec2(_79.x + _886, _79.z + _886) * 0.20000000298023223876953125;
        entryPointParam_vs_main_frag_pos_ws = _2360.xyz;
        break;
    } while(false);
}

