#version 460
#extension GL_EXT_scalar_block_layout : require

struct PlacementData_natural
{
    vec3 position;
    float scale;
    float rotation_angle;
    int id;
    uint custom0;
    uint custom1;
    uint anim_t_packed;
    vec2 bend_vector;
    int pad0;
};

float _1956;

layout(set = 8, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 0, scalar) readonly buffer material_data_nani_instance_data
{
    PlacementData_natural _member0[];
} material_data_nani_instance_data_1;

layout(set = 4, binding = 0, std140) uniform FrameConstants_natural
{
    vec4 sun_color;
    vec4 sky_low_color;
    vec4 sky_high_color;
    vec4 fog_tint_thickness;
    vec4 fake_light_color;
    vec4 fake_light_dir;
    vec4 fake_light2_color;
    vec4 fake_light2_dir;
    float time_since_startup_secs;
    float delta_time_seconds;
    float ev_mult;
    uint glade_theme_id;
    uvec2 world_render_resolution;
    uint game_time_sec;
    float game_time_frac;
    vec3 editing_highlight_color;
    float time_of_day;
    vec3 dir_to_sun;
    uint camera_idx;
    vec3 dir_to_moon;
    uint render_overrides;
    vec3 dir_to_primary_directional_light;
    float main_view_lod_scale;
    vec4 main_view_eye_position;
    float fog_relative_extinction;
    uint highlighted_transient_stair_edge_id;
    uvec2 swapchain_dims;
    float swapchain_aspect_ratio;
    uint is_photomode;
    uint is_topdown_mode;
    uint is_firstperson_mode;
    vec3 brush_position;
    float eraser_size_multiplier;
    uint roof_highlighted_slot_id;
    uint roof_highlight_mode;
    uint wall_highlighted_slot_id;
    uint wall_highlight_mode;
    uint highlight_bricks_to_delete;
    float wind_strength;
    float tree_canopy_cone_angle_mult;
    float tree_canopy_max_cone_cull_dist_range;
    vec4 debug_tweakers;
    vec3 ground_fog;
    float moonswap;
} frame_constants;

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

layout(location = 6) in float age;
layout(location = 0) in vec3 Vertex_Position;
layout(location = 5) in vec3 appear_pos;
layout(location = 0) out vec3 entryPointParam_vs_main_frag_pos_ws_no_offset;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_uv;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_normal;
layout(location = 3) out vec3 entryPointParam_vs_main_frag_pos_ws;
layout(location = 4) flat out int entryPointParam_vs_main_frag_tree_id;
layout(location = 5) flat out int entryPointParam_vs_main_prim_seed;
layout(location = 6) flat out float entryPointParam_vs_main_see_thru_anim_t;
layout(location = 7) out vec3 entryPointParam_vs_main_prim_center;
layout(location = 8) flat out int entryPointParam_vs_main_prim_should_have_flower;
layout(location = 9) flat out uint entryPointParam_vs_main_is_handplaced_flag;
layout(location = 10) flat out float entryPointParam_vs_main_flowery_noise;
layout(location = 11) out vec2 entryPointParam_vs_main_clip_zw;
layout(location = 12) out float entryPointParam_vs_main_scramble_amount;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 3) in vec3 prim_center;
layout(location = 4) in vec3 prim_normals;
layout(location = 1) in vec3 Vertex_Color;

