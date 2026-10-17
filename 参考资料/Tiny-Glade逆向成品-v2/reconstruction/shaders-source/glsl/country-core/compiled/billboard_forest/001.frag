#version 460
#extension GL_EXT_demote_to_helper_invocation : require

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

layout(set = 0, binding = 1) uniform texture2D material_data_cloud2;
layout(set = 2, binding = 0) uniform sampler samplers_lnc;
layout(set = 0, binding = 2) uniform texture2D material_data_cloud3;
layout(set = 0, binding = 3) uniform texture2D material_data_cloud4;
layout(set = 0, binding = 0) uniform texture2D material_data_cloud1;

layout(location = 0) in vec2 vs_out_uv;
layout(location = 1) flat in uint vs_out_instance_index;
layout(location = 3) in vec3 vs_out_x_axis;
layout(location = 4) in vec3 vs_out_z_axis;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    int index = int(fract(float(vs_out_instance_index) * 0.25) * 4.0);
    float _1859;
    float _1862;
    float _1865;
    float _1868;
    float _1871;
    if (index == 1)
    {
        float _837 = vs_out_uv.x * 0.3333333432674407958984375;
        float _842 = vs_out_uv.y * 0.3333333432674407958984375;
        _1871 = texture(sampler2D(material_data_cloud2, samplers_lnc), vec2(_837, _842 + 0.3333333432674407958984375)).x;
        _1868 = texture(sampler2D(material_data_cloud2, samplers_lnc), vec2(_837, _842 + 0.666666686534881591796875)).x;
        _1865 = texture(sampler2D(material_data_cloud2, samplers_lnc), vec2(_837, _842)).x;
        _1862 = texture(sampler2D(material_data_cloud2, samplers_lnc), vec2(_837 + 0.3333333432674407958984375, _842)).x;
        _1859 = texture(sampler2D(material_data_cloud2, samplers_lnc), vec2(_837 + 0.666666686534881591796875, _842)).x;
    }
    else
    {
        float _1860;
        float _1863;
        float _1866;
        float _1869;
        float _1872;
        if (index == 2)
        {
            float _988 = vs_out_uv.x * 0.3333333432674407958984375;
            float _993 = vs_out_uv.y * 0.3333333432674407958984375;
            _1872 = texture(sampler2D(material_data_cloud3, samplers_lnc), vec2(_988, _993 + 0.3333333432674407958984375)).x;
            _1869 = texture(sampler2D(material_data_cloud3, samplers_lnc), vec2(_988, _993 + 0.666666686534881591796875)).x;
            _1866 = texture(sampler2D(material_data_cloud3, samplers_lnc), vec2(_988, _993)).x;
            _1863 = texture(sampler2D(material_data_cloud3, samplers_lnc), vec2(_988 + 0.3333333432674407958984375, _993)).x;
            _1860 = texture(sampler2D(material_data_cloud3, samplers_lnc), vec2(_988 + 0.666666686534881591796875, _993)).x;
        }
        else
        {
            float _1861;
            float _1864;
            float _1867;
            float _1870;
            float _1873;
            if (index == 3)
            {
                float _1139 = vs_out_uv.x * 0.3333333432674407958984375;
                float _1144 = vs_out_uv.y * 0.3333333432674407958984375;
                _1873 = texture(sampler2D(material_data_cloud4, samplers_lnc), vec2(_1139, _1144 + 0.3333333432674407958984375)).x;
                _1870 = texture(sampler2D(material_data_cloud4, samplers_lnc), vec2(_1139, _1144 + 0.666666686534881591796875)).x;
                _1867 = texture(sampler2D(material_data_cloud4, samplers_lnc), vec2(_1139, _1144)).x;
                _1864 = texture(sampler2D(material_data_cloud4, samplers_lnc), vec2(_1139 + 0.3333333432674407958984375, _1144)).x;
                _1861 = texture(sampler2D(material_data_cloud4, samplers_lnc), vec2(_1139 + 0.666666686534881591796875, _1144)).x;
            }
            else
            {
                float _1290 = vs_out_uv.x * 0.3333333432674407958984375;
                float _1295 = vs_out_uv.y * 0.3333333432674407958984375;
                _1873 = texture(sampler2D(material_data_cloud1, samplers_lnc), vec2(_1290, _1295 + 0.3333333432674407958984375)).x;
                _1870 = texture(sampler2D(material_data_cloud1, samplers_lnc), vec2(_1290, _1295 + 0.666666686534881591796875)).x;
                _1867 = texture(sampler2D(material_data_cloud1, samplers_lnc), vec2(_1290, _1295)).x;
                _1864 = texture(sampler2D(material_data_cloud1, samplers_lnc), vec2(_1290 + 0.3333333432674407958984375, _1295)).x;
                _1861 = texture(sampler2D(material_data_cloud1, samplers_lnc), vec2(_1290 + 0.666666686534881591796875, _1295)).x;
            }
            _1872 = _1873;
            _1869 = _1870;
            _1866 = _1867;
            _1863 = _1864;
            _1860 = _1861;
        }
        _1871 = _1872;
        _1868 = _1869;
        _1865 = _1866;
        _1862 = _1863;
        _1859 = _1860;
    }
    float _1389 = (((_1862 * _1862) * _1862) * _1862) * _1862;
    vec3 _428 = normalize(vec3(((((_1865 * _1865) * _1865) * _1865) * _1865) - (_1389 * _1389), (((_1871 * _1871) * _1871) * _1871) * _1871, 1.0 - ((((_1868 * _1868) * _1868) * _1868) * _1868)));
    if (smoothstep(0.0, 0.5, (((_1859 * _1859) * _1859) * _1859) * _1859) < 0.5)
    {
        demote;
    }
    vec3 _1874;
    if (frame_constants.glade_theme_id == 2u)
    {
        _1874 = pow(color_library_data.canopy_color_1.xyz, vec3(1.5)) * 0.89999997615814208984375;
    }
    else
    {
        vec3 _1875;
        if (frame_constants.glade_theme_id == 4u)
        {
            _1875 = mix(pow(color_library_data.canopy_color_1.xyz, vec3(1.5)), vec3(1.0), vec3(0.5));
        }
        else
        {
            _1875 = vec3(0.0240000002086162567138671875, 0.053999997675418853759765625, 0.01800000108778476715087890625);
        }
        _1874 = _1875;
    }
    vec3 _1477 = (normalize(((vs_out_x_axis * _428.x) + (vec3(0.0, 1.0, 0.0) * _428.y)) + (vs_out_z_axis * _428.z)) * 0.5) + vec3(0.5);
    vec3 _1585 = sqrt(clamp(mix(_1874 * 0.5, frame_constants.sky_low_color.xyz * (1.0 - ((smoothstep(0.4830000102519989013671875, 0.50499999523162841796875, frame_constants.time_of_day) - smoothstep(0.839999973773956298828125, 0.910000026226043701171875, frame_constants.time_of_day)) * 0.75)), vec3(0.0199999995529651641845703125)), vec3(0.0), vec3(1.0)));
    uint _1600 = (uint((clamp(_1585.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1585.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1585.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _1899 = uvec2(((uint((clamp(_1477.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1477.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1477.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 4278190080u, _1600);
    _1899.y = _1600 | 1174405120u;
    entryPointParam_ps_main_gbuffer = _1899;
}

