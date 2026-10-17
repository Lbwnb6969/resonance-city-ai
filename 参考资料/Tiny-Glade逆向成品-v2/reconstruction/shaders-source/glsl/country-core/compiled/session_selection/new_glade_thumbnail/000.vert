#version 460
#extension GL_EXT_scalar_block_layout : require

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    Tex2D_natural thumbnail_tex;
    uvec2 framebuffer_dims;
    vec2 first_thumbnail_center;
    float thumbnail_size;
    float hover;
    uint thumbnail_index;
} globalParams;

layout(location = 0) out vec2 entryPointParam_vs_main_uv;

void main()
{
    uint _24 = uint(gl_VertexIndex - gl_BaseVertex) % 6u;
    vec4 _206;
    do
    {
        if (_24 == 0u)
        {
            _206 = vec4(0.5, -0.5, 1.0, 0.0);
            break;
        }
        else
        {
            if (_24 == 1u)
            {
                _206 = vec4(0.5, 0.5, 1.0, 1.0);
                break;
            }
            else
            {
                if (_24 == 2u)
                {
                    _206 = vec4(-0.5, 0.5, 0.0, 1.0);
                    break;
                }
                else
                {
                    if (_24 == 3u)
                    {
                        _206 = vec4(-0.5, 0.5, 0.0, 1.0);
                        break;
                    }
                    else
                    {
                        if (_24 == 4u)
                        {
                            _206 = vec4(-0.5, -0.5, 0.0, 0.0);
                            break;
                        }
                        else
                        {
                            _206 = vec4(0.5, -0.5, 1.0, 0.0);
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
    vec2 _113 = (_206.xy * globalParams.thumbnail_size) + globalParams.first_thumbnail_center;
    _113.x = _113.x / (float(globalParams.framebuffer_dims.x) / float(globalParams.framebuffer_dims.y));
    vec2 _139 = _206.zw;
    _139.y = _206.w;
    gl_Position = vec4((_113 - vec2(0.5)) * vec2(2.0, -2.0), 0.0, 1.0);
    entryPointParam_vs_main_uv = _139;
}

