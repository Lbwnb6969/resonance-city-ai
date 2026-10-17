#version 460

layout(set = 1, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 0, binding = 0) uniform texture2D input_tex;

layout(location = 0) in vec2 vs_out_uv;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec4 sampled = textureLod(sampler2D(input_tex, samplers_lnc_iso), vs_out_uv, 0.0);
    float _93 = sampled.x;
    float _145;
    if (0.003130800090730190277099609375 >= _93)
    {
        _145 = 12.9200000762939453125 * _93;
    }
    else
    {
        _145 = (1.05499994754791259765625 * pow(_93, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
    }
    float _95 = sampled.y;
    float _146;
    if (0.003130800090730190277099609375 >= _95)
    {
        _146 = 12.9200000762939453125 * _95;
    }
    else
    {
        _146 = (1.05499994754791259765625 * pow(_95, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
    }
    float _97 = sampled.z;
    float _147;
    if (0.003130800090730190277099609375 >= _97)
    {
        _147 = 12.9200000762939453125 * _97;
    }
    else
    {
        _147 = (1.05499994754791259765625 * pow(_97, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
    }
    entryPointParam_ps_main_color = vec4(_145, _146, _147, 1.0);
}

