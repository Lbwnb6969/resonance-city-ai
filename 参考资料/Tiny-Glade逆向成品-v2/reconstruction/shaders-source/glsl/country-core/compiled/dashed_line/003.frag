#version 460
#extension GL_EXT_demote_to_helper_invocation : require

layout(location = 1) in float vs_out_frag_t;

void main()
{
    if (fract(vs_out_frag_t) > 0.5)
    {
        demote;
    }
}

