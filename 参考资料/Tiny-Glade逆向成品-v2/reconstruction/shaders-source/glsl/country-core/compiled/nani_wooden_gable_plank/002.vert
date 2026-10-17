#version 460

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct WoodenGablePlank_natural
{
    Affine3Packed_natural transform;
    int seed;
    uint color_source;
    uint flags;
    uint pad0;
    float skew_min_y_left_01;
    float skew_min_y_right_01;
    float skew_max_y_left_01;
    float skew_max_y_right_01;
    uvec2 window_cut_buffer_address;
    uint window_cut_list;
    uint pad1;
};

layout(set = 6, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 0, std430) readonly buffer material_data_nani_instance_data
{
    WoodenGablePlank_natural _member0[];
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
layout(location = 6) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 7) flat out int entryPointParam_vs_main_color_source;

void main()
{
    uint _26 = uint(gl_InstanceIndex);
    mat3x4 _780 = transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].transform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].transform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].transform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].transform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].transform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].transform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].transform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].transform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].transform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].transform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].transform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].transform.data.data[11])));
    vec3 _104 = Vertex_Position;
    float _115 = length(vec3(_780[0].y, _780[1].y, _780[2].y));
    float _1923;
    do
    {
        if (_115 <= 9.9999997473787516355514526367188e-05)
        {
            _1923 = _104.y;
            break;
        }
        float _792 = min(0.1599999964237213134765625, min(0.07999999821186065673828125 / _115, 0.449999988079071044921875));
        if (_104.y < 0.1599999964237213134765625)
        {
            _1923 = (_104.y * _792) * 6.25;
            break;
        }
        if (_104.y > 0.84000003337860107421875)
        {
            _1923 = 1.0 - (((1.0 - _104.y) * _792) * 6.25);
            break;
        }
        _1923 = _792 + (((_104.y - 0.1599999964237213134765625) * 1.47058808803558349609375) * ((1.0 - _792) - _792));
        break;
    } while(false);
    vec3 _1912 = _104;
    _1912.y = _1923;
    float _171 = clamp(_104.x + 0.5, 0.0, 1.0);
    vec3 _1925;
    if ((material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].flags & 2u) != 0u)
    {
        vec3 _1914 = _1912;
        _1914.y = max(_1923, mix(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].skew_min_y_left_01, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].skew_min_y_right_01, _171));
        _1925 = _1914;
    }
    else
    {
        _1925 = _1912;
    }
    vec3 _1926;
    if ((material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].flags & 4u) != 0u)
    {
        vec3 _1916 = _1925;
        _1916.y = min(_1925.y, mix(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].skew_max_y_left_01, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].skew_max_y_right_01, _171));
        _1926 = _1916;
    }
    else
    {
        _1926 = _1925;
    }
    int seed = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].seed + 45;
    mat3x4 _260 = mat4(vec4(1.0, 0.0, 0.0, 0.0), vec4(0.0, 1.0, 0.0, 0.0), vec4(0.0, 0.0, 1.0, 0.0), vec4(0.0, 0.0, 0.0, 1.0)) * _780;
    vec4 _264 = vec4(vec4(_1926, 1.0) * _260, 1.0);
    vec3 _266 = _264.xyz;
    vec3 _868 = _266 * 0.4000000059604644775390625;
    ivec3 _894 = ivec3(floor(_868));
    vec3 _895 = fract(_868);
    uvec3 _896 = uvec3(_894);
    uint _1010 = _896.z;
    uint _1016 = _1010 + (_1010 << 10u);
    uint _1018 = _1016 ^ (_1016 >> 6u);
    uint _1020 = _1018 + (_1018 << 3u);
    uint _1022 = _1020 ^ (_1020 >> 11u);
    uint _1030 = (((_896.y * 1664525u) + (_1022 + (_1022 << 15u))) + 1013904223u) * 1664525u;
    uint _1032 = _1030 ^ (_1030 >> 11u);
    uint _1035 = _1032 ^ ((_1032 << 7u) & 2636928640u);
    uint _1038 = _1035 ^ ((_1035 << 15u) & 4022730752u);
    uint _1046 = (((_896.x * 1664525u) + (_1038 ^ (_1038 >> 18u))) + 1013904223u) * 1664525u;
    uint _1048 = _1046 ^ (_1046 >> 11u);
    uint _1051 = _1048 ^ ((_1048 << 7u) & 2636928640u);
    uint _1054 = _1051 ^ ((_1051 << 15u) & 4022730752u);
    uint _1056 = _1054 ^ (_1054 >> 18u);
    uint _1075;
    uint _1094;
    vec2 _883;
    uint _1931 = 0u;
    uint _2003 = _1056;
    for (;;)
    {
        if (!(_1931 < 2u))
        {
            break;
        }
        uint _1086 = _2003 + (_2003 << 10u);
        uint _1088 = _1086 ^ (_1086 >> 6u);
        uint _1090 = _1088 + (_1088 << 3u);
        uint _1092 = _1090 ^ (_1090 >> 11u);
        _1094 = _1092 + (_1092 << 15u);
        _883[_1931] = uintBitsToFloat((_2003 & 8388607u) | 1065353216u) - 1.0;
        _1075 = _1931 + 1u;
        _2003 = _1094;
        _1931 = _1075;
        continue;
    }
    uvec3 _905 = uvec3(_894 + ivec3(1, 0, 0));
    uint _1110 = _905.z;
    uint _1116 = _1110 + (_1110 << 10u);
    uint _1118 = _1116 ^ (_1116 >> 6u);
    uint _1120 = _1118 + (_1118 << 3u);
    uint _1122 = _1120 ^ (_1120 >> 11u);
    uint _1130 = (((_905.y * 1664525u) + (_1122 + (_1122 << 15u))) + 1013904223u) * 1664525u;
    uint _1132 = _1130 ^ (_1130 >> 11u);
    uint _1135 = _1132 ^ ((_1132 << 7u) & 2636928640u);
    uint _1138 = _1135 ^ ((_1135 << 15u) & 4022730752u);
    uint _1146 = (((_905.x * 1664525u) + (_1138 ^ (_1138 >> 18u))) + 1013904223u) * 1664525u;
    uint _1148 = _1146 ^ (_1146 >> 11u);
    uint _1151 = _1148 ^ ((_1148 << 7u) & 2636928640u);
    uint _1154 = _1151 ^ ((_1151 << 15u) & 4022730752u);
    uint _1156 = _1154 ^ (_1154 >> 18u);
    uint _1175;
    uint _1194;
    vec2 _884;
    uint _1936 = 0u;
    uint _2002 = _1156;
    for (;;)
    {
        if (!(_1936 < 2u))
        {
            break;
        }
        uint _1186 = _2002 + (_2002 << 10u);
        uint _1188 = _1186 ^ (_1186 >> 6u);
        uint _1190 = _1188 + (_1188 << 3u);
        uint _1192 = _1190 ^ (_1190 >> 11u);
        _1194 = _1192 + (_1192 << 15u);
        _884[_1936] = uintBitsToFloat((_2002 & 8388607u) | 1065353216u) - 1.0;
        _1175 = _1936 + 1u;
        _2002 = _1194;
        _1936 = _1175;
        continue;
    }
    uvec3 _912 = uvec3(_894 + ivec3(0, 1, 0));
    uint _1210 = _912.z;
    uint _1216 = _1210 + (_1210 << 10u);
    uint _1218 = _1216 ^ (_1216 >> 6u);
    uint _1220 = _1218 + (_1218 << 3u);
    uint _1222 = _1220 ^ (_1220 >> 11u);
    uint _1230 = (((_912.y * 1664525u) + (_1222 + (_1222 << 15u))) + 1013904223u) * 1664525u;
    uint _1232 = _1230 ^ (_1230 >> 11u);
    uint _1235 = _1232 ^ ((_1232 << 7u) & 2636928640u);
    uint _1238 = _1235 ^ ((_1235 << 15u) & 4022730752u);
    uint _1246 = (((_912.x * 1664525u) + (_1238 ^ (_1238 >> 18u))) + 1013904223u) * 1664525u;
    uint _1248 = _1246 ^ (_1246 >> 11u);
    uint _1251 = _1248 ^ ((_1248 << 7u) & 2636928640u);
    uint _1254 = _1251 ^ ((_1251 << 15u) & 4022730752u);
    uint _1256 = _1254 ^ (_1254 >> 18u);
    uint _1275;
    uint _1294;
    vec2 _885;
    uint _1942 = 0u;
    uint _2001 = _1256;
    for (;;)
    {
        if (!(_1942 < 2u))
        {
            break;
        }
        uint _1286 = _2001 + (_2001 << 10u);
        uint _1288 = _1286 ^ (_1286 >> 6u);
        uint _1290 = _1288 + (_1288 << 3u);
        uint _1292 = _1290 ^ (_1290 >> 11u);
        _1294 = _1292 + (_1292 << 15u);
        _885[_1942] = uintBitsToFloat((_2001 & 8388607u) | 1065353216u) - 1.0;
        _1275 = _1942 + 1u;
        _2001 = _1294;
        _1942 = _1275;
        continue;
    }
    uvec3 _920 = uvec3(_894 + ivec3(1, 1, 0));
    uint _1310 = _920.z;
    uint _1316 = _1310 + (_1310 << 10u);
    uint _1318 = _1316 ^ (_1316 >> 6u);
    uint _1320 = _1318 + (_1318 << 3u);
    uint _1322 = _1320 ^ (_1320 >> 11u);
    uint _1330 = (((_920.y * 1664525u) + (_1322 + (_1322 << 15u))) + 1013904223u) * 1664525u;
    uint _1332 = _1330 ^ (_1330 >> 11u);
    uint _1335 = _1332 ^ ((_1332 << 7u) & 2636928640u);
    uint _1338 = _1335 ^ ((_1335 << 15u) & 4022730752u);
    uint _1346 = (((_920.x * 1664525u) + (_1338 ^ (_1338 >> 18u))) + 1013904223u) * 1664525u;
    uint _1348 = _1346 ^ (_1346 >> 11u);
    uint _1351 = _1348 ^ ((_1348 << 7u) & 2636928640u);
    uint _1354 = _1351 ^ ((_1351 << 15u) & 4022730752u);
    uint _1356 = _1354 ^ (_1354 >> 18u);
    uint _1375;
    uint _1394;
    vec2 _886;
    uint _1949 = 0u;
    uint _2000 = _1356;
    for (;;)
    {
        if (!(_1949 < 2u))
        {
            break;
        }
        uint _1386 = _2000 + (_2000 << 10u);
        uint _1388 = _1386 ^ (_1386 >> 6u);
        uint _1390 = _1388 + (_1388 << 3u);
        uint _1392 = _1390 ^ (_1390 >> 11u);
        _1394 = _1392 + (_1392 << 15u);
        _886[_1949] = uintBitsToFloat((_2000 & 8388607u) | 1065353216u) - 1.0;
        _1375 = _1949 + 1u;
        _2000 = _1394;
        _1949 = _1375;
        continue;
    }
    uvec3 _927 = uvec3(_894 + ivec3(0, 0, 1));
    uint _1410 = _927.z;
    uint _1416 = _1410 + (_1410 << 10u);
    uint _1418 = _1416 ^ (_1416 >> 6u);
    uint _1420 = _1418 + (_1418 << 3u);
    uint _1422 = _1420 ^ (_1420 >> 11u);
    uint _1430 = (((_927.y * 1664525u) + (_1422 + (_1422 << 15u))) + 1013904223u) * 1664525u;
    uint _1432 = _1430 ^ (_1430 >> 11u);
    uint _1435 = _1432 ^ ((_1432 << 7u) & 2636928640u);
    uint _1438 = _1435 ^ ((_1435 << 15u) & 4022730752u);
    uint _1446 = (((_927.x * 1664525u) + (_1438 ^ (_1438 >> 18u))) + 1013904223u) * 1664525u;
    uint _1448 = _1446 ^ (_1446 >> 11u);
    uint _1451 = _1448 ^ ((_1448 << 7u) & 2636928640u);
    uint _1454 = _1451 ^ ((_1451 << 15u) & 4022730752u);
    uint _1456 = _1454 ^ (_1454 >> 18u);
    uint _1475;
    uint _1494;
    vec2 _887;
    uint _1957 = 0u;
    uint _1999 = _1456;
    for (;;)
    {
        if (!(_1957 < 2u))
        {
            break;
        }
        uint _1486 = _1999 + (_1999 << 10u);
        uint _1488 = _1486 ^ (_1486 >> 6u);
        uint _1490 = _1488 + (_1488 << 3u);
        uint _1492 = _1490 ^ (_1490 >> 11u);
        _1494 = _1492 + (_1492 << 15u);
        _887[_1957] = uintBitsToFloat((_1999 & 8388607u) | 1065353216u) - 1.0;
        _1475 = _1957 + 1u;
        _1999 = _1494;
        _1957 = _1475;
        continue;
    }
    uvec3 _936 = uvec3(_894 + ivec3(1, 0, 1));
    uint _1510 = _936.z;
    uint _1516 = _1510 + (_1510 << 10u);
    uint _1518 = _1516 ^ (_1516 >> 6u);
    uint _1520 = _1518 + (_1518 << 3u);
    uint _1522 = _1520 ^ (_1520 >> 11u);
    uint _1530 = (((_936.y * 1664525u) + (_1522 + (_1522 << 15u))) + 1013904223u) * 1664525u;
    uint _1532 = _1530 ^ (_1530 >> 11u);
    uint _1535 = _1532 ^ ((_1532 << 7u) & 2636928640u);
    uint _1538 = _1535 ^ ((_1535 << 15u) & 4022730752u);
    uint _1546 = (((_936.x * 1664525u) + (_1538 ^ (_1538 >> 18u))) + 1013904223u) * 1664525u;
    uint _1548 = _1546 ^ (_1546 >> 11u);
    uint _1551 = _1548 ^ ((_1548 << 7u) & 2636928640u);
    uint _1554 = _1551 ^ ((_1551 << 15u) & 4022730752u);
    uint _1556 = _1554 ^ (_1554 >> 18u);
    uint _1575;
    uint _1594;
    vec2 _888;
    uint _1966 = 0u;
    uint _1998 = _1556;
    for (;;)
    {
        if (!(_1966 < 2u))
        {
            break;
        }
        uint _1586 = _1998 + (_1998 << 10u);
        uint _1588 = _1586 ^ (_1586 >> 6u);
        uint _1590 = _1588 + (_1588 << 3u);
        uint _1592 = _1590 ^ (_1590 >> 11u);
        _1594 = _1592 + (_1592 << 15u);
        _888[_1966] = uintBitsToFloat((_1998 & 8388607u) | 1065353216u) - 1.0;
        _1575 = _1966 + 1u;
        _1998 = _1594;
        _1966 = _1575;
        continue;
    }
    uvec3 _943 = uvec3(_894 + ivec3(0, 1, 1));
    uint _1610 = _943.z;
    uint _1616 = _1610 + (_1610 << 10u);
    uint _1618 = _1616 ^ (_1616 >> 6u);
    uint _1620 = _1618 + (_1618 << 3u);
    uint _1622 = _1620 ^ (_1620 >> 11u);
    uint _1630 = (((_943.y * 1664525u) + (_1622 + (_1622 << 15u))) + 1013904223u) * 1664525u;
    uint _1632 = _1630 ^ (_1630 >> 11u);
    uint _1635 = _1632 ^ ((_1632 << 7u) & 2636928640u);
    uint _1638 = _1635 ^ ((_1635 << 15u) & 4022730752u);
    uint _1646 = (((_943.x * 1664525u) + (_1638 ^ (_1638 >> 18u))) + 1013904223u) * 1664525u;
    uint _1648 = _1646 ^ (_1646 >> 11u);
    uint _1651 = _1648 ^ ((_1648 << 7u) & 2636928640u);
    uint _1654 = _1651 ^ ((_1651 << 15u) & 4022730752u);
    uint _1656 = _1654 ^ (_1654 >> 18u);
    uint _1675;
    uint _1694;
    vec2 _889;
    uint _1976 = 0u;
    uint _1997 = _1656;
    for (;;)
    {
        if (!(_1976 < 2u))
        {
            break;
        }
        uint _1686 = _1997 + (_1997 << 10u);
        uint _1688 = _1686 ^ (_1686 >> 6u);
        uint _1690 = _1688 + (_1688 << 3u);
        uint _1692 = _1690 ^ (_1690 >> 11u);
        _1694 = _1692 + (_1692 << 15u);
        _889[_1976] = uintBitsToFloat((_1997 & 8388607u) | 1065353216u) - 1.0;
        _1675 = _1976 + 1u;
        _1997 = _1694;
        _1976 = _1675;
        continue;
    }
    uvec3 _951 = uvec3(_894 + ivec3(1));
    uint _1710 = _951.z;
    uint _1716 = _1710 + (_1710 << 10u);
    uint _1718 = _1716 ^ (_1716 >> 6u);
    uint _1720 = _1718 + (_1718 << 3u);
    uint _1722 = _1720 ^ (_1720 >> 11u);
    uint _1730 = (((_951.y * 1664525u) + (_1722 + (_1722 << 15u))) + 1013904223u) * 1664525u;
    uint _1732 = _1730 ^ (_1730 >> 11u);
    uint _1735 = _1732 ^ ((_1732 << 7u) & 2636928640u);
    uint _1738 = _1735 ^ ((_1735 << 15u) & 4022730752u);
    uint _1746 = (((_951.x * 1664525u) + (_1738 ^ (_1738 >> 18u))) + 1013904223u) * 1664525u;
    uint _1748 = _1746 ^ (_1746 >> 11u);
    uint _1751 = _1748 ^ ((_1748 << 7u) & 2636928640u);
    uint _1754 = _1751 ^ ((_1751 << 15u) & 4022730752u);
    uint _1756 = _1754 ^ (_1754 >> 18u);
    uint _1775;
    uint _1794;
    vec2 _890;
    uint _1987 = 0u;
    uint _1996 = _1756;
    for (;;)
    {
        if (!(_1987 < 2u))
        {
            break;
        }
        uint _1786 = _1996 + (_1996 << 10u);
        uint _1788 = _1786 ^ (_1786 >> 6u);
        uint _1790 = _1788 + (_1788 << 3u);
        uint _1792 = _1790 ^ (_1790 >> 11u);
        _1794 = _1792 + (_1792 << 15u);
        _890[_1987] = uintBitsToFloat((_1996 & 8388607u) | 1065353216u) - 1.0;
        _1775 = _1987 + 1u;
        _1996 = _1794;
        _1987 = _1775;
        continue;
    }
    vec3 _1806 = (_895 * _895) * (vec3(3.0) - (vec3(2.0) * _895));
    float _959 = _1806.x;
    float _960 = 1.0 - _959;
    float _962 = _1806.y;
    float _963 = 1.0 - _962;
    float _965 = _1806.z;
    float _966 = 1.0 - _965;
    vec2 _873 = clamp((((((((((((_883 * _960) * _963) * _966) + (((_884 * _959) * _963) * _966)) + (((_885 * _960) * _962) * _966)) + (((_886 * _959) * _962) * _966)) + (((_887 * _960) * _963) * _965)) + (((_888 * _959) * _963) * _965)) + (((_889 * _960) * _962) * _965)) + (((_890 * _959) * _962) * _965)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
    vec3 _587 = _266 + (vec3(_873.x, 0.0, _873.y) * 0.0599999986588954925537109375);
    vec4 _1918 = _264;
    _1918.x = _587.x;
    _1918.y = _587.y;
    _1918.z = _587.z;
    mat3 _602 = mat3(_260[0].xyz, _260[1].xyz, _260[2].xyz);
    vec3 _1812 = vec3(1.0, 0.0, 0.0) * _602;
    vec3 _1813 = vec3(0.0, 1.0, 0.0) * _602;
    vec3 _1814 = vec3(0.0, 0.0, 1.0) * _602;
    vec3 _1817 = cross(_1812, _1813);
    vec3 _1820 = vec3(1.0 / dot(_1814, _1817));
    uint _671 = uint(seed ^ 2340774);
    uint _1832 = _671 + (_671 << 10u);
    uint _1834 = _1832 ^ (_1832 >> 6u);
    uint _1836 = _1834 + (_1834 << 3u);
    uint _1838 = _1836 ^ (_1836 >> 11u);
    uint _681 = uint(seed ^ 934565);
    uint _1854 = _681 + (_681 << 10u);
    uint _1856 = _1854 ^ (_1854 >> 6u);
    uint _1858 = _1856 + (_1856 << 3u);
    uint _1860 = _1858 ^ (_1858 >> 11u);
    gl_Position = _1918 * current_view.world_to_sample;
    entryPointParam_vs_main_frag_position_ws = _1918.xyz;
    entryPointParam_vs_main_frag_normal_ws = normalize(Vertex_Normal * transpose(mat3(cross(_1813, _1814) * _1820, cross(_1814, _1812) * _1820, _1817 * _1820)));
    entryPointParam_vs_main_instance_index = nani_instance_indirection_buffer._member0[_26];
    entryPointParam_vs_main_window_cut_list = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].window_cut_list;
    entryPointParam_vs_main_frag_seed = seed;
    entryPointParam_vs_main_frag_is_bevel = is_bevel;
    entryPointParam_vs_main_frag_uv = (((Vertex_UV * 0.4000000059604644775390625) + vec2(uintBitsToFloat(((_1838 + (_1838 << 15u)) & 8388607u) | 1065353216u) - 1.0, uintBitsToFloat(((_1860 + (_1860 << 15u)) & 8388607u) | 1065353216u) - 1.0)) + vec2(float(is_bevel) * 0.12000000476837158203125)) * vec2(1.0, _115 * 0.4000000059604644775390625);
    entryPointParam_vs_main_color_source = int(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_26]].color_source);
}

