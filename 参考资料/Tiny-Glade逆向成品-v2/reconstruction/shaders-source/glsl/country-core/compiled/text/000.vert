#version 460

struct PrimPacked_natural
{
    vec2 pos_min;
    vec2 pos_extent;
    vec2 uv_min;
    vec2 uv_extent;
    uint color;
    uint stream;
    uint clip_min;
    uint clip_max;
};

vec4 _732;

layout(set = 0, binding = 0, std140) uniform GlobalParams_natural
{
    vec2 window_size_pixels;
    uvec2 font_atlas_tex_dims;
    uvec2 blur_pyramid_tex_dims;
} globalParams;

layout(set = 0, binding = 1, std430) readonly buffer StructuredBuffer
{
    PrimPacked_natural _member0[];
} primitives;

layout(location = 0) out vec2 entryPointParam_vs_main_uv;
layout(location = 1) out vec4 entryPointParam_vs_main_prim_offset_extent;
layout(location = 2) out vec4 entryPointParam_vs_main_color_mult;
layout(location = 3) flat out uint entryPointParam_vs_main_stream;
layout(location = 4) flat out vec4 entryPointParam_vs_main_clip_px;

void main()
{
    uint _39 = uint(gl_VertexIndex - gl_BaseVertex);
    uint _40 = _39 % 6u;
    vec4 _708;
    do
    {
        if (_40 == 0u)
        {
            _708 = vec4(0.5, -0.5, 1.0, 0.0);
            break;
        }
        else
        {
            if (_40 == 1u)
            {
                _708 = vec4(0.5, 0.5, 1.0, 1.0);
                break;
            }
            else
            {
                if (_40 == 2u)
                {
                    _708 = vec4(-0.5, 0.5, 0.0, 1.0);
                    break;
                }
                else
                {
                    if (_40 == 3u)
                    {
                        _708 = vec4(-0.5, 0.5, 0.0, 1.0);
                        break;
                    }
                    else
                    {
                        if (_40 == 4u)
                        {
                            _708 = vec4(-0.5, -0.5, 0.0, 0.0);
                            break;
                        }
                        else
                        {
                            _708 = vec4(0.5, -0.5, 1.0, 0.0);
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
    float pixels_per_point = globalParams.window_size_pixels.y * 0.001000000047497451305389404296875;
    uint _111 = _39 / 6u;
    float _549 = float(primitives._member0[_111].color & 255u) * 0.0039215688593685626983642578125;
    float _555 = float((primitives._member0[_111].color >> uint(8)) & 255u);
    float _557 = _555 * 0.0039215688593685626983642578125;
    float _563 = float((primitives._member0[_111].color >> uint(16)) & 255u);
    float _565 = _563 * 0.0039215688593685626983642578125;
    float _571 = float((primitives._member0[_111].color >> uint(24)) & 255u);
    float _573 = _571 * 0.0039215688593685626983642578125;
    float _709;
    if (0.040449999272823333740234375 < _573)
    {
        _709 = pow((_573 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _709 = _571 * 0.000303526991046965122222900390625;
    }
    float _710;
    if (0.040449999272823333740234375 < _565)
    {
        _710 = pow((_565 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _710 = _563 * 0.000303526991046965122222900390625;
    }
    float _711;
    if (0.040449999272823333740234375 < _557)
    {
        _711 = pow((_557 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _711 = _555 * 0.000303526991046965122222900390625;
    }
    vec4 _703;
    _703.x = _709;
    _703.y = _710;
    _703.z = _711;
    vec2 _715;
    if (primitives._member0[_111].clip_max != 0u)
    {
        _715 = vec2(float(primitives._member0[_111].clip_max & 65535u), float(primitives._member0[_111].clip_max >> 16u)) * 0.125;
    }
    else
    {
        _715 = vec2(1000000000.0);
    }
    bool _717;
    if (primitives._member0[_111].stream == 0u)
    {
        _717 = true;
    }
    else
    {
        _717 = primitives._member0[_111].stream == 4294967295u;
    }
    vec2 _719;
    if (_717)
    {
        _719 = round(primitives._member0[_111].pos_min * pixels_per_point) / vec2(pixels_per_point);
    }
    else
    {
        _719 = primitives._member0[_111].pos_min;
    }
    vec2 px = _719 + (primitives._member0[_111].pos_extent * (_708.xy + vec2(0.5)));
    gl_Position = vec4(((px / (globalParams.window_size_pixels / vec2(pixels_per_point))) - vec2(0.5)) * vec2(2.0, -2.0), 0.0, 1.0);
    entryPointParam_vs_main_uv = mix((primitives._member0[_111].uv_min + (primitives._member0[_111].uv_extent * _708.zw)) / vec2(globalParams.font_atlas_tex_dims.xy), _708.zw, bvec2(primitives._member0[_111].stream != 0u));
    entryPointParam_vs_main_prim_offset_extent = vec4(px - (_719 + (primitives._member0[_111].pos_extent * 0.5)), primitives._member0[_111].pos_extent);
    entryPointParam_vs_main_color_mult = vec4(_703.xyz * _549, _549);
    entryPointParam_vs_main_stream = primitives._member0[_111].stream;
    entryPointParam_vs_main_clip_px = vec4(vec2(float(primitives._member0[_111].clip_min & 65535u), float(primitives._member0[_111].clip_min >> 16u)) * 0.125, _715) * pixels_per_point;
}

