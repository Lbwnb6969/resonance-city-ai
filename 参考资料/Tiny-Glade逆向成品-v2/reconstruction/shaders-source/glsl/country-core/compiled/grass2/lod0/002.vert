#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require

struct Bindless_natural
{
    uint bindless_handle;
};

struct Grass2Lod0Material_natural
{
    Bindless_natural world_albedo_tint;
    uint first_part_material;
    float wind_wave_scale;
    uint shadow_opacity;
    float height_scale_min;
    float height_scale_max;
    float xz_scale_min;
    float xz_scale_max;
};

struct Tex2D_natural
{
    uint bindless_handle;
};

float _2759;
vec4 _2994;
vec3 _2995;

layout(set = 5, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 2, std430) readonly buffer material_data_nani_instance_data
{
    uint _member0[];
} material_data_nani_instance_data_1;

layout(set = 0, binding = 0, std430) readonly buffer material_data_exemplar_materials
{
    Grass2Lod0Material_natural _member0[];
} material_data_exemplar_materials_1;

layout(set = 7, binding = 0, scalar) uniform TerrainHeightmap_natural
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

layout(set = 6, binding = 0, std140) uniform ViewConstants_natural
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

layout(set = 11, binding = 0) uniform texture2D grass_removal_mask_tex;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 9, binding = 0) uniform texture2D object_push_grass_object_push;
layout(set = 7, binding = 1) uniform texture2D terrain_heightmap_terrain_heightmap;
layout(set = 1, binding = 0) uniform texture2D resource_handles[];

layout(location = 0) in vec2 Vertex_UV;
layout(location = 1) in vec3 Baked_Position;
layout(location = 2) in vec3 Baked_Normal;
layout(location = 3) in vec3 Baked_Dpdu;
layout(location = 4) in vec3 Baked_Dpdv;
layout(location = 5) in float Baked_BladeLocalHeight;
layout(location = 6) in float Baked_BladeSeed;
layout(location = 7) in vec2 Baked_PlantOffsetXZ;
layout(location = 0) out vec2 entryPointParam_vs_main_uv;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_tangent_ws;
layout(location = 3) out vec3 entryPointParam_vs_main_frag_bitangent_ws;
layout(location = 4) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 5) out vec3 entryPointParam_vs_main_albedo_tint;
layout(location = 6) out float entryPointParam_vs_main_blade_local_height;
layout(location = 7) flat out float entryPointParam_vs_main_lod_transition_t;
layout(location = 8) flat out uint entryPointParam_vs_main_exemplar_id;
layout(location = 9) flat out uint entryPointParam_vs_main_part_material_index;
layout(location = 10) flat out uint entryPointParam_vs_main_blade_seed;
layout(location = 11) flat out vec2 entryPointParam_vs_main_clump_center_xz;
layout(location = 8) in float Baked_PartIndex;

