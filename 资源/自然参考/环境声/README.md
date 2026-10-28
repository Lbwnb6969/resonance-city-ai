# 溪流环境声来源

Foundation原事件 `play_sfx_ambience_riverLoop`，Wwise ID89158959；原发布字符串在 `asset/Map Generation/MapGenerator.scene` 被引用，事件名证据为 `event-names-from-shipped-strings.json`。静态HIRC链 `core.bnk Event89158959 → PlayAction356780460 → Sound43288962 → media386937418`；同事件的Action309464735是Seek，不当作第二条播放源。精确链、原媒体/解码路径、包偏移与所有SHA见同目录提取记录。

原件来自本地 `参考资料/Foundation逆向成品-2026-10-13/outputs/foundation-audio-recovered/`，原WEM由core.pck偏移216480439抽出，988009字节，标准已恢复WAV为48kHz stereo PCM16、36.1401666667秒。本轮只读这一已解码源，不重新逆向或解码整库，也未运行原游戏。

执行 `python tools/extract_creation_ambience.py` 独占创建，不覆盖任何现存输出。取原4秒起12.5秒，双声道均值转mono，去DC，61tap Kaiser(beta8)9kHz低通后重采样22050Hz；首尾0.5秒升余弦交叠，得到12秒循环，再去DC并归一峰值至0.85。输出 `溪流.wav` 为PCM16 mono22050、264600帧。WAV未写smpl循环标记，运行层设置循环播放；增益由本作环境声节点控制，资源峰值不是运行时混音目标。

这是Foundation商业原音频的本地研究适配，非CC0，不是本作原创录音。鸟/风/虫声由本作另行合成。

提取器以Python核验事件链、源SHA、PCM帧数/格式、WAV回读、输出峰值及接缝差；详见 `提取记录.json`。提取过程不调用Godot。产品实窗、镜头/静音联动与生产声床录音保存在本地 `验证记录/自然环境声_2026-10-16/README.md`，原图/PCM不随库发布；当前正式资源与独立运行边界见[完整库施工核对](../../../文档/完整库施工核对.md)。
