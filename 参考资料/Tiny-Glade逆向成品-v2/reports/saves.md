# 存档格式、编辑历史与无损提取

## 覆盖

对安装目录 `assets` 的 34 个快照、35 个 history JSON，以及用户 `Saved Games/Tiny Glade` 的 34 个快照、9 个 history JSON进行了独立解析。共 68 个快照、44 个历史文件，解析错误 0。用户集合包括缓存与旧备份，统计不是 44 个独立玩家世界。证据为 `evidence/saves_packaged_audit.json` 和 `evidence/saves_audit.json`，每个文件均记录实际 SHA-256。

没有启动游戏，没有更改任何存档。所有快照均按原块序列重组并与原始字节比较；两个不同结构的快照另经 CLI 提取到新目录再 repack，文件 SHA-256 完全相同。

## 快照容器

整个文件是重复的块，而非加密存档。块头 16 字节：8 字节 magic、little-endian u64 payload 字节数，随后紧接 payload。按长度读到 EOF，无隐含对齐。

首块 magic=`Snapshot`，payload 为 UTF-8 JSON，样本版本全部为 2。根包含 Decorators、各种颜色、Raster、Roofs、Terrain、Trees、Walls 等场景状态。其 `Raster` 字符串数组决定后续栅格块顺序；块 magic 是名称的前 8 个 ASCII 字节，不足 8 字节补零。因此三种 Cobblestone Raster 的 magic 都是 `Cobblest`，必须用 JSON 顺序区分，不能按 magic 建立唯一字典。

| magic | payload 结构 | 本次解压长度 |
|---|---|---:|
| PathRast / WaterRas / GardenRa | u64 原长度 + raw DEFLATE | 各 262,144 |
| Cobblest / PlantExe | u64 原长度 + raw DEFLATE | 各 262,144 |
| Terrain 后补零 | raw DEFLATE，无额外长度前缀 | 524,288 |
| Grass2 后补两个零 | raw DEFLATE，无额外长度前缀 | 1,048,576 |

raw DEFLATE 用 `zlib.decompressobj(-15)`；每个流验证 eof、无未消费数据、无尾随数据，带长度前缀者验证解压长度。未知块原样保留，并明确标为未解码。

`WorldRaster<512>::new` 的匹配符号和机器码分配 0x40000 字节，支持 512×512 的单字节普通栅格解释。后续原机器码和GPU read_terrain_height验证Terrain为512×512 little-endian u16；两种native双线性采样模式已恢复。原GPU采样使用-2.5..24高度范围与130世界空间尺度。snapshot_rasters.py把范围/模式保留为显式输入；真实快照网格12组native采样逐位相同。Grass2仍按四个raw byte plane导出，不凭长度猜具体字段。

## 编辑历史

history.json 为标准 JSON。用户记录版本包含 20、23、24；旧版本和打包起始世界都能作为结构 JSON 读取，工具没有声称实现游戏的旧版本迁移。

典型根字段为 Camera、Colors、History、Sheep、Time of day、Version。History 包含 chain_index、edit_chain、history_start、snapshots。每个 edit_chain 项包含 edits，snapshot 记录包含 chain_index 和 snapshot_id；对应文件名为十进制 snapshot_id 加 `.snapshot`。

用户样本实际出现 Tree、Water、Terrain、WallNewSystem、Roof、Color、Path、Garden、DecoratorV5。打包历史还包含 Wall、PlantPaint、Stairs、Cobblestone1/2/3。这些是记录的编辑类型，不是完整游戏 enum 的穷举。

观察到的墙操作包括 CreateWall、DeleteWall、AdjustHeight、ChangeElevation、ChangeStyle、ChangeArchHeight、MorphFreehandWall、MorphPremadeShape、WallChanged。屋顶包括 CreateRoof、DeleteRoof、VisualEdit、SwitchRoofRidgeDir、ChangeFlatRoofRimStyle；装饰包括 Place、Change、Remove。所有字段路径和 JSON 类型均在审计的 observed_schema_paths 中。

快照中的墙状态保留采样曲线 points/points_u、height、elevation、arch_height、structure_ty、style、封闭形状等；屋顶保存 wall_shape、pivot_y、height_01/profile_01/eave_length_01/ridge_length_01、ridge_dir、tip_offset_01。此布局说明存档保留参数和编辑状态，而非只存最终渲染网格。圆形/矩形屋顶瓦片生成已独立移植；snapshot_roofs.py直接读取这些参数，一个真实快照屋顶的912条64B records与原生成机器码逐位相同，另导出该快照全部4屋顶2656条records。实际材质/墙Slot解析与全场景装配仍在继续。

部分历史引用的 snapshot 文件在同目录不存在，包括旧备份和缓存。审计逐项保留 missing_snapshot_references。静态缺失不证明存档损坏，也不能确定运行时是否能从其他快照与历史恢复。

## 与程序证据对应

