#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_samplerless_texture_functions : require

struct Bindless_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    Bindless_natural icon_tex;
    Bindless_natural grading_lut_tex;
    vec2 thumbnail_center;
    vec2 thumbnail_size;
    uint is_hovered;
    uint is_active;
    uint show_icon;
    float lut_amount;
} globalParams;

layout(set = 2, binding = 2) uniform sampler samplers_nnc;
layout(set = 0, binding = 1) uniform texture2D input_tex;
layout(set = 1, binding = 0) uniform texture3D resource_handles[];
layout(set = 2, binding = 0) uniform sampler samplers_lnc;
layout(set = 1, binding = 0) uniform texture2D resource_handles_1[];
layout(set = 2, binding = 3) uniform sampler samplers_llc;

layout(location = 0) in vec2 vs_out_uv;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec4 sampled = textureLod(sampler2D(input_tex, samplers_nnc), vs_out_uv, 0.0);
    float _327 = sampled.x;
    float _515;
    if (0.040449999272823333740234375 < _327)
    {
        _515 = pow((_327 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _515 = _327 * 0.077399380505084991455078125;
    }
    float _329 = sampled.y;
    float _516;
    if (0.040449999272823333740234375 < _329)
    {
        _516 = pow((_329 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _516 = _329 * 0.077399380505084991455078125;
    }
    float _331 = sampled.z;
    float _517;
    if (0.040449999272823333740234375 < _331)
    {
        _517 = pow((_331 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _517 = _331 * 0.077399380505084991455078125;
    }
    uvec3 _378 = uvec3(textureSize(resource_handles[nonuniformEXT(globalParams.grading_lut_tex.bindless_handle)], 0));
    uint _128 = _378.x;
    float _518;
    if (0.003130800090730190277099609375 >= _515)
    {
        _518 = 12.9200000762939453125 * _515;
    }
    else
    {
        _518 = (1.05499994754791259765625 * pow(_515, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
    }
    float _519;
    if (0.003130800090730190277099609375 >= _516)
    {
        _519 = 12.9200000762939453125 * _516;
    }
    else
    {
        _519 = (1.05499994754791259765625 * pow(_516, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
    }
    float _520;
    if (0.003130800090730190277099609375 >= _517)
    {
        _520 = 12.9200000762939453125 * _517;
    }
    else
    {
        _520 = (1.05499994754791259765625 * pow(_517, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
    }
    vec3 _443 = vec3(float(_128));
    vec4 _452 = textureLod(nonuniformEXT(sampler3D(resource_handles[globalParams.grading_lut_tex.bindless_handle], samplers_lnc)), (vec3(_518, _519, _520).xyz * (vec3(float(_128 - 1u)) / _443)) + (vec3(0.5) / _443), 0.0);
    float _459 = _452.x;
    float _521;
    if (0.040449999272823333740234375 < _459)
    {
        _521 = pow((_459 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _521 = _459 * 0.077399380505084991455078125;
    }
    float _461 = _452.y;
    float _522;
    if (0.040449999272823333740234375 < _461)
    {
        _522 = pow((_461 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _522 = _461 * 0.077399380505084991455078125;
    }
    float _463 = _452.z;
    float _523;
    if (0.040449999272823333740234375 < _463)
    {
        _523 = pow((_463 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    else
    {
        _523 = _463 * 0.077399380505084991455078125;
    }
    vec3 _207 = mix(vec3(_515, _516, _517), vec3(_521, _522, _523), vec3(globalParams.lut_amount));
    vec3 _530;
    if (globalParams.show_icon != 0u)
    {
        vec2 icon_uv = vec2(1.2000000476837158203125) - ((vec2(1.0) - vs_out_uv) * 8.0);
        vec3 _531;
        if (all(equal(clamp(icon_uv, vec2(0.0), vec2(1.0)), icon_uv)))
        {
            vec4 sampled_1 = textureLod(nonuniformEXT(sampler2D(resource_handles_1[globalParams.icon_tex.bindless_handle], samplers_llc)), icon_uv, 0.0);
            _531 = mix(_207, sampled_1.xyz, vec3(sampled_1.w));
        }
        else
        {
            _531 = _207;
        }
        _530 = _531;
    }
    else
    {
        _530 = _207;
    }
    vec2 _266 = abs((vs_out_uv * 2.0) - vec2(1.0));
    bool _524;
    if (any(greaterThan(_266, vec2(0.980000019073486328125))))
    {
        _524 = globalParams.is_hovered != 0u;
    }
    else
    {
        _524 = false;
    }
    bool _525;
    if (any(greaterThan(_266, vec2(0.9700000286102294921875))))
    {
        _525 = globalParams.is_active != 0u;
    }
    else
    {
        _525 = false;
    }
    entryPointParam_ps_main_color = vec4(mix(mix(_530, vec3(1.0), bvec3(_524)), vec3(0.800000011920928955078125), bvec3(_525)), 1.0);
}

