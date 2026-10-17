#version 460
#extension GL_EXT_samplerless_texture_functions : require
#extension GL_KHR_shader_subgroup_vote : require

layout(set = 2, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

layout(set = 0, binding = 0, std140) uniform GlobalParams_natural
{
    uvec2 input_tex_dims;
} globalParams;

layout(set = 1, binding = 2) uniform sampler samplers_nnc;
layout(set = 0, binding = 1) uniform texture2D input_tex;
layout(set = 4, binding = 0) uniform texture2D blue_noise_textures_uniform01;

layout(location = 0) in vec2 vs_out_uv;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    do
    {
        vec4 sampled = textureLod(sampler2D(input_tex, samplers_nnc), vs_out_uv, 0.0);
        float _60 = mix(sampled.w, 1.0, 0.100000001490116119384765625);
        vec4 _351 = sampled;
        _351.w = _60;
        vec2 _123 = (((texelFetch(blue_noise_textures_uniform01, ivec2((uvec2(gl_FragCoord.xy) + uvec2(fract((vec2(0.75487768650054931640625, 0.56984031200408935546875) * float((frame_counter.index % 64u) + 7u)) + vec2(0.5)) * vec2(256.0))) % uvec2(256u)), 0) * 255.0) * vec4(0.00390625)) + vec4(0.001953125)).xy;
        vec2 input_aspect = vec2(float(globalParams.input_tex_dims.y) / float(globalParams.input_tex_dims.x), 1.0);
        vec2 _137 = input_aspect * 0.0074999998323619365692138671875;
        vec2 _144 = vec2(0.0044100000523030757904052734375, 0.00233100005425512790679931640625) * input_aspect;
        float _355;
        _355 = 0.0;
        float shadow;
        uint idx;
        uint _354 = 0u;
        for (;;)
        {
            if (!(_354 < 3u))
            {
                break;
            }
            vec2 _156 = fract(_123 + fract((vec2(0.75487768650054931640625, 0.56984031200408935546875) * float(_354)) + vec2(0.5)));
            float _308 = sqrt(_156.x);
            float _310 = _156.y * 6.283185482025146484375;
            shadow = _355 + min(0.60000002384185791015625, mix(textureLod(sampler2D(input_tex, samplers_nnc), (vs_out_uv - _144) + (vec2(cos(_310) * _308, sin(_310) * _308) * _137), 0.0).w, 1.0, 0.100000001490116119384765625));
            idx = _354 + 1u;
            _355 = shadow;
            _354 = idx;
            continue;
        }
        if (!subgroupAny(_355 > 0.0))
        {
            entryPointParam_ps_main_color = _351;
            break;
        }
        float _357;
        _357 = _355;
        float shadow_1;
        uint idx_1;
        uint _356 = 3u;
        for (;;)
        {
            if (!(_356 < 48u))
            {
                break;
            }
            vec2 _229 = fract(_123 + fract((vec2(0.75487768650054931640625, 0.56984031200408935546875) * float(_356)) + vec2(0.5)));
            float _331 = sqrt(_229.x);
            float _333 = _229.y * 6.283185482025146484375;
            shadow_1 = _357 + min(0.60000002384185791015625, mix(textureLod(sampler2D(input_tex, samplers_nnc), (vs_out_uv - _144) + (vec2(cos(_333) * _331, sin(_333) * _331) * _137), 0.0).w, 1.0, 0.100000001490116119384765625));
            idx_1 = _356 + 1u;
            _357 = shadow_1;
            _356 = idx_1;
            continue;
        }
        _351.w = max(_60, _357 * 0.02083333395421504974365234375);
        entryPointParam_ps_main_color = _351;
        break;
    } while(false);
}

