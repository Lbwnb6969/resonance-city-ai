#version 460

layout(set = 0, binding = 0, std140) uniform GlobalParams_natural
{
    uvec2 framebuffer_dims;
    vec2 first_thumbnail_center;
    vec2 thumbnail_size;
    float hover;
    uint thumbnail_index;
    uint is_black_and_white;
} globalParams;

layout(location = 0) out vec2 entryPointParam_vs_main_uv;

void main()
{
    uint _24 = uint(gl_VertexIndex - gl_BaseVertex) % 6u;
    vec4 _211;
    do
    {
        if (_24 == 0u)
        {
            _211 = vec4(0.5, -0.5, 1.0, 0.0);
            break;
        }
        else
        {
            if (_24 == 1u)
            {
                _211 = vec4(0.5, 0.5, 1.0, 1.0);
                break;
            }
            else
            {
                if (_24 == 2u)
                {
                    _211 = vec4(-0.5, 0.5, 0.0, 1.0);
                    break;
                }
                else
                {
                    if (_24 == 3u)
                    {
                        _211 = vec4(-0.5, 0.5, 0.0, 1.0);
                        break;
                    }
                    else
                    {
                        if (_24 == 4u)
                        {
                            _211 = vec4(-0.5, -0.5, 0.0, 0.0);
                            break;
                        }
                        else
                        {
                            _211 = vec4(0.5, -0.5, 1.0, 0.0);
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
    vec4 _205 = _211;
    _205.w = 1.0 - _211.w;
    vec2 _114 = ((_205.xy * 1.0499999523162841796875) * globalParams.thumbnail_size) + globalParams.first_thumbnail_center;
    _114.x = _114.x / (float(globalParams.framebuffer_dims.x) / float(globalParams.framebuffer_dims.y));
    vec2 _140 = mix(_205.zw, vec2(0.5), vec2(-0.0500000007450580596923828125));
    _140.y = 1.0 - _140.y;
    gl_Position = vec4((_114 - vec2(0.5)) * vec2(2.0, -2.0), 0.0, 1.0);
    entryPointParam_vs_main_uv = _140;
}

