#version 460
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_samplerless_texture_functions : require

struct PlacementData_natural
{
    vec3 position;
    float scale;
    float rotation_angle;
    int id;
    uint custom0;
    uint custom1;
    uint anim_t_packed;
    vec2 bend_vector;
    int pad0;
};

struct Tex2D_natural
{
    uint bindless_handle;
};

float _2053;

layout(set = 0, binding = 0, scalar) readonly buffer StructuredBuffer
{
    PlacementData_natural _member0[];
} material_data_placement_buffer;

layout(set = 7, binding = 0, std140) uniform PathExclusionMask_natural
{
    uvec2 tex_dims;
} path_mask;

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

layout(set = 18, binding = 0, std140) uniform ViewConstants_natural
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

layout(set = 2, binding = 4) uniform sampler samplers_llb;
layout(set = 7, binding = 1) uniform texture2D path_mask_tex;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 10, binding = 0) uniform texture2D rocky_terrain_tex;
layout(set = 13, binding = 0) uniform texture2D foliage_exclusion_mask_tex;
layout(set = 12, binding = 0) uniform texture2D building_mask_tex;
layout(set = 11, binding = 0) uniform texture2D water_mask_tex;
layout(set = 9, binding = 0) uniform utexture2D plant_sample_mask_tex;
layout(set = 19, binding = 1) uniform texture2D terrain_heightmap_terrain_heightmap;
layout(set = 6, binding = 0) uniform texture2D object_push_grass_object_push;

layout(location = 0) out vec3 entryPointParam_vs_main_frag_vertex_color;
layout(location = 1) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_pos_ws;
layout(location = 3) out vec3 entryPointParam_vs_main_frag_normal;
layout(location = 4) flat out int entryPointParam_vs_main_id;
layout(location = 5) flat out int entryPointParam_vs_main_frag_plant_part_id;
layout(location = 0) in vec3 Vertex_Position;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 4) in int plant_part_id;
layout(location = 3) in vec2 Vertex_UV;
layout(location = 1) in vec3 Vertex_Color;

