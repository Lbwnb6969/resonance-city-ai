#version 460
#extension GL_ARB_conservative_depth : require
#extension GL_EXT_demote_to_helper_invocation : require
layout(depth_less) out float gl_FragDepth;

struct InstanceData_natural
{
    vec3 position;
    uint wall_slot_id;
    vec2 basis0_xz;
    vec2 scale;
    float roof_animation;
    uint shape;
    uint double_sided;
    uint is_roof_bottom;
    uint material_id;
    uint override_color_id;
    uint pattern_id;
    uint pad_1;
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

bool _16778;

layout(set = 0, binding = 0, std430) readonly buffer StructuredBuffer
{
    InstanceData_natural _member0[];
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

layout(set = 8, binding = 1, std430) readonly buffer data_count
{
    uint _member0[];
} data_count_1;

layout(set = 8, binding = 0, std430) readonly buffer data_holes
{
    DormerHole_natural _member0[];
} data_holes_1;

layout(set = 6, binding = 0, std430) readonly buffer wall_color_data_wall_color_ids
{
    uint _member0[];
} wall_color_data_wall_color_ids_1;

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

layout(set = 11, binding = 0, std140) uniform StoneFloorTextures_natural
{
    uvec2 stone_floor_height_dims;
} stone_floor_textures;

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

layout(set = 9, binding = 0, std430) readonly buffer halftimber_colors_ids
{
    uint _member0[];
} halftimber_colors_ids_1;

layout(set = 10, binding = 0, std140) uniform WoodenFloorTextures_natural
{
    uvec2 wooden_floor_height_dims;
} wooden_floor_textures;

layout(set = 11, binding = 3) uniform texture2D stone_floor_textures_stone_floor_height;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 11, binding = 1) uniform texture2D stone_floor_textures_stone_floor_normal;
layout(set = 11, binding = 2) uniform texture2D stone_floor_textures_stone_floor_seed;
layout(set = 11, binding = 4) uniform texture2D stone_floor_textures_stone_floor_roughness;
layout(set = 6, binding = 1) uniform texture2DArray wall_color_data_brick_colors;
layout(set = 11, binding = 7) uniform texture2D stone_floor_textures_stone_floor_height_2;
layout(set = 11, binding = 6) uniform texture2D stone_floor_textures_stone_floor_normal_2;
layout(set = 11, binding = 5) uniform texture2D stone_floor_textures_stone_floor_seed_2;
layout(set = 11, binding = 8) uniform texture2D stone_floor_textures_stone_floor_roughness_2;
layout(set = 11, binding = 11) uniform texture2D stone_floor_textures_stone_floor_height_3;
layout(set = 11, binding = 10) uniform texture2D stone_floor_textures_stone_floor_normal_3;
layout(set = 11, binding = 9) uniform texture2D stone_floor_textures_stone_floor_seed_3;
layout(set = 11, binding = 12) uniform texture2D stone_floor_textures_stone_floor_roughness_3;
layout(set = 10, binding = 2) uniform texture2D wooden_floor_textures_wooden_floor_height;
layout(set = 10, binding = 1) uniform texture2D wooden_floor_textures_wooden_floor_normal;
layout(set = 10, binding = 3) uniform texture2D wooden_floor_textures_wooden_floor_seed;
layout(set = 9, binding = 1) uniform texture2DArray halftimber_colors_tex;
layout(set = 10, binding = 4) uniform texture2D wooden_floor_textures_wooden_floor_roughness;
layout(set = 10, binding = 6) uniform texture2D wooden_floor_textures_wooden_floor_height_2;
layout(set = 10, binding = 5) uniform texture2D wooden_floor_textures_wooden_floor_normal_2;
layout(set = 10, binding = 7) uniform texture2D wooden_floor_textures_wooden_floor_seed_2;
layout(set = 10, binding = 8) uniform texture2D wooden_floor_textures_wooden_floor_roughness_2;
layout(set = 10, binding = 10) uniform texture2D wooden_floor_textures_wooden_floor_height_3;
layout(set = 10, binding = 9) uniform texture2D wooden_floor_textures_wooden_floor_normal_3;
layout(set = 10, binding = 11) uniform texture2D wooden_floor_textures_wooden_floor_seed_3;
layout(set = 10, binding = 12) uniform texture2D wooden_floor_textures_wooden_floor_roughness_3;
layout(set = 0, binding = 1) uniform texture2D material_data_dirtpath_heightmap;

layout(location = 3) flat in uint vs_out_instance_index;
layout(location = 1) in vec3 vs_out_pos_ws;
layout(location = 5) flat in uint vs_out_material_id;
layout(location = 6) flat in uint vs_out_override_color_id;
layout(location = 2) in vec2 vs_out_uv;
layout(location = 0) in vec3 vs_out_normal_ws;
layout(location = 7) flat in uint vs_out_pattern_id;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    bool _18404;
    if (1u == frame_constants.roof_highlight_mode)
    {
        _18404 = material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id == frame_constants.roof_highlighted_slot_id;
    }
    else
    {
        _18404 = false;
    }
    bool _18594;
    if (2u == frame_constants.roof_highlight_mode)
    {
        _18594 = material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id == frame_constants.roof_highlighted_slot_id;
    }
    else
    {
        _18594 = false;
    }
    vec2 _7144;
    int _302 = int(material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id);
    bool _16773;
    do
    {
        _7144 = vs_out_pos_ws.xz;
        vec2 _7256 = (_7144 + vec2(65.0)) * vec2(0.1153846085071563720703125);
        int _7265 = int(floor(_7256.x)) + (15 * int(floor(_7256.y)));
        uint _7148 = min(128u, data_count_1._member0[_7265]);
        uint _7243;
        bool _16766;
        bool _16774;
        uint _16756 = 0u;
        for (;;)
        {
            if (!(_16756 < _7148))
            {
                _16774 = _16778;
                _16766 = false;
                break;
            }
            int _7161 = int(uint(_7265 * 50) + _16756);
            if (_302 == data_holes_1._member0[_7161].wall_slot_id)
            {
                vec3 _7192 = vec3(data_holes_1._member0[_7161].normal.x, 0.0, data_holes_1._member0[_7161].normal.y);
                mat3 _7202 = transpose(mat3(cross(_7192, vec3(0.0, 1.0, 0.0)), vec3(0.0, 1.0, 0.0), _7192));
                vec3 _7279 = vec3(1.0, 0.0, 0.0) * _7202;
                vec3 _7280 = vec3(0.0, 1.0, 0.0) * _7202;
                vec3 _7281 = vec3(0.0, 0.0, 1.0) * _7202;
                vec3 _7284 = cross(_7279, _7280);
                vec3 _7287 = vec3(1.0 / dot(_7281, _7284));
                vec3 _7206 = (mat3(cross(_7280, _7281) * _7287, cross(_7281, _7279) * _7287, _7284 * _7287) * (vs_out_pos_ws - data_holes_1._member0[_7161].position)) / data_holes_1._member0[_7161].size;
                float _7207 = _7206.y;
                float _7210 = clamp((_7207 * data_holes_1._member0[_7161].k) + data_holes_1._member0[_7161].a, 0.0, 1.0);
                bool _16758;
                if (abs(_7206.x) < mix(0.5, 0.0, (_7210 * _7210) * _7210))
                {
                    bool _16759;
                    if (_7207 < ((data_holes_1._member0[_7161].k == 1.0) ? 0.5 : 0.699999988079071044921875))
                    {
                        _16759 = _7207 > (-0.5);
                    }
                    else
                    {
                        _16759 = false;
                    }
                    _16758 = _16759;
                }
                else
                {
                    _16758 = false;
                }
                bool _16760;
                if (_16758)
                {
                    _16760 = abs(_7206.z) < 0.5;
                }
                else
                {
                    _16760 = false;
                }
                if (_16760)
                {
                    _16774 = true;
                    _16766 = true;
                    break;
                }
            }
            _7243 = _16756 + 1u;
            _16756 = _7243;
            continue;
        }
        if (_16766)
        {
            _16773 = _16774;
            break;
        }
        _16773 = false;
        break;
    } while(false);
    if (_16773)
    {
        demote;
    }
    int _550 = int(vs_out_material_id);
    bool _16784;
    if (_550 == 0)
    {
        _16784 = true;
    }
    else
    {
        _16784 = _550 == 2;
    }
    vec3 _18776;
    float _18796;
    float _18812;
    bool _18820;
    float _20357;
    vec3 _20376;
    if (_16784)
    {
        bool _17470;
        if (_550 == 2)
        {
            _17470 = true;
        }
        else
        {
            _17470 = _550 == 3;
        }
        int _17471;
        if (_17470)
        {
            _17471 = int(vs_out_override_color_id);
        }
        else
        {
            _17471 = int(wall_color_data_wall_color_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id]);
        }
        vec2 _661 = vs_out_uv * 0.20000000298023223876953125;
        float _18380;
        float _18382;
        float _18384;
        vec3 _18386;
        vec3 _18388;
        float _18804;
        if (vs_out_pattern_id == 0u)
        {
            vec3 _13163;
            uvec2 _12625 = uvec2(gl_FragCoord.yx);
            float _12878 = 5.588237762451171875 * float(frame_counter.index % 64u);
            float _12888 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_12625.x) + _12878)) + (0.005837149918079376220703125 * (float(_12625.y) + _12878))));
            vec2 _12639 = textureQueryLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _661);
            float _12643 = _12639.x + current_view.mip_bias;
            vec3 _13011 = dFdx(vs_out_pos_ws);
            vec3 _13018 = dFdy(vs_out_pos_ws);
            vec2 _13021 = dFdx(_661);
            vec2 _13028 = dFdy(_661);
            vec2 _13025 = _13028 * (-1.0);
            vec3 _12989 = cross(vs_out_normal_ws, _13018 * (-1.0));
            vec3 _12990 = cross(_13011, vs_out_normal_ws);
            float _12991 = _13021.x;
            float _12992 = _13025.y;
            float _12994 = _13021.y;
            float _12995 = _13025.x;
            float _12998 = 1.0 / ((_12991 * _12992) - (_12994 * _12995));
            mat3 _13008 = transpose(mat3(((_12989 * _12991) + (_12990 * _12995)) * _12998, ((_12989 * _12994) + (_12990 * _12992)) * _12998, vs_out_normal_ws));
            vec4 _13033 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
            vec3 _13040 = vec3(1.0, 0.0, 0.0) * _13008;
            vec3 _13041 = vec3(0.0, 1.0, 0.0) * _13008;
            vec3 _13042 = vec3(0.0, 0.0, 1.0) * _13008;
            vec3 _13045 = cross(_13040, _13041);
            vec3 _13048 = vec3(1.0 / dot(_13042, _13045));
            mat3 _13052 = mat3(cross(_13041, _13042) * _13048, cross(_13042, _13040) * _13048, _13045 * _13048);
            vec3 _12912 = (vs_out_pos_ws - (_13033.xyz / vec3(_13033.w))) * _13052;
            float _13067 = _12912.z;
            vec3 _13072 = vec3(_661, 0.0);
            float _18172;
            do
            {
                _13163 = (_13072 + (_12912 * ((-0.07500000298023223876953125) / _13067))) - _13072;
                float _13192 = mix(0.0, 1.0, pow(_12888 * 0.5, 2.0));
                vec3 _13195 = _13072 + (_13163 * vec3(_13192));
                float _13341 = _13195.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _13195.xy, _12643).x - 1.0) * 0.07500000298023223876953125);
                bool _20903 = (_13341 < 0.0) ? true : false;
                float _18110;
                bool _18115;
                float _18137;
                float _18147;
                float _18157;
                if (_20903)
                {
                    _18157 = _13341;
                    _18147 = 0.0;
                    _18137 = _13192;
                    _18115 = _20903;
                    _18110 = 0.0;
                }
                else
                {
                    float _18112;
                    float _18149;
                    _18149 = _13341;
                    _18112 = _13192;
                    float _13221;
                    uint _13239;
                    float _13386;
                    bool _20904;
                    bool _18116;
                    float _18138;
                    float _18158;
                    uint _18102 = 1u;
                    bool _18117 = _20903;
                    for (;;)
                    {
                        if (!(_18102 < 3u))
                        {
                            _18158 = 0.0;
                            _18138 = 1.0;
                            _18116 = _18117;
                            break;
                        }
                        _13221 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_18102) + _12888) * 0.5, 2.0)));
                        vec3 _13224 = _13072 + (_13163 * vec3(_13221));
                        _13386 = _13224.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _13224.xy, _12643).x - 1.0) * 0.07500000298023223876953125);
                        _20904 = (_13386 < 0.0) ? true : false;
                        if (_20904)
                        {
                            _18158 = _13386;
                            _18138 = _13221;
                            _18116 = _20904;
                            break;
                        }
                        _13239 = _18102 + 1u;
                        _18102 = _13239;
                        _18149 = _13386;
                        _18117 = _20904;
                        _18112 = _13221;
                        continue;
                    }
                    _18157 = _18158;
                    _18147 = _18149;
                    _18137 = _18138;
                    _18115 = _18116;
                    _18110 = _18112;
                }
                if (_18115)
                {
                    float _18135;
                    float _18145;
                    float _18155;
                    float _18159;
                    _18159 = _18110;
                    _18155 = _18157;
                    _18145 = _18147;
                    _18135 = _18137;
                    uint _13285;
                    float _20906;
                    float _20907;
                    float _20908;
                    float _20909;
                    uint _18126 = 0u;
                    for (;;)
                    {
                        if (!(_18126 < 4u))
                        {
                            break;
                        }
                        float _13265 = (_18159 + _18135) * 0.5;
                        vec3 _13268 = _13072 + (_13163 * vec3(_13265));
                        float _13431 = _13268.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _13268.xy, _12643).x - 1.0) * 0.07500000298023223876953125);
                        bool _20905 = (_13431 < 0.0) ? true : false;
                        _20906 = _20905 ? _13431 : _18155;
                        _20907 = _20905 ? _18145 : _13431;
                        _20908 = _20905 ? _13265 : _18135;
                        _20909 = _20905 ? _18159 : _13265;
                        _13285 = _18126 + 1u;
                        _18159 = _20909;
                        _18155 = _20906;
                        _18145 = _20907;
                        _18135 = _20908;
                        _18126 = _13285;
                        continue;
                    }
                    float _13305 = mix(_18159, _18135, _18145 / (_18145 + (-_18155)));
                    vec3 _13308 = _13072 + (_13163 * vec3(_13305));
                    _18172 = ((abs(_13308.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _13308.xy, _12643).x - 1.0) * 0.07500000298023223876953125)) < (_18145 * 0.89999997615814208984375)) ? true : false) ? _13305 : _18135;
                    break;
                }
                else
                {
                    _18172 = _18110;
                    break;
                }
                break; // unreachable workaround
            } while(false);
            vec3 _20913 = mix(_13163 * _18172, vec3(0.0), bvec3(_13067 > (-1.1754943508222875079687365372222e-38)));
            vec2 _12926 = _661 + _20913.xy;
            vec4 _13524 = (vec4(vs_out_pos_ws + (_20913 * _13008), 1.0) * current_view.world_to_view) * current_view.view_to_clip;
            vec3 _13617 = (textureLod(sampler2D(stone_floor_textures_stone_floor_normal, samplers_llr), _12926, _12643).xyz * 2.0) - vec3(1.0);
            _13617.z = _13617.z * 0.13333332538604736328125;
            vec4 _12662 = texture(sampler2D(stone_floor_textures_stone_floor_seed, samplers_llr), _12926, current_view.mip_bias);
            float _12666 = _12662.z;
            float _12667 = _12662.x;
            int _12676 = int(trunc((_12667 * 32.0) - 0.5) + trunc((_12662.y * 32.0) - 0.5));
            uint _12678 = uint(_12676 ^ 7993234);
            uint _13634 = _12678 + (_12678 << 10u);
            uint _13636 = _13634 ^ (_13634 >> 6u);
            uint _13638 = _13636 + (_13636 << 3u);
            uint _13640 = _13638 ^ (_13638 >> 11u);
            uint _12682 = uint(_12676 ^ 9730541);
            uint _13656 = _12682 + (_12682 << 10u);
            uint _13658 = _13656 ^ (_13656 >> 6u);
            uint _13660 = _13658 + (_13658 << 3u);
            uint _13662 = _13660 ^ (_13660 >> 11u);
            float _13670 = uintBitsToFloat(((_13662 + (_13662 << 15u)) & 8388607u) | 1065353216u) - 1.0;
            vec4 _12711 = texture(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _12926, current_view.mip_bias);
            vec4 _12719 = texture(sampler2D(stone_floor_textures_stone_floor_roughness, samplers_llr), _12926, current_view.mip_bias);
            float _12720 = _12719.x;
            vec2 _12727 = (((_7144 * 0.100000001490116119384765625) + vec2((uintBitsToFloat(((_13640 + (_13640 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 0.300000011920928955078125, _13670 * 0.300000011920928955078125)) + vec2(0.5 * _12666)) + vec2(_12720 * 0.100000001490116119384765625);
            bool _18298;
            if (_17471 == 0)
            {
                _18298 = true;
            }
            else
            {
                _18298 = _17471 == 4;
            }
            bool _18299;
            if (_18298)
            {
                _18299 = true;
            }
            else
            {
                _18299 = _17471 == 10;
            }
            bool _18300;
            if (_18299)
            {
                _18300 = true;
            }
            else
            {
                _18300 = _17471 == 12;
            }
            vec3 _18315;
            if (_18300)
            {
                _18315 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_12727, 0.0)).xyz * 0.89999997615814208984375;
            }
            else
            {
                bool _18301;
                if (_17471 == 1)
                {
                    _18301 = true;
                }
                else
                {
                    _18301 = _17471 == 5;
                }
                vec3 _18316;
                if (_18301)
                {
                    _18316 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_12727, 1.0)).xyz;
                }
                else
                {
                    bool _18302;
                    if (_17471 == 2)
                    {
                        _18302 = true;
                    }
                    else
                    {
                        _18302 = _17471 == 7;
                    }
                    vec3 _18317;
                    if (_18302)
                    {
                        _18317 = (texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_12727, 2.0)).xyz * 1.2999999523162841796875) * mix(1.0, 1.2999999523162841796875, _12666);
                    }
                    else
                    {
                        bool _18303;
                        if (_17471 == 3)
                        {
                            _18303 = true;
                        }
                        else
                        {
                            _18303 = _17471 == 6;
                        }
                        bool _18304;
                        if (_18303)
                        {
                            _18304 = true;
                        }
                        else
                        {
                            _18304 = _17471 == 8;
                        }
                        bool _18305;
                        if (_18304)
                        {
                            _18305 = true;
                        }
                        else
                        {
                            _18305 = _17471 == 9;
                        }
                        vec3 _18318;
                        if (_18305)
                        {
                            _18318 = (texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_12727, 3.0)).xyz * 0.89999997615814208984375) * mix(1.0, 1.10000002384185791015625, _12666);
                        }
                        else
                        {
                            vec3 _18319;
                            if (_17471 == 11)
                            {
                                _18319 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_12727, 4.0)).xyz * mix(1.0, 1.39999997615814208984375, _12666);
                            }
                            else
                            {
                                _18319 = vec3(0.0);
                            }
                            _18318 = _18319;
                        }
                        _18317 = _18318;
                    }
                    _18316 = _18317;
                }
                _18315 = _18316;
            }
            _18804 = smoothstep(0.20000000298023223876953125, 0.75, 1.0 - _12711.x);
            _18388 = (_18315 * 0.800000011920928955078125) * mix(0.699999988079071044921875, 1.0, texture(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _12926, current_view.mip_bias).x);
            _18386 = normalize(_13052 * _13617);
            _18384 = mix(0.75, 1.0, _12720) * mix(0.800000011920928955078125, 1.0, _13670);
            _18382 = (_13524.xyz / vec3(_13524.w)).z;
            _18380 = mix(0.0, 0.96875, _12667);
        }
        else
        {
            float _18381;
            float _18383;
            float _18385;
            vec3 _18387;
            vec3 _18389;
            float _18805;
            if (vs_out_pattern_id == 1u)
            {
                vec3 _12064;
                uvec2 _11526 = uvec2(gl_FragCoord.yx);
                float _11779 = 5.588237762451171875 * float(frame_counter.index % 64u);
                float _11789 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_11526.x) + _11779)) + (0.005837149918079376220703125 * (float(_11526.y) + _11779))));
                vec2 _11540 = textureQueryLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _661);
                float _11544 = _11540.x + current_view.mip_bias;
                vec3 _11912 = dFdx(vs_out_pos_ws);
                vec3 _11919 = dFdy(vs_out_pos_ws);
                vec2 _11922 = dFdx(_661);
                vec2 _11929 = dFdy(_661);
                vec2 _11926 = _11929 * (-1.0);
                vec3 _11890 = cross(vs_out_normal_ws, _11919 * (-1.0));
                vec3 _11891 = cross(_11912, vs_out_normal_ws);
                float _11892 = _11922.x;
                float _11893 = _11926.y;
                float _11895 = _11922.y;
                float _11896 = _11926.x;
                float _11899 = 1.0 / ((_11892 * _11893) - (_11895 * _11896));
                mat3 _11909 = transpose(mat3(((_11890 * _11892) + (_11891 * _11896)) * _11899, ((_11890 * _11895) + (_11891 * _11893)) * _11899, vs_out_normal_ws));
                vec4 _11934 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
                vec3 _11941 = vec3(1.0, 0.0, 0.0) * _11909;
                vec3 _11942 = vec3(0.0, 1.0, 0.0) * _11909;
                vec3 _11943 = vec3(0.0, 0.0, 1.0) * _11909;
                vec3 _11946 = cross(_11941, _11942);
                vec3 _11949 = vec3(1.0 / dot(_11943, _11946));
                mat3 _11953 = mat3(cross(_11942, _11943) * _11949, cross(_11943, _11941) * _11949, _11946 * _11949);
                vec3 _11813 = (vs_out_pos_ws - (_11934.xyz / vec3(_11934.w))) * _11953;
                float _11968 = _11813.z;
                vec3 _11973 = vec3(_661, 0.0);
                float _17867;
                do
                {
                    _12064 = (_11973 + (_11813 * ((-0.0500000007450580596923828125) / _11968))) - _11973;
                    float _12093 = mix(0.0, 1.0, pow(_11789 * 0.5, 2.0));
                    vec3 _12096 = _11973 + (_12064 * vec3(_12093));
                    float _12242 = _12096.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _12096.xy, _11544).x - 1.0) * 0.0500000007450580596923828125);
                    bool _20892 = (_12242 < 0.0) ? true : false;
                    float _17805;
                    bool _17810;
                    float _17832;
                    float _17842;
                    float _17852;
                    if (_20892)
                    {
                        _17852 = _12242;
                        _17842 = 0.0;
                        _17832 = _12093;
                        _17810 = _20892;
                        _17805 = 0.0;
                    }
                    else
                    {
                        float _17807;
                        float _17844;
                        _17844 = _12242;
                        _17807 = _12093;
                        float _12122;
                        uint _12140;
                        float _12287;
                        bool _20893;
                        bool _17811;
                        float _17833;
                        float _17853;
                        uint _17797 = 1u;
                        bool _17812 = _20892;
                        for (;;)
                        {
                            if (!(_17797 < 3u))
                            {
                                _17853 = 0.0;
                                _17833 = 1.0;
                                _17811 = _17812;
                                break;
                            }
                            _12122 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_17797) + _11789) * 0.5, 2.0)));
                            vec3 _12125 = _11973 + (_12064 * vec3(_12122));
                            _12287 = _12125.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _12125.xy, _11544).x - 1.0) * 0.0500000007450580596923828125);
                            _20893 = (_12287 < 0.0) ? true : false;
                            if (_20893)
                            {
                                _17853 = _12287;
                                _17833 = _12122;
                                _17811 = _20893;
                                break;
                            }
                            _12140 = _17797 + 1u;
                            _17797 = _12140;
                            _17844 = _12287;
                            _17812 = _20893;
                            _17807 = _12122;
                            continue;
                        }
                        _17852 = _17853;
                        _17842 = _17844;
                        _17832 = _17833;
                        _17810 = _17811;
                        _17805 = _17807;
                    }
                    if (_17810)
                    {
                        float _17830;
                        float _17840;
                        float _17850;
                        float _17854;
                        _17854 = _17805;
                        _17850 = _17852;
                        _17840 = _17842;
                        _17830 = _17832;
                        uint _12186;
                        float _20895;
                        float _20896;
                        float _20897;
                        float _20898;
                        uint _17821 = 0u;
                        for (;;)
                        {
                            if (!(_17821 < 4u))
                            {
                                break;
                            }
                            float _12166 = (_17854 + _17830) * 0.5;
                            vec3 _12169 = _11973 + (_12064 * vec3(_12166));
                            float _12332 = _12169.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _12169.xy, _11544).x - 1.0) * 0.0500000007450580596923828125);
                            bool _20894 = (_12332 < 0.0) ? true : false;
                            _20895 = _20894 ? _12332 : _17850;
                            _20896 = _20894 ? _17840 : _12332;
                            _20897 = _20894 ? _12166 : _17830;
                            _20898 = _20894 ? _17854 : _12166;
                            _12186 = _17821 + 1u;
                            _17854 = _20898;
                            _17850 = _20895;
                            _17840 = _20896;
                            _17830 = _20897;
                            _17821 = _12186;
                            continue;
                        }
                        float _12206 = mix(_17854, _17830, _17840 / (_17840 + (-_17850)));
                        vec3 _12209 = _11973 + (_12064 * vec3(_12206));
                        _17867 = ((abs(_12209.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _12209.xy, _11544).x - 1.0) * 0.0500000007450580596923828125)) < (_17840 * 0.89999997615814208984375)) ? true : false) ? _12206 : _17830;
                        break;
                    }
                    else
                    {
                        _17867 = _17805;
                        break;
                    }
                    break; // unreachable workaround
                } while(false);
                vec3 _20902 = mix(_12064 * _17867, vec3(0.0), bvec3(_11968 > (-1.1754943508222875079687365372222e-38)));
                vec2 _11827 = _661 + _20902.xy;
                vec4 _12425 = (vec4(vs_out_pos_ws + (_20902 * _11909), 1.0) * current_view.world_to_view) * current_view.view_to_clip;
                vec3 _12518 = (textureLod(sampler2D(stone_floor_textures_stone_floor_normal_2, samplers_llr), _11827, _11544).xyz * 2.0) - vec3(1.0);
                _12518.z = _12518.z * 0.199999988079071044921875;
                vec4 _11563 = texture(sampler2D(stone_floor_textures_stone_floor_seed_2, samplers_llr), _11827, current_view.mip_bias);
                float _11567 = _11563.z;
                float _11568 = _11563.x;
                int _11577 = int(trunc((_11568 * 32.0) - 0.5) + trunc((_11563.y * 32.0) - 0.5));
                uint _11579 = uint(_11577 ^ 7993234);
                uint _12535 = _11579 + (_11579 << 10u);
                uint _12537 = _12535 ^ (_12535 >> 6u);
                uint _12539 = _12537 + (_12537 << 3u);
                uint _12541 = _12539 ^ (_12539 >> 11u);
                uint _11583 = uint(_11577 ^ 9730541);
                uint _12557 = _11583 + (_11583 << 10u);
                uint _12559 = _12557 ^ (_12557 >> 6u);
                uint _12561 = _12559 + (_12559 << 3u);
                uint _12563 = _12561 ^ (_12561 >> 11u);
                float _12571 = uintBitsToFloat(((_12563 + (_12563 << 15u)) & 8388607u) | 1065353216u) - 1.0;
                vec4 _11612 = texture(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _11827, current_view.mip_bias);
                vec4 _11620 = texture(sampler2D(stone_floor_textures_stone_floor_roughness_2, samplers_llr), _11827, current_view.mip_bias);
                float _11621 = _11620.x;
                vec2 _11628 = (((_7144 * 0.100000001490116119384765625) + vec2((uintBitsToFloat(((_12541 + (_12541 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 0.300000011920928955078125, _12571 * 0.300000011920928955078125)) + vec2(0.5 * _11567)) + vec2(_11621 * 0.100000001490116119384765625);
                bool _17993;
                if (_17471 == 0)
                {
                    _17993 = true;
                }
                else
                {
                    _17993 = _17471 == 4;
                }
                bool _17994;
                if (_17993)
                {
                    _17994 = true;
                }
                else
                {
                    _17994 = _17471 == 10;
                }
                bool _17995;
                if (_17994)
                {
                    _17995 = true;
                }
                else
                {
                    _17995 = _17471 == 12;
                }
                vec3 _18010;
                if (_17995)
                {
                    _18010 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_11628, 0.0)).xyz * 0.89999997615814208984375;
                }
                else
                {
                    bool _17996;
                    if (_17471 == 1)
                    {
                        _17996 = true;
                    }
                    else
                    {
                        _17996 = _17471 == 5;
                    }
                    vec3 _18011;
                    if (_17996)
                    {
                        _18011 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_11628, 1.0)).xyz;
                    }
                    else
                    {
                        bool _17997;
                        if (_17471 == 2)
                        {
                            _17997 = true;
                        }
                        else
                        {
                            _17997 = _17471 == 7;
                        }
                        vec3 _18012;
                        if (_17997)
                        {
                            _18012 = (texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_11628, 2.0)).xyz * 1.2999999523162841796875) * mix(1.0, 1.2999999523162841796875, _11567);
                        }
                        else
                        {
                            bool _17998;
                            if (_17471 == 3)
                            {
                                _17998 = true;
                            }
                            else
                            {
                                _17998 = _17471 == 6;
                            }
                            bool _17999;
                            if (_17998)
                            {
                                _17999 = true;
                            }
                            else
                            {
                                _17999 = _17471 == 8;
                            }
                            bool _18000;
                            if (_17999)
                            {
                                _18000 = true;
                            }
                            else
                            {
                                _18000 = _17471 == 9;
                            }
                            vec3 _18013;
                            if (_18000)
                            {
                                _18013 = (texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_11628, 3.0)).xyz * 0.89999997615814208984375) * mix(1.0, 1.10000002384185791015625, _11567);
                            }
                            else
                            {
                                vec3 _18014;
                                if (_17471 == 11)
                                {
                                    _18014 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_11628, 4.0)).xyz * mix(1.0, 1.39999997615814208984375, _11567);
                                }
                                else
                                {
                                    _18014 = vec3(0.0);
                                }
                                _18013 = _18014;
                            }
                            _18012 = _18013;
                        }
                        _18011 = _18012;
                    }
                    _18010 = _18011;
                }
                _18805 = smoothstep(0.300000011920928955078125, 0.5, 1.0 - _11612.x);
                _18389 = (_18010 * 0.800000011920928955078125) * mix(0.699999988079071044921875, 1.0, texture(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _11827, current_view.mip_bias).x);
                _18387 = normalize(_11953 * _12518);
                _18385 = mix(0.75, 1.0, _11621) * mix(0.800000011920928955078125, 1.0, _12571);
                _18383 = (_12425.xyz / vec3(_12425.w)).z;
                _18381 = mix(0.0, 0.96875, _11568);
            }
            else
            {
                vec3 _10965;
                uvec2 _10427 = uvec2(gl_FragCoord.yx);
                float _10680 = 5.588237762451171875 * float(frame_counter.index % 64u);
                float _10690 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_10427.x) + _10680)) + (0.005837149918079376220703125 * (float(_10427.y) + _10680))));
                vec2 _10441 = textureQueryLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _661);
                float _10445 = _10441.x + current_view.mip_bias;
                vec3 _10813 = dFdx(vs_out_pos_ws);
                vec3 _10820 = dFdy(vs_out_pos_ws);
                vec2 _10823 = dFdx(_661);
                vec2 _10830 = dFdy(_661);
                vec2 _10827 = _10830 * (-1.0);
                vec3 _10791 = cross(vs_out_normal_ws, _10820 * (-1.0));
                vec3 _10792 = cross(_10813, vs_out_normal_ws);
                float _10793 = _10823.x;
                float _10794 = _10827.y;
                float _10796 = _10823.y;
                float _10797 = _10827.x;
                float _10800 = 1.0 / ((_10793 * _10794) - (_10796 * _10797));
                mat3 _10810 = transpose(mat3(((_10791 * _10793) + (_10792 * _10797)) * _10800, ((_10791 * _10796) + (_10792 * _10794)) * _10800, vs_out_normal_ws));
                vec4 _10835 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
                vec3 _10842 = vec3(1.0, 0.0, 0.0) * _10810;
                vec3 _10843 = vec3(0.0, 1.0, 0.0) * _10810;
                vec3 _10844 = vec3(0.0, 0.0, 1.0) * _10810;
                vec3 _10847 = cross(_10842, _10843);
                vec3 _10850 = vec3(1.0 / dot(_10844, _10847));
                mat3 _10854 = mat3(cross(_10843, _10844) * _10850, cross(_10844, _10842) * _10850, _10847 * _10850);
                vec3 _10714 = (vs_out_pos_ws - (_10835.xyz / vec3(_10835.w))) * _10854;
                float _10869 = _10714.z;
                vec3 _10874 = vec3(_661, 0.0);
                float _17562;
                do
                {
                    _10965 = (_10874 + (_10714 * ((-0.0500000007450580596923828125) / _10869))) - _10874;
                    float _10994 = mix(0.0, 1.0, pow(_10690 * 0.5, 2.0));
                    vec3 _10997 = _10874 + (_10965 * vec3(_10994));
                    float _11143 = _10997.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _10997.xy, _10445).x - 1.0) * 0.0500000007450580596923828125);
                    bool _20881 = (_11143 < 0.0) ? true : false;
                    float _17500;
                    bool _17505;
                    float _17527;
                    float _17537;
                    float _17547;
                    if (_20881)
                    {
                        _17547 = _11143;
                        _17537 = 0.0;
                        _17527 = _10994;
                        _17505 = _20881;
                        _17500 = 0.0;
                    }
                    else
                    {
                        float _17502;
                        float _17539;
                        _17539 = _11143;
                        _17502 = _10994;
                        float _11023;
                        uint _11041;
                        float _11188;
                        bool _20882;
                        bool _17506;
                        float _17528;
                        float _17548;
                        uint _17492 = 1u;
                        bool _17507 = _20881;
                        for (;;)
                        {
                            if (!(_17492 < 3u))
                            {
                                _17548 = 0.0;
                                _17528 = 1.0;
                                _17506 = _17507;
                                break;
                            }
                            _11023 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_17492) + _10690) * 0.5, 2.0)));
                            vec3 _11026 = _10874 + (_10965 * vec3(_11023));
                            _11188 = _11026.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _11026.xy, _10445).x - 1.0) * 0.0500000007450580596923828125);
                            _20882 = (_11188 < 0.0) ? true : false;
                            if (_20882)
                            {
                                _17548 = _11188;
                                _17528 = _11023;
                                _17506 = _20882;
                                break;
                            }
                            _11041 = _17492 + 1u;
                            _17492 = _11041;
                            _17539 = _11188;
                            _17507 = _20882;
                            _17502 = _11023;
                            continue;
                        }
                        _17547 = _17548;
                        _17537 = _17539;
                        _17527 = _17528;
                        _17505 = _17506;
                        _17500 = _17502;
                    }
                    if (_17505)
                    {
                        float _17525;
                        float _17535;
                        float _17545;
                        float _17549;
                        _17549 = _17500;
                        _17545 = _17547;
                        _17535 = _17537;
                        _17525 = _17527;
                        uint _11087;
                        float _20884;
                        float _20885;
                        float _20886;
                        float _20887;
                        uint _17516 = 0u;
                        for (;;)
                        {
                            if (!(_17516 < 4u))
                            {
                                break;
                            }
                            float _11067 = (_17549 + _17525) * 0.5;
                            vec3 _11070 = _10874 + (_10965 * vec3(_11067));
                            float _11233 = _11070.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _11070.xy, _10445).x - 1.0) * 0.0500000007450580596923828125);
                            bool _20883 = (_11233 < 0.0) ? true : false;
                            _20884 = _20883 ? _11233 : _17545;
                            _20885 = _20883 ? _17535 : _11233;
                            _20886 = _20883 ? _11067 : _17525;
                            _20887 = _20883 ? _17549 : _11067;
                            _11087 = _17516 + 1u;
                            _17549 = _20887;
                            _17545 = _20884;
                            _17535 = _20885;
                            _17525 = _20886;
                            _17516 = _11087;
                            continue;
                        }
                        float _11107 = mix(_17549, _17525, _17535 / (_17535 + (-_17545)));
                        vec3 _11110 = _10874 + (_10965 * vec3(_11107));
                        _17562 = ((abs(_11110.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _11110.xy, _10445).x - 1.0) * 0.0500000007450580596923828125)) < (_17535 * 0.89999997615814208984375)) ? true : false) ? _11107 : _17525;
                        break;
                    }
                    else
                    {
                        _17562 = _17500;
                        break;
                    }
                    break; // unreachable workaround
                } while(false);
                vec3 _20891 = mix(_10965 * _17562, vec3(0.0), bvec3(_10869 > (-1.1754943508222875079687365372222e-38)));
                vec2 _10728 = _661 + _20891.xy;
                vec4 _11326 = (vec4(vs_out_pos_ws + (_20891 * _10810), 1.0) * current_view.world_to_view) * current_view.view_to_clip;
                vec3 _11419 = (textureLod(sampler2D(stone_floor_textures_stone_floor_normal_3, samplers_llr), _10728, _10445).xyz * 2.0) - vec3(1.0);
                _11419.z = _11419.z * 0.199999988079071044921875;
                vec4 _10464 = texture(sampler2D(stone_floor_textures_stone_floor_seed_3, samplers_llr), _10728, current_view.mip_bias);
                float _10468 = _10464.z;
                float _10469 = _10464.x;
                int _10478 = int(trunc((_10469 * 32.0) - 0.5) + trunc((_10464.y * 32.0) - 0.5));
                uint _10480 = uint(_10478 ^ 7993234);
                uint _11436 = _10480 + (_10480 << 10u);
                uint _11438 = _11436 ^ (_11436 >> 6u);
                uint _11440 = _11438 + (_11438 << 3u);
                uint _11442 = _11440 ^ (_11440 >> 11u);
                uint _10484 = uint(_10478 ^ 9730541);
                uint _11458 = _10484 + (_10484 << 10u);
                uint _11460 = _11458 ^ (_11458 >> 6u);
                uint _11462 = _11460 + (_11460 << 3u);
                uint _11464 = _11462 ^ (_11462 >> 11u);
                float _11472 = uintBitsToFloat(((_11464 + (_11464 << 15u)) & 8388607u) | 1065353216u) - 1.0;
                vec2 _10505 = ((_7144 * 0.100000001490116119384765625) + vec2((uintBitsToFloat(((_11442 + (_11442 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 0.300000011920928955078125, _11472 * 0.300000011920928955078125)) + vec2(0.5 * _10468);
                vec4 _10513 = texture(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _10728, current_view.mip_bias);
                vec4 _10521 = texture(sampler2D(stone_floor_textures_stone_floor_roughness_3, samplers_llr), _10728, current_view.mip_bias);
                bool _17688;
                if (_17471 == 0)
                {
                    _17688 = true;
                }
                else
                {
                    _17688 = _17471 == 4;
                }
                bool _17689;
                if (_17688)
                {
                    _17689 = true;
                }
                else
                {
                    _17689 = _17471 == 10;
                }
                bool _17690;
                if (_17689)
                {
                    _17690 = true;
                }
                else
                {
                    _17690 = _17471 == 12;
                }
                vec3 _17705;
                if (_17690)
                {
                    _17705 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_10505, 0.0)).xyz * 0.89999997615814208984375;
                }
                else
                {
                    bool _17691;
                    if (_17471 == 1)
                    {
                        _17691 = true;
                    }
                    else
                    {
                        _17691 = _17471 == 5;
                    }
                    vec3 _17706;
                    if (_17691)
                    {
                        _17706 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_10505, 1.0)).xyz;
                    }
                    else
                    {
                        bool _17692;
                        if (_17471 == 2)
                        {
                            _17692 = true;
                        }
                        else
                        {
                            _17692 = _17471 == 7;
                        }
                        vec3 _17707;
                        if (_17692)
                        {
                            _17707 = (texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_10505, 2.0)).xyz * 1.2999999523162841796875) * mix(1.0, 1.2999999523162841796875, _10468);
                        }
                        else
                        {
                            bool _17693;
                            if (_17471 == 3)
                            {
                                _17693 = true;
                            }
                            else
                            {
                                _17693 = _17471 == 6;
                            }
                            bool _17694;
                            if (_17693)
                            {
                                _17694 = true;
                            }
                            else
                            {
                                _17694 = _17471 == 8;
                            }
                            bool _17695;
                            if (_17694)
                            {
                                _17695 = true;
                            }
                            else
                            {
                                _17695 = _17471 == 9;
                            }
                            vec3 _17708;
                            if (_17695)
                            {
                                _17708 = (texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_10505, 3.0)).xyz * 0.89999997615814208984375) * mix(1.0, 1.10000002384185791015625, _10468);
                            }
                            else
                            {
                                vec3 _17709;
                                if (_17471 == 11)
                                {
                                    _17709 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_10505, 4.0)).xyz * mix(1.0, 1.39999997615814208984375, _10468);
                                }
                                else
                                {
                                    _17709 = vec3(0.0);
                                }
                                _17708 = _17709;
                            }
                            _17707 = _17708;
                        }
                        _17706 = _17707;
                    }
                    _17705 = _17706;
                }
                _18805 = smoothstep(0.300000011920928955078125, 1.0, 1.0 - _10513.x);
                _18389 = (_17705 * 0.800000011920928955078125) * mix(0.699999988079071044921875, 1.0, texture(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _10728, current_view.mip_bias).x);
                _18387 = normalize(_10854 * _11419);
                _18385 = mix(0.75, 1.0, _10521.x) * mix(0.800000011920928955078125, 1.0, _11472);
                _18383 = (_11326.xyz / vec3(_11326.w)).z;
                _18381 = mix(0.0, 0.96875, _10469);
            }
            _18804 = _18805;
            _18388 = _18389;
            _18386 = _18387;
            _18384 = _18385;
            _18382 = _18383;
            _18380 = _18381;
        }
        if ((_18380 * _18380) >= material_data_nani_instance_data._member0[vs_out_instance_index].roof_animation)
        {
            demote;
        }
        bool _4066 = _18382 < gl_FragCoord.z;
        _20376 = _18386;
        _20357 = _18384;
        _18820 = _4066 ? true : false;
        _18812 = _4066 ? _18382 : gl_FragCoord.z;
        _18796 = _18804;
        _18776 = _18388;
    }
    else
    {
        bool _16785;
        if (_550 == 1)
        {
            _16785 = true;
        }
        else
        {
            _16785 = _550 == 3;
        }
        vec3 _18777;
        float _18797;
        float _18813;
        bool _18821;
        float _20358;
        vec3 _20377;
        if (_16785)
        {
            bool _16786;
            if (_550 == 2)
            {
                _16786 = true;
            }
            else
            {
                _16786 = _550 == 3;
            }
            int _16787;
            if (_16786)
            {
                _16787 = int(vs_out_override_color_id);
            }
            else
            {
                _16787 = int(halftimber_colors_ids_1._member0[material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id]);
            }
            vec2 _4111 = vs_out_uv * 0.20000000298023223876953125;
            float _17448;
            float _17450;
            float _17452;
            vec3 _17454;
            vec3 _17456;
            float _18800;
            if (vs_out_pattern_id == 0u)
            {
                vec3 _9838;
                uvec2 _9368 = uvec2(gl_FragCoord.yx);
                float _9553 = 5.588237762451171875 * float(frame_counter.index % 64u);
                float _9563 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_9368.x) + _9553)) + (0.005837149918079376220703125 * (float(_9368.y) + _9553))));
                vec2 _9382 = textureQueryLod(sampler2D(wooden_floor_textures_wooden_floor_height, samplers_llr), _4111);
                float _9386 = _9382.x + current_view.mip_bias;
                vec3 _9686 = dFdx(vs_out_pos_ws);
                vec3 _9693 = dFdy(vs_out_pos_ws);
                vec2 _9696 = dFdx(_4111);
                vec2 _9703 = dFdy(_4111);
                vec2 _9700 = _9703 * (-1.0);
                vec3 _9664 = cross(vs_out_normal_ws, _9693 * (-1.0));
                vec3 _9665 = cross(_9686, vs_out_normal_ws);
                float _9666 = _9696.x;
                float _9667 = _9700.y;
                float _9669 = _9696.y;
                float _9670 = _9700.x;
                float _9673 = 1.0 / ((_9666 * _9667) - (_9669 * _9670));
                mat3 _9683 = transpose(mat3(((_9664 * _9666) + (_9665 * _9670)) * _9673, ((_9664 * _9669) + (_9665 * _9667)) * _9673, vs_out_normal_ws));
                vec4 _9708 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
                vec3 _9715 = vec3(1.0, 0.0, 0.0) * _9683;
                vec3 _9716 = vec3(0.0, 1.0, 0.0) * _9683;
                vec3 _9717 = vec3(0.0, 0.0, 1.0) * _9683;
                vec3 _9720 = cross(_9715, _9716);
                vec3 _9723 = vec3(1.0 / dot(_9717, _9720));
                mat3 _9727 = mat3(cross(_9716, _9717) * _9723, cross(_9717, _9715) * _9723, _9720 * _9723);
                vec3 _9587 = (vs_out_pos_ws - (_9708.xyz / vec3(_9708.w))) * _9727;
                float _9742 = _9587.z;
                vec3 _9747 = vec3(_4111, 0.0);
                float _17324;
                do
                {
                    _9838 = (_9747 + (_9587 * ((-0.07500000298023223876953125) / _9742))) - _9747;
                    float _9867 = mix(0.0, 1.0, pow(_9563 * 0.5, 2.0));
                    vec3 _9870 = _9747 + (_9838 * vec3(_9867));
                    float _10016 = _9870.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height, samplers_llr), _9870.xy, _9386).x - 1.0) * 0.07500000298023223876953125);
                    bool _20868 = (_10016 < 0.0) ? true : false;
                    float _17262;
                    bool _17267;
                    float _17289;
                    float _17299;
                    float _17309;
                    if (_20868)
                    {
                        _17309 = _10016;
                        _17299 = 0.0;
                        _17289 = _9867;
                        _17267 = _20868;
                        _17262 = 0.0;
                    }
                    else
                    {
                        float _17264;
                        float _17301;
                        _17301 = _10016;
                        _17264 = _9867;
                        float _9896;
                        uint _9914;
                        float _10061;
                        bool _20869;
                        bool _17268;
                        float _17290;
                        float _17310;
                        uint _17254 = 1u;
                        bool _17269 = _20868;
                        for (;;)
                        {
                            if (!(_17254 < 3u))
                            {
                                _17310 = 0.0;
                                _17290 = 1.0;
                                _17268 = _17269;
                                break;
                            }
                            _9896 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_17254) + _9563) * 0.5, 2.0)));
                            vec3 _9899 = _9747 + (_9838 * vec3(_9896));
                            _10061 = _9899.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height, samplers_llr), _9899.xy, _9386).x - 1.0) * 0.07500000298023223876953125);
                            _20869 = (_10061 < 0.0) ? true : false;
                            if (_20869)
                            {
                                _17310 = _10061;
                                _17290 = _9896;
                                _17268 = _20869;
                                break;
                            }
                            _9914 = _17254 + 1u;
                            _17254 = _9914;
                            _17301 = _10061;
                            _17269 = _20869;
                            _17264 = _9896;
                            continue;
                        }
                        _17309 = _17310;
                        _17299 = _17301;
                        _17289 = _17290;
                        _17267 = _17268;
                        _17262 = _17264;
                    }
                    if (_17267)
                    {
                        float _17287;
                        float _17297;
                        float _17307;
                        float _17311;
                        _17311 = _17262;
                        _17307 = _17309;
                        _17297 = _17299;
                        _17287 = _17289;
                        uint _9960;
                        float _20871;
                        float _20872;
                        float _20873;
                        float _20874;
                        uint _17278 = 0u;
                        for (;;)
                        {
                            if (!(_17278 < 4u))
                            {
                                break;
                            }
                            float _9940 = (_17311 + _17287) * 0.5;
                            vec3 _9943 = _9747 + (_9838 * vec3(_9940));
                            float _10106 = _9943.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height, samplers_llr), _9943.xy, _9386).x - 1.0) * 0.07500000298023223876953125);
                            bool _20870 = (_10106 < 0.0) ? true : false;
                            _20871 = _20870 ? _10106 : _17307;
                            _20872 = _20870 ? _17297 : _10106;
                            _20873 = _20870 ? _9940 : _17287;
                            _20874 = _20870 ? _17311 : _9940;
                            _9960 = _17278 + 1u;
                            _17311 = _20874;
                            _17307 = _20871;
                            _17297 = _20872;
                            _17287 = _20873;
                            _17278 = _9960;
                            continue;
                        }
                        float _9980 = mix(_17311, _17287, _17297 / (_17297 + (-_17307)));
                        vec3 _9983 = _9747 + (_9838 * vec3(_9980));
                        _17324 = ((abs(_9983.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height, samplers_llr), _9983.xy, _9386).x - 1.0) * 0.07500000298023223876953125)) < (_17297 * 0.89999997615814208984375)) ? true : false) ? _9980 : _17287;
                        break;
                    }
                    else
                    {
                        _17324 = _17262;
                        break;
                    }
                    break; // unreachable workaround
                } while(false);
                vec3 _20878 = mix(_9838 * _17324, vec3(0.0), bvec3(_9742 > (-1.1754943508222875079687365372222e-38)));
                vec2 _9601 = _4111 + _20878.xy;
                vec4 _10199 = (vec4(vs_out_pos_ws + (_20878 * _9683), 1.0) * current_view.world_to_view) * current_view.view_to_clip;
                vec3 _10292 = (textureLod(sampler2D(wooden_floor_textures_wooden_floor_normal, samplers_llr), _9601, _9386).xyz * 2.0) - vec3(1.0);
                _10292.z = _10292.z * 0.199999988079071044921875;
                vec4 _9406 = texture(sampler2D(wooden_floor_textures_wooden_floor_seed, samplers_llr), _9601, current_view.mip_bias);
                float _9410 = _9406.z;
                float _9412 = _9406.x;
                int _9416 = int(trunc((_9412 * 32.0) - 0.5));
                vec2 _9420 = fract((vec2(0.75487768650054931640625, 0.56984031200408935546875) * float(uint(_9416))) + vec2(0.5)) + (vec2(_9601.yx) * 0.87999999523162841796875);
                float _9421 = _9406.y;
                float _17388;
                if (0.003130800090730190277099609375 >= _9421)
                {
                    _17388 = 12.9200000762939453125 * _9421;
                }
                else
                {
                    _17388 = (1.05499994754791259765625 * pow(_9421, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
                }
                float _9425 = round(_17388 * 8.0) * 0.785398185253143310546875;
                float _9428 = cos(_9425);
                float _9431 = sin(_9425);
                vec2 _20840 = vec2((_9420.x * _9428) - (_9420.y * _9431), (_9420.x * _9431) + (_9420.y * _9428));
                vec2 _17390;
                if (_9410 > 0.5)
                {
                    _17390 = _20840 + vec2(0.20000000298023223876953125);
                }
                else
                {
                    _17390 = _20840;
                }
                vec4 _9462 = texture(sampler2DArray(halftimber_colors_tex, samplers_llr), vec3(_17390, float(_16787)), current_view.mip_bias);
                vec3 _9465 = _9462.xyz;
                bool _17406;
                if (_16787 == 2)
                {
                    _17406 = true;
                }
                else
                {
                    _17406 = _16787 == 8;
                }
                bool _17407;
                if (_17406)
                {
                    _17407 = true;
                }
                else
                {
                    _17407 = _16787 == 9;
                }
                vec3 _17419;
                if (_17407)
                {
                    _17419 = mix(_9465, vec3(dot(_9465, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875))), vec3(0.300000011920928955078125));
                }
                else
                {
                    _17419 = _9465;
                }
                vec4 _9491 = texture(sampler2DArray(halftimber_colors_tex, samplers_llr), vec3(_17390, 0.0), current_view.mip_bias);
                vec3 _9494 = _9491.xyz;
                float _17420;
                vec3 _17422;
                if (_16787 == 0)
                {
                    _17422 = _9494 * 1.2000000476837158203125;
                    _17420 = _9410;
                }
                else
                {
                    bool _17413;
                    if (_16787 == 9)
                    {
                        _17413 = true;
                    }
                    else
                    {
                        _17413 = _16787 == 3;
                    }
                    bool _17414;
                    if (_17413)
                    {
                        _17414 = true;
                    }
                    else
                    {
                        _17414 = _16787 == 4;
                    }
                    float _17421;
                    if (_17414)
                    {
                        _17421 = _9410 * 0.5;
                    }
                    else
                    {
                        _17421 = _9410 * 0.20000000298023223876953125;
                    }
                    _17422 = _9494;
                    _17420 = _17421;
                }
                uint _9540 = uint(_9416 ^ 9730541);
                uint _10331 = _9540 + (_9540 << 10u);
                uint _10333 = _10331 ^ (_10331 >> 6u);
                uint _10335 = _10333 + (_10333 << 3u);
                uint _10337 = _10335 ^ (_10335 >> 11u);
                float _9543 = mix(0.75, 1.0, texture(sampler2D(wooden_floor_textures_wooden_floor_roughness, samplers_llr), _9601, current_view.mip_bias).x) * mix(0.800000011920928955078125, 1.0, uintBitsToFloat(((_10337 + (_10337 << 15u)) & 8388607u) | 1065353216u) - 1.0);
                _18800 = smoothstep(0.5, 1.0, _9543);
                _17456 = mix(_17419 * mix(0.699999988079071044921875, 1.0, texture(sampler2D(wooden_floor_textures_wooden_floor_height, samplers_llr), _9601, current_view.mip_bias).x), _17422, vec3(_17420));
                _17454 = normalize(_9727 * _10292);
                _17452 = _9543;
                _17450 = (_10199.xyz / vec3(_10199.w)).z;
                _17448 = mix(0.0, 0.96875, _9412);
            }
            else
            {
                float _17449;
                float _17451;
                float _17453;
                vec3 _17455;
                vec3 _17457;
                float _18801;
                if (vs_out_pattern_id == 1u)
                {
                    vec3 _8834;
                    uvec2 _8364 = uvec2(gl_FragCoord.yx);
                    float _8549 = 5.588237762451171875 * float(frame_counter.index % 64u);
                    float _8559 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_8364.x) + _8549)) + (0.005837149918079376220703125 * (float(_8364.y) + _8549))));
                    vec2 _8378 = textureQueryLod(sampler2D(wooden_floor_textures_wooden_floor_height_2, samplers_llr), _4111);
                    float _8382 = _8378.x + current_view.mip_bias;
                    vec3 _8682 = dFdx(vs_out_pos_ws);
                    vec3 _8689 = dFdy(vs_out_pos_ws);
                    vec2 _8692 = dFdx(_4111);
                    vec2 _8699 = dFdy(_4111);
                    vec2 _8696 = _8699 * (-1.0);
                    vec3 _8660 = cross(vs_out_normal_ws, _8689 * (-1.0));
                    vec3 _8661 = cross(_8682, vs_out_normal_ws);
                    float _8662 = _8692.x;
                    float _8663 = _8696.y;
                    float _8665 = _8692.y;
                    float _8666 = _8696.x;
                    float _8669 = 1.0 / ((_8662 * _8663) - (_8665 * _8666));
                    mat3 _8679 = transpose(mat3(((_8660 * _8662) + (_8661 * _8666)) * _8669, ((_8660 * _8665) + (_8661 * _8663)) * _8669, vs_out_normal_ws));
                    vec4 _8704 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
                    vec3 _8711 = vec3(1.0, 0.0, 0.0) * _8679;
                    vec3 _8712 = vec3(0.0, 1.0, 0.0) * _8679;
                    vec3 _8713 = vec3(0.0, 0.0, 1.0) * _8679;
                    vec3 _8716 = cross(_8711, _8712);
                    vec3 _8719 = vec3(1.0 / dot(_8713, _8716));
                    mat3 _8723 = mat3(cross(_8712, _8713) * _8719, cross(_8713, _8711) * _8719, _8716 * _8719);
                    vec3 _8583 = (vs_out_pos_ws - (_8704.xyz / vec3(_8704.w))) * _8723;
                    float _8738 = _8583.z;
                    vec3 _8743 = vec3(_4111, 0.0);
                    float _17102;
                    do
                    {
                        _8834 = (_8743 + (_8583 * ((-0.07500000298023223876953125) / _8738))) - _8743;
                        float _8863 = mix(0.0, 1.0, pow(_8559 * 0.5, 2.0));
                        vec3 _8866 = _8743 + (_8834 * vec3(_8863));
                        float _9012 = _8866.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height_2, samplers_llr), _8866.xy, _8382).x - 1.0) * 0.07500000298023223876953125);
                        bool _20857 = (_9012 < 0.0) ? true : false;
                        float _17040;
                        bool _17045;
                        float _17067;
                        float _17077;
                        float _17087;
                        if (_20857)
                        {
                            _17087 = _9012;
                            _17077 = 0.0;
                            _17067 = _8863;
                            _17045 = _20857;
                            _17040 = 0.0;
                        }
                        else
                        {
                            float _17042;
                            float _17079;
                            _17079 = _9012;
                            _17042 = _8863;
                            float _8892;
                            uint _8910;
                            float _9057;
                            bool _20858;
                            bool _17046;
                            float _17068;
                            float _17088;
                            uint _17032 = 1u;
                            bool _17047 = _20857;
                            for (;;)
                            {
                                if (!(_17032 < 3u))
                                {
                                    _17088 = 0.0;
                                    _17068 = 1.0;
                                    _17046 = _17047;
                                    break;
                                }
                                _8892 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_17032) + _8559) * 0.5, 2.0)));
                                vec3 _8895 = _8743 + (_8834 * vec3(_8892));
                                _9057 = _8895.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height_2, samplers_llr), _8895.xy, _8382).x - 1.0) * 0.07500000298023223876953125);
                                _20858 = (_9057 < 0.0) ? true : false;
                                if (_20858)
                                {
                                    _17088 = _9057;
                                    _17068 = _8892;
                                    _17046 = _20858;
                                    break;
                                }
                                _8910 = _17032 + 1u;
                                _17032 = _8910;
                                _17079 = _9057;
                                _17047 = _20858;
                                _17042 = _8892;
                                continue;
                            }
                            _17087 = _17088;
                            _17077 = _17079;
                            _17067 = _17068;
                            _17045 = _17046;
                            _17040 = _17042;
                        }
                        if (_17045)
                        {
                            float _17065;
                            float _17075;
                            float _17085;
                            float _17089;
                            _17089 = _17040;
                            _17085 = _17087;
                            _17075 = _17077;
                            _17065 = _17067;
                            uint _8956;
                            float _20860;
                            float _20861;
                            float _20862;
                            float _20863;
                            uint _17056 = 0u;
                            for (;;)
                            {
                                if (!(_17056 < 4u))
                                {
                                    break;
                                }
                                float _8936 = (_17089 + _17065) * 0.5;
                                vec3 _8939 = _8743 + (_8834 * vec3(_8936));
                                float _9102 = _8939.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height_2, samplers_llr), _8939.xy, _8382).x - 1.0) * 0.07500000298023223876953125);
                                bool _20859 = (_9102 < 0.0) ? true : false;
                                _20860 = _20859 ? _9102 : _17085;
                                _20861 = _20859 ? _17075 : _9102;
                                _20862 = _20859 ? _8936 : _17065;
                                _20863 = _20859 ? _17089 : _8936;
                                _8956 = _17056 + 1u;
                                _17089 = _20863;
                                _17085 = _20860;
                                _17075 = _20861;
                                _17065 = _20862;
                                _17056 = _8956;
                                continue;
                            }
                            float _8976 = mix(_17089, _17065, _17075 / (_17075 + (-_17085)));
                            vec3 _8979 = _8743 + (_8834 * vec3(_8976));
                            _17102 = ((abs(_8979.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height_2, samplers_llr), _8979.xy, _8382).x - 1.0) * 0.07500000298023223876953125)) < (_17075 * 0.89999997615814208984375)) ? true : false) ? _8976 : _17065;
                            break;
                        }
                        else
                        {
                            _17102 = _17040;
                            break;
                        }
                        break; // unreachable workaround
                    } while(false);
                    vec3 _20867 = mix(_8834 * _17102, vec3(0.0), bvec3(_8738 > (-1.1754943508222875079687365372222e-38)));
                    vec2 _8597 = _4111 + _20867.xy;
                    vec4 _9195 = (vec4(vs_out_pos_ws + (_20867 * _8679), 1.0) * current_view.world_to_view) * current_view.view_to_clip;
                    vec3 _9288 = (textureLod(sampler2D(wooden_floor_textures_wooden_floor_normal_2, samplers_llr), _8597, _8382).xyz * 2.0) - vec3(1.0);
                    _9288.z = _9288.z * 0.199999988079071044921875;
                    vec4 _8402 = texture(sampler2D(wooden_floor_textures_wooden_floor_seed_2, samplers_llr), _8597, current_view.mip_bias);
                    float _8406 = _8402.z;
                    float _8408 = _8402.x;
                    int _8412 = int(trunc((_8408 * 32.0) - 0.5));
                    vec2 _8416 = fract((vec2(0.75487768650054931640625, 0.56984031200408935546875) * float(uint(_8412))) + vec2(0.5)) + (vec2(_8597.yx) * 0.87999999523162841796875);
                    float _8417 = _8402.y;
                    float _17166;
                    if (0.003130800090730190277099609375 >= _8417)
                    {
                        _17166 = 12.9200000762939453125 * _8417;
                    }
                    else
                    {
                        _17166 = (1.05499994754791259765625 * pow(_8417, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
                    }
                    float _8421 = round(_17166 * 8.0) * 0.785398185253143310546875;
                    float _8424 = cos(_8421);
                    float _8427 = sin(_8421);
                    vec2 _20839 = vec2((_8416.x * _8424) - (_8416.y * _8427), (_8416.x * _8427) + (_8416.y * _8424));
                    vec2 _17168;
                    if (_8406 > 0.5)
                    {
                        _17168 = _20839 + vec2(0.20000000298023223876953125);
                    }
                    else
                    {
                        _17168 = _20839;
                    }
                    vec4 _8458 = texture(sampler2DArray(halftimber_colors_tex, samplers_llr), vec3(_17168, float(_16787)), current_view.mip_bias);
                    vec3 _8461 = _8458.xyz;
                    bool _17184;
                    if (_16787 == 2)
                    {
                        _17184 = true;
                    }
                    else
                    {
                        _17184 = _16787 == 8;
                    }
                    bool _17185;
                    if (_17184)
                    {
                        _17185 = true;
                    }
                    else
                    {
                        _17185 = _16787 == 9;
                    }
                    vec3 _17197;
                    if (_17185)
                    {
                        _17197 = mix(_8461, vec3(dot(_8461, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875))), vec3(0.300000011920928955078125));
                    }
                    else
                    {
                        _17197 = _8461;
                    }
                    vec4 _8487 = texture(sampler2DArray(halftimber_colors_tex, samplers_llr), vec3(_17168, 0.0), current_view.mip_bias);
                    vec3 _8490 = _8487.xyz;
                    float _17198;
                    vec3 _17200;
                    if (_16787 == 0)
                    {
                        _17200 = _8490 * 1.2000000476837158203125;
                        _17198 = _8406;
                    }
                    else
                    {
                        bool _17191;
                        if (_16787 == 9)
                        {
                            _17191 = true;
                        }
                        else
                        {
                            _17191 = _16787 == 3;
                        }
                        bool _17192;
                        if (_17191)
                        {
                            _17192 = true;
                        }
                        else
                        {
                            _17192 = _16787 == 4;
                        }
                        float _17199;
                        if (_17192)
                        {
                            _17199 = _8406 * 0.5;
                        }
                        else
                        {
                            _17199 = _8406 * 0.20000000298023223876953125;
                        }
                        _17200 = _8490;
                        _17198 = _17199;
                    }
                    uint _8536 = uint(_8412 ^ 9730541);
                    uint _9327 = _8536 + (_8536 << 10u);
                    uint _9329 = _9327 ^ (_9327 >> 6u);
                    uint _9331 = _9329 + (_9329 << 3u);
                    uint _9333 = _9331 ^ (_9331 >> 11u);
                    float _8539 = mix(0.75, 1.0, texture(sampler2D(wooden_floor_textures_wooden_floor_roughness_2, samplers_llr), _8597, current_view.mip_bias).x) * mix(0.800000011920928955078125, 1.0, uintBitsToFloat(((_9333 + (_9333 << 15u)) & 8388607u) | 1065353216u) - 1.0);
                    _18801 = smoothstep(0.550000011920928955078125, 1.0, _8539);
                    _17457 = mix(_17197 * mix(0.699999988079071044921875, 1.0, texture(sampler2D(wooden_floor_textures_wooden_floor_height_2, samplers_llr), _8597, current_view.mip_bias).x), _17200, vec3(_17198));
                    _17455 = normalize(_8723 * _9288);
                    _17453 = _8539;
                    _17451 = (_9195.xyz / vec3(_9195.w)).z;
                    _17449 = mix(0.0, 0.96875, _8408);
                }
                else
                {
                    vec3 _7830;
                    uvec2 _7360 = uvec2(gl_FragCoord.yx);
                    float _7545 = 5.588237762451171875 * float(frame_counter.index % 64u);
                    float _7555 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_7360.x) + _7545)) + (0.005837149918079376220703125 * (float(_7360.y) + _7545))));
                    vec2 _7374 = textureQueryLod(sampler2D(wooden_floor_textures_wooden_floor_height_3, samplers_llr), _4111);
                    float _7378 = _7374.x + current_view.mip_bias;
                    vec3 _7678 = dFdx(vs_out_pos_ws);
                    vec3 _7685 = dFdy(vs_out_pos_ws);
                    vec2 _7688 = dFdx(_4111);
                    vec2 _7695 = dFdy(_4111);
                    vec2 _7692 = _7695 * (-1.0);
                    vec3 _7656 = cross(vs_out_normal_ws, _7685 * (-1.0));
                    vec3 _7657 = cross(_7678, vs_out_normal_ws);
                    float _7658 = _7688.x;
                    float _7659 = _7692.y;
                    float _7661 = _7688.y;
                    float _7662 = _7692.x;
                    float _7665 = 1.0 / ((_7658 * _7659) - (_7661 * _7662));
                    mat3 _7675 = transpose(mat3(((_7656 * _7658) + (_7657 * _7662)) * _7665, ((_7656 * _7661) + (_7657 * _7659)) * _7665, vs_out_normal_ws));
                    vec4 _7700 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
                    vec3 _7707 = vec3(1.0, 0.0, 0.0) * _7675;
                    vec3 _7708 = vec3(0.0, 1.0, 0.0) * _7675;
                    vec3 _7709 = vec3(0.0, 0.0, 1.0) * _7675;
                    vec3 _7712 = cross(_7707, _7708);
                    vec3 _7715 = vec3(1.0 / dot(_7709, _7712));
                    mat3 _7719 = mat3(cross(_7708, _7709) * _7715, cross(_7709, _7707) * _7715, _7712 * _7715);
                    vec3 _7579 = (vs_out_pos_ws - (_7700.xyz / vec3(_7700.w))) * _7719;
                    float _7734 = _7579.z;
                    vec3 _7739 = vec3(_4111, 0.0);
                    float _16880;
                    do
                    {
                        _7830 = (_7739 + (_7579 * ((-0.07500000298023223876953125) / _7734))) - _7739;
                        float _7859 = mix(0.0, 1.0, pow(_7555 * 0.5, 2.0));
                        vec3 _7862 = _7739 + (_7830 * vec3(_7859));
                        float _8008 = _7862.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height_3, samplers_llr), _7862.xy, _7378).x - 1.0) * 0.07500000298023223876953125);
                        bool _20845 = (_8008 < 0.0) ? true : false;
                        float _16818;
                        bool _16823;
                        float _16845;
                        float _16855;
                        float _16865;
                        if (_20845)
                        {
                            _16865 = _8008;
                            _16855 = 0.0;
                            _16845 = _7859;
                            _16823 = _20845;
                            _16818 = 0.0;
                        }
                        else
                        {
                            float _16820;
                            float _16857;
                            _16857 = _8008;
                            _16820 = _7859;
                            float _7888;
                            uint _7906;
                            float _8053;
                            bool _20846;
                            bool _16824;
                            float _16846;
                            float _16866;
                            uint _16810 = 1u;
                            bool _16825 = _20845;
                            for (;;)
                            {
                                if (!(_16810 < 3u))
                                {
                                    _16866 = 0.0;
                                    _16846 = 1.0;
                                    _16824 = _16825;
                                    break;
                                }
                                _7888 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_16810) + _7555) * 0.5, 2.0)));
                                vec3 _7891 = _7739 + (_7830 * vec3(_7888));
                                _8053 = _7891.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height_3, samplers_llr), _7891.xy, _7378).x - 1.0) * 0.07500000298023223876953125);
                                _20846 = (_8053 < 0.0) ? true : false;
                                if (_20846)
                                {
                                    _16866 = _8053;
                                    _16846 = _7888;
                                    _16824 = _20846;
                                    break;
                                }
                                _7906 = _16810 + 1u;
                                _16810 = _7906;
                                _16857 = _8053;
                                _16825 = _20846;
                                _16820 = _7888;
                                continue;
                            }
                            _16865 = _16866;
                            _16855 = _16857;
                            _16845 = _16846;
                            _16823 = _16824;
                            _16818 = _16820;
                        }
                        if (_16823)
                        {
                            float _16843;
                            float _16853;
                            float _16863;
                            float _16867;
                            _16867 = _16818;
                            _16863 = _16865;
                            _16853 = _16855;
                            _16843 = _16845;
                            uint _7952;
                            float _20848;
                            float _20849;
                            float _20850;
                            float _20851;
                            uint _16834 = 0u;
                            for (;;)
                            {
                                if (!(_16834 < 4u))
                                {
                                    break;
                                }
                                float _7932 = (_16867 + _16843) * 0.5;
                                vec3 _7935 = _7739 + (_7830 * vec3(_7932));
                                float _8098 = _7935.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height_3, samplers_llr), _7935.xy, _7378).x - 1.0) * 0.07500000298023223876953125);
                                bool _20847 = (_8098 < 0.0) ? true : false;
                                _20848 = _20847 ? _8098 : _16863;
                                _20849 = _20847 ? _16853 : _8098;
                                _20850 = _20847 ? _7932 : _16843;
                                _20851 = _20847 ? _16867 : _7932;
                                _7952 = _16834 + 1u;
                                _16867 = _20851;
                                _16863 = _20848;
                                _16853 = _20849;
                                _16843 = _20850;
                                _16834 = _7952;
                                continue;
                            }
                            float _7972 = mix(_16867, _16843, _16853 / (_16853 + (-_16863)));
                            vec3 _7975 = _7739 + (_7830 * vec3(_7972));
                            _16880 = ((abs(_7975.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height_3, samplers_llr), _7975.xy, _7378).x - 1.0) * 0.07500000298023223876953125)) < (_16853 * 0.89999997615814208984375)) ? true : false) ? _7972 : _16843;
                            break;
                        }
                        else
                        {
                            _16880 = _16818;
                            break;
                        }
                        break; // unreachable workaround
                    } while(false);
                    vec3 _20856 = mix(_7830 * _16880, vec3(0.0), bvec3(_7734 > (-1.1754943508222875079687365372222e-38)));
                    vec2 _7593 = _4111 + _20856.xy;
                    vec4 _8191 = (vec4(vs_out_pos_ws + (_20856 * _7675), 1.0) * current_view.world_to_view) * current_view.view_to_clip;
                    vec3 _8284 = (textureLod(sampler2D(wooden_floor_textures_wooden_floor_normal_3, samplers_llr), _7593, _7378).xyz * 2.0) - vec3(1.0);
                    _8284.z = _8284.z * 0.199999988079071044921875;
                    vec4 _7398 = texture(sampler2D(wooden_floor_textures_wooden_floor_seed_3, samplers_llr), _7593, current_view.mip_bias);
                    float _7402 = _7398.z;
                    float _7404 = _7398.x;
                    int _7408 = int(trunc((_7404 * 32.0) - 0.5));
                    vec2 _7412 = fract((vec2(0.75487768650054931640625, 0.56984031200408935546875) * float(uint(_7408))) + vec2(0.5)) + (vec2(_7593.yx) * 0.87999999523162841796875);
                    float _7413 = _7398.y;
                    float _16944;
                    if (0.003130800090730190277099609375 >= _7413)
                    {
                        _16944 = 12.9200000762939453125 * _7413;
                    }
                    else
                    {
                        _16944 = (1.05499994754791259765625 * pow(_7413, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
                    }
                    float _7417 = round(_16944 * 8.0) * 0.785398185253143310546875;
                    float _7420 = cos(_7417);
                    float _7423 = sin(_7417);
                    vec2 _20838 = vec2((_7412.x * _7420) - (_7412.y * _7423), (_7412.x * _7423) + (_7412.y * _7420));
                    vec2 _16946;
                    if (_7402 > 0.5)
                    {
                        _16946 = _20838 + vec2(0.20000000298023223876953125);
                    }
                    else
                    {
                        _16946 = _20838;
                    }
                    vec4 _7454 = texture(sampler2DArray(halftimber_colors_tex, samplers_llr), vec3(_16946, float(_16787)), current_view.mip_bias);
                    vec3 _7457 = _7454.xyz;
                    bool _16962;
                    if (_16787 == 2)
                    {
                        _16962 = true;
                    }
                    else
                    {
                        _16962 = _16787 == 8;
                    }
                    bool _16963;
                    if (_16962)
                    {
                        _16963 = true;
                    }
                    else
                    {
                        _16963 = _16787 == 9;
                    }
                    vec3 _16975;
                    if (_16963)
                    {
                        _16975 = mix(_7457, vec3(dot(_7457, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875))), vec3(0.300000011920928955078125));
                    }
                    else
                    {
                        _16975 = _7457;
                    }
                    vec4 _7483 = texture(sampler2DArray(halftimber_colors_tex, samplers_llr), vec3(_16946, 0.0), current_view.mip_bias);
                    vec3 _7486 = _7483.xyz;
                    float _16976;
                    vec3 _16978;
                    if (_16787 == 0)
                    {
                        _16978 = _7486 * 1.2000000476837158203125;
                        _16976 = _7402;
                    }
                    else
                    {
                        bool _16969;
                        if (_16787 == 9)
                        {
                            _16969 = true;
                        }
                        else
                        {
                            _16969 = _16787 == 3;
                        }
                        bool _16970;
                        if (_16969)
                        {
                            _16970 = true;
                        }
                        else
                        {
                            _16970 = _16787 == 4;
                        }
                        float _16977;
                        if (_16970)
                        {
                            _16977 = _7402 * 0.5;
                        }
                        else
                        {
                            _16977 = _7402 * 0.20000000298023223876953125;
                        }
                        _16978 = _7486;
                        _16976 = _16977;
                    }
                    uint _7532 = uint(_7408 ^ 9730541);
                    uint _8323 = _7532 + (_7532 << 10u);
                    uint _8325 = _8323 ^ (_8323 >> 6u);
                    uint _8327 = _8325 + (_8325 << 3u);
                    uint _8329 = _8327 ^ (_8327 >> 11u);
                    float _7535 = mix(0.75, 1.0, texture(sampler2D(wooden_floor_textures_wooden_floor_roughness_3, samplers_llr), _7593, current_view.mip_bias).x) * mix(0.800000011920928955078125, 1.0, uintBitsToFloat(((_8329 + (_8329 << 15u)) & 8388607u) | 1065353216u) - 1.0);
                    _18801 = smoothstep(0.5, 1.0, _7535);
                    _17457 = mix(_16975 * mix(0.699999988079071044921875, 1.0, texture(sampler2D(wooden_floor_textures_wooden_floor_height_3, samplers_llr), _7593, current_view.mip_bias).x), _16978, vec3(_16976));
                    _17455 = normalize(_7719 * _8284);
                    _17453 = _7535;
                    _17451 = (_8191.xyz / vec3(_8191.w)).z;
                    _17449 = mix(0.0, 0.96875, _7404);
                }
                _18800 = _18801;
                _17456 = _17457;
                _17454 = _17455;
                _17452 = _17453;
                _17450 = _17451;
                _17448 = _17449;
            }
            if (_17448 >= material_data_nani_instance_data._member0[vs_out_instance_index].roof_animation)
            {
                demote;
            }
            bool _6824 = _17450 < gl_FragCoord.z;
            _20377 = _17454;
            _20358 = _17452;
            _18821 = _6824 ? true : false;
            _18813 = _6824 ? _17450 : gl_FragCoord.z;
            _18797 = _18800;
            _18777 = _17456;
        }
        else
        {
            _20377 = vec3(0.0);
            _20358 = 0.800000011920928955078125;
            _18821 = false;
            _18813 = gl_FragCoord.z;
            _18797 = 0.0;
            _18777 = vec3(0.0);
        }
        _20376 = _20377;
        _20357 = _20358;
        _18820 = _18821;
        _18812 = _18813;
        _18796 = _18797;
        _18776 = _18777;
    }
    vec3 _20917 = mix(_18776, vec3(0.800000011920928955078125, 0.519999980926513671875, 0.4000000059604644775390625), bvec3(_18404));
    bool _6849 = int(_18594) == 1;
    vec3 _18807;
    if (_6849)
    {
        _18807 = mix(_20917, vec3(0.5), vec3(0.100000001490116119384765625));
    }
    else
    {
        _18807 = _20917;
    }
    vec3 _20352;
    if (frame_constants.glade_theme_id == 4u)
    {
        vec4 sampled = texture(sampler2D(material_data_dirtpath_heightmap, samplers_llr), (vs_out_uv * 0.0199999995529651641845703125) + (_7144 * 0.0500000007450580596923828125), current_view.mip_bias);
        float _6894 = sampled.x;
        _20352 = mix(_18807, vec3(0.699999988079071044921875), vec3((smoothstep(0.0, 0.20000000298023223876953125, _18796 * mix(0.0, 0.5, _6894)) * 0.60000002384185791015625) + (_6894 * 0.20000000298023223876953125)));
    }
    else
    {
        _20352 = _18807;
    }
    vec3 _13695 = (_20376 * 0.5) + vec3(0.5);
    vec3 _13803 = sqrt(clamp(_20352, vec3(0.0), vec3(1.0)));
    uint _13818 = (uint((clamp(_13803.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_13803.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_13803.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _20843 = uvec2(((uint((clamp(_13695.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_13695.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_13695.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(_20357, 0.0, 1.0) * 255.0) + 0.5) << uint(24)), _13818);
    _20843.y = _13818 | (((7u | (uint(_18404 ? true : (_6849 ? true : false)) << 3u)) | (uint(_18820) << 7u)) << 24u);
    entryPointParam_ps_main_gbuffer = _20843;
    gl_FragDepth = _18812;
}

