#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_samplerless_texture_functions : require
#if defined(GL_EXT_control_flow_attributes)
#extension GL_EXT_control_flow_attributes : require
#define SPIRV_CROSS_FLATTEN [[flatten]]
#define SPIRV_CROSS_BRANCH [[dont_flatten]]
#define SPIRV_CROSS_UNROLL [[unroll]]
#define SPIRV_CROSS_LOOP [[dont_unroll]]
#else
#define SPIRV_CROSS_FLATTEN
#define SPIRV_CROSS_BRANCH
#define SPIRV_CROSS_UNROLL
#define SPIRV_CROSS_LOOP
#endif

float _3543;
vec4 _3856;
vec3 _3857;

layout(set = 0, binding = 2, std430) readonly buffer StructuredBuffer
{
    uint _member0[];
} shape_stream;

layout(set = 0, binding = 0, std140) uniform GlobalParams_natural
{
    vec2 window_size_pixels;
    uvec2 font_atlas_tex_dims;
    uvec2 blur_pyramid_tex_dims;
} globalParams;

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

layout(set = 1, binding = 0) uniform texture2D resource_handles[];
layout(set = 2, binding = 3) uniform sampler samplers_llc;
layout(set = 5, binding = 0) uniform texture2D blue_noise_textures_uniform01;
layout(set = 2, binding = 0) uniform sampler samplers_lnc;
layout(set = 0, binding = 3) uniform texture2D font_atlas_tex;
layout(set = 2, binding = 5) uniform sampler samplers_lnc_iso;
layout(set = 0, binding = 4) uniform texture2D blur_pyramid_tex;

