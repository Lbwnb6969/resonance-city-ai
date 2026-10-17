#version 460
#extension GL_EXT_demote_to_helper_invocation : require

struct DofAutofocus_natural
{
    float focus0;
    float focus1;
    float lock_bias0;
    float lock_bias1;
    vec3 lock_pos_ws;
    uint is_locked;
    vec3 interp_lock_pos_ws;
    uint use_tilt_shift;
    float interp_lock_bias0;
    float interp_lock_bias1;
    float focus_scale;
    uint pad2;
};

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

layout(set = 0, binding = 1, std430) readonly buffer StructuredBuffer
{
    DofAutofocus_natural _member0[];
} material_data_autofocus_buf;

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

layout(location = 1) in vec3 vs_out_pos_ws;
layout(location = 0) in vec2 vs_out_frag_uv;

void main()
{
    vec3 _23 = vs_out_pos_ws;
    float _486 = 1.0 / material_data_autofocus_buf._member0[frame_constants.camera_idx].focus0;
    float _489 = 1.0 / material_data_autofocus_buf._member0[frame_constants.camera_idx].focus1;
    float _492 = max(0.001000000047497451305389404296875, max(_486, _489)) + 9.9999997473787516355514526367188e-06;
    float _495 = max(0.001000000047497451305389404296875, min(_486, _489)) - 9.9999997473787516355514526367188e-06;
    bool _498 = material_data_autofocus_buf._member0[frame_constants.camera_idx].use_tilt_shift != 0u;
    vec3 _691 = _23;
    _691.y = _23.y * float(_498 ? 0 : 1);
    vec4 _562 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    vec3 _566 = _562.xyz / vec3(_562.w);
    vec3 _573 = normalize((vec4(0.0, 0.0, -1.0, 0.0) * current_view.view_to_world).xyz);
    float _501 = 1.0 / max(1.0000000133514319600180897396058e-10, dot(_691 - _566, _573));
    float _502 = _492 - _495;
    float _504 = min(0.00999999977648258209228515625, 0.0500000007450580596923828125 * _502);
    float _694;
    if (_501 > _492)
    {
        _694 = (_501 - _492) + _504;
    }
    else
    {
        float _695;
        if (_501 < _495)
        {
            _695 = (_501 - _495) - _504;
        }
        else
        {
            _695 = (-_504) + (((2.0 * _504) * (_501 - _495)) / _502);
        }
        _694 = _695;
    }
    float _696;
    if (_498)
    {
        _696 = _694 / max(0.00999999977648258209228515625, length(_573.xz));
    }
    else
    {
        _696 = _694;
    }
    float _701;
    do
    {
        if (frame_constants.is_photomode != 0u)
        {
            _701 = 0.0;
            break;
        }
        else
        {
            _701 = 15.0;
            break;
        }
        break; // unreachable workaround
    } while(false);
    uvec2 _325 = uvec2(gl_FragCoord.xy);
    if (smoothstep(0.75, 1.0, max(abs(((-_696) * material_data_autofocus_buf._member0[frame_constants.camera_idx].focus_scale) * current_view.view_to_clip[1].y) * 0.0500000007450580596923828125, 2.0 - (distance(_23, _566) / _701))) > fract(52.98291778564453125 * fract((0.067110560834407806396484375 * float(_325.x)) + (0.005837149918079376220703125 * float(_325.y)))))
    {
        demote;
    }
    if (length(vs_out_frag_uv) > 0.5)
    {
        demote;
    }
}

