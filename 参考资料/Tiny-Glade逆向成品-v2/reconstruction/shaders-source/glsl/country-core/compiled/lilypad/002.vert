#version 460

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct Reed_natural
{
    Affine3Packed_natural xform;
};

float _1090;

layout(set = 0, binding = 0, std430) readonly buffer StructuredBuffer
{
    Reed_natural _member0[];
} material_data_instance_buffer;

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

layout(location = 0) in vec3 Vertex_Position;
layout(location = 2) in vec3 Vertex_Color;
layout(location = 0) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_color;
layout(location = 3) out vec2 entryPointParam_vs_main_uv;
layout(location = 4) out float entryPointParam_vs_main_seed;

void main()
{
    uint _28 = uint(gl_InstanceIndex);
    mat3x4 _561 = transpose(mat4x3(vec3(material_data_instance_buffer._member0[_28].xform.data.data[0], material_data_instance_buffer._member0[_28].xform.data.data[1], material_data_instance_buffer._member0[_28].xform.data.data[2]), vec3(material_data_instance_buffer._member0[_28].xform.data.data[3], material_data_instance_buffer._member0[_28].xform.data.data[4], material_data_instance_buffer._member0[_28].xform.data.data[5]), vec3(material_data_instance_buffer._member0[_28].xform.data.data[6], material_data_instance_buffer._member0[_28].xform.data.data[7], material_data_instance_buffer._member0[_28].xform.data.data[8]), vec3(material_data_instance_buffer._member0[_28].xform.data.data[9], material_data_instance_buffer._member0[_28].xform.data.data[10], material_data_instance_buffer._member0[_28].xform.data.data[11])));
    vec3 _524 = vec4(Vertex_Position, 1.0) * _561;
    vec3 _569 = vec4(vec3(0.0), 1.0) * _561;
    uint _134 = uint(((((_569.x * 20.0) - (_569.z * 20.0)) + 2000.0) + Vertex_Position.x) + Vertex_Position.z);
    uint _613 = _134 + (_134 << 10u);
    uint _615 = _613 ^ (_613 >> 6u);
    uint _617 = _615 + (_615 << 3u);
    uint _619 = _617 ^ (_617 >> 11u);
    float _627 = uintBitsToFloat(((_619 + (_619 << 15u)) & 8388607u) | 1065353216u) - 1.0;
    vec3 _1084 = _524;
    _1084.y = _524.y + mix(-0.02500000037252902984619140625, 0.0, _627);
    bool _633 = frame_constants.glade_theme_id == 4u;
    float _206 = Vertex_Position.y + 0.5;
    vec2 _640 = (_569.xz * 0.100000001490116119384765625) + (vec2(float(frame_constants.game_time_sec) + frame_constants.game_time_frac, 0.0) * 1.2000000476837158203125);
    ivec2 _677 = ivec2(floor(_640));
    vec2 _678 = fract(_640);
    uvec2 _679 = uvec2(_677);
    uint _729 = _679.y;
    uint _735 = _729 + (_729 << 10u);
    uint _737 = _735 ^ (_735 >> 6u);
    uint _739 = _737 + (_737 << 3u);
    uint _741 = _739 ^ (_739 >> 11u);
    uint _749 = (((_679.x * 1664525u) + (_741 + (_741 << 15u))) + 1013904223u) * 1664525u;
    uint _751 = _749 ^ (_749 >> 11u);
    uint _754 = _751 ^ ((_751 << 7u) & 2636928640u);
    uint _757 = _754 ^ ((_754 << 15u) & 4022730752u);
    uint _759 = _757 ^ (_757 >> 18u);
    float _1092;
    _1092 = _1090;
    uint _776;
    uint _795;
    float _801;
    uint _1091 = 0u;
    uint _1118 = _759;
    for (;;)
    {
        if (!(_1091 < 1u))
        {
            break;
        }
        uint _787 = _1118 + (_1118 << 10u);
        uint _789 = _787 ^ (_787 >> 6u);
        uint _791 = _789 + (_789 << 3u);
        uint _793 = _791 ^ (_791 >> 11u);
        _795 = _793 + (_793 << 15u);
        _801 = uintBitsToFloat((_1118 & 8388607u) | 1065353216u) - 1.0;
        _776 = _1091 + 1u;
        _1118 = _795;
        _1092 = _801;
        _1091 = _776;
        continue;
    }
    uvec2 _687 = uvec2(_677 + ivec2(1, 0));
    uint _805 = _687.y;
    uint _811 = _805 + (_805 << 10u);
    uint _813 = _811 ^ (_811 >> 6u);
    uint _815 = _813 + (_813 << 3u);
    uint _817 = _815 ^ (_815 >> 11u);
    uint _825 = (((_687.x * 1664525u) + (_817 + (_817 << 15u))) + 1013904223u) * 1664525u;
    uint _827 = _825 ^ (_825 >> 11u);
    uint _830 = _827 ^ ((_827 << 7u) & 2636928640u);
    uint _833 = _830 ^ ((_830 << 15u) & 4022730752u);
    uint _835 = _833 ^ (_833 >> 18u);
    float _1096;
    _1096 = _1090;
    uint _852;
    uint _871;
    float _877;
    uint _1095 = 0u;
    uint _1117 = _835;
    for (;;)
    {
        if (!(_1095 < 1u))
        {
            break;
        }
        uint _863 = _1117 + (_1117 << 10u);
        uint _865 = _863 ^ (_863 >> 6u);
        uint _867 = _865 + (_865 << 3u);
        uint _869 = _867 ^ (_867 >> 11u);
        _871 = _869 + (_869 << 15u);
        _877 = uintBitsToFloat((_1117 & 8388607u) | 1065353216u) - 1.0;
        _852 = _1095 + 1u;
        _1117 = _871;
        _1096 = _877;
        _1095 = _852;
        continue;
    }
    uvec2 _694 = uvec2(_677 + ivec2(0, 1));
    uint _881 = _694.y;
    uint _887 = _881 + (_881 << 10u);
    uint _889 = _887 ^ (_887 >> 6u);
    uint _891 = _889 + (_889 << 3u);
    uint _893 = _891 ^ (_891 >> 11u);
    uint _901 = (((_694.x * 1664525u) + (_893 + (_893 << 15u))) + 1013904223u) * 1664525u;
    uint _903 = _901 ^ (_901 >> 11u);
    uint _906 = _903 ^ ((_903 << 7u) & 2636928640u);
    uint _909 = _906 ^ ((_906 << 15u) & 4022730752u);
    uint _911 = _909 ^ (_909 >> 18u);
    float _1101;
    _1101 = _1090;
    uint _928;
    uint _947;
    float _953;
    uint _1100 = 0u;
    uint _1116 = _911;
    for (;;)
    {
        if (!(_1100 < 1u))
        {
            break;
        }
        uint _939 = _1116 + (_1116 << 10u);
        uint _941 = _939 ^ (_939 >> 6u);
        uint _943 = _941 + (_941 << 3u);
        uint _945 = _943 ^ (_943 >> 11u);
        _947 = _945 + (_945 << 15u);
        _953 = uintBitsToFloat((_1116 & 8388607u) | 1065353216u) - 1.0;
        _928 = _1100 + 1u;
        _1116 = _947;
        _1101 = _953;
        _1100 = _928;
        continue;
    }
    uvec2 _702 = uvec2(_677 + ivec2(1));
    uint _957 = _702.y;
    uint _963 = _957 + (_957 << 10u);
    uint _965 = _963 ^ (_963 >> 6u);
    uint _967 = _965 + (_965 << 3u);
    uint _969 = _967 ^ (_967 >> 11u);
    uint _977 = (((_702.x * 1664525u) + (_969 + (_969 << 15u))) + 1013904223u) * 1664525u;
    uint _979 = _977 ^ (_977 >> 11u);
    uint _982 = _979 ^ ((_979 << 7u) & 2636928640u);
    uint _985 = _982 ^ ((_982 << 15u) & 4022730752u);
    uint _987 = _985 ^ (_985 >> 18u);
    float _1107;
    _1107 = _1090;
    uint _1004;
    uint _1023;
    float _1029;
    uint _1106 = 0u;
    uint _1115 = _987;
    for (;;)
    {
        if (!(_1106 < 1u))
        {
            break;
        }
        uint _1015 = _1115 + (_1115 << 10u);
        uint _1017 = _1015 ^ (_1015 >> 6u);
        uint _1019 = _1017 + (_1017 << 3u);
        uint _1021 = _1019 ^ (_1019 >> 11u);
        _1023 = _1021 + (_1021 << 15u);
        _1029 = uintBitsToFloat((_1115 & 8388607u) | 1065353216u) - 1.0;
        _1004 = _1106 + 1u;
        _1115 = _1023;
        _1107 = _1029;
        _1106 = _1004;
        continue;
    }
    vec2 _1035 = (_678 * _678) * (vec2(3.0) - (vec2(2.0) * _678));
    float _710 = _1035.x;
    float _711 = 1.0 - _710;
    float _713 = _1035.y;
    uint _649 = uint(int(_627));
    uint _1048 = _649 + (_649 << 10u);
    uint _1050 = _1048 ^ (_1048 >> 6u);
    uint _1052 = _1050 + (_1050 << 3u);
    uint _1054 = _1052 ^ (_1052 >> 11u);
    _1084.x = _524.x - (((((_206 * _206) * (sin((((((1.0 - _713) * ((_1092 * _711) + (_1096 * _710))) + ((_1101 * _711) * _713)) + ((_1107 * _710) * _713)) * 3.1400001049041748046875) - 1.57000005245208740234375) + 0.300000011920928955078125)) * 0.699999988079071044921875) * (_633 ? 0.02500000037252902984619140625 : 0.0500000007450580596923828125)) * mix(0.699999988079071044921875, 1.0, uintBitsToFloat(((_1054 + (_1054 << 15u)) & 8388607u) | 1065353216u) - 1.0));
    vec3 _463 = vec3(mix(1.2000000476837158203125, 2.0, _627));
    vec3 _466 = pow(Vertex_Color, _463);
    vec3 _1113;
    if (_633)
    {
        vec3 _1114;
        if (Vertex_Color.y > 0.0500000007450580596923828125)
        {
            _1114 = pow(vec3(0.1500000059604644775390625, 0.0900000035762786865234375, 0.0300000011920928955078125), _463);
        }
        else
        {
            _1114 = _466;
        }
        _1113 = _1114;
    }
    else
    {
        _1113 = _466;
    }
    gl_Position = vec4(_1084, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_frag_normal_ws = vec3(0.0, 1.0, 0.0);
    entryPointParam_vs_main_frag_position_ws = _1084;
    entryPointParam_vs_main_color = _1113;
    entryPointParam_vs_main_uv = (Vertex_Position.xz * 1.5) + vec2(0.5);
    entryPointParam_vs_main_seed = _627;
}

