#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require

struct Bindless_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    uvec2 window_size_pixels;
    Bindless_natural cursor_tex;
} globalParams;

layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 2, binding = 3) uniform sampler samplers_llc;

layout(location = 0) in vec2 vs_out_uv;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec4 sampled = texture(nonuniformEXT(sampler2D(resource_handles[globalParams.cursor_tex.bindless_handle], samplers_llc)), vs_out_uv.xy, -0.5);
    vec3 _49 = sampled.xyz * sampled.w;
    vec4 _86 = sampled;
    _86.x = _49.x;
    _86.y = _49.y;
    _86.z = _49.z;
    entryPointParam_ps_main_color = _86;
}

