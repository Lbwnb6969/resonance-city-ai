#version 460
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_samplerless_texture_functions : require

struct Tex2D_natural
{
    uint bindless_handle;
};

float _1394;

layout(set = 7, binding = 0, std140) uniform ViewConstants_natural
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

layout(set = 5, binding = 0, scalar) uniform TerrainHeightmap_natural
{
    uvec2 terrain_heightmap_dims;
    Tex2D_natural bg_terrain_heightmap;
    Tex2D_natural bg_terrain_fog_height;
    vec2 bg_terrain_height_bounds_ws;
    vec4 bg_water_footprint_ws;
} terrain_heightmap;

layout(set = 0, binding = 1) uniform texture2D depth_tex;
layout(set = 5, binding = 1) uniform texture2D terrain_heightmap_terrain_heightmap;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;

layout(location = 0) in vec2 vs_out_uv;
layout(location = 0) out vec3 entryPointParam_ps_main_velocity;

void main()
{
    vec4 _506 = (vec4((vs_out_uv - vec2(0.5)) * vec2(2.0, -2.0), texelFetch(depth_tex, ivec2(uvec2(gl_FragCoord.xy)), 0).x, 1.0) * current_view.sample_to_view) * current_view.view_to_world;
    vec3 _520 = _506.xyz / vec3(_506.w);
    vec2 _529 = _520.xz;
    vec2 _562 = _529 * 0.100000001490116119384765625;
    vec2 _565 = _562 + (vec2(frame_constants.time_since_startup_secs, 0.0) * 1.2000000476837158203125);
    ivec2 _587 = ivec2(floor(_565));
    vec2 _588 = fract(_565);
    uvec2 _589 = uvec2(_587);
    uint _639 = _589.y;
    uint _645 = _639 + (_639 << 10u);
    uint _647 = _645 ^ (_645 >> 6u);
    uint _649 = _647 + (_647 << 3u);
    uint _651 = _649 ^ (_649 >> 11u);
    uint _659 = (((_589.x * 1664525u) + (_651 + (_651 << 15u))) + 1013904223u) * 1664525u;
    uint _661 = _659 ^ (_659 >> 11u);
    uint _664 = _661 ^ ((_661 << 7u) & 2636928640u);
    uint _667 = _664 ^ ((_664 << 15u) & 4022730752u);
    uint _669 = _667 ^ (_667 >> 18u);
    float _1396;
    _1396 = _1394;
    uint _686;
    uint _705;
    float _711;
    uint _1395 = 0u;
    uint _1446 = _669;
    for (;;)
    {
        if (!(_1395 < 1u))
        {
            break;
        }
        uint _697 = _1446 + (_1446 << 10u);
        uint _699 = _697 ^ (_697 >> 6u);
        uint _701 = _699 + (_699 << 3u);
        uint _703 = _701 ^ (_701 >> 11u);
        _705 = _703 + (_703 << 15u);
        _711 = uintBitsToFloat((_1446 & 8388607u) | 1065353216u) - 1.0;
        _686 = _1395 + 1u;
        _1446 = _705;
        _1396 = _711;
        _1395 = _686;
        continue;
    }
    uvec2 _597 = uvec2(_587 + ivec2(1, 0));
    uint _715 = _597.y;
    uint _721 = _715 + (_715 << 10u);
    uint _723 = _721 ^ (_721 >> 6u);
    uint _725 = _723 + (_723 << 3u);
    uint _727 = _725 ^ (_725 >> 11u);
    uint _735 = (((_597.x * 1664525u) + (_727 + (_727 << 15u))) + 1013904223u) * 1664525u;
    uint _737 = _735 ^ (_735 >> 11u);
    uint _740 = _737 ^ ((_737 << 7u) & 2636928640u);
    uint _743 = _740 ^ ((_740 << 15u) & 4022730752u);
    uint _745 = _743 ^ (_743 >> 18u);
    float _1399;
    _1399 = _1394;
    uint _762;
    uint _781;
    float _787;
    uint _1398 = 0u;
    uint _1445 = _745;
    for (;;)
    {
        if (!(_1398 < 1u))
        {
            break;
        }
        uint _773 = _1445 + (_1445 << 10u);
        uint _775 = _773 ^ (_773 >> 6u);
        uint _777 = _775 + (_775 << 3u);
        uint _779 = _777 ^ (_777 >> 11u);
        _781 = _779 + (_779 << 15u);
        _787 = uintBitsToFloat((_1445 & 8388607u) | 1065353216u) - 1.0;
        _762 = _1398 + 1u;
        _1445 = _781;
        _1399 = _787;
        _1398 = _762;
        continue;
    }
    uvec2 _604 = uvec2(_587 + ivec2(0, 1));
    uint _791 = _604.y;
    uint _797 = _791 + (_791 << 10u);
    uint _799 = _797 ^ (_797 >> 6u);
    uint _801 = _799 + (_799 << 3u);
    uint _803 = _801 ^ (_801 >> 11u);
    uint _811 = (((_604.x * 1664525u) + (_803 + (_803 << 15u))) + 1013904223u) * 1664525u;
    uint _813 = _811 ^ (_811 >> 11u);
    uint _816 = _813 ^ ((_813 << 7u) & 2636928640u);
    uint _819 = _816 ^ ((_816 << 15u) & 4022730752u);
    uint _821 = _819 ^ (_819 >> 18u);
    float _1403;
    _1403 = _1394;
    uint _838;
    uint _857;
    float _863;
    uint _1402 = 0u;
    uint _1444 = _821;
    for (;;)
    {
        if (!(_1402 < 1u))
        {
            break;
        }
        uint _849 = _1444 + (_1444 << 10u);
        uint _851 = _849 ^ (_849 >> 6u);
        uint _853 = _851 + (_851 << 3u);
        uint _855 = _853 ^ (_853 >> 11u);
        _857 = _855 + (_855 << 15u);
        _863 = uintBitsToFloat((_1444 & 8388607u) | 1065353216u) - 1.0;
        _838 = _1402 + 1u;
        _1444 = _857;
        _1403 = _863;
        _1402 = _838;
        continue;
    }
    uvec2 _612 = uvec2(_587 + ivec2(1));
    uint _867 = _612.y;
    uint _873 = _867 + (_867 << 10u);
    uint _875 = _873 ^ (_873 >> 6u);
    uint _877 = _875 + (_875 << 3u);
    uint _879 = _877 ^ (_877 >> 11u);
    uint _887 = (((_612.x * 1664525u) + (_879 + (_879 << 15u))) + 1013904223u) * 1664525u;
    uint _889 = _887 ^ (_887 >> 11u);
    uint _892 = _889 ^ ((_889 << 7u) & 2636928640u);
    uint _895 = _892 ^ ((_892 << 15u) & 4022730752u);
    uint _897 = _895 ^ (_895 >> 18u);
    float _1408;
    _1408 = _1394;
    uint _914;
    uint _933;
    float _939;
    uint _1407 = 0u;
    uint _1443 = _897;
    for (;;)
    {
        if (!(_1407 < 1u))
        {
            break;
        }
        uint _925 = _1443 + (_1443 << 10u);
        uint _927 = _925 ^ (_925 >> 6u);
        uint _929 = _927 + (_927 << 3u);
        uint _931 = _929 ^ (_929 >> 11u);
        _933 = _931 + (_931 << 15u);
        _939 = uintBitsToFloat((_1443 & 8388607u) | 1065353216u) - 1.0;
        _914 = _1407 + 1u;
        _1443 = _933;
        _1408 = _939;
        _1407 = _914;
        continue;
    }
    vec2 _945 = (_588 * _588) * (vec2(3.0) - (vec2(2.0) * _588));
    float _620 = _945.x;
    float _621 = 1.0 - _620;
    float _623 = _945.y;
    vec2 _953 = _562 + (vec2(frame_constants.time_since_startup_secs - frame_constants.delta_time_seconds, 0.0) * 1.2000000476837158203125);
    ivec2 _975 = ivec2(floor(_953));
    vec2 _976 = fract(_953);
    uvec2 _977 = uvec2(_975);
    uint _1027 = _977.y;
    uint _1033 = _1027 + (_1027 << 10u);
    uint _1035 = _1033 ^ (_1033 >> 6u);
    uint _1037 = _1035 + (_1035 << 3u);
    uint _1039 = _1037 ^ (_1037 >> 11u);
    uint _1047 = (((_977.x * 1664525u) + (_1039 + (_1039 << 15u))) + 1013904223u) * 1664525u;
    uint _1049 = _1047 ^ (_1047 >> 11u);
    uint _1052 = _1049 ^ ((_1049 << 7u) & 2636928640u);
    uint _1055 = _1052 ^ ((_1052 << 15u) & 4022730752u);
    uint _1057 = _1055 ^ (_1055 >> 18u);
    float _1414;
    _1414 = _1394;
    uint _1074;
    uint _1093;
    float _1099;
    uint _1413 = 0u;
    uint _1442 = _1057;
    for (;;)
    {
        if (!(_1413 < 1u))
        {
            break;
        }
        uint _1085 = _1442 + (_1442 << 10u);
        uint _1087 = _1085 ^ (_1085 >> 6u);
        uint _1089 = _1087 + (_1087 << 3u);
        uint _1091 = _1089 ^ (_1089 >> 11u);
        _1093 = _1091 + (_1091 << 15u);
        _1099 = uintBitsToFloat((_1442 & 8388607u) | 1065353216u) - 1.0;
        _1074 = _1413 + 1u;
        _1442 = _1093;
        _1414 = _1099;
        _1413 = _1074;
        continue;
    }
    uvec2 _985 = uvec2(_975 + ivec2(1, 0));
    uint _1103 = _985.y;
    uint _1109 = _1103 + (_1103 << 10u);
    uint _1111 = _1109 ^ (_1109 >> 6u);
    uint _1113 = _1111 + (_1111 << 3u);
    uint _1115 = _1113 ^ (_1113 >> 11u);
    uint _1123 = (((_985.x * 1664525u) + (_1115 + (_1115 << 15u))) + 1013904223u) * 1664525u;
    uint _1125 = _1123 ^ (_1123 >> 11u);
    uint _1128 = _1125 ^ ((_1125 << 7u) & 2636928640u);
    uint _1131 = _1128 ^ ((_1128 << 15u) & 4022730752u);
    uint _1133 = _1131 ^ (_1131 >> 18u);
    float _1421;
    _1421 = _1394;
    uint _1150;
    uint _1169;
    float _1175;
    uint _1420 = 0u;
    uint _1441 = _1133;
    for (;;)
    {
        if (!(_1420 < 1u))
        {
            break;
        }
        uint _1161 = _1441 + (_1441 << 10u);
        uint _1163 = _1161 ^ (_1161 >> 6u);
        uint _1165 = _1163 + (_1163 << 3u);
        uint _1167 = _1165 ^ (_1165 >> 11u);
        _1169 = _1167 + (_1167 << 15u);
        _1175 = uintBitsToFloat((_1441 & 8388607u) | 1065353216u) - 1.0;
        _1150 = _1420 + 1u;
        _1441 = _1169;
        _1421 = _1175;
        _1420 = _1150;
        continue;
    }
    uvec2 _992 = uvec2(_975 + ivec2(0, 1));
    uint _1179 = _992.y;
    uint _1185 = _1179 + (_1179 << 10u);
    uint _1187 = _1185 ^ (_1185 >> 6u);
    uint _1189 = _1187 + (_1187 << 3u);
    uint _1191 = _1189 ^ (_1189 >> 11u);
    uint _1199 = (((_992.x * 1664525u) + (_1191 + (_1191 << 15u))) + 1013904223u) * 1664525u;
    uint _1201 = _1199 ^ (_1199 >> 11u);
    uint _1204 = _1201 ^ ((_1201 << 7u) & 2636928640u);
    uint _1207 = _1204 ^ ((_1204 << 15u) & 4022730752u);
    uint _1209 = _1207 ^ (_1207 >> 18u);
    float _1429;
    _1429 = _1394;
    uint _1226;
    uint _1245;
    float _1251;
    uint _1428 = 0u;
    uint _1440 = _1209;
    for (;;)
    {
        if (!(_1428 < 1u))
        {
            break;
        }
        uint _1237 = _1440 + (_1440 << 10u);
        uint _1239 = _1237 ^ (_1237 >> 6u);
        uint _1241 = _1239 + (_1239 << 3u);
        uint _1243 = _1241 ^ (_1241 >> 11u);
        _1245 = _1243 + (_1243 << 15u);
        _1251 = uintBitsToFloat((_1440 & 8388607u) | 1065353216u) - 1.0;
        _1226 = _1428 + 1u;
        _1440 = _1245;
        _1429 = _1251;
        _1428 = _1226;
        continue;
    }
    uvec2 _1000 = uvec2(_975 + ivec2(1));
    uint _1255 = _1000.y;
    uint _1261 = _1255 + (_1255 << 10u);
    uint _1263 = _1261 ^ (_1261 >> 6u);
    uint _1265 = _1263 + (_1263 << 3u);
    uint _1267 = _1265 ^ (_1265 >> 11u);
    uint _1275 = (((_1000.x * 1664525u) + (_1267 + (_1267 << 15u))) + 1013904223u) * 1664525u;
    uint _1277 = _1275 ^ (_1275 >> 11u);
    uint _1280 = _1277 ^ ((_1277 << 7u) & 2636928640u);
    uint _1283 = _1280 ^ ((_1280 << 15u) & 4022730752u);
    uint _1285 = _1283 ^ (_1283 >> 18u);
    float _1438;
    _1438 = _1394;
    uint _1302;
    uint _1321;
    float _1327;
    uint _1437 = 0u;
    uint _1439 = _1285;
    for (;;)
    {
        if (!(_1437 < 1u))
        {
            break;
        }
        uint _1313 = _1439 + (_1439 << 10u);
        uint _1315 = _1313 ^ (_1313 >> 6u);
        uint _1317 = _1315 + (_1315 << 3u);
        uint _1319 = _1317 ^ (_1317 >> 11u);
        _1321 = _1319 + (_1319 << 15u);
        _1327 = uintBitsToFloat((_1439 & 8388607u) | 1065353216u) - 1.0;
        _1302 = _1437 + 1u;
        _1439 = _1321;
        _1438 = _1327;
        _1437 = _1302;
        continue;
    }
    vec2 _1333 = (_976 * _976) * (vec2(3.0) - (vec2(2.0) * _976));
    float _1008 = _1333.x;
    float _1009 = 1.0 - _1008;
    float _1011 = _1333.y;
    float _553 = clamp(clamp((_520.y - mix(-2.5, 24.0, textureLod(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), (_529 * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0).x)) * 0.89726340770721435546875, 0.0, 1.0), 0.0, 1.0);
    entryPointParam_ps_main_velocity = (((vec3(-1.0, 0.0, 0.0) * (((sin((((((1.0 - _623) * ((_1396 * _621) + (_1399 * _620))) + ((_1403 * _621) * _623)) + ((_1408 * _620) * _623)) * 3.1400001049041748046875) - 1.57000005245208740234375) + 0.300000011920928955078125) * 0.699999988079071044921875) - ((sin((((((1.0 - _1011) * ((_1414 * _1009) + (_1421 * _1008))) + ((_1429 * _1009) * _1011)) + ((_1438 * _1008) * _1011)) * 3.1400001049041748046875) - 1.57000005245208740234375) + 0.300000011920928955078125) * 0.699999988079071044921875))) * (_553 * _553)) * 0.25) * 1.11449992656707763671875;
}

