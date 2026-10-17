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

layout(location = 0) out vec2 entryPointParam_vs_main_uv;
layout(location = 1) flat out uint entryPointParam_vs_main_instance_index;
layout(location = 2) out vec3 entryPointParam_vs_main_pos_ws;
layout(location = 3) out vec3 entryPointParam_vs_main_x_axis;
layout(location = 4) out vec3 entryPointParam_vs_main_z_axis;

void main()
{
    uint _43 = uint(gl_VertexIndex - gl_BaseVertex);
    float _46 = float(_43 & 1u);
    uint _53 = (_43 >> uint(1)) & 1u;
    vec2 quad2 = (vec2(_46, float(_53)) - vec2(0.5)) * vec2(1.0, 2.0);
    uint _65 = uint(gl_InstanceIndex);
    uint _68 = (_65 * 12u) + 25u;
    uint _357 = _68 + (_68 << 10u);
    uint _359 = _357 ^ (_357 >> 6u);
    uint _361 = _359 + (_359 << 3u);
    uint _363 = _361 ^ (_361 >> 11u);
    uint _365 = _363 + (_363 << 15u);
    float _101 = float(_65);
    uint _374 = _365 + (_365 << 10u);
    uint _376 = _374 ^ (_374 >> 6u);
    uint _378 = _376 + (_376 << 3u);
    uint _380 = _378 ^ (_378 >> 11u);
    uint _382 = _380 + (_380 << 15u);
    uint _397 = _382 + (_382 << 10u);
    uint _399 = _397 ^ (_397 >> 6u);
    uint _401 = _399 + (_399 << 3u);
    uint _403 = _401 ^ (_401 >> 11u);
    uint _405 = _403 + (_403 << 15u);
    uint _420 = _405 + (_405 << 10u);
    uint _422 = _420 ^ (_420 >> 6u);
    uint _424 = _422 + (_422 << 3u);
    uint _426 = _424 ^ (_424 >> 11u);
    uint _428 = _426 + (_426 << 15u);
    float rota = fract(0.89999997615814208984375 + (_101 * 1.61803400516510009765625)) * 6.283185482025146484375;
    vec2 normal2 = -vec2(cos(rota), sin(rota));
    float _151 = normal2.y;
    float _152 = normal2.x;
    float _153 = -_152;
    vec2 tangent2 = vec2(_151, _153);
    vec3 _155 = vec3(_152, 0.0, _151);
    float _164 = 1.0 - (_101 * 0.00200000009499490261077880859375);
    float _437 = _164 * _164;
    vec3 _175 = (-_155) * mix(450.0, 550.0, _437);
    _175.y = _175.y - mix(35.0, 45.0, _437);
    uint _446 = _428 + (_428 << 10u);
    uint _448 = _446 ^ (_446 >> 6u);
    uint _450 = _448 + (_448 << 3u);
    uint _452 = _450 ^ (_450 >> 11u);
    uint _454 = _452 + (_452 << 15u);
    vec2 _193 = vec2(36.0, 18.0) * mix(0.89999997615814208984375, 1.2000000476837158203125, uintBitsToFloat((_428 & 8388607u) | 1065353216u) - 1.0);
    int index = int(fract(_101 * 0.25) * 4.0);
    vec2 _565;
    if (index == 1)
    {
        vec2 _207 = _193 * 1.2000000476837158203125;
        _207.y = _207.y * 0.699999988079071044921875;
        _565 = _207;
    }
    else
    {
        vec2 _566;
        if (index == 2)
        {
            _566 = _193 * 0.60000002384185791015625;
        }
        else
        {
            vec2 _567;
            if (index == 3)
            {
                vec2 _559 = _193;
                _559.y = _193.y * 0.89999997615814208984375;
                _567 = _559;
            }
            else
            {
                _567 = _193;
            }
            _566 = _567;
        }
        _565 = _566;
    }
    uint _469 = _454 + (_454 << 10u);
    uint _471 = _469 ^ (_469 >> 6u);
    uint _473 = _471 + (_471 << 3u);
    uint _475 = _473 ^ (_473 >> 11u);
    uint _477 = _475 + (_475 << 15u);
    uint _492 = _477 + (_477 << 10u);
    uint _494 = _492 ^ (_492 >> 6u);
    uint _496 = _494 + (_494 << 3u);
    uint _498 = _496 ^ (_496 >> 11u);
    vec3 _254 = _175 + ((vec3(_151, 0.0, _153) * ((_565.x * quad2.x) * mix(1.5, 2.0, uintBitsToFloat((_477 & 8388607u) | 1065353216u) - 1.0))) + (vec3(0.0, mix(1.5, 2.5, uintBitsToFloat((_454 & 8388607u) | 1065353216u) - 1.0), 0.0) * (_565.y * quad2.y)));
    vec2 _270 = vec2(_46, float(1u - _53));
    vec2 _572;
    vec2 _573;
    if ((uintBitsToFloat(((_498 + (_498 << 15u)) & 8388607u) | 1065353216u) - 1.0) > 0.5)
    {
        vec2 _561 = _270;
        _561.x = 1.0 - _46;
        _573 = -tangent2;
        _572 = _561;
    }
    else
    {
        _573 = tangent2;
        _572 = _270;
    }
    gl_Position = mix(vec4(_254, 1.0) * current_view.world_to_sample, vec4(uintBitsToFloat(0x7fbfffffu /* nan */)), bvec4(_65 > 500u));
    entryPointParam_vs_main_uv = _572;
    entryPointParam_vs_main_instance_index = _65;
    entryPointParam_vs_main_pos_ws = _254;
    entryPointParam_vs_main_x_axis = vec3(_573.x, 0.0, _573.y);
    entryPointParam_vs_main_z_axis = _155;
}

