#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_demote_to_helper_invocation : require

const uvec2 _122[4] = uvec2[](uvec2(0u), uvec2(0u, 1u), uvec2(1u), uvec2(1u, 0u));

struct Tex2D_natural
{
    uint bindless_handle;
};

struct UberMaterial_natural
{
    Tex2D_natural albedo_texture;
    Tex2D_natural normal_texture;
    Tex2D_natural roughness_texture;
    Tex2D_natural emissive_texture;
    vec3 emissive_factor;
    float perceptual_roughness;
    float normal_scale;
};

vec4 _1303;

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

layout(set = 0, binding = 1, scalar) readonly buffer StructuredBuffer
{
    UberMaterial_natural _member0[];
} material_data_nani_uber_materials;

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

layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 1, binding = 0) uniform texture2D resource_handles_1[];
layout(set = 1, binding = 0) uniform texture2D resource_handles_2[];

layout(location = 4) flat in uint vs_out_flags;
layout(location = 2) in vec3 vs_out_frag_position_ws;
layout(location = 0) in vec3 vs_out_color;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 7) flat in uint vs_out_material_idx;
layout(location = 3) in vec2 vs_out_frag_uv;
layout(location = 6) flat in int vs_out_vertex_flags;
layout(location = 5) flat in uint vs_out_albedo_texture_bindless_handle;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    if (((vs_out_flags << uint(30)) >> uint(31)) != 0u)
    {
        if (all(notEqual((uvec2(gl_FragCoord.xy) & uvec2(1u)), _122[frame_counter.index & 3u])))
        {
            demote;
        }
    }
    vec3 _147 = normalize(vs_out_frag_normal_ws);
    vec3 _1248;
    vec3 _1250;
    float _1256;
    if (((vs_out_flags << uint(27)) >> uint(31)) != 0u)
    {
        vec3 _1254;
        if (material_data_nani_uber_materials._member0[vs_out_material_idx].albedo_texture.bindless_handle != 4294967295u)
        {
            _1254 = vs_out_color * texture(nonuniformEXT(sampler2D(resource_handles[material_data_nani_uber_materials._member0[vs_out_material_idx].albedo_texture.bindless_handle], samplers_llr)), vs_out_frag_uv, current_view.mip_bias).xyz;
        }
        else
        {
            _1254 = vs_out_color;
        }
        float _1259;
        if (material_data_nani_uber_materials._member0[vs_out_material_idx].roughness_texture.bindless_handle != 4294967295u)
        {
            _1259 = material_data_nani_uber_materials._member0[vs_out_material_idx].perceptual_roughness * texture(nonuniformEXT(sampler2D(resource_handles_1[material_data_nani_uber_materials._member0[vs_out_material_idx].roughness_texture.bindless_handle], samplers_llr)), vs_out_frag_uv, current_view.mip_bias).x;
        }
        else
        {
            _1259 = material_data_nani_uber_materials._member0[vs_out_material_idx].perceptual_roughness;
        }
        vec3 _1249;
        if (material_data_nani_uber_materials._member0[vs_out_material_idx].normal_texture.bindless_handle != 4294967295u)
        {
            vec4 sampled = texture(nonuniformEXT(sampler2D(resource_handles_2[material_data_nani_uber_materials._member0[vs_out_material_idx].normal_texture.bindless_handle], samplers_llr)), vs_out_frag_uv, current_view.mip_bias);
            vec2 normal_xy = (sampled.xy * 2.0) - vec2(1.0);
            vec3 _857 = dFdx(vs_out_frag_position_ws);
            vec3 _860 = dFdy(vs_out_frag_position_ws);
            vec2 _864 = dFdx(vs_out_frag_uv);
            vec2 _867 = dFdy(vs_out_frag_uv);
            float _824 = _864.x;
            float _825 = _867.y;
            float _827 = _864.y;
            float _828 = _867.x;
            vec3 _834 = vec3((_824 * _825) - (_827 * _828));
            vec3 _835 = ((_857 * _825) - (_860 * _827)) / _834;
            vec3 _844 = normalize(_835 - (_147 * dot(_147, _835)));
            vec3 _845 = cross(_147, _844);
            vec3 _1247;
            if (dot(_845, ((_860 * _824) - (_857 * _828)) / _834) > 0.0)
            {
                _1247 = -_845;
            }
            else
            {
                _1247 = _845;
            }
            _1249 = normalize(mix(vec3(0.0, 0.0, 1.0), vec3(normal_xy, sqrt(clamp(1.0 - dot(normal_xy, normal_xy), 0.0, 1.0))), vec3(material_data_nani_uber_materials._member0[vs_out_material_idx].normal_scale)) * transpose(mat3(_844, _1247, _147)));
        }
        else
        {
            _1249 = _147;
        }
        _1256 = _1259;
        _1250 = _1254;
        _1248 = _1249;
    }
    else
    {
        bool _1240;
        if (((vs_out_flags << uint(31)) >> uint(31)) != 0u)
        {
            _1240 = (vs_out_vertex_flags & 2) != 0;
        }
        else
        {
            _1240 = false;
        }
        vec3 _1255;
        if (_1240)
        {
            _1255 = vs_out_color * texture(nonuniformEXT(sampler2D(resource_handles[vs_out_albedo_texture_bindless_handle], samplers_llr)), vs_out_frag_uv, current_view.mip_bias).xyz;
        }
        else
        {
            _1255 = vs_out_color;
        }
        _1256 = 0.800000011920928955078125;
        _1250 = _1255;
        _1248 = _147;
    }
    vec3 _1279;
    if (frame_constants.glade_theme_id == 4u)
    {
        _1279 = mix(_1250, vec3(0.699999988079071044921875), vec3((((vs_out_vertex_flags & 1) != 0) ? 0.5 : 1.0) * smoothstep(0.5, 1.0, clamp(_1248.y, 0.0, 1.0) * 0.800000011920928955078125)));
    }
    else
    {
        _1279 = _1250;
    }
    vec3 _912 = (_1248 * 0.5) + vec3(0.5);
    vec3 _1020 = sqrt(clamp(_1279, vec3(0.0), vec3(1.0)));
    uint _1035 = (uint((clamp(_1020.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1020.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1020.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _1302 = uvec2(((uint((clamp(_912.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_912.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_912.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(_1256, 0.0, 1.0) * 255.0) + 0.5) << uint(24)), _1035);
    _1302.y = _1035 | ((((uint(((vs_out_flags << uint(29)) >> uint(31)) != 0u) | 2u) | 4u) | (uint(((vs_out_flags << uint(28)) >> uint(31)) != 0u) << 6u)) << 24u);
    entryPointParam_ps_main_gbuffer = _1302;
}

