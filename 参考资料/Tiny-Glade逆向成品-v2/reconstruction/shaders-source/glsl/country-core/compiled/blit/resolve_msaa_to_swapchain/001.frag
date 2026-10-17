#version 460
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_samplerless_texture_functions : require

vec4 _371;

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    uint transform_image;
    uvec2 framebuffer_dims;
} globalParams;

layout(set = 0, binding = 1) uniform texture2DMS input_tex;

layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    ivec2 _14 = ivec2(gl_FragCoord.xy);
    ivec2 _361;
    if ((globalParams.transform_image & 1u) != 0u)
    {
        ivec2 _360 = _14;
        _360.y = int((globalParams.framebuffer_dims.y - 1u) - uint(_14.y));
        _361 = _360;
    }
    else
    {
        _361 = _14;
    }
    uvec2 _237 = uvec2(_361);
    uint _251 = uint(textureSamples(input_tex));
    vec3 _362;
    if (0u < _251)
    {
        _362 = texelFetch(input_tex, ivec2(_237), 0).xyz;
    }
    else
    {
        _362 = vec3(0.0);
    }
    vec3 _363;
    if (1u < _251)
    {
        _363 = _362 + texelFetch(input_tex, ivec2(_237), 1).xyz;
    }
    else
    {
        _363 = _362;
    }
    vec3 _364;
    if (2u < _251)
    {
        _364 = _363 + texelFetch(input_tex, ivec2(_237), 2).xyz;
    }
    else
    {
        _364 = _363;
    }
    vec3 _365;
    if (3u < _251)
    {
        _365 = _364 + texelFetch(input_tex, ivec2(_237), 3).xyz;
    }
    else
    {
        _365 = _364;
    }
    vec3 _304 = _365 / vec3(float(_251));
    float _307 = _304.x;
    float _366;
    if (0.003130800090730190277099609375 >= _307)
    {
        _366 = 12.9200000762939453125 * _307;
    }
    else
    {
        _366 = (1.05499994754791259765625 * pow(_307, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
    }
    float _309 = _304.y;
    float _367;
    if (0.003130800090730190277099609375 >= _309)
    {
        _367 = 12.9200000762939453125 * _309;
    }
    else
    {
        _367 = (1.05499994754791259765625 * pow(_309, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
    }
    float _311 = _304.z;
    float _368;
    if (0.003130800090730190277099609375 >= _311)
    {
        _368 = 12.9200000762939453125 * _311;
    }
    else
    {
        _368 = (1.05499994754791259765625 * pow(_311, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
    }
    entryPointParam_ps_main_color = vec4(vec3(_366, _367, _368), 1.0);
}

