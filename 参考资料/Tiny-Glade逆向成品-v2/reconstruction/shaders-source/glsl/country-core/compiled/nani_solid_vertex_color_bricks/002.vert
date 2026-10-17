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
    uint wallspace_x_range_packed;
    uint seed;
    uint wall_slot_is_wooden_packed;
    float mesh_size_x;
};

struct _MatrixStorage_float3x3_ColMajornatural
{
    vec3 data[3];
};

layout(set = 6, binding = 0, std430) readonly buffer StructuredBuffer
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
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 3) in vec2 Vertex_UV;
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
    uint _36 = uint(gl_InstanceIndex);
    mat3x4 _651 = transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].xform.data.data[11])));
    vec3 _614 = vec4(Vertex_Position, 1.0) * _651;
    vec3 _654 = _614.xyz * 0.4000000059604644775390625;
    ivec3 _680 = ivec3(floor(_654));
    vec3 _681 = fract(_654);
    uvec3 _682 = uvec3(_680);
    uint _796 = _682.z;
    uint _802 = _796 + (_796 << 10u);
    uint _804 = _802 ^ (_802 >> 6u);
    uint _806 = _804 + (_804 << 3u);
    uint _808 = _806 ^ (_806 >> 11u);
    uint _816 = (((_682.y * 1664525u) + (_808 + (_808 << 15u))) + 1013904223u) * 1664525u;
    uint _818 = _816 ^ (_816 >> 11u);
    uint _821 = _818 ^ ((_818 << 7u) & 2636928640u);
    uint _824 = _821 ^ ((_821 << 15u) & 4022730752u);
    uint _832 = (((_682.x * 1664525u) + (_824 ^ (_824 >> 18u))) + 1013904223u) * 1664525u;
    uint _834 = _832 ^ (_832 >> 11u);
    uint _837 = _834 ^ ((_834 << 7u) & 2636928640u);
    uint _840 = _837 ^ ((_837 << 15u) & 4022730752u);
    uint _842 = _840 ^ (_840 >> 18u);
    uint _861;
    uint _880;
    vec2 _669;
    uint _1716 = 0u;
    uint _1780 = _842;
    for (;;)
    {
        if (!(_1716 < 2u))
        {
            break;
        }
        uint _872 = _1780 + (_1780 << 10u);
        uint _874 = _872 ^ (_872 >> 6u);
        uint _876 = _874 + (_874 << 3u);
        uint _878 = _876 ^ (_876 >> 11u);
        _880 = _878 + (_878 << 15u);
        _669[_1716] = uintBitsToFloat((_1780 & 8388607u) | 1065353216u) - 1.0;
        _861 = _1716 + 1u;
        _1780 = _880;
        _1716 = _861;
        continue;
    }
    uvec3 _691 = uvec3(_680 + ivec3(1, 0, 0));
    uint _896 = _691.z;
    uint _902 = _896 + (_896 << 10u);
    uint _904 = _902 ^ (_902 >> 6u);
    uint _906 = _904 + (_904 << 3u);
    uint _908 = _906 ^ (_906 >> 11u);
    uint _916 = (((_691.y * 1664525u) + (_908 + (_908 << 15u))) + 1013904223u) * 1664525u;
    uint _918 = _916 ^ (_916 >> 11u);
    uint _921 = _918 ^ ((_918 << 7u) & 2636928640u);
    uint _924 = _921 ^ ((_921 << 15u) & 4022730752u);
    uint _932 = (((_691.x * 1664525u) + (_924 ^ (_924 >> 18u))) + 1013904223u) * 1664525u;
    uint _934 = _932 ^ (_932 >> 11u);
    uint _937 = _934 ^ ((_934 << 7u) & 2636928640u);
    uint _940 = _937 ^ ((_937 << 15u) & 4022730752u);
    uint _942 = _940 ^ (_940 >> 18u);
    uint _961;
    uint _980;
    vec2 _670;
    uint _1718 = 0u;
    uint _1779 = _942;
    for (;;)
    {
        if (!(_1718 < 2u))
        {
            break;
        }
        uint _972 = _1779 + (_1779 << 10u);
        uint _974 = _972 ^ (_972 >> 6u);
        uint _976 = _974 + (_974 << 3u);
        uint _978 = _976 ^ (_976 >> 11u);
        _980 = _978 + (_978 << 15u);
        _670[_1718] = uintBitsToFloat((_1779 & 8388607u) | 1065353216u) - 1.0;
        _961 = _1718 + 1u;
        _1779 = _980;
        _1718 = _961;
        continue;
    }
    uvec3 _698 = uvec3(_680 + ivec3(0, 1, 0));
    uint _996 = _698.z;
    uint _1002 = _996 + (_996 << 10u);
    uint _1004 = _1002 ^ (_1002 >> 6u);
    uint _1006 = _1004 + (_1004 << 3u);
    uint _1008 = _1006 ^ (_1006 >> 11u);
    uint _1016 = (((_698.y * 1664525u) + (_1008 + (_1008 << 15u))) + 1013904223u) * 1664525u;
    uint _1018 = _1016 ^ (_1016 >> 11u);
    uint _1021 = _1018 ^ ((_1018 << 7u) & 2636928640u);
    uint _1024 = _1021 ^ ((_1021 << 15u) & 4022730752u);
    uint _1032 = (((_698.x * 1664525u) + (_1024 ^ (_1024 >> 18u))) + 1013904223u) * 1664525u;
    uint _1034 = _1032 ^ (_1032 >> 11u);
    uint _1037 = _1034 ^ ((_1034 << 7u) & 2636928640u);
    uint _1040 = _1037 ^ ((_1037 << 15u) & 4022730752u);
    uint _1042 = _1040 ^ (_1040 >> 18u);
    uint _1061;
    uint _1080;
    vec2 _671;
    uint _1721 = 0u;
    uint _1778 = _1042;
    for (;;)
    {
        if (!(_1721 < 2u))
        {
            break;
        }
        uint _1072 = _1778 + (_1778 << 10u);
        uint _1074 = _1072 ^ (_1072 >> 6u);
        uint _1076 = _1074 + (_1074 << 3u);
        uint _1078 = _1076 ^ (_1076 >> 11u);
        _1080 = _1078 + (_1078 << 15u);
        _671[_1721] = uintBitsToFloat((_1778 & 8388607u) | 1065353216u) - 1.0;
        _1061 = _1721 + 1u;
        _1778 = _1080;
        _1721 = _1061;
        continue;
    }
    uvec3 _706 = uvec3(_680 + ivec3(1, 1, 0));
    uint _1096 = _706.z;
    uint _1102 = _1096 + (_1096 << 10u);
    uint _1104 = _1102 ^ (_1102 >> 6u);
    uint _1106 = _1104 + (_1104 << 3u);
    uint _1108 = _1106 ^ (_1106 >> 11u);
    uint _1116 = (((_706.y * 1664525u) + (_1108 + (_1108 << 15u))) + 1013904223u) * 1664525u;
    uint _1118 = _1116 ^ (_1116 >> 11u);
    uint _1121 = _1118 ^ ((_1118 << 7u) & 2636928640u);
    uint _1124 = _1121 ^ ((_1121 << 15u) & 4022730752u);
    uint _1132 = (((_706.x * 1664525u) + (_1124 ^ (_1124 >> 18u))) + 1013904223u) * 1664525u;
    uint _1134 = _1132 ^ (_1132 >> 11u);
    uint _1137 = _1134 ^ ((_1134 << 7u) & 2636928640u);
    uint _1140 = _1137 ^ ((_1137 << 15u) & 4022730752u);
    uint _1142 = _1140 ^ (_1140 >> 18u);
    uint _1161;
    uint _1180;
    vec2 _672;
    uint _1725 = 0u;
    uint _1777 = _1142;
    for (;;)
    {
        if (!(_1725 < 2u))
        {
            break;
        }
        uint _1172 = _1777 + (_1777 << 10u);
        uint _1174 = _1172 ^ (_1172 >> 6u);
        uint _1176 = _1174 + (_1174 << 3u);
        uint _1178 = _1176 ^ (_1176 >> 11u);
        _1180 = _1178 + (_1178 << 15u);
        _672[_1725] = uintBitsToFloat((_1777 & 8388607u) | 1065353216u) - 1.0;
        _1161 = _1725 + 1u;
        _1777 = _1180;
        _1725 = _1161;
        continue;
    }
    uvec3 _713 = uvec3(_680 + ivec3(0, 0, 1));
    uint _1196 = _713.z;
    uint _1202 = _1196 + (_1196 << 10u);
    uint _1204 = _1202 ^ (_1202 >> 6u);
    uint _1206 = _1204 + (_1204 << 3u);
    uint _1208 = _1206 ^ (_1206 >> 11u);
    uint _1216 = (((_713.y * 1664525u) + (_1208 + (_1208 << 15u))) + 1013904223u) * 1664525u;
    uint _1218 = _1216 ^ (_1216 >> 11u);
    uint _1221 = _1218 ^ ((_1218 << 7u) & 2636928640u);
    uint _1224 = _1221 ^ ((_1221 << 15u) & 4022730752u);
    uint _1232 = (((_713.x * 1664525u) + (_1224 ^ (_1224 >> 18u))) + 1013904223u) * 1664525u;
    uint _1234 = _1232 ^ (_1232 >> 11u);
    uint _1237 = _1234 ^ ((_1234 << 7u) & 2636928640u);
    uint _1240 = _1237 ^ ((_1237 << 15u) & 4022730752u);
    uint _1242 = _1240 ^ (_1240 >> 18u);
    uint _1261;
    uint _1280;
    vec2 _673;
    uint _1730 = 0u;
    uint _1776 = _1242;
    for (;;)
    {
        if (!(_1730 < 2u))
        {
            break;
        }
        uint _1272 = _1776 + (_1776 << 10u);
        uint _1274 = _1272 ^ (_1272 >> 6u);
        uint _1276 = _1274 + (_1274 << 3u);
        uint _1278 = _1276 ^ (_1276 >> 11u);
        _1280 = _1278 + (_1278 << 15u);
        _673[_1730] = uintBitsToFloat((_1776 & 8388607u) | 1065353216u) - 1.0;
        _1261 = _1730 + 1u;
        _1776 = _1280;
        _1730 = _1261;
        continue;
    }
    uvec3 _722 = uvec3(_680 + ivec3(1, 0, 1));
    uint _1296 = _722.z;
    uint _1302 = _1296 + (_1296 << 10u);
    uint _1304 = _1302 ^ (_1302 >> 6u);
    uint _1306 = _1304 + (_1304 << 3u);
    uint _1308 = _1306 ^ (_1306 >> 11u);
    uint _1316 = (((_722.y * 1664525u) + (_1308 + (_1308 << 15u))) + 1013904223u) * 1664525u;
    uint _1318 = _1316 ^ (_1316 >> 11u);
    uint _1321 = _1318 ^ ((_1318 << 7u) & 2636928640u);
    uint _1324 = _1321 ^ ((_1321 << 15u) & 4022730752u);
    uint _1332 = (((_722.x * 1664525u) + (_1324 ^ (_1324 >> 18u))) + 1013904223u) * 1664525u;
    uint _1334 = _1332 ^ (_1332 >> 11u);
    uint _1337 = _1334 ^ ((_1334 << 7u) & 2636928640u);
    uint _1340 = _1337 ^ ((_1337 << 15u) & 4022730752u);
    uint _1342 = _1340 ^ (_1340 >> 18u);
    uint _1361;
    uint _1380;
    vec2 _674;
    uint _1736 = 0u;
    uint _1775 = _1342;
    for (;;)
    {
        if (!(_1736 < 2u))
        {
            break;
        }
        uint _1372 = _1775 + (_1775 << 10u);
        uint _1374 = _1372 ^ (_1372 >> 6u);
        uint _1376 = _1374 + (_1374 << 3u);
        uint _1378 = _1376 ^ (_1376 >> 11u);
        _1380 = _1378 + (_1378 << 15u);
        _674[_1736] = uintBitsToFloat((_1775 & 8388607u) | 1065353216u) - 1.0;
        _1361 = _1736 + 1u;
        _1775 = _1380;
        _1736 = _1361;
        continue;
    }
    uvec3 _729 = uvec3(_680 + ivec3(0, 1, 1));
    uint _1396 = _729.z;
    uint _1402 = _1396 + (_1396 << 10u);
    uint _1404 = _1402 ^ (_1402 >> 6u);
    uint _1406 = _1404 + (_1404 << 3u);
    uint _1408 = _1406 ^ (_1406 >> 11u);
    uint _1416 = (((_729.y * 1664525u) + (_1408 + (_1408 << 15u))) + 1013904223u) * 1664525u;
    uint _1418 = _1416 ^ (_1416 >> 11u);
    uint _1421 = _1418 ^ ((_1418 << 7u) & 2636928640u);
    uint _1424 = _1421 ^ ((_1421 << 15u) & 4022730752u);
    uint _1432 = (((_729.x * 1664525u) + (_1424 ^ (_1424 >> 18u))) + 1013904223u) * 1664525u;
    uint _1434 = _1432 ^ (_1432 >> 11u);
    uint _1437 = _1434 ^ ((_1434 << 7u) & 2636928640u);
    uint _1440 = _1437 ^ ((_1437 << 15u) & 4022730752u);
    uint _1442 = _1440 ^ (_1440 >> 18u);
    uint _1461;
    uint _1480;
    vec2 _675;
    uint _1743 = 0u;
    uint _1774 = _1442;
    for (;;)
    {
        if (!(_1743 < 2u))
        {
            break;
        }
        uint _1472 = _1774 + (_1774 << 10u);
        uint _1474 = _1472 ^ (_1472 >> 6u);
        uint _1476 = _1474 + (_1474 << 3u);
        uint _1478 = _1476 ^ (_1476 >> 11u);
        _1480 = _1478 + (_1478 << 15u);
        _675[_1743] = uintBitsToFloat((_1774 & 8388607u) | 1065353216u) - 1.0;
        _1461 = _1743 + 1u;
        _1774 = _1480;
        _1743 = _1461;
        continue;
    }
    uvec3 _737 = uvec3(_680 + ivec3(1));
    uint _1496 = _737.z;
    uint _1502 = _1496 + (_1496 << 10u);
    uint _1504 = _1502 ^ (_1502 >> 6u);
    uint _1506 = _1504 + (_1504 << 3u);
    uint _1508 = _1506 ^ (_1506 >> 11u);
    uint _1516 = (((_737.y * 1664525u) + (_1508 + (_1508 << 15u))) + 1013904223u) * 1664525u;
    uint _1518 = _1516 ^ (_1516 >> 11u);
    uint _1521 = _1518 ^ ((_1518 << 7u) & 2636928640u);
    uint _1524 = _1521 ^ ((_1521 << 15u) & 4022730752u);
    uint _1532 = (((_737.x * 1664525u) + (_1524 ^ (_1524 >> 18u))) + 1013904223u) * 1664525u;
    uint _1534 = _1532 ^ (_1532 >> 11u);
    uint _1537 = _1534 ^ ((_1534 << 7u) & 2636928640u);
    uint _1540 = _1537 ^ ((_1537 << 15u) & 4022730752u);
    uint _1542 = _1540 ^ (_1540 >> 18u);
    uint _1561;
    uint _1580;
    vec2 _676;
    uint _1751 = 0u;
    uint _1773 = _1542;
    for (;;)
    {
        if (!(_1751 < 2u))
        {
            break;
        }
        uint _1572 = _1773 + (_1773 << 10u);
        uint _1574 = _1572 ^ (_1572 >> 6u);
        uint _1576 = _1574 + (_1574 << 3u);
        uint _1578 = _1576 ^ (_1576 >> 11u);
        _1580 = _1578 + (_1578 << 15u);
        _676[_1751] = uintBitsToFloat((_1773 & 8388607u) | 1065353216u) - 1.0;
        _1561 = _1751 + 1u;
        _1773 = _1580;
        _1751 = _1561;
        continue;
    }
    vec3 _1592 = (_681 * _681) * (vec3(3.0) - (vec3(2.0) * _681));
    float _745 = _1592.x;
    float _746 = 1.0 - _745;
    float _748 = _1592.y;
    float _749 = 1.0 - _748;
    float _751 = _1592.z;
    float _752 = 1.0 - _751;
    vec2 _659 = clamp((((((((((((_669 * _746) * _749) * _752) + (((_670 * _745) * _749) * _752)) + (((_671 * _746) * _748) * _752)) + (((_672 * _745) * _748) * _752)) + (((_673 * _746) * _749) * _751)) + (((_674 * _745) * _749) * _751)) + (((_675 * _746) * _748) * _751)) + (((_676 * _745) * _748) * _751)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
    vec3 pos_ws = _614 + (vec3(_659.x, 0.0, _659.y) * 0.0599999986588954925537109375);
    bool _1602 = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].wall_slot_is_wooden_packed & 2147483648u) != 0u;
    vec2 _1756;
    if (_1602)
    {
        _1756 = Vertex_UV;
    }
    else
    {
        _1756 = vec2(0.0);
    }
    gl_Position = vec4(pos_ws, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_instance_seed = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_36]].seed;
    entryPointParam_vs_main_vertex_normal_ws = vec4(Vertex_Normal, 0.0) * _651;
    entryPointParam_vs_main_vertex_position_ws = pos_ws.xyz;
    entryPointParam_vs_main_pos_ms = vec3(0.0);
    entryPointParam_vs_main_dir_ms = vec3(0.0);
    entryPointParam_vs_main_squish_factor = 0.0;
    entryPointParam_vs_main_offset_from_instance_transform = vec3(0.0);
    entryPointParam_vs_main_global_arch_height = 0.0;
    entryPointParam_vs_main_stone_foundation_clip_y = -100000.0;
    entryPointParam_vs_main_frag_wall_uv = _1756;
    entryPointParam_vs_main_color_id = 0;
    entryPointParam_vs_main_frag_position_ws_no_brick_depth_xz = vec2(100000.0);
    entryPointParam_vs_main_flags = _1602 ? 1536 : 512;
    entryPointParam_vs_main_instance_index = nani_instance_indirection_buffer._member0[_36];
    entryPointParam_vs_main_normal_matrix = _MatrixStorage_float3x3_ColMajornatural(vec3[](vec3(0.0), vec3(0.0), vec3(0.0)));
}

