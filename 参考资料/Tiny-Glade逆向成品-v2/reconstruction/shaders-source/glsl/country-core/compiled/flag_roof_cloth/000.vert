#version 460
#extension GL_EXT_scalar_block_layout : require
#extension GL_EXT_samplerless_texture_functions : require

struct _Array_natural_float12
{
    float data[12];
};

struct Affine3Packed_natural
{
    _Array_natural_float12 data;
};

float _1153;
vec4 _1176;

layout(set = 0, binding = 0, scalar) uniform MaterialData_natural
{
    Affine3Packed_natural model_to_world;
    int seed;
    int color_id;
} material_data;

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

layout(set = 0, binding = 2) uniform texture2D material_data_anim_texture;
layout(set = 2, binding = 1) uniform sampler samplers_llr;
layout(set = 0, binding = 3) uniform texture2D material_data_anim_normal_texture;

layout(location = 0) in vec3 Vertex_Position;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 5) in vec3 rest_normal;
layout(location = 4) in vec3 rest_pos;
layout(location = 1) in vec3 Vertex_Color;
layout(location = 3) in vec2 Vertex_UV;
layout(location = 6) in vec3 uv2;
layout(location = 0) out vec3 entryPointParam_vs_main_color;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 3) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 4) out vec2 entryPointParam_vs_main_uv_side_pattern;
layout(location = 5) out vec2 entryPointParam_vs_main_uv_center_pattern;