void main()
{
    do
    {
        float _1637;
        uint _35 = uint(gl_InstanceIndex);
        uint _1304 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_35]] & 255u;
        float _1309 = float(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_35]] >> 16u) * 1.525902189314365386962890625e-05;
        vec3 _125 = Baked_Position;
        bool _2814;
        uint _2815;
        uint _2816;
        float _2817;
        vec3 _2818;
        vec2 _2819;
        vec3 _2820;
        vec3 _2821;
        vec3 _2822;
        vec3 _2826;
        vec3 _2830;
        do
        {
            bool _1438;
            vec2 _2749;
            do
            {
                _1438 = nani_instance_indirection_buffer._member0[_35] < 57344u;
                if (_1438)
                {
                    uint _1456 = (nani_instance_indirection_buffer._member0[_35] % 14336u) + 1u;
                    uint _1466 = (_1456 << 16u) | (_1456 >> 16u);
                    uint _1471 = ((_1466 & 1431655765u) << 1u) | ((_1466 & 2863311530u) >> 1u);
                    uint _1476 = ((_1471 & 858993459u) << 2u) | ((_1471 & 3435973836u) >> 2u);
                    uint _1481 = ((_1476 & 252645135u) << 4u) | ((_1476 & 4042322160u) >> 4u);
                    _2749 = (vec2(float(_1456) * 6.9754467403981834650039672851562e-05, float(((_1481 & 16711935u) << 8u) | ((_1481 & 4278255360u) >> 8u)) * 2.3283064365386962890625e-10) - vec2(0.5)) * 130.0;
                    break;
                }
                uint _1491 = ((nani_instance_indirection_buffer._member0[_35] - 57344u) % 30720u) + 1u;
                uint _1501 = (_1491 << 16u) | (_1491 >> 16u);
                uint _1506 = ((_1501 & 1431655765u) << 1u) | ((_1501 & 2863311530u) >> 1u);
                uint _1511 = ((_1506 & 858993459u) << 2u) | ((_1506 & 3435973836u) >> 2u);
                uint _1516 = ((_1511 & 252645135u) << 4u) | ((_1511 & 4042322160u) >> 4u);
                _2749 = (vec2(float(_1491) * 3.2552085031056776642799377441406e-05, float(((_1516 & 16711935u) << 8u) | ((_1516 & 4278255360u) >> 8u)) * 2.3283064365386962890625e-10) - vec2(0.5)) * 190.0;
                break;
            } while(false);
            vec3 _1528 = vec3(_2749.x, 0.0, _2749.y);
            uint _1532 = nani_instance_indirection_buffer._member0[_35] + (nani_instance_indirection_buffer._member0[_35] << 10u);
            uint _1534 = _1532 ^ (_1532 >> 6u);
            uint _1536 = _1534 + (_1534 << 3u);
            uint _1538 = _1536 ^ (_1536 >> 11u);
            uint _1540 = _1538 + (_1538 << 15u);
            uint _1546 = uint(round(clamp(Baked_BladeSeed, 0.0, 1.0) * 255.0));
            uint _1549 = nani_instance_indirection_buffer._member0[_35] + 19732u;
            uint _1559 = _1549 + (_1549 << 10u);
            uint _1561 = _1559 ^ (_1559 >> 6u);
            uint _1563 = _1561 + (_1561 << 3u);
            uint _1565 = _1563 ^ (_1563 >> 11u);
            float _1325 = ((uintBitsToFloat(((_1565 + (_1565 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 6.283185482025146484375) - 3.93240261077880859375;
            float _1326 = cos(_1325);
            float _1327 = sin(_1325);
            _1637 = exp2(mix(log2(material_data_exemplar_materials_1._member0[_1304].xz_scale_min), log2(material_data_exemplar_materials_1._member0[_1304].xz_scale_max), uintBitsToFloat((_1540 & 8388607u) | 1065353216u) - 1.0));
            vec2 _1331 = Baked_PlantOffsetXZ * _1637;
            float _1658 = _1331.x;
            float _1660 = _1331.y;
            vec2 _1333 = _1528.xz + vec2((_1326 * _1658) - (_1327 * _1660), (_1327 * _1658) + (_1326 * _1660));
            vec2 _2750;
            do
            {
                if (!_1438)
                {
                    _2750 = vec2(0.0, 1.0);
                    break;
                }
                _2750 = textureLod(sampler2D(grass_removal_mask_tex, samplers_lnc_iso), clamp((_1333 * vec2(0.0076923076994717121124267578125)) + vec2(0.5), vec2(0.0), vec2(1.0)), 0.0).xy;
                break;
            } while(false);
            vec2 _1719 = clamp((Baked_PlantOffsetXZ * vec2(0.25)) + vec2(0.5), vec2(0.0), vec2(1.0));
            uvec2 _1715 = uvec2(fract((((vec2(uvec2(uint((clamp(_1719.x, 0.0, 1.0) * 255.0) + 0.5), uint((clamp(_1719.y, 0.0, 1.0) * 255.0) + 0.5))) * vec2(0.0039215688593685626983642578125)) * 2.0) - vec2(1.0)) * 2.0) * 100.0);
            if (fract(52.98291778564453125 * fract((0.067110560834407806396484375 * float(_1715.x)) + (0.005837149918079376220703125 * float(_1715.y)))) < _2750.x)
            {
                _2830 = vec3(0.0, 0.0, 1.0);
                _2826 = vec3(1.0, 0.0, 0.0);
                _2822 = vec3(0.0);
                _2821 = vec3(0.0);
                _2820 = vec3(0.0);
                _2819 = vec2(0.0);
                _2818 = vec3(0.0);
                _2817 = 0.0;
                _2816 = 0u;
                _2815 = 0u;
                _2814 = true;
                break;
            }
            _125.y = _125.y * _2750.y;
            vec2 _1764 = (_1333 * vec2(0.0076923076994717121124267578125)) + vec2(0.5);
            float _1348 = _1637 * 2.378414154052734375;
            uint _1774 = _1540 * 13u;
            uint _1785 = _1774 + (_1774 << 10u);
            uint _1787 = _1785 ^ (_1785 >> 6u);
            uint _1789 = _1787 + (_1787 << 3u);
            uint _1791 = _1789 ^ (_1789 >> 11u);
            float _1799 = uintBitsToFloat(((_1791 + (_1791 << 15u)) & 8388607u) | 1065353216u) - 1.0;
            float _1351 = 1.0 - clamp(textureLod(sampler2D(object_push_grass_object_push, samplers_lnc_iso), _1764, 0.0).z, 0.0, 1.0);
            float _1352 = (mix(material_data_exemplar_materials_1._member0[_1304].height_scale_min, material_data_exemplar_materials_1._member0[_1304].height_scale_max, _1799 * _1799) * _1309) * _1351;
            vec3 _1355 = _125 * vec3(_1348, _1352, _1348);
            float _1805 = _1355.x;
            float _1807 = _1355.z;
            vec3 _1357 = vec3((_1326 * _1805) - (_1327 * _1807), _1355.y, (_1327 * _1805) + (_1326 * _1807)) + _1528;
            vec2 _2751;
            do
            {
                vec4 _1846 = textureLod(sampler2D(object_push_grass_object_push, samplers_lnc_iso), _1764, 0.0);
                float _1822 = clamp(_1846.z, 0.0, 1.0);
                if (_1822 <= 0.0)
                {
                    _2751 = vec2(0.0);
                    break;
                }
                float _1828 = clamp(3.0 * Baked_BladeLocalHeight, 0.0, 1.0);
                _2751 = (_1846.xy * _1822) * (_1828 * _1828);
                break;
            } while(false);
            vec2 _1363 = _1357.xz + ((_2751 * 4.0) * _1351);
            float _1365 = _1363.x;
            vec3 _2736;
            _2736.x = _1365;
            float _1367 = _1363.y;
            _2736.z = _1367;
            float _2753;
            do
            {
                if ((abs(_1365) < 65.0) && (abs(_1367) < 65.0))
                {
                    _2753 = mix(-2.5, 24.0, textureLod(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), (_2736.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0).x);
                    break;
                }
                else
                {
                    vec2 _1886 = (_2736.xz * vec2(0.001000000047497451305389404296875)) + vec2(0.5);
                    _2753 = textureLod(nonuniformEXT(sampler2D(resource_handles[terrain_heightmap.bg_terrain_heightmap.bindless_handle], samplers_lnc_iso)), vec2(_1886.y, 1.0 - _1886.x), 0.0).x;
                    break;
                }
                break; // unreachable workaround
            } while(false);
            vec3 _2990 = vec3(_1365, _1357.y + _2753, _1367);
            vec2 _1915 = (_1333 * 0.100000001490116119384765625) + (vec2(frame_constants.time_since_startup_secs, 0.0) * 1.2000000476837158203125);
            ivec2 _1937 = ivec2(floor(_1915));
            vec2 _1938 = fract(_1915);
            uvec2 _1939 = uvec2(_1937);
            uint _1989 = _1939.y;
            uint _1995 = _1989 + (_1989 << 10u);
            uint _1997 = _1995 ^ (_1995 >> 6u);
            uint _1999 = _1997 + (_1997 << 3u);
            uint _2001 = _1999 ^ (_1999 >> 11u);
            uint _2009 = (((_1939.x * 1664525u) + (_2001 + (_2001 << 15u))) + 1013904223u) * 1664525u;
            uint _2011 = _2009 ^ (_2009 >> 11u);
            uint _2014 = _2011 ^ ((_2011 << 7u) & 2636928640u);
            uint _2017 = _2014 ^ ((_2014 << 15u) & 4022730752u);
            uint _2019 = _2017 ^ (_2017 >> 18u);
            float _2761;
            _2761 = _2759;
            uint _2036;
            uint _2055;
            float _2061;
            uint _2760 = 0u;
            uint _2793 = _2019;
            for (;;)
            {
                if (!(_2760 < 1u))
                {
                    break;
                }
                uint _2047 = _2793 + (_2793 << 10u);
                uint _2049 = _2047 ^ (_2047 >> 6u);
                uint _2051 = _2049 + (_2049 << 3u);
                uint _2053 = _2051 ^ (_2051 >> 11u);
                _2055 = _2053 + (_2053 << 15u);
                _2061 = uintBitsToFloat((_2793 & 8388607u) | 1065353216u) - 1.0;
                _2036 = _2760 + 1u;
                _2793 = _2055;
                _2761 = _2061;
                _2760 = _2036;
                continue;
            }
            uvec2 _1947 = uvec2(_1937 + ivec2(1, 0));
            uint _2065 = _1947.y;
            uint _2071 = _2065 + (_2065 << 10u);
            uint _2073 = _2071 ^ (_2071 >> 6u);
            uint _2075 = _2073 + (_2073 << 3u);
            uint _2077 = _2075 ^ (_2075 >> 11u);
            uint _2085 = (((_1947.x * 1664525u) + (_2077 + (_2077 << 15u))) + 1013904223u) * 1664525u;
            uint _2087 = _2085 ^ (_2085 >> 11u);
            uint _2090 = _2087 ^ ((_2087 << 7u) & 2636928640u);
            uint _2093 = _2090 ^ ((_2090 << 15u) & 4022730752u);
            uint _2095 = _2093 ^ (_2093 >> 18u);
            float _2768;
            _2768 = _2759;
            uint _2112;
            uint _2131;
            float _2137;
            uint _2767 = 0u;
            uint _2792 = _2095;
            for (;;)
            {
                if (!(_2767 < 1u))
                {
                    break;
                }
                uint _2123 = _2792 + (_2792 << 10u);
                uint _2125 = _2123 ^ (_2123 >> 6u);
                uint _2127 = _2125 + (_2125 << 3u);
                uint _2129 = _2127 ^ (_2127 >> 11u);
                _2131 = _2129 + (_2129 << 15u);
                _2137 = uintBitsToFloat((_2792 & 8388607u) | 1065353216u) - 1.0;
                _2112 = _2767 + 1u;
                _2792 = _2131;
                _2768 = _2137;
                _2767 = _2112;
                continue;
            }
            uvec2 _1954 = uvec2(_1937 + ivec2(0, 1));
            uint _2141 = _1954.y;
            uint _2147 = _2141 + (_2141 << 10u);
            uint _2149 = _2147 ^ (_2147 >> 6u);
            uint _2151 = _2149 + (_2149 << 3u);
            uint _2153 = _2151 ^ (_2151 >> 11u);
            uint _2161 = (((_1954.x * 1664525u) + (_2153 + (_2153 << 15u))) + 1013904223u) * 1664525u;
            uint _2163 = _2161 ^ (_2161 >> 11u);
            uint _2166 = _2163 ^ ((_2163 << 7u) & 2636928640u);
            uint _2169 = _2166 ^ ((_2166 << 15u) & 4022730752u);
            uint _2171 = _2169 ^ (_2169 >> 18u);
            float _2776;
            _2776 = _2759;
            uint _2188;
            uint _2207;
            float _2213;
            uint _2775 = 0u;
            uint _2791 = _2171;
            for (;;)
            {
                if (!(_2775 < 1u))
                {
                    break;
                }
                uint _2199 = _2791 + (_2791 << 10u);
                uint _2201 = _2199 ^ (_2199 >> 6u);
                uint _2203 = _2201 + (_2201 << 3u);
                uint _2205 = _2203 ^ (_2203 >> 11u);
                _2207 = _2205 + (_2205 << 15u);
                _2213 = uintBitsToFloat((_2791 & 8388607u) | 1065353216u) - 1.0;
                _2188 = _2775 + 1u;
                _2791 = _2207;
                _2776 = _2213;
                _2775 = _2188;
                continue;
            }
            uvec2 _1962 = uvec2(_1937 + ivec2(1));
            uint _2217 = _1962.y;
            uint _2223 = _2217 + (_2217 << 10u);
            uint _2225 = _2223 ^ (_2223 >> 6u);
            uint _2227 = _2225 + (_2225 << 3u);
            uint _2229 = _2227 ^ (_2227 >> 11u);
            uint _2237 = (((_1962.x * 1664525u) + (_2229 + (_2229 << 15u))) + 1013904223u) * 1664525u;
            uint _2239 = _2237 ^ (_2237 >> 11u);
            uint _2242 = _2239 ^ ((_2239 << 7u) & 2636928640u);
            uint _2245 = _2242 ^ ((_2242 << 15u) & 4022730752u);
            uint _2247 = _2245 ^ (_2245 >> 18u);
            float _2785;
            _2785 = _2759;
            uint _2264;
            uint _2283;
            float _2289;
            uint _2784 = 0u;
            uint _2790 = _2247;
            for (;;)
            {
                if (!(_2784 < 1u))
                {
                    break;
                }
                uint _2275 = _2790 + (_2790 << 10u);
                uint _2277 = _2275 ^ (_2275 >> 6u);
                uint _2279 = _2277 + (_2277 << 3u);
                uint _2281 = _2279 ^ (_2279 >> 11u);
                _2283 = _2281 + (_2281 << 15u);
                _2289 = uintBitsToFloat((_2790 & 8388607u) | 1065353216u) - 1.0;
                _2264 = _2784 + 1u;
                _2790 = _2283;
                _2785 = _2289;
                _2784 = _2264;
                continue;
            }
            vec2 _2295 = (_1938 * _1938) * (vec2(3.0) - (vec2(2.0) * _1938));
            float _1970 = _2295.x;
            float _1971 = 1.0 - _1970;
            float _1973 = _2295.y;
            vec2 _1401 = _2990.xz + ((((((vec2(-1.0, 0.0) * ((((sin((((((1.0 - _1973) * ((_2761 * _1971) + (_2768 * _1970))) + ((_2776 * _1971) * _1973)) + ((_2785 * _1970) * _1973)) * 3.1400001049041748046875) - 1.57000005245208740234375) + 0.300000011920928955078125) * 0.699999988079071044921875) * material_data_exemplar_materials_1._member0[_1304].wind_wave_scale) * _1351)) * (Baked_BladeLocalHeight * Baked_BladeLocalHeight)) * 0.25) * 1.11449992656707763671875) * _1348) * _2750.y);
            vec3 _2743 = _2990;
            _2743.x = _1401.x;
            _2743.z = _1401.y;
            vec3 _1407 = vec3(_1348, _1352 * _2750.y, _1348);
            vec3 _1409 = normalize(Baked_Normal / _1407);
            float _2300 = _1409.x;
            float _2302 = _1409.z;
            vec3 _1415 = Baked_Dpdu * _1407;
            float _2312 = _1415.x;
            float _2314 = _1415.z;
            vec3 _1417 = Baked_Dpdv * _1407;
            float _2324 = _1417.x;
            float _2326 = _1417.z;
            uint _2345 = _1546 + (_1546 << 10u);
            uint _2347 = _2345 ^ (_2345 >> 6u);
            uint _2349 = _2347 + (_2347 << 3u);
            uint _2351 = _2349 ^ (_2349 >> 11u);
            uint _2353 = _2351 + (_2351 << 15u);
            uint _2338 = (_2353 & 65535u) + 307u;
            uint _2361 = _2338 + (_2338 << 10u);
            uint _2363 = _2361 ^ (_2361 >> 6u);
            uint _2365 = _2363 + (_2363 << 3u);
            uint _2367 = _2365 ^ (_2365 >> 11u);
            _2830 = vec3((_1326 * _2324) - (_1327 * _2326), _1417.y, (_1327 * _2324) + (_1326 * _2326));
            _2826 = vec3((_1326 * _2312) - (_1327 * _2314), _1415.y, (_1327 * _2312) + (_1326 * _2314));
            _2822 = _2743;
            _2821 = normalize(vec3((_1326 * _2300) - (_1327 * _2302), _1409.y, (_1327 * _2300) + (_1326 * _2302)));
            _2820 = _1528;
            _2819 = Vertex_UV;
            _2818 = mix(vec3(0.920000016689300537109375, 0.959999978542327880859375, 0.89999997615814208984375), vec3(1.08000004291534423828125, 1.0299999713897705078125, 0.939999997615814208984375), vec3(uintBitsToFloat(((_2367 + (_2367 << 15u)) & 8388607u) | 1065353216u) - 1.0));
            _2817 = Baked_BladeLocalHeight;
            _2816 = _2353;
            _2815 = _1540;
            _2814 = false;
            break;
        } while(false);
        if (_2814)
        {
            gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
            break;
        }
        float _2823;
        do
        {
            if ((abs(_2820.x) < 65.0) && (abs(_2820.z) < 65.0))
            {
                _2823 = mix(-2.5, 24.0, textureLod(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), (_2820.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0).x);
                break;
            }
            else
            {
                vec2 _2423 = (_2820.xz * vec2(0.001000000047497451305389404296875)) + vec2(0.5);
                _2823 = textureLod(nonuniformEXT(sampler2D(resource_handles[terrain_heightmap.bg_terrain_heightmap.bindless_handle], samplers_lnc_iso)), vec2(_2423.y, 1.0 - _2423.x), 0.0).x;
                break;
            }
            break; // unreachable workaround
        } while(false);
        vec3 _2748 = _2820;
        _2748.y = _2820.y + _2823;
        uint _2504 = _2815 * 13u;
        uint _2515 = _2504 + (_2504 << 10u);
        uint _2517 = _2515 ^ (_2515 >> 6u);
        uint _2519 = _2517 + (_2517 << 3u);
        uint _2521 = _2519 ^ (_2519 >> 11u);
        float _2529 = uintBitsToFloat(((_2521 + (_2521 << 15u)) & 8388607u) | 1065353216u) - 1.0;
        float _2560 = clamp(((7.0 + (current_view.mip_bias * 0.5)) - log2(max(9.9999996826552253889678874634872e-21, (max(_1637 * 2.378414154052734375, mix(material_data_exemplar_materials_1._member0[_1304].height_scale_min, material_data_exemplar_materials_1._member0[_1304].height_scale_max, _2529 * _2529) * _1309) * frame_constants.main_view_lod_scale) / max(0.001000000047497451305389404296875, distance(_2748, frame_constants.main_view_eye_position.xyz))))) * 4.0, 0.0, 1.0);
        if (_2560 >= 1.0)
        {
            gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
            break;
        }
        gl_Position = vec4(_2822, 1.0) * current_view.world_to_sample;
        entryPointParam_vs_main_uv = _2819;
        entryPointParam_vs_main_frag_normal_ws = _2821;
        entryPointParam_vs_main_frag_tangent_ws = _2826;
        entryPointParam_vs_main_frag_bitangent_ws = _2830;
        entryPointParam_vs_main_frag_position_ws = _2822.xyz;
        entryPointParam_vs_main_albedo_tint = _2818;
        entryPointParam_vs_main_blade_local_height = _2817;
        entryPointParam_vs_main_lod_transition_t = _2560;
        entryPointParam_vs_main_exemplar_id = _1304;
        entryPointParam_vs_main_part_material_index = material_data_exemplar_materials_1._member0[_1304].first_part_material + uint(Baked_PartIndex);
        entryPointParam_vs_main_blade_seed = _2816;
        entryPointParam_vs_main_clump_center_xz = _2820.xz;
        break;
    } while(false);
}

