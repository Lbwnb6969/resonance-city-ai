#version 460
#extension GL_EXT_demote_to_helper_invocation : require

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

layout(set = 0, binding = 0, std140) uniform MaterialData_natural
{
    int has_normal_map;
} material_data;

layout(set = 0, binding = 3) uniform texture2D material_data_alpha_map;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 0, binding = 1) uniform texture2D material_data_albedo_map;
layout(set = 0, binding = 4) uniform texture2D material_data_leafy_greens;
layout(set = 0, binding = 2) uniform texture2D material_data_normal_map;

layout(location = 4) in vec2 vs_out_frag_uv_alpha;

void main()
{
    if (texture(sampler2D(material_data_alpha_map, samplers_llr), vs_out_frag_uv_alpha).x < 0.5)
    {
        demote;
    }
    uvec2 qpx = uvec2(gl_FragCoord.xy) & uvec2(1u);
    if ((frame_counter.index & 3u) == (qpx.x + (qpx.y * 2u)))
    {
        demote;
    }
}

