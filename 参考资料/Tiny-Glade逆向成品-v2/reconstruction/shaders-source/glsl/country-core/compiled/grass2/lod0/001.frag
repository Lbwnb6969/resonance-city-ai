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

vec3 _987;

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
layout(location = 7) flat in float vs_out_lod_transition_t;
layout(location = 0) in vec2 vs_out_uv;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 3) in vec3 vs_out_frag_bitangent_ws;
layout(location = 2) in vec3 vs_out_frag_tangent_ws;
layout(location = 4) in vec3 vs_out_frag_position_ws;
layout(location = 5) in vec3 vs_out_albedo_tint;
layout(location = 11) flat in vec2 vs_out_clump_center_xz;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    uvec2 _137 = uvec2(gl_FragCoord.xy) + uvec2(frame_counter.index);
    if (fract(52.98291778564453125 * fract((0.067110560834407806396484375 * float(_137.x)) + (0.005837149918079376220703125 * float(_137.y)))) < vs_out_lod_transition_t)
    {
        demote;
    }
    vec4 sampled = texture(nonuniformEXT(sampler2D(resource_handles[material_data_part_materials_1._member0[vs_out_part_material_index].color_texture.bindless_handle], samplers_llr_iso)), vs_out_uv, current_view.mip_bias);
    if (sampled.w < 0.300000011920928955078125)
    {
        demote;
    }
    vec4 sampled_1 = texture(nonuniformEXT(sampler2D(resource_handles[material_data_part_materials_1._member0[vs_out_part_material_index].normal_texture.bindless_handle], samplers_llr_iso)), vs_out_uv, current_view.mip_bias);
    vec3 texture_normal = ((sampled_1.xyz * 2.0) - vec3(1.0)) * vec3(1.0, -1.0, 1.0);
    vec3 spec_basis_normal = normalize(vs_out_frag_normal_ws) * float(gl_FrontFacing ? 1 : (-1));
    vec3 _266 = ((cross(spec_basis_normal, vs_out_frag_bitangent_ws) * texture_normal.x) + (cross(vs_out_frag_tangent_ws, spec_basis_normal) * texture_normal.y)) + (spec_basis_normal * texture_normal.z);
    vec4 _659 = textureGather(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), (vs_out_frag_position_ws.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5));
    float _663 = _659.z;
    float _664 = _659.y;
    float _666 = _659.w;
    float _667 = _659.x;
    vec2 _677 = ((vec2((_663 + _664) - (_666 + _667), (_667 + _664) - (_666 + _663)) * vec2(0.5)) * 26.5) / (vec2(130.0) / vec2(terrain_heightmap.terrain_heightmap_dims));
    vec2 _382 = (vs_out_clump_center_xz * vec2(0.0078125)) + vec2(0.5);
    vec2 _681 = fract(_382);
    vec2 _682 = abs(floor(_382));
    vec3 _408 = (((sampled.xyz * vs_out_albedo_tint) * material_data_part_materials_1._member0[vs_out_part_material_index].albedo_style_scale) * 5.689713954925537109375) * textureLod(nonuniformEXT(sampler2D(resource_handles[material_data_exemplar_materials._member0[vs_out_exemplar_id].world_albedo_tint.bindless_handle], samplers_llr_iso)), mix(_681, vec2(1.0) - _681, _682 - vec2(2.0) * trunc(_682 / vec2(2.0))), 0.0).xyz;
    vec3 _962;
    if (frame_constants.glade_theme_id == 4u)
    {
        _962 = mix(_408, vec3(0.699999988079071044921875), vec3(smoothstep(0.62000000476837158203125, 1.0, clamp(_266.y, 0.0, 1.0) * 0.800000011920928955078125)));
    }
    else
    {
        _962 = _408;
    }
    vec3 _744 = _266 / vec3((abs(_266.x) + abs(_266.y)) + abs(_266.z));
    vec3 _965;
    if (_744.z < 0.0)
    {
        vec2 _778 = (vec2(1.0) - abs(_744.yx)) * ((step(vec2(0.0), _744.xy) * 2.0) - vec2(1.0));
        vec3 _940;
        _940.x = _778.x;
        _940.y = _778.y;
        _965 = _940;
    }
    else
    {
        _965 = _744;
    }
    vec2 _760 = (_965.xy * 0.5) + vec2(0.5);
    vec3 _706 = (cross(normalize(vec3(0.0, _677.y, 1.0)), normalize(vec3(1.0, _677.x, 0.0))) * 0.5) + vec3(0.5);
    uint _714 = uint((sampled_1.w * 7.0) + 0.5);
    vec3 _834 = sqrt(clamp(_962, vec3(0.0), vec3(1.0)));
    entryPointParam_ps_main_gbuffer = uvec2(((((((uint((clamp(_706.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_706.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_706.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(_760.x, 0.0, 1.0) * 255.0) + 0.5) << uint(24))) & 4294901502u) | (_714 & 1u)) | ((_714 & 2u) << uint(7))) | ((_714 & 4u) << uint(14)), ((uint((clamp(_834.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_834.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_834.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(_760.y, 0.0, 1.0) * 255.0) + 0.5) << uint(24)));
}

