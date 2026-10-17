#version 460
#extension GL_EXT_scalar_block_layout : require

struct IvyLeaf_natural
{
    vec3 position;
    float size;
    vec3 forward_floattor;
    int seed;
    vec3 branch_dir;
    float arch_height;
};

struct Tex2D_natural
{
    uint bindless_handle;
};

float _2423;

layout(set = 0, binding = 2, std430) readonly buffer StructuredBuffer
{
    IvyLeaf_natural _member0[];
} material_data_ivy_leaf_buffer;

layout(set = 19, binding = 0, scalar) uniform TerrainHeightmap_natural
{
    uvec2 terrain_heightmap_dims;
    Tex2D_natural bg_terrain_heightmap;
    Tex2D_natural bg_terrain_fog_height;
    vec2 bg_terrain_height_bounds_ws;
    vec4 bg_water_footprint_ws;
} terrain_heightmap;

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

layout(set = 0, binding = 0, std140) uniform MaterialData_natural
{
    int is_flower;
} material_data;

layout(set = 8, binding = 0, std140) uniform PathExclusionMask_natural
{
    uvec2 tex_dims;
} path_mask;

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

layout(set = 19, binding = 1) uniform texture2D terrain_heightmap_terrain_heightmap;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 2, binding = 4) uniform sampler samplers_llb;
layout(set = 8, binding = 1) uniform texture2D path_mask_tex;

layout(location = 0) in vec3 Vertex_Position;
layout(location = 0) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 1) in vec3 Vertex_Normal;
layout(location = 2) in vec2 Vertex_UV;

