#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    Tex2D_natural brush_tex;
    uvec2 framebuffer_dims;
    vec2 first_thumbnail_center;
    float thumbnail_size;
    float hover;
    uint is_black_and_white;
    uint thumbnail_index;
} globalParams;

layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 2, binding = 3) uniform sampler samplers_llc;

layout(location = 0) in vec2 vs_out_uv;
layout(location = 1) in vec4 vs_out_tint;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec4 _48 = texture(nonuniformEXT(sampler2D(resource_handles[globalParams.brush_tex.bindless_handle], samplers_llc)), vs_out_uv).xxxx * vs_out_tint;
    vec3 _60 = _48.xyz * mix(1.0, 1.2000000476837158203125, globalParams.hover);
    vec4 _130 = _48;
    _130.x = _60.x;
    _130.y = _60.y;
    _130.z = _60.z;
    vec4 _141;
    if (globalParams.is_black_and_white == 1u)
    {
        float _120 = dot(_130.xyz, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875));
        vec4 _136 = _130;
        _136.x = _120;
        _136.y = _120;
        _136.z = _120;
        _141 = _136;
    }
    else
    {
        _141 = _130;
    }
    entryPointParam_ps_main_color = _141;
}

