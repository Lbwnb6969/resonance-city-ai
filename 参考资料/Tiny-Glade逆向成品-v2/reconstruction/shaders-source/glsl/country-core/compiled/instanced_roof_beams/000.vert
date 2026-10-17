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

struct RoofSupportBeam_natural
{
    Affine3Packed_natural transform;
    vec4 circle_normal;
    float roof_profile;
    int pad0;
};

float _943;

layout(set = 0, binding = 0, scalar) readonly buffer StructuredBuffer
{
    RoofSupportBeam_natural _member0[];
} material_data_instanced_data;

layout(set = 6, binding = 0, std140) uniform ColorLibraryData_natural
{
    vec4 temp_color_1;
    vec4 temp_color_2;
    vec4 temp_color_3;
    vec4 roof_color_1;
    vec4 roof_color_2;
    vec4 sky_low_day;
    vec4 sky_high_day;
    vec4 sun_tint_day;
    vec4 sky_low_dusk;
    vec4 sky_high_dusk;
    vec4 sun_tint_dusk;
    vec4 indirect_light_tint;
    vec4 fence_color_1;
    vec4 fence_color_2;
    vec4 flower_color_1;
    vec4 flower_color_2;
    vec4 canopy_color_1;
    vec4 canopy_color_2;
    vec4 grass_1;
    vec4 grass_2;
    vec4 path;
    vec4 sky_base;
    vec4 sky_horizon;
    vec4 sky_clouds_1;
    vec4 sky_clouds_2;
    vec4 terrain_1;
    vec4 terrain_2;
    vec4 terrain_flattened;
    vec4 wall_1;
    vec4 wall_2;
    vec4 wall_moss;
    vec4 wall_bricks;
    vec4 ivy_branch;
    vec4 ivy_leaf_1;
    vec4 ivy_leaf_2;
    vec4 terrain_highlight;
    vec4 night_tint;
} color_library_data;

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
layout(location = 1) in vec3 Vertex_Normal;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_normal;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_pos_ws;

