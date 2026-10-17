#version 460

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

layout(set = 10, binding = 0, std140) uniform StoneFloorTextures_natural
{
    uvec2 stone_floor_height_dims;
} stone_floor_textures;

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

layout(set = 9, binding = 0, std140) uniform WoodenFloorTextures_natural
{
    uvec2 wooden_floor_height_dims;
} wooden_floor_textures;

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

layout(set = 10, binding = 3) uniform texture2D stone_floor_textures_stone_floor_height;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 10, binding = 1) uniform texture2D stone_floor_textures_stone_floor_normal;
layout(set = 10, binding = 2) uniform texture2D stone_floor_textures_stone_floor_seed;
layout(set = 10, binding = 4) uniform texture2D stone_floor_textures_stone_floor_roughness;
layout(set = 11, binding = 1) uniform texture2DArray wall_color_data_brick_colors;
layout(set = 9, binding = 2) uniform texture2D wooden_floor_textures_wooden_floor_height;
layout(set = 9, binding = 1) uniform texture2D wooden_floor_textures_wooden_floor_normal;
layout(set = 9, binding = 3) uniform texture2D wooden_floor_textures_wooden_floor_seed;
layout(set = 8, binding = 1) uniform texture2DArray halftimber_colors_tex;
layout(set = 9, binding = 4) uniform texture2D wooden_floor_textures_wooden_floor_roughness;
layout(set = 0, binding = 2) uniform texture2D material_data_dirtpath_heightmap;

void main()
{
}

