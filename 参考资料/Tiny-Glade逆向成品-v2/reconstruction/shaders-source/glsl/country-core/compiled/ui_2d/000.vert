#version 460

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 0, std140) uniform GlobalParams_natural
{
    vec2 ui_position;
    vec2 ui_size;
    vec2 window_size;
    int darken_semitransparent;
    int highlight;
    Tex2D_natural ui_texture;
} globalParams;

layout(location = 0) out vec2 entryPointParam_vs_main_frag_uv;

void main()
{
    uint _21 = uint(gl_VertexIndex - gl_BaseVertex);
    vec4 _165;
    do
    {
        if (_21 == 0u)
        {
            _165 = vec4(0.5, -0.5, 1.0, 0.0);
            break;
        }
        else
        {
            if (_21 == 1u)
            {
                _165 = vec4(0.5, 0.5, 1.0, 1.0);
                break;
            }
            else
            {
                if (_21 == 2u)
                {
                    _165 = vec4(-0.5, 0.5, 0.0, 1.0);
                    break;
                }
                else
                {
                    if (_21 == 3u)
                    {
                        _165 = vec4(-0.5, 0.5, 0.0, 1.0);
                        break;
                    }
                    else
                    {
                        if (_21 == 4u)
                        {
                            _165 = vec4(-0.5, -0.5, 0.0, 0.0);
                            break;
                        }
                        else
                        {
                            _165 = vec4(0.5, -0.5, 1.0, 0.0);
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
    vec2 _94 = (globalParams.ui_position + (_165.xy * globalParams.ui_size)) / globalParams.window_size;
    _94.y = 1.0 - _94.y;
    gl_Position = vec4((_94 * 2.0) - vec2(1.0), 0.0, 1.0);
    entryPointParam_vs_main_frag_uv = _165.zw;
}

