# 《共鸣之城》AI 快速启动入口

## 1. 核心代码架构速查
- **主场景与入口**：`res://scenes/city_creation.tscn` → `scripts/ui/city_creation_demo.gd`
- **世界状态与存档 (`State`)**：`scripts/world/city_creation_state.gd`（含 `stroke`, `house_stroke`, `road_intent`, `junctions`, `passage`, `frontage`, `terrain`, `terrain_protection`, `courtyards`, `towers`, `growth`, `collection`）
- **市民生活与经营 (`Life`)**：`scripts/world/city_creation_life.gd`（含 `network`, `bakery`, `workshop`, `cafe`, `matinee`, `concert_relay`, `travel`, `district_links`）
- **3D 渲染与美术 (`Renderer`)**：`scripts/visual/city_creation_renderer.gd`（含 `meadow`, `foliage`, `shore`, `water_field`, `contact_field`, `terrain_surface`, `outcrops`, `building_context`, `gables`, `tower`, `house_styles`, `terrace_canopy`, `bakery_smoke`, `craft`, `cafe`, `courtyards`, `path_edge`, `path_pebbles`, `resonance`, `mesh_batcher`, `budget_rebuild` 及 `scripts/visual/shaders/*.gdshader`）
- **音乐与视野声场 (`Music`)**：`scripts/audio/city_creation_music.gd`（含 `theme_pcm`, `reply_pcm`, `arrangement`, `district_reply`, `spatial`）

## 2. 当前施工总纲与推进顺序
请直接打开 **[文档/code_artifact.md](文档/code_artifact.md)**，对照 **第九章：十阶段长期施工路线图 (Phase 1 ～ Phase 10)** 逐阶段持续推进：
1. **Phase 1**：草毯加密（7叶碗状绒簇 + 0.52m 密植）、暖阳 Filmic 光影、日/夕/夜三档氛围与草尖 SSS 透射重构。
2. **Phase 2**：立体高地城建与 CS2 挖填方衔接（解除房路 0 米压平锁死，实现台地/山坡建房 + 自适应毛石高地基 + 顺坡道路与陡坡自动石阶 + 横坡挡土石墙）。
3. **Phase 3**：CS2 式道路就地升级（双刷升级 1.75m 石板灯街 / 2.1m 林荫大道 / 叮当有轨电车街）与路口一键圆形环岛广场 (`Roundabouts & Plazas`)。
4. **Phase 4**：四温区视野声场架构 (`Acoustic Grouping`：视野核心发声 + 内联区域问答 + 远端特殊事件低通微音 + 视野外静默保谐) 与建房/点房音阶拨弦即时反馈。
5. **Phase 5 ～ Phase 10**：四大时代演进解锁 × 多风貌街区同城并存（古典田园、文艺复兴连拱穹顶、蒸汽钟表花房与有轨电车、现代生态空中花园）、建筑 1–5 级自动进化、6 座免费地标名胜 (`Signature Buildings`) 与 `80m×80m` 大城画布扩容。

## 3. 运行与当前阶段
Godot：`D:/GODOT/Godot_v4.7.2-stable_win64_console.exe`，Compatibility，1440×900。根目录三个启动器分别打开隔离新城、个人继续档、隔离创作样例；Ctrl+O 的示范河湾支持游戏内切换。

第八章已完成；Phase 1～9已完成，当前为 **Phase 10**。阶段状态与验证结论只记 [PROJECT](PROJECT.md)。房屋海拔、坡路石阶、三时段、拨弦/手动连线、汀步/睡莲和80m画布已有实现，各阶段仍须按新规格验收。

存档：Schema 1～16，独立模块 `city_creation_serializer.gd` / `city_creation_save_validation.gd`；`user://city_creation_v1.json` 与 `user://city_creation_works/` 是个人数据，测试使用隔离路径。

旧蓝图、四指南、三套用户材料与旧入口原文完整保存在本地 `废弃/文档_旧体系归档_2026-10-17_四库路线/`；旧2.5D文档和验证已在此前归档。开发入口只读现行五份文档；具体架构见 [3D速查](文档/21_新城创作切片.md)，来源见 [四库索引](文档/参考索引.md)。

Phase1～9已完成，Eras.AVAILABLE_COUNT=4。下一步按第七章/Phase10验证150～300屋、200+居民、分级LOD、脏子区域上传与分帧编辑。当前50屋近景数据不能替代大城验收；12轨PCM已预编译为14.5MB资源、约48ms加载；编辑准备/发布与盛典尾帧仍待性能收口。

时代入口：`city_creation_eras.gd`；Schema16的`era_answers`记录实际问答播放双方时代，50屋与三时代已听问答解锁modern_eco；旧问答不能靠重涂追认。建筑入口为`city_creation_renaissance.gd`、`city_creation_clockwork.gd`、`city_creation_modern.gd`及`city_creation_skybridge_plan.gd`。音乐固定12长+4短/6总线，自然声2固定节点。

交通入口：`city_creation_tram_plan.gd`/`city_creation_tram.gd`与`city_creation_tram_tracks.gd`；真实居民乘车后继续原采购/茶座/演出路线，实际到达才结算。`city_creation_bridge_plan.gd`按河宽/时代派生汀步、古典双拱、工业桁架或现代单拱，共用State.street_height。

街道入口：`city_creation_era_road_field.gd`准备带重叠边框的8m纹理数组块，`creation_era_road.gdshaderinc`供三类路面统一采样2m时代渐变；`city_creation_era_streets.gd`派生边界迎宾灯/拱门、现代音符灯与水景带。预算重建只在发布时上传变化层，旧作品不增字段。

