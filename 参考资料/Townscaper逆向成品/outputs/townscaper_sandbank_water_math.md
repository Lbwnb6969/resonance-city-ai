# Sandbanker：沿岸水/沙网格数学规则

本页闭合最终审计中的stage3问题，并恢复stage4的tangent几何、噪声和CPU→GPU映射。证据为发行GameAssembly.dll原生body [815c40.c:3915](native_application/815c40.c)、原字节调用窗口[townscaper_sandbank_water_raw.json](townscaper_sandbank_water_raw.json)、真实场景资产和已恢复GPU指令。没有启动新游戏、修改Steam/用户文件或做新REA运行调用。这里恢复业务算法语义，不把独立数值移植或跨GPU像素等价称为已验证。

## 输入和vertex配对

记stage2输出顶点为P，长度N=2n；coverage长度n，原strip每组六个三角索引的前两个记为a、b（岸线偶数索引）。stage3申请waterMf.sharedMesh并Clear，另取五个临时list：W（水顶点）、F（法向累积）、U（UV）、D（平滑累积）、T（新三角）。

对i=0..n-1，**只读P[2i]，并复制两份**：W[2i]=W[2i+1]=P[2i]。F对两份均填0；D初始按pair填0，之后扩至W长度。它没有把stage2沙坡奇点P[2i+1]拷贝成水外沿。初始化见[3915–4075入口](native_application/815c40.c)。

对每条岸线(a,b)，读取P[a]、P[b]：

```text
d = normalize(P[a] - P[b])
h = (d.z * 0.5, 0, -d.x * 0.5)
F[a] += h
F[b] += h
```

随后对每pair仅扩张偶点：W[2i] += F[2i]*Mathf.Lerp(2,0.3,coverage[i])，奇点仍位于原岸线。Lerp自带Clamp01；法向累积F没有另normalize，折角处两条边向量相加的长度会影响扩张。d按三维normalize，再忽略其y来形成水平垂线，不擅自改为XZ normalize。[normal累积](native_application/815c40.c)、[coverage宽度](native_application/815c40.c)。

## 每岸线三角和两轮平滑

对每条岸线(a,b)，a+1、b+1是固定岸点；当前outside点为W[a]、W[b]。新增顶点m=W.Count，W.Add((W[a]+W[b])*0.5)，再依次加入三角：

```text
(m, b+1, a+1)
(a, m, a+1)
(m, b, b+1)
```

它是一个四点沿岸strip的三角细分，**没有根据Y正负裁剪、求三角与水平面交点、或删除某类三角**。新增点是扩张两端的均值，不是岸线与水面交点。[中点和固定索引顺序](native_application/815c40.c)。

D填0到W长度，做两轮：以j=0,3,6,...遍历T；j%9==0跳过（每strip第一三角）。其余取u=T[j]、v=T[j+1]：

```text
delta = (W[v] - W[u]) * 0.3
D[u] += delta
D[v] -= delta
```

轮末逐顶点，若Unity Vector3.op_Inequality(D[i],zero)为true，W[i]+=D[i]并将D[i]归0；不是除以邻居数量的平均。每strip只处理(a,m)与(m,b)，所以内岸点a+1/b+1不移动；中点及外沿累积相邻边位移。[skip每第九索引、0.3对称累积](native_application/815c40.c)、[累积应用/归零、两轮](native_application/815c40.c)。条件使用Unity向量不等比较的语义，不把它替换为逐分量bit不等。

## UV初值、插值和几何距离修正

两輪平滑之后，每pair取当前奇点S=W[2i+1]：

```text
noise = Mathf.PerlinNoise(S.x*0.1, S.z*0.1)
u = Mathf.LerpUnclamped(noise, 0.5, 0.1)  // 0.9*noise + 0.05
U[2i]   = (u,   0)
U[2i+1] = (u+1, 0)
```

随后按原岸线顺序为中点追加UV：U[m]=(U[a]+U[b])*0.5。UV.x的整数差1区分外沿/内岸，UV.y后面才写入几何项，不能把其解释成普通0..1纹理坐标。

[UV生成](native_application/815c40.c)中存在一个看似丢失返回的Vector3.magnitude调用，原指令已经确认**结果确实被丢弃**：VA0x1081a95f调用后0x1081a971执行`fstp st(0)`，UV.y两处均写literal0。不是Ghidra遗漏一个应使用的宽度返回；UV.x保留LerpUnclamped结果。[原字节窗口](townscaper_sandbank_water_raw.json)。

最终每strip通过九个索引取A=W[a]、B=W[b]、As=W[a+1]、Bs=W[b+1]、M=W[m]，定义：

