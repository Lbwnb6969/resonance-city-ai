#version 460
#extension GL_EXT_samplerless_texture_functions : require

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

struct PreplacedFlowerInstanceData_natural
{
    Affine3Packed_natural transform;
};

float _1214;

layout(set = 5, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 0, std430) readonly buffer material_data_nani_instance_data
{
    PreplacedFlowerInstanceData_natural _member0[];
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

layout(set = 6, binding = 0, std140) uniform ViewConstants_natural
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

layout(set = 13, binding = 1) uniform texture2D building_mask_non_blurred_tex;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 10, binding = 0) uniform utexture2D plant_sample_mask_tex;
layout(set = 7, binding = 0) uniform texture2D object_push_grass_object_push;

layout(location = 0) in vec3 Vertex_Position;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 3) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 3) in float wind_bend;
layout(location = 1) in vec3 Vertex_Color;
layout(location = 2) in vec3 Vertex_Normal;

void main()
{
    do
    {
        uint _29 = uint(gl_InstanceIndex);
        mat3x4 _648 = transpose(mat4x3(vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].transform.data.data[0], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].transform.data.data[1], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].transform.data.data[2]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].transform.data.data[3], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].transform.data.data[4], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].transform.data.data[5]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].transform.data.data[6], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].transform.data.data[7], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].transform.data.data[8]), vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].transform.data.data[9], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].transform.data.data[10], material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_29]].transform.data.data[11])));
        vec3 _653 = vec4(Vertex_Position, 1.0) * _648;
        vec2 _123 = (vec4(vec3(0.0), 1.0) * _648).xz;
        vec2 texture_uv = (_123 * vec2(0.0076923076994717121124267578125)) + vec2(0.5);
        bool _1208;
        if (textureLod(sampler2D(building_mask_non_blurred_tex, samplers_lnc_iso), texture_uv, 0.0).x > 0.5)
        {
            _1208 = true;
        }
        else
        {
            bool _1207;
            do
            {
                float _718 = texture_uv.x;
                bool _1204;
                if (_718 < 0.0)
                {
                    _1204 = true;
                }
                else
                {
                    _1204 = _718 > 1.0;
                }
                bool _1205;
                if (_1204)
                {
                    _1205 = true;
                }
                else
                {
                    _1205 = texture_uv.y < 0.0;
                }
                bool _1206;
                if (_1205)
                {
                    _1206 = true;
                }
                else
                {
                    _1206 = texture_uv.y > 1.0;
                }
                if (_1206)
                {
                    _1207 = false;
                    break;
                }
                _1207 = any(notEqual(texelFetch(plant_sample_mask_tex, ivec3(ivec2(min(uvec2(texture_uv * 512.0), uvec2(511u))), 0).xy, 0), uvec4(0u)));
                break;
            } while(false);
            _1208 = _1207;
        }
        if (_1208)
        {
            gl_Position = vec4(uintBitsToFloat(0x7fbfffffu /* nan */));
            break;
        }
        vec2 _257 = _123 * 0.100000001490116119384765625;
        vec2 _278 = _257 + (vec2(float(frame_constants.game_time_sec) + frame_constants.game_time_frac, 0.0) * 1.2000000476837158203125);
        ivec2 _757 = ivec2(floor(_278));
        vec2 _758 = fract(_278);
        uvec2 _759 = uvec2(_757);
        uint _809 = _759.y;
        uint _815 = _809 + (_809 << 10u);
        uint _817 = _815 ^ (_815 >> 6u);
        uint _819 = _817 + (_817 << 3u);
        uint _821 = _819 ^ (_819 >> 11u);
        uint _829 = (((_759.x * 1664525u) + (_821 + (_821 << 15u))) + 1013904223u) * 1664525u;
        uint _831 = _829 ^ (_829 >> 11u);
        uint _834 = _831 ^ ((_831 << 7u) & 2636928640u);
        uint _837 = _834 ^ ((_834 << 15u) & 4022730752u);
        uint _839 = _837 ^ (_837 >> 18u);
        float _1216;
        _1216 = _1214;
        uint _856;
        uint _875;
        float _881;
        uint _1215 = 0u;
        uint _1257 = _839;
        for (;;)
        {
            if (!(_1215 < 1u))
            {
                break;
            }
            uint _867 = _1257 + (_1257 << 10u);
            uint _869 = _867 ^ (_867 >> 6u);
            uint _871 = _869 + (_869 << 3u);
            uint _873 = _871 ^ (_871 >> 11u);
            _875 = _873 + (_873 << 15u);
            _881 = uintBitsToFloat((_1257 & 8388607u) | 1065353216u) - 1.0;
            _856 = _1215 + 1u;
            _1257 = _875;
            _1216 = _881;
            _1215 = _856;
            continue;
        }
        uvec2 _767 = uvec2(_757 + ivec2(1, 0));
        uint _885 = _767.y;
        uint _891 = _885 + (_885 << 10u);
        uint _893 = _891 ^ (_891 >> 6u);
        uint _895 = _893 + (_893 << 3u);
        uint _897 = _895 ^ (_895 >> 11u);
        uint _905 = (((_767.x * 1664525u) + (_897 + (_897 << 15u))) + 1013904223u) * 1664525u;
        uint _907 = _905 ^ (_905 >> 11u);
        uint _910 = _907 ^ ((_907 << 7u) & 2636928640u);
        uint _913 = _910 ^ ((_910 << 15u) & 4022730752u);
        uint _915 = _913 ^ (_913 >> 18u);
        float _1224;
        _1224 = _1214;
        uint _932;
        uint _951;
        float _957;
        uint _1223 = 0u;
        uint _1256 = _915;
        for (;;)
        {
            if (!(_1223 < 1u))
            {
                break;
            }
            uint _943 = _1256 + (_1256 << 10u);
            uint _945 = _943 ^ (_943 >> 6u);
            uint _947 = _945 + (_945 << 3u);
            uint _949 = _947 ^ (_947 >> 11u);
            _951 = _949 + (_949 << 15u);
            _957 = uintBitsToFloat((_1256 & 8388607u) | 1065353216u) - 1.0;
            _932 = _1223 + 1u;
            _1256 = _951;
            _1224 = _957;
            _1223 = _932;
            continue;
        }
        uvec2 _774 = uvec2(_757 + ivec2(0, 1));
        uint _961 = _774.y;
        uint _967 = _961 + (_961 << 10u);
        uint _969 = _967 ^ (_967 >> 6u);
        uint _971 = _969 + (_969 << 3u);
        uint _973 = _971 ^ (_971 >> 11u);
        uint _981 = (((_774.x * 1664525u) + (_973 + (_973 << 15u))) + 1013904223u) * 1664525u;
        uint _983 = _981 ^ (_981 >> 11u);
        uint _986 = _983 ^ ((_983 << 7u) & 2636928640u);
        uint _989 = _986 ^ ((_986 << 15u) & 4022730752u);
        uint _991 = _989 ^ (_989 >> 18u);
        float _1233;
        _1233 = _1214;
        uint _1008;
        uint _1027;
        float _1033;
        uint _1232 = 0u;
        uint _1255 = _991;
        for (;;)
        {
            if (!(_1232 < 1u))
            {
                break;
            }
            uint _1019 = _1255 + (_1255 << 10u);
            uint _1021 = _1019 ^ (_1019 >> 6u);
            uint _1023 = _1021 + (_1021 << 3u);
            uint _1025 = _1023 ^ (_1023 >> 11u);
            _1027 = _1025 + (_1025 << 15u);
            _1033 = uintBitsToFloat((_1255 & 8388607u) | 1065353216u) - 1.0;
            _1008 = _1232 + 1u;
            _1255 = _1027;
            _1233 = _1033;
            _1232 = _1008;
            continue;
        }
        uvec2 _782 = uvec2(_757 + ivec2(1));
        uint _1037 = _782.y;
        uint _1043 = _1037 + (_1037 << 10u);
        uint _1045 = _1043 ^ (_1043 >> 6u);
        uint _1047 = _1045 + (_1045 << 3u);
        uint _1049 = _1047 ^ (_1047 >> 11u);
        uint _1057 = (((_782.x * 1664525u) + (_1049 + (_1049 << 15u))) + 1013904223u) * 1664525u;
        uint _1059 = _1057 ^ (_1057 >> 11u);
        uint _1062 = _1059 ^ ((_1059 << 7u) & 2636928640u);
        uint _1065 = _1062 ^ ((_1062 << 15u) & 4022730752u);
        uint _1067 = _1065 ^ (_1065 >> 18u);
        float _1243;
        _1243 = _1214;
        uint _1084;
        uint _1103;
        float _1109;
        uint _1242 = 0u;
        uint _1254 = _1067;
        for (;;)
        {
            if (!(_1242 < 1u))
            {
                break;
            }
            uint _1095 = _1254 + (_1254 << 10u);
            uint _1097 = _1095 ^ (_1095 >> 6u);
            uint _1099 = _1097 + (_1097 << 3u);
            uint _1101 = _1099 ^ (_1099 >> 11u);
            _1103 = _1101 + (_1101 << 15u);
            _1109 = uintBitsToFloat((_1254 & 8388607u) | 1065353216u) - 1.0;
            _1084 = _1242 + 1u;
            _1254 = _1103;
            _1243 = _1109;
            _1242 = _1084;
            continue;
        }
        vec2 _1115 = (_758 * _758) * (vec2(3.0) - (vec2(2.0) * _758));
        float _790 = _1115.x;
        float _791 = 1.0 - _790;
        float _793 = _1115.y;
        _653.x = _653.x - ((wind_bend * (sin((((((1.0 - _793) * ((_1216 * _791) + (_1224 * _790))) + ((_1233 * _791) * _793)) + ((_1243 * _790) * _793)) * 3.1400001049041748046875) - 1.57000005245208740234375) + 0.300000011920928955078125)) * 0.17499999701976776123046875);
        vec4 _1131 = textureLod(sampler2D(object_push_grass_object_push, samplers_lnc_iso), texture_uv, 0.0);
        float _535 = clamp(_1131.z, 0.0, 1.0);
        vec3 _1253;
        if (_535 > 0.0)
        {
            vec2 _544 = _653.xz + ((_1131.xy * _535) * wind_bend);
            vec3 _1201 = _653;
            _1201.x = _544.x;
            _1201.z = _544.y;
            _1253 = _1201;
        }
        else
        {
            _1253 = _653;
        }
        gl_Position = vec4(_1253, 1.0) * current_view.world_to_sample;
        entryPointParam_vs_main_color = Vertex_Color;
        entryPointParam_vs_main_frag_normal_ws = vec4(Vertex_Normal, 0.0) * _648;
        entryPointParam_vs_main_frag_position_ws = _1253.xyz;
        entryPointParam_vs_main_frag_uv = _257;
        break;
    } while(false);
}

