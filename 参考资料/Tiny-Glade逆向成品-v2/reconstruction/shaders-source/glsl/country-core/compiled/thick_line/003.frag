#version 460
#extension GL_EXT_demote_to_helper_invocation : require

layout(push_constant, std430) uniform PushConstants_natural
{
    int point_count;
    float half_width_px;
    float line_length;
    float opacity;
    float res_x;
    float res_y;
} push_constants;

layout(location = 1) in float vs_out_frag_t;

void main()
{
    bool _42;
    if (push_constants.line_length > 0.0)
    {
        _42 = fract(vs_out_frag_t) > 0.5;
    }
    else
    {
        _42 = false;
    }
    if (_42)
    {
        demote;
    }
}

