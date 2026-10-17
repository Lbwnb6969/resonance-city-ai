#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_samplerless_texture_functions : require

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    Tex2D_natural background_tex;
    uvec2 framebuffer_dims;
    vec2 first_thumbnail_center;
} globalParams;

layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 2, binding = 1) uniform sampler samplers_llr;

layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec2 _38 = gl_FragCoord.xy / vec2(globalParams.framebuffer_dims);
    vec2 _592 = _38;
    _592.x = _38.x * (float(globalParams.framebuffer_dims.x) / float(globalParams.framebuffer_dims.y));
    vec2 _52 = (_592 - globalParams.first_thumbnail_center) * 2.0;
    vec2 _74 = vec2(uvec2(textureSize(resource_handles[nonuniformEXT(globalParams.background_tex.bindless_handle)], 0)));
    vec2 _385 = mat2(vec2(1.0, 0.0), vec2(-0.57735025882720947265625, 1.1547005176544189453125)) * (_52 * 3.4639999866485595703125);
    vec2 _386 = floor(_385);
    vec2 _387 = fract(_385);
    float _390 = _387.x;
    float _391 = 1.0 - _390;
    float _392 = _387.y;
    float _393 = _391 - _392;
    bool _397 = _393 > 0.0;
    vec3 _607;
    if (_397)
    {
        _607 = vec3(_386, _393);
    }
    else
    {
        _607 = vec3(_386 + vec2(1.0), -_393);
    }
    vec3 _608;
    if (_397)
    {
        _608 = vec3(_386 + vec2(0.0, 1.0), _392);
    }
    else
    {
        _608 = vec3(_386 + vec2(1.0, 0.0), 1.0 - _392);
    }
    vec3 _609;
    if (_397)
    {
        _609 = vec3(_386 + vec2(1.0, 0.0), _390);
    }
    else
    {
        _609 = vec3(_386 + vec2(0.0, 1.0), _391);
    }
    vec4 _446 = vec4(dFdx(_52), dFdy(_52) * (-1.0));
    uvec2 _523 = uvec2(_607.xy);
    uvec2 _529 = ((_523 >> uvec2(8u)) ^ _523.yx) * uvec2(1103515245u);
    vec2 _451 = _446.xy;
    vec2 _452 = _446.zw;
    uvec2 _540 = uvec2(_608.xy);
    uvec2 _546 = ((_540 >> uvec2(8u)) ^ _540.yx) * uvec2(1103515245u);
    uvec2 _557 = uvec2(_609.xy);
    uvec2 _563 = ((_557 >> uvec2(8u)) ^ _557.yx) * uvec2(1103515245u);
    vec4 _497 = textureLod(nonuniformEXT(sampler2D(resource_handles[globalParams.background_tex.bindless_handle], samplers_llr)), vec2(0.0), (log(min(_74.x, _74.y)) * 1.44269502162933349609375) + 1.0);
    vec4 _510 = (((((textureGrad(nonuniformEXT(sampler2D(resource_handles[globalParams.background_tex.bindless_handle], samplers_llr)), _52 + (vec2(((_529 >> uvec2(8u)) ^ _529.yx) * uvec2(1103515245u)) * 2.3283064365386962890625e-10), _451, _452) * _607.z) + (textureGrad(nonuniformEXT(sampler2D(resource_handles[globalParams.background_tex.bindless_handle], samplers_llr)), _52 + (vec2(((_546 >> uvec2(8u)) ^ _546.yx) * uvec2(1103515245u)) * 2.3283064365386962890625e-10), _451, _452) * _608.z)) + (textureGrad(nonuniformEXT(sampler2D(resource_handles[globalParams.background_tex.bindless_handle], samplers_llr)), _52 + (vec2(((_563 >> uvec2(8u)) ^ _563.yx) * uvec2(1103515245u)) * 2.3283064365386962890625e-10), _451, _452) * _609.z)) - _497) / vec4(length(vec3(_607.z, _608.z, _609.z)))) + _497;
    vec3 _317 = sqrt(_510.xyz) * vec3(0.5476000308990478515625, 0.4736192226409912109375, 0.3956409990787506103515625);
    vec4 _596 = _510;
    _596.x = _317.x;
    _596.y = _317.y;
    _596.z = _317.z;
    float _333 = length(_38 - vec2(0.5));
    vec3 _351 = pow(_596.xyz, vec3(1.0 + (0.5 * (1.0 - exp((-2.0) * ((_333 * _333) * _333))))));
    vec4 _602 = _596;
    _602.x = _351.x;
    _602.y = _351.y;
    _602.z = _351.z;
    entryPointParam_ps_main_color = _602;
}

