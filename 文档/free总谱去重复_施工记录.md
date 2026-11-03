# free总谱去重复与历史权益入口

2026-11-03。按[61](61_UI与冗余系统清理审阅及施工映射.md)第2节及06～08项清理free L页日常呈现，保持[56历史权益](56_free成长权益映射.md)和legacy账本。接续[浅阶琴键](浅阶琴键_施工记录.md)。

## 改动

free页标题改为“城市总谱”，保留来自实际`report.spaces`的场所名单、真实入口/高差/未发布等失败说明及原当前合奏摘要。撤下第二套`report.zones`“原有用途与连接”表、常驻+35%倍率、互哺数量和经营和弦名称。

原L页手札按钮在free中改为“查看经营与历史权益 · J”，点击直接打开既有J页并展开历史权益；在实际文本完成布局后，把权益标题和正文首行滚入视口。异步滚动核对同城/epoch与面板可见性，关闭/换城后不迟到改滚动。legacy按钮仍打开原F1经营页，家族/经营叶页恢复。

只修改呈现与入口，不删除旧zones、互哺、和弦、正式1.35倍率、原收据、小数余量、待选原卡/额度或原经营计算，不新增存档版本。新经营账页仍在J；本轮不重构其他音乐控件或音频源码。

## 验证

```text
D:/GODOT/Godot_v4.7.2-stable_win64_console.exe --path . --rendering-method gl_compatibility --audio-driver WASAPI --script tools/check_creation_free_ledger_cleanup_live.gd -- --isolated-session --out-dir=res://验证记录/M84/free_ledger_cleanup_20261103_final
D:/GODOT/Godot_v4.7.2-stable_win64_console.exe --headless --path . --audio-driver Dummy --script tests/test_city_creation_functional_benefits.gd -- --isolated-session
D:/GODOT/Godot_v4.7.2-stable_win64_console.exe --headless --path . --audio-driver Dummy --script tests/test_city_creation_growth_rights.gd -- --isolated-session
python tools/check_ai_harness.py
python tools/check_doc_links.py
git diff --cached --check
```

最终OpenGL/WASAPI59项、16.858秒通过。样本由公开API建立真实百工、水岸、居住和街路；旧free按真实和弦取得81营造点，再造10屋经1.35与小数余量累计27点，总计108点，产生一笔原三卡邀约。没有直接填库存、XP、待选卡或收据。

1024×768/1440×900实际按L及点击按钮，验证默认页无重复表/互哺/常驻倍率/经营和弦，实际空间成员和原合奏摘要保持；J中原一笔额度、三张原卡、正式+35%可读。整城作者快照、原benefits/zones/chords及当次orchestration_plan在该读取旅程中相同。真实断路撤回当前倍率，入口失败仍可解释；J保原额度，Undo恢复原来源。F1原按钮实际打开原邀约、选择原卡，消耗一笔额度；实际磁盘冷读不复发。切legacy后原采购账本、家族/经营叶页与F1经营页保持。

独立看图发现首次57项报告只保证权益按钮露出，1024窗口正文仍在视口下方；已修为布局后对齐标题，并增加Scroll viewport内正文首行实际可见断言。最终1024权益原图中历史余量、待选三卡与+35%直接可读；早期live1报告/原图保留，不替代最终入口验收。

CPU正式收益46项、历史权益217项回归通过，包括1.35真实来源、小数累计、收据/原邀约和历史只读边界。此次呈现取舍更新了旧`functional_zones_live`/`functional_benefits_live`历史UI预期；这些旧工具的旧文字断言不再代表当前free目标，原历史报告保留，当前入口由本轮工具验收，不重跑其旧默认倍率/重复列表要求。

实窗使用`--isolated-session`、`persistence=false`与验证目录works；个人默认档逐字节不变。WASAPI真实打开，不录PCM、不作听感结论。原型体量、存档Schema、音频接口及个人作品未改。

## 交接

本轮只完成free L页这一切片，不称61整轮或M84～M86完成。下一非音乐子步清理free选屋说明中的常驻倍率/互哺与固定凑区指引，保留实际失败原因及J/F1历史入口。

本地起点备份分支`backup/nonmusic-free-ledger-20261103-41b499dac`保留；暂缓上传。远端审计确认本地与origin/main不同，资源依赖无缺失；原有3份音乐候选缺失及2份候选哈希差异保持，其他会话在途改动不混入提交。

独立Critic已复核源码、最终59项报告及两尺寸原图，权益正文可见性问题修复后无阻断。Harness保持holistic_integration9/12、首个未通过M84；链接检查仅保留开工时已有3份音乐候选缺失，新增链接有效。

## P0-5面板互斥与作品来源筛选（2026-11-03）

玩家目标：在J/L与选屋小窗之间切换时只留当前面板，收藏馆可区分手动作品与自动备份。J/L沿用同一手卷，详情/用途与手卷互斥，收藏馆打开关闭其余小窗。作品馆三枚原样式按钮只读筛选reason，保原作品ID、PNG/JSON字节与打开前正常自动备份；示范/图鉴独立。内置封面优先ResourceLoader导入纹理，外部作品仍解码原图，修复实测导出警告。

命令：`Godot_v4.7.2-stable_win64_console.exe --path . --rendering-method gl_compatibility --audio-driver WASAPI --script tools/check_creation_panel_closure_live.gd -- --isolated-session --out-dir=res://验证记录/M84/panel_closure_20261103/live_v6`。49项/18.836秒通过，1024×768、1280×720、1440×900原生按键/鼠标筛选/原ID打开备份及原件SHA保持；个人档逐字节不变。证据目录包含最终报告与原图，前期弹出菜单探针失败保留，现采用三按钮。独立Critic核源码与1024原图无阻断，封面警告修复后最终运行无该警告。Harness通过，M84～M86整体未完成；听感待评，L候选诚实状态保持。仅本地Git备份，不上传。
