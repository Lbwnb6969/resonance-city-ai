#version 460
#extension GL_EXT_demote_to_helper_invocation : require

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct InstanceData_natural
{
    Affine3Packed_natural xform;
    uint wallspace_x_range_packed;
    uint seed;
    uint wall_slot_is_wooden_packed;
    float mesh_size_x;
};

layout(set = 22, binding = 0, std140) uniform ColorLibraryData_natural
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

layout(set = 0, binding = 0, std430) readonly buffer StructuredBuffer
{
    InstanceData_natural _member0[];
} material_data_nani_instance_data;

layout(set = 20, binding = 0, std430) readonly buffer halftimber_colors_ids
{
    uint _member0[];
} halftimber_colors_ids_1;

layout(set = 23, binding = 0) uniform texture2DArray roof_colors_tex;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 19, binding = 1) uniform texture2DArray wall_color_data_brick_colors;
layout(set = 20, binding = 1) uniform texture2DArray halftimber_colors_tex;

layout(location = 2) in vec3 vs_out_vertex_position_ws;
layout(location = 8) flat in float vs_out_stone_foundation_clip_y;
layout(location = 12) flat in int vs_out_flags;
layout(location = 1) in vec3 vs_out_vertex_normal_ws;
layout(location = 7) in float vs_out_global_arch_height;
layout(location = 10) flat in int vs_out_color_id;
layout(location = 0) flat in uint vs_out_instance_seed;
layout(location = 9) in vec2 vs_out_frag_wall_uv;
layout(location = 11) flat in vec2 vs_out_frag_position_ws_no_brick_depth_xz;
layout(location = 13) flat in uint vs_out_instance_index;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    if (vs_out_vertex_position_ws.y < vs_out_stone_foundation_clip_y)
    {
        demote;
    }
    bool _140 = (vs_out_flags & 8) != 0;
    bool _146 = (vs_out_flags & 16) != 0;
    bool _152 = (vs_out_flags & 2048) != 0;
    bool _160 = (vs_out_flags & 256) != 0;
    bool _1872;
    if (!_140)
    {
        _1872 = vs_out_global_arch_height > (-2.5);
    }
    else
    {
        _1872 = false;
    }
    bool _1873;
    if (_1872)
    {
        _1873 = vs_out_vertex_position_ws.y < vs_out_global_arch_height;
    }
    else
    {
        _1873 = false;
    }
    if (_1873)
    {
        demote;
    }
    else
    {
        bool _1874;
        if (_140)
        {
            _1874 = vs_out_vertex_position_ws.y > vs_out_global_arch_height;
        }
        else
        {
            _1874 = false;
        }
        if (_1874)
        {
            demote;
        }
    }
    uint color_id = uint(vs_out_color_id);
    vec3 _1916;
    if ((vs_out_flags & 2) != 0)
    {
        _1916 = texture(sampler2DArray(roof_colors_tex, samplers_llr), vec3((vec2(uvec2(vs_out_instance_seed)) * 0.20000000298023223876953125) + (vs_out_vertex_position_ws.xz * 0.20000000298023223876953125), float(color_id))).xyz * 0.699999988079071044921875;
    }
    else
    {
        vec2 _1878;
        if (_160)
        {
            _1878 = vs_out_frag_wall_uv + vec2(0.20999999344348907470703125);
        }
        else
        {
            _1878 = vs_out_frag_wall_uv;
        }
        bool _1875;
        if (color_id == 1u)
        {
            _1875 = true;
        }
        else
        {
            _1875 = color_id == 0u;
        }
        vec3 _1901;
        if (_1875)
        {
            _1901 = pow(color_library_data.wall_bricks.xyz, vec3(1.2999999523162841796875));
        }
        else
        {
            _1901 = pow(color_library_data.wall_moss.xyz, vec3(1.0)) * 0.800000011920928955078125;
        }
        int _285 = int(color_id);
        bool _1879;
        if (_285 == 0)
        {
            _1879 = true;
        }
        else
        {
            _1879 = _285 == 4;
        }
        bool _1880;
        if (_1879)
        {
            _1880 = true;
        }
        else
        {
            _1880 = _285 == 10;
        }
        bool _1881;
        if (_1880)
        {
            _1881 = true;
        }
        else
        {
            _1881 = _285 == 12;
        }
        vec3 _1887;
        if (_1881)
        {
            _1887 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_1878 + vec2(0.85000002384185791015625), 0.0)).xyz;
        }
        else
        {
            bool _1882;
            if (_285 == 1)
            {
                _1882 = true;
            }
            else
            {
                _1882 = _285 == 5;
            }
            vec3 _1888;
            if (_1882)
            {
                _1888 = pow(texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_1878 + vec2(0.449999988079071044921875), 1.0)).xyz, vec3(1.10000002384185791015625));
            }
            else
            {
                bool _1883;
                if (_285 == 2)
                {
                    _1883 = true;
                }
                else
                {
                    _1883 = _285 == 7;
                }
                vec3 _1889;
                if (_1883)
                {
                    _1889 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_1878, 2.0)).xyz;
                }
                else
                {
                    bool _1884;
                    if (_285 == 3)
                    {
                        _1884 = true;
                    }
                    else
                    {
                        _1884 = _285 == 6;
                    }
                    bool _1885;
                    if (_1884)
                    {
                        _1885 = true;
                    }
                    else
                    {
                        _1885 = _285 == 8;
                    }
                    bool _1886;
                    if (_1885)
                    {
                        _1886 = true;
                    }
                    else
                    {
                        _1886 = _285 == 9;
                    }
                    vec3 _1890;
                    if (_1886)
                    {
                        _1890 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_1878, 3.0)).xyz;
                    }
                    else
                    {
                        vec3 _1891;
                        if (_285 == 11)
                        {
                            _1891 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_1878, 4.0)).xyz;
                        }
                        else
                        {
                            _1891 = vec3(0.0);
                        }
                        _1890 = _1891;
                    }
                    _1889 = _1890;
                }
                _1888 = _1889;
            }
            _1887 = _1888;
        }
        bool _504 = color_id == 7u;
        bool _1892;
        if (_504)
        {
            _1892 = true;
        }
        else
        {
            _1892 = color_id == 2u;
        }
        bool _1893;
        if (_1892)
        {
            _1893 = true;
        }
        else
        {
            _1893 = color_id == 11u;
        }
        vec3 _1915;
        if ((vs_out_flags & 512) != 0)
        {
            uint _528 = vs_out_instance_seed ^ 8902390u;
            uint _1302 = _528 + (_528 << 10u);
            uint _1304 = _1302 ^ (_1302 >> 6u);
            uint _1306 = _1304 + (_1304 << 3u);
            uint _1308 = _1306 ^ (_1306 >> 11u);
            _1915 = mix(_1887, mix(_1901, _1887, bvec3(_1893)), vec3(mix(0.0, 0.5, smoothstep(0.20000000298023223876953125, 0.800000011920928955078125, uintBitsToFloat(((_1308 + (_1308 << 15u)) & 8388607u) | 1065353216u) - 1.0))));
        }
        else
        {
            _1915 = _1887;
        }
        vec3 _1917;
        if (_160)
        {
            bool _1911;
            if (_504)
            {
                _1911 = true;
            }
            else
            {
                _1911 = color_id == 2u;
            }
            uint _592 = vs_out_instance_seed ^ 239085u;
            uint _1324 = _592 + (_592 << 10u);
            uint _1326 = _1324 ^ (_1324 >> 6u);
            uint _1328 = _1326 + (_1326 << 3u);
            uint _1330 = _1328 ^ (_1328 >> 11u);
            _1917 = mix(_1915, color_library_data.wall_1.xyz, vec3(mix(0.0, _1911 ? 0.20000000298023223876953125 : 0.4000000059604644775390625, smoothstep(0.0, 0.800000011920928955078125, uintBitsToFloat(((_1330 + (_1330 << 15u)) & 8388607u) | 1065353216u) - 1.0))));
        }
        else
        {
            _1917 = _1915;
        }
        _1916 = _1917;
    }
    vec3 _671 = normalize(vs_out_vertex_normal_ws);
    vec3 _1978;
    bool _2043;
    if (!((vs_out_flags & 64) != 0))
    {
        uint _1919;
        if ((vs_out_flags & 4096) != 0)
        {
            _1919 = frame_constants.wall_highlight_mode;
        }
        else
        {
            _1919 = 0u;
        }
        vec3 _1981;
        bool _2046;
        if (_1919 == 1u)
        {
            _2046 = true;
            _1981 = mix(_1916, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.5));
        }
        else
        {
            bool _1375 = _1919 == 2u;
            vec3 _1982;
            if (_1375)
            {
                _1982 = mix(_1916, vec3(0.5), vec3(0.100000001490116119384765625));
            }
            else
            {
                _1982 = _1916;
            }
            _2046 = _1375 ? true : false;
            _1981 = _1982;
        }
        bool _1922;
        if (frame_constants.highlight_bricks_to_delete == 1u)
        {
            _1922 = distance(frame_constants.brush_position.xz, vs_out_frag_position_ws_no_brick_depth_xz) < (1.88900005817413330078125 * frame_constants.eraser_size_multiplier);
        }
        else
        {
            _1922 = false;
        }
        vec3 _1979;
        if (_1922)
        {
            _1979 = mix(_1916, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.800000011920928955078125));
        }
        else
        {
            _1979 = _1981;
        }
        _2043 = _1922 ? true : _2046;
        _1978 = _1979;
    }
    else
    {
        _2043 = false;
        _1978 = _1916;
    }
    vec3 _1977;
    if (_152)
    {
        _1977 = mix(_1916, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.5));
    }
    else
    {
        _1977 = _1978;
    }
    vec3 _1976;
    if (int((vs_out_flags & 1024) != 0) == 1)
    {
        _1976 = texture(sampler2DArray(halftimber_colors_tex, samplers_llr), vec3(vs_out_frag_wall_uv, float(int(halftimber_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_is_wooden_packed & 2147483647u])))).xyz;
    }
    else
    {
        _1976 = _1977;
    }
    vec3 _2092;
    if (frame_constants.glade_theme_id == 4u)
    {
        vec2 _863 = vs_out_vertex_position_ws.xz * 0.4000000059604644775390625;
        vec2 _1446 = floor(_863 + vec2(dot(_863, vec2(0.3660254180431365966796875))));
        vec2 _1450 = (_863 - _1446) + vec2(dot(_1446, vec2(0.211324870586395263671875)));
        float _1451 = _1450.x;
        float _1452 = _1450.y;
        vec2 _2183 = mix(vec2(0.0, 1.0), vec2(1.0, 0.0), bvec2(_1451 > _1452));
        vec4 _1458 = _1450.xyxy + vec4(0.211324870586395263671875, 0.211324870586395263671875, -0.57735025882720947265625, -0.57735025882720947265625);
        vec2 _1461 = _1458.xy - _2183;
        vec4 _1857 = _1458;
        _1857.x = _1461.x;
        _1857.y = _1461.y;
        vec2 _1466 = _1446 - vec2(289.0) * trunc(_1446 / vec2(289.0));
        vec3 _1472 = vec3(_1466.y) + vec3(0.0, _2183.y, 1.0);
        vec3 _1545 = ((_1472 * 34.0) + vec3(1.0)) * _1472;
        vec3 _1480 = ((_1545 - vec3(289.0) * trunc(_1545 / vec3(289.0))) + vec3(_1466.x)) + vec3(0.0, _2183.x, 1.0);
        vec3 _1552 = ((_1480 * 34.0) + vec3(1.0)) * _1480;
        vec3 _1496 = max(vec3(0.5) - vec3(dot(_1450, _1450), dot(_1857.xy, _1857.xy), dot(_1857.zw, _1857.zw)), vec3(0.0));
        vec3 _1497 = _1496 * _1496;
        vec3 _1501 = fract((_1552 - vec3(289.0) * trunc(_1552 / vec3(289.0))) * vec3(0.024390242993831634521484375)) * 2.0;
        vec3 _1503 = _1501 - vec3(1.0);
        vec3 _1506 = abs(_1503) - vec3(0.5);
        vec3 _1510 = _1503 - floor(_1501 + vec3(-0.5));
        _2092 = mix(_1976, vec3(0.699999988079071044921875), vec3(smoothstep(0.0, 1.0, smoothstep(-0.100000001490116119384765625, 0.0, vs_out_vertex_position_ws.y) * clamp(_671.y, 0.0, 1.0)) * clamp(clamp((130.0 * dot((_1497 * _1497) * (vec3(1.792842864990234375) - (((_1510 * _1510) + (_1506 * _1506)) * 0.8537347316741943359375)), vec3((_1510.x * _1451) + (_1506.x * _1452), (_1510.yz * _1857.xz) + (_1506.yz * _1857.yw)))) + 0.75, 0.0, 1.0), _146 ? 0.0 : 0.4000000059604644775390625, _146 ? 0.100000001490116119384765625 : 1.0)));
    }
    else
    {
        _2092 = _1976;
    }
    vec3 _1565 = (_671 * 0.5) + vec3(0.5);
    vec3 _1673 = sqrt(clamp(_2092, vec3(0.0), vec3(1.0)));
    uint _1688 = (uint((clamp(_1673.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1673.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1673.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _2170 = uvec2(((uint((clamp(_1565.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1565.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1565.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3422552064u, _1688);
    _2170.y = _1688 | (((7u | (uint(_152 ? true : _2043) << 3u)) | 128u) << 24u);
    entryPointParam_ps_main_gbuffer = _2170;
}

