# Tiny Glade：PDB 身份、符号、源码位置与静态调用索引

本报告基于安装目录的只读 PE/PDB 读取。没有执行游戏，没有修改安装文件，没有调用共享 REA 原生活动会话。本文记录的源码路径来自调试元数据，不表示本机存在对应源码。

## 1. 二进制与 PDB 身份

`tiny-glade.exe` 的 SHA-256：

`4627ec9f9a8abe03dd30751f6a8e22868e0dfddf9f40029a1b848a3773495fe5`

`tiny_glade.pdb` 的 SHA-256：

`ca8b5f18fcf5a79e282db9af9178b6ec8cecb776ea41f68435b543079d34dcf2`

EXE CodeView RSDS 与 PDB stream 1 的 GUID、age 完全一致：

- GUID：`d8d61d04-9e31-5b47-4c4c-44205044422e`
- age：`1`
- EXE 首选基址：`0x140000000`
- PDB：MSF 7.0，4096 字节块，5137 个 stream。

因此本报告的符号地址适用于上述哈希的 EXE。Steam 清单版本不一致的问题不影响这次 EXE/PDB 配对成立；不能据此把清单身份当作当前 EXE 身份。

证据：`evidence/pdb_identity.json`。实际运行启用 ASLR 时，应以 RVA 加实际加载基址计算运行时地址。

## 2. 恢复范围

| 内容 | 数量 | 证据 |
|---|---:|---|
| S_PUB32 public 符号 | 110,963 | `pdb_symbols.jsonl` |
| procedure 记录 | 94,072 | 同上，25,477 local + 68,595 global |
| 去重函数起始地址 | 70,804 | `native_callgraph.coverage.json` |
| DBI 模块描述 | 5,139 | `pdb_modules.json` |
| 去重源码路径 | 6,538 | 同上 |
| 全部 C13 行记录 | 906,437 | `pdb_summary.json` |
| 项目源码地址→行记录 | 159,781 | `pdb_project_lines.csv` |
| TPI 原始类型记录 | 6,126 | `pdb_validation.json` |
| 支持的 TPI 记录导出 | 6,004 | `pdb_types.jsonl` |
| 已解析 field list | 487，未解析尾部 0 | 同上 |

procedure 数量包含同地址别名、泛型实例和编译产物重复引用。不能把 94,072 当成独立源语言函数数量。

PDB 保留了项目函数名和源码行表，但缺少游戏 Rust 数据类型布局。对 `country_core`、`asset_pipe`、`tiny_glade`、`rhapsody` 四个命名空间的 6,017 条 procedure 记录检查，type index 全部为 `0x1001`：无参数、返回 void 的占位原型。TPI 中没有 `TextureAsset`、`Grass2RuntimeConfigAsset`、`ShaderPrecomp`、`History` 等 Rust 游戏结构。

因此 Rust 字段偏移、真实函数签名和 archived 结构布局必须由机器代码及资源实际数据恢复。该 PDB 不能直接给出这些偏移。导出的 C/C++ 结构、枚举、成员偏移仍能用于第三方库分析。

## 3. 编译器与项目组织

S_COMPILE3 提供的编译器字符串是直接观察：

- Rust：`clang LLVM (rustc version 1.95.0 (59807616e 2026-04-14))`。
- C 库：`clang version 22.1.8`。
- MSVC 运行库：`Microsoft (R) Optimizing Compiler`，版本字段 `19.44.35207.1`。
- 纹理压缩内核：Intel ISPC `1.20.0`，编译器字符串包含 LLVM `15.0.7`。
- 链接器记录：`LLVM Linker`。

证据：`pdb_compilers.json`。每种生产者分别保留记录数量与去重 module stream 数量；链接器能在同一模块出现多条记录。

项目主源码根路径是 `/home/h3/code/pouncelight/country-slice-private`，构建对象路径包含 `target/x86_64-pc-windows-msvc/release`。路径体现 Linux 风格开发目录与 Windows MSVC 目标，不是当前主机运行状态证据。

