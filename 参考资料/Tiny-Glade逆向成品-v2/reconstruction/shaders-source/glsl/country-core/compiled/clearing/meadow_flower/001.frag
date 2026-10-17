#version 460
#extension GL_EXT_demote_to_helper_invocation : require

struct _MatrixStorage_float3x3_ColMajornatural
{
    vec3 data[3];
};

layout(set = 0, binding = 0, std140) uniform MaterialData_natural
{
    int has_normal_map;
} material_data;

layout(set = 0, binding = 3) uniform texture2D material_data_alpha_map;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 0, binding = 1) uniform texture2D material_data_albedo_map;
layout(set = 0, binding = 4) uniform texture2D material_data_leafy_greens;
layout(set = 0, binding = 2) uniform texture2D material_data_normal_map;

layout(location = 4) in vec2 vs_out_frag_uv_alpha;
layout(location = 2) in vec3 vs_out_frag_normal;
layout(location = 0) in vec2 vs_out_frag_uv;
layout(location = 3) flat in int vs_out_is_stem;
layout(location = 5) in _MatrixStorage_float3x3_ColMajornatural vs_out_frag_tangent_to_world;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    if (texture(sampler2D(material_data_alpha_map, samplers_llr), vs_out_frag_uv_alpha).x < 0.5)
    {
        demote;
    }
    vec4 sampled = texture(sampler2D(material_data_albedo_map, samplers_llr), vs_out_frag_uv);
    vec3 _442;
    if (vs_out_is_stem == 1)
    {
        _442 = texture(sampler2D(material_data_leafy_greens, samplers_llr), vs_out_frag_uv).xyz;
    }
    else
    {
        _442 = sampled.xyz;
    }
    vec3 _443;
    if (material_data.has_normal_map == 1)
    {
        _443 = normalize(((texture(sampler2D(material_data_normal_map, samplers_llr), vs_out_frag_uv_alpha).xyz * 2.0) - vec3(1.0)) * mat3(vec3(vs_out_frag_tangent_to_world.data[0].x, vs_out_frag_tangent_to_world.data[1].x, vs_out_frag_tangent_to_world.data[2].x), vec3(vs_out_frag_tangent_to_world.data[0].y, vs_out_frag_tangent_to_world.data[1].y, vs_out_frag_tangent_to_world.data[2].y), vec3(vs_out_frag_tangent_to_world.data[0].z, vs_out_frag_tangent_to_world.data[1].z, vs_out_frag_tangent_to_world.data[2].z)));
    }
    else
    {
        _443 = vs_out_frag_normal;
    }
    vec3 _285 = (_443 * 0.5) + vec3(0.5);
    vec3 _353 = sqrt(clamp(_442, vec3(0.0), vec3(1.0)));
    entryPointParam_ps_main_gbuffer = uvec2(((uint((clamp(_285.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_285.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_285.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 2147483648u, ((uint((clamp(_353.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_353.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_353.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 1291845632u);
}

