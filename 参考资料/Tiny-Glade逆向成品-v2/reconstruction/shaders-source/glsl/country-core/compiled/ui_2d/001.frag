#version 460
#extension GL_EXT_nonuniform_qualifier : require

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 0, std140) uniform GlobalParams_natural
{
    vec2 ui_position;
    vec2 ui_size;
    vec2 window_size;
    int darken_semitransparent;
    int highlight;
    Tex2D_natural ui_texture;
} globalParams;

layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 2, binding = 3) uniform sampler samplers_llc;

layout(location = 0) in vec2 vs_out_frag_uv;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec4 sampled = texture(nonuniformEXT(sampler2D(resource_handles[globalParams.ui_texture.bindless_handle], samplers_llc)), vs_out_frag_uv.xy, -1.0);
    vec3 _49 = sampled.xyz;
    float _50 = sampled.w;
    vec4 _144;
    if (globalParams.darken_semitransparent == 1)
    {
        _144 = vec4(((_49 * mix(_49, vec3(0.4000000059604644775390625), vec3(0.89999997615814208984375))) * _50) * 0.60000002384185791015625, _50 * 0.60000002384185791015625);
    }
    else
    {
        _144 = vec4(_49 * _50, _50);
    }
    vec4 _145;
    if (globalParams.highlight == 1)
    {
        vec3 _101 = mix(vec3(0.080000005662441253662109375, 0.048000000417232513427734375, 0.064000003039836883544921875), vec3(0.722500026226043701171875, 0.467500030994415283203125, 0.17000000178813934326171875), vec3(1.0 - smoothstep(0.0, 0.60000002384185791015625, length(_144.xyz)))) * _144.w;
        vec4 _139 = _144;
        _139.x = _101.x;
        _139.y = _101.y;
        _139.z = _101.z;
        _145 = _139;
    }
    else
    {
        _145 = _144;
    }
    entryPointParam_ps_main_color = _145;
}

