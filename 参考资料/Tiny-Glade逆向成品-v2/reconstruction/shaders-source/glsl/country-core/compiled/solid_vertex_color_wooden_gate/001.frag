#version 460
#extension GL_EXT_scalar_block_layout : require

struct _MatrixStorage_float3x3_ColMajornatural
{
    vec3 data[3];
};

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

layout(set = 0, binding = 0, scalar) uniform MaterialData_natural
{
    int seed;
    int wall_slot_id;
    layout(row_major) mat4 model_to_world;
} material_data;

layout(set = 0, binding = 3, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} material_data_gate_color_ids;

layout(set = 0, binding = 1) uniform texture2D material_data_normal_map;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 0, binding = 2) uniform texture2D material_data_seed_map;
layout(set = 18, binding = 0) uniform texture2DArray window_colors_window_colors;

layout(location = 2) in vec3 vs_out_frag_position_ws;
layout(location = 3) in vec2 vs_out_frag_uv;
layout(location = 4) in _MatrixStorage_float3x3_ColMajornatural vs_out_frag_tangent_to_world;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec2 _47 = vs_out_frag_uv * 0.119999997317790985107421875;
    _47.y = 1.0 - _47.y;
    vec3 _77 = (texture(sampler2D(material_data_normal_map, samplers_llr), _47).xyz * 2.0) - vec3(1.0);
    _77.x = _77.x * float(int(sign(dFdx(vs_out_frag_uv.x))));
    vec3 _122 = normalize(_77 * mat3(vec3(vs_out_frag_tangent_to_world.data[0].x, vs_out_frag_tangent_to_world.data[1].x, vs_out_frag_tangent_to_world.data[2].x), vec3(vs_out_frag_tangent_to_world.data[0].y, vs_out_frag_tangent_to_world.data[1].y, vs_out_frag_tangent_to_world.data[2].y), vec3(vs_out_frag_tangent_to_world.data[0].z, vs_out_frag_tangent_to_world.data[1].z, vs_out_frag_tangent_to_world.data[2].z)));
    vec4 _511 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    vec3 _893;
    if (dot(normalize((_511.xyz / vec3(_511.w)) - vs_out_frag_position_ws), _122) < 0.0)
    {
        _893 = -_122;
    }
    else
    {
        _893 = _122;
    }
    vec4 sampled = texture(sampler2D(material_data_seed_map, samplers_llr), _47);
    float _171 = float(material_data.seed);
    uint _173 = uint((sampled.x * 255.0) + _171);
    uint _523 = _173 + (_173 << 10u);
    uint _525 = _523 ^ (_523 >> 6u);
    uint _527 = _525 + (_525 << 3u);
    uint _529 = _527 ^ (_527 >> 11u);
    float _537 = uintBitsToFloat(((_529 + (_529 << 15u)) & 8388607u) | 1065353216u) - 1.0;
    int _232 = int(material_data_gate_color_ids._member0[material_data.wall_slot_id]);
    vec4 _547 = texture(sampler2DArray(window_colors_window_colors, samplers_llr), vec3((_47 + vec2(_171 * 0.20000000298023223876953125)) + vec2(_537 * 0.4000000059604644775390625), float(_232)));
    vec3 _550 = _547.xyz;
    vec3 _891;
    if (_232 == 0)
    {
        _891 = _550 * 0.699999988079071044921875;
    }
    else
    {
        _891 = _550;
    }
    vec3 _596 = (_893 * 0.5) + vec3(0.5);
    vec3 _704 = sqrt(clamp(_891 * mix(0.89999997615814208984375, 1.2000000476837158203125, _537), vec3(0.0), vec3(1.0)));
    uint _719 = (uint((clamp(_704.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_704.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_704.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _907 = uvec2(((uint((clamp(_596.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_596.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_596.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3422552064u, _719);
    _907.y = _719 | 117440512u;
    entryPointParam_ps_main_gbuffer = _907;
}

