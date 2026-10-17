#version 460
#extension GL_ARB_conservative_depth : require
#extension GL_EXT_demote_to_helper_invocation : require
#extension GL_KHR_shader_subgroup_quad : require
layout(depth_less) out float gl_FragDepth;

const uvec2 _102[4] = uvec2[](uvec2(0u), uvec2(0u, 1u), uvec2(1u), uvec2(1u, 0u));
float _13826;

layout(set = 0, binding = 0, std140) uniform MaterialData_natural
{
    uint receive_contact_shadows;
    uint is_semitransparent;
    int is_terrain;
    float roughness_param;
} material_data;

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

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

layout(set = 18, binding = 0, std140) uniform StoneFloorTextures_natural
{
    uvec2 stone_floor_height_dims;
} stone_floor_textures;

layout(set = 0, binding = 1) uniform texture2D material_data_albedo_map;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 2, binding = 0) uniform sampler samplers_lnc;
layout(set = 17, binding = 0) uniform texture2D paths_visual_margin_tex;
layout(set = 18, binding = 3) uniform texture2D stone_floor_textures_stone_floor_height;
layout(set = 18, binding = 7) uniform texture2D stone_floor_textures_stone_floor_height_2;
layout(set = 18, binding = 11) uniform texture2D stone_floor_textures_stone_floor_height_3;
layout(set = 18, binding = 1) uniform texture2D stone_floor_textures_stone_floor_normal;
layout(set = 18, binding = 6) uniform texture2D stone_floor_textures_stone_floor_normal_2;
layout(set = 18, binding = 10) uniform texture2D stone_floor_textures_stone_floor_normal_3;
layout(set = 0, binding = 2) uniform texture2D material_data_dirtpath_heightmap;
layout(set = 0, binding = 3) uniform texture2D material_data_dirt_1;
layout(set = 0, binding = 4) uniform texture2D material_data_dirt_2;
layout(set = 18, binding = 2) uniform texture2D stone_floor_textures_stone_floor_seed;
layout(set = 18, binding = 4) uniform texture2D stone_floor_textures_stone_floor_roughness;
layout(set = 21, binding = 1) uniform texture2DArray wall_color_data_brick_colors;
layout(set = 18, binding = 5) uniform texture2D stone_floor_textures_stone_floor_seed_2;
layout(set = 18, binding = 8) uniform texture2D stone_floor_textures_stone_floor_roughness_2;
layout(set = 18, binding = 9) uniform texture2D stone_floor_textures_stone_floor_seed_3;
layout(set = 18, binding = 12) uniform texture2D stone_floor_textures_stone_floor_roughness_3;
layout(set = 2, binding = 3) uniform sampler samplers_llc;
layout(set = 12, binding = 0) uniform texture2D building_mask_tex;