| 编译项目路径 | 去重源码文件数 | 可查询符号前缀 |
|---|---:|---|
| `crates/country-core` | 559 | `country_core::` |
| `crates/systems/decorator` | 86 | `system_decorator::` |
| `crates/systems/wall-constructor` | 66 | `system_wall_constructor::` |
| `crates/tiny-glade` | 59 | `tiny_glade::` |
| `crates/systems/toolbar` | 49 | `toolbar::` |
| `crates/utils` | 43 | `utils::` |
| `crates/systems/onboarding` | 29 | `system_onboarding::` |
| `crates/systems/color` | 28 | `system_color::` |
| `crates/systems/roof` | 24 | `system_roof::` |
| `crates/systems/critters` | 24 | `system_critters::` |
| `crates/systems/clutter` | 20 | `system_clutter::` |
| `crates/asset-pipe` | 5 | `asset_pipe::` |

另外有 tree-tool、timberframe、water、forest、glade-border、tg-mods、asset、usdl、theme-fetcher 等模块。`rhapsody::*`、`rhapsody_core::*`、`rhapsody_gi::*`、`rhapsody_taa::*`、`rhapsody_dof::*` 等渲染符号可独立查询。这些名字和源码路径证明编译组织；具体功能行为还需机器代码和资源证据。

依赖路径直接提供 `bevy_ecs-0.17.3`、`rkyv-0.8.16`、`ron-0.12.0`、`serde_core-1.0.228`、`ash-0.38.0+1.3.281`、`redb-4.1.0` 等版本。多个 glam、image、hashbrown 版本同时存在，不能用一个版本代表整程序。

证据：`pdb_source_inventory.json`（路径分组及全部依赖版本）、`pdb_architecture_index.json`（procedure 命名空间和链接对象分组）、`pdb_modules.json`（完整原始路径）。

PDB named streams 内嵌三份第三方 Windows 类型 `.natvis`，已导出到 `evidence/pdb_embedded_sources/`；没有内嵌项目 Rust `.rs` 文件。源文件 checksum 已保留在 `pdb_project_source_checksums.json`，可对将来获得的源码验证身份。

## 4. 建造与存档入口

以下是匹配 PDB 的原始函数身份，不等同已观察运行。

| 函数 | 首选 VA | 字节数 | 项目源码行 |
|---|---|---:|---|
| `save_game_to_file<File>` | `0x1405f1e60` | 5,834 | `save_game.rs:747` |
| `write_json_sections<File>` | `0x1405f3530` | 1,991 | `save_game.rs:826` |
| `SaveFileSection::padding_bytes` | `0x140b80f80` | 15 | `save_game.rs:617` |
| `SaveFileSection::json_key` | `0x140b80f90` | 29 | `save_game.rs:541` |
| `save_game` | `0x140b81310` | 22,866 | `save_game.rs:86` |
| `parse_saved_game_data` | `0x141920a00` | 14,101 | `load_game.rs:484` |
| `load_game` | `0x141924120` | 24,263 | `load_game.rs:135` |
| `capture_game_snapshot` | `0x141bed7e0` | 22,802 | `snapshot.rs:186` |
| `init_game_state_from_snapshot` | `0x141bf3100` | 7,321 | `snapshot.rs:536` |
| `capture_game_snapshot_save_data` | `0x141bf4da0` | 6,780 | `snapshot.rs:101` |
| `validate_and_load_closest_snapshot_data` | `0x141bf6820` | 13,262 | `snapshot.rs:341` |
| `snapshot::try_chunk` | `0x141bf9bf0` | 100 | `snapshot.rs:331` |
| `save_thread::execute_save_cmd` | `0x141c60ca0` | 38,520 | 可用行表查询 |
| `WorldRaster::new<512>` | `0x140a77de0` | 894 | 可用行表查询 |
| `AllWorldRasterWrite::write` | `0x1409061a0` | 2,108 | 可用行表查询 |
| `asset_pipe::texture::load::async_fn$0` | `0x1408fdd40` | 3,992 | `texture.rs:59` |
| `ShaderLibrary::load_precompiled_shaders` | `0x140e444a0` | 1,302 | 可用行表查询 |

`History` 还有 `add`、`restart_from_snapshot`、`closest_resolved_snapshot`、`nuke_future_states`、`set_current_snapshot` 和 wall/roof/terrain/tree/path/decorator 编辑序列化入口。语义名称支持定向反编译，不单独证明存档算法或撤销实现。

证据：`pdb_core_targets.json`、`pdb_annotated_targets.json`、`pdb_world_raster_asset_functions.json` 和完整符号/行表。优化与内联会让同一个地址出现多个源码行候选，查询工具保留候选，不强行选定一行。

## 5. 离线直接调用索引

