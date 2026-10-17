#version 460
#extension GL_EXT_scalar_block_layout : require

struct Flower03Xform_natural
{
    vec4 position;
};

struct Tex2D_natural
{
    uint bindless_handle;
};

float _976;

layout(set = 0, binding = 1, std430) readonly buffer StructuredBuffer
{
    Flower03Xform_natural _member0[];
} material_data_instance_buffer;

layout(set = 19, binding = 0, scalar) uniform TerrainHeightmap_natural
{
    uvec2 terrain_heightmap_dims;
    Tex2D_natural bg_terrain_heightmap;
    Tex2D_natural bg_terrain_fog_height;
    vec2 bg_terrain_height_bounds_ws;
    vec4 bg_water_footprint_ws;
} terrain_heightmap;

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

layout(set = 19, binding = 1) uniform texture2D terrain_heightmap_terrain_heightmap;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 6, binding = 0) uniform texture2D object_push_grass_object_push;

layout(location = 0) in vec3 Vertex_Position;
layout(location = 3) in float wind_bend;
layout(location = 2) in vec3 Vertex_Normal;
layout(location = 0) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 2) out vec2 entryPointParam_vs_main_frag_uv;

void main()
{
    uint _26 = uint(gl_InstanceIndex);
    vec3 _44 = (Vertex_Position * material_data_instance_buffer._member0[_26].position.w) + material_data_instance_buffer._member0[_26].position.xyz;
    vec4 _45 = vec4(_44, 1.0);
    vec2 _499 = (material_data_instance_buffer._member0[_26].position.xz * vec2(0.0076923076994717121124267578125)) + vec2(0.5);
    _45.y = (_44.y + mix(-2.5, 24.0, textureLod(sampler2D(terrain_heightmap_terrain_heightmap, samplers_lnc_iso), _499, 0.0).x)) - 0.20000000298023223876953125;
    vec2 _513 = (_45.xz * 0.100000001490116119384765625) + (vec2(float(frame_constants.game_time_sec) + frame_constants.game_time_frac, 0.0) * 1.2000000476837158203125);
    ivec2 _550 = ivec2(floor(_513));
    vec2 _551 = fract(_513);
    uvec2 _552 = uvec2(_550);
    uint _602 = _552.y;
    uint _608 = _602 + (_602 << 10u);
    uint _610 = _608 ^ (_608 >> 6u);
    uint _612 = _610 + (_610 << 3u);
    uint _614 = _612 ^ (_612 >> 11u);
    uint _622 = (((_552.x * 1664525u) + (_614 + (_614 << 15u))) + 1013904223u) * 1664525u;
    uint _624 = _622 ^ (_622 >> 11u);
    uint _627 = _624 ^ ((_624 << 7u) & 2636928640u);
    uint _630 = _627 ^ ((_627 << 15u) & 4022730752u);
    uint _632 = _630 ^ (_630 >> 18u);
    float _978;
    _978 = _976;
    uint _649;
    uint _668;
    float _674;
    uint _977 = 0u;
    uint _999 = _632;
    for (;;)
    {
        if (!(_977 < 1u))
        {
            break;
        }
        uint _660 = _999 + (_999 << 10u);
        uint _662 = _660 ^ (_660 >> 6u);
        uint _664 = _662 + (_662 << 3u);
        uint _666 = _664 ^ (_664 >> 11u);
        _668 = _666 + (_666 << 15u);
        _674 = uintBitsToFloat((_999 & 8388607u) | 1065353216u) - 1.0;
        _649 = _977 + 1u;
        _999 = _668;
        _978 = _674;
        _977 = _649;
        continue;
    }
    uvec2 _560 = uvec2(_550 + ivec2(1, 0));
    uint _678 = _560.y;
    uint _684 = _678 + (_678 << 10u);
    uint _686 = _684 ^ (_684 >> 6u);
    uint _688 = _686 + (_686 << 3u);
    uint _690 = _688 ^ (_688 >> 11u);
    uint _698 = (((_560.x * 1664525u) + (_690 + (_690 << 15u))) + 1013904223u) * 1664525u;
    uint _700 = _698 ^ (_698 >> 11u);
    uint _703 = _700 ^ ((_700 << 7u) & 2636928640u);
    uint _706 = _703 ^ ((_703 << 15u) & 4022730752u);
    uint _708 = _706 ^ (_706 >> 18u);
    float _981;
    _981 = _976;
    uint _725;
    uint _744;
    float _750;
    uint _980 = 0u;
    uint _998 = _708;
    for (;;)
    {
        if (!(_980 < 1u))
        {
            break;
        }
        uint _736 = _998 + (_998 << 10u);
        uint _738 = _736 ^ (_736 >> 6u);
        uint _740 = _738 + (_738 << 3u);
        uint _742 = _740 ^ (_740 >> 11u);
        _744 = _742 + (_742 << 15u);
        _750 = uintBitsToFloat((_998 & 8388607u) | 1065353216u) - 1.0;
        _725 = _980 + 1u;
        _998 = _744;
        _981 = _750;
        _980 = _725;
        continue;
    }
    uvec2 _567 = uvec2(_550 + ivec2(0, 1));
    uint _754 = _567.y;
    uint _760 = _754 + (_754 << 10u);
    uint _762 = _760 ^ (_760 >> 6u);
    uint _764 = _762 + (_762 << 3u);
    uint _766 = _764 ^ (_764 >> 11u);
    uint _774 = (((_567.x * 1664525u) + (_766 + (_766 << 15u))) + 1013904223u) * 1664525u;
    uint _776 = _774 ^ (_774 >> 11u);
    uint _779 = _776 ^ ((_776 << 7u) & 2636928640u);
    uint _782 = _779 ^ ((_779 << 15u) & 4022730752u);
    uint _784 = _782 ^ (_782 >> 18u);
    float _985;
    _985 = _976;
    uint _801;
    uint _820;
    float _826;
    uint _984 = 0u;
    uint _997 = _784;
    for (;;)
    {
        if (!(_984 < 1u))
        {
            break;
        }
        uint _812 = _997 + (_997 << 10u);
        uint _814 = _812 ^ (_812 >> 6u);
        uint _816 = _814 + (_814 << 3u);
        uint _818 = _816 ^ (_816 >> 11u);
        _820 = _818 + (_818 << 15u);
        _826 = uintBitsToFloat((_997 & 8388607u) | 1065353216u) - 1.0;
        _801 = _984 + 1u;
        _997 = _820;
        _985 = _826;
        _984 = _801;
        continue;
    }
    uvec2 _575 = uvec2(_550 + ivec2(1));
    uint _830 = _575.y;
    uint _836 = _830 + (_830 << 10u);
    uint _838 = _836 ^ (_836 >> 6u);
    uint _840 = _838 + (_838 << 3u);
    uint _842 = _840 ^ (_840 >> 11u);
    uint _850 = (((_575.x * 1664525u) + (_842 + (_842 << 15u))) + 1013904223u) * 1664525u;
    uint _852 = _850 ^ (_850 >> 11u);
    uint _855 = _852 ^ ((_852 << 7u) & 2636928640u);
    uint _858 = _855 ^ ((_855 << 15u) & 4022730752u);
    uint _860 = _858 ^ (_858 >> 18u);
    float _990;
    _990 = _976;
    uint _877;
    uint _896;
    float _902;
    uint _989 = 0u;
    uint _996 = _860;
    for (;;)
    {
        if (!(_989 < 1u))
        {
            break;
        }
        uint _888 = _996 + (_996 << 10u);
        uint _890 = _888 ^ (_888 >> 6u);
        uint _892 = _890 + (_890 << 3u);
        uint _894 = _892 ^ (_892 >> 11u);
        _896 = _894 + (_894 << 15u);
        _902 = uintBitsToFloat((_996 & 8388607u) | 1065353216u) - 1.0;
        _877 = _989 + 1u;
        _996 = _896;
        _990 = _902;
        _989 = _877;
        continue;
    }
    vec2 _908 = (_551 * _551) * (vec2(3.0) - (vec2(2.0) * _551));
    float _583 = _908.x;
    float _584 = 1.0 - _583;
    float _586 = _908.y;
    _45.x = _44.x - (((wind_bend * wind_bend) * (sin((((((1.0 - _586) * ((_978 * _584) + (_981 * _583))) + ((_985 * _584) * _586)) + ((_990 * _583) * _586)) * 3.1400001049041748046875) - 1.57000005245208740234375) + 0.300000011920928955078125)) * 0.073499999940395355224609375);
    vec3 cursor_push = textureLod(sampler2D(object_push_grass_object_push, samplers_lnc_iso), _499, 0.0).xyz * 0.4000000059604644775390625;
    float _430 = clamp(cursor_push.z, 0.0, 1.0);
    vec4 _995;
    if (_430 > 0.0)
    {
        vec2 _439 = _45.xz + ((cursor_push.xy * _430) * wind_bend);
        vec4 _973 = _45;
        _973.x = _439.x;
        _973.z = _439.y;
        _995 = _973;
    }
    else
    {
        _995 = _45;
    }
    gl_Position = _995 * current_view.world_to_sample;
    entryPointParam_vs_main_frag_position_ws = _995.xyz;
    entryPointParam_vs_main_frag_normal_ws = Vertex_Normal;
    entryPointParam_vs_main_frag_uv = ((_995.xz * 0.100000001490116119384765625) + vec2(material_data_instance_buffer._member0[_26].position.w)) + vec2(0.800000011920928955078125);
}

