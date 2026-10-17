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

struct _MatrixStorage_float3x3_ColMajornatural
{
    vec3 data[3];
};

float _5782;

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
layout(location = 9) in _MatrixStorage_float3x3_ColMajornatural vs_out_frag_tangent_to_world;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 4) in vec3 vs_out_tangent;
layout(location = 5) in vec3 vs_out_bitangent;
layout(location = 2) in vec3 vs_out_frag_position_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    uint _5654;
    if (material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id == frame_constants.wall_highlighted_slot_id)
    {
        _5654 = frame_constants.wall_highlight_mode;
    }
    else
    {
        _5654 = 0u;
    }
    float _149 = clamp(vs_out_sdf, 0.0, 1.0);
    uint _164 = uint(material_data_nani_instance_data._member0[vs_out_instance_index].wall_length * 1.75);
    uint _1183 = _164 + (_164 << 10u);
    uint _1185 = _1183 ^ (_1183 >> 6u);
    uint _1187 = _1185 + (_1185 << 3u);
    uint _1189 = _1187 ^ (_1187 >> 11u);
    float _7346 = (int(material_data_nani_instance_data._member0[vs_out_instance_index].blend_uv_seam != 0u) == 0) ? 0.0 : smoothstep(1.0 - (1.0 / material_data_nani_instance_data._member0[vs_out_instance_index].wall_length), 1.0, vs_out_frag_curve_uv.x / material_data_nani_instance_data._member0[vs_out_instance_index].wall_length);
    if (_149 < 0.100000001490116119384765625)
    {
        demote;
    }
    vec2 _217 = vec2(mix(0.0, 10.0, uintBitsToFloat(((_1189 + (_1189 << 15u)) & 8388607u) | 1065353216u) - 1.0));
    float _1202 = mix(0.0, 0.5, vs_out_peel_strength);
    float _5658;
    vec2 _6628;
    _6628 = (vs_out_frag_curve_uv + vec2(23.3999996185302734375)) + _217;
    _5658 = 0.0;
    float _1283;
    float _1285;
    vec2 _1288;
    int _1292;
    float _6634;
    float _6641;
    float _6649;
    float _6658;
    int _5657 = 0;
    float _6629;
    float _6636;
    float _6644;
    float _6653;
    float _6667 = 0.5;
    for (;;)
    {
        if (!(_5657 < 3))
        {
            break;
        }
        ivec2 _1316 = ivec2(floor(_6628));
        vec2 _1317 = fract(_6628);
        uvec2 _1318 = uvec2(_1316);
        uint _1368 = _1318.y;
        uint _1374 = _1368 + (_1368 << 10u);
        uint _1376 = _1374 ^ (_1374 >> 6u);
        uint _1378 = _1376 + (_1376 << 3u);
        uint _1380 = _1378 ^ (_1378 >> 11u);
        uint _1388 = (((_1318.x * 1664525u) + (_1380 + (_1380 << 15u))) + 1013904223u) * 1664525u;
        uint _1390 = _1388 ^ (_1388 >> 11u);
        uint _1393 = _1390 ^ ((_1390 << 7u) & 2636928640u);
        uint _1396 = _1393 ^ ((_1393 << 15u) & 4022730752u);
        uint _1398 = _1396 ^ (_1396 >> 18u);
        _6634 = _6629;
        uint _1415;
        uint _1434;
        float _1440;
        uint _6633 = 0u;
        uint _6683 = _1398;
        for (;;)
        {
            if (!(_6633 < 1u))
            {
                break;
            }
            uint _1426 = _6683 + (_6683 << 10u);
            uint _1428 = _1426 ^ (_1426 >> 6u);
            uint _1430 = _1428 + (_1428 << 3u);
            uint _1432 = _1430 ^ (_1430 >> 11u);
            _1434 = _1432 + (_1432 << 15u);
            _1440 = uintBitsToFloat((_6683 & 8388607u) | 1065353216u) - 1.0;
            _1415 = _6633 + 1u;
            _6683 = _1434;
            _6634 = _1440;
            _6633 = _1415;
            continue;
        }
        uvec2 _1326 = uvec2(_1316 + ivec2(1, 0));
        uint _1444 = _1326.y;
        uint _1450 = _1444 + (_1444 << 10u);
        uint _1452 = _1450 ^ (_1450 >> 6u);
        uint _1454 = _1452 + (_1452 << 3u);
        uint _1456 = _1454 ^ (_1454 >> 11u);
        uint _1464 = (((_1326.x * 1664525u) + (_1456 + (_1456 << 15u))) + 1013904223u) * 1664525u;
        uint _1466 = _1464 ^ (_1464 >> 11u);
        uint _1469 = _1466 ^ ((_1466 << 7u) & 2636928640u);
        uint _1472 = _1469 ^ ((_1469 << 15u) & 4022730752u);
        uint _1474 = _1472 ^ (_1472 >> 18u);
        _6641 = _6636;
        uint _1491;
        uint _1510;
        float _1516;
        uint _6640 = 0u;
        uint _6682 = _1474;
        for (;;)
        {
            if (!(_6640 < 1u))
            {
                break;
            }
            uint _1502 = _6682 + (_6682 << 10u);
            uint _1504 = _1502 ^ (_1502 >> 6u);
            uint _1506 = _1504 + (_1504 << 3u);
            uint _1508 = _1506 ^ (_1506 >> 11u);
            _1510 = _1508 + (_1508 << 15u);
            _1516 = uintBitsToFloat((_6682 & 8388607u) | 1065353216u) - 1.0;
            _1491 = _6640 + 1u;
            _6682 = _1510;
            _6641 = _1516;
            _6640 = _1491;
            continue;
        }
        uvec2 _1333 = uvec2(_1316 + ivec2(0, 1));
        uint _1520 = _1333.y;
        uint _1526 = _1520 + (_1520 << 10u);
        uint _1528 = _1526 ^ (_1526 >> 6u);
        uint _1530 = _1528 + (_1528 << 3u);
        uint _1532 = _1530 ^ (_1530 >> 11u);
        uint _1540 = (((_1333.x * 1664525u) + (_1532 + (_1532 << 15u))) + 1013904223u) * 1664525u;
        uint _1542 = _1540 ^ (_1540 >> 11u);
        uint _1545 = _1542 ^ ((_1542 << 7u) & 2636928640u);
        uint _1548 = _1545 ^ ((_1545 << 15u) & 4022730752u);
        uint _1550 = _1548 ^ (_1548 >> 18u);
        _6649 = _6644;
        uint _1567;
        uint _1586;
        float _1592;
        uint _6648 = 0u;
        uint _6681 = _1550;
        for (;;)
        {
            if (!(_6648 < 1u))
            {
                break;
            }
            uint _1578 = _6681 + (_6681 << 10u);
            uint _1580 = _1578 ^ (_1578 >> 6u);
            uint _1582 = _1580 + (_1580 << 3u);
            uint _1584 = _1582 ^ (_1582 >> 11u);
            _1586 = _1584 + (_1584 << 15u);
            _1592 = uintBitsToFloat((_6681 & 8388607u) | 1065353216u) - 1.0;
            _1567 = _6648 + 1u;
            _6681 = _1586;
            _6649 = _1592;
            _6648 = _1567;
            continue;
        }
        uvec2 _1341 = uvec2(_1316 + ivec2(1));
        uint _1596 = _1341.y;
        uint _1602 = _1596 + (_1596 << 10u);
        uint _1604 = _1602 ^ (_1602 >> 6u);
        uint _1606 = _1604 + (_1604 << 3u);
        uint _1608 = _1606 ^ (_1606 >> 11u);
        uint _1616 = (((_1341.x * 1664525u) + (_1608 + (_1608 << 15u))) + 1013904223u) * 1664525u;
        uint _1618 = _1616 ^ (_1616 >> 11u);
        uint _1621 = _1618 ^ ((_1618 << 7u) & 2636928640u);
        uint _1624 = _1621 ^ ((_1621 << 15u) & 4022730752u);
        uint _1626 = _1624 ^ (_1624 >> 18u);
        _6658 = _6653;
        uint _1643;
        uint _1662;
        float _1668;
        uint _6657 = 0u;
        uint _6680 = _1626;
        for (;;)
        {
            if (!(_6657 < 1u))
            {
                break;
            }
            uint _1654 = _6680 + (_6680 << 10u);
            uint _1656 = _1654 ^ (_1654 >> 6u);
            uint _1658 = _1656 + (_1656 << 3u);
            uint _1660 = _1658 ^ (_1658 >> 11u);
            _1662 = _1660 + (_1660 << 15u);
            _1668 = uintBitsToFloat((_6680 & 8388607u) | 1065353216u) - 1.0;
            _1643 = _6657 + 1u;
            _6680 = _1662;
            _6658 = _1668;
            _6657 = _1643;
            continue;
        }
        vec2 _1674 = (_1317 * _1317) * (vec2(3.0) - (vec2(2.0) * _1317));
        float _1349 = _1674.x;
        float _1350 = 1.0 - _1349;
        float _1352 = _1674.y;
        _1283 = _5658 + (_6667 * ((-1.0) + (2.0 * ((((1.0 - _1352) * ((_6634 * _1350) + (_6641 * _1349))) + ((_6649 * _1350) * _1352)) + ((_6658 * _1349) * _1352)))));
        _1285 = _6667 * 0.550000011920928955078125;
        _1288 = (_6628 * 1.89999997615814208984375) * mat2(vec2(0.800000011920928955078125, -0.60000002384185791015625), vec2(0.60000002384185791015625, 0.800000011920928955078125));
        _1292 = _5657 + 1;
        _6667 = _1285;
        _6653 = _6658;
        _6644 = _6649;
        _6636 = _6641;
        _6629 = _6634;
        _6628 = _1288;
        _5658 = _1283;
        _5657 = _1292;
        continue;
    }
    float _5660;
    vec2 _6568;
    _6568 = ((vs_out_frag_curve_uv * 0.5) + vec2(0.5)) + _217;
    _5660 = 0.0;
    float _1697;
    float _1699;
    vec2 _1702;
    int _1706;
    float _6575;
    float _6583;
    float _6592;
    float _6602;
    int _5659 = 0;
    float _6569;
    float _6577;
    float _6586;
    float _6596;
    float _6611 = 0.5;
    for (;;)
    {
        if (!(_5659 < 5))
        {
            break;
        }
        ivec2 _1730 = ivec2(floor(_6568));
        vec2 _1731 = fract(_6568);
        uvec2 _1732 = uvec2(_1730);
        uint _1782 = _1732.y;
        uint _1788 = _1782 + (_1782 << 10u);
        uint _1790 = _1788 ^ (_1788 >> 6u);
        uint _1792 = _1790 + (_1790 << 3u);
        uint _1794 = _1792 ^ (_1792 >> 11u);
        uint _1802 = (((_1732.x * 1664525u) + (_1794 + (_1794 << 15u))) + 1013904223u) * 1664525u;
        uint _1804 = _1802 ^ (_1802 >> 11u);
        uint _1807 = _1804 ^ ((_1804 << 7u) & 2636928640u);
        uint _1810 = _1807 ^ ((_1807 << 15u) & 4022730752u);
        uint _1812 = _1810 ^ (_1810 >> 18u);
        _6575 = _6569;
        uint _1829;
        uint _1848;
        float _1854;
        uint _6574 = 0u;
        uint _6627 = _1812;
        for (;;)
        {
            if (!(_6574 < 1u))
            {
                break;
            }
            uint _1840 = _6627 + (_6627 << 10u);
            uint _1842 = _1840 ^ (_1840 >> 6u);
            uint _1844 = _1842 + (_1842 << 3u);
            uint _1846 = _1844 ^ (_1844 >> 11u);
            _1848 = _1846 + (_1846 << 15u);
            _1854 = uintBitsToFloat((_6627 & 8388607u) | 1065353216u) - 1.0;
            _1829 = _6574 + 1u;
            _6627 = _1848;
            _6575 = _1854;
            _6574 = _1829;
            continue;
        }
        uvec2 _1740 = uvec2(_1730 + ivec2(1, 0));
        uint _1858 = _1740.y;
        uint _1864 = _1858 + (_1858 << 10u);
        uint _1866 = _1864 ^ (_1864 >> 6u);
        uint _1868 = _1866 + (_1866 << 3u);
        uint _1870 = _1868 ^ (_1868 >> 11u);
        uint _1878 = (((_1740.x * 1664525u) + (_1870 + (_1870 << 15u))) + 1013904223u) * 1664525u;
        uint _1880 = _1878 ^ (_1878 >> 11u);
        uint _1883 = _1880 ^ ((_1880 << 7u) & 2636928640u);
        uint _1886 = _1883 ^ ((_1883 << 15u) & 4022730752u);
        uint _1888 = _1886 ^ (_1886 >> 18u);
        _6583 = _6577;
        uint _1905;
        uint _1924;
        float _1930;
        uint _6582 = 0u;
        uint _6626 = _1888;
        for (;;)
        {
            if (!(_6582 < 1u))
            {
                break;
            }
            uint _1916 = _6626 + (_6626 << 10u);
            uint _1918 = _1916 ^ (_1916 >> 6u);
            uint _1920 = _1918 + (_1918 << 3u);
            uint _1922 = _1920 ^ (_1920 >> 11u);
            _1924 = _1922 + (_1922 << 15u);
            _1930 = uintBitsToFloat((_6626 & 8388607u) | 1065353216u) - 1.0;
            _1905 = _6582 + 1u;
            _6626 = _1924;
            _6583 = _1930;
            _6582 = _1905;
            continue;
        }
        uvec2 _1747 = uvec2(_1730 + ivec2(0, 1));
        uint _1934 = _1747.y;
        uint _1940 = _1934 + (_1934 << 10u);
        uint _1942 = _1940 ^ (_1940 >> 6u);
        uint _1944 = _1942 + (_1942 << 3u);
        uint _1946 = _1944 ^ (_1944 >> 11u);
        uint _1954 = (((_1747.x * 1664525u) + (_1946 + (_1946 << 15u))) + 1013904223u) * 1664525u;
        uint _1956 = _1954 ^ (_1954 >> 11u);
        uint _1959 = _1956 ^ ((_1956 << 7u) & 2636928640u);
        uint _1962 = _1959 ^ ((_1959 << 15u) & 4022730752u);
        uint _1964 = _1962 ^ (_1962 >> 18u);
        _6592 = _6586;
        uint _1981;
        uint _2000;
        float _2006;
        uint _6591 = 0u;
        uint _6625 = _1964;
        for (;;)
        {
            if (!(_6591 < 1u))
            {
                break;
            }
            uint _1992 = _6625 + (_6625 << 10u);
            uint _1994 = _1992 ^ (_1992 >> 6u);
            uint _1996 = _1994 + (_1994 << 3u);
            uint _1998 = _1996 ^ (_1996 >> 11u);
            _2000 = _1998 + (_1998 << 15u);
            _2006 = uintBitsToFloat((_6625 & 8388607u) | 1065353216u) - 1.0;
            _1981 = _6591 + 1u;
            _6625 = _2000;
            _6592 = _2006;
            _6591 = _1981;
            continue;
        }
        uvec2 _1755 = uvec2(_1730 + ivec2(1));
        uint _2010 = _1755.y;
        uint _2016 = _2010 + (_2010 << 10u);
        uint _2018 = _2016 ^ (_2016 >> 6u);
        uint _2020 = _2018 + (_2018 << 3u);
        uint _2022 = _2020 ^ (_2020 >> 11u);
        uint _2030 = (((_1755.x * 1664525u) + (_2022 + (_2022 << 15u))) + 1013904223u) * 1664525u;
        uint _2032 = _2030 ^ (_2030 >> 11u);
        uint _2035 = _2032 ^ ((_2032 << 7u) & 2636928640u);
        uint _2038 = _2035 ^ ((_2035 << 15u) & 4022730752u);
        uint _2040 = _2038 ^ (_2038 >> 18u);
        _6602 = _6596;
        uint _2057;
        uint _2076;
        float _2082;
        uint _6601 = 0u;
        uint _6624 = _2040;
        for (;;)
        {
            if (!(_6601 < 1u))
            {
                break;
            }
            uint _2068 = _6624 + (_6624 << 10u);
            uint _2070 = _2068 ^ (_2068 >> 6u);
            uint _2072 = _2070 + (_2070 << 3u);
            uint _2074 = _2072 ^ (_2072 >> 11u);
            _2076 = _2074 + (_2074 << 15u);
            _2082 = uintBitsToFloat((_6624 & 8388607u) | 1065353216u) - 1.0;
            _2057 = _6601 + 1u;
            _6624 = _2076;
            _6602 = _2082;
            _6601 = _2057;
            continue;
        }
        vec2 _2088 = (_1731 * _1731) * (vec2(3.0) - (vec2(2.0) * _1731));
        float _1763 = _2088.x;
        float _1764 = 1.0 - _1763;
        float _1766 = _2088.y;
        _1697 = _5660 + (_6611 * ((-1.0) + (2.0 * ((((1.0 - _1766) * ((_6575 * _1764) + (_6583 * _1763))) + ((_6592 * _1764) * _1766)) + ((_6602 * _1763) * _1766)))));
        _1699 = _6611 * 0.550000011920928955078125;
        _1702 = (_6568 * 1.89999997615814208984375) * mat2(vec2(0.800000011920928955078125, -0.60000002384185791015625), vec2(0.60000002384185791015625, 0.800000011920928955078125));
        _1706 = _5659 + 1;
        _6611 = _1699;
        _6596 = _6602;
        _6586 = _6592;
        _6577 = _6583;
        _6569 = _6575;
        _6568 = _1702;
        _5660 = _1697;
        _5659 = _1706;
        continue;
    }
    float _1219 = smoothstep(0.0, 1.0, 1.0 - _149);
    float _1220 = _1219 * (mix(0.300000011920928955078125, 1.0, _5658) * vs_out_erosion_strength);
    float _1221 = (_1202 + _5660) + _1220;
    bool _1222 = _7346 > 0.0;
    float _5663;
    if (_1222)
    {
        float _5662;
        vec2 _6504;
        _6504 = ((vec2(material_data_nani_instance_data._member0[vs_out_instance_index].wall_length - vs_out_frag_curve_uv.x, vs_out_frag_curve_uv.y) * 0.5) + vec2(0.5)) + _217;
        _5662 = 0.0;
        float _2111;
        float _2113;
        vec2 _2116;
        int _2120;
        float _6512;
        float _6521;
        float _6531;
        float _6542;
        int _5661 = 0;
        float _6505;
        float _6514;
        float _6524;
        float _6535;
        float _6551 = 0.5;
        for (;;)
        {
            if (!(_5661 < 5))
            {
                break;
            }
            ivec2 _2144 = ivec2(floor(_6504));
            vec2 _2145 = fract(_6504);
            uvec2 _2146 = uvec2(_2144);
            uint _2196 = _2146.y;
            uint _2202 = _2196 + (_2196 << 10u);
            uint _2204 = _2202 ^ (_2202 >> 6u);
            uint _2206 = _2204 + (_2204 << 3u);
            uint _2208 = _2206 ^ (_2206 >> 11u);
            uint _2216 = (((_2146.x * 1664525u) + (_2208 + (_2208 << 15u))) + 1013904223u) * 1664525u;
            uint _2218 = _2216 ^ (_2216 >> 11u);
            uint _2221 = _2218 ^ ((_2218 << 7u) & 2636928640u);
            uint _2224 = _2221 ^ ((_2221 << 15u) & 4022730752u);
            uint _2226 = _2224 ^ (_2224 >> 18u);
            _6512 = _6505;
            uint _2243;
            uint _2262;
            float _2268;
            uint _6511 = 0u;
            uint _6567 = _2226;
            for (;;)
            {
                if (!(_6511 < 1u))
                {
                    break;
                }
                uint _2254 = _6567 + (_6567 << 10u);
                uint _2256 = _2254 ^ (_2254 >> 6u);
                uint _2258 = _2256 + (_2256 << 3u);
                uint _2260 = _2258 ^ (_2258 >> 11u);
                _2262 = _2260 + (_2260 << 15u);
                _2268 = uintBitsToFloat((_6567 & 8388607u) | 1065353216u) - 1.0;
                _2243 = _6511 + 1u;
                _6567 = _2262;
                _6512 = _2268;
                _6511 = _2243;
                continue;
            }
            uvec2 _2154 = uvec2(_2144 + ivec2(1, 0));
            uint _2272 = _2154.y;
            uint _2278 = _2272 + (_2272 << 10u);
            uint _2280 = _2278 ^ (_2278 >> 6u);
            uint _2282 = _2280 + (_2280 << 3u);
            uint _2284 = _2282 ^ (_2282 >> 11u);
            uint _2292 = (((_2154.x * 1664525u) + (_2284 + (_2284 << 15u))) + 1013904223u) * 1664525u;
            uint _2294 = _2292 ^ (_2292 >> 11u);
            uint _2297 = _2294 ^ ((_2294 << 7u) & 2636928640u);
            uint _2300 = _2297 ^ ((_2297 << 15u) & 4022730752u);
            uint _2302 = _2300 ^ (_2300 >> 18u);
            _6521 = _6514;
            uint _2319;
            uint _2338;
            float _2344;
            uint _6520 = 0u;
            uint _6566 = _2302;
            for (;;)
            {
                if (!(_6520 < 1u))
                {
                    break;
                }
                uint _2330 = _6566 + (_6566 << 10u);
                uint _2332 = _2330 ^ (_2330 >> 6u);
                uint _2334 = _2332 + (_2332 << 3u);
                uint _2336 = _2334 ^ (_2334 >> 11u);
                _2338 = _2336 + (_2336 << 15u);
                _2344 = uintBitsToFloat((_6566 & 8388607u) | 1065353216u) - 1.0;
                _2319 = _6520 + 1u;
                _6566 = _2338;
                _6521 = _2344;
                _6520 = _2319;
                continue;
            }
            uvec2 _2161 = uvec2(_2144 + ivec2(0, 1));
            uint _2348 = _2161.y;
            uint _2354 = _2348 + (_2348 << 10u);
            uint _2356 = _2354 ^ (_2354 >> 6u);
            uint _2358 = _2356 + (_2356 << 3u);
            uint _2360 = _2358 ^ (_2358 >> 11u);
            uint _2368 = (((_2161.x * 1664525u) + (_2360 + (_2360 << 15u))) + 1013904223u) * 1664525u;
            uint _2370 = _2368 ^ (_2368 >> 11u);
            uint _2373 = _2370 ^ ((_2370 << 7u) & 2636928640u);
            uint _2376 = _2373 ^ ((_2373 << 15u) & 4022730752u);
            uint _2378 = _2376 ^ (_2376 >> 18u);
            _6531 = _6524;
            uint _2395;
            uint _2414;
            float _2420;
            uint _6530 = 0u;
            uint _6565 = _2378;
            for (;;)
            {
                if (!(_6530 < 1u))
                {
                    break;
                }
                uint _2406 = _6565 + (_6565 << 10u);
                uint _2408 = _2406 ^ (_2406 >> 6u);
                uint _2410 = _2408 + (_2408 << 3u);
                uint _2412 = _2410 ^ (_2410 >> 11u);
                _2414 = _2412 + (_2412 << 15u);
                _2420 = uintBitsToFloat((_6565 & 8388607u) | 1065353216u) - 1.0;
                _2395 = _6530 + 1u;
                _6565 = _2414;
                _6531 = _2420;
                _6530 = _2395;
                continue;
            }
            uvec2 _2169 = uvec2(_2144 + ivec2(1));
            uint _2424 = _2169.y;
            uint _2430 = _2424 + (_2424 << 10u);
            uint _2432 = _2430 ^ (_2430 >> 6u);
            uint _2434 = _2432 + (_2432 << 3u);
            uint _2436 = _2434 ^ (_2434 >> 11u);
            uint _2444 = (((_2169.x * 1664525u) + (_2436 + (_2436 << 15u))) + 1013904223u) * 1664525u;
            uint _2446 = _2444 ^ (_2444 >> 11u);
            uint _2449 = _2446 ^ ((_2446 << 7u) & 2636928640u);
            uint _2452 = _2449 ^ ((_2449 << 15u) & 4022730752u);
            uint _2454 = _2452 ^ (_2452 >> 18u);
            _6542 = _6535;
            uint _2471;
            uint _2490;
            float _2496;
            uint _6541 = 0u;
            uint _6564 = _2454;
            for (;;)
            {
                if (!(_6541 < 1u))
                {
                    break;
                }
                uint _2482 = _6564 + (_6564 << 10u);
                uint _2484 = _2482 ^ (_2482 >> 6u);
                uint _2486 = _2484 + (_2484 << 3u);
                uint _2488 = _2486 ^ (_2486 >> 11u);
                _2490 = _2488 + (_2488 << 15u);
                _2496 = uintBitsToFloat((_6564 & 8388607u) | 1065353216u) - 1.0;
                _2471 = _6541 + 1u;
                _6564 = _2490;
                _6542 = _2496;
                _6541 = _2471;
                continue;
            }
            vec2 _2502 = (_2145 * _2145) * (vec2(3.0) - (vec2(2.0) * _2145));
            float _2177 = _2502.x;
            float _2178 = 1.0 - _2177;
            float _2180 = _2502.y;
            _2111 = _5662 + (_6551 * ((-1.0) + (2.0 * ((((1.0 - _2180) * ((_6512 * _2178) + (_6521 * _2177))) + ((_6531 * _2178) * _2180)) + ((_6542 * _2177) * _2180)))));
            _2113 = _6551 * 0.550000011920928955078125;
            _2116 = (_6504 * 1.89999997615814208984375) * mat2(vec2(0.800000011920928955078125, -0.60000002384185791015625), vec2(0.60000002384185791015625, 0.800000011920928955078125));
            _2120 = _5661 + 1;
            _6551 = _2113;
            _6535 = _6542;
            _6524 = _6531;
            _6514 = _6521;
            _6505 = _6512;
            _6504 = _2116;
            _5662 = _2111;
            _5661 = _2120;
            continue;
        }
        _5663 = mix(_1221, (_1202 + _5662) + _1220, _7346);
    }
    else
    {
        _5663 = _1221;
    }
    float _1241 = smoothstep(0.0, 4.0, vs_out_frag_curve_uv.y);
    float _1244 = min((_1241 * 1.5) - 0.20000000298023223876953125, 0.89999997615814208984375);
    float _1245 = _1244 + 0.100000001490116119384765625;
    float _1247 = _5663 * 2.0;
    float _1248 = smoothstep(_1244, _1245, _1247);
    float _1252 = clamp(smoothstep(_1244 - 0.100000001490116119384765625, _1245, _1247) - _1248, 0.0, 1.0);
    if ((_5663 * mix(2.0, 2.7999999523162841796875, clamp(vs_out_peel_strength * 2.0, 0.0, 1.0))) > (_1241 * 2.0))
    {
        demote;
    }
    vec2 my_uv = vs_out_frag_curve_uv * 0.100000001490116119384765625;
    int _581 = int(wall_color_data_wall_color_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id]);
    float _2515 = float(_581 - 4);
    vec4 _2521 = texture(sampler2DArray(wall_color_data_plaster_colors, samplers_llr), vec3(my_uv + _217, _2515));
    vec3 _2524 = _2521.xyz;
    vec3 _5685;
    if (_1222)
    {
        _5685 = mix(_2524, texture(sampler2DArray(wall_color_data_plaster_colors, samplers_llr), vec3(vec2((material_data_nani_instance_data._member0[vs_out_instance_index].wall_length * 0.100000001490116119384765625) - my_uv.x, my_uv.y) + _217, _2515)).xyz, vec3(_7346));
    }
    else
    {
        _5685 = _2524;
    }
    vec3 _5670;
    if (_581 == 4)
    {
        _5670 = vec3(0.4766300618648529052734375, 0.23876892030239105224609375, 0.17930369079113006591796875);
    }
    else
    {
        vec3 _5671;
        if (_581 == 5)
        {
            _5671 = vec3(0.36000001430511474609375, 0.3288960158824920654296875, 0.165600001811981201171875);
        }
        else
        {
            vec3 _5672;
            if (_581 == 6)
            {
                _5672 = vec3(0.2800000011920928955078125, 0.29254400730133056640625, 0.2512000501155853271484375);
            }
            else
            {
                vec3 _5673;
                if (_581 == 7)
                {
                    _5673 = vec3(0.2100000083446502685546875, 0.1674120128154754638671875, 0.1281000077724456787109375);
                }
                else
                {
                    vec3 _5674;
                    if (_581 == 8)
                    {
                        _5674 = vec3(0.4000000059604644775390625, 0.3656800091266632080078125, 0.24400003254413604736328125);
                    }
                    else
                    {
                        vec3 _5675;
                        if (_581 == 9)
                        {
                            _5675 = vec3(0.2700000107288360595703125, 0.3499999940395355224609375, 0.2700000107288360595703125);
                        }
                        else
                        {
                            bool _5669;
                            if (_581 == 10)
                            {
                                _5669 = true;
                            }
                            else
                            {
                                _5669 = _581 == 12;
                            }
                            _5675 = mix(vec3(0.0), vec3(0.4000000059604644775390625, 0.3656800091266632080078125, 0.24400003254413604736328125), bvec3(_5669));
                        }
                        _5674 = _5675;
                    }
                    _5673 = _5674;
                }
                _5672 = _5673;
            }
            _5671 = _5672;
        }
        _5670 = _5671;
    }
    vec4 sampled = texture(sampler2D(material_data_mortar, samplers_llr), my_uv * 2.0);
    vec3 _770 = vec3(_1248);
    vec3 _772 = mix(_5685, (_5670 * 1.10000002384185791015625) * sampled.xyz, _770);
    vec4 sampled_1 = texture(sampler2D(material_data_normal_map, samplers_llr), my_uv);
    vec3 _814 = normalize(mix(normalize(((sampled_1.xyz * 2.0) - vec3(1.0)) * mat3(vec3(vs_out_frag_tangent_to_world.data[0].x, vs_out_frag_tangent_to_world.data[1].x, vs_out_frag_tangent_to_world.data[2].x), vec3(vs_out_frag_tangent_to_world.data[0].y, vs_out_frag_tangent_to_world.data[1].y, vs_out_frag_tangent_to_world.data[2].y), vec3(vs_out_frag_tangent_to_world.data[0].z, vs_out_frag_tangent_to_world.data[1].z, vs_out_frag_tangent_to_world.data[2].z))), vs_out_frag_normal_ws, _770));
    vec3 _5713;
    if (_1252 > 0.0)
    {
        vec2 _819 = vs_out_frag_curve_uv + vec2(0.00999999977648258209228515625, 0.0);
        float _5696;
        vec2 _6392;
        _6392 = (vs_out_frag_curve_uv + vec2(23.409999847412109375, 23.3999996185302734375)) + _217;
        _5696 = 0.0;
        float _2669;
        float _2671;
        vec2 _2674;
        int _2678;
        float _6412;
        float _6433;
        float _6455;
        float _6478;
        int _5695 = 0;
        float _6393;
        float _6414;
        float _6436;
        float _6459;
        float _6487 = 0.5;
        for (;;)
        {
            if (!(_5695 < 3))
            {
                break;
            }
            ivec2 _2702 = ivec2(floor(_6392));
            vec2 _2703 = fract(_6392);
            uvec2 _2704 = uvec2(_2702);
            uint _2754 = _2704.y;
            uint _2760 = _2754 + (_2754 << 10u);
            uint _2762 = _2760 ^ (_2760 >> 6u);
            uint _2764 = _2762 + (_2762 << 3u);
            uint _2766 = _2764 ^ (_2764 >> 11u);
            uint _2774 = (((_2704.x * 1664525u) + (_2766 + (_2766 << 15u))) + 1013904223u) * 1664525u;
            uint _2776 = _2774 ^ (_2774 >> 11u);
            uint _2779 = _2776 ^ ((_2776 << 7u) & 2636928640u);
            uint _2782 = _2779 ^ ((_2779 << 15u) & 4022730752u);
            uint _2784 = _2782 ^ (_2782 >> 18u);
            _6412 = _6393;
            uint _2801;
            uint _2820;
            float _2826;
            uint _6411 = 0u;
            uint _6503 = _2784;
            for (;;)
            {
                if (!(_6411 < 1u))
                {
                    break;
                }
                uint _2812 = _6503 + (_6503 << 10u);
                uint _2814 = _2812 ^ (_2812 >> 6u);
                uint _2816 = _2814 + (_2814 << 3u);
                uint _2818 = _2816 ^ (_2816 >> 11u);
                _2820 = _2818 + (_2818 << 15u);
                _2826 = uintBitsToFloat((_6503 & 8388607u) | 1065353216u) - 1.0;
                _2801 = _6411 + 1u;
                _6503 = _2820;
                _6412 = _2826;
                _6411 = _2801;
                continue;
            }
            uvec2 _2712 = uvec2(_2702 + ivec2(1, 0));
            uint _2830 = _2712.y;
            uint _2836 = _2830 + (_2830 << 10u);
            uint _2838 = _2836 ^ (_2836 >> 6u);
            uint _2840 = _2838 + (_2838 << 3u);
            uint _2842 = _2840 ^ (_2840 >> 11u);
            uint _2850 = (((_2712.x * 1664525u) + (_2842 + (_2842 << 15u))) + 1013904223u) * 1664525u;
            uint _2852 = _2850 ^ (_2850 >> 11u);
            uint _2855 = _2852 ^ ((_2852 << 7u) & 2636928640u);
            uint _2858 = _2855 ^ ((_2855 << 15u) & 4022730752u);
            uint _2860 = _2858 ^ (_2858 >> 18u);
            _6433 = _6414;
            uint _2877;
            uint _2896;
            float _2902;
            uint _6432 = 0u;
            uint _6502 = _2860;
            for (;;)
            {
                if (!(_6432 < 1u))
                {
                    break;
                }
                uint _2888 = _6502 + (_6502 << 10u);
                uint _2890 = _2888 ^ (_2888 >> 6u);
                uint _2892 = _2890 + (_2890 << 3u);
                uint _2894 = _2892 ^ (_2892 >> 11u);
                _2896 = _2894 + (_2894 << 15u);
                _2902 = uintBitsToFloat((_6502 & 8388607u) | 1065353216u) - 1.0;
                _2877 = _6432 + 1u;
                _6502 = _2896;
                _6433 = _2902;
                _6432 = _2877;
                continue;
            }
            uvec2 _2719 = uvec2(_2702 + ivec2(0, 1));
            uint _2906 = _2719.y;
            uint _2912 = _2906 + (_2906 << 10u);
            uint _2914 = _2912 ^ (_2912 >> 6u);
            uint _2916 = _2914 + (_2914 << 3u);
            uint _2918 = _2916 ^ (_2916 >> 11u);
            uint _2926 = (((_2719.x * 1664525u) + (_2918 + (_2918 << 15u))) + 1013904223u) * 1664525u;
            uint _2928 = _2926 ^ (_2926 >> 11u);
            uint _2931 = _2928 ^ ((_2928 << 7u) & 2636928640u);
            uint _2934 = _2931 ^ ((_2931 << 15u) & 4022730752u);
            uint _2936 = _2934 ^ (_2934 >> 18u);
            _6455 = _6436;
            uint _2953;
            uint _2972;
            float _2978;
            uint _6454 = 0u;
            uint _6501 = _2936;
            for (;;)
            {
                if (!(_6454 < 1u))
                {
                    break;
                }
                uint _2964 = _6501 + (_6501 << 10u);
                uint _2966 = _2964 ^ (_2964 >> 6u);
                uint _2968 = _2966 + (_2966 << 3u);
                uint _2970 = _2968 ^ (_2968 >> 11u);
                _2972 = _2970 + (_2970 << 15u);
                _2978 = uintBitsToFloat((_6501 & 8388607u) | 1065353216u) - 1.0;
                _2953 = _6454 + 1u;
                _6501 = _2972;
                _6455 = _2978;
                _6454 = _2953;
                continue;
            }
            uvec2 _2727 = uvec2(_2702 + ivec2(1));
            uint _2982 = _2727.y;
            uint _2988 = _2982 + (_2982 << 10u);
            uint _2990 = _2988 ^ (_2988 >> 6u);
            uint _2992 = _2990 + (_2990 << 3u);
            uint _2994 = _2992 ^ (_2992 >> 11u);
            uint _3002 = (((_2727.x * 1664525u) + (_2994 + (_2994 << 15u))) + 1013904223u) * 1664525u;
            uint _3004 = _3002 ^ (_3002 >> 11u);
            uint _3007 = _3004 ^ ((_3004 << 7u) & 2636928640u);
            uint _3010 = _3007 ^ ((_3007 << 15u) & 4022730752u);
            uint _3012 = _3010 ^ (_3010 >> 18u);
            _6478 = _6459;
            uint _3029;
            uint _3048;
            float _3054;
            uint _6477 = 0u;
            uint _6500 = _3012;
            for (;;)
            {
                if (!(_6477 < 1u))
                {
                    break;
                }
                uint _3040 = _6500 + (_6500 << 10u);
                uint _3042 = _3040 ^ (_3040 >> 6u);
                uint _3044 = _3042 + (_3042 << 3u);
                uint _3046 = _3044 ^ (_3044 >> 11u);
                _3048 = _3046 + (_3046 << 15u);
                _3054 = uintBitsToFloat((_6500 & 8388607u) | 1065353216u) - 1.0;
                _3029 = _6477 + 1u;
                _6500 = _3048;
                _6478 = _3054;
                _6477 = _3029;
                continue;
            }
            vec2 _3060 = (_2703 * _2703) * (vec2(3.0) - (vec2(2.0) * _2703));
            float _2735 = _3060.x;
            float _2736 = 1.0 - _2735;
            float _2738 = _3060.y;
            _2669 = _5696 + (_6487 * ((-1.0) + (2.0 * ((((1.0 - _2738) * ((_6412 * _2736) + (_6433 * _2735))) + ((_6455 * _2736) * _2738)) + ((_6478 * _2735) * _2738)))));
            _2671 = _6487 * 0.550000011920928955078125;
            _2674 = (_6392 * 1.89999997615814208984375) * mat2(vec2(0.800000011920928955078125, -0.60000002384185791015625), vec2(0.60000002384185791015625, 0.800000011920928955078125));
            _2678 = _5695 + 1;
            _6487 = _2671;
            _6459 = _6478;
            _6436 = _6455;
            _6414 = _6433;
            _6393 = _6412;
            _6392 = _2674;
            _5696 = _2669;
            _5695 = _2678;
            continue;
        }
        float _5698;
        vec2 _6276;
        _6276 = ((_819 * 0.5) + vec2(0.5)) + _217;
        _5698 = 0.0;
        float _3083;
        float _3085;
        vec2 _3088;
        int _3092;
        float _6297;
        float _6319;
        float _6342;
        float _6366;
        int _5697 = 0;
        float _6277;
        float _6299;
        float _6322;
        float _6346;
        float _6375 = 0.5;
        for (;;)
        {
            if (!(_5697 < 5))
            {
                break;
            }
            ivec2 _3116 = ivec2(floor(_6276));
            vec2 _3117 = fract(_6276);
            uvec2 _3118 = uvec2(_3116);
            uint _3168 = _3118.y;
            uint _3174 = _3168 + (_3168 << 10u);
            uint _3176 = _3174 ^ (_3174 >> 6u);
            uint _3178 = _3176 + (_3176 << 3u);
            uint _3180 = _3178 ^ (_3178 >> 11u);
            uint _3188 = (((_3118.x * 1664525u) + (_3180 + (_3180 << 15u))) + 1013904223u) * 1664525u;
            uint _3190 = _3188 ^ (_3188 >> 11u);
            uint _3193 = _3190 ^ ((_3190 << 7u) & 2636928640u);
            uint _3196 = _3193 ^ ((_3193 << 15u) & 4022730752u);
            uint _3198 = _3196 ^ (_3196 >> 18u);
            _6297 = _6277;
            uint _3215;
            uint _3234;
            float _3240;
            uint _6296 = 0u;
            uint _6391 = _3198;
            for (;;)
            {
                if (!(_6296 < 1u))
                {
                    break;
                }
                uint _3226 = _6391 + (_6391 << 10u);
                uint _3228 = _3226 ^ (_3226 >> 6u);
                uint _3230 = _3228 + (_3228 << 3u);
                uint _3232 = _3230 ^ (_3230 >> 11u);
                _3234 = _3232 + (_3232 << 15u);
                _3240 = uintBitsToFloat((_6391 & 8388607u) | 1065353216u) - 1.0;
                _3215 = _6296 + 1u;
                _6391 = _3234;
                _6297 = _3240;
                _6296 = _3215;
                continue;
            }
            uvec2 _3126 = uvec2(_3116 + ivec2(1, 0));
            uint _3244 = _3126.y;
            uint _3250 = _3244 + (_3244 << 10u);
            uint _3252 = _3250 ^ (_3250 >> 6u);
            uint _3254 = _3252 + (_3252 << 3u);
            uint _3256 = _3254 ^ (_3254 >> 11u);
            uint _3264 = (((_3126.x * 1664525u) + (_3256 + (_3256 << 15u))) + 1013904223u) * 1664525u;
            uint _3266 = _3264 ^ (_3264 >> 11u);
            uint _3269 = _3266 ^ ((_3266 << 7u) & 2636928640u);
            uint _3272 = _3269 ^ ((_3269 << 15u) & 4022730752u);
            uint _3274 = _3272 ^ (_3272 >> 18u);
            _6319 = _6299;
            uint _3291;
            uint _3310;
            float _3316;
            uint _6318 = 0u;
            uint _6390 = _3274;
            for (;;)
            {
                if (!(_6318 < 1u))
                {
                    break;
                }
                uint _3302 = _6390 + (_6390 << 10u);
                uint _3304 = _3302 ^ (_3302 >> 6u);
                uint _3306 = _3304 + (_3304 << 3u);
                uint _3308 = _3306 ^ (_3306 >> 11u);
                _3310 = _3308 + (_3308 << 15u);
                _3316 = uintBitsToFloat((_6390 & 8388607u) | 1065353216u) - 1.0;
                _3291 = _6318 + 1u;
                _6390 = _3310;
                _6319 = _3316;
                _6318 = _3291;
                continue;
            }
            uvec2 _3133 = uvec2(_3116 + ivec2(0, 1));
            uint _3320 = _3133.y;
            uint _3326 = _3320 + (_3320 << 10u);
            uint _3328 = _3326 ^ (_3326 >> 6u);
            uint _3330 = _3328 + (_3328 << 3u);
            uint _3332 = _3330 ^ (_3330 >> 11u);
            uint _3340 = (((_3133.x * 1664525u) + (_3332 + (_3332 << 15u))) + 1013904223u) * 1664525u;
            uint _3342 = _3340 ^ (_3340 >> 11u);
            uint _3345 = _3342 ^ ((_3342 << 7u) & 2636928640u);
            uint _3348 = _3345 ^ ((_3345 << 15u) & 4022730752u);
            uint _3350 = _3348 ^ (_3348 >> 18u);
            _6342 = _6322;
            uint _3367;
            uint _3386;
            float _3392;
            uint _6341 = 0u;
            uint _6389 = _3350;
            for (;;)
            {
                if (!(_6341 < 1u))
                {
                    break;
                }
                uint _3378 = _6389 + (_6389 << 10u);
                uint _3380 = _3378 ^ (_3378 >> 6u);
                uint _3382 = _3380 + (_3380 << 3u);
                uint _3384 = _3382 ^ (_3382 >> 11u);
                _3386 = _3384 + (_3384 << 15u);
                _3392 = uintBitsToFloat((_6389 & 8388607u) | 1065353216u) - 1.0;
                _3367 = _6341 + 1u;
                _6389 = _3386;
                _6342 = _3392;
                _6341 = _3367;
                continue;
            }
            uvec2 _3141 = uvec2(_3116 + ivec2(1));
            uint _3396 = _3141.y;
            uint _3402 = _3396 + (_3396 << 10u);
            uint _3404 = _3402 ^ (_3402 >> 6u);
            uint _3406 = _3404 + (_3404 << 3u);
            uint _3408 = _3406 ^ (_3406 >> 11u);
            uint _3416 = (((_3141.x * 1664525u) + (_3408 + (_3408 << 15u))) + 1013904223u) * 1664525u;
            uint _3418 = _3416 ^ (_3416 >> 11u);
            uint _3421 = _3418 ^ ((_3418 << 7u) & 2636928640u);
            uint _3424 = _3421 ^ ((_3421 << 15u) & 4022730752u);
            uint _3426 = _3424 ^ (_3424 >> 18u);
            _6366 = _6346;
            uint _3443;
            uint _3462;
            float _3468;
            uint _6365 = 0u;
            uint _6388 = _3426;
            for (;;)
            {
                if (!(_6365 < 1u))
                {
                    break;
                }
                uint _3454 = _6388 + (_6388 << 10u);
                uint _3456 = _3454 ^ (_3454 >> 6u);
                uint _3458 = _3456 + (_3456 << 3u);
                uint _3460 = _3458 ^ (_3458 >> 11u);
                _3462 = _3460 + (_3460 << 15u);
                _3468 = uintBitsToFloat((_6388 & 8388607u) | 1065353216u) - 1.0;
                _3443 = _6365 + 1u;
                _6388 = _3462;
                _6366 = _3468;
                _6365 = _3443;
                continue;
            }
            vec2 _3474 = (_3117 * _3117) * (vec2(3.0) - (vec2(2.0) * _3117));
            float _3149 = _3474.x;
            float _3150 = 1.0 - _3149;
            float _3152 = _3474.y;
            _3083 = _5698 + (_6375 * ((-1.0) + (2.0 * ((((1.0 - _3152) * ((_6297 * _3150) + (_6319 * _3149))) + ((_6342 * _3150) * _3152)) + ((_6366 * _3149) * _3152)))));
            _3085 = _6375 * 0.550000011920928955078125;
            _3088 = (_6276 * 1.89999997615814208984375) * mat2(vec2(0.800000011920928955078125, -0.60000002384185791015625), vec2(0.60000002384185791015625, 0.800000011920928955078125));
            _3092 = _5697 + 1;
            _6375 = _3085;
            _6346 = _6366;
            _6322 = _6342;
            _6299 = _6319;
            _6277 = _6297;
            _6276 = _3088;
            _5698 = _3083;
            _5697 = _3092;
            continue;
        }
        float _2606 = _1219 * (mix(0.300000011920928955078125, 1.0, _5696) * vs_out_erosion_strength);
        float _2607 = (_1202 + _5698) + _2606;
        float _5701;
        if (_1222)
        {
            float _5700;
            vec2 _6156;
            _6156 = ((vec2(material_data_nani_instance_data._member0[vs_out_instance_index].wall_length - _819.x, _819.y) * 0.5) + vec2(0.5)) + _217;
            _5700 = 0.0;
            float _3497;
            float _3499;
            vec2 _3502;
            int _3506;
            float _6178;
            float _6201;
            float _6225;
            float _6250;
            int _5699 = 0;
            float _6157;
            float _6180;
            float _6204;
            float _6229;
            float _6259 = 0.5;
            for (;;)
            {
                if (!(_5699 < 5))
                {
                    break;
                }
                ivec2 _3530 = ivec2(floor(_6156));
                vec2 _3531 = fract(_6156);
                uvec2 _3532 = uvec2(_3530);
                uint _3582 = _3532.y;
                uint _3588 = _3582 + (_3582 << 10u);
                uint _3590 = _3588 ^ (_3588 >> 6u);
                uint _3592 = _3590 + (_3590 << 3u);
                uint _3594 = _3592 ^ (_3592 >> 11u);
                uint _3602 = (((_3532.x * 1664525u) + (_3594 + (_3594 << 15u))) + 1013904223u) * 1664525u;
                uint _3604 = _3602 ^ (_3602 >> 11u);
                uint _3607 = _3604 ^ ((_3604 << 7u) & 2636928640u);
                uint _3610 = _3607 ^ ((_3607 << 15u) & 4022730752u);
                uint _3612 = _3610 ^ (_3610 >> 18u);
                _6178 = _6157;
                uint _3629;
                uint _3648;
                float _3654;
                uint _6177 = 0u;
                uint _6275 = _3612;
                for (;;)
                {
                    if (!(_6177 < 1u))
                    {
                        break;
                    }
                    uint _3640 = _6275 + (_6275 << 10u);
                    uint _3642 = _3640 ^ (_3640 >> 6u);
                    uint _3644 = _3642 + (_3642 << 3u);
                    uint _3646 = _3644 ^ (_3644 >> 11u);
                    _3648 = _3646 + (_3646 << 15u);
                    _3654 = uintBitsToFloat((_6275 & 8388607u) | 1065353216u) - 1.0;
                    _3629 = _6177 + 1u;
                    _6275 = _3648;
                    _6178 = _3654;
                    _6177 = _3629;
                    continue;
                }
                uvec2 _3540 = uvec2(_3530 + ivec2(1, 0));
                uint _3658 = _3540.y;
                uint _3664 = _3658 + (_3658 << 10u);
                uint _3666 = _3664 ^ (_3664 >> 6u);
                uint _3668 = _3666 + (_3666 << 3u);
                uint _3670 = _3668 ^ (_3668 >> 11u);
                uint _3678 = (((_3540.x * 1664525u) + (_3670 + (_3670 << 15u))) + 1013904223u) * 1664525u;
                uint _3680 = _3678 ^ (_3678 >> 11u);
                uint _3683 = _3680 ^ ((_3680 << 7u) & 2636928640u);
                uint _3686 = _3683 ^ ((_3683 << 15u) & 4022730752u);
                uint _3688 = _3686 ^ (_3686 >> 18u);
                _6201 = _6180;
                uint _3705;
                uint _3724;
                float _3730;
                uint _6200 = 0u;
                uint _6274 = _3688;
                for (;;)
                {
                    if (!(_6200 < 1u))
                    {
                        break;
                    }
                    uint _3716 = _6274 + (_6274 << 10u);
                    uint _3718 = _3716 ^ (_3716 >> 6u);
                    uint _3720 = _3718 + (_3718 << 3u);
                    uint _3722 = _3720 ^ (_3720 >> 11u);
                    _3724 = _3722 + (_3722 << 15u);
                    _3730 = uintBitsToFloat((_6274 & 8388607u) | 1065353216u) - 1.0;
                    _3705 = _6200 + 1u;
                    _6274 = _3724;
                    _6201 = _3730;
                    _6200 = _3705;
                    continue;
                }
                uvec2 _3547 = uvec2(_3530 + ivec2(0, 1));
                uint _3734 = _3547.y;
                uint _3740 = _3734 + (_3734 << 10u);
                uint _3742 = _3740 ^ (_3740 >> 6u);
                uint _3744 = _3742 + (_3742 << 3u);
                uint _3746 = _3744 ^ (_3744 >> 11u);
                uint _3754 = (((_3547.x * 1664525u) + (_3746 + (_3746 << 15u))) + 1013904223u) * 1664525u;
                uint _3756 = _3754 ^ (_3754 >> 11u);
                uint _3759 = _3756 ^ ((_3756 << 7u) & 2636928640u);
                uint _3762 = _3759 ^ ((_3759 << 15u) & 4022730752u);
                uint _3764 = _3762 ^ (_3762 >> 18u);
                _6225 = _6204;
                uint _3781;
                uint _3800;
                float _3806;
                uint _6224 = 0u;
                uint _6273 = _3764;
                for (;;)
                {
                    if (!(_6224 < 1u))
                    {
                        break;
                    }
                    uint _3792 = _6273 + (_6273 << 10u);
                    uint _3794 = _3792 ^ (_3792 >> 6u);
                    uint _3796 = _3794 + (_3794 << 3u);
                    uint _3798 = _3796 ^ (_3796 >> 11u);
                    _3800 = _3798 + (_3798 << 15u);
                    _3806 = uintBitsToFloat((_6273 & 8388607u) | 1065353216u) - 1.0;
                    _3781 = _6224 + 1u;
                    _6273 = _3800;
                    _6225 = _3806;
                    _6224 = _3781;
                    continue;
                }
                uvec2 _3555 = uvec2(_3530 + ivec2(1));
                uint _3810 = _3555.y;
                uint _3816 = _3810 + (_3810 << 10u);
                uint _3818 = _3816 ^ (_3816 >> 6u);
                uint _3820 = _3818 + (_3818 << 3u);
                uint _3822 = _3820 ^ (_3820 >> 11u);
                uint _3830 = (((_3555.x * 1664525u) + (_3822 + (_3822 << 15u))) + 1013904223u) * 1664525u;
                uint _3832 = _3830 ^ (_3830 >> 11u);
                uint _3835 = _3832 ^ ((_3832 << 7u) & 2636928640u);
                uint _3838 = _3835 ^ ((_3835 << 15u) & 4022730752u);
                uint _3840 = _3838 ^ (_3838 >> 18u);
                _6250 = _6229;
                uint _3857;
                uint _3876;
                float _3882;
                uint _6249 = 0u;
                uint _6272 = _3840;
                for (;;)
                {
                    if (!(_6249 < 1u))
                    {
                        break;
                    }
                    uint _3868 = _6272 + (_6272 << 10u);
                    uint _3870 = _3868 ^ (_3868 >> 6u);
                    uint _3872 = _3870 + (_3870 << 3u);
                    uint _3874 = _3872 ^ (_3872 >> 11u);
                    _3876 = _3874 + (_3874 << 15u);
                    _3882 = uintBitsToFloat((_6272 & 8388607u) | 1065353216u) - 1.0;
                    _3857 = _6249 + 1u;
                    _6272 = _3876;
                    _6250 = _3882;
                    _6249 = _3857;
                    continue;
                }
                vec2 _3888 = (_3531 * _3531) * (vec2(3.0) - (vec2(2.0) * _3531));
                float _3563 = _3888.x;
                float _3564 = 1.0 - _3563;
                float _3566 = _3888.y;
                _3497 = _5700 + (_6259 * ((-1.0) + (2.0 * ((((1.0 - _3566) * ((_6178 * _3564) + (_6201 * _3563))) + ((_6225 * _3564) * _3566)) + ((_6250 * _3563) * _3566)))));
                _3499 = _6259 * 0.550000011920928955078125;
                _3502 = (_6156 * 1.89999997615814208984375) * mat2(vec2(0.800000011920928955078125, -0.60000002384185791015625), vec2(0.60000002384185791015625, 0.800000011920928955078125));
                _3506 = _5699 + 1;
                _6259 = _3499;
                _6229 = _6250;
                _6204 = _6225;
                _6180 = _6201;
                _6157 = _6178;
                _6156 = _3502;
                _5700 = _3497;
                _5699 = _3506;
                continue;
            }
            _5701 = mix(_2607, (_1202 + _5700) + _2606, _7346);
        }
        else
        {
            _5701 = _2607;
        }
        float _2630 = min((smoothstep(0.0, 4.0, _819.y) * 1.5) - 0.20000000298023223876953125, 0.89999997615814208984375);
        float _2631 = _2630 + 0.100000001490116119384765625;
        float _2633 = _5701 * 2.0;
        vec2 _829 = vs_out_frag_curve_uv + vec2(0.0, 0.00999999977648258209228515625);
        float _5707;
        vec2 _6028;
        _6028 = (vs_out_frag_curve_uv + vec2(23.3999996185302734375, 23.409999847412109375)) + _217;
        _5707 = 0.0;
        float _3976;
        float _3978;
        vec2 _3981;
        int _3985;
        float _6052;
        float _6077;
        float _6103;
        float _6130;
        int _5706 = 0;
        float _6029;
        float _6054;
        float _6080;
        float _6107;
        float _6139 = 0.5;
        for (;;)
        {
            if (!(_5706 < 3))
            {
                break;
            }
            ivec2 _4009 = ivec2(floor(_6028));
            vec2 _4010 = fract(_6028);
            uvec2 _4011 = uvec2(_4009);
            uint _4061 = _4011.y;
            uint _4067 = _4061 + (_4061 << 10u);
            uint _4069 = _4067 ^ (_4067 >> 6u);
            uint _4071 = _4069 + (_4069 << 3u);
            uint _4073 = _4071 ^ (_4071 >> 11u);
            uint _4081 = (((_4011.x * 1664525u) + (_4073 + (_4073 << 15u))) + 1013904223u) * 1664525u;
            uint _4083 = _4081 ^ (_4081 >> 11u);
            uint _4086 = _4083 ^ ((_4083 << 7u) & 2636928640u);
            uint _4089 = _4086 ^ ((_4086 << 15u) & 4022730752u);
            uint _4091 = _4089 ^ (_4089 >> 18u);
            _6052 = _6029;
            uint _4108;
            uint _4127;
            float _4133;
            uint _6051 = 0u;
            uint _6155 = _4091;
            for (;;)
            {
                if (!(_6051 < 1u))
                {
                    break;
                }
                uint _4119 = _6155 + (_6155 << 10u);
                uint _4121 = _4119 ^ (_4119 >> 6u);
                uint _4123 = _4121 + (_4121 << 3u);
                uint _4125 = _4123 ^ (_4123 >> 11u);
                _4127 = _4125 + (_4125 << 15u);
                _4133 = uintBitsToFloat((_6155 & 8388607u) | 1065353216u) - 1.0;
                _4108 = _6051 + 1u;
                _6155 = _4127;
                _6052 = _4133;
                _6051 = _4108;
                continue;
            }
            uvec2 _4019 = uvec2(_4009 + ivec2(1, 0));
            uint _4137 = _4019.y;
            uint _4143 = _4137 + (_4137 << 10u);
            uint _4145 = _4143 ^ (_4143 >> 6u);
            uint _4147 = _4145 + (_4145 << 3u);
            uint _4149 = _4147 ^ (_4147 >> 11u);
            uint _4157 = (((_4019.x * 1664525u) + (_4149 + (_4149 << 15u))) + 1013904223u) * 1664525u;
            uint _4159 = _4157 ^ (_4157 >> 11u);
            uint _4162 = _4159 ^ ((_4159 << 7u) & 2636928640u);
            uint _4165 = _4162 ^ ((_4162 << 15u) & 4022730752u);
            uint _4167 = _4165 ^ (_4165 >> 18u);
            _6077 = _6054;
            uint _4184;
            uint _4203;
            float _4209;
            uint _6076 = 0u;
            uint _6154 = _4167;
            for (;;)
            {
                if (!(_6076 < 1u))
                {
                    break;
                }
                uint _4195 = _6154 + (_6154 << 10u);
                uint _4197 = _4195 ^ (_4195 >> 6u);
                uint _4199 = _4197 + (_4197 << 3u);
                uint _4201 = _4199 ^ (_4199 >> 11u);
                _4203 = _4201 + (_4201 << 15u);
                _4209 = uintBitsToFloat((_6154 & 8388607u) | 1065353216u) - 1.0;
                _4184 = _6076 + 1u;
                _6154 = _4203;
                _6077 = _4209;
                _6076 = _4184;
                continue;
            }
            uvec2 _4026 = uvec2(_4009 + ivec2(0, 1));
            uint _4213 = _4026.y;
            uint _4219 = _4213 + (_4213 << 10u);
            uint _4221 = _4219 ^ (_4219 >> 6u);
            uint _4223 = _4221 + (_4221 << 3u);
            uint _4225 = _4223 ^ (_4223 >> 11u);
            uint _4233 = (((_4026.x * 1664525u) + (_4225 + (_4225 << 15u))) + 1013904223u) * 1664525u;
            uint _4235 = _4233 ^ (_4233 >> 11u);
            uint _4238 = _4235 ^ ((_4235 << 7u) & 2636928640u);
            uint _4241 = _4238 ^ ((_4238 << 15u) & 4022730752u);
            uint _4243 = _4241 ^ (_4241 >> 18u);
            _6103 = _6080;
            uint _4260;
            uint _4279;
            float _4285;
            uint _6102 = 0u;
            uint _6153 = _4243;
            for (;;)
            {
                if (!(_6102 < 1u))
                {
                    break;
                }
                uint _4271 = _6153 + (_6153 << 10u);
                uint _4273 = _4271 ^ (_4271 >> 6u);
                uint _4275 = _4273 + (_4273 << 3u);
                uint _4277 = _4275 ^ (_4275 >> 11u);
                _4279 = _4277 + (_4277 << 15u);
                _4285 = uintBitsToFloat((_6153 & 8388607u) | 1065353216u) - 1.0;
                _4260 = _6102 + 1u;
                _6153 = _4279;
                _6103 = _4285;
                _6102 = _4260;
                continue;
            }
            uvec2 _4034 = uvec2(_4009 + ivec2(1));
            uint _4289 = _4034.y;
            uint _4295 = _4289 + (_4289 << 10u);
            uint _4297 = _4295 ^ (_4295 >> 6u);
            uint _4299 = _4297 + (_4297 << 3u);
            uint _4301 = _4299 ^ (_4299 >> 11u);
            uint _4309 = (((_4034.x * 1664525u) + (_4301 + (_4301 << 15u))) + 1013904223u) * 1664525u;
            uint _4311 = _4309 ^ (_4309 >> 11u);
            uint _4314 = _4311 ^ ((_4311 << 7u) & 2636928640u);
            uint _4317 = _4314 ^ ((_4314 << 15u) & 4022730752u);
            uint _4319 = _4317 ^ (_4317 >> 18u);
            _6130 = _6107;
            uint _4336;
            uint _4355;
            float _4361;
            uint _6129 = 0u;
            uint _6152 = _4319;
            for (;;)
            {
                if (!(_6129 < 1u))
                {
                    break;
                }
                uint _4347 = _6152 + (_6152 << 10u);
                uint _4349 = _4347 ^ (_4347 >> 6u);
                uint _4351 = _4349 + (_4349 << 3u);
                uint _4353 = _4351 ^ (_4351 >> 11u);
                _4355 = _4353 + (_4353 << 15u);
                _4361 = uintBitsToFloat((_6152 & 8388607u) | 1065353216u) - 1.0;
                _4336 = _6129 + 1u;
                _6152 = _4355;
                _6130 = _4361;
                _6129 = _4336;
                continue;
            }
            vec2 _4367 = (_4010 * _4010) * (vec2(3.0) - (vec2(2.0) * _4010));
            float _4042 = _4367.x;
            float _4043 = 1.0 - _4042;
            float _4045 = _4367.y;
            _3976 = _5707 + (_6139 * ((-1.0) + (2.0 * ((((1.0 - _4045) * ((_6052 * _4043) + (_6077 * _4042))) + ((_6103 * _4043) * _4045)) + ((_6130 * _4042) * _4045)))));
            _3978 = _6139 * 0.550000011920928955078125;
            _3981 = (_6028 * 1.89999997615814208984375) * mat2(vec2(0.800000011920928955078125, -0.60000002384185791015625), vec2(0.60000002384185791015625, 0.800000011920928955078125));
            _3985 = _5706 + 1;
            _6139 = _3978;
            _6107 = _6130;
            _6080 = _6103;
            _6054 = _6077;
            _6029 = _6052;
            _6028 = _3981;
            _5707 = _3976;
            _5706 = _3985;
            continue;
        }
        float _5709;
        vec2 _5896;
        _5896 = ((_829 * 0.5) + vec2(0.5)) + _217;
        _5709 = 0.0;
        float _4390;
        float _4392;
        vec2 _4395;
        int _4399;
        float _5921;
        float _5947;
        float _5974;
        float _6002;
        int _5708 = 0;
        float _5897;
        float _5923;
        float _5950;
        float _5978;
        float _6011 = 0.5;
        for (;;)
        {
            if (!(_5708 < 5))
            {
                break;
            }
            ivec2 _4423 = ivec2(floor(_5896));
            vec2 _4424 = fract(_5896);
            uvec2 _4425 = uvec2(_4423);
            uint _4475 = _4425.y;
            uint _4481 = _4475 + (_4475 << 10u);
            uint _4483 = _4481 ^ (_4481 >> 6u);
            uint _4485 = _4483 + (_4483 << 3u);
            uint _4487 = _4485 ^ (_4485 >> 11u);
            uint _4495 = (((_4425.x * 1664525u) + (_4487 + (_4487 << 15u))) + 1013904223u) * 1664525u;
            uint _4497 = _4495 ^ (_4495 >> 11u);
            uint _4500 = _4497 ^ ((_4497 << 7u) & 2636928640u);
            uint _4503 = _4500 ^ ((_4500 << 15u) & 4022730752u);
            uint _4505 = _4503 ^ (_4503 >> 18u);
            _5921 = _5897;
            uint _4522;
            uint _4541;
            float _4547;
            uint _5920 = 0u;
            uint _6027 = _4505;
            for (;;)
            {
                if (!(_5920 < 1u))
                {
                    break;
                }
                uint _4533 = _6027 + (_6027 << 10u);
                uint _4535 = _4533 ^ (_4533 >> 6u);
                uint _4537 = _4535 + (_4535 << 3u);
                uint _4539 = _4537 ^ (_4537 >> 11u);
                _4541 = _4539 + (_4539 << 15u);
                _4547 = uintBitsToFloat((_6027 & 8388607u) | 1065353216u) - 1.0;
                _4522 = _5920 + 1u;
                _6027 = _4541;
                _5921 = _4547;
                _5920 = _4522;
                continue;
            }
            uvec2 _4433 = uvec2(_4423 + ivec2(1, 0));
            uint _4551 = _4433.y;
            uint _4557 = _4551 + (_4551 << 10u);
            uint _4559 = _4557 ^ (_4557 >> 6u);
            uint _4561 = _4559 + (_4559 << 3u);
            uint _4563 = _4561 ^ (_4561 >> 11u);
            uint _4571 = (((_4433.x * 1664525u) + (_4563 + (_4563 << 15u))) + 1013904223u) * 1664525u;
            uint _4573 = _4571 ^ (_4571 >> 11u);
            uint _4576 = _4573 ^ ((_4573 << 7u) & 2636928640u);
            uint _4579 = _4576 ^ ((_4576 << 15u) & 4022730752u);
            uint _4581 = _4579 ^ (_4579 >> 18u);
            _5947 = _5923;
            uint _4598;
            uint _4617;
            float _4623;
            uint _5946 = 0u;
            uint _6026 = _4581;
            for (;;)
            {
                if (!(_5946 < 1u))
                {
                    break;
                }
                uint _4609 = _6026 + (_6026 << 10u);
                uint _4611 = _4609 ^ (_4609 >> 6u);
                uint _4613 = _4611 + (_4611 << 3u);
                uint _4615 = _4613 ^ (_4613 >> 11u);
                _4617 = _4615 + (_4615 << 15u);
                _4623 = uintBitsToFloat((_6026 & 8388607u) | 1065353216u) - 1.0;
                _4598 = _5946 + 1u;
                _6026 = _4617;
                _5947 = _4623;
                _5946 = _4598;
                continue;
            }
            uvec2 _4440 = uvec2(_4423 + ivec2(0, 1));
            uint _4627 = _4440.y;
            uint _4633 = _4627 + (_4627 << 10u);
            uint _4635 = _4633 ^ (_4633 >> 6u);
            uint _4637 = _4635 + (_4635 << 3u);
            uint _4639 = _4637 ^ (_4637 >> 11u);
            uint _4647 = (((_4440.x * 1664525u) + (_4639 + (_4639 << 15u))) + 1013904223u) * 1664525u;
            uint _4649 = _4647 ^ (_4647 >> 11u);
            uint _4652 = _4649 ^ ((_4649 << 7u) & 2636928640u);
            uint _4655 = _4652 ^ ((_4652 << 15u) & 4022730752u);
            uint _4657 = _4655 ^ (_4655 >> 18u);
            _5974 = _5950;
            uint _4674;
            uint _4693;
            float _4699;
            uint _5973 = 0u;
            uint _6025 = _4657;
            for (;;)
            {
                if (!(_5973 < 1u))
                {
                    break;
                }
                uint _4685 = _6025 + (_6025 << 10u);
                uint _4687 = _4685 ^ (_4685 >> 6u);
                uint _4689 = _4687 + (_4687 << 3u);
                uint _4691 = _4689 ^ (_4689 >> 11u);
                _4693 = _4691 + (_4691 << 15u);
                _4699 = uintBitsToFloat((_6025 & 8388607u) | 1065353216u) - 1.0;
                _4674 = _5973 + 1u;
                _6025 = _4693;
                _5974 = _4699;
                _5973 = _4674;
                continue;
            }
            uvec2 _4448 = uvec2(_4423 + ivec2(1));
            uint _4703 = _4448.y;
            uint _4709 = _4703 + (_4703 << 10u);
            uint _4711 = _4709 ^ (_4709 >> 6u);
            uint _4713 = _4711 + (_4711 << 3u);
            uint _4715 = _4713 ^ (_4713 >> 11u);
            uint _4723 = (((_4448.x * 1664525u) + (_4715 + (_4715 << 15u))) + 1013904223u) * 1664525u;
            uint _4725 = _4723 ^ (_4723 >> 11u);
            uint _4728 = _4725 ^ ((_4725 << 7u) & 2636928640u);
            uint _4731 = _4728 ^ ((_4728 << 15u) & 4022730752u);
            uint _4733 = _4731 ^ (_4731 >> 18u);
            _6002 = _5978;
            uint _4750;
            uint _4769;
            float _4775;
            uint _6001 = 0u;
            uint _6024 = _4733;
            for (;;)
            {
                if (!(_6001 < 1u))
                {
                    break;
                }
                uint _4761 = _6024 + (_6024 << 10u);
                uint _4763 = _4761 ^ (_4761 >> 6u);
                uint _4765 = _4763 + (_4763 << 3u);
                uint _4767 = _4765 ^ (_4765 >> 11u);
                _4769 = _4767 + (_4767 << 15u);
                _4775 = uintBitsToFloat((_6024 & 8388607u) | 1065353216u) - 1.0;
                _4750 = _6001 + 1u;
                _6024 = _4769;
                _6002 = _4775;
                _6001 = _4750;
                continue;
            }
            vec2 _4781 = (_4424 * _4424) * (vec2(3.0) - (vec2(2.0) * _4424));
            float _4456 = _4781.x;
            float _4457 = 1.0 - _4456;
            float _4459 = _4781.y;
            _4390 = _5709 + (_6011 * ((-1.0) + (2.0 * ((((1.0 - _4459) * ((_5921 * _4457) + (_5947 * _4456))) + ((_5974 * _4457) * _4459)) + ((_6002 * _4456) * _4459)))));
            _4392 = _6011 * 0.550000011920928955078125;
            _4395 = (_5896 * 1.89999997615814208984375) * mat2(vec2(0.800000011920928955078125, -0.60000002384185791015625), vec2(0.60000002384185791015625, 0.800000011920928955078125));
            _4399 = _5708 + 1;
            _6011 = _4392;
            _5978 = _6002;
            _5950 = _5974;
            _5923 = _5947;
            _5897 = _5921;
            _5896 = _4395;
            _5709 = _4390;
            _5708 = _4399;
            continue;
        }
        float _3913 = _1219 * (mix(0.300000011920928955078125, 1.0, _5707) * vs_out_erosion_strength);
        float _3914 = (_1202 + _5709) + _3913;
        float _5712;
        if (_1222)
        {
            float _5711;
            vec2 _5759;
            _5759 = ((vec2(material_data_nani_instance_data._member0[vs_out_instance_index].wall_length - _829.x, _829.y) * 0.5) + vec2(0.5)) + _217;
            _5711 = 0.0;
            float _4804;
            float _4806;
            vec2 _4809;
            int _4813;
            float _5786;
            float _5813;
            float _5841;
            float _5870;
            int _5710 = 0;
            float _5760;
            float _5788;
            float _5816;
            float _5845;
            float _5879 = 0.5;
            for (;;)
            {
                if (!(_5710 < 5))
                {
                    break;
                }
                ivec2 _4837 = ivec2(floor(_5759));
                vec2 _4838 = fract(_5759);
                uvec2 _4839 = uvec2(_4837);
                uint _4889 = _4839.y;
                uint _4895 = _4889 + (_4889 << 10u);
                uint _4897 = _4895 ^ (_4895 >> 6u);
                uint _4899 = _4897 + (_4897 << 3u);
                uint _4901 = _4899 ^ (_4899 >> 11u);
                uint _4909 = (((_4839.x * 1664525u) + (_4901 + (_4901 << 15u))) + 1013904223u) * 1664525u;
                uint _4911 = _4909 ^ (_4909 >> 11u);
                uint _4914 = _4911 ^ ((_4911 << 7u) & 2636928640u);
                uint _4917 = _4914 ^ ((_4914 << 15u) & 4022730752u);
                uint _4919 = _4917 ^ (_4917 >> 18u);
                _5786 = _5760;
                uint _4936;
                uint _4955;
                float _4961;
                uint _5785 = 0u;
                uint _5895 = _4919;
                for (;;)
                {
                    if (!(_5785 < 1u))
                    {
                        break;
                    }
                    uint _4947 = _5895 + (_5895 << 10u);
                    uint _4949 = _4947 ^ (_4947 >> 6u);
                    uint _4951 = _4949 + (_4949 << 3u);
                    uint _4953 = _4951 ^ (_4951 >> 11u);
                    _4955 = _4953 + (_4953 << 15u);
                    _4961 = uintBitsToFloat((_5895 & 8388607u) | 1065353216u) - 1.0;
                    _4936 = _5785 + 1u;
                    _5895 = _4955;
                    _5786 = _4961;
                    _5785 = _4936;
                    continue;
                }
                uvec2 _4847 = uvec2(_4837 + ivec2(1, 0));
                uint _4965 = _4847.y;
                uint _4971 = _4965 + (_4965 << 10u);
                uint _4973 = _4971 ^ (_4971 >> 6u);
                uint _4975 = _4973 + (_4973 << 3u);
                uint _4977 = _4975 ^ (_4975 >> 11u);
                uint _4985 = (((_4847.x * 1664525u) + (_4977 + (_4977 << 15u))) + 1013904223u) * 1664525u;
                uint _4987 = _4985 ^ (_4985 >> 11u);
                uint _4990 = _4987 ^ ((_4987 << 7u) & 2636928640u);
                uint _4993 = _4990 ^ ((_4990 << 15u) & 4022730752u);
                uint _4995 = _4993 ^ (_4993 >> 18u);
                _5813 = _5788;
                uint _5012;
                uint _5031;
                float _5037;
                uint _5812 = 0u;
                uint _5894 = _4995;
                for (;;)
                {
                    if (!(_5812 < 1u))
                    {
                        break;
                    }
                    uint _5023 = _5894 + (_5894 << 10u);
                    uint _5025 = _5023 ^ (_5023 >> 6u);
                    uint _5027 = _5025 + (_5025 << 3u);
                    uint _5029 = _5027 ^ (_5027 >> 11u);
                    _5031 = _5029 + (_5029 << 15u);
                    _5037 = uintBitsToFloat((_5894 & 8388607u) | 1065353216u) - 1.0;
                    _5012 = _5812 + 1u;
                    _5894 = _5031;
                    _5813 = _5037;
                    _5812 = _5012;
                    continue;
                }
                uvec2 _4854 = uvec2(_4837 + ivec2(0, 1));
                uint _5041 = _4854.y;
                uint _5047 = _5041 + (_5041 << 10u);
                uint _5049 = _5047 ^ (_5047 >> 6u);
                uint _5051 = _5049 + (_5049 << 3u);
                uint _5053 = _5051 ^ (_5051 >> 11u);
                uint _5061 = (((_4854.x * 1664525u) + (_5053 + (_5053 << 15u))) + 1013904223u) * 1664525u;
                uint _5063 = _5061 ^ (_5061 >> 11u);
                uint _5066 = _5063 ^ ((_5063 << 7u) & 2636928640u);
                uint _5069 = _5066 ^ ((_5066 << 15u) & 4022730752u);
                uint _5071 = _5069 ^ (_5069 >> 18u);
                _5841 = _5816;
                uint _5088;
                uint _5107;
                float _5113;
                uint _5840 = 0u;
                uint _5893 = _5071;
                for (;;)
                {
                    if (!(_5840 < 1u))
                    {
                        break;
                    }
                    uint _5099 = _5893 + (_5893 << 10u);
                    uint _5101 = _5099 ^ (_5099 >> 6u);
                    uint _5103 = _5101 + (_5101 << 3u);
                    uint _5105 = _5103 ^ (_5103 >> 11u);
                    _5107 = _5105 + (_5105 << 15u);
                    _5113 = uintBitsToFloat((_5893 & 8388607u) | 1065353216u) - 1.0;
                    _5088 = _5840 + 1u;
                    _5893 = _5107;
                    _5841 = _5113;
                    _5840 = _5088;
                    continue;
                }
                uvec2 _4862 = uvec2(_4837 + ivec2(1));
                uint _5117 = _4862.y;
                uint _5123 = _5117 + (_5117 << 10u);
                uint _5125 = _5123 ^ (_5123 >> 6u);
                uint _5127 = _5125 + (_5125 << 3u);
                uint _5129 = _5127 ^ (_5127 >> 11u);
                uint _5137 = (((_4862.x * 1664525u) + (_5129 + (_5129 << 15u))) + 1013904223u) * 1664525u;
                uint _5139 = _5137 ^ (_5137 >> 11u);
                uint _5142 = _5139 ^ ((_5139 << 7u) & 2636928640u);
                uint _5145 = _5142 ^ ((_5142 << 15u) & 4022730752u);
                uint _5147 = _5145 ^ (_5145 >> 18u);
                _5870 = _5845;
                uint _5164;
                uint _5183;
                float _5189;
                uint _5869 = 0u;
                uint _5892 = _5147;
                for (;;)
                {
                    if (!(_5869 < 1u))
                    {
                        break;
                    }
                    uint _5175 = _5892 + (_5892 << 10u);
                    uint _5177 = _5175 ^ (_5175 >> 6u);
                    uint _5179 = _5177 + (_5177 << 3u);
                    uint _5181 = _5179 ^ (_5179 >> 11u);
                    _5183 = _5181 + (_5181 << 15u);
                    _5189 = uintBitsToFloat((_5892 & 8388607u) | 1065353216u) - 1.0;
                    _5164 = _5869 + 1u;
                    _5892 = _5183;
                    _5870 = _5189;
                    _5869 = _5164;
                    continue;
                }
                vec2 _5195 = (_4838 * _4838) * (vec2(3.0) - (vec2(2.0) * _4838));
                float _4870 = _5195.x;
                float _4871 = 1.0 - _4870;
                float _4873 = _5195.y;
                _4804 = _5711 + (_5879 * ((-1.0) + (2.0 * ((((1.0 - _4873) * ((_5786 * _4871) + (_5813 * _4870))) + ((_5841 * _4871) * _4873)) + ((_5870 * _4870) * _4873)))));
                _4806 = _5879 * 0.550000011920928955078125;
                _4809 = (_5759 * 1.89999997615814208984375) * mat2(vec2(0.800000011920928955078125, -0.60000002384185791015625), vec2(0.60000002384185791015625, 0.800000011920928955078125));
                _4813 = _5710 + 1;
                _5879 = _4806;
                _5845 = _5870;
                _5816 = _5841;
                _5788 = _5813;
                _5760 = _5786;
                _5759 = _4809;
                _5711 = _4804;
                _5710 = _4813;
                continue;
            }
            _5712 = mix(_3914, (_1202 + _5711) + _3913, _7346);
        }
        else
        {
            _5712 = _3914;
        }
        float _3937 = min((smoothstep(0.0, 4.0, _829.y) * 1.5) - 0.20000000298023223876953125, 0.89999997615814208984375);
        float _3938 = _3937 + 0.100000001490116119384765625;
        float _3940 = _5712 * 2.0;
        _5713 = mix(_814, normalize((vs_out_tangent * (clamp(smoothstep(_2630 - 0.100000001490116119384765625, _2631, _2633) - smoothstep(_2630, _2631, _2633), 0.0, 1.0) - _1252)) + (vs_out_bitangent * (-(clamp(smoothstep(_3937 - 0.100000001490116119384765625, _3938, _3940) - smoothstep(_3937, _3938, _3940), 0.0, 1.0) - _1252)))), vec3(_1248 * 0.300000011920928955078125));
    }
    else
    {
        _5713 = _814;
    }
    bool _5733;
    vec3 _5749;
    if (_5654 == 1u)
    {
        _5749 = mix(_772, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.5));
        _5733 = true;
    }
    else
    {
        bool _5229 = _5654 == 2u;
        vec3 _5750;
        if (_5229)
        {
            _5750 = mix(_772, vec3(0.5), vec3(0.100000001490116119384765625));
        }
        else
        {
            _5750 = _772;
        }
        _5749 = _5750;
        _5733 = _5229 ? true : false;
    }
    bool _5714;
    if (frame_constants.highlight_bricks_to_delete == 1u)
    {
        _5714 = distance(frame_constants.brush_position.xz, vs_out_frag_position_ws.xz) < ((1.88900005817413330078125 * frame_constants.eraser_size_multiplier) - 0.2700000107288360595703125);
    }
    else
    {
        _5714 = false;
    }
    vec3 _5747;
    if (_5714)
    {
        _5747 = mix(_772, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.800000011920928955078125));
    }
    else
    {
        _5747 = _5749;
    }
    uvec2 _5268;
    vec3 _5279 = (_5713 * 0.5) + vec3(0.5);
    _5268.x = ((uint((clamp(_5279.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_5279.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_5279.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3422552064u;
    vec3 _5387 = sqrt(clamp(_5747, vec3(0.0), vec3(1.0)));
    uint _5402 = (uint((clamp(_5387.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_5387.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_5387.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    _5268.y = _5402;
    _5268.y = _5402 | ((7u | (uint(_5714 ? true : _5733) << 3u)) << 24u);
    entryPointParam_ps_main_gbuffer = _5268;
}

