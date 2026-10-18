#version 460
#extension GL_EXT_buffer_reference2 : require
#extension GL_EXT_buffer_reference_uvec2 : require

layout(buffer_reference) buffer uvec4Pointer;

struct PlasterInstanceData_natural
{
    vec4 bounding_sphere;
    uint wall_slot_id;
    float wall_length;
    uint blend_uv_seam;
    uint quad_count;
    uvec4Pointer verts_gpu_address;
    int row_stride;
    float peel_strength;
};

struct _MatrixStorage_float3x3_ColMajornatural
{
    vec3 data[3];
};

struct _1950
{
    int _m0;
    int _m1;
};

layout(buffer_reference, buffer_reference_align = 4) buffer uvec4Pointer
{
    uvec4 value;
};

layout(set = 8, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 1, std430) readonly buffer material_data_nani_instance_data
{
    PlasterInstanceData_natural _member0[];
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
layout(location = 3) out vec2 entryPointParam_vs_main_frag_curve_uv;
layout(location = 4) out vec3 entryPointParam_vs_main_tangent;
layout(location = 5) out vec3 entryPointParam_vs_main_bitangent;
layout(location = 6) out float entryPointParam_vs_main_sdf;
layout(location = 7) out float entryPointParam_vs_main_erosion_strength;
layout(location = 8) out float entryPointParam_vs_main_peel_strength;
layout(location = 9) out _MatrixStorage_float3x3_ColMajornatural entryPointParam_vs_main_frag_tangent_to_world;

void main()
{
    do
    {
        uint _27 = uint(gl_InstanceIndex);
        uint _95 = uint(gl_VertexIndex - gl_BaseVertex);
        uint grid_x = _95 & 65535u;
        if (grid_x > material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].quad_count)
        {
            gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
            entryPointParam_vs_main_instance_index = 0u;
            entryPointParam_vs_main_frag_normal_ws = vec3(0.0);
            entryPointParam_vs_main_frag_position_ws = vec3(0.0);
            entryPointParam_vs_main_frag_curve_uv = vec2(0.0);
            entryPointParam_vs_main_tangent = vec3(0.0);
            entryPointParam_vs_main_bitangent = vec3(0.0);
            entryPointParam_vs_main_sdf = 0.0;
            entryPointParam_vs_main_erosion_strength = 0.0;
            entryPointParam_vs_main_peel_strength = 0.0;
            entryPointParam_vs_main_frag_tangent_to_world = _MatrixStorage_float3x3_ColMajornatural(vec3[](vec3(0.0), vec3(0.0), vec3(0.0)));
            break;
        }
        int _227 = 48 * (int(grid_x) + (int(_95 >> 16u) * material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].row_stride));
        uvec2 _807 = uvec2(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].verts_gpu_address);
        uvec2 _811;
        _811.x = _807.x;
        _811.y = _807.y;
        uint _835 = _811.x + uint(_227);
        uvec4Pointer _858 = uvec4Pointer(uvec2(_835, (_811.y + uint(_227 >> 31)) + uint(_835 < _811.x)));
        uvec2 _1952 = uvec2(_858);
        uint _1953 = _1952.x;
        _1950 _1955;
        imulExtended(0, 16, _1955._m1, _1955._m0);
        uint _1960 = _1953 + uint(_1955._m0);
        uvec4 vdata0 = uvec4Pointer(uvec2(_1960, (_1952.y + uint(_1955._m1)) + uint(_1960 < _1953))).value;
        uvec2 _1966 = uvec2(_858);
        uint _1967 = _1966.x;
        _1950 _1969;
        imulExtended(1, 16, _1969._m1, _1969._m0);
        uint _1974 = _1967 + uint(_1969._m0);
        uvec4 vdata1 = uvec4Pointer(uvec2(_1974, (_1966.y + uint(_1969._m1)) + uint(_1974 < _1967))).value;
        uvec2 _1980 = uvec2(_858);
        uint _1981 = _1980.x;
        _1950 _1983;
        imulExtended(2, 16, _1983._m1, _1983._m0);
        uint _1988 = _1981 + uint(_1983._m0);
        uvec4 _338 = uvec4Pointer(uvec2(_1988, (_1980.y + uint(_1983._m1)) + uint(_1988 < _1981))).value;
        vec3 _353 = uintBitsToFloat(vdata1.xyz);
        vec4 _357 = vec4(uintBitsToFloat(vdata0.xyz), 1.0);
        vec4 pos_ws = _357;
        vec3 _360 = _357.xyz;
        vec3 _861 = _360 * 0.4000000059604644775390625;
        ivec3 _887 = ivec3(floor(_861));
        vec3 _888 = fract(_861);
        uvec3 _889 = uvec3(_887);
        uint _1003 = _889.z;
        uint _1009 = _1003 + (_1003 << 10u);
        uint _1011 = _1009 ^ (_1009 >> 6u);
        uint _1013 = _1011 + (_1011 << 3u);
        uint _1015 = _1013 ^ (_1013 >> 11u);
        uint _1023 = (((_889.y * 1664525u) + (_1015 + (_1015 << 15u))) + 1013904223u) * 1664525u;
        uint _1025 = _1023 ^ (_1023 >> 11u);
        uint _1028 = _1025 ^ ((_1025 << 7u) & 2636928640u);
        uint _1031 = _1028 ^ ((_1028 << 15u) & 4022730752u);
        uint _1039 = (((_889.x * 1664525u) + (_1031 ^ (_1031 >> 18u))) + 1013904223u) * 1664525u;
        uint _1041 = _1039 ^ (_1039 >> 11u);
        uint _1044 = _1041 ^ ((_1041 << 7u) & 2636928640u);
        uint _1047 = _1044 ^ ((_1044 << 15u) & 4022730752u);
        uint _1049 = _1047 ^ (_1047 >> 18u);
        uint _1068;
        uint _1087;
        vec2 _876;
        uint _1900 = 0u;
        uint _1943 = _1049;
        for (;;)
        {
            if (!(_1900 < 2u))
            {
                break;
            }
            uint _1079 = _1943 + (_1943 << 10u);
            uint _1081 = _1079 ^ (_1079 >> 6u);
            uint _1083 = _1081 + (_1081 << 3u);
            uint _1085 = _1083 ^ (_1083 >> 11u);
            _1087 = _1085 + (_1085 << 15u);
            _876[_1900] = uintBitsToFloat((_1943 & 8388607u) | 1065353216u) - 1.0;
            _1068 = _1900 + 1u;
            _1943 = _1087;
            _1900 = _1068;
            continue;
        }
        uvec3 _898 = uvec3(_887 + ivec3(1, 0, 0));
        uint _1103 = _898.z;
        uint _1109 = _1103 + (_1103 << 10u);
        uint _1111 = _1109 ^ (_1109 >> 6u);
        uint _1113 = _1111 + (_1111 << 3u);
        uint _1115 = _1113 ^ (_1113 >> 11u);
        uint _1123 = (((_898.y * 1664525u) + (_1115 + (_1115 << 15u))) + 1013904223u) * 1664525u;
        uint _1125 = _1123 ^ (_1123 >> 11u);
        uint _1128 = _1125 ^ ((_1125 << 7u) & 2636928640u);
        uint _1131 = _1128 ^ ((_1128 << 15u) & 4022730752u);
        uint _1139 = (((_898.x * 1664525u) + (_1131 ^ (_1131 >> 18u))) + 1013904223u) * 1664525u;
        uint _1141 = _1139 ^ (_1139 >> 11u);
        uint _1144 = _1141 ^ ((_1141 << 7u) & 2636928640u);
        uint _1147 = _1144 ^ ((_1144 << 15u) & 4022730752u);
        uint _1149 = _1147 ^ (_1147 >> 18u);
        uint _1168;
        uint _1187;
        vec2 _877;
        uint _1902 = 0u;
        uint _1942 = _1149;
        for (;;)
        {
            if (!(_1902 < 2u))
            {
                break;
            }
            uint _1179 = _1942 + (_1942 << 10u);
            uint _1181 = _1179 ^ (_1179 >> 6u);
            uint _1183 = _1181 + (_1181 << 3u);
            uint _1185 = _1183 ^ (_1183 >> 11u);
            _1187 = _1185 + (_1185 << 15u);
            _877[_1902] = uintBitsToFloat((_1942 & 8388607u) | 1065353216u) - 1.0;
            _1168 = _1902 + 1u;
            _1942 = _1187;
            _1902 = _1168;
            continue;
        }
        uvec3 _905 = uvec3(_887 + ivec3(0, 1, 0));
        uint _1203 = _905.z;
        uint _1209 = _1203 + (_1203 << 10u);
        uint _1211 = _1209 ^ (_1209 >> 6u);
        uint _1213 = _1211 + (_1211 << 3u);
        uint _1215 = _1213 ^ (_1213 >> 11u);
        uint _1223 = (((_905.y * 1664525u) + (_1215 + (_1215 << 15u))) + 1013904223u) * 1664525u;
        uint _1225 = _1223 ^ (_1223 >> 11u);
        uint _1228 = _1225 ^ ((_1225 << 7u) & 2636928640u);
        uint _1231 = _1228 ^ ((_1228 << 15u) & 4022730752u);
        uint _1239 = (((_905.x * 1664525u) + (_1231 ^ (_1231 >> 18u))) + 1013904223u) * 1664525u;
        uint _1241 = _1239 ^ (_1239 >> 11u);
        uint _1244 = _1241 ^ ((_1241 << 7u) & 2636928640u);
        uint _1247 = _1244 ^ ((_1244 << 15u) & 4022730752u);
        uint _1249 = _1247 ^ (_1247 >> 18u);
        uint _1268;
        uint _1287;
        vec2 _878;
        uint _1905 = 0u;
        uint _1941 = _1249;
        for (;;)
        {
            if (!(_1905 < 2u))
            {
                break;
            }
            uint _1279 = _1941 + (_1941 << 10u);
            uint _1281 = _1279 ^ (_1279 >> 6u);
            uint _1283 = _1281 + (_1281 << 3u);
            uint _1285 = _1283 ^ (_1283 >> 11u);
            _1287 = _1285 + (_1285 << 15u);
            _878[_1905] = uintBitsToFloat((_1941 & 8388607u) | 1065353216u) - 1.0;
            _1268 = _1905 + 1u;
            _1941 = _1287;
            _1905 = _1268;
            continue;
        }
        uvec3 _913 = uvec3(_887 + ivec3(1, 1, 0));
        uint _1303 = _913.z;
        uint _1309 = _1303 + (_1303 << 10u);
        uint _1311 = _1309 ^ (_1309 >> 6u);
        uint _1313 = _1311 + (_1311 << 3u);
        uint _1315 = _1313 ^ (_1313 >> 11u);
        uint _1323 = (((_913.y * 1664525u) + (_1315 + (_1315 << 15u))) + 1013904223u) * 1664525u;
        uint _1325 = _1323 ^ (_1323 >> 11u);
        uint _1328 = _1325 ^ ((_1325 << 7u) & 2636928640u);
        uint _1331 = _1328 ^ ((_1328 << 15u) & 4022730752u);
        uint _1339 = (((_913.x * 1664525u) + (_1331 ^ (_1331 >> 18u))) + 1013904223u) * 1664525u;
        uint _1341 = _1339 ^ (_1339 >> 11u);
        uint _1344 = _1341 ^ ((_1341 << 7u) & 2636928640u);
        uint _1347 = _1344 ^ ((_1344 << 15u) & 4022730752u);
        uint _1349 = _1347 ^ (_1347 >> 18u);
        uint _1368;
        uint _1387;
        vec2 _879;
        uint _1909 = 0u;
        uint _1940 = _1349;
        for (;;)
        {
            if (!(_1909 < 2u))
            {
                break;
            }
            uint _1379 = _1940 + (_1940 << 10u);
            uint _1381 = _1379 ^ (_1379 >> 6u);
            uint _1383 = _1381 + (_1381 << 3u);
            uint _1385 = _1383 ^ (_1383 >> 11u);
            _1387 = _1385 + (_1385 << 15u);
            _879[_1909] = uintBitsToFloat((_1940 & 8388607u) | 1065353216u) - 1.0;
            _1368 = _1909 + 1u;
            _1940 = _1387;
            _1909 = _1368;
            continue;
        }
        uvec3 _920 = uvec3(_887 + ivec3(0, 0, 1));
        uint _1403 = _920.z;
        uint _1409 = _1403 + (_1403 << 10u);
        uint _1411 = _1409 ^ (_1409 >> 6u);
        uint _1413 = _1411 + (_1411 << 3u);
        uint _1415 = _1413 ^ (_1413 >> 11u);
        uint _1423 = (((_920.y * 1664525u) + (_1415 + (_1415 << 15u))) + 1013904223u) * 1664525u;
        uint _1425 = _1423 ^ (_1423 >> 11u);
        uint _1428 = _1425 ^ ((_1425 << 7u) & 2636928640u);
        uint _1431 = _1428 ^ ((_1428 << 15u) & 4022730752u);
        uint _1439 = (((_920.x * 1664525u) + (_1431 ^ (_1431 >> 18u))) + 1013904223u) * 1664525u;
        uint _1441 = _1439 ^ (_1439 >> 11u);
        uint _1444 = _1441 ^ ((_1441 << 7u) & 2636928640u);
        uint _1447 = _1444 ^ ((_1444 << 15u) & 4022730752u);
        uint _1449 = _1447 ^ (_1447 >> 18u);
        uint _1468;
        uint _1487;
        vec2 _880;
        uint _1914 = 0u;
        uint _1939 = _1449;
        for (;;)
        {
            if (!(_1914 < 2u))
            {
                break;
            }
            uint _1479 = _1939 + (_1939 << 10u);
            uint _1481 = _1479 ^ (_1479 >> 6u);
            uint _1483 = _1481 + (_1481 << 3u);
            uint _1485 = _1483 ^ (_1483 >> 11u);
            _1487 = _1485 + (_1485 << 15u);
            _880[_1914] = uintBitsToFloat((_1939 & 8388607u) | 1065353216u) - 1.0;
            _1468 = _1914 + 1u;
            _1939 = _1487;
            _1914 = _1468;
            continue;
        }
        uvec3 _929 = uvec3(_887 + ivec3(1, 0, 1));
        uint _1503 = _929.z;
        uint _1509 = _1503 + (_1503 << 10u);
        uint _1511 = _1509 ^ (_1509 >> 6u);
        uint _1513 = _1511 + (_1511 << 3u);
        uint _1515 = _1513 ^ (_1513 >> 11u);
        uint _1523 = (((_929.y * 1664525u) + (_1515 + (_1515 << 15u))) + 1013904223u) * 1664525u;
        uint _1525 = _1523 ^ (_1523 >> 11u);
        uint _1528 = _1525 ^ ((_1525 << 7u) & 2636928640u);
        uint _1531 = _1528 ^ ((_1528 << 15u) & 4022730752u);
        uint _1539 = (((_929.x * 1664525u) + (_1531 ^ (_1531 >> 18u))) + 1013904223u) * 1664525u;
        uint _1541 = _1539 ^ (_1539 >> 11u);
        uint _1544 = _1541 ^ ((_1541 << 7u) & 2636928640u);
        uint _1547 = _1544 ^ ((_1544 << 15u) & 4022730752u);
        uint _1549 = _1547 ^ (_1547 >> 18u);
        uint _1568;
        uint _1587;
        vec2 _881;
        uint _1920 = 0u;
        uint _1938 = _1549;
        for (;;)
        {
            if (!(_1920 < 2u))
            {
                break;
            }
            uint _1579 = _1938 + (_1938 << 10u);
            uint _1581 = _1579 ^ (_1579 >> 6u);
            uint _1583 = _1581 + (_1581 << 3u);
            uint _1585 = _1583 ^ (_1583 >> 11u);
            _1587 = _1585 + (_1585 << 15u);
            _881[_1920] = uintBitsToFloat((_1938 & 8388607u) | 1065353216u) - 1.0;
            _1568 = _1920 + 1u;
            _1938 = _1587;
            _1920 = _1568;
            continue;
        }
        uvec3 _936 = uvec3(_887 + ivec3(0, 1, 1));
        uint _1603 = _936.z;
        uint _1609 = _1603 + (_1603 << 10u);
        uint _1611 = _1609 ^ (_1609 >> 6u);
        uint _1613 = _1611 + (_1611 << 3u);
        uint _1615 = _1613 ^ (_1613 >> 11u);
        uint _1623 = (((_936.y * 1664525u) + (_1615 + (_1615 << 15u))) + 1013904223u) * 1664525u;
        uint _1625 = _1623 ^ (_1623 >> 11u);
        uint _1628 = _1625 ^ ((_1625 << 7u) & 2636928640u);
        uint _1631 = _1628 ^ ((_1628 << 15u) & 4022730752u);
        uint _1639 = (((_936.x * 1664525u) + (_1631 ^ (_1631 >> 18u))) + 1013904223u) * 1664525u;
        uint _1641 = _1639 ^ (_1639 >> 11u);
        uint _1644 = _1641 ^ ((_1641 << 7u) & 2636928640u);
        uint _1647 = _1644 ^ ((_1644 << 15u) & 4022730752u);
        uint _1649 = _1647 ^ (_1647 >> 18u);
        uint _1668;
        uint _1687;
        vec2 _882;
        uint _1927 = 0u;
        uint _1937 = _1649;
        for (;;)
        {
            if (!(_1927 < 2u))
            {
                break;
            }
            uint _1679 = _1937 + (_1937 << 10u);
            uint _1681 = _1679 ^ (_1679 >> 6u);
            uint _1683 = _1681 + (_1681 << 3u);
            uint _1685 = _1683 ^ (_1683 >> 11u);
            _1687 = _1685 + (_1685 << 15u);
            _882[_1927] = uintBitsToFloat((_1937 & 8388607u) | 1065353216u) - 1.0;
            _1668 = _1927 + 1u;
            _1937 = _1687;
            _1927 = _1668;
            continue;
        }
        uvec3 _944 = uvec3(_887 + ivec3(1));
        uint _1703 = _944.z;
        uint _1709 = _1703 + (_1703 << 10u);
        uint _1711 = _1709 ^ (_1709 >> 6u);
        uint _1713 = _1711 + (_1711 << 3u);
        uint _1715 = _1713 ^ (_1713 >> 11u);
        uint _1723 = (((_944.y * 1664525u) + (_1715 + (_1715 << 15u))) + 1013904223u) * 1664525u;
        uint _1725 = _1723 ^ (_1723 >> 11u);
        uint _1728 = _1725 ^ ((_1725 << 7u) & 2636928640u);
        uint _1731 = _1728 ^ ((_1728 << 15u) & 4022730752u);
        uint _1739 = (((_944.x * 1664525u) + (_1731 ^ (_1731 >> 18u))) + 1013904223u) * 1664525u;
        uint _1741 = _1739 ^ (_1739 >> 11u);
        uint _1744 = _1741 ^ ((_1741 << 7u) & 2636928640u);
        uint _1747 = _1744 ^ ((_1744 << 15u) & 4022730752u);
        uint _1749 = _1747 ^ (_1747 >> 18u);
        uint _1768;
        uint _1787;
        vec2 _883;
        uint _1935 = 0u;
        uint _1936 = _1749;
        for (;;)
        {
            if (!(_1935 < 2u))
            {
                break;
            }
            uint _1779 = _1936 + (_1936 << 10u);
            uint _1781 = _1779 ^ (_1779 >> 6u);
            uint _1783 = _1781 + (_1781 << 3u);
            uint _1785 = _1783 ^ (_1783 >> 11u);
            _1787 = _1785 + (_1785 << 15u);
            _883[_1935] = uintBitsToFloat((_1936 & 8388607u) | 1065353216u) - 1.0;
            _1768 = _1935 + 1u;
            _1936 = _1787;
            _1935 = _1768;
            continue;
        }
        vec3 _1799 = (_888 * _888) * (vec3(3.0) - (vec3(2.0) * _888));
        float _952 = _1799.x;
        float _953 = 1.0 - _952;
        float _955 = _1799.y;
        float _956 = 1.0 - _955;
        float _958 = _1799.z;
        float _959 = 1.0 - _958;
        vec2 _866 = clamp((((((((((((_876 * _953) * _956) * _959) + (((_877 * _952) * _956) * _959)) + (((_878 * _953) * _955) * _959)) + (((_879 * _952) * _955) * _959)) + (((_880 * _953) * _956) * _958)) + (((_881 * _952) * _956) * _958)) + (((_882 * _953) * _955) * _958)) + (((_883 * _952) * _955) * _958)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
        vec3 _680 = _360 + (vec3(_866.x, 0.0, _866.y) * 0.0599999986588954925537109375);
        pos_ws.x = _680.x;
        pos_ws.y = _680.y;
        pos_ws.z = _680.z;
        vec3 _709 = cross(_353, vec3(0.0, 1.0, 0.0));
        vec3 _712 = normalize(vec3(0.0, 1.0, 0.0));
        mat3 _715 = transpose(mat3(normalize(_709), _712, normalize(_353)));
        gl_Position = pos_ws * current_view.world_to_sample;
        entryPointParam_vs_main_instance_index = nani_instance_indirection_buffer._member0[_27];
        entryPointParam_vs_main_frag_normal_ws = _353;
        entryPointParam_vs_main_frag_position_ws = pos_ws.xyz;
        entryPointParam_vs_main_frag_curve_uv = uintBitsToFloat(_338.xy);
        entryPointParam_vs_main_tangent = _709;
        entryPointParam_vs_main_bitangent = vec3(0.0, 1.0, 0.0);
        entryPointParam_vs_main_sdf = uintBitsToFloat(vdata0.w);
        entryPointParam_vs_main_erosion_strength = uintBitsToFloat(vdata1.w) + (1.0 - smoothstep(0.0, 1.0, pos_ws.y));
        entryPointParam_vs_main_peel_strength = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].peel_strength;
        vec3 _756 = _715[0];
        vec3 _760 = _715[1];
        vec3 _764 = _715[2];
        entryPointParam_vs_main_frag_tangent_to_world = _MatrixStorage_float3x3_ColMajornatural(vec3[](vec3(_756.x, _760.x, _764.x), vec3(_756.y, _760.y, _764.y), vec3(_756.z, _760.z, _764.z)));
        break;
    } while(false);
}