layout(location = 2) in vec4 vs_out_color_mult;
layout(location = 3) flat in uint vs_out_stream;
layout(location = 0) in vec2 vs_out_uv;
layout(location = 1) in vec4 vs_out_prim_offset_extent;
layout(location = 4) flat in vec4 vs_out_clip_px;
layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    uvec2 _128 = uvec2(gl_FragCoord.xy);
    bool _3541;
    if (vs_out_stream != 0u)
    {
        _3541 = vs_out_stream != 4294967295u;
    }
    else
    {
        _3541 = false;
    }
    vec4 _3756;
    if (_3541)
    {
        uint stream_cursor = vs_out_stream >> 8u;
        uint _151 = (vs_out_stream & 255u) + stream_cursor;
        uint _3752;
        vec4 _3761;
        _3761 = vs_out_color_mult;
        _3752 = 0u;
        uint iter_limiter;
        float uvs[2][2];
        float weights[2][2];
        uint _3807;
        vec4 _3808;
        uint _3753 = stream_cursor;
        for (;;)
        {
            bool _3754;
            if (_3752 < 256u)
            {
                _3754 = _3753 < _151;
            }
            else
            {
                _3754 = false;
            }
            if (!_3754)
            {
                break;
            }
            uint _171 = uint(int(_3753 * 4u)) / 4u;
            switch (int(shape_stream._member0[_171] & 255u))
            {
                case 0:
                {
                    uint _190 = uint(int((_3753 + 1u) * 4u)) / 4u;
                    float _3134 = float(shape_stream._member0[_190] & 255u) * 0.0039215688593685626983642578125;
                    float _3140 = float((shape_stream._member0[_190] >> uint(8)) & 255u);
                    float _3142 = _3140 * 0.0039215688593685626983642578125;
                    float _3148 = float((shape_stream._member0[_190] >> uint(16)) & 255u);
                    float _3150 = _3148 * 0.0039215688593685626983642578125;
                    float _3156 = float((shape_stream._member0[_190] >> uint(24)) & 255u);
                    float _3158 = _3156 * 0.0039215688593685626983642578125;
                    vec4 _222 = vec4(_3134, _3142, _3150, _3158).wzyx;
                    float _3787;
                    if (0.040449999272823333740234375 < _3158)
                    {
                        _3787 = pow((_3158 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
                    }
                    else
                    {
                        _3787 = _3156 * 0.000303526991046965122222900390625;
                    }
                    float _3788;
                    if (0.040449999272823333740234375 < _3150)
                    {
                        _3788 = pow((_3150 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
                    }
                    else
                    {
                        _3788 = _3148 * 0.000303526991046965122222900390625;
                    }
                    float _3789;
                    if (0.040449999272823333740234375 < _3142)
                    {
                        _3789 = pow((_3142 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
                    }
                    else
                    {
                        _3789 = _3140 * 0.000303526991046965122222900390625;
                    }
                    vec3 _266 = vec3(_3787, _3788, _3789) * _3134;
                    _222.x = _266.x;
                    _222.y = _266.y;
                    _222.z = _266.z;
                    _3808 = _3761 * _222;
                    _3807 = _3753 + 2u;
                    break;
                }
                case 1:
                {
                    uint texture_index = (shape_stream._member0[_171] >> 8u) & 65535u;
                    vec2 _310 = vs_out_uv;
                    uint _3786;
                    vec4 _3809;
                    switch (int((shape_stream._member0[_171] >> 24u) & 3u))
                    {
                        case 0:
                        {
                            vec4 sampled = textureGrad(nonuniformEXT(sampler2D(resource_handles[texture_index], samplers_llc)), _310, dFdx(_310) * 0.5, (dFdy(_310) * (-1.0)) * 0.5);
                            vec3 _361 = sampled.xyz * sampled.w;
                            vec4 _3516 = sampled;
                            _3516.x = _361.x;
                            _3516.y = _361.y;
                            _3516.z = _361.z;
                            _3809 = _3761 * _3516;
                            _3786 = _3753 + 1u;
                            break;
                        }
                        case 1:
                        {
                            uvec2 vecSize = uvec2(textureSize(resource_handles[nonuniformEXT(texture_index)], 0));
                            vec2 _3508 = _310;
                            _3508.x = (((_310.x - 0.5) * (vs_out_prim_offset_extent.z / vs_out_prim_offset_extent.w)) / (float(vecSize.x) / float(vecSize.y))) + 0.5;
                            vec4 sampled_1 = textureGrad(nonuniformEXT(sampler2D(resource_handles[texture_index], samplers_llc)), _3508, dFdx(_3508) * 0.5, (dFdy(_3508) * (-1.0)) * 0.5);
                            vec3 _419 = sampled_1.xyz * sampled_1.w;
                            vec4 _3510 = sampled_1;
                            _3510.x = _419.x;
                            _3510.y = _419.y;
                            _3510.z = _419.z;
                            _3809 = _3761 * _3510;
                            _3786 = _3753 + 1u;
                            break;
                        }
                        case 2:
                        {
                            uvec2 vecSize_1 = uvec2(textureSize(resource_handles[nonuniformEXT(texture_index)], 0));
                            float _455 = ((_310.x - 0.5) * (vs_out_prim_offset_extent.z / vs_out_prim_offset_extent.w)) / (float(vecSize_1.x) / float(vecSize_1.y));
                            vec2 _3497 = _310;
                            _3497.x = _455 + 0.5;
                            float spread = smoothstep(0.0, 1.0, max(0.0, (abs(_455) - 0.4000000059604644775390625) * 2.0)) * 0.25;
                            vec2 _3086 = fract(vec2(9.55853271484375, 7.338083744049072265625));
                            vec2 _521 = (dFdy(_3497) * (-1.0)) * 0.5;
                            float _528 = _521.y;
                            _521.y = _528 + ((float(int(sign(_528))) * spread) * 0.5);
                            vec4 sampled_2 = textureGrad(nonuniformEXT(sampler2D(resource_handles[texture_index], samplers_llc)), _3497 + (((((texelFetch(blue_noise_textures_uniform01, ivec2((_128 + uvec2(_3086 * vec2(256.0))) % uvec2(256u)), 0) * 255.0) * vec4(0.00390625)) + vec4(0.001953125)).xy - vec2(0.5)) * spread), dFdx(_3497) * 0.5, _521);
                            vec3 _546 = sampled_2.xyz * sampled_2.w;
                            vec4 _3502 = sampled_2;
                            _3502.x = _546.x;
                            _3502.y = _546.y;
                            _3502.z = _546.z;
                            _3809 = _3761 * _3502;
                            _3786 = _3753 + 1u;
                            break;
                        }
                        case 3:
                        {
                            uvec2 vecSize_2 = uvec2(textureSize(resource_handles[nonuniformEXT(texture_index)], 0));
                            vec2 _572 = vec2(float(vecSize_2.x), float(vecSize_2.y)) * 0.3333300054073333740234375;
                            vec2 _3032 = _572;
                            float _3768;
                            _3768 = _572.x;
                            float _3050;
                            int _3054;
                            int _3767 = 1;
                            SPIRV_CROSS_UNROLL
                            for (;;)
                            {
                                if (!(_3767 < 2))
                                {
                                    break;
                                }
                                _3050 = max(_3768, _3032[_3767]);
                                _3054 = _3767 + 1;
                                _3768 = _3050;
                                _3767 = _3054;
                                continue;
                            }
                            vec2 prim_extent = vs_out_prim_offset_extent.zw * max(1.0, (0.666666686534881591796875 * _3768) / vs_out_prim_offset_extent.z);
                            vec2 _30 = prim_extent;
                            vec2 _31 = _310 * prim_extent;
                            vec2 _32 = _572 * vec2(0.3333333432674407958984375);
                            uint c;
                            uint _3770 = 0u;
                            for (;;)
                            {
                                if (!(_3770 < 2u))
                                {
                                    break;
                                }
                                if (_31[_3770] < _32[_3770])
                                {
                                    float x = (_31[_3770] / _32[_3770]) * 0.3333333432674407958984375;
                                    uvs[_3770][1] = x;
                                    uvs[_3770][0] = x;
                                    weights[_3770][1] = 0.5;
                                    weights[_3770][0] = 0.5;
                                }
                                else
                                {
                                    float _671 = _30[_3770] - _32[_3770];
                                    if (_31[_3770] < _671)
                                    {
                                        float loffset = _31[_3770] - _32[_3770];
                                        float range = _30[_3770] - (2.0 * _32[_3770]);
                                        float mult = range / _32[_3770];
                                        uvs[_3770][0] = (abs(1.0 - (2.0 * fract(0.5 + (((mult * loffset) / range) * 0.5)))) * 0.3333333432674407958984375) + 0.3333333432674407958984375;
                                        uvs[_3770][1] = (abs(1.0 - (2.0 * fract(((mult * (_671 - _31[_3770])) / range) * 0.5))) * 0.3333333432674407958984375) + 0.3333333432674407958984375;
                                        float _708 = loffset / range;
                                        weights[_3770][1] = _708;
                                        weights[_3770][0] = 1.0 - _708;
                                    }
                                    else
                                    {
                                        float x_1 = (((_31[_3770] - _671) / _32[_3770]) * 0.3333333432674407958984375) + 0.666666686534881591796875;
                                        uvs[_3770][1] = x_1;
                                        uvs[_3770][0] = x_1;
                                        weights[_3770][1] = 0.5;
                                        weights[_3770][0] = 0.5;
                                    }
                                }
                                c = _3770 + 1u;
                                _3770 = c;
                                continue;
                            }
                            vec4 _3772;
                            float _3773;
                            _3773 = 0.0;
                            _3772 = vec4(0.0);
                            uint y;
                            vec4 _3782;
                            float _3783;
                            uint _3771 = 0u;
                            for (;;)
                            {
                                if (!(_3771 < 2u))
                                {
                                    break;
                                }
                                _3783 = _3773;
                                _3782 = _3772;
                                vec4 tsum;
                                float wsum;
                                uint x_2;
                                uint _3780 = 0u;
                                for (;;)
                                {
                                    if (!(_3780 < 2u))
                                    {
                                        break;
                                    }
                                    float w = weights[0][_3780] * weights[1][_3771];
                                    float _3063 = (w * w) * w;
                                    tsum = _3782 + (textureLod(nonuniformEXT(sampler2D(resource_handles[texture_index], samplers_llc)), vec2(uvs[0][_3780], uvs[1][_3771]), 0.0) * _3063);
                                    wsum = _3783 + _3063;
                                    x_2 = _3780 + 1u;
                                    _3783 = wsum;
                                    _3782 = tsum;
                                    _3780 = x_2;
                                    continue;
                                }
                                y = _3771 + 1u;
                                _3773 = _3783;
                                _3772 = _3782;
                                _3771 = y;
                                continue;
                            }
                            vec4 _806 = _3772 / vec4(_3773);
                            vec3 _810 = _806.xyz * _806.w;
                            vec4 _3491 = _806;
                            _3491.x = _810.x;
                            _3491.y = _810.y;
                            _3491.z = _810.z;
                            _3809 = _3761 * _3491;
                            _3786 = _3753 + 1u;
                            break;
                        }
                        default:
                        {
                            _3809 = _3761;
                            _3786 = _3753;
                            break;
                        }
                    }
                    _3808 = _3809;
                    _3807 = _3786;
                    break;
                }
                case 2:
                {
                    float _837 = float((shape_stream._member0[_171] >> 8u) & 255u);
                    vec2 _3009 = (abs(vs_out_prim_offset_extent.xy) - (vs_out_prim_offset_extent.zw * vec2(0.5))) + vec2(_837);
                    _3808 = _3761 * clamp((((length(max(_3009, vec2(0.0))) + min(max(_3009.x, _3009.y), 0.0)) - _837) - 0.5) * (-1.0), 0.0, 1.0);
                    _3807 = _3753 + 1u;
                    break;
                }
                default:
                {
                    _3808 = _3761;
                    _3807 = _3753;
                    break;
                }
            }
            iter_limiter = _3752 + 1u;
            _3761 = _3808;
            _3753 = _3807;
            _3752 = iter_limiter;
            continue;
        }
        _3756 = mix(_3761, vec4(1.0, 0.0, 1.0, 1.0), bvec4(_3752 == 256u));
    }
    else
    {
        vec4 _3757;
        if (vs_out_stream != 4294967295u)
        {
            vec2 noise_uv = ((gl_FragCoord.xy / vec2(globalParams.window_size_pixels.y)) * 1440.0) * 0.300000011920928955078125;
            vec2 paper_uv = noise_uv * 2.5;
            vec4 sampled_3 = textureLod(sampler2D(font_atlas_tex, samplers_lnc), vs_out_uv, 0.0);
            vec2 _938 = paper_uv * 0.71920001506805419921875;
            ivec2 _1517 = ivec2(floor(_938));
            vec2 _1518 = fract(_938);
            uvec2 _1519 = uvec2(_1517);
            uint _1569 = _1519.y;
            uint _1575 = _1569 + (_1569 << 10u);
            uint _1577 = _1575 ^ (_1575 >> 6u);
            uint _1579 = _1577 + (_1577 << 3u);
            uint _1581 = _1579 ^ (_1579 >> 11u);
            uint _1589 = (((_1519.x * 1664525u) + (_1581 + (_1581 << 15u))) + 1013904223u) * 1664525u;
            uint _1591 = _1589 ^ (_1589 >> 11u);
            uint _1594 = _1591 ^ ((_1591 << 7u) & 2636928640u);
            uint _1597 = _1594 ^ ((_1594 << 15u) & 4022730752u);
            uint _1599 = _1597 ^ (_1597 >> 18u);
            float _3545;
            _3545 = _3543;
            uint _1616;
            uint _1635;
            float _1641;
            uint _3544 = 0u;
            uint _3751 = _1599;
            for (;;)
            {
                if (!(_3544 < 1u))
                {
                    break;
                }
                uint _1627 = _3751 + (_3751 << 10u);
                uint _1629 = _1627 ^ (_1627 >> 6u);
                uint _1631 = _1629 + (_1629 << 3u);
                uint _1633 = _1631 ^ (_1631 >> 11u);
                _1635 = _1633 + (_1633 << 15u);
                _1641 = uintBitsToFloat((_3751 & 8388607u) | 1065353216u) - 1.0;
                _1616 = _3544 + 1u;
                _3751 = _1635;
                _3545 = _1641;
                _3544 = _1616;
                continue;
            }
            uvec2 _1527 = uvec2(_1517 + ivec2(1, 0));
            uint _1645 = _1527.y;
            uint _1651 = _1645 + (_1645 << 10u);
            uint _1653 = _1651 ^ (_1651 >> 6u);
            uint _1655 = _1653 + (_1653 << 3u);
            uint _1657 = _1655 ^ (_1655 >> 11u);
            uint _1665 = (((_1527.x * 1664525u) + (_1657 + (_1657 << 15u))) + 1013904223u) * 1664525u;
            uint _1667 = _1665 ^ (_1665 >> 11u);
            uint _1670 = _1667 ^ ((_1667 << 7u) & 2636928640u);
            uint _1673 = _1670 ^ ((_1670 << 15u) & 4022730752u);
            uint _1675 = _1673 ^ (_1673 >> 18u);
            float _3549;
            _3549 = _3543;
            uint _1692;
            uint _1711;
            float _1717;
            uint _3548 = 0u;
            uint _3750 = _1675;
            for (;;)
            {
                if (!(_3548 < 1u))
                {
                    break;
                }
                uint _1703 = _3750 + (_3750 << 10u);
                uint _1705 = _1703 ^ (_1703 >> 6u);
                uint _1707 = _1705 + (_1705 << 3u);
                uint _1709 = _1707 ^ (_1707 >> 11u);
                _1711 = _1709 + (_1709 << 15u);
                _1717 = uintBitsToFloat((_3750 & 8388607u) | 1065353216u) - 1.0;
                _1692 = _3548 + 1u;
                _3750 = _1711;
                _3549 = _1717;
                _3548 = _1692;
                continue;
            }
            uvec2 _1534 = uvec2(_1517 + ivec2(0, 1));
            uint _1721 = _1534.y;
            uint _1727 = _1721 + (_1721 << 10u);
            uint _1729 = _1727 ^ (_1727 >> 6u);
            uint _1731 = _1729 + (_1729 << 3u);
            uint _1733 = _1731 ^ (_1731 >> 11u);
            uint _1741 = (((_1534.x * 1664525u) + (_1733 + (_1733 << 15u))) + 1013904223u) * 1664525u;
            uint _1743 = _1741 ^ (_1741 >> 11u);
            uint _1746 = _1743 ^ ((_1743 << 7u) & 2636928640u);
            uint _1749 = _1746 ^ ((_1746 << 15u) & 4022730752u);
            uint _1751 = _1749 ^ (_1749 >> 18u);
            float _3554;
            _3554 = _3543;
            uint _1768;
            uint _1787;
            float _1793;
            uint _3553 = 0u;
            uint _3749 = _1751;
            for (;;)
            {
                if (!(_3553 < 1u))
                {
                    break;
                }
                uint _1779 = _3749 + (_3749 << 10u);
                uint _1781 = _1779 ^ (_1779 >> 6u);
                uint _1783 = _1781 + (_1781 << 3u);
                uint _1785 = _1783 ^ (_1783 >> 11u);
                _1787 = _1785 + (_1785 << 15u);
                _1793 = uintBitsToFloat((_3749 & 8388607u) | 1065353216u) - 1.0;
                _1768 = _3553 + 1u;
                _3749 = _1787;
                _3554 = _1793;
                _3553 = _1768;
                continue;
            }
            uvec2 _1542 = uvec2(_1517 + ivec2(1));
            uint _1797 = _1542.y;
            uint _1803 = _1797 + (_1797 << 10u);
            uint _1805 = _1803 ^ (_1803 >> 6u);
            uint _1807 = _1805 + (_1805 << 3u);
            uint _1809 = _1807 ^ (_1807 >> 11u);
            uint _1817 = (((_1542.x * 1664525u) + (_1809 + (_1809 << 15u))) + 1013904223u) * 1664525u;
            uint _1819 = _1817 ^ (_1817 >> 11u);
            uint _1822 = _1819 ^ ((_1819 << 7u) & 2636928640u);
            uint _1825 = _1822 ^ ((_1822 << 15u) & 4022730752u);
            uint _1827 = _1825 ^ (_1825 >> 18u);
            float _3560;
            _3560 = _3543;
            uint _1844;
            uint _1863;
            float _1869;
            uint _3559 = 0u;
            uint _3748 = _1827;
            for (;;)
            {
                if (!(_3559 < 1u))
                {
                    break;
                }
                uint _1855 = _3748 + (_3748 << 10u);
                uint _1857 = _1855 ^ (_1855 >> 6u);
                uint _1859 = _1857 + (_1857 << 3u);
                uint _1861 = _1859 ^ (_1859 >> 11u);
                _1863 = _1861 + (_1861 << 15u);
                _1869 = uintBitsToFloat((_3748 & 8388607u) | 1065353216u) - 1.0;
                _1844 = _3559 + 1u;
                _3748 = _1863;
                _3560 = _1869;
                _3559 = _1844;
                continue;
            }
            vec2 _1875 = (_1518 * _1518) * (vec2(3.0) - (vec2(2.0) * _1518));
            float _1550 = _1875.x;
            float _1551 = 1.0 - _1550;
            float _1553 = _1875.y;
            vec2 _1147 = paper_uv * 0.898119986057281494140625;
            ivec2 _1890 = ivec2(floor(_1147));
            vec2 _1891 = fract(_1147);
            uvec2 _1892 = uvec2(_1890);
            uint _1942 = _1892.y;
            uint _1948 = _1942 + (_1942 << 10u);
            uint _1950 = _1948 ^ (_1948 >> 6u);
            uint _1952 = _1950 + (_1950 << 3u);
            uint _1954 = _1952 ^ (_1952 >> 11u);
            uint _1962 = (((_1892.x * 1664525u) + (_1954 + (_1954 << 15u))) + 1013904223u) * 1664525u;
            uint _1964 = _1962 ^ (_1962 >> 11u);
            uint _1967 = _1964 ^ ((_1964 << 7u) & 2636928640u);
            uint _1970 = _1967 ^ ((_1967 << 15u) & 4022730752u);
            uint _1972 = _1970 ^ (_1970 >> 18u);
            float _3567;
            _3567 = _3543;
            uint _1989;
            uint _2008;
            float _2014;
            uint _3566 = 0u;
            uint _3747 = _1972;
            for (;;)
            {
                if (!(_3566 < 1u))
                {
                    break;
                }
                uint _2000 = _3747 + (_3747 << 10u);
                uint _2002 = _2000 ^ (_2000 >> 6u);
                uint _2004 = _2002 + (_2002 << 3u);
                uint _2006 = _2004 ^ (_2004 >> 11u);
                _2008 = _2006 + (_2006 << 15u);
                _2014 = uintBitsToFloat((_3747 & 8388607u) | 1065353216u) - 1.0;
                _1989 = _3566 + 1u;
                _3747 = _2008;
                _3567 = _2014;
                _3566 = _1989;
                continue;
            }
            uvec2 _1900 = uvec2(_1890 + ivec2(1, 0));
            uint _2018 = _1900.y;
            uint _2024 = _2018 + (_2018 << 10u);
            uint _2026 = _2024 ^ (_2024 >> 6u);
            uint _2028 = _2026 + (_2026 << 3u);
            uint _2030 = _2028 ^ (_2028 >> 11u);
            uint _2038 = (((_1900.x * 1664525u) + (_2030 + (_2030 << 15u))) + 1013904223u) * 1664525u;
            uint _2040 = _2038 ^ (_2038 >> 11u);
            uint _2043 = _2040 ^ ((_2040 << 7u) & 2636928640u);
            uint _2046 = _2043 ^ ((_2043 << 15u) & 4022730752u);
            uint _2048 = _2046 ^ (_2046 >> 18u);
            float _3575;
            _3575 = _3543;
            uint _2065;
            uint _2084;
            float _2090;
            uint _3574 = 0u;
            uint _3746 = _2048;
            for (;;)
            {
                if (!(_3574 < 1u))
                {
                    break;
                }
                uint _2076 = _3746 + (_3746 << 10u);
                uint _2078 = _2076 ^ (_2076 >> 6u);
                uint _2080 = _2078 + (_2078 << 3u);
                uint _2082 = _2080 ^ (_2080 >> 11u);
                _2084 = _2082 + (_2082 << 15u);
                _2090 = uintBitsToFloat((_3746 & 8388607u) | 1065353216u) - 1.0;
                _2065 = _3574 + 1u;
                _3746 = _2084;
                _3575 = _2090;
                _3574 = _2065;
                continue;
            }
            uvec2 _1907 = uvec2(_1890 + ivec2(0, 1));
            uint _2094 = _1907.y;
            uint _2100 = _2094 + (_2094 << 10u);
            uint _2102 = _2100 ^ (_2100 >> 6u);
            uint _2104 = _2102 + (_2102 << 3u);
            uint _2106 = _2104 ^ (_2104 >> 11u);
            uint _2114 = (((_1907.x * 1664525u) + (_2106 + (_2106 << 15u))) + 1013904223u) * 1664525u;
            uint _2116 = _2114 ^ (_2114 >> 11u);
            uint _2119 = _2116 ^ ((_2116 << 7u) & 2636928640u);
            uint _2122 = _2119 ^ ((_2119 << 15u) & 4022730752u);
            uint _2124 = _2122 ^ (_2122 >> 18u);
            float _3584;
            _3584 = _3543;
            uint _2141;
            uint _2160;
            float _2166;
            uint _3583 = 0u;
            uint _3745 = _2124;
            for (;;)
            {
                if (!(_3583 < 1u))
                {
                    break;
                }
                uint _2152 = _3745 + (_3745 << 10u);
                uint _2154 = _2152 ^ (_2152 >> 6u);
                uint _2156 = _2154 + (_2154 << 3u);
                uint _2158 = _2156 ^ (_2156 >> 11u);
                _2160 = _2158 + (_2158 << 15u);
                _2166 = uintBitsToFloat((_3745 & 8388607u) | 1065353216u) - 1.0;
                _2141 = _3583 + 1u;
                _3745 = _2160;
                _3584 = _2166;
                _3583 = _2141;
                continue;
            }
            uvec2 _1915 = uvec2(_1890 + ivec2(1));
            uint _2170 = _1915.y;
            uint _2176 = _2170 + (_2170 << 10u);
            uint _2178 = _2176 ^ (_2176 >> 6u);
            uint _2180 = _2178 + (_2178 << 3u);
            uint _2182 = _2180 ^ (_2180 >> 11u);
            uint _2190 = (((_1915.x * 1664525u) + (_2182 + (_2182 << 15u))) + 1013904223u) * 1664525u;
            uint _2192 = _2190 ^ (_2190 >> 11u);
            uint _2195 = _2192 ^ ((_2192 << 7u) & 2636928640u);
            uint _2198 = _2195 ^ ((_2195 << 15u) & 4022730752u);
            uint _2200 = _2198 ^ (_2198 >> 18u);
            float _3594;
            _3594 = _3543;
            uint _2217;
            uint _2236;
            float _2242;
            uint _3593 = 0u;
            uint _3744 = _2200;
            for (;;)
            {
                if (!(_3593 < 1u))
                {
                    break;
                }
                uint _2228 = _3744 + (_3744 << 10u);
                uint _2230 = _2228 ^ (_2228 >> 6u);
                uint _2232 = _2230 + (_2230 << 3u);
                uint _2234 = _2232 ^ (_2232 >> 11u);
                _2236 = _2234 + (_2234 << 15u);
                _2242 = uintBitsToFloat((_3744 & 8388607u) | 1065353216u) - 1.0;
                _2217 = _3593 + 1u;
                _3744 = _2236;
                _3594 = _2242;
                _3593 = _2217;
                continue;
            }
            vec2 _2248 = (_1891 * _1891) * (vec2(3.0) - (vec2(2.0) * _1891));
            float _1923 = _2248.x;
            float _1924 = 1.0 - _1923;
            float _1926 = _2248.y;
            vec2 _1164 = noise_uv * 0.131280004978179931640625;
            ivec2 _2263 = ivec2(floor(_1164));
            vec2 _2264 = fract(_1164);
            uvec2 _2265 = uvec2(_2263);
            uint _2315 = _2265.y;
            uint _2321 = _2315 + (_2315 << 10u);
            uint _2323 = _2321 ^ (_2321 >> 6u);
            uint _2325 = _2323 + (_2323 << 3u);
            uint _2327 = _2325 ^ (_2325 >> 11u);
            uint _2335 = (((_2265.x * 1664525u) + (_2327 + (_2327 << 15u))) + 1013904223u) * 1664525u;
            uint _2337 = _2335 ^ (_2335 >> 11u);
            uint _2340 = _2337 ^ ((_2337 << 7u) & 2636928640u);
            uint _2343 = _2340 ^ ((_2340 << 15u) & 4022730752u);
            uint _2345 = _2343 ^ (_2343 >> 18u);
            float _3613;
            _3613 = _3543;
            uint _2362;
            uint _2381;
            float _2387;
            uint _3612 = 0u;
            uint _3743 = _2345;
            for (;;)
            {
                if (!(_3612 < 1u))
                {
                    break;
                }
                uint _2373 = _3743 + (_3743 << 10u);
                uint _2375 = _2373 ^ (_2373 >> 6u);
                uint _2377 = _2375 + (_2375 << 3u);
                uint _2379 = _2377 ^ (_2377 >> 11u);
                _2381 = _2379 + (_2379 << 15u);
                _2387 = uintBitsToFloat((_3743 & 8388607u) | 1065353216u) - 1.0;
                _2362 = _3612 + 1u;
                _3743 = _2381;
                _3613 = _2387;
                _3612 = _2362;
                continue;
            }
            uvec2 _2273 = uvec2(_2263 + ivec2(1, 0));
            uint _2391 = _2273.y;
            uint _2397 = _2391 + (_2391 << 10u);
            uint _2399 = _2397 ^ (_2397 >> 6u);
            uint _2401 = _2399 + (_2399 << 3u);
            uint _2403 = _2401 ^ (_2401 >> 11u);
            uint _2411 = (((_2273.x * 1664525u) + (_2403 + (_2403 << 15u))) + 1013904223u) * 1664525u;
            uint _2413 = _2411 ^ (_2411 >> 11u);
            uint _2416 = _2413 ^ ((_2413 << 7u) & 2636928640u);
            uint _2419 = _2416 ^ ((_2416 << 15u) & 4022730752u);
            uint _2421 = _2419 ^ (_2419 >> 18u);
            float _3625;
            _3625 = _3543;
            uint _2438;
            uint _2457;
            float _2463;
            uint _3624 = 0u;
            uint _3742 = _2421;
            for (;;)
            {
                if (!(_3624 < 1u))
                {
                    break;
                }
                uint _2449 = _3742 + (_3742 << 10u);
                uint _2451 = _2449 ^ (_2449 >> 6u);
                uint _2453 = _2451 + (_2451 << 3u);
                uint _2455 = _2453 ^ (_2453 >> 11u);
                _2457 = _2455 + (_2455 << 15u);
                _2463 = uintBitsToFloat((_3742 & 8388607u) | 1065353216u) - 1.0;
                _2438 = _3624 + 1u;
                _3742 = _2457;
                _3625 = _2463;
                _3624 = _2438;
                continue;
            }
            uvec2 _2280 = uvec2(_2263 + ivec2(0, 1));
            uint _2467 = _2280.y;
            uint _2473 = _2467 + (_2467 << 10u);
            uint _2475 = _2473 ^ (_2473 >> 6u);
            uint _2477 = _2475 + (_2475 << 3u);
            uint _2479 = _2477 ^ (_2477 >> 11u);
            uint _2487 = (((_2280.x * 1664525u) + (_2479 + (_2479 << 15u))) + 1013904223u) * 1664525u;
            uint _2489 = _2487 ^ (_2487 >> 11u);
            uint _2492 = _2489 ^ ((_2489 << 7u) & 2636928640u);
            uint _2495 = _2492 ^ ((_2492 << 15u) & 4022730752u);
            uint _2497 = _2495 ^ (_2495 >> 18u);
            float _3638;
            _3638 = _3543;
            uint _2514;
            uint _2533;
            float _2539;
            uint _3637 = 0u;
            uint _3741 = _2497;
            for (;;)
            {
                if (!(_3637 < 1u))
                {
                    break;
                }
                uint _2525 = _3741 + (_3741 << 10u);
                uint _2527 = _2525 ^ (_2525 >> 6u);
                uint _2529 = _2527 + (_2527 << 3u);
                uint _2531 = _2529 ^ (_2529 >> 11u);
                _2533 = _2531 + (_2531 << 15u);
                _2539 = uintBitsToFloat((_3741 & 8388607u) | 1065353216u) - 1.0;
                _2514 = _3637 + 1u;
                _3741 = _2533;
                _3638 = _2539;
                _3637 = _2514;
                continue;
            }
            uvec2 _2288 = uvec2(_2263 + ivec2(1));
            uint _2543 = _2288.y;
            uint _2549 = _2543 + (_2543 << 10u);
            uint _2551 = _2549 ^ (_2549 >> 6u);
            uint _2553 = _2551 + (_2551 << 3u);
            uint _2555 = _2553 ^ (_2553 >> 11u);
            uint _2563 = (((_2288.x * 1664525u) + (_2555 + (_2555 << 15u))) + 1013904223u) * 1664525u;
            uint _2565 = _2563 ^ (_2563 >> 11u);
            uint _2568 = _2565 ^ ((_2565 << 7u) & 2636928640u);
            uint _2571 = _2568 ^ ((_2568 << 15u) & 4022730752u);
            uint _2573 = _2571 ^ (_2571 >> 18u);
            float _3652;
            _3652 = _3543;
            uint _2590;
            uint _2609;
            float _2615;
            uint _3651 = 0u;
            uint _3740 = _2573;
            for (;;)
            {
                if (!(_3651 < 1u))
                {
                    break;
                }
                uint _2601 = _3740 + (_3740 << 10u);
                uint _2603 = _2601 ^ (_2601 >> 6u);
                uint _2605 = _2603 + (_2603 << 3u);
                uint _2607 = _2605 ^ (_2605 >> 11u);
                _2609 = _2607 + (_2607 << 15u);
                _2615 = uintBitsToFloat((_3740 & 8388607u) | 1065353216u) - 1.0;
                _2590 = _3651 + 1u;
                _3740 = _2609;
                _3652 = _2615;
                _3651 = _2590;
                continue;
            }
            vec2 _2621 = (_2264 * _2264) * (vec2(3.0) - (vec2(2.0) * _2264));
            float _2296 = _2621.x;
            float _2297 = 1.0 - _2296;
            float _2299 = _2621.y;
            vec4 _1176 = mix(sampled_3, min(sampled_3, textureLod(sampler2D(font_atlas_tex, samplers_lnc), vs_out_uv + (vec2(0.008000000379979610443115234375, -0.008000000379979610443115234375) * (((((1.0 - _1553) * ((_3545 * _1551) + (_3549 * _1550))) + ((_3554 * _1551) * _1553)) + ((_3560 * _1550) * _1553)) - 0.5)), 0.0)), vec4(((((1.0 - _2299) * ((_3613 * _2297) + (_3625 * _2296))) + ((_3638 * _2297) * _2299)) + ((_3652 * _2296) * _2299)) + (-0.4799999892711639404296875)));
            vec2 _1179 = noise_uv * (-0.08247999846935272216796875);
            ivec2 _2638 = ivec2(floor(_1179));
            vec2 _2639 = fract(_1179);
            uvec2 _2640 = uvec2(_2638);
            uint _2690 = _2640.y;
            uint _2696 = _2690 + (_2690 << 10u);
            uint _2698 = _2696 ^ (_2696 >> 6u);
            uint _2700 = _2698 + (_2698 << 3u);
            uint _2702 = _2700 ^ (_2700 >> 11u);
            uint _2710 = (((_2640.x * 1664525u) + (_2702 + (_2702 << 15u))) + 1013904223u) * 1664525u;
            uint _2712 = _2710 ^ (_2710 >> 11u);
            uint _2715 = _2712 ^ ((_2712 << 7u) & 2636928640u);
            uint _2718 = _2715 ^ ((_2715 << 15u) & 4022730752u);
            uint _2720 = _2718 ^ (_2718 >> 18u);
            float _3667;
            _3667 = _3543;
            uint _2737;
            uint _2756;
            float _2762;
            uint _3666 = 0u;
            uint _3739 = _2720;
            for (;;)
            {
                if (!(_3666 < 1u))
                {
                    break;
                }
                uint _2748 = _3739 + (_3739 << 10u);
                uint _2750 = _2748 ^ (_2748 >> 6u);
                uint _2752 = _2750 + (_2750 << 3u);
                uint _2754 = _2752 ^ (_2752 >> 11u);
                _2756 = _2754 + (_2754 << 15u);
                _2762 = uintBitsToFloat((_3739 & 8388607u) | 1065353216u) - 1.0;
                _2737 = _3666 + 1u;
                _3739 = _2756;
                _3667 = _2762;
                _3666 = _2737;
                continue;
            }
            uvec2 _2648 = uvec2(_2638 + ivec2(1, 0));
            uint _2766 = _2648.y;
            uint _2772 = _2766 + (_2766 << 10u);
            uint _2774 = _2772 ^ (_2772 >> 6u);
            uint _2776 = _2774 + (_2774 << 3u);
            uint _2778 = _2776 ^ (_2776 >> 11u);
            uint _2786 = (((_2648.x * 1664525u) + (_2778 + (_2778 << 15u))) + 1013904223u) * 1664525u;
            uint _2788 = _2786 ^ (_2786 >> 11u);
            uint _2791 = _2788 ^ ((_2788 << 7u) & 2636928640u);
            uint _2794 = _2791 ^ ((_2791 << 15u) & 4022730752u);
            uint _2796 = _2794 ^ (_2794 >> 18u);
            float _3683;
            _3683 = _3543;
            uint _2813;
            uint _2832;
            float _2838;
            uint _3682 = 0u;
            uint _3738 = _2796;
            for (;;)
            {
                if (!(_3682 < 1u))
                {
                    break;
                }
                uint _2824 = _3738 + (_3738 << 10u);
                uint _2826 = _2824 ^ (_2824 >> 6u);
                uint _2828 = _2826 + (_2826 << 3u);
                uint _2830 = _2828 ^ (_2828 >> 11u);
                _2832 = _2830 + (_2830 << 15u);
                _2838 = uintBitsToFloat((_3738 & 8388607u) | 1065353216u) - 1.0;
                _2813 = _3682 + 1u;
                _3738 = _2832;
                _3683 = _2838;
                _3682 = _2813;
                continue;
            }
            uvec2 _2655 = uvec2(_2638 + ivec2(0, 1));
            uint _2842 = _2655.y;
            uint _2848 = _2842 + (_2842 << 10u);
            uint _2850 = _2848 ^ (_2848 >> 6u);
            uint _2852 = _2850 + (_2850 << 3u);
            uint _2854 = _2852 ^ (_2852 >> 11u);
            uint _2862 = (((_2655.x * 1664525u) + (_2854 + (_2854 << 15u))) + 1013904223u) * 1664525u;
            uint _2864 = _2862 ^ (_2862 >> 11u);
            uint _2867 = _2864 ^ ((_2864 << 7u) & 2636928640u);
            uint _2870 = _2867 ^ ((_2867 << 15u) & 4022730752u);
            uint _2872 = _2870 ^ (_2870 >> 18u);
            float _3700;
            _3700 = _3543;
            uint _2889;
            uint _2908;
            float _2914;
            uint _3699 = 0u;
            uint _3737 = _2872;
            for (;;)
            {
                if (!(_3699 < 1u))
                {
                    break;
                }
                uint _2900 = _3737 + (_3737 << 10u);
                uint _2902 = _2900 ^ (_2900 >> 6u);
                uint _2904 = _2902 + (_2902 << 3u);
                uint _2906 = _2904 ^ (_2904 >> 11u);
                _2908 = _2906 + (_2906 << 15u);
                _2914 = uintBitsToFloat((_3737 & 8388607u) | 1065353216u) - 1.0;
                _2889 = _3699 + 1u;
                _3737 = _2908;
                _3700 = _2914;
                _3699 = _2889;
                continue;
            }
            uvec2 _2663 = uvec2(_2638 + ivec2(1));
            uint _2918 = _2663.y;
            uint _2924 = _2918 + (_2918 << 10u);
            uint _2926 = _2924 ^ (_2924 >> 6u);
            uint _2928 = _2926 + (_2926 << 3u);
            uint _2930 = _2928 ^ (_2928 >> 11u);
            uint _2938 = (((_2663.x * 1664525u) + (_2930 + (_2930 << 15u))) + 1013904223u) * 1664525u;
            uint _2940 = _2938 ^ (_2938 >> 11u);
            uint _2943 = _2940 ^ ((_2940 << 7u) & 2636928640u);
            uint _2946 = _2943 ^ ((_2943 << 15u) & 4022730752u);
            uint _2948 = _2946 ^ (_2946 >> 18u);
            float _3718;
            _3718 = _3543;
            uint _2965;
            uint _2984;
            float _2990;
            uint _3717 = 0u;
            uint _3736 = _2948;
            for (;;)
            {
                if (!(_3717 < 1u))
                {
                    break;
                }
                uint _2976 = _3736 + (_3736 << 10u);
                uint _2978 = _2976 ^ (_2976 >> 6u);
                uint _2980 = _2978 + (_2978 << 3u);
                uint _2982 = _2980 ^ (_2980 >> 11u);
                _2984 = _2982 + (_2982 << 15u);
                _2990 = uintBitsToFloat((_3736 & 8388607u) | 1065353216u) - 1.0;
                _2965 = _3717 + 1u;
                _3736 = _2984;
                _3718 = _2990;
                _3717 = _2965;
                continue;
            }
            vec2 _2996 = (_2639 * _2639) * (vec2(3.0) - (vec2(2.0) * _2639));
            float _2671 = _2996.x;
            float _2672 = 1.0 - _2671;
            float _2674 = _2996.y;
            vec4 _1186 = mix(_1176, min(_1176, textureLod(sampler2D(font_atlas_tex, samplers_lnc), vs_out_uv + (vec2(0.0040000001899898052215576171875) * (((((1.0 - _1926) * ((_3567 * _1924) + (_3575 * _1923))) + ((_3584 * _1924) * _1926)) + ((_3594 * _1923) * _1926)) - 0.5)), 0.0)), vec4(((((1.0 - _2674) * ((_3667 * _2672) + (_3683 * _2671))) + ((_3700 * _2672) * _2674)) + ((_3718 * _2671) * _2674)) + (-0.4799999892711639404296875)));
            _1186.w = _1186.w * 0.9700000286102294921875;
            vec4 _3003 = clamp(_1186, vec4(0.0), vec4(1.0));
            vec3 _1207 = _3003.xyz * _3003.w;
            vec4 _3481 = _3003;
            _3481.x = _1207.x;
            _3481.y = _1207.y;
            _3481.z = _1207.z;
            vec4 _3758;
            if (all(equal(sampled_3.xyz, vec3(1.0))))
            {
                _3758 = vs_out_color_mult * _3481;
            }
            else
            {
                _3758 = _3481;
            }
            _3757 = _3758;
        }
        else
        {
            _3757 = vs_out_color_mult;
        }
        _3756 = _3757;
    }
    vec2 _1237 = max(vs_out_clip_px.xy - gl_FragCoord.xy, gl_FragCoord.xy - vs_out_clip_px.zw);
    vec4 _1244 = _3756 * clamp(0.5 - max(_1237.x, _1237.y), 0.0, 1.0);
    vec3 _3269 = mix(max(vec3(9.9999997473787516355514526367188e-06), textureLod(sampler2D(blur_pyramid_tex, samplers_lnc_iso), (vec2(ivec2(gl_FragCoord.xy)) + vec2(0.5)) / globalParams.window_size_pixels, max(0.0, log2(max(1.0, float(globalParams.blur_pyramid_tex_dims.y))) - 3.0)).xyz), frame_constants.sun_color.xyz * 0.180000007152557373046875, vec3(0.25));
    vec3 _3276 = _3269 / vec3(max(_3269.x, max(_3269.y, _3269.z)));
    float _3279 = _1244.x;
    float _3281 = _1244.y;
    float _3284 = _1244.z;
    float _3286 = ((0.4122214615345001220703125 * _3279) + (0.536332547664642333984375 * _3281)) + (0.0514459945261478424072265625 * _3284);
    float _3291 = ((0.21190349757671356201171875 * _3279) + (0.680699527263641357421875 * _3281)) + (0.10739696025848388671875 * _3284);
    float _3296 = ((0.0883024632930755615234375 * _3279) + (0.28171885013580322265625 * _3281)) + (0.629978716373443603515625 * _3284);
    float _3323 = float(int(sign(_3286))) * pow(abs(_3286), 0.3333333432674407958984375);
    float _3331 = float(int(sign(_3291))) * pow(abs(_3291), 0.3333333432674407958984375);
    float _3339 = float(int(sign(_3296))) * pow(abs(_3296), 0.3333333432674407958984375);
    float _3304 = ((0.2104542553424835205078125 * _3323) + (0.793617784976959228515625 * _3331)) - (0.004072046838700771331787109375 * _3339);
    float _3342 = _3276.x;
    float _3344 = _3276.y;
    float _3347 = _3276.z;
    float _3349 = ((0.4122214615345001220703125 * _3342) + (0.536332547664642333984375 * _3344)) + (0.0514459945261478424072265625 * _3347);
    float _3354 = ((0.21190349757671356201171875 * _3342) + (0.680699527263641357421875 * _3344)) + (0.10739696025848388671875 * _3347);
    float _3359 = ((0.0883024632930755615234375 * _3342) + (0.28171885013580322265625 * _3344)) + (0.629978716373443603515625 * _3347);
    float _3386 = float(int(sign(_3349))) * pow(abs(_3349), 0.3333333432674407958984375);
    float _3394 = float(int(sign(_3354))) * pow(abs(_3354), 0.3333333432674407958984375);
    float _3402 = float(int(sign(_3359))) * pow(abs(_3359), 0.3333333432674407958984375);
    float _3367 = ((0.2104542553424835205078125 * _3386) + (0.793617784976959228515625 * _3394)) - (0.004072046838700771331787109375 * _3402);
    vec2 _3216 = vec3(_3304, ((1.9779984951019287109375 * _3323) - (2.428592205047607421875 * _3331)) + (0.4505937099456787109375 * _3339), ((0.025904037058353424072265625 * _3323) + (0.782771766185760498046875 * _3331)) - (0.8086757659912109375 * _3339)).yz;
    vec2 _3228 = mix(_3216, (vec3(_3367, ((1.9779984951019287109375 * _3386) - (2.428592205047607421875 * _3394)) + (0.4505937099456787109375 * _3402), ((0.025904037058353424072265625 * _3386) + (0.782771766185760498046875 * _3394)) - (0.8086757659912109375 * _3402)).yz * _3304) / vec2(_3367), vec2(0.25));
    vec3 _3528;
    _3528.y = _3228.x;
    _3528.z = _3228.y;
    vec2 _3240 = _3528.yz * clamp(max(9.9999997473787516355514526367188e-06, length(_3216)) / length(_3528.yz), 1.0, 1.2000000476837158203125);
    float _3242 = _3240.x;
    float _3244 = _3240.y;
    float _3411 = (_3304 + (0.3963377773761749267578125 * _3242)) + (0.21580375730991363525390625 * _3244);
    float _3415 = (_3304 - (0.1055613458156585693359375 * _3242)) - (0.06385417282581329345703125 * _3244);
    float _3419 = (_3304 - (0.089484177529811859130859375 * _3242)) - (1.2914855480194091796875 * _3244);
    float _3421 = (_3411 * _3411) * _3411;
    float _3423 = (_3415 * _3415) * _3415;
    float _3425 = (_3419 * _3419) * _3419;
    _1244.x = ((4.076741695404052734375 * _3421) - (3.30771160125732421875 * _3423)) + (0.2309699356555938720703125 * _3425);
    _1244.y = (((-1.26843798160552978515625) * _3421) + (2.60975742340087890625 * _3423)) - (0.341319382190704345703125 * _3425);
    _1244.z = (((-0.0041960864327847957611083984375) * _3421) - (0.70341861248016357421875 * _3423)) + (1.7076146602630615234375 * _3425);
    entryPointParam_ps_main_color = _1244;
}

