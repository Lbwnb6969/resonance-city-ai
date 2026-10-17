#version 460

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

layout(set = 0, binding = 0, std140) uniform MaterialData_natural
{
    int is_pebble;
    int pebble_buffer_offset;
} material_data;

layout(set = 2, binding = 6) uniform sampler samplers_llr_iso;
layout(set = 0, binding = 2) uniform texture2D material_data_rocky_terrain_texture;

layout(location = 0) in vec3 vs_out_frag_position_ws;
layout(location = 1) in float vs_out_frag_seed;
layout(location = 2) in vec3 vs_out_frag_normal;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec3 _406 = dFdx(vs_out_frag_position_ws);
    vec3 _413 = dFdy(vs_out_frag_position_ws);
    vec3 _62 = cross(_406, _413 * (-1.0));
    vec3 _71 = (vs_out_frag_position_ws * 0.07999999821186065673828125) + vec3(vs_out_frag_seed);
    vec4 _423 = texture(sampler2D(material_data_rocky_terrain_texture, samplers_llr_iso), _71.zy, current_view.mip_bias);
    vec4 _432 = texture(sampler2D(material_data_rocky_terrain_texture, samplers_llr_iso), _71.zx, current_view.mip_bias);
    vec4 _441 = texture(sampler2D(material_data_rocky_terrain_texture, samplers_llr_iso), _71.xy, current_view.mip_bias);
    vec3 _446 = pow(abs(_62), vec3(1.0));
    float _447 = _446.x;
    float _449 = _446.y;
    float _452 = _446.z;
    vec3 albedo = ((((_423.xyz * _447) + (_432.xyz * _449)) + (_441.xyz * _452)) / vec3((_447 + _449) + _452)) * 1.2000000476837158203125;
    vec3 _788;
    vec3 _789;
    if (material_data.is_pebble == 1)
    {
        _789 = albedo * 0.60000002384185791015625;
        _788 = vs_out_frag_normal;
    }
    else
    {
        _789 = albedo;
        _788 = _62;
    }
    vec3 _498 = (normalize(_788) * 0.5) + vec3(0.5);
    vec3 _606 = sqrt(clamp(_789, vec3(0.0), vec3(1.0)));
    uint _621 = (uint((clamp(_606.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_606.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_606.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _802 = uvec2(((uint((clamp(_498.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_498.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_498.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3422552064u, _621);
    _802.y = _621 | 385875968u;
    entryPointParam_ps_main_gbuffer = _802;
}

