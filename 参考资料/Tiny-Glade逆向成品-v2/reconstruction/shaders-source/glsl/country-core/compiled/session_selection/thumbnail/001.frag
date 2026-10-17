#version 460

layout(set = 0, binding = 0, std140) uniform GlobalParams_natural
{
    uvec2 framebuffer_dims;
    vec2 first_thumbnail_center;
    vec2 thumbnail_size;
    float hover;
    uint thumbnail_index;
    uint is_black_and_white;
} globalParams;

layout(set = 1, binding = 0) uniform sampler samplers_lnc;
layout(set = 0, binding = 1) uniform texture2D thumbnail_tex;

layout(location = 0) in vec2 vs_out_uv;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec4 sampled = textureLod(sampler2D(thumbnail_tex, samplers_lnc), vs_out_uv, 0.0);
    vec3 _33 = sampled.xyz * sampled.w;
    vec4 _177 = sampled;
    _177.x = _33.x;
    _177.y = _33.y;
    _177.z = _33.z;
    vec2 _156 = abs(vs_out_uv - vec2(0.5)) + vec2(-0.224999964237213134765625);
    vec4 _78 = _177 * smoothstep(0.0, -0.2199999988079071044921875, (length(max(_156, vec2(0.0))) + min(max(_156.x, _156.y), 0.0)) - 0.300000011920928955078125);
    vec3 _93 = _78.xyz * mix(1.0, 1.2000000476837158203125, globalParams.hover);
    vec4 _183 = _78;
    _183.x = _93.x;
    _183.y = _93.y;
    _183.z = _93.z;
    vec4 _194;
    if (globalParams.is_black_and_white == 1u)
    {
        float _122 = dot(_183.xyz, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)) * 0.800000011920928955078125;
        vec4 _189 = _183;
        _189.x = _122;
        _189.y = _122;
        _189.z = _122;
        _194 = _189;
    }
    else
    {
        _194 = _183;
    }
    entryPointParam_ps_main_color = _194;
}

