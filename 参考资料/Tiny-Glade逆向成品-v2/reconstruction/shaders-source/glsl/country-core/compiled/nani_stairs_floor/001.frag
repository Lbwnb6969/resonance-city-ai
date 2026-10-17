#version 460
#extension GL_ARB_conservative_depth : require
layout(depth_less) out float gl_FragDepth;

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

layout(set = 10, binding = 0, std140) uniform StoneFloorTextures_natural
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

layout(set = 9, binding = 0, std140) uniform WoodenFloorTextures_natural
{
    uvec2 wooden_floor_height_dims;
} wooden_floor_textures;

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

layout(set = 10, binding = 3) uniform texture2D stone_floor_textures_stone_floor_height;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 10, binding = 1) uniform texture2D stone_floor_textures_stone_floor_normal;
layout(set = 10, binding = 2) uniform texture2D stone_floor_textures_stone_floor_seed;
layout(set = 10, binding = 4) uniform texture2D stone_floor_textures_stone_floor_roughness;
layout(set = 11, binding = 1) uniform texture2DArray wall_color_data_brick_colors;
layout(set = 9, binding = 2) uniform texture2D wooden_floor_textures_wooden_floor_height;
layout(set = 9, binding = 1) uniform texture2D wooden_floor_textures_wooden_floor_normal;
layout(set = 9, binding = 3) uniform texture2D wooden_floor_textures_wooden_floor_seed;
layout(set = 8, binding = 1) uniform texture2DArray halftimber_colors_tex;
layout(set = 9, binding = 4) uniform texture2D wooden_floor_textures_wooden_floor_roughness;
layout(set = 0, binding = 2) uniform texture2D material_data_dirtpath_heightmap;

