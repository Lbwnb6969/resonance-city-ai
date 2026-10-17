#version 460

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct SmokeInstanceData_natural
{
    Affine3Packed_natural xform;
    uint smoke_type;
    int seed;
    float thickness;
    uint pad0;
};

float _3904;

layout(set = 6, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 0, std430) readonly buffer material_data_nani_instance_data
{
    SmokeInstanceData_natural _member0[];
} material_data_nani_instance_data_1;

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

layout(location = 0) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 2) out float entryPointParam_vs_main_local_y;

void main()
{
    do
    {
        uint _22 = uint(gl_InstanceIndex);
        uint _47 = uint(gl_VertexIndex - gl_BaseVertex);
        vec2 grid_pos_norm = vec2(float(_47 % 13u), float(_47 / 13u)) * vec2(0.083333335816860198974609375, 0.0199999995529651641845703125);
        float _64 = grid_pos_norm.x * (-6.283185482025146484375);
        float _66 = cos(_64);
        float _69 = sin(_64);
        if (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].thickness < 0.100000001490116119384765625)
        {
            gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
            break;
        }
        float _952 = float(frame_constants.game_time_sec) + frame_constants.game_time_frac;
        vec3 _956 = vec3(_66, grid_pos_norm.y, _69) * vec3(0.0599999986588954925537109375, 15.0, 0.0599999986588954925537109375);
        float _966 = _956.y + ((fract(_952 * 4.33333301544189453125) - 1.0) * 0.300000011920928955078125);
        vec3 _3877 = _956;
        _3877.y = _966;
        mat3x4 _1117 = transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].xform.data.data[11])));
        vec3 _1080 = vec4(vec3(0.0), 1.0) * _1117;
        vec3 _973 = ((_1080 * 2.0) + (_3877 * 2.0)) + (vec3(0.0, -2.0, 0.0) * _952);
        ivec3 _1134 = ivec3(floor(_973));
        vec3 _1135 = fract(_973);
        uvec3 _1136 = uvec3(_1134);
        uint _1250 = _1136.z;
        uint _1256 = _1250 + (_1250 << 10u);
        uint _1258 = _1256 ^ (_1256 >> 6u);
        uint _1260 = _1258 + (_1258 << 3u);
        uint _1262 = _1260 ^ (_1260 >> 11u);
        uint _1270 = (((_1136.y * 1664525u) + (_1262 + (_1262 << 15u))) + 1013904223u) * 1664525u;
        uint _1272 = _1270 ^ (_1270 >> 11u);
        uint _1275 = _1272 ^ ((_1272 << 7u) & 2636928640u);
        uint _1278 = _1275 ^ ((_1275 << 15u) & 4022730752u);
        uint _1286 = (((_1136.x * 1664525u) + (_1278 ^ (_1278 >> 18u))) + 1013904223u) * 1664525u;
        uint _1288 = _1286 ^ (_1286 >> 11u);
        uint _1291 = _1288 ^ ((_1288 << 7u) & 2636928640u);
        uint _1294 = _1291 ^ ((_1291 << 15u) & 4022730752u);
        uint _1296 = _1294 ^ (_1294 >> 18u);
        float _3906;
        _3906 = _3904;
        uint _1313;
        uint _1332;
        float _1338;
        uint _3905 = 0u;
        uint _4311 = _1296;
        for (;;)
        {
            if (!(_3905 < 1u))
            {
                break;
            }
            uint _1324 = _4311 + (_4311 << 10u);
            uint _1326 = _1324 ^ (_1324 >> 6u);
            uint _1328 = _1326 + (_1326 << 3u);
            uint _1330 = _1328 ^ (_1328 >> 11u);
            _1332 = _1330 + (_1330 << 15u);
            _1338 = uintBitsToFloat((_4311 & 8388607u) | 1065353216u) - 1.0;
            _1313 = _3905 + 1u;
            _4311 = _1332;
            _3906 = _1338;
            _3905 = _1313;
            continue;
        }
        uvec3 _1145 = uvec3(_1134 + ivec3(1, 0, 0));
        uint _1348 = _1145.z;
        uint _1354 = _1348 + (_1348 << 10u);
        uint _1356 = _1354 ^ (_1354 >> 6u);
        uint _1358 = _1356 + (_1356 << 3u);
        uint _1360 = _1358 ^ (_1358 >> 11u);
        uint _1368 = (((_1145.y * 1664525u) + (_1360 + (_1360 << 15u))) + 1013904223u) * 1664525u;
        uint _1370 = _1368 ^ (_1368 >> 11u);
        uint _1373 = _1370 ^ ((_1370 << 7u) & 2636928640u);
        uint _1376 = _1373 ^ ((_1373 << 15u) & 4022730752u);
        uint _1384 = (((_1145.x * 1664525u) + (_1376 ^ (_1376 >> 18u))) + 1013904223u) * 1664525u;
        uint _1386 = _1384 ^ (_1384 >> 11u);
        uint _1389 = _1386 ^ ((_1386 << 7u) & 2636928640u);
        uint _1392 = _1389 ^ ((_1389 << 15u) & 4022730752u);
        uint _1394 = _1392 ^ (_1392 >> 18u);
        float _3909;
        _3909 = _3904;
        uint _1411;
        uint _1430;
        float _1436;
        uint _3908 = 0u;
        uint _4310 = _1394;
        for (;;)
        {
            if (!(_3908 < 1u))
            {
                break;
            }
            uint _1422 = _4310 + (_4310 << 10u);
            uint _1424 = _1422 ^ (_1422 >> 6u);
            uint _1426 = _1424 + (_1424 << 3u);
            uint _1428 = _1426 ^ (_1426 >> 11u);
            _1430 = _1428 + (_1428 << 15u);
            _1436 = uintBitsToFloat((_4310 & 8388607u) | 1065353216u) - 1.0;
            _1411 = _3908 + 1u;
            _4310 = _1430;
            _3909 = _1436;
            _3908 = _1411;
            continue;
        }
        uvec3 _1152 = uvec3(_1134 + ivec3(0, 1, 0));
        uint _1446 = _1152.z;
        uint _1452 = _1446 + (_1446 << 10u);
        uint _1454 = _1452 ^ (_1452 >> 6u);
        uint _1456 = _1454 + (_1454 << 3u);
        uint _1458 = _1456 ^ (_1456 >> 11u);
        uint _1466 = (((_1152.y * 1664525u) + (_1458 + (_1458 << 15u))) + 1013904223u) * 1664525u;
        uint _1468 = _1466 ^ (_1466 >> 11u);
        uint _1471 = _1468 ^ ((_1468 << 7u) & 2636928640u);
        uint _1474 = _1471 ^ ((_1471 << 15u) & 4022730752u);
        uint _1482 = (((_1152.x * 1664525u) + (_1474 ^ (_1474 >> 18u))) + 1013904223u) * 1664525u;
        uint _1484 = _1482 ^ (_1482 >> 11u);
        uint _1487 = _1484 ^ ((_1484 << 7u) & 2636928640u);
        uint _1490 = _1487 ^ ((_1487 << 15u) & 4022730752u);
        uint _1492 = _1490 ^ (_1490 >> 18u);
        float _3913;
        _3913 = _3904;
        uint _1509;
        uint _1528;
        float _1534;
        uint _3912 = 0u;
        uint _4309 = _1492;
        for (;;)
        {
            if (!(_3912 < 1u))
            {
                break;
            }
            uint _1520 = _4309 + (_4309 << 10u);
            uint _1522 = _1520 ^ (_1520 >> 6u);
            uint _1524 = _1522 + (_1522 << 3u);
            uint _1526 = _1524 ^ (_1524 >> 11u);
            _1528 = _1526 + (_1526 << 15u);
            _1534 = uintBitsToFloat((_4309 & 8388607u) | 1065353216u) - 1.0;
            _1509 = _3912 + 1u;
            _4309 = _1528;
            _3913 = _1534;
            _3912 = _1509;
            continue;
        }
        uvec3 _1160 = uvec3(_1134 + ivec3(1, 1, 0));
        uint _1544 = _1160.z;
        uint _1550 = _1544 + (_1544 << 10u);
        uint _1552 = _1550 ^ (_1550 >> 6u);
        uint _1554 = _1552 + (_1552 << 3u);
        uint _1556 = _1554 ^ (_1554 >> 11u);
        uint _1564 = (((_1160.y * 1664525u) + (_1556 + (_1556 << 15u))) + 1013904223u) * 1664525u;
        uint _1566 = _1564 ^ (_1564 >> 11u);
        uint _1569 = _1566 ^ ((_1566 << 7u) & 2636928640u);
        uint _1572 = _1569 ^ ((_1569 << 15u) & 4022730752u);
        uint _1580 = (((_1160.x * 1664525u) + (_1572 ^ (_1572 >> 18u))) + 1013904223u) * 1664525u;
        uint _1582 = _1580 ^ (_1580 >> 11u);
        uint _1585 = _1582 ^ ((_1582 << 7u) & 2636928640u);
        uint _1588 = _1585 ^ ((_1585 << 15u) & 4022730752u);
        uint _1590 = _1588 ^ (_1588 >> 18u);
        float _3918;
        _3918 = _3904;
        uint _1607;
        uint _1626;
        float _1632;
        uint _3917 = 0u;
        uint _4308 = _1590;
        for (;;)
        {
            if (!(_3917 < 1u))
            {
                break;
            }
            uint _1618 = _4308 + (_4308 << 10u);
            uint _1620 = _1618 ^ (_1618 >> 6u);
            uint _1622 = _1620 + (_1620 << 3u);
            uint _1624 = _1622 ^ (_1622 >> 11u);
            _1626 = _1624 + (_1624 << 15u);
            _1632 = uintBitsToFloat((_4308 & 8388607u) | 1065353216u) - 1.0;
            _1607 = _3917 + 1u;
            _4308 = _1626;
            _3918 = _1632;
            _3917 = _1607;
            continue;
        }
        uvec3 _1167 = uvec3(_1134 + ivec3(0, 0, 1));
        uint _1642 = _1167.z;
        uint _1648 = _1642 + (_1642 << 10u);
        uint _1650 = _1648 ^ (_1648 >> 6u);
        uint _1652 = _1650 + (_1650 << 3u);
        uint _1654 = _1652 ^ (_1652 >> 11u);
        uint _1662 = (((_1167.y * 1664525u) + (_1654 + (_1654 << 15u))) + 1013904223u) * 1664525u;
        uint _1664 = _1662 ^ (_1662 >> 11u);
        uint _1667 = _1664 ^ ((_1664 << 7u) & 2636928640u);
        uint _1670 = _1667 ^ ((_1667 << 15u) & 4022730752u);
        uint _1678 = (((_1167.x * 1664525u) + (_1670 ^ (_1670 >> 18u))) + 1013904223u) * 1664525u;
        uint _1680 = _1678 ^ (_1678 >> 11u);
        uint _1683 = _1680 ^ ((_1680 << 7u) & 2636928640u);
        uint _1686 = _1683 ^ ((_1683 << 15u) & 4022730752u);
        uint _1688 = _1686 ^ (_1686 >> 18u);
        float _3924;
        _3924 = _3904;
        uint _1705;
        uint _1724;
        float _1730;
        uint _3923 = 0u;
        uint _4307 = _1688;
        for (;;)
        {
            if (!(_3923 < 1u))
            {
                break;
            }
            uint _1716 = _4307 + (_4307 << 10u);
            uint _1718 = _1716 ^ (_1716 >> 6u);
            uint _1720 = _1718 + (_1718 << 3u);
            uint _1722 = _1720 ^ (_1720 >> 11u);
            _1724 = _1722 + (_1722 << 15u);
            _1730 = uintBitsToFloat((_4307 & 8388607u) | 1065353216u) - 1.0;
            _1705 = _3923 + 1u;
            _4307 = _1724;
            _3924 = _1730;
            _3923 = _1705;
            continue;
        }
        uvec3 _1176 = uvec3(_1134 + ivec3(1, 0, 1));
        uint _1740 = _1176.z;
        uint _1746 = _1740 + (_1740 << 10u);
        uint _1748 = _1746 ^ (_1746 >> 6u);
        uint _1750 = _1748 + (_1748 << 3u);
        uint _1752 = _1750 ^ (_1750 >> 11u);
        uint _1760 = (((_1176.y * 1664525u) + (_1752 + (_1752 << 15u))) + 1013904223u) * 1664525u;
        uint _1762 = _1760 ^ (_1760 >> 11u);
        uint _1765 = _1762 ^ ((_1762 << 7u) & 2636928640u);
        uint _1768 = _1765 ^ ((_1765 << 15u) & 4022730752u);
        uint _1776 = (((_1176.x * 1664525u) + (_1768 ^ (_1768 >> 18u))) + 1013904223u) * 1664525u;
        uint _1778 = _1776 ^ (_1776 >> 11u);
        uint _1781 = _1778 ^ ((_1778 << 7u) & 2636928640u);
        uint _1784 = _1781 ^ ((_1781 << 15u) & 4022730752u);
        uint _1786 = _1784 ^ (_1784 >> 18u);
        float _3931;
        _3931 = _3904;
        uint _1803;
        uint _1822;
        float _1828;
        uint _3930 = 0u;
        uint _4306 = _1786;
        for (;;)
        {
            if (!(_3930 < 1u))
            {
                break;
            }
            uint _1814 = _4306 + (_4306 << 10u);
            uint _1816 = _1814 ^ (_1814 >> 6u);
            uint _1818 = _1816 + (_1816 << 3u);
            uint _1820 = _1818 ^ (_1818 >> 11u);
            _1822 = _1820 + (_1820 << 15u);
            _1828 = uintBitsToFloat((_4306 & 8388607u) | 1065353216u) - 1.0;
            _1803 = _3930 + 1u;
            _4306 = _1822;
            _3931 = _1828;
            _3930 = _1803;
            continue;
        }
        uvec3 _1183 = uvec3(_1134 + ivec3(0, 1, 1));
        uint _1838 = _1183.z;
        uint _1844 = _1838 + (_1838 << 10u);
        uint _1846 = _1844 ^ (_1844 >> 6u);
        uint _1848 = _1846 + (_1846 << 3u);
        uint _1850 = _1848 ^ (_1848 >> 11u);
        uint _1858 = (((_1183.y * 1664525u) + (_1850 + (_1850 << 15u))) + 1013904223u) * 1664525u;
        uint _1860 = _1858 ^ (_1858 >> 11u);
        uint _1863 = _1860 ^ ((_1860 << 7u) & 2636928640u);
        uint _1866 = _1863 ^ ((_1863 << 15u) & 4022730752u);
        uint _1874 = (((_1183.x * 1664525u) + (_1866 ^ (_1866 >> 18u))) + 1013904223u) * 1664525u;
        uint _1876 = _1874 ^ (_1874 >> 11u);
        uint _1879 = _1876 ^ ((_1876 << 7u) & 2636928640u);
        uint _1882 = _1879 ^ ((_1879 << 15u) & 4022730752u);
        uint _1884 = _1882 ^ (_1882 >> 18u);
        float _3939;
        _3939 = _3904;
        uint _1901;
        uint _1920;
        float _1926;
        uint _3938 = 0u;
        uint _4305 = _1884;
        for (;;)
        {
            if (!(_3938 < 1u))
            {
                break;
            }
            uint _1912 = _4305 + (_4305 << 10u);
            uint _1914 = _1912 ^ (_1912 >> 6u);
            uint _1916 = _1914 + (_1914 << 3u);
            uint _1918 = _1916 ^ (_1916 >> 11u);
            _1920 = _1918 + (_1918 << 15u);
            _1926 = uintBitsToFloat((_4305 & 8388607u) | 1065353216u) - 1.0;
            _1901 = _3938 + 1u;
            _4305 = _1920;
            _3939 = _1926;
            _3938 = _1901;
            continue;
        }
        uvec3 _1191 = uvec3(_1134 + ivec3(1));
        uint _1936 = _1191.z;
        uint _1942 = _1936 + (_1936 << 10u);
        uint _1944 = _1942 ^ (_1942 >> 6u);
        uint _1946 = _1944 + (_1944 << 3u);
        uint _1948 = _1946 ^ (_1946 >> 11u);
        uint _1956 = (((_1191.y * 1664525u) + (_1948 + (_1948 << 15u))) + 1013904223u) * 1664525u;
        uint _1958 = _1956 ^ (_1956 >> 11u);
        uint _1961 = _1958 ^ ((_1958 << 7u) & 2636928640u);
        uint _1964 = _1961 ^ ((_1961 << 15u) & 4022730752u);
        uint _1972 = (((_1191.x * 1664525u) + (_1964 ^ (_1964 >> 18u))) + 1013904223u) * 1664525u;
        uint _1974 = _1972 ^ (_1972 >> 11u);
        uint _1977 = _1974 ^ ((_1974 << 7u) & 2636928640u);
        uint _1980 = _1977 ^ ((_1977 << 15u) & 4022730752u);
        uint _1982 = _1980 ^ (_1980 >> 18u);
        float _3948;
        _3948 = _3904;
        uint _1999;
        uint _2018;
        float _2024;
        uint _3947 = 0u;
        uint _4304 = _1982;
        for (;;)
        {
            if (!(_3947 < 1u))
            {
                break;
            }
            uint _2010 = _4304 + (_4304 << 10u);
            uint _2012 = _2010 ^ (_2010 >> 6u);
            uint _2014 = _2012 + (_2012 << 3u);
            uint _2016 = _2014 ^ (_2014 >> 11u);
            _2018 = _2016 + (_2016 << 15u);
            _2024 = uintBitsToFloat((_4304 & 8388607u) | 1065353216u) - 1.0;
            _1999 = _3947 + 1u;
            _4304 = _2018;
            _3948 = _2024;
            _3947 = _1999;
            continue;
        }
        vec3 _2030 = (_1135 * _1135) * (vec3(3.0) - (vec3(2.0) * _1135));
        float _1199 = _2030.x;
        float _1200 = 1.0 - _1199;
        float _1202 = _2030.y;
        float _1203 = 1.0 - _1202;
        float _1205 = _2030.z;
        float _977 = _966 * 0.066666670143604278564453125;
        vec2 _995 = _3877.xz * ((mix(0.5, 5.0, ((((((1.0 - _1205) * (((_1203 * ((_3906 * _1200) + (_3909 * _1199))) + ((_3913 * _1200) * _1202)) + ((_3918 * _1199) * _1202))) + (((_3924 * _1200) * _1203) * _1205)) + (((_3931 * _1199) * _1203) * _1205)) + (((_3939 * _1200) * _1202) * _1205)) + (((_3948 * _1199) * _1202) * _1205)) * clamp(1.0 - _977, 0.0, 1.0)) * (1.0 - smoothstep(0.0, 1.0, _966 + mix(0.0, -10.0, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].thickness)))) * (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].thickness * material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].thickness));
        vec3 _4324 = vec3(_995.x, _966, _995.y);
        vec3 _3957;
        if (frame_constants.glade_theme_id == 4u)
        {
            vec2 _1004 = _4324.xz * 2.0;
            vec3 _3883 = _4324;
            _3883.x = _1004.x;
            _3883.z = _1004.y;
            _3957 = _3883;
        }
        else
        {
            _3957 = _4324;
        }
        vec3 _3958;
        if (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].smoke_type == 1u)
        {
            vec3 _3888 = _3957;
            _3888.z = _3957.z + (smoothstep(0.20000000298023223876953125, 0.89999997615814208984375, _3957.y) * 0.800000011920928955078125);
            _3958 = _3888;
        }
        else
        {
            _3958 = _3957;
        }
        vec3 _2045 = vec4(_3958, 1.0) * _1117;
        vec2 _1027 = _1080.xz;
        ivec2 _2094 = ivec2(floor(_1027));
        vec2 _2095 = fract(_1027);
        uvec2 _2096 = uvec2(_2094);
        uint _2146 = _2096.y;
        uint _2152 = _2146 + (_2146 << 10u);
        uint _2154 = _2152 ^ (_2152 >> 6u);
        uint _2156 = _2154 + (_2154 << 3u);
        uint _2158 = _2156 ^ (_2156 >> 11u);
        uint _2166 = (((_2096.x * 1664525u) + (_2158 + (_2158 << 15u))) + 1013904223u) * 1664525u;
        uint _2168 = _2166 ^ (_2166 >> 11u);
        uint _2171 = _2168 ^ ((_2168 << 7u) & 2636928640u);
        uint _2174 = _2171 ^ ((_2171 << 15u) & 4022730752u);
        uint _2176 = _2174 ^ (_2174 >> 18u);
        float _3970;
        _3970 = _3904;
        uint _2193;
        uint _2212;
        float _2218;
        uint _3969 = 0u;
        uint _4303 = _2176;
        for (;;)
        {
            if (!(_3969 < 1u))
            {
                break;
            }
            uint _2204 = _4303 + (_4303 << 10u);
            uint _2206 = _2204 ^ (_2204 >> 6u);
            uint _2208 = _2206 + (_2206 << 3u);
            uint _2210 = _2208 ^ (_2208 >> 11u);
            _2212 = _2210 + (_2210 << 15u);
            _2218 = uintBitsToFloat((_4303 & 8388607u) | 1065353216u) - 1.0;
            _2193 = _3969 + 1u;
            _4303 = _2212;
            _3970 = _2218;
            _3969 = _2193;
            continue;
        }
        uvec2 _2104 = uvec2(_2094 + ivec2(1, 0));
        uint _2222 = _2104.y;
        uint _2228 = _2222 + (_2222 << 10u);
        uint _2230 = _2228 ^ (_2228 >> 6u);
        uint _2232 = _2230 + (_2230 << 3u);
        uint _2234 = _2232 ^ (_2232 >> 11u);
        uint _2242 = (((_2104.x * 1664525u) + (_2234 + (_2234 << 15u))) + 1013904223u) * 1664525u;
        uint _2244 = _2242 ^ (_2242 >> 11u);
        uint _2247 = _2244 ^ ((_2244 << 7u) & 2636928640u);
        uint _2250 = _2247 ^ ((_2247 << 15u) & 4022730752u);
        uint _2252 = _2250 ^ (_2250 >> 18u);
        float _3983;
        _3983 = _3904;
        uint _2269;
        uint _2288;
        float _2294;
        uint _3982 = 0u;
        uint _4302 = _2252;
        for (;;)
        {
            if (!(_3982 < 1u))
            {
                break;
            }
            uint _2280 = _4302 + (_4302 << 10u);
            uint _2282 = _2280 ^ (_2280 >> 6u);
            uint _2284 = _2282 + (_2282 << 3u);
            uint _2286 = _2284 ^ (_2284 >> 11u);
            _2288 = _2286 + (_2286 << 15u);
            _2294 = uintBitsToFloat((_4302 & 8388607u) | 1065353216u) - 1.0;
            _2269 = _3982 + 1u;
            _4302 = _2288;
            _3983 = _2294;
            _3982 = _2269;
            continue;
        }
        uvec2 _2111 = uvec2(_2094 + ivec2(0, 1));
        uint _2298 = _2111.y;
        uint _2304 = _2298 + (_2298 << 10u);
        uint _2306 = _2304 ^ (_2304 >> 6u);
        uint _2308 = _2306 + (_2306 << 3u);
        uint _2310 = _2308 ^ (_2308 >> 11u);
        uint _2318 = (((_2111.x * 1664525u) + (_2310 + (_2310 << 15u))) + 1013904223u) * 1664525u;
        uint _2320 = _2318 ^ (_2318 >> 11u);
        uint _2323 = _2320 ^ ((_2320 << 7u) & 2636928640u);
        uint _2326 = _2323 ^ ((_2323 << 15u) & 4022730752u);
        uint _2328 = _2326 ^ (_2326 >> 18u);
        float _3997;
        _3997 = _3904;
        uint _2345;
        uint _2364;
        float _2370;
        uint _3996 = 0u;
        uint _4301 = _2328;
        for (;;)
        {
            if (!(_3996 < 1u))
            {
                break;
            }
            uint _2356 = _4301 + (_4301 << 10u);
            uint _2358 = _2356 ^ (_2356 >> 6u);
            uint _2360 = _2358 + (_2358 << 3u);
            uint _2362 = _2360 ^ (_2360 >> 11u);
            _2364 = _2362 + (_2362 << 15u);
            _2370 = uintBitsToFloat((_4301 & 8388607u) | 1065353216u) - 1.0;
            _2345 = _3996 + 1u;
            _4301 = _2364;
            _3997 = _2370;
            _3996 = _2345;
            continue;
        }
        uvec2 _2119 = uvec2(_2094 + ivec2(1));
        uint _2374 = _2119.y;
        uint _2380 = _2374 + (_2374 << 10u);
        uint _2382 = _2380 ^ (_2380 >> 6u);
        uint _2384 = _2382 + (_2382 << 3u);
        uint _2386 = _2384 ^ (_2384 >> 11u);
        uint _2394 = (((_2119.x * 1664525u) + (_2386 + (_2386 << 15u))) + 1013904223u) * 1664525u;
        uint _2396 = _2394 ^ (_2394 >> 11u);
        uint _2399 = _2396 ^ ((_2396 << 7u) & 2636928640u);
        uint _2402 = _2399 ^ ((_2399 << 15u) & 4022730752u);
        uint _2404 = _2402 ^ (_2402 >> 18u);
        float _4012;
        _4012 = _3904;
        uint _2421;
        uint _2440;
        float _2446;
        uint _4011 = 0u;
        uint _4300 = _2404;
        for (;;)
        {
            if (!(_4011 < 1u))
            {
                break;
            }
            uint _2432 = _4300 + (_4300 << 10u);
            uint _2434 = _2432 ^ (_2432 >> 6u);
            uint _2436 = _2434 + (_2434 << 3u);
            uint _2438 = _2436 ^ (_2436 >> 11u);
            _2440 = _2438 + (_2438 << 15u);
            _2446 = uintBitsToFloat((_4300 & 8388607u) | 1065353216u) - 1.0;
            _2421 = _4011 + 1u;
            _4300 = _2440;
            _4012 = _2446;
            _4011 = _2421;
            continue;
        }
        vec2 _2452 = (_2095 * _2095) * (vec2(3.0) - (vec2(2.0) * _2095));
        float _2127 = _2452.x;
        float _2128 = 1.0 - _2127;
        float _2130 = _2452.y;
        float _1029 = _952 + ((((1.0 - _2130) * ((_3970 * _2128) + (_3983 * _2127))) + ((_3997 * _2128) * _2130)) + ((_4012 * _2127) * _2130));
        float _1031 = smoothstep(0.100000001490116119384765625, 0.20000000298023223876953125, _977);
        uint _1039 = uint(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_22]].seed);
        uint _2486 = _1039 + (_1039 << 10u);
        uint _2488 = _2486 ^ (_2486 >> 6u);
        uint _2490 = _2488 + (_2488 << 3u);
        uint _2492 = _2490 ^ (_2490 >> 11u);
        float _2500 = uintBitsToFloat(((_2492 + (_2492 << 15u)) & 8388607u) | 1065353216u) - 1.0;
        float _2463 = (((_1029 * (-0.800000011920928955078125)) + (_3958.y * 0.800000011920928955078125)) + _2500) * 0.4000000059604644775390625;
        int _2511 = int(floor(_2463));
        float _2513 = fract(_2463);
        uvec2 _2515 = uvec2(ivec2(_2511));
        uint _2540 = _2515.y;
        uint _2546 = _2540 + (_2540 << 10u);
        uint _2548 = _2546 ^ (_2546 >> 6u);
        uint _2550 = _2548 + (_2548 << 3u);
        uint _2552 = _2550 ^ (_2550 >> 11u);
        uint _2560 = (((_2515.x * 1664525u) + (_2552 + (_2552 << 15u))) + 1013904223u) * 1664525u;
        uint _2562 = _2560 ^ (_2560 >> 11u);
        uint _2565 = _2562 ^ ((_2562 << 7u) & 2636928640u);
        uint _2568 = _2565 ^ ((_2565 << 15u) & 4022730752u);
        uint _2570 = _2568 ^ (_2568 >> 18u);
        uint _2589;
        uint _2608;
        vec2 _2506;
        uint _4036 = 0u;
        uint _4299 = _2570;
        for (;;)
        {
            if (!(_4036 < 2u))
            {
                break;
            }
            uint _2600 = _4299 + (_4299 << 10u);
            uint _2602 = _2600 ^ (_2600 >> 6u);
            uint _2604 = _2602 + (_2602 << 3u);
            uint _2606 = _2604 ^ (_2604 >> 11u);
            _2608 = _2606 + (_2606 << 15u);
            _2506[_4036] = uintBitsToFloat((_4299 & 8388607u) | 1065353216u) - 1.0;
            _2589 = _4036 + 1u;
            _4299 = _2608;
            _4036 = _2589;
            continue;
        }
        uvec2 _2523 = uvec2(ivec2(_2511 + 1));
        uint _2618 = _2523.y;
        uint _2624 = _2618 + (_2618 << 10u);
        uint _2626 = _2624 ^ (_2624 >> 6u);
        uint _2628 = _2626 + (_2626 << 3u);
        uint _2630 = _2628 ^ (_2628 >> 11u);
        uint _2638 = (((_2523.x * 1664525u) + (_2630 + (_2630 << 15u))) + 1013904223u) * 1664525u;
        uint _2640 = _2638 ^ (_2638 >> 11u);
        uint _2643 = _2640 ^ ((_2640 << 7u) & 2636928640u);
        uint _2646 = _2643 ^ ((_2643 << 15u) & 4022730752u);
        uint _2648 = _2646 ^ (_2646 >> 18u);
        uint _2667;
        uint _2686;
        vec2 _2507;
        uint _4052 = 0u;
        uint _4298 = _2648;
        for (;;)
        {
            if (!(_4052 < 2u))
            {
                break;
            }
            uint _2678 = _4298 + (_4298 << 10u);
            uint _2680 = _2678 ^ (_2678 >> 6u);
            uint _2682 = _2680 + (_2680 << 3u);
            uint _2684 = _2682 ^ (_2682 >> 11u);
            _2686 = _2684 + (_2684 << 15u);
            _2507[_4052] = uintBitsToFloat((_4298 & 8388607u) | 1065353216u) - 1.0;
            _2667 = _4052 + 1u;
            _4298 = _2686;
            _4052 = _2667;
            continue;
        }
        float _2698 = (_2513 * _2513) * (3.0 - (2.0 * _2513));
        float _2470 = (_1029 * (-0.3200000226497650146484375)) + _2500;
        int _2711 = int(floor(_2470));
        float _2713 = fract(_2470);
        uvec2 _2715 = uvec2(ivec2(_2711));
        uint _2739 = _2715.y;
        uint _2745 = _2739 + (_2739 << 10u);
        uint _2747 = _2745 ^ (_2745 >> 6u);
        uint _2749 = _2747 + (_2747 << 3u);
        uint _2751 = _2749 ^ (_2749 >> 11u);
        uint _2759 = (((_2715.x * 1664525u) + (_2751 + (_2751 << 15u))) + 1013904223u) * 1664525u;
        uint _2761 = _2759 ^ (_2759 >> 11u);
        uint _2764 = _2761 ^ ((_2761 << 7u) & 2636928640u);
        uint _2767 = _2764 ^ ((_2764 << 15u) & 4022730752u);
        uint _2769 = _2767 ^ (_2767 >> 18u);
        uint _2788;
        uint _2807;
        vec2 _2706;
        uint _4069 = 0u;
        uint _4297 = _2769;
        for (;;)
        {
            if (!(_4069 < 2u))
            {
                break;
            }
            uint _2799 = _4297 + (_4297 << 10u);
            uint _2801 = _2799 ^ (_2799 >> 6u);
            uint _2803 = _2801 + (_2801 << 3u);
            uint _2805 = _2803 ^ (_2803 >> 11u);
            _2807 = _2805 + (_2805 << 15u);
            _2706[_4069] = uintBitsToFloat((_4297 & 8388607u) | 1065353216u) - 1.0;
            _2788 = _4069 + 1u;
            _4297 = _2807;
            _4069 = _2788;
            continue;
        }
        uvec2 _2723 = uvec2(ivec2(_2711 + 1));
        uint _2817 = _2723.y;
        uint _2823 = _2817 + (_2817 << 10u);
        uint _2825 = _2823 ^ (_2823 >> 6u);
        uint _2827 = _2825 + (_2825 << 3u);
        uint _2829 = _2827 ^ (_2827 >> 11u);
        uint _2837 = (((_2723.x * 1664525u) + (_2829 + (_2829 << 15u))) + 1013904223u) * 1664525u;
        uint _2839 = _2837 ^ (_2837 >> 11u);
        uint _2842 = _2839 ^ ((_2839 << 7u) & 2636928640u);
        uint _2845 = _2842 ^ ((_2842 << 15u) & 4022730752u);
        uint _2847 = _2845 ^ (_2845 >> 18u);
        uint _2866;
        uint _2885;
        vec2 _2707;
        uint _4087 = 0u;
        uint _4296 = _2847;
        for (;;)
        {
            if (!(_4087 < 2u))
            {
                break;
            }
            uint _2877 = _4296 + (_4296 << 10u);
            uint _2879 = _2877 ^ (_2877 >> 6u);
            uint _2881 = _2879 + (_2879 << 3u);
            uint _2883 = _2881 ^ (_2881 >> 11u);
            _2885 = _2883 + (_2883 << 15u);
            _2707[_4087] = uintBitsToFloat((_4296 & 8388607u) | 1065353216u) - 1.0;
            _2866 = _4087 + 1u;
            _4296 = _2885;
            _4087 = _2866;
            continue;
        }
        float _2897 = (_2713 * _2713) * (3.0 - (2.0 * _2713));
        float _2476 = smoothstep(0.300000011920928955078125, 0.0, _977);
        vec2 _1043 = _2045.xz + ((((((((_2506 * (1.0 - _2698)) + (_2507 * _2698)) * 2.0) - vec2(1.0)) * 2.0) - ((((((_2706 * (1.0 - _2897)) + (_2707 * _2897)) * 2.0) - vec2(1.0)) * 2.0) * _2476)) * 0.300000011920928955078125) * _1031);
        vec3 _4328 = vec3(_1043.x, _2045.y - 0.1500000059604644775390625, _1043.y);
        float _2908 = (((_1029 * (-2.1296999454498291015625)) + (_3958.y * 2.1296999454498291015625)) + _2500) * 0.4000000059604644775390625;
        int _2956 = int(floor(_2908));
        float _2958 = fract(_2908);
        uvec2 _2960 = uvec2(ivec2(_2956));
        uint _2984 = _2960.y;
        uint _2990 = _2984 + (_2984 << 10u);
        uint _2992 = _2990 ^ (_2990 >> 6u);
        uint _2994 = _2992 + (_2992 << 3u);
        uint _2996 = _2994 ^ (_2994 >> 11u);
        uint _3004 = (((_2960.x * 1664525u) + (_2996 + (_2996 << 15u))) + 1013904223u) * 1664525u;
        uint _3006 = _3004 ^ (_3004 >> 11u);
        uint _3009 = _3006 ^ ((_3006 << 7u) & 2636928640u);
        uint _3012 = _3009 ^ ((_3009 << 15u) & 4022730752u);
        uint _3014 = _3012 ^ (_3012 >> 18u);
        uint _3033;
        uint _3052;
        vec2 _2951;
        uint _4114 = 0u;
        uint _4295 = _3014;
        for (;;)
        {
            if (!(_4114 < 2u))
            {
                break;
            }
            uint _3044 = _4295 + (_4295 << 10u);
            uint _3046 = _3044 ^ (_3044 >> 6u);
            uint _3048 = _3046 + (_3046 << 3u);
            uint _3050 = _3048 ^ (_3048 >> 11u);
            _3052 = _3050 + (_3050 << 15u);
            _2951[_4114] = uintBitsToFloat((_4295 & 8388607u) | 1065353216u) - 1.0;
            _3033 = _4114 + 1u;
            _4295 = _3052;
            _4114 = _3033;
            continue;
        }
        uvec2 _2968 = uvec2(ivec2(_2956 + 1));
        uint _3062 = _2968.y;
        uint _3068 = _3062 + (_3062 << 10u);
        uint _3070 = _3068 ^ (_3068 >> 6u);
        uint _3072 = _3070 + (_3070 << 3u);
        uint _3074 = _3072 ^ (_3072 >> 11u);
        uint _3082 = (((_2968.x * 1664525u) + (_3074 + (_3074 << 15u))) + 1013904223u) * 1664525u;
        uint _3084 = _3082 ^ (_3082 >> 11u);
        uint _3087 = _3084 ^ ((_3084 << 7u) & 2636928640u);
        uint _3090 = _3087 ^ ((_3087 << 15u) & 4022730752u);
        uint _3092 = _3090 ^ (_3090 >> 18u);
        uint _3111;
        uint _3130;
        vec2 _2952;
        uint _4134 = 0u;
        uint _4294 = _3092;
        for (;;)
        {
            if (!(_4134 < 2u))
            {
                break;
            }
            uint _3122 = _4294 + (_4294 << 10u);
            uint _3124 = _3122 ^ (_3122 >> 6u);
            uint _3126 = _3124 + (_3124 << 3u);
            uint _3128 = _3126 ^ (_3126 >> 11u);
            _3130 = _3128 + (_3128 << 15u);
            _2952[_4134] = uintBitsToFloat((_4294 & 8388607u) | 1065353216u) - 1.0;
            _3111 = _4134 + 1u;
            _4294 = _3130;
            _4134 = _3111;
            continue;
        }
        float _3142 = (_2958 * _2958) * (3.0 - (2.0 * _2958));
        float _2915 = (_1029 * (-0.851880013942718505859375)) + _2500;
        int _3155 = int(floor(_2915));
        float _3157 = fract(_2915);
        uvec2 _3159 = uvec2(ivec2(_3155));
        uint _3183 = _3159.y;
        uint _3189 = _3183 + (_3183 << 10u);
        uint _3191 = _3189 ^ (_3189 >> 6u);
        uint _3193 = _3191 + (_3191 << 3u);
        uint _3195 = _3193 ^ (_3193 >> 11u);
        uint _3203 = (((_3159.x * 1664525u) + (_3195 + (_3195 << 15u))) + 1013904223u) * 1664525u;
        uint _3205 = _3203 ^ (_3203 >> 11u);
        uint _3208 = _3205 ^ ((_3205 << 7u) & 2636928640u);
        uint _3211 = _3208 ^ ((_3208 << 15u) & 4022730752u);
        uint _3213 = _3211 ^ (_3211 >> 18u);
        uint _3232;
        uint _3251;
        vec2 _3150;
        uint _4155 = 0u;
        uint _4293 = _3213;
        for (;;)
        {
            if (!(_4155 < 2u))
            {
                break;
            }
            uint _3243 = _4293 + (_4293 << 10u);
            uint _3245 = _3243 ^ (_3243 >> 6u);
            uint _3247 = _3245 + (_3245 << 3u);
            uint _3249 = _3247 ^ (_3247 >> 11u);
            _3251 = _3249 + (_3249 << 15u);
            _3150[_4155] = uintBitsToFloat((_4293 & 8388607u) | 1065353216u) - 1.0;
            _3232 = _4155 + 1u;
            _4293 = _3251;
            _4155 = _3232;
            continue;
        }
        uvec2 _3167 = uvec2(ivec2(_3155 + 1));
        uint _3261 = _3167.y;
        uint _3267 = _3261 + (_3261 << 10u);
        uint _3269 = _3267 ^ (_3267 >> 6u);
        uint _3271 = _3269 + (_3269 << 3u);
        uint _3273 = _3271 ^ (_3271 >> 11u);
        uint _3281 = (((_3167.x * 1664525u) + (_3273 + (_3273 << 15u))) + 1013904223u) * 1664525u;
        uint _3283 = _3281 ^ (_3281 >> 11u);
        uint _3286 = _3283 ^ ((_3283 << 7u) & 2636928640u);
        uint _3289 = _3286 ^ ((_3286 << 15u) & 4022730752u);
        uint _3291 = _3289 ^ (_3289 >> 18u);
        uint _3310;
        uint _3329;
        vec2 _3151;
        uint _4177 = 0u;
        uint _4292 = _3291;
        for (;;)
        {
            if (!(_4177 < 2u))
            {
                break;
            }
            uint _3321 = _4292 + (_4292 << 10u);
            uint _3323 = _3321 ^ (_3321 >> 6u);
            uint _3325 = _3323 + (_3323 << 3u);
            uint _3327 = _3325 ^ (_3325 >> 11u);
            _3329 = _3327 + (_3327 << 15u);
            _3151[_4177] = uintBitsToFloat((_4292 & 8388607u) | 1065353216u) - 1.0;
            _3310 = _4177 + 1u;
            _4292 = _3329;
            _4177 = _3310;
            continue;
        }
        float _3341 = (_3157 * _3157) * (3.0 - (2.0 * _3157));
        vec2 _1056 = _4328.xz + ((((((((_2951 * (1.0 - _3142)) + (_2952 * _3142)) * 2.0) - vec2(1.0)) * 2.0) - ((((((_3150 * (1.0 - _3341)) + (_3151 * _3341)) * 2.0) - vec2(1.0)) * 2.0) * _2476)) * 0.20000000298023223876953125) * _1031);
        vec3 _3897 = _4328;
        _3897.x = _1056.x;
        _3897.z = _1056.y;
        float _3352 = (((_1029 * (-3.3970000743865966796875)) + (_3958.y * 3.3970000743865966796875)) + _2500) * 0.4000000059604644775390625;
        int _3400 = int(floor(_3352));
        float _3402 = fract(_3352);
        uvec2 _3404 = uvec2(ivec2(_3400));
        uint _3428 = _3404.y;
        uint _3434 = _3428 + (_3428 << 10u);
        uint _3436 = _3434 ^ (_3434 >> 6u);
        uint _3438 = _3436 + (_3436 << 3u);
        uint _3440 = _3438 ^ (_3438 >> 11u);
        uint _3448 = (((_3404.x * 1664525u) + (_3440 + (_3440 << 15u))) + 1013904223u) * 1664525u;
        uint _3450 = _3448 ^ (_3448 >> 11u);
        uint _3453 = _3450 ^ ((_3450 << 7u) & 2636928640u);
        uint _3456 = _3453 ^ ((_3453 << 15u) & 4022730752u);
        uint _3458 = _3456 ^ (_3456 >> 18u);
        uint _3477;
        uint _3496;
        vec2 _3395;
        uint _4208 = 0u;
        uint _4291 = _3458;
        for (;;)
        {
            if (!(_4208 < 2u))
            {
                break;
            }
            uint _3488 = _4291 + (_4291 << 10u);
            uint _3490 = _3488 ^ (_3488 >> 6u);
            uint _3492 = _3490 + (_3490 << 3u);
            uint _3494 = _3492 ^ (_3492 >> 11u);
            _3496 = _3494 + (_3494 << 15u);
            _3395[_4208] = uintBitsToFloat((_4291 & 8388607u) | 1065353216u) - 1.0;
            _3477 = _4208 + 1u;
            _4291 = _3496;
            _4208 = _3477;
            continue;
        }
        uvec2 _3412 = uvec2(ivec2(_3400 + 1));
        uint _3506 = _3412.y;
        uint _3512 = _3506 + (_3506 << 10u);
        uint _3514 = _3512 ^ (_3512 >> 6u);
        uint _3516 = _3514 + (_3514 << 3u);
        uint _3518 = _3516 ^ (_3516 >> 11u);
        uint _3526 = (((_3412.x * 1664525u) + (_3518 + (_3518 << 15u))) + 1013904223u) * 1664525u;
        uint _3528 = _3526 ^ (_3526 >> 11u);
        uint _3531 = _3528 ^ ((_3528 << 7u) & 2636928640u);
        uint _3534 = _3531 ^ ((_3531 << 15u) & 4022730752u);
        uint _3536 = _3534 ^ (_3534 >> 18u);
        uint _3555;
        uint _3574;
        vec2 _3396;
        uint _4232 = 0u;
        uint _4290 = _3536;
        for (;;)
        {
            if (!(_4232 < 2u))
            {
                break;
            }
            uint _3566 = _4290 + (_4290 << 10u);
            uint _3568 = _3566 ^ (_3566 >> 6u);
            uint _3570 = _3568 + (_3568 << 3u);
            uint _3572 = _3570 ^ (_3570 >> 11u);
            _3574 = _3572 + (_3572 << 15u);
            _3396[_4232] = uintBitsToFloat((_4290 & 8388607u) | 1065353216u) - 1.0;
            _3555 = _4232 + 1u;
            _4290 = _3574;
            _4232 = _3555;
            continue;
        }
        float _3586 = (_3402 * _3402) * (3.0 - (2.0 * _3402));
        float _3359 = (_1029 * (-1.35880005359649658203125)) + _2500;
        int _3599 = int(floor(_3359));
        float _3601 = fract(_3359);
        uvec2 _3603 = uvec2(ivec2(_3599));
        uint _3627 = _3603.y;
        uint _3633 = _3627 + (_3627 << 10u);
        uint _3635 = _3633 ^ (_3633 >> 6u);
        uint _3637 = _3635 + (_3635 << 3u);
        uint _3639 = _3637 ^ (_3637 >> 11u);
        uint _3647 = (((_3603.x * 1664525u) + (_3639 + (_3639 << 15u))) + 1013904223u) * 1664525u;
        uint _3649 = _3647 ^ (_3647 >> 11u);
        uint _3652 = _3649 ^ ((_3649 << 7u) & 2636928640u);
        uint _3655 = _3652 ^ ((_3652 << 15u) & 4022730752u);
        uint _3657 = _3655 ^ (_3655 >> 18u);
        uint _3676;
        uint _3695;
        vec2 _3594;
        uint _4257 = 0u;
        uint _4289 = _3657;
        for (;;)
        {
            if (!(_4257 < 2u))
            {
                break;
            }
            uint _3687 = _4289 + (_4289 << 10u);
            uint _3689 = _3687 ^ (_3687 >> 6u);
            uint _3691 = _3689 + (_3689 << 3u);
            uint _3693 = _3691 ^ (_3691 >> 11u);
            _3695 = _3693 + (_3693 << 15u);
            _3594[_4257] = uintBitsToFloat((_4289 & 8388607u) | 1065353216u) - 1.0;
            _3676 = _4257 + 1u;
            _4289 = _3695;
            _4257 = _3676;
            continue;
        }
        uvec2 _3611 = uvec2(ivec2(_3599 + 1));
        uint _3705 = _3611.y;
        uint _3711 = _3705 + (_3705 << 10u);
        uint _3713 = _3711 ^ (_3711 >> 6u);
        uint _3715 = _3713 + (_3713 << 3u);
        uint _3717 = _3715 ^ (_3715 >> 11u);
        uint _3725 = (((_3611.x * 1664525u) + (_3717 + (_3717 << 15u))) + 1013904223u) * 1664525u;
        uint _3727 = _3725 ^ (_3725 >> 11u);
        uint _3730 = _3727 ^ ((_3727 << 7u) & 2636928640u);
        uint _3733 = _3730 ^ ((_3730 << 15u) & 4022730752u);
        uint _3735 = _3733 ^ (_3733 >> 18u);
        uint _3754;
        uint _3773;
        vec2 _3595;
        uint _4283 = 0u;
        uint _4288 = _3735;
        for (;;)
        {
            if (!(_4283 < 2u))
            {
                break;
            }
            uint _3765 = _4288 + (_4288 << 10u);
            uint _3767 = _3765 ^ (_3765 >> 6u);
            uint _3769 = _3767 + (_3767 << 3u);
            uint _3771 = _3769 ^ (_3769 >> 11u);
            _3773 = _3771 + (_3771 << 15u);
            _3595[_4283] = uintBitsToFloat((_4288 & 8388607u) | 1065353216u) - 1.0;
            _3754 = _4283 + 1u;
            _4288 = _3773;
            _4283 = _3754;
            continue;
        }
        float _3785 = (_3601 * _3601) * (3.0 - (2.0 * _3601));
        vec2 _1068 = _3897.xz + (((((((_3395 * (1.0 - _3586)) + (_3396 * _3586)) * 2.0) - vec2(1.0)) * 2.0) - ((((((_3594 * (1.0 - _3785)) + (_3595 * _3785)) * 2.0) - vec2(1.0)) * 2.0) * _2476)) * 0.0500000007450580596923828125);
        vec3 _3901 = _3897;
        _3901.x = _1068.x;
        _3901.z = _1068.y;
        gl_Position = vec4(_3901, 1.0) * current_view.world_to_sample;
        entryPointParam_vs_main_frag_normal_ws = vec4(normalize(vec3(_66, 0.0, _69)), 0.0) * _1117;
        entryPointParam_vs_main_frag_position_ws = _3901.xyz;
        entryPointParam_vs_main_local_y = _977;
        break;
    } while(false);
}

