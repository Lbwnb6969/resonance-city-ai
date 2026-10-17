#version 460

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct WoodenPlank_natural
{
    Affine3Packed_natural transform;
    int gate_seed;
    int piece_seed;
    uint color_source;
    uint flags;
    uvec2 window_cut_buffer_address;
    uint window_cut_list;
    uint pad0;
};

layout(set = 6, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 0, std430) readonly buffer material_data_nani_instance_data
{
    WoodenPlank_natural _member0[];
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
layout(location = 1) in vec3 Vertex_Normal;
layout(location = 3) in int is_bevel;
layout(location = 2) in vec2 Vertex_UV;
layout(location = 0) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) flat out uint entryPointParam_vs_main_instance_index;
layout(location = 3) flat out uint entryPointParam_vs_main_window_cut_list;
layout(location = 4) flat out int entryPointParam_vs_main_frag_seed;
layout(location = 5) flat out int entryPointParam_vs_main_frag_is_bevel;
layout(location = 6) flat out int entryPointParam_vs_main_default_wood_color;
layout(location = 7) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 8) flat out int entryPointParam_vs_main_color_source;
layout(location = 9) flat out int entryPointParam_vs_main_is_less_snowy;
layout(location = 10) flat out int entryPointParam_vs_main_no_highlight;
layout(location = 11) flat out int entryPointParam_vs_main_source_is_color_id;
layout(location = 12) flat out int entryPointParam_vs_main_is_freeform_wall;
layout(location = 13) flat out int entryPointParam_vs_main_no_snow;

