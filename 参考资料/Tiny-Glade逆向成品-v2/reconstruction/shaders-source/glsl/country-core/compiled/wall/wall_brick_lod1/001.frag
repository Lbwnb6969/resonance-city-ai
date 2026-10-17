#version 460
#extension GL_ARB_conservative_depth : require
#extension GL_EXT_demote_to_helper_invocation : require
layout(depth_less) out float gl_FragDepth;

struct _MatrixStorage_float3x3_ColMajornatural
{
    vec3 data[3];
};

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

vec4 _2507;

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

layout(set = 0, binding = 1, std430) readonly buffer StructuredBuffer
{
    InstancedWallData_natural _member0[];
} material_data_instanced_wall_data;

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

layout(set = 0, binding = 3) uniform texture3D material_data_brick_sdf;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 0, binding = 4) uniform textureCube material_data_brick_sdf_normal;
layout(set = 2, binding = 6) uniform sampler samplers_llr_iso;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 8, binding = 0) uniform texture2DArray roof_colors_tex;
layout(set = 7, binding = 1) uniform texture2DArray wall_color_data_brick_colors;

layout(location = 2) in vec3 vs_out_vertex_position_ws;
layout(location = 8) flat in float vs_out_stone_foundation_clip_y;
layout(location = 12) flat in int vs_out_flags;
layout(location = 13) flat in uint vs_out_instance_index;
layout(location = 3) in vec3 vs_out_pos_ms;
layout(location = 4) in vec3 vs_out_dir_ms;
layout(location = 5) in float vs_out_squish_factor;
layout(location = 14) flat in _MatrixStorage_float3x3_ColMajornatural vs_out_normal_matrix;
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
    bool _156 = (vs_out_flags & 8) != 0;
    bool _159 = (vs_out_flags & 16) != 0;
    bool _165 = (vs_out_flags & 2048) != 0;
    vec4 _1434 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    vec4 sampled = textureLod(sampler3D(material_data_brick_sdf, samplers_lnc_iso), (vs_out_pos_ms * 0.875) + vec3(0.5), 0.0);
    float _241 = sampled.x;
    float step_dist = _241 * 0.2562499940395355224609375;
    vec3 march_pos = (vs_out_pos_ms + vec3(0.5)) + (vs_out_dir_ms * step_dist);
    vec4 sampled_1 = textureLod(sampler3D(material_data_brick_sdf, samplers_lnc_iso), ((march_pos - vec3(0.5)) * 0.875) + vec3(0.5), 0.0);
    float _262 = sampled_1.x;
    float step_dist_1 = _262 * 0.19099999964237213134765625;
    vec3 march_pos_1 = march_pos + (vs_out_dir_ms * step_dist_1);
    vec4 sampled_2 = textureLod(sampler3D(material_data_brick_sdf, samplers_lnc_iso), ((march_pos_1 - vec3(0.5)) * 0.875) + vec3(0.5), 0.0);
    float _281 = sampled_2.x;
    float step_dist_2 = _281 * 0.16312499344348907470703125;
    vec3 march_pos_2 = (march_pos_1 + (vs_out_dir_ms * step_dist_2)) - vec3(0.5);
    vec3 _292 = abs(march_pos_2);
    bool frag_is_bevel = max(_292.x, max(_292.y, _292.z)) < 0.4930000007152557373046875;
    vec4 sampled_3 = texture(samplerCube(material_data_brick_sdf_normal, samplers_llr_iso), march_pos_2, (-1.0) + current_view.mip_bias);
    vec3 _317 = sampled_3.xyz;
    if (dot(_317, vs_out_dir_ms) > 0.0)
    {
        demote;
    }
    vec3 hit_ws = vs_out_vertex_position_ws + ((normalize(vs_out_vertex_position_ws - (_1434.xyz / vec3(_1434.w))) * ((step_dist + step_dist_1) + step_dist_2)) * vs_out_squish_factor);
    if (!(((false || ((_241 * 0.125) <= 0.014999999664723873138427734375)) || ((_262 * 0.125) <= 0.014999999664723873138427734375)) || ((_281 * 0.125) <= 0.014999999664723873138427734375)))
    {
        demote;
    }
    vec3 _358 = _317 * mat3(vec3(vs_out_normal_matrix.data[0].x, vs_out_normal_matrix.data[1].x, vs_out_normal_matrix.data[2].x), vec3(vs_out_normal_matrix.data[0].y, vs_out_normal_matrix.data[1].y, vs_out_normal_matrix.data[2].y), vec3(vs_out_normal_matrix.data[0].z, vs_out_normal_matrix.data[1].z, vs_out_normal_matrix.data[2].z));
    vec4 _1447 = (vec4(hit_ws, 1.0) * current_view.world_to_view) * current_view.view_to_sample;
    bool _2199;
    if (!_156)
    {
        _2199 = vs_out_global_arch_height > (-2.5);
    }
    else
    {
        _2199 = false;
    }
    bool _2200;
    if (_2199)
    {
        _2200 = vs_out_vertex_position_ws.y < vs_out_global_arch_height;
    }
    else
    {
        _2200 = false;
    }
    if (_2200)
    {
        demote;
    }
    else
    {
        bool _2201;
        if (_156)
        {
            _2201 = vs_out_vertex_position_ws.y > vs_out_global_arch_height;
        }
        else
        {
            _2201 = false;
        }
        if (_2201)
        {
            demote;
        }
    }
    uint color_id = uint(vs_out_color_id);
    vec3 _2247;
    if ((vs_out_flags & 2) != 0)
    {
        _2247 = texture(sampler2DArray(roof_colors_tex, samplers_llr), vec3((vec2(uvec2(vs_out_instance_seed)) * 0.20000000298023223876953125) + (vs_out_vertex_position_ws.xz * 0.20000000298023223876953125), float(color_id))).xyz * 0.699999988079071044921875;
    }
    else
    {
        vec2 _2205;
        if ((vs_out_flags & 32) != 0)
        {
            vec3 _475 = normalize(_358);
            vec2 _2203;
            if (_475.y > 0.89999997615814208984375)
            {
                _2203 = hit_ws.xz * 0.699999988079071044921875;
            }
            else
            {
                vec2 _2204;
                if (abs(_475.x) > 0.89999997615814208984375)
                {
                    _2204 = hit_ws.zy * 0.699999988079071044921875;
                }
                else
                {
                    _2204 = hit_ws.xy * 0.699999988079071044921875;
                }
                _2203 = _2204;
            }
            vec2 _2202;
            if (frag_is_bevel)
            {
                _2202 = vec2(unpackHalf2x16(material_data_instanced_wall_data._member0[vs_out_instance_index].arch_and_wallspace_packed.data[1]).y);
            }
            else
            {
                _2202 = _2203;
            }
            uint _1481 = material_data_instanced_wall_data._member0[vs_out_instance_index].seed + (material_data_instanced_wall_data._member0[vs_out_instance_index].seed << 10u);
            uint _1483 = _1481 ^ (_1481 >> 6u);
            uint _1485 = _1483 + (_1483 << 3u);
            uint _1487 = _1485 ^ (_1485 >> 11u);
            _2205 = (_2202 * 0.300000011920928955078125) + vec2(uintBitsToFloat(((_1487 + (_1487 << 15u)) & 8388607u) | 1065353216u) - 1.0);
        }
        else
        {
            _2205 = vs_out_frag_wall_uv;
        }
        vec2 _2209;
        if (frag_is_bevel)
        {
            _2209 = _2205 + vec2(0.20999999344348907470703125);
        }
        else
        {
            _2209 = _2205;
        }
        bool _2206;
        if (color_id == 1u)
        {
            _2206 = true;
        }
        else
        {
            _2206 = color_id == 0u;
        }
        vec3 _2232;
        if (_2206)
        {
            _2232 = pow(color_library_data.wall_bricks.xyz, vec3(1.2999999523162841796875));
        }
        else
        {
            _2232 = pow(color_library_data.wall_moss.xyz, vec3(1.0)) * 0.800000011920928955078125;
        }
        int _629 = int(color_id);
        bool _2210;
        if (_629 == 0)
        {
            _2210 = true;
        }
        else
        {
            _2210 = _629 == 4;
        }
        bool _2211;
        if (_2210)
        {
            _2211 = true;
        }
        else
        {
            _2211 = _629 == 10;
        }
        bool _2212;
        if (_2211)
        {
            _2212 = true;
        }
        else
        {
            _2212 = _629 == 12;
        }
        vec3 _2218;
        if (_2212)
        {
            _2218 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_2209 + vec2(0.85000002384185791015625), 0.0)).xyz;
        }
        else
        {
            bool _2213;
            if (_629 == 1)
            {
                _2213 = true;
            }
            else
            {
                _2213 = _629 == 5;
            }
            vec3 _2219;
            if (_2213)
            {
                _2219 = pow(texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_2209 + vec2(0.449999988079071044921875), 1.0)).xyz, vec3(1.10000002384185791015625));
            }
            else
            {
                bool _2214;
                if (_629 == 2)
                {
                    _2214 = true;
                }
                else
                {
                    _2214 = _629 == 7;
                }
                vec3 _2220;
                if (_2214)
                {
                    _2220 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_2209, 2.0)).xyz;
                }
                else
                {
                    bool _2215;
                    if (_629 == 3)
                    {
                        _2215 = true;
                    }
                    else
                    {
                        _2215 = _629 == 6;
                    }
                    bool _2216;
                    if (_2215)
                    {
                        _2216 = true;
                    }
                    else
                    {
                        _2216 = _629 == 8;
                    }
                    bool _2217;
                    if (_2216)
                    {
                        _2217 = true;
                    }
                    else
                    {
                        _2217 = _629 == 9;
                    }
                    vec3 _2221;
                    if (_2217)
                    {
                        _2221 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_2209, 3.0)).xyz;
                    }
                    else
                    {
                        vec3 _2222;
                        if (_629 == 11)
                        {
                            _2222 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_2209, 4.0)).xyz;
                        }
                        else
                        {
                            _2222 = vec3(0.0);
                        }
                        _2221 = _2222;
                    }
                    _2220 = _2221;
                }
                _2219 = _2220;
            }
            _2218 = _2219;
        }
        bool _843 = color_id == 7u;
        bool _2223;
        if (_843)
        {
            _2223 = true;
        }
        else
        {
            _2223 = color_id == 2u;
        }
        bool _2224;
        if (_2223)
        {
            _2224 = true;
        }
        else
        {
            _2224 = color_id == 11u;
        }
        vec3 _2246;
        if ((vs_out_flags & 512) != 0)
        {
            uint _866 = vs_out_instance_seed ^ 8902390u;
            uint _1625 = _866 + (_866 << 10u);
            uint _1627 = _1625 ^ (_1625 >> 6u);
            uint _1629 = _1627 + (_1627 << 3u);
            uint _1631 = _1629 ^ (_1629 >> 11u);
            _2246 = mix(_2218, mix(_2232, _2218, bvec3(_2224)), vec3(mix(0.0, 0.5, smoothstep(0.20000000298023223876953125, 0.800000011920928955078125, uintBitsToFloat(((_1631 + (_1631 << 15u)) & 8388607u) | 1065353216u) - 1.0))));
        }
        else
        {
            _2246 = _2218;
        }
        vec3 _2248;
        if (frag_is_bevel)
        {
            bool _2242;
            if (_843)
            {
                _2242 = true;
            }
            else
            {
                _2242 = color_id == 2u;
            }
            uint _893 = vs_out_instance_seed ^ 239085u;
            uint _1647 = _893 + (_893 << 10u);
            uint _1649 = _1647 ^ (_1647 >> 6u);
            uint _1651 = _1649 + (_1649 << 3u);
            uint _1653 = _1651 ^ (_1651 >> 11u);
            _2248 = mix(_2246, color_library_data.wall_1.xyz, vec3(mix(0.0, _2242 ? 0.20000000298023223876953125 : 0.4000000059604644775390625, smoothstep(0.0, 0.800000011920928955078125, uintBitsToFloat(((_1653 + (_1653 << 15u)) & 8388607u) | 1065353216u) - 1.0))));
        }
        else
        {
            _2248 = _2246;
        }
        _2247 = _2248;
    }
    vec3 _972 = normalize(_358);
    vec3 _2313;
    bool _2373;
    if (!((vs_out_flags & 64) != 0))
    {
        uint _2250;
        if ((vs_out_flags & 4096) != 0)
        {
            _2250 = frame_constants.wall_highlight_mode;
        }
        else
        {
            _2250 = 0u;
        }
        vec3 _2316;
        bool _2376;
        if (_2250 == 1u)
        {
            _2376 = true;
            _2316 = mix(_2247, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.5));
        }
        else
        {
            bool _1698 = _2250 == 2u;
            vec3 _2317;
            if (_1698)
            {
                _2317 = mix(_2247, vec3(0.5), vec3(0.100000001490116119384765625));
            }
            else
            {
                _2317 = _2247;
            }
            _2376 = _1698 ? true : false;
            _2316 = _2317;
        }
        bool _2253;
        if (frame_constants.highlight_bricks_to_delete == 1u)
        {
            _2253 = distance(frame_constants.brush_position.xz, vs_out_frag_position_ws_no_brick_depth_xz) < (1.88900005817413330078125 * frame_constants.eraser_size_multiplier);
        }
        else
        {
            _2253 = false;
        }
        vec3 _2314;
        if (_2253)
        {
            _2314 = mix(_2247, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.800000011920928955078125));
        }
        else
        {
            _2314 = _2316;
        }
        _2373 = _2253 ? true : _2376;
        _2313 = _2314;
    }
    else
    {
        _2373 = false;
        _2313 = _2247;
    }
    vec3 _2312;
    if (_165)
    {
        _2312 = mix(_2247, vec3(0.699999988079071044921875, 0.2100000083446502685546875, 0.0), vec3(0.5));
    }
    else
    {
        _2312 = _2313;
    }
    vec3 _2419;
    if (frame_constants.glade_theme_id == 4u)
    {
        vec2 _1114 = vs_out_vertex_position_ws.xz * 0.4000000059604644775390625;
        vec2 _1763 = floor(_1114 + vec2(dot(_1114, vec2(0.3660254180431365966796875))));
        vec2 _1767 = (_1114 - _1763) + vec2(dot(_1763, vec2(0.211324870586395263671875)));
        float _1768 = _1767.x;
        float _1769 = _1767.y;
        vec2 _2519 = mix(vec2(0.0, 1.0), vec2(1.0, 0.0), bvec2(_1768 > _1769));
        vec4 _1775 = _1767.xyxy + vec4(0.211324870586395263671875, 0.211324870586395263671875, -0.57735025882720947265625, -0.57735025882720947265625);
        vec2 _1778 = _1775.xy - _2519;
        vec4 _2184 = _1775;
        _2184.x = _1778.x;
        _2184.y = _1778.y;
        vec2 _1783 = _1763 - vec2(289.0) * trunc(_1763 / vec2(289.0));
        vec3 _1789 = vec3(_1783.y) + vec3(0.0, _2519.y, 1.0);
        vec3 _1862 = ((_1789 * 34.0) + vec3(1.0)) * _1789;
        vec3 _1797 = ((_1862 - vec3(289.0) * trunc(_1862 / vec3(289.0))) + vec3(_1783.x)) + vec3(0.0, _2519.x, 1.0);
        vec3 _1869 = ((_1797 * 34.0) + vec3(1.0)) * _1797;
        vec3 _1813 = max(vec3(0.5) - vec3(dot(_1767, _1767), dot(_2184.xy, _2184.xy), dot(_2184.zw, _2184.zw)), vec3(0.0));
        vec3 _1814 = _1813 * _1813;
        vec3 _1818 = fract((_1869 - vec3(289.0) * trunc(_1869 / vec3(289.0))) * vec3(0.024390242993831634521484375)) * 2.0;
        vec3 _1820 = _1818 - vec3(1.0);
        vec3 _1823 = abs(_1820) - vec3(0.5);
        vec3 _1827 = _1820 - floor(_1818 + vec3(-0.5));
        _2419 = mix(_2312, vec3(0.699999988079071044921875), vec3(smoothstep(0.0, 1.0, smoothstep(-0.100000001490116119384765625, 0.0, vs_out_vertex_position_ws.y) * clamp(_972.y, 0.0, 1.0)) * clamp(clamp((130.0 * dot((_1814 * _1814) * (vec3(1.792842864990234375) - (((_1827 * _1827) + (_1823 * _1823)) * 0.8537347316741943359375)), vec3((_1827.x * _1768) + (_1823.x * _1769), (_1827.yz * _2184.xz) + (_1823.yz * _2184.yw)))) + 0.75, 0.0, 1.0), _159 ? 0.0 : 0.4000000059604644775390625, _159 ? 0.100000001490116119384765625 : 1.0)));
    }
    else
    {
        _2419 = _2312;
    }
    vec3 _1882 = (_972 * 0.5) + vec3(0.5);
    vec3 _1990 = sqrt(clamp(_2419, vec3(0.0), vec3(1.0)));
    uint _2005 = (uint((clamp(_1990.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1990.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1990.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _2505 = uvec2(((uint((clamp(_1882.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1882.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1882.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3422552064u, _2005);
    _2505.y = _2005 | (((7u | (uint(_165 ? true : _2373) << 3u)) | 128u) << 24u);
    entryPointParam_ps_main_gbuffer = _2505;
    gl_FragDepth = min((_1447.xyz / vec3(_1447.w)).z, gl_FragCoord.z);
}

