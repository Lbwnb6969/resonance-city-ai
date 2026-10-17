#version 460
#extension GL_EXT_demote_to_helper_invocation : require

layout(location = 2) in vec3 vs_out_vertex_position_ws;
layout(location = 8) flat in float vs_out_stone_foundation_clip_y;
layout(location = 7) in float vs_out_global_arch_height;
layout(location = 12) flat in int vs_out_flags;

void main()
{
    if (vs_out_vertex_position_ws.y < vs_out_stone_foundation_clip_y)
    {
        demote;
    }
    bool _75;
    if (vs_out_global_arch_height > 0.0)
    {
        _75 = vs_out_vertex_position_ws.y < vs_out_global_arch_height;
    }
    else
    {
        _75 = false;
    }
    if (_75)
    {
        demote;
    }
    bool _76;
    if ((vs_out_flags & 8) != 0)
    {
        _76 = vs_out_vertex_position_ws.y > vs_out_global_arch_height;
    }
    else
    {
        _76 = false;
    }
    if (_76)
    {
        demote;
    }
}

