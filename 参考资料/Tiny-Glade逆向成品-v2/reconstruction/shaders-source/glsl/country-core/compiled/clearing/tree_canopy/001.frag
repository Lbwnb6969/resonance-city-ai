#version 460
#extension GL_ARB_conservative_depth : require
#if defined(GL_EXT_control_flow_attributes)
#extension GL_EXT_control_flow_attributes : require
#define SPIRV_CROSS_FLATTEN [[flatten]]
#define SPIRV_CROSS_BRANCH [[dont_flatten]]
#define SPIRV_CROSS_UNROLL [[unroll]]
#define SPIRV_CROSS_LOOP [[dont_unroll]]
#else
#define SPIRV_CROSS_FLATTEN
#define SPIRV_CROSS_BRANCH
#define SPIRV_CROSS_UNROLL
#define SPIRV_CROSS_LOOP
#endif
#extension GL_EXT_demote_to_helper_invocation : require
layout(depth_less) out float gl_FragDepth;

vec4 _1648;

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

layout(set = 6, binding = 0, std140) uniform ColorLibraryData_natural
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

layout(set = 0, binding = 3) uniform texture2D material_data_canopy_flowers_depth;
layout(set = 2, binding = 3) uniform sampler samplers_llc;
layout(set = 0, binding = 2) uniform texture2D material_data_canopy_flowers_color;
layout(set = 0, binding = 1) uniform texture2D material_data_canopy_alpha_texture;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 7, binding = 0) uniform texture2D blue_noise_textures_uniform01;
layout(set = 0, binding = 4) uniform texture2D material_data_canopy_color;

