#version 460
#extension GL_EXT_demote_to_helper_invocation : require

float _2313;
vec4 _2547;

layout(set = 19, binding = 0, std140) uniform ViewConstants_natural
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

layout(set = 0, binding = 2) uniform texture2D material_data_bark_color_naked;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 0, binding = 1) uniform texture2D material_data_bark_color;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 11, binding = 0) uniform texture2D rocky_terrain_tex;
layout(set = 0, binding = 3) uniform texture2D material_data_bark_lines;

layout(location = 3) in float vs_out_anim_t;
layout(location = 2) in vec3 vs_out_frag_pos_ws;
layout(location = 4) in float vs_out_see_thru_anim_t;
layout(location = 7) in float vs_out_local_y;
layout(location = 6) flat in uint vs_out_handplaced_flag;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;
layout(location = 1) in vec3 vs_out_frag_normal;
layout(location = 0) in vec3 vs_out_frag_uv;

void main()
{
    do
    {
        if (vs_out_anim_t < 0.300000011920928955078125)
        {
            demote;
        }
        vec4 _103 = vec4(vs_out_frag_pos_ws, 1.0) * current_view.world_to_view;
        vec3 frag_pos_vs = _103.xyz;
        float _2306;
        do
        {
            if ((frame_constants.render_overrides & 2u) != 0u)
            {
                _2306 = vs_out_see_thru_anim_t * smoothstep(0.0, 6.0, vs_out_local_y);
                break;
            }
            else
            {
                _2306 = 0.0;
                break;
            }
            break; // unreachable workaround
        } while(false);
        bool is_naked_tree_olden = vs_out_handplaced_flag == 3u;
        bool _2307;
        if (int(_2306 > 0.0) == 1)
        {
            _2307 = frame_constants.is_firstperson_mode == 0u;
        }
        else
        {
            _2307 = false;
        }
        bool _2308;
        if (_2307)
        {
            _2308 = !is_naked_tree_olden;
        }
        else
        {
            _2308 = false;
        }
        if (_2308)
        {
            frag_pos_vs.x = _103.x * 0.769230782985687255859375;
            frag_pos_vs.y = _103.y * 1.10000002384185791015625;
            vec2 cone_cull_dist_range = vec2(6.659999847412109375, frame_constants.tree_canopy_max_cone_cull_dist_range) * current_view.view_to_clip[1].y;
            float _189 = -_103.z;
            float _190 = cone_cull_dist_range.y;
            if (_189 < _190)
            {
                vec2 _195 = vs_out_frag_pos_ws.zy * 3.0;
                ivec2 _1089 = ivec2(floor(_195));
                vec2 _1090 = fract(_195);
                uvec2 _1091 = uvec2(_1089);
                uint _1141 = _1091.y;
                uint _1147 = _1141 + (_1141 << 10u);
                uint _1149 = _1147 ^ (_1147 >> 6u);
                uint _1151 = _1149 + (_1149 << 3u);
                uint _1153 = _1151 ^ (_1151 >> 11u);
                uint _1161 = (((_1091.x * 1664525u) + (_1153 + (_1153 << 15u))) + 1013904223u) * 1664525u;
                uint _1163 = _1161 ^ (_1161 >> 11u);
                uint _1166 = _1163 ^ ((_1163 << 7u) & 2636928640u);
                uint _1169 = _1166 ^ ((_1166 << 15u) & 4022730752u);
                uint _1171 = _1169 ^ (_1169 >> 18u);
                float _2315;
                _2315 = _2313;
                uint _1188;
                uint _1207;
                float _1213;
                uint _2314 = 0u;
                uint _2514 = _1171;
                for (;;)
                {
                    if (!(_2314 < 1u))
                    {
                        break;
                    }
                    uint _1199 = _2514 + (_2514 << 10u);
                    uint _1201 = _1199 ^ (_1199 >> 6u);
                    uint _1203 = _1201 + (_1201 << 3u);
                    uint _1205 = _1203 ^ (_1203 >> 11u);
                    _1207 = _1205 + (_1205 << 15u);
                    _1213 = uintBitsToFloat((_2514 & 8388607u) | 1065353216u) - 1.0;
                    _1188 = _2314 + 1u;
                    _2514 = _1207;
                    _2315 = _1213;
                    _2314 = _1188;
                    continue;
                }
                uvec2 _1099 = uvec2(_1089 + ivec2(1, 0));
                uint _1217 = _1099.y;
                uint _1223 = _1217 + (_1217 << 10u);
                uint _1225 = _1223 ^ (_1223 >> 6u);
                uint _1227 = _1225 + (_1225 << 3u);
                uint _1229 = _1227 ^ (_1227 >> 11u);
                uint _1237 = (((_1099.x * 1664525u) + (_1229 + (_1229 << 15u))) + 1013904223u) * 1664525u;
                uint _1239 = _1237 ^ (_1237 >> 11u);
                uint _1242 = _1239 ^ ((_1239 << 7u) & 2636928640u);
                uint _1245 = _1242 ^ ((_1242 << 15u) & 4022730752u);
                uint _1247 = _1245 ^ (_1245 >> 18u);
                float _2322;
                _2322 = _2313;
                uint _1264;
                uint _1283;
                float _1289;
                uint _2321 = 0u;
                uint _2513 = _1247;
                for (;;)
                {
                    if (!(_2321 < 1u))
                    {
                        break;
                    }
                    uint _1275 = _2513 + (_2513 << 10u);
                    uint _1277 = _1275 ^ (_1275 >> 6u);
                    uint _1279 = _1277 + (_1277 << 3u);
                    uint _1281 = _1279 ^ (_1279 >> 11u);
                    _1283 = _1281 + (_1281 << 15u);
                    _1289 = uintBitsToFloat((_2513 & 8388607u) | 1065353216u) - 1.0;
                    _1264 = _2321 + 1u;
                    _2513 = _1283;
                    _2322 = _1289;
                    _2321 = _1264;
                    continue;
                }
                uvec2 _1106 = uvec2(_1089 + ivec2(0, 1));
                uint _1293 = _1106.y;
                uint _1299 = _1293 + (_1293 << 10u);
                uint _1301 = _1299 ^ (_1299 >> 6u);
                uint _1303 = _1301 + (_1301 << 3u);
                uint _1305 = _1303 ^ (_1303 >> 11u);
                uint _1313 = (((_1106.x * 1664525u) + (_1305 + (_1305 << 15u))) + 1013904223u) * 1664525u;
                uint _1315 = _1313 ^ (_1313 >> 11u);
                uint _1318 = _1315 ^ ((_1315 << 7u) & 2636928640u);
                uint _1321 = _1318 ^ ((_1318 << 15u) & 4022730752u);
                uint _1323 = _1321 ^ (_1321 >> 18u);
                float _2330;
                _2330 = _2313;
                uint _1340;
                uint _1359;
                float _1365;
                uint _2329 = 0u;
                uint _2512 = _1323;
                for (;;)
                {
                    if (!(_2329 < 1u))
                    {
                        break;
                    }
                    uint _1351 = _2512 + (_2512 << 10u);
                    uint _1353 = _1351 ^ (_1351 >> 6u);
                    uint _1355 = _1353 + (_1353 << 3u);
                    uint _1357 = _1355 ^ (_1355 >> 11u);
                    _1359 = _1357 + (_1357 << 15u);
                    _1365 = uintBitsToFloat((_2512 & 8388607u) | 1065353216u) - 1.0;
                    _1340 = _2329 + 1u;
                    _2512 = _1359;
                    _2330 = _1365;
                    _2329 = _1340;
                    continue;
                }
                uvec2 _1114 = uvec2(_1089 + ivec2(1));
                uint _1369 = _1114.y;
                uint _1375 = _1369 + (_1369 << 10u);
                uint _1377 = _1375 ^ (_1375 >> 6u);
                uint _1379 = _1377 + (_1377 << 3u);
                uint _1381 = _1379 ^ (_1379 >> 11u);
                uint _1389 = (((_1114.x * 1664525u) + (_1381 + (_1381 << 15u))) + 1013904223u) * 1664525u;
                uint _1391 = _1389 ^ (_1389 >> 11u);
                uint _1394 = _1391 ^ ((_1391 << 7u) & 2636928640u);
                uint _1397 = _1394 ^ ((_1394 << 15u) & 4022730752u);
                uint _1399 = _1397 ^ (_1397 >> 18u);
                float _2339;
                _2339 = _2313;
                uint _1416;
                uint _1435;
                float _1441;
                uint _2338 = 0u;
                uint _2511 = _1399;
                for (;;)
                {
                    if (!(_2338 < 1u))
                    {
                        break;
                    }
                    uint _1427 = _2511 + (_2511 << 10u);
                    uint _1429 = _1427 ^ (_1427 >> 6u);
                    uint _1431 = _1429 + (_1429 << 3u);
                    uint _1433 = _1431 ^ (_1431 >> 11u);
                    _1435 = _1433 + (_1433 << 15u);
                    _1441 = uintBitsToFloat((_2511 & 8388607u) | 1065353216u) - 1.0;
                    _1416 = _2338 + 1u;
                    _2511 = _1435;
                    _2339 = _1441;
                    _2338 = _1416;
                    continue;
                }
                vec2 _1448 = (_1090 * _1090) * (vec2(3.0) - (vec2(2.0) * _1090));
                float _1122 = _1448.x;
                float _1123 = 1.0 - _1122;
                float _1125 = _1448.y;
                vec2 _415 = vs_out_frag_pos_ws.xy * 3.0;
                ivec2 _1466 = ivec2(floor(_415));
                vec2 _1467 = fract(_415);
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
                float _2353;
                _2353 = _2313;
                uint _1565;
                uint _1584;
                float _1590;
                uint _2352 = 0u;
                uint _2510 = _1548;
                for (;;)
                {
                    if (!(_2352 < 1u))
                    {
                        break;
                    }
                    uint _1576 = _2510 + (_2510 << 10u);
                    uint _1578 = _1576 ^ (_1576 >> 6u);
                    uint _1580 = _1578 + (_1578 << 3u);
                    uint _1582 = _1580 ^ (_1580 >> 11u);
                    _1584 = _1582 + (_1582 << 15u);
                    _1590 = uintBitsToFloat((_2510 & 8388607u) | 1065353216u) - 1.0;
                    _1565 = _2352 + 1u;
                    _2510 = _1584;
                    _2353 = _1590;
                    _2352 = _1565;
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
                float _2364;
                _2364 = _2313;
                uint _1641;
                uint _1660;
                float _1666;
                uint _2363 = 0u;
                uint _2509 = _1624;
                for (;;)
                {
                    if (!(_2363 < 1u))
                    {
                        break;
                    }
                    uint _1652 = _2509 + (_2509 << 10u);
                    uint _1654 = _1652 ^ (_1652 >> 6u);
                    uint _1656 = _1654 + (_1654 << 3u);
                    uint _1658 = _1656 ^ (_1656 >> 11u);
                    _1660 = _1658 + (_1658 << 15u);
                    _1666 = uintBitsToFloat((_2509 & 8388607u) | 1065353216u) - 1.0;
                    _1641 = _2363 + 1u;
                    _2509 = _1660;
                    _2364 = _1666;
                    _2363 = _1641;
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
                float _2376;
                _2376 = _2313;
                uint _1717;
                uint _1736;
                float _1742;
                uint _2375 = 0u;
                uint _2508 = _1700;
                for (;;)
                {
                    if (!(_2375 < 1u))
                    {
                        break;
                    }
                    uint _1728 = _2508 + (_2508 << 10u);
                    uint _1730 = _1728 ^ (_1728 >> 6u);
                    uint _1732 = _1730 + (_1730 << 3u);
                    uint _1734 = _1732 ^ (_1732 >> 11u);
                    _1736 = _1734 + (_1734 << 15u);
                    _1742 = uintBitsToFloat((_2508 & 8388607u) | 1065353216u) - 1.0;
                    _1717 = _2375 + 1u;
                    _2508 = _1736;
                    _2376 = _1742;
                    _2375 = _1717;
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
                float _2389;
                _2389 = _2313;
                uint _1793;
                uint _1812;
                float _1818;
                uint _2388 = 0u;
                uint _2507 = _1776;
                for (;;)
                {
                    if (!(_2388 < 1u))
                    {
                        break;
                    }
                    uint _1804 = _2507 + (_2507 << 10u);
                    uint _1806 = _1804 ^ (_1804 >> 6u);
                    uint _1808 = _1806 + (_1806 << 3u);
                    uint _1810 = _1808 ^ (_1808 >> 11u);
                    _1812 = _1810 + (_1810 << 15u);
                    _1818 = uintBitsToFloat((_2507 & 8388607u) | 1065353216u) - 1.0;
                    _1793 = _2388 + 1u;
                    _2507 = _1812;
                    _2389 = _1818;
                    _2388 = _1793;
                    continue;
                }
                vec2 _1824 = (_1467 * _1467) * (vec2(3.0) - (vec2(2.0) * _1467));
                float _1499 = _1824.x;
                float _1500 = 1.0 - _1499;
                float _1502 = _1824.y;
                vec3 _420 = vec3((((((1.0 - _1125) * ((_2315 * _1123) + (_2322 * _1122))) + ((_2330 * _1123) * _1125)) + ((_2339 * _1122) * _1125)) * 2.0) - 1.0, 0.0, (((((1.0 - _1502) * ((_2353 * _1500) + (_2364 * _1499))) + ((_2376 * _1500) * _1502)) + ((_2389 * _1499) * _1502)) * 2.0) - 1.0) * 2.0;
                vec2 _1833 = fract(vec2(4.27438831329345703125, 3.349201679229736328125));
                vec2 _442 = _420.xz + ((_1833 - vec2(0.5)) * 2.0);
                vec3 _2295 = _420;
                _2295.x = _442.x;
                _2295.z = _442.y;
                vec3 _450 = frag_pos_vs + _2295;
                _450.z = min(_450.z, -10.0);
                float _1837 = abs(current_view.clip_to_view[1].y);
                bool _1848 = _1837 < 1.0;
                float _2402;
                if (_1848)
                {
                    _2402 = _1837;
                }
                else
                {
                    _2402 = 1.0 / _1837;
                }
                float _1855 = _2402 * _2402;
                float _1861 = (1.0 + (((-0.3018949925899505615234375) + (0.087292902171611785888671875 * _1855)) * _1855)) * _2402;
                float _2403;
                if (_1848)
                {
                    _2403 = _1861;
                }
                else
                {
                    _2403 = 1.57079601287841796875 - _1861;
                }
                float _2404;
                if (current_view.clip_to_view[1].y < 0.0)
                {
                    _2404 = -_2403;
                }
                else
                {
                    _2404 = _2403;
                }
                if (dot(vec3(0.0, 0.0, -1.0), normalize(_450)) > cos(((max(0.070000000298023223876953125, _2404) * 1.2000000476837158203125) * smoothstep(_190, cone_cull_dist_range.x, _189)) * _2306))
                {
                    demote;
                    entryPointParam_ps_main_gbuffer = uvec2(0u);
                    break;
                }
            }
        }
        vec3 _545 = normalize(vs_out_frag_normal);
        vec3 in_p = vs_out_frag_pos_ws * vec3(0.0333333350718021392822265625);
        vec3 _2418;
        vec3 _2419;
        if (is_naked_tree_olden)
        {
            _2419 = texture(sampler2D(material_data_bark_color_naked, samplers_llr), in_p.xy, current_view.mip_bias).xyz;
            _2418 = texture(sampler2D(material_data_bark_color_naked, samplers_llr), in_p.zy, current_view.mip_bias).xyz;
        }
        else
        {
            _2419 = texture(sampler2D(material_data_bark_color, samplers_llr), in_p.xy, current_view.mip_bias).xyz;
            _2418 = texture(sampler2D(material_data_bark_color, samplers_llr), in_p.zy, current_view.mip_bias).xyz;
        }
        vec3 _607 = pow(abs(_545), vec3(1.0));
        float _1871 = dot(_2418, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)) + _607.x;
        float _1872 = dot(_2419, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)) + _607.z;
        float _1874 = max(_1871, _1872) - 0.20000000298023223876953125;
        float _1876 = max(_1871 - _1874, 0.0);
        float _1878 = max(_1872 - _1874, 0.0);
        vec3 _1886 = ((_2418.xyz * _1876) + (_2419.xyz * _1878)) / vec3(_1876 + _1878);
        vec3 _2428;
        if (frame_constants.glade_theme_id == 2u)
        {
            _2428 = vec3(0.1500000059604644775390625, 0.0900000035762786865234375, 0.039999999105930328369140625);
        }
        else
        {
            vec3 _2429;
            if (frame_constants.glade_theme_id == 4u)
            {
                _2429 = mix(_1886, vec3(1.0), vec3(((1.0 - smoothstep(-0.5, 4.0, vs_out_local_y)) * 0.300000011920928955078125) * smoothstep(-0.100000001490116119384765625, 0.0, vs_out_frag_pos_ws.y)));
            }
            else
            {
                _2429 = vec3(0.0599999986588954925537109375, 0.100000001490116119384765625, 0.02999999932944774627685546875);
            }
            _2428 = _2429;
        }
        float _2423;
        do
        {
            vec2 _1910 = (vs_out_frag_pos_ws.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5);
            float _1927 = _1910.x;
            bool _2420;
            if (_1927 < 0.0)
            {
                _2420 = true;
            }
            else
            {
                _2420 = _1927 > 1.0;
            }
            bool _2421;
            if (_2420)
            {
                _2421 = true;
            }
            else
            {
                _2421 = _1910.y < 0.0;
            }
            bool _2422;
            if (_2421)
            {
                _2422 = true;
            }
            else
            {
                _2422 = _1910.y > 1.0;
            }
            if (_2422)
            {
                _2423 = 0.0;
                break;
            }
            else
            {
                _2423 = textureLod(sampler2D(rocky_terrain_tex, samplers_lnc_iso), _1910, 0.0).x;
                break;
            }
            break; // unreachable workaround
        } while(false);
        vec3 _780 = mix(_1886, _2428, vec3((1.0 - smoothstep(-0.100000001490116119384765625, 0.4000000059604644775390625, vs_out_frag_uv.y)) * clamp(1.0 - _2423, 0.699999988079071044921875, 1.0)));
        vec4 sampled = texture(sampler2D(material_data_bark_lines, samplers_llr), vs_out_frag_uv.xy * 1.2000000476837158203125, current_view.mip_bias);
        bool _2430;
        if (is_naked_tree_olden)
        {
            _2430 = vs_out_frag_uv.x <= (-99.0);
        }
        else
        {
            _2430 = false;
        }
        vec3 _2551 = mix(mix(_780, mix(_780, _2428, vec3(0.5)) * 0.60000002384185791015625, vec3(1.0) - sampled.xyz), vec3(0.25, 0.1500000059604644775390625, 0.037500001490116119384765625), bvec3(_2430));
        vec3 _2457;
        if (frame_constants.glade_theme_id == 4u)
        {
            _2457 = mix(_2551, vec3(0.699999988079071044921875), vec3(smoothstep(-0.100000001490116119384765625, 0.0, vs_out_frag_pos_ws.y) * smoothstep(0.20000000298023223876953125, 1.0, clamp(_545.y, 0.0, 1.0))));
        }
        else
        {
            _2457 = _2551;
        }
        vec3 _1990 = (_545 * 0.5) + vec3(0.5);
        vec3 _2098 = sqrt(clamp(_2457, vec3(0.0), vec3(1.0)));
        uint _2113 = (uint((clamp(_2098.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_2098.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_2098.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
        uvec2 _2546 = uvec2(((uint((clamp(_1990.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1990.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1990.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3858759680u, _2113);
        _2546.y = _2113 | ((7u | (uint(_2430 ? false : true) << 6u)) << 24u);
        entryPointParam_ps_main_gbuffer = _2546;
        break;
    } while(false);
}

