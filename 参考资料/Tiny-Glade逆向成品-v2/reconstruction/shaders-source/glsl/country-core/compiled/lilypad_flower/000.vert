#version 460

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct Reed_natural
{
    Affine3Packed_natural xform;
};

const uint _317[4] = uint[](17u, 18u, 20u, 21u);
const float _504[4] = float[](2.0, 4.0, 8.0, 12.0);
const float _536[4] = float[](2.0, 2.0, 0.5, 0.20000000298023223876953125);
vec2 _1179;

layout(set = 0, binding = 1, std430) readonly buffer StructuredBuffer
{
    Reed_natural _member0[];
} material_data_instance_buffer;

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
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 21, binding = 1) uniform texture2D water_waves_water_noise_texture;

layout(location = 0) in vec3 Vertex_Position;
layout(location = 1) in vec3 Vertex_Normal;
layout(location = 2) in vec3 Vertex_Color;
layout(location = 0) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 2) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 3) out vec3 entryPointParam_vs_main_color;

void main()
{
    uint _19 = uint(gl_InstanceIndex);
    mat3x4 _683 = transpose(mat4x3(vec3(material_data_instance_buffer._member0[_19].xform.data.data[0], material_data_instance_buffer._member0[_19].xform.data.data[1], material_data_instance_buffer._member0[_19].xform.data.data[2]), vec3(material_data_instance_buffer._member0[_19].xform.data.data[3], material_data_instance_buffer._member0[_19].xform.data.data[4], material_data_instance_buffer._member0[_19].xform.data.data[5]), vec3(material_data_instance_buffer._member0[_19].xform.data.data[6], material_data_instance_buffer._member0[_19].xform.data.data[7], material_data_instance_buffer._member0[_19].xform.data.data[8]), vec3(material_data_instance_buffer._member0[_19].xform.data.data[9], material_data_instance_buffer._member0[_19].xform.data.data[10], material_data_instance_buffer._member0[_19].xform.data.data[11])));
    vec3 _646 = vec4(Vertex_Position, 1.0) * _683;
    vec3 _691 = vec4(vec3(0.0), 1.0) * _683;
    uint _125 = uint(((((_691.x * 20.0) - (_691.z * 20.0)) + 2000.0) + Vertex_Position.x) + Vertex_Position.z);
    uint _735 = _125 + (_125 << 10u);
    uint _737 = _735 ^ (_735 >> 6u);
    uint _739 = _737 + (_737 << 3u);
    uint _741 = _739 ^ (_739 >> 11u);
    _646.y = _646.y + mix(-0.0500000007450580596923828125, 0.0500000007450580596923828125, uintBitsToFloat(((_741 + (_741 << 15u)) & 8388607u) | 1065353216u) - 1.0);
    vec2 _173 = _691.xz;
    vec4 _781 = textureLod(sampler2D(object_push_grass_object_push, samplers_lnc_iso), (_173 * vec2(0.0076923076994717121124267578125)) + vec2(0.5), 0.0);
    vec3 _1188;
    do
    {
        if (frame_constants.glade_theme_id == 4u)
        {
            _1188 = vec3(0.0);
            break;
        }
        float _909 = float(frame_constants.game_time_sec) + frame_constants.game_time_frac;
        vec2 _1178;
        vec2 _1182;
        _1182 = _1179;
        _1178 = _1179;
        uint _828;
        vec2 _929;
        vec2 _937;
        vec2 _791[4];
        uint _1174 = 0u;
        for (;;)
        {
            if (!(_1174 < 4u))
            {
                break;
            }
            float _818 = float(_317[_1174]);
            int _920 = int(floor(_818));
            float _922 = fract(_818);
            uvec2 _924 = uvec2(ivec2(_920));
            uint _949 = _924.y;
            uint _955 = _949 + (_949 << 10u);
            uint _957 = _955 ^ (_955 >> 6u);
            uint _959 = _957 + (_957 << 3u);
            uint _961 = _959 ^ (_959 >> 11u);
            uint _969 = (((_924.x * 1664525u) + (_961 + (_961 << 15u))) + 1013904223u) * 1664525u;
            uint _971 = _969 ^ (_969 >> 11u);
            uint _974 = _971 ^ ((_971 << 7u) & 2636928640u);
            uint _977 = _974 ^ ((_974 << 15u) & 4022730752u);
            uint _979 = _977 ^ (_977 >> 18u);
            vec2 _915 = _1178;
            uint _998;
            uint _1017;
            uint _1180 = 0u;
            uint _1187 = _979;
            for (;;)
            {
                if (!(_1180 < 2u))
                {
                    break;
                }
                uint _1009 = _1187 + (_1187 << 10u);
                uint _1011 = _1009 ^ (_1009 >> 6u);
                uint _1013 = _1011 + (_1011 << 3u);
                uint _1015 = _1013 ^ (_1013 >> 11u);
                _1017 = _1015 + (_1015 << 15u);
                _915[_1180] = uintBitsToFloat((_1187 & 8388607u) | 1065353216u) - 1.0;
                _998 = _1180 + 1u;
                _1187 = _1017;
                _1180 = _998;
                continue;
            }
            _929 = _915;
            uvec2 _932 = uvec2(ivec2(_920 + 1));
            uint _1027 = _932.y;
            uint _1033 = _1027 + (_1027 << 10u);
            uint _1035 = _1033 ^ (_1033 >> 6u);
            uint _1037 = _1035 + (_1035 << 3u);
            uint _1039 = _1037 ^ (_1037 >> 11u);
            uint _1047 = (((_932.x * 1664525u) + (_1039 + (_1039 << 15u))) + 1013904223u) * 1664525u;
            uint _1049 = _1047 ^ (_1047 >> 11u);
            uint _1052 = _1049 ^ ((_1049 << 7u) & 2636928640u);
            uint _1055 = _1052 ^ ((_1052 << 15u) & 4022730752u);
            uint _1057 = _1055 ^ (_1055 >> 18u);
            vec2 _916 = _1182;
            uint _1076;
            uint _1095;
            uint _1183 = 0u;
            uint _1186 = _1057;
            for (;;)
            {
                if (!(_1183 < 2u))
                {
                    break;
                }
                uint _1087 = _1186 + (_1186 << 10u);
                uint _1089 = _1087 ^ (_1087 >> 6u);
                uint _1091 = _1089 + (_1089 << 3u);
                uint _1093 = _1091 ^ (_1091 >> 11u);
                _1095 = _1093 + (_1093 << 15u);
                _916[_1183] = uintBitsToFloat((_1186 & 8388607u) | 1065353216u) - 1.0;
                _1076 = _1183 + 1u;
                _1186 = _1095;
                _1183 = _1076;
                continue;
            }
            _937 = _916;
            float _1107 = (_922 * _922) * (3.0 - (2.0 * _922));
            _791[_1174] = (normalize(((_929 * (1.0 - _1107)) + (_937 * _1107)) - vec2(0.5)) * _909) * 3.0;
            _828 = _1174 + 1u;
            _1182 = _937;
            _1178 = _929;
            _1174 = _828;
            continue;
        }
        vec3 _1176;
        _1176 = vec3(0.0);
        uint _841;
        vec3 _1210;
        uint _1175 = 0u;
        for (;;)
        {
            if (!(_1175 < 1u))
            {
                break;
            }
            _841 = _1175 + 1u;
            float _843 = float(_841) * 10.16640758514404296875;
            float _844 = cos(_843);
            float _845 = sin(_843);
            mat2 _849 = mat2(vec2(_844, _845), vec2(-_845, _844));
            float _874 = _504[_1175] * 0.01200000010430812835693359375;
            vec3 _876 = (((textureLod(sampler2D(water_waves_water_noise_texture, samplers_llr), (((_173 * _504[_1175]) + _791[_1175]) * _849) * 0.01200000010430812835693359375, 0.0).xyz * vec3(1.0, 2.0, 2.0)) + vec3(-0.5, -1.0, -1.0)) * _536[_1175]) * vec3(1.0, _874, _874);
            vec2 _885 = _1176.yz + (_849 * _876.yz);
            _1210 = vec3(_1176.x + _876.x, _885);
            _1176 = _1210;
            _1175 = _841;
            continue;
        }
        _1188 = _1176;
        break;
    } while(false);
    vec3 _575 = _646 + (((vec3(_781.x, 0.0, _781.y) * float(clamp(_781.z, 0.0, 1.0) > 0.0)) * 0.3499999940395355224609375) + (_1188.yxz * vec3(2.0, 0.00999999977648258209228515625, 2.0)));
    gl_Position = vec4(_575, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_frag_normal_ws = normalize(vec4(Vertex_Normal, 0.0) * _683);
    entryPointParam_vs_main_frag_position_ws = _575;
    entryPointParam_vs_main_frag_uv = _575.xz * 0.100000001490116119384765625;
    entryPointParam_vs_main_color = Vertex_Color;
}

