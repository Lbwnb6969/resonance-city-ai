#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_samplerless_texture_functions : require

struct Tex2D_natural
{
    uint bindless_handle;
};

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    Tex2D_natural logo_tex;
    Tex2D_natural mods_tex;
} globalParams;

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

layout(set = 1, binding = 0) uniform texture2D resource_handles[];

layout(location = 0) out vec2 entryPointParam_vs_main_uv;
layout(location = 1) flat out uint entryPointParam_vs_main_texture_index;

void main()
{
    uint _28 = uint(gl_VertexIndex - gl_BaseVertex);
    vec4 _238;
    do
    {
        if (_28 == 0u)
        {
            _238 = vec4(0.5, -0.5, 1.0, 1.0);
            break;
        }
        else
        {
            if (_28 == 1u)
            {
                _238 = vec4(0.5, 0.5, 1.0, 0.0);
                break;
            }
            else
            {
                if (_28 == 2u)
                {
                    _238 = vec4(-0.5, 0.5, 0.0, 0.0);
                    break;
                }
                else
                {
                    if (_28 == 3u)
                    {
                        _238 = vec4(-0.5, 0.5, 0.0, 0.0);
                        break;
                    }
                    else
                    {
                        if (_28 == 4u)
                        {
                            _238 = vec4(-0.5, -0.5, 0.0, 1.0);
                            break;
                        }
                        else
                        {
                            _238 = vec4(0.5, -0.5, 1.0, 1.0);
                            break;
                        }
                        break; // unreachable workaround
                    }
                    break; // unreachable workaround
                }
                break; // unreachable workaround
            }
            break; // unreachable workaround
        }
        break; // unreachable workaround
    } while(false);
    uvec2 vecSize = uvec2(textureSize(resource_handles[nonuniformEXT(globalParams.logo_tex.bindless_handle)], 0));
    vec2 logo_dims_cs = vec2((float(vecSize.x) / float(vecSize.y)) / frame_constants.swapchain_aspect_ratio, 1.0) * 0.2249999940395355224609375;
    vec2 logo_center_cs = vec2(0.949999988079071044921875, -0.949999988079071044921875) * (vec2(1.0) - logo_dims_cs);
    uint _131 = uint(gl_InstanceIndex);
    vec2 _239;
    vec2 _240;
    if (_131 == 1u)
    {
        _240 = logo_center_cs + ((vec2(0.082840263843536376953125, -0.4813387393951416015625) * logo_dims_cs) * 2.0);
        _239 = logo_dims_cs * vec2(0.257725179195404052734375, 0.1233265697956085205078125);
    }
    else
    {
        _240 = logo_center_cs;
        _239 = logo_dims_cs;
    }
    gl_Position = vec4(((_238.xy * _239) * 2.0) + _240, 1.0, 1.0);
    entryPointParam_vs_main_uv = _238.zw;
    entryPointParam_vs_main_texture_index = _131;
}

