#version 460

struct RoofShingle_natural
{
    vec3 base_position;
    float current_height;
    uvec2 clipping_plane_;
    uvec2 scale_t;
    uvec2 rotation_quat_;
    uint wall_slot_id;
    uint velocity_rotation;
    float animation_t;
    int seed;
    int is_circle;
    int is_main_roof_body;
};

float _3799;

layout(set = 7, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 0, std430) readonly buffer material_data_nani_instance_data
{
    RoofShingle_natural _member0[];
} material_data_nani_instance_data_1;

layout(set = 10, binding = 0, std430) readonly buffer wall_identity_data_slot_wall_ids
{
    uint _member0[];
} wall_identity_data_slot_wall_ids_1;

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
layout(location = 0) out vec3 entryPointParam_vs_main_pos_ws;
layout(location = 1) out float entryPointParam_vs_main_roof_dmg_noise;
layout(location = 2) out float entryPointParam_vs_main_weathering_noise;
layout(location = 3) out float entryPointParam_vs_main_roof_t;
layout(location = 4) out vec2 entryPointParam_vs_main_front_face_uv;
layout(location = 5) flat out vec4 entryPointParam_vs_main_clipping_plane;
layout(location = 6) flat out uint entryPointParam_vs_main_instance_index;
layout(location = 7) out float entryPointParam_vs_main_vertex_pos_ls_z;
layout(location = 8) out vec2 entryPointParam_vs_main_side_face_uv;

