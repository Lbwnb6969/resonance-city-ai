#version 460
#extension GL_EXT_scalar_block_layout : require

struct _MatrixStorage_float3x3_ColMajornatural
{
    vec3 data[3];
};

layout(set = 0, binding = 0, scalar) uniform MaterialData_natural
{
    int seed;
    int wall_slot_id;
    layout(row_major) mat4 model_to_world;
} material_data;

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
layout(location = 3) in vec2 Vertex_UV;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 3) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 4) out _MatrixStorage_float3x3_ColMajornatural entryPointParam_vs_main_frag_tangent_to_world;

void main()
{
    vec4 _27 = vec4(Vertex_Position, 1.0) * material_data.model_to_world;
    vec3 _51 = cross(vec3(0.0, 1.0, 0.0), Vertex_Normal);
    vec3 _71 = (vec4(Vertex_Normal, 0.0) * material_data.model_to_world).xyz;
    mat3 _74 = transpose(mat3(normalize((vec4(_51, 0.0) * material_data.model_to_world).xyz), normalize((vec4(cross(Vertex_Normal, _51), 0.0) * material_data.model_to_world).xyz), normalize(_71)));
    gl_Position = _27 * current_view.world_to_sample;
    entryPointParam_vs_main_color = Vertex_Color;
    entryPointParam_vs_main_frag_normal_ws = _71;
    entryPointParam_vs_main_frag_position_ws = _27.xyz;
    entryPointParam_vs_main_frag_uv = Vertex_UV;
    vec3 _113 = _74[0];
    vec3 _117 = _74[1];
    vec3 _121 = _74[2];
    entryPointParam_vs_main_frag_tangent_to_world = _MatrixStorage_float3x3_ColMajornatural(vec3[](vec3(_113.x, _117.x, _121.x), vec3(_113.y, _117.y, _121.y), vec3(_113.z, _117.z, _121.z)));
}

