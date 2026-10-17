#version 460

layout(set = 0, binding = 0, std140) uniform MaterialData_natural
{
    uvec2 animation_dims;
    float progress_time;
    float fade;
    float swapchain_aspect_ratio;
} material_data;

layout(location = 0) out vec2 entryPointParam_vs_main_uv;

void main()
{
    uint _21 = uint(gl_VertexIndex - gl_BaseVertex);
    float _24 = float(_21 & 1u);
    uint _31 = (_21 >> uint(1)) & 1u;
    vec2 quad2 = vec2(_24, float(_31)) - vec2(0.5);
    quad2.x = (quad2.x * (float(material_data.animation_dims.x) / float(material_data.animation_dims.y))) / material_data.swapchain_aspect_ratio;
    vec2 _63 = quad2 * 0.300000011920928955078125;
    _63.y = _63.y - 0.60000002384185791015625;
    gl_Position = vec4(_63, 1.0, 1.0);
    entryPointParam_vs_main_uv = vec2(_24, float(1u - _31));
}

