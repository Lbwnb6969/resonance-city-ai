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

bool _1996;
vec4 _2176;

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
layout(location = 4) in vec2 vs_out_front_face_uv;
layout(location = 7) in float vs_out_vertex_pos_ls_z;
layout(location = 8) in vec2 vs_out_side_face_uv;
layout(location = 1) in float vs_out_roof_dmg_noise;
layout(location = 2) in float vs_out_weathering_noise;
layout(location = 3) in float vs_out_roof_t;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    bool _1965;
    if (1u == frame_constants.roof_highlight_mode)
    {
        _1965 = material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id == frame_constants.roof_highlighted_slot_id;
    }
    else
    {
        _1965 = false;
    }
    bool _1967;
    if (2u == frame_constants.roof_highlight_mode)
    {
        _1967 = material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id == frame_constants.roof_highlighted_slot_id;
    }
    else
    {
        _1967 = false;
    }
    vec3 _1289 = dFdx(vs_out_pos_ws);
    vec3 _1296 = dFdy(vs_out_pos_ws);
    vec3 _286 = normalize(cross(_1289, _1296 * (-1.0)));
    if (dot(vec4(vs_out_pos_ws, 1.0), vs_out_clipping_plane) < 0.0)
    {
        demote;
    }
    if (material_data_nani_instance_data._member0[vs_out_instance_index].is_main_roof_body != 0)
    {
        int _312 = int(material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id);
        bool _1990;
        do
        {
            vec2 _1424 = (vs_out_pos_ws.xz + vec2(65.0)) * vec2(0.1153846085071563720703125);
            int _1433 = int(floor(_1424.x)) + (15 * int(floor(_1424.y)));
            uint _1316 = min(128u, data_count_1._member0[_1433]);
            uint _1411;
            bool _1983;
            bool _1991;
            uint _1973 = 0u;
            for (;;)
            {
                if (!(_1973 < _1316))
                {
                    _1991 = _1996;
                    _1983 = false;
                    break;
                }
                int _1329 = int(uint(_1433 * 50) + _1973);
                if (_312 == data_holes_1._member0[_1329].wall_slot_id)
                {
                    vec3 _1360 = vec3(data_holes_1._member0[_1329].normal.x, 0.0, data_holes_1._member0[_1329].normal.y);
                    mat3 _1370 = transpose(mat3(cross(_1360, vec3(0.0, 1.0, 0.0)), vec3(0.0, 1.0, 0.0), _1360));
                    vec3 _1448 = vec3(1.0, 0.0, 0.0) * _1370;
                    vec3 _1449 = vec3(0.0, 1.0, 0.0) * _1370;
                    vec3 _1450 = vec3(0.0, 0.0, 1.0) * _1370;
                    vec3 _1453 = cross(_1448, _1449);
                    vec3 _1456 = vec3(1.0 / dot(_1450, _1453));
                    vec3 _1374 = (mat3(cross(_1449, _1450) * _1456, cross(_1450, _1448) * _1456, _1453 * _1456) * (vs_out_pos_ws - data_holes_1._member0[_1329].position)) / data_holes_1._member0[_1329].size;
                    float _1375 = _1374.y;
                    float _1378 = clamp((_1375 * data_holes_1._member0[_1329].k) + data_holes_1._member0[_1329].a, 0.0, 1.0);
                    bool _1975;
                    if (abs(_1374.x) < mix(0.5, 0.0, (_1378 * _1378) * _1378))
                    {
                        bool _1976;
                        if (_1375 < ((data_holes_1._member0[_1329].k == 1.0) ? 0.5 : 0.699999988079071044921875))
                        {
                            _1976 = _1375 > (-0.5);
                        }
                        else
                        {
                            _1976 = false;
                        }
                        _1975 = _1976;
                    }
                    else
                    {
                        _1975 = false;
                    }
                    bool _1977;
                    if (_1975)
                    {
                        _1977 = abs(_1374.z) < 0.5;
                    }
                    else
                    {
                        _1977 = false;
                    }
                    if (_1977)
                    {
                        _1991 = true;
                        _1983 = true;
                        break;
                    }
                }
                _1411 = _1973 + 1u;
                _1973 = _1411;
                continue;
            }
            if (_1983)
            {
                _1990 = _1991;
                break;
            }
            _1990 = false;
            break;
        } while(false);
        if (_1990)
        {
            demote;
        }
    }
    bool _552 = roof_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id] == 10u;
    vec4 sampled = texture(sampler2DArray(roof_colors_tex, samplers_llr), vec3(vs_out_pos_ws.xz * 0.20000000298023223876953125, float(_552 ? 7 : 1)));
    vec3 dmg_color = (sampled.xyz * 0.60000002384185791015625) * 1.5;
    bool _584 = roof_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id] == 0u;
    bool _2003;
    if (_584)
    {
        _2003 = true;
    }
    else
    {
        _2003 = roof_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id] == 8u;
    }
    bool _2004;
    if (_2003)
    {
        _2004 = true;
    }
    else
    {
        _2004 = roof_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id] == 7u;
    }
    bool _2005;
    if (_2004)
    {
        _2005 = true;
    }
    else
    {
        _2005 = roof_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id] == 6u;
    }
    vec3 _2072;
    if (_2005)
    {
        _2072 = dmg_color * 1.5;
    }
    else
    {
        vec3 _2073;
        if (roof_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id] == 1u)
        {
            _2073 = dmg_color * 0.3499999940395355224609375;
        }
        else
        {
            vec3 _2074;
            if (roof_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id] == 12u)
            {
                _2074 = dmg_color * 0.5;
            }
            else
            {
                _2074 = dmg_color;
            }
            _2073 = _2074;
        }
        _2072 = _2073;
    }
    bool _2006;
    if (roof_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id] == 2u)
    {
        _2006 = true;
    }
    else
    {
        _2006 = roof_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id] == 3u;
    }
    bool _2007;
    if (_2006)
    {
        _2007 = true;
    }
    else
    {
        _2007 = roof_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id] == 4u;
    }
    bool _2008;
    if (_2007)
    {
        _2008 = true;
    }
    else
    {
        _2008 = roof_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id] == 6u;
    }
    bool _2009;
    if (_2008)
    {
        _2009 = true;
    }
    else
    {
        _2009 = roof_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id] == 9u;
    }
    float _2018;
    if (_2009 ? true : _552)
    {
        _2018 = 0.5;
    }
    else
    {
        bool _2011;
        if (_584)
        {
            _2011 = true;
        }
        else
        {
            _2011 = roof_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id] == 5u;
        }
        bool _2012;
        if (_2011)
        {
            _2012 = true;
        }
        else
        {
            _2012 = roof_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id] == 7u;
        }
        bool _2013;
        if (_2012)
        {
            _2013 = true;
        }
        else
        {
            _2013 = roof_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id] == 8u;
        }
        float _2019;
        if (_2013)
        {
            _2019 = 1.0;
        }
        else
        {
            _2019 = (roof_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id] == 1u) ? 2.0 : 0.75;
        }
        _2018 = _2019;
    }
    bool _2014;
    if (vs_out_vertex_pos_ls_z > (-0.949999988079071044921875))
    {
        _2014 = vs_out_vertex_pos_ls_z < 0.89999997615814208984375;
    }
    else
    {
        _2014 = false;
    }
    vec2 _2015;
    if (_2014)
    {
        _2015 = vs_out_side_face_uv;
    }
    else
    {
        _2015 = vs_out_front_face_uv;
    }
    vec4 sampled_1 = texture(sampler2D(material_data_roof_tile_damage, samplers_llr), _2015, current_view.mip_bias);
    float roof_dmg_tex_sample = 1.0 - sampled_1.x;
    float roof_dmg_mask = roof_dmg_tex_sample * vs_out_roof_dmg_noise;
    vec3 in_p = vs_out_pos_ws * 0.100000001490116119384765625;
    vec3 _2055;
    if (roof_dmg_mask > 0.00999999977648258209228515625)
    {
        uint _766 = uint(material_data_nani_instance_data._member0[vs_out_instance_index].seed ^ 2834);
        uint _1472 = _766 + (_766 << 10u);
        uint _1474 = _1472 ^ (_1472 >> 6u);
        uint _1476 = _1474 + (_1474 << 3u);
        uint _1478 = _1476 ^ (_1476 >> 11u);
        _2055 = in_p + vec3(uintBitsToFloat(((_1478 + (_1478 << 15u)) & 8388607u) | 1065353216u) - 1.0);
    }
    else
    {
        _2055 = in_p;
    }
    uint _811 = uint(material_data_nani_instance_data._member0[vs_out_instance_index].seed ^ 34534);
    uint _1494 = _811 + (_811 << 10u);
    uint _1496 = _1494 ^ (_1494 >> 6u);
    uint _1498 = _1496 + (_1496 << 3u);
    uint _1500 = _1498 ^ (_1498 >> 11u);
    vec3 _2056;
    if ((uintBitsToFloat(((_1500 + (_1500 << 15u)) & 8388607u) | 1065353216u) - 1.0) < 0.5)
    {
        uint _817 = uint(material_data_nani_instance_data._member0[vs_out_instance_index].seed ^ 234);
        uint _1516 = _817 + (_817 << 10u);
        uint _1518 = _1516 ^ (_1516 >> 6u);
        uint _1520 = _1518 + (_1518 << 3u);
        uint _1522 = _1520 ^ (_1520 >> 11u);
        _2056 = _2055 + vec3((uintBitsToFloat(((_1522 + (_1522 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 0.4000000059604644775390625);
    }
    else
    {
        _2056 = _2055;
    }
    float _828 = float(roof_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id]);
    vec4 sampled_2 = texture(sampler2DArray(roof_colors_tex, samplers_llr), vec3(_2056.zy, _828));
    vec3 x = sampled_2.xyz;
    vec4 sampled_3 = texture(sampler2DArray(roof_colors_tex, samplers_llr), vec3(_2056.xy, _828));
    vec3 z = sampled_3.xyz;
    vec3 _850 = pow(abs(_286), vec3(1.0));
    float _1535 = dot(x, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)) + _850.x;
    float _1536 = dot(z, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)) + _850.z;
    float _1538 = max(_1535, _1536) - 0.20000000298023223876953125;
    float _1540 = max(_1535 - _1538, 0.0);
    float _1542 = max(_1536 - _1538, 0.0);
    vec3 tg_recovered_texture_value = (((x * _1540) + (z * _1542)) / vec3(_1540 + _1542)) * 0.60000002384185791015625;
    vec3 _974 = mix(mix(tg_recovered_texture_value * 0.89999997615814208984375, tg_recovered_texture_value * 1.2999999523162841796875, vec3(clamp(1.0 - (vs_out_roof_dmg_noise * 3.0), 0.0, 1.0))), _2072, vec3(clamp((clamp(roof_dmg_mask * 5.0, 0.0, 1.0) * _2018) + vs_out_weathering_noise, 0.0, 1.0)));
    vec3 _978 = mix(_974, _974 * 0.89999997615814208984375, vec3(roof_dmg_mask));
    vec3 _2075;
    if (_1965)
    {
        _2075 = mix(_978, vec3(0.300000011920928955078125, 0.0900000035762786865234375, 0.0), vec3(0.5));
    }
    else
    {
        _2075 = _978;
    }
    bool _998 = int(_1967) == 1;
    vec3 _2077;
    if (_998)
    {
        _2077 = mix(_2075, vec3(0.5), vec3(0.100000001490116119384765625));
    }
    else
    {
        _2077 = _2075;
    }
    vec3 _2116;
    if (vs_out_vertex_pos_ls_z > 0.999000012874603271484375)
    {
        vec2 _1626 = dFdx(vs_out_front_face_uv);
        vec2 _1630 = dFdy(vs_out_front_face_uv) * (-1.0);
        vec3 _1594 = cross(_286, dFdy(vs_out_pos_ws) * (-1.0));
        vec3 _1595 = cross(dFdx(vs_out_pos_ws), _286);
        float _1596 = _1626.x;
        float _1597 = _1630.y;
        float _1599 = _1626.y;
        float _1600 = _1630.x;
        float _1603 = 1.0 / ((_1596 * _1597) - (_1599 * _1600));
        _2116 = normalize(((texture(sampler2D(material_data_roof_tile_normal, samplers_llr), vs_out_front_face_uv, current_view.mip_bias).xyz * 2.0) - vec3(1.0)) * transpose(mat3(((_1594 * _1596) + (_1595 * _1600)) * _1603, ((_1594 * _1599) + (_1595 * _1597)) * _1603, _286)));
    }
    else
    {
        _2116 = _286;
    }
    vec3 _2110;
    if (frame_constants.glade_theme_id == 4u)
    {
        _2110 = mix(_2077, vec3(0.699999988079071044921875), vec3((smoothstep(0.100000001490116119384765625, 1.0, vs_out_roof_t) * 0.5) + ((roof_dmg_tex_sample * 0.5) * smoothstep(0.0, 0.5, vs_out_roof_t))));
    }
    else
    {
        _2110 = _2077;
    }
    vec3 _1650 = (_2116 * 0.5) + vec3(0.5);
    vec3 _1758 = sqrt(clamp(_2110, vec3(0.0), vec3(1.0)));
    uint _1773 = (uint((clamp(_1758.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1758.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1758.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _2175 = uvec2(((uint((clamp(_1650.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1650.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1650.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(mix(0.73500001430511474609375, 1.0, roof_dmg_mask), 0.0, 1.0) * 255.0) + 0.5) << uint(24)), _1773);
    _2175.y = _1773 | ((7u | (uint(_998 ? true : (_1965 ? true : false)) << 3u)) << 24u);
    entryPointParam_ps_main_gbuffer = _2175;
}

