#version 460
#extension GL_EXT_demote_to_helper_invocation : require

layout(set = 6, binding = 0, std140) uniform VisualTerrainHeightmap_natural
{
    uvec2 visual_terrain_heightmap_dims;
} visual_terrain_heightmap;

layout(set = 6, binding = 1) uniform texture2D visual_terrain_heightmap_visual_terrain_heightmap;
layout(set = 2, binding = 0) uniform sampler samplers_lnc;

layout(location = 0) in vec3 vs_out_pos_ws;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    float _118 = mix(-2.5, 24.0, textureLod(sampler2D(visual_terrain_heightmap_visual_terrain_heightmap, samplers_lnc), (vs_out_pos_ws.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0).x);
    bool _128;
    if (vs_out_pos_ws.y < _118)
    {
        _128 = true;
    }
    else
    {
        _128 = vs_out_pos_ws.y > (_118 + 1.25);
    }
    if (_128)
    {
        demote;
    }
    entryPointParam_ps_main_color = vec4(vec3(1.0), 1.0);
}

