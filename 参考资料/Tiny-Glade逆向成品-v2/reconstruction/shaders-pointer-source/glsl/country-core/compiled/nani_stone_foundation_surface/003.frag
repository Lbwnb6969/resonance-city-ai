#version 460
#extension GL_EXT_buffer_reference2 : require
#extension GL_ARB_conservative_depth : require
#extension GL_EXT_buffer_reference_uvec2 : require
#extension GL_EXT_demote_to_helper_invocation : require
layout(depth_greater) out float gl_FragDepth;

layout(buffer_reference) buffer uvec4Pointer;

struct StoneFoundationSurfaceInstanceData_natural
{
    vec4 bounding_sphere;
    uint wall_slot_id;
    float wall_length;
    uint blend_uv_seam;
    uint quad_count;
    uvec4Pointer verts_gpu_address;
    int row_stride;
    uvec4Pointer stone_foundation_cutouts_gpu_address;
    uint stone_foundation_cutout_count;
    uint is_inner_surface;
};

bool _434;

struct _444
{
    uint _m0;
    uint _m1;
};

layout(buffer_reference, buffer_reference_align = 4) buffer uvec4Pointer
{
    uvec4 value;
};

layout(set = 0, binding = 0, std430) readonly buffer StructuredBuffer
{
    StoneFoundationSurfaceInstanceData_natural _member0[];
} material_data_nani_instance_data;

layout(set = 0, binding = 1) uniform texture2DArray material_data_window_cutouts;
layout(set = 2, binding = 1) uniform sampler samplers_llr;

layout(location = 0) flat in uint vs_out_instance_index;
layout(location = 3) in vec2 vs_out_frag_wall_space;

void main()
{
    bool _431;
    do
    {
        uint _382;
        bool _429;
        bool _432;
        uint _427 = 0u;
        for (;;)
        {
            bool _334_ladder_break = false;
            do
            {
                if (!(_427 < material_data_nani_instance_data._member0[vs_out_instance_index].stone_foundation_cutout_count))
                {
                    _432 = _434;
                    _429 = false;
                    _334_ladder_break = true;
                    break;
                }
                uint _340 = _427 * 2u;
                uvec2 _446 = uvec2(material_data_nani_instance_data._member0[vs_out_instance_index].stone_foundation_cutouts_gpu_address);
                uint _447 = _446.x;
                _444 _449;
                umulExtended(_340, 16u, _449._m1, _449._m0);
                uint _452 = _447 + _449._m0;
                uvec4 _342 = uvec4Pointer(uvec2(_452, (_446.y + _449._m1) + uint(_452 < _447))).value;
                uvec2 _458 = uvec2(material_data_nani_instance_data._member0[vs_out_instance_index].stone_foundation_cutouts_gpu_address);
                uint _459 = _458.x;
                _444 _461;
                umulExtended(_340 + 1u, 16u, _461._m1, _461._m0);
                uint _464 = _459 + _461._m0;
                uvec4 _345 = uvec4Pointer(uvec2(_464, (_458.y + _461._m1) + uint(_464 < _459))).value;
                vec2 _355 = ((vs_out_frag_wall_space - uintBitsToFloat(_342.xy)) / uintBitsToFloat(_342.zw)) + vec2(0.5);
                bool _428;
                if (any(lessThan(_355, vec2(0.0))))
                {
                    _428 = true;
                }
                else
                {
                    _428 = any(greaterThan(_355, vec2(1.0)));
                }
                if (_428)
                {
                    break;
                }
                if (textureLod(sampler2DArray(material_data_window_cutouts, samplers_llr), vec3(_355, float(int(_345.x))), 0.0).x > 0.5)
                {
                    _432 = true;
                    _429 = true;
                    _334_ladder_break = true;
                    break;
                }
                break;
            } while(false);
            if (_334_ladder_break)
            {
                break;
            }
            _382 = _427 + 1u;
            _427 = _382;
            continue;
        }
        if (_429)
        {
            _431 = _432;
            break;
        }
        _431 = false;
        break;
    } while(false);
    if (_431)
    {
        demote;
    }
    gl_FragDepth = gl_FragCoord.z;
}

