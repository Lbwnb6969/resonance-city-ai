#version 460

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct BushXform_natural
{
    Affine3Packed_natural transform;
};

float _1137;

layout(set = 18, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 0, std430) readonly buffer material_data_nani_instance_data
{
    BushXform_natural _member0[];
} material_data_nani_instance_data_1;

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

layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 6, binding = 0) uniform texture2D object_push_grass_object_push;

layout(location = 0) in vec3 Vertex_Position;
layout(location = 1) in vec2 Vertex_UV;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 3) in int bush_part_id;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 3) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 4) flat out int entryPointParam_vs_main_bush_part_id;
layout(location = 5) out float entryPointParam_vs_main_local_y;

void main()
{
    uint _23 = uint(gl_InstanceIndex);
    mat3x4 _580 = transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_23]].transform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_23]].transform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_23]].transform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_23]].transform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_23]].transform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_23]].transform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_23]].transform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_23]].transform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_23]].transform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_23]].transform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_23]].transform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_23]].transform.data.data[11])));
    vec3 _543 = vec4(Vertex_Position, 1.0) * _580;
    vec2 _116 = Vertex_UV;
    _116.y = 1.0 - _116.y;
    vec2 _126 = (vec4(vec3(0.0), 1.0) * _580).xz;
    float _129 = Vertex_Position.y * 0.5;
    vec2 _628 = (_126 * 0.100000001490116119384765625) + (vec2(float(frame_constants.game_time_sec) + frame_constants.game_time_frac, 0.0) * 1.2000000476837158203125);
    ivec2 _665 = ivec2(floor(_628));
    vec2 _666 = fract(_628);
    uvec2 _667 = uvec2(_665);
    uint _717 = _667.y;
    uint _723 = _717 + (_717 << 10u);
    uint _725 = _723 ^ (_723 >> 6u);
    uint _727 = _725 + (_725 << 3u);
    uint _729 = _727 ^ (_727 >> 11u);
    uint _737 = (((_667.x * 1664525u) + (_729 + (_729 << 15u))) + 1013904223u) * 1664525u;
    uint _739 = _737 ^ (_737 >> 11u);
    uint _742 = _739 ^ ((_739 << 7u) & 2636928640u);
    uint _745 = _742 ^ ((_742 << 15u) & 4022730752u);
    uint _747 = _745 ^ (_745 >> 18u);
    float _1139;
    _1139 = _1137;
    uint _764;
    uint _783;
    float _789;
    uint _1138 = 0u;
    uint _1160 = _747;
    for (;;)
    {
        if (!(_1138 < 1u))
        {
            break;
        }
        uint _775 = _1160 + (_1160 << 10u);
        uint _777 = _775 ^ (_775 >> 6u);
        uint _779 = _777 + (_777 << 3u);
        uint _781 = _779 ^ (_779 >> 11u);
        _783 = _781 + (_781 << 15u);
        _789 = uintBitsToFloat((_1160 & 8388607u) | 1065353216u) - 1.0;
        _764 = _1138 + 1u;
        _1160 = _783;
        _1139 = _789;
        _1138 = _764;
        continue;
    }
    uvec2 _675 = uvec2(_665 + ivec2(1, 0));
    uint _793 = _675.y;
    uint _799 = _793 + (_793 << 10u);
    uint _801 = _799 ^ (_799 >> 6u);
    uint _803 = _801 + (_801 << 3u);
    uint _805 = _803 ^ (_803 >> 11u);
    uint _813 = (((_675.x * 1664525u) + (_805 + (_805 << 15u))) + 1013904223u) * 1664525u;
    uint _815 = _813 ^ (_813 >> 11u);
    uint _818 = _815 ^ ((_815 << 7u) & 2636928640u);
    uint _821 = _818 ^ ((_818 << 15u) & 4022730752u);
    uint _823 = _821 ^ (_821 >> 18u);
    float _1142;
    _1142 = _1137;
    uint _840;
    uint _859;
    float _865;
    uint _1141 = 0u;
    uint _1159 = _823;
    for (;;)
    {
        if (!(_1141 < 1u))
        {
            break;
        }
        uint _851 = _1159 + (_1159 << 10u);
        uint _853 = _851 ^ (_851 >> 6u);
        uint _855 = _853 + (_853 << 3u);
        uint _857 = _855 ^ (_855 >> 11u);
        _859 = _857 + (_857 << 15u);
        _865 = uintBitsToFloat((_1159 & 8388607u) | 1065353216u) - 1.0;
        _840 = _1141 + 1u;
        _1159 = _859;
        _1142 = _865;
        _1141 = _840;
        continue;
    }
    uvec2 _682 = uvec2(_665 + ivec2(0, 1));
    uint _869 = _682.y;
    uint _875 = _869 + (_869 << 10u);
    uint _877 = _875 ^ (_875 >> 6u);
    uint _879 = _877 + (_877 << 3u);
    uint _881 = _879 ^ (_879 >> 11u);
    uint _889 = (((_682.x * 1664525u) + (_881 + (_881 << 15u))) + 1013904223u) * 1664525u;
    uint _891 = _889 ^ (_889 >> 11u);
    uint _894 = _891 ^ ((_891 << 7u) & 2636928640u);
    uint _897 = _894 ^ ((_894 << 15u) & 4022730752u);
    uint _899 = _897 ^ (_897 >> 18u);
    float _1146;
    _1146 = _1137;
    uint _916;
    uint _935;
    float _941;
    uint _1145 = 0u;
    uint _1158 = _899;
    for (;;)
    {
        if (!(_1145 < 1u))
        {
            break;
        }
        uint _927 = _1158 + (_1158 << 10u);
        uint _929 = _927 ^ (_927 >> 6u);
        uint _931 = _929 + (_929 << 3u);
        uint _933 = _931 ^ (_931 >> 11u);
        _935 = _933 + (_933 << 15u);
        _941 = uintBitsToFloat((_1158 & 8388607u) | 1065353216u) - 1.0;
        _916 = _1145 + 1u;
        _1158 = _935;
        _1146 = _941;
        _1145 = _916;
        continue;
    }
    uvec2 _690 = uvec2(_665 + ivec2(1));
    uint _945 = _690.y;
    uint _951 = _945 + (_945 << 10u);
    uint _953 = _951 ^ (_951 >> 6u);
    uint _955 = _953 + (_953 << 3u);
    uint _957 = _955 ^ (_955 >> 11u);
    uint _965 = (((_690.x * 1664525u) + (_957 + (_957 << 15u))) + 1013904223u) * 1664525u;
    uint _967 = _965 ^ (_965 >> 11u);
    uint _970 = _967 ^ ((_967 << 7u) & 2636928640u);
    uint _973 = _970 ^ ((_970 << 15u) & 4022730752u);
    uint _975 = _973 ^ (_973 >> 18u);
    float _1151;
    _1151 = _1137;
    uint _992;
    uint _1011;
    float _1017;
    uint _1150 = 0u;
    uint _1157 = _975;
    for (;;)
    {
        if (!(_1150 < 1u))
        {
            break;
        }
        uint _1003 = _1157 + (_1157 << 10u);
        uint _1005 = _1003 ^ (_1003 >> 6u);
        uint _1007 = _1005 + (_1005 << 3u);
        uint _1009 = _1007 ^ (_1007 >> 11u);
        _1011 = _1009 + (_1009 << 15u);
        _1017 = uintBitsToFloat((_1157 & 8388607u) | 1065353216u) - 1.0;
        _992 = _1150 + 1u;
        _1157 = _1011;
        _1151 = _1017;
        _1150 = _992;
        continue;
    }
    vec2 _1023 = (_666 * _666) * (vec2(3.0) - (vec2(2.0) * _666));
    float _698 = _1023.x;
    float _699 = 1.0 - _698;
    float _701 = _1023.y;
    _543.x = _543.x - (((_129 * _129) * (sin((((((1.0 - _701) * ((_1139 * _699) + (_1142 * _698))) + ((_1146 * _699) * _701)) + ((_1151 * _698) * _701)) * 3.1400001049041748046875) - 1.57000005245208740234375) + 0.300000011920928955078125)) * 0.073499999940395355224609375);
    vec4 _1064 = textureLod(sampler2D(object_push_grass_object_push, samplers_lnc_iso), (_126 * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0);
    float _447 = clamp(_1064.z, 0.0, 1.0);
    vec3 _1156;
    if (_447 > 0.0)
    {
        vec2 _459 = _543.xz + ((_1064.xy * _447) * smoothstep(0.0, 1.0, _129));
        vec3 _1134 = _543;
        _1134.x = _459.x;
        _1134.z = _459.y;
        _1156 = _1134;
    }
    else
    {
        _1156 = _543;
    }
    gl_Position = vec4(_1156, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = vec3(0.5);
    entryPointParam_vs_main_frag_normal_ws = vec4(Vertex_Normal, 0.0) * _580;
    entryPointParam_vs_main_frag_position_ws = _1156.xyz;
    entryPointParam_vs_main_frag_uv = _116;
    entryPointParam_vs_main_bush_part_id = bush_part_id;
    entryPointParam_vs_main_local_y = Vertex_Position.y;
}

