#version 460
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_samplerless_texture_functions : require

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    uint transform_image;
    uvec2 framebuffer_dims;
} globalParams;

layout(set = 0, binding = 1) uniform texture2D input_tex;

layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    ivec2 _14 = ivec2(gl_FragCoord.xy);
    ivec2 _208;
    if ((globalParams.transform_image & 1u) != 0u)
    {
        ivec2 _207 = _14;
        _207.y = int((globalParams.framebuffer_dims.y - 1u) - uint(_14.y));
        _208 = _207;
    }
    else
    {
        _208 = _14;
    }
    vec4 _148 = texelFetch(input_tex, ivec2(uvec2(_208)), 0);
    float _154 = _148.x;
    float _209;
    if (0.003130800090730190277099609375 >= _154)
    {
        _209 = 12.9200000762939453125 * _154;
    }
    else
    {
        _209 = (1.05499994754791259765625 * pow(_154, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
    }
    float _156 = _148.y;
    float _210;
    if (0.003130800090730190277099609375 >= _156)
    {
        _210 = 12.9200000762939453125 * _156;
    }
    else
    {
        _210 = (1.05499994754791259765625 * pow(_156, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
    }
    float _158 = _148.z;
    float _211;
    if (0.003130800090730190277099609375 >= _158)
    {
        _211 = 12.9200000762939453125 * _158;
    }
    else
    {
        _211 = (1.05499994754791259765625 * pow(_158, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
    }
    entryPointParam_ps_main_color = vec4(vec3(_209, _210, _211), 1.0);
}

