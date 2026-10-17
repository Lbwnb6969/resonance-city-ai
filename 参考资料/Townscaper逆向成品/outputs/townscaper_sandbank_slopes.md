# 沙洲stage2最后的三角坡度规则

已消歧此前审计中的Y=0分支与法向符号。结论依据[完整控制流](native_application/815c40.c)、[原始指令与8个数值分支fixture](townscaper_sandbank_slopes.json)。它是静态算法回答；没有把参考模型称成原版mesh逐位复刻。

## 倒序处理和有界循环

从tris.Count-3起每次减3，读取当前verts的三角顶点及索引A、B、C，统计Y精确等于0的数量z。每个三角都先复制三点，随后写回verts；同一三角内的后续计算仍用原局部副本，而后面的三角会读到此前写入结果。ExtraMath.Swap三参数实际上是(A,B,C)→(B,C,A)循环置换，索引和坐标同时转，保持绕序。[int轮换](native_application/4486f0.c)、[Vector3轮换](native_application/448850.c)。

z<2时最多轮换3次找A.y=0，找不到就跳过。因此z=0跳过，z=1进入：

```text
B.y = min(B.y, 0.4 * Distance3D(A,B))
C.y = min(C.y, 0.4 * Distance3D(A,C))
```

距离包含XYZ三个分量和原始正高度，**不是水平距离**。两次实际调用Vector3.Distance分别在VA0x1081936b和0x1081946c；写入仅在limit<旧Y时发生。浮点0.4真实值是0.4000000059604644775。[源码分支](native_application/815c40.c)。

## 两个零高点的有符号坡面

z>=2时最多轮换3次寻找A.y=B.y=0、C.y>0，且Unity.Vector3.op_Inequality(A,C)与(B,C)为true；找不到跳过。z=3和两个零高但C非正都跳过。这里没有额外A!=B条件。

```text
edge = SetY(B-A,0)
n = Normalize(Cross((0,1,0),edge))
  = Normalize((edge.z,0,-edge.x))
limit = 0.4 * Dot(C-A,n)
if limit < C.y: C.y = limit
```

Cross的顺序是up在前、edge在后，保持有向法线；Dot没有Abs，也没有Clamp到0。朝向反转时limit会变负，直接写入负Y；后续水mesh不能凭这个结果推断“裁掉负高三角”，必须读取它自己的生成规则。A/B相同但C不同能进入，Normalize零向量返回零，令C被压到Y0。[guard与轮换](native_application/815c40.c)、[法向和写入](native_application/815c40.c)。原byte核对了两处Inequality、Cross、Normalized与SetY的调用目标；数值fixture覆盖正/负法向与零边。

Normalize的真实float32长度阈值为9.999999747378752e-6，严格大于时才除，否则返回零；Vector3不等为有限输入平方距离>=9.999999439624929e-11，无序NaN也true。它不是逐分量精确不等。[原primitive阈值证据](townscaper_shore_local_math.json)及本页JSON直接记录三个原PE常量地址与字节。

## 最后的侧坡偏移

三角处理之后，每个pair只修改奇点O=verts[2i+1]，用此前保存的normalized沿岸偏移方向D_i：

```text
O = O - D_i * (O.y * 0.4)
```

不是减固定0.4，不是按pair的另一点距离，也不是对所有顶点做同一步。公式逐XYZ写回；D_i来自此前阶段的方向累积，偶点保持本阶段三角修改后的位置。[逐pair写回](native_application/815c40.c)。

`python work/verify_sandbank_slopes.py`绑定0x819000..0x819a00原字节、7个确切primitive call与8个分支fixture。无零/全零/非正奇点跳过；一个零点使用3D距离；两个零点的正法向生成+0.4，反向生成-0.4；退化零边生成0。参考测试验证数学说明与guard的自洽，不代替原SSE/x87每步舍入或任意mesh输入的运行观测。
