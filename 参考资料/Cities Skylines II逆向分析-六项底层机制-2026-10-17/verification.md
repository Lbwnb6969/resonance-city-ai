# 第十轮静态证据核验

本轮完成六条指定分析链，54份定向类型导出、3份精确成员导出。未启动游戏、未加载目标程序集执行、未修改安装目录或用户存档。

## 命令与结果

分析工具为已有ILSpyCmd 11.1.0.9782，反编译只读安装版PE；依赖解析目录为同一安装的Cities2_Data/Managed。Game/Colossal.Core/Unity.Entities复用既有元数据，Unity.Mathematics新增四张静态表。

```powershell
$managed = 'D:\SteamLibrary\steamapps\common\Cities Skylines II\Cities2_Data\Managed'
# 每次指定一个完整类型名和相应程序集；完整导出列表在analysis-status.json。
& work/tools/ilspycmd.exe --disable-updatecheck -t <完整类型名> -r $managed -o <outputs/round10/专题-code> <程序集>
# Unity.Mathematics新元数据，table分别为Module/TypeDef/MethodDef/NestedClass。
& work/tools/ilspycmd.exe --disable-updatecheck --dump-table <table> --json <Unity.Mathematics.dll>
# 三个Entity读写重载单独反编译，确认精确成员与签名。
& work/tools/ilspycmd.exe --disable-updatecheck -m 0x0600077C -r $managed -o outputs/round10/identity-members/0x0600077C <Colossal.Core.dll>
# 另两个成员为0x0600077D、0x06000700。
python work/round10/verify.py
python work/round10/finalize.py
python work/finalize-delivery.py
```

`verify.py`结果PASS：64个方法跨四个程序集。依据TypeDef.MethodList/NestedClass确定所属类型，绑定Token/RVA；解析安装PE section和tiny/fat方法头，保存原始CIL有效载荷、长度和SHA-256。50个Game方法另外从第一轮保留IL清单按RVA与结束方法名提取，并核对Code size；支持编译器共享RVA的多个方法。没有重复生成全程序集IL。

`finalize.py`检查54份导出均非空、无已知ILSpy失败标记，逐个重新读取64份保留CIL并核对大小/哈希；Unity.Entities的SHA/MVID与第三轮基线相同。报告生成器在写入每个引用时，确认锚点文本存在，自动计算一基行号。全局finalize-delivery验证Markdown本地文件与行号存在，并更新交付文件SHA-256清单，具体数量见同轮validation-results.json。

| 程序集 | SHA-256 | MVID |
|---|---|---|
| Game.dll | aaee15c4fa41c130abaa1183840667e4faae531d67e8a9fa7536618effa2f86a | e15551e9-3dea-4855-8dde-1da3cea7d7ef |
| Colossal.Core.dll | b434bcdcedcd5473a3545cc9d207b3fec56257027bd5ea5c67b75eb920dee116 | b5ff7e4e-51b0-4c1f-a177-2afdfc22906b |
| Unity.Entities.dll | 07d9cb32bf935a88ecd5fe0baff31d2bc7e828f6dea31619300a50dd9e2c2871 | 3d6b23ae-b281-44a6-a5f4-cbd5fd3d75e6 |
| Unity.Mathematics.dll | f8c037b71d2bb4496ddab30b79d8840f5a32f0738a1547ba5534e5b43254c9b8 | f2136113-dda5-4f4f-a226-dda91b2667ba |

方法明细及保留IL/CIL路径见[selected-methods.json](selected-methods.json)，逐项范围和源码哈希见[analysis-status.json](analysis-status.json)。这些本地ILSpy/PE记录不伪装成REA Evidence。

## 两次有限失败与后备路径

最初尝试Game.Objects.InterpolatedTransform，ILSpy明确不存在并提示实际为Game.Rendering.InterpolatedTransform；空导出移入work/deprecated/round10，stderr保留，修正命名空间后成功。失败不计入54份导出。

新Unity.Mathematics程序集的REA inspect_managed_members返回`metadata.representation`超过64MiB预算，coverage=unavailable。记录为[rea-math-unavailable.json](rea-math-unavailable.json)，Evidence ID为ev_3b6a166c1c85fa8b83e4d6dbece9e93e936ebc34b06c5e7d60a1700240d60fba。没有重试同请求，改用ILSpy四表、定向Random类型及原PE方法体核验。此记录没有任何成员覆盖，不能作为PRNG语义的正面证据。

## 结论限度与备份

反编译不是原始源码；方法体哈希证明来源对应，不构成运行正确性或性能测试。未对全部组件打标、工具提交、加载引用、随机源、资产Schema和热加载入口做穷举。真正的耗时、视觉连续性、跨机器复现和缺失Mod恢复效果保持未测量。

原始反编译与IL保留工具格式，包括空白与编译器生成代码，不做格式化以冒充源码修复。没有执行游戏单元测试或性能测试；该任务的最低充分验证是来源绑定、关键分支交叉阅读与链接完整性。重要失败产物保留在专门废弃目录，本轮报告、脚本和证据通过Git提交备份。
