#version 460
#extension GL_EXT_demote_to_helper_invocation : require

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

layout(set = 0, binding = 4) uniform texture2D material_data_terrain_texture;
layout(set = 2, binding = 0) uniform sampler samplers_lnc;
layout(set = 0, binding = 0) uniform texture2D material_data_flower1;
layout(set = 0, binding = 1) uniform texture2D material_data_flower2;
layout(set = 0, binding = 2) uniform texture2D material_data_flower3;
layout(set = 0, binding = 3) uniform texture2D material_data_grass_patch;
layout(set = 2, binding = 1) uniform sampler samplers_llr;

layout(location = 3) in vec2 vs_out_terrain_uv;
layout(location = 5) flat in int vs_out_plant_id;
layout(location = 0) in vec2 vs_out_uv;
layout(location = 4) in float vs_out_bby;
layout(location = 6) flat in int vs_out_billboard_id;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec4 sampled = texture(sampler2D(material_data_terrain_texture, samplers_lnc), vs_out_terrain_uv);
    float _853;
    vec3 _857;
    if (vs_out_plant_id == 0)
    {
        vec4 sampled_1 = texture(sampler2D(material_data_flower1, samplers_lnc), vs_out_uv, (-1.0) + current_view.mip_bias);
        float _92 = sampled_1.w;
        _857 = mix(sampled.xyz, sampled_1.xyz, vec3(vs_out_bby * vs_out_bby));
        _853 = _92 * _92;
    }
    else
    {
        float _854;
        vec3 _858;
        if (vs_out_plant_id == 2)
        {
            vec4 sampled_2 = texture(sampler2D(material_data_flower2, samplers_lnc), vs_out_uv, (-1.0) + current_view.mip_bias);
            float _127 = sampled_2.w;
            _858 = mix(sampled.xyz, sampled_2.xyz, vec3(vs_out_bby));
            _854 = _127 * _127;
        }
        else
        {
            float _855;
            vec3 _859;
            if (vs_out_plant_id == 3)
            {
                vec4 sampled_3 = texture(sampler2D(material_data_flower3, samplers_lnc), vs_out_uv, (-1.0) + current_view.mip_bias);
                float _152 = sampled_3.w;
                _859 = mix(sampled.xyz, sampled_3.xyz, vec3(vs_out_bby));
                _855 = _152 * _152;
            }
            else
            {
                int id = vs_out_billboard_id - 4 * (vs_out_billboard_id / 4);
                vec4 sampled_4 = texture(sampler2D(material_data_grass_patch, samplers_llr), vec2(0.5 * (vs_out_uv.x + float(id - 2 * (id / 2))), 0.5 * (vs_out_uv.y + float(int(floor(float(id / 2)))))), (-1.0) + current_view.mip_bias);
                float _204 = sampled_4.w;
                vec3 _860;
                if (frame_constants.glade_theme_id == 4u)
                {
                    _860 = mix(sampled.xyz, sampled_4.xyz, vec3(pow(vs_out_bby, 2.5)));
                }
                else
                {
                    _860 = mix(sampled.xyz, sampled_4.xyz, vec3(pow(vs_out_bby, 1.5)));
                }
                _859 = _860;
                _855 = _204 * _204;
            }
            _858 = _859;
            _854 = _855;
        }
        _857 = _858;
        _853 = _854;
    }
    if (_853 < 0.100000001490116119384765625)
    {
        demote;
    }
    vec3 _563 = (normalize(vs_out_frag_normal_ws) * 0.5) + vec3(0.5);
    vec3 _671 = sqrt(clamp(_857, vec3(0.0), vec3(1.0)));
    uint _686 = (uint((clamp(_671.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_671.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_671.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _879 = uvec2(((uint((clamp(_563.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_563.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_563.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3858759680u, _686);
    _879.y = _686 | 100663296u;
    entryPointParam_ps_main_gbuffer = _879;
}

