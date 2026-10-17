#version 460

layout(set = 1, binding = 3) uniform sampler samplers_llc;
layout(set = 0, binding = 1) uniform texture2D input_tex;

layout(location = 0) in vec2 vs_out_uv;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec4 sampled = texture(sampler2D(input_tex, samplers_llc), vs_out_uv);
    float _102 = sampled.x;
    float _159;
    if (0.040449999272823333740234375 < _102)
    {
        _159 = pow((_102 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _159 = _102 * 0.077399380505084991455078125;
    }
    float _104 = sampled.y;
    float _160;
    if (0.040449999272823333740234375 < _104)
    {
        _160 = pow((_104 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _160 = _104 * 0.077399380505084991455078125;
    }
    float _106 = sampled.z;
    float _161;
    if (0.040449999272823333740234375 < _106)
    {
        _161 = pow((_106 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _161 = _106 * 0.077399380505084991455078125;
    }
    sampled.x = _159;
    sampled.y = _160;
    sampled.z = _161;
    entryPointParam_ps_main_color = sampled;
}

