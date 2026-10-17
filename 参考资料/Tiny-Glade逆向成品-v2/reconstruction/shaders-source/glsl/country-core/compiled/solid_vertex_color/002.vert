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

layout(set = 6, binding = 0, scalar) uniform ObjectXform_natural
{
    Affine3Packed_natural xform;
} object_xform;

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

layout(location = 0) in vec3 Vertex_Position;
layout(location = 1) in vec3 Vertex_Color;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;

void main()
{
    mat3x4 _207 = transpose(mat4x3(vec3(object_xform.xform.data.data[0], object_xform.xform.data.data[1], object_xform.xform.data.data[2]), vec3(object_xform.xform.data.data[3], object_xform.xform.data.data[4], object_xform.xform.data.data[5]), vec3(object_xform.xform.data.data[6], object_xform.xform.data.data[7], object_xform.xform.data.data[8]), vec3(object_xform.xform.data.data[9], object_xform.xform.data.data[10], object_xform.xform.data.data[11])));
    vec3 _171 = vec4(Vertex_Position, 1.0) * _207;
    mat3 _217 = mat3(_207[0].xyz, _207[1].xyz, _207[2].xyz);
    vec3 _258 = vec3(1.0, 0.0, 0.0) * _217;
    vec3 _259 = vec3(0.0, 1.0, 0.0) * _217;
    vec3 _260 = vec3(0.0, 0.0, 1.0) * _217;
    vec3 _263 = cross(_258, _259);
    vec3 _266 = vec3(1.0 / dot(_260, _263));
    gl_Position = vec4(_171, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = Vertex_Color;
    entryPointParam_vs_main_frag_normal_ws = mat3(cross(_259, _260) * _266, cross(_260, _258) * _266, _263 * _266) * Vertex_Normal;
    entryPointParam_vs_main_frag_position_ws = _171.xyz;
}

