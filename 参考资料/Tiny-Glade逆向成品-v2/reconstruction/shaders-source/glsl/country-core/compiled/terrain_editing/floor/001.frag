#version 460
#extension GL_ARB_conservative_depth : require
#extension GL_KHR_shader_subgroup_quad : require
layout(depth_less) out float gl_FragDepth;

float _13801;

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

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

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

layout(set = 19, binding = 0, std140) uniform StoneFloorTextures_natural
{
    uvec2 stone_floor_height_dims;
} stone_floor_textures;

layout(set = 2, binding = 0) uniform sampler samplers_lnc;
layout(set = 15, binding = 0) uniform texture2D paths_visual_tex;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 19, binding = 3) uniform texture2D stone_floor_textures_stone_floor_height;
layout(set = 19, binding = 7) uniform texture2D stone_floor_textures_stone_floor_height_2;
layout(set = 19, binding = 11) uniform texture2D stone_floor_textures_stone_floor_height_3;
layout(set = 19, binding = 1) uniform texture2D stone_floor_textures_stone_floor_normal;
layout(set = 19, binding = 6) uniform texture2D stone_floor_textures_stone_floor_normal_2;
layout(set = 19, binding = 10) uniform texture2D stone_floor_textures_stone_floor_normal_3;
layout(set = 16, binding = 0) uniform texture2D dirt_mask_tex;
layout(set = 0, binding = 1) uniform texture2D material_data_dirtpath_heightmap;
layout(set = 0, binding = 2) uniform texture2D material_data_dirt_1;
layout(set = 0, binding = 3) uniform texture2D material_data_dirt_2;
layout(set = 2, binding = 3) uniform sampler samplers_llc;
layout(set = 11, binding = 0) uniform texture2D water_mask_tex;
layout(set = 0, binding = 0) uniform texture2D material_data_mud;
layout(set = 14, binding = 1) uniform texture2D garden_mask_tex;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 10, binding = 0) uniform texture2D rocky_terrain_tex;
layout(set = 19, binding = 2) uniform texture2D stone_floor_textures_stone_floor_seed;
layout(set = 19, binding = 4) uniform texture2D stone_floor_textures_stone_floor_roughness;
layout(set = 22, binding = 1) uniform texture2DArray wall_color_data_brick_colors;
layout(set = 19, binding = 5) uniform texture2D stone_floor_textures_stone_floor_seed_2;
layout(set = 19, binding = 8) uniform texture2D stone_floor_textures_stone_floor_roughness_2;
layout(set = 19, binding = 9) uniform texture2D stone_floor_textures_stone_floor_seed_3;
layout(set = 19, binding = 12) uniform texture2D stone_floor_textures_stone_floor_roughness_3;
layout(set = 12, binding = 0) uniform texture2D building_mask_tex;

