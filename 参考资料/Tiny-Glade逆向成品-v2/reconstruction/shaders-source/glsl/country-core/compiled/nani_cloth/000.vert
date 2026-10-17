#version 460

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct InstanceData_natural
{
    Affine3Packed_natural xform;
    float y_offset_1;
    float y_offset_2;
    int color_seed;
    uint normal_map;
};

struct _MatrixStorage_float3x3_ColMajornatural
{
    vec3 data[3];
};

float _1765;

layout(set = 6, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 0, std430) readonly buffer material_data_nani_instance_data
{
    InstanceData_natural _member0[];
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

layout(location = 0) in vec3 Vertex_Position;
layout(location = 1) in vec3 Vertex_Normal;
layout(location = 2) in vec2 Vertex_UV;
layout(location = 3) in vec3 tangent;
layout(location = 4) in vec3 bitangent;
layout(location = 0) flat out uint entryPointParam_vs_main_instance_index;
layout(location = 1) flat out int entryPointParam_vs_main_position_seed;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 3) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 4) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 5) out _MatrixStorage_float3x3_ColMajornatural entryPointParam_vs_main_frag_tangent_to_world;

void main()
{
    uint _21 = uint(gl_InstanceIndex);
    vec3 _50 = Vertex_Position;
    mat3x4 _630 = transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_21]].xform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_21]].xform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_21]].xform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_21]].xform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_21]].xform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_21]].xform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_21]].xform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_21]].xform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_21]].xform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_21]].xform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_21]].xform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_21]].xform.data.data[11])));
    vec3 _593 = vec4(vec3(0.0), 1.0) * _630;
    float _655 = float(frame_constants.game_time_sec);
    float _658 = _655 + frame_constants.game_time_frac;
    vec2 _637 = (_593.xz * 0.100000001490116119384765625) + (vec2(_658, 0.0) * 1.2000000476837158203125);
    ivec2 _674 = ivec2(floor(_637));
    vec2 _675 = fract(_637);
    uvec2 _676 = uvec2(_674);
    uint _726 = _676.y;
    uint _732 = _726 + (_726 << 10u);
    uint _734 = _732 ^ (_732 >> 6u);
    uint _736 = _734 + (_734 << 3u);
    uint _738 = _736 ^ (_736 >> 11u);
    uint _746 = (((_676.x * 1664525u) + (_738 + (_738 << 15u))) + 1013904223u) * 1664525u;
    uint _748 = _746 ^ (_746 >> 11u);
    uint _751 = _748 ^ ((_748 << 7u) & 2636928640u);
    uint _754 = _751 ^ ((_751 << 15u) & 4022730752u);
    uint _756 = _754 ^ (_754 >> 18u);
    float _1767;
    _1767 = _1765;
    uint _773;
    uint _792;
    float _798;
    uint _1766 = 0u;
    uint _1825 = _756;
    for (;;)
    {
        if (!(_1766 < 1u))
        {
            break;
        }
        uint _784 = _1825 + (_1825 << 10u);
        uint _786 = _784 ^ (_784 >> 6u);
        uint _788 = _786 + (_786 << 3u);
        uint _790 = _788 ^ (_788 >> 11u);
        _792 = _790 + (_790 << 15u);
        _798 = uintBitsToFloat((_1825 & 8388607u) | 1065353216u) - 1.0;
        _773 = _1766 + 1u;
        _1825 = _792;
        _1767 = _798;
        _1766 = _773;
        continue;
    }
    uvec2 _684 = uvec2(_674 + ivec2(1, 0));
    uint _802 = _684.y;
    uint _808 = _802 + (_802 << 10u);
    uint _810 = _808 ^ (_808 >> 6u);
    uint _812 = _810 + (_810 << 3u);
    uint _814 = _812 ^ (_812 >> 11u);
    uint _822 = (((_684.x * 1664525u) + (_814 + (_814 << 15u))) + 1013904223u) * 1664525u;
    uint _824 = _822 ^ (_822 >> 11u);
    uint _827 = _824 ^ ((_824 << 7u) & 2636928640u);
    uint _830 = _827 ^ ((_827 << 15u) & 4022730752u);
    uint _832 = _830 ^ (_830 >> 18u);
    float _1770;
    _1770 = _1765;
    uint _849;
    uint _868;
    float _874;
    uint _1769 = 0u;
    uint _1824 = _832;
    for (;;)
    {
        if (!(_1769 < 1u))
        {
            break;
        }
        uint _860 = _1824 + (_1824 << 10u);
        uint _862 = _860 ^ (_860 >> 6u);
        uint _864 = _862 + (_862 << 3u);
        uint _866 = _864 ^ (_864 >> 11u);
        _868 = _866 + (_866 << 15u);
        _874 = uintBitsToFloat((_1824 & 8388607u) | 1065353216u) - 1.0;
        _849 = _1769 + 1u;
        _1824 = _868;
        _1770 = _874;
        _1769 = _849;
        continue;
    }
    uvec2 _691 = uvec2(_674 + ivec2(0, 1));
    uint _878 = _691.y;
    uint _884 = _878 + (_878 << 10u);
    uint _886 = _884 ^ (_884 >> 6u);
    uint _888 = _886 + (_886 << 3u);
    uint _890 = _888 ^ (_888 >> 11u);
    uint _898 = (((_691.x * 1664525u) + (_890 + (_890 << 15u))) + 1013904223u) * 1664525u;
    uint _900 = _898 ^ (_898 >> 11u);
    uint _903 = _900 ^ ((_900 << 7u) & 2636928640u);
    uint _906 = _903 ^ ((_903 << 15u) & 4022730752u);
    uint _908 = _906 ^ (_906 >> 18u);
    float _1774;
    _1774 = _1765;
    uint _925;
    uint _944;
    float _950;
    uint _1773 = 0u;
    uint _1823 = _908;
    for (;;)
    {
        if (!(_1773 < 1u))
        {
            break;
        }
        uint _936 = _1823 + (_1823 << 10u);
        uint _938 = _936 ^ (_936 >> 6u);
        uint _940 = _938 + (_938 << 3u);
        uint _942 = _940 ^ (_940 >> 11u);
        _944 = _942 + (_942 << 15u);
        _950 = uintBitsToFloat((_1823 & 8388607u) | 1065353216u) - 1.0;
        _925 = _1773 + 1u;
        _1823 = _944;
        _1774 = _950;
        _1773 = _925;
        continue;
    }
    uvec2 _699 = uvec2(_674 + ivec2(1));
    uint _954 = _699.y;
    uint _960 = _954 + (_954 << 10u);
    uint _962 = _960 ^ (_960 >> 6u);
    uint _964 = _962 + (_962 << 3u);
    uint _966 = _964 ^ (_964 >> 11u);
    uint _974 = (((_699.x * 1664525u) + (_966 + (_966 << 15u))) + 1013904223u) * 1664525u;
    uint _976 = _974 ^ (_974 >> 11u);
    uint _979 = _976 ^ ((_976 << 7u) & 2636928640u);
    uint _982 = _979 ^ ((_979 << 15u) & 4022730752u);
    uint _984 = _982 ^ (_982 >> 18u);
    float _1779;
    _1779 = _1765;
    uint _1001;
    uint _1020;
    float _1026;
    uint _1778 = 0u;
    uint _1822 = _984;
    for (;;)
    {
        if (!(_1778 < 1u))
        {
            break;
        }
        uint _1012 = _1822 + (_1822 << 10u);
        uint _1014 = _1012 ^ (_1012 >> 6u);
        uint _1016 = _1014 + (_1014 << 3u);
        uint _1018 = _1016 ^ (_1016 >> 11u);
        _1020 = _1018 + (_1018 << 15u);
        _1026 = uintBitsToFloat((_1822 & 8388607u) | 1065353216u) - 1.0;
        _1001 = _1778 + 1u;
        _1822 = _1020;
        _1779 = _1026;
        _1778 = _1001;
        continue;
    }
    vec2 _1032 = (_675 * _675) * (vec2(3.0) - (vec2(2.0) * _675));
    float _707 = _1032.x;
    float _708 = 1.0 - _707;
    float _710 = _1032.y;
    uint _646 = uint(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_21]].color_seed);
    uint _1045 = _646 + (_646 << 10u);
    uint _1047 = _1045 ^ (_1045 >> 6u);
    uint _1049 = _1047 + (_1047 << 3u);
    uint _1051 = _1049 ^ (_1049 >> 11u);
    float _1059 = uintBitsToFloat(((_1051 + (_1051 << 15u)) & 8388607u) | 1065353216u) - 1.0;
    float _1065 = _655 * 1.7999999523162841796875;
    float _440 = _593.x;
    float _442 = _593.y;
    vec2 _443 = vec2(_658 + _440, _442);
    ivec2 _1113 = ivec2(floor(_443));
    vec2 _1114 = fract(_443);
    uvec2 _1115 = uvec2(_1113);
    uint _1165 = _1115.y;
    uint _1171 = _1165 + (_1165 << 10u);
    uint _1173 = _1171 ^ (_1171 >> 6u);
    uint _1175 = _1173 + (_1173 << 3u);
    uint _1177 = _1175 ^ (_1175 >> 11u);
    uint _1185 = (((_1115.x * 1664525u) + (_1177 + (_1177 << 15u))) + 1013904223u) * 1664525u;
    uint _1187 = _1185 ^ (_1185 >> 11u);
    uint _1190 = _1187 ^ ((_1187 << 7u) & 2636928640u);
    uint _1193 = _1190 ^ ((_1190 << 15u) & 4022730752u);
    uint _1195 = _1193 ^ (_1193 >> 18u);
    float _1785;
    _1785 = _1765;
    uint _1212;
    uint _1231;
    float _1237;
    uint _1784 = 0u;
    uint _1821 = _1195;
    for (;;)
    {
        if (!(_1784 < 1u))
        {
            break;
        }
        uint _1223 = _1821 + (_1821 << 10u);
        uint _1225 = _1223 ^ (_1223 >> 6u);
        uint _1227 = _1225 + (_1225 << 3u);
        uint _1229 = _1227 ^ (_1227 >> 11u);
        _1231 = _1229 + (_1229 << 15u);
        _1237 = uintBitsToFloat((_1821 & 8388607u) | 1065353216u) - 1.0;
        _1212 = _1784 + 1u;
        _1821 = _1231;
        _1785 = _1237;
        _1784 = _1212;
        continue;
    }
    uvec2 _1123 = uvec2(_1113 + ivec2(1, 0));
    uint _1241 = _1123.y;
    uint _1247 = _1241 + (_1241 << 10u);
    uint _1249 = _1247 ^ (_1247 >> 6u);
    uint _1251 = _1249 + (_1249 << 3u);
    uint _1253 = _1251 ^ (_1251 >> 11u);
    uint _1261 = (((_1123.x * 1664525u) + (_1253 + (_1253 << 15u))) + 1013904223u) * 1664525u;
    uint _1263 = _1261 ^ (_1261 >> 11u);
    uint _1266 = _1263 ^ ((_1263 << 7u) & 2636928640u);
    uint _1269 = _1266 ^ ((_1266 << 15u) & 4022730752u);
    uint _1271 = _1269 ^ (_1269 >> 18u);
    float _1792;
    _1792 = _1765;
    uint _1288;
    uint _1307;
    float _1313;
    uint _1791 = 0u;
    uint _1820 = _1271;
    for (;;)
    {
        if (!(_1791 < 1u))
        {
            break;
        }
        uint _1299 = _1820 + (_1820 << 10u);
        uint _1301 = _1299 ^ (_1299 >> 6u);
        uint _1303 = _1301 + (_1301 << 3u);
        uint _1305 = _1303 ^ (_1303 >> 11u);
        _1307 = _1305 + (_1305 << 15u);
        _1313 = uintBitsToFloat((_1820 & 8388607u) | 1065353216u) - 1.0;
        _1288 = _1791 + 1u;
        _1820 = _1307;
        _1792 = _1313;
        _1791 = _1288;
        continue;
    }
    uvec2 _1130 = uvec2(_1113 + ivec2(0, 1));
    uint _1317 = _1130.y;
    uint _1323 = _1317 + (_1317 << 10u);
    uint _1325 = _1323 ^ (_1323 >> 6u);
    uint _1327 = _1325 + (_1325 << 3u);
    uint _1329 = _1327 ^ (_1327 >> 11u);
    uint _1337 = (((_1130.x * 1664525u) + (_1329 + (_1329 << 15u))) + 1013904223u) * 1664525u;
    uint _1339 = _1337 ^ (_1337 >> 11u);
    uint _1342 = _1339 ^ ((_1339 << 7u) & 2636928640u);
    uint _1345 = _1342 ^ ((_1342 << 15u) & 4022730752u);
    uint _1347 = _1345 ^ (_1345 >> 18u);
    float _1800;
    _1800 = _1765;
    uint _1364;
    uint _1383;
    float _1389;
    uint _1799 = 0u;
    uint _1819 = _1347;
    for (;;)
    {
        if (!(_1799 < 1u))
        {
            break;
        }
        uint _1375 = _1819 + (_1819 << 10u);
        uint _1377 = _1375 ^ (_1375 >> 6u);
        uint _1379 = _1377 + (_1377 << 3u);
        uint _1381 = _1379 ^ (_1379 >> 11u);
        _1383 = _1381 + (_1381 << 15u);
        _1389 = uintBitsToFloat((_1819 & 8388607u) | 1065353216u) - 1.0;
        _1364 = _1799 + 1u;
        _1819 = _1383;
        _1800 = _1389;
        _1799 = _1364;
        continue;
    }
    uvec2 _1138 = uvec2(_1113 + ivec2(1));
    uint _1393 = _1138.y;
    uint _1399 = _1393 + (_1393 << 10u);
    uint _1401 = _1399 ^ (_1399 >> 6u);
    uint _1403 = _1401 + (_1401 << 3u);
    uint _1405 = _1403 ^ (_1403 >> 11u);
    uint _1413 = (((_1138.x * 1664525u) + (_1405 + (_1405 << 15u))) + 1013904223u) * 1664525u;
    uint _1415 = _1413 ^ (_1413 >> 11u);
    uint _1418 = _1415 ^ ((_1415 << 7u) & 2636928640u);
    uint _1421 = _1418 ^ ((_1418 << 15u) & 4022730752u);
    uint _1423 = _1421 ^ (_1421 >> 18u);
    float _1809;
    _1809 = _1765;
    uint _1440;
    uint _1459;
    float _1465;
    uint _1808 = 0u;
    uint _1818 = _1423;
    for (;;)
    {
        if (!(_1808 < 1u))
        {
            break;
        }
        uint _1451 = _1818 + (_1818 << 10u);
        uint _1453 = _1451 ^ (_1451 >> 6u);
        uint _1455 = _1453 + (_1453 << 3u);
        uint _1457 = _1455 ^ (_1455 >> 11u);
        _1459 = _1457 + (_1457 << 15u);
        _1465 = uintBitsToFloat((_1818 & 8388607u) | 1065353216u) - 1.0;
        _1440 = _1808 + 1u;
        _1818 = _1459;
        _1809 = _1465;
        _1808 = _1440;
        continue;
    }
    vec2 _1471 = (_1114 * _1114) * (vec2(3.0) - (vec2(2.0) * _1114));
    float _1146 = _1471.x;
    float _1147 = 1.0 - _1146;
    float _1149 = _1471.y;
    vec3 _1759 = _50;
    _1759.z = _50.z + ((sin(((((_1065 - 6.283185482025146484375 * trunc(_1065 / 6.283185482025146484375)) + (frame_constants.game_time_frac * 1.7999999523162841796875)) + _50.y) + (_1059 * 0.5)) + ((((1.0 - _1149) * ((_1785 * _1147) + (_1792 * _1146))) + ((_1800 * _1147) * _1149)) + ((_1809 * _1146) * _1149))) * smoothstep(0.0, -1.0, _50.y)) * (mix(0.300000011920928955078125, 1.0, ((sin((((((1.0 - _710) * ((_1767 * _708) + (_1770 * _707))) + ((_1774 * _708) * _710)) + ((_1779 * _707) * _710)) * 3.1400001049041748046875) - 1.57000005245208740234375) + 0.300000011920928955078125) * 0.699999988079071044921875) * mix(0.699999988079071044921875, 1.0, _1059)) * 0.20000000298023223876953125));
    vec3 _1478 = vec4(_1759, 1.0) * _630;
    _1478.y = _1478.y + mix(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_21]].y_offset_1, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_21]].y_offset_2, (_50.x * 1.4285714626312255859375) + 0.5);
    vec3 _1519 = vec4(Vertex_Normal, 0.0) * _630;
    vec2 _502 = Vertex_UV;
    _502.y = 1.0 - _502.y;
    mat3 _522 = transpose(mat3(normalize(vec4(tangent, 0.0) * _630), normalize(vec4(bitangent, 0.0) * _630), normalize(_1519)));
    gl_Position = vec4(_1478, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_instance_index = nani_instance_indirection_buffer._member0[_21];
    entryPointParam_vs_main_position_seed = int((_440 + _442) + _593.z);
    entryPointParam_vs_main_frag_normal_ws = _1519;
    entryPointParam_vs_main_frag_position_ws = _1478.xyz;
    entryPointParam_vs_main_frag_uv = _502;
    vec3 _563 = _522[0];
    vec3 _567 = _522[1];
    vec3 _571 = _522[2];
    entryPointParam_vs_main_frag_tangent_to_world = _MatrixStorage_float3x3_ColMajornatural(vec3[](vec3(_563.x, _567.x, _571.x), vec3(_563.y, _567.y, _571.y), vec3(_563.z, _567.z, _571.z)));
}

