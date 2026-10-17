#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    Tex2D_natural thumbnail_tex;
    uvec2 framebuffer_dims;
    vec2 first_thumbnail_center;
    float thumbnail_size;
    float hover;
    uint thumbnail_index;
} globalParams;

layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 2, binding = 0) uniform sampler samplers_lnc;

layout(location = 0) in vec2 vs_out_uv;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec4 sampled = textureLod(nonuniformEXT(sampler2D(resource_handles[globalParams.thumbnail_tex.bindless_handle], samplers_lnc)), vs_out_uv, 0.0);
    vec3 _47 = sampled.xyz * sampled.w;
    vec4 _103 = sampled;
    _103.x = _47.x;
    _103.y = _47.y;
    _103.z = _47.z;
    vec3 _68 = _103.xyz * mix(0.800000011920928955078125, 1.0, globalParams.hover);
    vec4 _109 = _103;
    _109.x = _68.x;
    _109.y = _68.y;
    _109.z = _68.z;
    entryPointParam_ps_main_color = _109;
}

