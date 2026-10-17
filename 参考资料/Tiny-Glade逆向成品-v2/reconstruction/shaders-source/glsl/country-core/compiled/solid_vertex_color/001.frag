#version 460
#extension GL_EXT_demote_to_helper_invocation : require

const uvec2 _87[4] = uvec2[](uvec2(0u), uvec2(0u, 1u), uvec2(1u), uvec2(1u, 0u));

layout(set = 0, binding = 0, std140) uniform MaterialData_natural
{
    uint is_semitransparent;
    uint is_flat_lighting;
} material_data;

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

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

layout(location = 0) in vec3 vs_out_color;
layout(location = 2) in vec3 vs_out_frag_position_ws;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    if (material_data.is_semitransparent != 0u)
    {
        if (all(notEqual((uvec2(gl_FragCoord.xy) & uvec2(1u)), _87[frame_counter.index & 3u])))
        {
            demote;
        }
    }
    vec3 _193 = normalize(vs_out_frag_normal_ws);
    bool _204 = material_data.is_flat_lighting != 0u;
    bool _750;
    if (frame_constants.glade_theme_id == 4u)
    {
        _750 = vs_out_frag_position_ws.y > (-0.100000001490116119384765625);
    }
    else
    {
        _750 = false;
    }
    vec3 _769;
    if (_750)
    {
        _769 = mix(vs_out_color, vec3(0.699999988079071044921875), vec3(smoothstep(0.5, 1.0, clamp(_193.y, 0.0, 1.0))));
    }
    else
    {
        _769 = vs_out_color;
    }
    vec3 _460 = (_193 * 0.5) + vec3(0.5);
    vec3 _568 = sqrt(clamp(_769, vec3(0.0), vec3(1.0)));
    uint _583 = (uint((clamp(_568.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_568.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_568.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _788 = uvec2(((uint((clamp(_460.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_460.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_460.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3422552064u, _583);
    _788.y = _583 | ((((uint(uint(!_204) != 0u) | 2u) | 4u) | (uint(_204) << 6u)) << 24u);
    entryPointParam_ps_main_gbuffer = _788;
}

