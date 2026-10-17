#version 460
#extension GL_EXT_scalar_block_layout : require

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    uint max_strokes;
    uvec2 target_tex_dims;
    uvec2 output_tex_dims;
    uvec2 framebuffer_dims;
    float progress_t;
    uint photomode;
} globalParams;

layout(set = 1, binding = 0) uniform sampler samplers_lnc;
layout(set = 0, binding = 2) uniform texture2D output_tex;

layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec2 _170 = (vec2(ivec2(gl_FragCoord.xy)) + vec2(0.5)) / vec2(globalParams.framebuffer_dims);
    vec4 sampled = textureLod(sampler2D(output_tex, samplers_lnc), _170, 0.0);
    bool _69 = uint(!(globalParams.photomode != 0u)) != 0u;
    vec4 _198;
    if (_69)
    {
        float _72 = sampled.w;
        float _81 = mix(1.0, _72, smoothstep(0.2800000011920928955078125, 0.4899999797344207763671875, globalParams.progress_t));
        _198 = vec4(sampled.xyz * min(2.0, _81 / _72), _81);
    }
    else
    {
        _198 = sampled;
    }
    vec4 _199;
    if (_69)
    {
        float _125 = length(_170 - vec2(0.5));
        vec3 _137 = _198.xyz * exp((clamp(1.0 - globalParams.progress_t, 0.0, 1.0) * (-1.39999997615814208984375)) * (((_125 * _125) * _125) * _125));
        vec4 _193 = _198;
        _193.x = _137.x;
        _193.y = _137.y;
        _193.z = _137.z;
        _199 = _193;
    }
    else
    {
        _199 = _198;
    }
    entryPointParam_ps_main_color = _199;
}

