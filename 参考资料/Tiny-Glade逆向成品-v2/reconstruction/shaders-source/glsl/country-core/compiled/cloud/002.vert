#version 460

layout(set = 2, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

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

layout(location = 0) out vec2 entryPointParam_vs_main_uv;
layout(location = 1) flat out uint entryPointParam_vs_main_instance_index;
layout(location = 2) out vec3 entryPointParam_vs_main_pos_ws;
layout(location = 3) out vec3 entryPointParam_vs_main_x_axis;
layout(location = 4) out vec3 entryPointParam_vs_main_z_axis;

void main()
{
    uint _62 = uint(gl_VertexIndex - gl_BaseVertex);
    float _65 = float(_62 & 1u);
    uint _72 = (_62 >> uint(1)) & 1u;
    vec2 quad2 = (vec2(_65, float(_72)) - vec2(0.5)) * vec2(1.0, 2.0);
    uint _84 = uint(gl_InstanceIndex);
    uint _87 = (_84 * 12u) + 25u;
    uint _440 = _87 + (_87 << 10u);
    uint _442 = _440 ^ (_440 >> 6u);
    uint _444 = _442 + (_442 << 3u);
    uint _446 = _444 ^ (_444 >> 11u);
    uint _448 = _446 + (_446 << 15u);
    float _119 = float(_84);
    uint _457 = _448 + (_448 << 10u);
    uint _459 = _457 ^ (_457 >> 6u);
    uint _461 = _459 + (_459 << 3u);
    uint _463 = _461 ^ (_461 >> 11u);
    uint _465 = _463 + (_463 << 15u);
    float _471 = uintBitsToFloat((_448 & 8388607u) | 1065353216u) - 1.0;
    uint _480 = _465 + (_465 << 10u);
    uint _482 = _480 ^ (_480 >> 6u);
    uint _484 = _482 + (_482 << 3u);
    uint _486 = _484 ^ (_484 >> 11u);
    uint _488 = _486 + (_486 << 15u);
    uint _503 = _488 + (_488 << 10u);
    uint _505 = _503 ^ (_503 >> 6u);
    uint _507 = _505 + (_505 << 3u);
    uint _509 = _507 ^ (_507 >> 11u);
    float rota = (fract(0.300000011920928955078125 + (_119 * 1.61803400516510009765625)) * 6.283185482025146484375) + ((float(frame_counter.index) * 4.9999998736893758177757263183594e-05) * mix(1.0, 0.070000000298023223876953125, uintBitsToFloat((_465 & 8388607u) | 1065353216u) - 1.0));
    vec2 normal2 = -vec2(cos(rota), sin(rota));
    float _184 = normal2.y;
    float _185 = normal2.x;
    float _186 = -_185;
    vec2 tangent2 = vec2(_184, _186);
    vec3 _188 = vec3(_185, 0.0, _184);
    float _197 = 1.0 - (_119 * 0.01666666753590106964111328125);
    vec3 _210 = (-_188) * (10.0 * mix(400.0, 800.0, _197 * _197));
    bool _593;
    if (frame_constants.glade_theme_id == 2u)
    {
        _593 = true;
    }
    else
    {
        _593 = frame_constants.glade_theme_id == 1u;
    }
    float _595;
    if (_593)
    {
        _595 = -600.0;
    }
    else
    {
        _595 = (frame_constants.glade_theme_id == 3u) ? (-500.0) : (-200.0);
    }
    bool _540 = frame_constants.glade_theme_id == 4u;
    _210.y = _210.y + ((_540 ? (-300.0) : _595) + (2000.0 * (_471 * _471)));
    vec2 _640 = mix(vec2(1400.0, 700.0), vec2(1050.0, 525.0), bvec2(_540));
    int index = int(fract(_119 * 0.25) * 4.0);
    vec2 _602;
    if (index == 1)
    {
        _602 = _640 * 1.2000000476837158203125;
    }
    else
    {
        vec2 _603;
        if (index == 2)
        {
            _603 = _640 * 0.60000002384185791015625;
        }
        else
        {
            vec2 _604;
            if (index == 3)
            {
                _604 = _640 * 1.2000000476837158203125;
            }
            else
            {
                _604 = _640;
            }
            _603 = _604;
        }
        _602 = _603;
    }
    vec3 _337 = _210 + ((vec3(_184, 0.0, _186) * (_602.x * quad2.x)) + (vec3(0.0, 1.0, 0.0) * (_602.y * quad2.y)));
    vec2 _353 = vec2(_65, float(1u - _72));
    vec2 _618;
    vec2 _619;
    if ((uintBitsToFloat(((_509 + (_509 << 15u)) & 8388607u) | 1065353216u) - 1.0) > 0.5)
    {
        vec2 _592 = _353;
        _592.x = 1.0 - _65;
        _619 = -tangent2;
        _618 = _592;
    }
    else
    {
        _619 = tangent2;
        _618 = _353;
    }
    gl_Position = mix(vec4(_337, 1.0) * current_view.world_to_sample, vec4(uintBitsToFloat(0x7fbfffffu /* nan */)), bvec4(_84 > 60u));
    entryPointParam_vs_main_uv = _618;
    entryPointParam_vs_main_instance_index = _84;
    entryPointParam_vs_main_pos_ws = _337;
    entryPointParam_vs_main_x_axis = vec3(_619.x, 0.0, _619.y);
    entryPointParam_vs_main_z_axis = _188;
}

