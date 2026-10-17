#version 460
#extension GL_EXT_scalar_block_layout : require

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    Tex2D_natural brush_tex;
    uvec2 framebuffer_dims;
    vec2 first_thumbnail_center;
    float thumbnail_size;
    float hover;
    uint is_black_and_white;
    uint thumbnail_index;
} globalParams;

layout(set = 2, binding = 0) uniform sampler samplers_lnc;
layout(set = 0, binding = 1) uniform texture2D thumbnail_tex;

layout(location = 0) out vec2 entryPointParam_vs_main_uv;
layout(location = 1) out vec4 entryPointParam_vs_main_tint;

void main()
{
    uint _36 = uint(gl_VertexIndex - gl_BaseVertex);
    uint stroke_idx = _36 / 6u;
    uint _43 = _36 % 6u;
    vec4 _617;
    do
    {
        if (_43 == 0u)
        {
            _617 = vec4(0.5, -0.5, 1.0, 0.0);
            break;
        }
        else
        {
            if (_43 == 1u)
            {
                _617 = vec4(0.5, 0.5, 1.0, 1.0);
                break;
            }
            else
            {
                if (_43 == 2u)
                {
                    _617 = vec4(-0.5, 0.5, 0.0, 1.0);
                    break;
                }
                else
                {
                    if (_43 == 3u)
                    {
                        _617 = vec4(-0.5, 0.5, 0.0, 1.0);
                        break;
                    }
                    else
                    {
                        if (_43 == 4u)
                        {
                            _617 = vec4(-0.5, -0.5, 0.0, 0.0);
                            break;
                        }
                        else
                        {
                            _617 = vec4(0.5, -0.5, 1.0, 0.0);
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
    float _100 = float(stroke_idx);
    float rot_a = _100 * 0.56984031200408935546875;
    float _103 = cos(rot_a);
    float _105 = sin(rot_a);
    vec2 _112 = _617.xy * mat2(vec2(_103, _105), vec2(-_105, _103));
    vec4 _603 = _617;
    _603.x = _112.x;
    _603.y = _112.y;
    _603.w = 1.0 - _617.w;
    uint _487 = globalParams.thumbnail_index + (globalParams.thumbnail_index << 10u);
    uint _489 = _487 ^ (_487 >> 6u);
    uint _491 = _489 + (_489 << 3u);
    uint _493 = _491 ^ (_491 >> 11u);
    uint _501 = (((stroke_idx * 1664525u) + (_493 + (_493 << 15u))) + 1013904223u) * 1664525u;
    uint _503 = _501 ^ (_501 >> 11u);
    uint _506 = _503 ^ ((_503 << 7u) & 2636928640u);
    uint _509 = _506 ^ ((_506 << 15u) & 4022730752u);
    uint _511 = _509 ^ (_509 >> 18u);
    float jitter_angle = _100 * 4.7430362701416015625;
    vec2 jitter = vec2(cos(jitter_angle), sin(jitter_angle)) * 0.5;
    float _207 = _100 * 0.0078125;
    float _210 = mix(0.5, 0.75, sqrt(_207));
    uint _520 = _511 + (_511 << 10u);
    uint _522 = _520 ^ (_520 >> 6u);
    uint _524 = _522 + (_522 << 3u);
    uint _526 = _524 ^ (_524 >> 11u);
    bool outlier = ((_526 + (_526 << 15u)) % 6u) == 0u;
    vec2 _618;
    if (outlier)
    {
        _618 = fract((vec2(0.75487768650054931640625, 0.56984031200408935546875) * _100) + vec2(0.5)) - vec2(0.5);
    }
    else
    {
        _618 = jitter * (((mix(0.800000011920928955078125, 1.2000000476837158203125, uintBitsToFloat((_511 & 8388607u) | 1065353216u) - 1.0) * 0.5) * _210) / max(abs(jitter.x), abs(jitter.y)));
    }
    vec2 _290 = (((_603.xy * globalParams.thumbnail_size) * (mix(0.25, 0.119999997317790985107421875, _207) * 2.0)) + (_618 * globalParams.thumbnail_size)) + globalParams.first_thumbnail_center;
    _290.x = _290.x / (float(globalParams.framebuffer_dims.x) / float(globalParams.framebuffer_dims.y));
    vec4 sampled = textureLod(sampler2D(thumbnail_tex, samplers_lnc), _618 + vec2(0.5), 0.0);
    vec3 _343 = sampled.xyz * sampled.w;
    vec4 _612 = sampled;
    _612.x = _343.x;
    _612.y = _343.y;
    _612.z = _343.z;
    float corner_radius = _210 * 0.080000005662441253662109375;
    vec4 _622;
    if (!outlier)
    {
        float _357 = 0.20000000298023223876953125 * _210;
        vec2 _568 = (abs(_618) - vec2(0.5 * _210)) + vec2(corner_radius);
        float _620;
        do
        {
            float _583 = abs((length(max(_568, vec2(0.0))) + min(max(_568.x, _568.y), 0.0)) - corner_radius);
            if (_583 > _357)
            {
                _620 = 0.0;
                break;
            }
            float _587 = _583 / _357;
            _620 = 1.0 - ((_587 * _587) * (3.0 - (2.0 * _587)));
            break;
        } while(false);
        _622 = _612 * _620;
    }
    else
    {
        _622 = _612 * 0.5;
    }
    vec4 _414 = _622 * 0.75;
    gl_Position = mix(mix(vec4((_290 - vec2(0.5)) * vec2(2.0, -2.0), 0.0, 1.0), vec4(0.0), bvec4((stroke_idx % 2u) != 0u)), vec4(uintBitsToFloat(0x7fbfffffu /* nan */)), bvec4(_414.w < 9.9999997473787516355514526367188e-05));
    entryPointParam_vs_main_uv = _603.zw;
    entryPointParam_vs_main_tint = _414;
}

