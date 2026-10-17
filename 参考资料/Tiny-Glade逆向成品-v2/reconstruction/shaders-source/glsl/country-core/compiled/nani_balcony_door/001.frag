#version 460
#extension GL_EXT_demote_to_helper_invocation : require

const uvec2 _86[4] = uvec2[](uvec2(0u), uvec2(0u, 1u), uvec2(1u), uvec2(1u, 0u));

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

layout(set = 18, binding = 0) uniform texture2DArray window_colors_window_colors;
layout(set = 2, binding = 1) uniform sampler samplers_llr;

layout(location = 6) flat in uint vs_out_is_semitransparent;
layout(location = 0) in vec3 vs_out_color;
layout(location = 5) flat in int vs_out_color_id;
layout(location = 4) flat in int vs_out_is_metal_part;
layout(location = 3) in vec2 vs_out_frag_uv;
layout(location = 2) in vec3 vs_out_frag_position_ws;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    if (vs_out_is_semitransparent != 0u)
    {
        if (all(notEqual((uvec2(gl_FragCoord.xy) & uvec2(1u)), _86[frame_counter.index & 3u])))
        {
            demote;
        }
    }
    vec3 _845;
    if (vs_out_is_metal_part != 1)
    {
        uint _118 = uint(vs_out_color_id);
        uint _481 = _118 + (_118 << 10u);
        uint _483 = _481 ^ (_481 >> 6u);
        uint _485 = _483 + (_483 << 3u);
        uint _487 = _485 ^ (_485 >> 11u);
        vec4 _505 = texture(sampler2DArray(window_colors_window_colors, samplers_llr), vec3((vs_out_frag_uv + vec2(uintBitsToFloat(((_487 + (_487 << 15u)) & 8388607u) | 1065353216u) - 1.0)) + (vs_out_frag_position_ws.xz * 0.100000001490116119384765625), float(vs_out_color_id)));
        vec3 _508 = _505.xyz;
        bool _509 = vs_out_color_id == 0;
        vec3 _844;
        if (_509)
        {
            _844 = _508 * 0.699999988079071044921875;
        }
        else
        {
            _844 = _508;
        }
        vec3 _846;
        if (_509)
        {
            _846 = mix(_844, vs_out_color, vec3(0.300000011920928955078125));
        }
        else
        {
            _846 = _844;
        }
        _845 = _846;
    }
    else
    {
        _845 = vs_out_color;
    }
    vec3 _554 = (normalize(vs_out_frag_normal_ws) * 0.5) + vec3(0.5);
    vec3 _662 = sqrt(clamp(_845, vec3(0.0), vec3(1.0)));
    uint _677 = (uint((clamp(_662.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_662.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_662.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _864 = uvec2(((uint((clamp(_554.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_554.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_554.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3422552064u, _677);
    _864.y = _677 | 117440512u;
    entryPointParam_ps_main_gbuffer = _864;
}

