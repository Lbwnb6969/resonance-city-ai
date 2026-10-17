#version 460

vec3 _235;

layout(set = 0, binding = 0, std140) uniform MaterialData_natural
{
    float anim_t;
    float fade_out;
    float swapchain_aspect_ratio;
} material_data;

layout(location = 3) in int branch_idx;
layout(location = 0) in vec3 Vertex_Position;
layout(location = 1) in vec3 start_pos;
layout(location = 2) in vec2 Vertex_UV;
layout(location = 0) out vec2 entryPointParam_vs_main_frag_uv;
layout(location = 1) out int entryPointParam_vs_main_frag_branch_idx;

void main()
{
    float _227;
    float _231;
    if (branch_idx == 0)
    {
        float _39 = radians(-10.0);
        _231 = _39;
        _227 = 0.20000000298023223876953125;
    }
    else
    {
        float _228;
        float _232;
        if (branch_idx == 1)
        {
            float _50 = radians(-30.0);
            _232 = _50;
            _228 = 0.100000001490116119384765625;
        }
        else
        {
            float _229;
            float _233;
            if (branch_idx == 2)
            {
                float _60 = radians(-30.0);
                _233 = _60;
                _229 = 0.180000007152557373046875;
            }
            else
            {
                bool _66 = branch_idx == 3;
                float _234;
                if (_66)
                {
                    float _69 = radians(20.0);
                    _234 = _69;
                }
                else
                {
                    _234 = 0.0;
                }
                _233 = _234;
                _229 = _66 ? 0.2199999988079071044921875 : 0.0;
            }
            _232 = _233;
            _228 = _229;
        }
        _231 = _232;
        _227 = _228;
    }
    float _193 = clamp(1.0 - ((material_data.anim_t * 1.2200000286102294921875) - _227), 0.0, 1.0);
    float _199 = 1.0 - (((_193 * _193) * _193) - (_193 * sin(_193 * 3.1400001049041748046875)));
    float _126 = mix(_231, 0.0, _199);
    float _206 = sin(_126);
    float _207 = cos(_126);
    vec2 _212 = mix(vec3(0.0), Vertex_Position - start_pos, vec3(_199)).xy * mat2(vec2(_207, _206), vec2(-_206, _207));
    vec3 _221;
    _221.x = _212.x;
    _221.y = _212.y;
    vec3 _149 = _221 + start_pos;
    vec2 _151 = _149.xy;
    _151.x = _149.x / material_data.swapchain_aspect_ratio;
    gl_Position = vec4(_151 * 0.449999988079071044921875, 1.0, 1.0);
    entryPointParam_vs_main_frag_uv = Vertex_UV;
    entryPointParam_vs_main_frag_branch_idx = branch_idx;
}