void main()
{
    do
    {
        uint _34 = uint(gl_InstanceIndex);
        vec2 _1083 = unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_34]].anim_t_packed);
        float _1088 = clamp(1.0 - clamp(mix(-1.0, 1.0, clamp(_1083.x, 0.0, 1.0)) + (1.0 - age), 0.0, 1.0), 0.0, 1.0);
        float _1094 = 1.0 - ((_1088 * _1088) - (_1088 * sin(_1088 * 3.1400001049041748046875)));
        if (_1094 < 0.00999999977648258209228515625)
        {
            gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
            entryPointParam_vs_main_frag_pos_ws_no_offset = vec3(0.0);
            entryPointParam_vs_main_frag_uv = vec3(0.0);
            entryPointParam_vs_main_frag_normal = vec3(0.0);
            entryPointParam_vs_main_frag_pos_ws = vec3(0.0);
            entryPointParam_vs_main_frag_tree_id = 0;
            entryPointParam_vs_main_prim_seed = 0;
            entryPointParam_vs_main_see_thru_anim_t = 0.0;
            entryPointParam_vs_main_prim_center = vec3(0.0);
            entryPointParam_vs_main_prim_should_have_flower = 0;
            entryPointParam_vs_main_is_handplaced_flag = 0u;
            entryPointParam_vs_main_flowery_noise = 0.0;
            entryPointParam_vs_main_clip_zw = vec2(0.0);
            entryPointParam_vs_main_scramble_amount = 0.0;
            break;
        }
        vec3 _223 = mix(appear_pos, Vertex_Position, vec3(_1094)) + Vertex_Normal;
        float _227 = _223.y * 0.02999999932944774627685546875;
        float _1102 = float(frame_constants.game_time_sec);
        float _1103 = _1102 * 0.8235290050506591796875;
        float _251 = _223.x;
        float _1114 = _1102 * 0.893616974353790283203125;
        float _259 = _223.z;
        float _260 = 0.20000000298023223876953125 * _259;
        float _265 = _251 + ((_227 * sin(((_1103 - 6.283185482025146484375 * trunc(_1103 / 6.283185482025146484375)) + (frame_constants.game_time_frac * 0.8235290050506591796875)) + (0.20000000298023223876953125 * _251))) * sin(((_1114 - 6.283185482025146484375 * trunc(_1114 / 6.283185482025146484375)) + (frame_constants.game_time_frac * 0.893616974353790283203125)) + _260));
        vec3 _1946 = _223;
        _1946.x = _265;
        float _1125 = _1102 * 0.792452991008758544921875;
        float _1136 = _1102 * 0.688525021076202392578125;
        _1946.z = _259 + ((_227 * sin(((_1125 - 6.283185482025146484375 * trunc(_1125 / 6.283185482025146484375)) + (frame_constants.game_time_frac * 0.792452991008758544921875)) + (0.20000000298023223876953125 * _265))) * sin(((_1136 - 6.283185482025146484375 * trunc(_1136 / 6.283185482025146484375)) + (frame_constants.game_time_frac * 0.688525021076202392578125)) + _260));
        int _291 = int(nani_instance_indirection_buffer._member0[_34]);
        float _1232 = radians(material_data_nani_instance_data_1._member0[_291].rotation_angle);
        vec3 _1280 = normalize(vec3(cos(_1232), 0.0, sin(_1232)));
        mat4 _1244 = mat4(vec4(material_data_nani_instance_data_1._member0[_291].scale, 0.0, 0.0, 0.0), vec4(0.0, material_data_nani_instance_data_1._member0[_291].scale, 0.0, 0.0), vec4(0.0, 0.0, material_data_nani_instance_data_1._member0[_291].scale, 0.0), vec4(0.0, 0.0, 0.0, 1.0));
        mat4 _1252 = mat4(vec4(1.0, 0.0, 0.0, material_data_nani_instance_data_1._member0[_291].position.x), vec4(0.0, 1.0, 0.0, material_data_nani_instance_data_1._member0[_291].position.y), vec4(0.0, 0.0, 1.0, material_data_nani_instance_data_1._member0[_291].position.z), vec4(0.0, 0.0, 0.0, 1.0));
        mat4 _1264 = transpose(mat4(vec4(_1280, 0.0), vec4(0.0, 1.0, 0.0, 0.0), vec4(normalize(cross(_1280, vec3(0.0, 1.0, 0.0))), 0.0), vec4(0.0, 0.0, 0.0, 1.0)));
        vec4 _1268 = ((vec4(_1946, 1.0) * _1244) * _1264) * _1252;
        vec4 _1407 = ((vec4(prim_center, 1.0) * _1244) * _1264) * _1252;
        if (dot((vec4(prim_normals, 0.0) * _1264).xyz, normalize((vec4(0.0, 0.0, -1.0, 0.0) * current_view.view_to_world).xyz)) >= 0.1500000059604644775390625)
        {
            gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
            entryPointParam_vs_main_frag_pos_ws_no_offset = vec3(0.0);
            entryPointParam_vs_main_frag_uv = vec3(0.0);
            entryPointParam_vs_main_frag_normal = vec3(0.0);
            entryPointParam_vs_main_frag_pos_ws = vec3(0.0);
            entryPointParam_vs_main_frag_tree_id = 0;
            entryPointParam_vs_main_prim_seed = 0;
            entryPointParam_vs_main_see_thru_anim_t = 0.0;
            entryPointParam_vs_main_prim_center = vec3(0.0);
            entryPointParam_vs_main_prim_should_have_flower = 0;
            entryPointParam_vs_main_is_handplaced_flag = 0u;
            entryPointParam_vs_main_flowery_noise = 0.0;
            entryPointParam_vs_main_clip_zw = vec2(0.0);
            entryPointParam_vs_main_scramble_amount = 0.0;
            break;
        }
        vec3 _584 = _1268.xyz;
        vec2 _630 = _1268.xz + (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_34]].bend_vector * smoothstep(3.0, 20.0, Vertex_Position.y));
        vec3 _1951 = _584;
        _1951.x = _630.x;
        _1951.z = _630.y;
        vec4 _641 = vec4(_1951, 1.0) * current_view.world_to_sample;
        _641.z = (-((-_641.z) - (current_view.view_to_clip[2].z * (-0.75)))) * _641.w;
        vec2 _833 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_34]].position.xz * 0.0500000007450580596923828125;
        ivec2 _1476 = ivec2(floor(_833));
        vec2 _1477 = fract(_833);
        uvec2 _1478 = uvec2(_1476);
        uint _1528 = _1478.y;
        uint _1534 = _1528 + (_1528 << 10u);
        uint _1536 = _1534 ^ (_1534 >> 6u);
        uint _1538 = _1536 + (_1536 << 3u);
        uint _1540 = _1538 ^ (_1538 >> 11u);
        uint _1548 = (((_1478.x * 1664525u) + (_1540 + (_1540 << 15u))) + 1013904223u) * 1664525u;
        uint _1550 = _1548 ^ (_1548 >> 11u);
        uint _1553 = _1550 ^ ((_1550 << 7u) & 2636928640u);
        uint _1556 = _1553 ^ ((_1553 << 15u) & 4022730752u);
        uint _1558 = _1556 ^ (_1556 >> 18u);
        float _1958;
        _1958 = _1956;
        uint _1575;
        uint _1594;
        float _1600;
        uint _1957 = 0u;
        uint _2026 = _1558;
        for (;;)
        {
            if (!(_1957 < 1u))
            {
                break;
            }
            uint _1586 = _2026 + (_2026 << 10u);
            uint _1588 = _1586 ^ (_1586 >> 6u);
            uint _1590 = _1588 + (_1588 << 3u);
            uint _1592 = _1590 ^ (_1590 >> 11u);
            _1594 = _1592 + (_1592 << 15u);
            _1600 = uintBitsToFloat((_2026 & 8388607u) | 1065353216u) - 1.0;
            _1575 = _1957 + 1u;
            _2026 = _1594;
            _1958 = _1600;
            _1957 = _1575;
            continue;
        }
        uvec2 _1486 = uvec2(_1476 + ivec2(1, 0));
        uint _1604 = _1486.y;
        uint _1610 = _1604 + (_1604 << 10u);
        uint _1612 = _1610 ^ (_1610 >> 6u);
        uint _1614 = _1612 + (_1612 << 3u);
        uint _1616 = _1614 ^ (_1614 >> 11u);
        uint _1624 = (((_1486.x * 1664525u) + (_1616 + (_1616 << 15u))) + 1013904223u) * 1664525u;
        uint _1626 = _1624 ^ (_1624 >> 11u);
        uint _1629 = _1626 ^ ((_1626 << 7u) & 2636928640u);
        uint _1632 = _1629 ^ ((_1629 << 15u) & 4022730752u);
        uint _1634 = _1632 ^ (_1632 >> 18u);
        float _1961;
        _1961 = _1956;
        uint _1651;
        uint _1670;
        float _1676;
        uint _1960 = 0u;
        uint _2025 = _1634;
        for (;;)
        {
            if (!(_1960 < 1u))
            {
                break;
            }
            uint _1662 = _2025 + (_2025 << 10u);
            uint _1664 = _1662 ^ (_1662 >> 6u);
            uint _1666 = _1664 + (_1664 << 3u);
            uint _1668 = _1666 ^ (_1666 >> 11u);
            _1670 = _1668 + (_1668 << 15u);
            _1676 = uintBitsToFloat((_2025 & 8388607u) | 1065353216u) - 1.0;
            _1651 = _1960 + 1u;
            _2025 = _1670;
            _1961 = _1676;
            _1960 = _1651;
            continue;
        }
        uvec2 _1493 = uvec2(_1476 + ivec2(0, 1));
        uint _1680 = _1493.y;
        uint _1686 = _1680 + (_1680 << 10u);
        uint _1688 = _1686 ^ (_1686 >> 6u);
        uint _1690 = _1688 + (_1688 << 3u);
        uint _1692 = _1690 ^ (_1690 >> 11u);
        uint _1700 = (((_1493.x * 1664525u) + (_1692 + (_1692 << 15u))) + 1013904223u) * 1664525u;
        uint _1702 = _1700 ^ (_1700 >> 11u);
        uint _1705 = _1702 ^ ((_1702 << 7u) & 2636928640u);
        uint _1708 = _1705 ^ ((_1705 << 15u) & 4022730752u);
        uint _1710 = _1708 ^ (_1708 >> 18u);
        float _1965;
        _1965 = _1956;
        uint _1727;
        uint _1746;
        float _1752;
        uint _1964 = 0u;
        uint _2024 = _1710;
        for (;;)
        {
            if (!(_1964 < 1u))
            {
                break;
            }
            uint _1738 = _2024 + (_2024 << 10u);
            uint _1740 = _1738 ^ (_1738 >> 6u);
            uint _1742 = _1740 + (_1740 << 3u);
            uint _1744 = _1742 ^ (_1742 >> 11u);
            _1746 = _1744 + (_1744 << 15u);
            _1752 = uintBitsToFloat((_2024 & 8388607u) | 1065353216u) - 1.0;
            _1727 = _1964 + 1u;
            _2024 = _1746;
            _1965 = _1752;
            _1964 = _1727;
            continue;
        }
        uvec2 _1501 = uvec2(_1476 + ivec2(1));
        uint _1756 = _1501.y;
        uint _1762 = _1756 + (_1756 << 10u);
        uint _1764 = _1762 ^ (_1762 >> 6u);
        uint _1766 = _1764 + (_1764 << 3u);
        uint _1768 = _1766 ^ (_1766 >> 11u);
        uint _1776 = (((_1501.x * 1664525u) + (_1768 + (_1768 << 15u))) + 1013904223u) * 1664525u;
        uint _1778 = _1776 ^ (_1776 >> 11u);
        uint _1781 = _1778 ^ ((_1778 << 7u) & 2636928640u);
        uint _1784 = _1781 ^ ((_1781 << 15u) & 4022730752u);
        uint _1786 = _1784 ^ (_1784 >> 18u);
        float _1970;
        _1970 = _1956;
        uint _1803;
        uint _1822;
        float _1828;
        uint _1969 = 0u;
        uint _2023 = _1786;
        for (;;)
        {
            if (!(_1969 < 1u))
            {
                break;
            }
            uint _1814 = _2023 + (_2023 << 10u);
            uint _1816 = _1814 ^ (_1814 >> 6u);
            uint _1818 = _1816 + (_1816 << 3u);
            uint _1820 = _1818 ^ (_1818 >> 11u);
            _1822 = _1820 + (_1820 << 15u);
            _1828 = uintBitsToFloat((_2023 & 8388607u) | 1065353216u) - 1.0;
            _1803 = _1969 + 1u;
            _2023 = _1822;
            _1970 = _1828;
            _1969 = _1803;
            continue;
        }
        vec2 _1834 = (_1477 * _1477) * (vec2(3.0) - (vec2(2.0) * _1477));
        float _1509 = _1834.x;
        float _1510 = 1.0 - _1509;
        float _1512 = _1834.y;
        gl_Position = _641;
        entryPointParam_vs_main_frag_pos_ws_no_offset = _584;
        entryPointParam_vs_main_frag_uv = mix(Vertex_Color, vec3(0.5), vec3(0.300000011920928955078125));
        entryPointParam_vs_main_frag_normal = (vec4(Vertex_Normal, 0.0) * _1264).xyz;
        entryPointParam_vs_main_frag_pos_ws = _1951;
        entryPointParam_vs_main_frag_tree_id = int(uint(material_data_nani_instance_data_1._member0[_291].id));
        entryPointParam_vs_main_prim_seed = int(10.0 * ((_1407.x + _1407.y) + _1407.z));
        entryPointParam_vs_main_see_thru_anim_t = _1083.y;
        entryPointParam_vs_main_prim_center = _1407.xyz;
        entryPointParam_vs_main_prim_should_have_flower = 0;
        entryPointParam_vs_main_is_handplaced_flag = uint(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_34]].pad0);
        entryPointParam_vs_main_flowery_noise = (((1.0 - _1512) * ((_1958 * _1510) + (_1961 * _1509))) + ((_1965 * _1510) * _1512)) + ((_1970 * _1509) * _1512);
        entryPointParam_vs_main_clip_zw = _641.zw;
        entryPointParam_vs_main_scramble_amount = 1.0;
        break;
    } while(false);
}

