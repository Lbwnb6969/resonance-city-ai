#version 460

layout(location = 0) in float vs_out_frag_alpha;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    entryPointParam_ps_main_color = vec4(vs_out_frag_alpha);
}

