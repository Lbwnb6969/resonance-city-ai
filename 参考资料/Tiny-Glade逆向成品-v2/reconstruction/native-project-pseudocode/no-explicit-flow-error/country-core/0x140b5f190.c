// VA 0x140b5f190, PDB extent 10462 bytes
// country_core::systems::history::replay_raster::replay_raster<country_core::resources::world_raster_defs::WaterRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::history::replay_water::replay_water::closure_env$2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::history::replay_raster::replay_raster<country_core::resources::world_raster_defs::WaterRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::history::replay_water::replay_water::closure_env$2>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_raster.rs
   Extent: 10462 */

void pdb_140b5f190(ulonglong *param_1,longlong param_2,code *param_3,code *param_4,longlong *param_5
                  )

{
  ulonglong uVar1;
  ulonglong *puVar2;
  float fVar3;
  undefined1 auVar4 [16];
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  byte *pbVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 (*pauVar27) [16];
  ulonglong *puVar28;
  undefined1 uVar29;
  byte *pbVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined4 uVar37;
  undefined8 in_stack_fffffffffffffdf8;
  undefined4 uVar38;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  longlong lStack_188;
  byte *pbStack_180;
  ulonglong *puStack_178;
  ulonglong *puStack_170;
  ulonglong *puStack_168;
  ulonglong *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulonglong uStack_138;
  undefined1 auStack_130 [8];
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulonglong uStack_f8;
  byte *pbStack_f0;
  ulonglong uStack_e8;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  ulonglong *puStack_b8;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  ulonglong *puStack_a8;
  ulonglong *puStack_a0;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  uVar17 = *param_1;
  puStack_a0 = (ulonglong *)param_1[4];
  uVar25 = param_1[8];
  puVar16 = (ulonglong *)param_1[0xc];
  uVar6 = param_1[0x10];
  fVar31 = *(float *)(puVar16 + 5);
  lStack_188 = 0;
  pbStack_180 = (byte *)0x8;
  puStack_178 = (ulonglong *)0x0;
  *(undefined4 *)param_1[0xe] = *(undefined4 *)((longlong)param_1 + 0x7c);
  if (puVar16[3] == 0) {
    puStack_a0 = (ulonglong *)0x0;
    goto LAB_140b60ee5;
  }
  uVar26 = *puVar16;
  if (puVar16[2] < *puVar16) {
    uVar26 = 0;
  }
  uVar24 = puVar16[1];
  lVar18 = (puVar16[2] - uVar26) * 0x40;
  puStack_b8 = (ulonglong *)(uVar24 + lVar18);
  puStack_170 = (ulonglong *)0x0;
  puStack_168 = (ulonglong *)0x8;
  puStack_160 = (ulonglong *)0x0;
  lVar21 = *(longlong *)(uVar24 + 8 + lVar18);
  lVar18 = *(longlong *)(uVar24 + 0x10 + lVar18) * 0x30 + lVar21;
  uVar26 = 0;
  pcStack_158 = param_4;
  uStack_138 = uVar17;
  do {
    uVar17 = uVar26;
    if (lVar21 == lVar18) goto LAB_140b60cb8;
    uStack_91 = 1;
    puVar13 = (undefined8 *)(*param_3)(lVar21);
    uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
    lVar21 = lVar21 + 0x30;
    uVar26 = uVar17 + 1;
  } while (puVar13 == (undefined8 *)0x0);
  if (*(char *)((longlong)puVar13 + 0x19) == '\0') {
    if (*(longlong *)(puVar13[1] + 0x20) == 0) {
      uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14305a840,0x34,&UNK_14305a878);
    }
    *(undefined1 *)((longlong)puVar13 + 0x19) = 1;
    pub_142e32780(uVar6 + 0x1000,0,0x400);
    uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
    fVar3 = *(float *)((longlong)puVar13 + 0x14);
    if (*(char *)(puVar13 + 3) != '\0') {
      uStack_91 = 1;
      pdb_140a787a0(param_2,0);
      pbStack_c0 = (byte *)*puVar13;
      uVar26 = puStack_a0[1];
      uVar24 = puStack_a0[2];
      uVar19 = uVar26;
      while (uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20),
            uVar19 != uVar26 + uVar24 * 0x28) {
        uVar1 = uVar19 + 0x28;
        lVar21 = *(longlong *)(uVar19 + 8);
        lVar18 = *(longlong *)(uVar19 + 0x10);
        lVar22 = lVar21;
        while (uVar19 = uVar1, lVar22 != lVar21 + lVar18 * 0x18) {
          lVar20 = lVar22 + 0x18;
          puStack_a8 = puStack_178;
          puStack_178 = (ulonglong *)0x0;
          puStack_a0 = (ulonglong *)0x0;
          pbVar23 = pbStack_180;
          while (puStack_a8 != puStack_a0) {
            puStack_a0 = (ulonglong *)((longlong)puStack_a0 + 1);
            pdb_140b673e0(pbVar23);
            pbVar23 = pbVar23 + 0x30;
          }
          uStack_91 = 1;
          (*pcStack_158)(lVar22,&lStack_188);
          pbVar30 = pbStack_180 + (longlong)puStack_178 * 0x30;
          pbVar23 = pbStack_180;
          while (lVar22 = lVar20, pbVar23 != pbVar30) {
            uStack_91 = 1;
            plVar14 = (longlong *)(*param_3)(pbVar23);
            uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
            pbVar23 = pbVar23 + 0x30;
            if (plVar14 != (longlong *)0x0) {
              if ((byte *)*plVar14 == pbStack_c0) goto LAB_140b5f485;
              lVar22 = plVar14[1];
              uStack_91 = 1;
              in_stack_fffffffffffffdf8 = CONCAT44(uVar38,*(undefined4 *)(lVar22 + 0x28));
              pdb_140a79030(param_2,0,*(longlong *)(lVar22 + 0x18) + 0x10,
                            *(longlong *)(lVar22 + 0x18) + *(longlong *)(lVar22 + 0x20) * 0xc + 0x10
                            ,in_stack_fffffffffffffdf8,*(undefined1 *)(lVar22 + 0x2c),
                            *(undefined4 *)(lVar22 + 0x10),*(undefined4 *)(lVar22 + 0x14));
            }
          }
        }
      }
    }
