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
    uint is_semitransparent;
    uint color_id;
    uint pad0;
    uint pad1;
};

layout(set = 19, binding = 0, std430) readonly buffer StructuredBuffer
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

layout(location = 0) in vec3 Vertex_Position;
layout(location = 1) in vec3 Vertex_Color;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 3) in vec2 Vertex_UV;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 3) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 4) flat out uint entryPointParam_vs_main_flags;
layout(location = 5) flat out uint entryPointParam_vs_main_color_id;

void main()
{
    uint _17 = uint(gl_InstanceIndex);
    mat3x4 _549 = transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].xform.data.data[11])));
    vec3 _512 = vec4(Vertex_Position, 1.0) * _549;
    vec3 _552 = _512 * 0.4000000059604644775390625;
    ivec3 _578 = ivec3(floor(_552));
    vec3 _579 = fract(_552);
    uvec3 _580 = uvec3(_578);
    uint _694 = _580.z;
    uint _700 = _694 + (_694 << 10u);
    uint _702 = _700 ^ (_700 >> 6u);
    uint _704 = _702 + (_702 << 3u);
    uint _706 = _704 ^ (_704 >> 11u);
    uint _714 = (((_580.y * 1664525u) + (_706 + (_706 << 15u))) + 1013904223u) * 1664525u;
    uint _716 = _714 ^ (_714 >> 11u);
    uint _719 = _716 ^ ((_716 << 7u) & 2636928640u);
    uint _722 = _719 ^ ((_719 << 15u) & 4022730752u);
    uint _730 = (((_580.x * 1664525u) + (_722 ^ (_722 >> 18u))) + 1013904223u) * 1664525u;
    uint _732 = _730 ^ (_730 >> 11u);
    uint _735 = _732 ^ ((_732 << 7u) & 2636928640u);
    uint _738 = _735 ^ ((_735 << 15u) & 4022730752u);
    uint _740 = _738 ^ (_738 >> 18u);
    uint _759;
    uint _778;
    vec2 _567;
    uint _1564 = 0u;
    uint _1607 = _740;
    for (;;)
    {
        if (!(_1564 < 2u))
        {
            break;
        }
        uint _770 = _1607 + (_1607 << 10u);
        uint _772 = _770 ^ (_770 >> 6u);
        uint _774 = _772 + (_772 << 3u);
        uint _776 = _774 ^ (_774 >> 11u);
        _778 = _776 + (_776 << 15u);
        _567[_1564] = uintBitsToFloat((_1607 & 8388607u) | 1065353216u) - 1.0;
        _759 = _1564 + 1u;
        _1607 = _778;
        _1564 = _759;
        continue;
    }
    uvec3 _589 = uvec3(_578 + ivec3(1, 0, 0));
    uint _794 = _589.z;
    uint _800 = _794 + (_794 << 10u);
    uint _802 = _800 ^ (_800 >> 6u);
    uint _804 = _802 + (_802 << 3u);
    uint _806 = _804 ^ (_804 >> 11u);
    uint _814 = (((_589.y * 1664525u) + (_806 + (_806 << 15u))) + 1013904223u) * 1664525u;
    uint _816 = _814 ^ (_814 >> 11u);
    uint _819 = _816 ^ ((_816 << 7u) & 2636928640u);
    uint _822 = _819 ^ ((_819 << 15u) & 4022730752u);
    uint _830 = (((_589.x * 1664525u) + (_822 ^ (_822 >> 18u))) + 1013904223u) * 1664525u;
    uint _832 = _830 ^ (_830 >> 11u);
    uint _835 = _832 ^ ((_832 << 7u) & 2636928640u);
    uint _838 = _835 ^ ((_835 << 15u) & 4022730752u);
    uint _840 = _838 ^ (_838 >> 18u);
    uint _859;
    uint _878;
    vec2 _568;
    uint _1566 = 0u;
    uint _1606 = _840;
    for (;;)
    {
        if (!(_1566 < 2u))
        {
            break;
        }
        uint _870 = _1606 + (_1606 << 10u);
        uint _872 = _870 ^ (_870 >> 6u);
        uint _874 = _872 + (_872 << 3u);
        uint _876 = _874 ^ (_874 >> 11u);
        _878 = _876 + (_876 << 15u);
        _568[_1566] = uintBitsToFloat((_1606 & 8388607u) | 1065353216u) - 1.0;
        _859 = _1566 + 1u;
        _1606 = _878;
        _1566 = _859;
        continue;
    }
    uvec3 _596 = uvec3(_578 + ivec3(0, 1, 0));
    uint _894 = _596.z;
    uint _900 = _894 + (_894 << 10u);
    uint _902 = _900 ^ (_900 >> 6u);
    uint _904 = _902 + (_902 << 3u);
    uint _906 = _904 ^ (_904 >> 11u);
    uint _914 = (((_596.y * 1664525u) + (_906 + (_906 << 15u))) + 1013904223u) * 1664525u;
    uint _916 = _914 ^ (_914 >> 11u);
    uint _919 = _916 ^ ((_916 << 7u) & 2636928640u);
    uint _922 = _919 ^ ((_919 << 15u) & 4022730752u);
    uint _930 = (((_596.x * 1664525u) + (_922 ^ (_922 >> 18u))) + 1013904223u) * 1664525u;
    uint _932 = _930 ^ (_930 >> 11u);
    uint _935 = _932 ^ ((_932 << 7u) & 2636928640u);
    uint _938 = _935 ^ ((_935 << 15u) & 4022730752u);
    uint _940 = _938 ^ (_938 >> 18u);
    uint _959;
    uint _978;
    vec2 _569;
    uint _1569 = 0u;
    uint _1605 = _940;
    for (;;)
    {
        if (!(_1569 < 2u))
        {
            break;
        }
        uint _970 = _1605 + (_1605 << 10u);
        uint _972 = _970 ^ (_970 >> 6u);
        uint _974 = _972 + (_972 << 3u);
        uint _976 = _974 ^ (_974 >> 11u);
        _978 = _976 + (_976 << 15u);
        _569[_1569] = uintBitsToFloat((_1605 & 8388607u) | 1065353216u) - 1.0;
        _959 = _1569 + 1u;
        _1605 = _978;
        _1569 = _959;
        continue;
    }
    uvec3 _604 = uvec3(_578 + ivec3(1, 1, 0));
    uint _994 = _604.z;
    uint _1000 = _994 + (_994 << 10u);
    uint _1002 = _1000 ^ (_1000 >> 6u);
    uint _1004 = _1002 + (_1002 << 3u);
    uint _1006 = _1004 ^ (_1004 >> 11u);
    uint _1014 = (((_604.y * 1664525u) + (_1006 + (_1006 << 15u))) + 1013904223u) * 1664525u;
    uint _1016 = _1014 ^ (_1014 >> 11u);
    uint _1019 = _1016 ^ ((_1016 << 7u) & 2636928640u);
    uint _1022 = _1019 ^ ((_1019 << 15u) & 4022730752u);
    uint _1030 = (((_604.x * 1664525u) + (_1022 ^ (_1022 >> 18u))) + 1013904223u) * 1664525u;
    uint _1032 = _1030 ^ (_1030 >> 11u);
    uint _1035 = _1032 ^ ((_1032 << 7u) & 2636928640u);
    uint _1038 = _1035 ^ ((_1035 << 15u) & 4022730752u);
    uint _1040 = _1038 ^ (_1038 >> 18u);
    uint _1059;
    uint _1078;
    vec2 _570;
    uint _1573 = 0u;
    uint _1604 = _1040;
    for (;;)
    {
        if (!(_1573 < 2u))
        {
            break;
        }
        uint _1070 = _1604 + (_1604 << 10u);
        uint _1072 = _1070 ^ (_1070 >> 6u);
        uint _1074 = _1072 + (_1072 << 3u);
        uint _1076 = _1074 ^ (_1074 >> 11u);
        _1078 = _1076 + (_1076 << 15u);
        _570[_1573] = uintBitsToFloat((_1604 & 8388607u) | 1065353216u) - 1.0;
        _1059 = _1573 + 1u;
        _1604 = _1078;
        _1573 = _1059;
        continue;
    }
    uvec3 _611 = uvec3(_578 + ivec3(0, 0, 1));
    uint _1094 = _611.z;
    uint _1100 = _1094 + (_1094 << 10u);
    uint _1102 = _1100 ^ (_1100 >> 6u);
    uint _1104 = _1102 + (_1102 << 3u);
    uint _1106 = _1104 ^ (_1104 >> 11u);
    uint _1114 = (((_611.y * 1664525u) + (_1106 + (_1106 << 15u))) + 1013904223u) * 1664525u;
    uint _1116 = _1114 ^ (_1114 >> 11u);
    uint _1119 = _1116 ^ ((_1116 << 7u) & 2636928640u);
    uint _1122 = _1119 ^ ((_1119 << 15u) & 4022730752u);
    uint _1130 = (((_611.x * 1664525u) + (_1122 ^ (_1122 >> 18u))) + 1013904223u) * 1664525u;
    uint _1132 = _1130 ^ (_1130 >> 11u);
    uint _1135 = _1132 ^ ((_1132 << 7u) & 2636928640u);
    uint _1138 = _1135 ^ ((_1135 << 15u) & 4022730752u);
    uint _1140 = _1138 ^ (_1138 >> 18u);
    uint _1159;
    uint _1178;
    vec2 _571;
    uint _1578 = 0u;
    uint _1603 = _1140;
    for (;;)
    {
        if (!(_1578 < 2u))
        {
            break;
        }
        uint _1170 = _1603 + (_1603 << 10u);
        uint _1172 = _1170 ^ (_1170 >> 6u);
        uint _1174 = _1172 + (_1172 << 3u);
        uint _1176 = _1174 ^ (_1174 >> 11u);
        _1178 = _1176 + (_1176 << 15u);
        _571[_1578] = uintBitsToFloat((_1603 & 8388607u) | 1065353216u) - 1.0;
        _1159 = _1578 + 1u;
        _1603 = _1178;
        _1578 = _1159;
        continue;
    }
    uvec3 _620 = uvec3(_578 + ivec3(1, 0, 1));
    uint _1194 = _620.z;
    uint _1200 = _1194 + (_1194 << 10u);
    uint _1202 = _1200 ^ (_1200 >> 6u);
    uint _1204 = _1202 + (_1202 << 3u);
    uint _1206 = _1204 ^ (_1204 >> 11u);
    uint _1214 = (((_620.y * 1664525u) + (_1206 + (_1206 << 15u))) + 1013904223u) * 1664525u;
    uint _1216 = _1214 ^ (_1214 >> 11u);
    uint _1219 = _1216 ^ ((_1216 << 7u) & 2636928640u);
    uint _1222 = _1219 ^ ((_1219 << 15u) & 4022730752u);
    uint _1230 = (((_620.x * 1664525u) + (_1222 ^ (_1222 >> 18u))) + 1013904223u) * 1664525u;
    uint _1232 = _1230 ^ (_1230 >> 11u);
    uint _1235 = _1232 ^ ((_1232 << 7u) & 2636928640u);
    uint _1238 = _1235 ^ ((_1235 << 15u) & 4022730752u);
    uint _1240 = _1238 ^ (_1238 >> 18u);
    uint _1259;
    uint _1278;
    vec2 _572;
    uint _1584 = 0u;
    uint _1602 = _1240;
    for (;;)
    {
        if (!(_1584 < 2u))
        {
            break;
        }
        uint _1270 = _1602 + (_1602 << 10u);
        uint _1272 = _1270 ^ (_1270 >> 6u);
        uint _1274 = _1272 + (_1272 << 3u);
        uint _1276 = _1274 ^ (_1274 >> 11u);
        _1278 = _1276 + (_1276 << 15u);
        _572[_1584] = uintBitsToFloat((_1602 & 8388607u) | 1065353216u) - 1.0;
        _1259 = _1584 + 1u;
        _1602 = _1278;
        _1584 = _1259;
        continue;
    }
    uvec3 _627 = uvec3(_578 + ivec3(0, 1, 1));
    uint _1294 = _627.z;
    uint _1300 = _1294 + (_1294 << 10u);
    uint _1302 = _1300 ^ (_1300 >> 6u);
    uint _1304 = _1302 + (_1302 << 3u);
    uint _1306 = _1304 ^ (_1304 >> 11u);
    uint _1314 = (((_627.y * 1664525u) + (_1306 + (_1306 << 15u))) + 1013904223u) * 1664525u;
    uint _1316 = _1314 ^ (_1314 >> 11u);
    uint _1319 = _1316 ^ ((_1316 << 7u) & 2636928640u);
    uint _1322 = _1319 ^ ((_1319 << 15u) & 4022730752u);
    uint _1330 = (((_627.x * 1664525u) + (_1322 ^ (_1322 >> 18u))) + 1013904223u) * 1664525u;
    uint _1332 = _1330 ^ (_1330 >> 11u);
    uint _1335 = _1332 ^ ((_1332 << 7u) & 2636928640u);
    uint _1338 = _1335 ^ ((_1335 << 15u) & 4022730752u);
    uint _1340 = _1338 ^ (_1338 >> 18u);
    uint _1359;
    uint _1378;
    vec2 _573;
    uint _1591 = 0u;
    uint _1601 = _1340;
    for (;;)
    {
        if (!(_1591 < 2u))
        {
            break;
        }
        uint _1370 = _1601 + (_1601 << 10u);
        uint _1372 = _1370 ^ (_1370 >> 6u);
        uint _1374 = _1372 + (_1372 << 3u);
        uint _1376 = _1374 ^ (_1374 >> 11u);
        _1378 = _1376 + (_1376 << 15u);
        _573[_1591] = uintBitsToFloat((_1601 & 8388607u) | 1065353216u) - 1.0;
        _1359 = _1591 + 1u;
        _1601 = _1378;
        _1591 = _1359;
        continue;
    }
    uvec3 _635 = uvec3(_578 + ivec3(1));
    uint _1394 = _635.z;
    uint _1400 = _1394 + (_1394 << 10u);
    uint _1402 = _1400 ^ (_1400 >> 6u);
    uint _1404 = _1402 + (_1402 << 3u);
    uint _1406 = _1404 ^ (_1404 >> 11u);
    uint _1414 = (((_635.y * 1664525u) + (_1406 + (_1406 << 15u))) + 1013904223u) * 1664525u;
    uint _1416 = _1414 ^ (_1414 >> 11u);
    uint _1419 = _1416 ^ ((_1416 << 7u) & 2636928640u);
    uint _1422 = _1419 ^ ((_1419 << 15u) & 4022730752u);
    uint _1430 = (((_635.x * 1664525u) + (_1422 ^ (_1422 >> 18u))) + 1013904223u) * 1664525u;
    uint _1432 = _1430 ^ (_1430 >> 11u);
    uint _1435 = _1432 ^ ((_1432 << 7u) & 2636928640u);
    uint _1438 = _1435 ^ ((_1435 << 15u) & 4022730752u);
    uint _1440 = _1438 ^ (_1438 >> 18u);
    uint _1459;
    uint _1478;
    vec2 _574;
    uint _1599 = 0u;
    uint _1600 = _1440;
    for (;;)
    {
        if (!(_1599 < 2u))
        {
            break;
        }
        uint _1470 = _1600 + (_1600 << 10u);
        uint _1472 = _1470 ^ (_1470 >> 6u);
        uint _1474 = _1472 + (_1472 << 3u);
        uint _1476 = _1474 ^ (_1474 >> 11u);
        _1478 = _1476 + (_1476 << 15u);
        _574[_1599] = uintBitsToFloat((_1600 & 8388607u) | 1065353216u) - 1.0;
        _1459 = _1599 + 1u;
        _1600 = _1478;
        _1599 = _1459;
        continue;
    }
    vec3 _1490 = (_579 * _579) * (vec3(3.0) - (vec3(2.0) * _579));
    float _643 = _1490.x;
    float _644 = 1.0 - _643;
    float _646 = _1490.y;
    float _647 = 1.0 - _646;
    float _649 = _1490.z;
    float _650 = 1.0 - _649;
    vec2 _557 = clamp((((((((((((_567 * _644) * _647) * _650) + (((_568 * _643) * _647) * _650)) + (((_569 * _644) * _646) * _650)) + (((_570 * _643) * _646) * _650)) + (((_571 * _644) * _647) * _649)) + (((_572 * _643) * _647) * _649)) + (((_573 * _644) * _646) * _649)) + (((_574 * _643) * _646) * _649)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
    vec3 pos_ws = _512 + (vec3(_557.x, 0.0, _557.y) * 0.0599999986588954925537109375);
    gl_Position = vec4(pos_ws, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = Vertex_Color;
    entryPointParam_vs_main_frag_normal_ws = vec4(Vertex_Normal, 0.0) * _549;
    entryPointParam_vs_main_frag_position_ws = pos_ws;
    entryPointParam_vs_main_frag_uv = Vertex_UV;
    entryPointParam_vs_main_flags = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].is_semitransparent;
    entryPointParam_vs_main_color_id = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_17]].color_id;
}

