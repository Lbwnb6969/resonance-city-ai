#version 460
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_samplerless_texture_functions : require

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

vec4 _837;

layout(set = 0, binding = 0, scalar) uniform MaterialData_natural
{
    Affine3Packed_natural model_to_world;
    int color_id;
    int seed;
} material_data;

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

layout(set = 6, binding = 1) uniform texture2DArray flag_textures_patterns;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 0, binding = 1) uniform texture2D material_data_border_mask;
layout(set = 2, binding = 3) uniform sampler samplers_llc;
layout(set = 6, binding = 0) uniform texture2D flag_textures_palettes;

layout(location = 3) in vec2 vs_out_uv_pattern;
layout(location = 4) in vec2 vs_out_uv_border_mask;
layout(location = 2) in vec3 vs_out_frag_position_ws;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    uint _53 = uint(material_data.seed ^ 234234);
    uint _457 = _53 + (_53 << 10u);
    uint _459 = _457 ^ (_457 >> 6u);
    uint _461 = _459 + (_459 << 3u);
    uint _463 = _461 ^ (_461 >> 11u);
    vec4 sampled = texture(sampler2DArray(flag_textures_patterns, samplers_llr), vec3(vs_out_uv_pattern.x, 1.0 - vs_out_uv_pattern.y, float(int(round(mix(9.0, 11.0, uintBitsToFloat(((_463 + (_463 << 15u)) & 8388607u) | 1065353216u) - 1.0))))), current_view.mip_bias);
    uint _146 = uint(material_data.color_id);
    vec3 _822;
    if (texture(sampler2D(material_data_border_mask, samplers_llc), vs_out_uv_border_mask, current_view.mip_bias).x > 0.89999997615814208984375)
    {
        _822 = texelFetch(flag_textures_palettes, ivec2(uvec2(1u, _146)), 0).xyz;
    }
    else
    {
        _822 = mix(texelFetch(flag_textures_palettes, ivec2(uvec2(0u, _146)), 0).xyz, texelFetch(flag_textures_palettes, ivec2(uvec2(3u, _146)), 0).xyz, vec3(sampled.x * 0.5));
    }
    vec4 _476 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    vec3 _820;
    if (dot(normalize((_476.xyz / vec3(_476.w)) - vs_out_frag_position_ws), vs_out_frag_normal_ws) <= 0.0)
    {
        _820 = -vs_out_frag_normal_ws;
    }
    else
    {
        _820 = vs_out_frag_normal_ws;
    }
    vec3 _530 = (normalize(_820) * 0.5) + vec3(0.5);
    vec3 _638 = sqrt(clamp(_822, vec3(0.0), vec3(1.0)));
    uint _653 = (uint((clamp(_638.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_638.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_638.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _835 = uvec2(((uint((clamp(_530.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_530.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_530.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 4278190080u, _653);
    _835.y = _653 | 117440512u;
    entryPointParam_ps_main_gbuffer = _835;
}

