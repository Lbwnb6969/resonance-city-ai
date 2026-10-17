#version 460
#extension GL_EXT_demote_to_helper_invocation : require

layout(set = 11, binding = 0, std140) uniform ColorLibraryData_natural
{
    vec4 temp_color_1;
    vec4 temp_color_2;
    vec4 temp_color_3;
    vec4 roof_color_1;
    vec4 roof_color_2;
    vec4 sky_low_day;
    vec4 sky_high_day;
    vec4 sun_tint_day;
    vec4 sky_low_dusk;
    vec4 sky_high_dusk;
    vec4 sun_tint_dusk;
    vec4 indirect_light_tint;
    vec4 fence_color_1;
    vec4 fence_color_2;
    vec4 flower_color_1;
    vec4 flower_color_2;
    vec4 canopy_color_1;
    vec4 canopy_color_2;
    vec4 grass_1;
    vec4 grass_2;
    vec4 path;
    vec4 sky_base;
    vec4 sky_horizon;
    vec4 sky_clouds_1;
    vec4 sky_clouds_2;
    vec4 terrain_1;
    vec4 terrain_2;
    vec4 terrain_flattened;
    vec4 wall_1;
    vec4 wall_2;
    vec4 wall_moss;
    vec4 wall_bricks;
    vec4 ivy_branch;
    vec4 ivy_leaf_1;
    vec4 ivy_leaf_2;
    vec4 terrain_highlight;
    vec4 night_tint;
} color_library_data;

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

layout(set = 8, binding = 0) uniform texture2DArray roof_colors_tex;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 7, binding = 1) uniform texture2DArray wall_color_data_brick_colors;