void main()
{
    do
    {
        uint _62 = uint(gl_InstanceIndex);
        vec3 _104 = material_data_ivy_leaf_buffer._member0[_62].position.xyz;
        float _951 = mix(-2.5, 24.0, textureLod(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), (material_data_ivy_leaf_buffer._member0[_62].position.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0).x);
        float arch_height = material_data_ivy_leaf_buffer._member0[_62].arch_height - min(_951, 0.0);
        vec3 _170 = (Vertex_Position * 0.75) * material_data_ivy_leaf_buffer._member0[_62].size;
        vec3 _2414;
        if (frame_constants.glade_theme_id == 4u)
        {
            _2414 = _170 * 0.85000002384185791015625;
        }
        else
        {
            _2414 = _170;
        }
        bool _196 = material_data.is_flower == 1;
        vec3 _2415;
        vec3 _2416;
        vec3 _2417;
        vec3 _2418;
        if (_196)
        {
            vec3 _200 = cross(vec3(0.0, 1.0, 0.0), material_data_ivy_leaf_buffer._member0[_62].forward_floattor.xyz);
            _2418 = _2414 + (material_data_ivy_leaf_buffer._member0[_62].forward_floattor.xyz * 0.100000001490116119384765625);
            _2417 = _200;
            _2416 = material_data_ivy_leaf_buffer._member0[_62].forward_floattor.xyz;
            _2415 = cross(_200, material_data_ivy_leaf_buffer._member0[_62].forward_floattor.xyz);
        }
        else
        {
            vec3 _224 = normalize(cross(material_data_ivy_leaf_buffer._member0[_62].forward_floattor.xyz, normalize(mix(material_data_ivy_leaf_buffer._member0[_62].branch_dir, vec3(0.0, 1.0, 0.0), vec3(mix(0.5, 1.0, abs(material_data_ivy_leaf_buffer._member0[_62].branch_dir.y)))))));
            _2418 = _2414;
            _2417 = material_data_ivy_leaf_buffer._member0[_62].forward_floattor.xyz;
            _2416 = normalize(cross(_224, material_data_ivy_leaf_buffer._member0[_62].forward_floattor.xyz));
            _2415 = _224;
        }
        mat4 _255 = transpose(mat4(vec4(_2415, 0.0), vec4(_2416, 0.0), vec4(_2417, 0.0), vec4(0.0, 0.0, 0.0, 1.0)));
        vec3 pivot = (vec4(0.0, 0.0, 0.0, 1.0) * _255).xyz + _104;
        vec4 _970 = textureLod(sampler2D(path_mask_tex, samplers_llb), (pivot.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0);
        float _961 = _970.x;
        if (_961 > 0.100000001490116119384765625)
        {
            float _984 = pivot.y;
            vec2 _987 = (vec2(pivot.xz) * 0.60000002384185791015625) + vec2(_984 * 0.60000002384185791015625);
            ivec2 _1010 = ivec2(floor(_987));
            vec2 _1011 = fract(_987);
            uvec2 _1012 = uvec2(_1010);
            uint _1062 = _1012.y;
            uint _1068 = _1062 + (_1062 << 10u);
            uint _1070 = _1068 ^ (_1068 >> 6u);
            uint _1072 = _1070 + (_1070 << 3u);
            uint _1074 = _1072 ^ (_1072 >> 11u);
            uint _1082 = (((_1012.x * 1664525u) + (_1074 + (_1074 << 15u))) + 1013904223u) * 1664525u;
            uint _1084 = _1082 ^ (_1082 >> 11u);
            uint _1087 = _1084 ^ ((_1084 << 7u) & 2636928640u);
            uint _1090 = _1087 ^ ((_1087 << 15u) & 4022730752u);
            uint _1092 = _1090 ^ (_1090 >> 18u);
            float _2425;
            _2425 = _2423;
            uint _1109;
            uint _1128;
            float _1134;
            uint _2424 = 0u;
            uint _2607 = _1092;
            for (;;)
            {
                if (!(_2424 < 1u))
                {
                    break;
                }
                uint _1120 = _2607 + (_2607 << 10u);
                uint _1122 = _1120 ^ (_1120 >> 6u);
                uint _1124 = _1122 + (_1122 << 3u);
                uint _1126 = _1124 ^ (_1124 >> 11u);
                _1128 = _1126 + (_1126 << 15u);
                _1134 = uintBitsToFloat((_2607 & 8388607u) | 1065353216u) - 1.0;
                _1109 = _2424 + 1u;
                _2607 = _1128;
                _2425 = _1134;
                _2424 = _1109;
                continue;
            }
            uvec2 _1020 = uvec2(_1010 + ivec2(1, 0));
            uint _1138 = _1020.y;
            uint _1144 = _1138 + (_1138 << 10u);
            uint _1146 = _1144 ^ (_1144 >> 6u);
            uint _1148 = _1146 + (_1146 << 3u);
            uint _1150 = _1148 ^ (_1148 >> 11u);
            uint _1158 = (((_1020.x * 1664525u) + (_1150 + (_1150 << 15u))) + 1013904223u) * 1664525u;
            uint _1160 = _1158 ^ (_1158 >> 11u);
            uint _1163 = _1160 ^ ((_1160 << 7u) & 2636928640u);
            uint _1166 = _1163 ^ ((_1163 << 15u) & 4022730752u);
            uint _1168 = _1166 ^ (_1166 >> 18u);
            float _2430;
            _2430 = _2423;
            uint _1185;
            uint _1204;
            float _1210;
            uint _2429 = 0u;
            uint _2606 = _1168;
            for (;;)
            {
                if (!(_2429 < 1u))
                {
                    break;
                }
                uint _1196 = _2606 + (_2606 << 10u);
                uint _1198 = _1196 ^ (_1196 >> 6u);
                uint _1200 = _1198 + (_1198 << 3u);
                uint _1202 = _1200 ^ (_1200 >> 11u);
                _1204 = _1202 + (_1202 << 15u);
                _1210 = uintBitsToFloat((_2606 & 8388607u) | 1065353216u) - 1.0;
                _1185 = _2429 + 1u;
                _2606 = _1204;
                _2430 = _1210;
                _2429 = _1185;
                continue;
            }
            uvec2 _1027 = uvec2(_1010 + ivec2(0, 1));
            uint _1214 = _1027.y;
            uint _1220 = _1214 + (_1214 << 10u);
            uint _1222 = _1220 ^ (_1220 >> 6u);
            uint _1224 = _1222 + (_1222 << 3u);
            uint _1226 = _1224 ^ (_1224 >> 11u);
            uint _1234 = (((_1027.x * 1664525u) + (_1226 + (_1226 << 15u))) + 1013904223u) * 1664525u;
            uint _1236 = _1234 ^ (_1234 >> 11u);
            uint _1239 = _1236 ^ ((_1236 << 7u) & 2636928640u);
            uint _1242 = _1239 ^ ((_1239 << 15u) & 4022730752u);
            uint _1244 = _1242 ^ (_1242 >> 18u);
            float _2436;
            _2436 = _2423;
            uint _1261;
            uint _1280;
            float _1286;
            uint _2435 = 0u;
            uint _2605 = _1244;
            for (;;)
            {
                if (!(_2435 < 1u))
                {
                    break;
                }
                uint _1272 = _2605 + (_2605 << 10u);
                uint _1274 = _1272 ^ (_1272 >> 6u);
                uint _1276 = _1274 + (_1274 << 3u);
                uint _1278 = _1276 ^ (_1276 >> 11u);
                _1280 = _1278 + (_1278 << 15u);
                _1286 = uintBitsToFloat((_2605 & 8388607u) | 1065353216u) - 1.0;
                _1261 = _2435 + 1u;
                _2605 = _1280;
                _2436 = _1286;
                _2435 = _1261;
                continue;
            }
            uvec2 _1035 = uvec2(_1010 + ivec2(1));
            uint _1290 = _1035.y;
            uint _1296 = _1290 + (_1290 << 10u);
            uint _1298 = _1296 ^ (_1296 >> 6u);
            uint _1300 = _1298 + (_1298 << 3u);
            uint _1302 = _1300 ^ (_1300 >> 11u);
            uint _1310 = (((_1035.x * 1664525u) + (_1302 + (_1302 << 15u))) + 1013904223u) * 1664525u;
            uint _1312 = _1310 ^ (_1310 >> 11u);
            uint _1315 = _1312 ^ ((_1312 << 7u) & 2636928640u);
            uint _1318 = _1315 ^ ((_1315 << 15u) & 4022730752u);
            uint _1320 = _1318 ^ (_1318 >> 18u);
            float _2443;
            _2443 = _2423;
            uint _1337;
            uint _1356;
            float _1362;
            uint _2442 = 0u;
            uint _2604 = _1320;
            for (;;)
            {
                if (!(_2442 < 1u))
                {
                    break;
                }
                uint _1348 = _2604 + (_2604 << 10u);
                uint _1350 = _1348 ^ (_1348 >> 6u);
                uint _1352 = _1350 + (_1350 << 3u);
                uint _1354 = _1352 ^ (_1352 >> 11u);
                _1356 = _1354 + (_1354 << 15u);
                _1362 = uintBitsToFloat((_2604 & 8388607u) | 1065353216u) - 1.0;
                _1337 = _2442 + 1u;
                _2604 = _1356;
                _2443 = _1362;
                _2442 = _1337;
                continue;
            }
            vec2 _1368 = (_1011 * _1011) * (vec2(3.0) - (vec2(2.0) * _1011));
            float _1043 = _1368.x;
            float _1044 = 1.0 - _1043;
            float _1046 = _1368.y;
            float _992 = clamp(arch_height - _984, 0.0, 1.0);
            if (_984 < (((1.0 - exp((-5.0) * _961)) * arch_height) * ((_992 * _992) * clamp(smoothstep(0.0, 0.300000011920928955078125, (((1.0 - _1046) * ((_2425 * _1044) + (_2430 * _1043))) + ((_2436 * _1044) * _1046)) + ((_2443 * _1043) * _1046)), 0.800000011920928955078125, 1.0))))
            {
                gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
                entryPointParam_vs_main_frag_position_ws = vec3(0.0);
                entryPointParam_vs_main_frag_normal_ws = vec3(0.0);
                entryPointParam_vs_main_frag_uv = vec2(0.0);
                break;
            }
        }
        bool _2449;
        if (_196)
        {
            _2449 = material_data_ivy_leaf_buffer._member0[_62].position.y < 0.89999997615814208984375;
        }
        else
        {
            _2449 = false;
        }
        _104.y = material_data_ivy_leaf_buffer._member0[_62].position.y + _951;
        vec3 _613 = (mix((vec4(_2418, 1.0) * _255).xyz, vec3(0.0), bvec3(_2449)) + _104).xyz;
        vec3 _1376 = _613 * 0.4000000059604644775390625;
        ivec3 _1402 = ivec3(floor(_1376));
        vec3 _1403 = fract(_1376);
        uvec3 _1404 = uvec3(_1402);
        uint _1518 = _1404.z;
        uint _1524 = _1518 + (_1518 << 10u);
        uint _1526 = _1524 ^ (_1524 >> 6u);
        uint _1528 = _1526 + (_1526 << 3u);
        uint _1530 = _1528 ^ (_1528 >> 11u);
        uint _1538 = (((_1404.y * 1664525u) + (_1530 + (_1530 << 15u))) + 1013904223u) * 1664525u;
        uint _1540 = _1538 ^ (_1538 >> 11u);
        uint _1543 = _1540 ^ ((_1540 << 7u) & 2636928640u);
        uint _1546 = _1543 ^ ((_1543 << 15u) & 4022730752u);
        uint _1554 = (((_1404.x * 1664525u) + (_1546 ^ (_1546 >> 18u))) + 1013904223u) * 1664525u;
        uint _1556 = _1554 ^ (_1554 >> 11u);
        uint _1559 = _1556 ^ ((_1556 << 7u) & 2636928640u);
        uint _1562 = _1559 ^ ((_1559 << 15u) & 4022730752u);
        uint _1564 = _1562 ^ (_1562 >> 18u);
        uint _1583;
        uint _1602;
        vec2 _1391;
        uint _2469 = 0u;
        uint _2585 = _1564;
        for (;;)
        {
            if (!(_2469 < 2u))
            {
                break;
            }
            uint _1594 = _2585 + (_2585 << 10u);
            uint _1596 = _1594 ^ (_1594 >> 6u);
            uint _1598 = _1596 + (_1596 << 3u);
            uint _1600 = _1598 ^ (_1598 >> 11u);
            _1602 = _1600 + (_1600 << 15u);
            _1391[_2469] = uintBitsToFloat((_2585 & 8388607u) | 1065353216u) - 1.0;
            _1583 = _2469 + 1u;
            _2585 = _1602;
            _2469 = _1583;
            continue;
        }
        uvec3 _1413 = uvec3(_1402 + ivec3(1, 0, 0));
        uint _1618 = _1413.z;
        uint _1624 = _1618 + (_1618 << 10u);
        uint _1626 = _1624 ^ (_1624 >> 6u);
        uint _1628 = _1626 + (_1626 << 3u);
        uint _1630 = _1628 ^ (_1628 >> 11u);
        uint _1638 = (((_1413.y * 1664525u) + (_1630 + (_1630 << 15u))) + 1013904223u) * 1664525u;
        uint _1640 = _1638 ^ (_1638 >> 11u);
        uint _1643 = _1640 ^ ((_1640 << 7u) & 2636928640u);
        uint _1646 = _1643 ^ ((_1643 << 15u) & 4022730752u);
        uint _1654 = (((_1413.x * 1664525u) + (_1646 ^ (_1646 >> 18u))) + 1013904223u) * 1664525u;
        uint _1656 = _1654 ^ (_1654 >> 11u);
        uint _1659 = _1656 ^ ((_1656 << 7u) & 2636928640u);
        uint _1662 = _1659 ^ ((_1659 << 15u) & 4022730752u);
        uint _1664 = _1662 ^ (_1662 >> 18u);
        uint _1683;
        uint _1702;
        vec2 _1392;
        uint _2480 = 0u;
        uint _2584 = _1664;
        for (;;)
        {
            if (!(_2480 < 2u))
            {
                break;
            }
            uint _1694 = _2584 + (_2584 << 10u);
            uint _1696 = _1694 ^ (_1694 >> 6u);
            uint _1698 = _1696 + (_1696 << 3u);
            uint _1700 = _1698 ^ (_1698 >> 11u);
            _1702 = _1700 + (_1700 << 15u);
            _1392[_2480] = uintBitsToFloat((_2584 & 8388607u) | 1065353216u) - 1.0;
            _1683 = _2480 + 1u;
            _2584 = _1702;
            _2480 = _1683;
            continue;
        }
        uvec3 _1420 = uvec3(_1402 + ivec3(0, 1, 0));
        uint _1718 = _1420.z;
        uint _1724 = _1718 + (_1718 << 10u);
        uint _1726 = _1724 ^ (_1724 >> 6u);
        uint _1728 = _1726 + (_1726 << 3u);
        uint _1730 = _1728 ^ (_1728 >> 11u);
        uint _1738 = (((_1420.y * 1664525u) + (_1730 + (_1730 << 15u))) + 1013904223u) * 1664525u;
        uint _1740 = _1738 ^ (_1738 >> 11u);
        uint _1743 = _1740 ^ ((_1740 << 7u) & 2636928640u);
        uint _1746 = _1743 ^ ((_1743 << 15u) & 4022730752u);
        uint _1754 = (((_1420.x * 1664525u) + (_1746 ^ (_1746 >> 18u))) + 1013904223u) * 1664525u;
        uint _1756 = _1754 ^ (_1754 >> 11u);
        uint _1759 = _1756 ^ ((_1756 << 7u) & 2636928640u);
        uint _1762 = _1759 ^ ((_1759 << 15u) & 4022730752u);
        uint _1764 = _1762 ^ (_1762 >> 18u);
        uint _1783;
        uint _1802;
        vec2 _1393;
        uint _2492 = 0u;
        uint _2583 = _1764;
        for (;;)
        {
            if (!(_2492 < 2u))
            {
                break;
            }
            uint _1794 = _2583 + (_2583 << 10u);
            uint _1796 = _1794 ^ (_1794 >> 6u);
            uint _1798 = _1796 + (_1796 << 3u);
            uint _1800 = _1798 ^ (_1798 >> 11u);
            _1802 = _1800 + (_1800 << 15u);
            _1393[_2492] = uintBitsToFloat((_2583 & 8388607u) | 1065353216u) - 1.0;
            _1783 = _2492 + 1u;
            _2583 = _1802;
            _2492 = _1783;
            continue;
        }
        uvec3 _1428 = uvec3(_1402 + ivec3(1, 1, 0));
        uint _1818 = _1428.z;
        uint _1824 = _1818 + (_1818 << 10u);
        uint _1826 = _1824 ^ (_1824 >> 6u);
        uint _1828 = _1826 + (_1826 << 3u);
        uint _1830 = _1828 ^ (_1828 >> 11u);
        uint _1838 = (((_1428.y * 1664525u) + (_1830 + (_1830 << 15u))) + 1013904223u) * 1664525u;
        uint _1840 = _1838 ^ (_1838 >> 11u);
        uint _1843 = _1840 ^ ((_1840 << 7u) & 2636928640u);
        uint _1846 = _1843 ^ ((_1843 << 15u) & 4022730752u);
        uint _1854 = (((_1428.x * 1664525u) + (_1846 ^ (_1846 >> 18u))) + 1013904223u) * 1664525u;
        uint _1856 = _1854 ^ (_1854 >> 11u);
        uint _1859 = _1856 ^ ((_1856 << 7u) & 2636928640u);
        uint _1862 = _1859 ^ ((_1859 << 15u) & 4022730752u);
        uint _1864 = _1862 ^ (_1862 >> 18u);
        uint _1883;
        uint _1902;
        vec2 _1394;
        uint _2505 = 0u;
        uint _2582 = _1864;
        for (;;)
        {
            if (!(_2505 < 2u))
            {
                break;
            }
            uint _1894 = _2582 + (_2582 << 10u);
            uint _1896 = _1894 ^ (_1894 >> 6u);
            uint _1898 = _1896 + (_1896 << 3u);
            uint _1900 = _1898 ^ (_1898 >> 11u);
            _1902 = _1900 + (_1900 << 15u);
            _1394[_2505] = uintBitsToFloat((_2582 & 8388607u) | 1065353216u) - 1.0;
            _1883 = _2505 + 1u;
            _2582 = _1902;
            _2505 = _1883;
            continue;
        }
        uvec3 _1435 = uvec3(_1402 + ivec3(0, 0, 1));
        uint _1918 = _1435.z;
        uint _1924 = _1918 + (_1918 << 10u);
        uint _1926 = _1924 ^ (_1924 >> 6u);
        uint _1928 = _1926 + (_1926 << 3u);
        uint _1930 = _1928 ^ (_1928 >> 11u);
        uint _1938 = (((_1435.y * 1664525u) + (_1930 + (_1930 << 15u))) + 1013904223u) * 1664525u;
        uint _1940 = _1938 ^ (_1938 >> 11u);
        uint _1943 = _1940 ^ ((_1940 << 7u) & 2636928640u);
        uint _1946 = _1943 ^ ((_1943 << 15u) & 4022730752u);
        uint _1954 = (((_1435.x * 1664525u) + (_1946 ^ (_1946 >> 18u))) + 1013904223u) * 1664525u;
        uint _1956 = _1954 ^ (_1954 >> 11u);
        uint _1959 = _1956 ^ ((_1956 << 7u) & 2636928640u);
        uint _1962 = _1959 ^ ((_1959 << 15u) & 4022730752u);
        uint _1964 = _1962 ^ (_1962 >> 18u);
        uint _1983;
        uint _2002;
        vec2 _1395;
        uint _2519 = 0u;
        uint _2581 = _1964;
        for (;;)
        {
            if (!(_2519 < 2u))
            {
                break;
            }
            uint _1994 = _2581 + (_2581 << 10u);
            uint _1996 = _1994 ^ (_1994 >> 6u);
            uint _1998 = _1996 + (_1996 << 3u);
            uint _2000 = _1998 ^ (_1998 >> 11u);
            _2002 = _2000 + (_2000 << 15u);
            _1395[_2519] = uintBitsToFloat((_2581 & 8388607u) | 1065353216u) - 1.0;
            _1983 = _2519 + 1u;
            _2581 = _2002;
            _2519 = _1983;
            continue;
        }
        uvec3 _1444 = uvec3(_1402 + ivec3(1, 0, 1));
        uint _2018 = _1444.z;
        uint _2024 = _2018 + (_2018 << 10u);
        uint _2026 = _2024 ^ (_2024 >> 6u);
        uint _2028 = _2026 + (_2026 << 3u);
        uint _2030 = _2028 ^ (_2028 >> 11u);
        uint _2038 = (((_1444.y * 1664525u) + (_2030 + (_2030 << 15u))) + 1013904223u) * 1664525u;
        uint _2040 = _2038 ^ (_2038 >> 11u);
        uint _2043 = _2040 ^ ((_2040 << 7u) & 2636928640u);
        uint _2046 = _2043 ^ ((_2043 << 15u) & 4022730752u);
        uint _2054 = (((_1444.x * 1664525u) + (_2046 ^ (_2046 >> 18u))) + 1013904223u) * 1664525u;
        uint _2056 = _2054 ^ (_2054 >> 11u);
        uint _2059 = _2056 ^ ((_2056 << 7u) & 2636928640u);
        uint _2062 = _2059 ^ ((_2059 << 15u) & 4022730752u);
        uint _2064 = _2062 ^ (_2062 >> 18u);
        uint _2083;
        uint _2102;
        vec2 _1396;
        uint _2534 = 0u;
        uint _2580 = _2064;
        for (;;)
        {
            if (!(_2534 < 2u))
            {
                break;
            }
            uint _2094 = _2580 + (_2580 << 10u);
            uint _2096 = _2094 ^ (_2094 >> 6u);
            uint _2098 = _2096 + (_2096 << 3u);
            uint _2100 = _2098 ^ (_2098 >> 11u);
            _2102 = _2100 + (_2100 << 15u);
            _1396[_2534] = uintBitsToFloat((_2580 & 8388607u) | 1065353216u) - 1.0;
            _2083 = _2534 + 1u;
            _2580 = _2102;
            _2534 = _2083;
            continue;
        }
        uvec3 _1451 = uvec3(_1402 + ivec3(0, 1, 1));
        uint _2118 = _1451.z;
        uint _2124 = _2118 + (_2118 << 10u);
        uint _2126 = _2124 ^ (_2124 >> 6u);
        uint _2128 = _2126 + (_2126 << 3u);
        uint _2130 = _2128 ^ (_2128 >> 11u);
        uint _2138 = (((_1451.y * 1664525u) + (_2130 + (_2130 << 15u))) + 1013904223u) * 1664525u;
        uint _2140 = _2138 ^ (_2138 >> 11u);
        uint _2143 = _2140 ^ ((_2140 << 7u) & 2636928640u);
        uint _2146 = _2143 ^ ((_2143 << 15u) & 4022730752u);
        uint _2154 = (((_1451.x * 1664525u) + (_2146 ^ (_2146 >> 18u))) + 1013904223u) * 1664525u;
        uint _2156 = _2154 ^ (_2154 >> 11u);
        uint _2159 = _2156 ^ ((_2156 << 7u) & 2636928640u);
        uint _2162 = _2159 ^ ((_2159 << 15u) & 4022730752u);
        uint _2164 = _2162 ^ (_2162 >> 18u);
        uint _2183;
        uint _2202;
        vec2 _1397;
        uint _2550 = 0u;
        uint _2579 = _2164;
        for (;;)
        {
            if (!(_2550 < 2u))
            {
                break;
            }
            uint _2194 = _2579 + (_2579 << 10u);
            uint _2196 = _2194 ^ (_2194 >> 6u);
            uint _2198 = _2196 + (_2196 << 3u);
            uint _2200 = _2198 ^ (_2198 >> 11u);
            _2202 = _2200 + (_2200 << 15u);
            _1397[_2550] = uintBitsToFloat((_2579 & 8388607u) | 1065353216u) - 1.0;
            _2183 = _2550 + 1u;
            _2579 = _2202;
            _2550 = _2183;
            continue;
        }
        uvec3 _1459 = uvec3(_1402 + ivec3(1));
        uint _2218 = _1459.z;
        uint _2224 = _2218 + (_2218 << 10u);
        uint _2226 = _2224 ^ (_2224 >> 6u);
        uint _2228 = _2226 + (_2226 << 3u);
        uint _2230 = _2228 ^ (_2228 >> 11u);
        uint _2238 = (((_1459.y * 1664525u) + (_2230 + (_2230 << 15u))) + 1013904223u) * 1664525u;
        uint _2240 = _2238 ^ (_2238 >> 11u);
        uint _2243 = _2240 ^ ((_2240 << 7u) & 2636928640u);
        uint _2246 = _2243 ^ ((_2243 << 15u) & 4022730752u);
        uint _2254 = (((_1459.x * 1664525u) + (_2246 ^ (_2246 >> 18u))) + 1013904223u) * 1664525u;
        uint _2256 = _2254 ^ (_2254 >> 11u);
        uint _2259 = _2256 ^ ((_2256 << 7u) & 2636928640u);
        uint _2262 = _2259 ^ ((_2259 << 15u) & 4022730752u);
        uint _2264 = _2262 ^ (_2262 >> 18u);
        uint _2283;
        uint _2302;
        vec2 _1398;
        uint _2567 = 0u;
        uint _2578 = _2264;
        for (;;)
        {
            if (!(_2567 < 2u))
            {
                break;
            }
            uint _2294 = _2578 + (_2578 << 10u);
            uint _2296 = _2294 ^ (_2294 >> 6u);
            uint _2298 = _2296 + (_2296 << 3u);
            uint _2300 = _2298 ^ (_2298 >> 11u);
            _2302 = _2300 + (_2300 << 15u);
            _1398[_2567] = uintBitsToFloat((_2578 & 8388607u) | 1065353216u) - 1.0;
            _2283 = _2567 + 1u;
            _2578 = _2302;
            _2567 = _2283;
            continue;
        }
        vec3 _2314 = (_1403 * _1403) * (vec3(3.0) - (vec3(2.0) * _1403));
        float _1467 = _2314.x;
        float _1468 = 1.0 - _1467;
        float _1470 = _2314.y;
        float _1471 = 1.0 - _1470;
        float _1473 = _2314.z;
        float _1474 = 1.0 - _1473;
        vec2 _1381 = clamp((((((((((((_1391 * _1468) * _1471) * _1474) + (((_1392 * _1467) * _1471) * _1474)) + (((_1393 * _1468) * _1470) * _1474)) + (((_1394 * _1467) * _1470) * _1474)) + (((_1395 * _1468) * _1471) * _1473)) + (((_1396 * _1467) * _1471) * _1473)) + (((_1397 * _1468) * _1470) * _1473)) + (((_1398 * _1467) * _1470) * _1473)) - vec2(0.5)) * 2.5, vec2(-0.5), vec2(0.5));
        vec3 _887 = (_613 + (vec3(_1381.x, 0.0, _1381.y) * 0.0599999986588954925537109375)).xyz;
        uint _911 = uint(material_data_ivy_leaf_buffer._member0[_62].seed ^ 2342304);
        uint _2324 = _911 + (_911 << 10u);
        uint _2326 = _2324 ^ (_2324 >> 6u);
        uint _2328 = _2326 + (_2326 << 3u);
        uint _2330 = _2328 ^ (_2328 >> 11u);
        uint _921 = uint(material_data_ivy_leaf_buffer._member0[_62].seed ^ 9344565);
        uint _2346 = _921 + (_921 << 10u);
        uint _2348 = _2346 ^ (_2346 >> 6u);
        uint _2350 = _2348 + (_2348 << 3u);
        uint _2352 = _2350 ^ (_2350 >> 11u);
        gl_Position = vec4(_887, 1.0) * current_view.world_to_sample;
        entryPointParam_vs_main_frag_position_ws = _887;
        entryPointParam_vs_main_frag_normal_ws = (vec4(Vertex_Normal, 0.0) * _255).xyz;
        entryPointParam_vs_main_frag_uv = (Vertex_UV * (_196 ? 0.300000011920928955078125 : 0.100000001490116119384765625)) + vec2(uintBitsToFloat(((_2330 + (_2330 << 15u)) & 8388607u) | 1065353216u) - 1.0, uintBitsToFloat(((_2352 + (_2352 << 15u)) & 8388607u) | 1065353216u) - 1.0);
        break;
    } while(false);
}

