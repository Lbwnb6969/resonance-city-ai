#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_samplerless_texture_functions : require

struct VermeerStrokePacked_natural
{
    uint pos;
    uint color;
    uint size_rotation;
    float appear_t;
};

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 1, std430) readonly buffer StructuredBuffer
{
    VermeerStrokePacked_natural _member0[];
} strokes_buf;

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    uint max_strokes;
    Tex2D_natural brush_tex;
    uvec2 framebuffer_dims;
    float progress_t;
    uint photomode;
} globalParams;

layout(set = 1, binding = 0) uniform texture2D resource_handles[];

layout(location = 0) flat out vec4 entryPointParam_vs_main_tint;
layout(location = 1) out vec2 entryPointParam_vs_main_uv;
layout(location = 2) flat out float entryPointParam_vs_main_appear_frac;
layout(location = 3) flat out uint entryPointParam_vs_main_stroke_idx;

void main()
{
    uint _49 = uint(gl_VertexIndex - gl_BaseVertex);
    uint stroke_idx = _49 / 6u;
    float _546 = float((strokes_buf._member0[stroke_idx].color >> uint(24)) & 255u) * 0.0039215688593685626983642578125;
    vec2 _496 = unpackHalf2x16(strokes_buf._member0[stroke_idx].size_rotation);
    float _498 = _496.x;
    float _500 = _496.y;
    float _153 = cos(_500);
    float _154 = sin(_500);
    uint _164 = _49 % 6u;
    vec4 _672;
    do
    {
        if (_164 == 0u)
        {
            _672 = vec4(0.5, -0.5, 1.0, 0.0);
            break;
        }
        else
        {
            if (_164 == 1u)
            {
                _672 = vec4(0.5, 0.5, 1.0, 1.0);
                break;
            }
            else
            {
                if (_164 == 2u)
                {
                    _672 = vec4(-0.5, 0.5, 0.0, 1.0);
                    break;
                }
                else
                {
                    if (_164 == 3u)
                    {
                        _672 = vec4(-0.5, 0.5, 0.0, 1.0);
                        break;
                    }
                    else
                    {
                        if (_164 == 4u)
                        {
                            _672 = vec4(-0.5, -0.5, 0.0, 0.0);
                            break;
                        }
                        else
                        {
                            _672 = vec4(0.5, -0.5, 1.0, 0.0);
                            break;
                        }
                        break; // unreachable workaround
                    }
                    break; // unreachable workaround
                }
                break; // unreachable workaround
            }
            break; // unreachable workaround
        }
        break; // unreachable workaround
    } while(false);
    uvec2 vecSize = uvec2(textureSize(resource_handles[nonuniformEXT(globalParams.brush_tex.bindless_handle)], 0));
    bool _240 = globalParams.photomode != 0u;
    float _673;
    if (_240)
    {
        _673 = clamp(_498, 0.0, 1.0);
    }
    else
    {
        _673 = clamp(2.0 * _498, 0.0, 1.0);
    }
    vec4 _671 = _672;
    _671.y = _672.y * mix(float(vecSize.y) / float(vecSize.x), 1.0, _673);
    float _676;
    if (_240)
    {
        _676 = uintBitsToFloat(0x7fbfffffu /* nan */);
    }
    else
    {
        _676 = clamp((float(stroke_idx + 1u) - 600.0) / (float(globalParams.max_strokes) - 600.0), 0.0, 1.0);
    }
    float _677;
    if (_240)
    {
        _677 = 0.0;
    }
    else
    {
        _677 = mix(0.0, 0.070000000298023223876953125, clamp(1.0 - (2.0 * _676), 0.0, 1.0));
    }
    vec3 _351 = pow(vec4(float(strokes_buf._member0[stroke_idx].color & 255u) * 0.0039215688593685626983642578125, float((strokes_buf._member0[stroke_idx].color >> uint(8)) & 255u) * 0.0039215688593685626983642578125, float((strokes_buf._member0[stroke_idx].color >> uint(16)) & 255u) * 0.0039215688593685626983642578125, _546).xyz, vec3(1.0 + _677)) * (1.0 + (0.5 * _677));
    float _592 = _351.x;
    float _678;
    if (0.040449999272823333740234375 < _592)
    {
        _678 = pow((_592 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _678 = _592 * 0.077399380505084991455078125;
    }
    float _594 = _351.y;
    float _679;
    if (0.040449999272823333740234375 < _594)
    {
        _679 = pow((_594 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _679 = _594 * 0.077399380505084991455078125;
    }
    float _596 = _351.z;
    float _680;
    if (0.040449999272823333740234375 < _596)
    {
        _680 = pow((_596 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _680 = _596 * 0.077399380505084991455078125;
    }
    vec3 _598 = vec3(_678, _679, _680);
    vec3 _681;
    if (uint(!_240) != 0u)
    {
        _681 = _598 * mix(1.0, clamp(0.3499999940395355224609375 / max(9.9999997473787516355514526367188e-06, dot(_598, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875))), 0.5, 1.39999997615814208984375), 0.699999988079071044921875 * (1.0 - smoothstep(0.0, 0.5, globalParams.progress_t)));
    }
    else
    {
        _681 = _598;
    }
    vec4 _429 = vec4(_681, 1.0) * _546;
    vec4 _687;
    if (_240)
    {
        _687 = _429 * 0.75;
    }
    else
    {
        _687 = _429 * mix(0.20000000298023223876953125, 0.800000011920928955078125, clamp(3.0 * _676, 0.0, 1.0));
    }
    gl_Position = vec4(((unpackHalf2x16(strokes_buf._member0[stroke_idx].pos) + (((_671.xy * mat2(vec2(_153, _154), vec2(-_154, _153))) * _498) * vec2(float(globalParams.framebuffer_dims.y) / float(globalParams.framebuffer_dims.x), 1.0))) - vec2(0.5)) * vec2(2.0, -2.0), 0.0, 1.0);
    entryPointParam_vs_main_tint = _687 * strokes_buf._member0[stroke_idx].appear_t;
    entryPointParam_vs_main_uv = _671.zw;
    entryPointParam_vs_main_appear_frac = 1.0;
    entryPointParam_vs_main_stroke_idx = stroke_idx;
}

