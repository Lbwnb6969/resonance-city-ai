# free五画具真实布局

2026-11-03，M84非音乐子步，依54/60/61。仅迁移显示入口和帮助，工具内部ID、公开编辑API与作品格式保持。

## 改动与映射

free底部依次为筑屋、修路、水岸、林木、地形。水岸不再借林水二级页进入；林木独立高亮。用途退出常驻，但选屋「详情→用途」、原快捷键5与批量用途刷继续可达。经典城仍用筑屋/修路/烟火/林水/地形及原自然子页。换城、冷读及同城显式转换重新应用对应布局。

| free显示入口 | 保留内部ID | 原全局键 |
| --- | --- | --- |
| 筑屋 | 0 | 1 |
| 修路 | 2 | 3，兼容8 |
| 水岸 | 6 | 7 |
| 林木 | 5 | 6 |
| 地形 | 8 | 9 |

露台2、拆除4、用途5的原全局键继续；道路上下文1/2/3选择三种画法，优先于全局键。不是把新视觉槽位直接改成1～5。F1同步入口名称和数字键8真实行为，经典正文保持。

[布局模块](../scripts/ui/city_creation_dock_layout.gd)只重排原按钮、更新名称/可用性/高亮与弹层锚点，不复制工具实现；9个原按钮对象及隐藏OptionButton适配仍在。用途弹层锚到筑屋，free水岸弹层锚到自身；经典水面仍锚到林水。

## 验证

```text
D:/GODOT/Godot_v4.7.2-stable_win64_console.exe --path . --rendering-method gl_compatibility --audio-driver WASAPI --script tools/check_creation_five_tools_live.gd -- --isolated-session --out-dir=res://验证记录/M84/five_tools_20261103_live4
D:/GODOT/Godot_v4.7.2-stable_win64_console.exe --path . --rendering-method gl_compatibility --audio-driver WASAPI --script tools/check_creation_f1_policy_live.gd -- --isolated-session --out-dir=res://验证记录/M84/five_tools_f1_20261103_live1
```

[五画具实窗](../tools/check_creation_five_tools_live.gd) **183项/52.008秒通过**：1024×768、1440×900真实顺序/图标/启用与可见控件；实际池塘及回接支渠、两类植物、造屋、道路、地形落笔；池塘Undo/Redo全快照除revision按真实两次历史操作+2外完全一致。原键1～9及道路内1/2/3、选屋单用途/原键5批量用途、姓名文本焦点、磁盘完整冷读、经典混合自然页及同城转换受测。原图已查水岸1024、林木1440及经典布局。

F1专项 **100项/33.253秒通过**，核新布局/用途入口引用/兼容8、长文滚轮与页首复位，真实J建账/暂停及文件冷读；free只读快照、经典四页与原邀约保持。此前两个旧综合探针仅将不可见用途按钮点击改为原键5或筑屋选屋，并使用实时primary_tools；未重跑其跨时期全旅程。

`python tools/check_ai_harness.py`通过，holistic仍9/12；`python tools/check_doc_links.py`检查104份文档/496个本地链接，仅报既有3个音乐资料失链，本轮新增链接有效。`git diff --cached --check`通过，PROJECT为14,472字节。

首个脚本草稿因Vector2推断错误未执行；live2/3草稿定位了探针漏开道路「更多」菜单、后续城市沿用曲路模式，以及误把Undo/Redo后的revision递增当成世界损坏。live4按真实菜单操作并严格核revision+2，保留全部失败证据，不将草稿计作通过。无产品几何/历史规则改动。

全部`persistence=false`，作品和备份在各输出目录works；个人默认档逐字节不变。无新增音频/PCM或听感结论，不以本轮代替规模/整体UI验收。下一非音乐子步恢复61要求的可发现屋式编辑，核屋式/原型互斥及签名地标边界；M84～M86仍未整体验收。

本地起点备份分支`backup/nonmusic-five-tools-20261103-1885902c3`保留，上传暂停。开工审计4600资源依赖无缺失；origin/main与本地HEAD不同，既有3个音乐资料失链/2份候选哈希差异及植物/音乐在途修改保持，不混入本轮提交。
