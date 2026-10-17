#version 460

layout(push_constant, std430) uniform PushConstants_natural
{
    vec4 obj_position_radius;
    float push_strength;
} push_constants;

layout(location = 0) in vec2 vs_out_frag_uv;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec2 offset = vs_out_frag_uv - vec2(0.5);
    float strength = push_constants.push_strength * smoothstep(0.5, 0.0, length(offset));
    entryPointParam_ps_main_color = vec4(vec3(normalize(offset) * strength, strength), 1.0);
}

