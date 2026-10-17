#version 460
#extension GL_EXT_samplerless_texture_functions : require

struct ViewConstants_natural
{
    mat4 view_to_clip;
    mat4 clip_to_view;
    mat4 view_to_sample;
    mat4 sample_to_view;
    mat4 world_to_view;
    mat4 view_to_world;
    mat4 world_to_sample;
    mat4 clip_to_prev_clip;
    mat4 prev_clip_to_clip;
    mat4 prev_view_to_prev_clip;
    mat4 prev_clip_to_prev_view;
    mat4 prev_world_to_prev_view;
    mat4 prev_view_to_prev_world;
    vec2 sample_offset_pixels;
    vec2 sample_offset_clip;
    vec2 prev_sample_offset_pixels;
    vec2 prev_sample_offset_clip;
    mat4 pad0;
    mat4 pad1;
    vec4 pad2;
    float pad3;
    float pad4;
    float pad5;
    float mip_bias;
};

vec4 _350;

layout(set = 7, binding = 1, std430) readonly buffer StructuredBuffer
{
    vec4 _member0[];
} csm_setup_cascade_splits_buf;

layout(set = 6, binding = 0, std140) uniform current_view
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
} current_view_1;

layout(set = 5, binding = 0, std430) readonly buffer sun_views_views
{
    layout(row_major) ViewConstants_natural _member0[];
} sun_views_views_1;

layout(push_constant, std430) uniform EntryPointParams_natural
{
    uvec2 main_view_dims;
    uvec2 tile_frustum_count;
    uint cascade;
} entryPointParams;

layout(set = 0, binding = 0) uniform texture2D main_view_depth_min_max;

void main()
{
    do
    {
        uint _58 = uint(gl_InstanceIndex);
        uvec2 tile = uvec2(_58 % entryPointParams.tile_frustum_count.x, (entryPointParams.tile_frustum_count.y - 1u) - (_58 / entryPointParams.tile_frustum_count.x));
        uvec2 tile_px_start = tile * uvec2(16u);
        vec2 _334;
        if (0u == entryPointParams.cascade)
        {
            _334 = vec2(csm_setup_cascade_splits_buf._member0[1].x, csm_setup_cascade_splits_buf._member0[0].x);
        }
        else
        {
            vec2 _335;
            if (1u == entryPointParams.cascade)
            {
                _335 = csm_setup_cascade_splits_buf._member0[0].xy;
            }
            else
            {
                _335 = csm_setup_cascade_splits_buf._member0[0].yz;
            }
            _334 = _335;
        }
        vec4 sampled = texelFetch(main_view_depth_min_max, ivec2(tile), 0);
        float _119 = sampled.y;
        float _120 = sampled.x;
        bool _336;
        if (_119 >= _334.y)
        {
            _336 = _120 <= _334.x;
        }
        else
        {
            _336 = false;
        }
        bool _337;
        if (_119 < _120)
        {
            _337 = true;
        }
        else
        {
            _337 = !_336;
        }
        if (_337)
        {
            gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
            break;
        }
        vec2 _160 = clamp(sampled.xy, vec2(_334.y), vec2(_334.x));
        vec2 _167 = vec2(entryPointParams.main_view_dims);
        vec2 _300 = ((vec2(tile_px_start.xy) / _167) - vec2(0.5)) * vec2(2.0, -2.0);
        vec2 _304 = ((vec2((tile_px_start + uvec2(16u)).xy) / _167) - vec2(0.5)) * vec2(2.0, -2.0);
        uint _198 = uint(gl_VertexIndex - gl_BaseVertex);
        float _342;
        if ((_198 & 1u) != 0u)
        {
            _342 = _300.x;
        }
        else
        {
            _342 = _304.x;
        }
        float _344;
        if ((_198 & 2u) != 0u)
        {
            _344 = _300.y;
        }
        else
        {
            _344 = _304.y;
        }
        vec4 _313 = (vec4(vec3(_342, _344, ((_198 & 4u) != 0u) ? _160.y : _160.x), 1.0) * current_view_1.sample_to_view) * current_view_1.view_to_world;
        gl_Position = (vec4(_313.xyz / vec3(_313.w), 1.0) * sun_views_views_1._member0[entryPointParams.cascade].world_to_view) * sun_views_views_1._member0[entryPointParams.cascade].view_to_sample;
        break;
    } while(false);
}

