#version 460

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct FlowerXform_natural
{
    Affine3Packed_natural transform;
    vec3 color;
    uint flower_type;
};

float _1364;

layout(set = 18, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 0, std430) readonly buffer material_data_nani_instance_data
{
    FlowerXform_natural _member0[];
} material_data_nani_instance_data_1;

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

layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 6, binding = 0) uniform texture2D object_push_grass_object_push;

layout(location = 0) in vec3 Vertex_Position;
layout(location = 4) in vec3 autumn_color;
layout(location = 5) in vec3 flowery_color;
layout(location = 1) in vec3 Vertex_Color;
layout(location = 3) in float wind_bend;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;

void main()
{
    uint _61 = uint(gl_InstanceIndex);
    mat3x4 _743 = transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_61]].transform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_61]].transform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_61]].transform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_61]].transform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_61]].transform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_61]].transform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_61]].transform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_61]].transform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_61]].transform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_61]].transform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_61]].transform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_61]].transform.data.data[11])));
    vec3 _706 = vec4(vec3(0.0), 1.0) * _743;
    vec3 _748 = vec4(Vertex_Position, 1.0) * _743;
    uint _163 = uint(((_706.x * 20.0) - (_706.z * 20.0)) + 2000.0);
    uint _792 = _163 + (_163 << 10u);
    uint _794 = _792 ^ (_792 >> 6u);
    uint _796 = _794 + (_794 << 3u);
    uint _798 = _796 ^ (_796 >> 11u);
    float _806 = uintBitsToFloat(((_798 + (_798 << 15u)) & 8388607u) | 1065353216u) - 1.0;
    bool _811 = frame_constants.glade_theme_id == 2u;
    bool _1355;
    if (_811)
    {
        _1355 = true;
    }
    else
    {
        _1355 = frame_constants.glade_theme_id == 4u;
    }
    float _1444;
    vec3 _1456;
    if (_1355)
    {
        vec3 _1460;
        if (frame_constants.glade_theme_id == 4u)
        {
            _1460 = mix(autumn_color, vec3(0.699999988079071044921875), vec3(0.5));
        }
        else
        {
            _1460 = autumn_color;
        }
        _1456 = _1460;
        _1444 = _806 * 0.5;
    }
    else
    {
        float _1445;
        vec3 _1457;
        if (frame_constants.glade_theme_id == 1u)
        {
            _1457 = flowery_color;
            _1445 = _806 * 0.5;
        }
        else
        {
            bool _1356;
            if (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_61]].flower_type == 0u)
            {
                _1356 = frame_constants.glade_theme_id == 3u;
            }
            else
            {
                _1356 = false;
            }
            vec3 _1458;
            if (_1356)
            {
                _1458 = mix(Vertex_Color, vec3(0.2100000083446502685546875, 0.2100000083446502685546875, 0.3499999940395355224609375), bvec3(Vertex_Color.z > 0.20000000298023223876953125));
            }
            else
            {
                _1458 = Vertex_Color;
            }
            _1457 = _1458;
            _1445 = _806;
        }
        _1456 = _1457;
        _1444 = _1445;
    }
    vec3 _1455;
    if (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_61]].color.x > (-1.0))
    {
        bool _1357;
        if (_811)
        {
            _1357 = true;
        }
        else
        {
            _1357 = frame_constants.glade_theme_id == 4u;
        }
        vec3 _1461;
        if (_1357)
        {
            _1461 = vec3(0.207062780857086181640625, 0.16431677341461181640625, 0.291862964630126953125);
        }
        else
        {
            vec3 _1462;
            if (frame_constants.glade_theme_id == 1u)
            {
                _1462 = vec3(0.3105941712856292724609375, 0.246475160121917724609375, 0.4377944469451904296875);
            }
            else
            {
                _1462 = mix(vec3(0.12679146230220794677734375, 0.30534231662750244140625, 0.4958840310573577880859375), vec3(0.3105941712856292724609375, 0.246475160121917724609375, 0.4377944469451904296875), bvec3(frame_constants.glade_theme_id == 3u));
            }
            _1461 = _1462;
        }
        _1455 = _1461;
    }
    else
    {
        _1455 = _1456;
    }
    vec2 _359 = _706.xz;
    vec2 _853 = (_359 * 0.100000001490116119384765625) + (vec2(float(frame_constants.game_time_sec) + frame_constants.game_time_frac, 0.0) * 1.2000000476837158203125);
    ivec2 _890 = ivec2(floor(_853));
    vec2 _891 = fract(_853);
    uvec2 _892 = uvec2(_890);
    uint _942 = _892.y;
    uint _948 = _942 + (_942 << 10u);
    uint _950 = _948 ^ (_948 >> 6u);
    uint _952 = _950 + (_950 << 3u);
    uint _954 = _952 ^ (_952 >> 11u);
    uint _962 = (((_892.x * 1664525u) + (_954 + (_954 << 15u))) + 1013904223u) * 1664525u;
    uint _964 = _962 ^ (_962 >> 11u);
    uint _967 = _964 ^ ((_964 << 7u) & 2636928640u);
    uint _970 = _967 ^ ((_967 << 15u) & 4022730752u);
    uint _972 = _970 ^ (_970 >> 18u);
    float _1372;
    _1372 = _1364;
    uint _989;
    uint _1008;
    float _1014;
    uint _1371 = 0u;
    uint _1467 = _972;
    for (;;)
    {
        if (!(_1371 < 1u))
        {
            break;
        }
        uint _1000 = _1467 + (_1467 << 10u);
        uint _1002 = _1000 ^ (_1000 >> 6u);
        uint _1004 = _1002 + (_1002 << 3u);
        uint _1006 = _1004 ^ (_1004 >> 11u);
        _1008 = _1006 + (_1006 << 15u);
        _1014 = uintBitsToFloat((_1467 & 8388607u) | 1065353216u) - 1.0;
        _989 = _1371 + 1u;
        _1467 = _1008;
        _1372 = _1014;
        _1371 = _989;
        continue;
    }
    uvec2 _900 = uvec2(_890 + ivec2(1, 0));
    uint _1018 = _900.y;
    uint _1024 = _1018 + (_1018 << 10u);
    uint _1026 = _1024 ^ (_1024 >> 6u);
    uint _1028 = _1026 + (_1026 << 3u);
    uint _1030 = _1028 ^ (_1028 >> 11u);
    uint _1038 = (((_900.x * 1664525u) + (_1030 + (_1030 << 15u))) + 1013904223u) * 1664525u;
    uint _1040 = _1038 ^ (_1038 >> 11u);
    uint _1043 = _1040 ^ ((_1040 << 7u) & 2636928640u);
    uint _1046 = _1043 ^ ((_1043 << 15u) & 4022730752u);
    uint _1048 = _1046 ^ (_1046 >> 18u);
    float _1387;
    _1387 = _1364;
    uint _1065;
    uint _1084;
    float _1090;
    uint _1386 = 0u;
    uint _1466 = _1048;
    for (;;)
    {
        if (!(_1386 < 1u))
        {
            break;
        }
        uint _1076 = _1466 + (_1466 << 10u);
        uint _1078 = _1076 ^ (_1076 >> 6u);
        uint _1080 = _1078 + (_1078 << 3u);
        uint _1082 = _1080 ^ (_1080 >> 11u);
        _1084 = _1082 + (_1082 << 15u);
        _1090 = uintBitsToFloat((_1466 & 8388607u) | 1065353216u) - 1.0;
        _1065 = _1386 + 1u;
        _1466 = _1084;
        _1387 = _1090;
        _1386 = _1065;
        continue;
    }
    uvec2 _907 = uvec2(_890 + ivec2(0, 1));
    uint _1094 = _907.y;
    uint _1100 = _1094 + (_1094 << 10u);
    uint _1102 = _1100 ^ (_1100 >> 6u);
    uint _1104 = _1102 + (_1102 << 3u);
    uint _1106 = _1104 ^ (_1104 >> 11u);
    uint _1114 = (((_907.x * 1664525u) + (_1106 + (_1106 << 15u))) + 1013904223u) * 1664525u;
    uint _1116 = _1114 ^ (_1114 >> 11u);
    uint _1119 = _1116 ^ ((_1116 << 7u) & 2636928640u);
    uint _1122 = _1119 ^ ((_1119 << 15u) & 4022730752u);
    uint _1124 = _1122 ^ (_1122 >> 18u);
    float _1403;
    _1403 = _1364;
    uint _1141;
    uint _1160;
    float _1166;
    uint _1402 = 0u;
    uint _1465 = _1124;
    for (;;)
    {
        if (!(_1402 < 1u))
        {
            break;
        }
        uint _1152 = _1465 + (_1465 << 10u);
        uint _1154 = _1152 ^ (_1152 >> 6u);
        uint _1156 = _1154 + (_1154 << 3u);
        uint _1158 = _1156 ^ (_1156 >> 11u);
        _1160 = _1158 + (_1158 << 15u);
        _1166 = uintBitsToFloat((_1465 & 8388607u) | 1065353216u) - 1.0;
        _1141 = _1402 + 1u;
        _1465 = _1160;
        _1403 = _1166;
        _1402 = _1141;
        continue;
    }
    uvec2 _915 = uvec2(_890 + ivec2(1));
    uint _1170 = _915.y;
    uint _1176 = _1170 + (_1170 << 10u);
    uint _1178 = _1176 ^ (_1176 >> 6u);
    uint _1180 = _1178 + (_1178 << 3u);
    uint _1182 = _1180 ^ (_1180 >> 11u);
    uint _1190 = (((_915.x * 1664525u) + (_1182 + (_1182 << 15u))) + 1013904223u) * 1664525u;
    uint _1192 = _1190 ^ (_1190 >> 11u);
    uint _1195 = _1192 ^ ((_1192 << 7u) & 2636928640u);
    uint _1198 = _1195 ^ ((_1195 << 15u) & 4022730752u);
    uint _1200 = _1198 ^ (_1198 >> 18u);
    float _1420;
    _1420 = _1364;
    uint _1217;
    uint _1236;
    float _1242;
    uint _1419 = 0u;
    uint _1464 = _1200;
    for (;;)
    {
        if (!(_1419 < 1u))
        {
            break;
        }
        uint _1228 = _1464 + (_1464 << 10u);
        uint _1230 = _1228 ^ (_1228 >> 6u);
        uint _1232 = _1230 + (_1230 << 3u);
        uint _1234 = _1232 ^ (_1232 >> 11u);
        _1236 = _1234 + (_1234 << 15u);
        _1242 = uintBitsToFloat((_1464 & 8388607u) | 1065353216u) - 1.0;
        _1217 = _1419 + 1u;
        _1464 = _1236;
        _1420 = _1242;
        _1419 = _1217;
        continue;
    }
    vec2 _1249 = (_891 * _891) * (vec2(3.0) - (vec2(2.0) * _891));
    float _923 = _1249.x;
    float _924 = 1.0 - _923;
    float _926 = _1249.y;
    _748.x = _748.x - (((wind_bend * wind_bend) * (sin((((((1.0 - _926) * ((_1372 * _924) + (_1387 * _923))) + ((_1403 * _924) * _926)) + ((_1420 * _923) * _926)) * 3.1400001049041748046875) - 1.57000005245208740234375) + 0.300000011920928955078125)) * 0.073499999940395355224609375);
    vec4 _1290 = textureLod(sampler2D(object_push_grass_object_push, samplers_lnc_iso), (_359 * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0);
    float _632 = clamp(_1290.z, 0.0, 1.0);
    vec3 _1437;
    if (_632 > 0.0)
    {
        vec2 _641 = _748.xz + ((_1290.xy * _632) * wind_bend);
        vec3 _1352 = _748;
        _1352.x = _641.x;
        _1352.z = _641.y;
        _1437 = _1352;
    }
    else
    {
        _1437 = _748;
    }
    gl_Position = vec4(_1437, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = pow(_1455, vec3(mix(1.0, 2.5, _1444)));
    entryPointParam_vs_main_frag_normal_ws = vec4(Vertex_Normal, 0.0) * _743;
    entryPointParam_vs_main_frag_position_ws = _1437.xyz;
}

