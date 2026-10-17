#version 460

struct Triangle_natural
{
    ivec3 neighbours;
    int is_top;
    vec3 normal;
    float pad1;
};

struct Vertex_natural
{
    vec3 rest_position;
    float cell_bby;
    vec3 position;
    int cell_id;
    vec3 dir_to_centroid;
    int is_corner;
};

layout(set = 7, binding = 1, std430) readonly buffer StructuredBuffer
{
    Triangle_natural _member0[];
} rocky_terrain_mesh_triangles;

layout(set = 7, binding = 0, std430) readonly buffer rocky_terrain_mesh_vertices
{
    Vertex_natural _member0[];
} rocky_terrain_mesh_vertices_1;

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

layout(set = 0, binding = 0) uniform texture2D material_data_rocky_terrain_texture;
layout(set = 2, binding = 6) uniform sampler samplers_llr_iso;

layout(location = 1) flat in int vs_out_frag_triangle_id;
layout(location = 0) in vec3 vs_out_frag_position_ws;
layout(location = 2) in vec3 vs_out_frag_barycentric;
layout(location = 3) flat in int vs_out_cell_id;
layout(location = 0) out uvec2 entryPointParam_ps_main_gbuffer;

void main()
{
    float _1080 = min(min(vs_out_frag_barycentric.x, vs_out_frag_barycentric.y), vs_out_frag_barycentric.z);
    int _1781;
    vec3 _1787;
    vec3 _1790;
    if (_1080 == vs_out_frag_barycentric.z)
    {
        int _1083 = vs_out_frag_triangle_id * 3;
        _1790 = rocky_terrain_mesh_vertices_1._member0[_1083 + 1].position;
        _1787 = rocky_terrain_mesh_vertices_1._member0[_1083].position;
        _1781 = 0;
    }
    else
    {
        bool _1125 = _1080 == vs_out_frag_barycentric.x;
        vec3 _1788;
        vec3 _1791;
        if (_1125)
        {
            int _1127 = vs_out_frag_triangle_id * 3;
            _1791 = rocky_terrain_mesh_vertices_1._member0[_1127 + 2].position;
            _1788 = rocky_terrain_mesh_vertices_1._member0[_1127 + 1].position;
        }
        else
        {
            int _1170 = vs_out_frag_triangle_id * 3;
            _1791 = rocky_terrain_mesh_vertices_1._member0[_1170].position;
            _1788 = rocky_terrain_mesh_vertices_1._member0[_1170 + 2].position;
        }
        _1790 = _1791;
        _1787 = _1788;
        _1781 = _1125 ? 1 : 2;
    }
    int _1783;
    if (_1781 != (-1))
    {
        ivec3 _1072 = rocky_terrain_mesh_triangles._member0[vs_out_frag_triangle_id].neighbours;
        _1783 = _1072[_1781];
    }
    else
    {
        _1783 = -1;
    }
    float _1796;
    if (_1783 != (-1))
    {
        vec3 _1247 = _1790 - _1787;
        _1796 = distance(vs_out_frag_position_ws, mix(_1787, _1790, clamp(vec3(dot(vs_out_frag_position_ws - _1787, _1247) / dot(_1247, _1247)), vec3(0.0), vec3(1.0))));
    }
    else
    {
        _1796 = -1.0;
    }
    bool _403 = _1783 >= 0;
    vec3 _1819;
    if (_403)
    {
        _1819 = rocky_terrain_mesh_triangles._member0[_1783].normal;
    }
    else
    {
        _1819 = rocky_terrain_mesh_triangles._member0[vs_out_frag_triangle_id].normal;
    }
    bool _1798;
    if (_403)
    {
        _1798 = rocky_terrain_mesh_triangles._member0[vs_out_frag_triangle_id].is_top == 1;
    }
    else
    {
        _1798 = false;
    }
    bool _1799;
    if (_1798)
    {
        _1799 = rocky_terrain_mesh_triangles._member0[_1783].is_top == 1;
    }
    else
    {
        _1799 = false;
    }
    float _1855 = _1799 ? 0.20000000298023223876953125 : 0.07999999821186065673828125;
    vec2 _501 = vec2((float(vs_out_cell_id) * 0.100000001490116119384765625) + (vs_out_frag_position_ws.y * 0.5)) + vs_out_frag_position_ws.xz;
    vec2 _1266 = floor(_501 + vec2(dot(_501, vec2(0.3660254180431365966796875))));
    vec2 _1270 = (_501 - _1266) + vec2(dot(_1266, vec2(0.211324870586395263671875)));
    float _1271 = _1270.x;
    float _1272 = _1270.y;
    vec2 _1859 = mix(vec2(0.0, 1.0), vec2(1.0, 0.0), bvec2(_1271 > _1272));
    vec4 _1278 = _1270.xyxy + vec4(0.211324870586395263671875, 0.211324870586395263671875, -0.57735025882720947265625, -0.57735025882720947265625);
    vec2 _1281 = _1278.xy - _1859;
    vec4 _1766 = _1278;
    _1766.x = _1281.x;
    _1766.y = _1281.y;
    vec2 _1286 = _1266 - vec2(289.0) * trunc(_1266 / vec2(289.0));
    vec3 _1292 = vec3(_1286.y) + vec3(0.0, _1859.y, 1.0);
    vec3 _1365 = ((_1292 * 34.0) + vec3(1.0)) * _1292;
    vec3 _1300 = ((_1365 - vec3(289.0) * trunc(_1365 / vec3(289.0))) + vec3(_1286.x)) + vec3(0.0, _1859.x, 1.0);
    vec3 _1372 = ((_1300 * 34.0) + vec3(1.0)) * _1300;
    vec3 _1316 = max(vec3(0.5) - vec3(dot(_1270, _1270), dot(_1766.xy, _1766.xy), dot(_1766.zw, _1766.zw)), vec3(0.0));
    vec3 _1317 = _1316 * _1316;
    vec3 _1321 = fract((_1372 - vec3(289.0) * trunc(_1372 / vec3(289.0))) * vec3(0.024390242993831634521484375)) * 2.0;
    vec3 _1323 = _1321 - vec3(1.0);
    vec3 _1326 = abs(_1323) - vec3(0.5);
    vec3 _1330 = _1323 - floor(_1321 + vec3(-0.5));
    vec3 _661 = mix(rocky_terrain_mesh_triangles._member0[vs_out_frag_triangle_id].normal, _1819, vec3((1.0 - min(smoothstep(0.0, _1855, _1796 + ((130.0 * dot((_1317 * _1317) * (vec3(1.792842864990234375) - (((_1330 * _1330) + (_1326 * _1326)) * 0.8537347316741943359375)), vec3((_1330.x * _1271) + (_1326.x * _1272), (_1330.yz * _1766.xz) + (_1326.yz * _1766.yw)))) * (_1799 ? 0.5 : 0.25))), smoothstep(0.0, _1855 * 0.5, _1796))) * 0.5));
    vec3 in_p = vs_out_frag_position_ws * vec3(0.0333333350718021392822265625);
    uint _667 = uint(vs_out_cell_id);
    uint _1381 = _667 + (_667 << 10u);
    uint _1383 = _1381 ^ (_1381 >> 6u);
    uint _1385 = _1383 + (_1383 << 3u);
    uint _1387 = _1385 ^ (_1385 >> 11u);
    vec2 _707 = vec2(uintBitsToFloat(((_1387 + (_1387 << 15u)) & 8388607u) | 1065353216u) - 1.0);
    vec4 sampled = texture(sampler2D(material_data_rocky_terrain_texture, samplers_llr_iso), in_p.zy + _707, current_view.mip_bias);
    vec4 sampled_1 = texture(sampler2D(material_data_rocky_terrain_texture, samplers_llr_iso), in_p.xy + _707, current_view.mip_bias);
    vec3 _753 = pow(abs(_661), vec3(1.0));
    float _1429 = dot(sampled_1.xyz, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875));
    float _1400 = dot(sampled.xyz, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)) + _753.x;
    float _1401 = _1429 + _753.z;
    float _1403 = _1429 + _753.y;
    float _1405 = max(max(_1400, _1401), _1403) - 0.20000000298023223876953125;
    float _1407 = max(_1400 - _1405, 0.0);
    float _1409 = max(_1401 - _1405, 0.0);
    float _1411 = max(_1403 - _1405, 0.0);
    vec3 texture = ((((sampled.xyz * _1407) + (sampled_1.xyz * _1409)) + (texture(sampler2D(material_data_rocky_terrain_texture, samplers_llr_iso), in_p.xz + _707, current_view.mip_bias).xyz * _1411)) / vec3((_1407 + _1409) + _1411)) * 1.10000002384185791015625;
    vec3 _880 = normalize(_661);
    vec3 _1820;
    if (frame_constants.glade_theme_id == 4u)
    {
        _1820 = mix(texture, vec3(0.699999988079071044921875), vec3(smoothstep(0.5, 1.0, clamp(_880.y, 0.0, 1.0)) * smoothstep(-0.100000001490116119384765625, 0.0, vs_out_frag_position_ws.y)));
    }
    else
    {
        _1820 = texture;
    }
    vec3 _1474 = (_880 * 0.5) + vec3(0.5);
    vec3 _1582 = sqrt(clamp(_1820, vec3(0.0), vec3(1.0)));
    uint _1597 = (uint((clamp(_1582.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1582.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1582.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16));
    uvec2 _1850 = uvec2(((uint((clamp(_1474.x, 0.0, 1.0) * 255.0) + 0.5) + (uint((clamp(_1474.y, 0.0, 1.0) * 255.0) + 0.5) << uint(8))) + (uint((clamp(_1474.z, 0.0, 1.0) * 255.0) + 0.5) << uint(16))) + 3422552064u, _1597);
    _1850.y = _1597 | 385875968u;
    entryPointParam_ps_main_gbuffer = _1850;
}

