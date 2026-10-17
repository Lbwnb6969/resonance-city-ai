#version 460
#extension GL_EXT_demote_to_helper_invocation : require

layout(set = 3, binding = 0, std140) uniform FrameConstants_natural
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

layout(set = 4, binding = 0, std140) uniform ViewConstants_natural
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

layout(set = 0, binding = 1) uniform texture2D material_data_cloud2;
layout(set = 1, binding = 0) uniform sampler samplers_lnc;
layout(set = 0, binding = 2) uniform texture2D material_data_cloud3;
layout(set = 0, binding = 3) uniform texture2D material_data_cloud4;
layout(set = 0, binding = 0) uniform texture2D material_data_cloud1;

layout(location = 0) in vec2 vs_out_uv;
layout(location = 1) flat in uint vs_out_instance_index;
layout(location = 3) in vec3 vs_out_x_axis;
layout(location = 4) in vec3 vs_out_z_axis;
layout(location = 2) in vec3 vs_out_pos_ws;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    int index = int(fract(float(vs_out_instance_index) * 0.25) * 4.0);
    float _1639;
    float _1642;
    float _1645;
    float _1648;
    float _1651;
    float _1654;
    float _1657;
    if (index == 1)
    {
        float _773 = vs_out_uv.x * 0.3333333432674407958984375;
        float _778 = vs_out_uv.y * 0.3333333432674407958984375;
        vec4 _711 = texture(sampler2D(material_data_cloud2, samplers_lnc), vec2(_773, _778));
        float _712 = _711.x;
        float _792 = _773 + 0.3333333432674407958984375;
        vec4 _720 = texture(sampler2D(material_data_cloud2, samplers_lnc), vec2(_792, _778));
        float _721 = _720.x;
        vec4 _729 = texture(sampler2D(material_data_cloud2, samplers_lnc), vec2(_773 + 0.666666686534881591796875, _778));
        float _730 = _729.x;
        float _829 = _778 + 0.3333333432674407958984375;
        vec4 _738 = texture(sampler2D(material_data_cloud2, samplers_lnc), vec2(_773, _829));
        float _739 = _738.x;
        vec4 _747 = texture(sampler2D(material_data_cloud2, samplers_lnc), vec2(_792, _829));
        float _748 = _747.x;
        float _861 = _778 + 0.666666686534881591796875;
        vec4 _756 = texture(sampler2D(material_data_cloud2, samplers_lnc), vec2(_773, _861));
        float _757 = _756.x;
        vec4 _765 = texture(sampler2D(material_data_cloud2, samplers_lnc), vec2(_792, _861));
        float _766 = _765.x;
        _1657 = _739 * _739;
        _1654 = _748 * _748;
        _1651 = _757 * _757;
        _1648 = _712 * _712;
        _1645 = _721 * _721;
        _1642 = _766 * _766;
        _1639 = _730 * _730;
    }
    else
    {
        float _1640;
        float _1643;
        float _1646;
        float _1649;
        float _1652;
        float _1655;
        float _1658;
        if (index == 2)
        {
            float _952 = vs_out_uv.x * 0.3333333432674407958984375;
            float _957 = vs_out_uv.y * 0.3333333432674407958984375;
            vec4 _891 = texture(sampler2D(material_data_cloud3, samplers_lnc), vec2(_952, _957));
            float _892 = _891.x;
            float _971 = _952 + 0.3333333432674407958984375;
            vec4 _900 = texture(sampler2D(material_data_cloud3, samplers_lnc), vec2(_971, _957));
            float _901 = _900.x;
            vec4 _909 = texture(sampler2D(material_data_cloud3, samplers_lnc), vec2(_952 + 0.666666686534881591796875, _957));
            float _910 = _909.x;
            float _1008 = _957 + 0.3333333432674407958984375;
            vec4 _918 = texture(sampler2D(material_data_cloud3, samplers_lnc), vec2(_952, _1008));
            float _919 = _918.x;
            vec4 _927 = texture(sampler2D(material_data_cloud3, samplers_lnc), vec2(_971, _1008));
            float _928 = _927.x;
            float _1040 = _957 + 0.666666686534881591796875;
            vec4 _936 = texture(sampler2D(material_data_cloud3, samplers_lnc), vec2(_952, _1040));
            float _937 = _936.x;
            vec4 _945 = texture(sampler2D(material_data_cloud3, samplers_lnc), vec2(_971, _1040));
            float _946 = _945.x;
            _1658 = _919 * _919;
            _1655 = _928 * _928;
            _1652 = _937 * _937;
            _1649 = _892 * _892;
            _1646 = _901 * _901;
            _1643 = _946 * _946;
            _1640 = _910 * _910;
        }
        else
        {
            float _1641;
            float _1644;
            float _1647;
            float _1650;
            float _1653;
            float _1656;
            float _1659;
            if (index == 3)
            {
                float _1131 = vs_out_uv.x * 0.3333333432674407958984375;
                float _1136 = vs_out_uv.y * 0.3333333432674407958984375;
                vec4 _1070 = texture(sampler2D(material_data_cloud4, samplers_lnc), vec2(_1131, _1136));
                float _1071 = _1070.x;
                float _1150 = _1131 + 0.3333333432674407958984375;
                vec4 _1079 = texture(sampler2D(material_data_cloud4, samplers_lnc), vec2(_1150, _1136));
                float _1080 = _1079.x;
                vec4 _1088 = texture(sampler2D(material_data_cloud4, samplers_lnc), vec2(_1131 + 0.666666686534881591796875, _1136));
                float _1089 = _1088.x;
                float _1187 = _1136 + 0.3333333432674407958984375;
                vec4 _1097 = texture(sampler2D(material_data_cloud4, samplers_lnc), vec2(_1131, _1187));
                float _1098 = _1097.x;
                vec4 _1106 = texture(sampler2D(material_data_cloud4, samplers_lnc), vec2(_1150, _1187));
                float _1107 = _1106.x;
                float _1219 = _1136 + 0.666666686534881591796875;
                vec4 _1115 = texture(sampler2D(material_data_cloud4, samplers_lnc), vec2(_1131, _1219));
                float _1116 = _1115.x;
                vec4 _1124 = texture(sampler2D(material_data_cloud4, samplers_lnc), vec2(_1150, _1219));
                float _1125 = _1124.x;
                _1659 = _1098 * _1098;
                _1656 = _1107 * _1107;
                _1653 = _1116 * _1116;
                _1650 = _1071 * _1071;
                _1647 = _1080 * _1080;
                _1644 = _1125 * _1125;
                _1641 = _1089 * _1089;
            }
            else
            {
                float _1310 = vs_out_uv.x * 0.3333333432674407958984375;
                float _1315 = vs_out_uv.y * 0.3333333432674407958984375;
                vec4 _1249 = texture(sampler2D(material_data_cloud1, samplers_lnc), vec2(_1310, _1315));
                float _1250 = _1249.x;
                float _1329 = _1310 + 0.3333333432674407958984375;
                vec4 _1258 = texture(sampler2D(material_data_cloud1, samplers_lnc), vec2(_1329, _1315));
                float _1259 = _1258.x;
                vec4 _1267 = texture(sampler2D(material_data_cloud1, samplers_lnc), vec2(_1310 + 0.666666686534881591796875, _1315));
                float _1268 = _1267.x;
                float _1366 = _1315 + 0.3333333432674407958984375;
                vec4 _1276 = texture(sampler2D(material_data_cloud1, samplers_lnc), vec2(_1310, _1366));
                float _1277 = _1276.x;
                vec4 _1285 = texture(sampler2D(material_data_cloud1, samplers_lnc), vec2(_1329, _1366));
                float _1286 = _1285.x;
                float _1398 = _1315 + 0.666666686534881591796875;
                vec4 _1294 = texture(sampler2D(material_data_cloud1, samplers_lnc), vec2(_1310, _1398));
                float _1295 = _1294.x;
                vec4 _1303 = texture(sampler2D(material_data_cloud1, samplers_lnc), vec2(_1329, _1398));
                float _1304 = _1303.x;
                _1659 = _1277 * _1277;
                _1656 = _1286 * _1286;
                _1653 = _1295 * _1295;
                _1650 = _1250 * _1250;
                _1647 = _1259 * _1259;
                _1644 = _1304 * _1304;
                _1641 = _1268 * _1268;
            }
            _1658 = _1659;
            _1655 = _1656;
            _1652 = _1653;
            _1649 = _1650;
            _1646 = _1647;
            _1643 = _1644;
            _1640 = _1641;
        }
        _1657 = _1658;
        _1654 = _1655;
        _1651 = _1652;
        _1648 = _1649;
        _1645 = _1646;
        _1642 = _1643;
        _1639 = _1640;
    }
    if (_1639 < 0.001000000047497451305389404296875)
    {
        demote;
    }
    float _468 = dot(frame_constants.dir_to_primary_directional_light, vs_out_x_axis);
    vec4 _1431 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    float _1440 = 1.0 - ((smoothstep(0.4830000102519989013671875, 0.50499999523162841796875, frame_constants.time_of_day) - smoothstep(0.839999973773956298828125, 0.910000026226043701171875, frame_constants.time_of_day)) * 0.75);
    vec3 light_intensity = (frame_constants.sun_color.xyz * 0.100000001490116119384765625) * _1440;
    vec4 _1672 = vec4((frame_constants.sky_high_color.xyz * 2.0) * _1440, 1.0);
    vec3 _567 = _1672.xyz + ((light_intensity * _1648) * pow(max(_468, 0.0), 2.0));
    vec4 _1598 = _1672;
    _1598.x = _567.x;
    _1598.y = _567.y;
    _1598.z = _567.z;
    vec3 _580 = _1598.xyz + ((light_intensity * _1645) * pow(abs(min(_468, 0.0)), 2.0));
    vec4 _1604 = _1598;
    _1604.x = _580.x;
    _1604.y = _580.y;
    _1604.z = _580.z;
    vec3 _593 = _1604.xyz + ((light_intensity * _1657) * pow(max(frame_constants.dir_to_primary_directional_light.y, 0.0), 2.0));
    vec4 _1610 = _1604;
    _1610.x = _593.x;
    _1610.y = _593.y;
    _1610.z = _593.z;
    vec3 _606 = _1610.xyz + ((light_intensity * _1654) * pow(abs(min(frame_constants.dir_to_primary_directional_light.y, 0.0)), 2.0));
    vec4 _1616 = _1610;
    _1616.x = _606.x;
    _1616.y = _606.y;
    _1616.z = _606.z;
    vec3 _619 = _1616.xyz + ((light_intensity * _1642) * pow(max(dot(frame_constants.dir_to_primary_directional_light, vs_out_z_axis), 0.0), 2.0));
    vec4 _1622 = _1616;
    _1622.x = _619.x;
    _1622.y = _619.y;
    _1622.z = _619.z;
    vec3 _634 = _1622.xyz + (frame_constants.sun_color.xyz * ((smoothstep(0.89999997615814208984375, 1.0, dot(frame_constants.dir_to_primary_directional_light, -normalize((_1431.xyz / vec3(_1431.w)) - vs_out_pos_ws))) * _1651) * 0.5));
    vec4 _1628 = _1622;
    _1628.x = _634.x;
    _1628.y = _634.y;
    _1628.z = _634.z;
    vec4 _1664;
    float _1665;
    if (frame_constants.glade_theme_id == 3u)
    {
        vec3 _656 = _1628.xyz * 0.60000002384185791015625;
        vec4 _1634 = _1628;
        _1634.x = _656.x;
        _1634.y = _656.y;
        _1634.z = _656.z;
        _1665 = _1639 * 0.5;
        _1664 = _1634;
    }
    else
    {
        _1665 = _1639;
        _1664 = _1628;
    }
    entryPointParam_ps_main_color = _1664 * _1665;
}

