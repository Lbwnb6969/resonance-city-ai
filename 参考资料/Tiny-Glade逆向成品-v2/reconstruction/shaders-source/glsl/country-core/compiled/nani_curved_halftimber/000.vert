#version 460

struct CurvedHalftimberInstanceData_natural
{
    vec3 position;
    uint color_id;
    float radius0;
    float radius1;
    float angle0;
    float angle1;
    int is_straight;
    int is_xz;
    float plank_depth;
    int caps;
    int mesh_atlas_part_idx;
    uint seed;
    uint flags;
    uint wall_slot_id;
    uvec2 window_cut_buffer_address;
    uint window_cut_list;
    uint pad3;
};

const float _341[7] = float[](0.0, 0.89999997615814208984375, 1.10000002384185791015625, 1.89999997615814208984375, 2.099999904632568359375, 3.0, 4.0);
const vec2 _356[7] = vec2[](vec2(-1.0, 0.0), vec2(-1.0, 0.0), vec2(0.0, 1.0), vec2(0.0, 1.0), vec2(1.0, 0.0), vec2(1.0, 0.0), vec2(0.0, -1.0));

layout(set = 6, binding = 0, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} nani_instance_indirection_buffer;

layout(set = 0, binding = 0, std430) readonly buffer material_data_nani_instance_data
{
    CurvedHalftimberInstanceData_natural _member0[];
} material_data_nani_instance_data_1;

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

layout(location = 0) in vec3 Vertex_Position;
layout(location = 0) out vec3 entryPointParam_vs_main_frag_normal_ws;
layout(location = 1) out vec3 entryPointParam_vs_main_frag_position_ws;
layout(location = 2) flat out uint entryPointParam_vs_main_instance_index;
layout(location = 3) out float entryPointParam_vs_main_use_hard_normal;
layout(location = 4) out float entryPointParam_vs_main_grid_01_y;
layout(location = 5) out vec2 entryPointParam_vs_main_tex_uv;
layout(location = 6) out float entryPointParam_vs_main_angle01;
layout(location = 7) flat out uint entryPointParam_vs_main_grid_tessellation;