layout(location = 0) in vec2 vs_out_frag_uv;
layout(location = 2) in vec3 vs_out_frag_position_ws;
layout(location = 1) in vec3 vs_out_frag_normal_ws;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    if (material_data.is_semitransparent != 0u)
    {
        if (all(notEqual((uvec2(gl_FragCoord.xy) & uvec2(1u)), _102[frame_counter.index & 3u])))
        {
            demote;
        }
    }
    vec4 sampled = texture(sampler2D(material_data_albedo_map, samplers_llr), vs_out_frag_uv, current_view.mip_bias);
    vec3 albedo = sampled.xyz;
    vec3 _231 = normalize(vs_out_frag_normal_ws);
    bool _5469 = frame_constants.glade_theme_id == 4u;
    bool _13365;
    if (_5469)
    {
        _13365 = int(!(material_data.is_terrain != 0)) != 0;
    }
    else
    {
        _13365 = false;
    }
    vec3 _13752;
    if (_13365)
    {
        _13752 = mix(albedo, vec3(0.699999988079071044921875), vec3(smoothstep(0.5, 1.0, clamp(_231.y, 0.0, 1.0))));
    }
    else
    {
        _13752 = albedo;
    }
    float _16908;
    vec3 _17934;
    float _18047;
    vec3 _18160;
    if (material_data.is_terrain != 0)
    {
        float _16909;
        vec3 _17935;
        float _18048;
        vec3 _18161;
        if (length(vs_out_frag_position_ws.xz - clamp(vs_out_frag_position_ws.xz, vec2(-65.0), vec2(65.0))) < 30.0)
        {
            float _16910;
            vec3 _17936;
            float _18049;
            vec3 _18162;
            do
            {
                vec4 _5584 = textureLod(sampler2D(paths_visual_margin_tex, samplers_lnc), (vs_out_frag_position_ws.xz * vec2(0.005263158120214939117431640625)) + vec2(0.5), 0.0);
                float _5487 = _5584.x;
                float _5488 = _5584.y;
                float _5492 = max(_5584.z, _5584.w);
                bool _5494 = max(max(_5487, _5488), _5492) > 0.0039215688593685626983642578125;
                bool _5589 = _5494 || subgroupQuadSwapHorizontal(_5494);
                bool _5591 = _5589 || subgroupQuadSwapVertical(_5589);
                if (!(_5591 || subgroupQuadSwapDiagonal(_5591)))
                {
                    _18162 = _231;
                    _18049 = material_data.roughness_param;
                    _17936 = _13752;
                    _16910 = gl_FragCoord.z;
                    break;
                }
                vec3 _5499 = _5584.yzw;
                bool _5505 = max(_5488, _5492) > 0.0039215688593685626983642578125;
                bool _5596 = subgroupQuadSwapHorizontal(_5505);
                bool _5597 = _5505 || _5596;
                bool _5598 = subgroupQuadSwapVertical(_5597);
                bool _5599 = _5597 || _5598;
                bool _5600 = subgroupQuadSwapDiagonal(_5599);
                bool _5601 = _5599 || _5600;
                vec2 _5509 = vs_out_frag_position_ws.xz * 0.20000000298023223876953125;
                uvec2 _5616 = uvec2(gl_FragCoord.yx);
                float _5656 = 5.588237762451171875 * float(frame_counter.index % 64u);
                float _5666 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_5616.x) + _5656)) + (0.005837149918079376220703125 * (float(_5616.y) + _5656))));
                float _5669 = 1.0 - _5487;
                float _5673 = clamp(1.0 - dot(vec3(1.0), (_5499 * 2.0) * _5669), 0.0, 1.0);
                vec3 _5675 = _5499 * vec3(1.0, 2.0, 1.0);
                vec3 _5684 = _5675 / vec3(max(0.00999999977648258209228515625, max(_5675.x, max(_5675.y, _5675.z))));
                float _13548;
                vec3 _13549;
                vec3 _13551;
                vec2 _13552;
                float _13572;
                if (_5601)
                {
                    vec3 _5952;
                    vec2 _5639 = textureQueryLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _5509);
                    float _5643 = _5639.x + current_view.mip_bias;
                    vec3 _5800 = dFdx(vs_out_frag_position_ws);
                    vec3 _5807 = dFdy(vs_out_frag_position_ws);
                    vec2 _5810 = dFdx(_5509);
                    vec2 _5817 = dFdy(_5509);
                    vec2 _5814 = _5817 * (-1.0);
                    vec3 _5778 = cross(_231, _5807 * (-1.0));
                    vec3 _5779 = cross(_5800, _231);
                    float _5780 = _5810.x;
                    float _5781 = _5814.y;
                    float _5783 = _5810.y;
                    float _5784 = _5814.x;
                    float _5787 = 1.0 / ((_5780 * _5781) - (_5783 * _5784));
                    mat3 _5797 = transpose(mat3(((_5778 * _5780) + (_5779 * _5784)) * _5787, ((_5778 * _5783) + (_5779 * _5781)) * _5787, _231));
                    vec4 _5822 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
                    vec3 _5829 = vec3(1.0, 0.0, 0.0) * _5797;
                    vec3 _5830 = vec3(0.0, 1.0, 0.0) * _5797;
                    vec3 _5831 = vec3(0.0, 0.0, 1.0) * _5797;
                    vec3 _5834 = cross(_5829, _5830);
                    vec3 _5837 = vec3(1.0 / dot(_5831, _5834));
                    mat3 _5841 = mat3(cross(_5830, _5831) * _5837, cross(_5831, _5829) * _5837, _5834 * _5837);
                    vec3 _5701 = (vs_out_frag_position_ws - (_5822.xyz / vec3(_5822.w))) * _5841;
                    float _5856 = _5701.z;
                    vec3 _5861 = vec3(_5509, 0.0);
                    float _13465;
                    do
                    {
                        _5952 = (_5861 + (_5701 * ((-0.100000001490116119384765625) / _5856))) - _5861;
                        float _5981 = mix(0.0, 1.0, pow(_5666 * 0.5, 2.0));
                        vec3 _5984 = _5861 + (_5952 * vec3(_5981));
                        vec2 _6125 = _5984.xy;
                        vec3 _6163 = (vec3(textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _6125, _5643).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _6125, _5643).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _6125, _5643).x) - vec3(1.0)) + _5684;
                        float _6130 = _5984.z - ((max(max(_5673, _6163.x), max(_6163.y, _6163.z)) - 1.0) * 0.100000001490116119384765625);
                        bool _18672 = (_6130 < 0.0) ? true : false;
                        float _13393;
                        bool _13398;
                        float _13420;
                        float _13430;
                        float _13440;
                        if (_18672)
                        {
                            _13440 = _6130;
                            _13430 = 0.0;
                            _13420 = _5981;
                            _13398 = _18672;
                            _13393 = 0.0;
                        }
                        else
                        {
                            float _13395;
                            float _13432;
                            _13432 = _6130;
                            _13395 = _5981;
                            float _6010;
                            uint _6028;
                            float _6203;
                            bool _18673;
                            bool _13399;
                            float _13421;
                            float _13441;
                            uint _13381 = 1u;
                            bool _13400 = _18672;
                            for (;;)
                            {
                                if (!(_13381 < 3u))
                                {
                                    _13441 = 0.0;
                                    _13421 = 1.0;
                                    _13399 = _13400;
                                    break;
                                }
                                _6010 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_13381) + _5666) * 0.5, 2.0)));
                                vec3 _6013 = _5861 + (_5952 * vec3(_6010));
                                vec2 _6198 = _6013.xy;
                                vec3 _6236 = (vec3(textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _6198, _5643).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _6198, _5643).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _6198, _5643).x) - vec3(1.0)) + _5684;
                                _6203 = _6013.z - ((max(max(_5673, _6236.x), max(_6236.y, _6236.z)) - 1.0) * 0.100000001490116119384765625);
                                _18673 = (_6203 < 0.0) ? true : false;
                                if (_18673)
                                {
                                    _13441 = _6203;
                                    _13421 = _6010;
                                    _13399 = _18673;
                                    break;
                                }
                                _6028 = _13381 + 1u;
                                _13381 = _6028;
                                _13432 = _6203;
                                _13400 = _18673;
                                _13395 = _6010;
                                continue;
                            }
                            _13440 = _13441;
                            _13430 = _13432;
                            _13420 = _13421;
                            _13398 = _13399;
                            _13393 = _13395;
                        }
                        if (_13398)
                        {
                            float _13418;
                            float _13428;
                            float _13438;
                            float _13442;
                            _13442 = _13393;
                            _13438 = _13440;
                            _13428 = _13430;
                            _13418 = _13420;
                            uint _6074;
                            float _18675;
                            float _18676;
                            float _18677;
                            float _18678;
                            uint _13409 = 0u;
                            for (;;)
                            {
                                if (!(_13409 < 4u))
                                {
                                    break;
                                }
                                float _6054 = (_13442 + _13418) * 0.5;
                                vec3 _6057 = _5861 + (_5952 * vec3(_6054));
                                vec2 _6271 = _6057.xy;
                                vec3 _6309 = (vec3(textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _6271, _5643).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _6271, _5643).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _6271, _5643).x) - vec3(1.0)) + _5684;
                                float _6276 = _6057.z - ((max(max(_5673, _6309.x), max(_6309.y, _6309.z)) - 1.0) * 0.100000001490116119384765625);
                                bool _18674 = (_6276 < 0.0) ? true : false;
                                _18675 = _18674 ? _6276 : _13438;
                                _18676 = _18674 ? _13428 : _6276;
                                _18677 = _18674 ? _6054 : _13418;
                                _18678 = _18674 ? _13442 : _6054;
                                _6074 = _13409 + 1u;
                                _13442 = _18678;
                                _13438 = _18675;
                                _13428 = _18676;
                                _13418 = _18677;
                                _13409 = _6074;
                                continue;
                            }
                            float _6094 = mix(_13442, _13418, _13428 / (_13428 + (-_13438)));
                            vec3 _6097 = _5861 + (_5952 * vec3(_6094));
                            vec2 _6352 = _6097.xy;
                            vec3 _6390 = (vec3(textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _6352, _5643).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _6352, _5643).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _6352, _5643).x) - vec3(1.0)) + _5684;
                            _13465 = ((abs(_6097.z - ((max(max(_5673, _6390.x), max(_6390.y, _6390.z)) - 1.0) * 0.100000001490116119384765625)) < (_13428 * 0.89999997615814208984375)) ? true : false) ? _6094 : _13418;
                            break;
                        }
                        else
                        {
                            _13465 = _13393;
                            break;
                        }
                        break; // unreachable workaround
                    } while(false);
                    vec3 _18683 = mix(_5952 * _13465, vec3(0.0), bvec3(_5856 > (-1.1754943508222875079687365372222e-38)));
                    vec2 _5715 = _5509 + _18683.xy;
                    vec3 _5718 = vs_out_frag_position_ws + (_18683 * _5797);
                    vec4 _6425 = (vec4(_5718, 1.0) * current_view.world_to_view) * current_view.view_to_clip;
                    vec3 _13546;
                    do
                    {
                        vec3 _6643 = (vec3(textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _5715, _5643).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _5715, _5643).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _5715, _5643).x) - vec3(1.0)) + _5684;
                        vec4 _6654 = vec4(equal(vec4(_5673, _6643), vec4(max(max(_5673, _6643.x), max(_6643.y, _6643.z)))));
                        vec3 _13528;
                        if (_6654.y > 0.0)
                        {
                            _13528 = textureLod(sampler2D(stone_floor_textures_stone_floor_normal, samplers_llr), _5715, _5643).xyz;
                        }
                        else
                        {
                            vec3 _13529;
                            if (_6654.z > 0.0)
                            {
                                _13529 = textureLod(sampler2D(stone_floor_textures_stone_floor_normal_2, samplers_llr), _5715, _5643).xyz;
                            }
                            else
                            {
                                if (!(_6654.w > 0.0))
                                {
                                    _13546 = vec3(0.0, 0.0, 1.0);
                                    break;
                                }
                                _13529 = textureLod(sampler2D(stone_floor_textures_stone_floor_normal_3, samplers_llr), _5715, _5643).xyz;
                            }
                            _13528 = _13529;
                        }
                        vec3 _6697 = (_13528 * 2.0) - vec3(1.0);
                        _6697.z = _6697.z * 0.0999999940395355224609375;
                        _13546 = _6697;
                        break;
                    } while(false);
                    _13572 = _5643;
                    _13552 = _5715;
                    _13551 = _5718;
                    _13549 = normalize(_5841 * _13546);
                    _13548 = (_6425.xyz / vec3(_6425.w)).z;
                }
                else
                {
                    _13572 = 0.0;
                    _13552 = _5509;
                    _13551 = vs_out_frag_position_ws;
                    _13549 = _231;
                    _13548 = gl_FragCoord.z;
                }
                vec4 _13589;
                if (_5601)
                {
                    _13589 = textureLod(sampler2D(paths_visual_margin_tex, samplers_lnc), (_13551.xz * vec2(0.005263158120214939117431640625)) + vec2(0.5), 0.0);
                }
                else
                {
                    _13589 = _5584;
                }
                vec2 _6735 = _13551.xz * 0.20000000298023223876953125;
                vec4 _6743 = texture(sampler2D(material_data_dirtpath_heightmap, samplers_llr), _6735 * 0.4000000059604644775390625, current_view.mip_bias);
                float _6745 = _6743.x;
                vec4 _6751 = texture(sampler2D(material_data_dirt_1, samplers_llr), _6735 * 0.5, current_view.mip_bias);
                vec4 _6760 = texture(sampler2D(material_data_dirt_2, samplers_llr), _6735 * 1.2000000476837158203125, current_view.mip_bias);
                float _6801 = clamp(pow(_13589.x, 0.5) * 0.60000002384185791015625, 0.0, 1.0);
                float _6803 = 0.1500000059604644775390625 * (1.0 - _6801);
                float _6804 = _6745 * _6801;
                float _6809 = max(_6803, _6804) - 0.100000001490116119384765625;
                float _6813 = max(_6804 - _6809, 0.0);
                vec3 _6819 = (vec3(1.0) * _6813) / vec3(max(_6803 - _6809, 0.0) + _6813);
                float _6766 = _6819.x;
                float _6822 = clamp(pow(max(max(_13589.x, _13589.y), max(_13589.z, _13589.w)), 0.5) * 0.60000002384185791015625, 0.0, 1.0);
                float _6824 = 0.1500000059604644775390625 * (1.0 - _6822);
                float _6825 = _6745 * _6822;
                float _6830 = max(_6824, _6825) - 0.100000001490116119384765625;
                float _6834 = max(_6825 - _6830, 0.0);
                vec3 _6840 = (vec3(1.0) * _6834) / vec3(max(_6824 - _6830, 0.0) + _6834);
                float _6769 = _6840.x;
                float _13931;
                float _13932;
                if (_5469)
                {
                    ivec2 _6861 = ivec2(floor(_13551.xz));
                    vec2 _6862 = fract(_13551.xz);
                    uvec2 _6863 = uvec2(_6861);
                    uint _6913 = _6863.y;
                    uint _6919 = _6913 + (_6913 << 10u);
                    uint _6921 = _6919 ^ (_6919 >> 6u);
                    uint _6923 = _6921 + (_6921 << 3u);
                    uint _6925 = _6923 ^ (_6923 >> 11u);
                    uint _6933 = (((_6863.x * 1664525u) + (_6925 + (_6925 << 15u))) + 1013904223u) * 1664525u;
                    uint _6935 = _6933 ^ (_6933 >> 11u);
                    uint _6938 = _6935 ^ ((_6935 << 7u) & 2636928640u);
                    uint _6941 = _6938 ^ ((_6938 << 15u) & 4022730752u);
                    uint _6943 = _6941 ^ (_6941 >> 18u);
                    float _13845;
                    _13845 = _13826;
                    uint _6960;
                    uint _6979;
                    float _6985;
                    uint _13844 = 0u;
                    uint _16900 = _6943;
                    for (;;)
                    {
                        if (!(_13844 < 1u))
                        {
                            break;
                        }
                        uint _6971 = _16900 + (_16900 << 10u);
                        uint _6973 = _6971 ^ (_6971 >> 6u);
                        uint _6975 = _6973 + (_6973 << 3u);
                        uint _6977 = _6975 ^ (_6975 >> 11u);
                        _6979 = _6977 + (_6977 << 15u);
                        _6985 = uintBitsToFloat((_16900 & 8388607u) | 1065353216u) - 1.0;
                        _6960 = _13844 + 1u;
                        _16900 = _6979;
                        _13845 = _6985;
                        _13844 = _6960;
                        continue;
                    }
                    uvec2 _6871 = uvec2(_6861 + ivec2(1, 0));
                    uint _6989 = _6871.y;
                    uint _6995 = _6989 + (_6989 << 10u);
                    uint _6997 = _6995 ^ (_6995 >> 6u);
                    uint _6999 = _6997 + (_6997 << 3u);
                    uint _7001 = _6999 ^ (_6999 >> 11u);
                    uint _7009 = (((_6871.x * 1664525u) + (_7001 + (_7001 << 15u))) + 1013904223u) * 1664525u;
                    uint _7011 = _7009 ^ (_7009 >> 11u);
                    uint _7014 = _7011 ^ ((_7011 << 7u) & 2636928640u);
                    uint _7017 = _7014 ^ ((_7014 << 15u) & 4022730752u);
                    uint _7019 = _7017 ^ (_7017 >> 18u);
                    float _13871;
                    _13871 = _13826;
                    uint _7036;
                    uint _7055;
                    float _7061;
                    uint _13870 = 0u;
                    uint _16899 = _7019;
                    for (;;)
                    {
                        if (!(_13870 < 1u))
                        {
                            break;
                        }
                        uint _7047 = _16899 + (_16899 << 10u);
                        uint _7049 = _7047 ^ (_7047 >> 6u);
                        uint _7051 = _7049 + (_7049 << 3u);
                        uint _7053 = _7051 ^ (_7051 >> 11u);
                        _7055 = _7053 + (_7053 << 15u);
                        _7061 = uintBitsToFloat((_16899 & 8388607u) | 1065353216u) - 1.0;
                        _7036 = _13870 + 1u;
                        _16899 = _7055;
                        _13871 = _7061;
                        _13870 = _7036;
                        continue;
                    }
                    uvec2 _6878 = uvec2(_6861 + ivec2(0, 1));
                    uint _7065 = _6878.y;
                    uint _7071 = _7065 + (_7065 << 10u);
                    uint _7073 = _7071 ^ (_7071 >> 6u);
                    uint _7075 = _7073 + (_7073 << 3u);
                    uint _7077 = _7075 ^ (_7075 >> 11u);
                    uint _7085 = (((_6878.x * 1664525u) + (_7077 + (_7077 << 15u))) + 1013904223u) * 1664525u;
                    uint _7087 = _7085 ^ (_7085 >> 11u);
                    uint _7090 = _7087 ^ ((_7087 << 7u) & 2636928640u);
                    uint _7093 = _7090 ^ ((_7090 << 15u) & 4022730752u);
                    uint _7095 = _7093 ^ (_7093 >> 18u);
                    float _13898;
                    _13898 = _13826;
                    uint _7112;
                    uint _7131;
                    float _7137;
                    uint _13897 = 0u;
                    uint _16898 = _7095;
                    for (;;)
                    {
                        if (!(_13897 < 1u))
                        {
                            break;
                        }
                        uint _7123 = _16898 + (_16898 << 10u);
                        uint _7125 = _7123 ^ (_7123 >> 6u);
                        uint _7127 = _7125 + (_7125 << 3u);
                        uint _7129 = _7127 ^ (_7127 >> 11u);
                        _7131 = _7129 + (_7129 << 15u);
                        _7137 = uintBitsToFloat((_16898 & 8388607u) | 1065353216u) - 1.0;
                        _7112 = _13897 + 1u;
                        _16898 = _7131;
                        _13898 = _7137;
                        _13897 = _7112;
                        continue;
                    }
                    uvec2 _6886 = uvec2(_6861 + ivec2(1));
                    uint _7141 = _6886.y;
                    uint _7147 = _7141 + (_7141 << 10u);
                    uint _7149 = _7147 ^ (_7147 >> 6u);
                    uint _7151 = _7149 + (_7149 << 3u);
                    uint _7153 = _7151 ^ (_7151 >> 11u);
                    uint _7161 = (((_6886.x * 1664525u) + (_7153 + (_7153 << 15u))) + 1013904223u) * 1664525u;
                    uint _7163 = _7161 ^ (_7161 >> 11u);
                    uint _7166 = _7163 ^ ((_7163 << 7u) & 2636928640u);
                    uint _7169 = _7166 ^ ((_7166 << 15u) & 4022730752u);
                    uint _7171 = _7169 ^ (_7169 >> 18u);
                    float _13926;
                    _13926 = _13826;
                    uint _7188;
                    uint _7207;
                    float _7213;
                    uint _13925 = 0u;
                    uint _16897 = _7171;
                    for (;;)
                    {
                        if (!(_13925 < 1u))
                        {
                            break;
                        }
                        uint _7199 = _16897 + (_16897 << 10u);
                        uint _7201 = _7199 ^ (_7199 >> 6u);
                        uint _7203 = _7201 + (_7201 << 3u);
                        uint _7205 = _7203 ^ (_7203 >> 11u);
                        _7207 = _7205 + (_7205 << 15u);
                        _7213 = uintBitsToFloat((_16897 & 8388607u) | 1065353216u) - 1.0;
                        _7188 = _13925 + 1u;
                        _16897 = _7207;
                        _13926 = _7213;
                        _13925 = _7188;
                        continue;
                    }
                    vec2 _7219 = (_6862 * _6862) * (vec2(3.0) - (vec2(2.0) * _6862));
                    float _6894 = _7219.x;
                    float _6895 = 1.0 - _6894;
                    float _6897 = _7219.y;
                    float _6774 = ((((1.0 - _6897) * ((_13845 * _6895) + (_13871 * _6894))) + ((_13898 * _6895) * _6897)) + ((_13926 * _6894) * _6897)) * 0.4000000059604644775390625;
                    _13932 = _6766 - _6774;
                    _13931 = _6769 - _6774;
                }
                else
                {
                    _13932 = _6766;
                    _13931 = _6769;
                }
                vec3 _6785 = mix(mix(_13752, _6760.xyz * 1.10000002384185791015625, vec3(smoothstep(0.20000000298023223876953125, 0.64999997615814208984375, _13931))), _6751.xyz * 1.10000002384185791015625, vec3(smoothstep(0.60000002384185791015625, 1.0, _13932)));
                vec3 _15797;
                if (_5469)
                {
                    _15797 = mix(_13752, _6785, vec3(smoothstep(0.0, 0.25, _13932)));
                }
                else
                {
                    _15797 = _6785;
                }
                vec4 _14009;
                if (_5601)
                {
                    float _7425 = clamp(1.0 - dot(vec3(1.0), (_13589.yzw * 2.0) * _5669), 0.0, 1.0);
                    vec3 _7427 = _13589.yzw * vec3(1.0, 2.0, 1.0);
                    vec3 _7268 = (vec3(textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _13552, _13572).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _13552, _13572).x, textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _13552, _13572).x) - vec3(1.0)) + (_7427 / vec3(max(0.00999999977648258209228515625, max(_7427.x, max(_7427.y, _7427.z)))));
                    _14009 = vec4(equal(vec4(_7425, _7268), vec4(max(max(_7425, _7268.x), max(_7268.y, _7268.z)))));
                }
                else
                {
                    _14009 = vec4(1.0, 0.0, 0.0, 0.0);
                }
                float _15159;
                vec3 _15793;
                float _16769;
                if (_14009.y > 0.0)
                {
                    vec4 _9742 = texture(sampler2D(stone_floor_textures_stone_floor_seed, samplers_llr), _13552, current_view.mip_bias);
                    float _9746 = _9742.z;
                    int _9756 = int(trunc((_9742.x * 32.0) - 0.5) + trunc((_9742.y * 32.0) - 0.5));
                    uint _9758 = uint(_9756 ^ 7993234);
                    uint _10714 = _9758 + (_9758 << 10u);
                    uint _10716 = _10714 ^ (_10714 >> 6u);
                    uint _10718 = _10716 + (_10716 << 3u);
                    uint _10720 = _10718 ^ (_10718 >> 11u);
                    uint _9762 = uint(_9756 ^ 9730541);
                    uint _10736 = _9762 + (_9762 << 10u);
                    uint _10738 = _10736 ^ (_10736 >> 6u);
                    uint _10740 = _10738 + (_10738 << 3u);
                    uint _10742 = _10740 ^ (_10740 >> 11u);
                    float _10750 = uintBitsToFloat(((_10742 + (_10742 << 15u)) & 8388607u) | 1065353216u) - 1.0;
                    vec4 _9791 = texture(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _13552, current_view.mip_bias);
                    vec4 _9799 = texture(sampler2D(stone_floor_textures_stone_floor_roughness, samplers_llr), _13552, current_view.mip_bias);
                    float _9800 = _9799.x;
                    vec2 _9807 = (((_13551.xz * 0.100000001490116119384765625) + vec2((uintBitsToFloat(((_10720 + (_10720 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 0.300000011920928955078125, _10750 * 0.300000011920928955078125)) + vec2(0.5 * _9746)) + vec2(_9800 * 0.100000001490116119384765625);
                    vec3 _14901;
                    if (false)
                    {
                        _14901 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_9807, 0.0)).xyz * 0.89999997615814208984375;
                    }
                    else
                    {
                        vec3 _14904;
                        if (true)
                        {
                            _14904 = (texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_9807, 3.0)).xyz * 0.89999997615814208984375) * mix(1.0, 1.10000002384185791015625, _9746);
                        }
                        else
                        {
                            _14904 = vec3(0.0);
                        }
                        _14901 = _14904;
                    }
                    _16769 = mix(0.75, 1.0, _9800) * mix(0.800000011920928955078125, 1.0, _10750);
                    _15793 = ((_14901 * 0.800000011920928955078125) * mix(0.699999988079071044921875, 1.0, texture(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _13552, current_view.mip_bias).x)) * 0.85000002384185791015625;
                    _15159 = smoothstep(0.20000000298023223876953125, 0.75, 1.0 - _9791.x);
                }
                else
                {
                    float _15160;
                    vec3 _15794;
                    float _16770;
                    if (_14009.z > 0.0)
                    {
                        vec4 _8643 = texture(sampler2D(stone_floor_textures_stone_floor_seed_2, samplers_llr), _13552, current_view.mip_bias);
                        float _8647 = _8643.z;
                        int _8657 = int(trunc((_8643.x * 32.0) - 0.5) + trunc((_8643.y * 32.0) - 0.5));
                        uint _8659 = uint(_8657 ^ 7993234);
                        uint _9615 = _8659 + (_8659 << 10u);
                        uint _9617 = _9615 ^ (_9615 >> 6u);
                        uint _9619 = _9617 + (_9617 << 3u);
                        uint _9621 = _9619 ^ (_9619 >> 11u);
                        uint _8663 = uint(_8657 ^ 9730541);
                        uint _9637 = _8663 + (_8663 << 10u);
                        uint _9639 = _9637 ^ (_9637 >> 6u);
                        uint _9641 = _9639 + (_9639 << 3u);
                        uint _9643 = _9641 ^ (_9641 >> 11u);
                        float _9651 = uintBitsToFloat(((_9643 + (_9643 << 15u)) & 8388607u) | 1065353216u) - 1.0;
                        vec4 _8692 = texture(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _13552, current_view.mip_bias);
                        vec4 _8700 = texture(sampler2D(stone_floor_textures_stone_floor_roughness_2, samplers_llr), _13552, current_view.mip_bias);
                        float _8701 = _8700.x;
                        vec2 _8708 = (((_13551.xz * 0.100000001490116119384765625) + vec2((uintBitsToFloat(((_9621 + (_9621 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 0.300000011920928955078125, _9651 * 0.300000011920928955078125)) + vec2(0.5 * _8647)) + vec2(_8701 * 0.100000001490116119384765625);
                        vec3 _14580;
                        if (false)
                        {
                            _14580 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_8708, 0.0)).xyz * 0.89999997615814208984375;
                        }
                        else
                        {
                            vec3 _14583;
                            if (true)
                            {
                                _14583 = (texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_8708, 3.0)).xyz * 0.89999997615814208984375) * mix(1.0, 1.10000002384185791015625, _8647);
                            }
                            else
                            {
                                _14583 = vec3(0.0);
                            }
                            _14580 = _14583;
                        }
                        _16770 = mix(0.75, 1.0, _8701) * mix(0.800000011920928955078125, 1.0, _9651);
                        _15794 = ((_14580 * 0.800000011920928955078125) * mix(0.699999988079071044921875, 1.0, texture(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _13552, current_view.mip_bias).x)) * 0.85000002384185791015625;
                        _15160 = smoothstep(0.300000011920928955078125, 0.5, 1.0 - _8692.x);
                    }
                    else
                    {
                        float _15161;
                        vec3 _15795;
                        float _16771;
                        if (_14009.w > 0.0)
                        {
                            vec4 _7544 = texture(sampler2D(stone_floor_textures_stone_floor_seed_3, samplers_llr), _13552, current_view.mip_bias);
                            float _7548 = _7544.z;
                            int _7558 = int(trunc((_7544.x * 32.0) - 0.5) + trunc((_7544.y * 32.0) - 0.5));
                            uint _7560 = uint(_7558 ^ 7993234);
                            uint _8516 = _7560 + (_7560 << 10u);
                            uint _8518 = _8516 ^ (_8516 >> 6u);
                            uint _8520 = _8518 + (_8518 << 3u);
                            uint _8522 = _8520 ^ (_8520 >> 11u);
                            uint _7564 = uint(_7558 ^ 9730541);
                            uint _8538 = _7564 + (_7564 << 10u);
                            uint _8540 = _8538 ^ (_8538 >> 6u);
                            uint _8542 = _8540 + (_8540 << 3u);
                            uint _8544 = _8542 ^ (_8542 >> 11u);
                            float _8552 = uintBitsToFloat(((_8544 + (_8544 << 15u)) & 8388607u) | 1065353216u) - 1.0;
                            vec2 _7585 = ((_13551.xz * 0.100000001490116119384765625) + vec2((uintBitsToFloat(((_8522 + (_8522 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 0.300000011920928955078125, _8552 * 0.300000011920928955078125)) + vec2(0.5 * _7548);
                            vec4 _7593 = texture(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _13552, current_view.mip_bias);
                            vec4 _7601 = texture(sampler2D(stone_floor_textures_stone_floor_roughness_3, samplers_llr), _13552, current_view.mip_bias);
                            vec3 _14259;
                            if (false)
                            {
                                _14259 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_7585, 0.0)).xyz * 0.89999997615814208984375;
                            }
                            else
                            {
                                vec3 _14262;
                                if (true)
                                {
                                    _14262 = (texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_7585, 3.0)).xyz * 0.89999997615814208984375) * mix(1.0, 1.10000002384185791015625, _7548);
                                }
                                else
                                {
                                    _14262 = vec3(0.0);
                                }
                                _14259 = _14262;
                            }
                            _16771 = mix(0.75, 1.0, _7601.x) * mix(0.800000011920928955078125, 1.0, _8552);
                            _15795 = ((_14259 * 0.800000011920928955078125) * mix(0.699999988079071044921875, 1.0, texture(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _13552, current_view.mip_bias).x)) * 0.85000002384185791015625;
                            _15161 = smoothstep(0.300000011920928955078125, 1.0, 1.0 - _7593.x);
                        }
                        else
                        {
                            _16771 = mix(material_data.roughness_param, 0.89999997615814208984375, _13932);
                            _15795 = _15797;
                            _15161 = 0.0;
                        }
                        _16770 = _16771;
                        _15794 = _15795;
                        _15160 = _15161;
                    }
                    _16769 = _16770;
                    _15793 = _15794;
                    _15159 = _15160;
                }
                bool _15061;
                if (_5469)
                {
                    _15061 = vs_out_frag_position_ws.y > 0.0;
                }
                else
                {
                    _15061 = false;
                }
                vec3 _16766;
                vec3 _16777;
                if (_15061)
                {
                    vec4 _7366 = texture(sampler2D(material_data_dirtpath_heightmap, samplers_llr), _6735 * 0.1500000059604644775390625, current_view.mip_bias);
                    vec2 _7400 = vs_out_frag_position_ws.xz * 5.0;
                    ivec2 _10771 = ivec2(floor(_7400));
                    vec2 _10772 = fract(_7400);
                    uvec2 _10773 = uvec2(_10771);
                    uint _10823 = _10773.y;
                    uint _10829 = _10823 + (_10823 << 10u);
                    uint _10831 = _10829 ^ (_10829 >> 6u);
                    uint _10833 = _10831 + (_10831 << 3u);
                    uint _10835 = _10833 ^ (_10833 >> 11u);
                    uint _10843 = (((_10773.x * 1664525u) + (_10835 + (_10835 << 15u))) + 1013904223u) * 1664525u;
                    uint _10845 = _10843 ^ (_10843 >> 11u);
                    uint _10848 = _10845 ^ ((_10845 << 7u) & 2636928640u);
                    uint _10851 = _10848 ^ ((_10848 << 15u) & 4022730752u);
                    uint _10853 = _10851 ^ (_10851 >> 18u);
                    float _15392;
                    _15392 = _13826;
                    uint _10870;
                    uint _10889;
                    float _10895;
                    uint _15391 = 0u;
                    uint _16889 = _10853;
                    for (;;)
                    {
                        if (!(_15391 < 1u))
                        {
                            break;
                        }
                        uint _10881 = _16889 + (_16889 << 10u);
                        uint _10883 = _10881 ^ (_10881 >> 6u);
                        uint _10885 = _10883 + (_10883 << 3u);
                        uint _10887 = _10885 ^ (_10885 >> 11u);
                        _10889 = _10887 + (_10887 << 15u);
                        _10895 = uintBitsToFloat((_16889 & 8388607u) | 1065353216u) - 1.0;
                        _10870 = _15391 + 1u;
                        _16889 = _10889;
                        _15392 = _10895;
                        _15391 = _10870;
                        continue;
                    }
                    uvec2 _10781 = uvec2(_10771 + ivec2(1, 0));
                    uint _10899 = _10781.y;
                    uint _10905 = _10899 + (_10899 << 10u);
                    uint _10907 = _10905 ^ (_10905 >> 6u);
                    uint _10909 = _10907 + (_10907 << 3u);
                    uint _10911 = _10909 ^ (_10909 >> 11u);
                    uint _10919 = (((_10781.x * 1664525u) + (_10911 + (_10911 << 15u))) + 1013904223u) * 1664525u;
                    uint _10921 = _10919 ^ (_10919 >> 11u);
                    uint _10924 = _10921 ^ ((_10921 << 7u) & 2636928640u);
                    uint _10927 = _10924 ^ ((_10924 << 15u) & 4022730752u);
                    uint _10929 = _10927 ^ (_10927 >> 18u);
                    float _15520;
                    _15520 = _13826;
                    uint _10946;
                    uint _10965;
                    float _10971;
                    uint _15519 = 0u;
                    uint _16888 = _10929;
                    for (;;)
                    {
                        if (!(_15519 < 1u))
                        {
                            break;
                        }
                        uint _10957 = _16888 + (_16888 << 10u);
                        uint _10959 = _10957 ^ (_10957 >> 6u);
                        uint _10961 = _10959 + (_10959 << 3u);
                        uint _10963 = _10961 ^ (_10961 >> 11u);
                        _10965 = _10963 + (_10963 << 15u);
                        _10971 = uintBitsToFloat((_16888 & 8388607u) | 1065353216u) - 1.0;
                        _10946 = _15519 + 1u;
                        _16888 = _10965;
                        _15520 = _10971;
                        _15519 = _10946;
                        continue;
                    }
                    uvec2 _10788 = uvec2(_10771 + ivec2(0, 1));
                    uint _10975 = _10788.y;
                    uint _10981 = _10975 + (_10975 << 10u);
                    uint _10983 = _10981 ^ (_10981 >> 6u);
                    uint _10985 = _10983 + (_10983 << 3u);
                    uint _10987 = _10985 ^ (_10985 >> 11u);
                    uint _10995 = (((_10788.x * 1664525u) + (_10987 + (_10987 << 15u))) + 1013904223u) * 1664525u;
                    uint _10997 = _10995 ^ (_10995 >> 11u);
                    uint _11000 = _10997 ^ ((_10997 << 7u) & 2636928640u);
                    uint _11003 = _11000 ^ ((_11000 << 15u) & 4022730752u);
                    uint _11005 = _11003 ^ (_11003 >> 18u);
                    float _15649;
                    _15649 = _13826;
                    uint _11022;
                    uint _11041;
                    float _11047;
                    uint _15648 = 0u;
                    uint _16887 = _11005;
                    for (;;)
                    {
                        if (!(_15648 < 1u))
                        {
                            break;
                        }
                        uint _11033 = _16887 + (_16887 << 10u);
                        uint _11035 = _11033 ^ (_11033 >> 6u);
                        uint _11037 = _11035 + (_11035 << 3u);
                        uint _11039 = _11037 ^ (_11037 >> 11u);
                        _11041 = _11039 + (_11039 << 15u);
                        _11047 = uintBitsToFloat((_16887 & 8388607u) | 1065353216u) - 1.0;
                        _11022 = _15648 + 1u;
                        _16887 = _11041;
                        _15649 = _11047;
                        _15648 = _11022;
                        continue;
                    }
                    uvec2 _10796 = uvec2(_10771 + ivec2(1));
                    uint _11051 = _10796.y;
                    uint _11057 = _11051 + (_11051 << 10u);
                    uint _11059 = _11057 ^ (_11057 >> 6u);
                    uint _11061 = _11059 + (_11059 << 3u);
                    uint _11063 = _11061 ^ (_11061 >> 11u);
                    uint _11071 = (((_10796.x * 1664525u) + (_11063 + (_11063 << 15u))) + 1013904223u) * 1664525u;
                    uint _11073 = _11071 ^ (_11071 >> 11u);
                    uint _11076 = _11073 ^ ((_11073 << 7u) & 2636928640u);
                    uint _11079 = _11076 ^ ((_11076 << 15u) & 4022730752u);
                    uint _11081 = _11079 ^ (_11079 >> 18u);
                    float _15779;
                    _15779 = _13826;
                    uint _11098;
                    uint _11117;
                    float _11123;
                    uint _15778 = 0u;
                    uint _16886 = _11081;
                    for (;;)
                    {
                        if (!(_15778 < 1u))
                        {
                            break;
                        }
                        uint _11109 = _16886 + (_16886 << 10u);
                        uint _11111 = _11109 ^ (_11109 >> 6u);
                        uint _11113 = _11111 + (_11111 << 3u);
                        uint _11115 = _11113 ^ (_11113 >> 11u);
                        _11117 = _11115 + (_11115 << 15u);
                        _11123 = uintBitsToFloat((_16886 & 8388607u) | 1065353216u) - 1.0;
                        _11098 = _15778 + 1u;
                        _16886 = _11117;
                        _15779 = _11123;
                        _15778 = _11098;
                        continue;
                    }
                    vec2 _11129 = (_10772 * _10772) * (vec2(3.0) - (vec2(2.0) * _10772));
                    float _10804 = _11129.x;
                    float _10805 = 1.0 - _10804;
                    float _10807 = _11129.y;
                    vec3 _7411 = vec3((((clamp(smoothstep(0.20000000298023223876953125, 1.0, _7366.x * mix(0.64999997615814208984375, 1.0, _15159)), 0.100000001490116119384765625, mix(0.5, 0.20000000298023223876953125, _13589.x)) * clamp(_13549.y, 0.0, 1.0)) * (1.0 - (_13589.x * 0.5))) + mix(0.0, 0.20000000298023223876953125, smoothstep(0.0, 0.4000000059604644775390625, _15159))) * (1.0 - smoothstep(0.0, 0.300000011920928955078125, textureLod(sampler2D(building_mask_tex, samplers_llc), (vs_out_frag_position_ws.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0).y - ((((((1.0 - _10807) * ((_15392 * _10805) + (_15520 * _10804))) + ((_15649 * _10805) * _10807)) + ((_15779 * _10804) * _10807)) * 0.100000001490116119384765625) * _15159))));
                    _16777 = normalize(mix(_13549, _231, _7411));
                    _16766 = mix(_15793, vec3(0.699999988079071044921875), _7411);
                }
                else
                {
                    _16777 = _13549;
                    _16766 = _15793;
                }
                bvec3 _18697 = bvec3(_5494);
                _18162 = mix(_231, _16777, _18697);
                _18049 = _5494 ? _16769 : material_data.roughness_param;
                _17936 = mix(_13752, _16766, _18697);
                _16910 = _5494 ? ((_13548 < gl_FragCoord.z) ? _13548 : gl_FragCoord.z) : gl_FragCoord.z;
                break;
            } while(false);
            _18161 = _18162;
            _18048 = _18049;
            _17935 = _17936;
            _16909 = _16910;
        }
        else
        {
            _18161 = _231;
            _18048 = material_data.roughness_param;
            _17935 = _13752;
            _16909 = gl_FragCoord.z;
        }
        _18160 = _18161;
        _18047 = _18048;
        _17934 = _17935;
        _16908 = _16909;
    }
    else
    {
        _18160 = _231;
        _18047 = material_data.roughness_param;
        _17934 = _13752;
        _16908 = gl_FragCoord.z;
    }
    vec3 _11145 = (_18160 * 0.5) + vec3(0.5);
    vec3 _11253 = sqrt(clamp(_17934, vec3(0.0), vec3(1.0)));
    uint _11268 = (uint((clamp(_11253.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_11253.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_11253.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _18669 = uvec2(((uint((clamp(_11145.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_11145.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_11145.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(_18047, 0.0, 1.0) * 255.0) + 0.5) << uint(24)), _11268);
    _18669.y = _11268 | ((((uint(material_data.receive_contact_shadows != 0u) | 2u) | 4u) | 128u) << 24u);
    entryPointParam_ps_main_gbuffer = _18669;
    gl_FragDepth = _16908;
}

