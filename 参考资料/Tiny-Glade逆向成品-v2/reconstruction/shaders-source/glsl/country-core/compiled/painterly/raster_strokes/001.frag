#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    Tex2D_natural brush_tex;
    uvec2 framebuffer_dims;
    float current_t;
} globalParams;

layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 2, binding = 0) uniform sampler samplers_lnc;

layout(location = 1) in vec2 vs_out_uv;
layout(location = 2) flat in float vs_out_appear_frac;
layout(location = 0) flat in vec4 vs_out_tint;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec4 sampled = texture(nonuniformEXT(sampler2D(resource_handles[globalParams.brush_tex.bindless_handle], samplers_lnc)), vs_out_uv);
    float opacity = sampled.x;
    float _127;
    if (vs_out_appear_frac < 1.0)
    {
        vec2 uv1 = vs_out_uv - vec2(1.0 - vs_out_appear_frac, 0.0);
        _127 = sqrt(opacity * (float(all(equal(clamp(uv1, vec2(0.0), vec2(1.0)), uv1))) * texture(nonuniformEXT(sampler2D(resource_handles[globalParams.brush_tex.bindless_handle], samplers_lnc)), uv1).x));
    }
    else
    {
        _127 = opacity;
    }
    entryPointParam_ps_main_color = vs_out_tint * _127;
}

