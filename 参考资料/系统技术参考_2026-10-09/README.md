# 系统技术参考：固定版本源码阅读包

本包补充上一份城市生成研究，覆盖新稿的连续世界、排水、几何、社区、音频调度、渲染与存档。

收录 **15 个仓库、78 份文件、1,414,277 字节原始源码/说明/许可证**。所有文件固定到实际提交；Godot固定为已安装4.7.2-stable的同一提交。

源码在 `固定版本源码.zip`；`SOURCE_INDEX.json` 记录提交、原始URL、SHA256、许可证；`阅读入口.json` 指向已核对的函数与行号。仅为阅读包，不能独立编译，第三方依赖没有完整收录。

## 仓库与用途

| 仓库 | 固定提交 | 许可证快照 | 用途 |
|---|---|---|---|
| [AngusJohnson/Clipper2](https://github.com/AngusJohnson/Clipper2/tree/f9c5eb6e14a59f6f5d65fbfb3564519a561cf4fd) | `f9c5eb6e14a5` | Boost-1.0 | 路宽/岸线偏移，多边形布尔 |
| [colour-science/colour](https://github.com/colour-science/colour/tree/248121e33fcae458e62190ac872f3e16ab2044bf) | `248121e33fca` | BSD-3-Clause | sRGB线性化与OKLab变换 |
| [godotengine/godot](https://github.com/godotengine/godot/tree/ed1daf0bf001b61586d9930840f2f1394092c079) | `ed1daf0bf001` | MIT | 当前引擎真实API与实现 |
| [godotengine/godot-demo-projects](https://github.com/godotengine/godot-demo-projects/tree/b761b4cd5718a7118f2c95eb55f181d0a5f004f1) | `b761b4cd5718` | MIT | 实时PCM供音范式 |
| [jarikomppa/soloud](https://github.com/jarikomppa/soloud/tree/e82fd32c1f62183922f08c14c814a02b58db1873) | `e82fd32c1f62` | 核心 zlib/liberal；详见完整 LICENSE | 实际活跃声部预算与虚拟化边界 |
| [jiixyj/libebur128](https://github.com/jiixyj/libebur128/tree/67b33abe1558160ed76ada1322329b0e9e058b02) | `67b33abe1558` | MIT | 响度门限与真峰值单位 |
| [juce-framework/JUCE](https://github.com/juce-framework/JUCE/tree/be29c81492b6151c8ea8d14c840e1311963b3a83) | `be29c81492b6` | AGPLv3 / 商业双许可 | 事件分块与逐样本平滑 |
| [mapbox/earcut](https://github.com/mapbox/earcut/tree/20a6fae724a58dd78b637ab8477fa20a227c954e) | `20a6fae724a5` | ISC | 带孔地形三角化与面积偏差 |
| [mapbox/polylabel](https://github.com/mapbox/polylabel/tree/1d9039fc0131c985b08c12ccd9e5bb20e6aaa200) | `1d9039fc0131` | ISC | 凹多边形、带孔区域的标签/候选落点 |
| [mourner/rbush](https://github.com/mourner/rbush/tree/e59712716a84dda2e31f9b471b32faa178d8056f) | `e59712716a84` | MIT | 动态AABB索引 |
| [networkx/networkx](https://github.com/networkx/networkx/tree/6da4704cbf32ba6f50f6d9c46cc0a071e3a87985) | `6da4704cbf32` | BSD-3-Clause | 连通与割点算法 |
| [r-barnes/richdem](https://github.com/r-barnes/richdem/tree/9a1c97bb2529e386451a7dd54768b8b74bb4d620) | `9a1c97bb2529` | GPLv3 | 填洼、湖盆溢流结构 |
| [redblobgames/mapgen4](https://github.com/redblobgames/mapgen4/tree/c1d8cb018a11a8b9e17d59233c36c176429d37eb) | `c1d8cb018a11` | Apache-2.0 | 排水顺序与流量累积 |
| [sgossner/VCSL](https://github.com/sgossner/VCSL/tree/c1ea7bcc3c7309650ab0da9d15c9cd1fbc4a4c7e) | `c1ea7bcc3c73` | CC0-1.0（素材说明与许可；未下载音频） | 真实采样来源、格式与许可 |
| [tonaljs/tonal](https://github.com/tonaljs/tonal/tree/a1b98c3cb04c7244250ec1de72d155582e96acf8) | `a1b98c3cb04c` | MIT | 音阶级数、负级数与候选约束 |

## 已读源码入口

- [flood · r-barnes/richdem · void PriorityFlood_Barnes2014](https://github.com/r-barnes/richdem/blob/9a1c97bb2529e386451a7dd54768b8b74bb4d620/include/richdem/depressions/Barnes2014.hpp#L230)
- [basin · r-barnes/richdem · struct Depression](https://github.com/r-barnes/richdem/blob/9a1c97bb2529e386451a7dd54768b8b74bb4d620/include/richdem/depressions/depression_hierarchy.hpp#L48)
- [flow · redblobgames/mapgen4 · function assignFlow](https://github.com/redblobgames/mapgen4/blob/c1d8cb018a11a8b9e17d59233c36c176429d37eb/map.ts#L363)
- [downslope · redblobgames/mapgen4 · function assignDownslope](https://github.com/redblobgames/mapgen4/blob/c1d8cb018a11a8b9e17d59233c36c176429d37eb/map.ts#L309)
- [rbush · mourner/rbush · search(bbox)](https://github.com/mourner/rbush/blob/e59712716a84dda2e31f9b471b32faa178d8056f/index.js#L15)
- [connected · networkx/networkx · def _plain_bfs](https://github.com/networkx/networkx/blob/6da4704cbf32ba6f50f6d9c46cc0a071e3a87985/networkx/algorithms/components/connected.py#L265)
- [articulation · networkx/networkx · def _biconnected_dfs](https://github.com/networkx/networkx/blob/6da4704cbf32ba6f50f6d9c46cc0a071e3a87985/networkx/algorithms/components/biconnected.py#L338)
- [voices · jarikomppa/soloud · void Soloud::calcActiveVoices_internal](https://github.com/jarikomppa/soloud/blob/e82fd32c1f62183922f08c14c814a02b58db1873/src/core/soloud.cpp#L1966)
- [voicegroup · jarikomppa/soloud · result Soloud::addVoiceToGroup](https://github.com/jarikomppa/soloud/blob/e82fd32c1f62183922f08c14c814a02b58db1873/src/core/soloud_core_voicegroup.cpp#L112)
- [events · juce-framework/JUCE · void Synthesiser::processNextBlock](https://github.com/juce-framework/JUCE/blob/be29c81492b6151c8ea8d14c840e1311963b3a83/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp#L180)
- [smooth · juce-framework/JUCE · FloatType getNextValue()](https://github.com/juce-framework/JUCE/blob/be29c81492b6151c8ea8d14c840e1311963b3a83/modules/juce_audio_basics/utilities/juce_SmoothedValue.h#L312)
- [clipper · AngusJohnson/Clipper2 · inline Paths64 InflatePaths](https://github.com/AngusJohnson/Clipper2/blob/f9c5eb6e14a59f6f5d65fbfb3564519a561cf4fd/CPP/Clipper2Lib/include/clipper2/clipper.h#L133)
- [geometry · godotengine/godot · Geometry2D::_polypaths_do_operation](https://github.com/godotengine/godot/blob/ed1daf0bf001b61586d9930840f2f1394092c079/core/math/geometry_2d.cpp#L250)
- [pcm · godotengine/godot · bool AudioStreamGeneratorPlayback::push_buffer](https://github.com/godotengine/godot/blob/ed1daf0bf001b61586d9930840f2f1394092c079/servers/audio/effects/audio_stream_generator.cpp#L130)
- [interactive · godotengine/godot · float current_pos =](https://github.com/godotengine/godot/blob/ed1daf0bf001b61586d9930840f2f1394092c079/modules/interactive_music/audio_stream_interactive.cpp#L677)
- [multimesh · godotengine/godot · draw_multimesh(multimesh, texture)](https://github.com/godotengine/godot/blob/ed1daf0bf001b61586d9930840f2f1394092c079/scene/2d/multimesh_instance_2d.cpp#L67)
- [ysort · godotengine/godot · _collect_ysort_children](https://github.com/godotengine/godot/blob/ed1daf0bf001b61586d9930840f2f1394092c079/servers/rendering/renderer_canvas_cull.cpp#L111)
- [save · godotengine/godot · Error DirAccess::rename_absolute](https://github.com/godotengine/godot/blob/ed1daf0bf001b61586d9930840f2f1394092c079/core/io/dir_access.cpp#L301)
- [noise · godotengine/godot · void FastNoiseLite::set_seed](https://github.com/godotengine/godot/blob/ed1daf0bf001b61586d9930840f2f1394092c079/modules/noise/fastnoise_lite.cpp#L96)
- [viewport · godotengine/godot · void SubViewport::set_update_mode](https://github.com/godotengine/godot/blob/ed1daf0bf001b61586d9930840f2f1394092c079/scene/main/viewport.cpp#L5686)
- [label · mapbox/polylabel · export default function polylabel](https://github.com/mapbox/polylabel/blob/1d9039fc0131c985b08c12ccd9e5bb20e6aaa200/polylabel.js#L7)
- [generator · godotengine/godot-demo-projects · func _fill_buffer](https://github.com/godotengine/godot-demo-projects/blob/b761b4cd5718a7118f2c95eb55f181d0a5f004f1/audio/generator/generator_demo.gd#L11)
- [earcut · mapbox/earcut · export default function earcut](https://github.com/mapbox/earcut/blob/20a6fae724a58dd78b637ab8477fa20a227c954e/src/earcut.js#L35)
- [holes · mapbox/earcut · function eliminateHoles](https://github.com/mapbox/earcut/blob/20a6fae724a58dd78b637ab8477fa20a227c954e/src/earcut.js#L293)
- [deviation · mapbox/earcut · export function deviation](https://github.com/mapbox/earcut/blob/20a6fae724a58dd78b637ab8477fa20a227c954e/src/earcut.js#L830)
- [lufs · jiixyj/libebur128 · ebur128_gated_loudness(ebur128_state**](https://github.com/jiixyj/libebur128/blob/67b33abe1558160ed76ada1322329b0e9e058b02/ebur128/ebur128.c#L1086)
- [truepeak · jiixyj/libebur128 · int ebur128_true_peak](https://github.com/jiixyj/libebur128/blob/67b33abe1558160ed76ada1322329b0e9e058b02/ebur128/ebur128.c#L1445)
- [scale · tonaljs/tonal · export function pcsetSteps](https://github.com/tonaljs/tonal/blob/a1b98c3cb04c7244250ec1de72d155582e96acf8/packages/midi/index.ts#L160)
- [nearest · tonaljs/tonal · export function pcsetNearest](https://github.com/tonaljs/tonal/blob/a1b98c3cb04c7244250ec1de72d155582e96acf8/packages/midi/index.ts#L139)
- [oklab · colour-science/colour · def XYZ_to_Oklab](https://github.com/colour-science/colour/blob/248121e33fcae458e62190ac872f3e16ab2044bf/colour/models/oklab.py#L72)
- [srgb · colour-science/colour · def eotf_sRGB](https://github.com/colour-science/colour/blob/248121e33fcae458e62190ac872f3e16ab2044bf/colour/models/rgb/transfer_functions/srgb.py#L103)
- [vcsl · sgossner/VCSL · # SFZ Version](https://github.com/sgossner/VCSL/blob/c1ea7bcc3c7309650ab0da9d15c9cd1fbc4a4c7e/README.md#L13)
- [wav · godotengine/godot · Error AudioStreamWAV::save_to_wav](https://github.com/godotengine/godot/blob/ed1daf0bf001b61586d9930840f2f1394092c079/scene/resources/audio_stream_wav.cpp#L532)
- [record · godotengine/godot · Ref<AudioStreamWAV> AudioEffectRecord::get_recording](https://github.com/godotengine/godot/blob/ed1daf0bf001b61586d9930840f2f1394092c079/servers/audio/effects/audio_effect_record.cpp#L199)
- [path · godotengine/godot · void PathFollow2D::_update_transform](https://github.com/godotengine/godot/blob/ed1daf0bf001b61586d9930840f2f1394092c079/scene/2d/path_2d.cpp#L307)
- [json · godotengine/godot · Error JSON::parse(](https://github.com/godotengine/godot/blob/ed1daf0bf001b61586d9930840f2f1394092c079/core/io/json.cpp#L603)
- [hash · godotengine/godot · Error HashingContext::start](https://github.com/godotengine/godot/blob/ed1daf0bf001b61586d9930840f2f1394092c079/core/crypto/hashing_context.cpp#L36)
- [filter · godotengine/godot · void AudioEffectFilterInstance::_process_filter](https://github.com/godotengine/godot/blob/ed1daf0bf001b61586d9930840f2f1394092c079/servers/audio/effects/audio_effect_filter.cpp#L37)
- [delay · godotengine/godot · void AudioEffectDelayInstance::_process_chunk](https://github.com/godotengine/godot/blob/ed1daf0bf001b61586d9930840f2f1394092c079/servers/audio/effects/audio_effect_delay.cpp#L52)

算法阅读与代码移植分别记录：本轮新增Godot基础模块是本项目独立实现，没有引入第三方运行依赖。直接移植时保留对应文件许可；不要把GPL/AGPL参考片段当成无条件可复制的游戏源码。许可证原文随包保留。

前次下载的三个Godot音频/目录路径已校正；未找到的导航示例不收录，也不作为结论来源。
