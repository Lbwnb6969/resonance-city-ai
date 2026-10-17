# 旧运行数据 · space

仅供 `tools/build_spec_data.py` 生成当前 Demo 参数；这些表不定义新版建造与进度。新规则取 [执行规格](../../文档/01_执行规格/README.md)。完整历史公式与测试协议在 `废弃/文档/2026-10-14_全量复核/原始文档/01_执行规格/`。



以下表仅用于复现当前代码/生成配置。保留数值不恢复旧玩法语义；新建造不受这些音乐/额度/自动生长参数限制。

## 表 SP8 · 运行配置键

| 键 | 值 | 说明 |
|---|---|---|
| schema_version | 2 | |
| world_min / world_max | -8 / 40 | |
| residential_radius | 0.45 | |
| base_coupling | 2.0 | A 的封顶 |
| distance_sigma | 1.8 | |
| gap_cutoff | 4.0 | |
| near_neighbour_count | 12 | 表 SP5 的 `N₁₂` |
| industrial_factor | 1.3 | |
| partial_occlusion | 0.7 | |
| forest_factor | 0.85 | |
| water_factor | 1.15 | |
| homogeneity_threshold | 0.40 | 表 SP4 的 occ 阈值 |
| homogeneity_M | 0.7 | 表 SP4 的 M 值 |
| homogeneity_dv_scale | 0.5 | ΔV 减半 |
| comparison_tolerance | 1e-6 | |
| community_min | 4 | |
| community_max | 40 | |
| projection_x / projection_y | 28 / 14 | |
| pan_divisor / pan_limit | 12 / 0.8 | |
| terrain_height_screen_scale | 14 | |
