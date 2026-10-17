# Save/load reconstruction

本轮把 `parse_saved_game_data` 和 `validate_and_load_closest_snapshot_data` 中可以独立验证的输入阶段做成了可复用工具。工具不会冒称已经恢复 Rust 的 ECS 初始化或旧操作迁移；它恢复了文件读取、JSON 根对象检查、版本门、Camera/Time of day/History 形状、快照选择、motomoto chunk 帧和压缩数据校验。

证据对应原程序中的四个入口：

| 原函数 | 地址 | 本轮恢复的行为 |
|---|---:|---|
| `parse_saved_game_data` | `0x141920a00` | UTF-8 JSON、Version、Camera、Time of day、History 和错误门 |
| `validate_and_load_closest_snapshot_data` | `0x141bf6820` | closest snapshot、文件映射、首个 JSON chunk、JSON sections、chunk 迭代 |
| `snapshot::try_chunk` | `0x141bf9bf0` | chunk payload 查找及压缩数据传给 DEFLATE reader |
| `History::closest_resolved_snapshot` | `0x140ae4d80` | 已解析快照的 signed-i32 最近选择；由 `recovered_history.py` 的 85 组原机器码 oracle 覆盖 |

## 已恢复的输入算法

`Version` 必须是 JSON 整数，原程序的可接受门为 `3 <= Version <= 30`。低于 3 会走旧版本兼容路径并最终拒绝当前解析入口，高于 30 进入 future-version 错误。工具明确报告两种情况，避免把旧版本迁移误写成已实现。

Camera 存在两种已观察的 serde 布局。旧存档使用 `camera_rig_arm_length`、`pitch_cache`、`position_cache`、`yaw_cache` 与 offsets；较新存档使用 `pitch`、`position`、`yaw` 与同一 arm/offset 字段。两个布局都检查三元素位置数组。缺少 `Time of day` 时，原程序记录兼容性日志并建立默认值；存在时检查 `latitude_degrees`、`sun_xz_rotation` 和 `time_of_day`。History 至少包含 `chain_index`、`edit_chain` 和 `snapshots`，每个 snapshot cell 检查 signed chain index 与可选 u64 snapshot id。

选择器只从 `snapshot_id >= 2` 的解析 cell 中选择，保持原函数的 signed-i32 距离和等距取后项行为。工具随后打开选中的 `.snapshot`；没有文件时保留 `missing-snapshot` 状态，不把静态缺失误报为存档损坏。

Snapshot 首 chunk 必须是 `Snapshot`，payload 是 JSON object。其 `Raster` 数组与后续 chunk magic 按顺序对应。`PathRast`、`WaterRas`、`GardenRa`、`Cobblest`、`PlantExe` 使用前置 little-endian u64 解压长度和 raw DEFLATE；`Terrain\0`、`Grass2\0\0` 使用 raw DEFLATE。每个 chunk 都检查边界、DEFLATE EOF、未消费尾部和声明长度，并重新拼接 chunk 头验证字节级 round-trip。

## 运行结果

```text
python tools/verify_recovered_save_load.py
```

验证通过：安装目录 35 个 `history.json` 中 32 个加载了最近快照，3 个明确保留为缺失快照引用；用户目录 8 个历史全部加载成功。所有成功加载的快照均为 Version 2，chunk round-trip 通过，未发现未知根字段或未知 edit wrapper。

机器码绑定的完整 JSON 审计在：

- `evidence/reconstruction_core/save_load_assets.json`
- `evidence/reconstruction_core/save_load_user.json`

复用工具：

```text
python tools/recovered_save_load.py load path/to/history.json
python tools/recovered_save_load.py audit --root "C:/.../Tiny Glade/assets" --out save-load.json
```

## 限制

游戏的 typed serde visitors、ECS world 初始化、旧 edit operation 的升级变换和实际编辑重放仍未被替换。工具会报告未知 edit wrapper 和旧版本候选，而不会猜测迁移规则；这保持了与原机器码证据一致的边界。
