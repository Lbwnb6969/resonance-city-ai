# Foundation 模型、骨骼、动画与 GLB 恢复

目标：从已验证的 Foundation 包缓存中恢复 904 个专有 `.fbx` metadata 文件和对应 `.fbx.data-xbin.meta` 二进制缓存。整个过程只读取已导出的包资源，未启动游戏或 Blender；`.fbx` 和 xbin 原始字节仍是权威证据。

## 交付统计

- 904 / 904 个模型 metadata 解析到 EOF，错误 **0**；版本 29–46 全覆盖。
- 904 / 904 个 geometry GLB 写出并通过二进制结构验证。
- GLB 内恢复 81,576 个 mesh 条目、24,103,457 个顶点、55,061,373 个索引、3,010 个 morph target、588 个动画缓存、93,103 个 source hierarchy 节点。
- 输出 GLB 总字节数：3,119,254,356；逐文件 SHA-256 记录在 `glb-manifest.json`。
- 73 个含 skin 的 mesh 条目在唯一骨骼匹配和绑定矩阵残差验证后输出 glTF skin；1,086 个含原始 bone table 的 mesh 都在 sidecar 中保留。sidecar 另外按 source-node 候选记录 510 个 `bone matching/bind identity unproven` 和 508 个 `no source hierarchy mesh attachment`，这些不是额外 mesh 数量，避免把重复实例误计为不同模型。

## 文件

- `glb/`：每个 `.fbx.data-xbin.meta` 对应一个 `.glb`。默认 scene 是原 metadata hierarchy 与 LOD0 关联；第二个 scene 是所有缓存 mesh 条目检查用清单，避免丢失未被当前树引用的 LOD geometry。
- `sidecars/`：每个模型的 gzip JSON，保存完整 metadata、节点 GUID/保留字段、mesh/bone matrix、所有动画 TRS 与 morph key arrays、纹理匹配、LOD 关联、skin 验证证据和问题清单。
- `model-metadata.jsonl.gz`：904 个专有 `.fbx` metadata 的完整解析行，含原 metadata SHA-256、所有 material/texture/LOD/node/tree 字段。
- `metadata-summary.json`：版本统计与全量错误列表。
- `glb-manifest.json`：每个 GLB 的哈希、大小、源 cache 哈希、mesh/vertex/index/animation/morph/skin/texture 统计；`skins_exported` 统计的是 glTF skin 实例，sidecar 的 `skin_bind_evidence` 区分 mesh 条目与 source-node 实例。
- `validate_glb.py`（工作脚本位于 `work/full-models/`）：检查 GLB chunks、accessors、buffer bounds、4 字节 stride、node index、skin inverse-bind count，结果已为 904/904、错误 0。

## 已验证的专有 metadata 布局

header 是 `u8 flag + u32 version + u32 totalVertices + u32 totalTriangles + u32 animationCount`。animation 名称是长度前缀 UTF-8；mesh table 是名称、material index、vertex count、triangle count。material 是名称、纹理（kind + filename）、RGBA float4、u8 flags。其后是 LOD group count，每组为名称和五个 mesh index；再后是 root exists byte 与递归 node tree。版本 ≥33 的 node 有 GUID16 与另一个保留 16 字节；版本 ≥45 的 material 有 GUID16。其余未命名字段按 `*_raw` 保留。

Node 的三个 u32 目前根据全量关联数据标为 `indices_u32_raw`：第一个直接 mesh index；第二个保留/未确定；第三个 LOD group index。GLB 使用第一个直接 mesh 和 LOD group 的第一个（LOD0）mesh。原五个 LOD index 全保存在 `lod_groups` 和 sidecar，不把第一个字段解释扩展成引擎内部全部语义。

## Geometry 与 shader 属性

缓存 geometry 使用原始 interleaved vertex/index bytes。无 skin 的 stride 60 字节，有 skin 的 stride 92 字节；原始位置、法线、切线、副切线、UV、packed u32/颜色槽、weight 和 bone ID 均保留。GLB 的 `POSITION`、`TEXCOORD_0`、索引及 morph POSITION targets 使用标准 attributes；原始未确定顺序的数据用 `_SOURCE_*` / `_PACKED_COLOR_BYTES` custom attributes 保留。

原始法线全部有限；有 348 个零长度法线，GLB 不为这些项伪造标准 `NORMAL`，sidecar/manifest 的 `normal_issues` 列出数量。其余标准法线写入前单位化，原始值仍在 `_SOURCE_NORMAL`。

packed color 槽的字节序没有从目标代码完全证明，GLB 以 `UNSIGNED_BYTE normalized VEC4` 保存原始四字节，不把它冒充已解出的颜色语义。材质 texture 仅在同包 basename 唯一匹配时嵌入已恢复 PNG；全量材质引用中 2,510 条唯一匹配、24 条多候选、1,011 条未找到在每个 sidecar 中明确列出。原始 texture filename 永远保留。

## 骨骼与动画

每个 raw bone table 的名称与 4×4 float matrix 保留。对每个含 bone table 的 mesh，先按完整 source tree 名称匹配同名 nodes，再以列主序矩阵验证 `joint_global_rest × raw_bone_matrix ≈ mesh_global_rest`。残差阈值为 0.003；名称重复时取残差唯一最小者，接近并列则拒绝自动 skin。只有通过该验证的 73 个 mesh/source-node 实例写出标准 `skins`、`JOINTS_0`、归一化 `WEIGHTS_0`、inverseBindMatrices；510 个 bone matching/bind identity unproven、508 个无 source hierarchy attachment 只保留 raw/custom 数据并在 sidecar 标出。

Chick 等样本的绑定残差约 1e-7–1e-5，验证了矩阵方向与列主序约定；这不把所有未通过项强行归类。重复骨名按完整 node index 与矩阵 residual 处理，不按名字覆盖。

动画 sidecar 保留每个 channel 的完整十 float TRS key、13-byte trailer、duration/ticks-per-second，以及 morph channel 的全部 weights 和 shape indices。GLB 不合成 animation samplers，因为原始 13-byte 后置字段和 key timing 语义未由目标代码完全核证；不会把样本顺序伪装成可靠运行时时间轴。

## 验证与限制

复现模型 metadata 与 GLB：

```powershell
python .\outputs\foundation-models\decode_model_metadata.py
python .\outputs\foundation-models\export_glb.py
python .\work\full-models\validate_glb.py
```

最后一条已返回 `glb_count: 904`、`errors: []`、`manifest_errors: 0`。GLB JSON/二进制 chunk、accessor、bufferView、node、skin count 全部通过。

GLB 是面向互操作的静态恢复，保留了所有已读 geometry 与 raw metadata；它不是厂商原始 FBX、完整引擎 shader、完整材质系统或经运行时验证的角色 rig。纹理颜色/alpha、packed color、第二 node index、LOD 选择策略、未通过 skin 的 bone linkage、13-byte 动画 trailer 和 proprietary cache flags 的剩余语义都在 sidecar 中保留为 unknown。没有使用 Blender、没有渲染截图，也没有宣称 GLB 等价于运行时最终画面。

Khronos glTF 2.0 accessor、bufferView、column-major node matrix 与 alignment 规则参照：[glTF 2.0 Specification](https://registry.khronos.org/glTF/specs/2.0/glTF-2.0.html)。
