#version 460
#extension GL_EXT_scalar_block_layout : require

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

float _1645;

layout(set = 0, binding = 0, scalar) uniform MaterialData_natural
{
    Affine3Packed_natural model_to_world;
    int seed;
    float local_start_y;
    float body_end_y;
    float tip_end_y;
    int is_corner;
    int color_id;
    int follows_stairs;
    float attachment_left_y;
    float attachment_right_y;
} material_data;

layout(set = 4, binding = 0, std140) uniform FrameConstants_natural
{
    vec4 sun_color;
    vec4 sky_low_color;
    vec4 sky_high_color;
    vec4 fog_tint_thickness;
    vec4 fake_light_color;
    vec4 fake_light_dir;
    vec4 fake_light2_color;
    vec4 fake_light2_dir;
    float time_since_startup_secs;
    float delta_time_seconds;
    float ev_mult;
    uint glade_theme_id;
    uvec2 world_render_resolution;
    uint game_time_sec;
    float game_time_frac;
    vec3 editing_highlight_color;
    float time_of_day;
    vec3 dir_to_sun;
    uint camera_idx;
    vec3 dir_to_moon;
    uint render_overrides;
    vec3 dir_to_primary_directional_light;
    float main_view_lod_scale;
    vec4 main_view_eye_position;
    float fog_relative_extinction;
    uint highlighted_transient_stair_edge_id;
    uvec2 swapchain_dims;
    float swapchain_aspect_ratio;
    uint is_photomode;
    uint is_topdown_mode;
    uint is_firstperson_mode;
    vec3 brush_position;
    float eraser_size_multiplier;
    uint roof_highlighted_slot_id;
    uint roof_highlight_mode;
    uint wall_highlighted_slot_id;
    uint wall_highlight_mode;
    uint highlight_bricks_to_delete;
    float wind_strength;
    float tree_canopy_cone_angle_mult;
    float tree_canopy_max_cone_cull_dist_range;
    vec4 debug_tweakers;
    vec3 ground_fog;
    float moonswap;
} frame_constants;

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
layout(location = 4) in int is_tip;
layout(location = 5) in float bby;
layout(location = 1) in vec3 Vertex_Color;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 3) in vec2 Vertex_UV;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 3) out vec2 entryPointParam_vs_main_uv_side_pattern;
layout(location = 4) out vec2 entryPointParam_vs_main_uv_border_mask;
layout(location = 5) out vec2 entryPointParam_vs_main_uv_center_pattern;
layout(location = 6) out vec2 entryPointParam_vs_main_uv_bottom_pattern;

