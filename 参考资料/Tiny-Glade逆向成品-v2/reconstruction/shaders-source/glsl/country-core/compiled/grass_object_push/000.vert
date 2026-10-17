#version 460

layout(push_constant, std430) uniform PushConstants_natural
{
    vec4 obj_position_radius;
    float push_strength;
} push_constants;

layout(location = 0) out vec2 entryPointParam_vs_main_frag_uv;

void main()
{
    uint _19 = uint(gl_VertexIndex - gl_BaseVertex);
    vec4 _168;
    do
    {
        if (_19 == 0u)
        {
            _168 = vec4(0.5, -0.5, 1.0, 0.0);
            break;
        }
        else
        {
            if (_19 == 1u)
            {
                _168 = vec4(0.5, 0.5, 1.0, 1.0);
                break;
            }
            else
            {
                if (_19 == 2u)
                {
                    _168 = vec4(-0.5, 0.5, 0.0, 1.0);
                    break;
                }
                else
                {
                    if (_19 == 3u)
                    {
                        _168 = vec4(-0.5, 0.5, 0.0, 1.0);
                        break;
                    }
                    else
                    {
                        if (_19 == 4u)
                        {
                            _168 = vec4(-0.5, -0.5, 0.0, 0.0);
                            break;
                        }
                        else
                        {
                            _168 = vec4(0.5, -0.5, 1.0, 0.0);
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
    gl_Position = vec4((push_constants.obj_position_radius.xz + (_168.xy * push_constants.obj_position_radius.w)) * vec2(0.015384615398943424224853515625, -0.015384615398943424224853515625), 0.0, 1.0);
    entryPointParam_vs_main_frag_uv = _168.zw;
}

