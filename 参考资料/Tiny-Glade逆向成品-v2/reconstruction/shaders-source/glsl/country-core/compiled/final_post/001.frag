#version 460
#extension GL_EXT_nonuniform_qualifier : require
#extension GL_EXT_scalar_block_layout : require
#extension GL_KHR_shader_subgroup_vote : require
#extension GL_EXT_samplerless_texture_functions : require

struct Tex3D_natural
{
    uint bindless_handle;
};

const vec3 _4595[3] = vec3[](vec3(0.8631572723388671875, 0.063010029494762420654296875, 0.15896086394786834716796875), vec3(0.9911022186279296875, 0.6444797515869140625, 0.13286833465099334716796875), vec3(0.02028856240212917327880859375, 0.304987370967864990234375, 0.520995676517486572265625));
vec4 _4615;

layout(set = 0, binding = 0, scalar) uniform GlobalParams_natural
{
    uvec2 input_tex_dims;
    uvec2 blur_pyramid_tex_dims;
    Tex3D_natural grading_lut_tex;
    uvec2 framebuffer_dims;
    uint is_input_valid;
    uint use_icc;
    float sharpen_amount;
    uint upsampling_mode;
    Tex3D_natural tony_mc_mapface_lut;
    uint grading_flags;
    float grading_strength;
    float grading_contrast;
    float grading_saturation;
    float vignette_amount;
    float distortion_amount;
    float ca_amount;
    float gamma_shift;
} globalParams;

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

layout(set = 0, binding = 4, std430) readonly buffer StructuredBuffer
{
    float _member0[];
} shadow_mask_mean;

layout(set = 3, binding = 0, std140) uniform FrameCounter_natural
{
    uint index;
} frame_counter;

layout(set = 2, binding = 2) uniform sampler samplers_nnc;
layout(set = 0, binding = 1) uniform texture2D input_tex;
layout(set = 2, binding = 0) uniform sampler samplers_lnc;
layout(set = 2, binding = 3) uniform sampler samplers_llc;
layout(set = 0, binding = 2) uniform texture2D blur_pyramid_tex;
layout(set = 1, binding = 0) uniform texture3D resource_handles[];
layout(set = 6, binding = 0) uniform texture2D blue_noise_textures_uniform01;
layout(set = 0, binding = 3) uniform texture3D icc_lut;

layout(location = 0) out vec4 entryPointParam_ps_main_color;