void main()
{
    uint _18 = uint(gl_InstanceIndex);
    mat3x4 _483 = transpose(mat4x3(vec3(material_data_instanced_data._member0[_18].transform.data.data[0], material_data_instanced_data._member0[_18].transform.data.data[1], material_data_instanced_data._member0[_18].transform.data.data[2]), vec3(material_data_instanced_data._member0[_18].transform.data.data[3], material_data_instanced_data._member0[_18].transform.data.data[4], material_data_instanced_data._member0[_18].transform.data.data[5]), vec3(material_data_instanced_data._member0[_18].transform.data.data[6], material_data_instanced_data._member0[_18].transform.data.data[7], material_data_instanced_data._member0[_18].transform.data.data[8]), vec3(material_data_instanced_data._member0[_18].transform.data.data[9], material_data_instanced_data._member0[_18].transform.data.data[10], material_data_instanced_data._member0[_18].transform.data.data[11])));
    vec3 _113 = (vec4(Vertex_Position, 1.0) * _483) + (material_data_instanced_data._member0[_18].circle_normal.xyz * mix(0.20000000298023223876953125, -0.1500000059604644775390625, material_data_instanced_data._member0[_18].roof_profile));
    vec2 _117 = _113.xz * 0.5;
    ivec2 _499 = ivec2(floor(_117));
    vec2 _500 = fract(_117);
    uvec2 _501 = uvec2(_499);
    uint _551 = _501.y;
    uint _557 = _551 + (_551 << 10u);
    uint _559 = _557 ^ (_557 >> 6u);
    uint _561 = _559 + (_559 << 3u);
    uint _563 = _561 ^ (_561 >> 11u);
    uint _571 = (((_501.x * 1664525u) + (_563 + (_563 << 15u))) + 1013904223u) * 1664525u;
    uint _573 = _571 ^ (_571 >> 11u);
    uint _576 = _573 ^ ((_573 << 7u) & 2636928640u);
    uint _579 = _576 ^ ((_576 << 15u) & 4022730752u);
    uint _581 = _579 ^ (_579 >> 18u);
    float _945;
    _945 = _943;
    uint _598;
    uint _617;
    float _623;
    uint _944 = 0u;
    uint _965 = _581;
    for (;;)
    {
        if (!(_944 < 1u))
        {
            break;
        }
        uint _609 = _965 + (_965 << 10u);
        uint _611 = _609 ^ (_609 >> 6u);
        uint _613 = _611 + (_611 << 3u);
        uint _615 = _613 ^ (_613 >> 11u);
        _617 = _615 + (_615 << 15u);
        _623 = uintBitsToFloat((_965 & 8388607u) | 1065353216u) - 1.0;
        _598 = _944 + 1u;
        _965 = _617;
        _945 = _623;
        _944 = _598;
        continue;
    }
    uvec2 _509 = uvec2(_499 + ivec2(1, 0));
    uint _627 = _509.y;
    uint _633 = _627 + (_627 << 10u);
    uint _635 = _633 ^ (_633 >> 6u);
    uint _637 = _635 + (_635 << 3u);
    uint _639 = _637 ^ (_637 >> 11u);
    uint _647 = (((_509.x * 1664525u) + (_639 + (_639 << 15u))) + 1013904223u) * 1664525u;
    uint _649 = _647 ^ (_647 >> 11u);
    uint _652 = _649 ^ ((_649 << 7u) & 2636928640u);
    uint _655 = _652 ^ ((_652 << 15u) & 4022730752u);
    uint _657 = _655 ^ (_655 >> 18u);
    float _948;
    _948 = _943;
    uint _674;
    uint _693;
    float _699;
    uint _947 = 0u;
    uint _964 = _657;
    for (;;)
    {
        if (!(_947 < 1u))
        {
            break;
        }
        uint _685 = _964 + (_964 << 10u);
        uint _687 = _685 ^ (_685 >> 6u);
        uint _689 = _687 + (_687 << 3u);
        uint _691 = _689 ^ (_689 >> 11u);
        _693 = _691 + (_691 << 15u);
        _699 = uintBitsToFloat((_964 & 8388607u) | 1065353216u) - 1.0;
        _674 = _947 + 1u;
        _964 = _693;
        _948 = _699;
        _947 = _674;
        continue;
    }
    uvec2 _516 = uvec2(_499 + ivec2(0, 1));
    uint _703 = _516.y;
    uint _709 = _703 + (_703 << 10u);
    uint _711 = _709 ^ (_709 >> 6u);
    uint _713 = _711 + (_711 << 3u);
    uint _715 = _713 ^ (_713 >> 11u);
    uint _723 = (((_516.x * 1664525u) + (_715 + (_715 << 15u))) + 1013904223u) * 1664525u;
    uint _725 = _723 ^ (_723 >> 11u);
    uint _728 = _725 ^ ((_725 << 7u) & 2636928640u);
    uint _731 = _728 ^ ((_728 << 15u) & 4022730752u);
    uint _733 = _731 ^ (_731 >> 18u);
    float _952;
    _952 = _943;
    uint _750;
    uint _769;
    float _775;
    uint _951 = 0u;
    uint _963 = _733;
    for (;;)
    {
        if (!(_951 < 1u))
        {
            break;
        }
        uint _761 = _963 + (_963 << 10u);
        uint _763 = _761 ^ (_761 >> 6u);
        uint _765 = _763 + (_763 << 3u);
        uint _767 = _765 ^ (_765 >> 11u);
        _769 = _767 + (_767 << 15u);
        _775 = uintBitsToFloat((_963 & 8388607u) | 1065353216u) - 1.0;
        _750 = _951 + 1u;
        _963 = _769;
        _952 = _775;
        _951 = _750;
        continue;
    }
    uvec2 _524 = uvec2(_499 + ivec2(1));
    uint _779 = _524.y;
    uint _785 = _779 + (_779 << 10u);
    uint _787 = _785 ^ (_785 >> 6u);
    uint _789 = _787 + (_787 << 3u);
    uint _791 = _789 ^ (_789 >> 11u);
    uint _799 = (((_524.x * 1664525u) + (_791 + (_791 << 15u))) + 1013904223u) * 1664525u;
    uint _801 = _799 ^ (_799 >> 11u);
    uint _804 = _801 ^ ((_801 << 7u) & 2636928640u);
    uint _807 = _804 ^ ((_804 << 15u) & 4022730752u);
    uint _809 = _807 ^ (_807 >> 18u);
    float _957;
    _957 = _943;
    uint _826;
    uint _845;
    float _851;
    uint _956 = 0u;
    uint _962 = _809;
    for (;;)
    {
        if (!(_956 < 1u))
        {
            break;
        }
        uint _837 = _962 + (_962 << 10u);
        uint _839 = _837 ^ (_837 >> 6u);
        uint _841 = _839 + (_839 << 3u);
        uint _843 = _841 ^ (_841 >> 11u);
        _845 = _843 + (_843 << 15u);
        _851 = uintBitsToFloat((_962 & 8388607u) | 1065353216u) - 1.0;
        _826 = _956 + 1u;
        _962 = _845;
        _957 = _851;
        _956 = _826;
        continue;
    }
    vec2 _858 = (_500 * _500) * (vec2(3.0) - (vec2(2.0) * _500));
    float _532 = _858.x;
    float _533 = 1.0 - _532;
    float _535 = _858.y;
    _113.y = _113.y + (((((1.0 - _535) * ((_945 * _533) + (_948 * _532))) + ((_952 * _533) * _535)) + ((_957 * _532) * _535)) * 0.300000011920928955078125);
    mat3 _870 = mat3(_483[0].xyz, _483[1].xyz, _483[2].xyz);
    vec3 _912 = vec3(1.0, 0.0, 0.0) * _870;
    vec3 _913 = vec3(0.0, 1.0, 0.0) * _870;
    vec3 _914 = vec3(0.0, 0.0, 1.0) * _870;
    vec3 _917 = cross(_912, _913);
    vec3 _920 = vec3(1.0 / dot(_914, _917));
    gl_Position = vec4(_113, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = mix(color_library_data.fence_color_2.xyz, color_library_data.fence_color_1.xyz, vec3(0.20000000298023223876953125)) * vec3(0.719999969005584716796875, 0.647999942302703857421875, 0.5759999752044677734375);
    entryPointParam_vs_main_normal = mat3(cross(_913, _914) * _920, cross(_914, _912) * _920, _917 * _920) * Vertex_Normal.xyz;
    entryPointParam_vs_main_frag_pos_ws = _113.xyz;
}

