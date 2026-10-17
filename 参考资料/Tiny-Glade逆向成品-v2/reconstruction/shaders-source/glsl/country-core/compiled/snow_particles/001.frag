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
layout(location = 2) in vec3 vs_out_velocity_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;
layout(location = 1) out vec3 entryPointParam_ps_main_velocity;

void main()
{
    vec3 _28 = vs_out_pos_ws;
    float _663 = 1.0 / material_data_autofocus_buf._member0[frame_constants.camera_idx].focus0;
    float _666 = 1.0 / material_data_autofocus_buf._member0[frame_constants.camera_idx].focus1;
    float _669 = max(0.001000000047497451305389404296875, max(_663, _666)) + 9.9999997473787516355514526367188e-06;
    float _672 = max(0.001000000047497451305389404296875, min(_663, _666)) - 9.9999997473787516355514526367188e-06;
    bool _675 = material_data_autofocus_buf._member0[frame_constants.camera_idx].use_tilt_shift != 0u;
    vec3 _1176 = _28;
    _1176.y = _28.y * float(_675 ? 0 : 1);
    vec4 _739 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    vec3 _743 = _739.xyz / vec3(_739.w);
    vec3 _750 = normalize((vec4(0.0, 0.0, -1.0, 0.0) * current_view.view_to_world).xyz);
    float _678 = 1.0 / max(1.0000000133514319600180897396058e-10, dot(_1176 - _743, _750));
    float _679 = _669 - _672;
    float _681 = min(0.00999999977648258209228515625, 0.0500000007450580596923828125 * _679);
    float _1185;
    if (_678 > _669)
    {
        _1185 = (_678 - _669) + _681;
    }
    else
    {
        float _1186;
        if (_678 < _672)
        {
            _1186 = (_678 - _672) - _681;
        }
        else
        {
            _1186 = (-_681) + (((2.0 * _681) * (_678 - _672)) / _679);
        }
        _1185 = _1186;
    }
    float _1187;
    if (_675)
    {
        _1187 = _1185 / max(0.00999999977648258209228515625, length(_750.xz));
    }
    else
    {
        _1187 = _1185;
    }
    float _1192;
    do
    {
        if (frame_constants.is_photomode != 0u)
        {
            _1192 = 0.0;
            break;
        }
        else
        {
            _1192 = 15.0;
            break;
        }
        break; // unreachable workaround
    } while(false);
    uvec2 _329 = uvec2(gl_FragCoord.xy);
    if (smoothstep(0.75, 1.0, max(abs(((-_1187) * material_data_autofocus_buf._member0[frame_constants.camera_idx].focus_scale) * current_view.view_to_clip[1].y) * 0.0500000007450580596923828125, 2.0 - (distance(_28, _743) / _1192))) > fract(52.98291778564453125 * fract((0.067110560834407806396484375 * float(_329.x)) + (0.005837149918079376220703125 * float(_329.y)))))
    {
        demote;
    }
    if (length(vs_out_frag_uv) > 0.5)
    {
        demote;
    }
    vec3 _841 = (frame_constants.dir_to_primary_directional_light * 0.5) + vec3(0.5);
    uvec2 _1220 = uvec2(((uint((clamp(_841.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_841.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_841.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 4278190080u, 14013909u);
    _1220.y = 1188419029u;
    entryPointParam_ps_main_gbuffer = _1220;
    entryPointParam_ps_main_velocity = vs_out_velocity_ws;
}

