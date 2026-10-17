#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_samplerless_texture_functions : require

struct PainterlyStrokePacked_natural
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
    PainterlyStrokePacked_natural _member0[];
} strokes_buf;

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    Tex2D_natural brush_tex;
    uvec2 framebuffer_dims;
    float current_t;
} globalParams;

layout(set = 1, binding = 0) uniform texture2D resource_handles[];

layout(location = 0) flat out vec4 entryPointParam_vs_main_tint;
layout(location = 1) out vec2 entryPointParam_vs_main_uv;
layout(location = 2) flat out float entryPointParam_vs_main_appear_frac;

void main()
{
    uint _29 = uint(gl_VertexIndex - gl_BaseVertex);
    uint stroke_idx = _29 / 6u;
    float _392 = float(strokes_buf._member0[stroke_idx].color & 255u);
    float _394 = _392 * 0.0039215688593685626983642578125;
    float _400 = float((strokes_buf._member0[stroke_idx].color >> uint(8)) & 255u);
    float _402 = _400 * 0.0039215688593685626983642578125;
    float _408 = float((strokes_buf._member0[stroke_idx].color >> uint(16)) & 255u);
    float _410 = _408 * 0.0039215688593685626983642578125;
    vec2 _368 = unpackHalf2x16(strokes_buf._member0[stroke_idx].size_rotation);
    float _372 = _368.y;
    float _136 = cos(_372);
    float _137 = sin(_372);
    uint _147 = _29 % 6u;
    vec4 _530;
    do
    {
        if (_147 == 0u)
        {
            _530 = vec4(0.5, -0.5, 1.0, 0.0);
            break;
        }
        else
        {
            if (_147 == 1u)
            {
                _530 = vec4(0.5, 0.5, 1.0, 1.0);
                break;
            }
            else
            {
                if (_147 == 2u)
                {
                    _530 = vec4(-0.5, 0.5, 0.0, 1.0);
                    break;
                }
                else
                {
                    if (_147 == 3u)
                    {
                        _530 = vec4(-0.5, 0.5, 0.0, 1.0);
                        break;
                    }
                    else
                    {
                        if (_147 == 4u)
                        {
                            _530 = vec4(-0.5, -0.5, 0.0, 0.0);
                            break;
                        }
                        else
                        {
                            _530 = vec4(0.5, -0.5, 1.0, 0.0);
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
    vec4 _526 = _530;
    _526.y = _530.y * mix(1.0, float(vecSize.y) / float(vecSize.x), pow(float(stroke_idx) * 0.0009765625, 0.25));
    vec2 _449 = ((unpackHalf2x16(strokes_buf._member0[stroke_idx].pos) + ((_526.xy * mat2(vec2(_136, _137), vec2(-_137, _136))) * _368.x)) - vec2(0.5)) * vec2(2.0, -2.0);
    _449.x = _449.x / (float(globalParams.framebuffer_dims.x) / float(globalParams.framebuffer_dims.y));
    float _531;
    if (0.040449999272823333740234375 < _394)
    {
        _531 = pow((_394 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _531 = _392 * 0.000303526991046965122222900390625;
    }
    float _532;
    if (0.040449999272823333740234375 < _402)
    {
        _532 = pow((_402 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _532 = _400 * 0.000303526991046965122222900390625;
    }
    float _533;
    if (0.040449999272823333740234375 < _410)
    {
        _533 = pow((_410 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _533 = _408 * 0.000303526991046965122222900390625;
    }
    gl_Position = vec4(_449, 0.0, 1.0);
    entryPointParam_vs_main_tint = vec4(vec3(_531, _532, _533), 1.0) * 0.75;
    entryPointParam_vs_main_uv = _526.zw;
    entryPointParam_vs_main_appear_frac = smoothstep(strokes_buf._member0[stroke_idx].appear_t, strokes_buf._member0[stroke_idx].appear_t + 0.100000001490116119384765625, globalParams.current_t);
}

