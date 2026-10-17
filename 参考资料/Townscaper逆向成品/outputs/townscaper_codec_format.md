# Townscaper 文本存档重建

已交付可独立运行的 [Python codec](townscaper_codec.py:1)。它编码/解码文本与 JSON SaveData，不修改游戏安装、用户存档或反编译数据库。实现由本发行版 GameAssembly.dll 的 native 伪代码重建，并非原始源码。

一次只读真实存档验证已通过：XML 中有7列、13个体素；重建编码结果与该文件原有21字符 saveString 逐字符相同；解码原有 saveString 恢复的 corners/voxels 与 XML 逐项相同。完整私人地图数据没有写入交付文件；[验证记录](townscaper_codec_verification.json:1)保存文件摘要、大小、数量和相等性结论。这证明该真实游戏生成样本的兼容性，不证明全部畸形输入等价，也不代替当前游戏进程执行。

发行包中的 sharedassets1.assets / PathID1117 / DefaultSaveData 提供了相同的原始文本和7列13体素几何数据。该 [公开发行样本](townscaper_default_save_asset.json:1)可随交付复核；独立编码逐字符匹配、解码结构匹配的 [记录](townscaper_codec_asset_verification.json:1)使验证不依赖私人存档。

原始 GameAssembly.dll 的仪器化运行又验证了6/6自造fixture：原生 LoadFromString 全部接受，输出结构与fixture相同；随后原生 SaveToString 逐字符恢复输入。[原生运行记录](townscaper_runtime_codec.json:1)。测试通过 Frida 调用原生 IL2CPP 方法，另将文件持久化重定向并拦截 SaveMetaSaveToDisk，未替换codec函数；这是独立运行证据，不是REA Evidence。覆盖空世界、地面、颜色、组合、稀疏高度255和15颜色；没有执行全部畸形输入。

## 使用

```powershell
python outputs/townscaper_codec.py encode map.json -o map.txt
python outputs/townscaper_codec.py decode map.txt -o map.json
python outputs/townscaper_codec.py self-test
```

省略输入路径或使用 `-` 时读取标准输入。函数 `decode(text)` 不移除空格/换行；CLI 仅去掉文本文件传输所用的一次末尾换行。输出 JSON 形状：

```json
{"corners":[{"x":0,"y":0,"count":2}],"voxels":[{"t":15,"h":0},{"t":0,"h":1}]}
```

corners 的 count 分割连续 voxels。编码保留列顺序；要求 x 非递减，每列高度严格递增，h=0 的地面为 t=15，h=1..255 的颜色为 t=0..14。至少有一列；空世界可表示为 count=0 的单列。工具直接拒绝不符合此输入域的数据，避免悄悄排序、截断或丢弃。

## 位流规范

所有字段和字符内部均为最低有效位优先。字符存6位；这由 `GetBitsPerCharacter` 和类初始化中的固定0x41阈值运算直接确认。[位宽函数](native_codec/301b80.c:21)、[初始化](native_codec/3038d0.c:49)。字符索引表如下，小写尾部 uvxyzw 不得改为标准字母顺序：

```text
ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvxyzw0123456789_-
```

定义 `bitLength(0)=0`。令 firstX 为首列x；minY/maxY 为所有列y极值；maxDX 为相邻列x最大正差。`B=bitLength(2*max(abs(firstX),abs(minY)))`、`DX=bitLength(maxDX)`、`Y=bitLength(maxY-minY)`；B=0 时 bias=0，否则 bias=2^(B-1)。收集所有高度非0的颜色类型，按数值升序形成 N 项类型表；`T=bitLength(N+1)`、`END=2^T-1`。[扫描和编码](townscaper_save_input_decompile.md:207)

| 顺序 | 位数 | 值 |
|---|---:|---|
| 头部1 | 5 | B |
| 头部2 | 5 | DX |
| 头部3 | 5 | Y |
| 头部4 | B | firstX+bias |
| 头部5 | B | minY+bias |
| 头部6 | 4 | N |
| 头部7 | N×4 | 实际类型，映射到码1..N |
| 每列1，首列省略 | 1 | x变化标记 |
| 每列2，仅变化时 | DX | x-previousX |
| 每列3 | Y | y-minY |
| 每列4 | 1 | 存在地面 |
| 每列5 | 重复T | 高度1开始：0为空，1..N为类型码，END结束列 |

一列最后占用高度255时，省略 END；解码遇到该高度的非0体素码直接完成列。最后一个字符不足6位的高位填0。解码以最后一个1位确定有效结束位置，但字段读取使用物理位数组长度，所以最高体素码的高位0仍由字符填充提供。[高度和结束条件](townscaper_save_input_decompile.md:1583)、[字段读函数](native_codec/3027e0.c:56)