void main()
{
    do
    {
        uint _137 = uint(gl_InstanceIndex);
        int grid_tessellation = int(1u << uint(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].mesh_atlas_part_idx));
        uint _255 = uint(int(Vertex_Position.z * 10000.0)) + nani_instance_indirection_buffer._member0[_137];
        uint _968 = _255 + (_255 << 10u);
        uint _970 = _968 ^ (_968 >> 6u);
        uint _972 = _970 + (_970 << 3u);
        uint _974 = _972 ^ (_972 >> 11u);
        uint _301 = uint(int(Vertex_Position.z * 100.0)) + (nani_instance_indirection_buffer._member0[_137] * 235u);
        uint _990 = _301 + (_301 << 10u);
        uint _992 = _990 ^ (_990 >> 6u);
        uint _994 = _992 + (_992 << 3u);
        uint _996 = _994 ^ (_994 >> 11u);
        vec2 _305 = vec2((uintBitsToFloat(((_974 + (_974 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 0.0500000007450580596923828125);
        vec2 _315 = vec2((uintBitsToFloat(((_996 + (_996 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 0.0500000007450580596923828125);
        vec2 _21[7] = vec2[](vec2(0.0), vec2(0.0, 0.89999997615814208984375) + _305, vec2(0.100000001490116119384765625, 1.0) + _305, vec2(0.89999997615814208984375, 1.0) - _315, vec2(1.0, 0.89999997615814208984375) - _315, vec2(1.0, 0.0), vec2(0.0));
        uint _330 = uint(gl_VertexIndex - gl_BaseVertex);
        uint _331 = _330 % 7u;
        float profile_u = _341[_331] * 0.3333333432674407958984375;
        bool _366 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].is_xz == 0;
        vec2 _1257;
        vec2 _1271;
        if (_366)
        {
            _1271 = vec2(_356[_331].yx);
            _1257 = vec2(_21[_331].yx);
        }
        else
        {
            _1271 = _356[_331];
            _1257 = _21[_331];
        }
        float _385 = float(grid_tessellation);
        float step = 1.0 / _385;
        if (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].is_straight > 0)
        {
            vec3 profile_basis = vec3(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].radius0, 0.0, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].radius1);
            float _1263;
            if (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].is_straight == 2)
            {
                float _1264;
                if (Vertex_Position.z < 0.5)
                {
                    _1264 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].angle1 + (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].angle0 * mix(-1.0, 1.0, _1257.x));
                }
                else
                {
                    _1264 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].angle1;
                }
                _1263 = _1264;
            }
            else
            {
                float _1265;
                if (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].is_straight == 3)
                {
                    float _1266;
                    if (Vertex_Position.z > 0.5)
                    {
                        _1266 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].angle1 + (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].angle0 * mix(-1.0, 1.0, _1257.x));
                    }
                    else
                    {
                        _1266 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].angle1;
                    }
                    _1265 = _1266;
                }
                else
                {
                    float _1267;
                    if (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].is_straight == 4)
                    {
                        _1267 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].angle1 + (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].angle0 * mix(-1.0, 1.0, _1257.x));
                    }
                    else
                    {
                        _1267 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].angle1;
                    }
                    _1265 = _1267;
                }
                _1263 = _1265;
            }
            vec3 _453 = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].position + ((profile_basis * mix(-0.5, 0.5, _1257.x)) * material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].angle0)) + (((-vec3(-material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].radius1, 0.0, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].radius0)) * mix(-0.5, 0.5, Vertex_Position.z)) * _1263);
            uint _1012 = nani_instance_indirection_buffer._member0[_137] + (nani_instance_indirection_buffer._member0[_137] << 10u);
            uint _1014 = _1012 ^ (_1012 >> 6u);
            uint _1016 = _1014 + (_1014 << 3u);
            uint _1018 = _1016 ^ (_1016 >> 11u);
            float _464 = (_453.y + (_1257.y * material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].plank_depth)) + ((uintBitsToFloat(((_1018 + (_1018 << 15u)) & 8388607u) | 1065353216u) - 1.0) * 0.00999999977648258209228515625);
            vec3 _1168 = _453;
            _1168.y = _464;
            vec3 _1275;
            if ((material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].flags & 1u) != 0u)
            {
                uint _1042 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].seed + (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].seed << 10u);
                uint _1044 = _1042 ^ (_1042 >> 6u);
                uint _1046 = _1044 + (_1044 << 3u);
                uint _1048 = _1046 ^ (_1046 >> 11u);
                vec3 _1171 = _1168;
                _1171.y = _464 - (((4.0 * Vertex_Position.z) * (1.0 - Vertex_Position.z)) * mix(0.0500000007450580596923828125, 0.100000001490116119384765625, uintBitsToFloat(((_1048 + (_1048 << 15u)) & 8388607u) | 1065353216u) - 1.0));
                _1275 = _1171;
            }
            else
            {
                _1275 = _1168;
            }
            gl_Position = vec4(_1275, 1.0) * current_view.world_to_sample;
            entryPointParam_vs_main_frag_normal_ws = (profile_basis * _1271.x) + vec3(0.0, _1271.y, 0.0);
            entryPointParam_vs_main_frag_position_ws = _1275.xyz;
            entryPointParam_vs_main_instance_index = nani_instance_indirection_buffer._member0[_137];
            entryPointParam_vs_main_use_hard_normal = 0.0;
            entryPointParam_vs_main_grid_01_y = Vertex_Position.z;
            entryPointParam_vs_main_tex_uv = vec2(profile_u, Vertex_Position.z * _1263);
            entryPointParam_vs_main_angle01 = -1.0;
            entryPointParam_vs_main_grid_tessellation = uint(grid_tessellation);
            break;
        }
        else
        {
            float _1190;
            if (_366)
            {
                _1190 = 1.0 - Vertex_Position.z;
            }
            else
            {
                _1190 = Vertex_Position.z;
            }
            bool cap_start = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].caps & 1) != 0;
            bool cap_end = (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].caps & 2) != 0;
            float _581 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].angle1 - material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].angle0;
            float _601 = min(0.0500000007450580596923828125 / (abs(_581) * (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].radius0 + material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].radius1)), (cap_start ? cap_end : false) ? 0.5 : 1.0);
            bool _1191;
            if (cap_start)
            {
                _1191 = _1190 < step;
            }
            else
            {
                _1191 = false;
            }
            vec2 _1217;
            float _1225;
            float _1232;
            float _1241;
            float _1252;
            if (_1191)
            {
                _1252 = 1.0;
                _1241 = -1.0;
                _1232 = 0.0;
                _1225 = _1190 / step;
                _1217 = vec2(0.949999988079071044921875, 0.97500002384185791015625);
            }
            else
            {
                bool _1193;
                if (cap_start)
                {
                    _1193 = _1190 <= (2.0 / _385);
                }
                else
                {
                    _1193 = false;
                }
                vec2 _1218;
                float _1226;
                float _1233;
                float _1242;
                float _1253;
                if (_1193)
                {
                    float _1061 = (_1190 - step) / ((2.0 / _385) - step);
                    _1253 = 0.0;
                    _1242 = (_1061 == 0.0) ? (-1.0) : 0.0;
                    _1233 = _1061 * _601;
                    _1226 = 1.0;
                    _1218 = mix(vec2(0.949999988079071044921875, 0.97500002384185791015625), vec2(1.0), vec2(_1061));
                }
                else
                {
                    bool _1195;
                    if (cap_end)
                    {
                        _1195 = _1190 > (1.0 - step);
                    }
                    else
                    {
                        _1195 = false;
                    }
                    vec2 _1219;
                    float _1227;
                    float _1234;
                    float _1243;
                    if (_1195)
                    {
                        _1243 = 1.0;
                        _1234 = 1.0;
                        _1227 = (1.0 - _1190) / step;
                        _1219 = vec2(0.949999988079071044921875, 0.97500002384185791015625);
                    }
                    else
                    {
                        bool _1197;
                        if (cap_end)
                        {
                            _1197 = _1190 >= (1.0 - (2.0 / _385));
                        }
                        else
                        {
                            _1197 = false;
                        }
                        float _1214;
                        float _1215;
                        vec2 _1220;
                        if (_1197)
                        {
                            float _693 = 1.0 - step;
                            float _1066 = (_1190 - _693) / ((1.0 - (2.0 / _385)) - _693);
                            _1220 = mix(vec2(0.949999988079071044921875, 0.97500002384185791015625), vec2(1.0), vec2(_1066));
                            _1215 = float(_1066 == 0.0);
                            _1214 = mix(1.0, 1.0 - _601, _1066);
                        }
                        else
                        {
                            float _1206;
                            if (cap_start)
                            {
                                _1206 = 2.0 / _385;
                            }
                            else
                            {
                                _1206 = 0.0;
                            }
                            float _1209;
                            if (cap_end)
                            {
                                _1209 = 1.0 - (2.0 / _385);
                            }
                            else
                            {
                                _1209 = 1.0;
                            }
                            float _1212;
                            if (cap_end)
                            {
                                _1212 = 1.0 - _601;
                            }
                            else
                            {
                                _1212 = 1.0;
                            }
                            _1220 = vec2(1.0);
                            _1215 = 0.0;
                            _1214 = mix(cap_start ? _601 : 0.0, _1212, (_1190 - _1206) / (_1209 - _1206));
                        }
                        _1243 = _1215;
                        _1234 = _1214;
                        _1227 = 1.0;
                        _1219 = _1220;
                    }
                    _1253 = float(_1195);
                    _1242 = _1243;
                    _1233 = _1234;
                    _1226 = _1227;
                    _1218 = _1219;
                }
                _1252 = _1253;
                _1241 = _1242;
                _1232 = _1233;
                _1225 = _1226;
                _1217 = _1218;
            }
            vec2 _1221;
            vec2 _1223;
            vec2 _1237;
            if (_366)
            {
                _1237 = vec2(_356[_331].yx);
                _1223 = _1217.yx;
                _1221 = vec2(_21[_331].yx);
            }
            else
            {
                _1237 = _356[_331];
                _1223 = _1217;
                _1221 = _21[_331];
            }
            vec2 _1295 = mix(vec2(0.5, 0.0), vec2(0.0, 0.5), bvec2(_366));
            vec2 _1229;
            if (_366)
            {
                _1229 = vec2(_1225, 1.0);
            }
            else
            {
                _1229 = vec2(1.0, _1225);
            }
            vec2 _819 = (_1295 + ((_1221 - _1295) * _1223)) * _1229;
            float _822 = mix(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].angle0, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].angle1, _1232);
            float _825 = cos(_822);
            float _827 = -sin(_822);
            vec3 _828 = vec3(_825, 0.0, _827);
            vec3 _831 = (_828 * mix(material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].radius0, material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].radius1, _819.x)) + material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].position;
            float _1081 = 0.001953125 * (floor((_831.y + (_819.y * material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].plank_depth)) * 512.0) + fract(float(nani_instance_indirection_buffer._member0[_137]) * 1.61803400516510009765625));
            vec3 _1182 = _831;
            _1182.y = _1081;
            vec3 _1246;
            if ((material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].flags & 1u) != 0u)
            {
                uint _1097 = material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].seed + (material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].seed << 10u);
                uint _1099 = _1097 ^ (_1097 >> 6u);
                uint _1101 = _1099 + (_1099 << 3u);
                uint _1103 = _1101 ^ (_1101 >> 11u);
                vec3 _1185 = _1182;
                _1185.y = _1081 - (((4.0 * Vertex_Position.z) * (1.0 - Vertex_Position.z)) * mix(0.0500000007450580596923828125, 0.100000001490116119384765625, uintBitsToFloat(((_1103 + (_1103 << 15u)) & 8388607u) | 1065353216u) - 1.0));
                _1246 = _1185;
            }
            else
            {
                _1246 = _1182;
            }
            vec3 _1244;
            if (_1241 != 0.0)
            {
                _1244 = (vec3(_827, 0.0, -_825) * float(int(sign(_581)))) * _1241;
            }
            else
            {
                _1244 = (_828 * _1237.x) + vec3(0.0, _1237.y, 0.0);
            }
            gl_Position = vec4(_1246, 1.0) * current_view.world_to_sample;
            entryPointParam_vs_main_frag_normal_ws = normalize(_1244);
            entryPointParam_vs_main_frag_position_ws = _1246.xyz;
            entryPointParam_vs_main_instance_index = nani_instance_indirection_buffer._member0[_137];
            entryPointParam_vs_main_use_hard_normal = (_330 == 6u) ? 1.0 : _1252;
            entryPointParam_vs_main_grid_01_y = Vertex_Position.z;
            entryPointParam_vs_main_tex_uv = vec2(profile_u, (_822 * material_data_nani_instance_data_1._member0[nani_instance_indirection_buffer._member0[_137]].radius0) * 3.1400001049041748046875);
            entryPointParam_vs_main_angle01 = _822 * 0.159235656261444091796875;
            entryPointParam_vs_main_grid_tessellation = uint(grid_tessellation);
            break;
        }
        break; // unreachable workaround
    } while(false);
}

