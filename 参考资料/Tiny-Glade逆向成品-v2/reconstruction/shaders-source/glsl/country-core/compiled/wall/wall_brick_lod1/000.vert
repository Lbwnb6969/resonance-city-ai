#version 460

struct _Array_natural_uint5
{
    uint data[5];
};

struct _Array_natural_uint3
{
    uint data[3];
};

struct _Array_natural_uint2
{
    uint data[2];
};

struct InstancedWallData_natural
{
    _Array_natural_uint5 transform_matrix_packed;
    _Array_natural_uint3 transform_translation;
    _Array_natural_uint2 sin_deform_y_packed;
    _Array_natural_uint3 arch_and_wallspace_packed;
    uint seed;
    uint source_id;
    uint flags;
};

struct _MatrixStorage_float3x3_ColMajornatural
{
    vec3 data[3];
};

layout(set = 0, binding = 0, std140) uniform MaterialData_natural
{
    uint use_highlight_draw_list;
} material_data;

layout(set = 0, binding = 2, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} material_data_instance_list;

layout(set = 0, binding = 1, std430) readonly buffer material_data_instanced_wall_data
{
    InstancedWallData_natural _member0[];
} material_data_instanced_wall_data_1;

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

layout(set = 9, binding = 0, std430) readonly buffer stone_foundation_colors_ids
{
    uint _member0[];
} stone_foundation_colors_ids_1;

layout(set = 8, binding = 1, std430) readonly buffer roof_colors_ids
{
    uint _member0[];
} roof_colors_ids_1;

layout(set = 7, binding = 0, std430) readonly buffer wall_color_data_wall_color_ids
{
    uint _member0[];
} wall_color_data_wall_color_ids_1;

layout(set = 10, binding = 0, std430) readonly buffer wall_identity_data_slot_wall_ids
{
    uint _member0[];
} wall_identity_data_slot_wall_ids_1;

layout(location = 0) flat out uint entryPointParam_vs_main_instance_seed;
layout(location = 1) out vec3 entryPointParam_vs_main_vertex_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_vertex_position_ws;
layout(location = 3) out vec3 entryPointParam_vs_main_pos_ms;
layout(location = 4) out vec3 entryPointParam_vs_main_dir_ms;
layout(location = 5) out float entryPointParam_vs_main_squish_factor;
layout(location = 6) flat out vec3 entryPointParam_vs_main_offset_from_instance_transform;
layout(location = 7) out float entryPointParam_vs_main_global_arch_height;
layout(location = 8) flat out float entryPointParam_vs_main_stone_foundation_clip_y;
layout(location = 9) out vec2 entryPointParam_vs_main_frag_wall_uv;
layout(location = 10) flat out int entryPointParam_vs_main_color_id;
layout(location = 11) flat out vec2 entryPointParam_vs_main_frag_position_ws_no_brick_depth_xz;
layout(location = 12) flat out int entryPointParam_vs_main_flags;
layout(location = 13) flat out uint entryPointParam_vs_main_instance_index;
layout(location = 14) flat out _MatrixStorage_float3x3_ColMajornatural entryPointParam_vs_main_normal_matrix;

