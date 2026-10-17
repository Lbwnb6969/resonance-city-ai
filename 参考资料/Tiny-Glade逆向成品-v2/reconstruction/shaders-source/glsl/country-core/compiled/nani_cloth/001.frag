#version 460
#extension GL_EXT_nonuniform_qualifier : require

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct InstanceData_natural
{
    Affine3Packed_natural xform;
    float y_offset_1;
    float y_offset_2;
    int color_seed;
    uint normal_map;
};

struct _MatrixStorage_float3x3_ColMajornatural
{
    vec3 data[3];
};

vec4 _1175;

layout(set = 0, binding = 0, std430) readonly buffer StructuredBuffer
{
    InstanceData_natural _member0[];
} material_data_nani_instance_data;

layout(set = 5, binding = 0, std140) uniform ViewConstants_natural
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

layout(set = 0, binding = 1) uniform texture2D material_data_ferris;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 1, binding = 0) uniform texture2D resource_handles[];

layout(location = 0) flat in uint vs_out_instance_index;
layout(location = 1) flat in int vs_out_position_seed;
layout(location = 4) in vec2 vs_out_frag_uv;
layout(location = 3) in vec3 vs_out_frag_position_ws;
layout(location = 5) in _MatrixStorage_float3x3_ColMajornatural vs_out_frag_tangent_to_world;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    uint color_seed = uint(material_data_nani_instance_data._member0[vs_out_instance_index].color_seed);
    uint _72 = color_seed % 7u;
    vec3 _1135;
    if (_72 == 0u)
    {
        _1135 = vec3(0.699999988079071044921875);
    }
    else
    {
        vec3 _1136;
        if (_72 == 1u)
        {
            _1136 = vec3(0.113700009882450103759765625, 0.1500000059604644775390625, 0.06750001013278961181640625);
        }
        else
        {
            vec3 _1137;
            if (_72 == 2u)
            {
                _1137 = vec3(0.049765028059482574462890625, 0.1322867870330810546875, 0.11814023554325103759765625);
            }
            else
            {
                vec3 _1138;
                if (_72 == 3u)
                {
                    _1138 = vec3(0.173463761806488037109375, 0.166082322597503662109375, 0.064535908401012420654296875);
                }
                else
                {
                    _1138 = mix(vec3(0.5), vec3(0.45024502277374267578125, 0.26545810699462890625, 0.085742287337779998779296875), bvec3(_72 == 4u));
                }
                _1137 = _1138;
            }
            _1136 = _1137;
        }
        _1135 = _1136;
    }
    vec4 _1140;
    if (_1135.y < _1135.z)
    {
        _1140 = vec4(_1135.zy, -1.0, 0.666666686534881591796875);
    }
    else
    {
        _1140 = vec4(_1135.yz, 0.0, -0.3333333432674407958984375);
    }
    vec4 _1141;
    if (_1135.x < _1140.x)
    {
        _1141 = vec4(_1140.xyw, _1135.x);
    }
    else
    {
        _1141 = vec4(_1135.x, _1140.yzx);
    }
    float _692 = _1141.x - min(_1141.w, _1141.y);
    uint _203 = uint(vs_out_position_seed ^ 7230);
    uint _711 = _203 + (_203 << 10u);
    uint _713 = _711 ^ (_711 >> 6u);
    uint _715 = _713 + (_713 << 3u);
    uint _717 = _715 ^ (_715 >> 11u);
    uint _259 = uint(vs_out_position_seed ^ 890348);
    uint _733 = _259 + (_259 << 10u);
    uint _735 = _733 ^ (_733 >> 6u);
    uint _737 = _735 + (_735 << 3u);
    uint _739 = _737 ^ (_737 >> 11u);
    float _751 = clamp(abs(((_1141.w - _1141.y) / ((6.0 * _692) + 1.0000000133514319600180897396058e-10)) + _1141.z) + mix(-0.100000001490116119384765625, 0.0500000007450580596923828125, uintBitsToFloat(((_717 + (_717 << 15u)) & 8388607u) | 1065353216u) - 1.0), 0.100000001490116119384765625, 0.89999997615814208984375) * 6.0;
    vec3 _770 = (((clamp(vec3(abs(_751 - 3.0) - 1.0, 2.0 - abs(_751 - 2.0), 2.0 - abs(_751 - 4.0)), vec3(0.0), vec3(1.0)) - vec3(1.0)) * (_692 / (_1141.x + 1.0000000133514319600180897396058e-10))) + vec3(1.0)) * (_1141.x + mix(0.0, 0.100000001490116119384765625, uintBitsToFloat(((_739 + (_739 << 15u)) & 8388607u) | 1065353216u) - 1.0));
    vec3 _1144;
    if ((color_seed % 10u) == 1u)
    {
        vec4 sampled = texture(sampler2D(material_data_ferris, samplers_llr), vs_out_frag_uv * 2.0);
        _1144 = mix(_770, pow(sampled.xyz, vec3(1.2999999523162841796875)), vec3(sampled.w * 0.60000002384185791015625));
    }
    else
    {
        _1144 = _770;
    }
    vec4 sampled_1 = texture(nonuniformEXT(sampler2D(resource_handles[material_data_nani_instance_data._member0[vs_out_instance_index].normal_map], samplers_llr)), vs_out_frag_uv);
    vec3 _390 = normalize(((sampled_1.xyz * 2.0) - vec3(1.0)) * mat3(vec3(vs_out_frag_tangent_to_world.data[0].x, vs_out_frag_tangent_to_world.data[1].x, vs_out_frag_tangent_to_world.data[2].x), vec3(vs_out_frag_tangent_to_world.data[0].y, vs_out_frag_tangent_to_world.data[1].y, vs_out_frag_tangent_to_world.data[2].y), vec3(vs_out_frag_tangent_to_world.data[0].z, vs_out_frag_tangent_to_world.data[1].z, vs_out_frag_tangent_to_world.data[2].z)));
    vec4 _780 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
    vec3 _1142;
    if (dot(normalize((_780.xyz / vec3(_780.w)) - vs_out_frag_position_ws), _390) <= 0.0)
    {
        _1142 = -_390;
    }
    else
    {
        _1142 = _390;
    }
    vec3 _834 = (normalize(_1142) * 0.5) + vec3(0.5);
    vec3 _942 = sqrt(clamp(_1144, vec3(0.0), vec3(1.0)));
    uint _957 = (uint((clamp(_942.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_942.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_942.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _1173 = uvec2(((uint((clamp(_834.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_834.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_834.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3422552064u, _957);
    _1173.y = _957 | 117440512u;
    entryPointParam_ps_main_gbuffer = _1173;
}

