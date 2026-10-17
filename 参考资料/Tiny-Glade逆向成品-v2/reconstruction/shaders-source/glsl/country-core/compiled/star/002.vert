#version 460

layout(set = 2, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

layout(set = 4, binding = 0, std140) uniform ViewConstants_natural
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
    uint _28 = uint(gl_VertexIndex - gl_BaseVertex);
    float _31 = float(_28 & 1u);
    uint _38 = (_28 >> uint(1)) & 1u;
    vec2 quad2 = (vec2(_31, float(_38)) - vec2(0.5)) * vec2(1.0, 2.0);
    uint _50 = uint(gl_InstanceIndex);
    uint _53 = (_50 * 12u) + 25u;
    uint _297 = _53 + (_53 << 10u);
    uint _299 = _297 ^ (_297 >> 6u);
    uint _301 = _299 + (_299 << 3u);
    uint _303 = _301 ^ (_301 >> 11u);
    uint _305 = _303 + (_303 << 15u);
    float _86 = float(_50);
    uint _314 = _305 + (_305 << 10u);
    uint _316 = _314 ^ (_314 >> 6u);
    uint _318 = _316 + (_316 << 3u);
    uint _320 = _318 ^ (_318 >> 11u);
    uint _322 = _320 + (_320 << 15u);
    float _328 = uintBitsToFloat((_305 & 8388607u) | 1065353216u) - 1.0;
    uint _337 = _322 + (_322 << 10u);
    uint _339 = _337 ^ (_337 >> 6u);
    uint _341 = _339 + (_339 << 3u);
    uint _343 = _341 ^ (_341 >> 11u);
    uint _345 = _343 + (_343 << 15u);
    uint _360 = _345 + (_345 << 10u);
    uint _362 = _360 ^ (_360 >> 6u);
    uint _364 = _362 + (_362 << 3u);
    uint _366 = _364 ^ (_364 >> 11u);
    float rota = (fract(0.300000011920928955078125 + (_86 * 1.61803400516510009765625)) * 6.283185482025146484375) + ((float(frame_counter.index) * 9.9999997473787516355514526367188e-06) * mix(1.0, 0.070000000298023223876953125, uintBitsToFloat((_322 & 8388607u) | 1065353216u) - 1.0));
    vec2 normal2 = -vec2(cos(rota), sin(rota));
    float _151 = normal2.y;
    float _152 = normal2.x;
    vec3 _154 = vec3(_152, 0.0, _151);
    float _163 = 1.0 - (_86 * 0.00016666666488163173198699951171875);
    vec3 _176 = (-_154) * (10.0 * mix(800.0, 2200.0, _163 * _163));
    _176.y = (_176.y + (10000.0 * (_328 * _328))) - 1000.0;
    vec2 size = ((vec2(2.0, 1.0) * (mix(1.0, 0.20000000298023223876953125, smoothstep(0.699999988079071044921875, 1.0, _328)) * 10.0)) * 3.0) * (uintBitsToFloat(((_366 + (_366 << 15u)) & 8388607u) | 1065353216u) - 1.0);
    vec3 _206 = vec3(_151, 0.0, -_152);
    vec3 _215 = _176 + ((_206 * (size.x * quad2.x)) + (vec3(0.0, 1.0, 0.0) * (size.y * quad2.y)));
    gl_Position = mix(vec4(_215, 1.0) * current_view.world_to_sample, vec4(uintBitsToFloat(0x7fbfffffu /* nan */)), bvec4(_50 > 6000u));
    entryPointParam_vs_main_uv = vec2(_31, float(1u - _38));
    entryPointParam_vs_main_instance_index = _50;
    entryPointParam_vs_main_pos_ws = _215;
    entryPointParam_vs_main_x_axis = _206;
    entryPointParam_vs_main_z_axis = _154;
}

