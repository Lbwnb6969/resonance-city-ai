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

layout(set = 5, binding = 0, std140) uniform ColorLibraryData_natural
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

layout(set = 0, binding = 0) uniform texture2D material_data_moon_tex;
layout(set = 1, binding = 0) uniform sampler samplers_lnc;

layout(location = 2) in vec3 vs_out_frag_ws_position;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec4 _576 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    vec3 _42 = normalize((_576.xyz / vec3(_576.w)) - vs_out_frag_ws_position);
    float _586 = acos(-dot(frame_constants.dir_to_sun, _42));
    float _593 = max(0.0, _586 - 0.0261799395084381103515625);
    float _595 = 0.5 + (25.0 * _593);
    float _601 = 1.0 + (5.0 * _593);
    float _619 = mix(2.5, 1.0, smoothstep(0.5299999713897705078125, 0.839999973773956298828125, frame_constants.time_of_day));
    vec3 _622 = normalize(frame_constants.dir_to_moon * vec3(_619, 1.0, _619));
    vec3 _940;
    do
    {
        vec3 _628 = _42 - _622;
        vec3 _630 = normalize(cross(_628, vec3(0.0, 1.0, 0.0)));
        vec2 _639 = ((vec2(dot(_622, _630), dot(_622, normalize(cross(_630, _628)))) * 35.0) * 0.5) + vec2(0.5);
        if (all(equal(_639, clamp(_639, vec2(0.0), vec2(1.0)))))
        {
            vec4 _648 = textureLod(sampler2D(material_data_moon_tex, samplers_lnc), _639, 0.0);
            _940 = (_648.xyz * _648.w) * 2.0;
            break;
        }
        else
        {
            _940 = vec3(0.0);
            break;
        }
        break; // unreachable workaround
    } while(false);
    float _670 = smoothstep(0.3499999940395355224609375, 0.64999997615814208984375, frame_constants.time_of_day) - smoothstep(0.800000011920928955078125, 0.949999988079071044921875, frame_constants.time_of_day);
    vec3 color = (((((vec3(1.0, 0.699999988079071044921875, 0.20000000298023223876953125) * (smoothstep(0.0261799395084381103515625, 0.02443460933864116668701171875, _586) * 30.0)) + (vec3(1.0, 0.64999997615814208984375, 0.20000000298023223876953125) * (5.0 / (_595 * _595)))) + (vec3(1.0, 0.75, 0.60000002384185791015625) * (0.800000011920928955078125 / (_601 * _601)))) + (_940 * ((_670 * _670) * _670))) * frame_constants.ev_mult) + ((mix(frame_constants.sky_low_color.xyz * 1.5, frame_constants.sky_high_color.xyz, vec3(pow(clamp(1.0 - pow(1.0 - clamp((-_42).y + 0.20000000298023223876953125, 0.0, 1.0), 14.0), 0.0, 1.0), 0.64999997615814208984375))) * 1.0) * (1.0 - ((smoothstep(0.4830000102519989013671875, 0.50499999523162841796875, frame_constants.time_of_day) - smoothstep(0.839999973773956298828125, 0.910000026226043701171875, frame_constants.time_of_day)) * 0.75)));
    vec3 _476 = mix(vec3(dot(color, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875))), color, vec3(1.25));
    uvec2 _483 = uvec2(gl_FragCoord.xy);
    float _855 = (fract(52.98291778564453125 * fract((0.067110560834407806396484375 * float(_483.x)) + (0.005837149918079376220703125 * float(_483.y)))) * 2.0) - 1.0;
    entryPointParam_ps_main_color = vec4(_476 + (clamp(_476 * 512.0, vec3(0.0), vec3(1.0)) * ((max(-1.0, _855 * inversesqrt(1.1754943508222875079687365372222e-38 + abs(_855))) - float(int(sign(_855)))) * 0.0039215688593685626983642578125)), 1.0);
}

