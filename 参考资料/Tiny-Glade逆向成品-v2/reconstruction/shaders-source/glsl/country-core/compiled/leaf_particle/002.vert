#version 460
#extension GL_EXT_scalar_block_layout : require

struct LeafParticle_natural
{
    vec3 position;
    float rotation;
    float scale;
    vec3 up_axis;
};

layout(set = 0, binding = 0, scalar) readonly buffer StructuredBuffer
{
    LeafParticle_natural _member0[];
} material_data_leaf_placement_buffer;

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
layout(location = 1) in vec2 Vertex_UV;
layout(location = 0) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 2) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 3) out vec2 entryPointParam_vs_main_frag_uv_color;

void main()
{
    uint _20 = uint(gl_InstanceIndex);
    vec3 scale = vec3(material_data_leaf_placement_buffer._member0[_20].scale) * 0.699999988079071044921875;
    vec3 _62 = normalize(cross(material_data_leaf_placement_buffer._member0[_20].up_axis, normalize(vec3(cos(material_data_leaf_placement_buffer._member0[_20].rotation), 0.0, sin(material_data_leaf_placement_buffer._member0[_20].rotation)))));
    float _169 = scale.x;
    vec4 _113 = vec4(Vertex_Position, 1.0) * ((mat4(vec4(_169, 0.0, 0.0, 0.0), vec4(0.0, scale.y, 0.0, 0.0), vec4(0.0, 0.0, scale.z, 0.0), vec4(0.0, 0.0, 0.0, 1.0)) * transpose(mat4(vec4(cross(_62, material_data_leaf_placement_buffer._member0[_20].up_axis), 0.0), vec4(material_data_leaf_placement_buffer._member0[_20].up_axis, 0.0), vec4(_62, 0.0), vec4(0.0, 0.0, 0.0, 1.0)))) * mat4(vec4(1.0, 0.0, 0.0, material_data_leaf_placement_buffer._member0[_20].position.x), vec4(0.0, 1.0, 0.0, material_data_leaf_placement_buffer._member0[_20].position.y), vec4(0.0, 0.0, 1.0, material_data_leaf_placement_buffer._member0[_20].position.z), vec4(0.0, 0.0, 0.0, 1.0)));
    gl_Position = _113 * current_view.world_to_sample;
    entryPointParam_vs_main_frag_normal_ws = vec3(0.0, 1.0, 0.0);
    entryPointParam_vs_main_frag_position_ws = _113.xyz;
    entryPointParam_vs_main_frag_uv = Vertex_UV;
    entryPointParam_vs_main_frag_uv_color = vec2(material_data_leaf_placement_buffer._member0[_20].up_axis.x + _169, material_data_leaf_placement_buffer._member0[_20].up_axis.z + _169);
}

