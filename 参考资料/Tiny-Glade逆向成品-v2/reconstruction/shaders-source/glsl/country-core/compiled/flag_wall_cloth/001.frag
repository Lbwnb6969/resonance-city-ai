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

vec4 _916;

layout(set = 0, binding = 0, scalar) uniform MaterialData_natural
{
    Affine3Packed_natural model_to_world;
    int seed;
    float local_start_y;
    float body_end_y;
    float tip_end_y;
    int is_corner;
    int color_id;
    int follows_stairs;
    float attachment_left_y;
    float attachment_right_y;
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
layout(set = 2, binding = 3) uniform sampler samplers_llc;
layout(set = 0, binding = 1) uniform texture2D material_data_border_mask;
layout(set = 6, binding = 0) uniform texture2D flag_textures_palettes;

layout(location = 3) in vec2 vs_out_uv_side_pattern;
layout(location = 6) in vec2 vs_out_uv_bottom_pattern;
layout(location = 4) in vec2 vs_out_uv_border_mask;
layout(location = 5) in vec2 vs_out_uv_center_pattern;
layout(location = 2) in vec3 vs_out_frag_position_ws;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    uint _55 = uint(material_data.seed ^ 234234);
    uint _515 = _55 + (_55 << 10u);
    uint _517 = _515 ^ (_515 >> 6u);
    uint _519 = _517 + (_517 << 3u);
    uint _521 = _519 ^ (_519 >> 11u);
    uint _103 = uint(material_data.seed ^ 794);
    uint _537 = _103 + (_103 << 10u);
    uint _539 = _537 ^ (_537 >> 6u);
    uint _541 = _539 + (_539 << 3u);
    uint _543 = _541 ^ (_541 >> 11u);
    vec4 sampled = texture(sampler2DArray(flag_textures_patterns, samplers_llr), vec3(vs_out_uv_side_pattern.x, 1.0 - vs_out_uv_side_pattern.y, float(int(round(mix(9.0, 11.0, uintBitsToFloat(((_521 + (_521 << 15u)) & 8388607u) | 1065353216u) - 1.0))))), current_view.mip_bias);
    vec4 sampled_1 = texture(sampler2DArray(flag_textures_patterns, samplers_llc), vec3(vs_out_uv_bottom_pattern.x, 1.0 - vs_out_uv_bottom_pattern.y, float(int(round(mix(0.0, 2.0, uintBitsToFloat(((_543 + (_543 << 15u)) & 8388607u) | 1065353216u) - 1.0))))), current_view.mip_bias);
    vec4 sampled_2 = texture(sampler2D(material_data_border_mask, samplers_llc), vs_out_uv_border_mask, current_view.mip_bias);
    float _175 = sampled_2.x;
    float is_side_pattern = sampled.x + sampled_1.x;
    vec4 sampled_3 = textureLod(sampler2DArray(flag_textures_patterns, samplers_llc), vec3(vs_out_uv_center_pattern.x, 1.0 - vs_out_uv_center_pattern.y, float((material_data.seed - 6 * (material_data.seed / 6)) + 3)), 0.0);
    float is_central_pattern = sampled_3.x;
    uint _193 = uint(material_data.color_id);
    vec3 _902;
    if (_175 > 0.89999997615814208984375)
    {
        _902 = texelFetch(flag_textures_palettes, ivec2(uvec2(1u, _193)), 0).xyz;
    }
    else
    {
        _902 = mix(mix(texelFetch(flag_textures_palettes, ivec2(uvec2(0u, _193)), 0).xyz, texelFetch(flag_textures_palettes, ivec2(uvec2(2u, _193)), 0).xyz, vec3(is_side_pattern)), texelFetch(flag_textures_palettes, ivec2(uvec2(3u, _193)), 0).xyz, vec3(is_central_pattern));
    }
    vec4 _556 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    vec3 _900;
    if (dot(normalize((_556.xyz / vec3(_556.w)) - vs_out_frag_position_ws), vs_out_frag_normal_ws) <= 0.0)
    {
        _900 = -vs_out_frag_normal_ws;
    }
    else
    {
        _900 = vs_out_frag_normal_ws;
    }
    vec3 _610 = (normalize(_900) * 0.5) + vec3(0.5);
    vec3 _718 = sqrt(clamp(_902, vec3(0.0), vec3(1.0)));
    uint _733 = (uint((clamp(_718.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_718.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_718.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _914 = uvec2(((uint((clamp(_610.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_610.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_610.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp((((_175 + is_side_pattern) + is_central_pattern) > 0.89999997615814208984375) ? 0.60000002384185791015625 : 1.0, 0.0, 1.0) * 255.0) + 0.5) << uint(24)), _733);
    _914.y = _733 | 117440512u;
    entryPointParam_ps_main_gbuffer = _914;
}

