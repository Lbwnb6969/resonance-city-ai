#version 460
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_demote_to_helper_invocation : require

const uvec2 _73[4] = uvec2[](uvec2(0u), uvec2(0u, 1u), uvec2(1u), uvec2(1u, 0u));

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

float _1790;

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

layout(location = 0) in vec3 vs_out_color;
layout(location = 2) in vec3 vs_out_frag_position_ws;
layout(location = 3) in vec2 vs_out_frag_uv;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    if (all(notEqual((uvec2(gl_FragCoord.xy) & uvec2(1u)), _73[frame_counter.index & 3u])))
    {
        demote;
    }
    float _106 = 1.0 - material_data.anim_t;
    vec2 noise_uv = vs_out_frag_uv * 25.6000003814697265625;
    float _128 = noise_uv.x * 2.0;
    float _134 = noise_uv.y;
    vec2 _154 = vec2((_128 + vs_out_frag_position_ws.x) + vs_out_frag_position_ws.z, (_134 * 0.5) + (float(frame_constants.game_time_sec) + frame_constants.game_time_frac));
    ivec2 _695 = ivec2(floor(_154));
    vec2 _696 = fract(_154);
    uvec2 _697 = uvec2(_695);
    uint _747 = _697.y;
    uint _753 = _747 + (_747 << 10u);
    uint _755 = _753 ^ (_753 >> 6u);
    uint _757 = _755 + (_755 << 3u);
    uint _759 = _757 ^ (_757 >> 11u);
    uint _767 = (((_697.x * 1664525u) + (_759 + (_759 << 15u))) + 1013904223u) * 1664525u;
    uint _769 = _767 ^ (_767 >> 11u);
    uint _772 = _769 ^ ((_769 << 7u) & 2636928640u);
    uint _775 = _772 ^ ((_772 << 15u) & 4022730752u);
    uint _777 = _775 ^ (_775 >> 18u);
    float _1792;
    _1792 = _1790;
    uint _794;
    uint _813;
    float _819;
    uint _1791 = 0u;
    uint _1874 = _777;
    for (;;)
    {
        if (!(_1791 < 1u))
        {
            break;
        }
        uint _805 = _1874 + (_1874 << 10u);
        uint _807 = _805 ^ (_805 >> 6u);
        uint _809 = _807 + (_807 << 3u);
        uint _811 = _809 ^ (_809 >> 11u);
        _813 = _811 + (_811 << 15u);
        _819 = uintBitsToFloat((_1874 & 8388607u) | 1065353216u) - 1.0;
        _794 = _1791 + 1u;
        _1874 = _813;
        _1792 = _819;
        _1791 = _794;
        continue;
    }
    uvec2 _705 = uvec2(_695 + ivec2(1, 0));
    uint _823 = _705.y;
    uint _829 = _823 + (_823 << 10u);
    uint _831 = _829 ^ (_829 >> 6u);
    uint _833 = _831 + (_831 << 3u);
    uint _835 = _833 ^ (_833 >> 11u);
    uint _843 = (((_705.x * 1664525u) + (_835 + (_835 << 15u))) + 1013904223u) * 1664525u;
    uint _845 = _843 ^ (_843 >> 11u);
    uint _848 = _845 ^ ((_845 << 7u) & 2636928640u);
    uint _851 = _848 ^ ((_848 << 15u) & 4022730752u);
    uint _853 = _851 ^ (_851 >> 18u);
    float _1796;
    _1796 = _1790;
    uint _870;
    uint _889;
    float _895;
    uint _1795 = 0u;
    uint _1873 = _853;
    for (;;)
    {
        if (!(_1795 < 1u))
        {
            break;
        }
        uint _881 = _1873 + (_1873 << 10u);
        uint _883 = _881 ^ (_881 >> 6u);
        uint _885 = _883 + (_883 << 3u);
        uint _887 = _885 ^ (_885 >> 11u);
        _889 = _887 + (_887 << 15u);
        _895 = uintBitsToFloat((_1873 & 8388607u) | 1065353216u) - 1.0;
        _870 = _1795 + 1u;
        _1873 = _889;
        _1796 = _895;
        _1795 = _870;
        continue;
    }
    uvec2 _712 = uvec2(_695 + ivec2(0, 1));
    uint _899 = _712.y;
    uint _905 = _899 + (_899 << 10u);
    uint _907 = _905 ^ (_905 >> 6u);
    uint _909 = _907 + (_907 << 3u);
    uint _911 = _909 ^ (_909 >> 11u);
    uint _919 = (((_712.x * 1664525u) + (_911 + (_911 << 15u))) + 1013904223u) * 1664525u;
    uint _921 = _919 ^ (_919 >> 11u);
    uint _924 = _921 ^ ((_921 << 7u) & 2636928640u);
    uint _927 = _924 ^ ((_924 << 15u) & 4022730752u);
    uint _929 = _927 ^ (_927 >> 18u);
    float _1801;
    _1801 = _1790;
    uint _946;
    uint _965;
    float _971;
    uint _1800 = 0u;
    uint _1872 = _929;
    for (;;)
    {
        if (!(_1800 < 1u))
        {
            break;
        }
        uint _957 = _1872 + (_1872 << 10u);
        uint _959 = _957 ^ (_957 >> 6u);
        uint _961 = _959 + (_959 << 3u);
        uint _963 = _961 ^ (_961 >> 11u);
        _965 = _963 + (_963 << 15u);
        _971 = uintBitsToFloat((_1872 & 8388607u) | 1065353216u) - 1.0;
        _946 = _1800 + 1u;
        _1872 = _965;
        _1801 = _971;
        _1800 = _946;
        continue;
    }
    uvec2 _720 = uvec2(_695 + ivec2(1));
    uint _975 = _720.y;
    uint _981 = _975 + (_975 << 10u);
    uint _983 = _981 ^ (_981 >> 6u);
    uint _985 = _983 + (_983 << 3u);
    uint _987 = _985 ^ (_985 >> 11u);
    uint _995 = (((_720.x * 1664525u) + (_987 + (_987 << 15u))) + 1013904223u) * 1664525u;
    uint _997 = _995 ^ (_995 >> 11u);
    uint _1000 = _997 ^ ((_997 << 7u) & 2636928640u);
    uint _1003 = _1000 ^ ((_1000 << 15u) & 4022730752u);
    uint _1005 = _1003 ^ (_1003 >> 18u);
    float _1807;
    _1807 = _1790;
    uint _1022;
    uint _1041;
    float _1047;
    uint _1806 = 0u;
    uint _1871 = _1005;
    for (;;)
    {
        if (!(_1806 < 1u))
        {
            break;
        }
        uint _1033 = _1871 + (_1871 << 10u);
        uint _1035 = _1033 ^ (_1033 >> 6u);
        uint _1037 = _1035 + (_1035 << 3u);
        uint _1039 = _1037 ^ (_1037 >> 11u);
        _1041 = _1039 + (_1039 << 15u);
        _1047 = uintBitsToFloat((_1871 & 8388607u) | 1065353216u) - 1.0;
        _1022 = _1806 + 1u;
        _1871 = _1041;
        _1807 = _1047;
        _1806 = _1022;
        continue;
    }
    vec2 _1054 = (_696 * _696) * (vec2(3.0) - (vec2(2.0) * _696));
    float _728 = _1054.x;
    float _729 = 1.0 - _728;
    float _731 = _1054.y;
    float _364 = mix(0.100000001490116119384765625, 0.4000000059604644775390625, (((1.0 - _731) * ((_1792 * _729) + (_1796 * _728))) + ((_1801 * _729) * _731)) + ((_1807 * _728) * _731));
    float _1812;
    do
    {
        float _1063 = abs((vs_out_frag_uv.y + mix(-1.0, 1.0, (_106 * _106) * _106)) - 0.5);
        if (_1063 > _364)
        {
            _1812 = 0.0;
            break;
        }
        float _1067 = _1063 / _364;
        _1812 = 1.0 - ((_1067 * _1067) * (3.0 - (2.0 * _1067)));
        break;
    } while(false);
    vec2 _394 = vec2(((_128 + 2.0) + vs_out_frag_position_ws.x) + vs_out_frag_position_ws.z, _134 * 0.20000000298023223876953125);
    ivec2 _1087 = ivec2(floor(_394));
    vec2 _1088 = fract(_394);
    uvec2 _1089 = uvec2(_1087);
    uint _1139 = _1089.y;
    uint _1145 = _1139 + (_1139 << 10u);
    uint _1147 = _1145 ^ (_1145 >> 6u);
    uint _1149 = _1147 + (_1147 << 3u);
    uint _1151 = _1149 ^ (_1149 >> 11u);
    uint _1159 = (((_1089.x * 1664525u) + (_1151 + (_1151 << 15u))) + 1013904223u) * 1664525u;
    uint _1161 = _1159 ^ (_1159 >> 11u);
    uint _1164 = _1161 ^ ((_1161 << 7u) & 2636928640u);
    uint _1167 = _1164 ^ ((_1164 << 15u) & 4022730752u);
    uint _1169 = _1167 ^ (_1167 >> 18u);
    float _1820;
    _1820 = _1790;
    uint _1186;
    uint _1205;
    float _1211;
    uint _1819 = 0u;
    uint _1870 = _1169;
    for (;;)
    {
        if (!(_1819 < 1u))
        {
            break;
        }
        uint _1197 = _1870 + (_1870 << 10u);
        uint _1199 = _1197 ^ (_1197 >> 6u);
        uint _1201 = _1199 + (_1199 << 3u);
        uint _1203 = _1201 ^ (_1201 >> 11u);
        _1205 = _1203 + (_1203 << 15u);
        _1211 = uintBitsToFloat((_1870 & 8388607u) | 1065353216u) - 1.0;
        _1186 = _1819 + 1u;
        _1870 = _1205;
        _1820 = _1211;
        _1819 = _1186;
        continue;
    }
    uvec2 _1097 = uvec2(_1087 + ivec2(1, 0));
    uint _1215 = _1097.y;
    uint _1221 = _1215 + (_1215 << 10u);
    uint _1223 = _1221 ^ (_1221 >> 6u);
    uint _1225 = _1223 + (_1223 << 3u);
    uint _1227 = _1225 ^ (_1225 >> 11u);
    uint _1235 = (((_1097.x * 1664525u) + (_1227 + (_1227 << 15u))) + 1013904223u) * 1664525u;
    uint _1237 = _1235 ^ (_1235 >> 11u);
    uint _1240 = _1237 ^ ((_1237 << 7u) & 2636928640u);
    uint _1243 = _1240 ^ ((_1240 << 15u) & 4022730752u);
    uint _1245 = _1243 ^ (_1243 >> 18u);
    float _1829;
    _1829 = _1790;
    uint _1262;
    uint _1281;
    float _1287;
    uint _1828 = 0u;
    uint _1869 = _1245;
    for (;;)
    {
        if (!(_1828 < 1u))
        {
            break;
        }
        uint _1273 = _1869 + (_1869 << 10u);
        uint _1275 = _1273 ^ (_1273 >> 6u);
        uint _1277 = _1275 + (_1275 << 3u);
        uint _1279 = _1277 ^ (_1277 >> 11u);
        _1281 = _1279 + (_1279 << 15u);
        _1287 = uintBitsToFloat((_1869 & 8388607u) | 1065353216u) - 1.0;
        _1262 = _1828 + 1u;
        _1869 = _1281;
        _1829 = _1287;
        _1828 = _1262;
        continue;
    }
    uvec2 _1104 = uvec2(_1087 + ivec2(0, 1));
    uint _1291 = _1104.y;
    uint _1297 = _1291 + (_1291 << 10u);
    uint _1299 = _1297 ^ (_1297 >> 6u);
    uint _1301 = _1299 + (_1299 << 3u);
    uint _1303 = _1301 ^ (_1301 >> 11u);
    uint _1311 = (((_1104.x * 1664525u) + (_1303 + (_1303 << 15u))) + 1013904223u) * 1664525u;
    uint _1313 = _1311 ^ (_1311 >> 11u);
    uint _1316 = _1313 ^ ((_1313 << 7u) & 2636928640u);
    uint _1319 = _1316 ^ ((_1316 << 15u) & 4022730752u);
    uint _1321 = _1319 ^ (_1319 >> 18u);
    float _1839;
    _1839 = _1790;
    uint _1338;
    uint _1357;
    float _1363;
    uint _1838 = 0u;
    uint _1868 = _1321;
    for (;;)
    {
        if (!(_1838 < 1u))
        {
            break;
        }
        uint _1349 = _1868 + (_1868 << 10u);
        uint _1351 = _1349 ^ (_1349 >> 6u);
        uint _1353 = _1351 + (_1351 << 3u);
        uint _1355 = _1353 ^ (_1353 >> 11u);
        _1357 = _1355 + (_1355 << 15u);
        _1363 = uintBitsToFloat((_1868 & 8388607u) | 1065353216u) - 1.0;
        _1338 = _1838 + 1u;
        _1868 = _1357;
        _1839 = _1363;
        _1838 = _1338;
        continue;
    }
    uvec2 _1112 = uvec2(_1087 + ivec2(1));
    uint _1367 = _1112.y;
    uint _1373 = _1367 + (_1367 << 10u);
    uint _1375 = _1373 ^ (_1373 >> 6u);
    uint _1377 = _1375 + (_1375 << 3u);
    uint _1379 = _1377 ^ (_1377 >> 11u);
    uint _1387 = (((_1112.x * 1664525u) + (_1379 + (_1379 << 15u))) + 1013904223u) * 1664525u;
    uint _1389 = _1387 ^ (_1387 >> 11u);
    uint _1392 = _1389 ^ ((_1389 << 7u) & 2636928640u);
    uint _1395 = _1392 ^ ((_1392 << 15u) & 4022730752u);
    uint _1397 = _1395 ^ (_1395 >> 18u);
    float _1850;
    _1850 = _1790;
    uint _1414;
    uint _1433;
    float _1439;
    uint _1849 = 0u;
    uint _1867 = _1397;
    for (;;)
    {
        if (!(_1849 < 1u))
        {
            break;
        }
        uint _1425 = _1867 + (_1867 << 10u);
        uint _1427 = _1425 ^ (_1425 >> 6u);
        uint _1429 = _1427 + (_1427 << 3u);
        uint _1431 = _1429 ^ (_1429 >> 11u);
        _1433 = _1431 + (_1431 << 15u);
        _1439 = uintBitsToFloat((_1867 & 8388607u) | 1065353216u) - 1.0;
        _1414 = _1849 + 1u;
        _1867 = _1433;
        _1850 = _1439;
        _1849 = _1414;
        continue;
    }
    vec2 _1445 = (_1088 * _1088) * (vec2(3.0) - (vec2(2.0) * _1088));
    float _1120 = _1445.x;
    float _1121 = 1.0 - _1120;
    float _1123 = _1445.y;
    if ((_1812 * (1.0 - smoothstep(0.89999997615814208984375, 1.0, vs_out_frag_uv.y + mix(0.0, 0.300000011920928955078125, (((1.0 - _1123) * ((_1820 * _1121) + (_1829 * _1120))) + ((_1839 * _1121) * _1123)) + ((_1850 * _1120) * _1123))))) < 0.5)
    {
        demote;
    }
    vec3 _1487 = (normalize(vs_out_frag_normal_ws) * 0.5) + vec3(0.5);
    vec3 _1595 = sqrt(clamp(vs_out_color * 0.699999988079071044921875, vec3(0.0), vec3(1.0)));
    uint _1610 = (uint((clamp(_1595.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1595.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1595.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _1886 = uvec2(((uint((clamp(_1487.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1487.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1487.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 4278190080u, _1610);
    _1886.y = _1610 | 1174405120u;
    entryPointParam_ps_main_gbuffer = _1886;
}

