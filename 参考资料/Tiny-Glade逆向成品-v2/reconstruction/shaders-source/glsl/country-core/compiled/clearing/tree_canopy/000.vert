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

float _2505;

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
        uint _50 = uint(gl_InstanceIndex);
        vec2 _1429 = unpackHalf2x16(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_50]].anim_t_packed);
        float _1434 = clamp(1.0 - clamp(mix(-1.0, 1.0, clamp(_1429.x, 0.0, 1.0)) + (1.0 - age), 0.0, 1.0), 0.0, 1.0);
        float _1440 = 1.0 - ((_1434 * _1434) - (_1434 * sin(_1434 * 3.1400001049041748046875)));
        vec3 _210 = mix(appear_pos, Vertex_Position, vec3(_1440));
        if (_1440 < 0.00999999977648258209228515625)
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
        float _277 = _210.y * 0.02999999932944774627685546875;
        float _1448 = float(frame_constants.game_time_sec);
        float _1449 = _1448 * 0.8235290050506591796875;
        float _302 = _210.x;
        float _1460 = _1448 * 0.893616974353790283203125;
        float _311 = _210.z;
        float _312 = 0.20000000298023223876953125 * _311;
        float _317 = _302 + ((_277 * sin(((_1449 - 6.283185482025146484375 * trunc(_1449 / 6.283185482025146484375)) + (frame_constants.game_time_frac * 0.8235290050506591796875)) + (0.20000000298023223876953125 * _302))) * sin(((_1460 - 6.283185482025146484375 * trunc(_1460 / 6.283185482025146484375)) + (frame_constants.game_time_frac * 0.893616974353790283203125)) + _312));
        vec3 _2478 = _210;
        _2478.x = _317;
        float _1471 = _1448 * 0.792452991008758544921875;
        float _1482 = _1448 * 0.688525021076202392578125;
        float _340 = _311 + ((_277 * sin(((_1471 - 6.283185482025146484375 * trunc(_1471 / 6.283185482025146484375)) + (frame_constants.game_time_frac * 0.792452991008758544921875)) + (0.20000000298023223876953125 * _317))) * sin(((_1482 - 6.283185482025146484375 * trunc(_1482 / 6.283185482025146484375)) + (frame_constants.game_time_frac * 0.688525021076202392578125)) + _312));
        _2478.z = _340;
        int _343 = int(nani_instance_indirection_buffer._member0[_50]);
        float _1578 = radians(material_data_nani_instance_data_1._member0[_343].rotation_angle);
        vec3 _1626 = normalize(vec3(cos(_1578), 0.0, sin(_1578)));
        mat4 _1590 = mat4(vec4(material_data_nani_instance_data_1._member0[_343].scale, 0.0, 0.0, 0.0), vec4(0.0, material_data_nani_instance_data_1._member0[_343].scale, 0.0, 0.0), vec4(0.0, 0.0, material_data_nani_instance_data_1._member0[_343].scale, 0.0), vec4(0.0, 0.0, 0.0, 1.0));
        mat4 _1598 = mat4(vec4(1.0, 0.0, 0.0, material_data_nani_instance_data_1._member0[_343].position.x), vec4(0.0, 1.0, 0.0, material_data_nani_instance_data_1._member0[_343].position.y), vec4(0.0, 0.0, 1.0, material_data_nani_instance_data_1._member0[_343].position.z), vec4(0.0, 0.0, 0.0, 1.0));
        mat4 _1610 = transpose(mat4(vec4(_1626, 0.0), vec4(0.0, 1.0, 0.0, 0.0), vec4(normalize(cross(_1626, vec3(0.0, 1.0, 0.0))), 0.0), vec4(0.0, 0.0, 0.0, 1.0)));
        vec4 _1614 = ((vec4(_2478, 1.0) * _1590) * _1610) * _1598;
        vec4 _1753 = ((vec4(prim_center, 1.0) * _1590) * _1610) * _1598;
        vec3 my_prim_center = _1753.xyz;
        vec4 _1802 = vec4(my_prim_center, 1.0) * current_view.world_to_view;
        if (length(_1802.xyz) < ((!((frame_constants.render_overrides & 2u) != 0u)) ? (-5.0) : 5.0))
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
        vec4 _1815 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
        vec3 _1819 = _1815.xyz / vec3(_1815.w);
        vec3 eye_to_prim_center = my_prim_center - _1819;
        float _672 = length(eye_to_prim_center);
        float _680 = dot((vec4(prim_normals, 0.0) * _1610).xyz, eye_to_prim_center * (1.0 / _672));
        float poly_facing = _680 - (abs(_680) * clamp((_672 - 5.0) * (-0.20000000298023223876953125), 0.0, 1.0));
        if (poly_facing >= 0.300000011920928955078125)
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
        float _743 = 1.0 - smoothstep(0.300000011920928955078125, -0.199999988079071044921875, poly_facing);
        float _2610 = (frame_constants.glade_theme_id == 4u) ? 0.4000000059604644775390625 : frame_constants.wind_strength;
        vec3 _783 = (vec3(Vertex_Color.xy, 0.0) * 2.0) - vec3(1.0);
        float _786 = 3.52941608428955078125 * _2610;
        float _1851 = _1448 * _786;
        float _795 = 1.53846204280853271484375 * _2610;
        float _1862 = _1448 * _795;
        float a = (0.20000000298023223876953125 * sin(((_1851 - 6.283185482025146484375 * trunc(_1851 / 6.283185482025146484375)) + (frame_constants.game_time_frac * _786)) + _317)) * sin(((_1862 - 6.283185482025146484375 * trunc(_1862 / 6.283185482025146484375)) + (frame_constants.game_time_frac * _795)) + _340);
        float _803 = cos(a);
        float _804 = sin(a);
        vec2 _811 = _783.xy * mat2(vec2(_803, _804), vec2(-_804, _803));
        vec3 _2483 = _783;
        _2483.x = _811.x;
        _2483.y = _811.y;
        float _845 = mix(-0.5, 0.5, 0.300000011920928955078125 * fract(52.98291778564453125 * fract(dot(vec2(0.067110560834407806396484375, 0.005837149918079376220703125), _1753.xz))));
        vec3 _1871 = normalize(_1819 - my_prim_center);
        float _1872 = sin(_845);
        float _1873 = cos(_845);
        float _1874 = 1.0 - _1873;
        float _1875 = _1871.x;
        float _1876 = _1874 * _1875;
        float _1879 = _1871.y;
        float _1880 = _1876 * _1879;
        float _1881 = _1871.z;
        float _1882 = _1881 * _1872;
        float _1884 = _1874 * _1881;
        float _1885 = _1884 * _1875;
        float _1886 = _1879 * _1872;
        float _1889 = _1874 * _1879;
        float _1892 = _1889 * _1881;
        float _1893 = _1875 * _1872;
        vec3 _897 = ((vec4((_1614.xyz + ((vec4(_2483, 0.0) * current_view.view_to_world).xyz * (uintBitsToFloat(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_50]].custom0) * _1440))) - my_prim_center, 1.0) * transpose(mat4(vec4((_1876 * _1875) + _1873, _1880 - _1882, _1885 + _1886, 0.0), vec4(_1880 + _1882, (_1889 * _1879) + _1873, _1892 - _1893, 0.0), vec4(_1885 - _1886, _1892 + _1893, (_1884 * _1881) + _1873, 0.0), vec4(0.0, 0.0, 0.0, 1.0)))).xyz * ((1.0 - (_743 * _743)) * mix(0.800000011920928955078125, 1.0, clamp(_1802.z * (-0.0500000007450580596923828125), 0.0, 1.0)))) + my_prim_center;
        vec2 _942 = _897.xz + (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_50]].bend_vector * smoothstep(3.0, 20.0, Vertex_Position.y));
        vec3 _2493 = _897;
        _2493.x = _942.x;
        _2493.z = _942.y;
        vec4 _953 = vec4(_2493, 1.0) * current_view.world_to_sample;
        float _956 = _953.w;
        float _1912 = -current_view.clip_to_view[3].z;
        float linear_z = (-1.0) / ((_953.z / _956) * _1912);
        float _972 = smoothstep(1.60000002384185791015625, 3.2000000476837158203125, linear_z);
        vec4 _2497 = _953;
        _2497.z = (1.0 / ((-(linear_z - (1.60000002384185791015625 * _972))) * _1912)) * _956;
        int _1008 = int(uint(material_data_nani_instance_data_1._member0[_343].id));
        float _1062 = _1753.y;
        int _1068 = int(10.0 * ((_1753.x + _1062) + _1753.z));
        uint _1076 = uint(_1008 + 4);
        uint _1944 = _1076 + (_1076 << 10u);
        uint _1946 = _1944 ^ (_1944 >> 6u);
        uint _1948 = _1946 + (_1946 << 3u);
        uint _1950 = _1948 ^ (_1948 >> 11u);
        uint _1118 = uint(_1068);
        uint _1966 = _1118 + (_1118 << 10u);
        uint _1968 = _1966 ^ (_1966 >> 6u);
        uint _1970 = _1968 + (_1968 << 3u);
        uint _1972 = _1970 ^ (_1970 >> 11u);
        vec2 _1211 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_50]].position.xz * 0.0500000007450580596923828125;
        ivec2 _1993 = ivec2(floor(_1211));
        vec2 _1994 = fract(_1211);
        uvec2 _1995 = uvec2(_1993);
        uint _2045 = _1995.y;
        uint _2051 = _2045 + (_2045 << 10u);
        uint _2053 = _2051 ^ (_2051 >> 6u);
        uint _2055 = _2053 + (_2053 << 3u);
        uint _2057 = _2055 ^ (_2055 >> 11u);
        uint _2065 = (((_1995.x * 1664525u) + (_2057 + (_2057 << 15u))) + 1013904223u) * 1664525u;
        uint _2067 = _2065 ^ (_2065 >> 11u);
        uint _2070 = _2067 ^ ((_2067 << 7u) & 2636928640u);
        uint _2073 = _2070 ^ ((_2070 << 15u) & 4022730752u);
        uint _2075 = _2073 ^ (_2073 >> 18u);
        float _2507;
        _2507 = _2505;
        uint _2092;
        uint _2111;
        float _2117;
        uint _2506 = 0u;
        uint _2581 = _2075;
        for (;;)
        {
            if (!(_2506 < 1u))
            {
                break;
            }
            uint _2103 = _2581 + (_2581 << 10u);
            uint _2105 = _2103 ^ (_2103 >> 6u);
            uint _2107 = _2105 + (_2105 << 3u);
            uint _2109 = _2107 ^ (_2107 >> 11u);
            _2111 = _2109 + (_2109 << 15u);
            _2117 = uintBitsToFloat((_2581 & 8388607u) | 1065353216u) - 1.0;
            _2092 = _2506 + 1u;
            _2581 = _2111;
            _2507 = _2117;
            _2506 = _2092;
            continue;
        }
        uvec2 _2003 = uvec2(_1993 + ivec2(1, 0));
        uint _2121 = _2003.y;
        uint _2127 = _2121 + (_2121 << 10u);
        uint _2129 = _2127 ^ (_2127 >> 6u);
        uint _2131 = _2129 + (_2129 << 3u);
        uint _2133 = _2131 ^ (_2131 >> 11u);
        uint _2141 = (((_2003.x * 1664525u) + (_2133 + (_2133 << 15u))) + 1013904223u) * 1664525u;
        uint _2143 = _2141 ^ (_2141 >> 11u);
        uint _2146 = _2143 ^ ((_2143 << 7u) & 2636928640u);
        uint _2149 = _2146 ^ ((_2146 << 15u) & 4022730752u);
        uint _2151 = _2149 ^ (_2149 >> 18u);
        float _2512;
        _2512 = _2505;
        uint _2168;
        uint _2187;
        float _2193;
        uint _2511 = 0u;
        uint _2580 = _2151;
        for (;;)
        {
            if (!(_2511 < 1u))
            {
                break;
            }
            uint _2179 = _2580 + (_2580 << 10u);
            uint _2181 = _2179 ^ (_2179 >> 6u);
            uint _2183 = _2181 + (_2181 << 3u);
            uint _2185 = _2183 ^ (_2183 >> 11u);
            _2187 = _2185 + (_2185 << 15u);
            _2193 = uintBitsToFloat((_2580 & 8388607u) | 1065353216u) - 1.0;
            _2168 = _2511 + 1u;
            _2580 = _2187;
            _2512 = _2193;
            _2511 = _2168;
            continue;
        }
        uvec2 _2010 = uvec2(_1993 + ivec2(0, 1));
        uint _2197 = _2010.y;
        uint _2203 = _2197 + (_2197 << 10u);
        uint _2205 = _2203 ^ (_2203 >> 6u);
        uint _2207 = _2205 + (_2205 << 3u);
        uint _2209 = _2207 ^ (_2207 >> 11u);
        uint _2217 = (((_2010.x * 1664525u) + (_2209 + (_2209 << 15u))) + 1013904223u) * 1664525u;
        uint _2219 = _2217 ^ (_2217 >> 11u);
        uint _2222 = _2219 ^ ((_2219 << 7u) & 2636928640u);
        uint _2225 = _2222 ^ ((_2222 << 15u) & 4022730752u);
        uint _2227 = _2225 ^ (_2225 >> 18u);
        float _2518;
        _2518 = _2505;
        uint _2244;
        uint _2263;
        float _2269;
        uint _2517 = 0u;
        uint _2579 = _2227;
        for (;;)
        {
            if (!(_2517 < 1u))
            {
                break;
            }
            uint _2255 = _2579 + (_2579 << 10u);
            uint _2257 = _2255 ^ (_2255 >> 6u);
            uint _2259 = _2257 + (_2257 << 3u);
            uint _2261 = _2259 ^ (_2259 >> 11u);
            _2263 = _2261 + (_2261 << 15u);
            _2269 = uintBitsToFloat((_2579 & 8388607u) | 1065353216u) - 1.0;
            _2244 = _2517 + 1u;
            _2579 = _2263;
            _2518 = _2269;
            _2517 = _2244;
            continue;
        }
        uvec2 _2018 = uvec2(_1993 + ivec2(1));
        uint _2273 = _2018.y;
        uint _2279 = _2273 + (_2273 << 10u);
        uint _2281 = _2279 ^ (_2279 >> 6u);
        uint _2283 = _2281 + (_2281 << 3u);
        uint _2285 = _2283 ^ (_2283 >> 11u);
        uint _2293 = (((_2018.x * 1664525u) + (_2285 + (_2285 << 15u))) + 1013904223u) * 1664525u;
        uint _2295 = _2293 ^ (_2293 >> 11u);
        uint _2298 = _2295 ^ ((_2295 << 7u) & 2636928640u);
        uint _2301 = _2298 ^ ((_2298 << 15u) & 4022730752u);
        uint _2303 = _2301 ^ (_2301 >> 18u);
        float _2525;
        _2525 = _2505;
        uint _2320;
        uint _2339;
        float _2345;
        uint _2524 = 0u;
        uint _2578 = _2303;
        for (;;)
        {
            if (!(_2524 < 1u))
            {
                break;
            }
            uint _2331 = _2578 + (_2578 << 10u);
            uint _2333 = _2331 ^ (_2331 >> 6u);
            uint _2335 = _2333 + (_2333 << 3u);
            uint _2337 = _2335 ^ (_2335 >> 11u);
            _2339 = _2337 + (_2337 << 15u);
            _2345 = uintBitsToFloat((_2578 & 8388607u) | 1065353216u) - 1.0;
            _2320 = _2524 + 1u;
            _2578 = _2339;
            _2525 = _2345;
            _2524 = _2320;
            continue;
        }
        vec2 _2351 = (_1994 * _1994) * (vec2(3.0) - (vec2(2.0) * _1994));
        float _2026 = _2351.x;
        float _2027 = 1.0 - _2026;
        float _2029 = _2351.y;
        gl_Position = _2497;
        entryPointParam_vs_main_frag_pos_ws_no_offset = _1614.xyz;
        entryPointParam_vs_main_frag_uv = Vertex_Color;
        entryPointParam_vs_main_frag_normal = (vec4(Vertex_Normal, 0.0) * _1610).xyz;
        entryPointParam_vs_main_frag_pos_ws = _2493;
        entryPointParam_vs_main_frag_tree_id = _1008;
        entryPointParam_vs_main_prim_seed = _1068;
        entryPointParam_vs_main_see_thru_anim_t = _1429.y;
        entryPointParam_vs_main_prim_center = my_prim_center;
        entryPointParam_vs_main_prim_should_have_flower = int((((uintBitsToFloat(((_1950 + (_1950 << 15u)) & 8388607u) | 1065353216u) - 1.0) < 0.4000000059604644775390625) && (_1062 > 3.0)) && ((uintBitsToFloat(((_1972 + (_1972 << 15u)) & 8388607u) | 1065353216u) - 1.0) < 0.89999997615814208984375));
        entryPointParam_vs_main_is_handplaced_flag = uint(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_50]].pad0);
        entryPointParam_vs_main_flowery_noise = (((1.0 - _2029) * ((_2507 * _2027) + (_2512 * _2026))) + ((_2518 * _2027) * _2029)) + ((_2525 * _2026) * _2029);
        entryPointParam_vs_main_clip_zw = _2497.zw;
        entryPointParam_vs_main_scramble_amount = _972;
        break;
    } while(false);
}

