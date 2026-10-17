#version 460
#extension GL_EXT_scalar_block_layout : require

struct Bindless_natural
{
    uint bindless_handle;
};

layout(set = 5, binding = 0, std140) uniform ViewConstants_natural
{
    layout(row_major) mat4 view_to_clip;
    layout(row_major) mat4 clip_to_view;
    layout(row_major) mat4 view_to_sample;
    layout(row_major) mat4 sample_to_view;
    layout(row_major) mat4 world_to_view;
    layout(row_major) mat4 view_to_world;
    layout(row_major) mat4 world_to_sample;
    layout(row_major) mat4 clip_to_prev_clip;
    layout(row_major) mat4 prev_clip_to_clip;
    layout(row_major) mat4 prev_view_to_prev_clip;
    layout(row_major) mat4 prev_clip_to_prev_view;
    layout(row_major) mat4 prev_world_to_prev_view;
    layout(row_major) mat4 prev_view_to_prev_world;
    vec2 sample_offset_pixels;
    vec2 sample_offset_clip;
    vec2 prev_sample_offset_pixels;
    vec2 prev_sample_offset_clip;
    layout(row_major) mat4 pad0;
    layout(row_major) mat4 pad1;
    vec4 pad2;
    float pad3;
    float pad4;
    float pad5;
    float mip_bias;
} current_view;

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    vec3 ui_position;
    vec2 ui_size;
    vec2 window_size;
    Bindless_natural ui_texture;
    int texture_array_layer;
} globalParams;

layout(location = 0) out vec2 entryPointParam_vs_main_frag_uv;

void main()
{
    uint _19 = uint(gl_VertexIndex - gl_BaseVertex);
    vec4 _205;
    do
    {
        if (_19 == 0u)
        {
            _205 = vec4(0.5, -0.5, 1.0, 0.0);
            break;
        }
        else
        {
            if (_19 == 1u)
            {
                _205 = vec4(0.5, 0.5, 1.0, 1.0);
                break;
            }
            else
            {
                if (_19 == 2u)
                {
                    _205 = vec4(-0.5, 0.5, 0.0, 1.0);
                    break;
                }
                else
                {
                    if (_19 == 3u)
                    {
                        _205 = vec4(-0.5, 0.5, 0.0, 1.0);
                        break;
                    }
                    else
                    {
                        if (_19 == 4u)
                        {
                            _205 = vec4(-0.5, -0.5, 0.0, 0.0);
                            break;
                        }
                        else
                        {
                            _205 = vec4(0.5, -0.5, 1.0, 0.0);
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
    gl_Position = vec4(((((-normalize((vec4(0.0, 1.0, 0.0, 0.0) * current_view.view_to_world).xyz)) * _205.y) * globalParams.ui_size.y) + ((normalize((vec4(1.0, 0.0, 0.0, 0.0) * current_view.view_to_world).xyz) * _205.x) * globalParams.ui_size.x)) + globalParams.ui_position, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_frag_uv = _205.zw;
}

