#version 460
#extension GL_EXT_demote_to_helper_invocation : require

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

bool _16233;

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
layout(location = 2) in vec2 vs_out_uv;
layout(location = 0) in vec3 vs_out_normal_ws;
layout(location = 7) flat in uint vs_out_pattern_id;

void main()
{
    int _280 = int(material_data_nani_instance_data._member0[vs_out_instance_index].wall_slot_id);
    bool _16230;
    do
    {
        vec2 _7072 = (vs_out_pos_ws.xz + vec2(65.0)) * vec2(0.1153846085071563720703125);
        int _7081 = int(floor(_7072.x)) + (15 * int(floor(_7072.y)));
        uint _6964 = min(128u, data_count_1._member0[_7081]);
        uint _7059;
        bool _16223;
        bool _16231;
        uint _16213 = 0u;
        for (;;)
        {
            if (!(_16213 < _6964))
            {
                _16231 = _16233;
                _16223 = false;
                break;
            }
            int _6977 = int(uint(_7081 * 50) + _16213);
            if (_280 == data_holes_1._member0[_6977].wall_slot_id)
            {
                vec3 _7008 = vec3(data_holes_1._member0[_6977].normal.x, 0.0, data_holes_1._member0[_6977].normal.y);
                mat3 _7018 = transpose(mat3(cross(_7008, vec3(0.0, 1.0, 0.0)), vec3(0.0, 1.0, 0.0), _7008));
                vec3 _7095 = vec3(1.0, 0.0, 0.0) * _7018;
                vec3 _7096 = vec3(0.0, 1.0, 0.0) * _7018;
                vec3 _7097 = vec3(0.0, 0.0, 1.0) * _7018;
                vec3 _7100 = cross(_7095, _7096);
                vec3 _7103 = vec3(1.0 / dot(_7097, _7100));
                vec3 _7022 = (mat3(cross(_7096, _7097) * _7103, cross(_7097, _7095) * _7103, _7100 * _7103) * (vs_out_pos_ws - data_holes_1._member0[_6977].position)) / data_holes_1._member0[_6977].size;
                float _7023 = _7022.y;
                float _7026 = clamp((_7023 * data_holes_1._member0[_6977].k) + data_holes_1._member0[_6977].a, 0.0, 1.0);
                bool _16215;
                if (abs(_7022.x) < mix(0.5, 0.0, (_7026 * _7026) * _7026))
                {
                    bool _16216;
                    if (_7023 < ((data_holes_1._member0[_6977].k == 1.0) ? 0.5 : 0.699999988079071044921875))
                    {
                        _16216 = _7023 > (-0.5);
                    }
                    else
                    {
                        _16216 = false;
                    }
                    _16215 = _16216;
                }
                else
                {
                    _16215 = false;
                }
                bool _16217;
                if (_16215)
                {
                    _16217 = abs(_7022.z) < 0.5;
                }
                else
                {
                    _16217 = false;
                }
                if (_16217)
                {
                    _16231 = true;
                    _16223 = true;
                    break;
                }
            }
            _7059 = _16213 + 1u;
            _16213 = _7059;
            continue;
        }
        if (_16223)
        {
            _16230 = _16231;
            break;
        }
        _16230 = false;
        break;
    } while(false);
    if (_16230)
    {
        demote;
    }
    int _529 = int(vs_out_material_id);
    bool _16239;
    if (_529 == 0)
    {
        _16239 = true;
    }
    else
    {
        _16239 = _529 == 2;
    }
    if (_16239)
    {
        vec2 _640 = vs_out_uv * 0.20000000298023223876953125;
        float _17810;
        if (vs_out_pattern_id == 0u)
        {
            vec3 _12979;
            uvec2 _12441 = uvec2(gl_FragCoord.yx);
            float _12694 = 5.588237762451171875 * float(frame_counter.index % 64u);
            float _12704 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_12441.x) + _12694)) + (0.005837149918079376220703125 * (float(_12441.y) + _12694))));
            vec2 _12455 = textureQueryLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _640);
            float _12459 = _12455.x + current_view.mip_bias;
            vec3 _12827 = dFdx(vs_out_pos_ws);
            vec3 _12834 = dFdy(vs_out_pos_ws);
            vec2 _12837 = dFdx(_640);
            vec2 _12844 = dFdy(_640);
            vec2 _12841 = _12844 * (-1.0);
            vec3 _12805 = cross(vs_out_normal_ws, _12834 * (-1.0));
            vec3 _12806 = cross(_12827, vs_out_normal_ws);
            float _12807 = _12837.x;
            float _12808 = _12841.y;
            float _12810 = _12837.y;
            float _12811 = _12841.x;
            float _12814 = 1.0 / ((_12807 * _12808) - (_12810 * _12811));
            mat3 _12824 = transpose(mat3(((_12805 * _12807) + (_12806 * _12811)) * _12814, ((_12805 * _12810) + (_12806 * _12808)) * _12814, vs_out_normal_ws));
            vec4 _12849 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
            vec3 _12856 = vec3(1.0, 0.0, 0.0) * _12824;
            vec3 _12857 = vec3(0.0, 1.0, 0.0) * _12824;
            vec3 _12858 = vec3(0.0, 0.0, 1.0) * _12824;
            vec3 _12861 = cross(_12856, _12857);
            vec3 _12864 = vec3(1.0 / dot(_12858, _12861));
            vec3 _12728 = (vs_out_pos_ws - (_12849.xyz / vec3(_12849.w))) * mat3(cross(_12857, _12858) * _12864, cross(_12858, _12856) * _12864, _12861 * _12864);
            float _12883 = _12728.z;
            vec3 _12888 = vec3(_640, 0.0);
            float _17602;
            do
            {
                _12979 = (_12888 + (_12728 * ((-0.07500000298023223876953125) / _12883))) - _12888;
                float _13008 = mix(0.0, 1.0, pow(_12704 * 0.5, 2.0));
                vec3 _13011 = _12888 + (_12979 * vec3(_13008));
                float _13157 = _13011.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _13011.xy, _12459).x - 1.0) * 0.07500000298023223876953125);
                bool _18096 = (_13157 < 0.0) ? true : false;
                float _17540;
                bool _17545;
                float _17567;
                float _17577;
                float _17587;
                if (_18096)
                {
                    _17587 = _13157;
                    _17577 = 0.0;
                    _17567 = _13008;
                    _17545 = _18096;
                    _17540 = 0.0;
                }
                else
                {
                    float _17542;
                    float _17579;
                    _17579 = _13157;
                    _17542 = _13008;
                    float _13037;
                    uint _13055;
                    float _13202;
                    bool _18097;
                    bool _17546;
                    float _17568;
                    float _17588;
                    uint _17532 = 1u;
                    bool _17547 = _18096;
                    for (;;)
                    {
                        if (!(_17532 < 3u))
                        {
                            _17588 = 0.0;
                            _17568 = 1.0;
                            _17546 = _17547;
                            break;
                        }
                        _13037 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_17532) + _12704) * 0.5, 2.0)));
                        vec3 _13040 = _12888 + (_12979 * vec3(_13037));
                        _13202 = _13040.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _13040.xy, _12459).x - 1.0) * 0.07500000298023223876953125);
                        _18097 = (_13202 < 0.0) ? true : false;
                        if (_18097)
                        {
                            _17588 = _13202;
                            _17568 = _13037;
                            _17546 = _18097;
                            break;
                        }
                        _13055 = _17532 + 1u;
                        _17532 = _13055;
                        _17579 = _13202;
                        _17547 = _18097;
                        _17542 = _13037;
                        continue;
                    }
                    _17587 = _17588;
                    _17577 = _17579;
                    _17567 = _17568;
                    _17545 = _17546;
                    _17540 = _17542;
                }
                if (_17545)
                {
                    float _17565;
                    float _17575;
                    float _17585;
                    float _17589;
                    _17589 = _17540;
                    _17585 = _17587;
                    _17575 = _17577;
                    _17565 = _17567;
                    uint _13101;
                    float _18099;
                    float _18100;
                    float _18101;
                    float _18102;
                    uint _17556 = 0u;
                    for (;;)
                    {
                        if (!(_17556 < 4u))
                        {
                            break;
                        }
                        float _13081 = (_17589 + _17565) * 0.5;
                        vec3 _13084 = _12888 + (_12979 * vec3(_13081));
                        float _13247 = _13084.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _13084.xy, _12459).x - 1.0) * 0.07500000298023223876953125);
                        bool _18098 = (_13247 < 0.0) ? true : false;
                        _18099 = _18098 ? _13247 : _17585;
                        _18100 = _18098 ? _17575 : _13247;
                        _18101 = _18098 ? _13081 : _17565;
                        _18102 = _18098 ? _17589 : _13081;
                        _13101 = _17556 + 1u;
                        _17589 = _18102;
                        _17585 = _18099;
                        _17575 = _18100;
                        _17565 = _18101;
                        _17556 = _13101;
                        continue;
                    }
                    float _13121 = mix(_17589, _17565, _17575 / (_17575 + (-_17585)));
                    vec3 _13124 = _12888 + (_12979 * vec3(_13121));
                    _17602 = ((abs(_13124.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height, samplers_llr), _13124.xy, _12459).x - 1.0) * 0.07500000298023223876953125)) < (_17575 * 0.89999997615814208984375)) ? true : false) ? _13121 : _17565;
                    break;
                }
                else
                {
                    _17602 = _17540;
                    break;
                }
                break; // unreachable workaround
            } while(false);
            _17810 = mix(0.0, 0.96875, texture(sampler2D(stone_floor_textures_stone_floor_seed, samplers_llr), _640 + mix(_12979 * _17602, vec3(0.0), bvec3(_12883 > (-1.1754943508222875079687365372222e-38))).xy, current_view.mip_bias).x);
        }
        else
        {
            float _17811;
            if (vs_out_pattern_id == 1u)
            {
                vec3 _11880;
                uvec2 _11342 = uvec2(gl_FragCoord.yx);
                float _11595 = 5.588237762451171875 * float(frame_counter.index % 64u);
                float _11605 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_11342.x) + _11595)) + (0.005837149918079376220703125 * (float(_11342.y) + _11595))));
                vec2 _11356 = textureQueryLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _640);
                float _11360 = _11356.x + current_view.mip_bias;
                vec3 _11728 = dFdx(vs_out_pos_ws);
                vec3 _11735 = dFdy(vs_out_pos_ws);
                vec2 _11738 = dFdx(_640);
                vec2 _11745 = dFdy(_640);
                vec2 _11742 = _11745 * (-1.0);
                vec3 _11706 = cross(vs_out_normal_ws, _11735 * (-1.0));
                vec3 _11707 = cross(_11728, vs_out_normal_ws);
                float _11708 = _11738.x;
                float _11709 = _11742.y;
                float _11711 = _11738.y;
                float _11712 = _11742.x;
                float _11715 = 1.0 / ((_11708 * _11709) - (_11711 * _11712));
                mat3 _11725 = transpose(mat3(((_11706 * _11708) + (_11707 * _11712)) * _11715, ((_11706 * _11711) + (_11707 * _11709)) * _11715, vs_out_normal_ws));
                vec4 _11750 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
                vec3 _11757 = vec3(1.0, 0.0, 0.0) * _11725;
                vec3 _11758 = vec3(0.0, 1.0, 0.0) * _11725;
                vec3 _11759 = vec3(0.0, 0.0, 1.0) * _11725;
                vec3 _11762 = cross(_11757, _11758);
                vec3 _11765 = vec3(1.0 / dot(_11759, _11762));
                vec3 _11629 = (vs_out_pos_ws - (_11750.xyz / vec3(_11750.w))) * mat3(cross(_11758, _11759) * _11765, cross(_11759, _11757) * _11765, _11762 * _11765);
                float _11784 = _11629.z;
                vec3 _11789 = vec3(_640, 0.0);
                float _17299;
                do
                {
                    _11880 = (_11789 + (_11629 * ((-0.0500000007450580596923828125) / _11784))) - _11789;
                    float _11909 = mix(0.0, 1.0, pow(_11605 * 0.5, 2.0));
                    vec3 _11912 = _11789 + (_11880 * vec3(_11909));
                    float _12058 = _11912.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _11912.xy, _11360).x - 1.0) * 0.0500000007450580596923828125);
                    bool _18085 = (_12058 < 0.0) ? true : false;
                    float _17237;
                    bool _17242;
                    float _17264;
                    float _17274;
                    float _17284;
                    if (_18085)
                    {
                        _17284 = _12058;
                        _17274 = 0.0;
                        _17264 = _11909;
                        _17242 = _18085;
                        _17237 = 0.0;
                    }
                    else
                    {
                        float _17239;
                        float _17276;
                        _17276 = _12058;
                        _17239 = _11909;
                        float _11938;
                        uint _11956;
                        float _12103;
                        bool _18086;
                        bool _17243;
                        float _17265;
                        float _17285;
                        uint _17229 = 1u;
                        bool _17244 = _18085;
                        for (;;)
                        {
                            if (!(_17229 < 3u))
                            {
                                _17285 = 0.0;
                                _17265 = 1.0;
                                _17243 = _17244;
                                break;
                            }
                            _11938 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_17229) + _11605) * 0.5, 2.0)));
                            vec3 _11941 = _11789 + (_11880 * vec3(_11938));
                            _12103 = _11941.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _11941.xy, _11360).x - 1.0) * 0.0500000007450580596923828125);
                            _18086 = (_12103 < 0.0) ? true : false;
                            if (_18086)
                            {
                                _17285 = _12103;
                                _17265 = _11938;
                                _17243 = _18086;
                                break;
                            }
                            _11956 = _17229 + 1u;
                            _17229 = _11956;
                            _17276 = _12103;
                            _17244 = _18086;
                            _17239 = _11938;
                            continue;
                        }
                        _17284 = _17285;
                        _17274 = _17276;
                        _17264 = _17265;
                        _17242 = _17243;
                        _17237 = _17239;
                    }
                    if (_17242)
                    {
                        float _17262;
                        float _17272;
                        float _17282;
                        float _17286;
                        _17286 = _17237;
                        _17282 = _17284;
                        _17272 = _17274;
                        _17262 = _17264;
                        uint _12002;
                        float _18088;
                        float _18089;
                        float _18090;
                        float _18091;
                        uint _17253 = 0u;
                        for (;;)
                        {
                            if (!(_17253 < 4u))
                            {
                                break;
                            }
                            float _11982 = (_17286 + _17262) * 0.5;
                            vec3 _11985 = _11789 + (_11880 * vec3(_11982));
                            float _12148 = _11985.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _11985.xy, _11360).x - 1.0) * 0.0500000007450580596923828125);
                            bool _18087 = (_12148 < 0.0) ? true : false;
                            _18088 = _18087 ? _12148 : _17282;
                            _18089 = _18087 ? _17272 : _12148;
                            _18090 = _18087 ? _11982 : _17262;
                            _18091 = _18087 ? _17286 : _11982;
                            _12002 = _17253 + 1u;
                            _17286 = _18091;
                            _17282 = _18088;
                            _17272 = _18089;
                            _17262 = _18090;
                            _17253 = _12002;
                            continue;
                        }
                        float _12022 = mix(_17286, _17262, _17272 / (_17272 + (-_17282)));
                        vec3 _12025 = _11789 + (_11880 * vec3(_12022));
                        _17299 = ((abs(_12025.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height_2, samplers_llr), _12025.xy, _11360).x - 1.0) * 0.0500000007450580596923828125)) < (_17272 * 0.89999997615814208984375)) ? true : false) ? _12022 : _17262;
                        break;
                    }
                    else
                    {
                        _17299 = _17237;
                        break;
                    }
                    break; // unreachable workaround
                } while(false);
                _17811 = mix(0.0, 0.96875, texture(sampler2D(stone_floor_textures_stone_floor_seed_2, samplers_llr), _640 + mix(_11880 * _17299, vec3(0.0), bvec3(_11784 > (-1.1754943508222875079687365372222e-38))).xy, current_view.mip_bias).x);
            }
            else
            {
                vec3 _10781;
                uvec2 _10243 = uvec2(gl_FragCoord.yx);
                float _10496 = 5.588237762451171875 * float(frame_counter.index % 64u);
                float _10506 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_10243.x) + _10496)) + (0.005837149918079376220703125 * (float(_10243.y) + _10496))));
                vec2 _10257 = textureQueryLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _640);
                float _10261 = _10257.x + current_view.mip_bias;
                vec3 _10629 = dFdx(vs_out_pos_ws);
                vec3 _10636 = dFdy(vs_out_pos_ws);
                vec2 _10639 = dFdx(_640);
                vec2 _10646 = dFdy(_640);
                vec2 _10643 = _10646 * (-1.0);
                vec3 _10607 = cross(vs_out_normal_ws, _10636 * (-1.0));
                vec3 _10608 = cross(_10629, vs_out_normal_ws);
                float _10609 = _10639.x;
                float _10610 = _10643.y;
                float _10612 = _10639.y;
                float _10613 = _10643.x;
                float _10616 = 1.0 / ((_10609 * _10610) - (_10612 * _10613));
                mat3 _10626 = transpose(mat3(((_10607 * _10609) + (_10608 * _10613)) * _10616, ((_10607 * _10612) + (_10608 * _10610)) * _10616, vs_out_normal_ws));
                vec4 _10651 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
                vec3 _10658 = vec3(1.0, 0.0, 0.0) * _10626;
                vec3 _10659 = vec3(0.0, 1.0, 0.0) * _10626;
                vec3 _10660 = vec3(0.0, 0.0, 1.0) * _10626;
                vec3 _10663 = cross(_10658, _10659);
                vec3 _10666 = vec3(1.0 / dot(_10660, _10663));
                vec3 _10530 = (vs_out_pos_ws - (_10651.xyz / vec3(_10651.w))) * mat3(cross(_10659, _10660) * _10666, cross(_10660, _10658) * _10666, _10663 * _10666);
                float _10685 = _10530.z;
                vec3 _10690 = vec3(_640, 0.0);
                float _16996;
                do
                {
                    _10781 = (_10690 + (_10530 * ((-0.0500000007450580596923828125) / _10685))) - _10690;
                    float _10810 = mix(0.0, 1.0, pow(_10506 * 0.5, 2.0));
                    vec3 _10813 = _10690 + (_10781 * vec3(_10810));
                    float _10959 = _10813.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _10813.xy, _10261).x - 1.0) * 0.0500000007450580596923828125);
                    bool _18074 = (_10959 < 0.0) ? true : false;
                    float _16934;
                    bool _16939;
                    float _16961;
                    float _16971;
                    float _16981;
                    if (_18074)
                    {
                        _16981 = _10959;
                        _16971 = 0.0;
                        _16961 = _10810;
                        _16939 = _18074;
                        _16934 = 0.0;
                    }
                    else
                    {
                        float _16936;
                        float _16973;
                        _16973 = _10959;
                        _16936 = _10810;
                        float _10839;
                        uint _10857;
                        float _11004;
                        bool _18075;
                        bool _16940;
                        float _16962;
                        float _16982;
                        uint _16926 = 1u;
                        bool _16941 = _18074;
                        for (;;)
                        {
                            if (!(_16926 < 3u))
                            {
                                _16982 = 0.0;
                                _16962 = 1.0;
                                _16940 = _16941;
                                break;
                            }
                            _10839 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_16926) + _10506) * 0.5, 2.0)));
                            vec3 _10842 = _10690 + (_10781 * vec3(_10839));
                            _11004 = _10842.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _10842.xy, _10261).x - 1.0) * 0.0500000007450580596923828125);
                            _18075 = (_11004 < 0.0) ? true : false;
                            if (_18075)
                            {
                                _16982 = _11004;
                                _16962 = _10839;
                                _16940 = _18075;
                                break;
                            }
                            _10857 = _16926 + 1u;
                            _16926 = _10857;
                            _16973 = _11004;
                            _16941 = _18075;
                            _16936 = _10839;
                            continue;
                        }
                        _16981 = _16982;
                        _16971 = _16973;
                        _16961 = _16962;
                        _16939 = _16940;
                        _16934 = _16936;
                    }
                    if (_16939)
                    {
                        float _16959;
                        float _16969;
                        float _16979;
                        float _16983;
                        _16983 = _16934;
                        _16979 = _16981;
                        _16969 = _16971;
                        _16959 = _16961;
                        uint _10903;
                        float _18077;
                        float _18078;
                        float _18079;
                        float _18080;
                        uint _16950 = 0u;
                        for (;;)
                        {
                            if (!(_16950 < 4u))
                            {
                                break;
                            }
                            float _10883 = (_16983 + _16959) * 0.5;
                            vec3 _10886 = _10690 + (_10781 * vec3(_10883));
                            float _11049 = _10886.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _10886.xy, _10261).x - 1.0) * 0.0500000007450580596923828125);
                            bool _18076 = (_11049 < 0.0) ? true : false;
                            _18077 = _18076 ? _11049 : _16979;
                            _18078 = _18076 ? _16969 : _11049;
                            _18079 = _18076 ? _10883 : _16959;
                            _18080 = _18076 ? _16983 : _10883;
                            _10903 = _16950 + 1u;
                            _16983 = _18080;
                            _16979 = _18077;
                            _16969 = _18078;
                            _16959 = _18079;
                            _16950 = _10903;
                            continue;
                        }
                        float _10923 = mix(_16983, _16959, _16969 / (_16969 + (-_16979)));
                        vec3 _10926 = _10690 + (_10781 * vec3(_10923));
                        _16996 = ((abs(_10926.z - ((textureLod(sampler2D(stone_floor_textures_stone_floor_height_3, samplers_llr), _10926.xy, _10261).x - 1.0) * 0.0500000007450580596923828125)) < (_16969 * 0.89999997615814208984375)) ? true : false) ? _10923 : _16959;
                        break;
                    }
                    else
                    {
                        _16996 = _16934;
                        break;
                    }
                    break; // unreachable workaround
                } while(false);
                _17811 = mix(0.0, 0.96875, texture(sampler2D(stone_floor_textures_stone_floor_seed_3, samplers_llr), _640 + mix(_10781 * _16996, vec3(0.0), bvec3(_10685 > (-1.1754943508222875079687365372222e-38))).xy, current_view.mip_bias).x);
            }
            _17810 = _17811;
        }
        if ((_17810 * _17810) >= material_data_nani_instance_data._member0[vs_out_instance_index].roof_animation)
        {
            demote;
        }
    }
    else
    {
        bool _16240;
        if (_529 == 1)
        {
            _16240 = true;
        }
        else
        {
            _16240 = _529 == 3;
        }
        if (_16240)
        {
            vec2 _4088 = vs_out_uv * 0.20000000298023223876953125;
            float _16897;
            if (vs_out_pattern_id == 0u)
            {
                vec3 _9654;
                uvec2 _9184 = uvec2(gl_FragCoord.yx);
                float _9369 = 5.588237762451171875 * float(frame_counter.index % 64u);
                float _9379 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_9184.x) + _9369)) + (0.005837149918079376220703125 * (float(_9184.y) + _9369))));
                vec2 _9198 = textureQueryLod(sampler2D(wooden_floor_textures_wooden_floor_height, samplers_llr), _4088);
                float _9202 = _9198.x + current_view.mip_bias;
                vec3 _9502 = dFdx(vs_out_pos_ws);
                vec3 _9509 = dFdy(vs_out_pos_ws);
                vec2 _9512 = dFdx(_4088);
                vec2 _9519 = dFdy(_4088);
                vec2 _9516 = _9519 * (-1.0);
                vec3 _9480 = cross(vs_out_normal_ws, _9509 * (-1.0));
                vec3 _9481 = cross(_9502, vs_out_normal_ws);
                float _9482 = _9512.x;
                float _9483 = _9516.y;
                float _9485 = _9512.y;
                float _9486 = _9516.x;
                float _9489 = 1.0 / ((_9482 * _9483) - (_9485 * _9486));
                mat3 _9499 = transpose(mat3(((_9480 * _9482) + (_9481 * _9486)) * _9489, ((_9480 * _9485) + (_9481 * _9483)) * _9489, vs_out_normal_ws));
                vec4 _9524 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
                vec3 _9531 = vec3(1.0, 0.0, 0.0) * _9499;
                vec3 _9532 = vec3(0.0, 1.0, 0.0) * _9499;
                vec3 _9533 = vec3(0.0, 0.0, 1.0) * _9499;
                vec3 _9536 = cross(_9531, _9532);
                vec3 _9539 = vec3(1.0 / dot(_9533, _9536));
                vec3 _9403 = (vs_out_pos_ws - (_9524.xyz / vec3(_9524.w))) * mat3(cross(_9532, _9533) * _9539, cross(_9533, _9531) * _9539, _9536 * _9539);
                float _9558 = _9403.z;
                vec3 _9563 = vec3(_4088, 0.0);
                float _16773;
                do
                {
                    _9654 = (_9563 + (_9403 * ((-0.07500000298023223876953125) / _9558))) - _9563;
                    float _9683 = mix(0.0, 1.0, pow(_9379 * 0.5, 2.0));
                    vec3 _9686 = _9563 + (_9654 * vec3(_9683));
                    float _9832 = _9686.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height, samplers_llr), _9686.xy, _9202).x - 1.0) * 0.07500000298023223876953125);
                    bool _18063 = (_9832 < 0.0) ? true : false;
                    float _16711;
                    bool _16716;
                    float _16738;
                    float _16748;
                    float _16758;
                    if (_18063)
                    {
                        _16758 = _9832;
                        _16748 = 0.0;
                        _16738 = _9683;
                        _16716 = _18063;
                        _16711 = 0.0;
                    }
                    else
                    {
                        float _16713;
                        float _16750;
                        _16750 = _9832;
                        _16713 = _9683;
                        float _9712;
                        uint _9730;
                        float _9877;
                        bool _18064;
                        bool _16717;
                        float _16739;
                        float _16759;
                        uint _16703 = 1u;
                        bool _16718 = _18063;
                        for (;;)
                        {
                            if (!(_16703 < 3u))
                            {
                                _16759 = 0.0;
                                _16739 = 1.0;
                                _16717 = _16718;
                                break;
                            }
                            _9712 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_16703) + _9379) * 0.5, 2.0)));
                            vec3 _9715 = _9563 + (_9654 * vec3(_9712));
                            _9877 = _9715.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height, samplers_llr), _9715.xy, _9202).x - 1.0) * 0.07500000298023223876953125);
                            _18064 = (_9877 < 0.0) ? true : false;
                            if (_18064)
                            {
                                _16759 = _9877;
                                _16739 = _9712;
                                _16717 = _18064;
                                break;
                            }
                            _9730 = _16703 + 1u;
                            _16703 = _9730;
                            _16750 = _9877;
                            _16718 = _18064;
                            _16713 = _9712;
                            continue;
                        }
                        _16758 = _16759;
                        _16748 = _16750;
                        _16738 = _16739;
                        _16716 = _16717;
                        _16711 = _16713;
                    }
                    if (_16716)
                    {
                        float _16736;
                        float _16746;
                        float _16756;
                        float _16760;
                        _16760 = _16711;
                        _16756 = _16758;
                        _16746 = _16748;
                        _16736 = _16738;
                        uint _9776;
                        float _18066;
                        float _18067;
                        float _18068;
                        float _18069;
                        uint _16727 = 0u;
                        for (;;)
                        {
                            if (!(_16727 < 4u))
                            {
                                break;
                            }
                            float _9756 = (_16760 + _16736) * 0.5;
                            vec3 _9759 = _9563 + (_9654 * vec3(_9756));
                            float _9922 = _9759.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height, samplers_llr), _9759.xy, _9202).x - 1.0) * 0.07500000298023223876953125);
                            bool _18065 = (_9922 < 0.0) ? true : false;
                            _18066 = _18065 ? _9922 : _16756;
                            _18067 = _18065 ? _16746 : _9922;
                            _18068 = _18065 ? _9756 : _16736;
                            _18069 = _18065 ? _16760 : _9756;
                            _9776 = _16727 + 1u;
                            _16760 = _18069;
                            _16756 = _18066;
                            _16746 = _18067;
                            _16736 = _18068;
                            _16727 = _9776;
                            continue;
                        }
                        float _9796 = mix(_16760, _16736, _16746 / (_16746 + (-_16756)));
                        vec3 _9799 = _9563 + (_9654 * vec3(_9796));
                        _16773 = ((abs(_9799.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height, samplers_llr), _9799.xy, _9202).x - 1.0) * 0.07500000298023223876953125)) < (_16746 * 0.89999997615814208984375)) ? true : false) ? _9796 : _16736;
                        break;
                    }
                    else
                    {
                        _16773 = _16711;
                        break;
                    }
                    break; // unreachable workaround
                } while(false);
                _16897 = mix(0.0, 0.96875, texture(sampler2D(wooden_floor_textures_wooden_floor_seed, samplers_llr), _4088 + mix(_9654 * _16773, vec3(0.0), bvec3(_9558 > (-1.1754943508222875079687365372222e-38))).xy, current_view.mip_bias).x);
            }
            else
            {
                float _16898;
                if (vs_out_pattern_id == 1u)
                {
                    vec3 _8650;
                    uvec2 _8180 = uvec2(gl_FragCoord.yx);
                    float _8365 = 5.588237762451171875 * float(frame_counter.index % 64u);
                    float _8375 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_8180.x) + _8365)) + (0.005837149918079376220703125 * (float(_8180.y) + _8365))));
                    vec2 _8194 = textureQueryLod(sampler2D(wooden_floor_textures_wooden_floor_height_2, samplers_llr), _4088);
                    float _8198 = _8194.x + current_view.mip_bias;
                    vec3 _8498 = dFdx(vs_out_pos_ws);
                    vec3 _8505 = dFdy(vs_out_pos_ws);
                    vec2 _8508 = dFdx(_4088);
                    vec2 _8515 = dFdy(_4088);
                    vec2 _8512 = _8515 * (-1.0);
                    vec3 _8476 = cross(vs_out_normal_ws, _8505 * (-1.0));
                    vec3 _8477 = cross(_8498, vs_out_normal_ws);
                    float _8478 = _8508.x;
                    float _8479 = _8512.y;
                    float _8481 = _8508.y;
                    float _8482 = _8512.x;
                    float _8485 = 1.0 / ((_8478 * _8479) - (_8481 * _8482));
                    mat3 _8495 = transpose(mat3(((_8476 * _8478) + (_8477 * _8482)) * _8485, ((_8476 * _8481) + (_8477 * _8479)) * _8485, vs_out_normal_ws));
                    vec4 _8520 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
                    vec3 _8527 = vec3(1.0, 0.0, 0.0) * _8495;
                    vec3 _8528 = vec3(0.0, 1.0, 0.0) * _8495;
                    vec3 _8529 = vec3(0.0, 0.0, 1.0) * _8495;
                    vec3 _8532 = cross(_8527, _8528);
                    vec3 _8535 = vec3(1.0 / dot(_8529, _8532));
                    vec3 _8399 = (vs_out_pos_ws - (_8520.xyz / vec3(_8520.w))) * mat3(cross(_8528, _8529) * _8535, cross(_8529, _8527) * _8535, _8532 * _8535);
                    float _8554 = _8399.z;
                    vec3 _8559 = vec3(_4088, 0.0);
                    float _16553;
                    do
                    {
                        _8650 = (_8559 + (_8399 * ((-0.07500000298023223876953125) / _8554))) - _8559;
                        float _8679 = mix(0.0, 1.0, pow(_8375 * 0.5, 2.0));
                        vec3 _8682 = _8559 + (_8650 * vec3(_8679));
                        float _8828 = _8682.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height_2, samplers_llr), _8682.xy, _8198).x - 1.0) * 0.07500000298023223876953125);
                        bool _18052 = (_8828 < 0.0) ? true : false;
                        float _16491;
                        bool _16496;
                        float _16518;
                        float _16528;
                        float _16538;
                        if (_18052)
                        {
                            _16538 = _8828;
                            _16528 = 0.0;
                            _16518 = _8679;
                            _16496 = _18052;
                            _16491 = 0.0;
                        }
                        else
                        {
                            float _16493;
                            float _16530;
                            _16530 = _8828;
                            _16493 = _8679;
                            float _8708;
                            uint _8726;
                            float _8873;
                            bool _18053;
                            bool _16497;
                            float _16519;
                            float _16539;
                            uint _16483 = 1u;
                            bool _16498 = _18052;
                            for (;;)
                            {
                                if (!(_16483 < 3u))
                                {
                                    _16539 = 0.0;
                                    _16519 = 1.0;
                                    _16497 = _16498;
                                    break;
                                }
                                _8708 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_16483) + _8375) * 0.5, 2.0)));
                                vec3 _8711 = _8559 + (_8650 * vec3(_8708));
                                _8873 = _8711.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height_2, samplers_llr), _8711.xy, _8198).x - 1.0) * 0.07500000298023223876953125);
                                _18053 = (_8873 < 0.0) ? true : false;
                                if (_18053)
                                {
                                    _16539 = _8873;
                                    _16519 = _8708;
                                    _16497 = _18053;
                                    break;
                                }
                                _8726 = _16483 + 1u;
                                _16483 = _8726;
                                _16530 = _8873;
                                _16498 = _18053;
                                _16493 = _8708;
                                continue;
                            }
                            _16538 = _16539;
                            _16528 = _16530;
                            _16518 = _16519;
                            _16496 = _16497;
                            _16491 = _16493;
                        }
                        if (_16496)
                        {
                            float _16516;
                            float _16526;
                            float _16536;
                            float _16540;
                            _16540 = _16491;
                            _16536 = _16538;
                            _16526 = _16528;
                            _16516 = _16518;
                            uint _8772;
                            float _18055;
                            float _18056;
                            float _18057;
                            float _18058;
                            uint _16507 = 0u;
                            for (;;)
                            {
                                if (!(_16507 < 4u))
                                {
                                    break;
                                }
                                float _8752 = (_16540 + _16516) * 0.5;
                                vec3 _8755 = _8559 + (_8650 * vec3(_8752));
                                float _8918 = _8755.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height_2, samplers_llr), _8755.xy, _8198).x - 1.0) * 0.07500000298023223876953125);
                                bool _18054 = (_8918 < 0.0) ? true : false;
                                _18055 = _18054 ? _8918 : _16536;
                                _18056 = _18054 ? _16526 : _8918;
                                _18057 = _18054 ? _8752 : _16516;
                                _18058 = _18054 ? _16540 : _8752;
                                _8772 = _16507 + 1u;
                                _16540 = _18058;
                                _16536 = _18055;
                                _16526 = _18056;
                                _16516 = _18057;
                                _16507 = _8772;
                                continue;
                            }
                            float _8792 = mix(_16540, _16516, _16526 / (_16526 + (-_16536)));
                            vec3 _8795 = _8559 + (_8650 * vec3(_8792));
                            _16553 = ((abs(_8795.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height_2, samplers_llr), _8795.xy, _8198).x - 1.0) * 0.07500000298023223876953125)) < (_16526 * 0.89999997615814208984375)) ? true : false) ? _8792 : _16516;
                            break;
                        }
                        else
                        {
                            _16553 = _16491;
                            break;
                        }
                        break; // unreachable workaround
                    } while(false);
                    _16898 = mix(0.0, 0.96875, texture(sampler2D(wooden_floor_textures_wooden_floor_seed_2, samplers_llr), _4088 + mix(_8650 * _16553, vec3(0.0), bvec3(_8554 > (-1.1754943508222875079687365372222e-38))).xy, current_view.mip_bias).x);
                }
                else
                {
                    vec3 _7646;
                    uvec2 _7176 = uvec2(gl_FragCoord.yx);
                    float _7361 = 5.588237762451171875 * float(frame_counter.index % 64u);
                    float _7371 = fract(52.98291778564453125 * fract((0.067110560834407806396484375 * (float(_7176.x) + _7361)) + (0.005837149918079376220703125 * (float(_7176.y) + _7361))));
                    vec2 _7190 = textureQueryLod(sampler2D(wooden_floor_textures_wooden_floor_height_3, samplers_llr), _4088);
                    float _7194 = _7190.x + current_view.mip_bias;
                    vec3 _7494 = dFdx(vs_out_pos_ws);
                    vec3 _7501 = dFdy(vs_out_pos_ws);
                    vec2 _7504 = dFdx(_4088);
                    vec2 _7511 = dFdy(_4088);
                    vec2 _7508 = _7511 * (-1.0);
                    vec3 _7472 = cross(vs_out_normal_ws, _7501 * (-1.0));
                    vec3 _7473 = cross(_7494, vs_out_normal_ws);
                    float _7474 = _7504.x;
                    float _7475 = _7508.y;
                    float _7477 = _7504.y;
                    float _7478 = _7508.x;
                    float _7481 = 1.0 / ((_7474 * _7475) - (_7477 * _7478));
                    mat3 _7491 = transpose(mat3(((_7472 * _7474) + (_7473 * _7478)) * _7481, ((_7472 * _7477) + (_7473 * _7475)) * _7481, vs_out_normal_ws));
                    vec4 _7516 = vec4(0.0, 0.0, 0.0, 1.0) * current_view.view_to_world;
                    vec3 _7523 = vec3(1.0, 0.0, 0.0) * _7491;
                    vec3 _7524 = vec3(0.0, 1.0, 0.0) * _7491;
                    vec3 _7525 = vec3(0.0, 0.0, 1.0) * _7491;
                    vec3 _7528 = cross(_7523, _7524);
                    vec3 _7531 = vec3(1.0 / dot(_7525, _7528));
                    vec3 _7395 = (vs_out_pos_ws - (_7516.xyz / vec3(_7516.w))) * mat3(cross(_7524, _7525) * _7531, cross(_7525, _7523) * _7531, _7528 * _7531);
                    float _7550 = _7395.z;
                    vec3 _7555 = vec3(_4088, 0.0);
                    float _16333;
                    do
                    {
                        _7646 = (_7555 + (_7395 * ((-0.07500000298023223876953125) / _7550))) - _7555;
                        float _7675 = mix(0.0, 1.0, pow(_7371 * 0.5, 2.0));
                        vec3 _7678 = _7555 + (_7646 * vec3(_7675));
                        float _7824 = _7678.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height_3, samplers_llr), _7678.xy, _7194).x - 1.0) * 0.07500000298023223876953125);
                        bool _18040 = (_7824 < 0.0) ? true : false;
                        float _16271;
                        bool _16276;
                        float _16298;
                        float _16308;
                        float _16318;
                        if (_18040)
                        {
                            _16318 = _7824;
                            _16308 = 0.0;
                            _16298 = _7675;
                            _16276 = _18040;
                            _16271 = 0.0;
                        }
                        else
                        {
                            float _16273;
                            float _16310;
                            _16310 = _7824;
                            _16273 = _7675;
                            float _7704;
                            uint _7722;
                            float _7869;
                            bool _18041;
                            bool _16277;
                            float _16299;
                            float _16319;
                            uint _16263 = 1u;
                            bool _16278 = _18040;
                            for (;;)
                            {
                                if (!(_16263 < 3u))
                                {
                                    _16319 = 0.0;
                                    _16299 = 1.0;
                                    _16277 = _16278;
                                    break;
                                }
                                _7704 = mix(0.0, 1.0, min(0.9999847412109375, pow((float(_16263) + _7371) * 0.5, 2.0)));
                                vec3 _7707 = _7555 + (_7646 * vec3(_7704));
                                _7869 = _7707.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height_3, samplers_llr), _7707.xy, _7194).x - 1.0) * 0.07500000298023223876953125);
                                _18041 = (_7869 < 0.0) ? true : false;
                                if (_18041)
                                {
                                    _16319 = _7869;
                                    _16299 = _7704;
                                    _16277 = _18041;
                                    break;
                                }
                                _7722 = _16263 + 1u;
                                _16263 = _7722;
                                _16310 = _7869;
                                _16278 = _18041;
                                _16273 = _7704;
                                continue;
                            }
                            _16318 = _16319;
                            _16308 = _16310;
                            _16298 = _16299;
                            _16276 = _16277;
                            _16271 = _16273;
                        }
                        if (_16276)
                        {
                            float _16296;
                            float _16306;
                            float _16316;
                            float _16320;
                            _16320 = _16271;
                            _16316 = _16318;
                            _16306 = _16308;
                            _16296 = _16298;
                            uint _7768;
                            float _18043;
                            float _18044;
                            float _18045;
                            float _18046;
                            uint _16287 = 0u;
                            for (;;)
                            {
                                if (!(_16287 < 4u))
                                {
                                    break;
                                }
                                float _7748 = (_16320 + _16296) * 0.5;
                                vec3 _7751 = _7555 + (_7646 * vec3(_7748));
                                float _7914 = _7751.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height_3, samplers_llr), _7751.xy, _7194).x - 1.0) * 0.07500000298023223876953125);
                                bool _18042 = (_7914 < 0.0) ? true : false;
                                _18043 = _18042 ? _7914 : _16316;
                                _18044 = _18042 ? _16306 : _7914;
                                _18045 = _18042 ? _7748 : _16296;
                                _18046 = _18042 ? _16320 : _7748;
                                _7768 = _16287 + 1u;
                                _16320 = _18046;
                                _16316 = _18043;
                                _16306 = _18044;
                                _16296 = _18045;
                                _16287 = _7768;
                                continue;
                            }
                            float _7788 = mix(_16320, _16296, _16306 / (_16306 + (-_16316)));
                            vec3 _7791 = _7555 + (_7646 * vec3(_7788));
                            _16333 = ((abs(_7791.z - ((textureLod(sampler2D(wooden_floor_textures_wooden_floor_height_3, samplers_llr), _7791.xy, _7194).x - 1.0) * 0.07500000298023223876953125)) < (_16306 * 0.89999997615814208984375)) ? true : false) ? _7788 : _16296;
                            break;
                        }
                        else
                        {
                            _16333 = _16271;
                            break;
                        }
                        break; // unreachable workaround
                    } while(false);
                    _16898 = mix(0.0, 0.96875, texture(sampler2D(wooden_floor_textures_wooden_floor_seed_3, samplers_llr), _4088 + mix(_7646 * _16333, vec3(0.0), bvec3(_7550 > (-1.1754943508222875079687365372222e-38))).xy, current_view.mip_bias).x);
                }
                _16897 = _16898;
            }
            if (_16897 >= material_data_nani_instance_data._member0[vs_out_instance_index].roof_animation)
            {
                demote;
            }
        }
        else
        {
        }
    }
}

