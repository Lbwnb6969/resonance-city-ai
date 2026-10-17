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

layout(location = 0) in vec3 Vertex_Position;
layout(location = 1) in vec3 Vertex_Normal;
layout(location = 2) in int is_bevel;
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
    bool _98 = material_data.use_highlight_draw_list != 0u;
    uint _133 = (uint(_98) * 4194304u) + uint(gl_InstanceIndex);
    vec2 _1352 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].sin_deform_y_packed.data[0]);
    vec2 _1354 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].sin_deform_y_packed.data[1]);
    uint _1359 = uint(int(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].seed & 3u)) & 3u;
    int _1362 = -int(_1359 & 1u);
    int _1367 = 1 - int((_1359 >> uint(1)) << uint(1));
    float _1369 = float((~_1362) & _1367);
    float _1371 = float(_1362 & _1367);
    vec4 _1373 = vec4(_1369, 0.0, -_1371, 0.0);
    vec4 _1375 = vec4(_1371, 0.0, _1369, 0.0);
    mat4 _1377 = mat4(_1373, vec4(0.0, 1.0, 0.0, 0.0), _1375, vec4(0.0, 0.0, 0.0, 1.0));
    vec2 _1390 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].transform_matrix_packed.data[1]);
    mat3x4 _1466 = transpose(mat4x3(vec3(unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].transform_matrix_packed.data[0]), _1390.x), vec3(_1390.y, unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].transform_matrix_packed.data[2])), vec3(unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].transform_matrix_packed.data[3]), unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].transform_matrix_packed.data[4]).x), vec3(uintBitsToFloat(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].transform_translation.data[0]), uintBitsToFloat(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].transform_translation.data[1]), uintBitsToFloat(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].transform_translation.data[2]))));
    mat3x4 _3150 = _1466;
    _3150[0].w = _1466[0].w;
    mat3x4 _3152 = _3150;
    _3152[1].w = _1466[1].w;
    mat3x4 _3154 = _3152;
    _3154[2].w = _1466[2].w;
    vec4 _366 = vec4(Vertex_Position, 1.0) * _1377;
    vec3 vertex_rotated = _366.xyz;
    int _375 = int(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].flags);
    mat3x4 _3163;
    if ((_375 & 32) != 0)
    {
        vec2 _1483 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].arch_and_wallspace_packed.data[0]);
        vec3 _449 = vec3(_3150[0].z, _3152[1].z, _3154[2].z) * mix(_1483.x, _1483.y, 0.5 - _366.x);
        mat3x4 _3156 = _3154;
        _3156[0].z = _449.x;
        _3156[1].z = _449.y;
        _3156[2].z = _449.z;
        _3163 = _3156;
    }
    else
    {
        _3163 = _3154;
    }
    int _2847;
    if (_98)
    {
        _2847 = _375 | 4096;
    }
    else
    {
        _2847 = _375;
    }
    vec3 _2849;
    if ((_2847 & 4) != 0)
    {
        uint _1506 = material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].seed + (material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].seed << 10u);
        uint _1508 = _1506 ^ (_1506 >> 6u);
        uint _1510 = _1508 + (_1508 << 3u);
        uint _1512 = _1510 ^ (_1510 >> 11u);
        float _3176 = ((uintBitsToFloat(((_1512 + (_1512 << 15u)) & 8388607u) | 1065353216u) - 1.0) > 0.89999997615814208984375) ? 1.0 : 1.10000002384185791015625;
        _2849 = mix(vec3(_3176, _3176, 1.0), vec3(1.0499999523162841796875), bvec3((_375 & 1) != 0));
    }
    else
    {
        _2849 = vec3(1.0);
    }
    mat3x4 _547 = mat4(vec4(_2849.x, 0.0, 0.0, 0.0), vec4(0.0, _2849.y, 0.0, 0.0), vec4(0.0, 0.0, _2849.z, 0.0), vec4(0.0, 0.0, 0.0, 1.0)) * _3163;
    vec4 _551 = vec4(vec4(vertex_rotated, 1.0) * _547, 1.0);
    vec3 _553 = _551.xyz;
    vec3 _1523 = _553 * 0.4000000059604644775390625;
    ivec3 _1549 = ivec3(floor(_1523));
    vec3 _1550 = fract(_1523);
    uvec3 _1551 = uvec3(_1549);
    uint _1665 = _1551.z;
    uint _1671 = _1665 + (_1665 << 10u);
    uint _1673 = _1671 ^ (_1671 >> 6u);
    uint _1675 = _1673 + (_1673 << 3u);
    uint _1677 = _1675 ^ (_1675 >> 11u);
    uint _1685 = (((_1551.y * 1664525u) + (_1677 + (_1677 << 15u))) + 1013904223u) * 1664525u;
    uint _1687 = _1685 ^ (_1685 >> 11u);
    uint _1690 = _1687 ^ ((_1687 << 7u) & 2636928640u);
    uint _1693 = _1690 ^ ((_1690 << 15u) & 4022730752u);
    uint _1701 = (((_1551.x * 1664525u) + (_1693 ^ (_1693 >> 18u))) + 1013904223u) * 1664525u;
    uint _1703 = _1701 ^ (_1701 >> 11u);
    uint _1706 = _1703 ^ ((_1703 << 7u) & 2636928640u);
    uint _1709 = _1706 ^ ((_1706 << 15u) & 4022730752u);
    uint _1711 = _1709 ^ (_1709 >> 18u);
    uint _1730;
    uint _1749;
    vec2 _1538;
    uint _2857 = 0u;
    uint _3140 = _1711;
    for (;;)
    {
        if (!(_2857 < 2u))
        {
            break;
        }
        uint _1741 = _3140 + (_3140 << 10u);
        uint _1743 = _1741 ^ (_1741 >> 6u);
        uint _1745 = _1743 + (_1743 << 3u);
        uint _1747 = _1745 ^ (_1745 >> 11u);
        _1749 = _1747 + (_1747 << 15u);
        _1538[_2857] = uintBitsToFloat((_3140 & 8388607u) | 1065353216u) - 1.0;
        _1730 = _2857 + 1u;
        _3140 = _1749;
        _2857 = _1730;
        continue;
    }
    uvec3 _1560 = uvec3(_1549 + ivec3(1, 0, 0));
    uint _1765 = _1560.z;
    uint _1771 = _1765 + (_1765 << 10u);
    uint _1773 = _1771 ^ (_1771 >> 6u);
    uint _1775 = _1773 + (_1773 << 3u);
    uint _1777 = _1775 ^ (_1775 >> 11u);
    uint _1785 = (((_1560.y * 1664525u) + (_1777 + (_1777 << 15u))) + 1013904223u) * 1664525u;
    uint _1787 = _1785 ^ (_1785 >> 11u);
    uint _1790 = _1787 ^ ((_1787 << 7u) & 2636928640u);
    uint _1793 = _1790 ^ ((_1790 << 15u) & 4022730752u);
    uint _1801 = (((_1560.x * 1664525u) + (_1793 ^ (_1793 >> 18u))) + 1013904223u) * 1664525u;
    uint _1803 = _1801 ^ (_1801 >> 11u);
    uint _1806 = _1803 ^ ((_1803 << 7u) & 2636928640u);
    uint _1809 = _1806 ^ ((_1806 << 15u) & 4022730752u);
    uint _1811 = _1809 ^ (_1809 >> 18u);
    uint _1830;
    uint _1849;
    vec2 _1539;
    uint _2864 = 0u;
    uint _3139 = _1811;
    for (;;)
    {
        if (!(_2864 < 2u))
        {
            break;
        }
        uint _1841 = _3139 + (_3139 << 10u);
        uint _1843 = _1841 ^ (_1841 >> 6u);
        uint _1845 = _1843 + (_1843 << 3u);
        uint _1847 = _1845 ^ (_1845 >> 11u);
        _1849 = _1847 + (_1847 << 15u);
        _1539[_2864] = uintBitsToFloat((_3139 & 8388607u) | 1065353216u) - 1.0;
        _1830 = _2864 + 1u;
        _3139 = _1849;
        _2864 = _1830;
        continue;
    }
    uvec3 _1567 = uvec3(_1549 + ivec3(0, 1, 0));
    uint _1865 = _1567.z;
    uint _1871 = _1865 + (_1865 << 10u);
    uint _1873 = _1871 ^ (_1871 >> 6u);
    uint _1875 = _1873 + (_1873 << 3u);
    uint _1877 = _1875 ^ (_1875 >> 11u);
    uint _1885 = (((_1567.y * 1664525u) + (_1877 + (_1877 << 15u))) + 1013904223u) * 1664525u;
    uint _1887 = _1885 ^ (_1885 >> 11u);
    uint _1890 = _1887 ^ ((_1887 << 7u) & 2636928640u);
    uint _1893 = _1890 ^ ((_1890 << 15u) & 4022730752u);
    uint _1901 = (((_1567.x * 1664525u) + (_1893 ^ (_1893 >> 18u))) + 1013904223u) * 1664525u;
    uint _1903 = _1901 ^ (_1901 >> 11u);
    uint _1906 = _1903 ^ ((_1903 << 7u) & 2636928640u);
    uint _1909 = _1906 ^ ((_1906 << 15u) & 4022730752u);
    uint _1911 = _1909 ^ (_1909 >> 18u);
    uint _1930;
    uint _1949;
    vec2 _1540;
    uint _2872 = 0u;
    uint _3138 = _1911;
    for (;;)
    {
        if (!(_2872 < 2u))
        {
            break;
        }
        uint _1941 = _3138 + (_3138 << 10u);
        uint _1943 = _1941 ^ (_1941 >> 6u);
        uint _1945 = _1943 + (_1943 << 3u);
        uint _1947 = _1945 ^ (_1945 >> 11u);
        _1949 = _1947 + (_1947 << 15u);
        _1540[_2872] = uintBitsToFloat((_3138 & 8388607u) | 1065353216u) - 1.0;
        _1930 = _2872 + 1u;
        _3138 = _1949;
        _2872 = _1930;
        continue;
    }
    uvec3 _1575 = uvec3(_1549 + ivec3(1, 1, 0));
    uint _1965 = _1575.z;
    uint _1971 = _1965 + (_1965 << 10u);
    uint _1973 = _1971 ^ (_1971 >> 6u);
    uint _1975 = _1973 + (_1973 << 3u);
    uint _1977 = _1975 ^ (_1975 >> 11u);
    uint _1985 = (((_1575.y * 1664525u) + (_1977 + (_1977 << 15u))) + 1013904223u) * 1664525u;
    uint _1987 = _1985 ^ (_1985 >> 11u);
    uint _1990 = _1987 ^ ((_1987 << 7u) & 2636928640u);
    uint _1993 = _1990 ^ ((_1990 << 15u) & 4022730752u);
    uint _2001 = (((_1575.x * 1664525u) + (_1993 ^ (_1993 >> 18u))) + 1013904223u) * 1664525u;
    uint _2003 = _2001 ^ (_2001 >> 11u);
    uint _2006 = _2003 ^ ((_2003 << 7u) & 2636928640u);
    uint _2009 = _2006 ^ ((_2006 << 15u) & 4022730752u);
    uint _2011 = _2009 ^ (_2009 >> 18u);
    uint _2030;
    uint _2049;
    vec2 _1541;
    uint _2881 = 0u;
    uint _3137 = _2011;
    for (;;)
    {
        if (!(_2881 < 2u))
        {
            break;
        }
        uint _2041 = _3137 + (_3137 << 10u);
        uint _2043 = _2041 ^ (_2041 >> 6u);
        uint _2045 = _2043 + (_2043 << 3u);
        uint _2047 = _2045 ^ (_2045 >> 11u);
        _2049 = _2047 + (_2047 << 15u);
        _1541[_2881] = uintBitsToFloat((_3137 & 8388607u) | 1065353216u) - 1.0;
        _2030 = _2881 + 1u;
        _3137 = _2049;
        _2881 = _2030;
        continue;
    }
    uvec3 _1582 = uvec3(_1549 + ivec3(0, 0, 1));
    uint _2065 = _1582.z;
    uint _2071 = _2065 + (_2065 << 10u);
    uint _2073 = _2071 ^ (_2071 >> 6u);
    uint _2075 = _2073 + (_2073 << 3u);
    uint _2077 = _2075 ^ (_2075 >> 11u);
    uint _2085 = (((_1582.y * 1664525u) + (_2077 + (_2077 << 15u))) + 1013904223u) * 1664525u;
    uint _2087 = _2085 ^ (_2085 >> 11u);
    uint _2090 = _2087 ^ ((_2087 << 7u) & 2636928640u);
    uint _2093 = _2090 ^ ((_2090 << 15u) & 4022730752u);
    uint _2101 = (((_1582.x * 1664525u) + (_2093 ^ (_2093 >> 18u))) + 1013904223u) * 1664525u;
    uint _2103 = _2101 ^ (_2101 >> 11u);
    uint _2106 = _2103 ^ ((_2103 << 7u) & 2636928640u);
    uint _2109 = _2106 ^ ((_2106 << 15u) & 4022730752u);
    uint _2111 = _2109 ^ (_2109 >> 18u);
    uint _2130;
    uint _2149;
    vec2 _1542;
    uint _2891 = 0u;
    uint _3136 = _2111;
    for (;;)
    {
        if (!(_2891 < 2u))
        {
            break;
        }
        uint _2141 = _3136 + (_3136 << 10u);
        uint _2143 = _2141 ^ (_2141 >> 6u);
        uint _2145 = _2143 + (_2143 << 3u);
        uint _2147 = _2145 ^ (_2145 >> 11u);
        _2149 = _2147 + (_2147 << 15u);
        _1542[_2891] = uintBitsToFloat((_3136 & 8388607u) | 1065353216u) - 1.0;
        _2130 = _2891 + 1u;
        _3136 = _2149;
        _2891 = _2130;
        continue;
    }
    uvec3 _1591 = uvec3(_1549 + ivec3(1, 0, 1));
    uint _2165 = _1591.z;
    uint _2171 = _2165 + (_2165 << 10u);
    uint _2173 = _2171 ^ (_2171 >> 6u);
    uint _2175 = _2173 + (_2173 << 3u);
    uint _2177 = _2175 ^ (_2175 >> 11u);
    uint _2185 = (((_1591.y * 1664525u) + (_2177 + (_2177 << 15u))) + 1013904223u) * 1664525u;
    uint _2187 = _2185 ^ (_2185 >> 11u);
    uint _2190 = _2187 ^ ((_2187 << 7u) & 2636928640u);
    uint _2193 = _2190 ^ ((_2190 << 15u) & 4022730752u);
    uint _2201 = (((_1591.x * 1664525u) + (_2193 ^ (_2193 >> 18u))) + 1013904223u) * 1664525u;
    uint _2203 = _2201 ^ (_2201 >> 11u);
    uint _2206 = _2203 ^ ((_2203 << 7u) & 2636928640u);
    uint _2209 = _2206 ^ ((_2206 << 15u) & 4022730752u);
    uint _2211 = _2209 ^ (_2209 >> 18u);
    uint _2230;
    uint _2249;
    vec2 _1543;
    uint _2902 = 0u;
    uint _3135 = _2211;
    for (;;)
    {
        if (!(_2902 < 2u))
        {
            break;
        }
        uint _2241 = _3135 + (_3135 << 10u);
        uint _2243 = _2241 ^ (_2241 >> 6u);
        uint _2245 = _2243 + (_2243 << 3u);
        uint _2247 = _2245 ^ (_2245 >> 11u);
        _2249 = _2247 + (_2247 << 15u);
        _1543[_2902] = uintBitsToFloat((_3135 & 8388607u) | 1065353216u) - 1.0;
        _2230 = _2902 + 1u;
        _3135 = _2249;
        _2902 = _2230;
        continue;
    }
    uvec3 _1598 = uvec3(_1549 + ivec3(0, 1, 1));
    uint _2265 = _1598.z;
    uint _2271 = _2265 + (_2265 << 10u);
    uint _2273 = _2271 ^ (_2271 >> 6u);
    uint _2275 = _2273 + (_2273 << 3u);
    uint _2277 = _2275 ^ (_2275 >> 11u);
    uint _2285 = (((_1598.y * 1664525u) + (_2277 + (_2277 << 15u))) + 1013904223u) * 1664525u;
    uint _2287 = _2285 ^ (_2285 >> 11u);
    uint _2290 = _2287 ^ ((_2287 << 7u) & 2636928640u);
    uint _2293 = _2290 ^ ((_2290 << 15u) & 4022730752u);
    uint _2301 = (((_1598.x * 1664525u) + (_2293 ^ (_2293 >> 18u))) + 1013904223u) * 1664525u;
    uint _2303 = _2301 ^ (_2301 >> 11u);
    uint _2306 = _2303 ^ ((_2303 << 7u) & 2636928640u);
    uint _2309 = _2306 ^ ((_2306 << 15u) & 4022730752u);
    uint _2311 = _2309 ^ (_2309 >> 18u);
    uint _2330;
    uint _2349;
    vec2 _1544;
    uint _2914 = 0u;
    uint _3134 = _2311;
    for (;;)
    {
        if (!(_2914 < 2u))
        {
            break;
        }
        uint _2341 = _3134 + (_3134 << 10u);
        uint _2343 = _2341 ^ (_2341 >> 6u);
        uint _2345 = _2343 + (_2343 << 3u);
        uint _2347 = _2345 ^ (_2345 >> 11u);
        _2349 = _2347 + (_2347 << 15u);
        _1544[_2914] = uintBitsToFloat((_3134 & 8388607u) | 1065353216u) - 1.0;
        _2330 = _2914 + 1u;
        _3134 = _2349;
        _2914 = _2330;
        continue;
    }
    uvec3 _1606 = uvec3(_1549 + ivec3(1));
    uint _2365 = _1606.z;
    uint _2371 = _2365 + (_2365 << 10u);
    uint _2373 = _2371 ^ (_2371 >> 6u);
    uint _2375 = _2373 + (_2373 << 3u);
    uint _2377 = _2375 ^ (_2375 >> 11u);
    uint _2385 = (((_1606.y * 1664525u) + (_2377 + (_2377 << 15u))) + 1013904223u) * 1664525u;
    uint _2387 = _2385 ^ (_2385 >> 11u);
    uint _2390 = _2387 ^ ((_2387 << 7u) & 2636928640u);
    uint _2393 = _2390 ^ ((_2390 << 15u) & 4022730752u);
    uint _2401 = (((_1606.x * 1664525u) + (_2393 ^ (_2393 >> 18u))) + 1013904223u) * 1664525u;
    uint _2403 = _2401 ^ (_2401 >> 11u);
    uint _2406 = _2403 ^ ((_2403 << 7u) & 2636928640u);
    uint _2409 = _2406 ^ ((_2406 << 15u) & 4022730752u);
    uint _2411 = _2409 ^ (_2409 >> 18u);
    uint _2430;
    uint _2449;
    vec2 _1545;
    uint _2927 = 0u;
    uint _3133 = _2411;
    for (;;)
    {
        if (!(_2927 < 2u))
        {
            break;
        }
        uint _2441 = _3133 + (_3133 << 10u);
        uint _2443 = _2441 ^ (_2441 >> 6u);
        uint _2445 = _2443 + (_2443 << 3u);
        uint _2447 = _2445 ^ (_2445 >> 11u);
        _2449 = _2447 + (_2447 << 15u);
        _1545[_2927] = uintBitsToFloat((_3133 & 8388607u) | 1065353216u) - 1.0;
        _2430 = _2927 + 1u;
        _3133 = _2449;
        _2927 = _2430;
        continue;
    }
    vec3 _2461 = (_1550 * _1550) * (vec3(3.0) - (vec3(2.0) * _1550));
    float _1614 = _2461.x;
    float _1615 = 1.0 - _1614;
    float _1617 = _2461.y;
    float _1618 = 1.0 - _1617;
    float _1620 = _2461.z;
    float _1621 = 1.0 - _1620;
    vec2 _1528 = clamp((((((((((((_1538 * _1615) * _1618) * _1621) + (((_1539 * _1614) * _1618) * _1621)) + (((_1540 * _1615) * _1617) * _1621)) + (((_1541 * _1614) * _1617) * _1621)) + (((_1542 * _1615) * _1618) * _1620)) + (((_1543 * _1614) * _1618) * _1620)) + (((_1544 * _1615) * _1617) * _1620)) + (((_1545 * _1614) * _1617) * _1620)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
    vec3 _840 = _553 + (vec3(_1528.x, 0.0, _1528.y) * 0.0599999986588954925537109375);
    vec4 _2839 = _551;
    _2839.x = _840.x;
    _2839.z = _840.z;
    vec3 _848 = vec4(0.0, 0.0, 0.0, 1.0) * _547;
    float _2466 = _366.x - (-0.5);
    float _864 = _840.y + mix(mix(_1352.x, _1352.y, _2466), mix(_1354.x, _1354.y, _2466), _366.y - (-0.5));
    _2839.y = _864;
    vec2 _2502 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].arch_and_wallspace_packed.data[1]);
    float _2505 = _2502.y;
    mat3 _901 = mat3(_547[0].xyz, _547[1].xyz, _547[2].xyz);
    vec3 _2510 = vec3(1.0, 0.0, 0.0) * _901;
    vec3 _2511 = vec3(0.0, 1.0, 0.0) * _901;
    vec3 _2512 = vec3(0.0, 0.0, 1.0) * _901;
    vec3 _2515 = cross(_2510, _2511);
    vec3 _2518 = vec3(1.0 / dot(_2512, _2515));
    mat3 _924 = transpose(mat3(cross(_2511, _2512) * _2518, cross(_2512, _2510) * _2518, _2515 * _2518));
    uint _939 = material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].seed & 65535u;
    vec3 _947 = (vec4(Vertex_Normal, 0.0) * _1377).xyz * _924;
    bool _951 = is_bevel != 0;
    int _2947;
    if (_951)
    {
        _2947 = _2847 | 256;
    }
    else
    {
        _2947 = _2847;
    }
    int _2950;
    if (material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].seed < 10u)
    {
        _2950 = _2947 | 512;
    }
    else
    {
        _2950 = _2947;
    }
    mat3 _999 = mat3(_1373.xyz, vec3(0.0, 1.0, 0.0), _1375.xyz);
    vec3 _1000 = _999 * vertex_rotated;
    vec4 _2527 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    vec3 camera_offset_ws = (_2527.xyz / vec3(_2527.w)) - _848;
    vec3 _1020 = _999 * (_924 * camera_offset_ws);
    mat3 _1033 = _999 * _924;
    vec2 _2548 = unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].arch_and_wallspace_packed.data[0]);
    float _2951;
    if (_2466 < 0.5)
    {
        _2951 = mix(_2548.x, _2548.y, _2466 * 2.0);
    }
    else
    {
        _2951 = mix(_2548.y, _2502.x, (_2466 * 2.0) - 1.0);
    }
    bool _1057 = (material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].source_id & 2147483648u) != 0u;
    int _2959;
    int _3035;
    if (_1057)
    {
        bool _2954;
        if ((material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].source_id & 1073741824u) != 0u)
        {
            _2954 = ((material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].source_id >> 4u) & 65535u) == frame_constants.highlighted_transient_stair_edge_id;
        }
        else
        {
            _2954 = false;
        }
        int _2962;
        if (_2954)
        {
            _2962 = _2950 | 2048;
        }
        else
        {
            _2962 = _2950;
        }
        _3035 = int(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].source_id & 15u);
        _2959 = _2962;
    }
    else
    {
        int _3036;
        if ((_2950 & 8192) != 0)
        {
            _3036 = int(stone_foundation_colors_ids_1._member0[material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].source_id]);
        }
        else
        {
            uint _2953;
            if ((_2950 & 2) != 0)
            {
                _2953 = roof_colors_ids_1._member0[material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].source_id];
            }
            else
            {
                _2953 = wall_color_data_wall_color_ids_1._member0[material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].source_id];
            }
            _3036 = int(_2953);
        }
        _3035 = _3036;
        _2959 = _2950;
    }
    uint _2957;
    if (_1057)
    {
        _2957 = material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].source_id;
    }
    else
    {
        _2957 = wall_identity_data_slot_wall_ids_1._member0[material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].source_id];
    }
    uint _2559 = _2957 & 65535u;
    uint _2564 = _2559 ^ 7993234u;
    uint _2604 = _2564 + (_2564 << 10u);
    uint _2606 = _2604 ^ (_2604 >> 6u);
    uint _2608 = _2606 + (_2606 << 3u);
    uint _2610 = _2608 ^ (_2608 >> 11u);
    uint _2566 = _2559 ^ 3450234u;
    uint _2626 = _2566 + (_2566 << 10u);
    uint _2628 = _2626 ^ (_2626 >> 6u);
    uint _2630 = _2628 + (_2628 << 3u);
    uint _2632 = _2630 ^ (_2630 >> 11u);
    vec2 _2577 = (((vec2(mix(_2505, unpackHalf2x16(material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].arch_and_wallspace_packed.data[2]).x, _2466), _864) * 0.100000001490116119384765625) * 0.699999988079071044921875) + vec2(float(_2559) * 0.20000000298023223876953125)) + vec2(uintBitsToFloat(((_2610 + (_2610 << 15u)) & 8388607u) | 1065353216u) - 1.0, uintBitsToFloat(((_2632 + (_2632 << 15u)) & 8388607u) | 1065353216u) - 1.0);
    uint _2580 = _939 ^ 292478890u;
    uint _2648 = _2580 + (_2580 << 10u);
    uint _2650 = _2648 ^ (_2648 >> 6u);
    uint _2652 = _2650 + (_2650 << 3u);
    uint _2654 = _2652 ^ (_2652 >> 11u);
    float _2662 = uintBitsToFloat(((_2654 + (_2654 << 15u)) & 8388607u) | 1065353216u) - 1.0;
    vec2 _2964;
    if (_2662 > 0.89999997615814208984375)
    {
        _2964 = _2577 * 3.0;
    }
    else
    {
        _2964 = _2577 + vec2(0.61000001430511474609375 * _2662);
    }
    vec2 _2965;
    if (int((_2959 & 512) != 0) == 1)
    {
        _2965 = _2964 * 2.2000000476837158203125;
    }
    else
    {
        _2965 = _2964;
    }
    bool _1204 = (_2950 & 32) != 0;
    vec2 _3042;
    if (_1204)
    {
        vec2 _2984;
        if (_947.y > 0.89999997615814208984375)
        {
            _2984 = _2839.xz * 0.699999988079071044921875;
        }
        else
        {
            vec2 _2985;
            if (abs(_947.x) > 0.89999997615814208984375)
            {
                _2985 = _2839.zy * 0.699999988079071044921875;
            }
            else
            {
                _2985 = _2839.xy * 0.699999988079071044921875;
            }
            _2984 = _2985;
        }
        vec2 _2983;
        if (_951)
        {
            _2983 = vec2(_2505);
        }
        else
        {
            _2983 = _2984;
        }
        uint _2670 = material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].seed + (material_data_instanced_wall_data_1._member0[material_data_instance_list._member0[_133]].seed << 10u);
        uint _2672 = _2670 ^ (_2670 >> 6u);
        uint _2674 = _2672 + (_2672 << 3u);
        uint _2676 = _2674 ^ (_2674 >> 11u);
        _3042 = (_2983 * 0.300000011920928955078125) + vec2(uintBitsToFloat(((_2676 + (_2676 << 15u)) & 8388607u) | 1065353216u) - 1.0);
    }
    else
    {
        _3042 = _2965;
    }
    gl_Position = _2839 * current_view.world_to_sample;
    entryPointParam_vs_main_instance_seed = _939;
    entryPointParam_vs_main_vertex_normal_ws = _947;
    entryPointParam_vs_main_vertex_position_ws = _2839.xyz;
    entryPointParam_vs_main_pos_ms = _1000;
    entryPointParam_vs_main_dir_ms = normalize(_1000 - _1020);
    entryPointParam_vs_main_squish_factor = length(camera_offset_ws) / length(_1020);
    entryPointParam_vs_main_offset_from_instance_transform = vec3(0.0);
    entryPointParam_vs_main_global_arch_height = _1204 ? (-100.0) : _2951;
    entryPointParam_vs_main_stone_foundation_clip_y = -100000.0;
    entryPointParam_vs_main_frag_wall_uv = _3042;
    entryPointParam_vs_main_color_id = _3035;
    entryPointParam_vs_main_frag_position_ws_no_brick_depth_xz = vec4(_848, 1.0).xz;
    entryPointParam_vs_main_flags = _2959;
    entryPointParam_vs_main_instance_index = material_data_instance_list._member0[_133];
    vec3 _1302 = _1033[0];
    vec3 _1306 = _1033[1];
    vec3 _1310 = _1033[2];
    entryPointParam_vs_main_normal_matrix = _MatrixStorage_float3x3_ColMajornatural(vec3[](vec3(_1302.x, _1306.x, _1310.x), vec3(_1302.y, _1306.y, _1310.y), vec3(_1302.z, _1306.z, _1310.z)));
}

