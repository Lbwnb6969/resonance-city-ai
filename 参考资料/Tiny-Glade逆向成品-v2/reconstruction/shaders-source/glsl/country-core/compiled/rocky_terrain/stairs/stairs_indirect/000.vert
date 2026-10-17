#version 460

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct Stair_natural
{
    Affine3Packed_natural transform;
};

float _1897;

layout(set = 0, binding = 0, std140) uniform MaterialData_natural
{
    int is_pebble;
    int pebble_buffer_offset;
} material_data;

layout(set = 0, binding = 1, std430) readonly buffer StructuredBuffer
{
    Stair_natural _member0[];
} material_data_stairs_buffer;

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
layout(location = 2) in vec3 bevel_offset;
layout(location = 1) in vec3 Vertex_Normal;
layout(location = 0) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 1) out float entryPointParam_vs_main_frag_seed;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_normal;

void main()
{
    uint _1878;
    if (material_data.is_pebble == 1)
    {
        _1878 = uint(material_data.pebble_buffer_offset) + uint(gl_InstanceIndex);
    }
    else
    {
        _1878 = uint(gl_InstanceIndex);
    }
    int idx = int(_1878);
    mat3x4 _584 = transpose(mat4x3(vec3(material_data_stairs_buffer._member0[idx].transform.data.data[0], material_data_stairs_buffer._member0[idx].transform.data.data[1], material_data_stairs_buffer._member0[idx].transform.data.data[2]), vec3(material_data_stairs_buffer._member0[idx].transform.data.data[3], material_data_stairs_buffer._member0[idx].transform.data.data[4], material_data_stairs_buffer._member0[idx].transform.data.data[5]), vec3(material_data_stairs_buffer._member0[idx].transform.data.data[6], material_data_stairs_buffer._member0[idx].transform.data.data[7], material_data_stairs_buffer._member0[idx].transform.data.data[8]), vec3(material_data_stairs_buffer._member0[idx].transform.data.data[9], material_data_stairs_buffer._member0[idx].transform.data.data[10], material_data_stairs_buffer._member0[idx].transform.data.data[11])));
    vec4 _121 = _584[0];
    vec4 _123 = _584[1];
    vec4 _125 = _584[2];
    float _131 = round(((_121.w + _123.w) + _125.w) * 100.0);
    float seed = _131 * 0.00999999977648258209228515625;
    vec3 _1882;
    if (material_data.is_pebble == 0)
    {
        float _1880;
        vec2 _2001;
        _2001 = (Vertex_Position.xz * 5.0) + vec2(seed);
        _1880 = 0.0;
        float _605;
        float _607;
        vec2 _610;
        int _614;
        float _2005;
        float _2010;
        float _2016;
        float _2023;
        int _1879 = 0;
        float _2002;
        float _2007;
        float _2013;
        float _2020;
        float _2028 = 0.5;
        for (;;)
        {
            if (!(_1879 < 1))
            {
                break;
            }
            ivec2 _638 = ivec2(floor(_2001));
            vec2 _639 = fract(_2001);
            uvec2 _640 = uvec2(_638);
            uint _690 = _640.y;
            uint _696 = _690 + (_690 << 10u);
            uint _698 = _696 ^ (_696 >> 6u);
            uint _700 = _698 + (_698 << 3u);
            uint _702 = _700 ^ (_700 >> 11u);
            uint _710 = (((_640.x * 1664525u) + (_702 + (_702 << 15u))) + 1013904223u) * 1664525u;
            uint _712 = _710 ^ (_710 >> 11u);
            uint _715 = _712 ^ ((_712 << 7u) & 2636928640u);
            uint _718 = _715 ^ ((_715 << 15u) & 4022730752u);
            uint _720 = _718 ^ (_718 >> 18u);
            _2005 = _2002;
            uint _737;
            uint _756;
            float _762;
            uint _2004 = 0u;
            uint _2044 = _720;
            for (;;)
            {
                if (!(_2004 < 1u))
                {
                    break;
                }
                uint _748 = _2044 + (_2044 << 10u);
                uint _750 = _748 ^ (_748 >> 6u);
                uint _752 = _750 + (_750 << 3u);
                uint _754 = _752 ^ (_752 >> 11u);
                _756 = _754 + (_754 << 15u);
                _762 = uintBitsToFloat((_2044 & 8388607u) | 1065353216u) - 1.0;
                _737 = _2004 + 1u;
                _2044 = _756;
                _2005 = _762;
                _2004 = _737;
                continue;
            }
            uvec2 _648 = uvec2(_638 + ivec2(1, 0));
            uint _766 = _648.y;
            uint _772 = _766 + (_766 << 10u);
            uint _774 = _772 ^ (_772 >> 6u);
            uint _776 = _774 + (_774 << 3u);
            uint _778 = _776 ^ (_776 >> 11u);
            uint _786 = (((_648.x * 1664525u) + (_778 + (_778 << 15u))) + 1013904223u) * 1664525u;
            uint _788 = _786 ^ (_786 >> 11u);
            uint _791 = _788 ^ ((_788 << 7u) & 2636928640u);
            uint _794 = _791 ^ ((_791 << 15u) & 4022730752u);
            uint _796 = _794 ^ (_794 >> 18u);
            _2010 = _2007;
            uint _813;
            uint _832;
            float _838;
            uint _2009 = 0u;
            uint _2043 = _796;
            for (;;)
            {
                if (!(_2009 < 1u))
                {
                    break;
                }
                uint _824 = _2043 + (_2043 << 10u);
                uint _826 = _824 ^ (_824 >> 6u);
                uint _828 = _826 + (_826 << 3u);
                uint _830 = _828 ^ (_828 >> 11u);
                _832 = _830 + (_830 << 15u);
                _838 = uintBitsToFloat((_2043 & 8388607u) | 1065353216u) - 1.0;
                _813 = _2009 + 1u;
                _2043 = _832;
                _2010 = _838;
                _2009 = _813;
                continue;
            }
            uvec2 _655 = uvec2(_638 + ivec2(0, 1));
            uint _842 = _655.y;
            uint _848 = _842 + (_842 << 10u);
            uint _850 = _848 ^ (_848 >> 6u);
            uint _852 = _850 + (_850 << 3u);
            uint _854 = _852 ^ (_852 >> 11u);
            uint _862 = (((_655.x * 1664525u) + (_854 + (_854 << 15u))) + 1013904223u) * 1664525u;
            uint _864 = _862 ^ (_862 >> 11u);
            uint _867 = _864 ^ ((_864 << 7u) & 2636928640u);
            uint _870 = _867 ^ ((_867 << 15u) & 4022730752u);
            uint _872 = _870 ^ (_870 >> 18u);
            _2016 = _2013;
            uint _889;
            uint _908;
            float _914;
            uint _2015 = 0u;
            uint _2042 = _872;
            for (;;)
            {
                if (!(_2015 < 1u))
                {
                    break;
                }
                uint _900 = _2042 + (_2042 << 10u);
                uint _902 = _900 ^ (_900 >> 6u);
                uint _904 = _902 + (_902 << 3u);
                uint _906 = _904 ^ (_904 >> 11u);
                _908 = _906 + (_906 << 15u);
                _914 = uintBitsToFloat((_2042 & 8388607u) | 1065353216u) - 1.0;
                _889 = _2015 + 1u;
                _2042 = _908;
                _2016 = _914;
                _2015 = _889;
                continue;
            }
            uvec2 _663 = uvec2(_638 + ivec2(1));
            uint _918 = _663.y;
            uint _924 = _918 + (_918 << 10u);
            uint _926 = _924 ^ (_924 >> 6u);
            uint _928 = _926 + (_926 << 3u);
            uint _930 = _928 ^ (_928 >> 11u);
            uint _938 = (((_663.x * 1664525u) + (_930 + (_930 << 15u))) + 1013904223u) * 1664525u;
            uint _940 = _938 ^ (_938 >> 11u);
            uint _943 = _940 ^ ((_940 << 7u) & 2636928640u);
            uint _946 = _943 ^ ((_943 << 15u) & 4022730752u);
            uint _948 = _946 ^ (_946 >> 18u);
            _2023 = _2020;
            uint _965;
            uint _984;
            float _990;
            uint _2022 = 0u;
            uint _2041 = _948;
            for (;;)
            {
                if (!(_2022 < 1u))
                {
                    break;
                }
                uint _976 = _2041 + (_2041 << 10u);
                uint _978 = _976 ^ (_976 >> 6u);
                uint _980 = _978 + (_978 << 3u);
                uint _982 = _980 ^ (_980 >> 11u);
                _984 = _982 + (_982 << 15u);
                _990 = uintBitsToFloat((_2041 & 8388607u) | 1065353216u) - 1.0;
                _965 = _2022 + 1u;
                _2041 = _984;
                _2023 = _990;
                _2022 = _965;
                continue;
            }
            vec2 _996 = (_639 * _639) * (vec2(3.0) - (vec2(2.0) * _639));
            float _671 = _996.x;
            float _672 = 1.0 - _671;
            float _674 = _996.y;
            _605 = _1880 + (_2028 * ((-1.0) + (2.0 * ((((1.0 - _674) * ((_2005 * _672) + (_2010 * _671))) + ((_2016 * _672) * _674)) + ((_2023 * _671) * _674)))));
            _607 = _2028 * 0.550000011920928955078125;
            _610 = (_2001 * 1.89999997615814208984375) * mat2(vec2(0.800000011920928955078125, -0.60000002384185791015625), vec2(0.60000002384185791015625, 0.800000011920928955078125));
            _614 = _1879 + 1;
            _2028 = _607;
            _2020 = _2023;
            _2013 = _2016;
            _2007 = _2010;
            _2002 = _2005;
            _2001 = _610;
            _1880 = _605;
            _1879 = _614;
            continue;
        }
        _1882 = Vertex_Position + (bevel_offset * _1880);
    }
    else
    {
        _1882 = Vertex_Position;
    }
    vec3 _1891;
    if (length(vec3(_121.x, _123.x, _125.x)) > 0.5)
    {
        float _1884;
        vec2 _1949;
        _1949 = (_1882.xz + vec2(seed)) + vec2(3234.0);
        _1884 = 0.0;
        float _1019;
        float _1021;
        vec2 _1024;
        int _1028;
        float _1955;
        float _1962;
        float _1970;
        float _1979;
        int _1883 = 0;
        float _1950;
        float _1957;
        float _1965;
        float _1974;
        float _1984 = 0.5;
        for (;;)
        {
            if (!(_1883 < 1))
            {
                break;
            }
            ivec2 _1052 = ivec2(floor(_1949));
            vec2 _1053 = fract(_1949);
            uvec2 _1054 = uvec2(_1052);
            uint _1104 = _1054.y;
            uint _1110 = _1104 + (_1104 << 10u);
            uint _1112 = _1110 ^ (_1110 >> 6u);
            uint _1114 = _1112 + (_1112 << 3u);
            uint _1116 = _1114 ^ (_1114 >> 11u);
            uint _1124 = (((_1054.x * 1664525u) + (_1116 + (_1116 << 15u))) + 1013904223u) * 1664525u;
            uint _1126 = _1124 ^ (_1124 >> 11u);
            uint _1129 = _1126 ^ ((_1126 << 7u) & 2636928640u);
            uint _1132 = _1129 ^ ((_1129 << 15u) & 4022730752u);
            uint _1134 = _1132 ^ (_1132 >> 18u);
            _1955 = _1950;
            uint _1151;
            uint _1170;
            float _1176;
            uint _1954 = 0u;
            uint _2000 = _1134;
            for (;;)
            {
                if (!(_1954 < 1u))
                {
                    break;
                }
                uint _1162 = _2000 + (_2000 << 10u);
                uint _1164 = _1162 ^ (_1162 >> 6u);
                uint _1166 = _1164 + (_1164 << 3u);
                uint _1168 = _1166 ^ (_1166 >> 11u);
                _1170 = _1168 + (_1168 << 15u);
                _1176 = uintBitsToFloat((_2000 & 8388607u) | 1065353216u) - 1.0;
                _1151 = _1954 + 1u;
                _2000 = _1170;
                _1955 = _1176;
                _1954 = _1151;
                continue;
            }
            uvec2 _1062 = uvec2(_1052 + ivec2(1, 0));
            uint _1180 = _1062.y;
            uint _1186 = _1180 + (_1180 << 10u);
            uint _1188 = _1186 ^ (_1186 >> 6u);
            uint _1190 = _1188 + (_1188 << 3u);
            uint _1192 = _1190 ^ (_1190 >> 11u);
            uint _1200 = (((_1062.x * 1664525u) + (_1192 + (_1192 << 15u))) + 1013904223u) * 1664525u;
            uint _1202 = _1200 ^ (_1200 >> 11u);
            uint _1205 = _1202 ^ ((_1202 << 7u) & 2636928640u);
            uint _1208 = _1205 ^ ((_1205 << 15u) & 4022730752u);
            uint _1210 = _1208 ^ (_1208 >> 18u);
            _1962 = _1957;
            uint _1227;
            uint _1246;
            float _1252;
            uint _1961 = 0u;
            uint _1999 = _1210;
            for (;;)
            {
                if (!(_1961 < 1u))
                {
                    break;
                }
                uint _1238 = _1999 + (_1999 << 10u);
                uint _1240 = _1238 ^ (_1238 >> 6u);
                uint _1242 = _1240 + (_1240 << 3u);
                uint _1244 = _1242 ^ (_1242 >> 11u);
                _1246 = _1244 + (_1244 << 15u);
                _1252 = uintBitsToFloat((_1999 & 8388607u) | 1065353216u) - 1.0;
                _1227 = _1961 + 1u;
                _1999 = _1246;
                _1962 = _1252;
                _1961 = _1227;
                continue;
            }
            uvec2 _1069 = uvec2(_1052 + ivec2(0, 1));
            uint _1256 = _1069.y;
            uint _1262 = _1256 + (_1256 << 10u);
            uint _1264 = _1262 ^ (_1262 >> 6u);
            uint _1266 = _1264 + (_1264 << 3u);
            uint _1268 = _1266 ^ (_1266 >> 11u);
            uint _1276 = (((_1069.x * 1664525u) + (_1268 + (_1268 << 15u))) + 1013904223u) * 1664525u;
            uint _1278 = _1276 ^ (_1276 >> 11u);
            uint _1281 = _1278 ^ ((_1278 << 7u) & 2636928640u);
            uint _1284 = _1281 ^ ((_1281 << 15u) & 4022730752u);
            uint _1286 = _1284 ^ (_1284 >> 18u);
            _1970 = _1965;
            uint _1303;
            uint _1322;
            float _1328;
            uint _1969 = 0u;
            uint _1998 = _1286;
            for (;;)
            {
                if (!(_1969 < 1u))
                {
                    break;
                }
                uint _1314 = _1998 + (_1998 << 10u);
                uint _1316 = _1314 ^ (_1314 >> 6u);
                uint _1318 = _1316 + (_1316 << 3u);
                uint _1320 = _1318 ^ (_1318 >> 11u);
                _1322 = _1320 + (_1320 << 15u);
                _1328 = uintBitsToFloat((_1998 & 8388607u) | 1065353216u) - 1.0;
                _1303 = _1969 + 1u;
                _1998 = _1322;
                _1970 = _1328;
                _1969 = _1303;
                continue;
            }
            uvec2 _1077 = uvec2(_1052 + ivec2(1));
            uint _1332 = _1077.y;
            uint _1338 = _1332 + (_1332 << 10u);
            uint _1340 = _1338 ^ (_1338 >> 6u);
            uint _1342 = _1340 + (_1340 << 3u);
            uint _1344 = _1342 ^ (_1342 >> 11u);
            uint _1352 = (((_1077.x * 1664525u) + (_1344 + (_1344 << 15u))) + 1013904223u) * 1664525u;
            uint _1354 = _1352 ^ (_1352 >> 11u);
            uint _1357 = _1354 ^ ((_1354 << 7u) & 2636928640u);
            uint _1360 = _1357 ^ ((_1357 << 15u) & 4022730752u);
            uint _1362 = _1360 ^ (_1360 >> 18u);
            _1979 = _1974;
            uint _1379;
            uint _1398;
            float _1404;
            uint _1978 = 0u;
            uint _1997 = _1362;
            for (;;)
            {
                if (!(_1978 < 1u))
                {
                    break;
                }
                uint _1390 = _1997 + (_1997 << 10u);
                uint _1392 = _1390 ^ (_1390 >> 6u);
                uint _1394 = _1392 + (_1392 << 3u);
                uint _1396 = _1394 ^ (_1394 >> 11u);
                _1398 = _1396 + (_1396 << 15u);
                _1404 = uintBitsToFloat((_1997 & 8388607u) | 1065353216u) - 1.0;
                _1379 = _1978 + 1u;
                _1997 = _1398;
                _1979 = _1404;
                _1978 = _1379;
                continue;
            }
            vec2 _1410 = (_1053 * _1053) * (vec2(3.0) - (vec2(2.0) * _1053));
            float _1085 = _1410.x;
            float _1086 = 1.0 - _1085;
            float _1088 = _1410.y;
            _1019 = _1884 + (_1984 * ((-1.0) + (2.0 * ((((1.0 - _1088) * ((_1955 * _1086) + (_1962 * _1085))) + ((_1970 * _1086) * _1088)) + ((_1979 * _1085) * _1088)))));
            _1021 = _1984 * 0.550000011920928955078125;
            _1024 = (_1949 * 1.89999997615814208984375) * mat2(vec2(0.800000011920928955078125, -0.60000002384185791015625), vec2(0.60000002384185791015625, 0.800000011920928955078125));
            _1028 = _1883 + 1;
            _1984 = _1021;
            _1974 = _1979;
            _1965 = _1970;
            _1957 = _1962;
            _1950 = _1955;
            _1949 = _1024;
            _1884 = _1019;
            _1883 = _1028;
            continue;
        }
        vec3 _1874 = _1882;
        _1874.z = _1882.z + (_1884 * 0.5);
        float _1887;
        vec2 _1892;
        _1892 = (_1874.xz * 2.0) + vec2(_131 * 0.0199999995529651641845703125);
        _1887 = 0.0;
        float _1433;
        float _1435;
        vec2 _1438;
        int _1442;
        float _1900;
        float _1908;
        float _1917;
        float _1927;
        int _1886 = 0;
        float _1893;
        float _1902;
        float _1911;
        float _1921;
        float _1932 = 0.5;
        for (;;)
        {
            if (!(_1886 < 1))
            {
                break;
            }
            ivec2 _1466 = ivec2(floor(_1892));
            vec2 _1467 = fract(_1892);
            uvec2 _1468 = uvec2(_1466);
            uint _1518 = _1468.y;
            uint _1524 = _1518 + (_1518 << 10u);
            uint _1526 = _1524 ^ (_1524 >> 6u);
            uint _1528 = _1526 + (_1526 << 3u);
            uint _1530 = _1528 ^ (_1528 >> 11u);
            uint _1538 = (((_1468.x * 1664525u) + (_1530 + (_1530 << 15u))) + 1013904223u) * 1664525u;
            uint _1540 = _1538 ^ (_1538 >> 11u);
            uint _1543 = _1540 ^ ((_1540 << 7u) & 2636928640u);
            uint _1546 = _1543 ^ ((_1543 << 15u) & 4022730752u);
            uint _1548 = _1546 ^ (_1546 >> 18u);
            _1900 = _1893;
            uint _1565;
            uint _1584;
            float _1590;
            uint _1899 = 0u;
            uint _1948 = _1548;
            for (;;)
            {
                if (!(_1899 < 1u))
                {
                    break;
                }
                uint _1576 = _1948 + (_1948 << 10u);
                uint _1578 = _1576 ^ (_1576 >> 6u);
                uint _1580 = _1578 + (_1578 << 3u);
                uint _1582 = _1580 ^ (_1580 >> 11u);
                _1584 = _1582 + (_1582 << 15u);
                _1590 = uintBitsToFloat((_1948 & 8388607u) | 1065353216u) - 1.0;
                _1565 = _1899 + 1u;
                _1948 = _1584;
                _1900 = _1590;
                _1899 = _1565;
                continue;
            }
            uvec2 _1476 = uvec2(_1466 + ivec2(1, 0));
            uint _1594 = _1476.y;
            uint _1600 = _1594 + (_1594 << 10u);
            uint _1602 = _1600 ^ (_1600 >> 6u);
            uint _1604 = _1602 + (_1602 << 3u);
            uint _1606 = _1604 ^ (_1604 >> 11u);
            uint _1614 = (((_1476.x * 1664525u) + (_1606 + (_1606 << 15u))) + 1013904223u) * 1664525u;
            uint _1616 = _1614 ^ (_1614 >> 11u);
            uint _1619 = _1616 ^ ((_1616 << 7u) & 2636928640u);
            uint _1622 = _1619 ^ ((_1619 << 15u) & 4022730752u);
            uint _1624 = _1622 ^ (_1622 >> 18u);
            _1908 = _1902;
            uint _1641;
            uint _1660;
            float _1666;
            uint _1907 = 0u;
            uint _1947 = _1624;
            for (;;)
            {
                if (!(_1907 < 1u))
                {
                    break;
                }
                uint _1652 = _1947 + (_1947 << 10u);
                uint _1654 = _1652 ^ (_1652 >> 6u);
                uint _1656 = _1654 + (_1654 << 3u);
                uint _1658 = _1656 ^ (_1656 >> 11u);
                _1660 = _1658 + (_1658 << 15u);
                _1666 = uintBitsToFloat((_1947 & 8388607u) | 1065353216u) - 1.0;
                _1641 = _1907 + 1u;
                _1947 = _1660;
                _1908 = _1666;
                _1907 = _1641;
                continue;
            }
            uvec2 _1483 = uvec2(_1466 + ivec2(0, 1));
            uint _1670 = _1483.y;
            uint _1676 = _1670 + (_1670 << 10u);
            uint _1678 = _1676 ^ (_1676 >> 6u);
            uint _1680 = _1678 + (_1678 << 3u);
            uint _1682 = _1680 ^ (_1680 >> 11u);
            uint _1690 = (((_1483.x * 1664525u) + (_1682 + (_1682 << 15u))) + 1013904223u) * 1664525u;
            uint _1692 = _1690 ^ (_1690 >> 11u);
            uint _1695 = _1692 ^ ((_1692 << 7u) & 2636928640u);
            uint _1698 = _1695 ^ ((_1695 << 15u) & 4022730752u);
            uint _1700 = _1698 ^ (_1698 >> 18u);
            _1917 = _1911;
            uint _1717;
            uint _1736;
            float _1742;
            uint _1916 = 0u;
            uint _1946 = _1700;
            for (;;)
            {
                if (!(_1916 < 1u))
                {
                    break;
                }
                uint _1728 = _1946 + (_1946 << 10u);
                uint _1730 = _1728 ^ (_1728 >> 6u);
                uint _1732 = _1730 + (_1730 << 3u);
                uint _1734 = _1732 ^ (_1732 >> 11u);
                _1736 = _1734 + (_1734 << 15u);
                _1742 = uintBitsToFloat((_1946 & 8388607u) | 1065353216u) - 1.0;
                _1717 = _1916 + 1u;
                _1946 = _1736;
                _1917 = _1742;
                _1916 = _1717;
                continue;
            }
            uvec2 _1491 = uvec2(_1466 + ivec2(1));
            uint _1746 = _1491.y;
            uint _1752 = _1746 + (_1746 << 10u);
            uint _1754 = _1752 ^ (_1752 >> 6u);
            uint _1756 = _1754 + (_1754 << 3u);
            uint _1758 = _1756 ^ (_1756 >> 11u);
            uint _1766 = (((_1491.x * 1664525u) + (_1758 + (_1758 << 15u))) + 1013904223u) * 1664525u;
            uint _1768 = _1766 ^ (_1766 >> 11u);
            uint _1771 = _1768 ^ ((_1768 << 7u) & 2636928640u);
            uint _1774 = _1771 ^ ((_1771 << 15u) & 4022730752u);
            uint _1776 = _1774 ^ (_1774 >> 18u);
            _1927 = _1921;
            uint _1793;
            uint _1812;
            float _1818;
            uint _1926 = 0u;
            uint _1945 = _1776;
            for (;;)
            {
                if (!(_1926 < 1u))
                {
                    break;
                }
                uint _1804 = _1945 + (_1945 << 10u);
                uint _1806 = _1804 ^ (_1804 >> 6u);
                uint _1808 = _1806 + (_1806 << 3u);
                uint _1810 = _1808 ^ (_1808 >> 11u);
                _1812 = _1810 + (_1810 << 15u);
                _1818 = uintBitsToFloat((_1945 & 8388607u) | 1065353216u) - 1.0;
                _1793 = _1926 + 1u;
                _1945 = _1812;
                _1927 = _1818;
                _1926 = _1793;
                continue;
            }
            vec2 _1824 = (_1467 * _1467) * (vec2(3.0) - (vec2(2.0) * _1467));
            float _1499 = _1824.x;
            float _1500 = 1.0 - _1499;
            float _1502 = _1824.y;
            _1433 = _1887 + (_1932 * ((-1.0) + (2.0 * ((((1.0 - _1502) * ((_1900 * _1500) + (_1908 * _1499))) + ((_1917 * _1500) * _1502)) + ((_1927 * _1499) * _1502)))));
            _1435 = _1932 * 0.550000011920928955078125;
            _1438 = (_1892 * 1.89999997615814208984375) * mat2(vec2(0.800000011920928955078125, -0.60000002384185791015625), vec2(0.60000002384185791015625, 0.800000011920928955078125));
            _1442 = _1886 + 1;
            _1932 = _1435;
            _1921 = _1927;
            _1911 = _1917;
            _1902 = _1908;
            _1893 = _1900;
            _1892 = _1438;
            _1887 = _1433;
            _1886 = _1442;
            continue;
        }
        float _1888;
        do
        {
            float _1833 = abs(_1887);
            if (_1833 > 0.100000001490116119384765625)
            {
                _1888 = 0.0;
                break;
            }
            float _1837 = _1833 * 10.0;
            _1888 = 1.0 - ((_1837 * _1837) * (3.0 - (_1833 * 20.0)));
            break;
        } while(false);
        _1874.y = _1882.y - (_1888 * 0.100000001490116119384765625);
        _1891 = _1874;
    }
    else
    {
        _1891 = _1882;
    }
    vec3 _498 = vec4(_1891, 1.0) * _584;
    gl_Position = vec4(_498, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_frag_position_ws = _498.xyz;
    entryPointParam_vs_main_frag_seed = seed;
    entryPointParam_vs_main_frag_normal = (vec4(Vertex_Normal, 0.0) * _584).xyz;
}