LAB_140b5f485:
    if (_DAT_142e37848 <= fVar3) goto LAB_140b5f932;
    if (*(char *)(puVar13 + 3) == '\0') {
      lVar21 = puVar13[1];
      uStack_91 = 1;
      pdb_140a79030(param_2,0,*(longlong *)(lVar21 + 0x18) + 0x10,
                    *(longlong *)(lVar21 + 0x18) + *(longlong *)(lVar21 + 0x20) * 0xc + 0x10,
                    CONCAT44(uVar38,*(undefined4 *)(lVar21 + 0x28)),*(undefined1 *)(lVar21 + 0x2c),
                    *(undefined4 *)(lVar21 + 0x10),*(undefined4 *)(lVar21 + 0x14));
      if (*(char *)((longlong)puVar13 + 0x1a) == '\x01') {
        lVar21 = puVar13[1];
        if (*(longlong *)(lVar21 + 0x20) == 0) {
          uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,0,&UNK_14305a810);
        }
        uStack_128 = *(undefined4 *)(*(longlong *)(lVar21 + 0x18) + 0x18);
        uVar7 = *(undefined8 *)(*(longlong *)(lVar21 + 0x18) + 0x10);
        auStack_130._0_4_ = (undefined4)uVar7;
        auStack_130._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_124 = *(undefined4 *)(lVar21 + 0x28);
        uStack_120 = 1;
        uStack_91 = 1;
        pdb_140b578c0(param_5,auStack_130);
      }
    }
    pub_142e32780(uVar6 + 0x1200,0,0x200);
    lVar21 = puVar13[1];
    uStack_91 = 1;
    pdb_140a83c80(uVar6 + 0x1200,*(longlong *)(lVar21 + 0x18) + 0x10,
                  *(longlong *)(lVar21 + 0x18) + *(longlong *)(lVar21 + 0x20) * 0xc + 0x10,
                  *(undefined4 *)(lVar21 + 0x28));
    uVar26 = *(ulonglong *)(uVar6 + 0x1208);
    uVar24 = *(ulonglong *)(uVar6 + 0x1210);
    uVar19 = *(ulonglong *)(uVar6 + 0x1218);
    *(ulonglong *)(param_2 + 0x98) = *(ulonglong *)(param_2 + 0x98) | *(ulonglong *)(uVar6 + 0x1200)
    ;
    *(ulonglong *)(param_2 + 0xa0) = *(ulonglong *)(param_2 + 0xa0) | uVar26;
    *(ulonglong *)(param_2 + 0xa8) = *(ulonglong *)(param_2 + 0xa8) | uVar24;
    *(ulonglong *)(param_2 + 0xb0) = *(ulonglong *)(param_2 + 0xb0) | uVar19;
    uVar19 = *(ulonglong *)(uVar6 + 0x1228);
    uVar26 = *(ulonglong *)(uVar6 + 0x1230);
    uVar24 = *(ulonglong *)(uVar6 + 0x1238);
    *(ulonglong *)(param_2 + 0xb8) = *(ulonglong *)(uVar6 + 0x1220) | *(ulonglong *)(param_2 + 0xb8)
    ;
    *(ulonglong *)(param_2 + 0xc0) = uVar19 | *(ulonglong *)(param_2 + 0xc0);
    *(ulonglong *)(param_2 + 200) = uVar26 | *(ulonglong *)(param_2 + 200);
    *(ulonglong *)(param_2 + 0xd0) = uVar24 | *(ulonglong *)(param_2 + 0xd0);
    uVar26 = *(ulonglong *)(uVar6 + 0x1248);
    uVar24 = *(ulonglong *)(uVar6 + 0x1250);
    uVar19 = *(ulonglong *)(uVar6 + 0x1258);
    *(ulonglong *)(param_2 + 0xd8) = *(ulonglong *)(param_2 + 0xd8) | *(ulonglong *)(uVar6 + 0x1240)
    ;
    *(ulonglong *)(param_2 + 0xe0) = *(ulonglong *)(param_2 + 0xe0) | uVar26;
    *(ulonglong *)(param_2 + 0xe8) = *(ulonglong *)(param_2 + 0xe8) | uVar24;
    *(ulonglong *)(param_2 + 0xf0) = *(ulonglong *)(param_2 + 0xf0) | uVar19;
    uVar26 = *(ulonglong *)(uVar6 + 0x1268);
    uVar24 = *(ulonglong *)(uVar6 + 0x1270);
    uVar19 = *(ulonglong *)(uVar6 + 0x1278);
    *(ulonglong *)(param_2 + 0xf8) = *(ulonglong *)(param_2 + 0xf8) | *(ulonglong *)(uVar6 + 0x1260)
    ;
    *(ulonglong *)(param_2 + 0x100) = *(ulonglong *)(param_2 + 0x100) | uVar26;
    *(ulonglong *)(param_2 + 0x108) = *(ulonglong *)(param_2 + 0x108) | uVar24;
    *(ulonglong *)(param_2 + 0x110) = *(ulonglong *)(param_2 + 0x110) | uVar19;
    uVar26 = *(ulonglong *)(uVar6 + 0x1288);
    uVar24 = *(ulonglong *)(uVar6 + 0x1290);
    uVar19 = *(ulonglong *)(uVar6 + 0x1298);
    *(ulonglong *)(param_2 + 0x118) =
         *(ulonglong *)(param_2 + 0x118) | *(ulonglong *)(uVar6 + 0x1280);
    *(ulonglong *)(param_2 + 0x120) = *(ulonglong *)(param_2 + 0x120) | uVar26;
    *(ulonglong *)(param_2 + 0x128) = *(ulonglong *)(param_2 + 0x128) | uVar24;
    *(ulonglong *)(param_2 + 0x130) = *(ulonglong *)(param_2 + 0x130) | uVar19;
    uVar26 = *(ulonglong *)(uVar6 + 0x12a8);
    uVar24 = *(ulonglong *)(uVar6 + 0x12b0);
    uVar19 = *(ulonglong *)(uVar6 + 0x12b8);
    *(ulonglong *)(param_2 + 0x138) =
         *(ulonglong *)(param_2 + 0x138) | *(ulonglong *)(uVar6 + 0x12a0);
    *(ulonglong *)(param_2 + 0x140) = *(ulonglong *)(param_2 + 0x140) | uVar26;
    *(ulonglong *)(param_2 + 0x148) = *(ulonglong *)(param_2 + 0x148) | uVar24;
    *(ulonglong *)(param_2 + 0x150) = *(ulonglong *)(param_2 + 0x150) | uVar19;
    uVar26 = *(ulonglong *)(uVar6 + 0x12c8);
    uVar24 = *(ulonglong *)(uVar6 + 0x12d0);
    uVar19 = *(ulonglong *)(uVar6 + 0x12d8);
    *(ulonglong *)(param_2 + 0x158) =
         *(ulonglong *)(param_2 + 0x158) | *(ulonglong *)(uVar6 + 0x12c0);
    *(ulonglong *)(param_2 + 0x160) = *(ulonglong *)(param_2 + 0x160) | uVar26;
    *(ulonglong *)(param_2 + 0x168) = *(ulonglong *)(param_2 + 0x168) | uVar24;
    *(ulonglong *)(param_2 + 0x170) = *(ulonglong *)(param_2 + 0x170) | uVar19;
    uVar26 = *(ulonglong *)(uVar6 + 0x12e8);
    uVar24 = *(ulonglong *)(uVar6 + 0x12f0);
    uVar19 = *(ulonglong *)(uVar6 + 0x12f8);
    *(ulonglong *)(param_2 + 0x178) =
         *(ulonglong *)(param_2 + 0x178) | *(ulonglong *)(uVar6 + 0x12e0);
    *(ulonglong *)(param_2 + 0x180) = *(ulonglong *)(param_2 + 0x180) | uVar26;
    *(ulonglong *)(param_2 + 0x188) = *(ulonglong *)(param_2 + 0x188) | uVar24;
    *(ulonglong *)(param_2 + 400) = *(ulonglong *)(param_2 + 400) | uVar19;
    uVar26 = *(ulonglong *)(uVar6 + 0x1308);
    uVar24 = *(ulonglong *)(uVar6 + 0x1310);
    uVar19 = *(ulonglong *)(uVar6 + 0x1318);
    *(ulonglong *)(param_2 + 0x198) =
         *(ulonglong *)(param_2 + 0x198) | *(ulonglong *)(uVar6 + 0x1300);
    *(ulonglong *)(param_2 + 0x1a0) = *(ulonglong *)(param_2 + 0x1a0) | uVar26;
    *(ulonglong *)(param_2 + 0x1a8) = *(ulonglong *)(param_2 + 0x1a8) | uVar24;
    *(ulonglong *)(param_2 + 0x1b0) = *(ulonglong *)(param_2 + 0x1b0) | uVar19;
    uVar26 = *(ulonglong *)(uVar6 + 0x1328);
    uVar24 = *(ulonglong *)(uVar6 + 0x1330);
    uVar19 = *(ulonglong *)(uVar6 + 0x1338);
    *(ulonglong *)(param_2 + 0x1b8) =
         *(ulonglong *)(param_2 + 0x1b8) | *(ulonglong *)(uVar6 + 0x1320);
    *(ulonglong *)(param_2 + 0x1c0) = *(ulonglong *)(param_2 + 0x1c0) | uVar26;
    *(ulonglong *)(param_2 + 0x1c8) = *(ulonglong *)(param_2 + 0x1c8) | uVar24;
    *(ulonglong *)(param_2 + 0x1d0) = *(ulonglong *)(param_2 + 0x1d0) | uVar19;
    uVar26 = *(ulonglong *)(uVar6 + 0x1348);
    uVar24 = *(ulonglong *)(uVar6 + 0x1350);
    uVar19 = *(ulonglong *)(uVar6 + 0x1358);
    *(ulonglong *)(param_2 + 0x1d8) =
         *(ulonglong *)(param_2 + 0x1d8) | *(ulonglong *)(uVar6 + 0x1340);
    *(ulonglong *)(param_2 + 0x1e0) = *(ulonglong *)(param_2 + 0x1e0) | uVar26;
    *(ulonglong *)(param_2 + 0x1e8) = *(ulonglong *)(param_2 + 0x1e8) | uVar24;
    *(ulonglong *)(param_2 + 0x1f0) = *(ulonglong *)(param_2 + 0x1f0) | uVar19;
    uVar26 = *(ulonglong *)(uVar6 + 0x1368);
    uVar24 = *(ulonglong *)(uVar6 + 0x1370);
    uVar19 = *(ulonglong *)(uVar6 + 0x1378);
    *(ulonglong *)(param_2 + 0x1f8) =
         *(ulonglong *)(param_2 + 0x1f8) | *(ulonglong *)(uVar6 + 0x1360);
    *(ulonglong *)(param_2 + 0x200) = *(ulonglong *)(param_2 + 0x200) | uVar26;
    *(ulonglong *)(param_2 + 0x208) = *(ulonglong *)(param_2 + 0x208) | uVar24;
    *(ulonglong *)(param_2 + 0x210) = *(ulonglong *)(param_2 + 0x210) | uVar19;
    uVar26 = *(ulonglong *)(uVar6 + 5000);
    uVar24 = *(ulonglong *)(uVar6 + 0x1390);
    uVar19 = *(ulonglong *)(uVar6 + 0x1398);
    *(ulonglong *)(param_2 + 0x218) =
         *(ulonglong *)(param_2 + 0x218) | *(ulonglong *)(uVar6 + 0x1380);
    *(ulonglong *)(param_2 + 0x220) = *(ulonglong *)(param_2 + 0x220) | uVar26;
    *(ulonglong *)(param_2 + 0x228) = *(ulonglong *)(param_2 + 0x228) | uVar24;
    *(ulonglong *)(param_2 + 0x230) = *(ulonglong *)(param_2 + 0x230) | uVar19;
    uVar26 = *(ulonglong *)(uVar6 + 0x13a8);
    uVar24 = *(ulonglong *)(uVar6 + 0x13b0);
    uVar19 = *(ulonglong *)(uVar6 + 0x13b8);
    *(ulonglong *)(param_2 + 0x238) =
         *(ulonglong *)(param_2 + 0x238) | *(ulonglong *)(uVar6 + 0x13a0);
    *(ulonglong *)(param_2 + 0x240) = *(ulonglong *)(param_2 + 0x240) | uVar26;
    *(ulonglong *)(param_2 + 0x248) = *(ulonglong *)(param_2 + 0x248) | uVar24;
    *(ulonglong *)(param_2 + 0x250) = *(ulonglong *)(param_2 + 0x250) | uVar19;
    uVar26 = *(ulonglong *)(uVar6 + 0x13c8);
    uVar24 = *(ulonglong *)(uVar6 + 0x13d0);
    uVar19 = *(ulonglong *)(uVar6 + 0x13d8);
    *(ulonglong *)(param_2 + 600) = *(ulonglong *)(param_2 + 600) | *(ulonglong *)(uVar6 + 0x13c0);
    *(ulonglong *)(param_2 + 0x260) = *(ulonglong *)(param_2 + 0x260) | uVar26;
    *(ulonglong *)(param_2 + 0x268) = *(ulonglong *)(param_2 + 0x268) | uVar24;
    *(ulonglong *)(param_2 + 0x270) = *(ulonglong *)(param_2 + 0x270) | uVar19;
    uVar19 = *(ulonglong *)(uVar6 + 0x13e8);
    uVar26 = *(ulonglong *)(uVar6 + 0x13f0);
    uVar24 = *(ulonglong *)(uVar6 + 0x13f8);
    *(ulonglong *)(param_2 + 0x278) =
         *(ulonglong *)(param_2 + 0x278) | *(ulonglong *)(uVar6 + 0x13e0);
    *(ulonglong *)(param_2 + 0x280) = *(ulonglong *)(param_2 + 0x280) | uVar19;
    *(ulonglong *)(param_2 + 0x288) = *(ulonglong *)(param_2 + 0x288) | uVar26;
    *(ulonglong *)(param_2 + 0x290) = *(ulonglong *)(param_2 + 0x290) | uVar24;
    uStack_91 = 1;
    puVar13 = (undefined8 *)pdb_140bf45b0(uVar25);
    if (puVar13 == (undefined8 *)0x0) {
LAB_140b6110f:
      uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14305a828);
    }
    uStack_91 = 1;
    lVar21 = (**(code **)(puVar13[1] + 0x18))(*puVar13);
    if (lVar21 == 0) goto LAB_140b6110f;
    uStack_91 = 1;
    pdb_140a78ae0(param_2,0,*(undefined8 *)(lVar21 + 8),*(undefined8 *)(lVar21 + 0x10));