void main()
{
    uint _36 = uint(gl_VertexIndex - gl_BaseVertex);
    uvec2 _38 = uvec2(_36, 0u);
    uint _48 = uint(material_data.seed);
    uint _559 = _48 + (_48 << 10u);
    uint _561 = _559 ^ (_559 >> 6u);
    uint _563 = _561 + (_561 << 3u);
    uint _565 = _563 ^ (_563 >> 11u);
    float _573 = uintBitsToFloat(((_565 + (_565 << 15u)) & 8388607u) | 1065353216u) - 1.0;
    float _581 = float(frame_constants.game_time_sec) + frame_constants.game_time_frac;
    vec2 anim_uv = vec2((float(_36) + 0.5) * 0.012500000186264514923095703125, (_581 * 0.1500000059604644775390625) + (_573 * 0.20000000298023223876953125));
    mat3x4 _622 = transpose(mat4x3(vec3(material_data.model_to_world.data.data[0], material_data.model_to_world.data.data[1], material_data.model_to_world.data.data[2]), vec3(material_data.model_to_world.data.data[3], material_data.model_to_world.data.data[4], material_data.model_to_world.data.data[5]), vec3(material_data.model_to_world.data.data[6], material_data.model_to_world.data.data[7], material_data.model_to_world.data.data[8]), vec3(material_data.model_to_world.data.data[9], material_data.model_to_world.data.data[10], material_data.model_to_world.data.data[11])));
    vec2 _629 = ((vec4(vec3(0.0), 1.0) * _622).xz * 0.100000001490116119384765625) + (vec2(_581, 0.0) * 1.2000000476837158203125);
    ivec2 _666 = ivec2(floor(_629));
    vec2 _667 = fract(_629);
    uvec2 _668 = uvec2(_666);
    uint _718 = _668.y;
    uint _724 = _718 + (_718 << 10u);
    uint _726 = _724 ^ (_724 >> 6u);
    uint _728 = _726 + (_726 << 3u);
    uint _730 = _728 ^ (_728 >> 11u);
    uint _738 = (((_668.x * 1664525u) + (_730 + (_730 << 15u))) + 1013904223u) * 1664525u;
    uint _740 = _738 ^ (_738 >> 11u);
    uint _743 = _740 ^ ((_740 << 7u) & 2636928640u);
    uint _746 = _743 ^ ((_743 << 15u) & 4022730752u);
    uint _748 = _746 ^ (_746 >> 18u);
    float _1155;
    _1155 = _1153;
    uint _765;
    uint _784;
    float _790;
    uint _1154 = 0u;
    uint _1171 = _748;
    for (;;)
    {
        if (!(_1154 < 1u))
        {
            break;
        }
        uint _776 = _1171 + (_1171 << 10u);
        uint _778 = _776 ^ (_776 >> 6u);
        uint _780 = _778 + (_778 << 3u);
        uint _782 = _780 ^ (_780 >> 11u);
        _784 = _782 + (_782 << 15u);
        _790 = uintBitsToFloat((_1171 & 8388607u) | 1065353216u) - 1.0;
        _765 = _1154 + 1u;
        _1171 = _784;
        _1155 = _790;
        _1154 = _765;
        continue;
    }
    uvec2 _676 = uvec2(_666 + ivec2(1, 0));
    uint _794 = _676.y;
    uint _800 = _794 + (_794 << 10u);
    uint _802 = _800 ^ (_800 >> 6u);
    uint _804 = _802 + (_802 << 3u);
    uint _806 = _804 ^ (_804 >> 11u);
    uint _814 = (((_676.x * 1664525u) + (_806 + (_806 << 15u))) + 1013904223u) * 1664525u;
    uint _816 = _814 ^ (_814 >> 11u);
    uint _819 = _816 ^ ((_816 << 7u) & 2636928640u);
    uint _822 = _819 ^ ((_819 << 15u) & 4022730752u);
    uint _824 = _822 ^ (_822 >> 18u);
    float _1158;
    _1158 = _1153;
    uint _841;
    uint _860;
    float _866;
    uint _1157 = 0u;
    uint _1170 = _824;
    for (;;)
    {
        if (!(_1157 < 1u))
        {
            break;
        }
        uint _852 = _1170 + (_1170 << 10u);
        uint _854 = _852 ^ (_852 >> 6u);
        uint _856 = _854 + (_854 << 3u);
        uint _858 = _856 ^ (_856 >> 11u);
        _860 = _858 + (_858 << 15u);
        _866 = uintBitsToFloat((_1170 & 8388607u) | 1065353216u) - 1.0;
        _841 = _1157 + 1u;
        _1170 = _860;
        _1158 = _866;
        _1157 = _841;
        continue;
    }
    uvec2 _683 = uvec2(_666 + ivec2(0, 1));
    uint _870 = _683.y;
    uint _876 = _870 + (_870 << 10u);
    uint _878 = _876 ^ (_876 >> 6u);
    uint _880 = _878 + (_878 << 3u);
    uint _882 = _880 ^ (_880 >> 11u);
    uint _890 = (((_683.x * 1664525u) + (_882 + (_882 << 15u))) + 1013904223u) * 1664525u;
    uint _892 = _890 ^ (_890 >> 11u);
    uint _895 = _892 ^ ((_892 << 7u) & 2636928640u);
    uint _898 = _895 ^ ((_895 << 15u) & 4022730752u);
    uint _900 = _898 ^ (_898 >> 18u);
    float _1162;
    _1162 = _1153;
    uint _917;
    uint _936;
    float _942;
    uint _1161 = 0u;
    uint _1169 = _900;
    for (;;)
    {
        if (!(_1161 < 1u))
        {
            break;
        }
        uint _928 = _1169 + (_1169 << 10u);
        uint _930 = _928 ^ (_928 >> 6u);
        uint _932 = _930 + (_930 << 3u);
        uint _934 = _932 ^ (_932 >> 11u);
        _936 = _934 + (_934 << 15u);
        _942 = uintBitsToFloat((_1169 & 8388607u) | 1065353216u) - 1.0;
        _917 = _1161 + 1u;
        _1169 = _936;
        _1162 = _942;
        _1161 = _917;
        continue;
    }
    uvec2 _691 = uvec2(_666 + ivec2(1));
    uint _946 = _691.y;
    uint _952 = _946 + (_946 << 10u);
    uint _954 = _952 ^ (_952 >> 6u);
    uint _956 = _954 + (_954 << 3u);
    uint _958 = _956 ^ (_956 >> 11u);
    uint _966 = (((_691.x * 1664525u) + (_958 + (_958 << 15u))) + 1013904223u) * 1664525u;
    uint _968 = _966 ^ (_966 >> 11u);
    uint _971 = _968 ^ ((_968 << 7u) & 2636928640u);
    uint _974 = _971 ^ ((_971 << 15u) & 4022730752u);
    uint _976 = _974 ^ (_974 >> 18u);
    float _1167;
    _1167 = _1153;
    uint _993;
    uint _1012;
    float _1018;
    uint _1166 = 0u;
    uint _1168 = _976;
    for (;;)
    {
        if (!(_1166 < 1u))
        {
            break;
        }
        uint _1004 = _1168 + (_1168 << 10u);
        uint _1006 = _1004 ^ (_1004 >> 6u);
        uint _1008 = _1006 + (_1006 << 3u);
        uint _1010 = _1008 ^ (_1008 >> 11u);
        _1012 = _1010 + (_1010 << 15u);
        _1018 = uintBitsToFloat((_1168 & 8388607u) | 1065353216u) - 1.0;
        _993 = _1166 + 1u;
        _1168 = _1012;
        _1167 = _1018;
        _1166 = _993;
        continue;
    }
    vec2 _1024 = (_667 * _667) * (vec2(3.0) - (vec2(2.0) * _667));
    float _699 = _1024.x;
    float _700 = 1.0 - _699;
    float _702 = _1024.y;
    vec3 _450 = vec3(clamp(smoothstep(0.0, 1.0, (((sin((((((1.0 - _702) * ((_1155 * _700) + (_1158 * _699))) + ((_1162 * _700) * _702)) + ((_1167 * _699) * _702)) * 3.1400001049041748046875) - 1.57000005245208740234375) + 0.300000011920928955078125) * 0.699999988079071044921875) * mix(0.699999988079071044921875, 1.0, _573)) + 0.699999988079071044921875), 0.0, 1.0));
    vec3 _1056 = vec4(mix(rest_pos * 0.800000011920928955078125, (Vertex_Position * 0.800000011920928955078125) + (((textureLod(sampler2D(material_data_anim_texture, samplers_llr), anim_uv, 0.0).xyz - texelFetch(material_data_anim_texture, ivec2(_38), 0).xyz) * 2.0) * 0.800000011920928955078125), _450), 1.0) * _622;
    gl_Position = vec4(_1056, 1.0) * current_view.world_to_sample;
    entryPointParam_vs_main_color = Vertex_Color;
    entryPointParam_vs_main_frag_normal_ws = normalize(vec4(mix(rest_normal, Vertex_Normal + (textureLod(sampler2D(material_data_anim_normal_texture, samplers_llr), anim_uv, 0.0).xyz - texelFetch(material_data_anim_normal_texture, ivec2(_38), 0).xyz), _450), 0.0) * _622);
    entryPointParam_vs_main_frag_position_ws = _1056.xyz;
    entryPointParam_vs_main_frag_uv = Vertex_UV;
    entryPointParam_vs_main_uv_side_pattern = vec2(((uv2.x - 0.5) * 1.2000000476837158203125) + 0.5, uv2.y * 7.0);
    entryPointParam_vs_main_uv_center_pattern = ((vec2((uv2.y * 4.0) - 2.75, uv2.x) - vec2(0.5)) * 1.2999999523162841796875) + vec2(0.5);
}

