#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    Tex2D_natural logo_tex;
    Tex2D_natural mods_tex;
} globalParams;

layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 2, binding = 3) uniform sampler samplers_llc;

layout(location = 1) flat in uint vs_out_texture_index;
layout(location = 0) in vec2 vs_out_uv;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec4 _135;
    if (vs_out_texture_index == 0u)
    {
        _135 = texture(nonuniformEXT(sampler2D(resource_handles[globalParams.logo_tex.bindless_handle], samplers_llc)), vs_out_uv, -0.5);
    }
    else
    {
        _135 = texture(nonuniformEXT(sampler2D(resource_handles[globalParams.mods_tex.bindless_handle], samplers_llc)), vs_out_uv, -0.5);
    }
    vec3 _73 = _135.xyz * _135.w;
    vec4 _124 = _135;
    _124.x = _73.x;
    _124.y = _73.y;
    _124.z = _73.z;
    vec3 _85 = _124.xyz * vec3(1.0, 0.89999997615814208984375, 0.85000002384185791015625);
    vec4 _130 = _124;
    _130.x = _85.x;
    _130.y = _85.y;
    _130.z = _85.z;
    entryPointParam_ps_main_color = _130;
}

