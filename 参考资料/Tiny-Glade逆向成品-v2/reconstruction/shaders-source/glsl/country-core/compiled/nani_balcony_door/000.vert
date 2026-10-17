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
    int color_id;
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
layout(location = 4) in int is_metal_part;
layout(location = 3) in vec2 Vertex_UV;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 3) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 4) flat out int entryPointParam_vs_main_is_metal_part;
layout(location = 5) flat out int entryPointParam_vs_main_color_id;
layout(location = 6) flat out uint entryPointParam_vs_main_is_semitransparent;

void main()
{
    uint _19 = uint(gl_InstanceIndex);
    mat3x4 _572 = transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_19]].xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_19]].xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_19]].xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_19]].xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_19]].xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_19]].xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_19]].xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_19]].xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_19]].xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_19]].xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_19]].xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_19]].xform.data.data[11])));
    vec3 _110 = (vec4(Vertex_Position, 1.0) * _572).xyz;
    vec3 _575 = _110 * 0.4000000059604644775390625;
    ivec3 _601 = ivec3(floor(_575));
    vec3 _602 = fract(_575);
    uvec3 _603 = uvec3(_601);
    uint _717 = _603.z;
    uint _723 = _717 + (_717 << 10u);
    uint _725 = _723 ^ (_723 >> 6u);
    uint _727 = _725 + (_725 << 3u);
    uint _729 = _727 ^ (_727 >> 11u);
    uint _737 = (((_603.y * 1664525u) + (_729 + (_729 << 15u))) + 1013904223u) * 1664525u;
    uint _739 = _737 ^ (_737 >> 11u);
    uint _742 = _739 ^ ((_739 << 7u) & 2636928640u);
    uint _745 = _742 ^ ((_742 << 15u) & 4022730752u);
    uint _753 = (((_603.x * 1664525u) + (_745 ^ (_745 >> 18u))) + 1013904223u) * 1664525u;
    uint _755 = _753 ^ (_753 >> 11u);
    uint _758 = _755 ^ ((_755 << 7u) & 2636928640u);
    uint _761 = _758 ^ ((_758 << 15u) & 4022730752u);
    uint _763 = _761 ^ (_761 >> 18u);
    uint _782;
    uint _801;
    vec2 _590;
    uint _1595 = 0u;
    uint _1646 = _763;
    for (;;)
    {
        if (!(_1595 < 2u))
        {
            break;
        }
        uint _793 = _1646 + (_1646 << 10u);
        uint _795 = _793 ^ (_793 >> 6u);
        uint _797 = _795 + (_795 << 3u);
        uint _799 = _797 ^ (_797 >> 11u);
        _801 = _799 + (_799 << 15u);
        _590[_1595] = uintBitsToFloat((_1646 & 8388607u) | 1065353216u) - 1.0;
        _782 = _1595 + 1u;
        _1646 = _801;
        _1595 = _782;
        continue;
    }
    uvec3 _612 = uvec3(_601 + ivec3(1, 0, 0));
    uint _817 = _612.z;
    uint _823 = _817 + (_817 << 10u);
    uint _825 = _823 ^ (_823 >> 6u);
    uint _827 = _825 + (_825 << 3u);
    uint _829 = _827 ^ (_827 >> 11u);
    uint _837 = (((_612.y * 1664525u) + (_829 + (_829 << 15u))) + 1013904223u) * 1664525u;
    uint _839 = _837 ^ (_837 >> 11u);
    uint _842 = _839 ^ ((_839 << 7u) & 2636928640u);
    uint _845 = _842 ^ ((_842 << 15u) & 4022730752u);
    uint _853 = (((_612.x * 1664525u) + (_845 ^ (_845 >> 18u))) + 1013904223u) * 1664525u;
    uint _855 = _853 ^ (_853 >> 11u);
    uint _858 = _855 ^ ((_855 << 7u) & 2636928640u);
    uint _861 = _858 ^ ((_858 << 15u) & 4022730752u);
    uint _863 = _861 ^ (_861 >> 18u);
    uint _882;
    uint _901;
    vec2 _591;
    uint _1597 = 0u;
    uint _1645 = _863;
    for (;;)
    {
        if (!(_1597 < 2u))
        {
            break;
        }
        uint _893 = _1645 + (_1645 << 10u);
        uint _895 = _893 ^ (_893 >> 6u);
        uint _897 = _895 + (_895 << 3u);
        uint _899 = _897 ^ (_897 >> 11u);
        _901 = _899 + (_899 << 15u);
        _591[_1597] = uintBitsToFloat((_1645 & 8388607u) | 1065353216u) - 1.0;
        _882 = _1597 + 1u;
        _1645 = _901;
        _1597 = _882;
        continue;
    }
    uvec3 _619 = uvec3(_601 + ivec3(0, 1, 0));
    uint _917 = _619.z;
    uint _923 = _917 + (_917 << 10u);
    uint _925 = _923 ^ (_923 >> 6u);
    uint _927 = _925 + (_925 << 3u);
    uint _929 = _927 ^ (_927 >> 11u);
    uint _937 = (((_619.y * 1664525u) + (_929 + (_929 << 15u))) + 1013904223u) * 1664525u;
    uint _939 = _937 ^ (_937 >> 11u);
    uint _942 = _939 ^ ((_939 << 7u) & 2636928640u);
    uint _945 = _942 ^ ((_942 << 15u) & 4022730752u);
    uint _953 = (((_619.x * 1664525u) + (_945 ^ (_945 >> 18u))) + 1013904223u) * 1664525u;
    uint _955 = _953 ^ (_953 >> 11u);
    uint _958 = _955 ^ ((_955 << 7u) & 2636928640u);
    uint _961 = _958 ^ ((_958 << 15u) & 4022730752u);
    uint _963 = _961 ^ (_961 >> 18u);
    uint _982;
    uint _1001;
    vec2 _592;
    uint _1600 = 0u;
    uint _1644 = _963;
    for (;;)
    {
        if (!(_1600 < 2u))
        {
            break;
        }
        uint _993 = _1644 + (_1644 << 10u);
        uint _995 = _993 ^ (_993 >> 6u);
        uint _997 = _995 + (_995 << 3u);
        uint _999 = _997 ^ (_997 >> 11u);
        _1001 = _999 + (_999 << 15u);
        _592[_1600] = uintBitsToFloat((_1644 & 8388607u) | 1065353216u) - 1.0;
        _982 = _1600 + 1u;
        _1644 = _1001;
        _1600 = _982;
        continue;
    }
    uvec3 _627 = uvec3(_601 + ivec3(1, 1, 0));
    uint _1017 = _627.z;
    uint _1023 = _1017 + (_1017 << 10u);
    uint _1025 = _1023 ^ (_1023 >> 6u);
    uint _1027 = _1025 + (_1025 << 3u);
    uint _1029 = _1027 ^ (_1027 >> 11u);
    uint _1037 = (((_627.y * 1664525u) + (_1029 + (_1029 << 15u))) + 1013904223u) * 1664525u;
    uint _1039 = _1037 ^ (_1037 >> 11u);
    uint _1042 = _1039 ^ ((_1039 << 7u) & 2636928640u);
    uint _1045 = _1042 ^ ((_1042 << 15u) & 4022730752u);
    uint _1053 = (((_627.x * 1664525u) + (_1045 ^ (_1045 >> 18u))) + 1013904223u) * 1664525u;
    uint _1055 = _1053 ^ (_1053 >> 11u);
    uint _1058 = _1055 ^ ((_1055 << 7u) & 2636928640u);
    uint _1061 = _1058 ^ ((_1058 << 15u) & 4022730752u);
    uint _1063 = _1061 ^ (_1061 >> 18u);
    uint _1082;
    uint _1101;
    vec2 _593;
    uint _1604 = 0u;
    uint _1643 = _1063;
    for (;;)
    {
        if (!(_1604 < 2u))
        {
            break;
        }
        uint _1093 = _1643 + (_1643 << 10u);
        uint _1095 = _1093 ^ (_1093 >> 6u);
        uint _1097 = _1095 + (_1095 << 3u);
        uint _1099 = _1097 ^ (_1097 >> 11u);
        _1101 = _1099 + (_1099 << 15u);
        _593[_1604] = uintBitsToFloat((_1643 & 8388607u) | 1065353216u) - 1.0;
        _1082 = _1604 + 1u;
        _1643 = _1101;
        _1604 = _1082;
        continue;
    }
    uvec3 _634 = uvec3(_601 + ivec3(0, 0, 1));
    uint _1117 = _634.z;
    uint _1123 = _1117 + (_1117 << 10u);
    uint _1125 = _1123 ^ (_1123 >> 6u);
    uint _1127 = _1125 + (_1125 << 3u);
    uint _1129 = _1127 ^ (_1127 >> 11u);
    uint _1137 = (((_634.y * 1664525u) + (_1129 + (_1129 << 15u))) + 1013904223u) * 1664525u;
    uint _1139 = _1137 ^ (_1137 >> 11u);
    uint _1142 = _1139 ^ ((_1139 << 7u) & 2636928640u);
    uint _1145 = _1142 ^ ((_1142 << 15u) & 4022730752u);
    uint _1153 = (((_634.x * 1664525u) + (_1145 ^ (_1145 >> 18u))) + 1013904223u) * 1664525u;
    uint _1155 = _1153 ^ (_1153 >> 11u);
    uint _1158 = _1155 ^ ((_1155 << 7u) & 2636928640u);
    uint _1161 = _1158 ^ ((_1158 << 15u) & 4022730752u);
    uint _1163 = _1161 ^ (_1161 >> 18u);
    uint _1182;
    uint _1201;
    vec2 _594;
    uint _1609 = 0u;
    uint _1642 = _1163;
    for (;;)
    {
        if (!(_1609 < 2u))
        {
            break;
        }
        uint _1193 = _1642 + (_1642 << 10u);
        uint _1195 = _1193 ^ (_1193 >> 6u);
        uint _1197 = _1195 + (_1195 << 3u);
        uint _1199 = _1197 ^ (_1197 >> 11u);
        _1201 = _1199 + (_1199 << 15u);
        _594[_1609] = uintBitsToFloat((_1642 & 8388607u) | 1065353216u) - 1.0;
        _1182 = _1609 + 1u;
        _1642 = _1201;
        _1609 = _1182;
        continue;
    }
    uvec3 _643 = uvec3(_601 + ivec3(1, 0, 1));
    uint _1217 = _643.z;
    uint _1223 = _1217 + (_1217 << 10u);
    uint _1225 = _1223 ^ (_1223 >> 6u);
    uint _1227 = _1225 + (_1225 << 3u);
    uint _1229 = _1227 ^ (_1227 >> 11u);
    uint _1237 = (((_643.y * 1664525u) + (_1229 + (_1229 << 15u))) + 1013904223u) * 1664525u;
    uint _1239 = _1237 ^ (_1237 >> 11u);
    uint _1242 = _1239 ^ ((_1239 << 7u) & 2636928640u);
    uint _1245 = _1242 ^ ((_1242 << 15u) & 4022730752u);
    uint _1253 = (((_643.x * 1664525u) + (_1245 ^ (_1245 >> 18u))) + 1013904223u) * 1664525u;
    uint _1255 = _1253 ^ (_1253 >> 11u);
    uint _1258 = _1255 ^ ((_1255 << 7u) & 2636928640u);
    uint _1261 = _1258 ^ ((_1258 << 15u) & 4022730752u);
    uint _1263 = _1261 ^ (_1261 >> 18u);
    uint _1282;
    uint _1301;
    vec2 _595;
    uint _1615 = 0u;
    uint _1641 = _1263;
    for (;;)
    {
        if (!(_1615 < 2u))
        {
            break;
        }
        uint _1293 = _1641 + (_1641 << 10u);
        uint _1295 = _1293 ^ (_1293 >> 6u);
        uint _1297 = _1295 + (_1295 << 3u);
        uint _1299 = _1297 ^ (_1297 >> 11u);
        _1301 = _1299 + (_1299 << 15u);
        _595[_1615] = uintBitsToFloat((_1641 & 8388607u) | 1065353216u) - 1.0;
        _1282 = _1615 + 1u;
        _1641 = _1301;
        _1615 = _1282;
        continue;
    }
    uvec3 _650 = uvec3(_601 + ivec3(0, 1, 1));
    uint _1317 = _650.z;
    uint _1323 = _1317 + (_1317 << 10u);
    uint _1325 = _1323 ^ (_1323 >> 6u);
    uint _1327 = _1325 + (_1325 << 3u);
    uint _1329 = _1327 ^ (_1327 >> 11u);
    uint _1337 = (((_650.y * 1664525u) + (_1329 + (_1329 << 15u))) + 1013904223u) * 1664525u;
    uint _1339 = _1337 ^ (_1337 >> 11u);
    uint _1342 = _1339 ^ ((_1339 << 7u) & 2636928640u);
    uint _1345 = _1342 ^ ((_1342 << 15u) & 4022730752u);
    uint _1353 = (((_650.x * 1664525u) + (_1345 ^ (_1345 >> 18u))) + 1013904223u) * 1664525u;
    uint _1355 = _1353 ^ (_1353 >> 11u);
    uint _1358 = _1355 ^ ((_1355 << 7u) & 2636928640u);
    uint _1361 = _1358 ^ ((_1358 << 15u) & 4022730752u);
    uint _1363 = _1361 ^ (_1361 >> 18u);
    uint _1382;
    uint _1401;
    vec2 _596;
    uint _1622 = 0u;
    uint _1640 = _1363;
    for (;;)
    {
        if (!(_1622 < 2u))
        {
            break;
        }
        uint _1393 = _1640 + (_1640 << 10u);
        uint _1395 = _1393 ^ (_1393 >> 6u);
        uint _1397 = _1395 + (_1395 << 3u);
        uint _1399 = _1397 ^ (_1397 >> 11u);
        _1401 = _1399 + (_1399 << 15u);
        _596[_1622] = uintBitsToFloat((_1640 & 8388607u) | 1065353216u) - 1.0;
        _1382 = _1622 + 1u;
        _1640 = _1401;
        _1622 = _1382;
        continue;
    }
    uvec3 _658 = uvec3(_601 + ivec3(1));
    uint _1417 = _658.z;
    uint _1423 = _1417 + (_1417 << 10u);
    uint _1425 = _1423 ^ (_1423 >> 6u);
    uint _1427 = _1425 + (_1425 << 3u);
    uint _1429 = _1427 ^ (_1427 >> 11u);
    uint _1437 = (((_658.y * 1664525u) + (_1429 + (_1429 << 15u))) + 1013904223u) * 1664525u;
    uint _1439 = _1437 ^ (_1437 >> 11u);
    uint _1442 = _1439 ^ ((_1439 << 7u) & 2636928640u);
    uint _1445 = _1442 ^ ((_1442 << 15u) & 4022730752u);
    uint _1453 = (((_658.x * 1664525u) + (_1445 ^ (_1445 >> 18u))) + 1013904223u) * 1664525u;
    uint _1455 = _1453 ^ (_1453 >> 11u);
    uint _1458 = _1455 ^ ((_1455 << 7u) & 2636928640u);
    uint _1461 = _1458 ^ ((_1458 << 15u) & 4022730752u);
    uint _1463 = _1461 ^ (_1461 >> 18u);
    uint _1482;
    uint _1501;
    vec2 _597;
    uint _1630 = 0u;
    uint _1639 = _1463;
    for (;;)
    {
        if (!(_1630 < 2u))
        {
            break;
        }
        uint _1493 = _1639 + (_1639 << 10u);
        uint _1495 = _1493 ^ (_1493 >> 6u);
        uint _1497 = _1495 + (_1495 << 3u);
        uint _1499 = _1497 ^ (_1497 >> 11u);
        _1501 = _1499 + (_1499 << 15u);
        _597[_1630] = uintBitsToFloat((_1639 & 8388607u) | 1065353216u) - 1.0;
        _1482 = _1630 + 1u;
        _1639 = _1501;
        _1630 = _1482;
        continue;
    }
    vec3 _1513 = (_602 * _602) * (vec3(3.0) - (vec3(2.0) * _602));
    float _666 = _1513.x;
    float _667 = 1.0 - _666;
    float _669 = _1513.y;
    float _670 = 1.0 - _669;
    float _672 = _1513.z;
    float _673 = 1.0 - _672;
    vec2 _580 = clamp((((((((((((_590 * _667) * _670) * _673) + (((_591 * _666) * _670) * _673)) + (((_592 * _667) * _669) * _673)) + (((_593 * _666) * _669) * _673)) + (((_594 * _667) * _670) * _672)) + (((_595 * _666) * _670) * _672)) + (((_596 * _667) * _669) * _672)) + (((_597 * _666) * _669) * _672)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
    vec3 _439 = _110 + (vec3(_580.x, 0.0, _580.y) * 0.0599999986588954925537109375);
    gl_Position = vec4(_439, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = Vertex_Color;
    entryPointParam_vs_main_frag_normal_ws = vec4(Vertex_Normal, 0.0) * _572;
    entryPointParam_vs_main_frag_position_ws = _439.xyz;
    entryPointParam_vs_main_frag_uv = Vertex_UV;
    entryPointParam_vs_main_is_metal_part = is_metal_part;
    entryPointParam_vs_main_color_id = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_19]].color_id;
    entryPointParam_vs_main_is_semitransparent = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_19]].is_semitransparent;
}

