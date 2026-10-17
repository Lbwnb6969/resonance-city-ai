# 第一时代 · 古典精制河湾

运行 `python tools/build_refined_valley_art.py` 可重建本目录的 PNG、编辑 SVG、几何投影阴影、接地遮罩、manifest、接触表与 `validation.json`。生成器沿用项目 45°/30° 正交投影和 BSP 遮挡排序。

建筑语汇属于第一时代的古典希腊与罗马：暖石墙、石砌门洞、木百叶深窗、陶瓦、露台、住宅内庭柱廊、敞开 taberna 商铺，以及六柱 Doric 文化馆的完整山墙、凹槽柱身、柱头、柱式檐部和浮雕。Round208 的两类自然植被为分叉橄榄树与细长地中海柏：橄榄树有偏折多股主干、五组主要分叉、不等大小灰绿叶冠、折叠窄叶与可见内隙；柏树沿细长偏斜主轴形成高低不齐的竖向枝束，保留小分叉和不规则外轮廓，不沿用横向锥片串。两者是完整体积几何，经 BSP 遮挡排序烘焙。

八种建筑各有四个真实几何朝向，加上两类树，共 34 个生产资源。每个朝向先绕模型地脚旋转几何，再独立计算光照、BSP 遮挡、透明 PNG 与实际 cast/contact 投影；没有旋转最终贴图。`orientation=0/1/2/3` 的门面分别朝 World 北/东/南/西，对应模型 `-z/+x/+z/-x`。canonical ID 为 0，其他 ID 为 `_o1/_o2/_o3`；`manifest.orientations` 列出所有模板。接触表显示朝向 2，以便看清正面构件。

生产接口：

```gdscript
building_catalog.entry_for(building, fallback, family, orientation)
building_catalog.preview_entry(expression, orientation = 0)
building_catalog.prop_entry(kind, tone, era = 1, orientation = 0)
```

住宅仍按稳定建筑 ID 选择露台、坡瓦、庭院几何。深流、织机、暖庭声音卡与实际作者根共用生产模板。树的整数 tone 用模 2 轮换。

替换按真实 `building.era` 限定第一时代，保留旧建筑的出生时代身份。第二时代直接取保留时代 manifest 的同用途资源；其他后时代返回既有 fallback。第一时代以外的 `prop_entry` 返回空，让原有公共点与树的绘制入口继续工作。World 的用途、朝向记录、实际占地、声音、RNG、保留地和存档字段由原系统管理。

全部地脚均为模型 `(0,0,0)`，texture origin 与 pixels_per_world、对应 cast/contact 遮罩直接进入既有生产 sprite、阴影和 alpha 命中流程。建筑仍采用原有 `0.8` 落地显示比例。PNG 导入启用 mipmap 和 alpha 边缘修复。

验证命令：

```powershell
python tools/build_refined_valley_art.py
& 'D:\GODOT\Godot_v4.7.2-stable_win64_console.exe' --headless --audio-driver Dummy --editor --path . --import
& 'D:\GODOT\Godot_v4.7.2-stable_win64_console.exe' --headless --audio-driver Dummy --path . --script tests/round206_refined_art.gd
```

结果：34 组实际烘焙文件的透明边界、地脚与 SHA-256 通过；Godot 实际生产合同 20/20 通过，记录 `验证记录/round206_精制河湾/asset_contract.json`。合同涵盖 24 栋真实启动街坊、实际三条作者路线、暖庭真实保留地、四种几何方向、时代隔离、mipmap 预热、透明轮廓点击与接地遮罩。

只更新两类树运行 `python tools/build_refined_valley_art.py --trees-only`，随后导入资源，再运行 `tests/round208_tree_contract.gd`（headless + Dummy）。Round208 未重新生成建筑；32 个建筑 entry 与 256 个建筑文件（含 import）全部保持字节和哈希不变。当前树 ID 仍为 `refined_tree_canopy` / `refined_tree_pine`，分别对应 tone 0 橄榄、tone 1 地中海柏，不改变 catalog、World 或 RNG。

Round208 最小生产合同 **9/9** 通过，记录 `验证记录/round208_古典植被/tree_contract.json`；同目录 `geometry.json` 记录独立最近深度三角光栅与实际 BSP PNG 的遮挡一致率（橄榄 94.90%、柏 94.30%，排除边缘抗锯齿，RGB 容差 24），以及旧新轮廓变化。`树形旧新对照.png` 同时给出放大与实际城市尺寸。橄榄约 31×37 px，柏约 17×44 px；原树源码、PNG、SVG、cast/contact、导入设置和说明保留在 `废弃/美术/round208_树形替换前`。自然形态与街景氛围仍由 Root 实际窗口审阅。

独立合同使用 headless + Dummy。最终城市尺寸下的美术与道路朝向关系由实际窗口检查。旧资源全部保留；首轮窗格探索说明和合同保留于 `废弃/美术/round206_首版窗格`，对应首轮实际窗口截图另有 Root 留存。
