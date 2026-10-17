#version 460

layout(location = 0) out vec2 entryPointParam_vs_main_uv;

void main()
{
    uint _25 = uint(gl_VertexIndex - gl_BaseVertex);
    vec2 _83;
    vec4 _85;
    if (_25 == 0u)
    {
        _85 = vec4(-1.0, -1.0, 0.0, 1.0);
        _83 = vec2(0.0, 1.0);
    }
    else
    {
        bool _48 = _25 == 1u;
        _85 = mix(vec4(-1.0, 3.0, 0.0, 1.0), vec4(3.0, -1.0, 0.0, 1.0), bvec4(_48));
        _83 = mix(vec2(0.0, -1.0), vec2(2.0, 1.0), bvec2(_48));
    }
    gl_Position = _85;
    entryPointParam_vs_main_uv = _83;
}