PDB 匹配的 `validate_and_load_closest_snapshot_data`（0x141bf6820）直接调用 History::closest_resolved_snapshot、memmap2 映射、motomoto::Reader::new/iter/next 和 serde_json 读取；这与观察到的块容器、JSON 和快照选择相符。该大型函数的 Ghidra 伪代码存在控制流错误，功能结论以文件解析、匹配 PDB 和独立直接调用指令为依据。

`capture_game_snapshot_save_data`（0x141bf4da0）实际调用树查询收集、墙状态迭代、StairsSnapshot::new、DecoratorStorage::take_snapshot 等实例化函数。保存主入口 0x1405f1e60 实际调用各 section 的 serde_json 序列化及 0x1405f3530 write_json_sections。原始指令位于 `evidence/native`，精确符号及源文件行位于 `evidence/pdb_annotated_targets.json`。

## 工具

从交付目录运行，Python 3.11+，仅标准库。输出路径需使用新的目录或文件：

```powershell
python tools/save_inspector.py audit --root 'C:/Steam/steamapps/common/Tiny Glade/assets' --out new-packaged-audit.json
python tools/save_inspector.py audit --root 'C:/Users/Administrator/Saved Games/Tiny Glade' --out new-user-audit.json
python tools/save_inspector.py extract 'path/to/file.snapshot' --out extracted-snapshot
python tools/save_inspector.py repack extracted-snapshot --out restored.snapshot
```

extract 输出 scene.json、每个块的原始 `.payload`、已解压 `.decoded.bin` 和包含原始摘要的 manifest.json。repack 使用原始 payload，验证每块及整文件摘要；它是无损归档恢复工具。编辑 scene.json 不会改写原始 JSON payload；工具未实现编辑存档后重新压缩与游戏重放。

验证记录：用户代表样本 422,663 字节，SHA-256 `8d2ce8738907a89a6e41e5495365556e011c295e4533358f2360b04fc3b4e4dd`；打包 10 块样本 444,861 字节，SHA-256 `76183baf62e07d26d45dd384ba4c4c56a7451ea97b0fde16488136fdba21861b`。两次提取/repack 均保持这些摘要。

## 从真实快照生成屋顶与地形

```powershell
python tools/snapshot_roofs.py INPUT.snapshot --out new-roof-records --json-records --settled
python tools/snapshot_rasters.py INPUT.snapshot --out new-raster-images --sample-xz 0 0 --mode center
```

前者同时输出原CPU generator记录与显式steady-state记录。辅助render_id用saved Roof.id归属，不冒称原ECS wall_slot_id。--settled将current_height设为pivot_y，依实际vertex shader的base_position.y+current_height输出world positions，属于稳态辅助，不是原游戏帧捕获。平顶会按原dispatch规则跳过瓦片，不合成尚未恢复的rim/flat mesh。

后者输出普通u8 PGM、Terrain u16 PGM和高度PFM，保留精确raw及摘要。Grass2四个byte plane只用作数值查看；其语义未补造。用户原存档没有修改。证据snapshot_roof_verification.json、snapshot_terrain_verification.json位于evidence/reconstruction_core。

## 原始快照选择算法

`recovered_history.py`恢复History::closest_resolved_snapshot（0x140ae4d80）。原collector保留snapshot cell +16中ID≥2的已解析记录，按signed-i32 chain_index二分寻找附近项，等距选后一个快照。恢复代码保留原32位减法/abs溢出行为，没有改成Python无限精度最小距离。

本轮新增 `recovered_save_load.py`，把可从原指令和文件样本独立验证的 load 前半段闭合：`parse_saved_game_data` 的 Version 3..30 gate、旧/新 Camera 布局、可选 `Time of day`、History cell schema，以及 `validate_and_load_closest_snapshot_data` 的最近快照打开、首个 JSON chunk、chunk 顺序、raw DEFLATE EOF/长度和整文件重组校验。`verify_recovered_save_load.py` 在安装目录 35 个 history 上通过（32 个快照可加载，3 个显式缺失引用），用户目录 8 个全部通过。详细证据为 `evidence/reconstruction_core/save_load_assets.json` 和 `save_load_user.json`，说明见 `reports/reconstruction_save_load.md`。

`verify_recovered_history.py`完整执行原collector及选择入口，85组空列表、未解析ID、等距、负索引、整数边界和random序列全部一致；仅scratch allocator/Vec reserve适配，不替换选择函数。CLI的--available-only采用本地文件存在作为显式可用策略；不将其等同于游戏异步resolver的完整行为。

```powershell
python tools/recovered_history.py PATH/history.json --available-only
```

真实01-cottage history选择chain_index77 / snapshot5476761123159047511，与同目录存在文件对应。证据history_selection_verification.json与history_real_selection.json在evidence/reconstruction_core。旧版本迁移、快照验证/载入全部状态和完整编辑重放仍需继续。