`evidence/native_callgraph.sqlite` 对 70,804 个去重函数起始地址使用 Capstone 5.0.7 `disasm_lite` 按 PDB 范围线性解码。没有执行目标、解引用 RIP 内存或解析间接调用。

- 请求与实际解码字节均为 **47,767,048**；全部函数范围解码完成，跳过、限制截断、提前停止均为 0。
- 共 **11,382,250** 条线性指令。
- **509,806** 个 immediate 直接 call site。
- **12,070** 个跨已索引函数的 immediate 直接 jmp site。
- **17,982** 个间接 call、**9,052** 个间接 jmp 均保留为未解析。
- 直接 call/jmp 中 **405,992** 个 site 命中索引内函数起始地址；其余目标不自动补成命名函数。
- 函数范围无重叠，覆盖 `.text` 虚拟字节数的 **98.614%**；剩余 **671,182** 字节没有 PDB procedure 范围。不能自动把这些字节认定为填充。

该索引不是运行调用图，也不是控制流恢复结果。编译器不可达字节、内联边界和填充仍会被线性解码；无法保证每条记录对应实际可达执行。

SQLite 表：`functions`（地址、名字、范围、解码状态）、`aliases`（同地址符号别名）、`edges`（caller/site/target/operand/解析方式）、`metadata`（身份与覆盖统计）。地址以整数保存；显示十六进制请使用 SQLite `printf('0x%X', target)`，不要使用 `hex(integer)`。

证据：`native_callgraph.coverage.json`、`native_callgraph_validation.json`。与另一路详细 Capstone operand 导出的 **20 个核心函数**逐 site/target 比较，直接 call 全部一致。

## 6. 可复用命令与验证

以下命令从交付目录运行，`python` 表示 Python 3。前三个 PDB 工具只需标准库；调用索引构建需要 `pip install capstone`，或通过 `--deps` 指定已有离线依赖目录。

```powershell
python tools/pdb_inspect.py 'C:/Steam/steamapps/common/Tiny Glade/tiny_glade.pdb' --exe 'C:/Steam/steamapps/common/Tiny Glade/tiny-glade.exe' --out evidence
python tools/pdb_query.py evidence --address 0x141920a00
python tools/pdb_query.py evidence --name '^country_core::systems::save::' --regex --source load_game.rs
python tools/pdb_validate.py evidence
python tools/native_callgraph.py 'C:/Steam/steamapps/common/Tiny Glade/tiny-glade.exe' --symbols evidence/pdb_symbols.jsonl --identity evidence/pdb_identity.json --out evidence/new_callgraph.sqlite
python tools/native_graph_query.py evidence/native_callgraph.sqlite --address 0x141bf6820 --direction callees --limit 30
python tools/native_graph_query.py evidence/native_callgraph.sqlite --name parse_saved_game_data --direction callers --limit 30
```

调用图构建工具拒绝覆盖现有 SQLite；应使用新输出路径保留旧证据。查询工具用只读 SQLite 模式打开数据库。

验证结果：MSF/TPI 6,126 条实际记录与 TPI header 声明完全一致；70,804 个去重函数范围全部落在 `.text`；55,518 个函数起始地址独立命中 PE `.pdata` unwind 起始地址，其中 29,765 个范围终点也完全一致。其余 unwind 终点差异保存在证据中；不能把 unwind 子范围当作整个 CodeView 函数范围。叶函数没有 `.pdata` 是正常格式边界，不影响匹配身份。

剩余边界：游戏 Rust 字段布局与真实签名缺失；未恢复完整 Rust 源码；间接调用目标未解析；`.text` 中无 PDB procedure 的 1.386% 字节未收入此索引；所有功能行为结论需要与具体机器代码、资源和真实存档相互核对。


## Private-project procedure export

The PDB project-line catalog contains 7,559 procedures covering 10,162,896 bytes. A bounded Ghidra pass exported every procedure with its PDB source attribution into `reconstruction/native-project-pseudocode`, with `status.tsv` preserving per-function quality. 6,786 outputs contain no explicit Ghidra flow-error marker, 714 are retained as `limited-flow`, and 50 failed within the timeout or provider. This is a navigable native pseudocode corpus; it is not embedded Rust source and does not establish behavior equivalence. The quality classifier deliberately leaves bad instructions, unresolved constructors, jump-table recovery and missing memory as limited rather than silently presenting them as source.
