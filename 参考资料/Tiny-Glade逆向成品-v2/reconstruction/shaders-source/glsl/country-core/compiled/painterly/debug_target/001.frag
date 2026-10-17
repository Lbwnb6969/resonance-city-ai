#version 460
#extension GL_EXT_demote_to_helper_invocation : require

layout(set = 0, binding = 0, std140) uniform GlobalParams_natural
{
    uvec2 target_tex_dims;
    uvec2 framebuffer_dims;
} globalParams;

layout(set = 1, binding = 0) uniform sampler samplers_lnc;
layout(set = 0, binding = 1) uniform texture2D target_tex;

layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    demote;
    entryPointParam_ps_main_color = vec4(textureLod(sampler2D(target_tex, samplers_lnc), (vec2(ivec2(gl_FragCoord.xy)) + vec2(0.5)) / vec2(globalParams.framebuffer_dims), 0.0).xyz, 1.0);
}

