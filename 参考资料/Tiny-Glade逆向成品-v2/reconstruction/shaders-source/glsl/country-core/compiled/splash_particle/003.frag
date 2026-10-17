#version 460
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_demote_to_helper_invocation : require

const uvec2 _56[4] = uvec2[](uvec2(0u), uvec2(0u, 1u), uvec2(1u), uvec2(1u, 0u));

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

float _1330;

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

layout(set = 0, binding = 0, scalar) uniform MaterialData_natural
{
    Affine3Packed_natural model_to_world;
    float anim_t;
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

layout(location = 2) in vec3 vs_out_frag_position_ws;
layout(location = 3) in vec2 vs_out_frag_uv;

void main()
{
    if (all(notEqual((uvec2(gl_FragCoord.xy) & uvec2(1u)), _56[frame_counter.index & 3u])))
    {
        demote;
    }
    float _91 = 1.0 - material_data.anim_t;
    vec2 noise_uv = vs_out_frag_uv * 25.6000003814697265625;
    float _113 = noise_uv.x * 2.0;
    float _119 = noise_uv.y;
    vec2 _139 = vec2((_113 + vs_out_frag_position_ws.x) + vs_out_frag_position_ws.z, (_119 * 0.5) + (float(frame_constants.game_time_sec) + frame_constants.game_time_frac));
    ivec2 _536 = ivec2(floor(_139));
    vec2 _537 = fract(_139);
    uvec2 _538 = uvec2(_536);
    uint _588 = _538.y;
    uint _594 = _588 + (_588 << 10u);
    uint _596 = _594 ^ (_594 >> 6u);
    uint _598 = _596 + (_596 << 3u);
    uint _600 = _598 ^ (_598 >> 11u);
    uint _608 = (((_538.x * 1664525u) + (_600 + (_600 << 15u))) + 1013904223u) * 1664525u;
    uint _610 = _608 ^ (_608 >> 11u);
    uint _613 = _610 ^ ((_610 << 7u) & 2636928640u);
    uint _616 = _613 ^ ((_613 << 15u) & 4022730752u);
    uint _618 = _616 ^ (_616 >> 18u);
    float _1332;
    _1332 = _1330;
    uint _635;
    uint _654;
    float _660;
    uint _1331 = 0u;
    uint _1402 = _618;
    for (;;)
    {
        if (!(_1331 < 1u))
        {
            break;
        }
        uint _646 = _1402 + (_1402 << 10u);
        uint _648 = _646 ^ (_646 >> 6u);
        uint _650 = _648 + (_648 << 3u);
        uint _652 = _650 ^ (_650 >> 11u);
        _654 = _652 + (_652 << 15u);
        _660 = uintBitsToFloat((_1402 & 8388607u) | 1065353216u) - 1.0;
        _635 = _1331 + 1u;
        _1402 = _654;
        _1332 = _660;
        _1331 = _635;
        continue;
    }
    uvec2 _546 = uvec2(_536 + ivec2(1, 0));
    uint _664 = _546.y;
    uint _670 = _664 + (_664 << 10u);
    uint _672 = _670 ^ (_670 >> 6u);
    uint _674 = _672 + (_672 << 3u);
    uint _676 = _674 ^ (_674 >> 11u);
    uint _684 = (((_546.x * 1664525u) + (_676 + (_676 << 15u))) + 1013904223u) * 1664525u;
    uint _686 = _684 ^ (_684 >> 11u);
    uint _689 = _686 ^ ((_686 << 7u) & 2636928640u);
    uint _692 = _689 ^ ((_689 << 15u) & 4022730752u);
    uint _694 = _692 ^ (_692 >> 18u);
    float _1336;
    _1336 = _1330;
    uint _711;
    uint _730;
    float _736;
    uint _1335 = 0u;
    uint _1401 = _694;
    for (;;)
    {
        if (!(_1335 < 1u))
        {
            break;
        }
        uint _722 = _1401 + (_1401 << 10u);
        uint _724 = _722 ^ (_722 >> 6u);
        uint _726 = _724 + (_724 << 3u);
        uint _728 = _726 ^ (_726 >> 11u);
        _730 = _728 + (_728 << 15u);
        _736 = uintBitsToFloat((_1401 & 8388607u) | 1065353216u) - 1.0;
        _711 = _1335 + 1u;
        _1401 = _730;
        _1336 = _736;
        _1335 = _711;
        continue;
    }
    uvec2 _553 = uvec2(_536 + ivec2(0, 1));
    uint _740 = _553.y;
    uint _746 = _740 + (_740 << 10u);
    uint _748 = _746 ^ (_746 >> 6u);
    uint _750 = _748 + (_748 << 3u);
    uint _752 = _750 ^ (_750 >> 11u);
    uint _760 = (((_553.x * 1664525u) + (_752 + (_752 << 15u))) + 1013904223u) * 1664525u;
    uint _762 = _760 ^ (_760 >> 11u);
    uint _765 = _762 ^ ((_762 << 7u) & 2636928640u);
    uint _768 = _765 ^ ((_765 << 15u) & 4022730752u);
    uint _770 = _768 ^ (_768 >> 18u);
    float _1341;
    _1341 = _1330;
    uint _787;
    uint _806;
    float _812;
    uint _1340 = 0u;
    uint _1400 = _770;
    for (;;)
    {
        if (!(_1340 < 1u))
        {
            break;
        }
        uint _798 = _1400 + (_1400 << 10u);
        uint _800 = _798 ^ (_798 >> 6u);
        uint _802 = _800 + (_800 << 3u);
        uint _804 = _802 ^ (_802 >> 11u);
        _806 = _804 + (_804 << 15u);
        _812 = uintBitsToFloat((_1400 & 8388607u) | 1065353216u) - 1.0;
        _787 = _1340 + 1u;
        _1400 = _806;
        _1341 = _812;
        _1340 = _787;
        continue;
    }
    uvec2 _561 = uvec2(_536 + ivec2(1));
    uint _816 = _561.y;
    uint _822 = _816 + (_816 << 10u);
    uint _824 = _822 ^ (_822 >> 6u);
    uint _826 = _824 + (_824 << 3u);
    uint _828 = _826 ^ (_826 >> 11u);
    uint _836 = (((_561.x * 1664525u) + (_828 + (_828 << 15u))) + 1013904223u) * 1664525u;
    uint _838 = _836 ^ (_836 >> 11u);
    uint _841 = _838 ^ ((_838 << 7u) & 2636928640u);
    uint _844 = _841 ^ ((_841 << 15u) & 4022730752u);
    uint _846 = _844 ^ (_844 >> 18u);
    float _1347;
    _1347 = _1330;
    uint _863;
    uint _882;
    float _888;
    uint _1346 = 0u;
    uint _1399 = _846;
    for (;;)
    {
        if (!(_1346 < 1u))
        {
            break;
        }
        uint _874 = _1399 + (_1399 << 10u);
        uint _876 = _874 ^ (_874 >> 6u);
        uint _878 = _876 + (_876 << 3u);
        uint _880 = _878 ^ (_878 >> 11u);
        _882 = _880 + (_880 << 15u);
        _888 = uintBitsToFloat((_1399 & 8388607u) | 1065353216u) - 1.0;
        _863 = _1346 + 1u;
        _1399 = _882;
        _1347 = _888;
        _1346 = _863;
        continue;
    }
    vec2 _895 = (_537 * _537) * (vec2(3.0) - (vec2(2.0) * _537));
    float _569 = _895.x;
    float _570 = 1.0 - _569;
    float _572 = _895.y;
    float _349 = mix(0.100000001490116119384765625, 0.4000000059604644775390625, (((1.0 - _572) * ((_1332 * _570) + (_1336 * _569))) + ((_1341 * _570) * _572)) + ((_1347 * _569) * _572));
    float _1352;
    do
    {
        float _904 = abs((vs_out_frag_uv.y + mix(-1.0, 1.0, (_91 * _91) * _91)) - 0.5);
        if (_904 > _349)
        {
            _1352 = 0.0;
            break;
        }
        float _908 = _904 / _349;
        _1352 = 1.0 - ((_908 * _908) * (3.0 - (2.0 * _908)));
        break;
    } while(false);
    vec2 _379 = vec2(((_113 + 2.0) + vs_out_frag_position_ws.x) + vs_out_frag_position_ws.z, _119 * 0.20000000298023223876953125);
    ivec2 _928 = ivec2(floor(_379));
    vec2 _929 = fract(_379);
    uvec2 _930 = uvec2(_928);
    uint _980 = _930.y;
    uint _986 = _980 + (_980 << 10u);
    uint _988 = _986 ^ (_986 >> 6u);
    uint _990 = _988 + (_988 << 3u);
    uint _992 = _990 ^ (_990 >> 11u);
    uint _1000 = (((_930.x * 1664525u) + (_992 + (_992 << 15u))) + 1013904223u) * 1664525u;
    uint _1002 = _1000 ^ (_1000 >> 11u);
    uint _1005 = _1002 ^ ((_1002 << 7u) & 2636928640u);
    uint _1008 = _1005 ^ ((_1005 << 15u) & 4022730752u);
    uint _1010 = _1008 ^ (_1008 >> 18u);
    float _1360;
    _1360 = _1330;
    uint _1027;
    uint _1046;
    float _1052;
    uint _1359 = 0u;
    uint _1398 = _1010;
    for (;;)
    {
        if (!(_1359 < 1u))
        {
            break;
        }
        uint _1038 = _1398 + (_1398 << 10u);
        uint _1040 = _1038 ^ (_1038 >> 6u);
        uint _1042 = _1040 + (_1040 << 3u);
        uint _1044 = _1042 ^ (_1042 >> 11u);
        _1046 = _1044 + (_1044 << 15u);
        _1052 = uintBitsToFloat((_1398 & 8388607u) | 1065353216u) - 1.0;
        _1027 = _1359 + 1u;
        _1398 = _1046;
        _1360 = _1052;
        _1359 = _1027;
        continue;
    }
    uvec2 _938 = uvec2(_928 + ivec2(1, 0));
    uint _1056 = _938.y;
    uint _1062 = _1056 + (_1056 << 10u);
    uint _1064 = _1062 ^ (_1062 >> 6u);
    uint _1066 = _1064 + (_1064 << 3u);
    uint _1068 = _1066 ^ (_1066 >> 11u);
    uint _1076 = (((_938.x * 1664525u) + (_1068 + (_1068 << 15u))) + 1013904223u) * 1664525u;
    uint _1078 = _1076 ^ (_1076 >> 11u);
    uint _1081 = _1078 ^ ((_1078 << 7u) & 2636928640u);
    uint _1084 = _1081 ^ ((_1081 << 15u) & 4022730752u);
    uint _1086 = _1084 ^ (_1084 >> 18u);
    float _1369;
    _1369 = _1330;
    uint _1103;
    uint _1122;
    float _1128;
    uint _1368 = 0u;
    uint _1397 = _1086;
    for (;;)
    {
        if (!(_1368 < 1u))
        {
            break;
        }
        uint _1114 = _1397 + (_1397 << 10u);
        uint _1116 = _1114 ^ (_1114 >> 6u);
        uint _1118 = _1116 + (_1116 << 3u);
        uint _1120 = _1118 ^ (_1118 >> 11u);
        _1122 = _1120 + (_1120 << 15u);
        _1128 = uintBitsToFloat((_1397 & 8388607u) | 1065353216u) - 1.0;
        _1103 = _1368 + 1u;
        _1397 = _1122;
        _1369 = _1128;
        _1368 = _1103;
        continue;
    }
    uvec2 _945 = uvec2(_928 + ivec2(0, 1));
    uint _1132 = _945.y;
    uint _1138 = _1132 + (_1132 << 10u);
    uint _1140 = _1138 ^ (_1138 >> 6u);
    uint _1142 = _1140 + (_1140 << 3u);
    uint _1144 = _1142 ^ (_1142 >> 11u);
    uint _1152 = (((_945.x * 1664525u) + (_1144 + (_1144 << 15u))) + 1013904223u) * 1664525u;
    uint _1154 = _1152 ^ (_1152 >> 11u);
    uint _1157 = _1154 ^ ((_1154 << 7u) & 2636928640u);
    uint _1160 = _1157 ^ ((_1157 << 15u) & 4022730752u);
    uint _1162 = _1160 ^ (_1160 >> 18u);
    float _1379;
    _1379 = _1330;
    uint _1179;
    uint _1198;
    float _1204;
    uint _1378 = 0u;
    uint _1396 = _1162;
    for (;;)
    {
        if (!(_1378 < 1u))
        {
            break;
        }
        uint _1190 = _1396 + (_1396 << 10u);
        uint _1192 = _1190 ^ (_1190 >> 6u);
        uint _1194 = _1192 + (_1192 << 3u);
        uint _1196 = _1194 ^ (_1194 >> 11u);
        _1198 = _1196 + (_1196 << 15u);
        _1204 = uintBitsToFloat((_1396 & 8388607u) | 1065353216u) - 1.0;
        _1179 = _1378 + 1u;
        _1396 = _1198;
        _1379 = _1204;
        _1378 = _1179;
        continue;
    }
    uvec2 _953 = uvec2(_928 + ivec2(1));
    uint _1208 = _953.y;
    uint _1214 = _1208 + (_1208 << 10u);
    uint _1216 = _1214 ^ (_1214 >> 6u);
    uint _1218 = _1216 + (_1216 << 3u);
    uint _1220 = _1218 ^ (_1218 >> 11u);
    uint _1228 = (((_953.x * 1664525u) + (_1220 + (_1220 << 15u))) + 1013904223u) * 1664525u;
    uint _1230 = _1228 ^ (_1228 >> 11u);
    uint _1233 = _1230 ^ ((_1230 << 7u) & 2636928640u);
    uint _1236 = _1233 ^ ((_1233 << 15u) & 4022730752u);
    uint _1238 = _1236 ^ (_1236 >> 18u);
    float _1390;
    _1390 = _1330;
    uint _1255;
    uint _1274;
    float _1280;
    uint _1389 = 0u;
    uint _1395 = _1238;
    for (;;)
    {
        if (!(_1389 < 1u))
        {
            break;
        }
        uint _1266 = _1395 + (_1395 << 10u);
        uint _1268 = _1266 ^ (_1266 >> 6u);
        uint _1270 = _1268 + (_1268 << 3u);
        uint _1272 = _1270 ^ (_1270 >> 11u);
        _1274 = _1272 + (_1272 << 15u);
        _1280 = uintBitsToFloat((_1395 & 8388607u) | 1065353216u) - 1.0;
        _1255 = _1389 + 1u;
        _1395 = _1274;
        _1390 = _1280;
        _1389 = _1255;
        continue;
    }
    vec2 _1286 = (_929 * _929) * (vec2(3.0) - (vec2(2.0) * _929));
    float _961 = _1286.x;
    float _962 = 1.0 - _961;
    float _964 = _1286.y;
    if ((_1352 * (1.0 - smoothstep(0.89999997615814208984375, 1.0, vs_out_frag_uv.y + mix(0.0, 0.300000011920928955078125, (((1.0 - _964) * ((_1360 * _962) + (_1369 * _961))) + ((_1379 * _962) * _964)) + ((_1390 * _961) * _964))))) < 0.5)
    {
        demote;
    }
}