layout(location = 0) in vec3 vs_out_normal_ws;
layout(location = 1) in vec3 vs_out_position_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec2 _5645 = (vs_out_position_ws.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5);
    vec4 _5649 = textureLod(sampler2D(paths_visual_tex, samplers_lnc), _5645, 0.0);
    vec3 cobblestone_sample = _5649.yzw;
    bool _5701 = frame_constants.glade_theme_id == 4u;
    vec2 _5673 = (vs_out_position_ws.xz * (_5701 ? 0.20000000298023223876953125 : 0.0500000007450580596923828125)) + vec2(7.0);
    vec2 _5710 = floor(_5673 + vec2(dot(_5673, vec2(0.3660254180431365966796875))));
    vec2 _5714 = (_5673 - _5710) + vec2(dot(_5710, vec2(0.211324870586395263671875)));
    float _5715 = _5714.x;
    float _5716 = _5714.y;
    vec2 _15653 = mix(vec2(0.0, 1.0), vec2(1.0, 0.0), bvec2(_5715 > _5716));
    vec4 _5722 = _5714.xyxy + vec4(0.211324870586395263671875, 0.211324870586395263671875, -0.57735025882720947265625, -0.57735025882720947265625);
    vec2 _5725 = _5722.xy - _15653;
    vec4 _13648 = _5722;
    _13648.x = _5725.x;
    _13648.y = _5725.y;
    vec2 _5730 = _5710 - vec2(289.0) * trunc(_5710 / vec2(289.0));
    vec3 _5736 = vec3(_5730.y) + vec3(0.0, _15653.y, 1.0);
    vec3 _5809 = ((_5736 * 34.0) + vec3(1.0)) * _5736;
    vec3 _5744 = ((_5809 - vec3(289.0) * trunc(_5809 / vec3(289.0))) + vec3(_5730.x)) + vec3(0.0, _15653.x, 1.0);
    vec3 _5816 = ((_5744 * 34.0) + vec3(1.0)) * _5744;
    vec3 _5760 = max(vec3(0.5) - vec3(dot(_5714, _5714), dot(_13648.xy, _13648.xy), dot(_13648.zw, _13648.zw)), vec3(0.0));
    vec3 _5761 = _5760 * _5760;
    vec3 _5765 = fract((_5816 - vec3(289.0) * trunc(_5816 / vec3(289.0))) * vec3(0.024390242993831634521484375)) * 2.0;
    vec3 _5767 = _5765 - vec3(1.0);
    vec3 _5770 = abs(_5767) - vec3(0.5);
    vec3 _5774 = _5767 - floor(_5765 + vec3(-0.5));
    float _5803 = 130.0 * dot((_5761 * _5761) * (vec3(1.792842864990234375) - (((_5774 * _5774) + (_5770 * _5770)) * 0.8537347316741943359375)), vec3((_5774.x * _5715) + (_5770.x * _5716), (_5774.yz * _13648.xz) + (_5770.yz * _13648.yw)));
    vec3 _5678 = mix(color_library_data.grass_1.xyz, color_library_data.grass_2.xyz, vec3(clamp(_5803 - 0.4000000059604644775390625, 0.0, 1.0)));
    vec3 _13696;
    if (_5701)
    {
        _13696 = mix(vec3(0.699999988079071044921875), _5678, vec3(clamp(_5803 - 0.20000000298023223876953125, 0.0, 1.0)));
    }
    else
    {
        _13696 = _5678;
    }
    vec3 _5689 = _13696 * 0.75;
    bool lane_has_cobblestone = max(_5649.y, max(_5649.z, _5649.w)) > 0.0039215688593685626983642578125;
    bool _5848 = subgroupQuadSwapHorizontal(lane_has_cobblestone);
    bool _5849 = lane_has_cobblestone || _5848;
    bool _5850 = subgroupQuadSwapVertical(_5849);
    bool _5851 = _5849 || _5850;
    bool _5852 = subgroupQuadSwapDiagonal(_5851);
    bool _5853 = _5851 || _5852;
    vec2 texture_uv = vs_out_position_ws.xz * 0.20000000298023223876953125;
    uvec2 _5868 = uvec2(gl_FragCoord.yx);
    float _5908 = 5.588237762451171875 * float(frame_counter.index % 64u);
    float _5918 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_5868.x) + _5908)) + (0.005837149918079376220703125 * (float(_5868.y) + _5908))));
    float _5921 = 1.0 - _5649.x;
    float _5925 = clamp(1.0 - dot(vec3(1.0), (cobblestone_sample * 2.0) * _5921), 0.0, 1.0);
    vec3 _5927 = cobblestone_sample * vec3(1.0, 2.0, 1.0);
    vec3 _5936 = _5927 / vec3(max(0.00999999977648258209228515625, max(_5927.x, max(_5927.y, _5927.z))));
    float _13746;
    vec3 _13747;
    vec3 _13749;
    vec2 _13750;
    float _13752;
    if (_5853)
    {
        vec3 _6204;
        vec2 _5891 = textureQueryLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), texture_uv);
        float _5895 = _5891.x + current_view.mip_bias;
        vec3 _6052 = dFdx(vs_out_position_ws);
        vec3 _6059 = dFdy(vs_out_position_ws);
        vec2 _6062 = dFdx(texture_uv);
        vec2 _6069 = dFdy(texture_uv);
        vec2 _6066 = _6069 * (-1.0);
        vec3 _6030 = cross(vs_out_normal_ws, _6059 * (-1.0));
        vec3 _6031 = cross(_6052, vs_out_normal_ws);
        float _6032 = _6062.x;
        float _6033 = _6066.y;
        float _6035 = _6062.y;
        float _6036 = _6066.x;
        float _6039 = 1.0 / ((_6032 * _6033) - (_6035 * _6036));
        mat3 _6049 = transpose(mat3(((_6030 * _6032) + (_6031 * _6036)) * _6039, ((_6030 * _6035) + (_6031 * _6033)) * _6039, vs_out_normal_ws));
        vec4 _6074 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
        vec3 _6081 = vec3(1.0, 0.0, 0.0) * _6049;
        vec3 _6082 = vec3(0.0, 1.0, 0.0) * _6049;
        vec3 _6083 = vec3(0.0, 0.0, 1.0) * _6049;
        vec3 _6086 = cross(_6081, _6082);
        vec3 _6089 = vec3(1.0 / dot(_6083, _6086));
        mat3 _6093 = mat3(cross(_6082, _6083) * _6089, cross(_6083, _6081) * _6089, _6086 * _6089);
        vec3 _5953 = (vs_out_position_ws - (_6074.xyz / vec3(_6074.w))) * _6093;
        float _6108 = _5953.z;
        vec3 _6113 = vec3(texture_uv, 0.0);
        float _13739;
        do
        {
            _6204 = (_6113 + (_5953 * ((-0.100000001490116119384765625) / _6108))) - _6113;
            float _6233 = mix(0.0, 1.0, pow(_5918 * 0.5, 2.0));
            vec3 _6236 = _6113 + (_6204 * vec3(_6233));
            vec2 _6377 = _6236.xy;
            vec3 _6415 = (vec3(textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _6377, _5895).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _6377, _5895).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _6377, _5895).x) - vec3(1.0)) + _5936;
            float _6382 = _6236.z - ((max(max(_5925, _6415.x), max(_6415.y, _6415.z)) - 1.0) * 0.100000001490116119384765625);
            bool _15654 = (_6382 < 0.0) ? true : false;
            float _13703;
            bool _13708;
            float _13714;
            float _13724;
            float _13734;
            if (_15654)
            {
                _13734 = _6382;
                _13724 = 0.0;
                _13714 = _6233;
                _13708 = _15654;
                _13703 = 0.0;
            }
            else
            {
                float _13705;
                float _13726;
                _13726 = _6382;
                _13705 = _6233;
                float _6262;
                uint _6280;
                float _6455;
                bool _15655;
                bool _13709;
                float _13715;
                float _13735;
                uint _13699 = 1u;
                bool _13710 = _15654;
                for (;;)
                {
                    if (!(_13699 < 3u))
                    {
                        _13735 = 0.0;
                        _13715 = 1.0;
                        _13709 = _13710;
                        break;
                    }
                    _6262 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_13699) + _5918) * 0.5, 2.0)));
                    vec3 _6265 = _6113 + (_6204 * vec3(_6262));
                    vec2 _6450 = _6265.xy;
                    vec3 _6488 = (vec3(textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _6450, _5895).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _6450, _5895).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _6450, _5895).x) - vec3(1.0)) + _5936;
                    _6455 = _6265.z - ((max(max(_5925, _6488.x), max(_6488.y, _6488.z)) - 1.0) * 0.100000001490116119384765625);
                    _15655 = (_6455 < 0.0) ? true : false;
                    if (_15655)
                    {
                        _13735 = _6455;
                        _13715 = _6262;
                        _13709 = _15655;
                        break;
                    }
                    _6280 = _13699 + 1u;
                    _13699 = _6280;
                    _13726 = _6455;
                    _13710 = _15655;
                    _13705 = _6262;
                    continue;
                }
                _13734 = _13735;
                _13724 = _13726;
                _13714 = _13715;
                _13708 = _13709;
                _13703 = _13705;
            }
            if (_13708)
            {
                float _13712;
                float _13722;
                float _13732;
                float _13736;
                _13736 = _13703;
                _13732 = _13734;
                _13722 = _13724;
                _13712 = _13714;
                uint _6326;
                float _15657;
                float _15658;
                float _15659;
                float _15660;
                uint _13711 = 0u;
                for (;;)
                {
                    if (!(_13711 < 4u))
                    {
                        break;
                    }
                    float _6306 = (_13736 + _13712) * 0.5;
                    vec3 _6309 = _6113 + (_6204 * vec3(_6306));
                    vec2 _6523 = _6309.xy;
                    vec3 _6561 = (vec3(textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _6523, _5895).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _6523, _5895).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _6523, _5895).x) - vec3(1.0)) + _5936;
                    float _6528 = _6309.z - ((max(max(_5925, _6561.x), max(_6561.y, _6561.z)) - 1.0) * 0.100000001490116119384765625);
                    bool _15656 = (_6528 < 0.0) ? true : false;
                    _15657 = _15656 ? _6528 : _13732;
                    _15658 = _15656 ? _13722 : _6528;
                    _15659 = _15656 ? _6306 : _13712;
                    _15660 = _15656 ? _13736 : _6306;
                    _6326 = _13711 + 1u;
                    _13736 = _15660;
                    _13732 = _15657;
                    _13722 = _15658;
                    _13712 = _15659;
                    _13711 = _6326;
                    continue;
                }
                float _6346 = mix(_13736, _13712, _13722 / (_13722 + (-_13732)));
                vec3 _6349 = _6113 + (_6204 * vec3(_6346));
                vec2 _6604 = _6349.xy;
                vec3 _6642 = (vec3(textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _6604, _5895).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _6604, _5895).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _6604, _5895).x) - vec3(1.0)) + _5936;
                _13739 = ((abs(_6349.z - ((max(max(_5925, _6642.x), max(_6642.y, _6642.z)) - 1.0) * 0.100000001490116119384765625)) < (_13722 * 0.89999997615814208984375)) ? true : false) ? _6346 : _13712;
                break;
            }
            else
            {
                _13739 = _13703;
                break;
            }
            break; // unreachable workaround
        } while(false);
        vec3 _15665 = mix(_6204 * _13739, vec3(0.0), bvec3(_6108 > (-1.1754943508222875079687365372222e-38)));
        vec2 _5967 = texture_uv + _15665.xy;
        vec3 _5970 = vs_out_position_ws + (_15665 * _6049);
        vec4 _6677 = (vec4(_5970, 1.0) * current_view.world_to_view) * current_view.view_to_clip;
        vec3 _13744;
        do
        {
            vec3 _6895 = (vec3(textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _5967, _5895).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _5967, _5895).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _5967, _5895).x) - vec3(1.0)) + _5936;
            vec4 _6906 = vec4(equal(vec4(_5925, _6895), vec4(max(max(_5925, _6895.x), max(_6895.y, _6895.z)))));
            vec3 _13742;
            if (_6906.y > 0.0)
            {
                _13742 = textureLod(sampler2D(stone_floor_textures_stone_floor_normal, samplers_llr), _5967, _5895).xyz;
            }
            else
            {
                vec3 _13743;
                if (_6906.z > 0.0)
                {
                    _13743 = textureLod(sampler2D(stone_floor_textures_stone_floor_normal_2, samplers_llr), _5967, _5895).xyz;
                }
                else
                {
                    if (!(_6906.w > 0.0))
                    {
                        _13744 = vec3(0.0, 0.0, 1.0);
                        break;
                    }
                    _13743 = textureLod(sampler2D(stone_floor_textures_stone_floor_normal_3, samplers_llr), _5967, _5895).xyz;
                }
                _13742 = _13743;
            }
            vec3 _6949 = (_13742 * 2.0) - vec3(1.0);
            _6949.z = _6949.z * 0.0999999940395355224609375;
            _13744 = _6949;
            break;
        } while(false);
        _13752 = _5895;
        _13750 = _5967;
        _13749 = _5970;
        _13747 = normalize(_6093 * _13744);
        _13746 = (_6677.xyz / vec3(_6677.w)).z;
    }
    else
    {
        _13752 = 0.0;
        _13750 = texture_uv;
        _13749 = vs_out_position_ws;
        _13747 = vs_out_normal_ws;
        _13746 = gl_FragCoord.z;
    }
    bool _1562 = _13746 < gl_FragCoord.z;
    vec2 _6965 = (_13749.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5);
    vec4 _6969 = textureLod(sampler2D(paths_visual_tex, samplers_lnc), _6965, 0.0);
    float _1595 = _6969.x;
    vec3 _13790;
    if (_5853)
    {
        _13790 = textureLod(sampler2D(paths_visual_tex, samplers_lnc), _6965, 0.0).yzw;
    }
    else
    {
        _13790 = cobblestone_sample;
    }
    vec3 floor_color = _5689 * 0.89999997615814208984375;
    vec3 _13791;
    if (_5701)
    {
        _13791 = vec3(0.374780178070068359375, 0.3005877435207366943359375, 0.2449434697628021240234375);
    }
    else
    {
        vec3 _13792;
        if (frame_constants.glade_theme_id == 3u)
        {
            _13792 = floor_color * 0.75;
        }
        else
        {
            _13792 = floor_color;
        }
        _13791 = _13792;
    }
    float _7006 = pow(_1595, 0.5);
    vec2 _7013 = _13749.xz * 0.20000000298023223876953125;
    vec4 _7021 = texture(sampler2D(material_data_dirtpath_heightmap, samplers_llr), _7013 * 0.4000000059604644775390625, current_view.mip_bias);
    float _7023 = _7021.x;
    vec4 _7029 = texture(sampler2D(material_data_dirt_1, samplers_llr), _7013 * 0.5, current_view.mip_bias);
    vec4 _7038 = texture(sampler2D(material_data_dirt_2, samplers_llr), _7013 * 1.2000000476837158203125, current_view.mip_bias);
    float _7079 = clamp(_7006 * 0.60000002384185791015625, 0.0, 1.0);
    float _7081 = 0.1500000059604644775390625 * (1.0 - _7079);
    float _7082 = _7023 * _7079;
    float _7087 = max(_7081, _7082) - 0.100000001490116119384765625;
    float _7091 = max(_7082 - _7087, 0.0);
    vec3 _7097 = (vec3(1.0) * _7091) / vec3(max(_7081 - _7087, 0.0) + _7091);
    float _7044 = _7097.x;
    float _7100 = clamp(pow(textureLod(sampler2D(dirt_mask_tex, samplers_lnc), _6965, 0.0).x, 0.5) * 0.60000002384185791015625, 0.0, 1.0);
    float _7102 = 0.1500000059604644775390625 * (1.0 - _7100);
    float _7103 = _7023 * _7100;
    float _7108 = max(_7102, _7103) - 0.100000001490116119384765625;
    float _7112 = max(_7103 - _7108, 0.0);
    vec3 _7118 = (vec3(1.0) * _7112) / vec3(max(_7102 - _7108, 0.0) + _7112);
    float _7047 = _7118.x;
    float _13904;
    float _13905;
    if (_5701)
    {
        ivec2 _7139 = ivec2(floor(_13749.xz));
        vec2 _7140 = fract(_13749.xz);
        uvec2 _7141 = uvec2(_7139);
        uint _7191 = _7141.y;
        uint _7197 = _7191 + (_7191 << 10u);
        uint _7199 = _7197 ^ (_7197 >> 6u);
        uint _7201 = _7199 + (_7199 << 3u);
        uint _7203 = _7201 ^ (_7201 >> 11u);
        uint _7211 = (((_7141.x * 1664525u) + (_7203 + (_7203 << 15u))) + 1013904223u) * 1664525u;
        uint _7213 = _7211 ^ (_7211 >> 11u);
        uint _7216 = _7213 ^ ((_7213 << 7u) & 2636928640u);
        uint _7219 = _7216 ^ ((_7216 << 15u) & 4022730752u);
        uint _7221 = _7219 ^ (_7219 >> 18u);
        float _13819;
        _13819 = _13801;
        uint _7238;
        uint _7257;
        float _7263;
        uint _13818 = 0u;
        uint _15511 = _7221;
        for (;;)
        {
            if (!(_13818 < 1u))
            {
                break;
            }
            uint _7249 = _15511 + (_15511 << 10u);
            uint _7251 = _7249 ^ (_7249 >> 6u);
            uint _7253 = _7251 + (_7251 << 3u);
            uint _7255 = _7253 ^ (_7253 >> 11u);
            _7257 = _7255 + (_7255 << 15u);
            _7263 = uintBitsToFloat((_15511 & 8388607u) | 1065353216u) - 1.0;
            _7238 = _13818 + 1u;
            _15511 = _7257;
            _13819 = _7263;
            _13818 = _7238;
            continue;
        }
        uvec2 _7149 = uvec2(_7139 + ivec2(1, 0));
        uint _7267 = _7149.y;
        uint _7273 = _7267 + (_7267 << 10u);
        uint _7275 = _7273 ^ (_7273 >> 6u);
        uint _7277 = _7275 + (_7275 << 3u);
        uint _7279 = _7277 ^ (_7277 >> 11u);
        uint _7287 = (((_7149.x * 1664525u) + (_7279 + (_7279 << 15u))) + 1013904223u) * 1664525u;
        uint _7289 = _7287 ^ (_7287 >> 11u);
        uint _7292 = _7289 ^ ((_7289 << 7u) & 2636928640u);
        uint _7295 = _7292 ^ ((_7292 << 15u) & 4022730752u);
        uint _7297 = _7295 ^ (_7295 >> 18u);
        float _13846;
        _13846 = _13801;
        uint _7314;
        uint _7333;
        float _7339;
        uint _13845 = 0u;
        uint _15510 = _7297;
        for (;;)
        {
            if (!(_13845 < 1u))
            {
                break;
            }
            uint _7325 = _15510 + (_15510 << 10u);
            uint _7327 = _7325 ^ (_7325 >> 6u);
            uint _7329 = _7327 + (_7327 << 3u);
            uint _7331 = _7329 ^ (_7329 >> 11u);
            _7333 = _7331 + (_7331 << 15u);
            _7339 = uintBitsToFloat((_15510 & 8388607u) | 1065353216u) - 1.0;
            _7314 = _13845 + 1u;
            _15510 = _7333;
            _13846 = _7339;
            _13845 = _7314;
            continue;
        }
        uvec2 _7156 = uvec2(_7139 + ivec2(0, 1));
        uint _7343 = _7156.y;
        uint _7349 = _7343 + (_7343 << 10u);
        uint _7351 = _7349 ^ (_7349 >> 6u);
        uint _7353 = _7351 + (_7351 << 3u);
        uint _7355 = _7353 ^ (_7353 >> 11u);
        uint _7363 = (((_7156.x * 1664525u) + (_7355 + (_7355 << 15u))) + 1013904223u) * 1664525u;
        uint _7365 = _7363 ^ (_7363 >> 11u);
        uint _7368 = _7365 ^ ((_7365 << 7u) & 2636928640u);
        uint _7371 = _7368 ^ ((_7368 << 15u) & 4022730752u);
        uint _7373 = _7371 ^ (_7371 >> 18u);
        float _13874;
        _13874 = _13801;
        uint _7390;
        uint _7409;
        float _7415;
        uint _13873 = 0u;
        uint _15509 = _7373;
        for (;;)
        {
            if (!(_13873 < 1u))
            {
                break;
            }
            uint _7401 = _15509 + (_15509 << 10u);
            uint _7403 = _7401 ^ (_7401 >> 6u);
            uint _7405 = _7403 + (_7403 << 3u);
            uint _7407 = _7405 ^ (_7405 >> 11u);
            _7409 = _7407 + (_7407 << 15u);
            _7415 = uintBitsToFloat((_15509 & 8388607u) | 1065353216u) - 1.0;
            _7390 = _13873 + 1u;
            _15509 = _7409;
            _13874 = _7415;
            _13873 = _7390;
            continue;
        }
        uvec2 _7164 = uvec2(_7139 + ivec2(1));
        uint _7419 = _7164.y;
        uint _7425 = _7419 + (_7419 << 10u);
        uint _7427 = _7425 ^ (_7425 >> 6u);
        uint _7429 = _7427 + (_7427 << 3u);
        uint _7431 = _7429 ^ (_7429 >> 11u);
        uint _7439 = (((_7164.x * 1664525u) + (_7431 + (_7431 << 15u))) + 1013904223u) * 1664525u;
        uint _7441 = _7439 ^ (_7439 >> 11u);
        uint _7444 = _7441 ^ ((_7441 << 7u) & 2636928640u);
        uint _7447 = _7444 ^ ((_7444 << 15u) & 4022730752u);
        uint _7449 = _7447 ^ (_7447 >> 18u);
        float _13903;
        _13903 = _13801;
        uint _7466;
        uint _7485;
        float _7491;
        uint _13902 = 0u;
        uint _15508 = _7449;
        for (;;)
        {
            if (!(_13902 < 1u))
            {
                break;
            }
            uint _7477 = _15508 + (_15508 << 10u);
            uint _7479 = _7477 ^ (_7477 >> 6u);
            uint _7481 = _7479 + (_7479 << 3u);
            uint _7483 = _7481 ^ (_7481 >> 11u);
            _7485 = _7483 + (_7483 << 15u);
            _7491 = uintBitsToFloat((_15508 & 8388607u) | 1065353216u) - 1.0;
            _7466 = _13902 + 1u;
            _15508 = _7485;
            _13903 = _7491;
            _13902 = _7466;
            continue;
        }
        vec2 _7497 = (_7140 * _7140) * (vec2(3.0) - (vec2(2.0) * _7140));
        float _7172 = _7497.x;
        float _7173 = 1.0 - _7172;
        float _7175 = _7497.y;
        float _7052 = ((((1.0 - _7175) * ((_13819 * _7173) + (_13846 * _7172))) + ((_13874 * _7173) * _7175)) + ((_13903 * _7172) * _7175)) * 0.4000000059604644775390625;
        _13905 = _7044 - _7052;
        _13904 = _7047 - _7052;
    }
    else
    {
        _13905 = _7044;
        _13904 = _7047;
    }
    vec3 _7063 = mix(mix(_13791, _7038.xyz * 1.10000002384185791015625, vec3(smoothstep(0.20000000298023223876953125, 0.64999997615814208984375, _13904))), _7029.xyz * 1.10000002384185791015625, vec3(smoothstep(0.60000002384185791015625, 1.0, _13905)));
    vec3 _13914;
    if (_5701)
    {
        _13914 = mix(_5689, _7063, vec3(smoothstep(0.0, 0.25, _13905)));
    }
    else
    {
        _13914 = _7063;
    }
    vec4 sampled = textureLod(sampler2D(water_mask_tex, samplers_llc), _6965, 0.0);
    float watermask_sample = sampled.y;
    vec4 sampled_1 = textureLod(sampler2D(material_data_mud, samplers_llr), _6965 * 10.0, 0.0);
    vec3 waterfloor_color = sampled_1.xyz;
    float _2036 = mix(0.100000001490116119384765625, 0.20000000298023223876953125, smoothstep(0.0500000007450580596923828125, 0.20000000298023223876953125, sampled_1.x));
    float _13915;
    do
    {
        float _7506 = abs(watermask_sample - 0.4000000059604644775390625);
        if (_7506 > _2036)
        {
            _13915 = 0.0;
            break;
        }
        float _7510 = _7506 / _2036;
        _13915 = 1.0 - ((_7510 * _7510) * (3.0 - (2.0 * _7510)));
        break;
    } while(false);
    float _13919;
    do
    {
        float _7542 = _6965.x;
        bool _13916;
        if (_7542 < 0.0)
        {
            _13916 = true;
        }
        else
        {
            _13916 = _7542 > 1.0;
        }
        bool _13917;
        if (_13916)
        {
            _13917 = true;
        }
        else
        {
            _13917 = _6965.y < 0.0;
        }
        bool _13918;
        if (_13917)
        {
            _13918 = true;
        }
        else
        {
            _13918 = _6965.y > 1.0;
        }
        if (_13918)
        {
            _13919 = 0.0;
            break;
        }
        else
        {
            _13919 = textureLod(sampler2D(rocky_terrain_tex, samplers_lnc_iso), _6965, 0.0).z;
            break;
        }
        break; // unreachable workaround
    } while(false);
    vec4 _13938;
    if (_5853)
    {
        float _7764 = clamp(1.0 - dot(vec3(1.0), (_13790 * 2.0) * _5921), 0.0, 1.0);
        vec3 _7766 = _13790 * vec3(1.0, 2.0, 1.0);
        vec3 _7607 = (vec3(textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _13750, _13752).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _13750, _13752).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _13750, _13752).x) - vec3(1.0)) + (_7766 / vec3(max(0.00999999977648258209228515625, max(_7766.x, max(_7766.y, _7766.z)))));
        _13938 = vec4(equal(vec4(_7764, _7607), vec4(max(max(_7764, _7607.x), max(_7607.y, _7607.z)))));
    }
    else
    {
        _13938 = vec4(1.0, 0.0, 0.0, 0.0);
    }
    float _14417;
    vec3 _15082;
    float _15344;
    if (_13938.y > 0.0)
    {
        vec4 _10081 = texture(sampler2D(stone_floor_textures_stone_floor_seed, samplers_llr), _13750, current_view.mip_bias);
        float _10085 = _10081.z;
        int _10095 = int(trunc((_10081.x * 32.0) - 0.5) + trunc((_10081.y * 32.0) - 0.5));
        uint _10097 = uint(_10095 ^ 7993234);
        uint _11053 = _10097 + (_10097 << 10u);
        uint _11055 = _11053 ^ (_11053 >> 6u);
        uint _11057 = _11055 + (_11055 << 3u);
        uint _11059 = _11057 ^ (_11057 >> 11u);
        uint _10101 = uint(_10095 ^ 9730541);
        uint _11075 = _10101 + (_10101 << 10u);
        uint _11077 = _11075 ^ (_11075 >> 6u);
        uint _11079 = _11077 + (_11077 << 3u);
        uint _11081 = _11079 ^ (_11079 >> 11u);
        float _11089 = uintBitsToFloat(((_11081 + (_11081 << 15u)) & 8388607u) | 1065353216u) - 1.0;
        vec4 _10130 = texture(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _13750, current_view.mip_bias);
        vec4 _10138 = texture(sampler2D(stone_floor_textures_stone_floor_roughness, samplers_llr), _13750, current_view.mip_bias);
        float _10139 = _10138.x;
        vec2 _10146 = (((_13749.xz * 0.100000001490116119384765625) + vec2((uintBitsToFloat(((_11059 + (_11059 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 0.300000011920928955078125, _11089 * 0.300000011920928955078125)) + vec2(0.5 * _10085)) + vec2(_10139 * 0.100000001490116119384765625);
        vec3 _14364;
        if (false)
        {
            _14364 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_10146, 0.0)).xyz * 0.89999997615814208984375;
        }
        else
        {
            vec3 _14367;
            if (true)
            {
                _14367 = (texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_10146, 3.0)).xyz * 0.89999997615814208984375) * mix(1.0, 1.10000002384185791015625, _10085);
            }
            else
            {
                _14367 = vec3(0.0);
            }
            _14364 = _14367;
        }
        _15344 = mix(0.75, 1.0, _10139) * mix(0.800000011920928955078125, 1.0, _11089);
        _15082 = ((_14364 * 0.800000011920928955078125) * mix(0.699999988079071044921875, 1.0, texture(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _13750, current_view.mip_bias).x)) * 0.85000002384185791015625;
        _14417 = smoothstep(0.20000000298023223876953125, 0.75, 1.0 - _10130.x);
    }
    else
    {
        float _14418;
        vec3 _15083;
        float _15345;
        if (_13938.z > 0.0)
        {
            vec4 _8982 = texture(sampler2D(stone_floor_textures_stone_floor_seed_2, samplers_llr), _13750, current_view.mip_bias);
            float _8986 = _8982.z;
            int _8996 = int(trunc((_8982.x * 32.0) - 0.5) + trunc((_8982.y * 32.0) - 0.5));
            uint _8998 = uint(_8996 ^ 7993234);
            uint _9954 = _8998 + (_8998 << 10u);
            uint _9956 = _9954 ^ (_9954 >> 6u);
            uint _9958 = _9956 + (_9956 << 3u);
            uint _9960 = _9958 ^ (_9958 >> 11u);
            uint _9002 = uint(_8996 ^ 9730541);
            uint _9976 = _9002 + (_9002 << 10u);
            uint _9978 = _9976 ^ (_9976 >> 6u);
            uint _9980 = _9978 + (_9978 << 3u);
            uint _9982 = _9980 ^ (_9980 >> 11u);
            float _9990 = uintBitsToFloat(((_9982 + (_9982 << 15u)) & 8388607u) | 1065353216u) - 1.0;
            vec4 _9031 = texture(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _13750, current_view.mip_bias);
            vec4 _9039 = texture(sampler2D(stone_floor_textures_stone_floor_roughness_2, samplers_llr), _13750, current_view.mip_bias);
            float _9040 = _9039.x;
            vec2 _9047 = (((_13749.xz * 0.100000001490116119384765625) + vec2((uintBitsToFloat(((_9960 + (_9960 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 0.300000011920928955078125, _9990 * 0.300000011920928955078125)) + vec2(0.5 * _8986)) + vec2(_9040 * 0.100000001490116119384765625);
            vec3 _14203;
            if (false)
            {
                _14203 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_9047, 0.0)).xyz * 0.89999997615814208984375;
            }
            else
            {
                vec3 _14206;
                if (true)
                {
                    _14206 = (texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_9047, 3.0)).xyz * 0.89999997615814208984375) * mix(1.0, 1.10000002384185791015625, _8986);
                }
                else
                {
                    _14206 = vec3(0.0);
                }
                _14203 = _14206;
            }
            _15345 = mix(0.75, 1.0, _9040) * mix(0.800000011920928955078125, 1.0, _9990);
            _15083 = ((_14203 * 0.800000011920928955078125) * mix(0.699999988079071044921875, 1.0, texture(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _13750, current_view.mip_bias).x)) * 0.85000002384185791015625;
            _14418 = smoothstep(0.300000011920928955078125, 0.5, 1.0 - _9031.x);
        }
        else
        {
            float _14419;
            vec3 _15084;
            float _15346;
            if (_13938.w > 0.0)
            {
                vec4 _7883 = texture(sampler2D(stone_floor_textures_stone_floor_seed_3, samplers_llr), _13750, current_view.mip_bias);
                float _7887 = _7883.z;
                int _7897 = int(trunc((_7883.x * 32.0) - 0.5) + trunc((_7883.y * 32.0) - 0.5));
                uint _7899 = uint(_7897 ^ 7993234);
                uint _8855 = _7899 + (_7899 << 10u);
                uint _8857 = _8855 ^ (_8855 >> 6u);
                uint _8859 = _8857 + (_8857 << 3u);
                uint _8861 = _8859 ^ (_8859 >> 11u);
                uint _7903 = uint(_7897 ^ 9730541);
                uint _8877 = _7903 + (_7903 << 10u);
                uint _8879 = _8877 ^ (_8877 >> 6u);
                uint _8881 = _8879 + (_8879 << 3u);
                uint _8883 = _8881 ^ (_8881 >> 11u);
                float _8891 = uintBitsToFloat(((_8883 + (_8883 << 15u)) & 8388607u) | 1065353216u) - 1.0;
                vec2 _7924 = ((_13749.xz * 0.100000001490116119384765625) + vec2((uintBitsToFloat(((_8861 + (_8861 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 0.300000011920928955078125, _8891 * 0.300000011920928955078125)) + vec2(0.5 * _7887);
                vec4 _7932 = texture(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _13750, current_view.mip_bias);
                vec4 _7940 = texture(sampler2D(stone_floor_textures_stone_floor_roughness_3, samplers_llr), _13750, current_view.mip_bias);
                vec3 _14042;
                if (false)
                {
                    _14042 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_7924, 0.0)).xyz * 0.89999997615814208984375;
                }
                else
                {
                    vec3 _14045;
                    if (true)
                    {
                        _14045 = (texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_7924, 3.0)).xyz * 0.89999997615814208984375) * mix(1.0, 1.10000002384185791015625, _7887);
                    }
                    else
                    {
                        _14045 = vec3(0.0);
                    }
                    _14042 = _14045;
                }
                _15346 = mix(0.75, 1.0, _7940.x) * mix(0.800000011920928955078125, 1.0, _8891);
                _15084 = ((_14042 * 0.800000011920928955078125) * mix(0.699999988079071044921875, 1.0, texture(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _13750, current_view.mip_bias).x)) * 0.85000002384185791015625;
                _14419 = smoothstep(0.300000011920928955078125, 1.0, 1.0 - _7932.x);
            }
            else
            {
                _15346 = mix(1.0, 0.89999997615814208984375, _13905);
                _15084 = mix(mix(mix(_13914, waterfloor_color, vec3(smoothstep(0.4000000059604644775390625, 0.5, watermask_sample))), waterfloor_color * 0.75, vec3(_13915)), waterfloor_color, vec3(smoothstep(0.3499999940395355224609375, 0.449999988079071044921875, (textureLod(sampler2D(garden_mask_tex, samplers_llc), _6965, 0.0).y - smoothstep(0.300000011920928955078125, 0.5, _7006)) - smoothstep(0.300000011920928955078125, 0.5, _13919)) * (_5701 ? 0.60000002384185791015625 : 1.0)));
                _14419 = 0.0;
            }
            _15345 = _15346;
            _15083 = _15084;
            _14418 = _14419;
        }
        _15344 = _15345;
        _15082 = _15083;
        _14417 = _14418;
    }
    bool _14415;
    if (_5701)
    {
        _14415 = vs_out_position_ws.y > 0.0;
    }
    else
    {
        _14415 = false;
    }
    vec3 _15341;
    vec3 _15358;
    if (_14415)
    {
        vec4 _7705 = texture(sampler2D(material_data_dirtpath_heightmap, samplers_llr), _7013 * 0.1500000059604644775390625, current_view.mip_bias);
        vec2 _7739 = vs_out_position_ws.xz * 5.0;
        ivec2 _11110 = ivec2(floor(_7739));
        vec2 _11111 = fract(_7739);
        uvec2 _11112 = uvec2(_11110);
        uint _11162 = _11112.y;
        uint _11168 = _11162 + (_11162 << 10u);
        uint _11170 = _11168 ^ (_11168 >> 6u);
        uint _11172 = _11170 + (_11170 << 3u);
        uint _11174 = _11172 ^ (_11172 >> 11u);
        uint _11182 = (((_11112.x * 1664525u) + (_11174 + (_11174 << 15u))) + 1013904223u) * 1664525u;
        uint _11184 = _11182 ^ (_11182 >> 11u);
        uint _11187 = _11184 ^ ((_11184 << 7u) & 2636928640u);
        uint _11190 = _11187 ^ ((_11187 << 15u) & 4022730752u);
        uint _11192 = _11190 ^ (_11190 >> 18u);
        float _14664;
        _14664 = _13801;
        uint _11209;
        uint _11228;
        float _11234;
        uint _14663 = 0u;
        uint _15500 = _11192;
        for (;;)
        {
            if (!(_14663 < 1u))
            {
                break;
            }
            uint _11220 = _15500 + (_15500 << 10u);
            uint _11222 = _11220 ^ (_11220 >> 6u);
            uint _11224 = _11222 + (_11222 << 3u);
            uint _11226 = _11224 ^ (_11224 >> 11u);
            _11228 = _11226 + (_11226 << 15u);
            _11234 = uintBitsToFloat((_15500 & 8388607u) | 1065353216u) - 1.0;
            _11209 = _14663 + 1u;
            _15500 = _11228;
            _14664 = _11234;
            _14663 = _11209;
            continue;
        }
        uvec2 _11120 = uvec2(_11110 + ivec2(1, 0));
        uint _11238 = _11120.y;
        uint _11244 = _11238 + (_11238 << 10u);
        uint _11246 = _11244 ^ (_11244 >> 6u);
        uint _11248 = _11246 + (_11246 << 3u);
        uint _11250 = _11248 ^ (_11248 >> 11u);
        uint _11258 = (((_11120.x * 1664525u) + (_11250 + (_11250 << 15u))) + 1013904223u) * 1664525u;
        uint _11260 = _11258 ^ (_11258 >> 11u);
        uint _11263 = _11260 ^ ((_11260 << 7u) & 2636928640u);
        uint _11266 = _11263 ^ ((_11263 << 15u) & 4022730752u);
        uint _11268 = _11266 ^ (_11266 >> 18u);
        float _14799;
        _14799 = _13801;
        uint _11285;
        uint _11304;
        float _11310;
        uint _14798 = 0u;
        uint _15499 = _11268;
        for (;;)
        {
            if (!(_14798 < 1u))
            {
                break;
            }
            uint _11296 = _15499 + (_15499 << 10u);
            uint _11298 = _11296 ^ (_11296 >> 6u);
            uint _11300 = _11298 + (_11298 << 3u);
            uint _11302 = _11300 ^ (_11300 >> 11u);
            _11304 = _11302 + (_11302 << 15u);
            _11310 = uintBitsToFloat((_15499 & 8388607u) | 1065353216u) - 1.0;
            _11285 = _14798 + 1u;
            _15499 = _11304;
            _14799 = _11310;
            _14798 = _11285;
            continue;
        }
        uvec2 _11127 = uvec2(_11110 + ivec2(0, 1));
        uint _11314 = _11127.y;
        uint _11320 = _11314 + (_11314 << 10u);
        uint _11322 = _11320 ^ (_11320 >> 6u);
        uint _11324 = _11322 + (_11322 << 3u);
        uint _11326 = _11324 ^ (_11324 >> 11u);
        uint _11334 = (((_11127.x * 1664525u) + (_11326 + (_11326 << 15u))) + 1013904223u) * 1664525u;
        uint _11336 = _11334 ^ (_11334 >> 11u);
        uint _11339 = _11336 ^ ((_11336 << 7u) & 2636928640u);
        uint _11342 = _11339 ^ ((_11339 << 15u) & 4022730752u);
        uint _11344 = _11342 ^ (_11342 >> 18u);
        float _14935;
        _14935 = _13801;
        uint _11361;
        uint _11380;
        float _11386;
        uint _14934 = 0u;
        uint _15498 = _11344;
        for (;;)
        {
            if (!(_14934 < 1u))
            {
                break;
            }
            uint _11372 = _15498 + (_15498 << 10u);
            uint _11374 = _11372 ^ (_11372 >> 6u);
            uint _11376 = _11374 + (_11374 << 3u);
            uint _11378 = _11376 ^ (_11376 >> 11u);
            _11380 = _11378 + (_11378 << 15u);
            _11386 = uintBitsToFloat((_15498 & 8388607u) | 1065353216u) - 1.0;
            _11361 = _14934 + 1u;
            _15498 = _11380;
            _14935 = _11386;
            _14934 = _11361;
            continue;
        }
        uvec2 _11135 = uvec2(_11110 + ivec2(1));
        uint _11390 = _11135.y;
        uint _11396 = _11390 + (_11390 << 10u);
        uint _11398 = _11396 ^ (_11396 >> 6u);
        uint _11400 = _11398 + (_11398 << 3u);
        uint _11402 = _11400 ^ (_11400 >> 11u);
        uint _11410 = (((_11135.x * 1664525u) + (_11402 + (_11402 << 15u))) + 1013904223u) * 1664525u;
        uint _11412 = _11410 ^ (_11410 >> 11u);
        uint _11415 = _11412 ^ ((_11412 << 7u) & 2636928640u);
        uint _11418 = _11415 ^ ((_11415 << 15u) & 4022730752u);
        uint _11420 = _11418 ^ (_11418 >> 18u);
        float _15072;
        _15072 = _13801;
        uint _11437;
        uint _11456;
        float _11462;
        uint _15071 = 0u;
        uint _15497 = _11420;
        for (;;)
        {
            if (!(_15071 < 1u))
            {
                break;
            }
            uint _11448 = _15497 + (_15497 << 10u);
            uint _11450 = _11448 ^ (_11448 >> 6u);
            uint _11452 = _11450 + (_11450 << 3u);
            uint _11454 = _11452 ^ (_11452 >> 11u);
            _11456 = _11454 + (_11454 << 15u);
            _11462 = uintBitsToFloat((_15497 & 8388607u) | 1065353216u) - 1.0;
            _11437 = _15071 + 1u;
            _15497 = _11456;
            _15072 = _11462;
            _15071 = _11437;
            continue;
        }
        vec2 _11468 = (_11111 * _11111) * (vec2(3.0) - (vec2(2.0) * _11111));
        float _11143 = _11468.x;
        float _11144 = 1.0 - _11143;
        float _11146 = _11468.y;
        vec3 _7750 = vec3((((clamp(smoothstep(0.20000000298023223876953125, 1.0, _7705.x * mix(0.64999997615814208984375, 1.0, _14417)), 0.100000001490116119384765625, mix(0.5, 0.20000000298023223876953125, _1595)) * clamp(_13747.y, 0.0, 1.0)) * (1.0 - (_1595 * 0.5))) + mix(0.0, 0.20000000298023223876953125, smoothstep(0.0, 0.4000000059604644775390625, _14417))) * (1.0 - smoothstep(0.0, 0.300000011920928955078125, textureLod(sampler2D(building_mask_tex, samplers_llc), _5645, 0.0).y - ((((((1.0 - _11146) * ((_14664 * _11144) + (_14799 * _11143))) + ((_14935 * _11144) * _11146)) + ((_15072 * _11143) * _11146)) * 0.100000001490116119384765625) * _14417))));
        _15358 = normalize(mix(_13747, vs_out_normal_ws, _7750));
        _15341 = mix(_15082, vec3(0.699999988079071044921875), _7750);
    }
    else
    {
        _15358 = _13747;
        _15341 = _15082;
    }
    vec3 _11484 = (_15358 * 0.5) + vec3(0.5);
    vec3 _11592 = sqrt(clamp(_15341, vec3(0.0), vec3(1.0)));
    uint _11607 = (uint((clamp(_11592.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_11592.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_11592.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _15644 = uvec2(((uint((clamp(_11484.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_11484.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_11484.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(_15344, 0.0, 1.0) * 255.0) + 0.5) << uint(24)), _11607);
    _15644.y = _11607 | ((55u | (uint(_1562 ? true : false) << 7u)) << 24u);
    entryPointParam_ps_main_gbuffer = _15644;
    gl_FragDepth = _1562 ? _13746 : gl_FragCoord.z;
}

