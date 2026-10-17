#version 460
#extension GL_EXT_demote_to_helper_invocation : require

const uvec2 _95[4] = uvec2[](uvec2(0u), uvec2(0u, 1u), uvec2(1u), uvec2(1u, 0u));

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

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

layout(location = 4) flat in uint vs_out_flags_color_id;
layout(location = 0) in vec3 vs_out_color;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 5) flat in float vs_out_intensity;
layout(location = 3) in vec3 vs_out_object_center_ws;
layout(location = 2) in vec3 vs_out_frag_position_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;
layout(location = 1) out vec3 entryPointParam_ps_main_emissive;

void main()
{
    uint color_id = vs_out_flags_color_id & 65535u;
    if ((vs_out_flags_color_id & 2147483648u) != 0u)
    {
        if (all(notEqual((uvec2(gl_FragCoord.xy) & uvec2(1u)), _95[frame_counter.index & 3u])))
        {
            demote;
        }
    }
    vec3 _571 = (normalize(vs_out_frag_normal_ws) * 0.5) + vec3(0.5);
    vec3 _679 = sqrt(clamp(vs_out_color, vec3(0.0), vec3(1.0)));
    uint _694 = (uint((clamp(_679.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_679.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_679.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _1019 = uvec2(((uint((clamp(_571.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_571.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_571.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3422552064u, _694);
    _1019.y = _694 | 117440512u;
    vec3 _968;
    do
    {
        if (color_id == 0u)
        {
            _968 = vec3(1.0, 0.800000011920928955078125, 0.100000001490116119384765625);
            break;
        }
        else
        {
            if (color_id == 1u)
            {
                _968 = vec3(0.0, 0.735904157161712646484375, 3.67952060699462890625);
                break;
            }
            else
            {
                if (color_id == 2u)
                {
                    _968 = vec3(0.20513366162776947021484375, 1.02566826343536376953125, 0.20513366162776947021484375);
                    break;
                }
                else
                {
                    if (color_id == 3u)
                    {
                        _968 = vec3(0.85153043270111083984375, 0.56768691539764404296875, 2.8384344577789306640625);
                        break;
                    }
                    else
                    {
                        _968 = vec3(1.82324230670928955078125, 0.546972692012786865234375, 0.182324230670928955078125);
                        break;
                    }
                    break; // unreachable workaround
                }
                break; // unreachable workaround
            }
            break; // unreachable workaround
        }
        break; // unreachable workaround
    } while(false);
    vec4 _817 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    vec3 _821 = _817.xyz / vec3(_817.w);
    vec3 _824 = normalize(vs_out_frag_position_ws - _821);
    vec3 filament_offset = vs_out_object_center_ws - (_821 + (_824 * dot(vs_out_object_center_ws - _821, _824)));
    float _457 = dot(filament_offset, filament_offset);
    vec3 _969;
    if (int((vs_out_flags_color_id & 1073741824u) != 0u) == 1)
    {
        _969 = ((_968 * (1.39999997615814208984375 * vs_out_intensity)) * (3.0 * ((0.800000011920928955078125 * exp2((-50.0) * _457)) + (2.0 * exp2((-200.0) * _457))))) * frame_constants.ev_mult;
    }
    else
    {
        _969 = vec3(0.0);
    }
    entryPointParam_ps_main_gbuffer = _1019;
    entryPointParam_ps_main_emissive = _969;
}