void main()
{
    uint _38 = uint(gl_InstanceIndex);
    mat3x4 _966 = transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].transform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].transform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].transform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].transform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].transform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].transform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].transform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].transform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].transform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].transform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].transform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].transform.data.data[11])));
    vec3 _116 = Vertex_Position;
    float _127 = length(vec3(_966[0].y, _966[1].y, _966[2].y));
    bool _974 = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].flags & 64u) != 0u;
    bool _2294;
    if (_974)
    {
        _2294 = true;
    }
    else
    {
        _2294 = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].flags & 128u) != 0u;
    }
    vec3 _2330;
    if (_2294)
    {
        bool _998 = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].flags & 128u) != 0u;
        float _2318;
        do
        {
            bool _2296;
            if (_127 <= 9.9999997473787516355514526367188e-05)
            {
                _2296 = true;
            }
            else
            {
                bool _2297;
                if (!_974)
                {
                    _2297 = !_998;
                }
                else
                {
                    _2297 = false;
                }
                _2296 = _2297;
            }
            if (_2296)
            {
                _2318 = _116.y;
                break;
            }
            float _1024 = min(0.1599999964237213134765625, min(0.07999999821186065673828125 / _127, 0.449999988079071044921875));
            float _2498 = _974 ? 0.1599999964237213134765625 : 0.0;
            float _2499 = _974 ? _1024 : 0.0;
            float _2500 = _998 ? 0.1599999964237213134765625 : 0.0;
            float _2501 = _998 ? _1024 : 0.0;
            bool _2302;
            if (_974)
            {
                _2302 = _116.y < _2498;
            }
            else
            {
                _2302 = false;
            }
            if (_2302)
            {
                _2318 = (_116.y * _2499) / _2498;
                break;
            }
            bool _2306;
            if (_998)
            {
                _2306 = _116.y > (1.0 - _2500);
            }
            else
            {
                _2306 = false;
            }
            if (_2306)
            {
                _2318 = 1.0 - (((1.0 - _116.y) * _2501) / _2500);
                break;
            }
            _2318 = _2499 + (((_116.y - _2498) / ((1.0 - _2498) - _2500)) * ((1.0 - _2499) - _2501));
            break;
        } while(false);
        vec3 _2284 = _116;
        _2284.y = _2318;
        _2330 = _2284;
    }
    else
    {
        _2330 = _116;
    }
    int _302 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].gate_seed + material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].piece_seed;
    int seed = _302 + 45;
    uint _305 = uint(seed);
    uint _1087 = _305 + (_305 << 10u);
    uint _1089 = _1087 ^ (_1087 >> 6u);
    uint _1091 = _1089 + (_1089 << 3u);
    uint _1093 = _1091 ^ (_1091 >> 11u);
    float _348 = 1.57000005245208740234375 * float(int((uintBitsToFloat(((_1093 + (_1093 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 4.0));
    vec3 _1104 = normalize(vec3(0.0, 1.0, 0.0));
    float _1105 = sin(_348);
    float _1106 = cos(_348);
    float _1107 = 1.0 - _1106;
    float _1109 = _1107 * _1104.x;
    float _1113 = _1109 * _1104.y;
    float _1115 = _1104.z * _1105;
    float _1117 = _1107 * _1104.z;
    float _1118 = _1117 * _1104.x;
    float _1119 = _1104.y * _1105;
    float _1122 = _1107 * _1104.y;
    float _1125 = _1122 * _1104.z;
    float _1126 = _1104.x * _1105;
    mat4 _1137 = transpose(mat4(vec4((_1109 * _1104.x) + _1106, _1113 - _1115, _1118 + _1119, 0.0), vec4(_1113 + _1115, (_1122 * _1104.y) + _1106, _1125 - _1126, 0.0), vec4(_1118 - _1119, _1125 + _1126, (_1117 * _1104.z) + _1106, 0.0), vec4(0.0, 0.0, 0.0, 1.0)));
    bool _2328;
    if (_974 == ((material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].flags & 128u) != 0u))
    {
        uint _398 = uint(_302 + 500);
        uint _1161 = _398 + (_398 << 10u);
        uint _1163 = _1161 ^ (_1161 >> 6u);
        uint _1165 = _1163 + (_1163 << 3u);
        uint _1167 = _1165 ^ (_1165 >> 11u);
        _2328 = (uintBitsToFloat(((_1167 + (_1167 << 15u)) & 8388607u) | 1065353216u) - 1.0) > 0.5;
    }
    else
    {
        _2328 = false;
    }
    mat4 _2331;
    vec3 _2332;
    if (_2328)
    {
        vec3 _1178 = normalize(vec3(0.0, 0.0, 1.0));
        float _1183 = 1.9999988079071044921875 * _1178.x;
        float _1187 = _1183 * _1178.y;
        float _1189 = _1178.z * 0.001592547981999814510345458984375;
        float _1191 = 1.9999988079071044921875 * _1178.z;
        float _1192 = _1191 * _1178.x;
        float _1193 = _1178.y * 0.001592547981999814510345458984375;
        float _1196 = 1.9999988079071044921875 * _1178.y;
        float _1199 = _1196 * _1178.z;
        float _1200 = _1178.x * 0.001592547981999814510345458984375;
        vec3 _2287 = _2330;
        _2287.y = _2330.y - 1.0;
        _2332 = _2287;
        _2331 = transpose(mat4(vec4((_1183 * _1178.x) + (-0.999998748302459716796875), _1187 - _1189, _1192 + _1193, 0.0), vec4(_1187 + _1189, (_1196 * _1178.y) + (-0.999998748302459716796875), _1199 - _1200, 0.0), vec4(_1192 - _1193, _1199 + _1200, (_1191 * _1178.z) + (-0.999998748302459716796875), 0.0), vec4(0.0, 0.0, 0.0, 1.0))) * _1137;
    }
    else
    {
        _2332 = _2330;
        _2331 = _1137;
    }
    mat3x4 _421 = _2331 * _966;
    vec4 _425 = vec4(vec4(_2332, 1.0) * _421, 1.0);
    vec3 _427 = _425.xyz;
    vec3 _1214 = _427 * 0.4000000059604644775390625;
    ivec3 _1240 = ivec3(floor(_1214));
    vec3 _1241 = fract(_1214);
    uvec3 _1242 = uvec3(_1240);
    uint _1356 = _1242.z;
    uint _1362 = _1356 + (_1356 << 10u);
    uint _1364 = _1362 ^ (_1362 >> 6u);
    uint _1366 = _1364 + (_1364 << 3u);
    uint _1368 = _1366 ^ (_1366 >> 11u);
    uint _1376 = (((_1242.y * 1664525u) + (_1368 + (_1368 << 15u))) + 1013904223u) * 1664525u;
    uint _1378 = _1376 ^ (_1376 >> 11u);
    uint _1381 = _1378 ^ ((_1378 << 7u) & 2636928640u);
    uint _1384 = _1381 ^ ((_1381 << 15u) & 4022730752u);
    uint _1392 = (((_1242.x * 1664525u) + (_1384 ^ (_1384 >> 18u))) + 1013904223u) * 1664525u;
    uint _1394 = _1392 ^ (_1392 >> 11u);
    uint _1397 = _1394 ^ ((_1394 << 7u) & 2636928640u);
    uint _1400 = _1397 ^ ((_1397 << 15u) & 4022730752u);
    uint _1402 = _1400 ^ (_1400 >> 18u);
    uint _1421;
    uint _1440;
    vec2 _1229;
    uint _2347 = 0u;
    uint _2489 = _1402;
    for (;;)
    {
        if (!(_2347 < 2u))
        {
            break;
        }
        uint _1432 = _2489 + (_2489 << 10u);
        uint _1434 = _1432 ^ (_1432 >> 6u);
        uint _1436 = _1434 + (_1434 << 3u);
        uint _1438 = _1436 ^ (_1436 >> 11u);
        _1440 = _1438 + (_1438 << 15u);
        _1229[_2347] = uintBitsToFloat((_2489 & 8388607u) | 1065353216u) - 1.0;
        _1421 = _2347 + 1u;
        _2489 = _1440;
        _2347 = _1421;
        continue;
    }
    uvec3 _1251 = uvec3(_1240 + ivec3(1, 0, 0));
    uint _1456 = _1251.z;
    uint _1462 = _1456 + (_1456 << 10u);
    uint _1464 = _1462 ^ (_1462 >> 6u);
    uint _1466 = _1464 + (_1464 << 3u);
    uint _1468 = _1466 ^ (_1466 >> 11u);
    uint _1476 = (((_1251.y * 1664525u) + (_1468 + (_1468 << 15u))) + 1013904223u) * 1664525u;
    uint _1478 = _1476 ^ (_1476 >> 11u);
    uint _1481 = _1478 ^ ((_1478 << 7u) & 2636928640u);
    uint _1484 = _1481 ^ ((_1481 << 15u) & 4022730752u);
    uint _1492 = (((_1251.x * 1664525u) + (_1484 ^ (_1484 >> 18u))) + 1013904223u) * 1664525u;
    uint _1494 = _1492 ^ (_1492 >> 11u);
    uint _1497 = _1494 ^ ((_1494 << 7u) & 2636928640u);
    uint _1500 = _1497 ^ ((_1497 << 15u) & 4022730752u);
    uint _1502 = _1500 ^ (_1500 >> 18u);
    uint _1521;
    uint _1540;
    vec2 _1230;
    uint _2362 = 0u;
    uint _2488 = _1502;
    for (;;)
    {
        if (!(_2362 < 2u))
        {
            break;
        }
        uint _1532 = _2488 + (_2488 << 10u);
        uint _1534 = _1532 ^ (_1532 >> 6u);
        uint _1536 = _1534 + (_1534 << 3u);
        uint _1538 = _1536 ^ (_1536 >> 11u);
        _1540 = _1538 + (_1538 << 15u);
        _1230[_2362] = uintBitsToFloat((_2488 & 8388607u) | 1065353216u) - 1.0;
        _1521 = _2362 + 1u;
        _2488 = _1540;
        _2362 = _1521;
        continue;
    }
    uvec3 _1258 = uvec3(_1240 + ivec3(0, 1, 0));
    uint _1556 = _1258.z;
    uint _1562 = _1556 + (_1556 << 10u);
    uint _1564 = _1562 ^ (_1562 >> 6u);
    uint _1566 = _1564 + (_1564 << 3u);
    uint _1568 = _1566 ^ (_1566 >> 11u);
    uint _1576 = (((_1258.y * 1664525u) + (_1568 + (_1568 << 15u))) + 1013904223u) * 1664525u;
    uint _1578 = _1576 ^ (_1576 >> 11u);
    uint _1581 = _1578 ^ ((_1578 << 7u) & 2636928640u);
    uint _1584 = _1581 ^ ((_1581 << 15u) & 4022730752u);
    uint _1592 = (((_1258.x * 1664525u) + (_1584 ^ (_1584 >> 18u))) + 1013904223u) * 1664525u;
    uint _1594 = _1592 ^ (_1592 >> 11u);
    uint _1597 = _1594 ^ ((_1594 << 7u) & 2636928640u);
    uint _1600 = _1597 ^ ((_1597 << 15u) & 4022730752u);
    uint _1602 = _1600 ^ (_1600 >> 18u);
    uint _1621;
    uint _1640;
    vec2 _1231;
    uint _2378 = 0u;
    uint _2487 = _1602;
    for (;;)
    {
        if (!(_2378 < 2u))
        {
            break;
        }
        uint _1632 = _2487 + (_2487 << 10u);
        uint _1634 = _1632 ^ (_1632 >> 6u);
        uint _1636 = _1634 + (_1634 << 3u);
        uint _1638 = _1636 ^ (_1636 >> 11u);
        _1640 = _1638 + (_1638 << 15u);
        _1231[_2378] = uintBitsToFloat((_2487 & 8388607u) | 1065353216u) - 1.0;
        _1621 = _2378 + 1u;
        _2487 = _1640;
        _2378 = _1621;
        continue;
    }
    uvec3 _1266 = uvec3(_1240 + ivec3(1, 1, 0));
    uint _1656 = _1266.z;
    uint _1662 = _1656 + (_1656 << 10u);
    uint _1664 = _1662 ^ (_1662 >> 6u);
    uint _1666 = _1664 + (_1664 << 3u);
    uint _1668 = _1666 ^ (_1666 >> 11u);
    uint _1676 = (((_1266.y * 1664525u) + (_1668 + (_1668 << 15u))) + 1013904223u) * 1664525u;
    uint _1678 = _1676 ^ (_1676 >> 11u);
    uint _1681 = _1678 ^ ((_1678 << 7u) & 2636928640u);
    uint _1684 = _1681 ^ ((_1681 << 15u) & 4022730752u);
    uint _1692 = (((_1266.x * 1664525u) + (_1684 ^ (_1684 >> 18u))) + 1013904223u) * 1664525u;
    uint _1694 = _1692 ^ (_1692 >> 11u);
    uint _1697 = _1694 ^ ((_1694 << 7u) & 2636928640u);
    uint _1700 = _1697 ^ ((_1697 << 15u) & 4022730752u);
    uint _1702 = _1700 ^ (_1700 >> 18u);
    uint _1721;
    uint _1740;
    vec2 _1232;
    uint _2395 = 0u;
    uint _2486 = _1702;
    for (;;)
    {
        if (!(_2395 < 2u))
        {
            break;
        }
        uint _1732 = _2486 + (_2486 << 10u);
        uint _1734 = _1732 ^ (_1732 >> 6u);
        uint _1736 = _1734 + (_1734 << 3u);
        uint _1738 = _1736 ^ (_1736 >> 11u);
        _1740 = _1738 + (_1738 << 15u);
        _1232[_2395] = uintBitsToFloat((_2486 & 8388607u) | 1065353216u) - 1.0;
        _1721 = _2395 + 1u;
        _2486 = _1740;
        _2395 = _1721;
        continue;
    }
    uvec3 _1273 = uvec3(_1240 + ivec3(0, 0, 1));
    uint _1756 = _1273.z;
    uint _1762 = _1756 + (_1756 << 10u);
    uint _1764 = _1762 ^ (_1762 >> 6u);
    uint _1766 = _1764 + (_1764 << 3u);
    uint _1768 = _1766 ^ (_1766 >> 11u);
    uint _1776 = (((_1273.y * 1664525u) + (_1768 + (_1768 << 15u))) + 1013904223u) * 1664525u;
    uint _1778 = _1776 ^ (_1776 >> 11u);
    uint _1781 = _1778 ^ ((_1778 << 7u) & 2636928640u);
    uint _1784 = _1781 ^ ((_1781 << 15u) & 4022730752u);
    uint _1792 = (((_1273.x * 1664525u) + (_1784 ^ (_1784 >> 18u))) + 1013904223u) * 1664525u;
    uint _1794 = _1792 ^ (_1792 >> 11u);
    uint _1797 = _1794 ^ ((_1794 << 7u) & 2636928640u);
    uint _1800 = _1797 ^ ((_1797 << 15u) & 4022730752u);
    uint _1802 = _1800 ^ (_1800 >> 18u);
    uint _1821;
    uint _1840;
    vec2 _1233;
    uint _2413 = 0u;
    uint _2485 = _1802;
    for (;;)
    {
        if (!(_2413 < 2u))
        {
            break;
        }
        uint _1832 = _2485 + (_2485 << 10u);
        uint _1834 = _1832 ^ (_1832 >> 6u);
        uint _1836 = _1834 + (_1834 << 3u);
        uint _1838 = _1836 ^ (_1836 >> 11u);
        _1840 = _1838 + (_1838 << 15u);
        _1233[_2413] = uintBitsToFloat((_2485 & 8388607u) | 1065353216u) - 1.0;
        _1821 = _2413 + 1u;
        _2485 = _1840;
        _2413 = _1821;
        continue;
    }
    uvec3 _1282 = uvec3(_1240 + ivec3(1, 0, 1));
    uint _1856 = _1282.z;
    uint _1862 = _1856 + (_1856 << 10u);
    uint _1864 = _1862 ^ (_1862 >> 6u);
    uint _1866 = _1864 + (_1864 << 3u);
    uint _1868 = _1866 ^ (_1866 >> 11u);
    uint _1876 = (((_1282.y * 1664525u) + (_1868 + (_1868 << 15u))) + 1013904223u) * 1664525u;
    uint _1878 = _1876 ^ (_1876 >> 11u);
    uint _1881 = _1878 ^ ((_1878 << 7u) & 2636928640u);
    uint _1884 = _1881 ^ ((_1881 << 15u) & 4022730752u);
    uint _1892 = (((_1282.x * 1664525u) + (_1884 ^ (_1884 >> 18u))) + 1013904223u) * 1664525u;
    uint _1894 = _1892 ^ (_1892 >> 11u);
    uint _1897 = _1894 ^ ((_1894 << 7u) & 2636928640u);
    uint _1900 = _1897 ^ ((_1897 << 15u) & 4022730752u);
    uint _1902 = _1900 ^ (_1900 >> 18u);
    uint _1921;
    uint _1940;
    vec2 _1234;
    uint _2432 = 0u;
    uint _2484 = _1902;
    for (;;)
    {
        if (!(_2432 < 2u))
        {
            break;
        }
        uint _1932 = _2484 + (_2484 << 10u);
        uint _1934 = _1932 ^ (_1932 >> 6u);
        uint _1936 = _1934 + (_1934 << 3u);
        uint _1938 = _1936 ^ (_1936 >> 11u);
        _1940 = _1938 + (_1938 << 15u);
        _1234[_2432] = uintBitsToFloat((_2484 & 8388607u) | 1065353216u) - 1.0;
        _1921 = _2432 + 1u;
        _2484 = _1940;
        _2432 = _1921;
        continue;
    }
    uvec3 _1289 = uvec3(_1240 + ivec3(0, 1, 1));
    uint _1956 = _1289.z;
    uint _1962 = _1956 + (_1956 << 10u);
    uint _1964 = _1962 ^ (_1962 >> 6u);
    uint _1966 = _1964 + (_1964 << 3u);
    uint _1968 = _1966 ^ (_1966 >> 11u);
    uint _1976 = (((_1289.y * 1664525u) + (_1968 + (_1968 << 15u))) + 1013904223u) * 1664525u;
    uint _1978 = _1976 ^ (_1976 >> 11u);
    uint _1981 = _1978 ^ ((_1978 << 7u) & 2636928640u);
    uint _1984 = _1981 ^ ((_1981 << 15u) & 4022730752u);
    uint _1992 = (((_1289.x * 1664525u) + (_1984 ^ (_1984 >> 18u))) + 1013904223u) * 1664525u;
    uint _1994 = _1992 ^ (_1992 >> 11u);
    uint _1997 = _1994 ^ ((_1994 << 7u) & 2636928640u);
    uint _2000 = _1997 ^ ((_1997 << 15u) & 4022730752u);
    uint _2002 = _2000 ^ (_2000 >> 18u);
    uint _2021;
    uint _2040;
    vec2 _1235;
    uint _2452 = 0u;
    uint _2483 = _2002;
    for (;;)
    {
        if (!(_2452 < 2u))
        {
            break;
        }
        uint _2032 = _2483 + (_2483 << 10u);
        uint _2034 = _2032 ^ (_2032 >> 6u);
        uint _2036 = _2034 + (_2034 << 3u);
        uint _2038 = _2036 ^ (_2036 >> 11u);
        _2040 = _2038 + (_2038 << 15u);
        _1235[_2452] = uintBitsToFloat((_2483 & 8388607u) | 1065353216u) - 1.0;
        _2021 = _2452 + 1u;
        _2483 = _2040;
        _2452 = _2021;
        continue;
    }
    uvec3 _1297 = uvec3(_1240 + ivec3(1));
    uint _2056 = _1297.z;
    uint _2062 = _2056 + (_2056 << 10u);
    uint _2064 = _2062 ^ (_2062 >> 6u);
    uint _2066 = _2064 + (_2064 << 3u);
    uint _2068 = _2066 ^ (_2066 >> 11u);
    uint _2076 = (((_1297.y * 1664525u) + (_2068 + (_2068 << 15u))) + 1013904223u) * 1664525u;
    uint _2078 = _2076 ^ (_2076 >> 11u);
    uint _2081 = _2078 ^ ((_2078 << 7u) & 2636928640u);
    uint _2084 = _2081 ^ ((_2081 << 15u) & 4022730752u);
    uint _2092 = (((_1297.x * 1664525u) + (_2084 ^ (_2084 >> 18u))) + 1013904223u) * 1664525u;
    uint _2094 = _2092 ^ (_2092 >> 11u);
    uint _2097 = _2094 ^ ((_2094 << 7u) & 2636928640u);
    uint _2100 = _2097 ^ ((_2097 << 15u) & 4022730752u);
    uint _2102 = _2100 ^ (_2100 >> 18u);
    uint _2121;
    uint _2140;
    vec2 _1236;
    uint _2473 = 0u;
    uint _2482 = _2102;
    for (;;)
    {
        if (!(_2473 < 2u))
        {
            break;
        }
        uint _2132 = _2482 + (_2482 << 10u);
        uint _2134 = _2132 ^ (_2132 >> 6u);
        uint _2136 = _2134 + (_2134 << 3u);
        uint _2138 = _2136 ^ (_2136 >> 11u);
        _2140 = _2138 + (_2138 << 15u);
        _1236[_2473] = uintBitsToFloat((_2482 & 8388607u) | 1065353216u) - 1.0;
        _2121 = _2473 + 1u;
        _2482 = _2140;
        _2473 = _2121;
        continue;
    }
    vec3 _2152 = (_1241 * _1241) * (vec3(3.0) - (vec3(2.0) * _1241));
    float _1305 = _2152.x;
    float _1306 = 1.0 - _1305;
    float _1308 = _2152.y;
    float _1309 = 1.0 - _1308;
    float _1311 = _2152.z;
    float _1312 = 1.0 - _1311;
    vec2 _1219 = clamp((((((((((((_1229 * _1306) * _1309) * _1312) + (((_1230 * _1305) * _1309) * _1312)) + (((_1231 * _1306) * _1308) * _1312)) + (((_1232 * _1305) * _1308) * _1312)) + (((_1233 * _1306) * _1309) * _1311)) + (((_1234 * _1305) * _1309) * _1311)) + (((_1235 * _1306) * _1308) * _1311)) + (((_1236 * _1305) * _1308) * _1311)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
    vec3 _718 = _427 + (vec3(_1219.x, 0.0, _1219.y) * 0.0599999986588954925537109375);
    vec4 _2289 = _425;
    _2289.x = _718.x;
    _2289.y = _718.y;
    _2289.z = _718.z;
    mat3 _733 = mat3(_421[0].xyz, _421[1].xyz, _421[2].xyz);
    vec3 _2158 = vec3(1.0, 0.0, 0.0) * _733;
    vec3 _2159 = vec3(0.0, 1.0, 0.0) * _733;
    vec3 _2160 = vec3(0.0, 0.0, 1.0) * _733;
    vec3 _2163 = cross(_2158, _2159);
    vec3 _2166 = vec3(1.0 / dot(_2160, _2163));
    uint _805 = uint(seed ^ 2340774);
    uint _2186 = _805 + (_805 << 10u);
    uint _2188 = _2186 ^ (_2186 >> 6u);
    uint _2190 = _2188 + (_2188 << 3u);
    uint _2192 = _2190 ^ (_2190 >> 11u);
    uint _809 = uint(seed ^ 934565);
    uint _2208 = _809 + (_809 << 10u);
    uint _2210 = _2208 ^ (_2208 >> 6u);
    uint _2212 = _2210 + (_2210 << 3u);
    uint _2214 = _2212 ^ (_2212 >> 11u);
    gl_Position = _2289 * current_view.world_to_sample;
    entryPointParam_vs_main_frag_position_ws = _2289.xyz;
    entryPointParam_vs_main_frag_normal_ws = normalize(Vertex_Normal * transpose(mat3(cross(_2159, _2160) * _2166, cross(_2160, _2158) * _2166, _2163 * _2166)));
    entryPointParam_vs_main_instance_index = nani_instance_indirection_buffer._member0[_38];
    entryPointParam_vs_main_window_cut_list = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].window_cut_list;
    entryPointParam_vs_main_frag_seed = seed;
    entryPointParam_vs_main_frag_is_bevel = is_bevel;
    entryPointParam_vs_main_default_wood_color = int((material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].flags & 2u) != 0u);
    entryPointParam_vs_main_frag_uv = (((Vertex_UV * 0.4000000059604644775390625) + vec2(uintBitsToFloat(((_2192 + (_2192 << 15u)) & 8388607u) | 1065353216u) - 1.0, uintBitsToFloat(((_2214 + (_2214 << 15u)) & 8388607u) | 1065353216u) - 1.0)) + vec2(float(is_bevel) * 0.12000000476837158203125)) * vec2(1.0, _127 * 0.4000000059604644775390625);
    entryPointParam_vs_main_color_source = int(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].color_source);
    entryPointParam_vs_main_is_less_snowy = int(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].flags & 4u);
    entryPointParam_vs_main_no_highlight = int(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].flags & 8u);
    entryPointParam_vs_main_source_is_color_id = int(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].flags & 16u);
    entryPointParam_vs_main_is_freeform_wall = int(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].flags & 32u);
    entryPointParam_vs_main_no_snow = int(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_38]].flags & 256u);
}

