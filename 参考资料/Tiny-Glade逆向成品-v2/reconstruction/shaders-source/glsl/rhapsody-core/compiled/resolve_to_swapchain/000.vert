#version 460

layout(location = 0) out vec2 entryPointParam_vs_main_uv;

void main()
{
    uint _22 = uint(gl_VertexIndex);
    vec2 _78;
    vec4 _80;
    if (_22 == 0u)
    {
        _80 = vec4(-1.0, -1.0, 0.0, 1.0);
        _78 = vec2(0.0, 1.0);
    }
    else
    {
        bool _43 = _22 == 1u;
        _80 = mix(vec4(-1.0, 3.0, 0.0, 1.0), vec4(3.0, -1.0, 0.0, 1.0), bvec4(_43));
        _78 = mix(vec2(0.0, -1.0), vec2(2.0, 1.0), bvec2(_43));
    }
    gl_Position = _80;
    entryPointParam_vs_main_uv = _78;
}

