#version 460
#extension GL_EXT_buffer_reference2 : require
#extension GL_EXT_scalar_block_layout : require

layout(buffer_reference) buffer uvec4Pointer;

struct WoodenArchFrameInstanceData_natural
{
    vec4 bounding_sphere;
    uvec4Pointer samples_gpu_address;
    uint sample_count;
    uint color_id;
    uint mesh_atlas_part_idx;
    uint caps;
    float profile_width;
    float profile_depth;
    float bevel_size;
    float frame_length;
};

layout(buffer_reference) buffer uvec4Pointer
{
    uvec4 value;
};

layout(set = 0, binding = 0, scalar) readonly buffer StructuredBuffer
{
    WoodenArchFrameInstanceData_natural _member0[];
} material_data_nani_instance_data;

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

layout(set = 0, binding = 4) uniform texture2D material_data_wood_edge_damage;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 7, binding = 1) uniform texture2DArray halftimber_colors_tex;
layout(set = 0, binding = 3) uniform texture2D material_data_wood_roughness;
layout(set = 0, binding = 2) uniform texture2D material_data_wood_normal;
layout(set = 0, binding = 1) uniform texture2D material_data_dirtpath_heightmap;

layout(location = 4) flat in uint vs_out_instance_index;
layout(location = 0) in vec3 vs_out_frag_normal_ws;
layout(location = 5) in float vs_out_use_hard_normal;
layout(location = 1) in vec3 vs_out_frag_position_ws;
layout(location = 6) in vec2 vs_out_tex_uv;
layout(location = 7) in vec2 vs_out_edge_dmg_tex_uv;
layout(location = 2) in vec3 vs_out_tangent_u_ws;
layout(location = 3) in vec3 vs_out_tangent_v_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec3 _199 = normalize(vs_out_frag_normal_ws);
    vec3 _935;
    if (vs_out_use_hard_normal > 0.00999999977648258209228515625)
    {
        _935 = normalize(cross(dFdx(vs_out_frag_position_ws), dFdy(vs_out_frag_position_ws) * (-1.0)));
    }
    else
    {
        _935 = _199;
    }
    vec2 uv = vs_out_tex_uv * vec2(0.449999988079071044921875, 0.0599999986588954925537109375);
    bool _244 = vs_out_use_hard_normal <= 0.00999999977648258209228515625;
    float _928;
    if (_244)
    {
        _928 = 1.0 - texture(sampler2D(material_data_wood_edge_damage, samplers_llr), vs_out_edge_dmg_tex_uv * vec2(1.0, 0.0500000007450580596923828125), current_view.mip_bias).x;
    }
    else
    {
        _928 = 0.0;
    }
    vec4 sampled = texture(sampler2DArray(halftimber_colors_tex, samplers_llr), vec3(uv, float(int(material_data_nani_instance_data._member0[vs_out_instance_index].color_id))), current_view.mip_bias);
    vec2 normal_uv = vs_out_tex_uv * vec2(0.2249999940395355224609375, 0.17999999225139617919921875);
    vec4 sampled_1 = texture(sampler2D(material_data_wood_roughness, samplers_llr), normal_uv, current_view.mip_bias);
    float _310 = mix(0.699999988079071044921875, 0.89999997615814208984375, 1.0 - sampled_1.x);
    vec3 _933;
    if (_244)
    {
        vec3 normal_tangent_space = (texture(sampler2D(material_data_wood_normal, samplers_llr), normal_uv, current_view.mip_bias).xyz * 2.0) - vec3(1.0);
        normal_tangent_space.z *= 18.1818180084228515625;
        _933 = normalize(((normalize(vs_out_tangent_u_ws) * normal_tangent_space.x) + (normalize(vs_out_tangent_v_ws) * normal_tangent_space.y)) + (_199 * normal_tangent_space.z));
    }
    else
    {
        _933 = _935;
    }
    vec4 sampled_2 = texture(sampler2DArray(halftimber_colors_tex, samplers_llr), vec3(uv, 0.0), current_view.mip_bias);
    vec3 _374 = mix(sampled.xyz, sampled_2.xyz, vec3(_928 * 0.4000000059604644775390625));
    bool _929;
    if (frame_constants.glade_theme_id == 4u)
    {
        _929 = (material_data_nani_instance_data._member0[vs_out_instance_index].caps & 16u) == 0u;
    }
    else
    {
        _929 = false;
    }
    vec3 _937;
    if (_929)
    {
        vec4 sampled_3 = texture(sampler2D(material_data_dirtpath_heightmap, samplers_llr), vs_out_frag_position_ws.xz * 0.0500000007450580596923828125, current_view.mip_bias);
        float _410 = sampled_3.x;
        _937 = mix(_374, vec3(0.699999988079071044921875), vec3(((smoothstep(0.0, 0.20000000298023223876953125, smoothstep(0.5, 1.0, _310) * mix(0.0, 0.5, _410)) * 0.60000002384185791015625) + (_410 * 0.20000000298023223876953125)) * clamp(_933.y, 0.0, 1.0)));
    }
    else
    {
        _937 = _374;
    }
    uvec2 _621;
    vec3 _632 = (_933 * 0.5) + vec3(0.5);
    _621.x = ((uint((clamp(_632.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_632.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_632.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(_310, 0.0, 1.0) * 255.0) + 0.5) << uint(24));
    vec3 _740 = sqrt(clamp(_937, vec3(0.0), vec3(1.0)));
    uint _755 = (uint((clamp(_740.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_740.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_740.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    _621.y = _755;
    _621.y = _755 | 117440512u;
    entryPointParam_ps_main_gbuffer = _621;
}

