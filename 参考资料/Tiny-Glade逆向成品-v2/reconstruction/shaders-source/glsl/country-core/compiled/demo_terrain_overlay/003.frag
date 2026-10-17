#version 460
#extension GL_EXT_demote_to_helper_invocation : require

layout(set = 0, binding = 0) uniform texture2D material_data_demo_overlay_texture;
layout(set = 2, binding = 1) uniform sampler samplers_llr;

layout(location = 1) in vec3 vs_out_frag_pos_ws;

void main()
{
    if (length(vs_out_frag_pos_ws.xz) < 15.0)
    {
        demote;
    }
}

