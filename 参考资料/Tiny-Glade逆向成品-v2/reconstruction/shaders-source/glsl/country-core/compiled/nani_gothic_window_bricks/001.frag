#version 460
#extension GL_EXT_scalar_block_layout : require
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
    int seed;
    int _wall_slot_id;
    uint wallspace_x_range_packed;
    uint flags;
    vec3 bone_0_pos;
    uint bone_0_normal_packed;
    vec3 bone_1_pos;
    uint bone_1_normal_packed;
    vec3 bone_2_pos;
    uint bone_2_normal_packed;
    float stone_foundation_clip_y;
    uvec3 pad0;
};

layout(set = 23, binding = 0, std140) uniform ColorLibraryData_natural
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

layout(set = 0, binding = 0, scalar) readonly buffer StructuredBuffer
{
    InstanceData_natural _member0[];
} material_data_nani_instance_data;

layout(set = 21, binding = 0, std430) readonly buffer wooden_wall_colors_ids
{
    uint _member0[];
} wooden_wall_colors_ids_1;

layout(set = 20, binding = 0, std430) readonly buffer halftimber_colors_ids
{
    uint _member0[];
} halftimber_colors_ids_1;

layout(set = 24, binding = 0) uniform texture2DArray roof_colors_tex;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 6, binding = 1) uniform texture2DArray wall_color_data_brick_colors;
layout(set = 21, binding = 1) uniform texture2DArray wooden_wall_colors_tex;
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
    bool _143 = (vs_out_flags & 8) != 0;
    bool _149 = (vs_out_flags & 16) != 0;
    bool _155 = (vs_out_flags & 2048) != 0;
    bool _163 = (vs_out_flags & 256) != 0;
    bool _1923;
    if (!_143)
    {
        _1923 = vs_out_global_arch_height > (-2.5);
    }
    else
    {
        _1923 = false;
    }
    bool _1924;
    if (_1923)
    {
        _1924 = vs_out_vertex_position_ws.y < vs_out_global_arch_height;
    }
    else
    {
        _1924 = false;
    }
    if (_1924)
    {
        demote;
    }
    else
    {
        bool _1925;
        if (_143)
        {
            _1925 = vs_out_vertex_position_ws.y > vs_out_global_arch_height;
        }
        else
        {
            _1925 = false;
        }
        if (_1925)
        {
            demote;
        }
    }
    uint color_id = uint(vs_out_color_id);
    vec3 _1967;
    if ((vs_out_flags & 2) != 0)
    {
        _1967 = texture(sampler2DArray(roof_colors_tex, samplers_llr), vec3((vec2(uvec2(vs_out_instance_seed)) * 0.20000000298023223876953125) + (vs_out_vertex_position_ws.xz * 0.20000000298023223876953125), float(color_id))).xyz * 0.699999988079071044921875;
    }
    else
    {
        vec2 _1929;
        if (_163)
        {
            _1929 = vs_out_frag_wall_uv + vec2(0.20999999344348907470703125);
        }
        else
        {
            _1929 = vs_out_frag_wall_uv;
        }
        bool _1926;
        if (color_id == 1u)
        {
            _1926 = true;
        }
        else
        {
            _1926 = color_id == 0u;
        }
        vec3 _1952;
        if (_1926)
        {
            _1952 = pow(color_library_data.wall_bricks.xyz, vec3(1.2999999523162841796875));
        }
        else
        {
            _1952 = pow(color_library_data.wall_moss.xyz, vec3(1.0)) * 0.800000011920928955078125;
        }
        int _288 = int(color_id);
        bool _1930;
        if (_288 == 0)
        {
            _1930 = true;
        }
        else
        {
            _1930 = _288 == 4;
        }
        bool _1931;
        if (_1930)
        {
            _1931 = true;
        }
        else
        {
            _1931 = _288 == 10;
        }
        bool _1932;
        if (_1931)
        {
            _1932 = true;
        }
        else
        {
            _1932 = _288 == 12;
        }
        vec3 _1938;
        if (_1932)
        {
            _1938 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_1929 + vec2(0.85000002384185791015625), 0.0)).xyz;
        }
        else
        {
            bool _1933;
            if (_288 == 1)
            {
                _1933 = true;
            }
            else
            {
                _1933 = _288 == 5;
            }
            vec3 _1939;
            if (_1933)
            {
                _1939 = pow(texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_1929 + vec2(0.449999988079071044921875), 1.0)).xyz, vec3(1.10000002384185791015625));
            }
            else
            {
                bool _1934;
                if (_288 == 2)
                {
                    _1934 = true;
                }
                else
                {
                    _1934 = _288 == 7;
                }
                vec3 _1940;
                if (_1934)
                {
                    _1940 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_1929, 2.0)).xyz;
                }
                else
                {
                    bool _1935;
                    if (_288 == 3)
                    {
                        _1935 = true;
                    }
                    else
                    {
                        _1935 = _288 == 6;
                    }
                    bool _1936;
                    if (_1935)
                    {
                        _1936 = true;
                    }
                    else
                    {
                        _1936 = _288 == 8;
                    }
                    bool _1937;
                    if (_1936)
                    {
                        _1937 = true;
                    }
                    else
                    {
                        _1937 = _288 == 9;
                    }
                    vec3 _1941;
                    if (_1937)
                    {
                        _1941 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_1929, 3.0)).xyz;
                    }
                    else
                    {
                        vec3 _1942;
                        if (_288 == 11)
                        {
                            _1942 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_1929, 4.0)).xyz;
                        }
                        else
                        {
                            _1942 = vec3(0.0);
                        }
                        _1941 = _1942;
                    }
                    _1940 = _1941;
                }
                _1939 = _1940;
            }
            _1938 = _1939;
        }
        bool _507 = color_id == 7u;
        bool _1943;
        if (_507)
        {
            _1943 = true;
        }
        else
        {
            _1943 = color_id == 2u;
        }
        bool _1944;
        if (_1943)
        {
            _1944 = true;
        }
        else
        {
            _1944 = color_id == 11u;
        }
        vec3 _1966;
        if ((vs_out_flags & 512) != 0)
        {
            uint _531 = vs_out_instance_seed ^ 8902390u;
            uint _1340 = _531 + (_531 << 10u);
            uint _1342 = _1340 ^ (_1340 >> 6u);
            uint _1344 = _1342 + (_1342 << 3u);
            uint _1346 = _1344 ^ (_1344 >> 11u);
            _1966 = mix(_1938, mix(_1952, _1938, bvec3(_1944)), vec3(mix(0.0, 0.5, smoothstep(0.20000000298023223876953125, 0.800000011920928955078125, uintBitsToFloat(((_1346 + (_1346 << 15u)) & 8388607u) | 1065353216u) - 1.0))));
        }
        else
        {
            _1966 = _1938;
        }
        vec3 _1968;
        if (_163)
        {
            bool _1962;
            if (_507)
            {
                _1962 = true;
            }
            else
            {
                _1962 = color_id == 2u;
            }
            uint _595 = vs_out_instance_seed ^ 239085u;
            uint _1362 = _595 + (_595 << 10u);
            uint _1364 = _1362 ^ (_1362 >> 6u);
            uint _1366 = _1364 + (_1364 << 3u);
            uint _1368 = _1366 ^ (_1366 >> 11u);
            _1968 = mix(_1966, color_library_data.wall_1.xyz, vec3(mix(0.0, _1962 ? 0.20000000298023223876953125 : 0.4000000059604644775390625, smoothstep(0.0, 0.800000011920928955078125, uintBitsToFloat(((_1368 + (_1368 << 15u)) & 8388607u) | 1065353216u) - 1.0))));
        }
        else
        {
            _1968 = _1966;
        }
        _1967 = _1968;
    }
    vec3 _674 = normalize(vs_out_vertex_normal_ws);
    vec3 _2030;
    bool _2100;
    if (!((vs_out_flags & 64) != 0))
    {
        uint _1970;
        if ((vs_out_flags & 4096) != 0)
        {
            _1970 = frame_constants.wall_highlight_mode;
        }
        else
        {
            _1970 = 0u;
        }
        vec3 _2033;
        bool _2103;
        if (_1970 == 1u)
        {
            _2103 = true;
            _2033 = mix(_1967, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.5));
        }
        else
        {
            bool _1413 = _1970 == 2u;
            vec3 _2034;
            if (_1413)
            {
                _2034 = mix(_1967, vec3(0.5), vec3(0.100000001490116119384765625));
            }
            else
            {
                _2034 = _1967;
            }
            _2103 = _1413 ? true : false;
            _2033 = _2034;
        }
        bool _1973;
        if (frame_constants.highlight_bricks_to_delete == 1u)
        {
            _1973 = distance(frame_constants.brush_position.xz, vs_out_frag_position_ws_no_brick_depth_xz) < (1.88900005817413330078125 * frame_constants.eraser_size_multiplier);
        }
        else
        {
            _1973 = false;
        }
        vec3 _2031;
        if (_1973)
        {
            _2031 = mix(_1967, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.800000011920928955078125));
        }
        else
        {
            _2031 = _2033;
        }
        _2100 = _1973 ? true : _2103;
        _2030 = _2031;
    }
    else
    {
        _2100 = false;
        _2030 = _1967;
    }
    vec3 _2029;
    if (_155)
    {
        _2029 = mix(_1967, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.5));
    }
    else
    {
        _2029 = _2030;
    }
    vec3 _2028;
    if (int((vs_out_flags & 1024) != 0) == 1)
    {
        vec3 _2038;
        if ((material_data_nani_instance_data._member0[vs_out_instance_index].flags & 2u) != 0u)
        {
            _2038 = texture(sampler2DArray(wooden_wall_colors_tex, samplers_llr), vec3(vs_out_frag_wall_uv, float(int(wooden_wall_colors_ids_1._member0[uint(material_data_nani_instance_data._member0[vs_out_instance_index]._wall_slot_id)])))).xyz;
        }
        else
        {
            _2038 = texture(sampler2DArray(halftimber_colors_tex, samplers_llr), vec3(vs_out_frag_wall_uv, float(int(halftimber_colors_ids_1._member0[uint(material_data_nani_instance_data._member0[vs_out_instance_index]._wall_slot_id)])))).xyz;
        }
        _2028 = _2038;
    }
    else
    {
        _2028 = _2029;
    }
    vec3 _2153;
    if (frame_constants.glade_theme_id == 4u)
    {
        vec2 _901 = vs_out_vertex_position_ws.xz * 0.4000000059604644775390625;
        vec2 _1497 = floor(_901 + vec2(dot(_901, vec2(0.3660254180431365966796875))));
        vec2 _1501 = (_901 - _1497) + vec2(dot(_1497, vec2(0.211324870586395263671875)));
        float _1502 = _1501.x;
        float _1503 = _1501.y;
        vec2 _2246 = mix(vec2(0.0, 1.0), vec2(1.0, 0.0), bvec2(_1502 > _1503));
        vec4 _1509 = _1501.xyxy + vec4(0.211324870586395263671875, 0.211324870586395263671875, -0.57735025882720947265625, -0.57735025882720947265625);
        vec2 _1512 = _1509.xy - _2246;
        vec4 _1908 = _1509;
        _1908.x = _1512.x;
        _1908.y = _1512.y;
        vec2 _1517 = _1497 - vec2(289.0) * trunc(_1497 / vec2(289.0));
        vec3 _1523 = vec3(_1517.y) + vec3(0.0, _2246.y, 1.0);
        vec3 _1596 = ((_1523 * 34.0) + vec3(1.0)) * _1523;
        vec3 _1531 = ((_1596 - vec3(289.0) * trunc(_1596 / vec3(289.0))) + vec3(_1517.x)) + vec3(0.0, _2246.x, 1.0);
        vec3 _1603 = ((_1531 * 34.0) + vec3(1.0)) * _1531;
        vec3 _1547 = max(vec3(0.5) - vec3(dot(_1501, _1501), dot(_1908.xy, _1908.xy), dot(_1908.zw, _1908.zw)), vec3(0.0));
        vec3 _1548 = _1547 * _1547;
        vec3 _1552 = fract((_1603 - vec3(289.0) * trunc(_1603 / vec3(289.0))) * vec3(0.024390242993831634521484375)) * 2.0;
        vec3 _1554 = _1552 - vec3(1.0);
        vec3 _1557 = abs(_1554) - vec3(0.5);
        vec3 _1561 = _1554 - floor(_1552 + vec3(-0.5));
        _2153 = mix(_2028, vec3(0.699999988079071044921875), vec3(smoothstep(0.0, 1.0, smoothstep(-0.100000001490116119384765625, 0.0, vs_out_vertex_position_ws.y) * clamp(_674.y, 0.0, 1.0)) * clamp(clamp((130.0 * dot((_1548 * _1548) * (vec3(1.792842864990234375) - (((_1561 * _1561) + (_1557 * _1557)) * 0.8537347316741943359375)), vec3((_1561.x * _1502) + (_1557.x * _1503), (_1561.yz * _1908.xz) + (_1557.yz * _1908.yw)))) + 0.75, 0.0, 1.0), _149 ? 0.0 : 0.4000000059604644775390625, _149 ? 0.100000001490116119384765625 : 1.0)));
    }
    else
    {
        _2153 = _2028;
    }
    vec3 _1616 = (_674 * 0.5) + vec3(0.5);
    vec3 _1724 = sqrt(clamp(_2153, vec3(0.0), vec3(1.0)));
    uint _1739 = (uint((clamp(_1724.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1724.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1724.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _2233 = uvec2(((uint((clamp(_1616.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1616.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1616.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3422552064u, _1739);
    _2233.y = _1739 | (((7u | (uint(_155 ? true : _2100) << 3u)) | 128u) << 24u);
    entryPointParam_ps_main_gbuffer = _2233;
}