void main()
{
    bool _88 = material_data.use_highlight_draw_list != 0u;
    uint _123 = ((1u + (2u * uint(_88))) * 2097152u) + uint(gl_InstanceIndex);
    vec2 _1322 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].sin_deform_y_packed.data[0]);
    vec2 _1324 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].sin_deform_y_packed.data[1]);
    uint _1329 = uint(int(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].seed & 3u)) & 3u;
    int _1332 = -int(_1329 & 1u);
    int _1337 = 1 - int((_1329 >> uint(1)) << uint(1));
    float _1339 = float((~_1332) & _1337);
    float _1341 = float(_1332 & _1337);
    vec2 _1360 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].transform_matrix_packed.data[1]);
    mat3x4 _1436 = transpose(mat4x3(vec3(unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].transform_matrix_packed.data[0]), _1360.x), vec3(_1360.y, unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].transform_matrix_packed.data[2])), vec3(unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].transform_matrix_packed.data[3]), unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].transform_matrix_packed.data[4]).x), vec3(uintBitsToFloat(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].transform_translation.data[0]), uintBitsToFloat(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].transform_translation.data[1]), uintBitsToFloat(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].transform_translation.data[2]))));
    mat3x4 _3048 = _1436;
    _3048[0].w = _1436[0].w;
    mat3x4 _3050 = _3048;
    _3050[1].w = _1436[1].w;
    mat3x4 _3052 = _3050;
    _3052[2].w = _1436[2].w;
    uint _357 = uint(gl_VertexIndex - gl_BaseVertex);
    uvec3 coord = uvec3((_357 & 4u) >> uint(2), (_357 & 2u) >> uint(1), _357 & 1u);
    vec4 _1441 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    vec3 _1445 = _1441.xyz / vec3(_1441.w);
    vec3 Vertex_Position = vec3(mix(uvec3(1u) - coord, coord, greaterThan(mat3(_3048[0].xyz, _3050[1].xyz, _3052[2].xyz) * (_1445 - (vec4(0.0, 0.0, 0.0, 1.0) * _3052)), vec3(0.0)))) - vec3(0.5);
    int _416 = int(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].flags);
    mat3x4 _3061;
    if ((_416 & 32) != 0)
    {
        vec2 _1462 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].arch_and_wallspace_packed.data[0]);
        vec3 _489 = vec3(_3048[0].z, _3050[1].z, _3052[2].z) * mix(_1462.x, _1462.y, 0.5 - Vertex_Position.x);
        mat3x4 _3054 = _3052;
        _3054[0].z = _489.x;
        _3054[1].z = _489.y;
        _3054[2].z = _489.z;
        _3061 = _3054;
    }
    else
    {
        _3061 = _3052;
    }
    int _2795;
    if (_88)
    {
        _2795 = _416 | 4096;
    }
    else
    {
        _2795 = _416;
    }
    vec3 _2797;
    if ((_2795 & 4) != 0)
    {
        uint _1485 = material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].seed + (material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].seed << 10u);
        uint _1487 = _1485 ^ (_1485 >> 6u);
        uint _1489 = _1487 + (_1487 << 3u);
        uint _1491 = _1489 ^ (_1489 >> 11u);
        float _3073 = ((uintBitsToFloat(((_1491 + (_1491 << 15u)) & 8388607u) | 1065353216u) - 1.0) > 0.89999997615814208984375) ? 1.0 : 1.10000002384185791015625;
        _2797 = mix(vec3(_3073, _3073, 1.0), vec3(1.0499999523162841796875), bvec3((_416 & 1) != 0));
    }
    else
    {
        _2797 = vec3(1.0);
    }
    mat3x4 _587 = mat4(vec4(_2797.x, 0.0, 0.0, 0.0), vec4(0.0, _2797.y, 0.0, 0.0), vec4(0.0, 0.0, _2797.z, 0.0), vec4(0.0, 0.0, 0.0, 1.0)) * _3061;
    vec4 _591 = vec4(vec4(Vertex_Position, 1.0) * _587, 1.0);
    vec3 _593 = _591.xyz;
    vec3 _1502 = _593 * 0.4000000059604644775390625;
    ivec3 _1528 = ivec3(floor(_1502));
    vec3 _1529 = fract(_1502);
    uvec3 _1530 = uvec3(_1528);
    uint _1644 = _1530.z;
    uint _1650 = _1644 + (_1644 << 10u);
    uint _1652 = _1650 ^ (_1650 >> 6u);
    uint _1654 = _1652 + (_1652 << 3u);
    uint _1656 = _1654 ^ (_1654 >> 11u);
    uint _1664 = (((_1530.y * 1664525u) + (_1656 + (_1656 << 15u))) + 1013904223u) * 1664525u;
    uint _1666 = _1664 ^ (_1664 >> 11u);
    uint _1669 = _1666 ^ ((_1666 << 7u) & 2636928640u);
    uint _1672 = _1669 ^ ((_1669 << 15u) & 4022730752u);
    uint _1680 = (((_1530.x * 1664525u) + (_1672 ^ (_1672 >> 18u))) + 1013904223u) * 1664525u;
    uint _1682 = _1680 ^ (_1680 >> 11u);
    uint _1685 = _1682 ^ ((_1682 << 7u) & 2636928640u);
    uint _1688 = _1685 ^ ((_1685 << 15u) & 4022730752u);
    uint _1690 = _1688 ^ (_1688 >> 18u);
    uint _1709;
    uint _1728;
    vec2 _1517;
    uint _2805 = 0u;
    uint _3038 = _1690;
    for (;;)
    {
        if (!(_2805 < 2u))
        {
            break;
        }
        uint _1720 = _3038 + (_3038 << 10u);
        uint _1722 = _1720 ^ (_1720 >> 6u);
        uint _1724 = _1722 + (_1722 << 3u);
        uint _1726 = _1724 ^ (_1724 >> 11u);
        _1728 = _1726 + (_1726 << 15u);
        _1517[_2805] = uintBitsToFloat((_3038 & 8388607u) | 1065353216u) - 1.0;
        _1709 = _2805 + 1u;
        _3038 = _1728;
        _2805 = _1709;
        continue;
    }
    uvec3 _1539 = uvec3(_1528 + ivec3(1, 0, 0));
    uint _1744 = _1539.z;
    uint _1750 = _1744 + (_1744 << 10u);
    uint _1752 = _1750 ^ (_1750 >> 6u);
    uint _1754 = _1752 + (_1752 << 3u);
    uint _1756 = _1754 ^ (_1754 >> 11u);
    uint _1764 = (((_1539.y * 1664525u) + (_1756 + (_1756 << 15u))) + 1013904223u) * 1664525u;
    uint _1766 = _1764 ^ (_1764 >> 11u);
    uint _1769 = _1766 ^ ((_1766 << 7u) & 2636928640u);
    uint _1772 = _1769 ^ ((_1769 << 15u) & 4022730752u);
    uint _1780 = (((_1539.x * 1664525u) + (_1772 ^ (_1772 >> 18u))) + 1013904223u) * 1664525u;
    uint _1782 = _1780 ^ (_1780 >> 11u);
    uint _1785 = _1782 ^ ((_1782 << 7u) & 2636928640u);
    uint _1788 = _1785 ^ ((_1785 << 15u) & 4022730752u);
    uint _1790 = _1788 ^ (_1788 >> 18u);
    uint _1809;
    uint _1828;
    vec2 _1518;
    uint _2812 = 0u;
    uint _3037 = _1790;
    for (;;)
    {
        if (!(_2812 < 2u))
        {
            break;
        }
        uint _1820 = _3037 + (_3037 << 10u);
        uint _1822 = _1820 ^ (_1820 >> 6u);
        uint _1824 = _1822 + (_1822 << 3u);
        uint _1826 = _1824 ^ (_1824 >> 11u);
        _1828 = _1826 + (_1826 << 15u);
        _1518[_2812] = uintBitsToFloat((_3037 & 8388607u) | 1065353216u) - 1.0;
        _1809 = _2812 + 1u;
        _3037 = _1828;
        _2812 = _1809;
        continue;
    }
    uvec3 _1546 = uvec3(_1528 + ivec3(0, 1, 0));
    uint _1844 = _1546.z;
    uint _1850 = _1844 + (_1844 << 10u);
    uint _1852 = _1850 ^ (_1850 >> 6u);
    uint _1854 = _1852 + (_1852 << 3u);
    uint _1856 = _1854 ^ (_1854 >> 11u);
    uint _1864 = (((_1546.y * 1664525u) + (_1856 + (_1856 << 15u))) + 1013904223u) * 1664525u;
    uint _1866 = _1864 ^ (_1864 >> 11u);
    uint _1869 = _1866 ^ ((_1866 << 7u) & 2636928640u);
    uint _1872 = _1869 ^ ((_1869 << 15u) & 4022730752u);
    uint _1880 = (((_1546.x * 1664525u) + (_1872 ^ (_1872 >> 18u))) + 1013904223u) * 1664525u;
    uint _1882 = _1880 ^ (_1880 >> 11u);
    uint _1885 = _1882 ^ ((_1882 << 7u) & 2636928640u);
    uint _1888 = _1885 ^ ((_1885 << 15u) & 4022730752u);
    uint _1890 = _1888 ^ (_1888 >> 18u);
    uint _1909;
    uint _1928;
    vec2 _1519;
    uint _2820 = 0u;
    uint _3036 = _1890;
    for (;;)
    {
        if (!(_2820 < 2u))
        {
            break;
        }
        uint _1920 = _3036 + (_3036 << 10u);
        uint _1922 = _1920 ^ (_1920 >> 6u);
        uint _1924 = _1922 + (_1922 << 3u);
        uint _1926 = _1924 ^ (_1924 >> 11u);
        _1928 = _1926 + (_1926 << 15u);
        _1519[_2820] = uintBitsToFloat((_3036 & 8388607u) | 1065353216u) - 1.0;
        _1909 = _2820 + 1u;
        _3036 = _1928;
        _2820 = _1909;
        continue;
    }
    uvec3 _1554 = uvec3(_1528 + ivec3(1, 1, 0));
    uint _1944 = _1554.z;
    uint _1950 = _1944 + (_1944 << 10u);
    uint _1952 = _1950 ^ (_1950 >> 6u);
    uint _1954 = _1952 + (_1952 << 3u);
    uint _1956 = _1954 ^ (_1954 >> 11u);
    uint _1964 = (((_1554.y * 1664525u) + (_1956 + (_1956 << 15u))) + 1013904223u) * 1664525u;
    uint _1966 = _1964 ^ (_1964 >> 11u);
    uint _1969 = _1966 ^ ((_1966 << 7u) & 2636928640u);
    uint _1972 = _1969 ^ ((_1969 << 15u) & 4022730752u);
    uint _1980 = (((_1554.x * 1664525u) + (_1972 ^ (_1972 >> 18u))) + 1013904223u) * 1664525u;
    uint _1982 = _1980 ^ (_1980 >> 11u);
    uint _1985 = _1982 ^ ((_1982 << 7u) & 2636928640u);
    uint _1988 = _1985 ^ ((_1985 << 15u) & 4022730752u);
    uint _1990 = _1988 ^ (_1988 >> 18u);
    uint _2009;
    uint _2028;
    vec2 _1520;
    uint _2829 = 0u;
    uint _3035 = _1990;
    for (;;)
    {
        if (!(_2829 < 2u))
        {
            break;
        }
        uint _2020 = _3035 + (_3035 << 10u);
        uint _2022 = _2020 ^ (_2020 >> 6u);
        uint _2024 = _2022 + (_2022 << 3u);
        uint _2026 = _2024 ^ (_2024 >> 11u);
        _2028 = _2026 + (_2026 << 15u);
        _1520[_2829] = uintBitsToFloat((_3035 & 8388607u) | 1065353216u) - 1.0;
        _2009 = _2829 + 1u;
        _3035 = _2028;
        _2829 = _2009;
        continue;
    }
    uvec3 _1561 = uvec3(_1528 + ivec3(0, 0, 1));
    uint _2044 = _1561.z;
    uint _2050 = _2044 + (_2044 << 10u);
    uint _2052 = _2050 ^ (_2050 >> 6u);
    uint _2054 = _2052 + (_2052 << 3u);
    uint _2056 = _2054 ^ (_2054 >> 11u);
    uint _2064 = (((_1561.y * 1664525u) + (_2056 + (_2056 << 15u))) + 1013904223u) * 1664525u;
    uint _2066 = _2064 ^ (_2064 >> 11u);
    uint _2069 = _2066 ^ ((_2066 << 7u) & 2636928640u);
    uint _2072 = _2069 ^ ((_2069 << 15u) & 4022730752u);
    uint _2080 = (((_1561.x * 1664525u) + (_2072 ^ (_2072 >> 18u))) + 1013904223u) * 1664525u;
    uint _2082 = _2080 ^ (_2080 >> 11u);
    uint _2085 = _2082 ^ ((_2082 << 7u) & 2636928640u);
    uint _2088 = _2085 ^ ((_2085 << 15u) & 4022730752u);
    uint _2090 = _2088 ^ (_2088 >> 18u);
    uint _2109;
    uint _2128;
    vec2 _1521;
    uint _2839 = 0u;
    uint _3034 = _2090;
    for (;;)
    {
        if (!(_2839 < 2u))
        {
            break;
        }
        uint _2120 = _3034 + (_3034 << 10u);
        uint _2122 = _2120 ^ (_2120 >> 6u);
        uint _2124 = _2122 + (_2122 << 3u);
        uint _2126 = _2124 ^ (_2124 >> 11u);
        _2128 = _2126 + (_2126 << 15u);
        _1521[_2839] = uintBitsToFloat((_3034 & 8388607u) | 1065353216u) - 1.0;
        _2109 = _2839 + 1u;
        _3034 = _2128;
        _2839 = _2109;
        continue;
    }
    uvec3 _1570 = uvec3(_1528 + ivec3(1, 0, 1));
    uint _2144 = _1570.z;
    uint _2150 = _2144 + (_2144 << 10u);
    uint _2152 = _2150 ^ (_2150 >> 6u);
    uint _2154 = _2152 + (_2152 << 3u);
    uint _2156 = _2154 ^ (_2154 >> 11u);
    uint _2164 = (((_1570.y * 1664525u) + (_2156 + (_2156 << 15u))) + 1013904223u) * 1664525u;
    uint _2166 = _2164 ^ (_2164 >> 11u);
    uint _2169 = _2166 ^ ((_2166 << 7u) & 2636928640u);
    uint _2172 = _2169 ^ ((_2169 << 15u) & 4022730752u);
    uint _2180 = (((_1570.x * 1664525u) + (_2172 ^ (_2172 >> 18u))) + 1013904223u) * 1664525u;
    uint _2182 = _2180 ^ (_2180 >> 11u);
    uint _2185 = _2182 ^ ((_2182 << 7u) & 2636928640u);
    uint _2188 = _2185 ^ ((_2185 << 15u) & 4022730752u);
    uint _2190 = _2188 ^ (_2188 >> 18u);
    uint _2209;
    uint _2228;
    vec2 _1522;
    uint _2850 = 0u;
    uint _3033 = _2190;
    for (;;)
    {
        if (!(_2850 < 2u))
        {
            break;
        }
        uint _2220 = _3033 + (_3033 << 10u);
        uint _2222 = _2220 ^ (_2220 >> 6u);
        uint _2224 = _2222 + (_2222 << 3u);
        uint _2226 = _2224 ^ (_2224 >> 11u);
        _2228 = _2226 + (_2226 << 15u);
        _1522[_2850] = uintBitsToFloat((_3033 & 8388607u) | 1065353216u) - 1.0;
        _2209 = _2850 + 1u;
        _3033 = _2228;
        _2850 = _2209;
        continue;
    }
    uvec3 _1577 = uvec3(_1528 + ivec3(0, 1, 1));
    uint _2244 = _1577.z;
    uint _2250 = _2244 + (_2244 << 10u);
    uint _2252 = _2250 ^ (_2250 >> 6u);
    uint _2254 = _2252 + (_2252 << 3u);
    uint _2256 = _2254 ^ (_2254 >> 11u);
    uint _2264 = (((_1577.y * 1664525u) + (_2256 + (_2256 << 15u))) + 1013904223u) * 1664525u;
    uint _2266 = _2264 ^ (_2264 >> 11u);
    uint _2269 = _2266 ^ ((_2266 << 7u) & 2636928640u);
    uint _2272 = _2269 ^ ((_2269 << 15u) & 4022730752u);
    uint _2280 = (((_1577.x * 1664525u) + (_2272 ^ (_2272 >> 18u))) + 1013904223u) * 1664525u;
    uint _2282 = _2280 ^ (_2280 >> 11u);
    uint _2285 = _2282 ^ ((_2282 << 7u) & 2636928640u);
    uint _2288 = _2285 ^ ((_2285 << 15u) & 4022730752u);
    uint _2290 = _2288 ^ (_2288 >> 18u);
    uint _2309;
    uint _2328;
    vec2 _1523;
    uint _2862 = 0u;
    uint _3032 = _2290;
    for (;;)
    {
        if (!(_2862 < 2u))
        {
            break;
        }
        uint _2320 = _3032 + (_3032 << 10u);
        uint _2322 = _2320 ^ (_2320 >> 6u);
        uint _2324 = _2322 + (_2322 << 3u);
        uint _2326 = _2324 ^ (_2324 >> 11u);
        _2328 = _2326 + (_2326 << 15u);
        _1523[_2862] = uintBitsToFloat((_3032 & 8388607u) | 1065353216u) - 1.0;
        _2309 = _2862 + 1u;
        _3032 = _2328;
        _2862 = _2309;
        continue;
    }
    uvec3 _1585 = uvec3(_1528 + ivec3(1));
    uint _2344 = _1585.z;
    uint _2350 = _2344 + (_2344 << 10u);
    uint _2352 = _2350 ^ (_2350 >> 6u);
    uint _2354 = _2352 + (_2352 << 3u);
    uint _2356 = _2354 ^ (_2354 >> 11u);
    uint _2364 = (((_1585.y * 1664525u) + (_2356 + (_2356 << 15u))) + 1013904223u) * 1664525u;
    uint _2366 = _2364 ^ (_2364 >> 11u);
    uint _2369 = _2366 ^ ((_2366 << 7u) & 2636928640u);
    uint _2372 = _2369 ^ ((_2369 << 15u) & 4022730752u);
    uint _2380 = (((_1585.x * 1664525u) + (_2372 ^ (_2372 >> 18u))) + 1013904223u) * 1664525u;
    uint _2382 = _2380 ^ (_2380 >> 11u);
    uint _2385 = _2382 ^ ((_2382 << 7u) & 2636928640u);
    uint _2388 = _2385 ^ ((_2385 << 15u) & 4022730752u);
    uint _2390 = _2388 ^ (_2388 >> 18u);
    uint _2409;
    uint _2428;
    vec2 _1524;
    uint _2875 = 0u;
    uint _3031 = _2390;
    for (;;)
    {
        if (!(_2875 < 2u))
        {
            break;
        }
        uint _2420 = _3031 + (_3031 << 10u);
        uint _2422 = _2420 ^ (_2420 >> 6u);
        uint _2424 = _2422 + (_2422 << 3u);
        uint _2426 = _2424 ^ (_2424 >> 11u);
        _2428 = _2426 + (_2426 << 15u);
        _1524[_2875] = uintBitsToFloat((_3031 & 8388607u) | 1065353216u) - 1.0;
        _2409 = _2875 + 1u;
        _3031 = _2428;
        _2875 = _2409;
        continue;
    }
    vec3 _2440 = (_1529 * _1529) * (vec3(3.0) - (vec3(2.0) * _1529));
    float _1593 = _2440.x;
    float _1594 = 1.0 - _1593;
    float _1596 = _2440.y;
    float _1597 = 1.0 - _1596;
    float _1599 = _2440.z;
    float _1600 = 1.0 - _1599;
    vec2 _1507 = clamp((((((((((((_1517 * _1594) * _1597) * _1600) + (((_1518 * _1593) * _1597) * _1600)) + (((_1519 * _1594) * _1596) * _1600)) + (((_1520 * _1593) * _1596) * _1600)) + (((_1521 * _1594) * _1597) * _1599)) + (((_1522 * _1593) * _1597) * _1599)) + (((_1523 * _1594) * _1596) * _1599)) + (((_1524 * _1593) * _1596) * _1599)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
    vec3 _879 = _593 + (vec3(_1507.x, 0.0, _1507.y) * 0.0599999986588954925537109375);
    vec4 _2787 = _591;
    _2787.x = _879.x;
    _2787.z = _879.z;
    vec3 _887 = vec4(0.0, 0.0, 0.0, 1.0) * _587;
    float _2445 = Vertex_Position.x - (-0.5);
    float _903 = _879.y + mix(mix(_1322.x, _1322.y, _2445), mix(_1324.x, _1324.y, _2445), Vertex_Position.y - (-0.5));
    _2787.y = _903;
    vec2 _2481 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].arch_and_wallspace_packed.data[1]);
    mat3 _940 = mat3(_587[0].xyz, _587[1].xyz, _587[2].xyz);
    vec3 _2489 = vec3(1.0, 0.0, 0.0) * _940;
    vec3 _2490 = vec3(0.0, 1.0, 0.0) * _940;
    vec3 _2491 = vec3(0.0, 0.0, 1.0) * _940;
    vec3 _2494 = cross(_2489, _2490);
    vec3 _2497 = vec3(1.0 / dot(_2491, _2494));
    mat3 _963 = transpose(mat3(cross(_2490, _2491) * _2497, cross(_2491, _2489) * _2497, _2494 * _2497));
    vec2 wall_uv = vec2(mix(_2481.y, unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].arch_and_wallspace_packed.data[2]).x, _2445), _903);
    uint _978 = material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].seed & 65535u;
    int _2896;
    if (material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].seed < 10u)
    {
        _2896 = _2795 | 512;
    }
    else
    {
        _2896 = _2795;
    }
    mat3 _1022 = mat3(vec4(_1339, 0.0, -_1341, 0.0).xyz, vec3(0.0, 1.0, 0.0), vec4(_1341, 0.0, _1339, 0.0).xyz);
    vec3 _1023 = _1022 * Vertex_Position;
    vec3 camera_offset_ws = _1445 - _887;
    vec3 _1029 = _1022 * (_963 * camera_offset_ws);
    mat3 _1042 = _1022 * _963;
    vec2 _2518 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].arch_and_wallspace_packed.data[0]);
    float _2897;
    if (_2445 < 0.5)
    {
        _2897 = mix(_2518.x, _2518.y, _2445 * 2.0);
    }
    else
    {
        _2897 = mix(_2518.y, _2481.x, (_2445 * 2.0) - 1.0);
    }
    bool _1066 = (material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].source_id & 2147483648u) != 0u;
    int _2905;
    int _2957;
    if (_1066)
    {
        bool _2900;
        if ((material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].source_id & 1073741824u) != 0u)
        {
            _2900 = ((material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].source_id >> 4u) & 65535u) == frame_constants.highlighted_transient_stair_edge_id;
        }
        else
        {
            _2900 = false;
        }
        int _2908;
        if (_2900)
        {
            _2908 = _2896 | 2048;
        }
        else
        {
            _2908 = _2896;
        }
        _2957 = int(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].source_id & 15u);
        _2905 = _2908;
    }
    else
    {
        int _2958;
        if ((_2896 & 8192) != 0)
        {
            _2958 = int(stone_foundation_colors_ids_1._member0[material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].source_id]);
        }
        else
        {
            uint _2899;
            if ((_2896 & 2) != 0)
            {
                _2899 = roof_colors_ids_1._member0[material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].source_id];
            }
            else
            {
                _2899 = wall_color_data_wall_color_ids_1._member0[material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].source_id];
            }
            _2958 = int(_2899);
        }
        _2957 = _2958;
        _2905 = _2896;
    }
    uint _2903;
    if (_1066)
    {
        _2903 = material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].source_id;
    }
    else
    {
        _2903 = wall_identity_data_slot_wall_ids_1._member0[material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_123]].source_id];
    }
    uint _2529 = _2903 & 65535u;
    uint _2534 = _2529 ^ 7993234u;
    uint _2574 = _2534 + (_2534 << 10u);
    uint _2576 = _2574 ^ (_2574 >> 6u);
    uint _2578 = _2576 + (_2576 << 3u);
    uint _2580 = _2578 ^ (_2578 >> 11u);
    uint _2536 = _2529 ^ 3450234u;
    uint _2596 = _2536 + (_2536 << 10u);
    uint _2598 = _2596 ^ (_2596 >> 6u);
    uint _2600 = _2598 + (_2598 << 3u);
    uint _2602 = _2600 ^ (_2600 >> 11u);
    vec2 _2547 = (((wall_uv * 0.100000001490116119384765625) * 0.699999988079071044921875) + vec2(float(_2529) * 0.20000000298023223876953125)) + vec2(uintBitsToFloat(((_2580 + (_2580 << 15u)) & 8388607u) | 1065353216u) - 1.0, uintBitsToFloat(((_2602 + (_2602 << 15u)) & 8388607u) | 1065353216u) - 1.0);
    uint _2550 = _978 ^ 292478890u;
    uint _2618 = _2550 + (_2550 << 10u);
    uint _2620 = _2618 ^ (_2618 >> 6u);
    uint _2622 = _2620 + (_2620 << 3u);
    uint _2624 = _2622 ^ (_2622 >> 11u);
    float _2632 = uintBitsToFloat(((_2624 + (_2624 << 15u)) & 8388607u) | 1065353216u) - 1.0;
    vec2 _2910;
    if (_2632 > 0.89999997615814208984375)
    {
        _2910 = _2547 * 3.0;
    }
    else
    {
        _2910 = _2547 + vec2(0.61000001430511474609375 * _2632);
    }
    vec2 _2911;
    if (int((_2905 & 512) != 0) == 1)
    {
        _2911 = _2910 * 2.2000000476837158203125;
    }
    else
    {
        _2911 = _2910;
    }
    bool _1212 = (_2896 & 32) != 0;
    vec2 _2961;
    if (_1212)
    {
        _2961 = wall_uv * 0.699999988079071044921875;
    }
    else
    {
        _2961 = _2911;
    }
    gl_Position = _2787 * current_view.world_to_sample;
    entryPointParam_vs_main_instance_seed = _978;
    entryPointParam_vs_main_vertex_normal_ws = vec3(0.0);
    entryPointParam_vs_main_vertex_position_ws = _2787.xyz;
    entryPointParam_vs_main_pos_ms = _1023;
    entryPointParam_vs_main_dir_ms = normalize(_1023 - _1029);
    entryPointParam_vs_main_squish_factor = length(camera_offset_ws) / length(_1029);
    entryPointParam_vs_main_offset_from_instance_transform = vec3(0.0);
    entryPointParam_vs_main_global_arch_height = _1212 ? (-100.0) : _2897;
    entryPointParam_vs_main_stone_foundation_clip_y = -100000.0;
    entryPointParam_vs_main_frag_wall_uv = _2961;
    entryPointParam_vs_main_color_id = _2957;
    entryPointParam_vs_main_frag_position_ws_no_brick_depth_xz = vec4(_887, 1.0).xz;
    entryPointParam_vs_main_flags = _2905;
    entryPointParam_vs_main_instance_index = material_data_instance_list._member0[_123];
    entryPointParam_vs_main_normal_matrix = _MatrixStorage_float3x3_ColMajornatural(vec3[](vec3(_1042[0].x, _1042[1].x, _1042[2].x), vec3(_1042[0].y, _1042[1].y, _1042[2].y), vec3(_1042[0].z, _1042[1].z, _1042[2].z)));
}

