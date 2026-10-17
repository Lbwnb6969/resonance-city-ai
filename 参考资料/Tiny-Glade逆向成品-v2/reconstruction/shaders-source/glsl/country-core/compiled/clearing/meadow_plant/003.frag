#version 460
#extension GL_EXT_demote_to_helper_invocation : require

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

layout(location = 1) in vec2 vs_out_frag_uv;
layout(location = 5) flat in int vs_out_frag_plant_part_id;

void main()
{
    do
    {
        uvec2 _55 = uvec2(gl_FragCoord.xy);
        if (((_55.x ^ _55.y) & 1u) == 0u)
        {
            demote;
            break;
        }
        if (vs_out_frag_plant_part_id == 2)
        {
            if (texture(sampler2D(material_data_flower_texture, samplers_llr_iso), vs_out_frag_uv).w < 0.5)
            {
                demote;
                break;
            }
        }
        else
        {
        }
        break;
    } while(false);
}

