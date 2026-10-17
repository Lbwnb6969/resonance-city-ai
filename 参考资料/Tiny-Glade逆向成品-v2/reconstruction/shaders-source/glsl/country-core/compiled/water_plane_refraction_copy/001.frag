#version 460
#extension GL_EXT_samplerless_texture_functions : require

vec4 _53;

layout(set = 0, binding = 1) uniform texture2D refraction_source_tex;

layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    entryPointParam_ps_main_color = vec4(texelFetch(refraction_source_tex, ivec2(uvec2(gl_FragCoord.xy)), 0).xyz, 1.0);
}

