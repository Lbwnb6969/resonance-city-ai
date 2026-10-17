#version 460
#extension GL_EXT_demote_to_helper_invocation : require

layout(push_constant, std430) uniform PushConstants_natural
{
    int vertex_count;
    float line_length;
    float opacity;
} push_constants;

layout(location = 1) in float vs_out_frag_t;
layout(location = 0) in vec3 vs_out_color;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    if (fract(vs_out_frag_t) > 0.5)
    {
        demote;
    }
    entryPointParam_ps_main_color = vec4(vs_out_color * push_constants.opacity, push_constants.opacity);
}

