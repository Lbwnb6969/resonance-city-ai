#version 460
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_samplerless_texture_functions : require

struct _MatrixStorage_float3x3_ColMajornatural
{
    vec3 data[3];
};

struct Tex2D_natural
{
    uint bindless_handle;
};

float _1408;

layout(set = 7, binding = 0, std140) uniform PathExclusionMask_natural
{
    uvec2 tex_dims;
} path_mask;

layout(set = 19, binding = 0, scalar) uniform TerrainHeightmap_natural
{
    uvec2 terrain_heightmap_dims;
    Tex2D_natural bg_terrain_heightmap;
    Tex2D_natural bg_terrain_fog_height;
    vec2 bg_terrain_height_bounds_ws;
    vec4 bg_water_footprint_ws;
} terrain_heightmap;

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

layout(set = 2, binding = 4) uniform sampler samplers_llb;
layout(set = 7, binding = 1) uniform texture2D path_mask_tex;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 10, binding = 0) uniform texture2D rocky_terrain_tex;
layout(set = 11, binding = 0) uniform texture2D water_mask_tex;
layout(set = 9, binding = 0) uniform utexture2D plant_sample_mask_tex;
layout(set = 19, binding = 1) uniform texture2D terrain_heightmap_terrain_heightmap;
layout(set = 6, binding = 0) uniform texture2D object_push_grass_object_push;

layout(location = 3) in vec3 flower_pivot;
layout(location = 0) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_pos_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_normal;
layout(location = 3) out int entryPointParam_vs_main_is_stem;
layout(location = 4) out vec2 entryPointParam_vs_main_frag_uv_alpha;
layout(location = 5) out _MatrixStorage_float3x3_ColMajornatural entryPointParam_vs_main_frag_tangent_to_world;
layout(location = 0) in vec3 Vertex_Position;
layout(location = 5) in float wind_bend;
layout(location = 2) in vec2 Vertex_UV;
layout(location = 1) in vec3 Vertex_Normal;
layout(location = 4) in int stem;

