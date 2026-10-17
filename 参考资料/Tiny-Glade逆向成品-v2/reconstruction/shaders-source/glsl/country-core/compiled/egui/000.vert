#version 460

layout(set = 0, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} vertices;

layout(push_constant, std430) uniform PushConstants_natural
{
    vec2 screen_size;
} push_constants;

layout(location = 0) out vec4 entryPointParam_vs_main_color;
layout(location = 1) out vec2 entryPointParam_vs_main_uv;

void main()
{
    uint _210 = 20u * uint(gl_VertexIndex - gl_BaseVertex);
    vec4 _227 = uintBitsToFloat(uvec4(vertices._member0[_210 / 4u], vertices._member0[(_210 + 4u) / 4u], vertices._member0[(_210 + 8u) / 4u], vertices._member0[(_210 + 12u) / 4u]));
    uint _236 = uint(int(_210 + 16u)) / 4u;
    float _255 = float(vertices._member0[_236] & 255u);
    float _257 = _255 * 0.0039215688593685626983642578125;
    float _263 = float((vertices._member0[_236] >> uint(8)) & 255u);
    float _265 = _263 * 0.0039215688593685626983642578125;
    float _271 = float((vertices._member0[_236] >> uint(16)) & 255u);
    float _273 = _271 * 0.0039215688593685626983642578125;
    vec4 _249 = vec4(_257, _265, _273, float((vertices._member0[_236] >> uint(24)) & 255u) * 0.0039215688593685626983642578125);
    float _352;
    if (0.040449999272823333740234375 < _257)
    {
        _352 = pow((_257 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _352 = _255 * 0.000303526991046965122222900390625;
    }
    float _353;
    if (0.040449999272823333740234375 < _265)
    {
        _353 = pow((_265 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _353 = _263 * 0.000303526991046965122222900390625;
    }
    float _354;
    if (0.040449999272823333740234375 < _273)
    {
        _354 = pow((_273 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _354 = _271 * 0.000303526991046965122222900390625;
    }
    _249.x = _352;
    _249.y = _353;
    _249.z = _354;
    gl_Position = vec4(((_227.xy / push_constants.screen_size) - vec2(0.5)) * vec2(2.0, -2.0), 0.0, 1.0);
    entryPointParam_vs_main_color = _249;
    entryPointParam_vs_main_uv = _227.zw;
}