layout(location = 8) flat in int vs_out_prim_should_have_flower;
layout(location = 1) in vec3 vs_out_frag_uv;
layout(location = 6) flat in float vs_out_see_thru_anim_t;
layout(location = 7) in vec3 vs_out_prim_center;
layout(location = 5) flat in int vs_out_prim_seed;
layout(location = 10) flat in float vs_out_flowery_noise;
layout(location = 12) in float vs_out_scramble_amount;
layout(location = 9) flat in uint vs_out_is_handplaced_flag;
layout(location = 4) flat in int vs_out_frag_tree_id;
layout(location = 3) in vec3 vs_out_frag_pos_ws;
layout(location = 2) in vec3 vs_out_frag_normal;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    bool _142 = vs_out_prim_should_have_flower != 0;
    float _1490;
    float _1501;
    vec3 _1554;
    SPIRV_CROSS_BRANCH
    if (_142)
    {
        vec4 sampled = texture(sampler2D(material_data_canopy_flowers_depth, samplers_llc), vs_out_frag_uv.xy, current_view.mip_bias);
        float _160 = sampled.x;
        _1554 = texture(sampler2D(material_data_canopy_flowers_color, samplers_llc), vs_out_frag_uv.xy, current_view.mip_bias).xyz * mix(0.5, 2.0, _160);
        _1501 = _160;
        _1490 = float(_160 > 0.00999999977648258209228515625);
    }
    else
    {
        _1554 = vec3(0.0);
        _1501 = 0.0;
        _1490 = 0.0;
    }
    vec4 sampled_1 = texture(sampler2D(material_data_canopy_alpha_texture, samplers_llc), vs_out_frag_uv.xy, current_view.mip_bias);
    float _1483;
    do
    {
        if ((frame_constants.render_overrides & 2u) != 0u)
        {
            _1483 = vs_out_see_thru_anim_t;
            break;
        }
        else
        {
            _1483 = 0.0;
            break;
        }
        break; // unreachable workaround
    } while(false);
    vec4 _965 = vec4(vs_out_prim_center, 1.0) * current_view.world_to_view;
    vec2 cone_cull_dist_range = vec2(6.659999847412109375, frame_constants.tree_canopy_max_cone_cull_dist_range) * current_view.view_to_clip[1].y;
    bool _1484;
    if (_1483 > 0.0)
    {
        _1484 = frame_constants.is_firstperson_mode == 0u;
    }
    else
    {
        _1484 = false;
    }
    if (_1484)
    {
        float _264 = _965.z;
        float _265 = -_264;
        float _266 = cone_cull_dist_range.y;
        if (_265 < _266)
        {
            float cone_angle_radians = frame_constants.tree_canopy_cone_angle_mult * smoothstep(_266, cone_cull_dist_range.x, _265);
            if ((-normalize(vec3(_965.xy + (vs_out_frag_uv.xy - vec2(0.5)), min(_264, -10.0)) * vec3(0.75, 1.0, 1.0)).z) > cos((cone_angle_radians * _1483) + ((min(1.0, cone_angle_radians * 16.0) * 0.07500000298023223876953125) * (textureLod(sampler2D(blue_noise_textures_uniform01, samplers_llr), ((vs_out_frag_uv.xy * 2.0) * 4.0) * vec2(0.00390625), 0.0).x - 0.5))))
            {
                demote;
            }
        }
    }
    float frag_texture_depth = sampled_1.y;
    float _1506;
    if (_142)
    {
        _1506 = frag_texture_depth - 0.300000011920928955078125;
    }
    else
    {
        _1506 = frag_texture_depth;
    }
    bool _1493;
    if (_142)
    {
        _1493 = _1490 > 0.0;
    }
    else
    {
        _1493 = false;
    }
    bool _1494;
    if (_1493)
    {
        _1494 = vs_out_flowery_noise < 0.60000002384185791015625;
    }
    else
    {
        _1494 = false;
    }
    float _1507;
    bool _1515;
    if (_1494)
    {
        uint _392 = uint(vs_out_prim_seed);
        uint _974 = _392 + (_392 << 10u);
        uint _976 = _974 ^ (_974 >> 6u);
        uint _978 = _976 + (_976 << 3u);
        uint _980 = _978 ^ (_978 >> 11u);
        float _433 = mix(0.0, 1.5, (uintBitsToFloat(((_980 + (_980 << 15u)) & 8388607u) | 1065353216u) - 1.0) * _1501);
        _1515 = _433 > _1506;
        _1507 = max(_1506, _433);
    }
    else
    {
        _1515 = false;
        _1507 = _1506;
    }
    if ((_1515 ? 1.0 : sampled_1.x) < 0.20000000298023223876953125)
    {
        demote;
    }
    bool _1517;
    if (frame_constants.glade_theme_id == 2u)
    {
        _1517 = true;
    }
    else
    {
        _1517 = frame_constants.glade_theme_id == 4u;
    }
    int _1520;
    if (_1517)
    {
        _1520 = 1;
    }
    else
    {
        int _1521;
        if (frame_constants.glade_theme_id == 1u)
        {
            bool _1518;
            if (!(vs_out_is_handplaced_flag == 1u))
            {
                bool _1519;
                if (vs_out_is_handplaced_flag == 2u)
                {
                    _1519 = true;
                }
                else
                {
                    _1519 = vs_out_flowery_noise > 0.4000000059604644775390625;
                }
                _1518 = _1519;
            }
            else
            {
                _1518 = false;
            }
            _1521 = _1518 ? 2 : 0;
        }
        else
        {
            _1521 = 0;
        }
        _1520 = _1521;
    }
    vec3 _1566;
    if (_1520 == 1)
    {
        uint _600 = uint(vs_out_frag_tree_id ^ 1128782);
        uint _1050 = _600 + (_600 << 10u);
        uint _1052 = _1050 ^ (_1050 >> 6u);
        uint _1054 = _1052 + (_1052 << 3u);
        uint _1056 = _1054 ^ (_1054 >> 11u);
        uint _605 = uint(vs_out_frag_tree_id ^ 872);
        uint _1072 = _605 + (_605 << 10u);
        uint _1074 = _1072 ^ (_1072 >> 6u);
        uint _1076 = _1074 + (_1074 << 3u);
        uint _1078 = _1076 ^ (_1076 >> 11u);
        vec2 _617 = vs_out_frag_pos_ws.yz + vs_out_frag_pos_ws.yx;
        uint _632 = uint(vs_out_frag_tree_id ^ 11282);
        uint _1094 = _632 + (_632 << 10u);
        uint _1096 = _1094 ^ (_1094 >> 6u);
        uint _1098 = _1096 + (_1096 << 3u);
        uint _1100 = _1098 ^ (_1098 >> 11u);
        uint _637 = uint(vs_out_frag_tree_id ^ 82);
        uint _1116 = _637 + (_637 << 10u);
        uint _1118 = _1116 ^ (_1116 >> 6u);
        uint _1120 = _1118 + (_1118 << 3u);
        uint _1122 = _1120 ^ (_1120 >> 11u);
        uint _652 = uint(vs_out_prim_seed);
        uint _1138 = _652 + (_652 << 10u);
        uint _1140 = _1138 ^ (_1138 >> 6u);
        uint _1142 = _1140 + (_1140 << 3u);
        uint _1144 = _1142 ^ (_1142 >> 11u);
        _1566 = mix(texture(sampler2D(material_data_canopy_color, samplers_llr), (vec2(uintBitsToFloat(((_1056 + (_1056 << 15u)) & 8388607u) | 1065353216u) - 1.0, uintBitsToFloat(((_1078 + (_1078 << 15u)) & 8388607u) | 1065353216u) - 1.0) + (vs_out_frag_uv.xy * 0.00999999977648258209228515625)) + (_617 * 0.0005000000237487256526947021484375), current_view.mip_bias).xyz, texture(sampler2D(material_data_canopy_color, samplers_llr), (vec2(uintBitsToFloat(((_1100 + (_1100 << 15u)) & 8388607u) | 1065353216u) - 1.0, uintBitsToFloat(((_1122 + (_1122 << 15u)) & 8388607u) | 1065353216u) - 1.0) + (vs_out_frag_uv.xy * 0.20000000298023223876953125)) + (_617 * 0.0500000007450580596923828125), current_view.mip_bias).xyz * 0.5, vec3(mix(0.100000001490116119384765625, 0.5, uintBitsToFloat(((_1144 + (_1144 << 15u)) & 8388607u) | 1065353216u) - 1.0)));
    }
    else
    {
        vec3 _1567;
        if (_1520 == 2)
        {
            bool is_handplaced_flowery = vs_out_is_handplaced_flag == 2u;
            uint _675 = uint(vs_out_frag_tree_id ^ 1128782);
            uint _1160 = _675 + (_675 << 10u);
            uint _1162 = _1160 ^ (_1160 >> 6u);
            uint _1164 = _1162 + (_1162 << 3u);
            uint _1166 = _1164 ^ (_1164 >> 11u);
            uint _679 = uint(vs_out_frag_tree_id ^ 872);
            uint _1182 = _679 + (_679 << 10u);
            uint _1184 = _1182 ^ (_1182 >> 6u);
            uint _1186 = _1184 + (_1184 << 3u);
            uint _1188 = _1186 ^ (_1186 >> 11u);
            vec2 _685 = vs_out_frag_uv.xy * 0.20000000298023223876953125;
            vec2 _692 = vs_out_frag_pos_ws.yz + vs_out_frag_pos_ws.yx;
            vec2 _695 = (vec2(uintBitsToFloat(((_1166 + (_1166 << 15u)) & 8388607u) | 1065353216u) - 1.0, uintBitsToFloat(((_1188 + (_1188 << 15u)) & 8388607u) | 1065353216u) - 1.0) + _685) + (_692 * 0.004999999888241291046142578125);
            vec2 _1524;
            if (is_handplaced_flowery)
            {
                vec2 _1476 = _695;
                _1476.y = fract(_695.y) * 0.60000002384185791015625;
                _1524 = _1476;
            }
            else
            {
                _1524 = _695;
            }
            vec4 sampled_2 = texture(sampler2D(material_data_canopy_color, samplers_llr), _1524, current_view.mip_bias);
            uint _715 = uint(vs_out_frag_tree_id ^ 11282);
            uint _1204 = _715 + (_715 << 10u);
            uint _1206 = _1204 ^ (_1204 >> 6u);
            uint _1208 = _1206 + (_1206 << 3u);
            uint _1210 = _1208 ^ (_1208 >> 11u);
            uint _719 = uint(vs_out_frag_tree_id ^ 82);
            uint _1226 = _719 + (_719 << 10u);
            uint _1228 = _1226 ^ (_1226 >> 6u);
            uint _1230 = _1228 + (_1228 << 3u);
            uint _1232 = _1230 ^ (_1230 >> 11u);
            vec2 _734 = (vec2(uintBitsToFloat(((_1210 + (_1210 << 15u)) & 8388607u) | 1065353216u) - 1.0, uintBitsToFloat(((_1232 + (_1232 << 15u)) & 8388607u) | 1065353216u) - 1.0) + _685) + (_692 * 0.0500000007450580596923828125);
            uint _738 = uint(vs_out_prim_seed ^ 1128782);
            uint _1248 = _738 + (_738 << 10u);
            uint _1250 = _1248 ^ (_1248 >> 6u);
            uint _1252 = _1250 + (_1250 << 3u);
            uint _1254 = _1252 ^ (_1252 >> 11u);
            vec2 _1525;
            if (is_handplaced_flowery)
            {
                vec2 _1478 = _734;
                _1478.y = fract(_1524.y) * 0.60000002384185791015625;
                _1525 = _1478;
            }
            else
            {
                _1525 = _734;
            }
            _1567 = mix(sampled_2.xyz, texture(sampler2D(material_data_canopy_color, samplers_llr), _1525, current_view.mip_bias).xyz, vec3(mix(0.0, 1.0, smoothstep(0.0, 1.0, uintBitsToFloat(((_1254 + (_1254 << 15u)) & 8388607u) | 1065353216u) - 1.0))));
        }
        else
        {
            uint _764 = uint(vs_out_frag_tree_id * 1128782);
            uint _1270 = _764 + (_764 << 10u);
            uint _1272 = _1270 ^ (_1270 >> 6u);
            uint _1274 = _1272 + (_1272 << 3u);
            uint _1276 = _1274 ^ (_1274 >> 11u);
            vec3 _1523;
            if (frame_constants.glade_theme_id == 3u)
            {
                _1523 = color_library_data.canopy_color_2.xyz * 0.75;
            }
            else
            {
                _1523 = color_library_data.canopy_color_2.xyz;
            }
            _1567 = mix(color_library_data.canopy_color_1.xyz, _1523, vec3(uintBitsToFloat(((_1276 + (_1276 << 15u)) & 8388607u) | 1065353216u) - 1.0));
        }
        _1566 = _1567;
    }
    vec3 _1653 = mix(_1566, _1554, bvec3(_1515));
    vec3 _1585;
    if (frame_constants.glade_theme_id == 4u)
    {
        _1585 = mix(_1653, vec3(0.699999988079071044921875), vec3(smoothstep(0.0, 1.0, clamp(vs_out_frag_normal.y, 0.0, 1.0))));
    }
    else
    {
        _1585 = _1653;
    }
    vec3 _1308 = (vs_out_frag_normal * 0.5) + vec3(0.5);
    vec3 _1376 = sqrt(clamp(_1585, vec3(0.0), vec3(1.0)));
    entryPointParam_ps_main_gbuffer = uvec2(((uint((clamp(_1308.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1308.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1308.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(clamp(sampled_1.z - 0.00390625, 0.0, 1.0), 0.0, 1.0) * 255.0) + 0.5) << uint(24)), ((uint((clamp(_1376.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1376.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1376.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(_1507, 0.0, 1.0) * 255.0) + 0.5) << uint(24)));
    gl_FragDepth = (gl_FragCoord.z / gl_FragCoord.w) / ((1.0 / gl_FragCoord.w) + ((vs_out_scramble_amount * (1.0 - _1507)) * 1.60000002384185791015625));
}

