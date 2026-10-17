#version 460
#extension GL_EXT_demote_to_helper_invocation : require

layout(set = 18, binding = 0, std140) uniform ViewConstants_natural
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

layout(set = 5, binding = 0, std140) uniform ColorLibraryData_natural
{
    vec4 temp_color_1;
    vec4 temp_color_2;
    vec4 temp_color_3;
    vec4 roof_color_1;
    vec4 roof_color_2;
    vec4 sky_low_day;
    vec4 sky_high_day;
    vec4 sun_tint_day;
    vec4 sky_low_dusk;
    vec4 sky_high_dusk;
    vec4 sun_tint_dusk;
    vec4 indirect_light_tint;
    vec4 fence_color_1;
    vec4 fence_color_2;
    vec4 flower_color_1;
    vec4 flower_color_2;
    vec4 canopy_color_1;
    vec4 canopy_color_2;
    vec4 grass_1;
    vec4 grass_2;
    vec4 path;
    vec4 sky_base;
    vec4 sky_horizon;
    vec4 sky_clouds_1;
    vec4 sky_clouds_2;
    vec4 terrain_1;
    vec4 terrain_2;
    vec4 terrain_flattened;
    vec4 wall_1;
    vec4 wall_2;
    vec4 wall_moss;
    vec4 wall_bricks;
    vec4 ivy_branch;
    vec4 ivy_leaf_1;
    vec4 ivy_leaf_2;
    vec4 terrain_highlight;
    vec4 night_tint;
} color_library_data;

layout(set = 0, binding = 1) uniform texture2D material_data_flower_texture;
layout(set = 2, binding = 6) uniform sampler samplers_llr_iso;

layout(location = 0) in vec3 vs_out_frag_vertex_color;
layout(location = 1) in vec2 vs_out_frag_uv;
layout(location = 2) in vec3 vs_out_frag_pos_ws;
layout(location = 3) in vec3 vs_out_frag_normal;
layout(location = 4) flat in int vs_out_id;
layout(location = 5) flat in int vs_out_frag_plant_part_id;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    do
    {
        vec4 _523 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
        vec3 _527 = _523.xyz / vec3(_523.w);
        vec3 _844;
        vec3 _845;
        float _846;
        float _849;
        if (vs_out_frag_plant_part_id == 2)
        {
            uint _106 = uint(vs_out_id);
            uint _535 = _106 + (_106 << 10u);
            uint _537 = _535 ^ (_535 >> 6u);
            uint _539 = _537 + (_537 << 3u);
            uint _541 = _539 ^ (_539 >> 11u);
            vec3 _843;
            if ((uintBitsToFloat(((_541 + (_541 << 15u)) & 8388607u) | 1065353216u) - 1.0) > 0.5)
            {
                _843 = color_library_data.flower_color_1.xyz;
            }
            else
            {
                _843 = color_library_data.flower_color_2.xyz;
            }
            vec3 _552 = dFdx(vs_out_frag_pos_ws);
            vec3 _559 = dFdy(vs_out_frag_pos_ws);
            vec3 _589 = dFdx(vs_out_frag_pos_ws);
            vec3 _592 = dFdy(vs_out_frag_pos_ws);
            vec2 _596 = dFdx(vs_out_frag_uv);
            vec2 _599 = dFdy(vs_out_frag_uv);
            vec3 _567 = cross(_589, _592);
            mat2x3 _574 = mat2x3(cross(_592, _567), cross(_567, _589));
            vec3 P_at_uv_center = vs_out_frag_pos_ws + (vec3(vec2(0.5) - vs_out_frag_uv.xy, 0.0) * transpose(mat3(normalize(_574 * vec2(_596.x, _599.x)), normalize(_574 * vec2(_596.y, _599.y)), normalize(cross(_552, _559 * (-1.0))))));
            vec3 _253 = -normalize(_527 - vs_out_frag_pos_ws);
            vec3 _611 = _527 - P_at_uv_center;
            float _612 = dot(_253, _253);
            float _613 = dot(_611, _253);
            float _614 = 2.0 * _613;
            float _629 = ((_613 * (-2.0)) - sqrt((_614 * _614) - ((4.0 * _612) * (dot(_611, _611) - 0.20249998569488525390625)))) / (2.0 * _612);
            bool _840;
            if (_629 == _629)
            {
                _840 = _629 >= 0.0;
            }
            else
            {
                _840 = false;
            }
            if (!_840)
            {
                demote;
            }
            if (texture(sampler2D(material_data_flower_texture, samplers_llr_iso), vs_out_frag_uv).w < 0.5)
            {
                demote;
                entryPointParam_ps_main_gbuffer = uvec2(0u);
                break;
            }
            _849 = 0.0;
            _846 = 1.0;
            _845 = normalize((_527 + (_253 * _629)) - P_at_uv_center);
            _844 = _843;
        }
        else
        {
            vec3 _838;
            float _847;
            float _850;
            if (vs_out_frag_plant_part_id == 1)
            {
                _850 = 1.0;
                _847 = 0.0;
                _838 = vec3(0.08439205586910247802734375, 0.22000001370906829833984375, 0.072599999606609344482421875);
            }
            else
            {
                bool _363 = vs_out_frag_plant_part_id == 3;
                vec3 _839;
                if (_363)
                {
                    _839 = (vec3(0.093599997460842132568359375, 0.23999999463558197021484375, 0.10824002325534820556640625) * clamp(vs_out_frag_vertex_color, vec3(0.0), vec3(1.0))) * 0.699999988079071044921875;
                }
                else
                {
                    _839 = vec3(0.08439205586910247802734375, 0.22000001370906829833984375, 0.072599999606609344482421875);
                }
                _850 = float(_363);
                _847 = _363 ? 0.0 : 1.0;
                _838 = _839;
            }
            _849 = _850;
            _846 = _847;
            _845 = vs_out_frag_normal;
            _844 = _838;
        }
        vec3 _663 = (_845 * 0.5) + vec3(0.5);
        vec3 _731 = sqrt(clamp(_844 * 0.699999988079071044921875, vec3(0.0), vec3(1.0)));
        entryPointParam_ps_main_gbuffer = uvec2(((uint((clamp(_663.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_663.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_663.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(mix(_849, 0.20000000298023223876953125, smoothstep(150.0, 200.0, length(vs_out_frag_pos_ws))), 0.0, 1.0) * 255.0) + 0.5) << uint(24)), ((uint((clamp(_731.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_731.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_731.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(_846, 0.0, 1.0) * 255.0) + 0.5) << uint(24)));
        break;
    } while(false);
}

