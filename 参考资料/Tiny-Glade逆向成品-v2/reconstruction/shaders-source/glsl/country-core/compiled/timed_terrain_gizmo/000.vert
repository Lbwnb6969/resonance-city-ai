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

layout(set = 0, binding = 0, scalar) uniform MaterialData_natural
{
    Affine3Packed_natural xform;
    float y_axis_stretch;
    float x_axis_stretch;
} material_data;

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

layout(location = 1) in int arrow_index;
layout(location = 0) in vec3 Vertex_Position;
layout(location = 0) out float entryPointParam_vs_main_frag_alpha;

void main()
{
    bool _206;
    if (arrow_index == 1)
    {
        _206 = true;
    }
    else
    {
        _206 = arrow_index == 3;
    }
    vec3 _207;
    if (_206)
    {
        _207 = Vertex_Position * (1.0 + pow(smoothstep(0.0, 0.800000011920928955078125, material_data.y_axis_stretch), 0.5));
    }
    else
    {
        _207 = Vertex_Position * (1.0 + pow(smoothstep(0.0, 0.800000011920928955078125, material_data.x_axis_stretch), 0.5));
    }
    gl_Position = vec4(vec4(_207, 1.0) * transpose(mat4x3(vec3(material_data.xform.data.data[0], material_data.xform.data.data[1], material_data.xform.data.data[2]), vec3(material_data.xform.data.data[3], material_data.xform.data.data[4], material_data.xform.data.data[5]), vec3(material_data.xform.data.data[6], material_data.xform.data.data[7], material_data.xform.data.data[8]), vec3(material_data.xform.data.data[9], material_data.xform.data.data[10], material_data.xform.data.data[11]))), 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_frag_alpha = 1.0;
}

