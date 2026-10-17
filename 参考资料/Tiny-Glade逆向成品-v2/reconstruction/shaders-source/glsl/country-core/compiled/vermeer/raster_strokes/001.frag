#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    uint max_strokes;
    Tex2D_natural brush_tex;
    uvec2 framebuffer_dims;
    float progress_t;
    uint photomode;
} globalParams;

layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 2, binding = 0) uniform sampler samplers_lnc;

layout(location = 1) in vec2 vs_out_uv;
layout(location = 2) flat in float vs_out_appear_frac;
layout(location = 3) flat in uint vs_out_stroke_idx;
layout(location = 0) flat in vec4 vs_out_tint;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec4 sampled = texture(nonuniformEXT(sampler2D(resource_handles[globalParams.brush_tex.bindless_handle], samplers_lnc)), vs_out_uv);
    float opacity = sampled.x;
    float _224;
    if (vs_out_appear_frac < 1.0)
    {
        vec2 uv1 = vs_out_uv - vec2(1.0 - vs_out_appear_frac, 0.0);
        _224 = sqrt(opacity * (float(all(equal(clamp(uv1, vec2(0.0), vec2(1.0)), uv1))) * texture(nonuniformEXT(sampler2D(resource_handles[globalParams.brush_tex.bindless_handle], samplers_lnc)), uv1).x));
    }
    else
    {
        _224 = opacity;
    }
    float _225;
    if (uint(!(globalParams.photomode != 0u)) != 0u)
    {
        uvec2 _109 = uvec2(gl_FragCoord.xy);
        float _206 = (fract(fract(52.98291778564453125 * fract((0.067110560834407806396484375 * float(_109.x)) + (0.005837149918079376220703125 * float(_109.y)))) + fract(float(vs_out_stroke_idx) * 1.61803400516510009765625)) * 2.0) - 1.0;
        _225 = clamp(_224 + (0.20000000298023223876953125 * (max(-1.0, _206 * inversesqrt(1.1754943508222875079687365372222e-38 + abs(_206))) - float(int(sign(_206))))), 0.0, 1.0);
    }
    else
    {
        _225 = _224;
    }
    entryPointParam_ps_main_color = vs_out_tint * _225;
}

