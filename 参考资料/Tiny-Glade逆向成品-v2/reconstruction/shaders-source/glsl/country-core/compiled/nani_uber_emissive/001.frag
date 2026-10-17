#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_demote_to_helper_invocation : require

const uvec2 _148[4] = uvec2[](uvec2(0u), uvec2(0u, 1u), uvec2(1u), uvec2(1u, 0u));

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

vec4 _1571;

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
layout(location = 1) out vec3 entryPointParam_ps_main_emissive;

void main()
{
    if (((vs_out_flags << uint(30)) >> uint(31)) != 0u)
    {
        if (all(notEqual((uvec2(gl_FragCoord.xy) & uvec2(1u)), _148[frame_counter.index & 3u])))
        {
            demote;
        }
    }
    vec3 _173 = normalize(vs_out_frag_normal_ws);
    bool _178 = ((vs_out_flags << uint(27)) >> uint(31)) != 0u;
    vec3 _1413;
    vec3 _1416;
    float _1423;
    vec3 _1435;
    if (_178)
    {
        vec3 _1421;
        if (material_data_nani_uber_materials._member0[vs_out_material_idx].albedo_texture.bindless_handle != 4294967295u)
        {
            _1421 = vs_out_color * texture(nonuniformEXT(sampler2D(resource_handles[material_data_nani_uber_materials._member0[vs_out_material_idx].albedo_texture.bindless_handle], samplers_llr)), vs_out_frag_uv, current_view.mip_bias).xyz;
        }
        else
        {
            _1421 = vs_out_color;
        }
        float _1427;
        if (material_data_nani_uber_materials._member0[vs_out_material_idx].roughness_texture.bindless_handle != 4294967295u)
        {
            _1427 = material_data_nani_uber_materials._member0[vs_out_material_idx].perceptual_roughness * texture(nonuniformEXT(sampler2D(resource_handles_1[material_data_nani_uber_materials._member0[vs_out_material_idx].roughness_texture.bindless_handle], samplers_llr)), vs_out_frag_uv, current_view.mip_bias).x;
        }
        else
        {
            _1427 = material_data_nani_uber_materials._member0[vs_out_material_idx].perceptual_roughness;
        }
        vec3 _1415;
        if (material_data_nani_uber_materials._member0[vs_out_material_idx].normal_texture.bindless_handle != 4294967295u)
        {
            vec4 sampled = texture(nonuniformEXT(sampler2D(resource_handles_2[material_data_nani_uber_materials._member0[vs_out_material_idx].normal_texture.bindless_handle], samplers_llr)), vs_out_frag_uv, current_view.mip_bias);
            vec2 normal_xy = (sampled.xy * 2.0) - vec2(1.0);
            vec3 _973 = dFdx(vs_out_frag_position_ws);
            vec3 _976 = dFdy(vs_out_frag_position_ws);
            vec2 _980 = dFdx(vs_out_frag_uv);
            vec2 _983 = dFdy(vs_out_frag_uv);
            float _940 = _980.x;
            float _941 = _983.y;
            float _943 = _980.y;
            float _944 = _983.x;
            vec3 _950 = vec3((_940 * _941) - (_943 * _944));
            vec3 _951 = ((_973 * _941) - (_976 * _943)) / _950;
            vec3 _960 = normalize(_951 - (_173 * dot(_173, _951)));
            vec3 _961 = cross(_173, _960);
            vec3 _1404;
            if (dot(_961, ((_976 * _940) - (_973 * _944)) / _950) > 0.0)
            {
                _1404 = -_961;
            }
            else
            {
                _1404 = _961;
            }
            _1415 = normalize(mix(vec3(0.0, 0.0, 1.0), vec3(normal_xy, sqrt(clamp(1.0 - dot(normal_xy, normal_xy), 0.0, 1.0))), vec3(material_data_nani_uber_materials._member0[vs_out_material_idx].normal_scale)) * transpose(mat3(_960, _1404, _173)));
        }
        else
        {
            _1415 = _173;
        }
        vec3 _1436;
        if (material_data_nani_uber_materials._member0[vs_out_material_idx].emissive_texture.bindless_handle != 4294967295u)
        {
            _1436 = material_data_nani_uber_materials._member0[vs_out_material_idx].emissive_factor * texture(nonuniformEXT(sampler2D(resource_handles[material_data_nani_uber_materials._member0[vs_out_material_idx].emissive_texture.bindless_handle], samplers_llr)), vs_out_frag_uv, current_view.mip_bias).xyz;
        }
        else
        {
            _1436 = material_data_nani_uber_materials._member0[vs_out_material_idx].emissive_factor;
        }
        _1435 = _1436;
        _1423 = _1427;
        _1416 = _1421;
        _1413 = _1415;
    }
    else
    {
        bool _1397;
        if (((vs_out_flags << uint(31)) >> uint(31)) != 0u)
        {
            _1397 = (vs_out_vertex_flags & 2) != 0;
        }
        else
        {
            _1397 = false;
        }
        vec3 _1422;
        if (_1397)
        {
            _1422 = vs_out_color * texture(nonuniformEXT(sampler2D(resource_handles[vs_out_albedo_texture_bindless_handle], samplers_llr)), vs_out_frag_uv, current_view.mip_bias).xyz;
        }
        else
        {
            _1422 = vs_out_color;
        }
        _1435 = vec3(0.0);
        _1423 = 0.800000011920928955078125;
        _1416 = _1422;
        _1413 = _173;
    }
    vec3 _1503;
    if (frame_constants.glade_theme_id == 4u)
    {
        _1503 = mix(_1416, vec3(0.699999988079071044921875), vec3((((vs_out_vertex_flags & 1) != 0) ? 0.5 : 1.0) * smoothstep(0.5, 1.0, clamp(_1413.y, 0.0, 1.0) * 0.800000011920928955078125)));
    }
    else
    {
        _1503 = _1416;
    }
    vec3 _1543;
    if (_178)
    {
        _1543 = _1435 * frame_constants.ev_mult;
    }
    else
    {
        bool _1431;
        if (vs_out_color.x > 0.9900000095367431640625)
        {
            _1431 = vs_out_color.y < 0.00999999977648258209228515625;
        }
        else
        {
            _1431 = false;
        }
        bool _1432;
        if (_1431)
        {
            _1432 = vs_out_color.z < 0.00999999977648258209228515625;
        }
        else
        {
            _1432 = false;
        }
        vec3 _1544;
        if (_1432)
        {
            bool _1433;
            if (frame_constants.time_of_day > 0.4830000102519989013671875)
            {
                _1433 = frame_constants.time_of_day < 0.90600001811981201171875;
            }
            else
            {
                _1433 = false;
            }
            vec3 _1559;
            if (_1433)
            {
                _1559 = vec3(8.0, 0.800000011920928955078125, 0.0) * frame_constants.ev_mult;
            }
            else
            {
                demote;
                _1559 = vec3(0.0);
            }
            _1544 = _1559;
        }
        else
        {
            _1544 = vec3(0.0);
        }
        _1543 = _1544;
    }
    vec3 _1055 = (_1413 * 0.5) + vec3(0.5);
    vec3 _1163 = sqrt(clamp(_1503, vec3(0.0), vec3(1.0)));
    uint _1178 = (uint((clamp(_1163.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1163.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1163.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _1570 = uvec2(((uint((clamp(_1055.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1055.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1055.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(_1423, 0.0, 1.0) * 255.0) + 0.5) << uint(24)), _1178);
    _1570.y = _1178 | ((((uint(((vs_out_flags << uint(29)) >> uint(31)) != 0u) | 2u) | 4u) | (uint(((vs_out_flags << uint(28)) >> uint(31)) != 0u) << 6u)) << 24u);
    entryPointParam_ps_main_gbuffer = _1570;
    entryPointParam_ps_main_emissive = _1543;
}

