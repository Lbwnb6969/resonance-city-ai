#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 20, binding = 0, scalar) uniform TerrainHeightmap_natural
{
    uvec2 terrain_heightmap_dims;
    Tex2D_natural bg_terrain_heightmap;
    Tex2D_natural bg_terrain_fog_height;
    vec2 bg_terrain_height_bounds_ws;
    vec4 bg_water_footprint_ws;
} terrain_heightmap;

layout(set = 18, binding = 0, std140) uniform ViewConstants_natural
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

layout(set = 20, binding = 1) uniform texture2D terrain_heightmap_terrain_heightmap;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 10, binding = 0) uniform texture2D rocky_terrain_tex;
layout(set = 2, binding = 3) uniform sampler samplers_llc;
layout(set = 11, binding = 0) uniform texture2D water_mask_tex;

layout(location = 0) out vec3 entryPointParam_vs_main_normal_ws;
layout(location = 1) out vec3 entryPointParam_vs_main_position_ws;

void main()
{
    uint _50 = uint(gl_VertexIndex - gl_BaseVertex);
    uvec2 grid_coord = uvec2(_50 % 93u, _50 / 93u);
    vec2 _521 = ((((vec2(ivec2(vec2(grid_coord))) + vec2(0.5)) * vec2(0.010752688162028789520263671875)) * 2.0) - vec2(1.0)) * vec2(67.16666412353515625);
    vec3 _524 = vec3(_521.x, 0.0, _521.y);
    float _536 = mix(-2.5, 24.0, textureLod(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), (_524.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0).x);
    vec3 _785 = _524;
    _785.y = _536;
    uvec2 _161 = min(grid_coord, (uvec2(92u) - grid_coord));
    uint _164 = min(_161.x, _161.y);
    bool _792;
    if (_164 <= 1u)
    {
        _792 = terrain_heightmap.bg_terrain_height_bounds_ws.x <= terrain_heightmap.bg_terrain_height_bounds_ws.y;
    }
    else
    {
        _792 = false;
    }
    vec3 _794;
    if (_792)
    {
        vec3 _795;
        if (_164 == 1u)
        {
            vec2 _556 = ((_785.xz * 0.9384615421295166015625) * vec2(0.001000000047497451305389404296875)) + vec2(0.5);
            vec3 _787 = _785;
            _787.y = max(_536, textureLod(nonuniformEXT(sampler2D(resource_handles[terrain_heightmap.bg_terrain_heightmap.bindless_handle], samplers_lnc_iso)), vec2(_556.y, 1.0 - _556.x), 0.0).x + 0.100000001490116119384765625);
            _795 = _787;
        }
        else
        {
            vec2 _578 = (_785.xz * vec2(0.001000000047497451305389404296875)) + vec2(0.5);
            vec3 _789 = _785;
            _789.y = max(textureLod(nonuniformEXT(sampler2D(resource_handles[terrain_heightmap.bg_terrain_heightmap.bindless_handle], samplers_lnc_iso)), vec2(_578.y, 1.0 - _578.x), 0.0).x - 0.0500000007450580596923828125, _536 - 3.0);
            _795 = _789;
        }
        _794 = _795;
    }
    else
    {
        _794 = _785;
    }
    vec2 _595;
    float _612;
    bool _613;
    float _799;
    do
    {
        _595 = (_794.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5);
        _612 = _595.x;
        _613 = _612 < 0.0;
        bool _796;
        if (_613)
        {
            _796 = true;
        }
        else
        {
            _796 = _612 > 1.0;
        }
        bool _797;
        if (_796)
        {
            _797 = true;
        }
        else
        {
            _797 = _595.y < 0.0;
        }
        bool _798;
        if (_797)
        {
            _798 = true;
        }
        else
        {
            _798 = _595.y > 1.0;
        }
        if (_798)
        {
            _799 = 0.0;
            break;
        }
        else
        {
            _799 = textureLod(sampler2D(rocky_terrain_tex, samplers_lnc_iso), _595, 0.0).x;
            break;
        }
        break; // unreachable workaround
    } while(false);
    float _807;
    do
    {
        bool _804;
        if (_613)
        {
            _804 = true;
        }
        else
        {
            _804 = _612 > 1.0;
        }
        bool _805;
        if (_804)
        {
            _805 = true;
        }
        else
        {
            _805 = _595.y < 0.0;
        }
        bool _806;
        if (_805)
        {
            _806 = true;
        }
        else
        {
            _806 = _595.y > 1.0;
        }
        if (_806)
        {
            _807 = 0.0;
            break;
        }
        else
        {
            _807 = textureLod(sampler2D(rocky_terrain_tex, samplers_lnc_iso), _595, 0.0).z;
            break;
        }
        break; // unreachable workaround
    } while(false);
    vec4 _701 = textureGather(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), _595);
    vec2 _704 = vec2(130.0) / vec2(terrain_heightmap.terrain_heightmap_dims);
    float _705 = _701.z;
    float _706 = _701.y;
    float _708 = _701.w;
    float _709 = _701.x;
    vec2 _719 = ((vec2((_705 + _706) - (_708 + _709), (_709 + _706) - (_708 + _705)) * vec2(0.5)) * 26.5) / _704;
    vec3 _683 = cross(normalize(vec3(0.0, _719.y, 1.0)), normalize(vec3(1.0, _719.x, 0.0)));
    vec4 _737 = textureGather(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), _595);
    float _741 = _737.z;
    float _742 = _737.y;
    float _744 = _737.w;
    float _745 = _737.x;
    float _434 = length(((vec2((_741 + _742) - (_744 + _745), (_745 + _742) - (_744 + _741)) * vec2(0.5)) * 26.5) / _704);
    vec3 _812;
    if (_434 < 2.0)
    {
        _812 = _794 - (_683 * mix(0.0, 0.5, clamp(_799 + _807, 0.0, 1.0)));
    }
    else
    {
        _812 = _794;
    }
    vec3 _791 = _812;
    _791.y = mix(_812.y, -0.800000011920928955078125, smoothstep(0.20000000298023223876953125, 0.60000002384185791015625, textureLod(sampler2D(water_mask_tex, samplers_llc), (_812.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0).y) * smoothstep(2.0, 3.0, _434));
    gl_Position = vec4(_791, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_normal_ws = _683;
    entryPointParam_vs_main_position_ws = _791;
}

