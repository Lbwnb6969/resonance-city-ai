#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_demote_to_helper_invocation : require

struct Bindless_natural
{
    uint bindless_handle;
};

struct Grass2Lod0Material_natural
{
    Bindless_natural world_albedo_tint;
    uint first_part_material;
    float wind_wave_scale;
    uint shadow_opacity;
    float height_scale_min;
    float height_scale_max;
    float xz_scale_min;
    float xz_scale_max;
};

struct Grass2Lod0PartMaterial_natural
{
    Bindless_natural color_texture;
    Bindless_natural normal_texture;
    float albedo_style_scale;
};

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 0, std430) readonly buffer StructuredBuffer
{
    Grass2Lod0Material_natural _member0[];
} material_data_exemplar_materials;

layout(set = 0, binding = 1, std430) readonly buffer material_data_part_materials
{
    Grass2Lod0PartMaterial_natural _member0[];
} material_data_part_materials_1;

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

layout(set = 6, binding = 0, std140) uniform ViewConstants_natural
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

layout(set = 7, binding = 0, scalar) uniform TerrainHeightmap_natural
{
    uvec2 terrain_heightmap_dims;
    Tex2D_natural bg_terrain_heightmap;
    Tex2D_natural bg_terrain_fog_height;
    vec2 bg_terrain_height_bounds_ws;
    vec4 bg_water_footprint_ws;
} terrain_heightmap;

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

layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 2, binding = 6) uniform sampler samplers_llr_iso;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 7, binding = 1) uniform texture2D terrain_heightmap_terrain_heightmap;

layout(location = 8) flat in uint vs_out_exemplar_id;
layout(location = 9) flat in uint vs_out_part_material_index;
layout(location = 10) flat in uint vs_out_blade_seed;
layout(location = 7) flat in float vs_out_lod_transition_t;
layout(location = 0) in vec2 vs_out_uv;

void main()
{
    uvec2 _129 = uvec2(gl_FragCoord.xy);
    uvec2 _492 = uvec2(3u, 2u);
    uvec2 _493 = _129 & uvec2(1u);
    uint _604;
    _604 = 0u;
    uint _514;
    int _518;
    int _603 = 0;
    for (;;)
    {
        if (!(_603 < 2))
        {
            break;
        }
        _514 = _604 + (_493[_603] * _492[_603]);
        _518 = _603 + 1;
        _604 = _514;
        _603 = _518;
        continue;
    }
    if (((((_604 & 3u) + frame_counter.index) + vs_out_blade_seed) % 4u) >= material_data_exemplar_materials._member0[vs_out_exemplar_id].shadow_opacity)
    {
        demote;
    }
    if (fract(52.98291778564453125 * fract((0.067110560834407806396484375 * float(_129.x)) + (0.005837149918079376220703125 * float(_129.y)))) < vs_out_lod_transition_t)
    {
        demote;
    }
    if (texture(nonuniformEXT(sampler2D(resource_handles[material_data_part_materials_1._member0[vs_out_part_material_index].color_texture.bindless_handle], samplers_llr_iso)), vs_out_uv, current_view.mip_bias).w < 0.300000011920928955078125)
    {
        demote;
    }
}