LAB_140b60c8e:
    puVar16 = puStack_160;
    if (puStack_160 == puStack_170) {
      uStack_91 = 1;
      pdb_142d896b0(&puStack_170);
    }
    puStack_168[(longlong)puVar16] = uVar17;
    puStack_160 = (ulonglong *)((longlong)puVar16 + 1);
  }
  else {
LAB_140b5f932:
    fVar36 = fVar31 * *(float *)(uStack_138 + 0x28) + *(float *)(puVar13 + 2);
    *(float *)(puVar13 + 2) = fVar36;
    fVar3 = _DAT_142e36f28;
    fVar36 = fVar36 / *(float *)((longlong)puVar13 + 0x14);
    fVar31 = 0.0;
    if (0.0 <= fVar36) {
      fVar31 = fVar36;
    }
    fVar36 = _DAT_142e36f28;
    if (fVar31 <= _DAT_142e36f28) {
      fVar36 = fVar31;
    }
    pub_142e32780(uVar6 + 0x1200,0);
    puVar16 = (ulonglong *)puVar13[1];
    auStack_130 = (undefined1  [8])&uStack_1a8;
    if (*(char *)(puVar13 + 3) == '\0') {
      uStack_91 = 1;
      fVar31 = (float)pdb_140dedc70();
      uVar29 = *(undefined1 *)((longlong)puVar16 + 0x2c);
      uVar37 = (undefined4)puVar16[5];
      if (_DAT_142e37848 <= fVar31) {
        uVar26 = puVar16[4];
        if (uVar26 == 0) {
          pbVar23 = (byte *)0x4;
        }
        else {
          pbStack_c0 = (byte *)CONCAT71(pbStack_c0._1_7_,uVar29);
          uVar24 = puVar16[3];
          puStack_a0 = puVar16;
          pdb_14007ee60();
          puStack_a8 = (ulonglong *)(uVar26 * 0xc);
          pbVar23 = pub_1406abab0(uVar26 * 0xc,4);
          if (pbVar23 == (byte *)0x0) {
            uStack_91 = 1;
            pdb_142dc7e2a(4,puStack_a8);
            goto LAB_140b61173;
          }
          if (uVar26 == 1) {
            uVar19 = 0;
LAB_140b5fde9:
            lVar21 = uVar19 * 0xc;
            *(undefined4 *)(pbVar23 + lVar21 + 8) = *(undefined4 *)(uVar24 + 0x18 + lVar21);
            *(undefined8 *)(pbVar23 + lVar21) = *(undefined8 *)(uVar24 + 0x10 + lVar21);
          }
          else {
            uVar19 = 0;
            lVar21 = 0;
            do {
              *(undefined4 *)(pbVar23 + lVar21 + 8) = *(undefined4 *)(uVar24 + 0x18 + lVar21);
              *(undefined8 *)(pbVar23 + lVar21) = *(undefined8 *)(uVar24 + 0x10 + lVar21);
              *(undefined8 *)(pbVar23 + lVar21 + 0xc) = *(undefined8 *)(uVar24 + 0x1c + lVar21);
              *(undefined4 *)(pbVar23 + lVar21 + 0x14) = *(undefined4 *)(uVar24 + 0x24 + lVar21);
              uVar19 = uVar19 + 2;
              lVar21 = lVar21 + 0x18;
            } while ((uVar26 & 0xfffffffffffffffe) != uVar19);
            if ((uVar26 & 1) != 0) goto LAB_140b5fde9;
          }
          puVar16 = puStack_a0;
          uVar29 = pbStack_c0._0_1_;
        }
        uStack_91 = 1;
        uStack_f8 = uVar26;
        pbStack_f0 = pbVar23;
        uStack_e8 = uVar26;
        pdb_1419aa3f0(auStack_130,&uStack_f8);
        if (SBORROW8(0,CONCAT44(auStack_130._4_4_,auStack_130._0_4_))) {
          uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14335e278,0x2b,&uStack_f8,&UNK_14335e258,&UNK_14305a8d8);
        }
        uStack_c8 = uStack_100;
        uStack_f8 = CONCAT44(auStack_130._4_4_,auStack_130._0_4_);
        pbStack_f0 = (byte *)CONCAT44(uStack_124,uStack_128);
        uStack_e8 = CONCAT71(uStack_11f,uStack_120);
        uStack_d8 = (undefined7)CONCAT71(uStack_10f,uStack_110);
        uStack_d1 = (undefined1)((uint7)uStack_10f >> 0x30);
        uStack_d0 = (undefined7)uStack_108;
        uStack_c9 = (undefined1)((ulonglong)uStack_108 >> 0x38);
        uStack_e0 = (undefined7)CONCAT71(uStack_117,uStack_118);
        uStack_d9 = (undefined1)((uint7)uStack_117 >> 0x30);
        uStack_1a8 = CONCAT44(uStack_1a8._4_4_,fVar31);
        if ((fVar31 < 0.0) || (fVar3 < fVar31)) {
          uStack_128 = 0x40f70fc0;
          uStack_124 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14335ec38,auStack_130,&UNK_14305a8f0);
        }
        uStack_150 = 0;
        uStack_148 = 4;
        uStack_140 = 0;
        uStack_a9 = 1;
        pdb_1419a6a90(&uStack_f8,0);
        uStack_198 = uStack_140;
        uStack_1a8 = uStack_150;
        uStack_1a0 = uStack_148;
        uStack_a9 = 0;
        pdb_1419aa3f0(auStack_130,&uStack_1a8);
        puVar28 = (ulonglong *)CONCAT44(auStack_130._4_4_,auStack_130._0_4_);
        if (SBORROW8(0,(longlong)puVar28)) {
          if (uStack_f8 != 0) {
            pub_1406abac0(pbStack_f0,uStack_f8 * 0xc,4);
          }
          lVar21 = CONCAT17(uStack_d9,uStack_e0);
          puStack_a0 = (ulonglong *)0x4;
          uVar24 = 0;
          puStack_a8 = (ulonglong *)0x0;
        }
        else {
          puStack_a0 = (ulonglong *)CONCAT44(uStack_124,uStack_128);
          uVar24 = CONCAT71(uStack_11f,uStack_120);
          lVar21 = CONCAT71(uStack_117,uStack_118);
          uVar26 = puVar16[4];
          uVar19 = 0;
          if (2 < uVar24) {
            uVar19 = uVar24 - 3;
          }
          puStack_a8 = puVar28;
          if (uVar26 < uVar19) {
            pbStack_c0 = (byte *)CONCAT71(uStack_10f,uStack_110);
            puStack_b8 = (ulonglong *)lVar21;
            pdb_142dc8420(uVar19,uVar26,uVar26,&UNK_14305a908);
LAB_140b61173:
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          if (lVar21 != 0) {
            pub_1406abac0((byte *)CONCAT71(uStack_10f,uStack_110),lVar21 << 2,4);
          }
          if (uStack_f8 != 0) {
            pub_1406abac0(pbStack_f0,uStack_f8 * 0xc,4);
          }
          lVar21 = CONCAT17(uStack_d9,uStack_e0);
        }
        if (lVar21 != 0) {
          pub_1406abac0((byte *)CONCAT17(uStack_d1,uStack_d8),lVar21 << 2,4);
        }
      }
      else {
        puStack_a0 = (ulonglong *)0x4;
        uVar24 = 0;
        puStack_a8 = (ulonglong *)0x0;
      }
      pdb_140a83c80(uVar6 + 0x1200,puStack_a0,(longlong)puStack_a0 + uVar24 * 0xc,
                    *(undefined4 *)(puVar13[1] + 0x28));
    }
    else {
      uStack_91 = 1;
      fVar31 = (float)pdb_140dedc70(fVar3 - fVar36);
      uVar29 = *(undefined1 *)((longlong)puVar16 + 0x2c);
      uVar37 = (undefined4)puVar16[5];
      uVar26 = puVar16[3];
      uVar19 = puVar16[4];
      lVar21 = uVar26 + 0x10;
      if (_DAT_142e37848 <= fVar31) {
        pbStack_c0 = (byte *)CONCAT71(pbStack_c0._1_7_,uVar29);
        uStack_138 = uVar19;
        if (uVar19 == 0) {
          pbVar23 = (byte *)0x4;
        }
        else {
          pdb_14007ee60();
          puStack_a0 = (ulonglong *)(uVar19 * 0xc);
          pbVar23 = pub_1406abab0(uVar19 * 0xc,4);
          if (pbVar23 == (byte *)0x0) {
            uStack_91 = 1;
            pdb_142dc7e2a(4,puStack_a0);
            goto LAB_140b61173;
          }
          uVar29 = pbStack_c0._0_1_;
          if (uStack_138 == 1) {
            uVar24 = 0;
          }
          else {
            uVar24 = 0;
            lVar18 = 0;
            do {
              *(undefined4 *)(pbVar23 + lVar18 + 8) = *(undefined4 *)(uVar26 + 0x18 + lVar18);
              *(undefined8 *)(pbVar23 + lVar18) = *(undefined8 *)(lVar21 + lVar18);
              *(undefined8 *)(pbVar23 + lVar18 + 0xc) = *(undefined8 *)(uVar26 + 0x1c + lVar18);
              *(undefined4 *)(pbVar23 + lVar18 + 0x14) = *(undefined4 *)(uVar26 + 0x24 + lVar18);
              uVar24 = uVar24 + 2;
              lVar18 = lVar18 + 0x18;
            } while ((uStack_138 & 0xfffffffffffffffe) != uVar24);
            if ((uStack_138 & 1) == 0) goto LAB_140b5fb52;
          }
          lVar18 = uVar24 * 0xc;
          *(undefined4 *)(pbVar23 + lVar18 + 8) = *(undefined4 *)(uVar26 + 0x18 + lVar18);
          *(undefined8 *)(pbVar23 + lVar18) = *(undefined8 *)(lVar21 + lVar18);
        }
LAB_140b5fb52:
        uStack_91 = 1;
        uStack_f8 = uStack_138;
        pbStack_f0 = pbVar23;
        uStack_e8 = uStack_138;
        pdb_1419aa3f0(auStack_130,&uStack_f8);
        if (SBORROW8(0,CONCAT44(auStack_130._4_4_,auStack_130._0_4_))) {
          uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14335e278,0x2b,&uStack_f8,&UNK_14335e258,&UNK_14305a8d8);
        }
        uStack_c8 = uStack_100;
        uStack_f8 = CONCAT44(auStack_130._4_4_,auStack_130._0_4_);
        pbStack_f0 = (byte *)CONCAT44(uStack_124,uStack_128);
        uStack_e8 = CONCAT71(uStack_11f,uStack_120);
        uStack_d8 = (undefined7)CONCAT71(uStack_10f,uStack_110);
        uStack_d1 = (undefined1)((uint7)uStack_10f >> 0x30);
        uStack_d0 = (undefined7)uStack_108;
        uStack_c9 = (undefined1)((ulonglong)uStack_108 >> 0x38);
        uStack_e0 = (undefined7)CONCAT71(uStack_117,uStack_118);
        uStack_d9 = (undefined1)((uint7)uStack_117 >> 0x30);
        uStack_1a8 = CONCAT44(uStack_1a8._4_4_,fVar31);
        if ((fVar31 < 0.0) || (fVar3 < fVar31)) {
          uStack_128 = 0x40f70fc0;
          uStack_124 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14335ec38,auStack_130,&UNK_14305a8f0);
        }
        uStack_150 = 0;
        uStack_148 = 4;
        uStack_140 = 0;
        uStack_aa = 1;
        pdb_1419a6a90(&uStack_f8,0);
        uStack_198 = uStack_140;
        uStack_1a8 = uStack_150;
        uStack_1a0 = uStack_148;
        uStack_aa = 0;
        pdb_1419aa3f0(auStack_130,&uStack_1a8);
        puVar28 = (ulonglong *)CONCAT44(auStack_130._4_4_,auStack_130._0_4_);
        if (SBORROW8(0,(longlong)puVar28)) {
          if (uStack_f8 != 0) {
            pub_1406abac0(pbStack_f0,uStack_f8 * 0xc,4);
          }
          lVar18 = CONCAT17(uStack_d9,uStack_e0);
          puStack_a0 = (ulonglong *)0x4;
          puStack_a8 = (ulonglong *)0x0;
          uVar24 = 0;
        }
        else {
          puStack_a0 = (ulonglong *)CONCAT44(uStack_124,uStack_128);
          uVar24 = CONCAT71(uStack_11f,uStack_120);
          lVar21 = CONCAT71(uStack_117,uStack_118);
          pcStack_158 = (code *)CONCAT71(uStack_10f,uStack_110);
          uVar26 = puVar16[4];
          uVar19 = 0;
          if (2 < uVar24) {
            uVar19 = uVar24 - 3;
          }
          uStack_138 = uVar26 - uVar19;
          puStack_a8 = puVar28;
          if (uVar26 < uVar19) {
            puStack_b8 = (ulonglong *)lVar21;
            pdb_142dc8420(uVar19,uVar26,uVar26,&UNK_14305a908);
            goto LAB_140b61173;
          }
          uVar26 = puVar16[3];
          if (lVar21 != 0) {
            pub_1406abac0((byte *)pcStack_158,lVar21 << 2,4);
          }
          if (uStack_f8 != 0) {
            pub_1406abac0(pbStack_f0,uStack_f8 * 0xc,4);
          }
          lVar21 = uVar26 + uVar19 * 0xc + 0x10;
          lVar18 = CONCAT17(uStack_d9,uStack_e0);
          uVar29 = pbStack_c0._0_1_;
        }
        uVar19 = uStack_138;
        if (lVar18 != 0) {
          pub_1406abac0((byte *)CONCAT17(uStack_d1,uStack_d8),lVar18 << 2,4);
          uVar19 = uStack_138;
        }
      }
      else {
        puStack_a0 = (ulonglong *)0x4;
        puStack_a8 = (ulonglong *)0x0;
        uVar24 = 0;
      }
      pdb_140a83c80(uVar6 + 0x1200,lVar21,lVar21 + uVar19 * 0xc,*(undefined4 *)(puVar13[1] + 0x28));
    }
    uVar26 = *(ulonglong *)(uVar6 + 0x1208);
    uVar19 = *(ulonglong *)(uVar6 + 0x1210);
    uVar1 = *(ulonglong *)(uVar6 + 0x1218);
    *(ulonglong *)(param_2 + 0x98) = *(ulonglong *)(param_2 + 0x98) | *(ulonglong *)(uVar6 + 0x1200)
    ;
    *(ulonglong *)(param_2 + 0xa0) = *(ulonglong *)(param_2 + 0xa0) | uVar26;
    *(ulonglong *)(param_2 + 0xa8) = *(ulonglong *)(param_2 + 0xa8) | uVar19;
    *(ulonglong *)(param_2 + 0xb0) = *(ulonglong *)(param_2 + 0xb0) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x1228);
    uVar19 = *(ulonglong *)(uVar6 + 0x1230);
    uVar1 = *(ulonglong *)(uVar6 + 0x1238);
    *(ulonglong *)(param_2 + 0xb8) = *(ulonglong *)(uVar6 + 0x1220) | *(ulonglong *)(param_2 + 0xb8)
    ;
    *(ulonglong *)(param_2 + 0xc0) = uVar26 | *(ulonglong *)(param_2 + 0xc0);
    *(ulonglong *)(param_2 + 200) = uVar19 | *(ulonglong *)(param_2 + 200);
    *(ulonglong *)(param_2 + 0xd0) = uVar1 | *(ulonglong *)(param_2 + 0xd0);
    uVar26 = *(ulonglong *)(uVar6 + 0x1248);
    uVar19 = *(ulonglong *)(uVar6 + 0x1250);
    uVar1 = *(ulonglong *)(uVar6 + 0x1258);
    *(ulonglong *)(param_2 + 0xd8) = *(ulonglong *)(param_2 + 0xd8) | *(ulonglong *)(uVar6 + 0x1240)
    ;
    *(ulonglong *)(param_2 + 0xe0) = *(ulonglong *)(param_2 + 0xe0) | uVar26;
    *(ulonglong *)(param_2 + 0xe8) = *(ulonglong *)(param_2 + 0xe8) | uVar19;
    *(ulonglong *)(param_2 + 0xf0) = *(ulonglong *)(param_2 + 0xf0) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x1268);
    uVar19 = *(ulonglong *)(uVar6 + 0x1270);
    uVar1 = *(ulonglong *)(uVar6 + 0x1278);
    *(ulonglong *)(param_2 + 0xf8) = *(ulonglong *)(param_2 + 0xf8) | *(ulonglong *)(uVar6 + 0x1260)
    ;
    *(ulonglong *)(param_2 + 0x100) = *(ulonglong *)(param_2 + 0x100) | uVar26;
    *(ulonglong *)(param_2 + 0x108) = *(ulonglong *)(param_2 + 0x108) | uVar19;
    *(ulonglong *)(param_2 + 0x110) = *(ulonglong *)(param_2 + 0x110) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x1288);
    uVar19 = *(ulonglong *)(uVar6 + 0x1290);
    uVar1 = *(ulonglong *)(uVar6 + 0x1298);
    *(ulonglong *)(param_2 + 0x118) =
         *(ulonglong *)(param_2 + 0x118) | *(ulonglong *)(uVar6 + 0x1280);
    *(ulonglong *)(param_2 + 0x120) = *(ulonglong *)(param_2 + 0x120) | uVar26;
    *(ulonglong *)(param_2 + 0x128) = *(ulonglong *)(param_2 + 0x128) | uVar19;
    *(ulonglong *)(param_2 + 0x130) = *(ulonglong *)(param_2 + 0x130) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x12a8);
    uVar19 = *(ulonglong *)(uVar6 + 0x12b0);
    uVar1 = *(ulonglong *)(uVar6 + 0x12b8);
    *(ulonglong *)(param_2 + 0x138) =
         *(ulonglong *)(param_2 + 0x138) | *(ulonglong *)(uVar6 + 0x12a0);
    *(ulonglong *)(param_2 + 0x140) = *(ulonglong *)(param_2 + 0x140) | uVar26;
    *(ulonglong *)(param_2 + 0x148) = *(ulonglong *)(param_2 + 0x148) | uVar19;
    *(ulonglong *)(param_2 + 0x150) = *(ulonglong *)(param_2 + 0x150) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x12c8);
    uVar19 = *(ulonglong *)(uVar6 + 0x12d0);
    uVar1 = *(ulonglong *)(uVar6 + 0x12d8);
    *(ulonglong *)(param_2 + 0x158) =
         *(ulonglong *)(param_2 + 0x158) | *(ulonglong *)(uVar6 + 0x12c0);
    *(ulonglong *)(param_2 + 0x160) = *(ulonglong *)(param_2 + 0x160) | uVar26;
    *(ulonglong *)(param_2 + 0x168) = *(ulonglong *)(param_2 + 0x168) | uVar19;
    *(ulonglong *)(param_2 + 0x170) = *(ulonglong *)(param_2 + 0x170) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x12e8);
    uVar19 = *(ulonglong *)(uVar6 + 0x12f0);
    uVar1 = *(ulonglong *)(uVar6 + 0x12f8);
    *(ulonglong *)(param_2 + 0x178) =
         *(ulonglong *)(param_2 + 0x178) | *(ulonglong *)(uVar6 + 0x12e0);
    *(ulonglong *)(param_2 + 0x180) = *(ulonglong *)(param_2 + 0x180) | uVar26;
    *(ulonglong *)(param_2 + 0x188) = *(ulonglong *)(param_2 + 0x188) | uVar19;
    *(ulonglong *)(param_2 + 400) = *(ulonglong *)(param_2 + 400) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x1308);
    uVar19 = *(ulonglong *)(uVar6 + 0x1310);
    uVar1 = *(ulonglong *)(uVar6 + 0x1318);
    *(ulonglong *)(param_2 + 0x198) =
         *(ulonglong *)(param_2 + 0x198) | *(ulonglong *)(uVar6 + 0x1300);
    *(ulonglong *)(param_2 + 0x1a0) = *(ulonglong *)(param_2 + 0x1a0) | uVar26;
    *(ulonglong *)(param_2 + 0x1a8) = *(ulonglong *)(param_2 + 0x1a8) | uVar19;
    *(ulonglong *)(param_2 + 0x1b0) = *(ulonglong *)(param_2 + 0x1b0) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x1328);
    uVar19 = *(ulonglong *)(uVar6 + 0x1330);
    uVar1 = *(ulonglong *)(uVar6 + 0x1338);
    *(ulonglong *)(param_2 + 0x1b8) =
         *(ulonglong *)(param_2 + 0x1b8) | *(ulonglong *)(uVar6 + 0x1320);
    *(ulonglong *)(param_2 + 0x1c0) = *(ulonglong *)(param_2 + 0x1c0) | uVar26;
    *(ulonglong *)(param_2 + 0x1c8) = *(ulonglong *)(param_2 + 0x1c8) | uVar19;
    *(ulonglong *)(param_2 + 0x1d0) = *(ulonglong *)(param_2 + 0x1d0) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x1348);
    uVar19 = *(ulonglong *)(uVar6 + 0x1350);
    uVar1 = *(ulonglong *)(uVar6 + 0x1358);
    *(ulonglong *)(param_2 + 0x1d8) =
         *(ulonglong *)(param_2 + 0x1d8) | *(ulonglong *)(uVar6 + 0x1340);
    *(ulonglong *)(param_2 + 0x1e0) = *(ulonglong *)(param_2 + 0x1e0) | uVar26;
    *(ulonglong *)(param_2 + 0x1e8) = *(ulonglong *)(param_2 + 0x1e8) | uVar19;
    *(ulonglong *)(param_2 + 0x1f0) = *(ulonglong *)(param_2 + 0x1f0) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x1368);
    uVar19 = *(ulonglong *)(uVar6 + 0x1370);
    uVar1 = *(ulonglong *)(uVar6 + 0x1378);
    *(ulonglong *)(param_2 + 0x1f8) =
         *(ulonglong *)(param_2 + 0x1f8) | *(ulonglong *)(uVar6 + 0x1360);
    *(ulonglong *)(param_2 + 0x200) = *(ulonglong *)(param_2 + 0x200) | uVar26;
    *(ulonglong *)(param_2 + 0x208) = *(ulonglong *)(param_2 + 0x208) | uVar19;
    *(ulonglong *)(param_2 + 0x210) = *(ulonglong *)(param_2 + 0x210) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 5000);
    uVar19 = *(ulonglong *)(uVar6 + 0x1390);
    uVar1 = *(ulonglong *)(uVar6 + 0x1398);
    *(ulonglong *)(param_2 + 0x218) =
         *(ulonglong *)(param_2 + 0x218) | *(ulonglong *)(uVar6 + 0x1380);
    *(ulonglong *)(param_2 + 0x220) = *(ulonglong *)(param_2 + 0x220) | uVar26;
    *(ulonglong *)(param_2 + 0x228) = *(ulonglong *)(param_2 + 0x228) | uVar19;
    *(ulonglong *)(param_2 + 0x230) = *(ulonglong *)(param_2 + 0x230) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x13a8);
    uVar19 = *(ulonglong *)(uVar6 + 0x13b0);
    uVar1 = *(ulonglong *)(uVar6 + 0x13b8);
    *(ulonglong *)(param_2 + 0x238) =
         *(ulonglong *)(param_2 + 0x238) | *(ulonglong *)(uVar6 + 0x13a0);
    *(ulonglong *)(param_2 + 0x240) = *(ulonglong *)(param_2 + 0x240) | uVar26;
    *(ulonglong *)(param_2 + 0x248) = *(ulonglong *)(param_2 + 0x248) | uVar19;
    *(ulonglong *)(param_2 + 0x250) = *(ulonglong *)(param_2 + 0x250) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x13c8);
    uVar19 = *(ulonglong *)(uVar6 + 0x13d0);
    uVar1 = *(ulonglong *)(uVar6 + 0x13d8);
    *(ulonglong *)(param_2 + 600) = *(ulonglong *)(param_2 + 600) | *(ulonglong *)(uVar6 + 0x13c0);
    *(ulonglong *)(param_2 + 0x260) = *(ulonglong *)(param_2 + 0x260) | uVar26;
    *(ulonglong *)(param_2 + 0x268) = *(ulonglong *)(param_2 + 0x268) | uVar19;
    *(ulonglong *)(param_2 + 0x270) = *(ulonglong *)(param_2 + 0x270) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x13e8);
    uVar19 = *(ulonglong *)(uVar6 + 0x13f0);
    uVar1 = *(ulonglong *)(uVar6 + 0x13f8);
    *(ulonglong *)(param_2 + 0x278) =
         *(ulonglong *)(param_2 + 0x278) | *(ulonglong *)(uVar6 + 0x13e0);
    *(ulonglong *)(param_2 + 0x280) = *(ulonglong *)(param_2 + 0x280) | uVar26;
    *(ulonglong *)(param_2 + 0x288) = *(ulonglong *)(param_2 + 0x288) | uVar19;
    *(ulonglong *)(param_2 + 0x290) = *(ulonglong *)(param_2 + 0x290) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x1008);
    uVar19 = *(ulonglong *)(uVar6 + 0x1010);
    uVar1 = *(ulonglong *)(uVar6 + 0x1018);
    *(ulonglong *)(param_2 + 0x98) = *(ulonglong *)(param_2 + 0x98) | *(ulonglong *)(uVar6 + 0x1000)
    ;
    *(ulonglong *)(param_2 + 0xa0) = *(ulonglong *)(param_2 + 0xa0) | uVar26;
    *(ulonglong *)(param_2 + 0xa8) = *(ulonglong *)(param_2 + 0xa8) | uVar19;
    *(ulonglong *)(param_2 + 0xb0) = *(ulonglong *)(param_2 + 0xb0) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x1028);
    uVar19 = *(ulonglong *)(uVar6 + 0x1030);
    uVar1 = *(ulonglong *)(uVar6 + 0x1038);
    *(ulonglong *)(param_2 + 0xb8) = *(ulonglong *)(param_2 + 0xb8) | *(ulonglong *)(uVar6 + 0x1020)
    ;
    *(ulonglong *)(param_2 + 0xc0) = *(ulonglong *)(param_2 + 0xc0) | uVar26;
    *(ulonglong *)(param_2 + 200) = *(ulonglong *)(param_2 + 200) | uVar19;
    *(ulonglong *)(param_2 + 0xd0) = *(ulonglong *)(param_2 + 0xd0) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x1048);
    uVar19 = *(ulonglong *)(uVar6 + 0x1050);
    uVar1 = *(ulonglong *)(uVar6 + 0x1058);
    *(ulonglong *)(param_2 + 0xd8) = *(ulonglong *)(param_2 + 0xd8) | *(ulonglong *)(uVar6 + 0x1040)
    ;
    *(ulonglong *)(param_2 + 0xe0) = *(ulonglong *)(param_2 + 0xe0) | uVar26;
    *(ulonglong *)(param_2 + 0xe8) = *(ulonglong *)(param_2 + 0xe8) | uVar19;
    *(ulonglong *)(param_2 + 0xf0) = *(ulonglong *)(param_2 + 0xf0) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x1068);
    uVar19 = *(ulonglong *)(uVar6 + 0x1070);
    uVar1 = *(ulonglong *)(uVar6 + 0x1078);
    *(ulonglong *)(param_2 + 0xf8) = *(ulonglong *)(param_2 + 0xf8) | *(ulonglong *)(uVar6 + 0x1060)
    ;
    *(ulonglong *)(param_2 + 0x100) = *(ulonglong *)(param_2 + 0x100) | uVar26;
    *(ulonglong *)(param_2 + 0x108) = *(ulonglong *)(param_2 + 0x108) | uVar19;
    *(ulonglong *)(param_2 + 0x110) = *(ulonglong *)(param_2 + 0x110) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x1088);
    uVar19 = *(ulonglong *)(uVar6 + 0x1090);
    uVar1 = *(ulonglong *)(uVar6 + 0x1098);
    *(ulonglong *)(param_2 + 0x118) =
         *(ulonglong *)(param_2 + 0x118) | *(ulonglong *)(uVar6 + 0x1080);
    *(ulonglong *)(param_2 + 0x120) = *(ulonglong *)(param_2 + 0x120) | uVar26;
    *(ulonglong *)(param_2 + 0x128) = *(ulonglong *)(param_2 + 0x128) | uVar19;
    *(ulonglong *)(param_2 + 0x130) = *(ulonglong *)(param_2 + 0x130) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x10a8);
    uVar19 = *(ulonglong *)(uVar6 + 0x10b0);
    uVar1 = *(ulonglong *)(uVar6 + 0x10b8);
    *(ulonglong *)(param_2 + 0x138) =
         *(ulonglong *)(param_2 + 0x138) | *(ulonglong *)(uVar6 + 0x10a0);
    *(ulonglong *)(param_2 + 0x140) = *(ulonglong *)(param_2 + 0x140) | uVar26;
    *(ulonglong *)(param_2 + 0x148) = *(ulonglong *)(param_2 + 0x148) | uVar19;
    *(ulonglong *)(param_2 + 0x150) = *(ulonglong *)(param_2 + 0x150) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x10c8);
    uVar19 = *(ulonglong *)(uVar6 + 0x10d0);
    uVar1 = *(ulonglong *)(uVar6 + 0x10d8);
    *(ulonglong *)(param_2 + 0x158) =
         *(ulonglong *)(param_2 + 0x158) | *(ulonglong *)(uVar6 + 0x10c0);
    *(ulonglong *)(param_2 + 0x160) = *(ulonglong *)(param_2 + 0x160) | uVar26;
    *(ulonglong *)(param_2 + 0x168) = *(ulonglong *)(param_2 + 0x168) | uVar19;
    *(ulonglong *)(param_2 + 0x170) = *(ulonglong *)(param_2 + 0x170) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x10e8);
    uVar19 = *(ulonglong *)(uVar6 + 0x10f0);
    uVar1 = *(ulonglong *)(uVar6 + 0x10f8);
    *(ulonglong *)(param_2 + 0x178) =
         *(ulonglong *)(param_2 + 0x178) | *(ulonglong *)(uVar6 + 0x10e0);
    *(ulonglong *)(param_2 + 0x180) = *(ulonglong *)(param_2 + 0x180) | uVar26;
    *(ulonglong *)(param_2 + 0x188) = *(ulonglong *)(param_2 + 0x188) | uVar19;
    *(ulonglong *)(param_2 + 400) = *(ulonglong *)(param_2 + 400) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x1108);
    uVar19 = *(ulonglong *)(uVar6 + 0x1110);
    uVar1 = *(ulonglong *)(uVar6 + 0x1118);
    *(ulonglong *)(param_2 + 0x198) =
         *(ulonglong *)(param_2 + 0x198) | *(ulonglong *)(uVar6 + 0x1100);
    *(ulonglong *)(param_2 + 0x1a0) = *(ulonglong *)(param_2 + 0x1a0) | uVar26;
    *(ulonglong *)(param_2 + 0x1a8) = *(ulonglong *)(param_2 + 0x1a8) | uVar19;
    *(ulonglong *)(param_2 + 0x1b0) = *(ulonglong *)(param_2 + 0x1b0) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x1128);
    uVar19 = *(ulonglong *)(uVar6 + 0x1130);
    uVar1 = *(ulonglong *)(uVar6 + 0x1138);
    *(ulonglong *)(param_2 + 0x1b8) =
         *(ulonglong *)(param_2 + 0x1b8) | *(ulonglong *)(uVar6 + 0x1120);
    *(ulonglong *)(param_2 + 0x1c0) = *(ulonglong *)(param_2 + 0x1c0) | uVar26;
    *(ulonglong *)(param_2 + 0x1c8) = *(ulonglong *)(param_2 + 0x1c8) | uVar19;
    *(ulonglong *)(param_2 + 0x1d0) = *(ulonglong *)(param_2 + 0x1d0) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x1148);
    uVar19 = *(ulonglong *)(uVar6 + 0x1150);
    uVar1 = *(ulonglong *)(uVar6 + 0x1158);
    *(ulonglong *)(param_2 + 0x1d8) =
         *(ulonglong *)(param_2 + 0x1d8) | *(ulonglong *)(uVar6 + 0x1140);
    *(ulonglong *)(param_2 + 0x1e0) = *(ulonglong *)(param_2 + 0x1e0) | uVar26;
    *(ulonglong *)(param_2 + 0x1e8) = *(ulonglong *)(param_2 + 0x1e8) | uVar19;
    *(ulonglong *)(param_2 + 0x1f0) = *(ulonglong *)(param_2 + 0x1f0) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x1168);
    uVar19 = *(ulonglong *)(uVar6 + 0x1170);
    uVar1 = *(ulonglong *)(uVar6 + 0x1178);
    *(ulonglong *)(param_2 + 0x1f8) =
         *(ulonglong *)(param_2 + 0x1f8) | *(ulonglong *)(uVar6 + 0x1160);
    *(ulonglong *)(param_2 + 0x200) = *(ulonglong *)(param_2 + 0x200) | uVar26;
    *(ulonglong *)(param_2 + 0x208) = *(ulonglong *)(param_2 + 0x208) | uVar19;
    *(ulonglong *)(param_2 + 0x210) = *(ulonglong *)(param_2 + 0x210) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x1188);
    uVar19 = *(ulonglong *)(uVar6 + 0x1190);
    uVar1 = *(ulonglong *)(uVar6 + 0x1198);
    *(ulonglong *)(param_2 + 0x218) =
         *(ulonglong *)(param_2 + 0x218) | *(ulonglong *)(uVar6 + 0x1180);
    *(ulonglong *)(param_2 + 0x220) = *(ulonglong *)(param_2 + 0x220) | uVar26;
    *(ulonglong *)(param_2 + 0x228) = *(ulonglong *)(param_2 + 0x228) | uVar19;
    *(ulonglong *)(param_2 + 0x230) = *(ulonglong *)(param_2 + 0x230) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x11a8);
    uVar19 = *(ulonglong *)(uVar6 + 0x11b0);
    uVar1 = *(ulonglong *)(uVar6 + 0x11b8);
    *(ulonglong *)(param_2 + 0x238) =
         *(ulonglong *)(param_2 + 0x238) | *(ulonglong *)(uVar6 + 0x11a0);
    *(ulonglong *)(param_2 + 0x240) = *(ulonglong *)(param_2 + 0x240) | uVar26;
    *(ulonglong *)(param_2 + 0x248) = *(ulonglong *)(param_2 + 0x248) | uVar19;
    *(ulonglong *)(param_2 + 0x250) = *(ulonglong *)(param_2 + 0x250) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x11c8);
    uVar19 = *(ulonglong *)(uVar6 + 0x11d0);
    uVar1 = *(ulonglong *)(uVar6 + 0x11d8);
    *(ulonglong *)(param_2 + 600) = *(ulonglong *)(param_2 + 600) | *(ulonglong *)(uVar6 + 0x11c0);
    *(ulonglong *)(param_2 + 0x260) = *(ulonglong *)(param_2 + 0x260) | uVar26;
    *(ulonglong *)(param_2 + 0x268) = *(ulonglong *)(param_2 + 0x268) | uVar19;
    *(ulonglong *)(param_2 + 0x270) = *(ulonglong *)(param_2 + 0x270) | uVar1;
    uVar26 = *(ulonglong *)(uVar6 + 0x11e8);
    uVar19 = *(ulonglong *)(uVar6 + 0x11f0);
    uVar1 = *(ulonglong *)(uVar6 + 0x11f8);
    *(ulonglong *)(param_2 + 0x278) =
         *(ulonglong *)(param_2 + 0x278) | *(ulonglong *)(uVar6 + 0x11e0);
    *(ulonglong *)(param_2 + 0x280) = *(ulonglong *)(param_2 + 0x280) | uVar26;
    *(ulonglong *)(param_2 + 0x288) = *(ulonglong *)(param_2 + 0x288) | uVar19;
    *(ulonglong *)(param_2 + 0x290) = *(ulonglong *)(param_2 + 0x290) | uVar1;
    uVar7 = *(undefined8 *)(uVar6 + 0x1200);
    uVar9 = *(undefined8 *)(uVar6 + 0x1208);
    uVar10 = *(undefined8 *)(uVar6 + 0x1210);
    uVar11 = *(undefined8 *)(uVar6 + 0x1218);
    *(undefined8 *)(uVar6 + 0x1200) = *(undefined8 *)(uVar6 + 0x1000);
    *(undefined8 *)(uVar6 + 0x1208) = *(undefined8 *)(uVar6 + 0x1008);
    *(undefined8 *)(uVar6 + 0x1210) = *(undefined8 *)(uVar6 + 0x1010);
    *(undefined8 *)(uVar6 + 0x1218) = *(undefined8 *)(uVar6 + 0x1018);
    *(undefined8 *)(uVar6 + 0x1000) = uVar7;
    *(undefined8 *)(uVar6 + 0x1008) = uVar9;
    *(undefined8 *)(uVar6 + 0x1010) = uVar10;
    *(undefined8 *)(uVar6 + 0x1018) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1220);
    uVar9 = *(undefined8 *)(uVar6 + 0x1228);
    uVar10 = *(undefined8 *)(uVar6 + 0x1230);
    uVar11 = *(undefined8 *)(uVar6 + 0x1238);
    *(undefined8 *)(uVar6 + 0x1220) = *(undefined8 *)(uVar6 + 0x1020);
    *(undefined8 *)(uVar6 + 0x1228) = *(undefined8 *)(uVar6 + 0x1028);
    *(undefined8 *)(uVar6 + 0x1230) = *(undefined8 *)(uVar6 + 0x1030);
    *(undefined8 *)(uVar6 + 0x1238) = *(undefined8 *)(uVar6 + 0x1038);
    *(undefined8 *)(uVar6 + 0x1020) = uVar7;
    *(undefined8 *)(uVar6 + 0x1028) = uVar9;
    *(undefined8 *)(uVar6 + 0x1030) = uVar10;
    *(undefined8 *)(uVar6 + 0x1038) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1240);
    uVar9 = *(undefined8 *)(uVar6 + 0x1248);
    uVar10 = *(undefined8 *)(uVar6 + 0x1250);
    uVar11 = *(undefined8 *)(uVar6 + 0x1258);
    *(undefined8 *)(uVar6 + 0x1240) = *(undefined8 *)(uVar6 + 0x1040);
    *(undefined8 *)(uVar6 + 0x1248) = *(undefined8 *)(uVar6 + 0x1048);
    *(undefined8 *)(uVar6 + 0x1250) = *(undefined8 *)(uVar6 + 0x1050);
    *(undefined8 *)(uVar6 + 0x1258) = *(undefined8 *)(uVar6 + 0x1058);
    *(undefined8 *)(uVar6 + 0x1040) = uVar7;
    *(undefined8 *)(uVar6 + 0x1048) = uVar9;
    *(undefined8 *)(uVar6 + 0x1050) = uVar10;
    *(undefined8 *)(uVar6 + 0x1058) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1260);
    uVar9 = *(undefined8 *)(uVar6 + 0x1268);
    uVar10 = *(undefined8 *)(uVar6 + 0x1270);
    uVar11 = *(undefined8 *)(uVar6 + 0x1278);
    *(undefined8 *)(uVar6 + 0x1260) = *(undefined8 *)(uVar6 + 0x1060);
    *(undefined8 *)(uVar6 + 0x1268) = *(undefined8 *)(uVar6 + 0x1068);
    *(undefined8 *)(uVar6 + 0x1270) = *(undefined8 *)(uVar6 + 0x1070);
    *(undefined8 *)(uVar6 + 0x1278) = *(undefined8 *)(uVar6 + 0x1078);
    *(undefined8 *)(uVar6 + 0x1060) = uVar7;
    *(undefined8 *)(uVar6 + 0x1068) = uVar9;
    *(undefined8 *)(uVar6 + 0x1070) = uVar10;
    *(undefined8 *)(uVar6 + 0x1078) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1280);
    uVar9 = *(undefined8 *)(uVar6 + 0x1288);
    uVar10 = *(undefined8 *)(uVar6 + 0x1290);
    uVar11 = *(undefined8 *)(uVar6 + 0x1298);
    *(undefined8 *)(uVar6 + 0x1280) = *(undefined8 *)(uVar6 + 0x1080);
    *(undefined8 *)(uVar6 + 0x1288) = *(undefined8 *)(uVar6 + 0x1088);
    *(undefined8 *)(uVar6 + 0x1290) = *(undefined8 *)(uVar6 + 0x1090);
    *(undefined8 *)(uVar6 + 0x1298) = *(undefined8 *)(uVar6 + 0x1098);
    *(undefined8 *)(uVar6 + 0x1080) = uVar7;
    *(undefined8 *)(uVar6 + 0x1088) = uVar9;
    *(undefined8 *)(uVar6 + 0x1090) = uVar10;
    *(undefined8 *)(uVar6 + 0x1098) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x12a0);
    uVar9 = *(undefined8 *)(uVar6 + 0x12a8);
    uVar10 = *(undefined8 *)(uVar6 + 0x12b0);
    uVar11 = *(undefined8 *)(uVar6 + 0x12b8);
    *(undefined8 *)(uVar6 + 0x12a0) = *(undefined8 *)(uVar6 + 0x10a0);
    *(undefined8 *)(uVar6 + 0x12a8) = *(undefined8 *)(uVar6 + 0x10a8);
    *(undefined8 *)(uVar6 + 0x12b0) = *(undefined8 *)(uVar6 + 0x10b0);
    *(undefined8 *)(uVar6 + 0x12b8) = *(undefined8 *)(uVar6 + 0x10b8);
    *(undefined8 *)(uVar6 + 0x10a0) = uVar7;
    *(undefined8 *)(uVar6 + 0x10a8) = uVar9;
    *(undefined8 *)(uVar6 + 0x10b0) = uVar10;
    *(undefined8 *)(uVar6 + 0x10b8) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x12c0);
    uVar9 = *(undefined8 *)(uVar6 + 0x12c8);
    uVar10 = *(undefined8 *)(uVar6 + 0x12d0);
    uVar11 = *(undefined8 *)(uVar6 + 0x12d8);
    *(undefined8 *)(uVar6 + 0x12c0) = *(undefined8 *)(uVar6 + 0x10c0);
    *(undefined8 *)(uVar6 + 0x12c8) = *(undefined8 *)(uVar6 + 0x10c8);
    *(undefined8 *)(uVar6 + 0x12d0) = *(undefined8 *)(uVar6 + 0x10d0);
    *(undefined8 *)(uVar6 + 0x12d8) = *(undefined8 *)(uVar6 + 0x10d8);
    *(undefined8 *)(uVar6 + 0x10c0) = uVar7;
    *(undefined8 *)(uVar6 + 0x10c8) = uVar9;
    *(undefined8 *)(uVar6 + 0x10d0) = uVar10;
    *(undefined8 *)(uVar6 + 0x10d8) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x12e0);
    uVar9 = *(undefined8 *)(uVar6 + 0x12e8);
    uVar10 = *(undefined8 *)(uVar6 + 0x12f0);
    uVar11 = *(undefined8 *)(uVar6 + 0x12f8);
    *(undefined8 *)(uVar6 + 0x12e0) = *(undefined8 *)(uVar6 + 0x10e0);
    *(undefined8 *)(uVar6 + 0x12e8) = *(undefined8 *)(uVar6 + 0x10e8);
    *(undefined8 *)(uVar6 + 0x12f0) = *(undefined8 *)(uVar6 + 0x10f0);
    *(undefined8 *)(uVar6 + 0x12f8) = *(undefined8 *)(uVar6 + 0x10f8);
    *(undefined8 *)(uVar6 + 0x10e0) = uVar7;
    *(undefined8 *)(uVar6 + 0x10e8) = uVar9;
    *(undefined8 *)(uVar6 + 0x10f0) = uVar10;
    *(undefined8 *)(uVar6 + 0x10f8) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1300);
    uVar9 = *(undefined8 *)(uVar6 + 0x1308);
    uVar10 = *(undefined8 *)(uVar6 + 0x1310);
    uVar11 = *(undefined8 *)(uVar6 + 0x1318);
    *(undefined8 *)(uVar6 + 0x1300) = *(undefined8 *)(uVar6 + 0x1100);
    *(undefined8 *)(uVar6 + 0x1308) = *(undefined8 *)(uVar6 + 0x1108);
    *(undefined8 *)(uVar6 + 0x1310) = *(undefined8 *)(uVar6 + 0x1110);
    *(undefined8 *)(uVar6 + 0x1318) = *(undefined8 *)(uVar6 + 0x1118);
    *(undefined8 *)(uVar6 + 0x1100) = uVar7;
    *(undefined8 *)(uVar6 + 0x1108) = uVar9;
    *(undefined8 *)(uVar6 + 0x1110) = uVar10;
    *(undefined8 *)(uVar6 + 0x1118) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1320);
    uVar9 = *(undefined8 *)(uVar6 + 0x1328);
    uVar10 = *(undefined8 *)(uVar6 + 0x1330);
    uVar11 = *(undefined8 *)(uVar6 + 0x1338);
    *(undefined8 *)(uVar6 + 0x1320) = *(undefined8 *)(uVar6 + 0x1120);
    *(undefined8 *)(uVar6 + 0x1328) = *(undefined8 *)(uVar6 + 0x1128);
    *(undefined8 *)(uVar6 + 0x1330) = *(undefined8 *)(uVar6 + 0x1130);
    *(undefined8 *)(uVar6 + 0x1338) = *(undefined8 *)(uVar6 + 0x1138);
    *(undefined8 *)(uVar6 + 0x1120) = uVar7;
    *(undefined8 *)(uVar6 + 0x1128) = uVar9;
    *(undefined8 *)(uVar6 + 0x1130) = uVar10;
    *(undefined8 *)(uVar6 + 0x1138) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1340);
    uVar9 = *(undefined8 *)(uVar6 + 0x1348);
    uVar10 = *(undefined8 *)(uVar6 + 0x1350);
    uVar11 = *(undefined8 *)(uVar6 + 0x1358);
    *(undefined8 *)(uVar6 + 0x1340) = *(undefined8 *)(uVar6 + 0x1140);
    *(undefined8 *)(uVar6 + 0x1348) = *(undefined8 *)(uVar6 + 0x1148);
    *(undefined8 *)(uVar6 + 0x1350) = *(undefined8 *)(uVar6 + 0x1150);
    *(undefined8 *)(uVar6 + 0x1358) = *(undefined8 *)(uVar6 + 0x1158);
    *(undefined8 *)(uVar6 + 0x1140) = uVar7;
    *(undefined8 *)(uVar6 + 0x1148) = uVar9;
    *(undefined8 *)(uVar6 + 0x1150) = uVar10;
    *(undefined8 *)(uVar6 + 0x1158) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1360);
    uVar9 = *(undefined8 *)(uVar6 + 0x1368);
    uVar10 = *(undefined8 *)(uVar6 + 0x1370);
    uVar11 = *(undefined8 *)(uVar6 + 0x1378);
    *(undefined8 *)(uVar6 + 0x1360) = *(undefined8 *)(uVar6 + 0x1160);
    *(undefined8 *)(uVar6 + 0x1368) = *(undefined8 *)(uVar6 + 0x1168);
    *(undefined8 *)(uVar6 + 0x1370) = *(undefined8 *)(uVar6 + 0x1170);
    *(undefined8 *)(uVar6 + 0x1378) = *(undefined8 *)(uVar6 + 0x1178);
    *(undefined8 *)(uVar6 + 0x1160) = uVar7;
    *(undefined8 *)(uVar6 + 0x1168) = uVar9;
    *(undefined8 *)(uVar6 + 0x1170) = uVar10;
    *(undefined8 *)(uVar6 + 0x1178) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1380);
    uVar9 = *(undefined8 *)(uVar6 + 5000);
    uVar10 = *(undefined8 *)(uVar6 + 0x1390);
    uVar11 = *(undefined8 *)(uVar6 + 0x1398);
    *(undefined8 *)(uVar6 + 0x1380) = *(undefined8 *)(uVar6 + 0x1180);
    *(undefined8 *)(uVar6 + 5000) = *(undefined8 *)(uVar6 + 0x1188);
    *(undefined8 *)(uVar6 + 0x1390) = *(undefined8 *)(uVar6 + 0x1190);
    *(undefined8 *)(uVar6 + 0x1398) = *(undefined8 *)(uVar6 + 0x1198);
    *(undefined8 *)(uVar6 + 0x1180) = uVar7;
    *(undefined8 *)(uVar6 + 0x1188) = uVar9;
    *(undefined8 *)(uVar6 + 0x1190) = uVar10;
    *(undefined8 *)(uVar6 + 0x1198) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x13a0);
    uVar9 = *(undefined8 *)(uVar6 + 0x13a8);
    uVar10 = *(undefined8 *)(uVar6 + 0x13b0);
    uVar11 = *(undefined8 *)(uVar6 + 0x13b8);
    *(undefined8 *)(uVar6 + 0x13a0) = *(undefined8 *)(uVar6 + 0x11a0);
    *(undefined8 *)(uVar6 + 0x13a8) = *(undefined8 *)(uVar6 + 0x11a8);
    *(undefined8 *)(uVar6 + 0x13b0) = *(undefined8 *)(uVar6 + 0x11b0);
    *(undefined8 *)(uVar6 + 0x13b8) = *(undefined8 *)(uVar6 + 0x11b8);
    *(undefined8 *)(uVar6 + 0x11a0) = uVar7;
    *(undefined8 *)(uVar6 + 0x11a8) = uVar9;
    *(undefined8 *)(uVar6 + 0x11b0) = uVar10;
    *(undefined8 *)(uVar6 + 0x11b8) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x13c0);
    uVar9 = *(undefined8 *)(uVar6 + 0x13c8);
    uVar10 = *(undefined8 *)(uVar6 + 0x13d0);
    uVar11 = *(undefined8 *)(uVar6 + 0x13d8);
    *(undefined8 *)(uVar6 + 0x13c0) = *(undefined8 *)(uVar6 + 0x11c0);
    *(undefined8 *)(uVar6 + 0x13c8) = *(undefined8 *)(uVar6 + 0x11c8);
    *(undefined8 *)(uVar6 + 0x13d0) = *(undefined8 *)(uVar6 + 0x11d0);
    *(undefined8 *)(uVar6 + 0x13d8) = *(undefined8 *)(uVar6 + 0x11d8);
    *(undefined8 *)(uVar6 + 0x11c0) = uVar7;
    *(undefined8 *)(uVar6 + 0x11c8) = uVar9;
    *(undefined8 *)(uVar6 + 0x11d0) = uVar10;
    *(undefined8 *)(uVar6 + 0x11d8) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x13e0);
    uVar9 = *(undefined8 *)(uVar6 + 0x13e8);
    uVar10 = *(undefined8 *)(uVar6 + 0x13f0);
    uVar11 = *(undefined8 *)(uVar6 + 0x13f8);
    *(undefined8 *)(uVar6 + 0x13e0) = *(undefined8 *)(uVar6 + 0x11e0);
    *(undefined8 *)(uVar6 + 0x13e8) = *(undefined8 *)(uVar6 + 0x11e8);
    *(undefined8 *)(uVar6 + 0x13f0) = *(undefined8 *)(uVar6 + 0x11f0);
    *(undefined8 *)(uVar6 + 0x13f8) = *(undefined8 *)(uVar6 + 0x11f8);
    *(undefined8 *)(uVar6 + 0x11e0) = uVar7;
    *(undefined8 *)(uVar6 + 0x11e8) = uVar9;
    *(undefined8 *)(uVar6 + 0x11f0) = uVar10;
    *(undefined8 *)(uVar6 + 0x11f8) = uVar11;
    pdb_140a79940(param_2);
    lVar21 = (longlong)puStack_a0 + uVar24 * 0xc;
    pdb_140a79030(param_2,1,puStack_a0,lVar21,CONCAT44(uVar38,uVar37),uVar29,
                  *(undefined4 *)(puVar13[1] + 0x10),*(undefined4 *)(puVar13[1] + 0x14));
    puVar15 = (undefined8 *)pdb_140bf45b0(uVar25,&UNK_14331c900);
    if ((puVar15 == (undefined8 *)0x0) ||
       (lVar18 = (**(code **)(puVar15[1] + 0x18))(*puVar15), lVar18 == 0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14305a890);
    }
    pdb_140a78ae0(param_2,1,*(undefined8 *)(lVar18 + 8),*(undefined8 *)(lVar18 + 0x10));
    auStack_130._0_4_ = 0;
    if ((uVar24 != 0) && ((undefined8 *)(lVar21 + -0xc) != (undefined8 *)0x0)) {
      uStack_124 = *(undefined4 *)(lVar21 + -4);
      uVar7 = *(undefined8 *)(lVar21 + -0xc);
      auStack_130._4_4_ = (undefined4)uVar7;
      uStack_128 = (undefined4)((ulonglong)uVar7 >> 0x20);
      auStack_130._0_4_ = 1;
    }
    if (*(longlong *)(puVar13[1] + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_14305a8a8);
    }
    lVar21 = *(longlong *)(puVar13[1] + 0x18);
    pbStack_f0 = (byte *)CONCAT44(pbStack_f0._4_4_,*(undefined4 *)(lVar21 + 0x18));
    uStack_f8 = *(ulonglong *)(lVar21 + 0x10);
    puVar16 = &uStack_f8;
    if (auStack_130._0_4_ != 0) {
      puVar16 = (ulonglong *)(auStack_130 + 4);
    }
    uVar25 = *puVar16;
    uVar6 = puVar16[1];
    if (*(char *)((longlong)puVar13 + 0x1a) != '\0') {
      plVar14 = (longlong *)*param_5;
      *(undefined4 *)plVar14[2] = *(undefined4 *)((longlong)plVar14 + 0x1c);
      lVar21 = *plVar14;
      lVar18 = *(longlong *)(lVar21 + 0x30);
      uVar7 = *(undefined8 *)(lVar21 + 0x40);
      if (lVar18 == *(longlong *)(lVar21 + 0x20)) {
        pdb_142d7e6e0(lVar21 + 0x20);
      }
      lVar22 = *(longlong *)(lVar21 + 0x28);
      lVar20 = lVar18 * 0x20;
      *(undefined8 *)(lVar22 + lVar20) = uVar7;
      *(ulonglong *)(lVar22 + 8 + lVar20) = uVar25;
      *(int *)(lVar22 + 0x10 + lVar20) = (int)uVar6;
      *(undefined4 *)(lVar22 + 0x14 + lVar20) = uVar37;
      *(undefined1 *)(lVar22 + 0x18 + lVar20) = 1;
      *(longlong *)(lVar21 + 0x30) = lVar18 + 1;
      *(longlong *)(lVar21 + 0x40) = *(longlong *)(lVar21 + 0x40) + 1;
      plVar14 = (longlong *)param_5[1];
      *(undefined4 *)plVar14[2] = *(undefined4 *)((longlong)plVar14 + 0x1c);
      lVar21 = *plVar14;
      lVar18 = *(longlong *)(lVar21 + 0x30);
      uVar7 = *(undefined8 *)(lVar21 + 0x40);
      if (lVar18 == *(longlong *)(lVar21 + 0x20)) {
        pdb_142d7e8a0(lVar21 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar21 + 0x28) + lVar18 * 8) = uVar7;
      *(longlong *)(lVar21 + 0x30) = lVar18 + 1;
      *(longlong *)(lVar21 + 0x40) = *(longlong *)(lVar21 + 0x40) + 1;
      LOCK();
      **(longlong **)param_5[2] = **(longlong **)param_5[2] + 1;
      UNLOCK();
    }
    if (_DAT_142e36f28 <= fVar36) {
      if (*(char *)(puVar13 + 3) == '\0') {
        pdb_140a79cd0(param_2);
      }
      if (puStack_a8 != (ulonglong *)0x0) {
        pub_1406abac0((byte *)puStack_a0,(longlong)puStack_a8 * 0xc,4);
      }
      goto LAB_140b60c8e;
    }
    if (puStack_a8 != (ulonglong *)0x0) {
      pub_1406abac0((byte *)puStack_a0,(longlong)puStack_a8 * 0xc,4);
    }
  }
