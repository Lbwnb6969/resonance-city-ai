#version 460
#extension GL_EXT_demote_to_helper_invocation : require

struct RoofShingle_natural
{
    vec3 base_position;
    float current_height;
    uvec2 clipping_plane_;
    uvec2 scale_t;
    uvec2 rotation_quat_;
    uint wall_slot_id;
    uint velocity_rotation;
    float animation_t;
    int seed;
    int is_circle;
    int is_main_roof_body;
};

struct DormerHole_natural
{
    vec3 position;
    int wall_slot_id;
    vec3 size;
    int pad0;
    vec2 normal;
    float k;
    float a;
};

bool _1525;

layout(set = 0, binding = 0, std430) readonly buffer StructuredBuffer
{
    RoofShingle_natural _member0[];
} material_data_nani_instance_data;

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

layout(set = 8, binding = 1, std430) readonly buffer roof_colors_ids
{
    uint _member0[];
} roof_colors_ids_1;

layout(set = 9, binding = 1, std430) readonly buffer data_count
{
    uint _member0[];
} data_count_1;

layout(set = 9, binding = 0, std430) readonly buffer data_holes
{
    DormerHole_natural _member0[];
} data_holes_1;

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

layout(set = 8, binding = 0) uniform texture2DArray roof_colors_tex;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 0, binding = 2) uniform texture2D material_data_roof_tile_damage;
layout(set = 0, binding = 1) uniform texture2D material_data_roof_tile_normal;

layout(location = 6) flat in uint vs_out_instance_index;
layout(location = 0) in vec3 vs_out_pos_ws;
layout(location = 5) flat in vec4 vs_out_clipping_plane;

void main()
{
    if (dot(vec4(vs_out_pos_ws, 1.0), vs_out_clipping_plane) < 0.0)
    {
        demote;
    }
    if (material_data_nani_instance_data._member0[vs_out_instance_index].is_main_roof_body != 0)
    {
        int _296 = int(material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id);
        bool _1521;
        do
        {
            vec2 _1270 = (vs_out_pos_ws.xz + vec2(65.0)) * vec2(0.1153846085071563720703125);
            int _1279 = int(floor(_1270.x)) + (15 * int(floor(_1270.y)));
            uint _1162 = min(128u, data_count_1._member0[_1279]);
            uint _1257;
            bool _1514;
            bool _1522;
            uint _1504 = 0u;
            for (;;)
            {
                if (!(_1504 < _1162))
                {
                    _1522 = _1525;
                    _1514 = false;
                    break;
                }
                int _1175 = int(uint(_1279 * 50) + _1504);
                if (_296 == data_holes_1._member0[_1175].wall_slot_id)
                {
                    vec3 _1206 = vec3(data_holes_1._member0[_1175].normal.x, 0.0, data_holes_1._member0[_1175].normal.y);
                    mat3 _1216 = transpose(mat3(cross(_1206, vec3(0.0, 1.0, 0.0)), vec3(0.0, 1.0, 0.0), _1206));
                    vec3 _1294 = vec3(1.0, 0.0, 0.0) * _1216;
                    vec3 _1295 = vec3(0.0, 1.0, 0.0) * _1216;
                    vec3 _1296 = vec3(0.0, 0.0, 1.0) * _1216;
                    vec3 _1299 = cross(_1294, _1295);
                    vec3 _1302 = vec3(1.0 / dot(_1296, _1299));
                    vec3 _1220 = (mat3(cross(_1295, _1296) * _1302, cross(_1296, _1294) * _1302, _1299 * _1302) * (vs_out_pos_ws - data_holes_1._member0[_1175].position)) / data_holes_1._member0[_1175].size;
                    float _1221 = _1220.y;
                    float _1224 = clamp((_1221 * data_holes_1._member0[_1175].k) + data_holes_1._member0[_1175].a, 0.0, 1.0);
                    bool _1506;
                    if (abs(_1220.x) < mix(0.5, 0.0, (_1224 * _1224) * _1224))
                    {
                        bool _1507;
                        if (_1221 < ((data_holes_1._member0[_1175].k == 1.0) ? 0.5 : 0.699999988079071044921875))
                        {
                            _1507 = _1221 > (-0.5);
                        }
                        else
                        {
                            _1507 = false;
                        }
                        _1506 = _1507;
                    }
                    else
                    {
                        _1506 = false;
                    }
                    bool _1508;
                    if (_1506)
                    {
                        _1508 = abs(_1220.z) < 0.5;
                    }
                    else
                    {
                        _1508 = false;
                    }
                    if (_1508)
                    {
                        _1522 = true;
                        _1514 = true;
                        break;
                    }
                }
                _1257 = _1504 + 1u;
                _1504 = _1257;
                continue;
            }
            if (_1514)
            {
                _1521 = _1522;
                break;
            }
            _1521 = false;
            break;
        } while(false);
        if (_1521)
        {
            demote;
        }
    }
}

