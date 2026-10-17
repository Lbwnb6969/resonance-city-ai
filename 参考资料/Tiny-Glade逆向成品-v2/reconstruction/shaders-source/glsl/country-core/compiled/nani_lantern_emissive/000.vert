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
    uvec2 light_position_ls_intensity;
    uint flags_color_id;
    uint gpu_light_id;
};

float _969;

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

layout(location = 0) in vec3 Vertex_Position;
layout(location = 1) in vec3 Vertex_Color;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 3) out vec3 entryPointParam_vs_main_object_center_ws;
layout(location = 4) flat out uint entryPointParam_vs_main_flags_color_id;
layout(location = 5) flat out float entryPointParam_vs_main_intensity;

void main()
{
    uint _16 = uint(gl_InstanceIndex);
    mat3x4 _476 = transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].xform.data.data[11])));
    vec3 _439 = vec4(Vertex_Position, 1.0) * _476;
    vec2 _482 = unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].light_position_ls_intensity.y);
    vec2 _146 = vec2((float(frame_constants.game_time_sec) + frame_constants.game_time_frac) * 4.0, float(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].gpu_light_id * 10u));
    ivec2 _504 = ivec2(floor(_146));
    vec2 _505 = fract(_146);
    uvec2 _506 = uvec2(_504);
    uint _556 = _506.y;
    uint _562 = _556 + (_556 << 10u);
    uint _564 = _562 ^ (_562 >> 6u);
    uint _566 = _564 + (_564 << 3u);
    uint _568 = _566 ^ (_566 >> 11u);
    uint _576 = (((_506.x * 1664525u) + (_568 + (_568 << 15u))) + 1013904223u) * 1664525u;
    uint _578 = _576 ^ (_576 >> 11u);
    uint _581 = _578 ^ ((_578 << 7u) & 2636928640u);
    uint _584 = _581 ^ ((_581 << 15u) & 4022730752u);
    uint _586 = _584 ^ (_584 >> 18u);
    float _971;
    _971 = _969;
    uint _603;
    uint _622;
    float _628;
    uint _970 = 0u;
    uint _987 = _586;
    for (;;)
    {
        if (!(_970 < 1u))
        {
            break;
        }
        uint _614 = _987 + (_987 << 10u);
        uint _616 = _614 ^ (_614 >> 6u);
        uint _618 = _616 + (_616 << 3u);
        uint _620 = _618 ^ (_618 >> 11u);
        _622 = _620 + (_620 << 15u);
        _628 = uintBitsToFloat((_987 & 8388607u) | 1065353216u) - 1.0;
        _603 = _970 + 1u;
        _987 = _622;
        _971 = _628;
        _970 = _603;
        continue;
    }
    uvec2 _514 = uvec2(_504 + ivec2(1, 0));
    uint _632 = _514.y;
    uint _638 = _632 + (_632 << 10u);
    uint _640 = _638 ^ (_638 >> 6u);
    uint _642 = _640 + (_640 << 3u);
    uint _644 = _642 ^ (_642 >> 11u);
    uint _652 = (((_514.x * 1664525u) + (_644 + (_644 << 15u))) + 1013904223u) * 1664525u;
    uint _654 = _652 ^ (_652 >> 11u);
    uint _657 = _654 ^ ((_654 << 7u) & 2636928640u);
    uint _660 = _657 ^ ((_657 << 15u) & 4022730752u);
    uint _662 = _660 ^ (_660 >> 18u);
    float _974;
    _974 = _969;
    uint _679;
    uint _698;
    float _704;
    uint _973 = 0u;
    uint _986 = _662;
    for (;;)
    {
        if (!(_973 < 1u))
        {
            break;
        }
        uint _690 = _986 + (_986 << 10u);
        uint _692 = _690 ^ (_690 >> 6u);
        uint _694 = _692 + (_692 << 3u);
        uint _696 = _694 ^ (_694 >> 11u);
        _698 = _696 + (_696 << 15u);
        _704 = uintBitsToFloat((_986 & 8388607u) | 1065353216u) - 1.0;
        _679 = _973 + 1u;
        _986 = _698;
        _974 = _704;
        _973 = _679;
        continue;
    }
    uvec2 _521 = uvec2(_504 + ivec2(0, 1));
    uint _708 = _521.y;
    uint _714 = _708 + (_708 << 10u);
    uint _716 = _714 ^ (_714 >> 6u);
    uint _718 = _716 + (_716 << 3u);
    uint _720 = _718 ^ (_718 >> 11u);
    uint _728 = (((_521.x * 1664525u) + (_720 + (_720 << 15u))) + 1013904223u) * 1664525u;
    uint _730 = _728 ^ (_728 >> 11u);
    uint _733 = _730 ^ ((_730 << 7u) & 2636928640u);
    uint _736 = _733 ^ ((_733 << 15u) & 4022730752u);
    uint _738 = _736 ^ (_736 >> 18u);
    float _978;
    _978 = _969;
    uint _755;
    uint _774;
    float _780;
    uint _977 = 0u;
    uint _985 = _738;
    for (;;)
    {
        if (!(_977 < 1u))
        {
            break;
        }
        uint _766 = _985 + (_985 << 10u);
        uint _768 = _766 ^ (_766 >> 6u);
        uint _770 = _768 + (_768 << 3u);
        uint _772 = _770 ^ (_770 >> 11u);
        _774 = _772 + (_772 << 15u);
        _780 = uintBitsToFloat((_985 & 8388607u) | 1065353216u) - 1.0;
        _755 = _977 + 1u;
        _985 = _774;
        _978 = _780;
        _977 = _755;
        continue;
    }
    uvec2 _529 = uvec2(_504 + ivec2(1));
    uint _784 = _529.y;
    uint _790 = _784 + (_784 << 10u);
    uint _792 = _790 ^ (_790 >> 6u);
    uint _794 = _792 + (_792 << 3u);
    uint _796 = _794 ^ (_794 >> 11u);
    uint _804 = (((_529.x * 1664525u) + (_796 + (_796 << 15u))) + 1013904223u) * 1664525u;
    uint _806 = _804 ^ (_804 >> 11u);
    uint _809 = _806 ^ ((_806 << 7u) & 2636928640u);
    uint _812 = _809 ^ ((_809 << 15u) & 4022730752u);
    uint _814 = _812 ^ (_812 >> 18u);
    float _983;
    _983 = _969;
    uint _831;
    uint _850;
    float _856;
    uint _982 = 0u;
    uint _984 = _814;
    for (;;)
    {
        if (!(_982 < 1u))
        {
            break;
        }
        uint _842 = _984 + (_984 << 10u);
        uint _844 = _842 ^ (_842 >> 6u);
        uint _846 = _844 + (_844 << 3u);
        uint _848 = _846 ^ (_846 >> 11u);
        _850 = _848 + (_848 << 15u);
        _856 = uintBitsToFloat((_984 & 8388607u) | 1065353216u) - 1.0;
        _831 = _982 + 1u;
        _984 = _850;
        _983 = _856;
        _982 = _831;
        continue;
    }
    vec2 _863 = (_505 * _505) * (vec2(3.0) - (vec2(2.0) * _505));
    float _537 = _863.x;
    float _538 = 1.0 - _537;
    float _540 = _863.y;
    gl_Position = vec4(_439, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = Vertex_Color;
    entryPointParam_vs_main_frag_normal_ws = vec4(Vertex_Normal, 0.0) * _476;
    entryPointParam_vs_main_frag_position_ws = _439.xyz;
    entryPointParam_vs_main_object_center_ws = vec4(vec4(unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].light_position_ls_intensity.x), _482).xyz, 1.0) * _476;
    entryPointParam_vs_main_flags_color_id = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_16]].flags_color_id;
    entryPointParam_vs_main_intensity = _482.y * mix(0.3499999940395355224609375, 1.0, (((1.0 - _540) * ((_971 * _538) + (_974 * _537))) + ((_978 * _538) * _540)) + ((_983 * _537) * _540));
}

