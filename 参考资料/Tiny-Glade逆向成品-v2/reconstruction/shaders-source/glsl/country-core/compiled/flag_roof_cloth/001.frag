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

vec4 _862;

layout(set = 0, binding = 0, scalar) uniform MaterialData_natural
{
    Affine3Packed_natural model_to_world;
    int seed;
    int color_id;
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

layout(set = 0, binding = 4) uniform texture2D material_data_border_mask;
layout(set = 2, binding = 3) uniform sampler samplers_llc;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 6, binding = 1) uniform texture2DArray flag_textures_patterns;
layout(set = 6, binding = 0) uniform texture2D flag_textures_palettes;

layout(location = 2) in vec3 vs_out_frag_position_ws;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 3) in vec2 vs_out_frag_uv;
layout(location = 4) in vec2 vs_out_uv_side_pattern;
layout(location = 5) in vec2 vs_out_uv_center_pattern;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec4 _480 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    vec3 _846;
    if (dot(normalize((_480.xyz / vec3(_480.w)) - vs_out_frag_position_ws), vs_out_frag_normal_ws) <= 0.0)
    {
        _846 = -vs_out_frag_normal_ws;
    }
    else
    {
        _846 = vs_out_frag_normal_ws;
    }
    uint _125 = uint(material_data.seed ^ 234234);
    uint _502 = _125 + (_125 << 10u);
    uint _504 = _502 ^ (_502 >> 6u);
    uint _506 = _504 + (_504 << 3u);
    uint _508 = _506 ^ (_506 >> 11u);
    vec4 sampled = texture(sampler2DArray(flag_textures_patterns, samplers_llr), vec3(vs_out_uv_side_pattern, float(int(round(mix(9.0, 11.0, uintBitsToFloat(((_508 + (_508 << 15u)) & 8388607u) | 1065353216u) - 1.0))))), current_view.mip_bias);
    uint _208 = uint(material_data.color_id);
    vec3 _847;
    if (texture(sampler2D(material_data_border_mask, samplers_llc), vs_out_frag_uv, current_view.mip_bias).x > 0.89999997615814208984375)
    {
        _847 = texelFetch(flag_textures_palettes, ivec2(uvec2(1u, _208)), 0).xyz;
    }
    else
    {
        _847 = mix(mix(texelFetch(flag_textures_palettes, ivec2(uvec2(0u, _208)), 0).xyz, texelFetch(flag_textures_palettes, ivec2(uvec2(2u, _208)), 0).xyz, vec3(sampled.x)), texelFetch(flag_textures_palettes, ivec2(uvec2(3u, _208)), 0).xyz, vec3(textureLod(sampler2DArray(flag_textures_patterns, samplers_llc), vec3(vs_out_uv_center_pattern, float((material_data.seed - 6 * (material_data.seed / 6)) + 3)), 0.0).x));
    }
    vec3 _556 = (normalize(_846) * 0.5) + vec3(0.5);
    vec3 _664 = sqrt(clamp(_847, vec3(0.0), vec3(1.0)));
    uint _679 = (uint((clamp(_664.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_664.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_664.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _860 = uvec2(((uint((clamp(_556.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_556.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_556.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 4278190080u, _679);
    _860.y = _679 | 100663296u;
    entryPointParam_ps_main_gbuffer = _860;
}

