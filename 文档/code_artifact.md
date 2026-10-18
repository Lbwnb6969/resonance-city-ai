# 《共鸣之城》(Resonance City) · 四库融合终极总设计与长期施工蓝图
**——融合 Tiny Glade × Townscaper × Foundation × Cities: Skylines II 的可持续音乐城建工程总纲**

> **文档定位与最高施工授权**：
> 1. 本文档基于最新代码快照（`fa740f439`，含 2026-10-16 已完成的湿砂河岸、平顶台地、烘焙炊烟、露台花架、木构/石砌街屋、街坊连奏、声像定位、庆典接力及开发中水岸石簇）与全仓 46 份文档深度审计编写，是《共鸣之城》后续长期开发的**唯一最高设计与工程执行总纲**（建议直接保存并覆盖为仓库内的 `文档/code_artifact.md`）。
> 2. **施工 AI 完全自主权**：施工 AI 拥有项目内设计细化、代码重构、着色器重写、程序化几何扩展、参考库资产提取与验证的**完全自主权**。请彻底抛弃“每轮打包 118MB 试玩包、堆砌数万字 SHA 清单与免责声明”的形式主义内耗，以**“做出真正好玩、好看、好听、有强烈正反馈、可长期持续经营的完整作品”**为第一准绳！

---

## 目录
- **第一章：最新代码与文档现状深度审计（已就绪基座 vs. 五大美术与衔接病灶）**
- **第二章：四库融合顶层愿景与核心职责矩阵（Tiny Glade + Townscaper + Foundation + 城市天际线2 + 补充研究库）**
- **第三章：核心设计哲学的三大终极裁定（四温区视野声场、纵向时代解锁×横向风貌并存、四层正反馈飞轮）**
- **第四章：美术质感与三维无缝衔接工程（含可直接替换的完整 Shader 与 GDScript 方案）**
- **第五章：四温区视野声场架构 (`Acoustic Grouping`) 与可弹奏城市音频系统（含完整代码规格）**
- **第六章：纵向时代演进 × 横向多风貌街区并存体系（从古典木石河湾到现代生态交响城）**
- **第七章：Foundation × CS2 深度可持续经营、建筑 1–5 级自然进化与 6 座地标名胜 (`Signature Buildings`)**
- **第八章：大城性能保障架构（80m～120m 画布扩容、MultiMesh 视锥裁剪、分帧重建与轻量模拟）**
- **第九章：仓库现有文档大瘦身与工作流去形式主义指南（附 37 份文档归档表与 4 大入口替换全文）**
- **第十章：面向施工 AI 的十二阶段超长持续施工路线图（Phase 1 ～ Phase 12 完整开发蓝图）**

---

## 第一章：最新代码与文档现状深度审计（已就绪基座 vs. 五大美术与衔接病灶）

基于最新上传的仓库快照（基准提交 `fa740f439ce0139919eeeca41c904c16ef72edff` 及 3 个未提交工作文件），我们对现有施工情况与文档状况做出客观、精准的工程盘点：

### 1.1 已就绪的高价值工程基座（100% 保留并在此基础上演进）
当前 3D 主场景 `res://scenes/city_creation.tscn`（主控 `scripts/ui/city_creation_demo.gd`）已经具备非常扎实的模块化架构：
1. **九大核心工具与三大面板**：
   - 工具 1～9：`1 房屋`（单击/拖拽扩建）、`2 露台`、`3 道路`（自由曲线/直拉折线/急弯自动 `R=0.85m` 圆角）、`4 移除`、`5 用途/样式`（民居、面包坊、演奏庭、制琴坊、花圃茶座；灰泥/木构/石砌三样式；7 套配色）、`6 植被`（橄榄树、丝柏、灌木）、`7 水岸`（主河与自绘池塘）、`8 街坊`（5 大音乐主题划区）、`9 地形`（抬高草丘、压低洼地、局部还原、平顶台地）。
   - 左上角三大系统：`作品收藏 (Ctrl+O)`、`三章河湾手记 (J)`、`河湾生活账本 (L)`。
2. **已落地的建筑与自然局部切片**：
   - 跨户共享墙消隐、长屋双坡木筋山墙与阁楼圆窗 (`city_creation_gables.gd`)、三层独立尖顶铜钟塔 (`city_creation_tower.gd`)、底层四格闭合石铺内院与八角喷泉 (`city_creation_courtyards.gd`)、二层露台木花架与奶油遮阳篷 (`city_creation_terrace_canopy.gd`)；
   - 道路触墙自动派生三级石阶与木雨棚 (`city_creation_frontage.gd`)、穿底层房屋自动凿出圆拱通道 (`city_creation_passage.gd`)、路口二次衰减圆角扩口 (`city_creation_junctions.gd`)、柔路缘与 MultiMesh 路边卵石 (`city_creation_path_pebbles.gd`)；
   - 0.5m 精度 `16m×16m` 分块地形高度场 (`city_creation_terrain.gd`)、`256²` RF 水岸距离场 (`city_creation_water_field.gd`)、`256²` 接地距离场 (`city_creation_contact_field.gd`)、Foundation `Sand01A` 湿砂河岸混合与正在收口的水岸石簇 (`city_creation_shore.gd`)。
3. **已落地的音乐与市民生活循环**：
   - 固定 9 条 24 秒同步长轨 + 4 短音池 + 6 条声像平移总线 (`city_creation_spatial.gd`)；
   - 邻近异风格街坊偶数乐句短句问答 (`city_creation_district_reply.gd`)、全街坊 22m 合唱亮窗摆旗 (`city_creation_resonance.gd`)、自发巡演 (`city_creation_matinee.gd`) 与多庭庆典接力 (`city_creation_concert_relay.gd`)。

---

### 1.2 为什么目前的美术与衔接“还是不算特别好”？（五大精确代码病灶）

通过逐行审查 `scripts/visual/` 与 `scripts/world/` 下的源码与 Shader，我们定位了制约当前画面质感与空间衔接的 **5 个根本原因**：

| 痛点维度 | 病灶所在文件与行号 | 具体代码问题诊断 | 改造方向（详见第四章） |
| :--- | :--- | :--- | :--- |
| **1. 全局光影发灰、缺乏阳光通透感与夜景魅力** | `scripts/ui/city_creation_demo.gd`<br>(`_setup_world()` 第 714～731 行) | 使用了死板的 `Environment.TONE_MAPPER_LINEAR`，主光 `sun.light_energy` 仅 `0.58`，环境光是冷灰青色单色光 `Color("d4e2df")`。画面像阴天灰片，缺乏 Tiny Glade 温暖金黄的斜射阳光与蓝紫天空漫反射阴影；且只有白昼/微暗夕光两档，没有点亮万家灯火的星夜模式。 | 升级为 **`TONE_MAPPER_FILMIC` + `ProceduralSkyMaterial` 冷暖半球天空光 + 白昼/夕照/星夜三态光影循环** |
| **2. 草叶与泥土地面几乎同色，且无阳光半透明透射 (SSS)** | `scripts/visual/shaders/creation_lawn.gdshader`<br>(第 40～56 行) | 第 40 行写死 `vec3 blade = ground * mix(vec3(0.90,0.95,0.86), vec3(0.99,1.015,0.96), ...)`，草尖与脚下泥土明度差不足 9%！且第 54 行 `light()` 中透射光 `vec3(0.055, 0.065, 0.035) / PI` 仅有 `0.018`，草叶完全不透光。 | **拉大根部深翠 AO (`0.80`) 与叶尖暖金嫩绿 (`1.22`) 的色相明度跨度**，并将逆光/侧光 SSS 透射提升 12 倍至 `vec3(0.24, 0.28, 0.09)` |
| **3. 草簇仅 3 片孤叶、地面 90% 裸露，色板对比度被压扁** | `scripts/visual/city_creation_meadow.gd` (第 25、363 行)<br>`creation_meadow_palette.gdshaderinc` | `BASE_SPACING = 0.65m` 太稀，且 `_mesh("lawn")` 每簇仅 `for blade in range(3)` 共 3 片窄叶（宽仅 `2.8cm`），绝大部分地面是光秃秃的平面；同时调色板把 `field` 噪声起伏强行乘以 `0.4`，抹平了草甸的暖黄与翠绿斑块。 | 将 `BASE_SPACING` 加密至 **`0.52m`**，单簇升级为 **7 片双圈碗状饱满绒簇 (`Cupped Clump`)**，恢复色板 `0.72` 对比度 |
| **4. 建房修路强制把山丘/台地压回 0 米，导致严重割裂与塌坑** | `scripts/world/city_creation_terrain_protection.gd`<br>`city_creation_terrain.gd` | 任何房屋、道路、内院、茶座都会把所在位置的地形强制乘以 `(1.0 - protect)` 压回 `y = -0.02m`！玩家刚用工具 9 刷出 2 米高的“平顶台地”或草丘，一放房子或画路，台地立刻塌陷成 0 米深坑！ | **彻底解除 0 米压平锁死**：房屋记录真实海拔 `house.base_y`，斜坡自动向下延伸 **错缝毛石高地基 (`stone_plinth`)**；道路顺坡爬升，陡坡自动变 **3D 石阶**，横坡自动生 **CS2 挖填方挡土石墙**！ |
| **5. 建筑与道路缺乏《城市天际线2》式的进阶层次与跨区过渡** | `scripts/visual/city_creation_renderer.gd`<br>`city_creation_junctions.gd` | 道路只有 `1.25m` 乡间土石路一种形态，无法就地升级为带路灯/行道树/有轨电车的宽街，路口无法一键生成圆形环岛广场；房屋缺乏底层商住连拱柱廊 (`Arcade`)、圆塔锥顶、玻璃花房与 1～5 级成长变化。 | 引入 **CS2 道路就地刷涂升级 (`Replace Tool`)、一键圆形环岛广场、四大时代建筑语法、1～5 级自动进化与 6 座地标名胜** |

---

## 第二章：四库融合顶层愿景与核心职责矩阵

《共鸣之城》正式确立以 **四大标杆工程/逆向参考库 + 仓内精选算法库** 为基石的黄金架构：
- 用 **Tiny Glade** 决定它的**“触感与微观自然之美”**（手绘笔刷直觉、丰润草毯、门阶拱洞化学反应）；
- 用 **Townscaper** 决定它的**“建筑涌现之趣”**（点击即长的模块拓扑、跨房共享墙与连排屋顶）；
- 用 **Foundation** 决定它的**“街坊烟火与有机经营”**（无网格功能区、村民真实寻路履约、工坊生产与茶座生活）；
- 用 **Cities: Skylines II (`《城市天际线2》`)** 决定它的**“宏观骨骼、道路替换升级、挖填方护坡、视野声源分组 (`Audio Grouping`) 与跨时代城市演进深度”**。

### 2.1 四大核心参考库与仓内补充库精准取用矩阵

