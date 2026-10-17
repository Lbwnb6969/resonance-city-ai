#version 460
#extension GL_EXT_demote_to_helper_invocation : require

const uvec2 _81[4] = uvec2[](uvec2(0u), uvec2(0u, 1u), uvec2(1u), uvec2(1u, 0u));

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

layout(set = 18, binding = 0) uniform texture2DArray window_colors_window_colors;
layout(set = 2, binding = 1) uniform sampler samplers_llr;

layout(location = 4) flat in uint vs_out_flags;
layout(location = 5) flat in uint vs_out_color_id;
layout(location = 3) in vec2 vs_out_frag_uv;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    if ((vs_out_flags & 1u) != 0u)
    {
        if (all(notEqual((uvec2(gl_FragCoord.xy) & uvec2(1u)), _81[frame_counter.index & 3u])))
        {
            demote;
        }
    }
    uint _449 = vs_out_color_id + (vs_out_color_id << 10u);
    uint _451 = _449 ^ (_449 >> 6u);
    uint _453 = _451 + (_451 << 3u);
    uint _455 = _453 ^ (_453 >> 11u);
    int _144 = int(vs_out_color_id);
    vec4 _473 = texture(sampler2DArray(window_colors_window_colors, samplers_llr), vec3((vs_out_frag_uv * 0.5) + vec2(uintBitsToFloat(((_455 + (_455 << 15u)) & 8388607u) | 1065353216u) - 1.0), float(_144)));
    vec3 _476 = _473.xyz;
    vec3 _812;
    if (_144 == 0)
    {
        _812 = _476 * 0.699999988079071044921875;
    }
    else
    {
        _812 = _476;
    }
    vec3 _522 = (normalize(vs_out_frag_normal_ws) * 0.5) + vec3(0.5);
    vec3 _630 = sqrt(clamp(_812, vec3(0.0), vec3(1.0)));
    uint _645 = (uint((clamp(_630.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_630.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_630.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _828 = uvec2(((uint((clamp(_522.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_522.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_522.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3422552064u, _645);
    _828.y = _645 | 117440512u;
    entryPointParam_ps_main_gbuffer = _828;
}

