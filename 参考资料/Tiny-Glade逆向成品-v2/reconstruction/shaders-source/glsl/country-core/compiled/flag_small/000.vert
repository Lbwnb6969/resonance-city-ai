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

float _1488;

layout(set = 0, binding = 0, scalar) uniform MaterialData_natural
{
    Affine3Packed_natural model_to_world;
    int color_id;
    int seed;
} material_data;

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
layout(location = 1) in vec3 Vertex_Color;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 3) in vec2 Vertex_UV;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 3) out vec2 entryPointParam_vs_main_uv_pattern;
layout(location = 4) out vec2 entryPointParam_vs_main_uv_border_mask;

void main()
{
    vec3 _26 = Vertex_Position;
    mat3x4 _536 = transpose(mat4x3(vec3(material_data.model_to_world.data.data[0], material_data.model_to_world.data.data[1], material_data.model_to_world.data.data[2]), vec3(material_data.model_to_world.data.data[3], material_data.model_to_world.data.data[4], material_data.model_to_world.data.data[5]), vec3(material_data.model_to_world.data.data[6], material_data.model_to_world.data.data[7], material_data.model_to_world.data.data[8]), vec3(material_data.model_to_world.data.data[9], material_data.model_to_world.data.data[10], material_data.model_to_world.data.data[11])));
    vec3 _500 = vec4(vec3(0.0), 1.0) * _536;
    float _561 = float(frame_constants.game_time_sec);
    float _564 = _561 + frame_constants.game_time_frac;
    vec2 _543 = (_500.xz * 0.100000001490116119384765625) + (vec2(_564, 0.0) * 1.2000000476837158203125);
    ivec2 _580 = ivec2(floor(_543));
    vec2 _581 = fract(_543);
    uvec2 _582 = uvec2(_580);
    uint _632 = _582.y;
    uint _638 = _632 + (_632 << 10u);
    uint _640 = _638 ^ (_638 >> 6u);
    uint _642 = _640 + (_640 << 3u);
    uint _644 = _642 ^ (_642 >> 11u);
    uint _652 = (((_582.x * 1664525u) + (_644 + (_644 << 15u))) + 1013904223u) * 1664525u;
    uint _654 = _652 ^ (_652 >> 11u);
    uint _657 = _654 ^ ((_654 << 7u) & 2636928640u);
    uint _660 = _657 ^ ((_657 << 15u) & 4022730752u);
    uint _662 = _660 ^ (_660 >> 18u);
    float _1490;
    _1490 = _1488;
    uint _679;
    uint _698;
    float _704;
    uint _1489 = 0u;
    uint _1548 = _662;
    for (;;)
    {
        if (!(_1489 < 1u))
        {
            break;
        }
        uint _690 = _1548 + (_1548 << 10u);
        uint _692 = _690 ^ (_690 >> 6u);
        uint _694 = _692 + (_692 << 3u);
        uint _696 = _694 ^ (_694 >> 11u);
        _698 = _696 + (_696 << 15u);
        _704 = uintBitsToFloat((_1548 & 8388607u) | 1065353216u) - 1.0;
        _679 = _1489 + 1u;
        _1548 = _698;
        _1490 = _704;
        _1489 = _679;
        continue;
    }
    uvec2 _590 = uvec2(_580 + ivec2(1, 0));
    uint _708 = _590.y;
    uint _714 = _708 + (_708 << 10u);
    uint _716 = _714 ^ (_714 >> 6u);
    uint _718 = _716 + (_716 << 3u);
    uint _720 = _718 ^ (_718 >> 11u);
    uint _728 = (((_590.x * 1664525u) + (_720 + (_720 << 15u))) + 1013904223u) * 1664525u;
    uint _730 = _728 ^ (_728 >> 11u);
    uint _733 = _730 ^ ((_730 << 7u) & 2636928640u);
    uint _736 = _733 ^ ((_733 << 15u) & 4022730752u);
    uint _738 = _736 ^ (_736 >> 18u);
    float _1493;
    _1493 = _1488;
    uint _755;
    uint _774;
    float _780;
    uint _1492 = 0u;
    uint _1547 = _738;
    for (;;)
    {
        if (!(_1492 < 1u))
        {
            break;
        }
        uint _766 = _1547 + (_1547 << 10u);
        uint _768 = _766 ^ (_766 >> 6u);
        uint _770 = _768 + (_768 << 3u);
        uint _772 = _770 ^ (_770 >> 11u);
        _774 = _772 + (_772 << 15u);
        _780 = uintBitsToFloat((_1547 & 8388607u) | 1065353216u) - 1.0;
        _755 = _1492 + 1u;
        _1547 = _774;
        _1493 = _780;
        _1492 = _755;
        continue;
    }
    uvec2 _597 = uvec2(_580 + ivec2(0, 1));
    uint _784 = _597.y;
    uint _790 = _784 + (_784 << 10u);
    uint _792 = _790 ^ (_790 >> 6u);
    uint _794 = _792 + (_792 << 3u);
    uint _796 = _794 ^ (_794 >> 11u);
    uint _804 = (((_597.x * 1664525u) + (_796 + (_796 << 15u))) + 1013904223u) * 1664525u;
    uint _806 = _804 ^ (_804 >> 11u);
    uint _809 = _806 ^ ((_806 << 7u) & 2636928640u);
    uint _812 = _809 ^ ((_809 << 15u) & 4022730752u);
    uint _814 = _812 ^ (_812 >> 18u);
    float _1497;
    _1497 = _1488;
    uint _831;
    uint _850;
    float _856;
    uint _1496 = 0u;
    uint _1546 = _814;
    for (;;)
    {
        if (!(_1496 < 1u))
        {
            break;
        }
        uint _842 = _1546 + (_1546 << 10u);
        uint _844 = _842 ^ (_842 >> 6u);
        uint _846 = _844 + (_844 << 3u);
        uint _848 = _846 ^ (_846 >> 11u);
        _850 = _848 + (_848 << 15u);
        _856 = uintBitsToFloat((_1546 & 8388607u) | 1065353216u) - 1.0;
        _831 = _1496 + 1u;
        _1546 = _850;
        _1497 = _856;
        _1496 = _831;
        continue;
    }
    uvec2 _605 = uvec2(_580 + ivec2(1));
    uint _860 = _605.y;
    uint _866 = _860 + (_860 << 10u);
    uint _868 = _866 ^ (_866 >> 6u);
    uint _870 = _868 + (_868 << 3u);
    uint _872 = _870 ^ (_870 >> 11u);
    uint _880 = (((_605.x * 1664525u) + (_872 + (_872 << 15u))) + 1013904223u) * 1664525u;
    uint _882 = _880 ^ (_880 >> 11u);
    uint _885 = _882 ^ ((_882 << 7u) & 2636928640u);
    uint _888 = _885 ^ ((_885 << 15u) & 4022730752u);
    uint _890 = _888 ^ (_888 >> 18u);
    float _1502;
    _1502 = _1488;
    uint _907;
    uint _926;
    float _932;
    uint _1501 = 0u;
    uint _1545 = _890;
    for (;;)
    {
        if (!(_1501 < 1u))
        {
            break;
        }
        uint _918 = _1545 + (_1545 << 10u);
        uint _920 = _918 ^ (_918 >> 6u);
        uint _922 = _920 + (_920 << 3u);
        uint _924 = _922 ^ (_922 >> 11u);
        _926 = _924 + (_924 << 15u);
        _932 = uintBitsToFloat((_1545 & 8388607u) | 1065353216u) - 1.0;
        _907 = _1501 + 1u;
        _1545 = _926;
        _1502 = _932;
        _1501 = _907;
        continue;
    }
    vec2 _938 = (_581 * _581) * (vec2(3.0) - (vec2(2.0) * _581));
    float _613 = _938.x;
    float _614 = 1.0 - _613;
    float _616 = _938.y;
    uint _552 = uint(material_data.seed);
    uint _951 = _552 + (_552 << 10u);
    uint _953 = _951 ^ (_951 >> 6u);
    uint _955 = _953 + (_953 << 3u);
    uint _957 = _955 ^ (_955 >> 11u);
    float _965 = uintBitsToFloat(((_957 + (_957 << 15u)) & 8388607u) | 1065353216u) - 1.0;
    float _971 = _561 * 1.7999999523162841796875;
    vec2 _412 = vec2(_564 + _500.x, _500.y);
    ivec2 _1019 = ivec2(floor(_412));
    vec2 _1020 = fract(_412);
    uvec2 _1021 = uvec2(_1019);
    uint _1071 = _1021.y;
    uint _1077 = _1071 + (_1071 << 10u);
    uint _1079 = _1077 ^ (_1077 >> 6u);
    uint _1081 = _1079 + (_1079 << 3u);
    uint _1083 = _1081 ^ (_1081 >> 11u);
    uint _1091 = (((_1021.x * 1664525u) + (_1083 + (_1083 << 15u))) + 1013904223u) * 1664525u;
    uint _1093 = _1091 ^ (_1091 >> 11u);
    uint _1096 = _1093 ^ ((_1093 << 7u) & 2636928640u);
    uint _1099 = _1096 ^ ((_1096 << 15u) & 4022730752u);
    uint _1101 = _1099 ^ (_1099 >> 18u);
    float _1508;
    _1508 = _1488;
    uint _1118;
    uint _1137;
    float _1143;
    uint _1507 = 0u;
    uint _1544 = _1101;
    for (;;)
    {
        if (!(_1507 < 1u))
        {
            break;
        }
        uint _1129 = _1544 + (_1544 << 10u);
        uint _1131 = _1129 ^ (_1129 >> 6u);
        uint _1133 = _1131 + (_1131 << 3u);
        uint _1135 = _1133 ^ (_1133 >> 11u);
        _1137 = _1135 + (_1135 << 15u);
        _1143 = uintBitsToFloat((_1544 & 8388607u) | 1065353216u) - 1.0;
        _1118 = _1507 + 1u;
        _1544 = _1137;
        _1508 = _1143;
        _1507 = _1118;
        continue;
    }
    uvec2 _1029 = uvec2(_1019 + ivec2(1, 0));
    uint _1147 = _1029.y;
    uint _1153 = _1147 + (_1147 << 10u);
    uint _1155 = _1153 ^ (_1153 >> 6u);
    uint _1157 = _1155 + (_1155 << 3u);
    uint _1159 = _1157 ^ (_1157 >> 11u);
    uint _1167 = (((_1029.x * 1664525u) + (_1159 + (_1159 << 15u))) + 1013904223u) * 1664525u;
    uint _1169 = _1167 ^ (_1167 >> 11u);
    uint _1172 = _1169 ^ ((_1169 << 7u) & 2636928640u);
    uint _1175 = _1172 ^ ((_1172 << 15u) & 4022730752u);
    uint _1177 = _1175 ^ (_1175 >> 18u);
    float _1515;
    _1515 = _1488;
    uint _1194;
    uint _1213;
    float _1219;
    uint _1514 = 0u;
    uint _1543 = _1177;
    for (;;)
    {
        if (!(_1514 < 1u))
        {
            break;
        }
        uint _1205 = _1543 + (_1543 << 10u);
        uint _1207 = _1205 ^ (_1205 >> 6u);
        uint _1209 = _1207 + (_1207 << 3u);
        uint _1211 = _1209 ^ (_1209 >> 11u);
        _1213 = _1211 + (_1211 << 15u);
        _1219 = uintBitsToFloat((_1543 & 8388607u) | 1065353216u) - 1.0;
        _1194 = _1514 + 1u;
        _1543 = _1213;
        _1515 = _1219;
        _1514 = _1194;
        continue;
    }
    uvec2 _1036 = uvec2(_1019 + ivec2(0, 1));
    uint _1223 = _1036.y;
    uint _1229 = _1223 + (_1223 << 10u);
    uint _1231 = _1229 ^ (_1229 >> 6u);
    uint _1233 = _1231 + (_1231 << 3u);
    uint _1235 = _1233 ^ (_1233 >> 11u);
    uint _1243 = (((_1036.x * 1664525u) + (_1235 + (_1235 << 15u))) + 1013904223u) * 1664525u;
    uint _1245 = _1243 ^ (_1243 >> 11u);
    uint _1248 = _1245 ^ ((_1245 << 7u) & 2636928640u);
    uint _1251 = _1248 ^ ((_1248 << 15u) & 4022730752u);
    uint _1253 = _1251 ^ (_1251 >> 18u);
    float _1523;
    _1523 = _1488;
    uint _1270;
    uint _1289;
    float _1295;
    uint _1522 = 0u;
    uint _1542 = _1253;
    for (;;)
    {
        if (!(_1522 < 1u))
        {
            break;
        }
        uint _1281 = _1542 + (_1542 << 10u);
        uint _1283 = _1281 ^ (_1281 >> 6u);
        uint _1285 = _1283 + (_1283 << 3u);
        uint _1287 = _1285 ^ (_1285 >> 11u);
        _1289 = _1287 + (_1287 << 15u);
        _1295 = uintBitsToFloat((_1542 & 8388607u) | 1065353216u) - 1.0;
        _1270 = _1522 + 1u;
        _1542 = _1289;
        _1523 = _1295;
        _1522 = _1270;
        continue;
    }
    uvec2 _1044 = uvec2(_1019 + ivec2(1));
    uint _1299 = _1044.y;
    uint _1305 = _1299 + (_1299 << 10u);
    uint _1307 = _1305 ^ (_1305 >> 6u);
    uint _1309 = _1307 + (_1307 << 3u);
    uint _1311 = _1309 ^ (_1309 >> 11u);
    uint _1319 = (((_1044.x * 1664525u) + (_1311 + (_1311 << 15u))) + 1013904223u) * 1664525u;
    uint _1321 = _1319 ^ (_1319 >> 11u);
    uint _1324 = _1321 ^ ((_1321 << 7u) & 2636928640u);
    uint _1327 = _1324 ^ ((_1324 << 15u) & 4022730752u);
    uint _1329 = _1327 ^ (_1327 >> 18u);
    float _1532;
    _1532 = _1488;
    uint _1346;
    uint _1365;
    float _1371;
    uint _1531 = 0u;
    uint _1541 = _1329;
    for (;;)
    {
        if (!(_1531 < 1u))
        {
            break;
        }
        uint _1357 = _1541 + (_1541 << 10u);
        uint _1359 = _1357 ^ (_1357 >> 6u);
        uint _1361 = _1359 + (_1359 << 3u);
        uint _1363 = _1361 ^ (_1361 >> 11u);
        _1365 = _1363 + (_1363 << 15u);
        _1371 = uintBitsToFloat((_1541 & 8388607u) | 1065353216u) - 1.0;
        _1346 = _1531 + 1u;
        _1541 = _1365;
        _1532 = _1371;
        _1531 = _1346;
        continue;
    }
    vec2 _1377 = (_1020 * _1020) * (vec2(3.0) - (vec2(2.0) * _1020));
    float _1052 = _1377.x;
    float _1053 = 1.0 - _1052;
    float _1055 = _1377.y;
    _26.x = _26.x + ((sin(((((_971 - 6.283185482025146484375 * trunc(_971 / 6.283185482025146484375)) + (frame_constants.game_time_frac * 1.7999999523162841796875)) + (_26.y * 1.5)) + (_965 * 0.5)) + ((((1.0 - _1055) * ((_1508 * _1053) + (_1515 * _1052))) + ((_1523 * _1053) * _1055)) + ((_1532 * _1052) * _1055))) * smoothstep(0.0, -1.0, _26.y)) * (mix(0.300000011920928955078125, 1.0, ((sin((((((1.0 - _616) * ((_1490 * _614) + (_1493 * _613))) + ((_1497 * _614) * _616)) + ((_1502 * _613) * _616)) * 3.1400001049041748046875) - 1.57000005245208740234375) + 0.300000011920928955078125) * 0.699999988079071044921875) * mix(0.699999988079071044921875, 1.0, _965)) * 0.300000011920928955078125));
    vec3 _1384 = vec4(_26, 1.0) * _536;
    gl_Position = vec4(_1384, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = Vertex_Color;
    entryPointParam_vs_main_frag_normal_ws = vec4(Vertex_Normal, 0.0) * _536;
    entryPointParam_vs_main_frag_position_ws = _1384.xyz;
    entryPointParam_vs_main_uv_pattern = ((((Vertex_UV * 2.0) * vec2(1.0, 1.5)) - vec2(0.5)) * 0.800000011920928955078125) + vec2(0.625);
    entryPointParam_vs_main_uv_border_mask = Vertex_UV;
}