void main()
{
    vec3 _66 = Vertex_Position;
    bool _73 = is_tip == 0;
    vec3 _1643;
    if (_73)
    {
        vec3 _1634 = _66;
        _1634.y = -mix(material_data.local_start_y, material_data.body_end_y, 1.0 - bby);
        _1643 = _1634;
    }
    else
    {
        vec3 _1632 = _66;
        _1632.y = -mix(material_data.body_end_y, material_data.tip_end_y, 1.0 - bby);
        _1643 = _1632;
    }
    mat3x4 _700 = transpose(mat4x3(vec3(material_data.model_to_world.data.data[0], material_data.model_to_world.data.data[1], material_data.model_to_world.data.data[2]), vec3(material_data.model_to_world.data.data[3], material_data.model_to_world.data.data[4], material_data.model_to_world.data.data[5]), vec3(material_data.model_to_world.data.data[6], material_data.model_to_world.data.data[7], material_data.model_to_world.data.data[8]), vec3(material_data.model_to_world.data.data[9], material_data.model_to_world.data.data[10], material_data.model_to_world.data.data[11])));
    float _725 = float(frame_constants.game_time_sec);
    float _728 = _725 + frame_constants.game_time_frac;
    vec2 _707 = ((vec4(vec3(0.0), 1.0) * _700).xz * 0.100000001490116119384765625) + (vec2(_728, 0.0) * 1.2000000476837158203125);
    ivec2 _744 = ivec2(floor(_707));
    vec2 _745 = fract(_707);
    uvec2 _746 = uvec2(_744);
    uint _796 = _746.y;
    uint _802 = _796 + (_796 << 10u);
    uint _804 = _802 ^ (_802 >> 6u);
    uint _806 = _804 + (_804 << 3u);
    uint _808 = _806 ^ (_806 >> 11u);
    uint _816 = (((_746.x * 1664525u) + (_808 + (_808 << 15u))) + 1013904223u) * 1664525u;
    uint _818 = _816 ^ (_816 >> 11u);
    uint _821 = _818 ^ ((_818 << 7u) & 2636928640u);
    uint _824 = _821 ^ ((_821 << 15u) & 4022730752u);
    uint _826 = _824 ^ (_824 >> 18u);
    float _1647;
    _1647 = _1645;
    uint _843;
    uint _862;
    float _868;
    uint _1646 = 0u;
    uint _1734 = _826;
    for (;;)
    {
        if (!(_1646 < 1u))
        {
            break;
        }
        uint _854 = _1734 + (_1734 << 10u);
        uint _856 = _854 ^ (_854 >> 6u);
        uint _858 = _856 + (_856 << 3u);
        uint _860 = _858 ^ (_858 >> 11u);
        _862 = _860 + (_860 << 15u);
        _868 = uintBitsToFloat((_1734 & 8388607u) | 1065353216u) - 1.0;
        _843 = _1646 + 1u;
        _1734 = _862;
        _1647 = _868;
        _1646 = _843;
        continue;
    }
    uvec2 _754 = uvec2(_744 + ivec2(1, 0));
    uint _872 = _754.y;
    uint _878 = _872 + (_872 << 10u);
    uint _880 = _878 ^ (_878 >> 6u);
    uint _882 = _880 + (_880 << 3u);
    uint _884 = _882 ^ (_882 >> 11u);
    uint _892 = (((_754.x * 1664525u) + (_884 + (_884 << 15u))) + 1013904223u) * 1664525u;
    uint _894 = _892 ^ (_892 >> 11u);
    uint _897 = _894 ^ ((_894 << 7u) & 2636928640u);
    uint _900 = _897 ^ ((_897 << 15u) & 4022730752u);
    uint _902 = _900 ^ (_900 >> 18u);
    float _1651;
    _1651 = _1645;
    uint _919;
    uint _938;
    float _944;
    uint _1650 = 0u;
    uint _1733 = _902;
    for (;;)
    {
        if (!(_1650 < 1u))
        {
            break;
        }
        uint _930 = _1733 + (_1733 << 10u);
        uint _932 = _930 ^ (_930 >> 6u);
        uint _934 = _932 + (_932 << 3u);
        uint _936 = _934 ^ (_934 >> 11u);
        _938 = _936 + (_936 << 15u);
        _944 = uintBitsToFloat((_1733 & 8388607u) | 1065353216u) - 1.0;
        _919 = _1650 + 1u;
        _1733 = _938;
        _1651 = _944;
        _1650 = _919;
        continue;
    }
    uvec2 _761 = uvec2(_744 + ivec2(0, 1));
    uint _948 = _761.y;
    uint _954 = _948 + (_948 << 10u);
    uint _956 = _954 ^ (_954 >> 6u);
    uint _958 = _956 + (_956 << 3u);
    uint _960 = _958 ^ (_958 >> 11u);
    uint _968 = (((_761.x * 1664525u) + (_960 + (_960 << 15u))) + 1013904223u) * 1664525u;
    uint _970 = _968 ^ (_968 >> 11u);
    uint _973 = _970 ^ ((_970 << 7u) & 2636928640u);
    uint _976 = _973 ^ ((_973 << 15u) & 4022730752u);
    uint _978 = _976 ^ (_976 >> 18u);
    float _1656;
    _1656 = _1645;
    uint _995;
    uint _1014;
    float _1020;
    uint _1655 = 0u;
    uint _1732 = _978;
    for (;;)
    {
        if (!(_1655 < 1u))
        {
            break;
        }
        uint _1006 = _1732 + (_1732 << 10u);
        uint _1008 = _1006 ^ (_1006 >> 6u);
        uint _1010 = _1008 + (_1008 << 3u);
        uint _1012 = _1010 ^ (_1010 >> 11u);
        _1014 = _1012 + (_1012 << 15u);
        _1020 = uintBitsToFloat((_1732 & 8388607u) | 1065353216u) - 1.0;
        _995 = _1655 + 1u;
        _1732 = _1014;
        _1656 = _1020;
        _1655 = _995;
        continue;
    }
    uvec2 _769 = uvec2(_744 + ivec2(1));
    uint _1024 = _769.y;
    uint _1030 = _1024 + (_1024 << 10u);
    uint _1032 = _1030 ^ (_1030 >> 6u);
    uint _1034 = _1032 + (_1032 << 3u);
    uint _1036 = _1034 ^ (_1034 >> 11u);
    uint _1044 = (((_769.x * 1664525u) + (_1036 + (_1036 << 15u))) + 1013904223u) * 1664525u;
    uint _1046 = _1044 ^ (_1044 >> 11u);
    uint _1049 = _1046 ^ ((_1046 << 7u) & 2636928640u);
    uint _1052 = _1049 ^ ((_1049 << 15u) & 4022730752u);
    uint _1054 = _1052 ^ (_1052 >> 18u);
    float _1662;
    _1662 = _1645;
    uint _1071;
    uint _1090;
    float _1096;
    uint _1661 = 0u;
    uint _1731 = _1054;
    for (;;)
    {
        if (!(_1661 < 1u))
        {
            break;
        }
        uint _1082 = _1731 + (_1731 << 10u);
        uint _1084 = _1082 ^ (_1082 >> 6u);
        uint _1086 = _1084 + (_1084 << 3u);
        uint _1088 = _1086 ^ (_1086 >> 11u);
        _1090 = _1088 + (_1088 << 15u);
        _1096 = uintBitsToFloat((_1731 & 8388607u) | 1065353216u) - 1.0;
        _1071 = _1661 + 1u;
        _1731 = _1090;
        _1662 = _1096;
        _1661 = _1071;
        continue;
    }
    vec2 _1102 = (_745 * _745) * (vec2(3.0) - (vec2(2.0) * _745));
    float _777 = _1102.x;
    float _778 = 1.0 - _777;
    float _780 = _1102.y;
    uint _716 = uint(material_data.seed);
    uint _1115 = _716 + (_716 << 10u);
    uint _1117 = _1115 ^ (_1115 >> 6u);
    uint _1119 = _1117 + (_1117 << 3u);
    uint _1121 = _1119 ^ (_1119 >> 11u);
    float _436 = mix(0.300000011920928955078125, 1.0, ((sin((((((1.0 - _780) * ((_1647 * _778) + (_1651 * _777))) + ((_1656 * _778) * _780)) + ((_1662 * _777) * _780)) * 3.1400001049041748046875) - 1.57000005245208740234375) + 0.300000011920928955078125) * 0.699999988079071044921875) * mix(0.699999988079071044921875, 1.0, uintBitsToFloat(((_1121 + (_1121 << 15u)) & 8388607u) | 1065353216u) - 1.0));
    bool _437 = material_data.is_corner == 0;
    float _1710;
    if (_437)
    {
        _1710 = _436 * 0.300000011920928955078125;
    }
    else
    {
        _1710 = _436 * 0.5;
    }
    float _1135 = _725 * 1.7999999523162841796875;
    vec2 _473 = vec2(_728 + _1643.x, _1643.y);
    ivec2 _1161 = ivec2(floor(_473));
    vec2 _1162 = fract(_473);
    uvec2 _1163 = uvec2(_1161);
    uint _1213 = _1163.y;
    uint _1219 = _1213 + (_1213 << 10u);
    uint _1221 = _1219 ^ (_1219 >> 6u);
    uint _1223 = _1221 + (_1221 << 3u);
    uint _1225 = _1223 ^ (_1223 >> 11u);
    uint _1233 = (((_1163.x * 1664525u) + (_1225 + (_1225 << 15u))) + 1013904223u) * 1664525u;
    uint _1235 = _1233 ^ (_1233 >> 11u);
    uint _1238 = _1235 ^ ((_1235 << 7u) & 2636928640u);
    uint _1241 = _1238 ^ ((_1238 << 15u) & 4022730752u);
    uint _1243 = _1241 ^ (_1241 >> 18u);
    float _1675;
    _1675 = _1645;
    uint _1260;
    uint _1279;
    float _1285;
    uint _1674 = 0u;
    uint _1730 = _1243;
    for (;;)
    {
        if (!(_1674 < 1u))
        {
            break;
        }
        uint _1271 = _1730 + (_1730 << 10u);
        uint _1273 = _1271 ^ (_1271 >> 6u);
        uint _1275 = _1273 + (_1273 << 3u);
        uint _1277 = _1275 ^ (_1275 >> 11u);
        _1279 = _1277 + (_1277 << 15u);
        _1285 = uintBitsToFloat((_1730 & 8388607u) | 1065353216u) - 1.0;
        _1260 = _1674 + 1u;
        _1730 = _1279;
        _1675 = _1285;
        _1674 = _1260;
        continue;
    }
    uvec2 _1171 = uvec2(_1161 + ivec2(1, 0));
    uint _1289 = _1171.y;
    uint _1295 = _1289 + (_1289 << 10u);
    uint _1297 = _1295 ^ (_1295 >> 6u);
    uint _1299 = _1297 + (_1297 << 3u);
    uint _1301 = _1299 ^ (_1299 >> 11u);
    uint _1309 = (((_1171.x * 1664525u) + (_1301 + (_1301 << 15u))) + 1013904223u) * 1664525u;
    uint _1311 = _1309 ^ (_1309 >> 11u);
    uint _1314 = _1311 ^ ((_1311 << 7u) & 2636928640u);
    uint _1317 = _1314 ^ ((_1314 << 15u) & 4022730752u);
    uint _1319 = _1317 ^ (_1317 >> 18u);
    float _1684;
    _1684 = _1645;
    uint _1336;
    uint _1355;
    float _1361;
    uint _1683 = 0u;
    uint _1729 = _1319;
    for (;;)
    {
        if (!(_1683 < 1u))
        {
            break;
        }
        uint _1347 = _1729 + (_1729 << 10u);
        uint _1349 = _1347 ^ (_1347 >> 6u);
        uint _1351 = _1349 + (_1349 << 3u);
        uint _1353 = _1351 ^ (_1351 >> 11u);
        _1355 = _1353 + (_1353 << 15u);
        _1361 = uintBitsToFloat((_1729 & 8388607u) | 1065353216u) - 1.0;
        _1336 = _1683 + 1u;
        _1729 = _1355;
        _1684 = _1361;
        _1683 = _1336;
        continue;
    }
    uvec2 _1178 = uvec2(_1161 + ivec2(0, 1));
    uint _1365 = _1178.y;
    uint _1371 = _1365 + (_1365 << 10u);
    uint _1373 = _1371 ^ (_1371 >> 6u);
    uint _1375 = _1373 + (_1373 << 3u);
    uint _1377 = _1375 ^ (_1375 >> 11u);
    uint _1385 = (((_1178.x * 1664525u) + (_1377 + (_1377 << 15u))) + 1013904223u) * 1664525u;
    uint _1387 = _1385 ^ (_1385 >> 11u);
    uint _1390 = _1387 ^ ((_1387 << 7u) & 2636928640u);
    uint _1393 = _1390 ^ ((_1390 << 15u) & 4022730752u);
    uint _1395 = _1393 ^ (_1393 >> 18u);
    float _1694;
    _1694 = _1645;
    uint _1412;
    uint _1431;
    float _1437;
    uint _1693 = 0u;
    uint _1728 = _1395;
    for (;;)
    {
        if (!(_1693 < 1u))
        {
            break;
        }
        uint _1423 = _1728 + (_1728 << 10u);
        uint _1425 = _1423 ^ (_1423 >> 6u);
        uint _1427 = _1425 + (_1425 << 3u);
        uint _1429 = _1427 ^ (_1427 >> 11u);
        _1431 = _1429 + (_1429 << 15u);
        _1437 = uintBitsToFloat((_1728 & 8388607u) | 1065353216u) - 1.0;
        _1412 = _1693 + 1u;
        _1728 = _1431;
        _1694 = _1437;
        _1693 = _1412;
        continue;
    }
    uvec2 _1186 = uvec2(_1161 + ivec2(1));
    uint _1441 = _1186.y;
    uint _1447 = _1441 + (_1441 << 10u);
    uint _1449 = _1447 ^ (_1447 >> 6u);
    uint _1451 = _1449 + (_1449 << 3u);
    uint _1453 = _1451 ^ (_1451 >> 11u);
    uint _1461 = (((_1186.x * 1664525u) + (_1453 + (_1453 << 15u))) + 1013904223u) * 1664525u;
    uint _1463 = _1461 ^ (_1461 >> 11u);
    uint _1466 = _1463 ^ ((_1463 << 7u) & 2636928640u);
    uint _1469 = _1466 ^ ((_1466 << 15u) & 4022730752u);
    uint _1471 = _1469 ^ (_1469 >> 18u);
    float _1705;
    _1705 = _1645;
    uint _1488;
    uint _1507;
    float _1513;
    uint _1704 = 0u;
    uint _1727 = _1471;
    for (;;)
    {
        if (!(_1704 < 1u))
        {
            break;
        }
        uint _1499 = _1727 + (_1727 << 10u);
        uint _1501 = _1499 ^ (_1499 >> 6u);
        uint _1503 = _1501 + (_1501 << 3u);
        uint _1505 = _1503 ^ (_1503 >> 11u);
        _1507 = _1505 + (_1505 << 15u);
        _1513 = uintBitsToFloat((_1727 & 8388607u) | 1065353216u) - 1.0;
        _1488 = _1704 + 1u;
        _1727 = _1507;
        _1705 = _1513;
        _1704 = _1488;
        continue;
    }
    vec2 _1519 = (_1162 * _1162) * (vec2(3.0) - (vec2(2.0) * _1162));
    float _1194 = _1519.x;
    float _1195 = 1.0 - _1194;
    float _1197 = _1519.y;
    float _481 = _1643.z + ((sin((((_1135 - 6.283185482025146484375 * trunc(_1135 / 6.283185482025146484375)) + (frame_constants.game_time_frac * 1.7999999523162841796875)) + (_1643.y * 0.5)) + ((((1.0 - _1197) * ((_1675 * _1195) + (_1684 * _1194))) + ((_1694 * _1195) * _1197)) + ((_1705 * _1194) * _1197))) * smoothstep(0.0, -3.0, _1643.y)) * _1710);
    vec3 _1637 = _1643;
    _1637.z = _481;
    bool _1715;
    if (_437)
    {
        _1715 = material_data.follows_stairs == 0;
    }
    else
    {
        _1715 = false;
    }
    vec3 _1717;
    if (_1715)
    {
        vec3 _1639 = _1637;
        _1639.z = abs(_481 + 0.0500000007450580596923828125) - 0.0500000007450580596923828125;
        _1717 = _1639;
    }
    else
    {
        _1717 = _1637;
    }
    vec3 _1723;
    if (material_data.follows_stairs != 0)
    {
        float _1719;
        if (_1717.x < 0.0)
        {
            _1719 = material_data.attachment_left_y * clamp(_1717.x * (-2.0), 0.0, 1.0);
        }
        else
        {
            _1719 = material_data.attachment_right_y * clamp(_1717.x * 2.0, 0.0, 1.0);
        }
        float _1720;
        if (_73)
        {
            _1720 = smoothstep(0.0, 1.0, bby);
        }
        else
        {
            _1720 = 0.0;
        }
        vec3 _1642 = _1717;
        _1642.y = _1717.y + (_1719 * _1720);
        _1723 = _1642;
    }
    else
    {
        _1723 = _1717;
    }
    vec3 _1526 = vec4(_1723, 1.0) * _700;
    float body_length = material_data.body_end_y - material_data.local_start_y;
    gl_Position = vec4(_1526, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = Vertex_Color;
    entryPointParam_vs_main_frag_normal_ws = vec4(Vertex_Normal, 0.0) * _700;
    entryPointParam_vs_main_frag_position_ws = _1526.xyz;
    entryPointParam_vs_main_uv_side_pattern = vec2(_66.x + 0.5, (_1717.y * 1.5) + 0.5);
    entryPointParam_vs_main_uv_border_mask = Vertex_UV;
    entryPointParam_vs_main_uv_center_pattern = (vec2(_66.x, (_1717.y + (body_length * 0.5)) + 0.20000000298023223876953125) * (0.800000011920928955078125 / min(max(0.699999988079071044921875, body_length - 0.5), 1.0))) + vec2(0.5);
    entryPointParam_vs_main_uv_bottom_pattern = (vec2(_66.x, (material_data.tip_end_y - material_data.local_start_y) + _1717.y) * 0.75) + vec2(0.5, 0.0);
}

