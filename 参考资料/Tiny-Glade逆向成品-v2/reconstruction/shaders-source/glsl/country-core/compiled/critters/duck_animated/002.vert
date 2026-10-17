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
    Affine3Packed_natural model_to_world;
    Affine3Packed_natural prev_model_to_world;
    float anim_t;
    float landing_t;
    uint is_landing;
    uint is_taking_off;
    float pet_t;
    int pet_t_is_playing_forward;
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
layout(location = 6) in float wing_t;
layout(location = 5) in int is_wing;
layout(location = 3) in vec3 rest_pos;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 4) in vec3 rest_n;
layout(location = 8) in vec3 pet_pos;
layout(location = 9) in vec3 pet_n;
layout(location = 7) in int is_mouth_bottom;
layout(location = 1) in vec3 Vertex_Color;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 3) out vec3 entryPointParam_vs_main_prev_pos_ws;

void main()
{
    vec3 _33 = Vertex_Position;
    _33.y = _33.y + ((wing_t * 0.5) * cos((fract(material_data.anim_t) * 6.283185482025146484375) - (wing_t * 1.57079637050628662109375)));
    vec3 _572;
    vec3 _575;
    if (is_wing == 0)
    {
        float _569;
        if (material_data.is_landing != 0u)
        {
            float _368 = clamp(1.0 - material_data.landing_t, 0.0, 1.0);
            _569 = 1.0 - ((_368 * _368) - (_368 * sin(_368 * 3.1400001049041748046875)));
        }
        else
        {
            _569 = (material_data.is_taking_off != 0u) ? 0.0 : material_data.landing_t;
        }
        vec3 _131 = vec3(_569);
        _575 = mix(Vertex_Normal, rest_n, _131);
        _572 = mix(_33, rest_pos, _131);
    }
    else
    {
        float _566;
        if (material_data.is_landing != 0u)
        {
            float _380 = clamp(smoothstep(0.0, 0.800000011920928955078125, material_data.landing_t), 0.0, 1.0);
            _566 = ((_380 * _380) * _380) - (_380 * sin(_380 * 3.1400001049041748046875));
        }
        else
        {
            float _392 = clamp(material_data.landing_t, 0.0, 1.0);
            _566 = ((_392 * _392) * _392) - (_392 * sin(_392 * 3.1400001049041748046875));
        }
        vec3 _171 = vec3(_566);
        _575 = mix(Vertex_Normal, rest_n, _171);
        _572 = mix(_33, rest_pos, _171);
    }
    float _573;
    if (material_data.pet_t_is_playing_forward == 1)
    {
        float _405 = clamp(1.0 - material_data.pet_t, 0.0, 1.0);
        _573 = 1.0 - ((_405 * _405) - (_405 * sin(_405 * 3.1400001049041748046875)));
    }
    else
    {
        float _417 = clamp(material_data.pet_t, 0.0, 1.0);
        _573 = ((_417 * _417) * _417) - (_417 * sin(_417 * 3.1400001049041748046875));
    }
    vec3 _190 = vec3(_573);
    vec3 _193 = mix(_572, pet_pos, _190);
    vec3 _576;
    if (is_mouth_bottom == 1)
    {
        vec3 _564 = _193;
        _564.y = _193.y + (min(_573, 0.0) * 0.100000001490116119384765625);
        _576 = _564;
    }
    else
    {
        _576 = _193;
    }
    mat3x4 _467 = transpose(mat4x3(vec3(material_data.model_to_world.data.data[0], material_data.model_to_world.data.data[1], material_data.model_to_world.data.data[2]), vec3(material_data.model_to_world.data.data[3], material_data.model_to_world.data.data[4], material_data.model_to_world.data.data[5]), vec3(material_data.model_to_world.data.data[6], material_data.model_to_world.data.data[7], material_data.model_to_world.data.data[8]), vec3(material_data.model_to_world.data.data[9], material_data.model_to_world.data.data[10], material_data.model_to_world.data.data[11])));
    vec4 _430 = vec4(_576 * 0.60000002384185791015625, 1.0);
    vec3 _431 = _430 * _467;
    gl_Position = vec4(_431, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = Vertex_Color;
    entryPointParam_vs_main_frag_normal_ws = vec4(mix(_575, pet_n, _190), 0.0) * _467;
    entryPointParam_vs_main_frag_position_ws = _431.xyz;
    entryPointParam_vs_main_prev_pos_ws = _430 * transpose(mat4x3(vec3(material_data.prev_model_to_world.data.data[0], material_data.prev_model_to_world.data.data[1], material_data.prev_model_to_world.data.data[2]), vec3(material_data.prev_model_to_world.data.data[3], material_data.prev_model_to_world.data.data[4], material_data.prev_model_to_world.data.data[5]), vec3(material_data.prev_model_to_world.data.data[6], material_data.prev_model_to_world.data.data[7], material_data.prev_model_to_world.data.data[8]), vec3(material_data.prev_model_to_world.data.data[9], material_data.prev_model_to_world.data.data[10], material_data.prev_model_to_world.data.data[11])));
}

