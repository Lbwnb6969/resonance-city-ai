#version 460
#extension GL_EXT_scalar_block_layout : require

struct Firefly_natural
{
    vec3 position;
    uint pad;
};

struct Tex2D_natural
{
    uint bindless_handle;
};

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

layout(set = 0, binding = 2, std430) readonly buffer StructuredBuffer
{
    float _member0[];
} material_data_firefly_visibility_buffer;

layout(set = 0, binding = 1, std430) readonly buffer material_data_fireflies
{
    Firefly_natural _member0[];
} material_data_fireflies_1;

layout(set = 20, binding = 0, scalar) uniform TerrainHeightmap_natural
{
    uvec2 terrain_heightmap_dims;
    Tex2D_natural bg_terrain_heightmap;
    Tex2D_natural bg_terrain_fog_height;
    vec2 bg_terrain_height_bounds_ws;
    vec4 bg_water_footprint_ws;
} terrain_heightmap;

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

layout(set = 0, binding = 3, std430) readonly buffer material_data_autofocus_buf
{
    DofAutofocus_natural _member0[];
} material_data_autofocus_buf_1;

layout(set = 20, binding = 1) uniform texture2D terrain_heightmap_terrain_heightmap;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;

layout(location = 0) out vec2 entryPointParam_vs_main_uv;
layout(location = 1) out float entryPointParam_vs_main_visibility;
layout(location = 2) out float entryPointParam_vs_main_edge;
layout(location = 0) in vec3 Vertex_Position;

void main()
{
    do
    {
        uint _33 = uint(gl_InstanceIndex);
        if (0.0 == material_data_firefly_visibility_buffer._member0[_33])
        {
            gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
            entryPointParam_vs_main_uv = vec2(0.0);
            entryPointParam_vs_main_visibility = 0.0;
            entryPointParam_vs_main_edge = 0.0;
            break;
        }
        vec3 root_pos_ws = material_data_fireflies_1._member0[_33].position + vec3(0.0, mix(-2.5, 24.0, textureLod(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), (material_data_fireflies_1._member0[_33].position.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0).x), 0.0);
        vec4 _179 = vec4(root_pos_ws, 1.0) * current_view.world_to_view;
        float _562 = 1.0 / material_data_autofocus_buf_1._member0[frame_constants.camera_idx].focus0;
        float _565 = 1.0 / material_data_autofocus_buf_1._member0[frame_constants.camera_idx].focus1;
        float _568 = max(0.001000000047497451305389404296875, max(_562, _565)) + 9.9999997473787516355514526367188e-06;
        float _571 = max(0.001000000047497451305389404296875, min(_562, _565)) - 9.9999997473787516355514526367188e-06;
        bool _574 = material_data_autofocus_buf_1._member0[frame_constants.camera_idx].use_tilt_shift != 0u;
        vec3 _737 = root_pos_ws;
        _737.y = root_pos_ws.y * float(_574 ? 0 : 1);
        vec4 _638 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
        vec3 _649 = normalize((vec4(0.0, 0.0, -1.0, 0.0) * current_view.view_to_world).xyz);
        float _577 = 1.0 / max(1.0000000133514319600180897396058e-10, dot(_737 - (_638.xyz / vec3(_638.w)), _649));
        float _578 = _568 - _571;
        float _580 = min(0.00999999977648258209228515625, 0.0500000007450580596923828125 * _578);
        float _740;
        if (_577 > _568)
        {
            _740 = (_577 - _568) + _580;
        }
        else
        {
            float _741;
            if (_577 < _571)
            {
                _741 = (_577 - _571) - _580;
            }
            else
            {
                _741 = (-_580) + (((2.0 * _580) * (_577 - _571)) / _578);
            }
            _740 = _741;
        }
        float _742;
        if (_574)
        {
            _742 = _740 / max(0.00999999977648258209228515625, length(_649.xz));
        }
        else
        {
            _742 = _740;
        }
        float dof_size_vs = ((((((-_742) * material_data_autofocus_buf_1._member0[frame_constants.camera_idx].focus_scale) * current_view.view_to_clip[1].y) * 0.5) * current_view.view_to_clip[1].y) / float(frame_constants.world_render_resolution.y)) * (-_179.z);
        float scaled_size_vs = 0.800000011920928955078125 + dof_size_vs;
        float smoothstep_edge = dof_size_vs / scaled_size_vs;
        gl_Position = (_179 + vec4(Vertex_Position.xzy * scaled_size_vs, 0.0)) * current_view.view_to_sample;
        entryPointParam_vs_main_uv = Vertex_Position.xz * 2.0;
        entryPointParam_vs_main_visibility = clamp(((material_data_firefly_visibility_buffer._member0[_33] - 0.20000000298023223876953125) * 0.753982365131378173828125) / ((scaled_size_vs * scaled_size_vs) * (3.1415927410125732421875 * (0.300000011920928955078125 + (0.699999988079071044921875 * (smoothstep_edge * (0.579999983310699462890625 + (0.4199999868869781494140625 * smoothstep_edge))))))), 0.0, 1.0);
        entryPointParam_vs_main_edge = smoothstep_edge;
        break;
    } while(false);
}