LAB_140b60cb8:
  uVar17 = (ulonglong)puStack_160 >> 1;
  if (uVar17 != 0) {
    if (puStack_160 < (ulonglong *)0x8) {
      uVar25 = 0;
    }
    else {
      uVar25 = uVar17 & 0xfffffffffffffffc;
      pauVar27 = (undefined1 (*) [16])(puStack_168 + 2);
      lVar21 = 0;
      do {
        auVar33 = pauVar27[-1];
        auVar4 = *pauVar27;
        auVar32 = *(undefined1 (*) [16])(puStack_168 + (longlong)puStack_160 + lVar21 + -4);
        auVar34 = *(undefined1 (*) [16])(puStack_168 + (longlong)puStack_160 + lVar21 + -2);
        auVar35._0_8_ = auVar34._8_8_;
        auVar35._8_4_ = auVar34._0_4_;
        auVar35._12_4_ = auVar34._4_4_;
        auVar34._0_8_ = auVar32._8_8_;
        auVar34._8_4_ = auVar32._0_4_;
        auVar34._12_4_ = auVar32._4_4_;
        pauVar27[-1] = auVar35;
        *pauVar27 = auVar34;
        auVar32._0_8_ = auVar33._8_8_;
        auVar32._8_4_ = auVar33._0_4_;
        auVar32._12_4_ = auVar33._4_4_;
        auVar33._0_8_ = auVar4._8_8_;
        auVar33._8_4_ = auVar4._0_4_;
        auVar33._12_4_ = auVar4._4_4_;
        *(undefined1 (*) [16])(puStack_168 + (longlong)puStack_160 + lVar21 + -2) = auVar32;
        *(undefined1 (*) [16])(puStack_168 + (longlong)puStack_160 + lVar21 + -4) = auVar33;
        lVar21 = lVar21 + -4;
        pauVar27 = pauVar27 + 2;
      } while (-lVar21 != (uVar17 & 0xfffffffffffffffc));
      if (uVar17 == uVar25) goto joined_r0x000140b60cf8;
    }
    puVar16 = puStack_168 + uVar25;
    lVar21 = -uVar25;
    do {
      uVar25 = *puVar16;
      *puVar16 = puStack_168[(longlong)puStack_160 + lVar21 + -1];
      puStack_168[(longlong)puStack_160 + lVar21 + -1] = uVar25;
      lVar21 = lVar21 + -1;
      puVar16 = puVar16 + 1;
    } while (-lVar21 != uVar17);
  }