layout(location = 1) in vec3 vs_out_pos_ws;
layout(location = 0) in vec3 vs_out_normal_ws;
layout(location = 3) flat in uint vs_out_material_id;
layout(location = 2) flat in uint vs_out_color_id;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    vec2 uv = vs_out_pos_ws.xz * 0.20000000298023223876953125;
    int _243 = int(vs_out_material_id);
    bool _6326;
    if (_243 == 1)
    {
        _6326 = true;
    }
    else
    {
        _6326 = _243 == 3;
    }
    int _6329;
    if (_6326)
    {
        _6329 = int(vs_out_color_id);
    }
    else
    {
        _6329 = int(vs_out_color_id) - 100000;
    }
    bool _6327;
    if (_243 == 0)
    {
        _6327 = true;
    }
    else
    {
        _6327 = _243 == 2;
    }
    float _6529;
    vec3 _6531;
    float _6539;
    bool _6542;
    float _6604;
    vec3 _6612;
    if (_6327)
    {
        vec3 _4568;
        uvec2 _4030 = uvec2(gl_FragCoord.yx);
        float _4283 = 5.588237762451171875 * float(frame_counter.index % 64u);
        float _4293 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_4030.x) + _4283)) + (0.005837149918079376220703125 * (float(_4030.y) + _4283))));
        vec2 _4044 = textureQueryLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), uv);
        float _4048 = _4044.x + current_view.mip_bias;
        vec3 _4416 = dFdx(vs_out_pos_ws);
        vec3 _4423 = dFdy(vs_out_pos_ws);
        vec2 _4426 = dFdx(uv);
        vec2 _4433 = dFdy(uv);
        vec2 _4430 = _4433 * (-1.0);
        vec3 _4394 = cross(vs_out_normal_ws, _4423 * (-1.0));
        vec3 _4395 = cross(_4416, vs_out_normal_ws);
        float _4396 = _4426.x;
        float _4397 = _4430.y;
        float _4399 = _4426.y;
        float _4400 = _4430.x;
        float _4403 = 1.0 / ((_4396 * _4397) - (_4399 * _4400));
        mat3 _4413 = transpose(mat3(((_4394 * _4396) + (_4395 * _4400)) * _4403, ((_4394 * _4399) + (_4395 * _4397)) * _4403, vs_out_normal_ws));
        vec4 _4438 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
        vec3 _4445 = vec3(1.0, 0.0, 0.0) * _4413;
        vec3 _4446 = vec3(0.0, 1.0, 0.0) * _4413;
        vec3 _4447 = vec3(0.0, 0.0, 1.0) * _4413;
        vec3 _4450 = cross(_4445, _4446);
        vec3 _4453 = vec3(1.0 / dot(_4447, _4450));
        mat3 _4457 = mat3(cross(_4446, _4447) * _4453, cross(_4447, _4445) * _4453, _4450 * _4453);
        vec3 _4317 = (vs_out_pos_ws - (_4438.xyz / vec3(_4438.w))) * _4457;
        float _4472 = _4317.z;
        vec3 _4477 = vec3(uv, 0.0);
        float _6453;
        do
        {
            _4568 = (_4477 + (_4317 * ((-0.07500000298023223876953125) / _4472))) - _4477;
            float _4597 = mix(0.0, 1.0, pow(_4293 * 0.5, 2.0));
            vec3 _4600 = _4477 + (_4568 * vec3(_4597));
            float _4746 = _4600.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _4600.xy, _4048).x - 1.0) * 0.07500000298023223876953125);
            bool _6747 = (_4746 < 0.0) ? true : false;
            float _6417;
            bool _6422;
            float _6428;
            float _6438;
            float _6448;
            if (_6747)
            {
                _6448 = _4746;
                _6438 = 0.0;
                _6428 = _4597;
                _6422 = _6747;
                _6417 = 0.0;
            }
            else
            {
                float _6419;
                float _6440;
                _6440 = _4746;
                _6419 = _4597;
                float _4626;
                uint _4644;
                float _4791;
                bool _6748;
                bool _6423;
                float _6429;
                float _6449;
                uint _6413 = 1u;
                bool _6424 = _6747;
                for (;;)
                {
                    if (!(_6413 < 3u))
                    {
                        _6449 = 0.0;
                        _6429 = 1.0;
                        _6423 = _6424;
                        break;
                    }
                    _4626 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_6413) + _4293) * 0.5, 2.0)));
                    vec3 _4629 = _4477 + (_4568 * vec3(_4626));
                    _4791 = _4629.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _4629.xy, _4048).x - 1.0) * 0.07500000298023223876953125);
                    _6748 = (_4791 < 0.0) ? true : false;
                    if (_6748)
                    {
                        _6449 = _4791;
                        _6429 = _4626;
                        _6423 = _6748;
                        break;
                    }
                    _4644 = _6413 + 1u;
                    _6413 = _4644;
                    _6440 = _4791;
                    _6424 = _6748;
                    _6419 = _4626;
                    continue;
                }
                _6448 = _6449;
                _6438 = _6440;
                _6428 = _6429;
                _6422 = _6423;
                _6417 = _6419;
            }
            if (_6422)
            {
                float _6426;
                float _6436;
                float _6446;
                float _6450;
                _6450 = _6417;
                _6446 = _6448;
                _6436 = _6438;
                _6426 = _6428;
                uint _4690;
                float _6750;
                float _6751;
                float _6752;
                float _6753;
                uint _6425 = 0u;
                for (;;)
                {
                    if (!(_6425 < 4u))
                    {
                        break;
                    }
                    float _4670 = (_6450 + _6426) * 0.5;
                    vec3 _4673 = _4477 + (_4568 * vec3(_4670));
                    float _4836 = _4673.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _4673.xy, _4048).x - 1.0) * 0.07500000298023223876953125);
                    bool _6749 = (_4836 < 0.0) ? true : false;
                    _6750 = _6749 ? _4836 : _6446;
                    _6751 = _6749 ? _6436 : _4836;
                    _6752 = _6749 ? _4670 : _6426;
                    _6753 = _6749 ? _6450 : _4670;
                    _4690 = _6425 + 1u;
                    _6450 = _6753;
                    _6446 = _6750;
                    _6436 = _6751;
                    _6426 = _6752;
                    _6425 = _4690;
                    continue;
                }
                float _4710 = mix(_6450, _6426, _6436 / (_6436 + (-_6446)));
                vec3 _4713 = _4477 + (_4568 * vec3(_4710));
                _6453 = ((abs(_4713.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _4713.xy, _4048).x - 1.0) * 0.07500000298023223876953125)) < (_6436 * 0.89999997615814208984375)) ? true : false) ? _4710 : _6426;
                break;
            }
            else
            {
                _6453 = _6417;
                break;
            }
            break; // unreachable workaround
        } while(false);
        vec3 _6757 = mix(_4568 * _6453, vec3(0.0), bvec3(_4472 > (-1.1754943508222875079687365372222e-38)));
        vec2 _4331 = uv + _6757.xy;
        vec4 _4929 = (vec4(vs_out_pos_ws + (_6757 * _4413), 1.0) * current_view.world_to_view) * current_view.view_to_clip;
        vec3 _4933 = _4929.xyz / vec3(_4929.w);
        vec3 _5022 = (textureLod(sampler2D(stone_floor_textures_stone_floor_normal, samplers_llr), _4331, _4048).xyz * 2.0) - vec3(1.0);
        _5022.z = _5022.z * 0.13333332538604736328125;
        float _4386 = _4933.z;
        vec4 _4067 = texture(sampler2D(stone_floor_textures_stone_floor_seed, samplers_llr), _4331, current_view.mip_bias);
        float _4071 = _4067.z;
        int _4081 = int(trunc((_4067.x * 32.0) - 0.5) + trunc((_4067.y * 32.0) - 0.5));
        uint _4083 = uint(_4081 ^ 7993234);
        uint _5039 = _4083 + (_4083 << 10u);
        uint _5041 = _5039 ^ (_5039 >> 6u);
        uint _5043 = _5041 + (_5041 << 3u);
        uint _5045 = _5043 ^ (_5043 >> 11u);
        uint _4087 = uint(_4081 ^ 9730541);
        uint _5061 = _4087 + (_4087 << 10u);
        uint _5063 = _5061 ^ (_5061 >> 6u);
        uint _5065 = _5063 + (_5063 << 3u);
        uint _5067 = _5065 ^ (_5065 >> 11u);
        float _5075 = uintBitsToFloat(((_5067 + (_5067 << 15u)) & 8388607u) | 1065353216u) - 1.0;
        vec4 _4116 = texture(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _4331, current_view.mip_bias);
        vec4 _4124 = texture(sampler2D(stone_floor_textures_stone_floor_roughness, samplers_llr), _4331, current_view.mip_bias);
        float _4125 = _4124.x;
        vec2 _4132 = (((vs_out_pos_ws.xz * 0.100000001490116119384765625) + vec2((uintBitsToFloat(((_5045 + (_5045 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 0.300000011920928955078125, _5075 * 0.300000011920928955078125)) + vec2(0.5 * _4071)) + vec2(_4125 * 0.100000001490116119384765625);
        bool _6460;
        if (_6329 == 0)
        {
            _6460 = true;
        }
        else
        {
            _6460 = _6329 == 4;
        }
        bool _6461;
        if (_6460)
        {
            _6461 = true;
        }
        else
        {
            _6461 = _6329 == 10;
        }
        bool _6462;
        if (_6461)
        {
            _6462 = true;
        }
        else
        {
            _6462 = _6329 == 12;
        }
        vec3 _6477;
        if (_6462)
        {
            _6477 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_4132, 0.0)).xyz * 0.89999997615814208984375;
        }
        else
        {
            bool _6463;
            if (_6329 == 1)
            {
                _6463 = true;
            }
            else
            {
                _6463 = _6329 == 5;
            }
            vec3 _6478;
            if (_6463)
            {
                _6478 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_4132, 1.0)).xyz;
            }
            else
            {
                bool _6464;
                if (_6329 == 2)
                {
                    _6464 = true;
                }
                else
                {
                    _6464 = _6329 == 7;
                }
                vec3 _6479;
                if (_6464)
                {
                    _6479 = (texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_4132, 2.0)).xyz * 1.2999999523162841796875) * mix(1.0, 1.2999999523162841796875, _4071);
                }
                else
                {
                    bool _6465;
                    if (_6329 == 3)
                    {
                        _6465 = true;
                    }
                    else
                    {
                        _6465 = _6329 == 6;
                    }
                    bool _6466;
                    if (_6465)
                    {
                        _6466 = true;
                    }
                    else
                    {
                        _6466 = _6329 == 8;
                    }
                    bool _6467;
                    if (_6466)
                    {
                        _6467 = true;
                    }
                    else
                    {
                        _6467 = _6329 == 9;
                    }
                    vec3 _6480;
                    if (_6467)
                    {
                        _6480 = (texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_4132, 3.0)).xyz * 0.89999997615814208984375) * mix(1.0, 1.10000002384185791015625, _4071);
                    }
                    else
                    {
                        vec3 _6481;
                        if (_6329 == 11)
                        {
                            _6481 = texture(sampler2DArray(wall_color_data_brick_colors, samplers_llr), vec3(_4132, 4.0)).xyz * mix(1.0, 1.39999997615814208984375, _4071);
                        }
                        else
                        {
                            _6481 = vec3(0.0);
                        }
                        _6480 = _6481;
                    }
                    _6479 = _6480;
                }
                _6478 = _6479;
            }
            _6477 = _6478;
        }
        bool _1667 = _4386 < gl_FragCoord.z;
        _6612 = normalize(_4457 * _5022);
        _6604 = mix(0.75, 1.0, _4125) * mix(0.800000011920928955078125, 1.0, _5075);
        _6542 = _1667 ? true : false;
        _6539 = _1667 ? _4386 : gl_FragCoord.z;
        _6531 = (_6477 * 0.800000011920928955078125) * mix(0.699999988079071044921875, 1.0, texture(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _4331, current_view.mip_bias).x);
        _6529 = smoothstep(0.20000000298023223876953125, 0.75, 1.0 - _4116.x);
    }
    else
    {
        float _6530;
        vec3 _6532;
        float _6540;
        bool _6543;
        float _6605;
        vec3 _6613;
        if (_6326)
        {
            vec3 _3452;
            uvec2 _2982 = uvec2(gl_FragCoord.yx);
            float _3167 = 5.588237762451171875 * float(frame_counter.index % 64u);
            float _3177 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_2982.x) + _3167)) + (0.005837149918079376220703125 * (float(_2982.y) + _3167))));
            vec2 _2996 = textureQueryLod(sampler2D(wooden_floor_textures_wooden_floor_height, samplers_llr), uv);
            float _3000 = _2996.x + current_view.mip_bias;
            vec3 _3300 = dFdx(vs_out_pos_ws);
            vec3 _3307 = dFdy(vs_out_pos_ws);
            vec2 _3310 = dFdx(uv);
            vec2 _3317 = dFdy(uv);
            vec2 _3314 = _3317 * (-1.0);
            vec3 _3278 = cross(vs_out_normal_ws, _3307 * (-1.0));
            vec3 _3279 = cross(_3300, vs_out_normal_ws);
            float _3280 = _3310.x;
            float _3281 = _3314.y;
            float _3283 = _3310.y;
            float _3284 = _3314.x;
            float _3287 = 1.0 / ((_3280 * _3281) - (_3283 * _3284));
            mat3 _3297 = transpose(mat3(((_3278 * _3280) + (_3279 * _3284)) * _3287, ((_3278 * _3283) + (_3279 * _3281)) * _3287, vs_out_normal_ws));
            vec4 _3322 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
            vec3 _3329 = vec3(1.0, 0.0, 0.0) * _3297;
            vec3 _3330 = vec3(0.0, 1.0, 0.0) * _3297;
            vec3 _3331 = vec3(0.0, 0.0, 1.0) * _3297;
            vec3 _3334 = cross(_3329, _3330);
            vec3 _3337 = vec3(1.0 / dot(_3331, _3334));
            mat3 _3341 = mat3(cross(_3330, _3331) * _3337, cross(_3331, _3329) * _3337, _3334 * _3337);
            vec3 _3201 = (vs_out_pos_ws - (_3322.xyz / vec3(_3322.w))) * _3341;
            float _3356 = _3201.z;
            vec3 _3361 = vec3(uv, 0.0);
            float _6376;
            do
            {
                _3452 = (_3361 + (_3201 * ((-0.07500000298023223876953125) / _3356))) - _3361;
                float _3481 = mix(0.0, 1.0, pow(_3177 * 0.5, 2.0));
                vec3 _3484 = _3361 + (_3452 * vec3(_3481));
                float _3630 = _3484.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height, samplers_llr), _3484.xy, _3000).x - 1.0) * 0.07500000298023223876953125);
                bool _6733 = (_3630 < 0.0) ? true : false;
                float _6340;
                bool _6345;
                float _6351;
                float _6361;
                float _6371;
                if (_6733)
                {
                    _6371 = _3630;
                    _6361 = 0.0;
                    _6351 = _3481;
                    _6345 = _6733;
                    _6340 = 0.0;
                }
                else
                {
                    float _6342;
                    float _6363;
                    _6363 = _3630;
                    _6342 = _3481;
                    float _3510;
                    uint _3528;
                    float _3675;
                    bool _6734;
                    bool _6346;
                    float _6352;
                    float _6372;
                    uint _6336 = 1u;
                    bool _6347 = _6733;
                    for (;;)
                    {
                        if (!(_6336 < 3u))
                        {
                            _6372 = 0.0;
                            _6352 = 1.0;
                            _6346 = _6347;
                            break;
                        }
                        _3510 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_6336) + _3177) * 0.5, 2.0)));
                        vec3 _3513 = _3361 + (_3452 * vec3(_3510));
                        _3675 = _3513.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height, samplers_llr), _3513.xy, _3000).x - 1.0) * 0.07500000298023223876953125);
                        _6734 = (_3675 < 0.0) ? true : false;
                        if (_6734)
                        {
                            _6372 = _3675;
                            _6352 = _3510;
                            _6346 = _6734;
                            break;
                        }
                        _3528 = _6336 + 1u;
                        _6336 = _3528;
                        _6363 = _3675;
                        _6347 = _6734;
                        _6342 = _3510;
                        continue;
                    }
                    _6371 = _6372;
                    _6361 = _6363;
                    _6351 = _6352;
                    _6345 = _6346;
                    _6340 = _6342;
                }
                if (_6345)
                {
                    float _6349;
                    float _6359;
                    float _6369;
                    float _6373;
                    _6373 = _6340;
                    _6369 = _6371;
                    _6359 = _6361;
                    _6349 = _6351;
                    uint _3574;
                    float _6736;
                    float _6737;
                    float _6738;
                    float _6739;
                    uint _6348 = 0u;
                    for (;;)
                    {
                        if (!(_6348 < 4u))
                        {
                            break;
                        }
                        float _3554 = (_6373 + _6349) * 0.5;
                        vec3 _3557 = _3361 + (_3452 * vec3(_3554));
                        float _3720 = _3557.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height, samplers_llr), _3557.xy, _3000).x - 1.0) * 0.07500000298023223876953125);
                        bool _6735 = (_3720 < 0.0) ? true : false;
                        _6736 = _6735 ? _3720 : _6369;
                        _6737 = _6735 ? _6359 : _3720;
                        _6738 = _6735 ? _3554 : _6349;
                        _6739 = _6735 ? _6373 : _3554;
                        _3574 = _6348 + 1u;
                        _6373 = _6739;
                        _6369 = _6736;
                        _6359 = _6737;
                        _6349 = _6738;
                        _6348 = _3574;
                        continue;
                    }
                    float _3594 = mix(_6373, _6349, _6359 / (_6359 + (-_6369)));
                    vec3 _3597 = _3361 + (_3452 * vec3(_3594));
                    _6376 = ((abs(_3597.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height, samplers_llr), _3597.xy, _3000).x - 1.0) * 0.07500000298023223876953125)) < (_6359 * 0.89999997615814208984375)) ? true : false) ? _3594 : _6349;
                    break;
                }
                else
                {
                    _6376 = _6340;
                    break;
                }
                break; // unreachable workaround
            } while(false);
            vec3 _6744 = mix(_3452 * _6376, vec3(0.0), bvec3(_3356 > (-1.1754943508222875079687365372222e-38)));
            vec2 _3215 = uv + _6744.xy;
            vec4 _3813 = (vec4(vs_out_pos_ws + (_6744 * _3297), 1.0) * current_view.world_to_view) * current_view.view_to_clip;
            vec3 _3817 = _3813.xyz / vec3(_3813.w);
            vec3 _3906 = (textureLod(sampler2D(wooden_floor_textures_wooden_floor_normal, samplers_llr), _3215, _3000).xyz * 2.0) - vec3(1.0);
            _3906.z = _3906.z * 0.199999988079071044921875;
            float _3270 = _3817.z;
            vec4 _3020 = texture(sampler2D(wooden_floor_textures_wooden_floor_seed, samplers_llr), _3215, current_view.mip_bias);
            float _3024 = _3020.z;
            int _3030 = int(trunc((_3020.x * 32.0) - 0.5));
            vec2 _3034 = fract((vec2(0.75487768650054931640625, 0.56984031200408935546875) * float(uint(_3030))) + vec2(0.5)) + (vec2(_3215.yx) * 0.87999999523162841796875);
            float _3035 = _3020.y;
            float _6380;
            if (0.003130800090730190277099609375 >= _3035)
            {
                _6380 = 12.9200000762939453125 * _3035;
            }
            else
            {
                _6380 = (1.05499994754791259765625 * pow(_3035, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
            }
            float _3039 = round(_6380 * 8.0) * 0.785398185253143310546875;
            float _3042 = cos(_3039);
            float _3045 = sin(_3039);
            vec2 _6730 = vec2((_3034.x * _3042) - (_3034.y * _3045), (_3034.x * _3045) + (_3034.y * _3042));
            vec2 _6382;
            if (_3024 > 0.5)
            {
                _6382 = _6730 + vec2(0.20000000298023223876953125);
            }
            else
            {
                _6382 = _6730;
            }
            vec4 _3076 = texture(sampler2DArray(halftimber_colors_tex, samplers_llr), vec3(_6382, float(_6329)), current_view.mip_bias);
            vec3 _3079 = _3076.xyz;
            bool _6383;
            if (_6329 == 2)
            {
                _6383 = true;
            }
            else
            {
                _6383 = _6329 == 8;
            }
            bool _6384;
            if (_6383)
            {
                _6384 = true;
            }
            else
            {
                _6384 = _6329 == 9;
            }
            vec3 _6396;
            if (_6384)
            {
                _6396 = mix(_3079, vec3(dot(_3079, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875))), vec3(0.300000011920928955078125));
            }
            else
            {
                _6396 = _3079;
            }
            vec4 _3105 = texture(sampler2DArray(halftimber_colors_tex, samplers_llr), vec3(_6382, 0.0), current_view.mip_bias);
            vec3 _3108 = _3105.xyz;
            float _6397;
            vec3 _6399;
            if (_6329 == 0)
            {
                _6399 = _3108 * 1.2000000476837158203125;
                _6397 = _3024;
            }
            else
            {
                bool _6390;
                if (_6329 == 9)
                {
                    _6390 = true;
                }
                else
                {
                    _6390 = _6329 == 3;
                }
                bool _6391;
                if (_6390)
                {
                    _6391 = true;
                }
                else
                {
                    _6391 = _6329 == 4;
                }
                float _6398;
                if (_6391)
                {
                    _6398 = _3024 * 0.5;
                }
                else
                {
                    _6398 = _3024 * 0.20000000298023223876953125;
                }
                _6399 = _3108;
                _6397 = _6398;
            }
            uint _3154 = uint(_3030 ^ 9730541);
            uint _3945 = _3154 + (_3154 << 10u);
            uint _3947 = _3945 ^ (_3945 >> 6u);
            uint _3949 = _3947 + (_3947 << 3u);
            uint _3951 = _3949 ^ (_3949 >> 11u);
            float _3157 = mix(0.75, 1.0, texture(sampler2D(wooden_floor_textures_wooden_floor_roughness, samplers_llr), _3215, current_view.mip_bias).x) * mix(0.800000011920928955078125, 1.0, uintBitsToFloat(((_3951 + (_3951 << 15u)) & 8388607u) | 1065353216u) - 1.0);
            bool _2626 = _3270 < gl_FragCoord.z;
            _6613 = normalize(_3341 * _3906);
            _6605 = _3157;
            _6543 = _2626 ? true : false;
            _6540 = _2626 ? _3270 : gl_FragCoord.z;
            _6532 = mix(_6396 * mix(0.699999988079071044921875, 1.0, texture(sampler2D(wooden_floor_textures_wooden_floor_height, samplers_llr), _3215, current_view.mip_bias).x), _6399, vec3(_6397));
            _6530 = smoothstep(0.5, 1.0, _3157);
        }
        else
        {
            _6613 = vec3(0.0);
            _6605 = 0.800000011920928955078125;
            _6543 = false;
            _6540 = gl_FragCoord.z;
            _6532 = vec3(0.0);
            _6530 = 0.0;
        }
        _6612 = _6613;
        _6604 = _6605;
        _6542 = _6543;
        _6539 = _6540;
        _6531 = _6532;
        _6529 = _6530;
    }
    vec3 _6602;
    if (frame_constants.glade_theme_id == 4u)
    {
        vec4 sampled = texture(sampler2D(material_data_dirtpath_heightmap, samplers_llr), (uv * 0.100000001490116119384765625) + (vs_out_pos_ws.xz * 0.0500000007450580596923828125), current_view.mip_bias);
        float _2669 = sampled.x;
        _6602 = mix(_6531, vec3(0.699999988079071044921875), vec3((smoothstep(0.0, 0.20000000298023223876953125, _6529 * mix(0.0, 0.5, _2669)) * 0.60000002384185791015625) + (_2669 * 0.20000000298023223876953125)));
    }
    else
    {
        _6602 = _6531;
    }
    vec3 _5094 = (_6612 * 0.5) + vec3(0.5);
    vec3 _5202 = sqrt(clamp(_6602, vec3(0.0), vec3(1.0)));
    uint _5217 = (uint((clamp(_5202.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_5202.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_5202.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _6732 = uvec2(((uint((clamp(_5094.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_5094.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_5094.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + (uint((clamp(_6604, 0.0, 1.0) * 255.0) + 0.5) << uint(24)), _5217);
    _6732.y = _5217 | ((7u | (uint(_6542) << 7u)) << 24u);
    entryPointParam_ps_main_gbuffer = _6732;
    gl_FragDepth = _6539;
}

