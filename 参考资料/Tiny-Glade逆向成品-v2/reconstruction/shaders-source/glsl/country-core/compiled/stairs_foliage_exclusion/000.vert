#version 460

layout(set = 0, binding = 0, std430) readonly buffer StructuredBuffer
{
    vec4 _member0[];
} mesh_buf;

layout(location = 0) out vec3 entryPointParam_vs_main_pos_ws;

void main()
{
    uint _19 = uint(gl_VertexIndex - gl_BaseVertex);
    gl_Position = vec4(mesh_buf._member0[_19].xz * vec2(0.015384615398943424224853515625, -0.015384615398943424224853515625), 1.0, 1.0);
    entryPointParam_vs_main_pos_ws = mesh_buf._member0[_19].xyz;
}