void main()
{
    do
    {
        float _816;
        bool _817;
        vec2 _786 = (flower_pivot.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5);
        float _1381;
        do
        {
            _816 = _786.x;
            _817 = _816 < 0.0;
            bool _1378;
            if (_817)
            {
                _1378 = true;
            }
            else
            {
                _1378 = _816 > 1.0;
            }
            bool _1379;
            if (_1378)
            {
                _1379 = true;
            }
            else
            {
                _1379 = _786.y < 0.0;
            }
            bool _1380;
            if (_1379)
            {
                _1380 = true;
            }
            else
            {
                _1380 = _786.y > 1.0;
            }
            if (_1380)
            {
                _1381 = 0.0;
                break;
            }
            else
            {
                _1381 = textureLod(sampler2D(rocky_terrain_tex, samplers_lnc_iso), _786, 0.0).x;
                break;
            }
            break; // unreachable workaround
        } while(false);
        bool _1382;
        if (smoothstep(0.07500000298023223876953125, 0.125, textureLod(sampler2D(path_mask_tex, samplers_llb), _786, 0.0).x) > 0.100000001490116119384765625)
        {
            _1382 = true;
        }
        else
        {
            _1382 = _1381 > 0.100000001490116119384765625;
        }
        bool _1387;
        if (_1382)
        {
            _1387 = true;
        }
        else
        {
            float _1386;
            do
            {
                bool _1383;
                if (_817)
                {
                    _1383 = true;
                }
                else
                {
                    _1383 = _816 > 1.0;
                }
                bool _1384;
                if (_1383)
                {
                    _1384 = true;
                }
                else
                {
                    _1384 = _786.y < 0.0;
                }
                bool _1385;
                if (_1384)
                {
                    _1385 = true;
                }
                else
                {
                    _1385 = _786.y > 1.0;
                }
                if (_1385)
                {
                    _1386 = 0.0;
                    break;
                }
                else
                {
                    _1386 = textureLod(sampler2D(water_mask_tex, samplers_lnc_iso), _786, 0.0).y;
                    break;
                }
                break; // unreachable workaround
            } while(false);
            _1387 = _1386 > 0.25;
        }
        bool _1392;
        if (_1387)
        {
            _1392 = true;
        }
        else
        {
            bool _1391;
            do
            {
                bool _1388;
                if (_817)
                {
                    _1388 = true;
                }
                else
                {
                    _1388 = _816 > 1.0;
                }
                bool _1389;
                if (_1388)
                {
                    _1389 = true;
                }
                else
                {
                    _1389 = _786.y < 0.0;
                }
                bool _1390;
                if (_1389)
                {
                    _1390 = true;
                }
                else
                {
                    _1390 = _786.y > 1.0;
                }
                if (_1390)
                {
                    _1391 = false;
                    break;
                }
                _1391 = any(notEqual(texelFetch(plant_sample_mask_tex, ivec3(ivec2(min(uvec2(_786 * 512.0), uvec2(511u))), 0).xy, 0), uvec4(0u)));
                break;
            } while(false);
            _1392 = _1391;
        }
        if (_1392)
        {
            gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
            entryPointParam_vs_main_frag_uv = vec2(0.0);
            entryPointParam_vs_main_frag_pos_ws = vec3(0.0);
            entryPointParam_vs_main_frag_normal = vec3(0.0);
            entryPointParam_vs_main_is_stem = 0;
            entryPointParam_vs_main_frag_uv_alpha = vec2(0.0);
            entryPointParam_vs_main_frag_tangent_to_world = _MatrixStorage_float3x3_ColMajornatural(vec3[](vec3(0.0), vec3(0.0), vec3(0.0)));
            break;
        }
        vec4 _325 = vec4(Vertex_Position, 1.0);
        _325.y = Vertex_Position.y + mix(-2.5, 24.0, textureLod(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), _786, 0.0).x);
        vec2 _383 = flower_pivot.xz * 0.100000001490116119384765625;
        vec2 _394 = _383 + (vec2(frame_constants.time_since_startup_secs, 0.0) * 1.2000000476837158203125);
        ivec2 _956 = ivec2(floor(_394));
        vec2 _957 = fract(_394);
        uvec2 _958 = uvec2(_956);
        uint _1008 = _958.y;
        uint _1014 = _1008 + (_1008 << 10u);
        uint _1016 = _1014 ^ (_1014 >> 6u);
        uint _1018 = _1016 + (_1016 << 3u);
        uint _1020 = _1018 ^ (_1018 >> 11u);
        uint _1028 = (((_958.x * 1664525u) + (_1020 + (_1020 << 15u))) + 1013904223u) * 1664525u;
        uint _1030 = _1028 ^ (_1028 >> 11u);
        uint _1033 = _1030 ^ ((_1030 << 7u) & 2636928640u);
        uint _1036 = _1033 ^ ((_1033 << 15u) & 4022730752u);
        uint _1038 = _1036 ^ (_1036 >> 18u);
        float _1410;
        _1410 = _1408;
        uint _1055;
        uint _1074;
        float _1080;
        uint _1409 = 0u;
        uint _1476 = _1038;
        for (;;)
        {
            if (!(_1409 < 1u))
            {
                break;
            }
            uint _1066 = _1476 + (_1476 << 10u);
            uint _1068 = _1066 ^ (_1066 >> 6u);
            uint _1070 = _1068 + (_1068 << 3u);
            uint _1072 = _1070 ^ (_1070 >> 11u);
            _1074 = _1072 + (_1072 << 15u);
            _1080 = uintBitsToFloat((_1476 & 8388607u) | 1065353216u) - 1.0;
            _1055 = _1409 + 1u;
            _1476 = _1074;
            _1410 = _1080;
            _1409 = _1055;
            continue;
        }
        uvec2 _966 = uvec2(_956 + ivec2(1, 0));
        uint _1084 = _966.y;
        uint _1090 = _1084 + (_1084 << 10u);
        uint _1092 = _1090 ^ (_1090 >> 6u);
        uint _1094 = _1092 + (_1092 << 3u);
        uint _1096 = _1094 ^ (_1094 >> 11u);
        uint _1104 = (((_966.x * 1664525u) + (_1096 + (_1096 << 15u))) + 1013904223u) * 1664525u;
        uint _1106 = _1104 ^ (_1104 >> 11u);
        uint _1109 = _1106 ^ ((_1106 << 7u) & 2636928640u);
        uint _1112 = _1109 ^ ((_1109 << 15u) & 4022730752u);
        uint _1114 = _1112 ^ (_1112 >> 18u);
        float _1428;
        _1428 = _1408;
        uint _1131;
        uint _1150;
        float _1156;
        uint _1427 = 0u;
        uint _1475 = _1114;
        for (;;)
        {
            if (!(_1427 < 1u))
            {
                break;
            }
            uint _1142 = _1475 + (_1475 << 10u);
            uint _1144 = _1142 ^ (_1142 >> 6u);
            uint _1146 = _1144 + (_1144 << 3u);
            uint _1148 = _1146 ^ (_1146 >> 11u);
            _1150 = _1148 + (_1148 << 15u);
            _1156 = uintBitsToFloat((_1475 & 8388607u) | 1065353216u) - 1.0;
            _1131 = _1427 + 1u;
            _1475 = _1150;
            _1428 = _1156;
            _1427 = _1131;
            continue;
        }
        uvec2 _973 = uvec2(_956 + ivec2(0, 1));
        uint _1160 = _973.y;
        uint _1166 = _1160 + (_1160 << 10u);
        uint _1168 = _1166 ^ (_1166 >> 6u);
        uint _1170 = _1168 + (_1168 << 3u);
        uint _1172 = _1170 ^ (_1170 >> 11u);
        uint _1180 = (((_973.x * 1664525u) + (_1172 + (_1172 << 15u))) + 1013904223u) * 1664525u;
        uint _1182 = _1180 ^ (_1180 >> 11u);
        uint _1185 = _1182 ^ ((_1182 << 7u) & 2636928640u);
        uint _1188 = _1185 ^ ((_1185 << 15u) & 4022730752u);
        uint _1190 = _1188 ^ (_1188 >> 18u);
        float _1447;
        _1447 = _1408;
        uint _1207;
        uint _1226;
        float _1232;
        uint _1446 = 0u;
        uint _1474 = _1190;
        for (;;)
        {
            if (!(_1446 < 1u))
            {
                break;
            }
            uint _1218 = _1474 + (_1474 << 10u);
            uint _1220 = _1218 ^ (_1218 >> 6u);
            uint _1222 = _1220 + (_1220 << 3u);
            uint _1224 = _1222 ^ (_1222 >> 11u);
            _1226 = _1224 + (_1224 << 15u);
            _1232 = uintBitsToFloat((_1474 & 8388607u) | 1065353216u) - 1.0;
            _1207 = _1446 + 1u;
            _1474 = _1226;
            _1447 = _1232;
            _1446 = _1207;
            continue;
        }
        uvec2 _981 = uvec2(_956 + ivec2(1));
        uint _1236 = _981.y;
        uint _1242 = _1236 + (_1236 << 10u);
        uint _1244 = _1242 ^ (_1242 >> 6u);
        uint _1246 = _1244 + (_1244 << 3u);
        uint _1248 = _1246 ^ (_1246 >> 11u);
        uint _1256 = (((_981.x * 1664525u) + (_1248 + (_1248 << 15u))) + 1013904223u) * 1664525u;
        uint _1258 = _1256 ^ (_1256 >> 11u);
        uint _1261 = _1258 ^ ((_1258 << 7u) & 2636928640u);
        uint _1264 = _1261 ^ ((_1261 << 15u) & 4022730752u);
        uint _1266 = _1264 ^ (_1264 >> 18u);
        float _1467;
        _1467 = _1408;
        uint _1283;
        uint _1302;
        float _1308;
        uint _1466 = 0u;
        uint _1473 = _1266;
        for (;;)
        {
            if (!(_1466 < 1u))
            {
                break;
            }
            uint _1294 = _1473 + (_1473 << 10u);
            uint _1296 = _1294 ^ (_1294 >> 6u);
            uint _1298 = _1296 + (_1296 << 3u);
            uint _1300 = _1298 ^ (_1298 >> 11u);
            _1302 = _1300 + (_1300 << 15u);
            _1308 = uintBitsToFloat((_1473 & 8388607u) | 1065353216u) - 1.0;
            _1283 = _1466 + 1u;
            _1473 = _1302;
            _1467 = _1308;
            _1466 = _1283;
            continue;
        }
        vec2 _1314 = (_957 * _957) * (vec2(3.0) - (vec2(2.0) * _957));
        float _989 = _1314.x;
        float _990 = 1.0 - _989;
        float _992 = _1314.y;
        _325.x = Vertex_Position.x - ((wind_bend * (sin((((((1.0 - _992) * ((_1410 * _990) + (_1428 * _989))) + ((_1447 * _990) * _992)) + ((_1467 * _989) * _992)) * 3.1400001049041748046875) - 1.57000005245208740234375) + 0.300000011920928955078125)) * 0.17499999701976776123046875);
        vec4 _1330 = textureLod(sampler2D(object_push_grass_object_push, samplers_lnc_iso), _786, 0.0);
        vec4 _1472;
        if (clamp(_1330.z, 0.0, 1.0) > 0.0)
        {
            vec2 _665 = _325.xz + ((_1330.xy * pow(wind_bend, 0.5)) * 0.5);
            vec4 _1375 = _325;
            _1375.x = _665.x;
            _1375.z = _665.y;
            _1472 = _1375;
        }
        else
        {
            _1472 = _325;
        }
        gl_Position = vec4(_1472.xyz, 1.0) * current_view.world_to_sample;
        entryPointParam_vs_main_frag_uv = _383;
        entryPointParam_vs_main_frag_pos_ws = _1472.xyz;
        entryPointParam_vs_main_frag_normal = Vertex_Normal;
        entryPointParam_vs_main_is_stem = stem;
        entryPointParam_vs_main_frag_uv_alpha = Vertex_UV;
        entryPointParam_vs_main_frag_tangent_to_world = _MatrixStorage_float3x3_ColMajornatural(vec3[](vec3(1.0, 0.0, 0.0), vec3(0.0, 0.0, 1.0), vec3(0.0, 1.0, 0.0)));
        break;
    } while(false);
}

