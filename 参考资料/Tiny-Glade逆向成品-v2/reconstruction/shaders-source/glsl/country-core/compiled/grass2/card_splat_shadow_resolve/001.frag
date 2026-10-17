#version 460
#extension GL_EXT_demote_to_helper_invocation : require

layout(set = 0, binding = 2, r32ui) uniform uimage2D shadow_depth;

void main()
{
    uvec2 _19 = uvec2(gl_FragCoord.xy);
    uvec4 sampled = imageLoad(shadow_depth, ivec2(_19));
    uint _29 = sampled.x;
    if (_29 == 4294967295u)
    {
        demote;
    }
    imageStore(shadow_depth, ivec2(_19), uvec4(4294967295u));
    gl_FragDepth = uintBitsToFloat(_29);
}

