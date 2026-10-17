#version 460
#extension GL_EXT_samplerless_texture_functions : require

const uvec2 _113[6] = uvec2[](uvec2(0u), uvec2(1u, 0u), uvec2(0u, 1u), uvec2(0u, 1u), uvec2(1u, 0u), uvec2(1u));

layout(set = 0, binding = 0, std140) uniform GlobalParams_natural
{
    uvec2 resolve_tile_mask_dims;
    uvec2 resolve_output_dims;
    uvec2 shadow_depth_dims;
} globalParams;

layout(set = 0, binding = 1) uniform texture2D resolve_tile_mask;

layout(location = 0) out vec2 entryPointParam_vs_main_uv;

void main()
{
    do
    {
        uint _40 = uint(gl_InstanceIndex - gl_BaseInstance);
        uvec2 tile_xy = uvec2(_40 % globalParams.resolve_tile_mask_dims.x, _40 / globalParams.resolve_tile_mask_dims.x);
        bool _165;
        if (_40 >= (globalParams.resolve_tile_mask_dims.x * globalParams.resolve_tile_mask_dims.y))
        {
            _165 = true;
        }
        else
        {
            _165 = texelFetch(resolve_tile_mask, ivec2(tile_xy), 0).x < 0.5;
        }
        if (_165)
        {
            gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
            entryPointParam_vs_main_uv = vec2(0.0);
            break;
        }
        uvec2 lo = tile_xy * uvec2(32u);
        vec2 _134 = vec2(mix(lo, min((lo + uvec2(32u)), globalParams.resolve_output_dims), notEqual(_113[uint(gl_VertexIndex - gl_BaseVertex)], uvec2(0u)))) / vec2(globalParams.resolve_output_dims);
        gl_Position = vec4((_134 * vec2(2.0, -2.0)) + vec2(-1.0, 1.0), 0.0, 1.0);
        entryPointParam_vs_main_uv = _134;
        break;
    } while(false);
}

