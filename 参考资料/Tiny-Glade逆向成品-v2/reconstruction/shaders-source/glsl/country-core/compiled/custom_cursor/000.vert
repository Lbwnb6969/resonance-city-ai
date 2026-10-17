#version 460
#extension GL_EXT_scalar_block_layout : require

struct CustomCursor_natural
{
    vec2 pos;
    uint enabled;
    float size_px;
};

struct Bindless_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 1, std430) readonly buffer StructuredBuffer
{
    CustomCursor_natural _member0[];
} cursor_buf;

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    uvec2 window_size_pixels;
    Bindless_natural cursor_tex;
} globalParams;

layout(location = 0) out vec2 entryPointParam_vs_main_uv;

void main()
{
    uint _24 = uint(gl_VertexIndex - gl_BaseVertex);
    vec4 _208;
    do
    {
        if (_24 == 0u)
        {
            _208 = vec4(0.5, -0.5, 1.0, 1.0);
            break;
        }
        else
        {
            if (_24 == 1u)
            {
                _208 = vec4(0.5, 0.5, 1.0, 0.0);
                break;
            }
            else
            {
                if (_24 == 2u)
                {
                    _208 = vec4(-0.5, 0.5, 0.0, 0.0);
                    break;
                }
                else
                {
                    if (_24 == 3u)
                    {
                        _208 = vec4(-0.5, 0.5, 0.0, 0.0);
                        break;
                    }
                    else
                    {
                        if (_24 == 4u)
                        {
                            _208 = vec4(-0.5, -0.5, 0.0, 1.0);
                            break;
                        }
                        else
                        {
                            _208 = vec4(0.5, -0.5, 1.0, 1.0);
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
    gl_Position = mix(vec4(((((((_208.xy * vec2(1.0, -1.0)) + vec2(0.5)) * cursor_buf._member0[0].size_px) + (cursor_buf._member0[0].pos - vec2(1.0))) / vec2(globalParams.window_size_pixels)) - vec2(0.5)) * vec2(2.0, -2.0), 1.0, 1.0), vec4(uintBitsToFloat(0x7fbfffffu /* nan */)), bvec4(0u == cursor_buf._member0[0].enabled));
    entryPointParam_vs_main_uv = _208.zw;
}