```text
LA = length(As - A)
LB = length(Bs - B)
R  = normalize(Rotate90Y(As - Bs))
   = normalize(((As-Bs).z, (As-Bs).y, -(As-Bs).x))
H  = dot(M - Bs, R)

U[a].y   += LA*0.5
U[b].y   += LB*0.5
U[b+1].y += LB*0.3 + H*0.2
U[a+1].y += LA*0.3 + H*0.2
U[m].y   += H
```

UV.x在这一循环保持原值。若顶点被多条strip共用，更新读出已有UV再相加，故这些项累积，不覆盖为单独某个strip值。H是带符号的侧向距离，不能用abs(H)代换。LA/LB均为三维length；Rotate90Y保留Y，不是将向量投影水平面。[五点取样](native_application/815c40.c)、[distance与signedH](native_application/815c40.c)、[UV加项](native_application/815c40.c)、[Rotate90Y真实body](native_application/836f60.c)。原PE的两个magnitude返回分别fstp到对应float局部，与初始化处的丢弃行为不同。

最后Mesh.SetVertices(W)、SetUVs(channel0,U)、SetTriangles(T,submesh0)，归还五个list并state++进入4。此阶段没有生成normal/tangent或重新求所有vertex法线；水的Shader输入/运行对象配置另有资源和GPU证据。[提交](native_application/815c40.c)。

## stage4：沙坡双份顶点、面几何和tangent字段

stage4使用原沙坡P，N为进入本阶段时顶点数（偶数）。Clear sandMf.sharedMesh，临时Vector4列表G预留2N容量，先填N个零向量。**这不是标准UV切线重建**：代码把面法线放在Mesh.tangent.xyz，把图集选择与正反面标记放在tangent.w，Shader按这个自定义布局取值；没有Mesh.SetNormals或RecalculateNormals调用。[stage4初始化](native_application/815c40.c)。

先倒序遍历原三角列表，以原顺序(a,b,c)读取P[a].y/P[b].y/P[c].y，三者都**恰好等于0**时RemoveRange(start,3)，否则保留。这里有明确“全水准平面三角去除”，和stage3没有CPU裁剪是两阶段不同规则；它不求穿过Y=0的交点或切割剩余三角。[精确零比较与倒序删除](native_application/815c40.c)。

记筛后原三角列表为S，M=S.Count；只遍历这M个旧索引（不再处理追加三角）。对每个(a,b,c)：

```text
S.Add(a+N); S.Add(c+N); S.Add(b+N)  // 第二份的反绕序
face = Cross(P[b]-P[a], P[c]-P[a])
G[a] += (face.x, face.y, face.z, 0)
G[b] += (face.x, face.y, face.z, 0)
G[c] += (face.x, face.y, face.z, 0)
```

每个face在累加前不normalize，保留三角面积权重；只有原顶点累加，不把追加反绕序的face再混入抵消。一个面法向来自真实三维沙坡而非统一Vector3.up。[反绕序追加](native_application/815c40.c)、[Cross和三点累加](native_application/815c40.c)。

随后逐pair i计算共享噪声幅度q，并按**odd→even**顺序处理这两顶点：

```text
q = Mathf.PerlinNoise(P[2i].x*0.2, P[2i].z*0.2) + 0.5
for k in (2i+1, 2i):
    n = Vector4.Normalize(G[k]).xyz  // 输入w保持0，故xyz是累积面法线归一
    G[k] = (n.x,n.y,n.z,+q)
    G.Add((n.x,n.y,n.z,-q))
```

因此第一份顶点Tangent正w；第二份追加tangent的每pair顺序交换，精确为G[N+2i].xyz=G[2i+1].xyz、G[N+2i+1].xyz=G[2i].xyz，w都为-q。**第二份不是将xyz法线取负**，也不是直接同顺序复制全部tangent。退化法线沿用Unity Vector4.Normalize实现，不另发明任意默认normal。[噪声和两项顺序](native_application/815c40.c)。

上述看似怪异的列表顺序已经原字节确认：VA0x1081ba87从pairIndex加1；0x1081baca调用Vector4 normalized；0x1081bb02写回原项；0x1081bb0f仅xorps载入的噪声标量，写w；0x1081bb34追加整个Vector4；0x1081bb43 dec index，cmp loopCounter2。XYZ三分量保留而w改符号，不能据共享类型显示推成整数或DateTime字段。[stage4扩展原指令窗口](townscaper_sandbank_water_raw.json)。

最后P.AddRange(P)，复制原位置到第二半：Pfinal[k+N]=P[k]，位置没有CPU镜像；设置vertices=2N个、triangles=筛后正绕序+N偏移反绕序、tangents=2N个，并RecalculateBounds，归还G。G第二半pair交换和P第二半不交换都是代码真实顺序，不以看似更合理的常规mesh写法替换。state++至5后下一Iterate返回false。[AddRange自身和提交](native_application/815c40.c)。

### tangent.w如何驱动沙洲Shader

