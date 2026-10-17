#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require

struct Bindless_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    vec2 ui_position;
    vec2 ui_size;
    vec2 window_size;
    float animation_t;
    int is_original_color;
    Bindless_natural ui_texture;
    int texture_array_layer;
} globalParams;

layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 1, binding = 0) uniform texture2DArray resource_handles_1[];

layout(location = 0) in vec2 vs_out_frag_uv;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec4 _180;
    if (globalParams.texture_array_layer == (-1))
    {
        _180 = texture(nonuniformEXT(sampler2D(resource_handles[globalParams.ui_texture.bindless_handle], samplers_llr)), vs_out_frag_uv.xy, -0.75);
    }
    else
    {
        _180 = texture(nonuniformEXT(sampler2DArray(resource_handles_1[globalParams.ui_texture.bindless_handle], samplers_llr)), vec3(vs_out_frag_uv.xy, float(globalParams.texture_array_layer)), -0.75);
    }
    float _99 = length(abs(vs_out_frag_uv - vec2(0.5)) * 2.0);
    bool _110 = globalParams.is_original_color == 1;
    float _182;
    if (_110)
    {
        _182 = smoothstep(0.60000002384185791015625, 0.699999988079071044921875, _99);
    }
    else
    {
        _182 = smoothstep(0.800000011920928955078125, 0.89999997615814208984375, _99);
    }
    float _149 = clamp(_180.w + (_182 * 2.0), 0.0, 1.0);
    entryPointParam_ps_main_color = vec4(mix(_180.xyz, vec3(1.0), mix(vec3(0.4000000059604644775390625), vec3(0.89999997615814208984375), bvec3(_110)) * _182) * _149, _149) * ((1.0 - smoothstep(0.949999988079071044921875, 1.0, _99)) * pow(globalParams.animation_t, 0.20000000298023223876953125));
}

