#version 460
#extension GL_EXT_demote_to_helper_invocation : require

float _1933;

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

layout(location = 2) in float vs_out_local_y;
layout(location = 1) in vec3 vs_out_frag_position_ws;
layout(location = 0) in vec3 vs_out_frag_normal_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;
layout(location = 1) out vec3 entryPointParam_ps_main_velocity;

void main()
{
    bool _1930;
    if (vs_out_local_y < 0.0)
    {
        _1930 = true;
    }
    else
    {
        _1930 = vs_out_local_y > 1.0;
    }
    if (_1930)
    {
        demote;
    }
    vec3 _96 = (vs_out_frag_position_ws * 2.0) + (vec3(0.0, -4.0, 0.0) * (float(frame_constants.game_time_sec) + frame_constants.game_time_frac));
    ivec3 _681 = ivec3(floor(_96));
    vec3 _682 = fract(_96);
    uvec3 _683 = uvec3(_681);
    uint _797 = _683.z;
    uint _803 = _797 + (_797 << 10u);
    uint _805 = _803 ^ (_803 >> 6u);
    uint _807 = _805 + (_805 << 3u);
    uint _809 = _807 ^ (_807 >> 11u);
    uint _817 = (((_683.y * 1664525u) + (_809 + (_809 << 15u))) + 1013904223u) * 1664525u;
    uint _819 = _817 ^ (_817 >> 11u);
    uint _822 = _819 ^ ((_819 << 7u) & 2636928640u);
    uint _825 = _822 ^ ((_822 << 15u) & 4022730752u);
    uint _833 = (((_683.x * 1664525u) + (_825 ^ (_825 >> 18u))) + 1013904223u) * 1664525u;
    uint _835 = _833 ^ (_833 >> 11u);
    uint _838 = _835 ^ ((_835 << 7u) & 2636928640u);
    uint _841 = _838 ^ ((_838 << 15u) & 4022730752u);
    uint _843 = _841 ^ (_841 >> 18u);
    float _1935;
    _1935 = _1933;
    uint _860;
    uint _879;
    float _885;
    uint _1934 = 0u;
    uint _2035 = _843;
    for (;;)
    {
        if (!(_1934 < 1u))
        {
            break;
        }
        uint _871 = _2035 + (_2035 << 10u);
        uint _873 = _871 ^ (_871 >> 6u);
        uint _875 = _873 + (_873 << 3u);
        uint _877 = _875 ^ (_875 >> 11u);
        _879 = _877 + (_877 << 15u);
        _885 = uintBitsToFloat((_2035 & 8388607u) | 1065353216u) - 1.0;
        _860 = _1934 + 1u;
        _2035 = _879;
        _1935 = _885;
        _1934 = _860;
        continue;
    }
    uvec3 _692 = uvec3(_681 + ivec3(1, 0, 0));
    uint _895 = _692.z;
    uint _901 = _895 + (_895 << 10u);
    uint _903 = _901 ^ (_901 >> 6u);
    uint _905 = _903 + (_903 << 3u);
    uint _907 = _905 ^ (_905 >> 11u);
    uint _915 = (((_692.y * 1664525u) + (_907 + (_907 << 15u))) + 1013904223u) * 1664525u;
    uint _917 = _915 ^ (_915 >> 11u);
    uint _920 = _917 ^ ((_917 << 7u) & 2636928640u);
    uint _923 = _920 ^ ((_920 << 15u) & 4022730752u);
    uint _931 = (((_692.x * 1664525u) + (_923 ^ (_923 >> 18u))) + 1013904223u) * 1664525u;
    uint _933 = _931 ^ (_931 >> 11u);
    uint _936 = _933 ^ ((_933 << 7u) & 2636928640u);
    uint _939 = _936 ^ ((_936 << 15u) & 4022730752u);
    uint _941 = _939 ^ (_939 >> 18u);
    float _1940;
    _1940 = _1933;
    uint _958;
    uint _977;
    float _983;
    uint _1939 = 0u;
    uint _2034 = _941;
    for (;;)
    {
        if (!(_1939 < 1u))
        {
            break;
        }
        uint _969 = _2034 + (_2034 << 10u);
        uint _971 = _969 ^ (_969 >> 6u);
        uint _973 = _971 + (_971 << 3u);
        uint _975 = _973 ^ (_973 >> 11u);
        _977 = _975 + (_975 << 15u);
        _983 = uintBitsToFloat((_2034 & 8388607u) | 1065353216u) - 1.0;
        _958 = _1939 + 1u;
        _2034 = _977;
        _1940 = _983;
        _1939 = _958;
        continue;
    }
    uvec3 _699 = uvec3(_681 + ivec3(0, 1, 0));
    uint _993 = _699.z;
    uint _999 = _993 + (_993 << 10u);
    uint _1001 = _999 ^ (_999 >> 6u);
    uint _1003 = _1001 + (_1001 << 3u);
    uint _1005 = _1003 ^ (_1003 >> 11u);
    uint _1013 = (((_699.y * 1664525u) + (_1005 + (_1005 << 15u))) + 1013904223u) * 1664525u;
    uint _1015 = _1013 ^ (_1013 >> 11u);
    uint _1018 = _1015 ^ ((_1015 << 7u) & 2636928640u);
    uint _1021 = _1018 ^ ((_1018 << 15u) & 4022730752u);
    uint _1029 = (((_699.x * 1664525u) + (_1021 ^ (_1021 >> 18u))) + 1013904223u) * 1664525u;
    uint _1031 = _1029 ^ (_1029 >> 11u);
    uint _1034 = _1031 ^ ((_1031 << 7u) & 2636928640u);
    uint _1037 = _1034 ^ ((_1034 << 15u) & 4022730752u);
    uint _1039 = _1037 ^ (_1037 >> 18u);
    float _1946;
    _1946 = _1933;
    uint _1056;
    uint _1075;
    float _1081;
    uint _1945 = 0u;
    uint _2033 = _1039;
    for (;;)
    {
        if (!(_1945 < 1u))
        {
            break;
        }
        uint _1067 = _2033 + (_2033 << 10u);
        uint _1069 = _1067 ^ (_1067 >> 6u);
        uint _1071 = _1069 + (_1069 << 3u);
        uint _1073 = _1071 ^ (_1071 >> 11u);
        _1075 = _1073 + (_1073 << 15u);
        _1081 = uintBitsToFloat((_2033 & 8388607u) | 1065353216u) - 1.0;
        _1056 = _1945 + 1u;
        _2033 = _1075;
        _1946 = _1081;
        _1945 = _1056;
        continue;
    }
    uvec3 _707 = uvec3(_681 + ivec3(1, 1, 0));
    uint _1091 = _707.z;
    uint _1097 = _1091 + (_1091 << 10u);
    uint _1099 = _1097 ^ (_1097 >> 6u);
    uint _1101 = _1099 + (_1099 << 3u);
    uint _1103 = _1101 ^ (_1101 >> 11u);
    uint _1111 = (((_707.y * 1664525u) + (_1103 + (_1103 << 15u))) + 1013904223u) * 1664525u;
    uint _1113 = _1111 ^ (_1111 >> 11u);
    uint _1116 = _1113 ^ ((_1113 << 7u) & 2636928640u);
    uint _1119 = _1116 ^ ((_1116 << 15u) & 4022730752u);
    uint _1127 = (((_707.x * 1664525u) + (_1119 ^ (_1119 >> 18u))) + 1013904223u) * 1664525u;
    uint _1129 = _1127 ^ (_1127 >> 11u);
    uint _1132 = _1129 ^ ((_1129 << 7u) & 2636928640u);
    uint _1135 = _1132 ^ ((_1132 << 15u) & 4022730752u);
    uint _1137 = _1135 ^ (_1135 >> 18u);
    float _1953;
    _1953 = _1933;
    uint _1154;
    uint _1173;
    float _1179;
    uint _1952 = 0u;
    uint _2032 = _1137;
    for (;;)
    {
        if (!(_1952 < 1u))
        {
            break;
        }
        uint _1165 = _2032 + (_2032 << 10u);
        uint _1167 = _1165 ^ (_1165 >> 6u);
        uint _1169 = _1167 + (_1167 << 3u);
        uint _1171 = _1169 ^ (_1169 >> 11u);
        _1173 = _1171 + (_1171 << 15u);
        _1179 = uintBitsToFloat((_2032 & 8388607u) | 1065353216u) - 1.0;
        _1154 = _1952 + 1u;
        _2032 = _1173;
        _1953 = _1179;
        _1952 = _1154;
        continue;
    }
    uvec3 _714 = uvec3(_681 + ivec3(0, 0, 1));
    uint _1189 = _714.z;
    uint _1195 = _1189 + (_1189 << 10u);
    uint _1197 = _1195 ^ (_1195 >> 6u);
    uint _1199 = _1197 + (_1197 << 3u);
    uint _1201 = _1199 ^ (_1199 >> 11u);
    uint _1209 = (((_714.y * 1664525u) + (_1201 + (_1201 << 15u))) + 1013904223u) * 1664525u;
    uint _1211 = _1209 ^ (_1209 >> 11u);
    uint _1214 = _1211 ^ ((_1211 << 7u) & 2636928640u);
    uint _1217 = _1214 ^ ((_1214 << 15u) & 4022730752u);
    uint _1225 = (((_714.x * 1664525u) + (_1217 ^ (_1217 >> 18u))) + 1013904223u) * 1664525u;
    uint _1227 = _1225 ^ (_1225 >> 11u);
    uint _1230 = _1227 ^ ((_1227 << 7u) & 2636928640u);
    uint _1233 = _1230 ^ ((_1230 << 15u) & 4022730752u);
    uint _1235 = _1233 ^ (_1233 >> 18u);
    float _1961;
    _1961 = _1933;
    uint _1252;
    uint _1271;
    float _1277;
    uint _1960 = 0u;
    uint _2031 = _1235;
    for (;;)
    {
        if (!(_1960 < 1u))
        {
            break;
        }
        uint _1263 = _2031 + (_2031 << 10u);
        uint _1265 = _1263 ^ (_1263 >> 6u);
        uint _1267 = _1265 + (_1265 << 3u);
        uint _1269 = _1267 ^ (_1267 >> 11u);
        _1271 = _1269 + (_1269 << 15u);
        _1277 = uintBitsToFloat((_2031 & 8388607u) | 1065353216u) - 1.0;
        _1252 = _1960 + 1u;
        _2031 = _1271;
        _1961 = _1277;
        _1960 = _1252;
        continue;
    }
    uvec3 _723 = uvec3(_681 + ivec3(1, 0, 1));
    uint _1287 = _723.z;
    uint _1293 = _1287 + (_1287 << 10u);
    uint _1295 = _1293 ^ (_1293 >> 6u);
    uint _1297 = _1295 + (_1295 << 3u);
    uint _1299 = _1297 ^ (_1297 >> 11u);
    uint _1307 = (((_723.y * 1664525u) + (_1299 + (_1299 << 15u))) + 1013904223u) * 1664525u;
    uint _1309 = _1307 ^ (_1307 >> 11u);
    uint _1312 = _1309 ^ ((_1309 << 7u) & 2636928640u);
    uint _1315 = _1312 ^ ((_1312 << 15u) & 4022730752u);
    uint _1323 = (((_723.x * 1664525u) + (_1315 ^ (_1315 >> 18u))) + 1013904223u) * 1664525u;
    uint _1325 = _1323 ^ (_1323 >> 11u);
    uint _1328 = _1325 ^ ((_1325 << 7u) & 2636928640u);
    uint _1331 = _1328 ^ ((_1328 << 15u) & 4022730752u);
    uint _1333 = _1331 ^ (_1331 >> 18u);
    float _1970;
    _1970 = _1933;
    uint _1350;
    uint _1369;
    float _1375;
    uint _1969 = 0u;
    uint _2030 = _1333;
    for (;;)
    {
        if (!(_1969 < 1u))
        {
            break;
        }
        uint _1361 = _2030 + (_2030 << 10u);
        uint _1363 = _1361 ^ (_1361 >> 6u);
        uint _1365 = _1363 + (_1363 << 3u);
        uint _1367 = _1365 ^ (_1365 >> 11u);
        _1369 = _1367 + (_1367 << 15u);
        _1375 = uintBitsToFloat((_2030 & 8388607u) | 1065353216u) - 1.0;
        _1350 = _1969 + 1u;
        _2030 = _1369;
        _1970 = _1375;
        _1969 = _1350;
        continue;
    }
    uvec3 _730 = uvec3(_681 + ivec3(0, 1, 1));
    uint _1385 = _730.z;
    uint _1391 = _1385 + (_1385 << 10u);
    uint _1393 = _1391 ^ (_1391 >> 6u);
    uint _1395 = _1393 + (_1393 << 3u);
    uint _1397 = _1395 ^ (_1395 >> 11u);
    uint _1405 = (((_730.y * 1664525u) + (_1397 + (_1397 << 15u))) + 1013904223u) * 1664525u;
    uint _1407 = _1405 ^ (_1405 >> 11u);
    uint _1410 = _1407 ^ ((_1407 << 7u) & 2636928640u);
    uint _1413 = _1410 ^ ((_1410 << 15u) & 4022730752u);
    uint _1421 = (((_730.x * 1664525u) + (_1413 ^ (_1413 >> 18u))) + 1013904223u) * 1664525u;
    uint _1423 = _1421 ^ (_1421 >> 11u);
    uint _1426 = _1423 ^ ((_1423 << 7u) & 2636928640u);
    uint _1429 = _1426 ^ ((_1426 << 15u) & 4022730752u);
    uint _1431 = _1429 ^ (_1429 >> 18u);
    float _1980;
    _1980 = _1933;
    uint _1448;
    uint _1467;
    float _1473;
    uint _1979 = 0u;
    uint _2029 = _1431;
    for (;;)
    {
        if (!(_1979 < 1u))
        {
            break;
        }
        uint _1459 = _2029 + (_2029 << 10u);
        uint _1461 = _1459 ^ (_1459 >> 6u);
        uint _1463 = _1461 + (_1461 << 3u);
        uint _1465 = _1463 ^ (_1463 >> 11u);
        _1467 = _1465 + (_1465 << 15u);
        _1473 = uintBitsToFloat((_2029 & 8388607u) | 1065353216u) - 1.0;
        _1448 = _1979 + 1u;
        _2029 = _1467;
        _1980 = _1473;
        _1979 = _1448;
        continue;
    }
    uvec3 _738 = uvec3(_681 + ivec3(1));
    uint _1483 = _738.z;
    uint _1489 = _1483 + (_1483 << 10u);
    uint _1491 = _1489 ^ (_1489 >> 6u);
    uint _1493 = _1491 + (_1491 << 3u);
    uint _1495 = _1493 ^ (_1493 >> 11u);
    uint _1503 = (((_738.y * 1664525u) + (_1495 + (_1495 << 15u))) + 1013904223u) * 1664525u;
    uint _1505 = _1503 ^ (_1503 >> 11u);
    uint _1508 = _1505 ^ ((_1505 << 7u) & 2636928640u);
    uint _1511 = _1508 ^ ((_1508 << 15u) & 4022730752u);
    uint _1519 = (((_738.x * 1664525u) + (_1511 ^ (_1511 >> 18u))) + 1013904223u) * 1664525u;
    uint _1521 = _1519 ^ (_1519 >> 11u);
    uint _1524 = _1521 ^ ((_1521 << 7u) & 2636928640u);
    uint _1527 = _1524 ^ ((_1524 << 15u) & 4022730752u);
    uint _1529 = _1527 ^ (_1527 >> 18u);
    float _1991;
    _1991 = _1933;
    uint _1546;
    uint _1565;
    float _1571;
    uint _1990 = 0u;
    uint _2028 = _1529;
    for (;;)
    {
        if (!(_1990 < 1u))
        {
            break;
        }
        uint _1557 = _2028 + (_2028 << 10u);
        uint _1559 = _1557 ^ (_1557 >> 6u);
        uint _1561 = _1559 + (_1559 << 3u);
        uint _1563 = _1561 ^ (_1561 >> 11u);
        _1565 = _1563 + (_1563 << 15u);
        _1571 = uintBitsToFloat((_2028 & 8388607u) | 1065353216u) - 1.0;
        _1546 = _1990 + 1u;
        _2028 = _1565;
        _1991 = _1571;
        _1990 = _1546;
        continue;
    }
    vec3 _1577 = (_682 * _682) * (vec3(3.0) - (vec3(2.0) * _682));
    float _746 = _1577.x;
    float _747 = 1.0 - _746;
    float _749 = _1577.y;
    float _750 = 1.0 - _749;
    float _752 = _1577.z;
    if (((((((1.0 - _752) * (((_750 * ((_1935 * _747) + (_1940 * _746))) + ((_1946 * _747) * _749)) + ((_1953 * _746) * _749))) + (((_1961 * _747) * _750) * _752)) + (((_1970 * _746) * _750) * _752)) + (((_1980 * _747) * _749) * _752)) + (((_1991 * _746) * _749) * _752)) > smoothstep(0.800000011920928955078125, 0.100000001490116119384765625, vs_out_local_y))
    {
        demote;
    }
    vec3 _1619 = (normalize(vs_out_frag_normal_ws) * 0.5) + vec3(0.5);
    uvec2 _2057 = uvec2(((uint((clamp(_1619.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1619.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1619.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 4278190080u, 9211020u);
    _2057.y = 1183616140u;
    entryPointParam_ps_main_gbuffer = _2057;
    entryPointParam_ps_main_velocity = vec3(0.0, (1.2999999523162841796875 * frame_constants.delta_time_seconds) * smoothstep(0.0, 0.0199999995529651641845703125, vs_out_local_y), 0.0);
}