void main()
{
    do
    {
        float _1215;
        bool _1216;
        uint _70 = uint(gl_InstanceIndex);
        vec2 _1185 = (material_data_placement_buffer._member0[_70].position.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5);
        float _2020;
        do
        {
            _1215 = _1185.x;
            _1216 = _1215 < 0.0;
            bool _2017;
            if (_1216)
            {
                _2017 = true;
            }
            else
            {
                _2017 = _1215 > 1.0;
            }
            bool _2018;
            if (_2017)
            {
                _2018 = true;
            }
            else
            {
                _2018 = _1185.y < 0.0;
            }
            bool _2019;
            if (_2018)
            {
                _2019 = true;
            }
            else
            {
                _2019 = _1185.y > 1.0;
            }
            if (_2019)
            {
                _2020 = 0.0;
                break;
            }
            else
            {
                _2020 = textureLod(sampler2D(rocky_terrain_tex, samplers_lnc_iso), _1185, 0.0).x;
                break;
            }
            break; // unreachable workaround
        } while(false);
        bool _2021;
        if (smoothstep(0.07500000298023223876953125, 0.125, textureLod(sampler2D(path_mask_tex, samplers_llb), _1185, 0.0).x) > 0.300000011920928955078125)
        {
            _2021 = true;
        }
        else
        {
            _2021 = _2020 > 0.4000000059604644775390625;
        }
        bool _2026;
        if (_2021)
        {
            _2026 = true;
        }
        else
        {
            float _2025;
            do
            {
                bool _2022;
                if (_1216)
                {
                    _2022 = true;
                }
                else
                {
                    _2022 = _1215 > 1.0;
                }
                bool _2023;
                if (_2022)
                {
                    _2023 = true;
                }
                else
                {
                    _2023 = _1185.y < 0.0;
                }
                bool _2024;
                if (_2023)
                {
                    _2024 = true;
                }
                else
                {
                    _2024 = _1185.y > 1.0;
                }
                if (_2024)
                {
                    _2025 = 0.0;
                    break;
                }
                else
                {
                    _2025 = textureLod(sampler2D(water_mask_tex, samplers_lnc_iso), _1185, 0.0).y;
                    break;
                }
                break; // unreachable workaround
            } while(false);
            _2026 = _2025 > 0.25;
        }
        bool _2027;
        if (_2026)
        {
            _2027 = true;
        }
        else
        {
            _2027 = textureLod(sampler2D(building_mask_tex, samplers_lnc_iso), _1185, 0.0).x > 0.5;
        }
        bool _2028;
        if (_2027)
        {
            _2028 = true;
        }
        else
        {
            _2028 = textureLod(sampler2D(foliage_exclusion_mask_tex, samplers_llb), _1185, 0.0).x > 0.0;
        }
        bool _2033;
        if (_2028)
        {
            _2033 = true;
        }
        else
        {
            bool _2032;
            do
            {
                bool _2029;
                if (_1216)
                {
                    _2029 = true;
                }
                else
                {
                    _2029 = _1215 > 1.0;
                }
                bool _2030;
                if (_2029)
                {
                    _2030 = true;
                }
                else
                {
                    _2030 = _1185.y < 0.0;
                }
                bool _2031;
                if (_2030)
                {
                    _2031 = true;
                }
                else
                {
                    _2031 = _1185.y > 1.0;
                }
                if (_2031)
                {
                    _2032 = false;
                    break;
                }
                _2032 = any(notEqual(texelFetch(plant_sample_mask_tex, ivec3(ivec2(min(uvec2(_1185 * 512.0), uvec2(511u))), 0).xy, 0), uvec4(0u)));
                break;
            } while(false);
            _2033 = _2032;
        }
        if (_2033)
        {
            gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
            entryPointParam_vs_main_frag_vertex_color = vec3(0.0);
            entryPointParam_vs_main_frag_uv = vec2(0.0);
            entryPointParam_vs_main_frag_pos_ws = vec3(0.0);
            entryPointParam_vs_main_frag_normal = vec3(0.0);
            entryPointParam_vs_main_id = 0;
            entryPointParam_vs_main_frag_plant_part_id = 0;
            break;
        }
        int _452 = int(_70);
        float _1453 = radians(material_data_placement_buffer._member0[_452].rotation_angle);
        vec3 _1501 = normalize(vec3(cos(_1453), 0.0, sin(_1453)));
        mat4 _1485 = transpose(mat4(vec4(_1501, 0.0), vec4(0.0, 1.0, 0.0, 0.0), vec4(normalize(cross(_1501, vec3(0.0, 1.0, 0.0))), 0.0), vec4(0.0, 0.0, 0.0, 1.0)));
        vec4 _1489 = ((vec4(Vertex_Position * 0.699999988079071044921875, 1.0) * mat4(vec4(material_data_placement_buffer._member0[_452].scale, 0.0, 0.0, 0.0), vec4(0.0, material_data_placement_buffer._member0[_452].scale, 0.0, 0.0), vec4(0.0, 0.0, material_data_placement_buffer._member0[_452].scale, 0.0), vec4(0.0, 0.0, 0.0, 1.0))) * _1485) * mat4(vec4(1.0, 0.0, 0.0, material_data_placement_buffer._member0[_452].position.x), vec4(0.0, 1.0, 0.0, material_data_placement_buffer._member0[_452].position.y), vec4(0.0, 0.0, 1.0, material_data_placement_buffer._member0[_452].position.z), vec4(0.0, 0.0, 0.0, 1.0));
        vec4 _2009 = _1489;
        _2009.y = _1489.y + mix(-2.5, 24.0, textureLod(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), _1185, 0.0).x);
        bool _687 = plant_part_id == 3;
        vec2 _1520 = (material_data_placement_buffer._member0[_70].position.xz * 0.100000001490116119384765625) + (vec2(float(frame_constants.game_time_sec) + frame_constants.game_time_frac, 0.0) * 1.2000000476837158203125);
        ivec2 _1557 = ivec2(floor(_1520));
        vec2 _1558 = fract(_1520);
        uvec2 _1559 = uvec2(_1557);
        uint _1609 = _1559.y;
        uint _1615 = _1609 + (_1609 << 10u);
        uint _1617 = _1615 ^ (_1615 >> 6u);
        uint _1619 = _1617 + (_1617 << 3u);
        uint _1621 = _1619 ^ (_1619 >> 11u);
        uint _1629 = (((_1559.x * 1664525u) + (_1621 + (_1621 << 15u))) + 1013904223u) * 1664525u;
        uint _1631 = _1629 ^ (_1629 >> 11u);
        uint _1634 = _1631 ^ ((_1631 << 7u) & 2636928640u);
        uint _1637 = _1634 ^ ((_1634 << 15u) & 4022730752u);
        uint _1639 = _1637 ^ (_1637 >> 18u);
        float _2055;
        _2055 = _2053;
        uint _1656;
        uint _1675;
        float _1681;
        uint _2054 = 0u;
        uint _2133 = _1639;
        for (;;)
        {
            if (!(_2054 < 1u))
            {
                break;
            }
            uint _1667 = _2133 + (_2133 << 10u);
            uint _1669 = _1667 ^ (_1667 >> 6u);
            uint _1671 = _1669 + (_1669 << 3u);
            uint _1673 = _1671 ^ (_1671 >> 11u);
            _1675 = _1673 + (_1673 << 15u);
            _1681 = uintBitsToFloat((_2133 & 8388607u) | 1065353216u) - 1.0;
            _1656 = _2054 + 1u;
            _2133 = _1675;
            _2055 = _1681;
            _2054 = _1656;
            continue;
        }
        uvec2 _1567 = uvec2(_1557 + ivec2(1, 0));
        uint _1685 = _1567.y;
        uint _1691 = _1685 + (_1685 << 10u);
        uint _1693 = _1691 ^ (_1691 >> 6u);
        uint _1695 = _1693 + (_1693 << 3u);
        uint _1697 = _1695 ^ (_1695 >> 11u);
        uint _1705 = (((_1567.x * 1664525u) + (_1697 + (_1697 << 15u))) + 1013904223u) * 1664525u;
        uint _1707 = _1705 ^ (_1705 >> 11u);
        uint _1710 = _1707 ^ ((_1707 << 7u) & 2636928640u);
        uint _1713 = _1710 ^ ((_1710 << 15u) & 4022730752u);
        uint _1715 = _1713 ^ (_1713 >> 18u);
        float _2076;
        _2076 = _2053;
        uint _1732;
        uint _1751;
        float _1757;
        uint _2075 = 0u;
        uint _2132 = _1715;
        for (;;)
        {
            if (!(_2075 < 1u))
            {
                break;
            }
            uint _1743 = _2132 + (_2132 << 10u);
            uint _1745 = _1743 ^ (_1743 >> 6u);
            uint _1747 = _1745 + (_1745 << 3u);
            uint _1749 = _1747 ^ (_1747 >> 11u);
            _1751 = _1749 + (_1749 << 15u);
            _1757 = uintBitsToFloat((_2132 & 8388607u) | 1065353216u) - 1.0;
            _1732 = _2075 + 1u;
            _2132 = _1751;
            _2076 = _1757;
            _2075 = _1732;
            continue;
        }
        uvec2 _1574 = uvec2(_1557 + ivec2(0, 1));
        uint _1761 = _1574.y;
        uint _1767 = _1761 + (_1761 << 10u);
        uint _1769 = _1767 ^ (_1767 >> 6u);
        uint _1771 = _1769 + (_1769 << 3u);
        uint _1773 = _1771 ^ (_1771 >> 11u);
        uint _1781 = (((_1574.x * 1664525u) + (_1773 + (_1773 << 15u))) + 1013904223u) * 1664525u;
        uint _1783 = _1781 ^ (_1781 >> 11u);
        uint _1786 = _1783 ^ ((_1783 << 7u) & 2636928640u);
        uint _1789 = _1786 ^ ((_1786 << 15u) & 4022730752u);
        uint _1791 = _1789 ^ (_1789 >> 18u);
        float _2098;
        _2098 = _2053;
        uint _1808;
        uint _1827;
        float _1833;
        uint _2097 = 0u;
        uint _2131 = _1791;
        for (;;)
        {
            if (!(_2097 < 1u))
            {
                break;
            }
            uint _1819 = _2131 + (_2131 << 10u);
            uint _1821 = _1819 ^ (_1819 >> 6u);
            uint _1823 = _1821 + (_1821 << 3u);
            uint _1825 = _1823 ^ (_1823 >> 11u);
            _1827 = _1825 + (_1825 << 15u);
            _1833 = uintBitsToFloat((_2131 & 8388607u) | 1065353216u) - 1.0;
            _1808 = _2097 + 1u;
            _2131 = _1827;
            _2098 = _1833;
            _2097 = _1808;
            continue;
        }
        uvec2 _1582 = uvec2(_1557 + ivec2(1));
        uint _1837 = _1582.y;
        uint _1843 = _1837 + (_1837 << 10u);
        uint _1845 = _1843 ^ (_1843 >> 6u);
        uint _1847 = _1845 + (_1845 << 3u);
        uint _1849 = _1847 ^ (_1847 >> 11u);
        uint _1857 = (((_1582.x * 1664525u) + (_1849 + (_1849 << 15u))) + 1013904223u) * 1664525u;
        uint _1859 = _1857 ^ (_1857 >> 11u);
        uint _1862 = _1859 ^ ((_1859 << 7u) & 2636928640u);
        uint _1865 = _1862 ^ ((_1862 << 15u) & 4022730752u);
        uint _1867 = _1865 ^ (_1865 >> 18u);
        float _2121;
        _2121 = _2053;
        uint _1884;
        uint _1903;
        float _1909;
        uint _2120 = 0u;
        uint _2130 = _1867;
        for (;;)
        {
            if (!(_2120 < 1u))
            {
                break;
            }
            uint _1895 = _2130 + (_2130 << 10u);
            uint _1897 = _1895 ^ (_1895 >> 6u);
            uint _1899 = _1897 + (_1897 << 3u);
            uint _1901 = _1899 ^ (_1899 >> 11u);
            _1903 = _1901 + (_1901 << 15u);
            _1909 = uintBitsToFloat((_2130 & 8388607u) | 1065353216u) - 1.0;
            _1884 = _2120 + 1u;
            _2130 = _1903;
            _2121 = _1909;
            _2120 = _1884;
            continue;
        }
        vec2 _1915 = (_1558 * _1558) * (vec2(3.0) - (vec2(2.0) * _1558));
        float _1590 = _1915.x;
        float _1591 = 1.0 - _1590;
        float _1593 = _1915.y;
        float _1920 = Vertex_Position.y * Vertex_Position.y;
        uint _1529 = uint(material_data_placement_buffer._member0[_70].id);
        uint _1928 = _1529 + (_1529 << 10u);
        uint _1930 = _1928 ^ (_1928 >> 6u);
        uint _1932 = _1930 + (_1930 << 3u);
        uint _1934 = _1932 ^ (_1932 >> 11u);
        _2009.x = _1489.x - ((((_1920 * (sin((((((1.0 - _1593) * ((_2055 * _1591) + (_2076 * _1590))) + ((_2098 * _1591) * _1593)) + ((_2121 * _1590) * _1593)) * 3.1400001049041748046875) - 1.57000005245208740234375) + 0.300000011920928955078125)) * 0.699999988079071044921875) * (_687 ? 0.25 : 0.1500000059604644775390625)) * mix(0.699999988079071044921875, 1.0, uintBitsToFloat(((_1934 + (_1934 << 15u)) & 8388607u) | 1065353216u) - 1.0));
        vec4 _1956 = textureLod(sampler2D(object_push_grass_object_push, samplers_lnc_iso), _1185, 0.0);
        float _2128;
        if (_687)
        {
            _2128 = clamp(_1920, 0.0, 1.0) * 0.3499999940395355224609375;
        }
        else
        {
            _2128 = pow(clamp(_1920, 0.0, 1.0), 0.5) * 0.25;
        }
        vec4 _2129;
        if (clamp(_1956.z, 0.0, 1.0) > 0.0)
        {
            vec2 _1059 = _2009.xz + (_1956.xy * _2128);
            vec4 _2014 = _2009;
            _2014.x = _1059.x;
            _2014.z = _1059.y;
            _2129 = _2014;
        }
        else
        {
            _2129 = _2009;
        }
        gl_Position = vec4(_2129.xyz, 1.0) * current_view.world_to_sample;
        entryPointParam_vs_main_frag_vertex_color = Vertex_Color;
        entryPointParam_vs_main_frag_uv = Vertex_UV;
        entryPointParam_vs_main_frag_pos_ws = _2129.xyz;
        entryPointParam_vs_main_frag_normal = (vec4(Vertex_Normal, 0.0) * _1485).xyz;
        entryPointParam_vs_main_id = material_data_placement_buffer._member0[_70].id;
        entryPointParam_vs_main_frag_plant_part_id = plant_part_id;
        break;
    } while(false);
}

