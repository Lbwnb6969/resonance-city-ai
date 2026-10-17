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

void main()
{
    int index = int(fract(float(vs_out_instance_index) * 0.25) * 4.0);
    float _1371;
    if (index == 1)
    {
        _1371 = texture(sampler2D(material_data_cloud2, samplers_lnc), vec2((vs_out_uv.x * 0.3333333432674407958984375) + 0.666666686534881591796875, vs_out_uv.y * 0.3333333432674407958984375)).x;
    }
    else
    {
        float _1372;
        if (index == 2)
        {
            _1372 = texture(sampler2D(material_data_cloud3, samplers_lnc), vec2((vs_out_uv.x * 0.3333333432674407958984375) + 0.666666686534881591796875, vs_out_uv.y * 0.3333333432674407958984375)).x;
        }
        else
        {
            float _1373;
            if (index == 3)
            {
                _1373 = texture(sampler2D(material_data_cloud4, samplers_lnc), vec2((vs_out_uv.x * 0.3333333432674407958984375) + 0.666666686534881591796875, vs_out_uv.y * 0.3333333432674407958984375)).x;
            }
            else
            {
                _1373 = texture(sampler2D(material_data_cloud1, samplers_lnc), vec2((vs_out_uv.x * 0.3333333432674407958984375) + 0.666666686534881591796875, vs_out_uv.y * 0.3333333432674407958984375)).x;
            }
            _1372 = _1373;
        }
        _1371 = _1372;
    }
    if (smoothstep(0.0, 0.5, (((_1371 * _1371) * _1371) * _1371) * _1371) < 0.5)
    {
        demote;
    }
}

