#version 460

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

layout(set = 0, binding = 0, std140) uniform MaterialData_natural
{
    float snow_strength;
} material_data;

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

layout(set = 0, binding = 1, std430) readonly buffer StructuredBuffer
{
    DofAutofocus_natural _member0[];
} material_data_autofocus_buf;

layout(location = 0) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 1) out vec3 entryPointParam_vs_main_pos_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_velocity_ws;
layout(location = 3) flat out uint entryPointParam_vs_main_instance_index;

void main()
{
    do
    {
        if (frame_constants.is_topdown_mode == 1u)
        {
            gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
            break;
        }
        uint _76 = uint(gl_VertexIndex - gl_BaseVertex);
        vec2 quad2 = vec2(float(_76 & 1u), float((_76 >> uint(1)) & 1u)) - vec2(0.5);
        uint _93 = uint(gl_InstanceIndex);
        int id = int(_93);
        uint _97 = uint(id ^ 5678);
        uint _745 = _97 + (_97 << 10u);
        uint _747 = _745 ^ (_745 >> 6u);
        uint _749 = _747 + (_747 << 3u);
        uint _751 = _749 ^ (_749 >> 11u);
        float _137 = mix(0.300000011920928955078125, 1.2000000476837158203125, uintBitsToFloat(((_751 + (_751 << 15u)) & 8388607u) | 1065353216u) - 1.0);
        float WIDTH = 0.1599999964237213134765625 * material_data.snow_strength;
        uint _153 = uint(id ^ 23475);
        uint _767 = _153 + (_153 << 10u);
        uint _769 = _767 ^ (_767 >> 6u);
        uint _771 = _769 + (_769 << 3u);
        uint _773 = _771 ^ (_771 >> 11u);
        uint _157 = uint(id ^ 35934);
        uint _789 = _157 + (_157 << 10u);
        uint _791 = _789 ^ (_789 >> 6u);
        uint _793 = _791 + (_791 << 3u);
        uint _795 = _793 ^ (_793 >> 11u);
        uint _161 = uint(id ^ 45845);
        uint _811 = _161 + (_161 << 10u);
        uint _813 = _811 ^ (_811 >> 6u);
        uint _815 = _813 + (_813 << 3u);
        uint _817 = _815 ^ (_815 >> 11u);
        vec3 _164 = vec3(uintBitsToFloat(((_773 + (_773 << 15u)) & 8388607u) | 1065353216u) - 1.0, uintBitsToFloat(((_795 + (_795 << 15u)) & 8388607u) | 1065353216u) - 1.0, uintBitsToFloat(((_817 + (_817 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 100.0;
        float _184 = ((float(frame_constants.game_time_sec) + frame_constants.game_time_frac) * 2.0) * _137;
        vec3 _1230 = _164;
        _1230.y = _164.y - _184;
        _1230.x = _164.x - _184;
        vec3 _840 = normalize((vec4(0.0, 0.0, -1.0, 0.0) * current_view.view_to_world).xyz);
        vec4 _928 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
        vec3 _932 = _928.xyz / vec3(_928.w);
        float _880 = 5.0 / (material_data_autofocus_buf._member0[frame_constants.camera_idx].focus_scale * current_view.view_to_clip[1].y);
        bool _883 = material_data_autofocus_buf._member0[frame_constants.camera_idx].use_tilt_shift != 0u;
        float _1237;
        if (_883)
        {
            _1237 = _880 * max(0.00999999977648258209228515625, length(_840.xz));
        }
        else
        {
            _1237 = _880;
        }
        float _893 = 1.0 / material_data_autofocus_buf._member0[frame_constants.camera_idx].focus0;
        float _896 = 1.0 / material_data_autofocus_buf._member0[frame_constants.camera_idx].focus1;
        float _899 = max(0.001000000047497451305389404296875, max(_893, _896)) + 9.9999997473787516355514526367188e-06;
        float _902 = max(0.001000000047497451305389404296875, min(_893, _896)) - 9.9999997473787516355514526367188e-06;
        float _903 = _899 - _902;
        float _905 = min(0.00999999977648258209228515625, 0.0500000007450580596923828125 * _903);
        float _909 = 1.0 / ((_1237 + _899) - _905);
        float _1238;
        if (_883)
        {
            float _915 = _840.x;
            float _917 = _840.z;
            _1238 = (_909 + (_932.y * _840.y)) / ((_915 * _915) + (_917 * _917));
        }
        else
        {
            _1238 = _909;
        }
        vec3 bbx_center = _932 + (_840 * (_1238 + 25.0));
        vec3 min_val = bbx_center - vec3(50.0);
        vec3 _958 = (bbx_center + vec3(50.0)) - min_val;
        vec3 _962 = (fract((_1230 - min_val) / _958) * _958) + min_val;
        float _1241;
        do
        {
            if (frame_constants.is_photomode != 0u)
            {
                _1241 = 0.0;
                break;
            }
            else
            {
                _1241 = 15.0;
                break;
            }
            break; // unreachable workaround
        } while(false);
        if (distance(_962, _932) < _1241)
        {
            gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
            break;
        }
        vec3 _1236 = _962;
        _1236.y = _962.y * float(_883 ? 0 : 1);
        float _1021 = 1.0 / max(1.0000000133514319600180897396058e-10, dot(_1236 - _932, _840));
        float _1245;
        if (_1021 > _899)
        {
            _1245 = (_1021 - _899) + _905;
        }
        else
        {
            float _1246;
            if (_1021 < _902)
            {
                _1246 = (_1021 - _902) - _905;
            }
            else
            {
                _1246 = (-_905) + (((2.0 * _905) * (_1021 - _902)) / _903);
            }
            _1245 = _1246;
        }
        float _1247;
        if (_883)
        {
            _1247 = _1245 / max(0.00999999977648258209228515625, length(_840.xz));
        }
        else
        {
            _1247 = _1245;
        }
        if (abs(((-_1247) * material_data_autofocus_buf._member0[frame_constants.camera_idx].focus_scale) * current_view.view_to_clip[1].y) > 20.0)
        {
            gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
            break;
        }
        vec3 pos_ws = (((normalize((vec4(0.0, 1.0, 0.0, 0.0) * current_view.view_to_world).xyz) * quad2.y) * WIDTH) + ((normalize((vec4(1.0, 0.0, 0.0, 0.0) * current_view.view_to_world).xyz) * quad2.x) * WIDTH)) + _962;
        gl_Position = vec4(pos_ws, 1.0) * current_view.world_to_sample;
        entryPointParam_vs_main_frag_uv = quad2.xy;
        entryPointParam_vs_main_pos_ws = pos_ws;
        entryPointParam_vs_main_velocity_ws = (vec3(-2.0, -2.0, -0.0) * _137) * frame_constants.delta_time_seconds;
        entryPointParam_vs_main_instance_index = _93;
        break;
    } while(false);
}

