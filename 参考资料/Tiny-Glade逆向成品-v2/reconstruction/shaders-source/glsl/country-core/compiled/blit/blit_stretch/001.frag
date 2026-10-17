#version 460

layout(set = 1, binding = 3) uniform sampler samplers_llc;
layout(set = 0, binding = 1) uniform texture2D input_tex;

layout(location = 0) in vec2 vs_out_uv;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    entryPointParam_ps_main_color = texture(sampler2D(input_tex, samplers_llc), vs_out_uv);
}

