#version 460
#extension GL_EXT_scalar_block_layout : require

struct PlacementData_natural
{
    vec3 position;
    float scale;
    float rotation_angle;
    int id;
    uint custom0;
    uint custom1;
    uint anim_t_packed;
    vec2 bend_vector;
    int pad0;
};

layout(set = 5, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 0, scalar) readonly buffer material_data_nani_instance_data
{
    PlacementData_natural _member0[];
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

layout(set = 19, binding = 0, std140) uniform ViewConstants_natural
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

layout(location = 4) in float age;
layout(location = 0) in vec3 Vertex_Position;
layout(location = 3) in vec3 appear_pos;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 1) in vec3 Vertex_Color;
layout(location = 0) out vec3 entryPointParam_vs_main_frag_uv;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_pos_ws;
layout(location = 3) out float entryPointParam_vs_main_anim_t;
layout(location = 4) out float entryPointParam_vs_main_see_thru_anim_t;
layout(location = 5) flat out int entryPointParam_vs_main_frag_tree_id;
layout(location = 6) flat out uint entryPointParam_vs_main_handplaced_flag;
layout(location = 7) out float entryPointParam_vs_main_local_y;

void main()
{
    uint _27 = uint(gl_InstanceIndex);
    vec2 _641 = unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].anim_t_packed);
    float _122 = sqrt(clamp((1.0 - age) + mix(-1.0, 1.0, clamp(_641.x, 0.0, 1.0)), 0.0, 1.0));
    vec3 _129 = mix(appear_pos, Vertex_Position, vec3(_122));
    float _133 = _129.y * 0.0199999995529651641845703125;
    float _647 = float(frame_constants.game_time_sec);
    float _648 = _647 * 0.8235290050506591796875;
    float _158 = _129.x;
    float _659 = _647 * 0.893616974353790283203125;
    float _166 = _129.z;
    float _167 = 0.20000000298023223876953125 * _166;
    float _172 = _158 + ((_133 * sin(((_648 - 6.283185482025146484375 * trunc(_648 / 6.283185482025146484375)) + (frame_constants.game_time_frac * 0.8235290050506591796875)) + (0.20000000298023223876953125 * _158))) * sin(((_659 - 6.283185482025146484375 * trunc(_659 / 6.283185482025146484375)) + (frame_constants.game_time_frac * 0.893616974353790283203125)) + _167));
    vec3 _916 = _129;
    _916.x = _172;
    float _670 = _647 * 0.792452991008758544921875;
    float _681 = _647 * 0.688525021076202392578125;
    _916.z = _166 + ((_133 * sin(((_670 - 6.283185482025146484375 * trunc(_670 / 6.283185482025146484375)) + (frame_constants.game_time_frac * 0.792452991008758544921875)) + (0.20000000298023223876953125 * _172))) * sin(((_681 - 6.283185482025146484375 * trunc(_681 / 6.283185482025146484375)) + (frame_constants.game_time_frac * 0.688525021076202392578125)) + _167));
    int _198 = int(nani_instance_indirection_buffer._member0[_27]);
    float _777 = radians(material_data_nani_instance_data_1._member0[_198].rotation_angle);
    vec3 _825 = normalize(vec3(cos(_777), 0.0, sin(_777)));
    mat4 _809 = transpose(mat4(vec4(_825, 0.0), vec4(0.0, 1.0, 0.0, 0.0), vec4(normalize(cross(_825, vec3(0.0, 1.0, 0.0))), 0.0), vec4(0.0, 0.0, 0.0, 1.0)));
    vec4 _813 = ((vec4(_916, 1.0) * mat4(vec4(material_data_nani_instance_data_1._member0[_198].scale, 0.0, 0.0, 0.0), vec4(0.0, material_data_nani_instance_data_1._member0[_198].scale, 0.0, 0.0), vec4(0.0, 0.0, material_data_nani_instance_data_1._member0[_198].scale, 0.0), vec4(0.0, 0.0, 0.0, 1.0))) * _809) * mat4(vec4(1.0, 0.0, 0.0, material_data_nani_instance_data_1._member0[_198].position.x), vec4(0.0, 1.0, 0.0, material_data_nani_instance_data_1._member0[_198].position.y), vec4(0.0, 0.0, 1.0, material_data_nani_instance_data_1._member0[_198].position.z), vec4(0.0, 0.0, 0.0, 1.0));
    vec2 _435 = _813.xz + (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].bend_vector * ((clamp(Vertex_Position.y * 0.100000001490116119384765625, 0.0, 1.0) * 0.75) * mix(0.5, 1.0, age)));
    vec4 _921 = _813;
    _921.x = _435.x;
    _921.z = _435.y;
    gl_Position = vec4(_921.xyz, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_frag_uv = Vertex_Color;
    entryPointParam_vs_main_frag_normal = (vec4(Vertex_Normal, 0.0) * _809).xyz;
    entryPointParam_vs_main_frag_pos_ws = _921.xyz;
    entryPointParam_vs_main_anim_t = _122;
    entryPointParam_vs_main_see_thru_anim_t = _641.y;
    entryPointParam_vs_main_frag_tree_id = int(uint(material_data_nani_instance_data_1._member0[_198].id));
    entryPointParam_vs_main_handplaced_flag = uint(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_27]].pad0);
    entryPointParam_vs_main_local_y = Vertex_Position.y;
}

