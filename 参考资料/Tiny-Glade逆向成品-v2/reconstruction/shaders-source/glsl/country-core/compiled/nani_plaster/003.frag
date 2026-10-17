#version 460
#extension GL_EXT_buffer_reference2 : require
#extension GL_EXT_demote_to_helper_invocation : require

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

float _5152;

layout(buffer_reference) buffer uvec4Pointer
{
    uvec4 value;
};

layout(set = 0, binding = 1, std430) readonly buffer StructuredBuffer
{
    PlasterInstanceData_natural _member0[];
} material_data_nani_instance_data;

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

layout(set = 7, binding = 0, std430) readonly buffer wall_color_data_wall_color_ids
{
    uint _member0[];
} wall_color_data_wall_color_ids_1;

layout(set = 7, binding = 2) uniform texture2DArray wall_color_data_plaster_colors;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 0, binding = 3) uniform texture2D material_data_mortar;
layout(set = 0, binding = 2) uniform texture2D material_data_normal_map;

layout(location = 0) flat in uint vs_out_instance_index;
layout(location = 6) in float vs_out_sdf;
layout(location = 3) in vec2 vs_out_frag_curve_uv;
layout(location = 7) in float vs_out_erosion_strength;
layout(location = 8) in float vs_out_peel_strength;

