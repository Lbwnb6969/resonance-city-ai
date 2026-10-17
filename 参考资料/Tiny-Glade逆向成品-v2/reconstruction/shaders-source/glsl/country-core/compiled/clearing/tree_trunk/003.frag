#version 460
#extension GL_EXT_demote_to_helper_invocation : require

layout(location = 3) in float vs_out_anim_t;

void main()
{
    if (vs_out_anim_t < 0.300000011920928955078125)
    {
        demote;
    }
}

