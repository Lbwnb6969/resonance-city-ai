#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_demote_to_helper_invocation : require
#extension GL_EXT_samplerless_texture_functions : require

struct Grass2SplatVisibleInstance_natural
{
    uint clump_mip;
    uint range_count;
    uint bounds_x;
    uint bounds_y;
    uint bounds_z;
};

struct Grass2SplatVisibleClump_natural
{
    uint center_xy;
    uint center_z_wind;
    uint scale_packed;
    uint rot_flags;
};

struct Bindless_natural
{
    uint bindless_handle;
};

struct Grass2ExemplarParams_natural
{
    float radius_xz;
    float center_y;
    float half_y;
    float max_y;
    float wind_wave_scale;
    uint shadow_opacity;
    float height_scale_min;
    float height_scale_max;
    float xz_scale_min;
    float xz_scale_max;
    Bindless_natural world_albedo_tint;
};

struct Tex2D_natural
{
    uint bindless_handle;
};

vec4 _1417;
vec3 _1418;

layout(set = 0, binding = 4, std430) readonly buffer StructuredBuffer
{
    uvec2 _member0[];
} point_search_entries;

layout(set = 0, binding = 5, std430) readonly buffer visible_instances
{
    Grass2SplatVisibleInstance_natural _member0[];
} visible_instances_1;

layout(set = 0, binding = 6, std430) readonly buffer clump_records
{
    Grass2SplatVisibleClump_natural _member0[];
} clump_records_1;

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

layout(set = 0, binding = 7, std430) readonly buffer card_point_attrib_indices
{
    uint _member0[];
} card_point_attrib_indices_1;

layout(set = 8, binding = 0, std430) readonly buffer grass2_exemplar_params_params
{
    Grass2ExemplarParams_natural _member0[];
} grass2_exemplar_params_params_1;

layout(set = 6, binding = 0, scalar) uniform TerrainHeightmap_natural
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

layout(set = 0, binding = 2, r32ui) uniform uimage2D splat_depth;
layout(set = 0, binding = 3) uniform utexture2D splat_vbuffer;
layout(set = 0, binding = 8) uniform texture2D card_point_attrib_palette_albedo;
layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 2, binding = 6) uniform sampler samplers_llr_iso;
layout(set = 0, binding = 9) uniform texture2D card_point_attrib_palette_normal;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 6, binding = 1) uniform texture2D terrain_heightmap_terrain_heightmap;

