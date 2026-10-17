#version 460

float _1585;

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

layout(set = 7, binding = 0, std140) uniform PathExclusionMask_natural
{
    uvec2 tex_dims;
} path_mask;

layout(set = 0, binding = 0) uniform texture2D material_data_rocky_terrain_texture;
layout(set = 2, binding = 6) uniform sampler samplers_llr_iso;
layout(set = 2, binding = 4) uniform sampler samplers_llb;
layout(set = 7, binding = 1) uniform texture2D path_mask_tex;

layout(location = 2) in vec3 vs_out_frag_position_ws;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 3) in vec2 vs_out_prim_center;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec3 _55 = normalize(vs_out_frag_normal_ws);
    vec3 in_p = vs_out_frag_position_ws * vec3(0.0333333350718021392822265625);
    uint _74 = uint(1000.0 * (abs(vs_out_prim_center.x) + abs(vs_out_prim_center.y)));
    uint _782 = _74 + (_74 << 10u);
    uint _784 = _782 ^ (_782 >> 6u);
    uint _786 = _784 + (_784 << 3u);
    uint _788 = _786 ^ (_786 >> 11u);
    float _796 = uintBitsToFloat(((_788 + (_788 << 15u)) & 8388607u) | 1065353216u) - 1.0;
    vec2 _119 = vec2(_796 * 0.20000000298023223876953125);
    vec4 sampled = texture(sampler2D(material_data_rocky_terrain_texture, samplers_llr_iso), (in_p.zy * 2.0) + _119);
    vec4 sampled_1 = texture(sampler2D(material_data_rocky_terrain_texture, samplers_llr_iso), (in_p.xy * 2.0) + _119);
    vec4 sampled_2 = texture(sampler2D(material_data_rocky_terrain_texture, samplers_llr_iso), (in_p.xz * 2.0) + _119);
    vec3 _159 = pow(abs(_55), vec3(1.0));
    float _161 = _159.x;
    float _162 = _159.z;
    float _830 = dot(sampled_1.xyz, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875));
    float _801 = dot(sampled.xyz, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)) + _161;
    float _802 = _830 + _162;
    float _804 = _830 + _159.y;
    float _806 = max(max(_801, _802), _804) - 0.20000000298023223876953125;
    float _808 = max(_801 - _806, 0.0);
    float _810 = max(_802 - _806, 0.0);
    float _812 = max(_804 - _806, 0.0);
    bool _1582;
    if (frame_constants.glade_theme_id == 2u)
    {
        _1582 = true;
    }
    else
    {
        _1582 = frame_constants.glade_theme_id == 4u;
    }
    vec3 _1662 = mix(vec3(0.0419999994337558746337890625, 0.070000000298023223876953125, 0.02099999971687793731689453125), vec3(0.0625, 0.0399999953806400299072265625, 0.005624999292194843292236328125), bvec3(_1582));
    vec2 _276 = (((vs_out_frag_position_ws.xz + vs_out_frag_position_ws.xy) + (vs_out_frag_position_ws.yz * 0.5)) + vec2(_796 * 200.0)) * 0.85000002384185791015625;
    ivec2 _859 = ivec2(floor(_276));
    vec2 _860 = fract(_276);
    uvec2 _861 = uvec2(_859);
    uint _911 = _861.y;
    uint _917 = _911 + (_911 << 10u);
    uint _919 = _917 ^ (_917 >> 6u);
    uint _921 = _919 + (_919 << 3u);
    uint _923 = _921 ^ (_921 >> 11u);
    uint _931 = (((_861.x * 1664525u) + (_923 + (_923 << 15u))) + 1013904223u) * 1664525u;
    uint _933 = _931 ^ (_931 >> 11u);
    uint _936 = _933 ^ ((_933 << 7u) & 2636928640u);
    uint _939 = _936 ^ ((_936 << 15u) & 4022730752u);
    uint _941 = _939 ^ (_939 >> 18u);
    float _1587;
    _1587 = _1585;
    uint _958;
    uint _977;
    float _983;
    uint _1586 = 0u;
    uint _1626 = _941;
    for (;;)
    {
        if (!(_1586 < 1u))
        {
            break;
        }
        uint _969 = _1626 + (_1626 << 10u);
        uint _971 = _969 ^ (_969 >> 6u);
        uint _973 = _971 + (_971 << 3u);
        uint _975 = _973 ^ (_973 >> 11u);
        _977 = _975 + (_975 << 15u);
        _983 = uintBitsToFloat((_1626 & 8388607u) | 1065353216u) - 1.0;
        _958 = _1586 + 1u;
        _1626 = _977;
        _1587 = _983;
        _1586 = _958;
        continue;
    }
    uvec2 _869 = uvec2(_859 + ivec2(1, 0));
    uint _987 = _869.y;
    uint _993 = _987 + (_987 << 10u);
    uint _995 = _993 ^ (_993 >> 6u);
    uint _997 = _995 + (_995 << 3u);
    uint _999 = _997 ^ (_997 >> 11u);
    uint _1007 = (((_869.x * 1664525u) + (_999 + (_999 << 15u))) + 1013904223u) * 1664525u;
    uint _1009 = _1007 ^ (_1007 >> 11u);
    uint _1012 = _1009 ^ ((_1009 << 7u) & 2636928640u);
    uint _1015 = _1012 ^ ((_1012 << 15u) & 4022730752u);
    uint _1017 = _1015 ^ (_1015 >> 18u);
    float _1592;
    _1592 = _1585;
    uint _1034;
    uint _1053;
    float _1059;
    uint _1591 = 0u;
    uint _1625 = _1017;
    for (;;)
    {
        if (!(_1591 < 1u))
        {
            break;
        }
        uint _1045 = _1625 + (_1625 << 10u);
        uint _1047 = _1045 ^ (_1045 >> 6u);
        uint _1049 = _1047 + (_1047 << 3u);
        uint _1051 = _1049 ^ (_1049 >> 11u);
        _1053 = _1051 + (_1051 << 15u);
        _1059 = uintBitsToFloat((_1625 & 8388607u) | 1065353216u) - 1.0;
        _1034 = _1591 + 1u;
        _1625 = _1053;
        _1592 = _1059;
        _1591 = _1034;
        continue;
    }
    uvec2 _876 = uvec2(_859 + ivec2(0, 1));
    uint _1063 = _876.y;
    uint _1069 = _1063 + (_1063 << 10u);
    uint _1071 = _1069 ^ (_1069 >> 6u);
    uint _1073 = _1071 + (_1071 << 3u);
    uint _1075 = _1073 ^ (_1073 >> 11u);
    uint _1083 = (((_876.x * 1664525u) + (_1075 + (_1075 << 15u))) + 1013904223u) * 1664525u;
    uint _1085 = _1083 ^ (_1083 >> 11u);
    uint _1088 = _1085 ^ ((_1085 << 7u) & 2636928640u);
    uint _1091 = _1088 ^ ((_1088 << 15u) & 4022730752u);
    uint _1093 = _1091 ^ (_1091 >> 18u);
    float _1598;
    _1598 = _1585;
    uint _1110;
    uint _1129;
    float _1135;
    uint _1597 = 0u;
    uint _1624 = _1093;
    for (;;)
    {
        if (!(_1597 < 1u))
        {
            break;
        }
        uint _1121 = _1624 + (_1624 << 10u);
        uint _1123 = _1121 ^ (_1121 >> 6u);
        uint _1125 = _1123 + (_1123 << 3u);
        uint _1127 = _1125 ^ (_1125 >> 11u);
        _1129 = _1127 + (_1127 << 15u);
        _1135 = uintBitsToFloat((_1624 & 8388607u) | 1065353216u) - 1.0;
        _1110 = _1597 + 1u;
        _1624 = _1129;
        _1598 = _1135;
        _1597 = _1110;
        continue;
    }
    uvec2 _884 = uvec2(_859 + ivec2(1));
    uint _1139 = _884.y;
    uint _1145 = _1139 + (_1139 << 10u);
    uint _1147 = _1145 ^ (_1145 >> 6u);
    uint _1149 = _1147 + (_1147 << 3u);
    uint _1151 = _1149 ^ (_1149 >> 11u);
    uint _1159 = (((_884.x * 1664525u) + (_1151 + (_1151 << 15u))) + 1013904223u) * 1664525u;
    uint _1161 = _1159 ^ (_1159 >> 11u);
    uint _1164 = _1161 ^ ((_1161 << 7u) & 2636928640u);
    uint _1167 = _1164 ^ ((_1164 << 15u) & 4022730752u);
    uint _1169 = _1167 ^ (_1167 >> 18u);
    float _1605;
    _1605 = _1585;
    uint _1186;
    uint _1205;
    float _1211;
    uint _1604 = 0u;
    uint _1623 = _1169;
    for (;;)
    {
        if (!(_1604 < 1u))
        {
            break;
        }
        uint _1197 = _1623 + (_1623 << 10u);
        uint _1199 = _1197 ^ (_1197 >> 6u);
        uint _1201 = _1199 + (_1199 << 3u);
        uint _1203 = _1201 ^ (_1201 >> 11u);
        _1205 = _1203 + (_1203 << 15u);
        _1211 = uintBitsToFloat((_1623 & 8388607u) | 1065353216u) - 1.0;
        _1186 = _1604 + 1u;
        _1623 = _1205;
        _1605 = _1211;
        _1604 = _1186;
        continue;
    }
    vec2 _1218 = (_860 * _860) * (vec2(3.0) - (vec2(2.0) * _860));
    float _892 = _1218.x;
    float _893 = 1.0 - _892;
    float _895 = _1218.y;
    float _465 = smoothstep(0.5, 1.0, (((1.0 - _895) * ((_1587 * _893) + (_1592 * _892))) + ((_1598 * _893) * _895)) + ((_1605 * _892) * _895));
    vec3 _482 = mix(mix(((((sampled.xyz * _808) + (sampled_1.xyz * _810)) + (sampled_2.xyz * _812)) / vec3((_808 + _810) + _812)) * 1.10000002384185791015625, _1662, vec3((1.0 - smoothstep(-0.20000000298023223876953125, 0.60000002384185791015625 - _465, vs_out_frag_position_ws.y)) * 0.75)), _1662, vec3(clamp(_161 + _162, 0.0, 1.0) * _465));
    bool _1611;
    if (frame_constants.glade_theme_id == 4u)
    {
        _1611 = vs_out_frag_position_ws.y > 0.0;
    }
    else
    {
        _1611 = false;
    }
    vec3 _1613;
    if (_1611)
    {
        vec4 _1268 = textureLod(sampler2D(path_mask_tex, samplers_llb), (vs_out_frag_position_ws.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0);
        float _1258 = _1268.x;
        _1613 = mix(_482, vec3(0.699999988079071044921875), vec3(smoothstep(0.20000000298023223876953125, 1.0, clamp((_55.y * (((_1258 * _1258) * _1258) * _1258)) * mix(0.5, 1.0, _465), 0.0, 1.0)) + 0.100000001490116119384765625));
    }
    else
    {
        _1613 = _482;
    }
    vec3 _1286 = (_55 * 0.5) + vec3(0.5);
    vec3 _1394 = sqrt(clamp(_1613, vec3(0.0), vec3(1.0)));
    uint _1409 = (uint((clamp(_1394.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1394.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1394.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _1658 = uvec2(((uint((clamp(_1286.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1286.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1286.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3422552064u, _1409);
    _1658.y = _1409 | 117440512u;
    entryPointParam_ps_main_gbuffer = _1658;
}

