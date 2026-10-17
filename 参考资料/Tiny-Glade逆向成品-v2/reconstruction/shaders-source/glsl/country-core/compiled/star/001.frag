#version 460

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

layout(set = 0, binding = 0) uniform texture2D material_data_star_texture;
layout(set = 1, binding = 0) uniform sampler samplers_lnc;

layout(location = 2) in vec3 vs_out_pos_ws;
layout(location = 0) in vec2 vs_out_uv;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec4 _183 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    float _252;
    do
    {
        float _198 = abs(frame_constants.time_of_day - 0.89999997615814208984375);
        if (_198 > 0.100000001490116119384765625)
        {
            _252 = 0.0;
            break;
        }
        float _202 = _198 * 10.0;
        _252 = 1.0 - ((_202 * _202) * (3.0 - (_198 * 20.0)));
        break;
    } while(false);
    float _253;
    do
    {
        float _216 = abs(frame_constants.time_of_day - 0.449999988079071044921875);
        if (_216 > 0.1500000059604644775390625)
        {
            _253 = 0.0;
            break;
        }
        float _220 = _216 * 6.666666507720947265625;
        _253 = 1.0 - ((_220 * _220) * (3.0 - (_216 * 13.33333301544189453125)));
        break;
    } while(false);
    vec4 _120 = vec4(1.0) * ((texture(sampler2D(material_data_star_texture, samplers_lnc), vs_out_uv).x * (1.0 - (smoothstep(-1.0, 1.0, dot(normalize((_183.xyz / vec3(_183.w)) - vs_out_pos_ws), -frame_constants.dir_to_primary_directional_light)) * (_252 + _253)))) * (smoothstep(0.4000000059604644775390625, 0.60000002384185791015625, frame_constants.time_of_day) - smoothstep(0.800000011920928955078125, 0.920000016689300537109375, frame_constants.time_of_day)));
    vec3 _128 = _120.xyz * (10.0 * frame_constants.ev_mult);
    vec4 _247 = _120;
    _247.x = _128.x;
    _247.y = _128.y;
    _247.z = _128.z;
    entryPointParam_ps_main_color = _247;
}

