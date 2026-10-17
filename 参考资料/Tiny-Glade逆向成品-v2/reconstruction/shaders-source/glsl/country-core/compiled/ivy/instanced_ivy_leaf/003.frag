#version 460
#extension GL_EXT_demote_to_helper_invocation : require

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 0, binding = 1) uniform texture2D material_data_ivy_leaf_color;

void main()
{
    uvec2 qpx = uvec2(gl_FragCoord.xy) & uvec2(1u);
    if ((frame_counter.index & 3u) == (qpx.x + (qpx.y * 2u)))
    {
        demote;
    }
}

