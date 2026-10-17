#version 460

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct Reed_natural
{
    Affine3Packed_natural xform;
};

const uint _326[4] = uint[](17u, 18u, 20u, 21u);
const float _513[4] = float[](2.0, 4.0, 8.0, 12.0);
const float _545[4] = float[](2.0, 2.0, 0.5, 0.20000000298023223876953125);
vec2 _1840;
float _1858;

layout(set = 0, binding = 0, std430) readonly buffer StructuredBuffer
{
    Reed_natural _member0[];
} material_data_instance_buffer;

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

layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 6, binding = 0) uniform texture2D object_push_grass_object_push;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 21, binding = 1) uniform texture2D water_waves_water_noise_texture;

layout(location = 0) in vec3 Vertex_Position;
layout(location = 2) in vec3 Vertex_Color;
layout(location = 1) in vec3 Vertex_Normal;
layout(location = 0) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_color;

void main()
{
    bool _1117;
    uint _27 = uint(gl_InstanceIndex);
    mat3x4 _899 = transpose(mat4x3(vec3(material_data_instance_buffer._member0[_27].xform.data.data[0], material_data_instance_buffer._member0[_27].xform.data.data[1], material_data_instance_buffer._member0[_27].xform.data.data[2]), vec3(material_data_instance_buffer._member0[_27].xform.data.data[3], material_data_instance_buffer._member0[_27].xform.data.data[4], material_data_instance_buffer._member0[_27].xform.data.data[5]), vec3(material_data_instance_buffer._member0[_27].xform.data.data[6], material_data_instance_buffer._member0[_27].xform.data.data[7], material_data_instance_buffer._member0[_27].xform.data.data[8]), vec3(material_data_instance_buffer._member0[_27].xform.data.data[9], material_data_instance_buffer._member0[_27].xform.data.data[10], material_data_instance_buffer._member0[_27].xform.data.data[11])));
    vec3 _862 = vec4(Vertex_Position, 1.0) * _899;
    vec3 _907 = vec4(vec3(0.0), 1.0) * _899;
    uint _133 = uint(((((_907.x * 20.0) - (_907.z * 20.0)) + 2000.0) + Vertex_Position.x) + Vertex_Position.z);
    uint _951 = _133 + (_133 << 10u);
    uint _953 = _951 ^ (_951 >> 6u);
    uint _955 = _953 + (_953 << 3u);
    uint _957 = _955 ^ (_955 >> 11u);
    float _965 = uintBitsToFloat(((_957 + (_957 << 15u)) & 8388607u) | 1065353216u) - 1.0;
    vec2 _182 = _907.xz;
    vec4 _997 = textureLod(sampler2D(object_push_grass_object_push, samplers_lnc_iso), (_182 * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0);
    vec3 _1849;
    do
    {
        _1117 = frame_constants.glade_theme_id == 4u;
        if (_1117)
        {
            _1849 = vec3(0.0);
            break;
        }
        float _1125 = float(frame_constants.game_time_sec) + frame_constants.game_time_frac;
        vec2 _1839;
        vec2 _1843;
        _1843 = _1840;
        _1839 = _1840;
        uint _1044;
        vec2 _1145;
        vec2 _1153;
        vec2 _1007[4];
        uint _1835 = 0u;
        for (;;)
        {
            if (!(_1835 < 4u))
            {
                break;
            }
            float _1034 = float(_326[_1835]);
            int _1136 = int(floor(_1034));
            float _1138 = fract(_1034);
            uvec2 _1140 = uvec2(ivec2(_1136));
            uint _1165 = _1140.y;
            uint _1171 = _1165 + (_1165 << 10u);
            uint _1173 = _1171 ^ (_1171 >> 6u);
            uint _1175 = _1173 + (_1173 << 3u);
            uint _1177 = _1175 ^ (_1175 >> 11u);
            uint _1185 = (((_1140.x * 1664525u) + (_1177 + (_1177 << 15u))) + 1013904223u) * 1664525u;
            uint _1187 = _1185 ^ (_1185 >> 11u);
            uint _1190 = _1187 ^ ((_1187 << 7u) & 2636928640u);
            uint _1193 = _1190 ^ ((_1190 << 15u) & 4022730752u);
            uint _1195 = _1193 ^ (_1193 >> 18u);
            vec2 _1131 = _1839;
            uint _1214;
            uint _1233;
            uint _1841 = 0u;
            uint _1848 = _1195;
            for (;;)
            {
                if (!(_1841 < 2u))
                {
                    break;
                }
                uint _1225 = _1848 + (_1848 << 10u);
                uint _1227 = _1225 ^ (_1225 >> 6u);
                uint _1229 = _1227 + (_1227 << 3u);
                uint _1231 = _1229 ^ (_1229 >> 11u);
                _1233 = _1231 + (_1231 << 15u);
                _1131[_1841] = uintBitsToFloat((_1848 & 8388607u) | 1065353216u) - 1.0;
                _1214 = _1841 + 1u;
                _1848 = _1233;
                _1841 = _1214;
                continue;
            }
            _1145 = _1131;
            uvec2 _1148 = uvec2(ivec2(_1136 + 1));
            uint _1243 = _1148.y;
            uint _1249 = _1243 + (_1243 << 10u);
            uint _1251 = _1249 ^ (_1249 >> 6u);
            uint _1253 = _1251 + (_1251 << 3u);
            uint _1255 = _1253 ^ (_1253 >> 11u);
            uint _1263 = (((_1148.x * 1664525u) + (_1255 + (_1255 << 15u))) + 1013904223u) * 1664525u;
            uint _1265 = _1263 ^ (_1263 >> 11u);
            uint _1268 = _1265 ^ ((_1265 << 7u) & 2636928640u);
            uint _1271 = _1268 ^ ((_1268 << 15u) & 4022730752u);
            uint _1273 = _1271 ^ (_1271 >> 18u);
            vec2 _1132 = _1843;
            uint _1292;
            uint _1311;
            uint _1844 = 0u;
            uint _1847 = _1273;
            for (;;)
            {
                if (!(_1844 < 2u))
                {
                    break;
                }
                uint _1303 = _1847 + (_1847 << 10u);
                uint _1305 = _1303 ^ (_1303 >> 6u);
                uint _1307 = _1305 + (_1305 << 3u);
                uint _1309 = _1307 ^ (_1307 >> 11u);
                _1311 = _1309 + (_1309 << 15u);
                _1132[_1844] = uintBitsToFloat((_1847 & 8388607u) | 1065353216u) - 1.0;
                _1292 = _1844 + 1u;
                _1847 = _1311;
                _1844 = _1292;
                continue;
            }
            _1153 = _1132;
            float _1323 = (_1138 * _1138) * (3.0 - (2.0 * _1138));
            _1007[_1835] = (normalize(((_1145 * (1.0 - _1323)) + (_1153 * _1323)) - vec2(0.5)) * _1125) * 3.0;
            _1044 = _1835 + 1u;
            _1843 = _1153;
            _1839 = _1145;
            _1835 = _1044;
            continue;
        }
        vec3 _1837;
        _1837 = vec3(0.0);
        uint _1057;
        vec3 _1926;
        uint _1836 = 0u;
        for (;;)
        {
            if (!(_1836 < 1u))
            {
                break;
            }
            _1057 = _1836 + 1u;
            float _1059 = float(_1057) * 10.16640758514404296875;
            float _1060 = cos(_1059);
            float _1061 = sin(_1059);
            mat2 _1065 = mat2(vec2(_1060, _1061), vec2(-_1061, _1060));
            float _1090 = _513[_1836] * 0.01200000010430812835693359375;
            vec3 _1092 = (((textureLod(sampler2D(water_waves_water_noise_texture, samplers_llr), (((_182 * _513[_1836]) + _1007[_1836]) * _1065) * 0.01200000010430812835693359375, 0.0).xyz * vec3(1.0, 2.0, 2.0)) + vec3(-0.5, -1.0, -1.0)) * _545[_1836]) * vec3(1.0, _1090, _1090);
            vec2 _1101 = _1837.yz + (_1065 * _1092.yz);
            _1926 = vec3(_1837.x + _1092.x, _1101);
            _1837 = _1926;
            _1836 = _1057;
            continue;
        }
        _1849 = _1837;
        break;
    } while(false);
    vec2 _584 = _862.xz + (((vec3(_997.x, 0.0, _997.y) * float(clamp(_997.z, 0.0, 1.0) > 0.0)) * 0.3499999940395355224609375) + (_1849.yxz * vec3(2.0, 0.00999999977648258209228515625, 2.0))).xz;
    float _586 = _584.x;
    vec3 _1927 = vec3(_586, _862.y + mix(-0.02500000037252902984619140625, 0.0, _965), _584.y);
    float _601 = Vertex_Position.y + 0.5;
    vec2 _1337 = (_182 * 0.100000001490116119384765625) + (vec2(float(frame_constants.game_time_sec) + frame_constants.game_time_frac, 0.0) * 1.2000000476837158203125);
    ivec2 _1374 = ivec2(floor(_1337));
    vec2 _1375 = fract(_1337);
    uvec2 _1376 = uvec2(_1374);
    uint _1426 = _1376.y;
    uint _1432 = _1426 + (_1426 << 10u);
    uint _1434 = _1432 ^ (_1432 >> 6u);
    uint _1436 = _1434 + (_1434 << 3u);
    uint _1438 = _1436 ^ (_1436 >> 11u);
    uint _1446 = (((_1376.x * 1664525u) + (_1438 + (_1438 << 15u))) + 1013904223u) * 1664525u;
    uint _1448 = _1446 ^ (_1446 >> 11u);
    uint _1451 = _1448 ^ ((_1448 << 7u) & 2636928640u);
    uint _1454 = _1451 ^ ((_1451 << 15u) & 4022730752u);
    uint _1456 = _1454 ^ (_1454 >> 18u);
    float _1864;
    _1864 = _1858;
    uint _1473;
    uint _1492;
    float _1498;
    uint _1863 = 0u;
    uint _1905 = _1456;
    for (;;)
    {
        if (!(_1863 < 1u))
        {
            break;
        }
        uint _1484 = _1905 + (_1905 << 10u);
        uint _1486 = _1484 ^ (_1484 >> 6u);
        uint _1488 = _1486 + (_1486 << 3u);
        uint _1490 = _1488 ^ (_1488 >> 11u);
        _1492 = _1490 + (_1490 << 15u);
        _1498 = uintBitsToFloat((_1905 & 8388607u) | 1065353216u) - 1.0;
        _1473 = _1863 + 1u;
        _1905 = _1492;
        _1864 = _1498;
        _1863 = _1473;
        continue;
    }
    uvec2 _1384 = uvec2(_1374 + ivec2(1, 0));
    uint _1502 = _1384.y;
    uint _1508 = _1502 + (_1502 << 10u);
    uint _1510 = _1508 ^ (_1508 >> 6u);
    uint _1512 = _1510 + (_1510 << 3u);
    uint _1514 = _1512 ^ (_1512 >> 11u);
    uint _1522 = (((_1384.x * 1664525u) + (_1514 + (_1514 << 15u))) + 1013904223u) * 1664525u;
    uint _1524 = _1522 ^ (_1522 >> 11u);
    uint _1527 = _1524 ^ ((_1524 << 7u) & 2636928640u);
    uint _1530 = _1527 ^ ((_1527 << 15u) & 4022730752u);
    uint _1532 = _1530 ^ (_1530 >> 18u);
    float _1873;
    _1873 = _1858;
    uint _1549;
    uint _1568;
    float _1574;
    uint _1872 = 0u;
    uint _1904 = _1532;
    for (;;)
    {
        if (!(_1872 < 1u))
        {
            break;
        }
        uint _1560 = _1904 + (_1904 << 10u);
        uint _1562 = _1560 ^ (_1560 >> 6u);
        uint _1564 = _1562 + (_1562 << 3u);
        uint _1566 = _1564 ^ (_1564 >> 11u);
        _1568 = _1566 + (_1566 << 15u);
        _1574 = uintBitsToFloat((_1904 & 8388607u) | 1065353216u) - 1.0;
        _1549 = _1872 + 1u;
        _1904 = _1568;
        _1873 = _1574;
        _1872 = _1549;
        continue;
    }
    uvec2 _1391 = uvec2(_1374 + ivec2(0, 1));
    uint _1578 = _1391.y;
    uint _1584 = _1578 + (_1578 << 10u);
    uint _1586 = _1584 ^ (_1584 >> 6u);
    uint _1588 = _1586 + (_1586 << 3u);
    uint _1590 = _1588 ^ (_1588 >> 11u);
    uint _1598 = (((_1391.x * 1664525u) + (_1590 + (_1590 << 15u))) + 1013904223u) * 1664525u;
    uint _1600 = _1598 ^ (_1598 >> 11u);
    uint _1603 = _1600 ^ ((_1600 << 7u) & 2636928640u);
    uint _1606 = _1603 ^ ((_1603 << 15u) & 4022730752u);
    uint _1608 = _1606 ^ (_1606 >> 18u);
    float _1883;
    _1883 = _1858;
    uint _1625;
    uint _1644;
    float _1650;
    uint _1882 = 0u;
    uint _1903 = _1608;
    for (;;)
    {
        if (!(_1882 < 1u))
        {
            break;
        }
        uint _1636 = _1903 + (_1903 << 10u);
        uint _1638 = _1636 ^ (_1636 >> 6u);
        uint _1640 = _1638 + (_1638 << 3u);
        uint _1642 = _1640 ^ (_1640 >> 11u);
        _1644 = _1642 + (_1642 << 15u);
        _1650 = uintBitsToFloat((_1903 & 8388607u) | 1065353216u) - 1.0;
        _1625 = _1882 + 1u;
        _1903 = _1644;
        _1883 = _1650;
        _1882 = _1625;
        continue;
    }
    uvec2 _1399 = uvec2(_1374 + ivec2(1));
    uint _1654 = _1399.y;
    uint _1660 = _1654 + (_1654 << 10u);
    uint _1662 = _1660 ^ (_1660 >> 6u);
    uint _1664 = _1662 + (_1662 << 3u);
    uint _1666 = _1664 ^ (_1664 >> 11u);
    uint _1674 = (((_1399.x * 1664525u) + (_1666 + (_1666 << 15u))) + 1013904223u) * 1664525u;
    uint _1676 = _1674 ^ (_1674 >> 11u);
    uint _1679 = _1676 ^ ((_1676 << 7u) & 2636928640u);
    uint _1682 = _1679 ^ ((_1679 << 15u) & 4022730752u);
    uint _1684 = _1682 ^ (_1682 >> 18u);
    float _1894;
    _1894 = _1858;
    uint _1701;
    uint _1720;
    float _1726;
    uint _1893 = 0u;
    uint _1902 = _1684;
    for (;;)
    {
        if (!(_1893 < 1u))
        {
            break;
        }
        uint _1712 = _1902 + (_1902 << 10u);
        uint _1714 = _1712 ^ (_1712 >> 6u);
        uint _1716 = _1714 + (_1714 << 3u);
        uint _1718 = _1716 ^ (_1716 >> 11u);
        _1720 = _1718 + (_1718 << 15u);
        _1726 = uintBitsToFloat((_1902 & 8388607u) | 1065353216u) - 1.0;
        _1701 = _1893 + 1u;
        _1902 = _1720;
        _1894 = _1726;
        _1893 = _1701;
        continue;
    }
    vec2 _1732 = (_1375 * _1375) * (vec2(3.0) - (vec2(2.0) * _1375));
    float _1407 = _1732.x;
    float _1408 = 1.0 - _1407;
    float _1410 = _1732.y;
    uint _1346 = uint(int(_965));
    uint _1745 = _1346 + (_1346 << 10u);
    uint _1747 = _1745 ^ (_1745 >> 6u);
    uint _1749 = _1747 + (_1747 << 3u);
    uint _1751 = _1749 ^ (_1749 >> 11u);
    _1927.x = _586 - (((((_601 * _601) * (sin((((((1.0 - _1410) * ((_1864 * _1408) + (_1873 * _1407))) + ((_1883 * _1408) * _1410)) + ((_1894 * _1407) * _1410)) * 3.1400001049041748046875) - 1.57000005245208740234375) + 0.300000011920928955078125)) * 0.699999988079071044921875) * (_1117 ? 0.02500000037252902984619140625 : 0.0500000007450580596923828125)) * mix(0.699999988079071044921875, 1.0, uintBitsToFloat(((_1751 + (_1751 << 15u)) & 8388607u) | 1065353216u) - 1.0));
    vec3 _801 = vec3(mix(1.2000000476837158203125, 2.0, _965));
    vec3 _804 = pow(Vertex_Color, _801);
    vec3 _1900;
    if (_1117)
    {
        vec3 _1901;
        if (Vertex_Color.y > 0.0500000007450580596923828125)
        {
            _1901 = pow(vec3(0.1500000059604644775390625, 0.0900000035762786865234375, 0.0300000011920928955078125), _801);
        }
        else
        {
            _1901 = _804;
        }
        _1900 = _1901;
    }
    else
    {
        _1900 = _804;
    }
    gl_Position = vec4(_1927, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_frag_normal_ws = normalize(vec4(Vertex_Normal, 0.0) * _899);
    entryPointParam_vs_main_frag_position_ws = _1927;
    entryPointParam_vs_main_color = _1900;
}

