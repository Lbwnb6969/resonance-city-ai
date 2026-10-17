#version 460
#extension GL_EXT_scalar_block_layout : require

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

layout(set = 4, binding = 0, scalar) uniform ObjectXform_natural
{
    Affine3Packed_natural xform;
} object_xform;

layout(set = 3, binding = 0, std140) uniform ViewConstants_natural
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

layout(push_constant, std430) uniform PushConstants_natural
{
    int point_count;
    float half_width_px;
    float line_length;
    float opacity;
    float res_x;
    float res_y;
} push_constants;

layout(location = 0) in vec3 Vertex_Position;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 1) in vec3 Vertex_Color;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out float entryPointParam_vs_main_frag_t;

void main()
{
    uint _32 = uint(gl_VertexIndex - gl_BaseVertex);
    mat3x4 _280 = transpose(mat4x3(vec3(object_xform.xform.data.data[0], object_xform.xform.data.data[1], object_xform.xform.data.data[2]), vec3(object_xform.xform.data.data[3], object_xform.xform.data.data[4], object_xform.xform.data.data[5]), vec3(object_xform.xform.data.data[6], object_xform.xform.data.data[7], object_xform.xform.data.data[8]), vec3(object_xform.xform.data.data[9], object_xform.xform.data.data[10], object_xform.xform.data.data[11])));
    vec4 _143 = vec4(vec4(Vertex_Position, 1.0) * _280, 1.0) * current_view.world_to_sample;
    vec4 _147 = vec4(vec4(Vertex_Normal, 0.0) * _280, 0.0) * current_view.world_to_sample;
    vec2 res = vec2(push_constants.res_x, push_constants.res_y);
    float _158 = _143.w;
    vec2 _160 = _143.xy;
    vec2 dir_px = (((_147.xy * _158) - (_160 * _147.w)) / vec2(_158 * _158)) * res;
    float _168 = length(dir_px);
    vec2 _333;
    if (_168 > 9.9999999747524270787835121154785e-07)
    {
        _333 = vec2(-dir_px.y, dir_px.x) / vec2(_168);
    }
    else
    {
        _333 = vec2(0.0);
    }
    vec2 _199 = _160 + (((_333 * (vec2(push_constants.half_width_px * 2.0) / res)) * (((_32 & 1u) != 0u) ? 1.0 : (-1.0))) * _158);
    vec4 _329 = _143;
    _329.x = _199.x;
    _329.y = _199.y;
    gl_Position = _329;
    entryPointParam_vs_main_color = Vertex_Color;
    entryPointParam_vs_main_frag_t = (float(_32 >> uint(1)) / float(max((push_constants.point_count - 1), 1))) * push_constants.line_length;
}

