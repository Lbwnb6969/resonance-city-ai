#version 460

struct SparkleInstanceData_natural
{
    vec3 position;
    float scale;
    float time_offset;
    float speed_mult;
    int color_id;
    float pad1;
};

layout(set = 0, binding = 0, std430) readonly buffer StructuredBuffer
{
    SparkleInstanceData_natural _member0[];
} material_data_instanced_data;

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

layout(location = 0) in vec3 Vertex_Position;
layout(location = 2) in vec3 alt_pos;
layout(location = 1) in vec3 Vertex_Color;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_velocity;

void main()
{
    uint _36 = uint(gl_InstanceIndex);
    float _558 = (1.0 + material_data_instanced_data._member0[_36].speed_mult) * 0.699999988079071044921875;
    float _638 = float(frame_constants.game_time_sec) * _558;
    float _643 = (_638 - 6.283185482025146484375 * trunc(_638 / 6.283185482025146484375)) + (frame_constants.game_time_frac * _558);
    float _564 = fract((_643 * 0.15915493667125701904296875) + material_data_instanced_data._member0[_36].time_offset);
    vec3 _1080 = mix(Vertex_Position, alt_pos, bvec3((material_data_instanced_data._member0[_36].time_offset * material_data_instanced_data._member0[_36].speed_mult) > 0.4000000059604644775390625));
    float _595 = 0.180000007152557373046875 + (material_data_instanced_data._member0[_36].scale * 0.100000001490116119384765625);
    vec3 _622 = ((_1080 * ((1.0 - pow(1.0 - (smoothstep(0.0, 0.60000002384185791015625, _564) * (1.0 - smoothstep(0.60000002384185791015625, 1.0, _564))), 3.0)) * _595)) + material_data_instanced_data._member0[_36].position) + vec3(0.0, (_564 * 1.39999997615814208984375) - 0.5, 0.0);
    vec2 _628 = ((_622.xz + _622.xy) + _622.yz) * 0.60000002384185791015625;
    vec2 _657 = floor(_628 + vec2(dot(_628, vec2(0.3660254180431365966796875))));
    vec2 _661 = (_628 - _657) + vec2(dot(_657, vec2(0.211324870586395263671875)));
    float _662 = _661.x;
    float _663 = _661.y;
    vec2 _1083 = mix(vec2(0.0, 1.0), vec2(1.0, 0.0), bvec2(_662 > _663));
    vec4 _669 = _661.xyxy + vec4(0.211324870586395263671875, 0.211324870586395263671875, -0.57735025882720947265625, -0.57735025882720947265625);
    vec2 _672 = _669.xy - _1083;
    vec4 _1026 = _669;
    _1026.x = _672.x;
    _1026.y = _672.y;
    vec2 _677 = _657 - vec2(289.0) * trunc(_657 / vec2(289.0));
    vec3 _683 = vec3(_677.y) + vec3(0.0, _1083.y, 1.0);
    vec3 _756 = ((_683 * 34.0) + vec3(1.0)) * _683;
    vec3 _691 = ((_756 - vec3(289.0) * trunc(_756 / vec3(289.0))) + vec3(_677.x)) + vec3(0.0, _1083.x, 1.0);
    vec3 _763 = ((_691 * 34.0) + vec3(1.0)) * _691;
    vec3 _707 = max(vec3(0.5) - vec3(dot(_661, _661), dot(_1026.xy, _1026.xy), dot(_1026.zw, _1026.zw)), vec3(0.0));
    vec3 _708 = _707 * _707;
    vec3 _712 = fract((_763 - vec3(289.0) * trunc(_763 / vec3(289.0))) * vec3(0.024390242993831634521484375)) * 2.0;
    vec3 _714 = _712 - vec3(1.0);
    vec3 _717 = abs(_714) - vec3(0.5);
    vec3 _721 = _714 - floor(_712 + vec3(-0.5));
    vec3 _632 = _622 + vec3(dot((_708 * _708) * (vec3(1.792842864990234375) - (((_721 * _721) + (_717 * _717)) * 0.8537347316741943359375)), vec3((_721.x * _662) + (_717.x * _663), (_721.yz * _1026.xz) + (_717.yz * _1026.yw))) * 13.0);
    float _817 = fract(((_643 + ((-frame_constants.delta_time_seconds) * _558)) * 0.15915493667125701904296875) + material_data_instanced_data._member0[_36].time_offset);
    vec3 _875 = ((_1080 * ((1.0 - pow(1.0 - (smoothstep(0.0, 0.60000002384185791015625, _817) * (1.0 - smoothstep(0.60000002384185791015625, 1.0, _817))), 3.0)) * _595)) + material_data_instanced_data._member0[_36].position) + vec3(0.0, (_817 * 1.39999997615814208984375) - 0.5, 0.0);
    vec2 _881 = ((_875.xz + _875.xy) + _875.yz) * 0.60000002384185791015625;
    vec2 _910 = floor(_881 + vec2(dot(_881, vec2(0.3660254180431365966796875))));
    vec2 _914 = (_881 - _910) + vec2(dot(_910, vec2(0.211324870586395263671875)));
    vec2 _1087 = mix(vec2(0.0, 1.0), vec2(1.0, 0.0), bvec2(_914.x > _914.y));
    vec4 _922 = _914.xyxy + vec4(0.211324870586395263671875, 0.211324870586395263671875, -0.57735025882720947265625, -0.57735025882720947265625);
    vec2 _925 = _922.xy - _1087;
    vec4 _1036 = _922;
    _1036.x = _925.x;
    _1036.y = _925.y;
    vec2 _930 = _910 - vec2(289.0) * trunc(_910 / vec2(289.0));
    vec3 _936 = vec3(_930.y) + vec3(0.0, _1087.y, 1.0);
    vec3 _1009 = ((_936 * 34.0) + vec3(1.0)) * _936;
    vec3 _944 = ((_1009 - vec3(289.0) * trunc(_1009 / vec3(289.0))) + vec3(_930.x)) + vec3(0.0, _1087.x, 1.0);
    vec3 _1016 = ((_944 * 34.0) + vec3(1.0)) * _944;
    vec3 _960 = max(vec3(0.5) - vec3(dot(_914, _914), dot(_1036.xy, _1036.xy), dot(_1036.zw, _1036.zw)), vec3(0.0));
    vec3 _961 = _960 * _960;
    vec3 _965 = fract((_1016 - vec3(289.0) * trunc(_1016 / vec3(289.0))) * vec3(0.024390242993831634521484375)) * 2.0;
    vec3 _967 = _965 - vec3(1.0);
    vec3 _970 = abs(_967) - vec3(0.5);
    vec3 _974 = _967 - floor(_965 + vec3(-0.5));
    vec3 _1056;
    if (material_data_instanced_data._member0[_36].color_id == 0)
    {
        _1056 = Vertex_Color;
    }
    else
    {
        vec3 _1057;
        if (material_data_instanced_data._member0[_36].color_id == 1)
        {
            _1057 = vec3(0.0, 0.75, 10.0);
        }
        else
        {
            vec3 _1058;
            if (material_data_instanced_data._member0[_36].color_id == 2)
            {
                _1058 = vec3(2.0, 1.0, 8.0);
            }
            else
            {
                vec3 _1059;
                if (material_data_instanced_data._member0[_36].color_id == 3)
                {
                    _1059 = vec3(8.0, 3.0, 0.0);
                }
                else
                {
                    _1059 = mix(vec3(0.0), vec3(2.0, 9.0, 2.0), bvec3(material_data_instanced_data._member0[_36].color_id == 4));
                }
                _1058 = _1059;
            }
            _1057 = _1058;
        }
        _1056 = _1057;
    }
    gl_Position = vec4(_632, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = _1056;
    entryPointParam_vs_main_velocity = _632 - (_875 + vec3(dot((_961 * _961) * (vec3(1.792842864990234375) - (((_974 * _974) + (_970 * _970)) * 0.8537347316741943359375)), vec3((_974.x * _914.x) + (_970.x * _914.y), (_974.yz * _1036.xz) + (_970.yz * _1036.yw))) * 13.0));
}

