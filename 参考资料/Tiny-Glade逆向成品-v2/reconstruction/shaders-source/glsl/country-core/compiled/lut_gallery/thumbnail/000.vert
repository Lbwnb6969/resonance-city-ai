#version 460
#extension GL_EXT_scalar_block_layout : require

struct Bindless_natural
{
    uint bindless_handle;
};

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

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    Bindless_natural icon_tex;
    Bindless_natural grading_lut_tex;
    vec2 thumbnail_center;
    vec2 thumbnail_size;
    uint is_hovered;
    uint is_active;
    uint show_icon;
    float lut_amount;
} globalParams;

layout(location = 0) out vec2 entryPointParam_vs_main_uv;

void main()
{
    uint _22 = uint(gl_VertexIndex - gl_BaseVertex) % 6u;
    vec4 _188;
    do
    {
        if (_22 == 0u)
        {
            _188 = vec4(0.5, -0.5, 1.0, 0.0);
            break;
        }
        else
        {
            if (_22 == 1u)
            {
                _188 = vec4(0.5, 0.5, 1.0, 1.0);
                break;
            }
            else
            {
                if (_22 == 2u)
                {
                    _188 = vec4(-0.5, 0.5, 0.0, 1.0);
                    break;
                }
                else
                {
                    if (_22 == 3u)
                    {
                        _188 = vec4(-0.5, 0.5, 0.0, 1.0);
                        break;
                    }
                    else
                    {
                        if (_22 == 4u)
                        {
                            _188 = vec4(-0.5, -0.5, 0.0, 0.0);
                            break;
                        }
                        else
                        {
                            _188 = vec4(0.5, -0.5, 1.0, 0.0);
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
    vec2 _101 = (_188.xy * globalParams.thumbnail_size) + globalParams.thumbnail_center;
    _101.x = _101.x / frame_constants.swapchain_aspect_ratio;
    gl_Position = vec4((_101 - vec2(0.5)) * vec2(2.0, -2.0), 0.0, 1.0);
    entryPointParam_vs_main_uv = _188.zw;
}