void main()
{
    ivec2 _70 = ivec2(gl_FragCoord.xy);
    vec2 _79 = vec2(globalParams.framebuffer_dims);
    vec2 _1688 = (vec2(_70) + vec2(0.5)) / _79;
    vec3 _4494;
    if (globalParams.upsampling_mode == 0u)
    {
        _4494 = textureLod(sampler2D(input_tex, samplers_nnc), _1688, 0.0).xyz;
    }
    else
    {
        vec3 _4495;
        if (globalParams.upsampling_mode == 1u)
        {
            _4495 = textureLod(sampler2D(input_tex, samplers_lnc), _1688, 0.0).xyz;
        }
        else
        {
            vec3 _4496;
            if (globalParams.upsampling_mode == 2u)
            {
                vec2 _141 = vec2(globalParams.input_tex_dims);
                vec2 _1695 = _1688 * _141;
                vec2 _1698 = floor(_1695 - vec2(0.5));
                vec2 _1700 = _1698 + vec2(0.5);
                vec2 _1701 = _1695 - _1700;
                vec2 _1702 = _1701 * 0.5;
                vec2 _1708 = _1701 * (vec2(-0.5) + (_1701 * (vec2(1.0) - _1702)));
                vec2 _1709 = _1701 * _1701;
                vec2 _1710 = _1701 * 1.5;
                vec2 _1721 = _1701 * (vec2(0.5) + (_1701 * (vec2(2.0) - _1710)));
                vec2 _1724 = _1709 * (vec2(-0.5) + _1702);
                vec2 _1725 = (vec2(1.0) + (_1709 * (vec2(-2.5) + _1710))) + _1721;
                vec2 _1732 = (_1698 + vec2(-0.5)) / _141;
                vec2 _1733 = (_1698 + vec2(2.5)) / _141;
                vec2 _1734 = (_1700 + (_1721 / _1725)) / _141;
                float _1753 = _1734.x;
                float _1763 = _1725.x;
                float _1765 = _1763 * _1708.y;
                float _1788 = _1734.y;
                float _1798 = _1725.y;
                float _1799 = _1708.x * _1798;
                float _1812 = _1763 * _1798;
                float _1826 = _1724.x * _1798;
                float _1857 = _1763 * _1724.y;
                _4496 = max(vec3(0.0), (((((textureLod(sampler2D(input_tex, samplers_lnc), vec2(_1753, _1732.y), 0.0).xyz * vec3(_1765)) + (textureLod(sampler2D(input_tex, samplers_lnc), vec2(_1732.x, _1788), 0.0).xyz * vec3(_1799))) + (textureLod(sampler2D(input_tex, samplers_lnc), _1734, 0.0).xyz * vec3(_1812))) + (textureLod(sampler2D(input_tex, samplers_lnc), vec2(_1733.x, _1788), 0.0).xyz * vec3(_1826))) + (textureLod(sampler2D(input_tex, samplers_lnc), vec2(_1753, _1733.y), 0.0).xyz * vec3(_1857))) / vec3((((_1765 + _1799) + _1812) + _1826) + _1857));
            }
            else
            {
                vec3 _4497;
                if (globalParams.upsampling_mode == 3u)
                {
                    vec2 _400 = vec2(globalParams.input_tex_dims);
                    float _1922 = _400.x;
                    float _1923 = _79.x;
                    float _1925 = _400.y;
                    float _1926 = _79.y;
                    vec4 _1934 = vec4(_1922 / _1923, _1925 / _1926, ((0.5 * _1922) / _1923) - 0.5, ((0.5 * _1925) / _1926) - 0.5);
                    vec4 _1935 = _400.xyxy;
                    vec4 _1936 = vec4(1.0, 1.0, 1.0, -1.0) / _1935;
                    vec4 _1937 = vec4(-1.0, 2.0, 1.0, 2.0) / _1935;
                    vec2 _1949 = (vec2(uvec2(_70)) * _1934.xy) + _1934.zw;
                    vec2 _1950 = floor(_1949);
                    vec2 _1951 = _1949 - _1950;
                    vec2 _1955 = (_1950 * _1936.xy) + _1936.zw;
                    vec2 _1957 = _1955 + _1937.xy;
                    vec2 _1959 = _1955 + _1937.zw;
                    vec2 _1961 = _1955 + (vec4(0.0, 4.0, 0.0, 0.0) / _1935).xy;
                    vec4 _1963 = vec4(-0.5, 0.5, -0.5, 0.5) * _1936.xxyy;
                    vec2 _1964 = _1963.xw;
                    vec4 _1970 = textureLod(sampler2D(input_tex, samplers_lnc), _1955 + _1964, 0.0);
                    float _1978 = _1970.y + (0.5 * (_1970.x + _1970.z));
                    vec2 _1979 = _1963.yw;
                    vec4 _1985 = textureLod(sampler2D(input_tex, samplers_lnc), _1955 + _1979, 0.0);
                    float _1993 = _1985.y + (0.5 * (_1985.x + _1985.z));
                    vec4 _1999 = textureLod(sampler2D(input_tex, samplers_lnc), _1957 + _1964, 0.0);
                    float _2007 = _1999.y + (0.5 * (_1999.x + _1999.z));
                    vec4 _2013 = textureLod(sampler2D(input_tex, samplers_lnc), _1957 + _1979, 0.0);
                    vec3 _2015 = _2013.xyz;
                    float _2021 = _2013.y + (0.5 * (_2013.x + _2013.z));
                    vec2 _2022 = _1963.yz;
                    vec4 _2028 = textureLod(sampler2D(input_tex, samplers_lnc), _1957 + _2022, 0.0);
                    vec3 _2030 = _2028.xyz;
                    float _2036 = _2028.y + (0.5 * (_2028.x + _2028.z));
                    vec2 _2037 = _1963.xz;
                    vec4 _2043 = textureLod(sampler2D(input_tex, samplers_lnc), _1957 + _2037, 0.0);
                    float _2051 = _2043.y + (0.5 * (_2043.x + _2043.z));
                    vec4 _2057 = textureLod(sampler2D(input_tex, samplers_lnc), _1959 + _1964, 0.0);
                    vec3 _2059 = _2057.xyz;
                    float _2065 = _2057.y + (0.5 * (_2057.x + _2057.z));
                    vec4 _2071 = textureLod(sampler2D(input_tex, samplers_lnc), _1959 + _1979, 0.0);
                    float _2079 = _2071.y + (0.5 * (_2071.x + _2071.z));
                    vec4 _2085 = textureLod(sampler2D(input_tex, samplers_lnc), _1959 + _2022, 0.0);
                    float _2093 = _2085.y + (0.5 * (_2085.x + _2085.z));
                    vec4 _2099 = textureLod(sampler2D(input_tex, samplers_lnc), _1959 + _2037, 0.0);
                    vec3 _2101 = _2099.xyz;
                    float _2107 = _2099.y + (0.5 * (_2099.x + _2099.z));
                    vec4 _2113 = textureLod(sampler2D(input_tex, samplers_lnc), _1961 + _2022, 0.0);
                    float _2121 = _2113.y + (0.5 * (_2113.x + _2113.z));
                    vec4 _2127 = textureLod(sampler2D(input_tex, samplers_lnc), _1961 + _2037, 0.0);
                    float _2135 = _2127.y + (0.5 * (_2127.x + _2127.z));
                    float _2136 = _1951.x;
                    float _2137 = 1.0 - _2136;
                    float _2138 = _1951.y;
                    float _2139 = 1.0 - _2138;
                    float _2140 = _2137 * _2139;
                    float _2242 = abs(_2107 - _2036);
                    float _2246 = _2107 - _2051;
                    float _2253 = clamp(abs(_2246) / max(_2242, abs(_2036 - _2051)), 0.0, 1.0);
                    float _2259 = abs(_2021 - _2036);
                    float _2263 = _2021 - _1978;
                    float _2270 = clamp(abs(_2263) / max(_2259, abs(_2036 - _1978)), 0.0, 1.0);
                    float _2142 = _2136 * _2139;
                    float _2281 = _2093 - _2036;
                    float _2288 = clamp(abs(_2281) / max(abs(_2093 - _2107), _2242), 0.0, 1.0);
                    float _2294 = abs(_2065 - _2107);
                    float _2298 = _2065 - _1993;
                    float _2305 = clamp(abs(_2298) / max(_2294, abs(_2107 - _1993)), 0.0, 1.0);
                    float _2144 = _2137 * _2138;
                    float _2312 = abs(_2065 - _2021);
                    float _2316 = _2065 - _2007;
                    float _2323 = clamp(abs(_2316) / max(_2312, abs(_2021 - _2007)), 0.0, 1.0);
                    float _2333 = _2135 - _2036;
                    float _2340 = clamp(abs(_2333) / max(abs(_2135 - _2021), _2259), 0.0, 1.0);
                    float _2146 = _2136 * _2138;
                    float _2351 = _2079 - _2021;
                    float _2355 = (((_2246 * _2140) + (_2281 * _2142)) + (_2316 * _2144)) + (_2351 * _2146);
                    float _2358 = clamp(abs(_2351) / max(abs(_2079 - _2065), _2312), 0.0, 1.0);
                    float _2368 = _2121 - _2107;
                    vec2 _4605 = vec2(_2355, (((_2263 * _2140) + (_2298 * _2142)) + (_2333 * _2144)) + (_2368 * _2146));
                    float _2375 = clamp(abs(_2368) / max(abs(_2121 - _2065), _2294), 0.0, 1.0);
                    vec2 _2150 = _4605 * _4605;
                    float _2153 = _2150.x + _2150.y;
                    bool _2154 = _2153 < 3.0517578125e-05;
                    vec2 _4437 = _4605;
                    _4437.x = _2154 ? 1.0 : _2355;
                    vec2 _2169 = _4437 * vec2(_2154 ? 1.0 : inversesqrt(_2153));
                    float _2171 = (((((((_2140 * ((_2253 * _2253) + (_2270 * _2270))) + ((_2288 * _2288) * _2142)) + ((_2305 * _2305) * _2142)) + ((_2323 * _2323) * _2144)) + ((_2340 * _2340) * _2144)) + ((_2358 * _2358) * _2146)) + ((_2375 * _2375) * _2146)) * 0.5;
                    float _2172 = _2171 * _2171;
                    float _2174 = _2169.x;
                    float _2176 = _2169.y;
                    vec2 _2187 = vec2(1.0 + (((dot(_2169, _2169) / max(abs(_2174), abs(_2176))) - 1.0) * _2172), 1.0 - (0.5 * _2172));
                    float _2190 = 0.5 - (0.2899999916553497314453125 * _2172);
                    float _2191 = 1.0 / _2190;
                    vec2 _2198 = vec2(0.0, -1.0) - _1951;
                    vec2 _2385 = vec2(-_2176, _2174);
                    vec2 _2388 = vec2(dot(_2198, _2169), dot(_2198, _2385)) * _2187;
                    float _2390 = min(dot(_2388, _2388), _2191);
                    float _2392 = (0.4000000059604644775390625 * _2390) - 1.0;
                    float _2394 = (_2190 * _2390) - 1.0;
                    float _2399 = ((1.5625 * (_2392 * _2392)) - 0.5625) * (_2394 * _2394);
                    vec2 _2201 = vec2(1.0, -1.0) - _1951;
                    vec2 _2413 = vec2(dot(_2201, _2169), dot(_2201, _2385)) * _2187;
                    float _2415 = min(dot(_2413, _2413), _2191);
                    float _2417 = (0.4000000059604644775390625 * _2415) - 1.0;
                    float _2419 = (_2190 * _2415) - 1.0;
                    float _2424 = ((1.5625 * (_2417 * _2417)) - 0.5625) * (_2419 * _2419);
                    vec2 _2204 = vec2(-1.0, 1.0) - _1951;
                    vec2 _2438 = vec2(dot(_2204, _2169), dot(_2204, _2385)) * _2187;
                    float _2440 = min(dot(_2438, _2438), _2191);
                    float _2442 = (0.4000000059604644775390625 * _2440) - 1.0;
                    float _2444 = (_2190 * _2440) - 1.0;
                    float _2449 = ((1.5625 * (_2442 * _2442)) - 0.5625) * (_2444 * _2444);
                    vec2 _2207 = vec2(0.0, 1.0) - _1951;
                    vec2 _2463 = vec2(dot(_2207, _2169), dot(_2207, _2385)) * _2187;
                    float _2465 = min(dot(_2463, _2463), _2191);
                    float _2467 = (0.4000000059604644775390625 * _2465) - 1.0;
                    float _2469 = (_2190 * _2465) - 1.0;
                    float _2474 = ((1.5625 * (_2467 * _2467)) - 0.5625) * (_2469 * _2469);
                    vec2 _2210 = -_1951;
                    vec2 _2488 = vec2(dot(_2210, _2169), dot(_2210, _2385)) * _2187;
                    float _2490 = min(dot(_2488, _2488), _2191);
                    float _2492 = (0.4000000059604644775390625 * _2490) - 1.0;
                    float _2494 = (_2190 * _2490) - 1.0;
                    float _2499 = ((1.5625 * (_2492 * _2492)) - 0.5625) * (_2494 * _2494);
                    vec2 _2213 = vec2(-1.0, 0.0) - _1951;
                    vec2 _2513 = vec2(dot(_2213, _2169), dot(_2213, _2385)) * _2187;
                    float _2515 = min(dot(_2513, _2513), _2191);
                    float _2517 = (0.4000000059604644775390625 * _2515) - 1.0;
                    float _2519 = (_2190 * _2515) - 1.0;
                    float _2524 = ((1.5625 * (_2517 * _2517)) - 0.5625) * (_2519 * _2519);
                    vec2 _2216 = vec2(1.0) - _1951;
                    vec2 _2538 = vec2(dot(_2216, _2169), dot(_2216, _2385)) * _2187;
                    float _2540 = min(dot(_2538, _2538), _2191);
                    float _2542 = (0.4000000059604644775390625 * _2540) - 1.0;
                    float _2544 = (_2190 * _2540) - 1.0;
                    float _2549 = ((1.5625 * (_2542 * _2542)) - 0.5625) * (_2544 * _2544);
                    vec2 _2219 = vec2(2.0, 1.0) - _1951;
                    vec2 _2563 = vec2(dot(_2219, _2169), dot(_2219, _2385)) * _2187;
                    float _2565 = min(dot(_2563, _2563), _2191);
                    float _2567 = (0.4000000059604644775390625 * _2565) - 1.0;
                    float _2569 = (_2190 * _2565) - 1.0;
                    float _2574 = ((1.5625 * (_2567 * _2567)) - 0.5625) * (_2569 * _2569);
                    vec2 _2222 = vec2(2.0, 0.0) - _1951;
                    vec2 _2588 = vec2(dot(_2222, _2169), dot(_2222, _2385)) * _2187;
                    float _2590 = min(dot(_2588, _2588), _2191);
                    float _2592 = (0.4000000059604644775390625 * _2590) - 1.0;
                    float _2594 = (_2190 * _2590) - 1.0;
                    float _2599 = ((1.5625 * (_2592 * _2592)) - 0.5625) * (_2594 * _2594);
                    vec2 _2225 = vec2(1.0, 0.0) - _1951;
                    vec2 _2613 = vec2(dot(_2225, _2169), dot(_2225, _2385)) * _2187;
                    float _2615 = min(dot(_2613, _2613), _2191);
                    float _2617 = (0.4000000059604644775390625 * _2615) - 1.0;
                    float _2619 = (_2190 * _2615) - 1.0;
                    float _2624 = ((1.5625 * (_2617 * _2617)) - 0.5625) * (_2619 * _2619);
                    vec2 _2228 = vec2(1.0, 2.0) - _1951;
                    vec2 _2638 = vec2(dot(_2228, _2169), dot(_2228, _2385)) * _2187;
                    float _2640 = min(dot(_2638, _2638), _2191);
                    float _2642 = (0.4000000059604644775390625 * _2640) - 1.0;
                    float _2644 = (_2190 * _2640) - 1.0;
                    float _2649 = ((1.5625 * (_2642 * _2642)) - 0.5625) * (_2644 * _2644);
                    vec2 _2231 = vec2(0.0, 2.0) - _1951;
                    vec2 _2663 = vec2(dot(_2231, _2169), dot(_2231, _2385)) * _2187;
                    float _2665 = min(dot(_2663, _2663), _2191);
                    float _2667 = (0.4000000059604644775390625 * _2665) - 1.0;
                    float _2669 = (_2190 * _2665) - 1.0;
                    float _2674 = ((1.5625 * (_2667 * _2667)) - 0.5625) * (_2669 * _2669);
                    vec3 _2238 = max(min(min(_2030, _2101), min(_2015, _2059)), ((((((((((((_1970.xyz * _2399) + (_1985.xyz * _2424)) + (_1999.xyz * _2449)) + (_2015 * _2474)) + (_2030 * _2499)) + (_2043.xyz * _2524)) + (_2059 * _2549)) + (_2071.xyz * _2574)) + (_2085.xyz * _2599)) + (_2101 * _2624)) + (_2113.xyz * _2649)) + (_2127.xyz * _2674)) / vec3(((((((((((_2399 + _2424) + _2449) + _2474) + _2499) + _2524) + _2549) + _2574) + _2599) + _2624) + _2649) + _2674));
                    _4497 = min(max(max(_2030, _2101), max(_2015, _2059)), _2238);
                }
                else
                {
                    vec4 _908 = textureGather(sampler2D(input_tex, samplers_lnc), _1688, 1);
                    float _910 = _908.x;
                    float _911 = _908.y;
                    float _912 = _908.z;
                    float _913 = _908.w;
                    float _916 = min(min(_910, _911), min(_912, _913));
                    float _919 = max(max(_910, _911), max(_912, _913));
                    vec3 _4498;
                    if (subgroupAny((abs(_916 - _919) / max(9.9999996826552253889678874634872e-21, _916 + _919)) > 0.5))
                    {
                        vec2 _931 = vec2(globalParams.input_tex_dims);
                        float _2696 = _931.x;
                        float _2697 = _79.x;
                        float _2699 = _931.y;
                        float _2700 = _79.y;
                        vec4 _2708 = vec4(_2696 / _2697, _2699 / _2700, ((0.5 * _2696) / _2697) - 0.5, ((0.5 * _2699) / _2700) - 0.5);
                        vec4 _2709 = _931.xyxy;
                        vec4 _2710 = vec4(1.0, 1.0, 1.0, -1.0) / _2709;
                        vec4 _2711 = vec4(-1.0, 2.0, 1.0, 2.0) / _2709;
                        vec2 _2723 = (vec2(uvec2(_70)) * _2708.xy) + _2708.zw;
                        vec2 _2724 = floor(_2723);
                        vec2 _2725 = _2723 - _2724;
                        vec2 _2729 = (_2724 * _2710.xy) + _2710.zw;
                        vec2 _2731 = _2729 + _2711.xy;
                        vec2 _2733 = _2729 + _2711.zw;
                        vec2 _2735 = _2729 + (vec4(0.0, 4.0, 0.0, 0.0) / _2709).xy;
                        vec4 _2737 = vec4(-0.5, 0.5, -0.5, 0.5) * _2710.xxyy;
                        vec2 _2738 = _2737.xw;
                        vec4 _2744 = textureLod(sampler2D(input_tex, samplers_lnc), _2729 + _2738, 0.0);
                        float _2752 = _2744.y + (0.5 * (_2744.x + _2744.z));
                        vec2 _2753 = _2737.yw;
                        vec4 _2759 = textureLod(sampler2D(input_tex, samplers_lnc), _2729 + _2753, 0.0);
                        float _2767 = _2759.y + (0.5 * (_2759.x + _2759.z));
                        vec4 _2773 = textureLod(sampler2D(input_tex, samplers_lnc), _2731 + _2738, 0.0);
                        float _2781 = _2773.y + (0.5 * (_2773.x + _2773.z));
                        vec4 _2787 = textureLod(sampler2D(input_tex, samplers_lnc), _2731 + _2753, 0.0);
                        vec3 _2789 = _2787.xyz;
                        float _2795 = _2787.y + (0.5 * (_2787.x + _2787.z));
                        vec2 _2796 = _2737.yz;
                        vec4 _2802 = textureLod(sampler2D(input_tex, samplers_lnc), _2731 + _2796, 0.0);
                        vec3 _2804 = _2802.xyz;
                        float _2810 = _2802.y + (0.5 * (_2802.x + _2802.z));
                        vec2 _2811 = _2737.xz;
                        vec4 _2817 = textureLod(sampler2D(input_tex, samplers_lnc), _2731 + _2811, 0.0);
                        float _2825 = _2817.y + (0.5 * (_2817.x + _2817.z));
                        vec4 _2831 = textureLod(sampler2D(input_tex, samplers_lnc), _2733 + _2738, 0.0);
                        vec3 _2833 = _2831.xyz;
                        float _2839 = _2831.y + (0.5 * (_2831.x + _2831.z));
                        vec4 _2845 = textureLod(sampler2D(input_tex, samplers_lnc), _2733 + _2753, 0.0);
                        float _2853 = _2845.y + (0.5 * (_2845.x + _2845.z));
                        vec4 _2859 = textureLod(sampler2D(input_tex, samplers_lnc), _2733 + _2796, 0.0);
                        float _2867 = _2859.y + (0.5 * (_2859.x + _2859.z));
                        vec4 _2873 = textureLod(sampler2D(input_tex, samplers_lnc), _2733 + _2811, 0.0);
                        vec3 _2875 = _2873.xyz;
                        float _2881 = _2873.y + (0.5 * (_2873.x + _2873.z));
                        vec4 _2887 = textureLod(sampler2D(input_tex, samplers_lnc), _2735 + _2796, 0.0);
                        float _2895 = _2887.y + (0.5 * (_2887.x + _2887.z));
                        vec4 _2901 = textureLod(sampler2D(input_tex, samplers_lnc), _2735 + _2811, 0.0);
                        float _2909 = _2901.y + (0.5 * (_2901.x + _2901.z));
                        float _2910 = _2725.x;
                        float _2911 = 1.0 - _2910;
                        float _2912 = _2725.y;
                        float _2913 = 1.0 - _2912;
                        float _2914 = _2911 * _2913;
                        float _3016 = abs(_2881 - _2810);
                        float _3020 = _2881 - _2825;
                        float _3027 = clamp(abs(_3020) / max(_3016, abs(_2810 - _2825)), 0.0, 1.0);
                        float _3033 = abs(_2795 - _2810);
                        float _3037 = _2795 - _2752;
                        float _3044 = clamp(abs(_3037) / max(_3033, abs(_2810 - _2752)), 0.0, 1.0);
                        float _2916 = _2910 * _2913;
                        float _3055 = _2867 - _2810;
                        float _3062 = clamp(abs(_3055) / max(abs(_2867 - _2881), _3016), 0.0, 1.0);
                        float _3068 = abs(_2839 - _2881);
                        float _3072 = _2839 - _2767;
                        float _3079 = clamp(abs(_3072) / max(_3068, abs(_2881 - _2767)), 0.0, 1.0);
                        float _2918 = _2911 * _2912;
                        float _3086 = abs(_2839 - _2795);
                        float _3090 = _2839 - _2781;
                        float _3097 = clamp(abs(_3090) / max(_3086, abs(_2795 - _2781)), 0.0, 1.0);
                        float _3107 = _2909 - _2810;
                        float _3114 = clamp(abs(_3107) / max(abs(_2909 - _2795), _3033), 0.0, 1.0);
                        float _2920 = _2910 * _2912;
                        float _3125 = _2853 - _2795;
                        float _3129 = (((_3020 * _2914) + (_3055 * _2916)) + (_3090 * _2918)) + (_3125 * _2920);
                        float _3132 = clamp(abs(_3125) / max(abs(_2853 - _2839), _3086), 0.0, 1.0);
                        float _3142 = _2895 - _2881;
                        vec2 _4601 = vec2(_3129, (((_3037 * _2914) + (_3072 * _2916)) + (_3107 * _2918)) + (_3142 * _2920));
                        float _3149 = clamp(abs(_3142) / max(abs(_2895 - _2839), _3068), 0.0, 1.0);
                        vec2 _2924 = _4601 * _4601;
                        float _2927 = _2924.x + _2924.y;
                        bool _2928 = _2927 < 3.0517578125e-05;
                        vec2 _4463 = _4601;
                        _4463.x = _2928 ? 1.0 : _3129;
                        vec2 _2943 = _4463 * vec2(_2928 ? 1.0 : inversesqrt(_2927));
                        float _2945 = (((((((_2914 * ((_3027 * _3027) + (_3044 * _3044))) + ((_3062 * _3062) * _2916)) + ((_3079 * _3079) * _2916)) + ((_3097 * _3097) * _2918)) + ((_3114 * _3114) * _2918)) + ((_3132 * _3132) * _2920)) + ((_3149 * _3149) * _2920)) * 0.5;
                        float _2946 = _2945 * _2945;
                        float _2948 = _2943.x;
                        float _2950 = _2943.y;
                        vec2 _2961 = vec2(1.0 + (((dot(_2943, _2943) / max(abs(_2948), abs(_2950))) - 1.0) * _2946), 1.0 - (0.5 * _2946));
                        float _2964 = 0.5 - (0.2899999916553497314453125 * _2946);
                        float _2965 = 1.0 / _2964;
                        vec2 _2972 = vec2(0.0, -1.0) - _2725;
                        vec2 _3159 = vec2(-_2950, _2948);
                        vec2 _3162 = vec2(dot(_2972, _2943), dot(_2972, _3159)) * _2961;
                        float _3164 = min(dot(_3162, _3162), _2965);
                        float _3166 = (0.4000000059604644775390625 * _3164) - 1.0;
                        float _3168 = (_2964 * _3164) - 1.0;
                        float _3173 = ((1.5625 * (_3166 * _3166)) - 0.5625) * (_3168 * _3168);
                        vec2 _2975 = vec2(1.0, -1.0) - _2725;
                        vec2 _3187 = vec2(dot(_2975, _2943), dot(_2975, _3159)) * _2961;
                        float _3189 = min(dot(_3187, _3187), _2965);
                        float _3191 = (0.4000000059604644775390625 * _3189) - 1.0;
                        float _3193 = (_2964 * _3189) - 1.0;
                        float _3198 = ((1.5625 * (_3191 * _3191)) - 0.5625) * (_3193 * _3193);
                        vec2 _2978 = vec2(-1.0, 1.0) - _2725;
                        vec2 _3212 = vec2(dot(_2978, _2943), dot(_2978, _3159)) * _2961;
                        float _3214 = min(dot(_3212, _3212), _2965);
                        float _3216 = (0.4000000059604644775390625 * _3214) - 1.0;
                        float _3218 = (_2964 * _3214) - 1.0;
                        float _3223 = ((1.5625 * (_3216 * _3216)) - 0.5625) * (_3218 * _3218);
                        vec2 _2981 = vec2(0.0, 1.0) - _2725;
                        vec2 _3237 = vec2(dot(_2981, _2943), dot(_2981, _3159)) * _2961;
                        float _3239 = min(dot(_3237, _3237), _2965);
                        float _3241 = (0.4000000059604644775390625 * _3239) - 1.0;
                        float _3243 = (_2964 * _3239) - 1.0;
                        float _3248 = ((1.5625 * (_3241 * _3241)) - 0.5625) * (_3243 * _3243);
                        vec2 _2984 = -_2725;
                        vec2 _3262 = vec2(dot(_2984, _2943), dot(_2984, _3159)) * _2961;
                        float _3264 = min(dot(_3262, _3262), _2965);
                        float _3266 = (0.4000000059604644775390625 * _3264) - 1.0;
                        float _3268 = (_2964 * _3264) - 1.0;
                        float _3273 = ((1.5625 * (_3266 * _3266)) - 0.5625) * (_3268 * _3268);
                        vec2 _2987 = vec2(-1.0, 0.0) - _2725;
                        vec2 _3287 = vec2(dot(_2987, _2943), dot(_2987, _3159)) * _2961;
                        float _3289 = min(dot(_3287, _3287), _2965);
                        float _3291 = (0.4000000059604644775390625 * _3289) - 1.0;
                        float _3293 = (_2964 * _3289) - 1.0;
                        float _3298 = ((1.5625 * (_3291 * _3291)) - 0.5625) * (_3293 * _3293);
                        vec2 _2990 = vec2(1.0) - _2725;
                        vec2 _3312 = vec2(dot(_2990, _2943), dot(_2990, _3159)) * _2961;
                        float _3314 = min(dot(_3312, _3312), _2965);
                        float _3316 = (0.4000000059604644775390625 * _3314) - 1.0;
                        float _3318 = (_2964 * _3314) - 1.0;
                        float _3323 = ((1.5625 * (_3316 * _3316)) - 0.5625) * (_3318 * _3318);
                        vec2 _2993 = vec2(2.0, 1.0) - _2725;
                        vec2 _3337 = vec2(dot(_2993, _2943), dot(_2993, _3159)) * _2961;
                        float _3339 = min(dot(_3337, _3337), _2965);
                        float _3341 = (0.4000000059604644775390625 * _3339) - 1.0;
                        float _3343 = (_2964 * _3339) - 1.0;
                        float _3348 = ((1.5625 * (_3341 * _3341)) - 0.5625) * (_3343 * _3343);
                        vec2 _2996 = vec2(2.0, 0.0) - _2725;
                        vec2 _3362 = vec2(dot(_2996, _2943), dot(_2996, _3159)) * _2961;
                        float _3364 = min(dot(_3362, _3362), _2965);
                        float _3366 = (0.4000000059604644775390625 * _3364) - 1.0;
                        float _3368 = (_2964 * _3364) - 1.0;
                        float _3373 = ((1.5625 * (_3366 * _3366)) - 0.5625) * (_3368 * _3368);
                        vec2 _2999 = vec2(1.0, 0.0) - _2725;
                        vec2 _3387 = vec2(dot(_2999, _2943), dot(_2999, _3159)) * _2961;
                        float _3389 = min(dot(_3387, _3387), _2965);
                        float _3391 = (0.4000000059604644775390625 * _3389) - 1.0;
                        float _3393 = (_2964 * _3389) - 1.0;
                        float _3398 = ((1.5625 * (_3391 * _3391)) - 0.5625) * (_3393 * _3393);
                        vec2 _3002 = vec2(1.0, 2.0) - _2725;
                        vec2 _3412 = vec2(dot(_3002, _2943), dot(_3002, _3159)) * _2961;
                        float _3414 = min(dot(_3412, _3412), _2965);
                        float _3416 = (0.4000000059604644775390625 * _3414) - 1.0;
                        float _3418 = (_2964 * _3414) - 1.0;
                        float _3423 = ((1.5625 * (_3416 * _3416)) - 0.5625) * (_3418 * _3418);
                        vec2 _3005 = vec2(0.0, 2.0) - _2725;
                        vec2 _3437 = vec2(dot(_3005, _2943), dot(_3005, _3159)) * _2961;
                        float _3439 = min(dot(_3437, _3437), _2965);
                        float _3441 = (0.4000000059604644775390625 * _3439) - 1.0;
                        float _3443 = (_2964 * _3439) - 1.0;
                        float _3448 = ((1.5625 * (_3441 * _3441)) - 0.5625) * (_3443 * _3443);
                        vec3 _3012 = max(min(min(_2804, _2875), min(_2789, _2833)), ((((((((((((_2744.xyz * _3173) + (_2759.xyz * _3198)) + (_2773.xyz * _3223)) + (_2789 * _3248)) + (_2804 * _3273)) + (_2817.xyz * _3298)) + (_2833 * _3323)) + (_2845.xyz * _3348)) + (_2859.xyz * _3373)) + (_2875 * _3398)) + (_2887.xyz * _3423)) + (_2901.xyz * _3448)) / vec3(((((((((((_3173 + _3198) + _3223) + _3248) + _3273) + _3298) + _3323) + _3348) + _3373) + _3398) + _3423) + _3448));
                        _4498 = min(max(max(_2804, _2875), max(_2789, _2833)), _3012);
                    }
                    else
                    {
                        vec2 _940 = vec2(globalParams.input_tex_dims);
                        vec2 _3460 = _1688 * _940;
                        vec2 _3463 = floor(_3460 - vec2(0.5));
                        vec2 _3465 = _3463 + vec2(0.5);
                        vec2 _3466 = _3460 - _3465;
                        vec2 _3467 = _3466 * 0.5;
                        vec2 _3473 = _3466 * (vec2(-0.5) + (_3466 * (vec2(1.0) - _3467)));
                        vec2 _3474 = _3466 * _3466;
                        vec2 _3475 = _3466 * 1.5;
                        vec2 _3486 = _3466 * (vec2(0.5) + (_3466 * (vec2(2.0) - _3475)));
                        vec2 _3489 = _3474 * (vec2(-0.5) + _3467);
                        vec2 _3490 = (vec2(1.0) + (_3474 * (vec2(-2.5) + _3475))) + _3486;
                        vec2 _3497 = (_3463 + vec2(-0.5)) / _940;
                        vec2 _3498 = (_3463 + vec2(2.5)) / _940;
                        vec2 _3499 = (_3465 + (_3486 / _3490)) / _940;
                        float _3518 = _3499.x;
                        float _3528 = _3490.x;
                        float _3530 = _3528 * _3473.y;
                        float _3553 = _3499.y;
                        float _3563 = _3490.y;
                        float _3564 = _3473.x * _3563;
                        float _3577 = _3528 * _3563;
                        float _3591 = _3489.x * _3563;
                        float _3622 = _3528 * _3489.y;
                        _4498 = max(vec3(0.0), (((((textureLod(sampler2D(input_tex, samplers_lnc), vec2(_3518, _3497.y), 0.0).xyz * vec3(_3530)) + (textureLod(sampler2D(input_tex, samplers_lnc), vec2(_3497.x, _3553), 0.0).xyz * vec3(_3564))) + (textureLod(sampler2D(input_tex, samplers_lnc), _3499, 0.0).xyz * vec3(_3577))) + (textureLod(sampler2D(input_tex, samplers_lnc), vec2(_3498.x, _3553), 0.0).xyz * vec3(_3591))) + (textureLod(sampler2D(input_tex, samplers_lnc), vec2(_3518, _3498.y), 0.0).xyz * vec3(_3622))) / vec3((((_3530 + _3564) + _3577) + _3591) + _3622));
                    }
                    _4497 = _4498;
                }
                _4496 = _4497;
            }
            _4495 = _4496;
        }
        _4494 = _4495;
    }
    vec2 _954 = vec2(globalParams.blur_pyramid_tex_dims);
    float _957 = max(_954.x, _954.y);
    vec3 neg = (textureLod(sampler2D(blur_pyramid_tex, samplers_lnc), _1688, log2(0.0500000007450580596923828125 * _957)).xyz * 0.119999997317790985107421875) * 0.25;
    float _1020 = max(0.0, globalParams.distortion_amount);
    vec3 _4499;
    if (_1020 > 0.0)
    {
        float _1028 = _1020 * (1.0 + globalParams.ca_amount);
        vec2 _3693 = vec2(current_view.view_to_clip[1].y / current_view.view_to_clip[0].x, 1.0);
        vec2 _3694 = (vec4((_1688 - vec2(0.5)) * vec2(2.0, -2.0), 0.0, 1.0) * current_view.clip_to_view).xy / _3693;
        float _3695 = _3694.x;
        float _3697 = _3694.y;
        float _3699 = (_3695 * _3695) + (_3697 * _3697);
        vec2 _3727 = (vec4(vec2(1.0), 0.0, 1.0) * current_view.clip_to_view).xy / _3693;
        float _3728 = _3727.x;
        float _3730 = _3727.y;
        float _3732 = (_3728 * _3728) + (_3730 * _3730);
        float _1127 = _1020 * (1.0 - globalParams.ca_amount);
        _4499 = vec3(textureLod(sampler2D(input_tex, samplers_lnc), (((vec4((_3694 + (_3694 * (_1028 * _3699))) * _3693, 0.0, 1.0) * current_view.view_to_clip).xy / (vec4((_3727 + (_3727 * (_1028 * _3732))) * _3693, 0.0, 1.0) * current_view.view_to_clip).xy) * vec2(0.5, -0.5)) + vec2(0.5), 0.0).x, textureLod(sampler2D(input_tex, samplers_lnc), (((vec4((_3694 + (_3694 * (_1020 * _3699))) * _3693, 0.0, 1.0) * current_view.view_to_clip).xy / (vec4((_3727 + (_3727 * (_1020 * _3732))) * _3693, 0.0, 1.0) * current_view.view_to_clip).xy) * vec2(0.5, -0.5)) + vec2(0.5), 0.0).y, textureLod(sampler2D(input_tex, samplers_lnc), (((vec4((_3694 + (_3694 * (_1127 * _3699))) * _3693, 0.0, 1.0) * current_view.view_to_clip).xy / (vec4((_3727 + (_3727 * (_1127 * _3732))) * _3693, 0.0, 1.0) * current_view.view_to_clip).xy) * vec2(0.5, -0.5)) + vec2(0.5), 0.0).z);
    }
    else
    {
        _4499 = max(((_4494 + (textureLod(sampler2D(blur_pyramid_tex, samplers_llc), _1688, log2(0.001000000047497451305389404296875 * _957)).xyz * 0.119999997317790985107421875)) * vec3(0.917431175708770751953125)) - mix(neg, vec3(dot(neg, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875))), vec3(0.5)), vec3(0.0));
    }
    vec2 _1159 = _1688 - vec2(0.5);
    float _1161 = 3.5 * dot(_1159, _1159);
    vec3 _1183 = pow(max(vec3(0.0), (_4499 * mix(1.0, 0.569999992847442626953125, smoothstep(0.300000011920928955078125, 1.0, clamp(shadow_mask_mean._member0[0], 0.0, 1.0)))) * exp((-globalParams.vignette_amount) * (_1161 * _1161))), vec3(max(0.0, 1.10000002384185791015625 + globalParams.gamma_shift))) * 1.60000002384185791015625;
    vec3 _4624 = mix(max(vec3(0.0), textureLod(nonuniformEXT(sampler3D(resource_handles[globalParams.tony_mc_mapface_lut.bindless_handle], samplers_lnc)), ((_1183 / (_1183 + vec3(1.0))) * 0.979166686534881591796875) + vec3(0.010416666977107524871826171875), 0.0).xyz), vec3(0.180000007152557373046875), bvec3(uint(!(globalParams.is_input_valid != 0u)) != 0u));
    vec3 _3944 = clamp(mix(vec3(dot(_4624, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875))), _4624, vec3(globalParams.grading_saturation)), vec3(0.0), vec3(1.0));
    float _3947 = dot(_3944, vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875));
    vec3 _1259 = _3944 * (pow(_3947, globalParams.grading_contrast) / max(9.9999997473787516355514526367188e-06, _3947));
    vec3 _4512;
    if ((1u & globalParams.grading_flags) != 0u)
    {
        vec3 _4513;
        if ((2u & globalParams.grading_flags) != 0u)
        {
            int _3952 = _70.x;
            bool _4507;
            if (_3952 < 256)
            {
                _4507 = _70.y < 16;
            }
            else
            {
                _4507 = false;
            }
            vec3 _4511;
            if (_4507)
            {
                vec3 _3968 = vec3(ivec3(_3952 - 16 * (_3952 / 16), _3952 / 16, 15 - (_70.y - 16 * (_70.y / 16)))) * vec3(0.066666670143604278564453125);
                float _3975 = _3968.x;
                float _4508;
                if (0.040449999272823333740234375 < _3975)
                {
                    _4508 = pow((_3975 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
                }
                else
                {
                    _4508 = _3975 * 0.077399380505084991455078125;
                }
                float _3977 = _3968.y;
                float _4509;
                if (0.040449999272823333740234375 < _3977)
                {
                    _4509 = pow((_3977 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
                }
                else
                {
                    _4509 = _3977 * 0.077399380505084991455078125;
                }
                float _3979 = _3968.z;
                float _4510;
                if (0.040449999272823333740234375 < _3979)
                {
                    _4510 = pow((_3979 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
                }
                else
                {
                    _4510 = _3979 * 0.077399380505084991455078125;
                }
                _4511 = vec3(_4508, _4509, _4510);
            }
            else
            {
                _4511 = _1259;
            }
            _4513 = _4511;
        }
        else
        {
            _4513 = _1259;
        }
        _4512 = _4513;
    }
    else
    {
        uvec3 vecSize = uvec3(textureSize(resource_handles[nonuniformEXT(globalParams.grading_lut_tex.bindless_handle)], 0));
        uint _width = vecSize.x;
        float _4024 = _1259.x;
        float _4501;
        if (0.003130800090730190277099609375 >= _4024)
        {
            _4501 = 12.9200000762939453125 * _4024;
        }
        else
        {
            _4501 = (1.05499994754791259765625 * pow(_4024, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
        }
        float _4026 = _1259.y;
        float _4502;
        if (0.003130800090730190277099609375 >= _4026)
        {
            _4502 = 12.9200000762939453125 * _4026;
        }
        else
        {
            _4502 = (1.05499994754791259765625 * pow(_4026, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
        }
        float _4028 = _1259.z;
        float _4503;
        if (0.003130800090730190277099609375 >= _4028)
        {
            _4503 = 12.9200000762939453125 * _4028;
        }
        else
        {
            _4503 = (1.05499994754791259765625 * pow(_4028, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
        }
        vec3 _4075 = vec3(float(_width));
        vec4 _4084 = textureLod(nonuniformEXT(sampler3D(resource_handles[globalParams.grading_lut_tex.bindless_handle], samplers_lnc)), (vec3(_4501, _4502, _4503).xyz * (vec3(float(_width - 1u)) / _4075)) + (vec3(0.5) / _4075), 0.0);
        float _4091 = _4084.x;
        float _4504;
        if (0.040449999272823333740234375 < _4091)
        {
            _4504 = pow((_4091 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        else
        {
            _4504 = _4091 * 0.077399380505084991455078125;
        }
        float _4093 = _4084.y;
        float _4505;
        if (0.040449999272823333740234375 < _4093)
        {
            _4505 = pow((_4093 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        else
        {
            _4505 = _4093 * 0.077399380505084991455078125;
        }
        float _4095 = _4084.z;
        float _4506;
        if (0.040449999272823333740234375 < _4095)
        {
            _4506 = pow((_4095 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        else
        {
            _4506 = _4095 * 0.077399380505084991455078125;
        }
        _4512 = mix(_1259, vec3(_4504, _4505, _4506), vec3(globalParams.grading_strength));
    }
    float _4137 = (texelFetch(blue_noise_textures_uniform01, ivec2(uvec2((_70 + ivec2(int(frame_counter.index * 59u), int(frame_counter.index * 37u))) & ivec2(255))), 0).x * 2.0) - 1.0;
    vec3 _4152 = clamp(_4512 + (clamp(_4512 * 512.0, vec3(0.0), vec3(1.0)) * ((max(-1.0, _4137 * inversesqrt(1.1754943508222875079687365372222e-38 + abs(_4137))) - float(int(sign(_4137)))) * 0.0039215688593685626983642578125)), vec3(0.0), vec3(1.0));
    vec3 _4536;
    if (globalParams.use_icc != 0u)
    {
        ivec2 _1542 = ivec2(uvec2(ivec2(_70.x, int((globalParams.framebuffer_dims.y - 1u) - uint(_70.y)))) - uvec2(24u, 18u));
        bool _4514;
        if (all(greaterThanEqual(_1542, ivec2(0))))
        {
            _4514 = uint(_1542.x) < 88u;
        }
        else
        {
            _4514 = false;
        }
        bool _4515;
        if (_4514)
        {
            _4515 = uint(_1542.y) < 24u;
        }
        else
        {
            _4515 = false;
        }
        vec3 _4525;
        if (_4515)
        {
            uint _1568 = uint(_1542.x);
            int boxmod = int(_1568 % 32u);
            vec3 _4528;
            if (uint(boxmod) < 24u)
            {
                int c = int(_1568 / 32u);
                vec3 _4529;
                if (any(equal(ivec2(boxmod, _1542.y), ivec2(0))))
                {
                    _4529 = _4595[c] * (0.4199999868869781494140625 / max(_4595[c].x, max(_4595[c].y, _4595[c].z)));
                }
                else
                {
                    _4529 = _4595[c];
                }
                _4528 = _4529;
            }
            else
            {
                _4528 = _4152;
            }
            _4525 = _4528;
        }
        else
        {
            _4525 = _4152;
        }
        float _4530;
        if (0.003130800090730190277099609375 >= _4525.x)
        {
            _4530 = 12.9200000762939453125 * _4525.x;
        }
        else
        {
            _4530 = (1.05499994754791259765625 * pow(_4525.x, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
        }
        float _4531;
        if (0.003130800090730190277099609375 >= _4525.y)
        {
            _4531 = 12.9200000762939453125 * _4525.y;
        }
        else
        {
            _4531 = (1.05499994754791259765625 * pow(_4525.y, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
        }
        float _4532;
        if (0.003130800090730190277099609375 >= _4525.z)
        {
            _4532 = 12.9200000762939453125 * _4525.z;
        }
        else
        {
            _4532 = (1.05499994754791259765625 * pow(_4525.z, 0.4166666567325592041015625)) - 0.054999999701976776123046875;
        }
        vec4 _4353 = textureLod(sampler3D(icc_lut, samplers_lnc), (vec3(_4530, _4531, _4532).xyz * vec3(0.96875)) + vec3(0.015625), 0.0);
        float _4360 = _4353.x;
        float _4533;
        if (0.040449999272823333740234375 < _4360)
        {
            _4533 = pow((_4360 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        else
        {
            _4533 = _4360 * 0.077399380505084991455078125;
        }
        float _4362 = _4353.y;
        float _4534;
        if (0.040449999272823333740234375 < _4362)
        {
            _4534 = pow((_4362 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        else
        {
            _4534 = _4362 * 0.077399380505084991455078125;
        }
        float _4364 = _4353.z;
        float _4535;
        if (0.040449999272823333740234375 < _4364)
        {
            _4535 = pow((_4364 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        else
        {
            _4535 = _4364 * 0.077399380505084991455078125;
        }
        _4536 = vec3(_4533, _4534, _4535);
    }
    else
    {
        _4536 = _4152;
    }
    entryPointParam_ps_main_color = vec4(_4536, 1.0);
}