Sandbank顶点Shader以abs(w)-0.5作为图集横向noise值；CPU的q=noise+0.5，因此两份顶点的abs(±q)-0.5都回到同一noise，UV.u=noise*_SandUv.z+_SandUv.x。它**没有对w取frac**。图集纵向UV.v=变形前worldPosition.y*_SandUv.w*4+_SandUv.y，两份顶点初始同位置，图集坐标相同。

对w<=0，顶点程序选择另一套几何：PressPos变形之后的worldPosition=(x,y,z)变为(x+0.1*abs(y)*waveX,-y,z+0.1*abs(y)*waveZ)，waveX/Z为已恢复的时间/位置sin项；w>0保留当前位置。这使第二份反绕序网格由GPU镜到Y负侧并附加波动，解释为何CPU复制同位置而只改w符号。轮廓输出和所有wave项保持在逐指令HLSL，不能把镜像扩张称成CPU新顶点。

Shader还把tangent.xyz乘ObjectToWorld的3×3得到世界normal向量，使用worldPosition+0.4*normal定位AO取样，并参与dot(normal,-SunDir)光照。它没有将tangent.w符号用来统一取反xyz；Shader的normal输入正是CPU累加/归一与第二半pair交换所得。这贯通了面法线、AO偏移、阳光与图集/上下双面几何。[abs(w)与图集](townscaper_shader_algorithms/sharedassets1.assets__174__Placemaker_Sandbank__p4__0.pseudo.txt)、[负w几何选择](townscaper_shader_algorithms/sharedassets1.assets__174__Placemaker_Sandbank__p4__0.pseudo.txt)、[xyz变换与AO偏移](townscaper_shader_algorithms/sharedassets1.assets__174__Placemaker_Sandbank__p4__0.pseudo.txt)。

## 图集参数与真实Material绑定

Sandbanker.UpdateShadeUvs传全局`_SandUv=(uvPos.x,uvPos.y,uvSize.x,uvSize.y)/256`；ByteFloat2 getter是乘1/256，不是1/255。发行level1:321的uvPos=(247,117)、uvSize=(8,30)，因此全局vector=(0.96484375,0.45703125,0.03125,0.1171875)。OnEnable将state0并更新该vector；OnValidate也更新；OnStart分别从WorldMeshes获取sand/water独立Mesh赋sharedMesh。[binding](native_application/81c1f0.c)、[ByteFloat](native_application/22e320.c)、[OnEnable](native_application/81c140.c)、[OnStart](native_application/81c160.c)。

真实资产引用：Sandbanker.sandMf=level1:248，其GameObject4的MeshRenderer234引用FileID2/PathID12，即sharedassets1:12 `Sandbank` Material→Shader174 `Placemaker/Sandbank`。waterMf=level1:260，其GameObject69的MeshRenderer246引用sharedassets1:17 `Water` Material→Shader170 `Placemaker/Water`；level1外部FileID2表已核对。原Assets JSON完整保存这些数值。[资产与外部表](townscaper_assets.json)、[组件](townscaper_asset_components.json)。

因此`_SandUv`是**Sandbank着色**的图集参数，不能误称stage3的Water UV都被乘该矩形。Sandbank顶点程序cb0[41]恢复出：输出u=(abs(input.tangent.w)-0.5)*_SandUv.z+_SandUv.x；输出v=worldPosition.y*_SandUv.w*4+_SandUv.y，worldPosition在PressPos变形前计算。Water顶点程序从stage3 UV导出 e=1-floor(U.x)，输出o0.x=e、o0.y=e*(U.y+1)、o0.z=4*frac(U.x)、o0.w=U.y；其纹理为AO/Shadow，未引用_SandUv。像素阶段周期条带与discard由Water Shader执行，和CPU三角Y裁剪不同。[Sandbank GPU](townscaper_shader_algorithms/sharedassets1.assets__174__Placemaker_Sandbank__p4__0.pseudo.txt)、[Water UV输出](townscaper_shader_algorithms/sharedassets1.assets__170__Placemaker_Water__p4__0.pseudo.txt)、[Water像素公式](townscaper_shaders.md)。

## 已完成核验与边界

`python -X utf8 work/inspect_sandbank_water.py`读取原PE、绑定Perlin/Lerp/三个magnitude调用及返回处理，输出哈希和原指令窗口；stage4窗口扩展至normalize、原项写回、单标量w取负、追加、odd→even计数和最终mesh提交。读取所有stage3/4控制流及真实Material/FileID引用，明确恢复固定拓扑、两轮平滑、coverage宽度、噪声/中点UV、五点signed距离UV修正、图集独立绑定，以及沙坡全零三角删除、复制位置/反绕序、tangent四分量和Shader使用。没有新的stage3/4算法未知项；尚未独立重建Unity.PerlinNoise/Vector3 compare内核、将完整sandbank网格逐位与原运行顶点比对或替换GPU程序，此类等价重建未获证明。