盛典入口：`city_creation_amphitheater_plan.gd`（干地入口/实际湿舞台/植被派生遮罩）、`city_creation_amphitheater.gd`（帆顶/钢琴/沿岸看台）、`city_creation_grand_festival.gd`（真实四时代编制/8小节/存档校验）、`city_creation_grand_festival_visual.gd`（实际街图距离驱动轨道金波）。Life.invite_grand_festival等居民到齐，24秒接力并终章合奏；中途改源时代取消且不结算，中途恢复延续真实进度。

阶段命令、截图与剩余性能工作见本地`验证记录/四库路线_2026-10-17/README.md`；PROJECT只记录当前状态。

Phase10入口：`city_creation_citizen_motion.gd`为运行时标量路段，Life.citizen_position读取真实逻辑位置，flush_citizen在实际到达/进入视野/编辑/存档时发布节点姿态；不保存LOD状态。每帧16人判视锥、16屋扫描品质；tools/fixtures/city_creation_large_town_fixture.gd与tools/check_creation_large_town_live.gd提供300屋实景。含远景的300屋Life实窗均值0.896ms，281人实走，近景/全景p95为6.318/13.564ms；可见居民先计算实际路高再一次发布完整位置。

瓦片入口：`city_creation_roof_surface.gd`在实际面上预烘焙固定UV/平面法线；Renderer._roof_surface供连排屋、方塔、圆塔共用。`creation_joined_roof.gdshader`仅用UV导数求像素覆盖，做瓦缝/桶瓦法线积分过滤；不再用屏幕位置导数重算投影。

距离场：`city_creation_tiled_field.gd`把512²源场切成64层64+2边框图像，CPU数据仍完整保存；共享shader `creation_tiled_field.gdshaderinc`保持跨块双线性。water_field/contact_field准备私有层，budget_rebuild仅在commit上传变化层，保留纹理RID和所有材质绑定；取消不动GPU。实窗RF回读须用floatBitsToUint编码，Compatibility公共layer读图会归一化，不能拿来验证带符号浮点。

分级消隐入口：`city_creation_detail_lod.gd`校准正交镜头最少42m的观察距离（细草56/卵石52/风铃54/花箱58/烟团64/廊架80m）；Compatibility用原生2m迟滞，Forward+用self fade。mesh_batcher保留范围属性；PathPebbles远景置visible_instance_count=0，worker发布按当前视角重用原批次。TerrainSurface首次必建96m地板36块，后续小笔刷仍1～4块。

音乐银行入口：`city_creation_bank_cache.gd`异步加载原始251样本资源；开发环境按六份合成源文件的LF归一化签名校验，导出使用`city_creation_bank_stamp.gd`。修改合成后运行`Godot --headless --path . --script tools/bake_creation_music_bank.gd`，工具先核对全部PCM/循环属性/音符与峰值报告，原银行按计划移入唯一废弃目录，再发布新资源与签名；未匹配时保留原在线合成路径。

局部编辑基线：Renderer.rebuild结束调用BudgetRebuild.record_published；异步held/cancel不推进，只有commit更新。commit直接接管已join的Terrain/RoadHeights解算器，下一次request仍复制私有缓存；不在原子发布帧深拷贝路高轮廓。

远景入口：`city_creation_valley.gd`在96m原地板之外建立320m纯景观，河道延伸函数在原地板内恒等于State.river_x；10座Foundation远山共用一个MultiMesh，原模型来源和哈希在资源/自然参考/远山/README.md。无碰撞/导航/存档字段。CameraRig.orthographic_distance让最低0.3俯角下的前景射线仍从地面上方出发，相机far=400覆盖完整轮廓。

路高轮廓：RoadHeights为每路记录原始地形局部签名、门口/交叉口/水系/时代/环岛约束；未变轮廓和查询记录发布后只读，新prepare替换容器。Life的隔离worker也继承已发布的路高种子；actual近路雕刻重算3/16路，完整重算oracle覆盖台阶、桥型、环岛和撤销。

编辑发布：Cafe持有独立layout_api；Network后台预热实际茶座绕行，Context.snapshot_city只捕获纯值，完成后rebind_city交给活动State，居民恢复仍由原街路/茶座代码执行。BudgetRebuild预先计算几何site_blessings并随地形发布；动态库存、余韵与产量仍实时读取。工具栏只重绘切换的两项；TerrainProtection签名排除palette/name/finish，换色后不重算保护布局。

地形分帧：TerrainSurface.prepare_mesh在worker准备完整顶点/法线/索引与TriangleMesh处理后的碰撞面；主线程_build_block只创建GPU/物理对象，默认仍兼容同步调用。不要直接把索引展开当旧碰撞面，Godot原Mesh.create_trimesh_shape经过TriangleMesh精度处理，现7项包数据检查要求精确相等。

发布回收：BudgetRebuild保留被替换的旧草/岸块值，在Renderer空闲帧按余量释放，已提交临时上下文单独退休；发布/生活重接/界面刷新帧不叠加回收。任务成本按非空记录规模预测，空块不污染估计；睡莲两种固定素材在setup加载。stats.max_frame_work_ms统计同帧request+poll+retire，检查脚本直到全部CPU回收完成才结束计时，31项实窗验证28屋最高3.337ms/完整帧11.069ms。300屋编辑仍要单独验证。

300屋编辑已实测：Life._published_surface保留实际发布的只读地表/路高，编辑启动flush不准备活动新地形；Promenade._prepare_clearance按真实门口/地面单元/路段/树建立4m空间索引，完整revision和owner失效；Network._service_routes独立保留后台已求出的家庭/服务路径，临时缓存清空不重算。300屋最新完整编辑峰值61.339ms、总延迟5.26秒，Life发布10.109ms，仍未通过3.5ms/12ms门槛；真实地面和拾取已抬高2m，个人档与PCM身份保持。下一步收口请求/提交/UI和路线准备成本。