| 参考项目 | 仓库路径 / 官方技术来源 | 在《共鸣之城》中的核心统治域 | 直接取用的关键机制、公式与资产 |
| :--- | :--- | :--- | :--- |
| **1. Tiny Glade**<br>*(微观美术、草木水岸与穿墙门阶首选)* | `参考资料/Tiny-Glade逆向成品-v2/` | **自然地景、草毯 (`Grass2`)、建筑微观材质、穿墙拱门、触墙石阶、陡坡石阶、屋面曲率** | 1. `reconstruction_grass2.md` 母子簇团分布、`world_albedo_tint` 512² 世界色场、`grass_light_sun_sky` 包裹漫反射与叶尖阳光透射 (SSS)、`object_push` 柔性压弯<br>2. `paths/path_mask_visual` & `path_pebbles` 柔路缘与路边卵石<br>3. `reconstruction_wall_pipeline` & `wall_stairs` 道路穿房自动凿石拱门、触墙生成门廊石阶、陡坡自动生成石阶路<br>4. `recovered_roof.py` 屋面微垂幂剖面 (`pow(t, 1.38)`) 与圆塔锥形顶 |
| **2. Townscaper**<br>*(房屋点击生长与邻接拓扑首选)* | `参考资料/Townscaper逆向成品/` | **房屋模块点击/拖拽生长、跨房共享墙、连排/转角/内院闭合语法、撤销历史与多声源池** | 1. `townscaper_generation.md` 六面邻接分类、同轴共墙消隐、长屋山墙、L/U 转角屋顶、底层四格闭合石铺内院<br>2. `ManySoundsManager.PlaySound/OnUpdate` 同类声源屏幕加权聚合、冷却门控与固定声部池 (`AudioSourcePool`)<br>3. `SaveData.CopyFrom` 完整快照收藏与确定性 Undo/Redo |
| **3. Foundation**<br>*(有机街坊、居民通勤与工坊经营首选)* | `参考资料/Foundation逆向成品-2026-10-13/` | **街坊划区、居民真实寻路履约、工坊生产/送装闭环、自然地貌贴图与模型资产** | 1. `05781_Behavior_Visit_Building` & `05734_Behavior_Work` 真实到岗→制作→携带送达→消费闭环（面包坊、制琴坊、花圃茶座、人文画廊、节庆委托）<br>2. 直接复用已恢复的 `Cliff A`（2048² 岩壁）、`Sand01A`（2048² 湿砂）、`Stone Wall`、`Env_Mineable_Stone.glb`（坡地伴石）、`Church.glb`（铜钟）、庭院喷泉与 `386937418.wav` 溪流声 |
| **4. Cities: Skylines II**<br>*(道路升级、挖填方地形衔接、视野声源分组与区域演进首选)* | • [CS2 Dev Diary #1: Road Tools](https://www.google.com/search?q=https%3A%2F%2Fcolossalorder.fi%2Fnews%2Fdevelopment-diary-1-road-tools%2F)<br>• [CS2 Dev Diary #4: Zones \& Signature Buildings](https://www.google.com/search?q=https%3A%2F%2Fcolossalorder.fi%2Fnews%2Fdevelopment-diary-4-zones-signature-buildings%2F)<br>• [CS2 Feature #12: Sound \& Music](https://www.google.com/search?q=https%3A%2F%2Fwww.paradoxinteractive.com%2Fgames%2Fcities-skylines-ii%2Ffeatures%2Fsound-music) | **道路就地替换升级 (`Replace Tool`)、环岛与路口广场、挖填方挡土墙 (`Cut & Fill`)、建筑 1–5 级成长、地标名胜 (`Signature Buildings`)、镜头视野声源分组 (`Audio Grouping`)** | 1. **Road Replace & Roadside Upgrades**：在已有道路上直接刷涂升级宽度、加装古典街灯、行道树、宽石板漫步道或叮当有轨电车轨街<br>2. **Cut-and-Fill Terrain Integration**：山坡修路/建房不把整座山压回 0 米，而是自动生成挖方挡土石墙 (`Cut`) 与填方毛石护坡/高架栈桥 (`Fill`)<br>3. **Roundabouts & Plazas**：点击任意路口一键生成圆润石板环岛与中心喷泉/日晷/报时碑<br>4. **Audio Grouping & Proximity Soundscape**：按镜头视锥、缩放高度与声源密度动态切换近景个体声、中景街坊合奏与视野外静默/远端特殊微音<br>5. **Architectural Themes & Building Levels 1–5 & Signature Buildings**：支持多时代风貌街区同城并存、底层商住连拱楼 (`Mixed-Use`)、建筑 1–5 级外观与音色进化、以及免费可放置的里程碑地标建筑 |
| **5. 仓内补充研究库**<br>*(屋顶骨架、车道寻路与音频物理建模)* | `参考资料/城市生成深化_2026-10-09/`<br>`参考资料/全项目补充研究_2026-10-10/` | **复杂多边形屋顶直骨架、沿路车道移动、拨弦/木管音色合成与滤波器** | 1. `Briganti-Games/Straight-Skeleton-Generator` 与 `Syomus/ProceduralToolkit`：复杂屋顶脊线与立面构造分层<br>2. `TheDuckCow/godot-road-generator` (`road_lane_agent.gd`, `intersection_ngon.gd`)：多岔路口几何与有轨电车/居民沿线平滑移动<br>3. `thestk/stk` (`Plucked.cpp`, `Clarinet.cpp`) & `Signalsmith-Audio/dsp` (`filters.h`, `envelopes.h`)：物理拨弦、木管音色与远端声源低通滤波平滑 |

---

## 第三章：核心设计哲学的三大终极裁定

针对你在设计思考中提出的三大核心问题——**“视野声场与视野外静默保和谐”**、**“时代演进 vs. 不同风格区域同城并存”**以及**“如何做出极强正反馈与长线可玩性”**，在此确立清晰、自洽、能直接指导代码的**三大顶层设计裁定**：

### 3.1 裁定一：音乐如何既作为最强正反馈，又在大城中保持绝对和谐？
**——确立“四温区视野声场架构 (`Camera-Centric 4-Zone Acoustic Grouping`)”**

在《城市天际线2》的 [Sound \& Music (Audio Grouping)](https://www.google.com/search?q=https%3A%2F%2Fwww.paradoxinteractive.com%2Fgames%2Fcities-skylines-ii%2Ffeatures%2Fsound-music) 架构中，为了避免全城成百上千个声源同时发声造成听觉混乱与 CPU 过载，系统会根据**玩家镜头焦点距离、镜头缩放高度 (`Zoom`) 与声源拓扑关系**进行动态声源分组：镜头焦点内听见清晰的近景细节，关联区域提供环境合奏，视野外绝大部分区域不占用声部，仅保留极少数高价值全局/远端事件（如钟声、庆典）穿透空间。

我们将这一机制与《共鸣之城》的 24 秒乐句同步时钟完美结合，将全城实时划分为 **四个声学温区**：

```
┌─────────────────────────────────────────────────────────────────────────────────┐
│                     《共鸣之城》四温区视野声场调度架构                           │
├───────────────────┬───────────────────────────────────────┬─────────────────────┤
│ 声学温区          │ 空间与拓扑判定条件                    │ 发声行为与混音权重   │
├───────────────────┼───────────────────────────────────────┼─────────────────────┤
│ 1. 焦点主奏区     │ 位于玩家当前镜头视锥核心圈内           │ 【主旋律与微观细节】 │
│ (Focus Core)      │ d_view = ||P_i - F_cam|| / R(zoom) ≤ 1│ 权重 100%：视野内建 │
│                   │ R(zoom) = clamp(0.75 * zoom, 12m, 28m)│ 筑轮流主奏、和声伴奏 │
│                   │                                       │ 工坊劳作音、点击拨弦 │
├───────────────────┼───────────────────────────────────────┼─────────────────────┤
│ 2. 内联共鸣区     │ 虽不在镜头正中心，但与焦点区存在：     │ 【跨区对答与复调】   │
│ (Linked Zone)     │ ① 玩家用工具8拉出的“跨区共鸣连线”；或  │ 权重 45%～65%：在偶  │
│                   │ ② 真实道路/桥梁/电车相连且处于问答中   │ 数乐句用该区专属时代 │
│                   │                                       │ 乐器进行一问一答呼应 │
├───────────────────┼───────────────────────────────────────┼─────────────────────┤
│ 3. 特殊远端事件   │ 位于视野外，但触发了高价值全局/远端事件│ 【方向性低通微音】   │
│ (Special Event)   │ ① 地标钟楼/报时塔的整句铜钟泛音；      │ 权重 18%～30%（带    │
│                   │ ② 远端正在举办街坊庆典演出的柔和余音； │ 1800Hz 低通滤波与立  │
│                   │ ③ 跨区有轨电车/音乐游船到站和弦铃；    │ 体声方位声像）：提示 │
│                   │ ④ 邻区房屋自动升级/地标落成的竖琴琶音  │ 远方生机，引玩家移镜 │
├───────────────────┼───────────────────────────────────────┼─────────────────────┤
│ 4. 视野外静默区   │ 城市其余所有不在镜头视野内、且无内联   │ 【绝对静默 0%】      │
│ (Silent Majority) │ 与特殊事件的广大街区（占大城 75%～90%）│ 居民生活与工坊生产   │
│                   │                                       │ 照常运行，但完全静音 │
│                   │                                       │ 彻底保证音乐纯净和谐 │
└───────────────────┴───────────────────────────────────────┴─────────────────────┘
```

- **为什么这套设计正反馈极强？**
  1. **指哪听哪的掌控感**：玩家把镜头移到古典老城河湾，耳边立刻流淌着温暖的木吉他与大提琴舟歌；把镜头平移到河对岸的文艺复兴长街，羽管键琴与独奏小提琴在下一个 3 秒乐句边界丝滑接棒；
  2. **跨区连线的创造快感**：当玩家用“♫ 共鸣连线”把老城的暖庭街区与新城的现代钢琴街区连成**内联区域 (`Linked Zone`)** 时，即使镜头只看着老城，到了偶数乐句，远方新城方向也会传来清澈的立式钢琴应答，并在半空中亮起一道跨越河谷的金色音弧！
  3. **永不吵闹的纯净保证**：无论玩家把城市建到 50 栋还是 500 栋，由于视野外 80% 以上的非内联街区处于 **第 4 温区（绝对静默）**，全城永远只由固定声部池演绎最和谐的同调式室内交响乐。

---

### 3.2 裁定二：时代演进 vs. 不同风格区域并存——到底怎么选？
**——确立“纵向时代演进解锁 × 横向多风貌街区同城并存 (`Progressive Era Unlock + Coexisting Chrono-Districts`)”**

我们对三种候选方案进行了深入推演：
- 若采用**“全城强制统一换代”**：一旦进入工业或现代，玩家在第一阶段精心捏出的中世纪灰泥面包坊、木筋山墙小巷和圆拱石桥被强行替换成红砖厂房或玻璃盒子，会彻底摧毁 Tiny Glade 式的手作珍藏感（违反 已归档的旧《时代与地标》 中“作品有历史、不能抹去玩家作品”的核心原则）；
- 若采用**“开局无时代划分、所有风格混杂平铺”**：玩家第 1 分钟就能把现代玻璃楼贴在茅草石屋旁，不仅缺乏长线经营的目标感与阶段突破爽感，还容易在同一栋连排屋顶上产生怪异的材质撕裂；
- 若采用**“不同时代切成独立小关卡”**：玩家永远无法在一座完整的河湾大城里欣赏“古典老城、文艺复兴广场、蒸汽花房大道与现代生态新城隔水相望、古今乐器同城合奏”的壮丽奇观。

**因此，最佳终极方案是：【纵向通过城市繁荣里程碑解锁四大时代篇章，横向以“街坊 (`District`)”为载体让不同时代风貌在同一座城市中永久并存】！**

1. **纵向怎么演进（极强的长线成长正反馈）**：
   - 玩家从 **第一时代：古典木石河湾（暖石灰泥、中世纪木筋、深流毛石，配木吉他/竖琴/木笛/马林巴）** 起步。
   - 随着建成房屋数、工坊产出、茶聚与街坊演出积累“城市共鸣里程碑（河湾手记扩展为四卷）”，依次隆重解锁：
     - **第二时代：文艺复兴人文长街 (`Renaissance`)** —— 解锁暖金砂岩连拱柱廊、八角红瓦穹顶、圆形喷泉环岛、人文书院画廊，以及**羽管键琴与室内弦乐四重奏**；
     - **第三时代：蒸汽钟表与浪漫花房 (`Clockwork`)** —— 解锁维多利亚红砖孟莎顶、铸铁玻璃阳光花房、叮当有轨电车宽街、钟表八音盒工坊，以及**立式钢琴、圆号与钢片琴圆舞曲**；
     - **第四时代：现代生态交响城 (`Modern Eco`)** —— 解锁原木流线悬挑露台、屋顶草坪与垂直森林、高层空中玻璃连廊、水上交响剧场，以及**温暖毡音钢琴、合成器铺底 (`Warm Pad`) 与颤音琴**。
2. **横向怎么并存（像真实历史名城一样自然生长）**：
   - **老街区默认保留原时代风貌**：解锁新时代后，你最初建设的河湾老街坊自动保持“第一时代：古典木石风貌”，绝不会被自动覆盖！
   - **新街坊自由选时代、旧街坊可局部焕新**：当玩家在河对岸、台地高处或新拓展的土地上用 **工具 8（街坊）** 刷出新区域时，可直接指定该街坊的 **`时代风貌 (era_theme)`**。在该街坊内用工具 1/2 建房、用工具 3 修路，会自动长出该时代的建筑立面、屋顶与街道装饰，并奏响该时代的专属器乐！
   - **如果玩家想让某栋旧房屋或某个旧街坊“顺应时代升级”**：只需在工具 5 或工具 8 中点击“焕新为当前时代风貌”，该房屋/街坊会在保持原有 ID、房格拓扑、门口连接与历史记忆的前提下，伴随柔和的竖琴琶音优雅过渡为新时代材质与屋顶轮廓。

---

### 3.3 裁定三：如何让游戏真正“非常好玩、正反馈极强、耐玩度高”？
**——构建“0.1秒指尖弹奏 → 1秒衔接涌现 → 30秒烟火进化 → 3分钟交响庆典”四层正反馈飞轮**

| 正反馈层级 | 玩家的核心操作 | 立即获得的视听与玩法奖赏（零惩罚、纯激励） |
| :--- | :--- | :--- |
| **第 1 层：0.1 秒指尖弹奏**<br>*(Tactile Musical Toy)* | 点击地面建房、点击屋顶拔高楼层 (`level 0~4`)、点击已有房屋、刷路种树 | **建造即弹奏**：每次点击建房或加层，立即按该房高度 (`0→Do, 1→Re, 2→Mi, 3→Sol, 4→La`) 与所属街坊的主乐器（木吉他/竖琴/羽管键琴/钢琴）奏响清脆悦耳的和弦拨弦，窗户泛起暖金涟漪！连拖一排房或连点拔高塔楼就像在拨动八音盒！ |
| **第 2 层：1 秒几何涌现**<br>*(Architectural Chemistry)* | 路画到墙边、路穿房而过、路拉上台地陡坡、双刷已有道路、点击路口、四房合围 | **衔接即惊喜**：无需调复杂参数——路碰墙自动生三级石阶与暖灯；路穿房自动凿圆拱石洞；路爬陡坡自动变石阶路与挡土石墙；路上再刷一笔直接升级为带暖光铁艺路灯的石板宽街；点路口一键变喷泉环岛；四房合围自动涌现石铺喷泉内院！ |
| **第 3 层：30 秒烟火进化**<br>*(Living Economy & Levels 1–5)* | 设面包坊、制琴坊、花圃茶座、人文画廊、升级有轨电车街 | **经营即生长**：看着面包坊飘起袅袅炊烟、匠人背着木琴沿路送装、居民搭电车去茶座品茶；获得服务的住宅**自动从 Lv.1 简朴小屋进化到 Lv.5 传世名宅**（逐级长出迎宾石垫、鲜花木箱、屋檐铜风铃、雕花连廊/玻璃花房、金色风向标与高八度复调泛音）！ |
| **第 4 层：3 分钟交响高潮**<br>*(Symphony & Signature Landmarks)* | 发起街坊演出/多庭接力、拉出跨时代共鸣连线、解锁并放置“地标名胜” | **共鸣即高潮**：全街坊房屋亮起呼吸暖窗、彩旗随拍摆动、跨河音弧流光溢彩；达成里程碑免费解锁 **6 座《城市天际线2》式地标名胜 (`Signature Buildings`)**（大水车磨坊、古钟瞭望塔、圆顶音乐院、植物玻璃宫、钟表电车总站、水上交响剧场），一键落地赋能全城！ |

---

## 第四章：美术质感与三维无缝衔接工程（含可直接替换的完整 Shader 与 GDScript 方案）

本章直接给出解决第一章所列“五大美术与衔接病灶”的**精确工程实现方案与代码**，施工 AI 可直接照此修改对应文件。

### 4.1 全局光影焕新：Filmic 色调映射 + 天空冷暖半球光 + 昼/夕/夜三态灯火 (`scripts/ui/city_creation_demo.gd`)

将 `scripts/ui/city_creation_demo.gd` 中的 `_setup_world()` 与 `_toggle_light()` 升级为支持 **白昼 (`day`) → 夕照 (`sunset`) → 星夜 (`night`)** 的 Filmic 微缩箱庭光影系统：

```gdscript
# 在 scripts/ui/city_creation_demo.gd 中新增状态变量：
var light_phase: int = 0 # 0 = 白昼 Day, 1 = 夕照 Sunset, 2 = 星夜 Night
var world_env: Environment

func _setup_world() -> void:
	var environment := WorldEnvironment.new()
	world_env = Environment.new()
	var sky := Sky.new()
	var sky_mat := ProceduralSkyMaterial.new()
	sky_mat.sky_top_color = Color("78a8c8")
	sky_mat.sky_horizon_color = Color("efe3cc")
	sky_mat.ground_horizon_color = Color("cbbd9e")
	sky_mat.ground_bottom_color = Color("6b7c5e")
	sky.sky_material = sky_mat
	world_env.background_mode = Environment.BG_COLOR
	world_env.background_color = Color("d8e2dc")
	world_env.sky = sky
	world_env.ambient_light_source = Environment.AMBIENT_SOURCE_SKY
	world_env.ambient_light_sky_contribution = 0.65
	world_env.ambient_light_color = Color("f4ecd8")
	world_env.ambient_light_energy = 0.65
	world_env.tonemap_mode = Environment.TONE_MAPPER_FILMIC
	world_env.tonemap_exposure = 1.08
	world_env.tonemap_white = 1.85
	environment.environment = world_env
	add_child(environment)

	sun = DirectionalLight3D.new()
	sun.rotation_degrees = Vector3(-46, -34, 0)
	sun.light_color = Color("fff1d0")
	sun.light_energy = 1.14
	sun.shadow_opacity = 0.68
	sun.shadow_enabled = true
	sun.shadow_blur = 1.35
	sun.directional_shadow_max_distance = 96.0
	sun.shadow_bias = 0.025
	add_child(sun)
```

- **三态光影切换参数 (`_toggle_light()`)**：
  1. **晨曦白昼 (`light_phase == 0`)**：`sun.light_color = Color("fff1d0")`, `sun.light_energy = 1.14`, `sun.rotation_degrees = Vector3(-46, -34, 0)`, `world_env.ambient_light_energy = 0.65`；
  2. **暖金夕照 (`light_phase == 1`)**：`sun.light_color = Color("ffb672")`, `sun.light_energy = 0.95`, `sun.rotation_degrees = Vector3(-21, -52, 0)`, `world_env.ambient_light_energy = 0.54`；房屋门灯与街灯点亮 `50%` 暖光；
  3. **星夜灯火 (`light_phase == 2`)**：`sun.light_color = Color("6e88b4")`（静谧月光）, `sun.light_energy = 0.28`, `sun.rotation_degrees = Vector3(-52, 28, 0)`, `world_env.background_color = Color("1d2738")`, `world_env.ambient_light_energy = 0.26`；通知 `renderer.set_night_mode(true)`，使全城所有房屋窗户常驻 `40%` 温暖室光（发声/演出房屋跃升至 `100%` 金色光芒），门廊灯、石板街铁艺路灯、茶座灯笼、水岸睡莲微光与空中音弧在夜色中璀璨生辉！

---

### 4.2 Tiny Glade 级饱满草毯：7 叶双圈碗状绒簇 + SSS 阳光透射 (`city_creation_meadow.gd` & `creation_lawn.gdshader`)

#### （1）加密草簇间距并升级为“7 叶双圈碗状绒簇” (`scripts/visual/city_creation_meadow.gd`)
1. 将 `const BASE_SPACING := 0.65` 加密为 **`const BASE_SPACING := 0.52`**（草簇覆盖密度提升 56%，由于仍采用 8m 分块 MultiMesh，GPU 合批开销几乎不变）。
2. 将 `_mesh("lawn")` 中的 `for blade in range(3): _ribbon(surface, blade)` 升级为 **7 片高低错落、向外舒展呈碗状花萼形 (`Cupped Clump`) 的宽柔弧形叶片**（内圈 3 片高 `0.22~0.27m` 迎光挺立，外圈 4 片高 `0.16~0.19m` 向外微弯遮盖根部裸土）：

```gdscript
# 在 scripts/visual/city_creation_meadow.gd 的 _mesh(kind: String) 中：
if kind == "lawn":
	for blade in range(7):
		_ribbon(surface, blade)

func _ribbon(surface: SurfaceTool, blade: int) -> void:
	var angles := [-0.52, -0.16, 0.19, 0.55, -0.88, 0.86, 0.02]
	var bases_x := [-0.028, 0.006, 0.026, -0.018, -0.046, 0.044, -0.004]
	var bases_z := [-0.032, -0.008, 0.028, 0.042, 0.012, -0.024, -0.048]
	var heights := [0.22, 0.27, 0.24, 0.19, 0.16, 0.17, 0.21]
	var reaches := [0.115, 0.135, 0.120, 0.145, 0.155, 0.150, 0.125]
	var shoulders := [0.042, 0.046, 0.042, 0.048, 0.050, 0.048, 0.044]

	var angle: float = angles[blade]
	var outward := Vector3(cos(angle), 0.0, sin(angle))
	var side := Vector3(-sin(angle), 0.0, cos(angle))
	var base := Vector3(bases_x[blade], 0.0, bases_z[blade])
	var height: float = heights[blade]
	var reach: float = reaches[blade]
	var shoulder: float = shoulders[blade]

	var c0 := base
	var c1 := base + outward * (reach * 0.22) + Vector3.UP * (height * 0.38)
	var c2 := base + outward * (reach * 0.62) + Vector3.UP * (height * 0.74)
	var tip := base + outward * reach + Vector3.UP * height

	var left0 := c0 - side * (shoulder * 0.55)
	var right0 := c0 + side * (shoulder * 0.55)
	var left1 := c1 - side * shoulder
	var right1 := c1 + side * shoulder
	var left2 := c2 - side * (shoulder * 0.62)
	var right2 := c2 + side * (shoulder * 0.62)

	_triangle(surface, left0, right0, right1, Color.WHITE, height, outward)
	_triangle(surface, left0, right1, left1, Color.WHITE, height, outward)
	_triangle(surface, left1, right1, right2, Color.WHITE, height, outward)
	_triangle(surface, left1, right2, left2, Color.WHITE, height, outward)
	_triangle(surface, left2, right2, tip, Color.WHITE, height, outward)
```

#### （2）恢复春日牧场色阶与叶尖 SSS 透射 (`creation_meadow_palette.gdshaderinc` & `creation_lawn.gdshader`)
- 在 `scripts/visual/shaders/creation_meadow_palette.gdshaderinc` 中：
  - 将 `grass_low` 设为 `vec4(0.25, 0.43, 0.27, 1.0)`（温润深翠绿），`grass_high` 设为 `vec4(0.44, 0.58, 0.31, 1.0)`（暖阳嫩草绿）；
  - 将 `meadow_color()` 中的 `field = 0.5 + (field - 0.5) * 0.4;` 放宽为 **`field = 0.5 + (field - 0.5) * 0.72;`**。
- 在 `scripts/visual/shaders/creation_lawn.gdshader` 中替换 `fragment()` 与 `light()`：

```glsl
void fragment() {
	float leaf = smoothstep(0.12, 0.92, tip) * detail;
	vec3 turf_normal = meadow_normal(world_at.xz);
	vec3 soft_normal = normalize(mix(turf_normal, normalize(blade_world_normal), leaf * 0.26)
		+ vec3(0.82, 0.0, 0.57) * gust * leaf * 0.09);
	NORMAL = normalize((VIEW_MATRIX * vec4(soft_normal, 0.0)).xyz);

	vec3 ground = meadow_contact_color(world_at.xz, shore_ground(world_at.xz, meadow_color(clump_world_at, grass_low.rgb, grass_high.rgb)));
	float tint_shift = (clump_tint.g - 0.50) * 0.32;
	// 根部深翠微暗 AO (0.80)，叶尖跃升为温暖明快的嫩草绿 (1.18, 1.25, 0.92)
	vec3 root_tone = ground * vec3(0.80, 0.86, 0.78);
	vec3 sun_tip_tone = ground * vec3(1.18, 1.25, 0.92) + vec3(0.045, 0.055, 0.012);
	vec3 blade = mix(root_tone, sun_tip_tone, smoothstep(0.08, 0.92, tip));
	blade *= mix(vec3(1.0), vec3(0.95, 1.03, 0.93), species);
	blade *= 1.0 + tint_shift + max(0.0, gust) * tip * 0.07;

	float reveal = smoothstep(0.04, 0.78, tip) * detail;
	ALBEDO = mix(ground, blade, reveal);
	AO = mix(0.76, 1.0, smoothstep(0.0, 0.55, tip) * detail);
	AO_LIGHT_AFFECT = 0.48;
	ROUGHNESS = mix(0.94, 0.72, tip * detail);
	BACKLIGHT = vec3(0.15, 0.19, 0.06) * leaf;
}

void light() {
	float ndotl = dot(NORMAL, LIGHT);
	float wrapped = grass2_sun_wrap(ndotl);
	float back_sun = clamp(dot(-VIEW, LIGHT) * 0.5 + 0.5, 0.0, 1.0);
	float transmission = pow(tip, 1.35) * detail * (0.35 + 0.65 * back_sun);
	vec3 sss_light = vec3(0.24, 0.28, 0.09) * transmission;
	DIFFUSE_LIGHT += (vec3(wrapped) + sss_light) * LIGHT_COLOR * ATTENUATION / PI;
}
```

---

### 4.3 立体高地城建与《城市天际线2》挖填方地形护坡 (`Cut-and-Fill` & `Stone Plinth` & `Road Stairs`)

参考《城市天际线2》的 [Road Tools (Cut-and-Fill)](https://www.google.com/search?q=https%3A%2F%2Fcolossalorder.fi%2Fnews%2Fdevelopment-diary-1-road-tools%2F) 与 Tiny Glade 的 `reconstruction_wall_stairs.md`，彻底打通高地/台地/斜坡与建筑道路的三维立体衔接：

```
          【1. 山坡/台地建房：自适应错缝毛石高地基 (Stone Plinth)】
                 ┌───────────────┐
                 │   房屋主体     │  ← 地板锚定在起笔处真实海拔 house.base_y (如 +2.0m 台地)
        ─────────┴───────────────┼───────── ← 上坡侧平顺接入台地草坪
        ░░░░░░░░░│ 错缝毛石高地基 │
        ░░░░░░░░░│ (Stone Plinth)│  ← 下坡侧自动向下延伸厚石墙地基与护坡角石，
        ░░░░░░░░░┴───────────────┴─────────    直到严丝合缝插入下坡地面 (如 +0.6m)，绝不悬空或挖坑！

          【2. 山坡修路：CS2 挖填方护坡 + Tiny Glade 自动石阶】
        纵向缓坡 (grade ≤ 0.22) : 顺坡平滑石板路 + 两侧柔路缘与路边卵石
        纵向陡坡 (grade > 0.22) : 自动切换为 3D 层叠石阶 (Stone Stairs) + 两侧 0.35m 矮石护栏
        横向切坡 (Cut > 0.35m)  : 高于路面一侧自动生成 CS2 式挖方挡土矮石墙 (Retaining Wall)
        横向填坡 (Fill > 0.35m) : 低于路面一侧自动生成毛石路堤护坡 (Embankment)
```

#### 具体代码改造步骤：
1. **房屋海拔属性 `house.base_y` (`scripts/world/city_creation_state.gd`)**：
   - 在 `add_house_cell()` / `apply_house_stroke()` 创建新房屋时，采样起笔处的原始地形高度（不含房屋自身平地保护）：
     `var base_y := clampf(roundf(raw_ground_height(origin) * 20.0) / 20.0, 0.0, 6.0)`，写入 `house["base_y"] = base_y`（旧存档读取时 `float(house.get("base_y", 0.0))` 默认 `0.0`，100% 兼容）。
   - 同一栋房屋水平扩建底层格时，沿用该 `house.base_y`。
2. **地形保护从“强制压回 0 米”升级为“向 `target_y` 平台过渡” (`city_creation_terrain_protection.gd` & `city_creation_terrain.gd`)**：
   - 在 `city_creation_terrain_protection.gd` 中，每个 `rect`（房屋、内院、茶座）与 `poly`（道路）保护图元新增字段 `"target_y": float`：
     - 房屋保护区：`target_y = float(house.get("base_y", 0.0))`；
     - 内院保护区：`target_y = 围合房屋的平均 base_y`；
     - 道路保护段：对道路中心线采样点沿线的未保护地形高度做 5 点平滑滤波，存入每段保護的 `target_y`。
   - 在 `city_creation_terrain.gd` 计算最终地面高度 `ground_height(world_xz)` 时：
     不再将雕塑偏移量简单乘以 `(1.0 - protect)` 归零，而是计算加权目标高程 `var flat_y: float = protection_target_y(world_xz, raw_sculpt_y)`，并通过 `lerpf(raw_y, flat_y, protect_weight)` 实现台地边缘 `1.2m` 余弦平滑过渡！
3. **底层房间自适应毛石高地基 (`scripts/visual/city_creation_renderer.gd`)**：
   - 房屋根节点的 Y 坐标设为 `float(house.get("base_y", 0.0))`。
   - 对每个 `level == 0` 的底层房间，采样其四角世界坐标的实际地面高度 `min_ground_y`。
   - 计算地基下延深度 `plinth_depth = maxf(0.18, house_base_y - min_ground_y + 0.16)`，从 `y = 0.0` 向下生成外扩 `0.06m`、贴有 Foundation 石墙纹理 (`StoneWallTexture`) 的厚重毛石勒脚台基 (`Plinth`)！
4. **顺坡道路、陡坡石阶与横坡挡土墙 (`scripts/visual/city_creation_renderer.gd` & `city_creation_frontage.gd`)**：
   - **门前动态石阶 (`city_creation_frontage.gd`)**：根据房屋 `base_y` 与门前道路/地面的实际高差 $\Delta y = \text{base\_y} - y_{\text{front}}$，动态计算台阶数 $N_{\text{steps}} = \text{clampi}(\text{ceili}(\Delta y / 0.12), 2, 10)$，生成严丝合缝接地的多级门前石阶。
   - **陡坡石阶路 (`road_stairs`)**：遍历道路中心线采样段 $[p_i, p_{i+1}]$，设段长 $L_i$、高差 $\Delta h_i = |y_{i+1} - y_i|$。当纵向坡度 $\text{grade}_i = \Delta h_i / L_i > 0.22$ 且非桥梁段时，自动将该段路面生成为每级高 `0.12m`、深 `0.32m` 的 **3D 层叠石阶网格**，并在道路左右边缘生成高 `0.34m`、宽 `0.14m` 的错缝矮石护栏 (`Parapet`)。
   - **横坡挖填方挡土墙 (`Cut & Fill Retaining Wall`)**：在每个道路采样点 $p_i$，采样左右路缘外侧 `0.9m` 处的自然地形高度 $y_{\text{left}}, y_{\text{right}}$。若 $y_{\text{side}} - y_{\text{road}} > 0.35\text{m}$（挖方切坡 `Cut`），自动在该侧路缘立起高 $h = y_{\text{side}} - y_{\text{road}} + 0.15\text{m}$ 的石砌挡土矮墙；若 $y_{\text{road}} - y_{\text{side}} > 0.35\text{m}$（填方跨坡 `Fill`），自动从路缘向下延伸梯形毛石护坡路堤至 $y_{\text{side}} - 0.15\text{m}$！

---

### 4.4 《城市天际线2》式道路就地升级 (`Replace Tool`) 与一键圆形环岛广场 (`Roundabouts`)

借鉴 [CS2 Development Diary #1: Road Tools](https://www.google.com/search?q=https%3A%2F%2Fcolossalorder.fi%2Fnews%2Fdevelopment-diary-1-road-tools%2F)，为工具 3（道路）赋予直觉式的升级与环岛生成能力：

1. **四级道路样式与“重刷即升级 (`Replace Tool`)”**：
   - 在 `road` 字典中新增字段 `"style": String`，支持 4 种渐进解锁的街道层级：
     - `"cobble"`（默认乡间鹅卵石径，宽 `1.25m`）：柔路缘 + 稀疏路边卵石；
     - `"promenade"`（古典石板灯街，宽 `1.75m`）：错缝暖白花岗石板 + 两侧每隔 `4.5m` 自动生成 **3D 古典暖光铁艺街灯**（夜间/演出散发温暖金光）与鲜花石箱；
     - `"avenue"`（人文林荫大道，宽 `2.10m`，第二时代解锁）：中央暖白石板 + 两侧规则石砌树池、修剪整齐的小型冠层行道树与路边木长椅；
     - `"tram"`（叮当有轨电车宽街，宽 `2.10m`，第三时代解锁）：石板路面嵌入双轨凹槽与架空铜线，自动派出复古叮当音乐电车巡游！
   - **极简交互方式**：玩家既可以在工具 3 面板预先选择道路样式直接绘制，也可以**用工具 3 顺着已有的道路重合再刷一笔（或点击已有道路弹出“升级道路”按钮）**——系统通过 `find_overlapping_road(stroke_points)` 识别重合度 `>= 60%` 的已有道路，直接将其就地升级为目标 `style` 与 `width`，100% 保留原有的所有路口、穿房拱洞与门前石阶连接！
2. **路口一键圆形环岛广场 (`Roundabouts & Plazas`)**：
   - 在工具 3 面板增加 **“◎ 环岛广场”** 子模式（或在道路模式下直接单击已有的道路交叉口）：
   - 将该路口节点标记为 `junction["roundabout_radius"] = 2.4`（再点一次可切换为大环岛 `3.4m` 或恢复普通路口）。
   - 渲染层在交点处生成半径 `R = 2.4m` 的圆形错缝石板环岛，所有汇入该路口的道路分支自动截断于 `R` 处并以切线喇叭口平滑接入环岛外环；环岛中心自动生成半径 `0.95m` 的 **中心景观岛（可随街坊风貌呈现为古典双层喷泉、花坛日晷、八音盒雕塑或报时小钟塔）**，居民与电车沿环岛外环顺畅绕行！

---

## 第五章：四温区视野声场架构 (`Acoustic Grouping`) 与可弹奏城市音频系统

本章将第三章 3.1 节裁定的 **“视野内建筑 + 内联区域 + 特殊远端事件发声，视野外大部分地区静默保和谐”** 转化为可直接落地为 `scripts/audio/city_creation_acoustic_field.gd` 的完整工程规格。

### 5.1 `city_creation_acoustic_field.gd` 核心调度器完整代码设计

施工 AI 可直接新建 `scripts/audio/city_creation_acoustic_field.gd` 并在 `city_creation_music.gd` 与 `city_creation_demo.gd` 中调用：

```gdscript
class_name CityCreationAcousticField
extends RefCounted

# 四温区视野声场调度器 (Camera-Centric 4-Zone Acoustic Grouping)
# 温区 1 (Focus Core)   : 视野核心圈内建筑 -> 权重 1.0，主导主旋律、声部配器与近景微音
# 温区 2 (Linked Zone)  : 显式共鸣连线 (musical_links) 或路网相连的异风格街坊 -> 权重 0.55，偶数乐句对答
# 温区 3 (Special Event): 视野外地标钟楼、远端正在进行的演出、电车到站、升级琶音 -> 权重 0.22，低通滤波+方向声像
# 温区 4 (Silent City)  : 其余所有视野外街区（占大城 75%~90%）-> 权重 0.0，完全静默保和谐！

static func evaluate(
	state: CityCreationState,
	life_snapshot: Dictionary,
	camera_focus: Vector3,
	camera_right: Vector3,
	camera_ortho_size: float,
	clock_sec: float
) -> Dictionary:
	var focus_xz := Vector2(camera_focus.x, camera_focus.z)
	var right_xz := Vector2(camera_right.x, camera_right.z).normalized()
	if right_xz.length_squared() < 0.001:
		right_xz = Vector2.RIGHT

	# 随镜头缩放高度 (zoom) 动态调整视野声学半径 R_focus
	var r_focus := clampf(camera_ortho_size * 0.78, 12.0, 28.0)
	var r_feather := r_focus * 1.25 # 边缘 25% 柔和淡出带

	# zoom 分档权重：近景突出单屋细节，中景突出街坊合奏，远景聚合成温润全景声床
	var near_detail_mix := 1.0 - smoothstep(16.0, 28.0, camera_ortho_size)
	var macro_blend_mix := smoothstep(24.0, 42.0, camera_ortho_size)

	var in_view_houses: Array[Dictionary] = []
	var silent_house_count: int = 0
	var district_view_weights := {}

	for house in state.houses:
		var h_id := String(house.get("id", ""))
		var pos3: Vector3 = state.house_center(house)
		var pos_xz := Vector2(pos3.x, pos3.z)
		var dist := pos_xz.distance_to(focus_xz)
		var d_norm := dist / r_focus

		if dist <= r_feather:
			var weight := 1.0 - smoothstep(r_focus * 0.35, r_feather, dist)
			var pan := clampf((pos_xz - focus_xz).dot(right_xz) / r_focus, -0.65, 0.65)
			var style := state.house_music_style(house)
			in_view_houses.append({
				"id": h_id,
				"weight": weight,
				"pan": pan,
				"dist": dist,
				"style": style,
				"role": String(house.get("role", "residential")),
				"max_level": state.house_max_level(house),
				"level_tier": int(house.get("level_tier", 1))
			})
			district_view_weights[style] = float(district_view_weights.get(style, 0.0)) + weight
		else:
			# 温区 4：视野外且非特殊/内联事件，严格归入静默区
			silent_house_count += 1

	# 查找温区 2：与当前视野主风格存在“显式共鸣连线 (musical_links)”或拓扑相邻的内联区域
	var linked_zones: Array[Dictionary] = []
	var primary_style := _dominant_style(district_view_weights, "warm")
	for link in state.get_active_musical_links(primary_style, focus_xz):
		var target_center: Vector2 = link.get("target_center", focus_xz)
		var link_pan := clampf((target_center - focus_xz).dot(right_xz) / maxf(r_focus, 18.0), -0.70, 0.70)
		linked_zones.append({
			"partner_style": String(link.get("partner_style", "deep")),
			"gain_scale": 0.55,
			"pan": link_pan,
			"from_pos": link.get("from_pos", Vector3.ZERO),
			"to_pos": link.get("to_pos", Vector3.ZERO),
			"explicit": bool(link.get("explicit", false))
		})

	# 查找温区 3：视野外正在发生的特殊高光事件（钟楼整句报时、远端演出、电车报站、升级琶音）
	var horizon_events: Array[Dictionary] = []
	for ev in _collect_special_horizon_events(state, life_snapshot, focus_xz, right_xz, r_feather, clock_sec):
		horizon_events.append(ev)

	return {
		"primary_style": primary_style,
		"r_focus": r_focus,
		"near_detail_mix": near_detail_mix,
		"macro_blend_mix": macro_blend_mix,
		"in_view_houses": in_view_houses,
		"linked_zones": linked_zones,
		"horizon_events": horizon_events,
		"silent_house_count": silent_house_count
	}
```

### 5.2 建房与点击房屋的“音高拨弦即兴反馈 (`Interactive Pitch Pluck`)”
为了让每一次点击建造都充满音乐玩具般的爽快感：
1. **五声音阶高度映射**：
   - 在 `scripts/audio/city_creation_reply_pcm.gd` 中，为每个街坊/时代主乐器预合成 5 个音高台阶的 `0.42s` 清脆拨弦短音，严格对齐当前大调/多利亚五声音阶：
     - `level == 0`（底层新建/扩房）：根音 `D4 (293.66 Hz)`；
     - `level == 1`（二层加高）：大二度 `E4 (329.63 Hz)`；
     - `level == 2`（三层塔楼）：纯四度/大三度 `F#4 / G4 (370.0 / 392.0 Hz)`；
     - `level == 3`（四层高塔）：纯五度 `A4 (440.0 Hz)`；
     - `level >= 4`（尖顶地标）：高音六度/八度泛音 `B4 / D5 (493.88 / 587.33 Hz)`。
2. **触发时机**：
   - 当玩家使用工具 1/2 放置新房格或拔高楼层时，立即按新建格的 `level` 与所在街坊主题播放对应音高的拨弦；
   - 当玩家在工具 5 或浏览状态下单击任意房屋时，按该房屋的 `max_level` 与用途角色播放一声清脆的特征和弦拨弦，并令该房屋窗户泛起一圈持续 `0.6s` 的金色微光脉冲！

---

## 第六章：纵向时代演进 × 横向多风貌街区并存体系

充分吸纳 已归档的旧《时代与地标》 的五时代构想，将其整合为 **四大渐进解锁的时代篇章（第一时代内含古典暖石与中世纪木石三样式）**，支持在同一座城市的不同街坊中自由并存：

### 6.1 四大时代篇章与多风貌街区全貌表

| 时代篇章与解锁里程碑 (`River Journal`) | 街坊可选风貌 (`era_theme` / `style`) | 标志性 3D 建筑几何与屋顶语法 | 专属街道与基础设施 | 专属音乐主题与器乐声部 | 时代新增功能建筑角色 |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **第一时代 (Era I)**<br>**古典与木石河湾**<br>*(开局默认解锁，含河湾手记第1～2章)* | • `classic`（古典暖石灰泥）<br>• `timber`（中世纪外露木筋）<br>• `stone`（深流错缝毛石） | • 双坡木筋山墙与阁楼圆窗<br>• 跨户连排/L/U四坡陶瓦顶<br>• 四格合围石铺喷泉内院<br>• 三层自动尖顶铜钟楼 | • `1.25m` 乡间鹅卵石小径<br>• 浅水汀步踏脚石 (`<2.6m`)<br>• 圆拱石桥与木雨棚门阶 | • `warm`（木吉他+木笛）<br>• `deep`（大提琴+竖琴）<br>• `weave`（马林巴+沙锤）<br>• `market`（手风琴+拨弦）<br>• `sylvan`（长笛+风铃） | • **河湾民居 (`residential`)**<br>• **麦香面包坊 (`bakery`)**<br>• **制琴木工坊 (`workshop`)**<br>• **花圃茶座 (`garden_cafe`)**<br>• **街坊演奏庭 (`venue`)** |
| **第二时代 (Era II)**<br>**文艺复兴人文长街**<br>*(建成 14 屋 + 完成茶聚与跨区问答后解锁)* | • `renaissance`（暖金砂岩与红砖拱券） | • **底层商住连拱柱廊 (`Ground Arcade`, 借鉴 CS2 Mixed-Use)**：二层以上临街建筑底层内退 `0.38m` 立起连续石柱圆拱廊<br>• **八角肋架红瓦穹顶 (`Renaissance Dome`)** 与采光亭<br>• 对称三角山花窗楣与雕花铁艺阳台 | • **`1.75m` 古典石板灯街 (`promenade`)**：暖白花岗石板 + 3D 暖光铁艺街灯 + 花箱<br>• **圆形石板环岛广场 (`Roundabout`)**：中心大理石双层喷泉或日晷 | • **`renaissance_fugue`（人文赋格曲）**：羽管键琴 (`Harpsichord`) + 独奏小提琴/中提琴 + 双簧管，擅长卡农模仿与复调对位（参考仓内 `midi-sketch-bach` 与 `arvo`） | • **人文画廊与书院 (`atelier`)**：学者与画师在此创作，向周边民居送达**彩绘玻璃圆窗、石雕壁龛与艺术挂毯**，解锁房屋 Lv.4 外观 |
| **第三时代 (Era III)**<br>**蒸汽钟表与浪漫花房**<br>*(建成 28 屋 + 拥有至少 2 个不同时代风貌街区后解锁)* | • `clockwork`（维多利亚红砖与青铜铸铁） | • **孟莎式双折屋顶 (`Mansard Roof`)** 与牛眼老虎窗<br>• **铸铁玻璃阳光花房 (`Glass Conservatory`)**：多层退台与屋顶生成墨绿铸铁肋架+半透明暖光玻璃穹顶<br>• 圆塔锥形板岩尖顶 (`Round Tower`) | • **`2.10m` 叮当有轨电车宽街 (`tram`, 借鉴 CS2)**：路面嵌双轨，复古木制暖光有轨电车沿轨巡游载客！<br>• 铸铁拱桥与街角报时立钟 | • **`clockwork_waltz`（浪漫圆舞与管弦）**：温暖立式钢琴 + 圆号 (`French Horn`) + 单簧管 + 钢片琴 (`Celesta`)；电车报站触发清脆和弦铜铃 | • **钟表与八音盒工坊 (`clockmaker`)**：制作精巧发条八音盒与屋脊风向标，调度跨街区**有轨电车音乐巡游线**，大幅提升跨区通勤效率 |
| **第四时代 (Era IV)**<br>**现代生态交响城**<br>*(建成 48+ 屋 + 贯通三时代共鸣后解锁)* | • `modern_eco`（原木流线白墙与垂直森林） | • **流线悬挑露台与暖光落地玻璃幕墙**<br>• **屋顶花园草坪与垂直森林绿植墙 (`Vertical Garden`)**<br>• **高层空中玻璃连廊 (`Skybridge`)**：相邻二/三层建筑自动架起空中花园步廊 | • **`2.10m` 生态林荫漫步大道 (`avenue`)**：透水浅灰石板 + 地面发光音符灯带 + 修剪行道树池与木长椅<br>• 流线白石跨河单拱景观桥 | • **`modern_symphony`（现代环境交响）**：温暖毡音钢琴 (`Felt Piano`) + 柔和模拟合成器铺底 (`Warm Synth Pad`, 参考仓内 `GodotSynth`) + 颤音琴 (`Vibraphone`) | • **交响音乐厅 / 水上剧场 (`symphony_hall`)**：可发起**“全城跨时空交响盛典”**，让城内所有时代的街区依次接力并在终章辉煌合奏！ |

### 6.2 跨时代街区相邻时的“无缝过渡美学法则”
1. **街坊风貌绑定 (`district.era_theme`)**：每个街坊 (`District`) 可独立设置 `era_theme` 与 `music_style`（默认联动，也可自由混搭，例如在古典石屋街区演奏空灵森林长笛）。
2. **跨风貌道路过渡拱门 (`Transition Gateway`)**：当一条道路跨越两个不同 `era_theme` 的街坊边界时，系统自动在交界点生成一座精致的 **风貌界碑拱架（古典石柱花拱 / 文艺复兴双柱牌坊 / 铸铁花艺灯门）**，路面材质在拱门下方 `1.8m` 内平滑渐变，让新旧街区交界处成为极具拍照观赏价值的打卡点！

---

## 第七章：Foundation × CS2 深度可持续经营、建筑 1–5 级自然进化与 6 座地标名胜

### 7.1 建筑 1～5 级自然品质演进（借鉴 CS2 `Building Levels 1–5`）
参考 [CS2 Development Diary #4: Zones \& Signature Buildings](https://www.google.com/search?q=https%3A%2F%2Fcolossalorder.fi%2Fnews%2Fdevelopment-diary-4-zones-signature-buildings%2F)，城内每栋民居与工坊均拥有 **共鸣品质等级 `level_tier ∈ [1, 5]`**（在现有 `house_improvements` 0～3 级基础上无缝扩展），无需玩家手动花钱点击升级，只要周边生活服务与共鸣体验到位，建筑就会**自动进化外观、点亮新装饰并丰富其音乐泛音**：

| 等级 (`level_tier`) | 自动晋升条件（纯正反馈，永不降级） | 新增 3D 外观细节（合批生成，零额外节点负担） | 声学与经营加成 |
| :--- | :--- | :--- | :--- |
| **Lv.1 初筑暖舍** | 房屋落成默认等级 | 基础时代墙体、屋瓦、木门与标准窗 | 基础音高拨弦与底层和声 |
| **Lv.2 安居花舍** | 接通道路 + 居民累计享用到 1 次麦香面包 | 门前铺设扇形鹅卵石迎宾垫 (`Cobble Apron`)、门旁添置陶罐花盆与暖色门廊壁灯 | 夜间/黄昏窗光亮度提升，居民移动速度 `+8%` |
| **Lv.3 雅致风铃屋** | 获得制琴工坊送装的木饰（或参加过 1 场街坊演出） | 窗台装上鲜花木箱与彩漆百叶窗，屋檐四角挂起随拍微摆的铜风铃 | 发声时自动叠加一层清脆的高八度泛音装饰音 |
| **Lv.4 连廊华宅** | 居民体验过花圃茶座品茶（或画廊服务）+ 临接石板灯街/内院 | 二层以上底层自动修饰雕花木柱廊/石拱廊，上层露台长出奶油帆布花架或铸铁阳光玻璃顶 | 若为工坊/面包坊，单次产出效率提升 `+25%` |
| **Lv.5 传世共鸣名宅** | 参与过跨区连奏或全城庆典接力 + 所在街坊拥有地标或时代建筑 | 屋脊升起金色音乐风向标、山墙嵌入彩绘玫瑰圆窗，夜间常驻柔和金色共鸣光晕 | 在视野声场中可担当复调华彩领奏，余韵时间翻倍 |

### 7.2 六座里程碑地标名胜（借鉴 CS2 `Signature Buildings` + 吸纳原 27 座地标内容池）
同样借鉴《城市天际线2》的 `Signature Buildings` 机制：当玩家达成特定城市建设与音乐共鸣里程碑时，将在工具 5（或河湾手记面板）解锁 **6 座独特地标名胜建筑**（同时将 已归档的旧《时代与地标》 中的元老院、圆形剧场、大教堂、钟楼、温室宫殿等精华浓缩为最具代表性的 6 大可放置杰作，支持**免费一键选址放置、可撤销、可移位**，每座提供独特 3D 奇观、全城 Buff 与专属地标声部）：

1. **【古钟瞭望圣塔 · Olden Bell Keep】** *(解锁：建成 10 屋 + 1 座跨水石桥)*
   - **外观与声学**：4 层高耸错缝毛石与木筋尖塔，内置 Foundation 真实铜钟 (`Church.glb`)；即使在视野外（温区 3），每 24 秒大循环首拍也会传来悠扬深邃的远方报时钟声。
   - **全城增益**：全城居民与工匠步行通勤速度 `+15%`，视野声场聚焦半径扩大 `+3m`。
2. **【河湾大水车磨坊 · Waterwheel Mill Bakery】** *(解锁：面包坊累计出炉 24 份面包)*
   - **外观与声学**：临水而建的双层木石磨坊，外侧巨大的木质水车随河水持续旋转，近景可听见治愈的木轮击水节奏声。
   - **全城增益**：自动为全城所有面包坊供应精磨面粉，使每炉面包产量从 `2 份` 提升至 `3 份`，烘焙耗时缩短 `20%`！
3. **【文艺复兴圆顶音乐院 · Santa Cecilia Rotunda】** *(解锁：进入第二时代 + 2 个街坊达成跨区问答)*
   - **外观与声学**：宏伟的暖金砂岩八角红瓦肋架穹顶与环绕石柱廊，作为超级演奏庭，内置管风琴与羽管键琴华彩声部。
   - **全城增益**：在此发起的街坊演出覆盖半径从 `22m` 扩大至 `38m`，且自动触发全城所有演奏庭同步接力！
4. **【皇家植物玻璃宫 · Crystal Botanical Conservatory】** *(解锁：花圃茶座累计促成 8 桌茶聚 + 种植 120 株植物)*
   - **外观与声学**：华丽的维多利亚墨绿铸铁与弧形玻璃三连拱花房，内含涌泉池与奇花异木，夜晚如同发光的翡翠水晶宫。
   - **全城增益**：全城所有茶座小聚与街坊演出的“共鸣余韵 (`Afterglow`)”持续时间从 `60 秒` 延长至 `180 秒`，周围草甸自动绽放双倍三色野花簇！
5. **【中央钟表电车总站 · Grand Clockwork Depot】** *(解锁：进入第三时代 + 铺设 `30m` 以上石板灯街/电车街)*
   - **外观与声学**：红砖与青铜齿轮装饰的复古车站大钟楼，自动向连通的轨街派出 **叮当音乐有轨电车**。
   - **全城增益**：居民可搭乘有轨电车跨街区快速赴约演出、饮茶与送货；电车每抵达一处路口或站点，奏响和谐的钢片琴双音铃声！
6. **【河湾水上交响剧场 · Floating Amphitheater】** *(解锁：进入第四时代 + 完成河湾手记前三章)*
   - **外观与声学**：依水岸展开的流线型白色水上舞台与半圆形石阶看台（古典圆形剧场与现代生态美学的结晶）。
   - **全城增益**：点击即可随时发起 **“全城跨时空交响盛典 (`Grand Chrono-Symphony`)”**——金色声波涟漪沿河道传遍全城，古典、文艺复兴、蒸汽与现代四大风貌街区在 24 秒内依次轮奏并在终章实现辉煌的全城大合奏！

---

## 第八章：大城性能保障架构（80m～120m 画布扩容与 120 FPS 稳态）

为支撑玩家建设横跨四大时代、拥有 150～300+ 栋房屋、多条有轨电车街与上千株植物的大城，必须严格执行以下 **五大性能工程铁律**：

1. **可编辑世界画布平滑扩容 (`EDITABLE_WORLD_RECT` 从 `35m×30m` 扩至 `80m×80m`)**：
   - 将 `city_creation_renderer.gd`、`city_creation_meadow.gd`、`city_creation_terrain.gd` 中的世界边界统一提取为共享配置常量 `WORLD_RECT = Rect2(-40.0, -40.0, 80.0, 80.0)`。
   - 保持 `16m×16m` 地形块与 `8m×8m` 草地/水岸/植被 `MultiMeshInstance3D` 分块粒度不变；`water_field` 与 `contact_field` 升级为 `512×512`（保持 `~0.16m/texel` 精度）并仅按笔画脏子矩形 (`dirty_rect`) 局部重算。因为所有编辑只更新局部受影响块，画布面积扩大 5 倍对单次建房/画路的耗时影响为 **0**！
2. **四温区声场的恒定声部池 (`Bounded 16-Voice Audio Engine`)**：
   - 依靠第五章的 **四温区视野声场架构**，城内 80% 以上的视野外建筑音频权重为 `0.0`。无论城市扩大到 50 栋还是 1,000 栋房屋，底层永远只需驱动 **固定 9～12 条共享同步长音轨 + 4～6 个短音效池播放器 + 2 条自然环境声床（溪流/林风）**，音频 CPU 开销恒定 `< 0.4ms`。
3. **静态网格顶点色合批 + GPU 硬件距离消隐 (`visibility_range_end`)**：
   - 继续使用 `city_creation_mesh_batcher.gd` 将每栋房屋的静态构件合并为 `1～3` 个 Surface；
   - 为路边卵石 (`path_pebbles`)、细草簇 (`meadow`)、屋檐铜风铃、窗台花箱等微小几何体设置 Godot 硬件距离裁剪：`visibility_range_end = 44.0`、`visibility_range_fade_mode = GeometryInstance3D.VISIBILITY_RANGE_FADE_SELF`，当镜头拉远俯瞰全城时，GPU 自动隐退微小碎石与细草，Draw Calls 削减 55% 以上！
4. **地形笔刷与房屋换色/升级的快速分帧通道**：
   - 房屋单纯换配色 (`palette`/`finish`)、切换时代样式 (`style`) 或晋升等级 (`level_tier`) 时，走单屋快速重批通道（耗时 `< 1.8ms`），绝不触发全城路网、庭院或草地掩码重算；
   - 地形笔刷 (`Tool 9`) 松手时，将受影响的 `16m` 地形块与 `8m` 草块送入 `city_creation_budget_rebuild.gd` 分帧队列（每帧预算 `<= 3.5ms`），彻底消除松手瞬间的同步卡顿。
5. **视野外居民与电车轻量化模拟 (`Off-Screen Scalar LOD Simulation`)**：
   - **取舍原则**：本作是音乐与建造驱动的轻经营游戏，视野外普通经营允许近似计算。以玩家看见、听见和操作到的成果为准，减少逐居民、逐帧模拟的工作量；采购、生产、送装可按预计完成时间或街坊服务能力汇总结算。
   - **视野内与镜头边缘缓冲区**：居民、工匠与有轨电车保持完整平滑的位移、朝向和动作。近景表演跟随共享逻辑状态，保留门阶、路面与建筑衔接。
   - **视野外近邻与即将入镜的活动**：保留角色身份和路线进度，以错峰低频更新推进；镜头返回时先计算当前状态，再恢复连续显示。可从5～10次/秒起步，按实测调整；缓冲区与切换迟滞避免频繁切档。
   - **远处普通街坊**：优先采用“出发时间 + 预计到达时间 + 完成事件”或街坊级服务计数，约1～2次/秒处理到期事件。跳过逐帧人物位移、朝向、摆动、高度采样和无变化的寻路；道路或用途改变时才更新相关连通性与行程。频率是实现起点，不是必须照搬的验收数字。
   - **音乐与玩家操作事件**：远方报时、跨区器乐问答、演出接力及其奖励仍由共享音乐时钟和完成事件驱动；视野外普通环境声沿用四温区静默规则。玩家编辑、存档、撤销和角色重新入镜时结清相关逻辑状态。
   - **保留的事实**：有效的道路连通、服务容量与完成顺序、奖励只结算一次、已有作品身份和存档一致。远端路径细节及中间动作无需与近景逐帧一致；验收比较服务结果、奖励与回镜连续性，允许短暂批处理延迟。确保200+居民活动时 `Life._process` 耗时 `< 0.8ms`，可见角色运动不因低频结算而卡顿。

---

## 第九章：仓库现有文档大瘦身与工作流去形式主义指南

### 9.1 精确到文件的移出归档清单（全部移入 `废弃/`，安全保留不删丢）

当前 `文档/` 下共有 46 个文件，其中 **37 个文件** 是旧 2.5D 河谷时代的遗留规格或单轮微切片的临时考据草稿，不仅与当前 3D 架构冲突，还迫使 AI 维护 154KB 的 `共鸣之城_文档合并精简版.md`。请执行以下一次性归档清理：

| 归档类别 | 需移入 `废弃/` 的具体文件路径 | 目标归档目录 |
| :--- | :--- | :--- |
| **1. 旧 2.5D 规格与过渡文档（共 28 份）** | • `文档/01_执行规格/` *(整个文件夹共 11 份 `spec.*.md`)*<br>• `文档/02_验收/` *(整个文件夹 `DOD.md`)*<br>• `文档/03_任务/` *(整个文件夹 `P0.md`, `P1.md`, `P2.md`)*<br>• `文档/10_世界模型.md`、`11_核心循环.md`、`14_城市生长.md`、`16_界面与反馈.md`、`18_城市规模.md`、`19_城市生成管线.md`、`20_开发接口与迁移.md`<br>• `文档/版本整合说明.md`、`需求与旧稿覆盖.md`、`待裁定与依赖.md`、`施工文档规则.md`、`共鸣之城_文档合并精简版.md` *(154KB)* | `废弃/文档_旧体系归档_2026-10-17/` |
| **2. 单轮临时考据笔记（共 9 份）** | • `文档/下一对话目标.md`<br>• `文档/地貌下一项调查_2026-10-16.md`、`庆典接力三库依据_2026-10-16.md`、`水岸石簇三库依据_2026-10-16.md`、`烘焙炊烟三库依据_2026-10-16.md`、`街坊声像三库依据_2026-10-16.md`、`街坊连奏三库依据_2026-10-16.md`、`街坊连奏接入调查_2026-10-16.md`、`露台花架三库依据_2026-10-16.md` | 移入对应的 `验证记录/*_2026-10-16/` 或 `废弃/文档_旧体系归档_2026-10-17/` |
| **3. 旧 2.5D 历史验证记录（80+ 个目录）** | • `验证记录/round150_*` 至 `验证记录/round218_*` 全部目录<br>• `验证记录/P0/`、`验证记录/Demo/`、`验证记录/连续河谷/`、`验证记录/round190_parse.log`、`验证记录/交接目标核对-第54轮.json` | `废弃/验证记录_旧2.5D归档/` *(历史验证仅在本地保留)* |
| **4. 根目录多余的 `.cmd` 启动器（13 个）** | • 根目录仅保留 **`启动Demo.cmd`**、**`继续我的河湾.cmd`**、**`打开创作样例.cmd`** 3 个核心入口；<br>• 其余 13 个 `.cmd`（`体验时代跨越.cmd`、`打开台地样例.cmd`、`打开地貌样例.cmd` 等）全部移入 `tools/样例启动器/`，并在游戏内左上角“作品收藏 (`Ctrl+O`)”面板新增 **【示范河湾】** 页签实现游戏内一键切换！ | `tools/样例启动器/` |

#### 当前 `文档/` 仅保留五份文档：

1. **`文档/code_artifact.md`** —— 唯一主设计与十二阶段路线。
2. **`文档/README.md`** —— 一页导航。
3. **`文档/21_新城创作切片.md`** —— 当前3D架构与数据流。
4. **`文档/参考索引.md`** —— 四库原始材料与复用入口。
5. **`文档/Demo快速开始.md`** —— 当前操作与快捷键。

旧五份专题备忘的思想已吸纳进本蓝图，原文随2.5D美术流水线、旧原生音频扩展、历史发布清单和单轮冻结对照迁入本地 `废弃/主仓库旧体系归档_2026-10-18/`。当前回归测试、运行依赖、四库资料和个人作品保留；不再把旧验证截图、便携包或备份重新纳入main。

---

### 9.2 直接覆盖 `AGENTS.md`、`AI_START_HERE.md`、`PROJECT.md` 与 `文档/README.md` 的全新正文

#### （1）新版 `AGENTS.md`（直接覆盖根目录 `AGENTS.md`）
```markdown
# 《共鸣之城》AI 施工准则 (四库融合长期施工版)

1. **核心使命与完全自主权**：
   - 你正在持续开发融合 **Tiny Glade**（自然箱庭美术与建筑道路丝滑接合）、**Townscaper**（点击即长的模块化邻接建筑生成）、**Foundation**（有机街坊、居民寻路与工坊生活）与 **Cities: Skylines II (`城市天际线2`)**（道路替换升级、挖填方护坡、环岛广场、四温区视野声场 `Audio Grouping`、建筑 1–5 级演进与地标名胜）的 3D 城市音乐游戏《共鸣之城》。
   - 你拥有项目内设计细化、代码实现、重构、着色器编写、参考库资产提取与验证的**完全自主权**。一切以**“最快做出能玩、好玩、好看、好听、有强烈正反馈的成果”**为准。

2. **阅读与导航顺序**：
   - 先读 `AI_START_HERE.md` 与 `PROJECT.md` 了解当前代码入口与当前所处的施工阶段（Phase 1 ～ Phase 12）；
   - 再读唯一主设计蓝图 `文档/code_artifact.md` 与 `文档/参考索引.md`。

3. **四库复用与轻量化工程纪律（拒绝形式主义内耗）**：
   - 允许并鼓励直接提取和适配本地参考库（`参考资料/Tiny-Glade逆向成品-v2`、`Foundation逆向成品-2026-10-13`、`Townscaper逆向成品`、`城市生成深化_2026-10-09`、`全项目补充研究_2026-10-10`）中的算法、GLSL 公式、恢复模型（`.glb`）与纹理/音频资源。
   - **禁止频繁打包内耗**：日常迭代中**不要**每做一个特性就打包 110MB+ 的 `交付/*.zip` 便携包（仅在用户明确要求导出试玩包时才打包）。
   - **禁止免责声明流水账**：`PROJECT.md` 与 `AI_START_HERE.md` 严禁堆砌逐轮文件 SHA 清单或“不称完整移植/非大城证明”等防御性话术，保持在 15KB 以内的高信噪比状态。
   - **最小充分验证**：每次改动只需跑通相关单元测试与 1 次实窗截图/帧时验证；若旧测试的死板限制与新设计冲突，主动升级测试以服务新设计。
```

#### （2）新版 `AI_START_HERE.md`（直接覆盖根目录 `AI_START_HERE.md`，替代原 45KB 流水账）
```markdown
# 《共鸣之城》AI 快速启动入口

## 1. 核心代码架构速查
- **主场景与入口**：`res://scenes/city_creation.tscn` → `scripts/ui/city_creation_demo.gd`
- **世界状态与存档 (`State`)**：`scripts/world/city_creation_state.gd`（含 `stroke`, `house_stroke`, `road_intent`, `junctions`, `passage`, `frontage`, `terrain`, `terrain_protection`, `courtyards`, `towers`, `growth`, `collection`）
- **市民生活与经营 (`Life`)**：`scripts/world/city_creation_life.gd`（含 `network`, `bakery`, `workshop`, `cafe`, `matinee`, `concert_relay`, `travel`, `district_links`）
- **3D 渲染与美术 (`Renderer`)**：`scripts/visual/city_creation_renderer.gd`（含 `meadow`, `foliage`, `shore`, `water_field`, `contact_field`, `terrain_surface`, `outcrops`, `building_context`, `gables`, `tower`, `house_styles`, `terrace_canopy`, `bakery_smoke`, `craft`, `cafe`, `courtyards`, `path_edge`, `path_pebbles`, `resonance`, `mesh_batcher`, `budget_rebuild` 及 `scripts/visual/shaders/*.gdshader`）
- **音乐与四温区视野声场 (`Music`)**：`scripts/audio/city_creation_music.gd`（含 `theme_pcm`, `reply_pcm`, `arrangement`, `district_reply`, `spatial`, `acoustic_field`）
- **Godot 引擎路径**：`D:/GODOT/Godot_v4.7.2-stable_win64_console.exe`

## 2. 长期施工推进顺序（详见 `文档/code_artifact.md` 第十章）
请对照 `PROJECT.md` 中的施工看板与 `文档/code_artifact.md` 第十章的 **Phase 1 ～ Phase 12** 持续推进：
- **Phase 1**：收口水岸石簇 + Tiny Glade 级 7 叶碗状饱满草毯 (`0.52m` 密植 + SSS 透射) + Filmic 暖阳光影与白昼/夕照/星夜三态灯火 + 收藏面板内置【示范河湾】一键切换。
- **Phase 2**：立体高地城建与 CS2 挖填方衔接（解除房路 0 米压平锁死，`house.base_y` 台地/山坡建房 + 自适应错缝毛石高地基 `stone_plinth` + 顺坡道路 + 陡坡自动 3D 石阶 `road_stairs` + 横坡挖填方挡土石墙）。
- **Phase 3**：CS2 式道路就地刷涂升级（`1.25m` 乡间石径 → `1.75m` 古典石板灯街 → `2.10m` 林荫大道 → `2.10m` 叮当电车街）与路口一键圆形环岛广场 (`Roundabouts & Plazas`)。
- **Phase 4**：四温区视野声场架构 (`Acoustic Grouping`：视野核心发声 + 内联区域问答 + 远端特殊事件低通微音 + 视野外静默保谐)、建房/点房五声音阶拨弦即兴试听与工具 8 手动跨区共鸣连线 (`musical_links`)。
- **Phase 5 ～ Phase 12**：四大时代演进解锁 × 多风貌街区同城并存（古典木石、文艺复兴连拱穹顶与书院、蒸汽钟表玻璃花房与有轨电车、现代生态悬挑露台与空中连廊）、建筑 1–5 级自动进化、6 座免费地标名胜 (`Signature Buildings`)、自然环境声床与 `80m×80m` 大城画布扩容。
```

#### （3）新版 `PROJECT.md`（直接覆盖根目录 `PROJECT.md`，替代原 88KB 流水账）
```markdown
# 《共鸣之城》项目状态与十二阶段施工看板

## 1. 已就绪基座 (v1 基线)
- [x] 9 大核心工具（1房屋、2露台、3道路、4移除、5用途/样式、6植被、7水岸、8街坊、9地形）与三大面板（作品收藏 `Ctrl+O`、河湾手记 `J`、生活账本 `L`）
- [x] 基础建筑拓扑：跨户共墙、双坡山墙圆窗、三层铜钟尖塔、四格闭合石铺喷泉内院、二层露台木花架、灰泥/木构/石砌三样式与 7 套配色
- [x] 基础道路与水岸：自由曲线/直拉折线、急弯圆角、路口扩口、柔路缘与卵石、触墙三级石阶、穿房圆拱通道、0.5m 地形场、湿砂河岸与平顶台地
- [x] 基础音乐与经营：9 长轨 + 4 短音池 + 6 声像总线；面包坊（含炊烟）、制琴坊、花圃茶座、街坊演出 22m 合唱、自发巡演与多庭庆典接力

## 2. 四库融合十二阶段长期施工看板（对照 `文档/code_artifact.md` 第十章逐项推进）
- [ ] **Phase 1**：水岸石簇收口 + 7 叶碗状饱满草毯 (`0.52m` + SSS 透射) + Filmic 光影与昼/夕/夜三态灯火 + 作品收藏内置【示范河湾】页签
- [ ] **Phase 2**：立体高地城建（解除房路 0 米压平锁死，`house.base_y` 台地/山坡建房 + 自适应毛石高地基 `stone_plinth` + 门前动态 1～10 级石阶）
- [ ] **Phase 3**：坡地道路与 CS2 挖填方护坡（顺坡道路高程 + 坡度 `>0.22` 自动生成 3D 石阶路与护栏 + 横坡高差 `>0.35m` 自动生成挖方挡土石墙与填方护坡）
- [ ] **Phase 4**：CS2 式道路就地升级 (`Replace Tool`：双刷升级 `1.75m` 古典石板灯街与 `2.10m` 林荫大道，含 3D 暖光铁艺街灯/花箱/行道树) 与路口一键圆形环岛广场 (`Roundabouts`)
- [ ] **Phase 5**：四温区视野声场架构 (`city_creation_acoustic_field.gd`：视野内发声 + 内联区域问答 + 远端特殊事件低通微音 + 视野外静默保谐) + 建房/点房五声音阶拨弦反馈 + 手动跨区共鸣连线 (`musical_links`)
- [ ] **Phase 6**：纵向时代解锁 × 横向风貌街区并存框架 + **第二时代：文艺复兴人文长街**（暖金砂岩、底层商住连拱柱廊 `Ground Arcade`、八角红瓦穹顶、人文书院画廊 `atelier`、羽管键琴与弦乐赋格声部）
- [ ] **Phase 7**：建筑 `Lv.1 ～ Lv.5` 自然品质进化系统（迎宾石垫 → 花箱百叶窗 → 屋檐铜风铃 → 连廊/阳光花架 → 金色风向标与复调泛音）与首批 3 座免费地标名胜（古钟瞭望塔、河湾大水车磨坊、文艺复兴圆顶音乐院）
- [ ] **Phase 8**：水景生态深化（浅水 `<2.6m` 自动汀步踏脚石、池塘睡莲浮叶与莲花、水面三色带与微凹岸坡）+ Foundation 自然环境声床（溪流声、林风、昼鸟鸣与夜虫鸣）
- [ ] **Phase 9**：**第三时代：蒸汽钟表与浪漫花房**（红砖孟莎顶、铸铁玻璃阳光花房 `Conservatory`、圆塔锥形顶、钟表八音盒工坊 `clockmaker`、钢琴圆号圆舞曲）+ **叮当有轨电车网络 (`Tram Avenue`)** 与【中央钟表电车总站】地标
- [ ] **Phase 10**：**第四时代：现代生态交响城**（流线悬挑露台、屋顶花园与垂直森林、高层空中玻璃连廊 `Skybridge`、毡音钢琴与合成器交响）+ 【皇家植物玻璃宫】与【河湾水上交响剧场】终极地标及全城跨时代大合奏
- [ ] **Phase 11**：`80m×80m` 大城画布扩容、远景环山天际线 (`MountainFar.glb`)、跨时代街区交界过渡拱门 (`Transition Gateway`) 与环形轮唱空间演奏语法
- [ ] **Phase 12**：大城 120 FPS 终极性能收口（全装饰层 GPU `visibility_range_end` 裁剪、地形笔刷与房屋换色/升级快速分帧通道、视野外居民标量 LOD 模拟与全时代综合示范城）
```

---

## 第十章：面向施工 AI 的十二阶段超长持续施工路线图（Phase 1 ～ Phase 12 完整开发蓝图）

本路线图将所有设计拆解为 **12 个环环相扣、每个阶段都有极强可视/可听正反馈的工程里程碑**，足够支撑施工 AI 稳定、深入、高质量地持续施工数十轮。

---

### Phase 1：水岸石簇收口、Tiny Glade 级 7 叶饱满草毯、Filmic 暖阳光影与昼/夕/夜三态灯火
- **核心目标**：先收口当前未提交的水岸石簇改动，随后一次性解决草地稀疏发灰与光影平淡问题，加入惊艳的星夜万家灯火模式，并在游戏内收藏面板支持一键切换所有官方示范河湾。
- **具体施工内容**：
  1. **收口 `scripts/visual/city_creation_shore.gd`**：完成当前工作区未提交的岸边扁石母子簇与水草分布测试，确保主河与池塘岸际过渡自然。
  2. **升级全局光影与昼/夕/夜三态 (`scripts/ui/city_creation_demo.gd` & `city_creation_resonance.gd`)**：
     - 按第四章 4.1 节代码启用 `TONE_MAPPER_FILMIC`（`exposure = 1.08`, `white = 1.85`）与 `ProceduralSkyMaterial` 天空半球光；
     - 将光照按钮升级为 **白昼 → 夕照 → 星夜** 三态循环；在星夜模式下，全城所有房屋窗户开启 `35%~45%` 基础温暖室光（主奏/合唱房屋跃升至 `90%~100%`），门灯、茶座灯笼与音弧高亮显示。
  3. **升级 7 叶双圈碗状草簇与 SSS 着色器 (`city_creation_meadow.gd`, `creation_meadow_palette.gdshaderinc`, `creation_lawn.gdshader`)**：
     - 按第四章 4.2 节代码将 `BASE_SPACING` 加密至 `0.52m`，将 `_ribbon` 升级为 7 片碗状宽柔叶带，实装草根 `0.80` AO 压暗与叶尖 `1.22` 暖金透射 SSS。
  4. **收藏面板内置【示范河湾】一键加载 (`scripts/ui/city_creation_gallery_panel.gd`)**：
     - 在 `Ctrl+O` 作品收藏面板顶部增加 **【官方示范河湾】** 分栏，读取 `数据/*样例.json`（创作、庭院、地貌、台地、街坊连奏、建筑街景、经营河湾、庆典接力、露台花架），点击即可直接切换体验。
- **阶段验收标准**：实窗对比白昼、夕照、星夜三态截图，草毯丰润翠绿无裸土斑块，星夜窗光温暖迷人，示范河湾可在游戏内一键秒切。

---

### Phase 2：立体高地城建——台地/山坡建房、自适应错缝毛石高地基 (`Stone Plinth`) 与动态门阶
- **核心目标**：彻底解除“建房强制把台地和草丘压回 0 米”的死锁，让房屋稳稳立在 2m 台地与山坡上，并自动长出厚重的毛石勒脚高地基与接地门阶。
- **具体施工内容**：
  1. **`scripts/world/city_creation_state.gd`**：
     - 新建房屋时采样起笔处的未保护地形高度，存入 `house["base_y"] = clampf(roundf(sampled_y * 20.0) / 20.0, 0.0, 6.0)`（旧档缺省 `0.0`）；
     - `house_center(house)` 与 `door_world_pos(house)` 的 Y 坐标统一加上 `float(house.get("base_y", 0.0))`。
  2. **`scripts/world/city_creation_terrain_protection.gd` & `city_creation_terrain.gd`**：
     - 房屋、内院、茶座保护矩形新增 `"target_y": float`；
     - 地形高度求解器在保护区内向 `target_y` 平滑过渡（边缘 `1.2m` 余弦羽化），在 2m 台地上建房时台地保持 2m 高程，绝不塌陷回 0 米！
  3. **`scripts/visual/city_creation_renderer.gd` & `city_creation_frontage.gd`**：
     - 底层房格根据四角真实地面最低高度 `min_ground_y` 动态向下延伸错缝毛石高地基 (`stone_plinth`) 至 `min_ground_y - 0.16m`；
     - 门前石阶 (`city_creation_frontage.gd`) 根据门口 `base_y` 与门前地面/路面实际高度差动态生成 `1～10` 级石阶。
- **阶段验收标准**：打开 `数据/台地河湾样例.json` 或用工具 9 刷出 2m 台地与斜坡，在台地顶和半山腰建房，台地不塌陷、半山腰房屋下方自动长出厚实石砌高台基、门阶严丝合缝接地。

---

### Phase 3：坡地道路与《城市天际线2》式挖填方护坡（顺坡路 + 陡坡 3D 石阶 + 横坡挡土石墙）
- **核心目标**：让道路能够顺畅爬上台地与山丘，缓坡顺滑贴地、陡坡自动变成 Tiny Glade 式层叠石阶，横切斜坡时自动生成 CS2 式挖方挡土矮石墙与填方护坡。
- **具体施工内容**：
  1. **道路高程曲线 (`scripts/world/city_creation_terrain_protection.gd` & `city_creation_renderer.gd`)**：
     - 干地道路中心线采样点读取平滑后的地形高度 `road_y(s)`（两端若接房屋门口则平滑对齐门口 `base_y`，跨水段平滑衔接拱桥高度）；
     - 道路保护多边形携带沿线插值高程 `target_y(s)`，使路面与两侧 `0.8m` 路肩平滑贴合坡面。
  2. **陡坡自动石阶 (`road_stairs`) 与横坡挖填方挡土墙 (`Cut & Fill Retaining Wall`)**：
     - 当干地道路相邻采样段纵向坡度 `grade = abs(dy) / ds > 0.22` 时，路面自动生成每级高 `0.12m` 的 **3D 石阶网格** + 两侧 `0.34m` 高的石砌矮护栏；
     - 当道路左右路缘外侧 `0.9m` 地形高度与路面高差 `> 0.35m` 时，高侧自动生成 **挖方挡土矮石墙 (`Cut Wall`)**，低侧自动生成 **填方毛石护坡 (`Fill Embankment`)**；
  3. **居民与工匠三维寻路高程 (`scripts/world/city_creation_life.gd`)**：
     - 居民沿路行走时实时采样 `road_height_at(pos_xz)`，实现真实的拾级而上登上台地。
- **阶段验收标准**：从河畔平地画一条路直通 2m 台地顶部的房屋门口，斜坡段自动生成精美石阶与护栏/挡土墙，居民沿石阶走上台地进屋。

---

### Phase 4：《城市天际线2》式道路就地升级 (`Replace Tool`) 与路口一键圆形环岛广场 (`Roundabouts`)
- **核心目标**：实现“在已有路上再刷一笔即可就地升级为石板灯街/林荫大道”，并支持点击路口一键生成带中心喷泉/日晷的圆形石板环岛广场。
- **具体施工内容**：
  1. **道路样式与重刷升级 (`scripts/world/city_creation_state.gd` & `city_creation_renderer.gd`)**：
     - 为 `road` 增加 `"style": String`（`"cobble"` `1.25m`、`"promenade"` 古典石板灯街 `1.75m`、`"avenue"` 林荫大道 `2.10m`）；
     - 工具 3 支持选择道路样式，或沿着已有道路重刷直接升级其 `style` 与 `width`（保留全部路口、拱门与门阶）；
     - 渲染层为 `"promenade"` 与 `"avenue"` 沿路两侧每隔 `4.5m` 用 MultiMesh 布置 **3D 古典暖光铁艺街灯**（含夜间/夕照暖光灯罩与地面柔光圈）、鲜花石箱与修剪行道树。
  2. **一键圆形环岛广场 (`scripts/world/city_creation_junctions.gd` & `city_creation_renderer.gd`)**：
     - 工具 3 增加“◎ 环岛广场”按钮（或在道路模式下点击交叉口），将交点设为 `roundabout_radius = 2.4`；
     - 生成圆形错缝石板环岛与切线喇叭口接入道，中心自动生成 **双层石雕涌泉池或花坛日晷**，居民绕环岛外环流畅行走。
- **阶段验收标准**：将主街双刷升级为 `1.75m` 石板灯街，两侧亮起铁艺路灯；点击十字路口一键生成圆形喷泉环岛，测试撤销/重做与存档恢复。

---

### Phase 5：四温区视野声场架构 (`Acoustic Grouping`)、建房音阶拨弦与手动跨区共鸣连线
- **核心目标**：完整落地第五章的“视野核心发声 + 内联区域问答 + 远端特殊事件低通微音 + 视野外静默保谐”机制，加入建房/点房五声音阶拨弦反馈与手动跨区共鸣连线。
- **具体施工内容**：
  1. **新建 `scripts/audio/city_creation_acoustic_field.gd` 并接入 `city_creation_music.gd`**：
     - 按第五章 5.1 节代码实现四温区权重评估器、镜头缩放 `zoom` 三档声学 LOD，以及专门用于第 3 温区（远端钟声、远端演出余音、升级琶音）的 `1800Hz` 低通滤波方向总线 (`HorizonEventBus`)；
     - 确保视野外非内联、非特殊事件的街区权重严格为 `0.0`。
  2. **建房与点击房屋的五声音阶拨弦 (`Interactive Pitch Pluck`)**：
     - 按第五章 5.2 节规格，在放置房格、加高楼层或单击房屋时，按 `level 0~4` 播放对应五声音阶 (`D4, E4, F#4/G4, A4, D5`) 的街坊主乐器拨弦，并触发窗光涟漪。
  3. **工具 8 新增“♫ 手动跨区共鸣连线 (`state.musical_links`)”**：
     - 支持玩家在工具 8 中从一个街坊拖拽一条常驻微光音弧连接到任意另一个街坊（哪怕隔河无桥），使两区成为永久“内联共鸣区 (`Linked Zone`)”，在偶数乐句跨空对答并在演出时隔岸同亮暖窗。
- **阶段验收标准**：在大城场景下移动与缩放镜头，验证视野内发声清晰、内联街区跨河对答、视野外远端街区静默不杂乱；连续点击建房加层能弹出悦耳音阶旋律。

---

### Phase 6：纵向时代解锁 × 横向风貌并存框架 + “第二时代：文艺复兴人文长街”落地
- **核心目标**：建立“时代全局解锁 + 街坊独立指定风貌 (`era_theme`)”同城并存机制，并完整落地第二时代（文艺复兴砂岩立面、底层商住连拱柱廊、八角红瓦穹顶、人文书院画廊与羽管键琴弦乐赋格）。
- **具体施工内容**：
  1. **时代解锁与街坊 `era_theme` (`city_creation_growth.gd` & `city_creation_state.gd`)**：
     - 扩展河湾手记支持四大时代解锁；工具 8 支持为每个街坊设置 `era_theme ∈ ["pastoral", "renaissance", "clockwork", "modern_eco"]`；老街区默认保留 `"pastoral"` 不被覆盖。
  2. **文艺复兴三维建筑语法 (`scripts/visual/city_creation_architecture.gd` & `city_creation_renderer.gd`)**：
     - **底层商住连拱柱廊 (`Ground Arcade`, 借鉴 CS2 Mixed-Use)**：文艺复兴街区（或紧邻 `1.75m` 石板灯街）的二层以上建筑，底层外墙自动内缩 `0.38m`，外沿立起古典石柱与圆拱券廊，廊下点缀暖光壁灯；
     - **八角肋架红瓦穹顶 (`Renaissance Dome`)**：2×2 连格或三层塔楼在文艺复兴区自动生成佛罗伦萨式八角红瓦穹顶与采光亭；
  3. **新增第 6 功能角色——人文画廊与书院 (`atelier`) + `renaissance_fugue` 音轨**：
     - 学者与画师在此创作并向周边住宅送装彩绘圆窗与浮雕；合成羽管键琴 (`Harpsichord`) + 独奏小提琴/双簧管卡农赋格长轨与短音。
- **阶段验收标准**：在同一座河湾中，西岸保留第一时代古典木石老城，东岸划定第二时代文艺复兴街区，建起连拱廊街与八角穹顶书院，两区隔河拉出共鸣连线实现“木吉他与羽管键琴跨时空对答”。

---

### Phase 7：建筑 `Lv.1 ～ Lv.5` 自然品质进化与首批 3 座免费地标名胜 (`Signature Buildings`)
- **核心目标**：落地第七章的《城市天际线2》式建筑 1～5 级自动外观/音色进化系统，以及前 3 座免费可放置里程碑地标名胜。
- **具体施工内容**：
  1. **建筑 `Lv.1 ～ Lv.5` 自动进化 (`city_creation_state.gd` & `city_creation_craft.gd`)**：
     - 按第七章 7.1 节条件实时评估每栋房屋的 `level_tier (1..5)`；晋升时播放竖琴上行琶音并合批生成对应等级装饰（迎宾卵石垫 → 窗台花箱与百叶窗 → 屋檐铜风铃 → 底层柱廊/露台花架 → 金色屋脊风向标与玫瑰花窗）。
  2. **首批 3 座地标名胜 (`scripts/world/city_creation_landmarks.gd` & `city_creation_renderer.gd`)**：
     - 实现 **【古钟瞭望圣塔】**（4层石塔+真实铜钟+全城移速 Buff）、**【河湾大水车磨坊】**（临水旋转大水车+水车木音+全城面包产量 `+1`）、**【文艺复兴圆顶音乐院】**（八角穹顶柱廊+`38m` 超级演出半径）；
     - 在工具 5 或手记面板中支持里程碑解锁后一键免费放置、移位与撤销。
- **阶段验收标准**：观察民居随着面包、木饰、茶座与画廊服务从 Lv.1 自动长成 Lv.5 华宅；在河岸放置大水车磨坊，水车持续旋转且面包坊每炉产出升至 3 份。

---

### Phase 8：水景生态深化（浅水汀步石 + 池塘睡莲 + 微凹岸坡）与 Foundation 自然环境声床
- **核心目标**：让水岸、浅渠、池塘与森林在视觉和听觉上都充满自然生机。
- **具体施工内容**：
  1. **浅水汀步踏脚石 (`Stepping Stones`) 与池塘睡莲 (`Lilypads`)**：
     - `1.25m` 小径跨越 `< 2.6m` 窄水渠时，自动生成扁平青石汀步踏脚石与水面涟漪圈，居民踩石过水触发水滴木琴微音；
     - 在静水池塘岸距 `-0.85m ~ -0.25m` 处，用 MultiMesh 散布翠绿睡莲浮叶（10 三角）与粉白莲花（60 三角）。
  2. **自然环境声床 (`scripts/audio/city_creation_ambient.gd`)**：
     - 接入 Foundation 溪流声 (`386937418.wav` 或程序化柔和流水声) 与林间微风/白昼鸟鸣/星夜虫鸣，根据当前镜头视野内的可见水域面积、树木株数与昼夜状态实时平滑调节音量（峰值 `<= 0.032`，受静音键统一控制）。
- **阶段验收标准**：镜头移近河岸与池塘时听见潺潺流水声，移向森林听见微风鸟鸣（星夜转为静谧虫鸣），池塘浮现睡莲，小径跨浅渠呈现汀步石。

---

### Phase 9：“第三时代：蒸汽钟表与浪漫花房”、叮当有轨电车网络与【中央钟表电车总站】
- **核心目标**：落地第三时代维多利亚红砖孟莎顶、铸铁玻璃阳光花房、圆塔锥形顶，以及沿 `2.10m` 轨街循环巡游、会发声报站并载客跨区通勤的叮当有轨电车系统！
- **具体施工内容**：
  1. **蒸汽钟表建筑语法 (`clockwork`) 与铸铁玻璃花房 (`Glass Conservatory`)**：
     - 新增暖红砖墙、青铜饰件、孟莎式双折屋顶 (`Mansard Roof`)、16 边形圆塔锥形尖顶 (`Round Tower`)，以及多层退台自动生成的 **墨绿铸铁弧形玻璃阳光花房**（夜间透出温润暖绿光）。
  2. **钟表与八音盒工坊 (`clockmaker`) + 叮当有轨电车 (`scripts/world/city_creation_tram.gd`) + 【中央钟表电车总站】地标**：
     - 当玩家将道路升级为 `"tram"`（有轨电车宽街）或放置【中央钟表电车总站】时，自动在连通轨街上生成复古木制暖光有轨电车；
     - 电车沿轨平滑移动（参考仓内 `godot-road-generator/road_lane_agent.gd`），经过路口或站点时触发和谐的钢片琴/铜铃双音 (`Tram Chime`)，并将沿途居民快速载往演奏庭、茶座或市集！
- **阶段验收标准**：在第三时代街区建起玻璃花房与红砖孟莎顶建筑，铺设电车轨街，看着复古叮当电车亮着暖灯沿街巡游、报站鸣铃并接送居民。

---

### Phase 10：“第四时代：现代生态交响城”、空中玻璃连廊与【河湾水上交响剧场】终极盛典
- **核心目标**：完成第四时代现代生态建筑与音乐拼图，落地【皇家植物玻璃宫】与【河湾水上交响剧场】两座终极地标，实现四大时代同城接力大合奏。
- **具体施工内容**：
  1. **现代生态建筑语法 (`modern_eco`)**：
     - 极简暖白悬挑露台、大面积暖光落地窗、屋顶草坪花园、垂直森林立体绿墙，以及相邻高层建筑在二/三层自动架起的 **空中玻璃花园连廊 (`Skybridge`)**。
  2. **现代环境交响声部 (`modern_symphony`)**：
     - 合成温暖毡音钢琴 (`Felt Piano`)、模拟合成器铺底 (`Warm Synth Pad`) 与颤音琴 (`Vibraphone`) 音轨。
  3. **【皇家植物玻璃宫】与【河湾水上交响剧场】终极盛典**：
     - 点击水上交响剧场发起 **“全城跨时空交响盛典”**——水面与街道扩散金色声波环，城内古典、文艺复兴、蒸汽与现代四大风貌街区在 24 秒大循环中依次领奏并在第 7～8 乐句全体合奏，全城灯火与音弧交相辉映！
- **阶段验收标准**：在河湾中同时建成四大时代街区，点击水上交响剧场触发跨时空交响盛典，验证四时代视觉与器乐接力合奏的震撼高潮。

---

### Phase 11：`80m×80m` 大城画布扩容、远景环山天际线与跨风貌过渡拱门
- **核心目标**：将可编辑河湾画布扩大至 `80m×80m`（面积扩大近 6 倍），加入远景环山轮廓、跨时代道路交界拱门与环形轮唱空间语法。
- **具体施工内容**：
  1. **世界画布扩容至 `Rect2(-40.0, -40.0, 80.0, 80.0)`**：
     - 扩展蜿蜒主河道与支流溪谷，外围布置 Foundation `MountainFar.glb` 远景环山天际线，镜头平移与缩放范围同步适配。
  2. **跨风貌街区交界过渡拱门 (`Transition Gateway`)**：
     - 当道路跨越两个不同 `era_theme` 的街坊边界时，自动在交界处生成风貌过渡拱门与路面渐变带。
  3. **环形轮唱空间演奏语法 (`Circular Canon`)**：
     - 当围合内院的房屋或环岛周围的房屋处于激活声场时，支持按极角顺时针每拍依次点亮一栋房屋并奏响轮唱音符（呼应 `文档/12_声音架构.md` 的环形轮唱设计）。
- **阶段验收标准**：在 `80m×80m` 画布上跨河跨山规划四大时代街区，验证边界过渡拱门、环形轮唱与大画布保存/读取完整性。

---

### Phase 12：大城 120 FPS 终极性能收口与《共鸣之城》旗舰示范大城交付
- **核心目标**：在 150～300 栋建筑、4 个时代街区并存、200+ 居民与有轨电车同时运转的宏大规模下，实现稳态 `60～120+ FPS` 与拖拽编辑零卡顿，并内置一座集大成的旗舰示范大城存档。
- **具体施工内容**：
  1. **全装饰层 GPU `visibility_range_end` 硬件距离消隐**：
     - 为草簇、路缘卵石、睡莲、风铃、花箱、炊烟团绑定分级消隐距离与 `VISIBILITY_RANGE_FADE_SELF`。
  2. **地形笔刷与房屋换色/升级的快速异步通道 + 视野外居民标量 LOD 模拟**：
     - 确保任何单次点击或拖拽松手的主线程阻塞 `< 4.0ms`；按第八章第5项实现视野内完整表演、近邻低频推进、远端按时/按街坊汇总结算。验证回镜连续、服务/奖励一次结算、编辑失效与存档一致；远端中间动作允许近似。
  3. **创作并内置旗舰示范存档 `数据/四库共鸣交响大城样例.json`**：
     - 在 `80m×80m` 河湾上精心构建一座包含四大时代街区（古典老城河湾、文艺复兴连拱长街、蒸汽花房电车区、现代生态水上剧场区）、6 座地标名胜、高低台地石阶路与跨河共鸣连线的 120+ 屋旗舰示范大城，放入“作品收藏 → 官方示范河湾”第一位！
- **阶段验收标准**：一键加载 `四库共鸣交响大城样例.json`，在白昼、夕照、星夜三态下巡游全城，验证帧率稳健、视野声场切换丝滑纯净、全城跨时代交响盛典美轮美奂！