layout(location = 2) in vec3 vs_out_vertex_position_ws;
layout(location = 8) flat in float vs_out_stone_foundation_clip_y;
layout(location = 12) flat in int vs_out_flags;
layout(location = 1) in vec3 vs_out_vertex_normal_ws;
layout(location = 7) in float vs_out_global_arch_height;
layout(location = 10) flat in int vs_out_color_id;
layout(location = 0) flat in uint vs_out_instance_seed;
layout(location = 9) in vec2 vs_out_frag_wall_uv;
layout(location = 11) flat in vec2 vs_out_frag_position_ws_no_brick_depth_xz;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    if (vs_out_vertex_position_ws.y < vs_out_stone_foundation_clip_y)
    {
        demote;
    }
    bool _138 = (vs_out_flags & 8) != 0;
    bool _141 = (vs_out_flags & 16) != 0;
    bool _147 = (vs_out_flags & 2048) != 0;
    bool _155 = (vs_out_flags & 256) != 0;
    bool _1816;
    if (!_138)
    {
        _1816 = vs_out_global_arch_height > (-2.5);
    }
    else
    {
        _1816 = false;
    }
    bool _1817;
    if (_1816)
    {
        _1817 = vs_out_vertex_position_ws.y < vs_out_global_arch_height;
    }
    else
    {
        _1817 = false;
    }
    if (_1817)
    {
        demote;
    }
    else
    {
        bool _1818;
        if (_138)
        {
            _1818 = vs_out_vertex_position_ws.y > vs_out_global_arch_height;
        }
        else
        {
            _1818 = false;
        }
        if (_1818)
        {
            demote;
        }
    }
    uint color_id = uint(vs_out_color_id);
    vec3 _1860;
    if ((vs_out_flags & 2) != 0)
    {
        _1860 = texture(sampler2DArray(roof_colors_tex, samplers_llr), vec3((vec2(uvec2(vs_out_instance_seed)) * 0.20000000298023223876953125) + (vs_out_vertex_position_ws.xz * 0.20000000298023223876953125), float(color_id))).xyz * 0.699999988079071044921875;
    }
    else
    {
        vec2 _1822;
        if (_155)
        {
            _1822 = vs_out_frag_wall_uv + vec2(0.20999999344348907470703125);
        }
        else
        {
            _1822 = vs_out_frag_wall_uv;
        }
        bool _1819;
        if (color_id == 1u)
        {
            _1819 = true;
        }
        else
        {
            _1819 = color_id == 0u;
        }
        vec3 _1845;
        if (_1819)
        {
            _1845 = pow(color_library_data.wall_bricks.xyz, vec3(1.2999999523162841796875));
        }
        else
        {
            _1845 = pow(color_library_data.wall_moss.xyz, vec3(1.0)) * 0.800000011920928955078125;
        }
        int _280 = int(color_id);
        bool _1823;
        if (_280 == 0)
        {
            _1823 = true;
        }
        else
        {
            _1823 = _280 == 4;
        }
        bool _1824;
        if (_1823)
        {
            _1824 = true;
        }
        else
        {
            _1824 = _280 == 10;
        }
        bool _1825;
        if (_1824)
        {
            _1825 = true;
        }
        else
        {
            _1825 = _280 == 12;
        }
        vec3 _1831;
        if (_1825)
        {
            _1831 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_1822 + vec2(0.85000002384185791015625), 0.0)).xyz;
        }
        else
        {
            bool _1826;
            if (_280 == 1)
            {
                _1826 = true;
            }
            else
            {
                _1826 = _280 == 5;
            }
            vec3 _1832;
            if (_1826)
            {
                _1832 = pow(texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_1822 + vec2(0.449999988079071044921875), 1.0)).xyz, vec3(1.10000002384185791015625));
            }
            else
            {
                bool _1827;
                if (_280 == 2)
                {
                    _1827 = true;
                }
                else
                {
                    _1827 = _280 == 7;
                }
                vec3 _1833;
                if (_1827)
                {
                    _1833 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_1822, 2.0)).xyz;
                }
                else
                {
                    bool _1828;
                    if (_280 == 3)
                    {
                        _1828 = true;
                    }
                    else
                    {
                        _1828 = _280 == 6;
                    }
                    bool _1829;
                    if (_1828)
                    {
                        _1829 = true;
                    }
                    else
                    {
                        _1829 = _280 == 8;
                    }
                    bool _1830;
                    if (_1829)
                    {
                        _1830 = true;
                    }
                    else
                    {
                        _1830 = _280 == 9;
                    }
                    vec3 _1834;
                    if (_1830)
                    {
                        _1834 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_1822, 3.0)).xyz;
                    }
                    else
                    {
                        vec3 _1835;
                        if (_280 == 11)
                        {
                            _1835 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_1822, 4.0)).xyz;
                        }
                        else
                        {
                            _1835 = vec3(0.0);
                        }
                        _1834 = _1835;
                    }
                    _1833 = _1834;
                }
                _1832 = _1833;
            }
            _1831 = _1832;
        }
        bool _499 = color_id == 7u;
        bool _1836;
        if (_499)
        {
            _1836 = true;
        }
        else
        {
            _1836 = color_id == 2u;
        }
        bool _1837;
        if (_1836)
        {
            _1837 = true;
        }
        else
        {
            _1837 = color_id == 11u;
        }
        vec3 _1859;
        if ((vs_out_flags & 512) != 0)
        {
            uint _523 = vs_out_instance_seed ^ 8902390u;
            uint _1252 = _523 + (_523 << 10u);
            uint _1254 = _1252 ^ (_1252 >> 6u);
            uint _1256 = _1254 + (_1254 << 3u);
            uint _1258 = _1256 ^ (_1256 >> 11u);
            _1859 = mix(_1831, mix(_1845, _1831, bvec3(_1837)), vec3(mix(0.0, 0.5, smoothstep(0.20000000298023223876953125, 0.800000011920928955078125, uintBitsToFloat(((_1258 + (_1258 << 15u)) & 8388607u) | 1065353216u) - 1.0))));
        }
        else
        {
            _1859 = _1831;
        }
        vec3 _1861;
        if (_155)
        {
            bool _1855;
            if (_499)
            {
                _1855 = true;
            }
            else
            {
                _1855 = color_id == 2u;
            }
            uint _587 = vs_out_instance_seed ^ 239085u;
            uint _1274 = _587 + (_587 << 10u);
            uint _1276 = _1274 ^ (_1274 >> 6u);
            uint _1278 = _1276 + (_1276 << 3u);
            uint _1280 = _1278 ^ (_1278 >> 11u);
            _1861 = mix(_1859, color_library_data.wall_1.xyz, vec3(mix(0.0, _1855 ? 0.20000000298023223876953125 : 0.4000000059604644775390625, smoothstep(0.0, 0.800000011920928955078125, uintBitsToFloat(((_1280 + (_1280 << 15u)) & 8388607u) | 1065353216u) - 1.0))));
        }
        else
        {
            _1861 = _1859;
        }
        _1860 = _1861;
    }
    vec3 _666 = normalize(vs_out_vertex_normal_ws);
    vec3 _1920;
    bool _1980;
    if (!((vs_out_flags & 64) != 0))
    {
        uint _1863;
        if ((vs_out_flags & 4096) != 0)
        {
            _1863 = frame_constants.wall_highlight_mode;
        }
        else
        {
            _1863 = 0u;
        }
        vec3 _1923;
        bool _1983;
        if (_1863 == 1u)
        {
            _1983 = true;
            _1923 = mix(_1860, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.5));
        }
        else
        {
            bool _1325 = _1863 == 2u;
            vec3 _1924;
            if (_1325)
            {
                _1924 = mix(_1860, vec3(0.5), vec3(0.100000001490116119384765625));
            }
            else
            {
                _1924 = _1860;
            }
            _1983 = _1325 ? true : false;
            _1923 = _1924;
        }
        bool _1866;
        if (frame_constants.highlight_bricks_to_delete == 1u)
        {
            _1866 = distance(frame_constants.brush_position.xz, vs_out_frag_position_ws_no_brick_depth_xz) < (1.88900005817413330078125 * frame_constants.eraser_size_multiplier);
        }
        else
        {
            _1866 = false;
        }
        vec3 _1921;
        if (_1866)
        {
            _1921 = mix(_1860, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.800000011920928955078125));
        }
        else
        {
            _1921 = _1923;
        }
        _1980 = _1866 ? true : _1983;
        _1920 = _1921;
    }
    else
    {
        _1980 = false;
        _1920 = _1860;
    }
    vec3 _1919;
    if (_147)
    {
        _1919 = mix(_1860, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.5));
    }
    else
    {
        _1919 = _1920;
    }
    vec3 _2026;
    if (frame_constants.glade_theme_id == 4u)
    {
        vec2 _813 = vs_out_vertex_position_ws.xz * 0.4000000059604644775390625;
        vec2 _1390 = floor(_813 + vec2(dot(_813, vec2(0.3660254180431365966796875))));
        vec2 _1394 = (_813 - _1390) + vec2(dot(_1390, vec2(0.211324870586395263671875)));
        float _1395 = _1394.x;
        float _1396 = _1394.y;
        vec2 _2115 = mix(vec2(0.0, 1.0), vec2(1.0, 0.0), bvec2(_1395 > _1396));
        vec4 _1402 = _1394.xyxy + vec4(0.211324870586395263671875, 0.211324870586395263671875, -0.57735025882720947265625, -0.57735025882720947265625);
        vec2 _1405 = _1402.xy - _2115;
        vec4 _1801 = _1402;
        _1801.x = _1405.x;
        _1801.y = _1405.y;
        vec2 _1410 = _1390 - vec2(289.0) * trunc(_1390 / vec2(289.0));
        vec3 _1416 = vec3(_1410.y) + vec3(0.0, _2115.y, 1.0);
        vec3 _1489 = ((_1416 * 34.0) + vec3(1.0)) * _1416;
        vec3 _1424 = ((_1489 - vec3(289.0) * trunc(_1489 / vec3(289.0))) + vec3(_1410.x)) + vec3(0.0, _2115.x, 1.0);
        vec3 _1496 = ((_1424 * 34.0) + vec3(1.0)) * _1424;
        vec3 _1440 = max(vec3(0.5) - vec3(dot(_1394, _1394), dot(_1801.xy, _1801.xy), dot(_1801.zw, _1801.zw)), vec3(0.0));
        vec3 _1441 = _1440 * _1440;
        vec3 _1445 = fract((_1496 - vec3(289.0) * trunc(_1496 / vec3(289.0))) * vec3(0.024390242993831634521484375)) * 2.0;
        vec3 _1447 = _1445 - vec3(1.0);
        vec3 _1450 = abs(_1447) - vec3(0.5);
        vec3 _1454 = _1447 - floor(_1445 + vec3(-0.5));
        _2026 = mix(_1919, vec3(0.699999988079071044921875), vec3(smoothstep(0.0, 1.0, smoothstep(-0.100000001490116119384765625, 0.0, vs_out_vertex_position_ws.y) * clamp(_666.y, 0.0, 1.0)) * clamp(clamp((130.0 * dot((_1441 * _1441) * (vec3(1.792842864990234375) - (((_1454 * _1454) + (_1450 * _1450)) * 0.8537347316741943359375)), vec3((_1454.x * _1395) + (_1450.x * _1396), (_1454.yz * _1801.xz) + (_1450.yz * _1801.yw)))) + 0.75, 0.0, 1.0), _141 ? 0.0 : 0.4000000059604644775390625, _141 ? 0.100000001490116119384765625 : 1.0)));
    }
    else
    {
        _2026 = _1919;
    }
    vec3 _1509 = (_666 * 0.5) + vec3(0.5);
    vec3 _1617 = sqrt(clamp(_2026, vec3(0.0), vec3(1.0)));
    uint _1632 = (uint((clamp(_1617.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1617.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1617.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _2102 = uvec2(((uint((clamp(_1509.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1509.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1509.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3422552064u, _1632);
    _2102.y = _1632 | (((7u | (uint(_147 ? true : _1980) << 3u)) | 128u) << 24u);
    entryPointParam_ps_main_gbuffer = _2102;
}

