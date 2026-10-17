#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require

struct Bindless_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    vec3 ui_position;
    vec2 ui_size;
    vec2 window_size;
    Bindless_natural ui_texture;
    int texture_array_layer;
} globalParams;

layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 2, binding = 3) uniform sampler samplers_llc;
layout(set = 1, binding = 0) uniform texture2DArray resource_handles_1[];

layout(location = 0) in vec2 vs_out_frag_uv;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec4 _112;
    if (globalParams.texture_array_layer == (-1))
    {
        _112 = texture(nonuniformEXT(sampler2D(resource_handles[globalParams.ui_texture.bindless_handle], samplers_llc)), vs_out_frag_uv.xy, -1.0);
    }
    else
    {
        _112 = texture(nonuniformEXT(sampler2DArray(resource_handles_1[globalParams.ui_texture.bindless_handle], samplers_llc)), vec3(vs_out_frag_uv.xy, float(globalParams.texture_array_layer)), -1.0);
    }
    entryPointParam_ps_main_color = vec4(_112.xyz * _112.w, _112.w);
}