void main()
{
    float _133 = clamp(vs_out_sdf, 0.0, 1.0);
    uint _148 = uint(material_data_nani_instance_data._member0[vs_out_instance_index].wall_length * 1.75);
    uint _1025 = _148 + (_148 << 10u);
    uint _1027 = _1025 ^ (_1025 >> 6u);
    uint _1029 = _1027 + (_1027 << 3u);
    uint _1031 = _1029 ^ (_1029 >> 11u);
    float _5379 = (int(material_data_nani_instance_data._member0[vs_out_instance_index].blend_uv_seam != 0u) == 0) ? 0.0 : smoothstep(1.0 - (1.0 / material_data_nani_instance_data._member0[vs_out_instance_index].wall_length), 1.0, vs_out_frag_curve_uv.x / material_data_nani_instance_data._member0[vs_out_instance_index].wall_length);
    if (_133 < 0.100000001490116119384765625)
    {
        demote;
    }
    vec2 _201 = vec2(mix(0.0, 10.0, uintBitsToFloat(((_1031 + (_1031 << 15u)) & 8388607u) | 1065353216u) - 1.0));
    float _1044 = mix(0.0, 0.5, vs_out_peel_strength);
    float _5140;
    vec2 _5263;
    _5263 = (vs_out_frag_curve_uv + vec2(23.3999996185302734375)) + _201;
    _5140 = 0.0;
    float _1125;
    float _1127;
    vec2 _1130;
    int _1134;
    float _5268;
    float _5274;
    float _5281;
    float _5289;
    int _5139 = 0;
    float _5264;
    float _5270;
    float _5277;
    float _5285;
    float _5298 = 0.5;
    for (;;)
    {
        if (!(_5139 < 3))
        {
            break;
        }
        ivec2 _1158 = ivec2(floor(_5263));
        vec2 _1159 = fract(_5263);
        uvec2 _1160 = uvec2(_1158);
        uint _1210 = _1160.y;
        uint _1216 = _1210 + (_1210 << 10u);
        uint _1218 = _1216 ^ (_1216 >> 6u);
        uint _1220 = _1218 + (_1218 << 3u);
        uint _1222 = _1220 ^ (_1220 >> 11u);
        uint _1230 = (((_1160.x * 1664525u) + (_1222 + (_1222 << 15u))) + 1013904223u) * 1664525u;
        uint _1232 = _1230 ^ (_1230 >> 11u);
        uint _1235 = _1232 ^ ((_1232 << 7u) & 2636928640u);
        uint _1238 = _1235 ^ ((_1235 << 15u) & 4022730752u);
        uint _1240 = _1238 ^ (_1238 >> 18u);
        _5268 = _5264;
        uint _1257;
        uint _1276;
        float _1282;
        uint _5267 = 0u;
        uint _5314 = _1240;
        for (;;)
        {
            if (!(_5267 < 1u))
            {
                break;
            }
            uint _1268 = _5314 + (_5314 << 10u);
            uint _1270 = _1268 ^ (_1268 >> 6u);
            uint _1272 = _1270 + (_1270 << 3u);
            uint _1274 = _1272 ^ (_1272 >> 11u);
            _1276 = _1274 + (_1274 << 15u);
            _1282 = uintBitsToFloat((_5314 & 8388607u) | 1065353216u) - 1.0;
            _1257 = _5267 + 1u;
            _5314 = _1276;
            _5268 = _1282;
            _5267 = _1257;
            continue;
        }
        uvec2 _1168 = uvec2(_1158 + ivec2(1, 0));
        uint _1286 = _1168.y;
        uint _1292 = _1286 + (_1286 << 10u);
        uint _1294 = _1292 ^ (_1292 >> 6u);
        uint _1296 = _1294 + (_1294 << 3u);
        uint _1298 = _1296 ^ (_1296 >> 11u);
        uint _1306 = (((_1168.x * 1664525u) + (_1298 + (_1298 << 15u))) + 1013904223u) * 1664525u;
        uint _1308 = _1306 ^ (_1306 >> 11u);
        uint _1311 = _1308 ^ ((_1308 << 7u) & 2636928640u);
        uint _1314 = _1311 ^ ((_1311 << 15u) & 4022730752u);
        uint _1316 = _1314 ^ (_1314 >> 18u);
        _5274 = _5270;
        uint _1333;
        uint _1352;
        float _1358;
        uint _5273 = 0u;
        uint _5313 = _1316;
        for (;;)
        {
            if (!(_5273 < 1u))
            {
                break;
            }
            uint _1344 = _5313 + (_5313 << 10u);
            uint _1346 = _1344 ^ (_1344 >> 6u);
            uint _1348 = _1346 + (_1346 << 3u);
            uint _1350 = _1348 ^ (_1348 >> 11u);
            _1352 = _1350 + (_1350 << 15u);
            _1358 = uintBitsToFloat((_5313 & 8388607u) | 1065353216u) - 1.0;
            _1333 = _5273 + 1u;
            _5313 = _1352;
            _5274 = _1358;
            _5273 = _1333;
            continue;
        }
        uvec2 _1175 = uvec2(_1158 + ivec2(0, 1));
        uint _1362 = _1175.y;
        uint _1368 = _1362 + (_1362 << 10u);
        uint _1370 = _1368 ^ (_1368 >> 6u);
        uint _1372 = _1370 + (_1370 << 3u);
        uint _1374 = _1372 ^ (_1372 >> 11u);
        uint _1382 = (((_1175.x * 1664525u) + (_1374 + (_1374 << 15u))) + 1013904223u) * 1664525u;
        uint _1384 = _1382 ^ (_1382 >> 11u);
        uint _1387 = _1384 ^ ((_1384 << 7u) & 2636928640u);
        uint _1390 = _1387 ^ ((_1387 << 15u) & 4022730752u);
        uint _1392 = _1390 ^ (_1390 >> 18u);
        _5281 = _5277;
        uint _1409;
        uint _1428;
        float _1434;
        uint _5280 = 0u;
        uint _5312 = _1392;
        for (;;)
        {
            if (!(_5280 < 1u))
            {
                break;
            }
            uint _1420 = _5312 + (_5312 << 10u);
            uint _1422 = _1420 ^ (_1420 >> 6u);
            uint _1424 = _1422 + (_1422 << 3u);
            uint _1426 = _1424 ^ (_1424 >> 11u);
            _1428 = _1426 + (_1426 << 15u);
            _1434 = uintBitsToFloat((_5312 & 8388607u) | 1065353216u) - 1.0;
            _1409 = _5280 + 1u;
            _5312 = _1428;
            _5281 = _1434;
            _5280 = _1409;
            continue;
        }
        uvec2 _1183 = uvec2(_1158 + ivec2(1));
        uint _1438 = _1183.y;
        uint _1444 = _1438 + (_1438 << 10u);
        uint _1446 = _1444 ^ (_1444 >> 6u);
        uint _1448 = _1446 + (_1446 << 3u);
        uint _1450 = _1448 ^ (_1448 >> 11u);
        uint _1458 = (((_1183.x * 1664525u) + (_1450 + (_1450 << 15u))) + 1013904223u) * 1664525u;
        uint _1460 = _1458 ^ (_1458 >> 11u);
        uint _1463 = _1460 ^ ((_1460 << 7u) & 2636928640u);
        uint _1466 = _1463 ^ ((_1463 << 15u) & 4022730752u);
        uint _1468 = _1466 ^ (_1466 >> 18u);
        _5289 = _5285;
        uint _1485;
        uint _1504;
        float _1510;
        uint _5288 = 0u;
        uint _5311 = _1468;
        for (;;)
        {
            if (!(_5288 < 1u))
            {
                break;
            }
            uint _1496 = _5311 + (_5311 << 10u);
            uint _1498 = _1496 ^ (_1496 >> 6u);
            uint _1500 = _1498 + (_1498 << 3u);
            uint _1502 = _1500 ^ (_1500 >> 11u);
            _1504 = _1502 + (_1502 << 15u);
            _1510 = uintBitsToFloat((_5311 & 8388607u) | 1065353216u) - 1.0;
            _1485 = _5288 + 1u;
            _5311 = _1504;
            _5289 = _1510;
            _5288 = _1485;
            continue;
        }
        vec2 _1516 = (_1159 * _1159) * (vec2(3.0) - (vec2(2.0) * _1159));
        float _1191 = _1516.x;
        float _1192 = 1.0 - _1191;
        float _1194 = _1516.y;
        _1125 = _5140 + (_5298 * ((-1.0) + (2.0 * ((((1.0 - _1194) * ((_5268 * _1192) + (_5274 * _1191))) + ((_5281 * _1192) * _1194)) + ((_5289 * _1191) * _1194)))));
        _1127 = _5298 * 0.550000011920928955078125;
        _1130 = (_5263 * 1.89999997615814208984375) * mat2(vec2(0.800000011920928955078125, -0.60000002384185791015625), vec2(0.60000002384185791015625, 0.800000011920928955078125));
        _1134 = _5139 + 1;
        _5298 = _1127;
        _5285 = _5289;
        _5277 = _5281;
        _5270 = _5274;
        _5264 = _5268;
        _5263 = _1130;
        _5140 = _1125;
        _5139 = _1134;
        continue;
    }
    float _5142;
    vec2 _5207;
    _5207 = ((vs_out_frag_curve_uv * 0.5) + vec2(0.5)) + _201;
    _5142 = 0.0;
    float _1539;
    float _1541;
    vec2 _1544;
    int _1548;
    float _5213;
    float _5220;
    float _5228;
    float _5237;
    int _5141 = 0;
    float _5208;
    float _5215;
    float _5223;
    float _5232;
    float _5246 = 0.5;
    for (;;)
    {
        if (!(_5141 < 5))
        {
            break;
        }
        ivec2 _1572 = ivec2(floor(_5207));
        vec2 _1573 = fract(_5207);
        uvec2 _1574 = uvec2(_1572);
        uint _1624 = _1574.y;
        uint _1630 = _1624 + (_1624 << 10u);
        uint _1632 = _1630 ^ (_1630 >> 6u);
        uint _1634 = _1632 + (_1632 << 3u);
        uint _1636 = _1634 ^ (_1634 >> 11u);
        uint _1644 = (((_1574.x * 1664525u) + (_1636 + (_1636 << 15u))) + 1013904223u) * 1664525u;
        uint _1646 = _1644 ^ (_1644 >> 11u);
        uint _1649 = _1646 ^ ((_1646 << 7u) & 2636928640u);
        uint _1652 = _1649 ^ ((_1649 << 15u) & 4022730752u);
        uint _1654 = _1652 ^ (_1652 >> 18u);
        _5213 = _5208;
        uint _1671;
        uint _1690;
        float _1696;
        uint _5212 = 0u;
        uint _5262 = _1654;
        for (;;)
        {
            if (!(_5212 < 1u))
            {
                break;
            }
            uint _1682 = _5262 + (_5262 << 10u);
            uint _1684 = _1682 ^ (_1682 >> 6u);
            uint _1686 = _1684 + (_1684 << 3u);
            uint _1688 = _1686 ^ (_1686 >> 11u);
            _1690 = _1688 + (_1688 << 15u);
            _1696 = uintBitsToFloat((_5262 & 8388607u) | 1065353216u) - 1.0;
            _1671 = _5212 + 1u;
            _5262 = _1690;
            _5213 = _1696;
            _5212 = _1671;
            continue;
        }
        uvec2 _1582 = uvec2(_1572 + ivec2(1, 0));
        uint _1700 = _1582.y;
        uint _1706 = _1700 + (_1700 << 10u);
        uint _1708 = _1706 ^ (_1706 >> 6u);
        uint _1710 = _1708 + (_1708 << 3u);
        uint _1712 = _1710 ^ (_1710 >> 11u);
        uint _1720 = (((_1582.x * 1664525u) + (_1712 + (_1712 << 15u))) + 1013904223u) * 1664525u;
        uint _1722 = _1720 ^ (_1720 >> 11u);
        uint _1725 = _1722 ^ ((_1722 << 7u) & 2636928640u);
        uint _1728 = _1725 ^ ((_1725 << 15u) & 4022730752u);
        uint _1730 = _1728 ^ (_1728 >> 18u);
        _5220 = _5215;
        uint _1747;
        uint _1766;
        float _1772;
        uint _5219 = 0u;
        uint _5261 = _1730;
        for (;;)
        {
            if (!(_5219 < 1u))
            {
                break;
            }
            uint _1758 = _5261 + (_5261 << 10u);
            uint _1760 = _1758 ^ (_1758 >> 6u);
            uint _1762 = _1760 + (_1760 << 3u);
            uint _1764 = _1762 ^ (_1762 >> 11u);
            _1766 = _1764 + (_1764 << 15u);
            _1772 = uintBitsToFloat((_5261 & 8388607u) | 1065353216u) - 1.0;
            _1747 = _5219 + 1u;
            _5261 = _1766;
            _5220 = _1772;
            _5219 = _1747;
            continue;
        }
        uvec2 _1589 = uvec2(_1572 + ivec2(0, 1));
        uint _1776 = _1589.y;
        uint _1782 = _1776 + (_1776 << 10u);
        uint _1784 = _1782 ^ (_1782 >> 6u);
        uint _1786 = _1784 + (_1784 << 3u);
        uint _1788 = _1786 ^ (_1786 >> 11u);
        uint _1796 = (((_1589.x * 1664525u) + (_1788 + (_1788 << 15u))) + 1013904223u) * 1664525u;
        uint _1798 = _1796 ^ (_1796 >> 11u);
        uint _1801 = _1798 ^ ((_1798 << 7u) & 2636928640u);
        uint _1804 = _1801 ^ ((_1801 << 15u) & 4022730752u);
        uint _1806 = _1804 ^ (_1804 >> 18u);
        _5228 = _5223;
        uint _1823;
        uint _1842;
        float _1848;
        uint _5227 = 0u;
        uint _5260 = _1806;
        for (;;)
        {
            if (!(_5227 < 1u))
            {
                break;
            }
            uint _1834 = _5260 + (_5260 << 10u);
            uint _1836 = _1834 ^ (_1834 >> 6u);
            uint _1838 = _1836 + (_1836 << 3u);
            uint _1840 = _1838 ^ (_1838 >> 11u);
            _1842 = _1840 + (_1840 << 15u);
            _1848 = uintBitsToFloat((_5260 & 8388607u) | 1065353216u) - 1.0;
            _1823 = _5227 + 1u;
            _5260 = _1842;
            _5228 = _1848;
            _5227 = _1823;
            continue;
        }
        uvec2 _1597 = uvec2(_1572 + ivec2(1));
        uint _1852 = _1597.y;
        uint _1858 = _1852 + (_1852 << 10u);
        uint _1860 = _1858 ^ (_1858 >> 6u);
        uint _1862 = _1860 + (_1860 << 3u);
        uint _1864 = _1862 ^ (_1862 >> 11u);
        uint _1872 = (((_1597.x * 1664525u) + (_1864 + (_1864 << 15u))) + 1013904223u) * 1664525u;
        uint _1874 = _1872 ^ (_1872 >> 11u);
        uint _1877 = _1874 ^ ((_1874 << 7u) & 2636928640u);
        uint _1880 = _1877 ^ ((_1877 << 15u) & 4022730752u);
        uint _1882 = _1880 ^ (_1880 >> 18u);
        _5237 = _5232;
        uint _1899;
        uint _1918;
        float _1924;
        uint _5236 = 0u;
        uint _5259 = _1882;
        for (;;)
        {
            if (!(_5236 < 1u))
            {
                break;
            }
            uint _1910 = _5259 + (_5259 << 10u);
            uint _1912 = _1910 ^ (_1910 >> 6u);
            uint _1914 = _1912 + (_1912 << 3u);
            uint _1916 = _1914 ^ (_1914 >> 11u);
            _1918 = _1916 + (_1916 << 15u);
            _1924 = uintBitsToFloat((_5259 & 8388607u) | 1065353216u) - 1.0;
            _1899 = _5236 + 1u;
            _5259 = _1918;
            _5237 = _1924;
            _5236 = _1899;
            continue;
        }
        vec2 _1930 = (_1573 * _1573) * (vec2(3.0) - (vec2(2.0) * _1573));
        float _1605 = _1930.x;
        float _1606 = 1.0 - _1605;
        float _1608 = _1930.y;
        _1539 = _5142 + (_5246 * ((-1.0) + (2.0 * ((((1.0 - _1608) * ((_5213 * _1606) + (_5220 * _1605))) + ((_5228 * _1606) * _1608)) + ((_5237 * _1605) * _1608)))));
        _1541 = _5246 * 0.550000011920928955078125;
        _1544 = (_5207 * 1.89999997615814208984375) * mat2(vec2(0.800000011920928955078125, -0.60000002384185791015625), vec2(0.60000002384185791015625, 0.800000011920928955078125));
        _1548 = _5141 + 1;
        _5246 = _1541;
        _5232 = _5237;
        _5223 = _5228;
        _5215 = _5220;
        _5208 = _5213;
        _5207 = _1544;
        _5142 = _1539;
        _5141 = _1548;
        continue;
    }
    float _1062 = smoothstep(0.0, 1.0, 1.0 - _133) * (mix(0.300000011920928955078125, 1.0, _5140) * vs_out_erosion_strength);
    float _1063 = (_1044 + _5142) + _1062;
    float _5145;
    if (_5379 > 0.0)
    {
        float _5144;
        vec2 _5146;
        _5146 = ((vec2(material_data_nani_instance_data._member0[vs_out_instance_index].wall_length - vs_out_frag_curve_uv.x, vs_out_frag_curve_uv.y) * 0.5) + vec2(0.5)) + _201;
        _5144 = 0.0;
        float _1953;
        float _1955;
        vec2 _1958;
        int _1962;
        float _5154;
        float _5162;
        float _5171;
        float _5181;
        int _5143 = 0;
        float _5147;
        float _5156;
        float _5165;
        float _5175;
        float _5190 = 0.5;
        for (;;)
        {
            if (!(_5143 < 5))
            {
                break;
            }
            ivec2 _1986 = ivec2(floor(_5146));
            vec2 _1987 = fract(_5146);
            uvec2 _1988 = uvec2(_1986);
            uint _2038 = _1988.y;
            uint _2044 = _2038 + (_2038 << 10u);
            uint _2046 = _2044 ^ (_2044 >> 6u);
            uint _2048 = _2046 + (_2046 << 3u);
            uint _2050 = _2048 ^ (_2048 >> 11u);
            uint _2058 = (((_1988.x * 1664525u) + (_2050 + (_2050 << 15u))) + 1013904223u) * 1664525u;
            uint _2060 = _2058 ^ (_2058 >> 11u);
            uint _2063 = _2060 ^ ((_2060 << 7u) & 2636928640u);
            uint _2066 = _2063 ^ ((_2063 << 15u) & 4022730752u);
            uint _2068 = _2066 ^ (_2066 >> 18u);
            _5154 = _5147;
            uint _2085;
            uint _2104;
            float _2110;
            uint _5153 = 0u;
            uint _5206 = _2068;
            for (;;)
            {
                if (!(_5153 < 1u))
                {
                    break;
                }
                uint _2096 = _5206 + (_5206 << 10u);
                uint _2098 = _2096 ^ (_2096 >> 6u);
                uint _2100 = _2098 + (_2098 << 3u);
                uint _2102 = _2100 ^ (_2100 >> 11u);
                _2104 = _2102 + (_2102 << 15u);
                _2110 = uintBitsToFloat((_5206 & 8388607u) | 1065353216u) - 1.0;
                _2085 = _5153 + 1u;
                _5206 = _2104;
                _5154 = _2110;
                _5153 = _2085;
                continue;
            }
            uvec2 _1996 = uvec2(_1986 + ivec2(1, 0));
            uint _2114 = _1996.y;
            uint _2120 = _2114 + (_2114 << 10u);
            uint _2122 = _2120 ^ (_2120 >> 6u);
            uint _2124 = _2122 + (_2122 << 3u);
            uint _2126 = _2124 ^ (_2124 >> 11u);
            uint _2134 = (((_1996.x * 1664525u) + (_2126 + (_2126 << 15u))) + 1013904223u) * 1664525u;
            uint _2136 = _2134 ^ (_2134 >> 11u);
            uint _2139 = _2136 ^ ((_2136 << 7u) & 2636928640u);
            uint _2142 = _2139 ^ ((_2139 << 15u) & 4022730752u);
            uint _2144 = _2142 ^ (_2142 >> 18u);
            _5162 = _5156;
            uint _2161;
            uint _2180;
            float _2186;
            uint _5161 = 0u;
            uint _5205 = _2144;
            for (;;)
            {
                if (!(_5161 < 1u))
                {
                    break;
                }
                uint _2172 = _5205 + (_5205 << 10u);
                uint _2174 = _2172 ^ (_2172 >> 6u);
                uint _2176 = _2174 + (_2174 << 3u);
                uint _2178 = _2176 ^ (_2176 >> 11u);
                _2180 = _2178 + (_2178 << 15u);
                _2186 = uintBitsToFloat((_5205 & 8388607u) | 1065353216u) - 1.0;
                _2161 = _5161 + 1u;
                _5205 = _2180;
                _5162 = _2186;
                _5161 = _2161;
                continue;
            }
            uvec2 _2003 = uvec2(_1986 + ivec2(0, 1));
            uint _2190 = _2003.y;
            uint _2196 = _2190 + (_2190 << 10u);
            uint _2198 = _2196 ^ (_2196 >> 6u);
            uint _2200 = _2198 + (_2198 << 3u);
            uint _2202 = _2200 ^ (_2200 >> 11u);
            uint _2210 = (((_2003.x * 1664525u) + (_2202 + (_2202 << 15u))) + 1013904223u) * 1664525u;
            uint _2212 = _2210 ^ (_2210 >> 11u);
            uint _2215 = _2212 ^ ((_2212 << 7u) & 2636928640u);
            uint _2218 = _2215 ^ ((_2215 << 15u) & 4022730752u);
            uint _2220 = _2218 ^ (_2218 >> 18u);
            _5171 = _5165;
            uint _2237;
            uint _2256;
            float _2262;
            uint _5170 = 0u;
            uint _5204 = _2220;
            for (;;)
            {
                if (!(_5170 < 1u))
                {
                    break;
                }
                uint _2248 = _5204 + (_5204 << 10u);
                uint _2250 = _2248 ^ (_2248 >> 6u);
                uint _2252 = _2250 + (_2250 << 3u);
                uint _2254 = _2252 ^ (_2252 >> 11u);
                _2256 = _2254 + (_2254 << 15u);
                _2262 = uintBitsToFloat((_5204 & 8388607u) | 1065353216u) - 1.0;
                _2237 = _5170 + 1u;
                _5204 = _2256;
                _5171 = _2262;
                _5170 = _2237;
                continue;
            }
            uvec2 _2011 = uvec2(_1986 + ivec2(1));
            uint _2266 = _2011.y;
            uint _2272 = _2266 + (_2266 << 10u);
            uint _2274 = _2272 ^ (_2272 >> 6u);
            uint _2276 = _2274 + (_2274 << 3u);
            uint _2278 = _2276 ^ (_2276 >> 11u);
            uint _2286 = (((_2011.x * 1664525u) + (_2278 + (_2278 << 15u))) + 1013904223u) * 1664525u;
            uint _2288 = _2286 ^ (_2286 >> 11u);
            uint _2291 = _2288 ^ ((_2288 << 7u) & 2636928640u);
            uint _2294 = _2291 ^ ((_2291 << 15u) & 4022730752u);
            uint _2296 = _2294 ^ (_2294 >> 18u);
            _5181 = _5175;
            uint _2313;
            uint _2332;
            float _2338;
            uint _5180 = 0u;
            uint _5203 = _2296;
            for (;;)
            {
                if (!(_5180 < 1u))
                {
                    break;
                }
                uint _2324 = _5203 + (_5203 << 10u);
                uint _2326 = _2324 ^ (_2324 >> 6u);
                uint _2328 = _2326 + (_2326 << 3u);
                uint _2330 = _2328 ^ (_2328 >> 11u);
                _2332 = _2330 + (_2330 << 15u);
                _2338 = uintBitsToFloat((_5203 & 8388607u) | 1065353216u) - 1.0;
                _2313 = _5180 + 1u;
                _5203 = _2332;
                _5181 = _2338;
                _5180 = _2313;
                continue;
            }
            vec2 _2344 = (_1987 * _1987) * (vec2(3.0) - (vec2(2.0) * _1987));
            float _2019 = _2344.x;
            float _2020 = 1.0 - _2019;
            float _2022 = _2344.y;
            _1953 = _5144 + (_5190 * ((-1.0) + (2.0 * ((((1.0 - _2022) * ((_5154 * _2020) + (_5162 * _2019))) + ((_5171 * _2020) * _2022)) + ((_5181 * _2019) * _2022)))));
            _1955 = _5190 * 0.550000011920928955078125;
            _1958 = (_5146 * 1.89999997615814208984375) * mat2(vec2(0.800000011920928955078125, -0.60000002384185791015625), vec2(0.60000002384185791015625, 0.800000011920928955078125));
            _1962 = _5143 + 1;
            _5190 = _1955;
            _5175 = _5181;
            _5165 = _5171;
            _5156 = _5162;
            _5147 = _5154;
            _5146 = _1958;
            _5144 = _1953;
            _5143 = _1962;
            continue;
        }
        _5145 = mix(_1063, (_1044 + _5144) + _1062, _5379);
    }
    else
    {
        _5145 = _1063;
    }
    if ((_5145 * mix(2.0, 2.7999999523162841796875, clamp(vs_out_peel_strength * 2.0, 0.0, 1.0))) > (smoothstep(0.0, 4.0, vs_out_frag_curve_uv.y) * 2.0))
    {
        demote;
    }
}

