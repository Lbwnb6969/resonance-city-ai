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
layout(location = 0) in vec3 vs_out_color;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    bool _100;
    if (push_constants.line_length > 0.0)
    {
        _100 = fract(vs_out_frag_t) > 0.5;
    }
    else
    {
        _100 = false;
    }
    if (_100)
    {
        demote;
    }
    entryPointParam_ps_main_color = vec4(vs_out_color * push_constants.opacity, push_constants.opacity);
}