末尾全0字符A不改变有效位流，独立解码允许附加A；重新编码恢复最短字符数。原函数未显示对重复列、重复类型表、冗余坐标码做规范检查。规范编码与宽松解码不是同一输入域。

## 顺序来源已补齐

`Graph.Save` 不负责排序：它枚举 corners Transform 子级，再枚举每列的 voxel 子级，把当前顺序直接写到 SaveData。新列创建路径按 x 优先、相同 x 时 y 次优先的比较执行二分查找，随后使用补码插入位置调用 SetSiblingIndex。因此正常世界的 corner 子级维持(x,y)字典序。[Graph.Save](townscaper_ghidra_decompile.md:1438)、[比较规则](native_codec/e6b7d0.c:51)、[插入](native_codec/e6bec0.c:154)

`Graph.AddVoxel` 按高度查找已存在体素；未命中时使用补码位置 SetSiblingIndex，从而维持每列高度顺序。比较的依据是子级 localPosition.y 的 floor 值。[高度二分查找](native_codec/e6b990.c:50)、[插入调用](townscaper_ghidra_decompile.md:584)、[设置顺序](townscaper_ghidra_decompile.md:665)

若完全没有 corner 子级，Graph.Save 写入以当前 bounds center 为坐标、count=0 的占位列。这解释空世界仍有列的位置头部；该工具不模拟 bounds center 的计算，需要调用者给出坐标。[空世界分支](townscaper_ghidra_decompile.md:1499)

`GetSpacedString` 另在每个字符之间插入一个空格，仅供显示；`LoadFromString` 本身直接查字母表。因此显示串不能直接传给该底层解码入口。[显示格式](native_codec/301ba0.c:95)

## 可复核向量与边界

以下4项可直接由位表手算，与实现无关：前三头部宽度为0；类型数从bit15开始；空列地面标记为bit19，结束码为bit20。第四列头部有1种颜色，ground位位于bit23。

| 输入列 | 文本 | 核心位 |
|---|---|---|
| (0,0)，空 | AAAE | bit20=1 |
| (0,0)，地面 | AAAG | bit19=bit20=1 |
| (0,0)，颜色0高度1 | AAIAN | bit15、24、26、27=1 |
| (0,0)，地面+颜色0高度1 | AAIgN | 前项加bit23=1 |

自测另覆盖15种类型表长度、负坐标、同x不同y、正x增量、空列、稀疏高度，以及254/255边界；共25个 roundtrip 案例。7个非法/截断输入拒绝通过。6项可供原生交叉验证的自造 [fixtures](townscaper_codec_fixtures.json:1)与 [只读验证脚本](../work/verify_townscaper_codec.py:1)已保留。

## 原生异常语义与剩余边界

`ReadValue` 超出 BitArray.m_length 时会记录错误、把读取索引增加 bitCount，然后返回-1。更关键的是共享静态 BitArray 在载入较短文本时不缩小，只有长度不足才扩展；原生字段读取能接触上一次较长输入留下的缓冲区。因而对部分畸形文本的结果依赖历史调用，不能用纯字符串函数概括。[不足长度分支](native_codec/3027e0.c:173)、[仅扩展缓冲区](townscaper_save_input_decompile.md:1179)

本工具严格在本次字符串的物理位长度内读取，不模拟共享缓存残留、原生列表部分追加、null异常或超过有效正Int32位计数域的坐标。编码要求三个位宽不超过30；不模拟原生 GetBitCount 对更大值的溢出循环。自造fixture原生正反调用已验证；Graph 的世界门限另已恢复：高度与 hex 范围宽度共享归一化预算，动态 maxHeight 在64..256间分配；窄城可允许h=255，不能把高度255文本接受等同于任意宽度城镇全部载入。详见 [世界范围条件](townscaper_state_save_history.md:65)。原版完整世界载入已验证(0,0,h255)单列精确保留。原 sparse fixture 则在 stateDone 时变成空城，日志表明(-3,-7)和(9,2)不是可整合的生成网格顶点；该fixture证明原codec结构往返，不证明世界载入保留。codec允许同x不同y顺序及空列；这是原格式的输入域，正常Graph.Save另生成(x,y)字典序。5个原版差异载入实验已证明有效格点同x逆序可载入并由Graph.Save规范排序，混合空列被省略；无效格点排序去空列仍被删除。因此本codec保留任意same-x y顺序是原格式行为，不能加上Grid membership限制冒充格式要求。[差异运行证据](townscaper_runtime_graph_load.json:1)。剩余为畸形输入的历史状态依赖。[完整世界边界](townscaper_runtime_boundaries.json:1)。镜头、太阳、缩略图及 lastWriteTime 属于 XML SaveData 其他字段，不在 clipboard 文本几何编码内。
