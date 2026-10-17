#version 460

layout(set = 7, binding = 0, std140) uniform PathExclusionMask_natural
{
    uvec2 tex_dims;
} path_mask;

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

layout(set = 2, binding = 4) uniform sampler samplers_llb;
layout(set = 7, binding = 1) uniform texture2D path_mask_tex;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 11, binding = 0) uniform texture2D water_mask_tex;
layout(set = 12, binding = 0) uniform texture2D building_mask_tex;

layout(location = 0) in vec3 Vertex_Position;
layout(location = 2) in vec2 prim_center;
layout(location = 1) in vec3 Vertex_Normal;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 3) out vec2 entryPointParam_vs_main_prim_center;

void main()
{
    vec4 _26 = vec4(Vertex_Position, 1.0);
    vec2 _323 = (prim_center * vec2(0.0076923076994717121124267578125)) + vec2(0.5);
    vec2 _338 = (Vertex_Position.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5);
    float _439;
    do
    {
        float _368 = _323.x;
        bool _436;
        if (_368 < 0.0)
        {
            _436 = true;
        }
        else
        {
            _436 = _368 > 1.0;
        }
        bool _437;
        if (_436)
        {
            _437 = true;
        }
        else
        {
            _437 = _323.y < 0.0;
        }
        bool _438;
        if (_437)
        {
            _438 = true;
        }
        else
        {
            _438 = _323.y > 1.0;
        }
        if (_438)
        {
            _439 = 0.0;
            break;
        }
        else
        {
            _439 = textureLod(sampler2D(water_mask_tex, samplers_lnc_iso), _323, 0.0).y;
            break;
        }
        break; // unreachable workaround
    } while(false);
    vec4 _444;
    if (_439 > 0.20000000298023223876953125)
    {
        uint _190 = uint((prim_center.x + prim_center.y) + 100.0);
        uint _395 = _190 + (_190 << 10u);
        uint _397 = _395 ^ (_395 >> 6u);
        uint _399 = _397 + (_397 << 3u);
        uint _401 = _399 ^ (_399 >> 11u);
        vec4 _429 = _26;
        _429.y = (((Vertex_Position.y + (-3.0)) + (pow(textureLod(sampler2D(path_mask_tex, samplers_llb), _323, 0.0).x, 0.20000000298023223876953125) * 1.5)) + ((1.5 * pow(textureLod(sampler2D(path_mask_tex, samplers_llb), _338, 0.0).x, 0.20000000298023223876953125)) * (1.2000000476837158203125 + mix(-0.100000001490116119384765625, 0.300000011920928955078125, uintBitsToFloat(((_401 + (_401 << 15u)) & 8388607u) | 1065353216u) - 1.0)))) - smoothstep(0.3499999940395355224609375, 0.60000002384185791015625, textureLod(sampler2D(building_mask_tex, samplers_lnc_iso), _338, 0.0).x);
        _444 = _429;
    }
    else
    {
        vec4 _431 = _26;
        _431.x = uintBitsToFloat(0x7fbfffffu /* nan */);
        _431.y = uintBitsToFloat(0x7fbfffffu /* nan */);
        _431.z = uintBitsToFloat(0x7fbfffffu /* nan */);
        _444 = _431;
    }
    gl_Position = _444 * current_view.world_to_sample;
    entryPointParam_vs_main_color = vec3(0.12999999523162841796875, 0.12999999523162841796875, 0.100000001490116119384765625);
    entryPointParam_vs_main_frag_normal_ws = Vertex_Normal;
    entryPointParam_vs_main_frag_position_ws = _444.xyz;
    entryPointParam_vs_main_prim_center = prim_center;
}

