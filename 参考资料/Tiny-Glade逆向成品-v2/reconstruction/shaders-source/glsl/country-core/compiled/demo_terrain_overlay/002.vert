#version 460
#extension GL_EXT_scalar_block_layout : require

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 18, binding = 0, scalar) uniform TerrainHeightmap_natural
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

layout(set = 18, binding = 1) uniform texture2D terrain_heightmap_terrain_heightmap;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;

layout(location = 0) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_pos_ws;

void main()
{
    uint _27 = uint(gl_VertexIndex - gl_BaseVertex);
    vec2 _183 = ((((vec2(ivec2(vec2(float(_27 % 46u), float(_27 / 46u)))) + vec2(0.5)) * vec2(0.02173913083970546722412109375)) * 2.0) - vec2(1.0)) * vec2(65.0);
    vec3 _186 = vec3(_183.x, 0.0, _183.y);
    _186.y = mix(-2.5, 24.0, textureLod(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), (_186.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0).x) + 0.5;
    gl_Position = vec4(_186, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_frag_uv = _186.xz * 0.20000000298023223876953125;
    entryPointParam_vs_main_frag_pos_ws = _186;
}

