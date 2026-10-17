#version 460

vec4 _161;

layout(set = 0, binding = 0, std140) uniform MaterialData_natural
{
    float anim_t;
    float fade_out;
    float swapchain_aspect_ratio;
} material_data;

layout(set = 0, binding = 1) uniform texture2D material_data_branch_t;
layout(set = 1, binding = 1) uniform sampler samplers_llr;
layout(set = 0, binding = 2) uniform texture2D material_data_branch_y;
layout(set = 0, binding = 3) uniform texture2D material_data_branch_g;
layout(set = 0, binding = 4) uniform texture2D material_data_branch_e;

layout(location = 1) flat in int vs_out_frag_branch_idx;
layout(location = 0) in vec2 vs_out_frag_uv;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    vec4 _157;
    if (vs_out_frag_branch_idx == 0)
    {
        _157 = texture(sampler2D(material_data_branch_t, samplers_llr), vs_out_frag_uv, -0.5);
    }
    else
    {
        vec4 _158;
        if (vs_out_frag_branch_idx == 1)
        {
            _158 = texture(sampler2D(material_data_branch_y, samplers_llr), vs_out_frag_uv, -0.5);
        }
        else
        {
            vec4 _159;
            if (vs_out_frag_branch_idx == 2)
            {
                _159 = texture(sampler2D(material_data_branch_g, samplers_llr), vs_out_frag_uv, -0.5);
            }
            else
            {
                vec4 _160;
                if (vs_out_frag_branch_idx == 3)
                {
                    _160 = texture(sampler2D(material_data_branch_e, samplers_llr), vs_out_frag_uv, -0.5);
                }
                else
                {
                    _160 = _161;
                }
                _159 = _160;
            }
            _158 = _159;
        }
        _157 = _158;
    }
    float alpha = _157.w * smoothstep(1.0, 0.0, material_data.fade_out);
    entryPointParam_ps_main_color = vec4(_157.xyz * alpha, alpha);
}

