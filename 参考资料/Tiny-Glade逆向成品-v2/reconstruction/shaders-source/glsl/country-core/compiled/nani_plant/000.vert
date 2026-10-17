#version 460

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct InstanceData_natural
{
    Affine3Packed_natural xform;
};

float _1147;

layout(set = 6, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 0, std430) readonly buffer material_data_nani_instance_data
{
    InstanceData_natural _member0[];
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
layout(set = 7, binding = 0) uniform texture2D object_push_grass_object_push;

layout(location = 0) in vec3 Vertex_Position;
layout(location = 2) in vec3 Vertex_Color;
layout(location = 1) in vec3 Vertex_Normal;
layout(location = 0) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_color;

void main()
{
    uint _20 = uint(gl_InstanceIndex);
    mat3x4 _571 = transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_20]].xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_20]].xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_20]].xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_20]].xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_20]].xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_20]].xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_20]].xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_20]].xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_20]].xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_20]].xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_20]].xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_20]].xform.data.data[11])));
    vec3 _534 = vec4(Vertex_Position, 1.0) * _571;
    vec3 _576 = vec4(vec3(0.0), 1.0) * _571;
    uint _127 = uint(((((_576.x * 20.0) - (_576.z * 20.0)) + 2000.0) + Vertex_Position.x) + Vertex_Position.z);
    uint _620 = _127 + (_127 << 10u);
    uint _622 = _620 ^ (_620 >> 6u);
    uint _624 = _622 + (_622 << 3u);
    uint _626 = _624 ^ (_624 >> 11u);
    vec2 _167 = _576.xz;
    vec4 _648 = textureLod(sampler2D(object_push_grass_object_push, samplers_lnc_iso), (_167 * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0);
    vec3 _1169;
    if (clamp(_648.z, 0.0, 1.0) > 0.0)
    {
        vec2 _227 = _534.xz + (_648.xy * (pow(clamp(mix(0.100000001490116119384765625, 1.0, Vertex_Position.y * Vertex_Position.y), 0.0, 1.0), 0.5) * 0.25));
        vec3 _1140 = _534;
        _1140.x = _227.x;
        _1140.z = _227.y;
        _1169 = _1140;
    }
    else
    {
        _1169 = _534;
    }
    float _238 = Vertex_Position.y + 0.5;
    vec2 _659 = (_167 * 0.100000001490116119384765625) + (vec2(float(frame_constants.game_time_sec) + frame_constants.game_time_frac, 0.0) * 1.2000000476837158203125);
    ivec2 _696 = ivec2(floor(_659));
    vec2 _697 = fract(_659);
    uvec2 _698 = uvec2(_696);
    uint _748 = _698.y;
    uint _754 = _748 + (_748 << 10u);
    uint _756 = _754 ^ (_754 >> 6u);
    uint _758 = _756 + (_756 << 3u);
    uint _760 = _758 ^ (_758 >> 11u);
    uint _768 = (((_698.x * 1664525u) + (_760 + (_760 << 15u))) + 1013904223u) * 1664525u;
    uint _770 = _768 ^ (_768 >> 11u);
    uint _773 = _770 ^ ((_770 << 7u) & 2636928640u);
    uint _776 = _773 ^ ((_773 << 15u) & 4022730752u);
    uint _778 = _776 ^ (_776 >> 18u);
    float _1149;
    _1149 = _1147;
    uint _795;
    uint _814;
    float _820;
    uint _1148 = 0u;
    uint _1173 = _778;
    for (;;)
    {
        if (!(_1148 < 1u))
        {
            break;
        }
        uint _806 = _1173 + (_1173 << 10u);
        uint _808 = _806 ^ (_806 >> 6u);
        uint _810 = _808 + (_808 << 3u);
        uint _812 = _810 ^ (_810 >> 11u);
        _814 = _812 + (_812 << 15u);
        _820 = uintBitsToFloat((_1173 & 8388607u) | 1065353216u) - 1.0;
        _795 = _1148 + 1u;
        _1173 = _814;
        _1149 = _820;
        _1148 = _795;
        continue;
    }
    uvec2 _706 = uvec2(_696 + ivec2(1, 0));
    uint _824 = _706.y;
    uint _830 = _824 + (_824 << 10u);
    uint _832 = _830 ^ (_830 >> 6u);
    uint _834 = _832 + (_832 << 3u);
    uint _836 = _834 ^ (_834 >> 11u);
    uint _844 = (((_706.x * 1664525u) + (_836 + (_836 << 15u))) + 1013904223u) * 1664525u;
    uint _846 = _844 ^ (_844 >> 11u);
    uint _849 = _846 ^ ((_846 << 7u) & 2636928640u);
    uint _852 = _849 ^ ((_849 << 15u) & 4022730752u);
    uint _854 = _852 ^ (_852 >> 18u);
    float _1153;
    _1153 = _1147;
    uint _871;
    uint _890;
    float _896;
    uint _1152 = 0u;
    uint _1172 = _854;
    for (;;)
    {
        if (!(_1152 < 1u))
        {
            break;
        }
        uint _882 = _1172 + (_1172 << 10u);
        uint _884 = _882 ^ (_882 >> 6u);
        uint _886 = _884 + (_884 << 3u);
        uint _888 = _886 ^ (_886 >> 11u);
        _890 = _888 + (_888 << 15u);
        _896 = uintBitsToFloat((_1172 & 8388607u) | 1065353216u) - 1.0;
        _871 = _1152 + 1u;
        _1172 = _890;
        _1153 = _896;
        _1152 = _871;
        continue;
    }
    uvec2 _713 = uvec2(_696 + ivec2(0, 1));
    uint _900 = _713.y;
    uint _906 = _900 + (_900 << 10u);
    uint _908 = _906 ^ (_906 >> 6u);
    uint _910 = _908 + (_908 << 3u);
    uint _912 = _910 ^ (_910 >> 11u);
    uint _920 = (((_713.x * 1664525u) + (_912 + (_912 << 15u))) + 1013904223u) * 1664525u;
    uint _922 = _920 ^ (_920 >> 11u);
    uint _925 = _922 ^ ((_922 << 7u) & 2636928640u);
    uint _928 = _925 ^ ((_925 << 15u) & 4022730752u);
    uint _930 = _928 ^ (_928 >> 18u);
    float _1158;
    _1158 = _1147;
    uint _947;
    uint _966;
    float _972;
    uint _1157 = 0u;
    uint _1171 = _930;
    for (;;)
    {
        if (!(_1157 < 1u))
        {
            break;
        }
        uint _958 = _1171 + (_1171 << 10u);
        uint _960 = _958 ^ (_958 >> 6u);
        uint _962 = _960 + (_960 << 3u);
        uint _964 = _962 ^ (_962 >> 11u);
        _966 = _964 + (_964 << 15u);
        _972 = uintBitsToFloat((_1171 & 8388607u) | 1065353216u) - 1.0;
        _947 = _1157 + 1u;
        _1171 = _966;
        _1158 = _972;
        _1157 = _947;
        continue;
    }
    uvec2 _721 = uvec2(_696 + ivec2(1));
    uint _976 = _721.y;
    uint _982 = _976 + (_976 << 10u);
    uint _984 = _982 ^ (_982 >> 6u);
    uint _986 = _984 + (_984 << 3u);
    uint _988 = _986 ^ (_986 >> 11u);
    uint _996 = (((_721.x * 1664525u) + (_988 + (_988 << 15u))) + 1013904223u) * 1664525u;
    uint _998 = _996 ^ (_996 >> 11u);
    uint _1001 = _998 ^ ((_998 << 7u) & 2636928640u);
    uint _1004 = _1001 ^ ((_1001 << 15u) & 4022730752u);
    uint _1006 = _1004 ^ (_1004 >> 18u);
    float _1164;
    _1164 = _1147;
    uint _1023;
    uint _1042;
    float _1048;
    uint _1163 = 0u;
    uint _1170 = _1006;
    for (;;)
    {
        if (!(_1163 < 1u))
        {
            break;
        }
        uint _1034 = _1170 + (_1170 << 10u);
        uint _1036 = _1034 ^ (_1034 >> 6u);
        uint _1038 = _1036 + (_1036 << 3u);
        uint _1040 = _1038 ^ (_1038 >> 11u);
        _1042 = _1040 + (_1040 << 15u);
        _1048 = uintBitsToFloat((_1170 & 8388607u) | 1065353216u) - 1.0;
        _1023 = _1163 + 1u;
        _1170 = _1042;
        _1164 = _1048;
        _1163 = _1023;
        continue;
    }
    vec2 _1055 = (_697 * _697) * (vec2(3.0) - (vec2(2.0) * _697));
    float _729 = _1055.x;
    float _730 = 1.0 - _729;
    float _732 = _1055.y;
    uint _668 = uint(int(nani_instance_indirection_buffer._member0[_20]));
    uint _1068 = _668 + (_668 << 10u);
    uint _1070 = _1068 ^ (_1068 >> 6u);
    uint _1072 = _1070 + (_1070 << 3u);
    uint _1074 = _1072 ^ (_1072 >> 11u);
    vec3 _1145 = _1169;
    _1145.x = _1169.x - ((((_238 * _238) * (sin((((((1.0 - _732) * ((_1149 * _730) + (_1153 * _729))) + ((_1158 * _730) * _732)) + ((_1164 * _729) * _732)) * 3.1400001049041748046875) - 1.57000005245208740234375) + 0.300000011920928955078125)) * 0.0350000001490116119384765625) * mix(0.699999988079071044921875, 1.0, uintBitsToFloat(((_1074 + (_1074 << 15u)) & 8388607u) | 1065353216u) - 1.0));
    gl_Position = vec4(_1145, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_frag_normal_ws = normalize(vec4(Vertex_Normal, 0.0) * _571);
    entryPointParam_vs_main_frag_position_ws = _1145.xyz;
    entryPointParam_vs_main_color = pow(Vertex_Color, vec3(mix(1.0, 2.0, uintBitsToFloat(((_626 + (_626 << 15u)) & 8388607u) | 1065353216u) - 1.0)));
}

