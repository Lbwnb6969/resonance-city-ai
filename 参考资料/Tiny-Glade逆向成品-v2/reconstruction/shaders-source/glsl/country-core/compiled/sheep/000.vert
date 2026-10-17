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

struct _Array_natural_vector_float_4_30
{
    vec4 data[30];
};

struct SheepAnimation_natural
{
    _Array_natural_vector_float_4_30 positions;
    _Array_natural_vector_float_4_30 normals;
    vec4 delighted_pos;
    vec4 delighted_normal;
};

layout(set = 0, binding = 0, scalar) uniform MaterialData_natural
{
    Affine3Packed_natural model_to_world;
    Affine3Packed_natural prev_model_to_world;
    int animation_frame;
    float pet_blend;
    int is_pet_forward;
} material_data;

layout(set = 0, binding = 1, std430) readonly buffer StructuredBuffer
{
    SheepAnimation_natural _member0[];
} material_data_animation;

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

layout(location = 2) in vec3 Vertex_Color;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_pos_ws;
layout(location = 3) out vec3 entryPointParam_vs_main_prev_pos_ws;

void main()
{
    float _304 = clamp(1.0 - material_data.pet_blend, 0.0, 1.0);
    float _462;
    if (material_data.is_pet_forward == 0)
    {
        float _317 = clamp(material_data.pet_blend, 0.0, 1.0);
        _462 = ((_317 * _317) * _317) - (_317 * sin(_317 * 3.1400001049041748046875));
    }
    else
    {
        _462 = 1.0 - (((_304 * _304) * _304) - (_304 * sin(_304 * 3.1400001049041748046875)));
    }
    uint _88 = uint(gl_VertexIndex - gl_BaseVertex);
    vec3 _128 = vec3(_462);
    vec3 _129 = mix(material_data_animation._member0[_88].positions.data[material_data.animation_frame].xyz, material_data_animation._member0[_88].delighted_pos.xyz, _128);
    _129.y = _129.y - 0.25;
    mat3x4 _367 = transpose(mat4x3(vec3(material_data.model_to_world.data.data[0], material_data.model_to_world.data.data[1], material_data.model_to_world.data.data[2]), vec3(material_data.model_to_world.data.data[3], material_data.model_to_world.data.data[4], material_data.model_to_world.data.data[5]), vec3(material_data.model_to_world.data.data[6], material_data.model_to_world.data.data[7], material_data.model_to_world.data.data[8]), vec3(material_data.model_to_world.data.data[9], material_data.model_to_world.data.data[10], material_data.model_to_world.data.data[11])));
    vec4 _330 = vec4(_129, 1.0);
    vec3 _331 = _330 * _367;
    gl_Position = vec4(_331, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = Vertex_Color;
    entryPointParam_vs_main_frag_normal_ws = vec4(mix(material_data_animation._member0[_88].normals.data[material_data.animation_frame].xyz, material_data_animation._member0[_88].delighted_normal.xyz, _128), 0.0) * _367;
    entryPointParam_vs_main_frag_pos_ws = _331.xyz;
    entryPointParam_vs_main_prev_pos_ws = _330 * transpose(mat4x3(vec3(material_data.prev_model_to_world.data.data[0], material_data.prev_model_to_world.data.data[1], material_data.prev_model_to_world.data.data[2]), vec3(material_data.prev_model_to_world.data.data[3], material_data.prev_model_to_world.data.data[4], material_data.prev_model_to_world.data.data[5]), vec3(material_data.prev_model_to_world.data.data[6], material_data.prev_model_to_world.data.data[7], material_data.prev_model_to_world.data.data[8]), vec3(material_data.prev_model_to_world.data.data[9], material_data.prev_model_to_world.data.data[10], material_data.prev_model_to_world.data.data[11])));
}

