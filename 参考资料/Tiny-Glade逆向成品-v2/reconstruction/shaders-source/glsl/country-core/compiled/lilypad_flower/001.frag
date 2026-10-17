#version 460

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

layout(set = 0, binding = 0) uniform texture2D material_data_lilypad_flower_texture;
layout(set = 2, binding = 1) uniform sampler samplers_llr;

layout(location = 2) in vec2 vs_out_frag_uv;
layout(location = 1) in vec3 vs_out_frag_position_ws;
layout(location = 3) in vec3 vs_out_color;
layout(location = 0) in vec3 vs_out_frag_normal_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec4 sampled = texture(sampler2D(material_data_lilypad_flower_texture, samplers_llr), vs_out_frag_uv);
    vec4 _286 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    vec3 _476;
    if (frame_constants.glade_theme_id == 4u)
    {
        _476 = mix(vs_out_color * 0.300000011920928955078125, vec3(0.699999988079071044921875), vec3(smoothstep(0.0, 0.89999997615814208984375, vs_out_frag_position_ws.y) * 0.300000011920928955078125));
    }
    else
    {
        _476 = mix(mix(sampled.xyz, vec3(0.25, 0.100000001490116119384765625, 0.20000000298023223876953125), vec3(1.0 - smoothstep(0.0500000007450580596923828125, 0.100000001490116119384765625, vs_out_frag_position_ws.y))), vs_out_color, vec3(1.0 - smoothstep(-0.0500000007450580596923828125, 0.0500000007450580596923828125, vs_out_frag_position_ws.y)));
    }
    vec3 _477;
    if (dot(normalize((_286.xyz / vec3(_286.w)) - vs_out_frag_position_ws), vs_out_frag_normal_ws) <= 0.0)
    {
        _477 = -vs_out_frag_normal_ws;
    }
    else
    {
        _477 = vs_out_frag_normal_ws;
    }
    vec3 _320 = (_477 * 0.5) + vec3(0.5);
    vec3 _388 = sqrt(clamp(_476, vec3(0.0), vec3(1.0)));
    entryPointParam_ps_main_gbuffer = uvec2(((uint((clamp(_320.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_320.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_320.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 4278190080u, ((uint((clamp(_388.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_388.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_388.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 4278190080u);
}

