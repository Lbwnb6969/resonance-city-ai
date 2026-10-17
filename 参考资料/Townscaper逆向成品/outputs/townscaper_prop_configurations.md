# 道具资源与连接配置

来源为发布的 GameObject/Transform 层级和真实 Placemaker.Props 组件。154 个自定义 PropCollider、159 个 PropNode 均保留完整数值；localBounds 的 m_Extent 是半尺寸，worldBounds 的零值是序列化初始状态，不能当生成后空间位置。

[逐组件数值 JSON](townscaper_prop_configurations.json) 保存 collider 的 layer/中心/半尺寸、节点 priority/motivations/计数、PropTransformer 变异幅度和 wire 端点引用。

| 组件类型 | 数量 |
|---|---:|
| PropCollider | 154 |
| PropColoredMesh | 13 |
| PropMeshAnimator | 1 |
| PropNgonScaler | 1 |
| PropNode | 159 |
| PropPropeller | 8 |
| PropTransformer | 62 |
| PropWire | 2 |
| PropWireAnchor | 4 |
| PropWireFlagMesh | 1 |
| PropWireItalianMesh | 1 |
| Window | 21 |

## 各实际资源名称的 collider 与节点

| 文件/节点资源 | collider 层/局部中心/半尺寸 | Node priority / motivation / hideCount |
|---|---|---|
| level1:59 `TestProp` | 0 / (0,0,0) / (0.5,0.5,0.5) | 0.0 / 1 / 0 |
| sharedassets1.assets:243 `Manhole_5` | 0 / (0,0,0) / (0.2,0.02,0.2) | -0.30000001192092896 / 1 / 0 |
| sharedassets1.assets:244 `Connector` | — | 0.0 / 0 / 0 |
| sharedassets1.assets:245 `Connector` | — | 0.0 / 0 / 0 |
| sharedassets1.assets:246 `ItalianAnchor (1)` | 0 / (-0.3,0,0) / (0.3,0.1,0.1) | 0.0 / 1 / 0 |
| sharedassets1.assets:247 `Connector` | — | 0.0 / 0 / 0 |
| sharedassets1.assets:248 `Pot_2` | 0 / (0,0.1,0) / (0.08,0.08,0.08) | 0.0 / 1 / 0 |
| sharedassets1.assets:249 `Pot_2` | 0 / (0,0.1,0) / (0.08,0.08,0.08) | 0.0 / 1 / 0 |
| sharedassets1.assets:250 `Chair` | 0 / (-0.011251,0.14732,0) / (0.089478,0.14732,0.083534) | -0.6000000238418579 / 1 / 0 |
| sharedassets1.assets:251 `Chair (1)` | 0 / (0.01,0.14732,0) / (0.07,0.14732,0.083534) | -0.10000000149011612 / 1 / 0 |
| sharedassets1.assets:252 `ButterflyLanding` | 0 / (0,0,0) / (0.04,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:253 `Wellingtons` | 0 / (-0.016357,0.054314,0.002723) / (0.051827,0.054314,0.043316) | -0.6000000238418579 / 1 / 0 |
| sharedassets1.assets:254 `Plant_1` | 0 / (0,0.3,0) / (0.15,0.3,0.15) | 0.800000011920929 / 1 / 0 |
| sharedassets1.assets:257 `Plant_1` | 0 / (0,0.3,0) / (0.15,0.3,0.15) | 0.800000011920929 / 1 / 0 |
| sharedassets1.assets:259 `Step_1` | 5 / (-0.036431,-0.11939,9.5367e-07) / (0.1182,0.074861,0.26552) | 2.0 / 1 / 0 |
| sharedassets1.assets:260 `Chair` | 0 / (-0.011251,0.14732,0) / (0.089478,0.14732,0.083534) | -0.6000000238418579 / 1 / 0 |
| sharedassets1.assets:261 `Chair` | 0 / (-0.011251,0.14732,0) / (0.089478,0.14732,0.083534) | -0.6000000238418579 / 1 / 0 |
| sharedassets1.assets:262 `Door_0` | 2 / (-0.11,0.07,0) / (0.34,0.3,0.13); 4 / (-9.5367e-07,0.14235,0) / (0.081773,0.2632,0.14827); 1 / (0.4,0.3,0) / (0.4,0.05,0.6) | 2.0 / 1 / 0 |
| sharedassets1.assets:263 `Door_0` | 2 / (-0.17,0.07,0) / (0.16,0.3,0.13); 4 / (-9.5367e-07,0.20086,1.1921e-07) / (0.081773,0.20468,0.12531); 1 / (0.4,0.3,0) / (0.4,0.05,0.6) | 2.0 / 1 / 0 |
| sharedassets1.assets:264 `Door_0` | 2 / (-0.11,0.07,0) / (0.34,0.3,0.13); 1 / (0.4,0.3,0) / (0.4,0.05,0.6); 4 / (-9.5367e-07,0.14235,0) / (0.081773,0.2632,0.14827) | 2.0 / 1 / 0 |
| sharedassets1.assets:265 `Door_0` | 4 / (-9.5367e-07,0.11662,0) / (0.081773,0.26196,0.14827); 1 / (0.4,0.3,0) / (0.4,0.05,0.6) | 1.0 / 1 / 0 |
| sharedassets1.assets:266 `Door_0` | 2 / (-0.11,-0.43,0) / (0.19,0.3,0.1); 1 / (0.4,-0.2,0) / (0.4,0.05,0.6); 4 / (-9.5367e-07,-0.1096,0) / (0.081773,0.19299,0.11863) | 2.0 / 1 / 0 |
| sharedassets1.assets:267 `Door_1` | 4 / (-9.5367e-07,0.085466,0) / (0.081773,0.28547,0.11863); 2 / (0.09,0,0) / (0.14,0.2,0.11863) | 2.0 / 1 / 0 |
| sharedassets1.assets:268 `Door_0` | 2 / (-0.11,0.07,0) / (0.34,0.3,0.13); 1 / (0.4,0.3,0) / (0.4,0.05,0.24); 4 / (-9.5367e-07,0.18491,0) / (0.081773,0.34395,0.14827) | 2.0 / 1 / 0 |
| sharedassets1.assets:270 `ButterflyLanding (1)` | 0 / (0,0,0) / (0.04,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:272 `BirdLanding_VariedZ (2)` | 0 / (0,0,0) / (0.02,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:273 `3` | 0 / (-1.9073e-06,0.20718,4.7684e-07) / (0.12,0.20718,0.12001) | 0.20000000298023224 / 1 / 0 |
| sharedassets1.assets:276 `Plant_2` | 0 / (0,0.05,0) / (0.08,0.05,0.08) | 0.8999999761581421 / 1 / 0 |
| sharedassets1.assets:277 `Plant_2` | 0 / (0,0.05,0) / (0.08,0.05,0.08) | 0.8999999761581421 / 1 / 0 |
| sharedassets1.assets:278 `Hook` | 0 / (0,-0.17,0) / (0.061443,0.2,0.15277) | 0.0 / 1 / 0 |
| sharedassets1.assets:281 `Plant_0` | 0 / (0,0.18,0) / (0.1,0.18,0.1) | 1.0 / 1 / 0 |
| sharedassets1.assets:282 `Plant_0` | 0 / (0,0.18,0) / (0.1,0.18,0.1) | 1.0 / 1 / 0 |
| sharedassets1.assets:284 `DoorWallLight` | 0 / (-0.062794,-2.2352e-08,-1.5646e-07) / (0.046707,0.08655,0.08655) | -0.20000000298023224 / 1 / 0 |
| sharedassets1.assets:285 `DoorWallLight` | 0 / (-0.062794,-2.2352e-08,-1.5646e-07) / (0.046707,0.08655,0.08655) | -0.20000000298023224 / 1 / 0 |
| sharedassets1.assets:286 `DoorWallLight` | 0 / (-0.062794,-2.2352e-08,-1.5646e-07) / (0.046707,0.08655,0.08655) | -0.20000000298023224 / 1 / 0 |
| sharedassets1.assets:287 `Birdhouse_0` | 0 / (-0.083357,0.018178,0) / (0.07302,0.16665,0.091587) | 0.0 / 1 / 0 |
| sharedassets1.assets:288 `BirdLanding_Precise` | 0 / (0,0,0) / (0.02,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:289 `BirdLanding_Precise` | 0 / (0,0,0) / (0.02,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:290 `Plant_3` | 0 / (0,0.55108,0) / (0.14,0.14,0.14); 0 / (0,0.18,0) / (0.02,0.25,0.02) | 0.8999999761581421 / 1 / 0 |
| sharedassets1.assets:291 `ButterflyLanding` | 0 / (0,0,0) / (0.04,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:292 `Birdhouse_2` | 0 / (-0.083357,-0.03168,0) / (0.07302,0.21651,0.091587) | -0.5 / 1 / 0 |
| sharedassets1.assets:293 `Connector` | — | 0.0 / 0 / 0 |
| sharedassets1.assets:294 `ItalianAnchor` | 0 / (-0.3,0,0) / (0.3,0.1,0.1) | 0.0 / 1 / 0 |
| sharedassets1.assets:295 `Spire_2` | 0 / (0,0.22531,-1.9073e-06) / (0.09663,0.26034,0.096628) | 0.0 / 1 / 0 |
| sharedassets1.assets:296 `Spire_0` | 0 / (0,0.22531,-1.9073e-06) / (0.09663,0.26034,0.096628) | 0.0 / 1 / 0 |
| sharedassets1.assets:297 `GardenSculpture` | 0 / (0,0.22531,-1.9073e-06) / (0.09663,0.26034,0.096628) | 0.0 / 1 / 0 |
| sharedassets1.assets:298 `Hatch` | — | 0.0 / 1 / 0 |
| sharedassets1.assets:299 `WallLanternLight` | 0 / (-0.14,0.08,-0.00013351) / (0.08,0.19,0.073284); 4 / (0.02,0.01,-0.00013351) / (0.04,0.11,0.073284) | 2.0 / 1 / 0 |
| sharedassets1.assets:300 `LifeRing` | 0 / (-0.041192,0,0) / (0.03029,0.13014,0.13014) | -0.699999988079071 / 1 / 0 |
| sharedassets1.assets:301 `Rake` | 0 / (-0.050797,0.21,0) / (0.050797,0.16,0.04) | -0.800000011920929 / 1 / 0 |
| sharedassets1.assets:302 `Spade` | 0 / (-0.050797,0.15,0) / (0.050797,0.16,0.05) | -0.800000011920929 / 1 / 0 |
| sharedassets1.assets:303 `ElectricBox` | 0 / (-9.5367e-07,0.1499,-5.5879e-07) / (0.052237,0.1499,0.12421) | -0.6000000238418579 / 1 / 0 |
| sharedassets1.assets:304 `Birdhouses` | 0 / (-0.18,0,0) / (0.1,0.16,0.1); 0 / (0.06,0.09,0) / (0.3,0.44,0.3) | -0.800000011920929 / 1 / 0 |
| sharedassets1.assets:305 `Bench` | 0 / (-0.02,0.11,0) / (0.1,0.11,0.23); 2 / (-0.09,0.19,0) / (0.18,0.19,0.23) | 0.0 / 1 / 0 |
| sharedassets1.assets:306 `ArchRoofLight` | 0 / (0.0040474,0.02,-2.2352e-08) / (0.2,0.01,0.2) | 0.0 / 1 / 0 |
| sharedassets1.assets:307 `Spire_3` | 0 / (0,0.22531,-1.9073e-06) / (0.09663,0.26034,0.096628) | 0.0 / 1 / 0 |
| sharedassets1.assets:308 `Spire_1` | 0 / (0,0.22531,-1.9073e-06) / (0.09663,0.26034,0.096628) | 0.0 / 1 / 0 |
| sharedassets1.assets:309 `Table` | 0 / (0,0.2,0) / (0.6,0.01,0.6); 0 / (0.06,0.13083,0.0063868) / (0.22,0.122,0.162) | 0.0 / 1 / 0 |
| sharedassets1.assets:310 `Manhole_4` | 0 / (0,0,0) / (0.25,0.02,0.25) | -0.20000000298023224 / 1 / 0 |
| sharedassets1.assets:311 `ButterflyLanding` | 0 / (0,0,0) / (0.04,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:312 `Plant_3 (1)` | — | 0.8999999761581421 / 1 / 0 |
| sharedassets1.assets:314 `BirdLanding_VariedZ (1)` | 0 / (0,0,0) / (0.02,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:315 `Chair (3)` | 0 / (0.01,0.14732,0) / (0.07,0.14732,0.083534) | -0.10000000149011612 / 1 / 0 |
| sharedassets1.assets:316 `Wellingtons` | 0 / (-0.016357,0.054314,0.002723) / (0.051827,0.054314,0.043316) | -0.6000000238418579 / 1 / 0 |
| sharedassets1.assets:317 `Wellingtons` | 0 / (-0.016357,0.054314,0.002723) / (0.051827,0.054314,0.043316) | -0.6000000238418579 / 1 / 0 |
| sharedassets1.assets:320 `Chair` | — | 1.0 / 1 / 0 |
| sharedassets1.assets:331 `DoorWallLight` | 0 / (-0.062794,-2.2352e-08,-1.5646e-07) / (0.046707,0.08655,0.08655) | -0.20000000298023224 / 1 / 0 |
| sharedassets1.assets:333 `ButterflyLanding` | 0 / (0,0,0) / (0.04,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:338 `BirdLanding_Precise` | 0 / (0,0,0) / (0.02,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:339 `BirdLanding_Precise` | 0 / (0,0,0) / (0.02,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:347 `BirdLanding_Precise (1)` | 0 / (0,0,0) / (0.02,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:348 `BirdLanding_Precise (1)` | 0 / (0,0,0) / (0.02,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:350 `Step_0` | 5 / (-0.04123,-0.11939,9.5367e-07) / (0.123,0.074861,0.24037) | 2.0 / 1 / 0 |
| sharedassets1.assets:351 `Plant_0` | 0 / (0,0.18,0) / (0.1,0.18,0.1) | 1.0 / 1 / 0 |
| sharedassets1.assets:353 `Railing` | — | -0.5 / 1 / 0 |
| sharedassets1.assets:354 `Plant_0` | 0 / (0,0.18,0) / (0.1,0.18,0.1) | 1.0 / 1 / 0 |
| sharedassets1.assets:355 `Mailbox` | 0 / (-0.047143,0.057442,-1.1474e-06) / (0.047143,0.088136,0.068026) | -0.30000001192092896 / 1 / 0 |
| sharedassets1.assets:356 `BirdLanding_VariedZ` | 0 / (0,0,0) / (0.02,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:386 `Chair (2)` | 0 / (0.01,0.14732,0) / (0.07,0.14732,0.083534) | -0.10000000149011612 / 1 / 0 |
| sharedassets1.assets:387 `ButterflyLanding` | 0 / (0,0,0) / (0.04,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:389 `Landing` | — | 0.0 / 0 / 0 |
| sharedassets1.assets:390 `2` | 0 / (-1.9073e-06,0.14372,4.7684e-07) / (0.12,0.14372,0.12001) | 0.0 / 1 / 0 |
| sharedassets1.assets:391 `ButterflyLanding` | 0 / (0,0,0) / (0.04,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:393 `Mailbox` | 0 / (-0.11,0.057442,-1.1474e-06) / (0.14,0.088136,0.068026) | -0.4000000059604645 / 1 / 0 |
| sharedassets1.assets:394 `Mailbox` | 0 / (-0.11,0.057442,-1.1474e-06) / (0.14,0.088136,0.068026) | -0.4000000059604645 / 1 / 0 |
| sharedassets1.assets:395 `Pot_0` | 0 / (0,0.13216,0) / (0.12,0.10818,0.12) | 0.0 / 1 / 0 |
| sharedassets1.assets:396 `Pot_0` | 0 / (0,0.13216,0) / (0.12,0.10818,0.12) | 0.0 / 1 / 0 |
| sharedassets1.assets:399 `Plant_3` | 0 / (0,0.18,0) / (0.02,0.25,0.02); 0 / (0,0.55108,0) / (0.14,0.14,0.14) | 0.8999999761581421 / 1 / 0 |
| sharedassets1.assets:400 `ButterflyLanding` | 0 / (0,0,0) / (0.04,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:401 `Bin` | 0 / (-0.09,0.13874,0) / (0.15,0.13874,0.1) | -0.800000011920929 / 1 / 0 |
| sharedassets1.assets:402 `Window_2x1` | 0 / (-0.1,0.40071,0) / (0.1,0.099287,0.3) | 0.0 / 1 / 6 |
| sharedassets1.assets:403 `GrowBox` | 0 / (4.6194e-07,0.2,1.4603e-06) / (0.13007,0.23,0.26099) | 0.0 / 1 / 0 |
| sharedassets1.assets:404 `Window_1x1` | 4 / (0,0.09,9.5367e-07) / (0.081773,0.19,0.09411) | 1.0 / 1 / 0 |
| sharedassets1.assets:405 `Blocker` | 2 / (0,0,0) / (0.5,0.5,0.5) | 2.0 / 1 / 0 |
| sharedassets1.assets:406 `Window_2x2_Bottom` | 2 / (-0.19,0.26,0) / (0.19,0.09,0.09); 4 / (-0.1,0.19522,0) / (0.1,0.15061,0.3) | 0.0 / 1 / 110 |
| sharedassets1.assets:408 `Pot_1` | 0 / (0,0.13216,0) / (0.16,0.10818,0.15) | -0.20000000298023224 / 1 / 0 |
| sharedassets1.assets:409 `Door_0` | — | 2.0 / 1 / 0 |
| sharedassets1.assets:410 `Mailbox` | 0 / (-0.08,0.057442,-1.1474e-06) / (0.09,0.088136,0.068026) | -0.4000000059604645 / 1 / 0 |
| sharedassets1.assets:411 `ItalianAnchor` | 3 / (-0.3,0,0) / (0.3,0.1,0.1) | -0.4000000059604645 / 1 / 0 |
| sharedassets1.assets:412 `Door_Awkward` | — | 2.0 / 1 / 0 |
| sharedassets1.assets:413 `Propeller_Down_Left` | 0 / (-2.861e-06,-0.34179,-9.5367e-07) / (0.19799,0.37653,0.17146) | 1.0 / 1 / 0 |
| sharedassets1.assets:414 `Plant_Noncol_2` | — | 1.0 / 1 / 0 |
| sharedassets1.assets:415 `Propeller_SupportSide_Right` | 0 / (-0.17,-0.08,0) / (0.37,0.2,0.19) | 1.0 / 1 / 0 |
| sharedassets1.assets:416 `LawnFlowers_1` | — | -0.5 / 1 / 0 |
| sharedassets1.assets:417 `Door_2` | — | 2.0 / 1 / 56 |
| sharedassets1.assets:418 `Propeller_Support_Right` | 0 / (-0.17,-0.08,0) / (0.37,0.2,0.19) | 1.0 / 1 / 0 |
| sharedassets1.assets:419 `CarnivalAnchor` | 3 / (-0.55,0,0) / (0.55,0.1,0.6) | 2.0 / 1 / 0 |
| sharedassets1.assets:420 `PlantGroundGroup_2` | 0 / (-0.12,0.05,0) / (0.16,0.05,0.1) | 0.0 / 1 / 0 |
| sharedassets1.assets:421 `Door_Seaside` | — | 1.0 / 1 / 0 |
| sharedassets1.assets:422 `PlantGroup_2` | — | 1.0 / 1 / 0 |
| sharedassets1.assets:423 `Propeller_Right` | 0 / (-0.17,-0.08,0) / (0.37,0.2,0.19) | 1.0 / 1 / 0 |
| sharedassets1.assets:424 `LawnFlowers_0` | — | -0.5 / 1 / 0 |
| sharedassets1.assets:425 `CarnivalWire` | 0 / (0,-0.1,0) / (0.01,0.09,0.4) | 2.0 / 1 / 0 |
| sharedassets1.assets:426 `Window_2x3` | 4 / (-0.1,0.083894,0) / (0.1,0.22923,0.15) | 0.0 / 1 / 0 |
| sharedassets1.assets:427 `Hook` | 0 / (0,-0.18947,0) / (0.050528,0.18947,0.081257) | 0.0 / 1 / 0 |
| sharedassets1.assets:428 `Binoculars` | 0 / (-0.010646,0.21797,-1.7509e-06) / (0.093242,0.21797,0.089184) | -0.800000011920929 / 1 / 0 |
| sharedassets1.assets:429 `Beehive` | — | -0.800000011920929 / 1 / 0 |
| sharedassets1.assets:430 `Plant_Noncol_0` | — | 1.0 / 1 / 0 |
| sharedassets1.assets:431 `Door_Platform` | — | 2.0 / 1 / 56 |
| sharedassets1.assets:432 `ButterflyLanding` | 0 / (0,0,0) / (0.04,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:433 `Pots` | — | 0.20000000298023224 / 1 / 0 |
| sharedassets1.assets:434 `Door_1` | — | 2.0 / 1 / 56 |
| sharedassets1.assets:435 `Door_Store` | — | 2.0 / 1 / 56 |
| sharedassets1.assets:436 `Chair` | 0 / (-0.011251,0.14732,0) / (0.089478,0.14732,0.083534) | -0.5 / 1 / 0 |
| sharedassets1.assets:437 `Window_2x2` | 4 / (-0.1,0.093989,0) / (0.1,0.15003,0.15) | 0.0 / 1 / 6 |
| sharedassets1.assets:438 `Propeller_Left` | 0 / (-0.17,-0.08,0) / (0.37,0.2,0.19) | 1.0 / 1 / 0 |
| sharedassets1.assets:439 `PlantGroup_3` | — | 1.0 / 1 / 0 |
| sharedassets1.assets:440 `Pots_Small` | — | -0.20000000298023224 / 1 / 0 |
| sharedassets1.assets:441 `Door_Church` | 4 / (-9.5367e-07,0.29,0) / (0.23,0.46,0.22); 2 / (-0.11,0.31,0) / (0.34,0.45,0.19) | 5.0 / 1 / 56 |
| sharedassets1.assets:442 `Propeller_Down_Right` | 0 / (-2.861e-06,-0.34179,-9.5367e-07) / (0.19799,0.37653,0.17146) | 1.0 / 1 / 0 |
| sharedassets1.assets:443 `PlantGround_0` | 0 / (-0.12,0.05,0) / (0.13,0.05,0.13) | 0.0 / 1 / 0 |
| sharedassets1.assets:444 `BirdLanding_Precise` | 0 / (0,0,0) / (0.02,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:445 `Propeller_SupportSide_Left` | 0 / (-0.17,-0.08,0) / (0.37,0.2,0.19) | 1.0 / 1 / 0 |
| sharedassets1.assets:446 `PlantGroundGroup_3` | 0 / (-0.13,0.05,0) / (0.18,0.05,0.18) | 0.0 / 1 / 0 |
| sharedassets1.assets:447 `LawnFlowers_2` | — | -0.5 / 1 / 0 |
| sharedassets1.assets:448 `Propeller_Support_Left` | 0 / (-0.17,-0.08,0) / (0.37,0.2,0.19) | 1.0 / 1 / 0 |
| sharedassets1.assets:449 `Window_2x2_Diagonal` | 0 / (0,-0.1514,0) / (0.081772,0.21093,0.21093) | 0.0 / 1 / 0 |
| sharedassets1.assets:450 `PlantGroup_0` | — | 1.0 / 1 / 0 |
| sharedassets1.assets:451 `Window_1x1_Diagonal` | 4 / (0,0,0) / (0.081773,0.13104,0.13103) | 0.0 / 1 / 0 |
| sharedassets1.assets:452 `FuelTank` | — | 0.0 / 1 / 0 |
| sharedassets1.assets:453 `PlantGround_2` | 0 / (-0.12,0.05,0) / (0.13,0.05,0.13) | 0.0 / 1 / 0 |
| sharedassets1.assets:454 `Manholes` | — | -0.5 / 1 / 0 |
| sharedassets1.assets:455 `BirdLanding_VariedBoth` | 0 / (0,0,0) / (0.02,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:456 `BirdLanding_VariedZ` | 0 / (0,0,0) / (0.02,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:457 `ItalianWire` | 0 / (0,-0.1,0) / (0.01,0.14,0.4) | 2.0 / 1 / 0 |
| sharedassets1.assets:460 `ButterflyLanding` | 0 / (0,0,0) / (0.04,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:461 `Birdhouse_1` | 0 / (-0.083357,-0.0025745,0) / (0.07302,0.1874,0.091587) | -0.5 / 1 / 0 |
| sharedassets1.assets:462 `DoorWallLight` | 0 / (-0.062794,-2.2352e-08,-1.5646e-07) / (0.046707,0.08655,0.08655) | -0.20000000298023224 / 1 / 0 |
| sharedassets1.assets:463 `Plant_2` | 0 / (0,0.05,0) / (0.08,0.05,0.08) | 0.8999999761581421 / 1 / 0 |
| sharedassets1.assets:464 `Plant_3 (1)` | — | 0.8999999761581421 / 1 / 0 |
| sharedassets1.assets:469 `Plant_2` | 0 / (0,0.05,0) / (0.08,0.05,0.08) | 0.8999999761581421 / 1 / 0 |
| sharedassets1.assets:470 `Plant_2` | 0 / (0,0.05,0) / (0.08,0.05,0.08) | 0.8999999761581421 / 1 / 0 |
| sharedassets1.assets:471 `ButterflyLanding` | 0 / (0,0,0) / (0.04,0.04,0.04) | 0.0 / 1 / 0 |
| sharedassets1.assets:472 `Window_2x2_Bottm` | 2 / (-0.19,0.26,0) / (0.19,0.09,0.09); 4 / (-9.5367e-07,0.14235,0) / (0.081773,0.2632,0.14827) | 1.0 / 1 / 0 |
| sharedassets1.assets:473 `Window_2x2_Bottm` | 2 / (-0.19,0.26,0) / (0.19,0.09,0.09); 4 / (-9.5367e-07,0.14235,0) / (0.081773,0.2632,0.14827) | 1.0 / 1 / 0 |
| sharedassets1.assets:474 `Window_2x2_Bottm` | 4 / (-9.5367e-07,0.14235,0) / (0.081773,0.2632,0.14827); 2 / (-0.19,0.26,0) / (0.19,0.09,0.09) | 1.0 / 1 / 0 |
| sharedassets1.assets:475 `Window_2x2` | 4 / (0.08,0.1,0) / (0.04,0.09,0.09) | 0.0 / 1 / 0 |
| sharedassets1.assets:476 `Window_2x2_Bottm` | 4 / (-9.5367e-07,0.40071,0) / (0.081773,0.099287,0.14827); 2 / (-0.13,0.41,0) / (0.14,0.09,0.06) | 1.0 / 1 / 0 |
| sharedassets1.assets:477 `Window_2x2_Bottm` | 4 / (-9.5367e-07,0.14235,0) / (0.081773,0.2632,0.14827); 2 / (-0.19,0.26,0) / (0.19,0.09,0.09) | 1.0 / 1 / 0 |

## 连线资源

这些字段是源配置；anchor0/anchor1 为零的 wire prefab 在放置时由原生逻辑接到两个实际 anchor。

| 组件 | 层级 | 引用/参数 |
|---|---|---|
| sharedassets1.assets:1140 PropWireAnchor | Door_Seaside / Window_2x2 / ItalianAnchor (1) | `{"srcWire":{"m_FileID":0,"m_PathID":1469},"propWires":[],"voxelType":0,"wireConnectorNode":{"m_FileID":0,"m_PathID":1139},"connectPos":{"x":-0.06499999761581421,"y":0.009999999776482582,"z":0.0}}` |
| sharedassets1.assets:1276 PropWireItalianMesh | ItalianWire | `{}` |
| sharedassets1.assets:1336 PropWireAnchor | Door_Seaside / Window_2x2 / ItalianAnchor | `{"srcWire":{"m_FileID":0,"m_PathID":1469},"propWires":[],"voxelType":0,"wireConnectorNode":{"m_FileID":0,"m_PathID":1338},"connectPos":{"x":-0.06499999761581421,"y":0.009999999776482582,"z":0.0}}` |
| sharedassets1.assets:1458 PropWireAnchor | ItalianAnchor | `{"srcWire":{"m_FileID":0,"m_PathID":1469},"propWires":[],"voxelType":0,"wireConnectorNode":{"m_FileID":0,"m_PathID":1565},"connectPos":{"x":-0.06499999761581421,"y":0.009999999776482582,"z":0.0}}` |
| sharedassets1.assets:1459 PropWireAnchor | CarnivalAnchor | `{"srcWire":{"m_FileID":0,"m_PathID":1468},"propWires":[],"voxelType":0,"wireConnectorNode":{"m_FileID":0,"m_PathID":1566},"connectPos":{"x":-0.10000000149011612,"y":0.05999999865889549,"z":0.0}}` |
| sharedassets1.assets:1468 PropWire | CarnivalWire | `{"anchor0":{"m_FileID":0,"m_PathID":0},"anchor1":{"m_FileID":0,"m_PathID":0}}` |
| sharedassets1.assets:1469 PropWire | ItalianWire | `{"anchor0":{"m_FileID":0,"m_PathID":0},"anchor1":{"m_FileID":0,"m_PathID":0}}` |
| sharedassets1.assets:1676 PropWireFlagMesh | CarnivalWire | `{"uv":{"x":0.83203125,"y":0.17578120529651642,"z":0.87890625,"w":0.14453120529651642}}` |
