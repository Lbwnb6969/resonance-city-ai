# 《共鸣之城》AI 快速启动入口（v3.0）

## 运行与代码入口

- Godot：`D:/GODOT/Godot_v4.7.2-stable_win64_console.exe`，Compatibility，1440×900。
- 主场景：`scenes/city_creation.tscn`；控制器：`scripts/ui/city_creation_demo.gd`。
- 世界状态：`scripts/world/city_creation_state.gd`；真实生活：`city_creation_life.gd`；路网：`city_creation_network.gd`；共享0.5m高度场（新笔触可选自然轮廓）：`city_creation_terrain.gd`。
- 作品格式与原子文件存取：`scripts/world/city_creation_serializer.gd`；纯台账/数值校验：`city_creation_save_validation.gd`。State保原API、缓存失效、历史与经营副作用；存取模块不保留City引用。
- 渲染：`scripts/visual/city_creation_renderer.gd`，后台准备/分帧安装：`city_creation_budget_rebuild.gd`；建筑、道路、植被、水岸使用对应 `city_creation_*` 模块与 `creation_*` 着色器。
- 音乐：`scripts/audio/city_creation_music.gd`，固定9条24秒同步长轨、4短音池与6声像总线；拨弦：`city_creation_pitch_pluck.gd`；四层自然声床：`city_creation_ambience.gd`。
- 作品、手记、账本：`scripts/ui/city_creation_gallery.gd`、`city_creation_journal.gd`、`city_creation_ledger.gd`。当前存档Schema 1～11；11保存自然轮廓，10保存柔化笔刷。
- 住宅共鸣反馈：`scripts/ui/city_creation_household_feedback.gd`，从逐户真实需求和路网连通分量生成下一步；用途工具选中住宅后半秒更新，不重置名字输入焦点。
- 高地建筑融入：`scripts/visual/city_creation_highland.gd` 的 StonePlinth 使用恢复石墙纹理和世界三平面 UV；只改视觉材质，不改高程真值或路线。
- 复杂屋顶生态：`scripts/visual/city_creation_wildlife.gd` 将玻璃花房拱顶作为真实鸟栖点，端门外保持花蜜点。
- 地形整笔预览：`scripts/visual/city_creation_terrain_preview.gd`，用现有圆端折线偏移显示整笔最大范围/平顶内界和活动笔圈，采样当前地形；与提交数据共用原始笔画点，不计算第二份预测高度场。

## 阅读与当前路线

先读 [PROJECT](PROJECT.md) 和 [重构套件执行对照](文档/重构套件执行对照_2026-10-17.md)，再读 [总设计与工程校准](文档/code_artifact.md)、[四份施工指南](文档/README.md)、[三库索引](文档/参考索引.md) 和 [快速开始](文档/Demo快速开始.md)。原方案中的旧快照诊断、代码块和性能数字需要先核当前源码，不能直接覆盖已修正版本。

v3已接入并验证：三时段光影、草阶/花簇/墙体AO/筒瓦/水面、建筑回弹与按住P刮奏、飞鸟彩蝶/夜间流萤和彩旗灯串、选址加持/逐户幸福/第四章、V漫步/F12明信片。实窗空闲p95约5.6ms，9+4音源与个人档不变。旧件已按依赖归档1,032份，3D打包审计独立。

近路编辑已复用结构地形保护区；居民网络 worker 只准备 raw 地形与道路剖面，局部编辑实测81点/37,249点、约68ms/150ms，主线程仍负责完整保护高度发布。生活准备118～124ms、渲染后台191～202ms、预算发布243～260ms、最大帧17.8～24.7ms，尚未达35ms/12ms目标。后续继续验证门前 fallback、道路/自然层准备与居民恢复，拆经营账本与roof/preview。serializer已抽出并通过174项新旧对照、17样例和Schema1～11覆盖，真实烘焙/送装/接力恢复及主场景实窗通过。详细状态看PROJECT；运行截图和日志只在本地 `验证记录/`，不会上传。

三套用户原件保存在 `文档/01_全套重构文档_MD版`、`02_全套重构文档_TXT纯文本版`、`03_可直接覆盖到仓库根目录`；03是源码模板，不参与Godot导入。实际施工使用根目录修正版与 `scripts/` 中的适配版本。

日常不自动打包ZIP。清理默认只生成JSON计划，命令见 `tools/cleanup_v3_workspace.py --help`；归档不覆盖、不删除，保留三库和个人数据。针对当前变更作最小充分测试与一次实窗画面/帧时核验。

下一项结构工作：Renderer、State、Demo仍分别约2493、2263、2063行。优先抽离Renderer的预览职责，保持当前外部调用API，并用道路/房屋预览实窗和场景启动验证；不为行数指标强拆没有独立职责的代码。边界和剩余风险见执行对照。

## 本仓库的精简边界

当前仓库是独立的源码/设计资料快照，未包含美术素材、声音/截图、大型分析转储和旧Git历史。参考报告和现行文档保留原路径；精确内容及校验见 [发布清单](AI资料/参考资料发布清单.json)，运行依赖见根README。