layout(location = 0) in vec2 vs_out_uv;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    uvec2 _46 = uvec2(gl_FragCoord.xy);
    uvec4 sampled = imageLoad(splat_depth, ivec2(_46));
    uint _56 = sampled.x;
    if (_56 == 0u)
    {
        demote;
    }
    imageStore(splat_depth, ivec2(_46), uvec4(0u));
    float _66 = uintBitsToFloat(_56);
    uvec4 sampled_1 = texelFetch(splat_vbuffer, ivec2(_46), 0);
    uint _72 = sampled_1.x;
    uint _867 = _72 >> uint(12);
    uint _873 = visible_instances_1._member0[point_search_entries._member0[_867].y].clump_mip & 131071u;
    vec4 _899 = (vec4((vs_out_uv - vec2(0.5)) * vec2(2.0, -2.0), _66, 1.0) * current_view.sample_to_view) * current_view.view_to_world;
    vec3 _913 = _899.xyz / vec3(_899.w);
    uint global_point_index = ((visible_instances_1._member0[point_search_entries._member0[_867].y].range_count & 1048575u) | (((visible_instances_1._member0[point_search_entries._member0[_867].y].clump_mip >> uint(26)) & 3u) << uint(20))) + (_72 & 4095u);
    uint codeword = (card_point_attrib_indices_1._member0[global_point_index >> uint(1)] >> ((global_point_index & 1u) * 16u)) & 65535u;
    uvec2 palette_texel = uvec2(codeword % 256u, codeword / 256u);
    vec2 _396 = (vec3(unpackHalf2x16(clump_records_1._member0[_873].center_xy), unpackHalf2x16(clump_records_1._member0[_873].center_z_wind).x).xz * vec2(0.0078125)) + vec2(0.5);
    vec2 _987 = fract(_396);
    vec2 _988 = abs(floor(_396));
    vec3 _428 = (texelFetch(card_point_attrib_palette_albedo, ivec2(palette_texel), 0).xyz * 5.689713954925537109375) * textureLod(nonuniformEXT(sampler2D(resource_handles[grass2_exemplar_params_params_1._member0[min(((visible_instances_1._member0[point_search_entries._member0[_867].y].clump_mip >> uint(17)) & 63u), 55u)].world_albedo_tint.bindless_handle], samplers_llr_iso)), mix(_987, vec2(1.0) - _987, _988 - vec2(2.0) * trunc(_988 / vec2(2.0))), 0.0).xyz;
    vec4 _1375;
    _1375.x = _428.x;
    _1375.y = _428.y;
    _1375.z = _428.z;
    vec4 sampled_2 = texelFetch(card_point_attrib_palette_normal, ivec2(palette_texel), 0);
    vec4 _1020 = textureGather(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), (_913.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5));
    float _1024 = _1020.z;
    float _1025 = _1020.y;
    float _1027 = _1020.w;
    float _1028 = _1020.x;
    vec2 _1038 = ((vec2((_1024 + _1025) - (_1027 + _1028), (_1028 + _1025) - (_1027 + _1024)) * vec2(0.5)) * 26.5) / (vec2(130.0) / vec2(terrain_heightmap.terrain_heightmap_dims));
    vec2 _1057 = (vec2(float(clump_records_1._member0[_873].rot_flags & 255u) * 0.0039215688593685626983642578125, float((clump_records_1._member0[_873].rot_flags >> uint(8)) & 255u) * 0.0039215688593685626983642578125) * 2.0) - vec2(1.0);
    vec3 _1077 = normalize(((sampled_2.xyz * 2.0) - vec3(1.0)) / vec3(unpackHalf2x16(clump_records_1._member0[_873].scale_packed).xyx));
    float _1078 = _1057.x;
    float _1079 = _1057.y;
    float _1091 = _1077.x;
    float _1093 = _1077.z;
    vec3 _624 = normalize(vec3((_1091 * _1078) - (_1093 * _1079), _1077.y, (_1091 * _1079) + (_1093 * _1078)));
    vec4 _1104 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    vec3 _1392;
    if (dot(normalize((_1104.xyz / vec3(_1104.w)) - _913), _624) <= 0.0)
    {
        _1392 = -_624;
    }
    else
    {
        _1392 = _624;
    }
    vec3 _1396;
    if (frame_constants.glade_theme_id == 4u)
    {
        _1396 = mix(_1375.xyz, vec3(0.699999988079071044921875), vec3(smoothstep(0.62000000476837158203125, 1.0, clamp(_1392.y, 0.0, 1.0) * 0.800000011920928955078125)));
    }
    else
    {
        _1396 = _1375.xyz;
    }
    vec3 _1171 = _1392 / vec3((abs(_1392.x) + abs(_1392.y)) + abs(_1392.z));
    vec3 _1400;
    if (_1171.z < 0.0)
    {
        vec2 _1205 = (vec2(1.0) - abs(_1171.yx)) * ((step(vec2(0.0), _1171.xy) * 2.0) - vec2(1.0));
        vec3 _1381;
        _1381.x = _1205.x;
        _1381.y = _1205.y;
        _1400 = _1381;
    }
    else
    {
        _1400 = _1171;
    }
    vec2 _1187 = (_1400.xy * 0.5) + vec2(0.5);
    vec3 _1133 = (cross(normalize(vec3(0.0, _1038.y, 1.0)), normalize(vec3(1.0, _1038.x, 0.0))) * 0.5) + vec3(0.5);
    uint _1141 = uint((sampled_2.w * 7.0) + 0.5);
    vec3 _1261 = sqrt(clamp(_1396, vec3(0.0), vec3(1.0)));
    entryPointParam_ps_main_gbuffer = uvec2(((((((uint((clamp(_1133.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1133.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1133.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(_1187.x, 0.0, 1.0) * 255.0) + 0.5) << uint(24))) & 4294901502u) | (_1141 & 1u)) | ((_1141 & 2u) << uint(7))) | ((_1141 & 4u) << uint(14)), ((uint((clamp(_1261.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1261.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1261.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(_1187.y, 0.0, 1.0) * 255.0) + 0.5) << uint(24)));
    gl_FragDepth = _66;
}

