#version 460
#extension GL_EXT_scalar_block_layout : require

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    layout(row_major) mat4 world_to_clip;
    layout(row_major) mat4 world_to_view;
    uint has_albedo_map;
    uint has_emissive_map;
    uint albedo_gated_by_vertex_flag;
    vec3 emissive_factor;
} globalParams;

layout(push_constant, std430) uniform EntryPointParams_natural
{
    vec3 floor_albedo;
} entryPointParams;

layout(set = 1, binding = 1) uniform sampler samplers_llr;
layout(set = 0, binding = 1) uniform texture2D albedo_map;
layout(set = 0, binding = 2) uniform texture2D emissive_map;

layout(location = 0) in vec3 vs_out_color;
layout(location = 4) flat in int vs_out_flags;
layout(location = 1) in vec2 vs_out_uv;
layout(location = 2) in vec3 vs_out_normal_view;
layout(location = 3) in float vs_out_view_z;
layout(location = 0) out vec4 entryPointParam_ps_main_albedo;
layout(location = 1) out vec4 entryPointParam_ps_main_normal;
layout(location = 2) out float entryPointParam_ps_main_view_z;
layout(location = 3) out vec4 entryPointParam_ps_main_emissive;

void main()
{
    bool _216;
    if (globalParams.has_albedo_map != 0u)
    {
        bool _217;
        if (globalParams.albedo_gated_by_vertex_flag == 0u)
        {
            _217 = true;
        }
        else
        {
            _217 = (vs_out_flags & 2) != 0;
        }
        _216 = _217;
    }
    else
    {
        _216 = false;
    }
    vec3 _220;
    if (_216)
    {
        _220 = vs_out_color * textureLod(sampler2D(albedo_map, samplers_llr), vs_out_uv, 0.0).xyz;
    }
    else
    {
        _220 = vs_out_color;
    }
    vec3 _224;
    if (globalParams.has_emissive_map != 0u)
    {
        _224 = globalParams.emissive_factor * textureLod(sampler2D(emissive_map, samplers_llr), vs_out_uv, 0.0).xyz;
    }
    else
    {
        _224 = globalParams.emissive_factor;
    }
    bool is_floor = (vs_out_flags & 1073741824) != 0;
    vec4 _141 = vec4(_220, is_floor ? 0.5 : 1.0);
    vec4 _227;
    if (is_floor)
    {
        vec4 _211 = _141;
        _211.x = entryPointParams.floor_albedo.x;
        _211.y = entryPointParams.floor_albedo.y;
        _211.z = entryPointParams.floor_albedo.z;
        _227 = _211;
    }
    else
    {
        _227 = _141;
    }
    entryPointParam_ps_main_albedo = _227;
    entryPointParam_ps_main_normal = vec4((normalize(vs_out_normal_view) * 0.5) + vec3(0.5), 1.0);
    entryPointParam_ps_main_view_z = vs_out_view_z;
    entryPointParam_ps_main_emissive = vec4(mix(_224, vec3(0.0), bvec3(is_floor)), 1.0);
}