void main()
{
    uint _54 = uint(gl_InstanceIndex);
    vec2 _1523 = unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_54]].rotation_quat_.x);
    vec2 _1525 = unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_54]].rotation_quat_.y);
    float _1530 = _1523.x;
    float _1531 = _1530 + _1530;
    float _1532 = _1523.y;
    float _1533 = _1532 + _1532;
    float _1534 = _1525.x;
    float _1535 = _1534 + _1534;
    float _1536 = _1530 * _1531;
    float _1537 = _1530 * _1533;
    float _1538 = _1530 * _1535;
    float _1539 = _1532 * _1533;
    float _1540 = _1532 * _1535;
    float _1541 = _1534 * _1535;
    float _1542 = _1525.y;
    float _1543 = _1542 * _1531;
    float _1544 = _1542 * _1533;
    float _1545 = _1542 * _1535;
    mat3x4 _1602 = transpose(mat4x3(vec3(1.0 - (_1539 + _1541), _1537 + _1545, _1538 - _1544), vec3(_1537 - _1545, 1.0 - (_1536 + _1541), _1540 + _1543), vec3(_1538 + _1544, _1540 - _1543, 1.0 - (_1536 + _1539)), material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_54]].base_position));
    vec2 _1613 = unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_54]].clipping_plane_.y);
    vec4 _1614 = vec4(unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_54]].clipping_plane_.x), _1613);
    vec2 _1626 = unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_54]].scale_t.y);
    float _1646 = _1626.y;
    bool is_main_roof_body = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_54]].is_main_roof_body != 0;
    vec3 _535 = (vec4(unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_54]].scale_t.x), _1626).xyz * smoothstep(_1646 * 0.800000011920928955078125, _1646, pow(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_54]].animation_t, 0.800000011920928955078125))) * vec3(0.505970001220703125, 0.5, 0.5);
    float _539 = _535.x * 0.949999988079071044921875;
    vec3 _3764 = _535;
    _3764.x = _539;
    vec3 _545 = _3764 * vec3(3.58920383453369140625, 3.70370388031005859375, 3.70370388031005859375);
    float _558 = max(min(max(_539, max(_535.y, _535.z)), min(_545.x, min(_545.y, _545.z))), 9.9999997473787516355514526367188e-06);
    vec3 _563 = Vertex_Position * vec3(1.976401805877685546875, 2.0, 2.0);
    vec3 _564 = _563 * _558;
    vec2 _1653 = unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_54]].velocity_rotation);
    float _1654 = _1653.y;
    vec3 _1658 = normalize(vec3(1.0, 0.0, 0.0));
    float _1659 = sin(_1654);
    float _1660 = cos(_1654);
    float _1661 = 1.0 - _1660;
    float _1663 = _1661 * _1658.x;
    float _1667 = _1663 * _1658.y;
    float _1669 = _1658.z * _1659;
    float _1671 = _1661 * _1658.z;
    float _1672 = _1671 * _1658.x;
    float _1673 = _1658.y * _1659;
    float _1676 = _1661 * _1658.y;
    float _1679 = _1676 * _1658.z;
    float _1680 = _1658.x * _1659;
    vec3 _632 = (_564 - ((vec3(_558) - _3764) * vec3(mix(ivec3(-1), ivec3(1), greaterThanEqual(_564, vec3(0.0)))))) * transpose(mat3(vec3((_1663 * _1658.x) + _1660, _1667 - _1669, _1672 + _1673), vec3(_1667 + _1669, (_1676 * _1658.y) + _1660, _1679 - _1680), vec3(_1672 - _1673, _1679 + _1680, (_1671 * _1658.z) + _1660)));
    vec3 _3795;
    if (is_main_roof_body)
    {
        uint _649 = uint(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_54]].seed * 1664525) + wall_identity_data_slot_wall_ids_1._member0[material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_54]].wall_slot_id];
        uint _1702 = _649 + (_649 << 10u);
        uint _1704 = _1702 ^ (_1702 >> 6u);
        uint _1706 = _1704 + (_1704 << 3u);
        uint _1708 = _1706 ^ (_1706 >> 11u);
        float _4120 = ((uintBitsToFloat(((_1708 + (_1708 << 15u)) & 8388607u) | 1065353216u) - 1.0) > 0.89999997615814208984375) ? 0.0199999995529651641845703125 : 0.0599999986588954925537109375;
        vec3 _3796;
        if (Vertex_Position.y > 0.100000001490116119384765625)
        {
            vec3 _3797;
            if (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_54]].is_circle != 0)
            {
                vec3 _3770 = _632;
                _3770.z = _632.z - _4120;
                _3797 = _3770;
            }
            else
            {
                vec3 _3767 = _632;
                _3767.z = _632.z + _4120;
                _3797 = _3767;
            }
            _3796 = _3797;
        }
        else
        {
            _3796 = _632;
        }
        _3795 = _3796;
    }
    else
    {
        _3795 = _632;
    }
    vec3 _3773 = _3795;
    _3773.z = _3795.z + ((1.0 - smoothstep(0.0, 0.800000011920928955078125, (vec4(_3795, 1.0) * _1602).y)) * 0.115000002086162567138671875);
    vec3 _732 = vec4(_3773, 1.0) * _1602;
    float _736 = _732.y;
    float _737 = _736 + material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_54]].current_height;
    vec3 _3776 = _732;
    _3776.y = _737;
    vec3 _3833;
    if (is_main_roof_body)
    {
        vec2 _744 = _3776.xz * 0.5;
        ivec2 _1732 = ivec2(floor(_744));
        vec2 _1733 = fract(_744);
        uvec2 _1734 = uvec2(_1732);
        uint _1784 = _1734.y;
        uint _1790 = _1784 + (_1784 << 10u);
        uint _1792 = _1790 ^ (_1790 >> 6u);
        uint _1794 = _1792 + (_1792 << 3u);
        uint _1796 = _1794 ^ (_1794 >> 11u);
        uint _1804 = (((_1734.x * 1664525u) + (_1796 + (_1796 << 15u))) + 1013904223u) * 1664525u;
        uint _1806 = _1804 ^ (_1804 >> 11u);
        uint _1809 = _1806 ^ ((_1806 << 7u) & 2636928640u);
        uint _1812 = _1809 ^ ((_1809 << 15u) & 4022730752u);
        uint _1814 = _1812 ^ (_1812 >> 18u);
        float _3804;
        _3804 = _3799;
        uint _1831;
        uint _1850;
        float _1856;
        uint _3803 = 0u;
        uint _4095 = _1814;
        for (;;)
        {
            if (!(_3803 < 1u))
            {
                break;
            }
            uint _1842 = _4095 + (_4095 << 10u);
            uint _1844 = _1842 ^ (_1842 >> 6u);
            uint _1846 = _1844 + (_1844 << 3u);
            uint _1848 = _1846 ^ (_1846 >> 11u);
            _1850 = _1848 + (_1848 << 15u);
            _1856 = uintBitsToFloat((_4095 & 8388607u) | 1065353216u) - 1.0;
            _1831 = _3803 + 1u;
            _4095 = _1850;
            _3804 = _1856;
            _3803 = _1831;
            continue;
        }
        uvec2 _1742 = uvec2(_1732 + ivec2(1, 0));
        uint _1860 = _1742.y;
        uint _1866 = _1860 + (_1860 << 10u);
        uint _1868 = _1866 ^ (_1866 >> 6u);
        uint _1870 = _1868 + (_1868 << 3u);
        uint _1872 = _1870 ^ (_1870 >> 11u);
        uint _1880 = (((_1742.x * 1664525u) + (_1872 + (_1872 << 15u))) + 1013904223u) * 1664525u;
        uint _1882 = _1880 ^ (_1880 >> 11u);
        uint _1885 = _1882 ^ ((_1882 << 7u) & 2636928640u);
        uint _1888 = _1885 ^ ((_1885 << 15u) & 4022730752u);
        uint _1890 = _1888 ^ (_1888 >> 18u);
        float _3811;
        _3811 = _3799;
        uint _1907;
        uint _1926;
        float _1932;
        uint _3810 = 0u;
        uint _4094 = _1890;
        for (;;)
        {
            if (!(_3810 < 1u))
            {
                break;
            }
            uint _1918 = _4094 + (_4094 << 10u);
            uint _1920 = _1918 ^ (_1918 >> 6u);
            uint _1922 = _1920 + (_1920 << 3u);
            uint _1924 = _1922 ^ (_1922 >> 11u);
            _1926 = _1924 + (_1924 << 15u);
            _1932 = uintBitsToFloat((_4094 & 8388607u) | 1065353216u) - 1.0;
            _1907 = _3810 + 1u;
            _4094 = _1926;
            _3811 = _1932;
            _3810 = _1907;
            continue;
        }
        uvec2 _1749 = uvec2(_1732 + ivec2(0, 1));
        uint _1936 = _1749.y;
        uint _1942 = _1936 + (_1936 << 10u);
        uint _1944 = _1942 ^ (_1942 >> 6u);
        uint _1946 = _1944 + (_1944 << 3u);
        uint _1948 = _1946 ^ (_1946 >> 11u);
        uint _1956 = (((_1749.x * 1664525u) + (_1948 + (_1948 << 15u))) + 1013904223u) * 1664525u;
        uint _1958 = _1956 ^ (_1956 >> 11u);
        uint _1961 = _1958 ^ ((_1958 << 7u) & 2636928640u);
        uint _1964 = _1961 ^ ((_1961 << 15u) & 4022730752u);
        uint _1966 = _1964 ^ (_1964 >> 18u);
        float _3819;
        _3819 = _3799;
        uint _1983;
        uint _2002;
        float _2008;
        uint _3818 = 0u;
        uint _4093 = _1966;
        for (;;)
        {
            if (!(_3818 < 1u))
            {
                break;
            }
            uint _1994 = _4093 + (_4093 << 10u);
            uint _1996 = _1994 ^ (_1994 >> 6u);
            uint _1998 = _1996 + (_1996 << 3u);
            uint _2000 = _1998 ^ (_1998 >> 11u);
            _2002 = _2000 + (_2000 << 15u);
            _2008 = uintBitsToFloat((_4093 & 8388607u) | 1065353216u) - 1.0;
            _1983 = _3818 + 1u;
            _4093 = _2002;
            _3819 = _2008;
            _3818 = _1983;
            continue;
        }
        uvec2 _1757 = uvec2(_1732 + ivec2(1));
        uint _2012 = _1757.y;
        uint _2018 = _2012 + (_2012 << 10u);
        uint _2020 = _2018 ^ (_2018 >> 6u);
        uint _2022 = _2020 + (_2020 << 3u);
        uint _2024 = _2022 ^ (_2022 >> 11u);
        uint _2032 = (((_1757.x * 1664525u) + (_2024 + (_2024 << 15u))) + 1013904223u) * 1664525u;
        uint _2034 = _2032 ^ (_2032 >> 11u);
        uint _2037 = _2034 ^ ((_2034 << 7u) & 2636928640u);
        uint _2040 = _2037 ^ ((_2037 << 15u) & 4022730752u);
        uint _2042 = _2040 ^ (_2040 >> 18u);
        float _3828;
        _3828 = _3799;
        uint _2059;
        uint _2078;
        float _2084;
        uint _3827 = 0u;
        uint _4092 = _2042;
        for (;;)
        {
            if (!(_3827 < 1u))
            {
                break;
            }
            uint _2070 = _4092 + (_4092 << 10u);
            uint _2072 = _2070 ^ (_2070 >> 6u);
            uint _2074 = _2072 + (_2072 << 3u);
            uint _2076 = _2074 ^ (_2074 >> 11u);
            _2078 = _2076 + (_2076 << 15u);
            _2084 = uintBitsToFloat((_4092 & 8388607u) | 1065353216u) - 1.0;
            _2059 = _3827 + 1u;
            _4092 = _2078;
            _3828 = _2084;
            _3827 = _2059;
            continue;
        }
        vec2 _2090 = (_1733 * _1733) * (vec2(3.0) - (vec2(2.0) * _1733));
        float _1765 = _2090.x;
        float _1766 = 1.0 - _1765;
        float _1768 = _2090.y;
        vec3 _3779 = _3776;
        _3779.y = _737 + ((((((1.0 - _1768) * ((_3804 * _1766) + (_3811 * _1765))) + ((_3819 * _1766) * _1768)) + ((_3828 * _1765) * _1768)) * 0.300000011920928955078125) * smoothstep(0.0, 1.0, _736));
        _3833 = _3779;
    }
    else
    {
        _3833 = _3776;
    }
    vec3 _2095 = _3833 * 0.4000000059604644775390625;
    ivec3 _2121 = ivec3(floor(_2095));
    vec3 _2122 = fract(_2095);
    uvec3 _2123 = uvec3(_2121);
    uint _2237 = _2123.z;
    uint _2243 = _2237 + (_2237 << 10u);
    uint _2245 = _2243 ^ (_2243 >> 6u);
    uint _2247 = _2245 + (_2245 << 3u);
    uint _2249 = _2247 ^ (_2247 >> 11u);
    uint _2257 = (((_2123.y * 1664525u) + (_2249 + (_2249 << 15u))) + 1013904223u) * 1664525u;
    uint _2259 = _2257 ^ (_2257 >> 11u);
    uint _2262 = _2259 ^ ((_2259 << 7u) & 2636928640u);
    uint _2265 = _2262 ^ ((_2262 << 15u) & 4022730752u);
    uint _2273 = (((_2123.x * 1664525u) + (_2265 ^ (_2265 >> 18u))) + 1013904223u) * 1664525u;
    uint _2275 = _2273 ^ (_2273 >> 11u);
    uint _2278 = _2275 ^ ((_2275 << 7u) & 2636928640u);
    uint _2281 = _2278 ^ ((_2278 << 15u) & 4022730752u);
    uint _2283 = _2281 ^ (_2281 >> 18u);
    uint _2302;
    uint _2321;
    vec2 _2110;
    uint _3844 = 0u;
    uint _4091 = _2283;
    for (;;)
    {
        if (!(_3844 < 2u))
        {
            break;
        }
        uint _2313 = _4091 + (_4091 << 10u);
        uint _2315 = _2313 ^ (_2313 >> 6u);
        uint _2317 = _2315 + (_2315 << 3u);
        uint _2319 = _2317 ^ (_2317 >> 11u);
        _2321 = _2319 + (_2319 << 15u);
        _2110[_3844] = uintBitsToFloat((_4091 & 8388607u) | 1065353216u) - 1.0;
        _2302 = _3844 + 1u;
        _4091 = _2321;
        _3844 = _2302;
        continue;
    }
    uvec3 _2132 = uvec3(_2121 + ivec3(1, 0, 0));
    uint _2337 = _2132.z;
    uint _2343 = _2337 + (_2337 << 10u);
    uint _2345 = _2343 ^ (_2343 >> 6u);
    uint _2347 = _2345 + (_2345 << 3u);
    uint _2349 = _2347 ^ (_2347 >> 11u);
    uint _2357 = (((_2132.y * 1664525u) + (_2349 + (_2349 << 15u))) + 1013904223u) * 1664525u;
    uint _2359 = _2357 ^ (_2357 >> 11u);
    uint _2362 = _2359 ^ ((_2359 << 7u) & 2636928640u);
    uint _2365 = _2362 ^ ((_2362 << 15u) & 4022730752u);
    uint _2373 = (((_2132.x * 1664525u) + (_2365 ^ (_2365 >> 18u))) + 1013904223u) * 1664525u;
    uint _2375 = _2373 ^ (_2373 >> 11u);
    uint _2378 = _2375 ^ ((_2375 << 7u) & 2636928640u);
    uint _2381 = _2378 ^ ((_2378 << 15u) & 4022730752u);
    uint _2383 = _2381 ^ (_2381 >> 18u);
    uint _2402;
    uint _2421;
    vec2 _2111;
    uint _3855 = 0u;
    uint _4090 = _2383;
    for (;;)
    {
        if (!(_3855 < 2u))
        {
            break;
        }
        uint _2413 = _4090 + (_4090 << 10u);
        uint _2415 = _2413 ^ (_2413 >> 6u);
        uint _2417 = _2415 + (_2415 << 3u);
        uint _2419 = _2417 ^ (_2417 >> 11u);
        _2421 = _2419 + (_2419 << 15u);
        _2111[_3855] = uintBitsToFloat((_4090 & 8388607u) | 1065353216u) - 1.0;
        _2402 = _3855 + 1u;
        _4090 = _2421;
        _3855 = _2402;
        continue;
    }
    uvec3 _2139 = uvec3(_2121 + ivec3(0, 1, 0));
    uint _2437 = _2139.z;
    uint _2443 = _2437 + (_2437 << 10u);
    uint _2445 = _2443 ^ (_2443 >> 6u);
    uint _2447 = _2445 + (_2445 << 3u);
    uint _2449 = _2447 ^ (_2447 >> 11u);
    uint _2457 = (((_2139.y * 1664525u) + (_2449 + (_2449 << 15u))) + 1013904223u) * 1664525u;
    uint _2459 = _2457 ^ (_2457 >> 11u);
    uint _2462 = _2459 ^ ((_2459 << 7u) & 2636928640u);
    uint _2465 = _2462 ^ ((_2462 << 15u) & 4022730752u);
    uint _2473 = (((_2139.x * 1664525u) + (_2465 ^ (_2465 >> 18u))) + 1013904223u) * 1664525u;
    uint _2475 = _2473 ^ (_2473 >> 11u);
    uint _2478 = _2475 ^ ((_2475 << 7u) & 2636928640u);
    uint _2481 = _2478 ^ ((_2478 << 15u) & 4022730752u);
    uint _2483 = _2481 ^ (_2481 >> 18u);
    uint _2502;
    uint _2521;
    vec2 _2112;
    uint _3867 = 0u;
    uint _4089 = _2483;
    for (;;)
    {
        if (!(_3867 < 2u))
        {
            break;
        }
        uint _2513 = _4089 + (_4089 << 10u);
        uint _2515 = _2513 ^ (_2513 >> 6u);
        uint _2517 = _2515 + (_2515 << 3u);
        uint _2519 = _2517 ^ (_2517 >> 11u);
        _2521 = _2519 + (_2519 << 15u);
        _2112[_3867] = uintBitsToFloat((_4089 & 8388607u) | 1065353216u) - 1.0;
        _2502 = _3867 + 1u;
        _4089 = _2521;
        _3867 = _2502;
        continue;
    }
    uvec3 _2147 = uvec3(_2121 + ivec3(1, 1, 0));
    uint _2537 = _2147.z;
    uint _2543 = _2537 + (_2537 << 10u);
    uint _2545 = _2543 ^ (_2543 >> 6u);
    uint _2547 = _2545 + (_2545 << 3u);
    uint _2549 = _2547 ^ (_2547 >> 11u);
    uint _2557 = (((_2147.y * 1664525u) + (_2549 + (_2549 << 15u))) + 1013904223u) * 1664525u;
    uint _2559 = _2557 ^ (_2557 >> 11u);
    uint _2562 = _2559 ^ ((_2559 << 7u) & 2636928640u);
    uint _2565 = _2562 ^ ((_2562 << 15u) & 4022730752u);
    uint _2573 = (((_2147.x * 1664525u) + (_2565 ^ (_2565 >> 18u))) + 1013904223u) * 1664525u;
    uint _2575 = _2573 ^ (_2573 >> 11u);
    uint _2578 = _2575 ^ ((_2575 << 7u) & 2636928640u);
    uint _2581 = _2578 ^ ((_2578 << 15u) & 4022730752u);
    uint _2583 = _2581 ^ (_2581 >> 18u);
    uint _2602;
    uint _2621;
    vec2 _2113;
    uint _3880 = 0u;
    uint _4088 = _2583;
    for (;;)
    {
        if (!(_3880 < 2u))
        {
            break;
        }
        uint _2613 = _4088 + (_4088 << 10u);
        uint _2615 = _2613 ^ (_2613 >> 6u);
        uint _2617 = _2615 + (_2615 << 3u);
        uint _2619 = _2617 ^ (_2617 >> 11u);
        _2621 = _2619 + (_2619 << 15u);
        _2113[_3880] = uintBitsToFloat((_4088 & 8388607u) | 1065353216u) - 1.0;
        _2602 = _3880 + 1u;
        _4088 = _2621;
        _3880 = _2602;
        continue;
    }
    uvec3 _2154 = uvec3(_2121 + ivec3(0, 0, 1));
    uint _2637 = _2154.z;
    uint _2643 = _2637 + (_2637 << 10u);
    uint _2645 = _2643 ^ (_2643 >> 6u);
    uint _2647 = _2645 + (_2645 << 3u);
    uint _2649 = _2647 ^ (_2647 >> 11u);
    uint _2657 = (((_2154.y * 1664525u) + (_2649 + (_2649 << 15u))) + 1013904223u) * 1664525u;
    uint _2659 = _2657 ^ (_2657 >> 11u);
    uint _2662 = _2659 ^ ((_2659 << 7u) & 2636928640u);
    uint _2665 = _2662 ^ ((_2662 << 15u) & 4022730752u);
    uint _2673 = (((_2154.x * 1664525u) + (_2665 ^ (_2665 >> 18u))) + 1013904223u) * 1664525u;
    uint _2675 = _2673 ^ (_2673 >> 11u);
    uint _2678 = _2675 ^ ((_2675 << 7u) & 2636928640u);
    uint _2681 = _2678 ^ ((_2678 << 15u) & 4022730752u);
    uint _2683 = _2681 ^ (_2681 >> 18u);
    uint _2702;
    uint _2721;
    vec2 _2114;
    uint _3894 = 0u;
    uint _4087 = _2683;
    for (;;)
    {
        if (!(_3894 < 2u))
        {
            break;
        }
        uint _2713 = _4087 + (_4087 << 10u);
        uint _2715 = _2713 ^ (_2713 >> 6u);
        uint _2717 = _2715 + (_2715 << 3u);
        uint _2719 = _2717 ^ (_2717 >> 11u);
        _2721 = _2719 + (_2719 << 15u);
        _2114[_3894] = uintBitsToFloat((_4087 & 8388607u) | 1065353216u) - 1.0;
        _2702 = _3894 + 1u;
        _4087 = _2721;
        _3894 = _2702;
        continue;
    }
    uvec3 _2163 = uvec3(_2121 + ivec3(1, 0, 1));
    uint _2737 = _2163.z;
    uint _2743 = _2737 + (_2737 << 10u);
    uint _2745 = _2743 ^ (_2743 >> 6u);
    uint _2747 = _2745 + (_2745 << 3u);
    uint _2749 = _2747 ^ (_2747 >> 11u);
    uint _2757 = (((_2163.y * 1664525u) + (_2749 + (_2749 << 15u))) + 1013904223u) * 1664525u;
    uint _2759 = _2757 ^ (_2757 >> 11u);
    uint _2762 = _2759 ^ ((_2759 << 7u) & 2636928640u);
    uint _2765 = _2762 ^ ((_2762 << 15u) & 4022730752u);
    uint _2773 = (((_2163.x * 1664525u) + (_2765 ^ (_2765 >> 18u))) + 1013904223u) * 1664525u;
    uint _2775 = _2773 ^ (_2773 >> 11u);
    uint _2778 = _2775 ^ ((_2775 << 7u) & 2636928640u);
    uint _2781 = _2778 ^ ((_2778 << 15u) & 4022730752u);
    uint _2783 = _2781 ^ (_2781 >> 18u);
    uint _2802;
    uint _2821;
    vec2 _2115;
    uint _3909 = 0u;
    uint _4086 = _2783;
    for (;;)
    {
        if (!(_3909 < 2u))
        {
            break;
        }
        uint _2813 = _4086 + (_4086 << 10u);
        uint _2815 = _2813 ^ (_2813 >> 6u);
        uint _2817 = _2815 + (_2815 << 3u);
        uint _2819 = _2817 ^ (_2817 >> 11u);
        _2821 = _2819 + (_2819 << 15u);
        _2115[_3909] = uintBitsToFloat((_4086 & 8388607u) | 1065353216u) - 1.0;
        _2802 = _3909 + 1u;
        _4086 = _2821;
        _3909 = _2802;
        continue;
    }
    uvec3 _2170 = uvec3(_2121 + ivec3(0, 1, 1));
    uint _2837 = _2170.z;
    uint _2843 = _2837 + (_2837 << 10u);
    uint _2845 = _2843 ^ (_2843 >> 6u);
    uint _2847 = _2845 + (_2845 << 3u);
    uint _2849 = _2847 ^ (_2847 >> 11u);
    uint _2857 = (((_2170.y * 1664525u) + (_2849 + (_2849 << 15u))) + 1013904223u) * 1664525u;
    uint _2859 = _2857 ^ (_2857 >> 11u);
    uint _2862 = _2859 ^ ((_2859 << 7u) & 2636928640u);
    uint _2865 = _2862 ^ ((_2862 << 15u) & 4022730752u);
    uint _2873 = (((_2170.x * 1664525u) + (_2865 ^ (_2865 >> 18u))) + 1013904223u) * 1664525u;
    uint _2875 = _2873 ^ (_2873 >> 11u);
    uint _2878 = _2875 ^ ((_2875 << 7u) & 2636928640u);
    uint _2881 = _2878 ^ ((_2878 << 15u) & 4022730752u);
    uint _2883 = _2881 ^ (_2881 >> 18u);
    uint _2902;
    uint _2921;
    vec2 _2116;
    uint _3925 = 0u;
    uint _4085 = _2883;
    for (;;)
    {
        if (!(_3925 < 2u))
        {
            break;
        }
        uint _2913 = _4085 + (_4085 << 10u);
        uint _2915 = _2913 ^ (_2913 >> 6u);
        uint _2917 = _2915 + (_2915 << 3u);
        uint _2919 = _2917 ^ (_2917 >> 11u);
        _2921 = _2919 + (_2919 << 15u);
        _2116[_3925] = uintBitsToFloat((_4085 & 8388607u) | 1065353216u) - 1.0;
        _2902 = _3925 + 1u;
        _4085 = _2921;
        _3925 = _2902;
        continue;
    }
    uvec3 _2178 = uvec3(_2121 + ivec3(1));
    uint _2937 = _2178.z;
    uint _2943 = _2937 + (_2937 << 10u);
    uint _2945 = _2943 ^ (_2943 >> 6u);
    uint _2947 = _2945 + (_2945 << 3u);
    uint _2949 = _2947 ^ (_2947 >> 11u);
    uint _2957 = (((_2178.y * 1664525u) + (_2949 + (_2949 << 15u))) + 1013904223u) * 1664525u;
    uint _2959 = _2957 ^ (_2957 >> 11u);
    uint _2962 = _2959 ^ ((_2959 << 7u) & 2636928640u);
    uint _2965 = _2962 ^ ((_2962 << 15u) & 4022730752u);
    uint _2973 = (((_2178.x * 1664525u) + (_2965 ^ (_2965 >> 18u))) + 1013904223u) * 1664525u;
    uint _2975 = _2973 ^ (_2973 >> 11u);
    uint _2978 = _2975 ^ ((_2975 << 7u) & 2636928640u);
    uint _2981 = _2978 ^ ((_2978 << 15u) & 4022730752u);
    uint _2983 = _2981 ^ (_2981 >> 18u);
    uint _3002;
    uint _3021;
    vec2 _2117;
    uint _3942 = 0u;
    uint _4084 = _2983;
    for (;;)
    {
        if (!(_3942 < 2u))
        {
            break;
        }
        uint _3013 = _4084 + (_4084 << 10u);
        uint _3015 = _3013 ^ (_3013 >> 6u);
        uint _3017 = _3015 + (_3015 << 3u);
        uint _3019 = _3017 ^ (_3017 >> 11u);
        _3021 = _3019 + (_3019 << 15u);
        _2117[_3942] = uintBitsToFloat((_4084 & 8388607u) | 1065353216u) - 1.0;
        _3002 = _3942 + 1u;
        _4084 = _3021;
        _3942 = _3002;
        continue;
    }
    vec3 _3033 = (_2122 * _2122) * (vec3(3.0) - (vec3(2.0) * _2122));
    float _2186 = _3033.x;
    float _2187 = 1.0 - _2186;
    float _2189 = _3033.y;
    float _2190 = 1.0 - _2189;
    float _2192 = _3033.z;
    float _2193 = 1.0 - _2192;
    vec2 _2100 = clamp((((((((((((_2110 * _2187) * _2190) * _2193) + (((_2111 * _2186) * _2190) * _2193)) + (((_2112 * _2187) * _2189) * _2193)) + (((_2113 * _2186) * _2189) * _2193)) + (((_2114 * _2187) * _2190) * _2192)) + (((_2115 * _2186) * _2190) * _2192)) + (((_2116 * _2187) * _2189) * _2192)) + (((_2117 * _2186) * _2189) * _2192)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
    vec3 _1185 = _3833 + (vec3(_2100.x, 0.0, _2100.y) * 0.0599999986588954925537109375);
    vec2 _1187 = _1185.xz;
    uint _1235 = uint(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_54]].seed ^ 787234);
    uint _3043 = _1235 + (_1235 << 10u);
    uint _3045 = _3043 ^ (_3043 >> 6u);
    uint _3047 = _3045 + (_3045 << 3u);
    uint _3049 = _3047 ^ (_3047 >> 11u);
    vec2 _1238 = _1187 + vec2(uintBitsToFloat(((_3049 + (_3049 << 15u)) & 8388607u) | 1065353216u) - 1.0);
    ivec2 _3073 = ivec2(floor(_1238));
    vec2 _3074 = fract(_1238);
    uvec2 _3075 = uvec2(_3073);
    uint _3125 = _3075.y;
    uint _3131 = _3125 + (_3125 << 10u);
    uint _3133 = _3131 ^ (_3131 >> 6u);
    uint _3135 = _3133 + (_3133 << 3u);
    uint _3137 = _3135 ^ (_3135 >> 11u);
    uint _3145 = (((_3075.x * 1664525u) + (_3137 + (_3137 << 15u))) + 1013904223u) * 1664525u;
    uint _3147 = _3145 ^ (_3145 >> 11u);
    uint _3150 = _3147 ^ ((_3147 << 7u) & 2636928640u);
    uint _3153 = _3150 ^ ((_3150 << 15u) & 4022730752u);
    uint _3155 = _3153 ^ (_3153 >> 18u);
    float _3969;
    _3969 = _3799;
    uint _3172;
    uint _3191;
    float _3197;
    uint _3968 = 0u;
    uint _4083 = _3155;
    for (;;)
    {
        if (!(_3968 < 1u))
        {
            break;
        }
        uint _3183 = _4083 + (_4083 << 10u);
        uint _3185 = _3183 ^ (_3183 >> 6u);
        uint _3187 = _3185 + (_3185 << 3u);
        uint _3189 = _3187 ^ (_3187 >> 11u);
        _3191 = _3189 + (_3189 << 15u);
        _3197 = uintBitsToFloat((_4083 & 8388607u) | 1065353216u) - 1.0;
        _3172 = _3968 + 1u;
        _4083 = _3191;
        _3969 = _3197;
        _3968 = _3172;
        continue;
    }
    uvec2 _3083 = uvec2(_3073 + ivec2(1, 0));
    uint _3201 = _3083.y;
    uint _3207 = _3201 + (_3201 << 10u);
    uint _3209 = _3207 ^ (_3207 >> 6u);
    uint _3211 = _3209 + (_3209 << 3u);
    uint _3213 = _3211 ^ (_3211 >> 11u);
    uint _3221 = (((_3083.x * 1664525u) + (_3213 + (_3213 << 15u))) + 1013904223u) * 1664525u;
    uint _3223 = _3221 ^ (_3221 >> 11u);
    uint _3226 = _3223 ^ ((_3223 << 7u) & 2636928640u);
    uint _3229 = _3226 ^ ((_3226 << 15u) & 4022730752u);
    uint _3231 = _3229 ^ (_3229 >> 18u);
    float _3989;
    _3989 = _3799;
    uint _3248;
    uint _3267;
    float _3273;
    uint _3988 = 0u;
    uint _4082 = _3231;
    for (;;)
    {
        if (!(_3988 < 1u))
        {
            break;
        }
        uint _3259 = _4082 + (_4082 << 10u);
        uint _3261 = _3259 ^ (_3259 >> 6u);
        uint _3263 = _3261 + (_3261 << 3u);
        uint _3265 = _3263 ^ (_3263 >> 11u);
        _3267 = _3265 + (_3265 << 15u);
        _3273 = uintBitsToFloat((_4082 & 8388607u) | 1065353216u) - 1.0;
        _3248 = _3988 + 1u;
        _4082 = _3267;
        _3989 = _3273;
        _3988 = _3248;
        continue;
    }
    uvec2 _3090 = uvec2(_3073 + ivec2(0, 1));
    uint _3277 = _3090.y;
    uint _3283 = _3277 + (_3277 << 10u);
    uint _3285 = _3283 ^ (_3283 >> 6u);
    uint _3287 = _3285 + (_3285 << 3u);
    uint _3289 = _3287 ^ (_3287 >> 11u);
    uint _3297 = (((_3090.x * 1664525u) + (_3289 + (_3289 << 15u))) + 1013904223u) * 1664525u;
    uint _3299 = _3297 ^ (_3297 >> 11u);
    uint _3302 = _3299 ^ ((_3299 << 7u) & 2636928640u);
    uint _3305 = _3302 ^ ((_3302 << 15u) & 4022730752u);
    uint _3307 = _3305 ^ (_3305 >> 18u);
    float _4010;
    _4010 = _3799;
    uint _3324;
    uint _3343;
    float _3349;
    uint _4009 = 0u;
    uint _4081 = _3307;
    for (;;)
    {
        if (!(_4009 < 1u))
        {
            break;
        }
        uint _3335 = _4081 + (_4081 << 10u);
        uint _3337 = _3335 ^ (_3335 >> 6u);
        uint _3339 = _3337 + (_3337 << 3u);
        uint _3341 = _3339 ^ (_3339 >> 11u);
        _3343 = _3341 + (_3341 << 15u);
        _3349 = uintBitsToFloat((_4081 & 8388607u) | 1065353216u) - 1.0;
        _3324 = _4009 + 1u;
        _4081 = _3343;
        _4010 = _3349;
        _4009 = _3324;
        continue;
    }
    uvec2 _3098 = uvec2(_3073 + ivec2(1));
    uint _3353 = _3098.y;
    uint _3359 = _3353 + (_3353 << 10u);
    uint _3361 = _3359 ^ (_3359 >> 6u);
    uint _3363 = _3361 + (_3361 << 3u);
    uint _3365 = _3363 ^ (_3363 >> 11u);
    uint _3373 = (((_3098.x * 1664525u) + (_3365 + (_3365 << 15u))) + 1013904223u) * 1664525u;
    uint _3375 = _3373 ^ (_3373 >> 11u);
    uint _3378 = _3375 ^ ((_3375 << 7u) & 2636928640u);
    uint _3381 = _3378 ^ ((_3378 << 15u) & 4022730752u);
    uint _3383 = _3381 ^ (_3381 >> 18u);
    float _4032;
    _4032 = _3799;
    uint _3400;
    uint _3419;
    float _3425;
    uint _4031 = 0u;
    uint _4080 = _3383;
    for (;;)
    {
        if (!(_4031 < 1u))
        {
            break;
        }
        uint _3411 = _4080 + (_4080 << 10u);
        uint _3413 = _3411 ^ (_3411 >> 6u);
        uint _3415 = _3413 + (_3413 << 3u);
        uint _3417 = _3415 ^ (_3415 >> 11u);
        _3419 = _3417 + (_3417 << 15u);
        _3425 = uintBitsToFloat((_4080 & 8388607u) | 1065353216u) - 1.0;
        _3400 = _4031 + 1u;
        _4080 = _3419;
        _4032 = _3425;
        _4031 = _3400;
        continue;
    }
    vec2 _3431 = (_3074 * _3074) * (vec2(3.0) - (vec2(2.0) * _3074));
    float _3106 = _3431.x;
    float _3107 = 1.0 - _3106;
    float _3109 = _3431.y;
    vec2 _1266 = ((_1187 * 0.2860000133514404296875) * 0.5) + ((_1185.yy * 0.2860000133514404296875) * 0.5);
    vec2 _3442 = floor(_1266 + vec2(dot(_1266, vec2(0.3660254180431365966796875))));
    vec2 _3446 = (_1266 - _3442) + vec2(dot(_3442, vec2(0.211324870586395263671875)));
    float _3447 = _3446.x;
    float _3448 = _3446.y;
    vec2 _4123 = mix(vec2(0.0, 1.0), vec2(1.0, 0.0), bvec2(_3447 > _3448));
    vec4 _3454 = _3446.xyxy + vec4(0.211324870586395263671875, 0.211324870586395263671875, -0.57735025882720947265625, -0.57735025882720947265625);
    vec2 _3457 = _3454.xy - _4123;
    vec4 _3781 = _3454;
    _3781.x = _3457.x;
    _3781.y = _3457.y;
    vec2 _3462 = _3442 - vec2(289.0) * trunc(_3442 / vec2(289.0));
    vec3 _3468 = vec3(_3462.y) + vec3(0.0, _4123.y, 1.0);
    vec3 _3541 = ((_3468 * 34.0) + vec3(1.0)) * _3468;
    vec3 _3476 = ((_3541 - vec3(289.0) * trunc(_3541 / vec3(289.0))) + vec3(_3462.x)) + vec3(0.0, _4123.x, 1.0);
    vec3 _3548 = ((_3476 * 34.0) + vec3(1.0)) * _3476;
    vec3 _3492 = max(vec3(0.5) - vec3(dot(_3446, _3446), dot(_3781.xy, _3781.xy), dot(_3781.zw, _3781.zw)), vec3(0.0));
    vec3 _3493 = _3492 * _3492;
    vec3 _3497 = fract((_3548 - vec3(289.0) * trunc(_3548 / vec3(289.0))) * vec3(0.024390242993831634521484375)) * 2.0;
    vec3 _3499 = _3497 - vec3(1.0);
    vec3 _3502 = abs(_3499) - vec3(0.5);
    vec3 _3506 = _3499 - floor(_3497 + vec3(-0.5));
    _1614.w = _1613.y + dot(_732 - _1185, _1614.xyz);
    int _1427 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_54]].seed * 1664525;
    uint _1428 = uint(_1427);
    uint _3557 = _1428 + (_1428 << 10u);
    uint _3559 = _3557 ^ (_3557 >> 6u);
    uint _3561 = _3559 + (_3559 << 3u);
    uint _3563 = _3561 ^ (_3561 >> 11u);
    uint _1436 = uint(_1427 + 34568);
    uint _3579 = _1436 + (_1436 << 10u);
    uint _3581 = _3579 ^ (_3579 >> 6u);
    uint _3583 = _3581 + (_3581 << 3u);
    uint _3585 = _3583 ^ (_3583 >> 11u);
    vec2 _1452 = vec2(round((uintBitsToFloat(((_3563 + (_3563 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 5.0) * 0.20000000298023223876953125, round((uintBitsToFloat(((_3585 + (_3585 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 5.0) * 0.20000000298023223876953125);
    float _4079;
    if (!is_main_roof_body)
    {
        _4079 = clamp(_736 * 0.0500000007450580596923828125, 0.0, 1.0) * 0.699999988079071044921875;
    }
    else
    {
        _4079 = _1646;
    }
    gl_Position = vec4(_1185, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_pos_ws = _1185.xyz;
    entryPointParam_vs_main_roof_dmg_noise = pow(fract((((1.0 - _3109) * ((_3969 * _3107) + (_3989 * _3106))) + ((_4010 * _3107) * _3109)) + ((_4032 * _3106) * _3109)), 1.5);
    entryPointParam_vs_main_weathering_noise = dot((_3493 * _3493) * (vec3(1.792842864990234375) - (((_3506 * _3506) + (_3502 * _3502)) * 0.8537347316741943359375)), vec3((_3506.x * _3447) + (_3502.x * _3448), (_3506.yz * _3781.xz) + (_3502.yz * _3781.yw))) * 32.5;
    entryPointParam_vs_main_roof_t = _4079;
    entryPointParam_vs_main_front_face_uv = (((Vertex_Position.xy * vec2(0.85000002384185791015625, 0.920000016689300537109375)) + vec2(0.5)) * 0.20000000298023223876953125) + _1452;
    entryPointParam_vs_main_clipping_plane = _1614;
    entryPointParam_vs_main_instance_index = nani_instance_indirection_buffer._member0[_54];
    entryPointParam_vs_main_vertex_pos_ls_z = _563.z;
    entryPointParam_vs_main_side_face_uv = (((Vertex_Position.yz * vec2(0.800000011920928955078125, 0.89999997615814208984375)) + vec2(0.5)) * 0.20000000298023223876953125) + _1452;
}