joined_r0x000140b60cf8:
  puStack_a8 = puStack_170;
  puStack_a0 = puStack_168;
  if (puStack_160 != (ulonglong *)0x0) {
    puVar16 = puStack_168 + (longlong)puStack_160;
    puVar28 = puStack_168;
    do {
      puVar12 = puStack_b8;
      uVar17 = *puVar28;
      uVar25 = *(ulonglong *)((longlong)puStack_b8 + 0x10);
      if (uVar25 <= uVar17) {
LAB_140b610d5:
        pdb_142dc7ef8(uVar17,uVar25,&UNK_14305a8c0);
        goto LAB_140b61173;
      }
      lVar21 = *(longlong *)((longlong)puStack_b8 + 8);
      lVar18 = uVar17 * 0x30;
      cVar5 = *(char *)(lVar21 + lVar18);
      puVar13 = (undefined8 *)(lVar21 + 0x20 + lVar18);
      uVar7 = puVar13[1];
      uStack_d8 = (undefined7)((ulonglong)*puVar13 >> 8);
      uStack_d1 = (undefined1)uVar7;
      uStack_d0 = (undefined7)((ulonglong)uVar7 >> 8);
      puVar13 = (undefined8 *)(lVar21 + 0x11 + lVar18);
      uStack_e8 = *puVar13;
      uVar7 = puVar13[1];
      uStack_e0 = (undefined7)uVar7;
      uStack_d9 = (undefined1)((ulonglong)uVar7 >> 0x38);
      puVar2 = (ulonglong *)(lVar21 + 1 + lVar18);
      uStack_f8 = *puVar2;
      pbStack_f0 = (byte *)puVar2[1];
      pub_142e32770(lVar21 + lVar18,lVar18 + lVar21 + 0x30,(~uVar17 + uVar25) * 0x30);
      uVar25 = uVar25 - 1;
      *(ulonglong *)((longlong)puVar12 + 0x10) = uVar25;
      if (cVar5 == '\f') goto LAB_140b610d5;
      uStack_108 = CONCAT71(uStack_d0,uStack_d1);
      uStack_10f = uStack_d8;
      uStack_11f = (undefined7)uStack_e8;
      uStack_118 = (undefined1)(uStack_e8 >> 0x38);
      uStack_117 = uStack_e0;
      uStack_110 = uStack_d9;
      auStack_130._1_3_ = (undefined3)uStack_f8;
      auStack_130[0] = cVar5;
      auStack_130._4_4_ = (undefined4)(uStack_f8 >> 0x18);
      uStack_128._0_1_ = (undefined1)(uStack_f8 >> 0x38);
      uStack_128._1_3_ = SUB83(pbStack_f0,0);
      uStack_124 = (undefined4)((ulonglong)pbStack_f0 >> 0x18);
      uStack_120 = (undefined1)((ulonglong)pbStack_f0 >> 0x38);
      pdb_140b673e0(auStack_130);
      puVar28 = puVar28 + 1;
    } while (puVar28 != puVar16);
  }
  if (puStack_a8 != (ulonglong *)0x0) {
    pub_1406abac0((byte *)puStack_a0,(longlong)puStack_a8 << 3,8);
  }
  puStack_a0 = puStack_178;
LAB_140b60ee5:
  puStack_b8 = (ulonglong *)0x0;
  pbVar23 = pbStack_180;
  puStack_178 = puStack_a0;
  puStack_a8 = (ulonglong *)pbStack_180;
  while (puStack_a0 != puStack_b8) {
    puStack_b8 = (ulonglong *)((longlong)puStack_b8 + 1);
    pdb_14099c550(pbVar23);
    pbVar23 = pbVar23 + 0x30;
  }
  if (lStack_188 != 0) {
    pub_1406abac0((byte *)puStack_a8,lStack_188 * 0x30,8);
  }
  return;
}

