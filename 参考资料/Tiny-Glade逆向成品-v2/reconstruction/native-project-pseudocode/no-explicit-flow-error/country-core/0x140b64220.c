// VA 0x140b64220, PDB extent 10174 bytes
// country_core::systems::history::replay_raster::replay_raster<country_core::resources::world_raster_defs::Cobblestone3RasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::history::replay_path::replay_path::closure_env$1<country_core::systems::history::replay_path::Cobblestone3PathFilter> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::history::replay_raster::replay_raster<country_core::resources::world_raster_defs::Cobblestone3RasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::history::replay_path::replay_path::closure_env$1<country_core::systems::history::replay_path::Cobblestone3PathFilter>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_raster.rs
   Extent: 10174 */

void pdb_140b64220(ulonglong *param_1,longlong param_2,code *param_3,code *param_4,longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auVar4 [16];
  char cVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  byte **ppbVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong *puVar23;
  undefined1 (*pauVar24) [16];
  byte *pbVar25;
  ulonglong uVar26;
  undefined1 uVar27;
  longlong lVar28;
  byte *pbVar29;
  ulonglong *puVar30;
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
  longlong lStack_190;
  byte *pbStack_188;
  ulonglong *puStack_180;
  ulonglong *puStack_178;
  ulonglong *puStack_170;
  ulonglong *puStack_168;
  code *pcStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined8 uStack_118;
  undefined8 uStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined8 uStack_d8;
  byte *pbStack_c8;
  longlong lStack_c0;
  ulonglong *puStack_b8;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  ulonglong *puStack_a8;
  ulonglong *puStack_a0;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  pbVar29 = (byte *)*param_1;
  puStack_a0 = (ulonglong *)param_1[4];
  uVar17 = param_1[8];
  puVar23 = (ulonglong *)param_1[0xc];
  uVar21 = param_1[0x10];
  fVar31 = *(float *)(puVar23 + 5);
  lStack_190 = 0;
  pbStack_188 = (byte *)0x8;
  puStack_180 = (ulonglong *)0x0;
  *(undefined4 *)param_1[0xe] = *(undefined4 *)((longlong)param_1 + 0x7c);
  if (puVar23[3] == 0) {
    puStack_a0 = (ulonglong *)0x0;
    goto LAB_140b65e45;
  }
  uVar19 = *puVar23;
  if (puVar23[2] < *puVar23) {
    uVar19 = 0;
  }
  uVar12 = puVar23[1];
  lVar18 = (puVar23[2] - uVar19) * 0x40;
  puStack_b8 = (ulonglong *)(uVar12 + lVar18);
  puStack_178 = (ulonglong *)0x0;
  puStack_170 = (ulonglong *)0x8;
  puStack_168 = (ulonglong *)0x0;
  lVar28 = *(longlong *)(uVar12 + 8 + lVar18);
  lVar18 = *(longlong *)(uVar12 + 0x10 + lVar18) * 0x30 + lVar28;
  uVar19 = 0;
  pcStack_160 = param_4;
  pbStack_c8 = pbVar29;
  do {
    uVar12 = uVar19;
    if (lVar28 == lVar18) goto LAB_140b65c1c;
    uStack_91 = 1;
    plVar13 = (longlong *)(*param_3)(lVar28);
    uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
    lVar28 = lVar28 + 0x30;
    uVar19 = uVar12 + 1;
  } while (plVar13 == (longlong *)0x0);
  if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
    if (*(longlong *)(plVar13[1] + 0x20) == 0) {
      uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14305a840,0x34,&UNK_14305a878);
    }
    *(undefined1 *)((longlong)plVar13 + 0x19) = 1;
    pub_142e32780(uVar21 + 0xc00,0,0x400);
    uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
    fVar3 = *(float *)((longlong)plVar13 + 0x14);
    if ((char)plVar13[3] != '\0') {
      uStack_91 = 1;
      pdb_140a787a0(param_2,0);
      lStack_c0 = *plVar13;
      uVar19 = puStack_a0[1];
      uVar26 = puStack_a0[2];
      uVar20 = uVar19;
      while (uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20),
            uVar20 != uVar19 + uVar26 * 0x28) {
        uVar1 = uVar20 + 0x28;
        lVar28 = *(longlong *)(uVar20 + 8);
        lVar18 = *(longlong *)(uVar20 + 0x10);
        lVar22 = lVar28;
        while (uVar20 = uVar1, lVar22 != lVar28 + lVar18 * 0x18) {
          lVar2 = lVar22 + 0x18;
          puStack_a8 = puStack_180;
          puStack_180 = (ulonglong *)0x0;
          puStack_a0 = (ulonglong *)0x0;
          pbVar29 = pbStack_188;
          while (puStack_a8 != puStack_a0) {
            puStack_a0 = (ulonglong *)((longlong)puStack_a0 + 1);
            pdb_140b673e0(pbVar29);
            pbVar29 = pbVar29 + 0x30;
          }
          uStack_91 = 1;
          (*pcStack_160)(lVar22,&lStack_190);
          pbVar25 = pbStack_188 + (longlong)puStack_180 * 0x30;
          pbVar29 = pbStack_188;
          while (lVar22 = lVar2, pbVar29 != pbVar25) {
            uStack_91 = 1;
            plVar14 = (longlong *)(*param_3)(pbVar29);
            uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
            pbVar29 = pbVar29 + 0x30;
            if (plVar14 != (longlong *)0x0) {
              if (*plVar14 == lStack_c0) goto LAB_140b64515;
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
LAB_140b64515:
    if (_DAT_142e37848 <= fVar3) goto LAB_140b649a4;
    if ((char)plVar13[3] == '\0') {
      lVar28 = plVar13[1];
      uStack_91 = 1;
      pdb_140a79030(param_2,0,*(longlong *)(lVar28 + 0x18) + 0x10,
                    *(longlong *)(lVar28 + 0x18) + *(longlong *)(lVar28 + 0x20) * 0xc + 0x10,
                    CONCAT44(uVar38,*(undefined4 *)(lVar28 + 0x28)),*(undefined1 *)(lVar28 + 0x2c),
                    *(undefined4 *)(lVar28 + 0x10),*(undefined4 *)(lVar28 + 0x14));
      if (*(char *)((longlong)plVar13 + 0x1a) == '\x01') {
        lVar28 = plVar13[1];
        if (*(longlong *)(lVar28 + 0x20) == 0) {
          uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,0,&UNK_14305a810);
        }
        uStack_138 = *(undefined4 *)(*(longlong *)(lVar28 + 0x18) + 0x18);
        uVar6 = *(undefined8 *)(*(longlong *)(lVar28 + 0x18) + 0x10);
        auStack_140._0_4_ = (undefined4)uVar6;
        auStack_140._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_134 = *(undefined4 *)(lVar28 + 0x28);
        uStack_130 = CONCAT31(uStack_130._1_3_,1);
        uStack_12c = 0x301;
        uStack_91 = 1;
        pdb_141617b30(param_5,auStack_140,&UNK_14305a760);
      }
    }
    pub_142e32780(uVar21 + 0xe00,0,0x200);
    lVar28 = plVar13[1];
    uStack_91 = 1;
    pdb_140a83c80(uVar21 + 0xe00,*(longlong *)(lVar28 + 0x18) + 0x10,
                  *(longlong *)(lVar28 + 0x18) + *(longlong *)(lVar28 + 0x20) * 0xc + 0x10,
                  *(undefined4 *)(lVar28 + 0x28));
    uVar19 = *(ulonglong *)(uVar21 + 0xe08);
    uVar26 = *(ulonglong *)(uVar21 + 0xe10);
    uVar20 = *(ulonglong *)(uVar21 + 0xe18);
    *(ulonglong *)(param_2 + 0x98) = *(ulonglong *)(param_2 + 0x98) | *(ulonglong *)(uVar21 + 0xe00)
    ;
    *(ulonglong *)(param_2 + 0xa0) = *(ulonglong *)(param_2 + 0xa0) | uVar19;
    *(ulonglong *)(param_2 + 0xa8) = *(ulonglong *)(param_2 + 0xa8) | uVar26;
    *(ulonglong *)(param_2 + 0xb0) = *(ulonglong *)(param_2 + 0xb0) | uVar20;
    uVar20 = *(ulonglong *)(uVar21 + 0xe28);
    uVar19 = *(ulonglong *)(uVar21 + 0xe30);
    uVar26 = *(ulonglong *)(uVar21 + 0xe38);
    *(ulonglong *)(param_2 + 0xb8) = *(ulonglong *)(uVar21 + 0xe20) | *(ulonglong *)(param_2 + 0xb8)
    ;
    *(ulonglong *)(param_2 + 0xc0) = uVar20 | *(ulonglong *)(param_2 + 0xc0);
    *(ulonglong *)(param_2 + 200) = uVar19 | *(ulonglong *)(param_2 + 200);
    *(ulonglong *)(param_2 + 0xd0) = uVar26 | *(ulonglong *)(param_2 + 0xd0);
    uVar19 = *(ulonglong *)(uVar21 + 0xe48);
    uVar26 = *(ulonglong *)(uVar21 + 0xe50);
    uVar20 = *(ulonglong *)(uVar21 + 0xe58);
    *(ulonglong *)(param_2 + 0xd8) = *(ulonglong *)(param_2 + 0xd8) | *(ulonglong *)(uVar21 + 0xe40)
    ;
    *(ulonglong *)(param_2 + 0xe0) = *(ulonglong *)(param_2 + 0xe0) | uVar19;
    *(ulonglong *)(param_2 + 0xe8) = *(ulonglong *)(param_2 + 0xe8) | uVar26;
    *(ulonglong *)(param_2 + 0xf0) = *(ulonglong *)(param_2 + 0xf0) | uVar20;
    uVar19 = *(ulonglong *)(uVar21 + 0xe68);
    uVar26 = *(ulonglong *)(uVar21 + 0xe70);
    uVar20 = *(ulonglong *)(uVar21 + 0xe78);
    *(ulonglong *)(param_2 + 0xf8) = *(ulonglong *)(param_2 + 0xf8) | *(ulonglong *)(uVar21 + 0xe60)
    ;
    *(ulonglong *)(param_2 + 0x100) = *(ulonglong *)(param_2 + 0x100) | uVar19;
    *(ulonglong *)(param_2 + 0x108) = *(ulonglong *)(param_2 + 0x108) | uVar26;
    *(ulonglong *)(param_2 + 0x110) = *(ulonglong *)(param_2 + 0x110) | uVar20;
    uVar19 = *(ulonglong *)(uVar21 + 0xe88);
    uVar26 = *(ulonglong *)(uVar21 + 0xe90);
    uVar20 = *(ulonglong *)(uVar21 + 0xe98);
    *(ulonglong *)(param_2 + 0x118) =
         *(ulonglong *)(param_2 + 0x118) | *(ulonglong *)(uVar21 + 0xe80);
    *(ulonglong *)(param_2 + 0x120) = *(ulonglong *)(param_2 + 0x120) | uVar19;
    *(ulonglong *)(param_2 + 0x128) = *(ulonglong *)(param_2 + 0x128) | uVar26;
    *(ulonglong *)(param_2 + 0x130) = *(ulonglong *)(param_2 + 0x130) | uVar20;
    uVar19 = *(ulonglong *)(uVar21 + 0xea8);
    uVar26 = *(ulonglong *)(uVar21 + 0xeb0);
    uVar20 = *(ulonglong *)(uVar21 + 0xeb8);
    *(ulonglong *)(param_2 + 0x138) =
         *(ulonglong *)(param_2 + 0x138) | *(ulonglong *)(uVar21 + 0xea0);
    *(ulonglong *)(param_2 + 0x140) = *(ulonglong *)(param_2 + 0x140) | uVar19;
    *(ulonglong *)(param_2 + 0x148) = *(ulonglong *)(param_2 + 0x148) | uVar26;
    *(ulonglong *)(param_2 + 0x150) = *(ulonglong *)(param_2 + 0x150) | uVar20;
    uVar19 = *(ulonglong *)(uVar21 + 0xec8);
    uVar26 = *(ulonglong *)(uVar21 + 0xed0);
    uVar20 = *(ulonglong *)(uVar21 + 0xed8);
    *(ulonglong *)(param_2 + 0x158) =
         *(ulonglong *)(param_2 + 0x158) | *(ulonglong *)(uVar21 + 0xec0);
    *(ulonglong *)(param_2 + 0x160) = *(ulonglong *)(param_2 + 0x160) | uVar19;
    *(ulonglong *)(param_2 + 0x168) = *(ulonglong *)(param_2 + 0x168) | uVar26;
    *(ulonglong *)(param_2 + 0x170) = *(ulonglong *)(param_2 + 0x170) | uVar20;
    uVar19 = *(ulonglong *)(uVar21 + 0xee8);
    uVar26 = *(ulonglong *)(uVar21 + 0xef0);
    uVar20 = *(ulonglong *)(uVar21 + 0xef8);
    *(ulonglong *)(param_2 + 0x178) =
         *(ulonglong *)(param_2 + 0x178) | *(ulonglong *)(uVar21 + 0xee0);
    *(ulonglong *)(param_2 + 0x180) = *(ulonglong *)(param_2 + 0x180) | uVar19;
    *(ulonglong *)(param_2 + 0x188) = *(ulonglong *)(param_2 + 0x188) | uVar26;
    *(ulonglong *)(param_2 + 400) = *(ulonglong *)(param_2 + 400) | uVar20;
    uVar19 = *(ulonglong *)(uVar21 + 0xf08);
    uVar26 = *(ulonglong *)(uVar21 + 0xf10);
    uVar20 = *(ulonglong *)(uVar21 + 0xf18);
    *(ulonglong *)(param_2 + 0x198) =
         *(ulonglong *)(param_2 + 0x198) | *(ulonglong *)(uVar21 + 0xf00);
    *(ulonglong *)(param_2 + 0x1a0) = *(ulonglong *)(param_2 + 0x1a0) | uVar19;
    *(ulonglong *)(param_2 + 0x1a8) = *(ulonglong *)(param_2 + 0x1a8) | uVar26;
    *(ulonglong *)(param_2 + 0x1b0) = *(ulonglong *)(param_2 + 0x1b0) | uVar20;
    uVar19 = *(ulonglong *)(uVar21 + 0xf28);
    uVar26 = *(ulonglong *)(uVar21 + 0xf30);
    uVar20 = *(ulonglong *)(uVar21 + 0xf38);
    *(ulonglong *)(param_2 + 0x1b8) =
         *(ulonglong *)(param_2 + 0x1b8) | *(ulonglong *)(uVar21 + 0xf20);
    *(ulonglong *)(param_2 + 0x1c0) = *(ulonglong *)(param_2 + 0x1c0) | uVar19;
    *(ulonglong *)(param_2 + 0x1c8) = *(ulonglong *)(param_2 + 0x1c8) | uVar26;
    *(ulonglong *)(param_2 + 0x1d0) = *(ulonglong *)(param_2 + 0x1d0) | uVar20;
    uVar19 = *(ulonglong *)(uVar21 + 0xf48);
    uVar26 = *(ulonglong *)(uVar21 + 0xf50);
    uVar20 = *(ulonglong *)(uVar21 + 0xf58);
    *(ulonglong *)(param_2 + 0x1d8) =
         *(ulonglong *)(param_2 + 0x1d8) | *(ulonglong *)(uVar21 + 0xf40);
    *(ulonglong *)(param_2 + 0x1e0) = *(ulonglong *)(param_2 + 0x1e0) | uVar19;
    *(ulonglong *)(param_2 + 0x1e8) = *(ulonglong *)(param_2 + 0x1e8) | uVar26;
    *(ulonglong *)(param_2 + 0x1f0) = *(ulonglong *)(param_2 + 0x1f0) | uVar20;
    uVar19 = *(ulonglong *)(uVar21 + 0xf68);
    uVar26 = *(ulonglong *)(uVar21 + 0xf70);
    uVar20 = *(ulonglong *)(uVar21 + 0xf78);
    *(ulonglong *)(param_2 + 0x1f8) =
         *(ulonglong *)(param_2 + 0x1f8) | *(ulonglong *)(uVar21 + 0xf60);
    *(ulonglong *)(param_2 + 0x200) = *(ulonglong *)(param_2 + 0x200) | uVar19;
    *(ulonglong *)(param_2 + 0x208) = *(ulonglong *)(param_2 + 0x208) | uVar26;
    *(ulonglong *)(param_2 + 0x210) = *(ulonglong *)(param_2 + 0x210) | uVar20;
    uVar19 = *(ulonglong *)(uVar21 + 0xf88);
    uVar26 = *(ulonglong *)(uVar21 + 0xf90);
    uVar20 = *(ulonglong *)(uVar21 + 0xf98);
    *(ulonglong *)(param_2 + 0x218) =
         *(ulonglong *)(param_2 + 0x218) | *(ulonglong *)(uVar21 + 0xf80);
    *(ulonglong *)(param_2 + 0x220) = *(ulonglong *)(param_2 + 0x220) | uVar19;
    *(ulonglong *)(param_2 + 0x228) = *(ulonglong *)(param_2 + 0x228) | uVar26;
    *(ulonglong *)(param_2 + 0x230) = *(ulonglong *)(param_2 + 0x230) | uVar20;
    uVar19 = *(ulonglong *)(uVar21 + 0xfa8);
    uVar26 = *(ulonglong *)(uVar21 + 0xfb0);
    uVar20 = *(ulonglong *)(uVar21 + 0xfb8);
    *(ulonglong *)(param_2 + 0x238) =
         *(ulonglong *)(param_2 + 0x238) | *(ulonglong *)(uVar21 + 4000);
    *(ulonglong *)(param_2 + 0x240) = *(ulonglong *)(param_2 + 0x240) | uVar19;
    *(ulonglong *)(param_2 + 0x248) = *(ulonglong *)(param_2 + 0x248) | uVar26;
    *(ulonglong *)(param_2 + 0x250) = *(ulonglong *)(param_2 + 0x250) | uVar20;
    uVar19 = *(ulonglong *)(uVar21 + 0xfc8);
    uVar26 = *(ulonglong *)(uVar21 + 0xfd0);
    uVar20 = *(ulonglong *)(uVar21 + 0xfd8);
    *(ulonglong *)(param_2 + 600) = *(ulonglong *)(param_2 + 600) | *(ulonglong *)(uVar21 + 0xfc0);
    *(ulonglong *)(param_2 + 0x260) = *(ulonglong *)(param_2 + 0x260) | uVar19;
    *(ulonglong *)(param_2 + 0x268) = *(ulonglong *)(param_2 + 0x268) | uVar26;
    *(ulonglong *)(param_2 + 0x270) = *(ulonglong *)(param_2 + 0x270) | uVar20;
    uVar20 = *(ulonglong *)(uVar21 + 0xfe8);
    uVar19 = *(ulonglong *)(uVar21 + 0xff0);
    uVar26 = *(ulonglong *)(uVar21 + 0xff8);
    *(ulonglong *)(param_2 + 0x278) =
         *(ulonglong *)(param_2 + 0x278) | *(ulonglong *)(uVar21 + 0xfe0);
    *(ulonglong *)(param_2 + 0x280) = *(ulonglong *)(param_2 + 0x280) | uVar20;
    *(ulonglong *)(param_2 + 0x288) = *(ulonglong *)(param_2 + 0x288) | uVar19;
    *(ulonglong *)(param_2 + 0x290) = *(ulonglong *)(param_2 + 0x290) | uVar26;
    uStack_91 = 1;
    puVar15 = (undefined8 *)pdb_140bf45b0(uVar17);
    if (puVar15 == (undefined8 *)0x0) {
LAB_140b66089:
      uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14305a828);
    }
    uStack_91 = 1;
    lVar28 = (**(code **)(puVar15[1] + 0x18))(*puVar15);
    if (lVar28 == 0) goto LAB_140b66089;
    uStack_91 = 1;
    pdb_140a78ae0(param_2,0,*(undefined8 *)(lVar28 + 8),*(undefined8 *)(lVar28 + 0x10));
LAB_140b65bf2:
    puVar23 = puStack_168;
    if (puStack_168 == puStack_178) {
      uStack_91 = 1;
      pdb_142d896b0(&puStack_178);
    }
    puStack_170[(longlong)puVar23] = uVar12;
    puStack_168 = (ulonglong *)((longlong)puVar23 + 1);
  }
  else {
LAB_140b649a4:
    fVar36 = fVar31 * *(float *)(pbStack_c8 + 0x28) + *(float *)(plVar13 + 2);
    *(float *)(plVar13 + 2) = fVar36;
    fVar3 = _DAT_142e36f28;
    fVar36 = fVar36 / *(float *)((longlong)plVar13 + 0x14);
    fVar31 = 0.0;
    if (0.0 <= fVar36) {
      fVar31 = fVar36;
    }
    fVar36 = _DAT_142e36f28;
    if (fVar31 <= _DAT_142e36f28) {
      fVar36 = fVar31;
    }
    pub_142e32780(uVar21 + 0xe00,0);
    lStack_c0 = plVar13[1];
    auStack_140 = (undefined1  [8])&uStack_1a8;
    if ((char)plVar13[3] == '\0') {
      uStack_91 = 1;
      fVar31 = (float)pdb_140dedc70();
      uVar27 = *(undefined1 *)(lStack_c0 + 0x2c);
      uVar37 = *(undefined4 *)(lStack_c0 + 0x28);
      if (_DAT_142e37848 <= fVar31) {
        pbVar29 = *(byte **)(lStack_c0 + 0x20);
        if (pbVar29 == (byte *)0x0) {
          pbVar25 = (byte *)0x4;
        }
        else {
          puStack_a0 = (ulonglong *)CONCAT71(puStack_a0._1_7_,uVar27);
          lVar28 = *(longlong *)(lStack_c0 + 0x18);
          pdb_14007ee60();
          pbVar25 = pub_1406abab0((longlong)pbVar29 * 0xc,4);
          if (pbVar25 == (byte *)0x0) {
            uStack_91 = 1;
            pdb_142dc7e2a(4,(longlong)pbVar29 * 0xc);
            goto LAB_140b660e9;
          }
          if (pbVar29 == (byte *)0x1) {
            uVar19 = 0;
LAB_140b64e69:
            lVar18 = uVar19 * 0xc;
            *(undefined4 *)(pbVar25 + lVar18 + 8) = *(undefined4 *)(lVar28 + 0x18 + lVar18);
            *(undefined8 *)(pbVar25 + lVar18) = *(undefined8 *)(lVar28 + 0x10 + lVar18);
          }
          else {
            uVar19 = 0;
            lVar18 = 0;
            do {
              *(undefined4 *)(pbVar25 + lVar18 + 8) = *(undefined4 *)(lVar28 + 0x18 + lVar18);
              *(undefined8 *)(pbVar25 + lVar18) = *(undefined8 *)(lVar28 + 0x10 + lVar18);
              *(undefined8 *)(pbVar25 + lVar18 + 0xc) = *(undefined8 *)(lVar28 + 0x1c + lVar18);
              *(undefined4 *)(pbVar25 + lVar18 + 0x14) = *(undefined4 *)(lVar28 + 0x24 + lVar18);
              uVar19 = uVar19 + 2;
              lVar18 = lVar18 + 0x18;
            } while (((ulonglong)pbVar29 & 0xfffffffffffffffe) != uVar19);
            if (((ulonglong)pbVar29 & 1) != 0) goto LAB_140b64e69;
          }
          uVar27 = puStack_a0._0_1_;
        }
        uStack_91 = 1;
        pbStack_108 = pbVar29;
        pbStack_100 = pbVar25;
        pbStack_f8 = pbVar29;
        pdb_1419aa3f0(auStack_140,&pbStack_108);
        if (SBORROW8(0,CONCAT44(auStack_140._4_4_,auStack_140._0_4_))) {
          uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14335e278,0x2b,&pbStack_108,&UNK_14335e258,&UNK_14305a8d8);
        }
        uStack_d8 = uStack_110;
        pbStack_108 = (byte *)CONCAT44(auStack_140._4_4_,auStack_140._0_4_);
        pbStack_100 = (byte *)CONCAT44(uStack_134,uStack_138);
        pbStack_f8 = (byte *)CONCAT26(uStack_12a,CONCAT24(uStack_12c,uStack_130));
        uStack_e8 = (undefined7)CONCAT71(uStack_11f,uStack_120);
        uStack_e1 = (undefined1)((uint7)uStack_11f >> 0x30);
        uStack_e0 = (undefined7)uStack_118;
        uStack_d9 = (undefined1)((ulonglong)uStack_118 >> 0x38);
        uStack_f0 = (undefined7)CONCAT71(uStack_127,uStack_128);
        uStack_e9 = (undefined1)((uint7)uStack_127 >> 0x30);
        uStack_1a8 = CONCAT44(uStack_1a8._4_4_,fVar31);
        if ((fVar31 < 0.0) || (fVar3 < fVar31)) {
          uStack_138 = 0x40f70fc0;
          uStack_134 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14335ec38,auStack_140,&UNK_14305a8f0);
        }
        uStack_158 = 0;
        uStack_150 = 4;
        uStack_148 = 0;
        uStack_a9 = 1;
        pdb_1419a6a90(&pbStack_108,0);
        uStack_198 = uStack_148;
        uStack_1a8 = uStack_158;
        uStack_1a0 = uStack_150;
        uStack_a9 = 0;
        pdb_1419aa3f0(auStack_140,&uStack_1a8);
        puVar23 = (ulonglong *)CONCAT44(auStack_140._4_4_,auStack_140._0_4_);
        if (SBORROW8(0,(longlong)puVar23)) {
          if (pbStack_108 != (byte *)0x0) {
            pub_1406abac0(pbStack_100,(longlong)pbStack_108 * 0xc,4);
          }
          lVar28 = CONCAT17(uStack_e9,uStack_f0);
          puVar30 = (ulonglong *)0x4;
          uVar26 = 0;
          puStack_a8 = (ulonglong *)0x0;
        }
        else {
          puVar30 = (ulonglong *)CONCAT44(uStack_134,uStack_138);
          uVar26 = CONCAT26(uStack_12a,CONCAT24(uStack_12c,uStack_130));
          lVar28 = CONCAT71(uStack_127,uStack_128);
          pbStack_c8 = (byte *)CONCAT71(uStack_11f,uStack_120);
          uVar19 = *(ulonglong *)(lStack_c0 + 0x20);
          uVar20 = 0;
          if (2 < uVar26) {
            uVar20 = uVar26 - 3;
          }
          puStack_a8 = puVar23;
          if (uVar19 < uVar20) {
            puStack_b8 = (ulonglong *)lVar28;
            puStack_a0 = puVar30;
            pdb_142dc8420(uVar20,uVar19,uVar19,&UNK_14305a908);
LAB_140b660e9:
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          if (lVar28 != 0) {
            pub_1406abac0(pbStack_c8,lVar28 << 2,4);
          }
          if (pbStack_108 != (byte *)0x0) {
            pub_1406abac0(pbStack_100,(longlong)pbStack_108 * 0xc,4);
          }
          lVar28 = CONCAT17(uStack_e9,uStack_f0);
        }
        if (lVar28 != 0) {
          pub_1406abac0((byte *)CONCAT17(uStack_e1,uStack_e8),lVar28 << 2,4);
        }
      }
      else {
        puVar30 = (ulonglong *)0x4;
        uVar26 = 0;
        puStack_a8 = (ulonglong *)0x0;
      }
      puStack_a0 = puVar30;
      pdb_140a83c80(uVar21 + 0xe00,puVar30,(longlong)puVar30 + uVar26 * 0xc,
                    *(undefined4 *)(plVar13[1] + 0x28));
    }
    else {
      uStack_91 = 1;
      fVar31 = (float)pdb_140dedc70(fVar3 - fVar36);
      uVar27 = *(undefined1 *)(lStack_c0 + 0x2c);
      uVar37 = *(undefined4 *)(lStack_c0 + 0x28);
      lVar28 = *(longlong *)(lStack_c0 + 0x18);
      pbVar29 = *(byte **)(lStack_c0 + 0x20);
      lVar18 = lVar28 + 0x10;
      if (_DAT_142e37848 <= fVar31) {
        if (pbVar29 == (byte *)0x0) {
          pbVar25 = (byte *)0x4;
        }
        else {
          puStack_a0 = (ulonglong *)CONCAT71(puStack_a0._1_7_,uVar27);
          pdb_14007ee60();
          puStack_a8 = (ulonglong *)((longlong)pbVar29 * 0xc);
          pbVar25 = pub_1406abab0((ulonglong)((longlong)pbVar29 * 0xc),4);
          if (pbVar25 == (byte *)0x0) {
            uStack_91 = 1;
            pdb_142dc7e2a(4,puStack_a8);
            goto LAB_140b660e9;
          }
          uVar27 = puStack_a0._0_1_;
          if (pbVar29 == (byte *)0x1) {
            uVar19 = 0;
          }
          else {
            uVar19 = 0;
            lVar22 = 0;
            do {
              *(undefined4 *)(pbVar25 + lVar22 + 8) = *(undefined4 *)(lVar28 + 0x18 + lVar22);
              *(undefined8 *)(pbVar25 + lVar22) = *(undefined8 *)(lVar18 + lVar22);
              *(undefined8 *)(pbVar25 + lVar22 + 0xc) = *(undefined8 *)(lVar28 + 0x1c + lVar22);
              *(undefined4 *)(pbVar25 + lVar22 + 0x14) = *(undefined4 *)(lVar28 + 0x24 + lVar22);
              uVar19 = uVar19 + 2;
              lVar22 = lVar22 + 0x18;
            } while (((ulonglong)pbVar29 & 0xfffffffffffffffe) != uVar19);
            if (((ulonglong)pbVar29 & 1) == 0) goto LAB_140b64bd2;
          }
          lVar22 = uVar19 * 0xc;
          *(undefined4 *)(pbVar25 + lVar22 + 8) = *(undefined4 *)(lVar28 + 0x18 + lVar22);
          *(undefined8 *)(pbVar25 + lVar22) = *(undefined8 *)(lVar18 + lVar22);
        }
LAB_140b64bd2:
        uStack_91 = 1;
        pbStack_108 = pbVar29;
        pbStack_100 = pbVar25;
        pbStack_f8 = pbVar29;
        pbStack_c8 = pbVar29;
        pdb_1419aa3f0(auStack_140,&pbStack_108);
        if (SBORROW8(0,CONCAT44(auStack_140._4_4_,auStack_140._0_4_))) {
          uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14335e278,0x2b,&pbStack_108,&UNK_14335e258,&UNK_14305a8d8);
        }
        uStack_d8 = uStack_110;
        pbStack_108 = (byte *)CONCAT44(auStack_140._4_4_,auStack_140._0_4_);
        pbStack_100 = (byte *)CONCAT44(uStack_134,uStack_138);
        pbStack_f8 = (byte *)CONCAT26(uStack_12a,CONCAT24(uStack_12c,uStack_130));
        uStack_e8 = (undefined7)CONCAT71(uStack_11f,uStack_120);
        uStack_e1 = (undefined1)((uint7)uStack_11f >> 0x30);
        uStack_e0 = (undefined7)uStack_118;
        uStack_d9 = (undefined1)((ulonglong)uStack_118 >> 0x38);
        uStack_f0 = (undefined7)CONCAT71(uStack_127,uStack_128);
        uStack_e9 = (undefined1)((uint7)uStack_127 >> 0x30);
        uStack_1a8 = CONCAT44(uStack_1a8._4_4_,fVar31);
        if ((fVar31 < 0.0) || (fVar3 < fVar31)) {
          uStack_138 = 0x40f70fc0;
          uStack_134 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14335ec38,auStack_140,&UNK_14305a8f0);
        }
        uStack_158 = 0;
        uStack_150 = 4;
        uStack_148 = 0;
        uStack_aa = 1;
        pdb_1419a6a90(&pbStack_108,0);
        uStack_198 = uStack_148;
        uStack_1a8 = uStack_158;
        uStack_1a0 = uStack_150;
        uStack_aa = 0;
        pdb_1419aa3f0(auStack_140,&uStack_1a8);
        puVar23 = (ulonglong *)CONCAT44(auStack_140._4_4_,auStack_140._0_4_);
        if (SBORROW8(0,(longlong)puVar23)) {
          if (pbStack_108 != (byte *)0x0) {
            pub_1406abac0(pbStack_100,(longlong)pbStack_108 * 0xc,4);
          }
          lVar28 = CONCAT17(uStack_e9,uStack_f0);
          puStack_a0 = (ulonglong *)0x4;
          puStack_a8 = (ulonglong *)0x0;
          uVar26 = 0;
        }
        else {
          puStack_a0 = (ulonglong *)CONCAT44(uStack_134,uStack_138);
          uVar26 = CONCAT26(uStack_12a,CONCAT24(uStack_12c,uStack_130));
          lVar28 = CONCAT71(uStack_127,uStack_128);
          pcStack_160 = (code *)CONCAT71(uStack_11f,uStack_120);
          uVar19 = *(ulonglong *)(lStack_c0 + 0x20);
          uVar20 = 0;
          if (2 < uVar26) {
            uVar20 = uVar26 - 3;
          }
          pbStack_c8 = (byte *)(uVar19 - uVar20);
          puStack_a8 = puVar23;
          if (uVar19 < uVar20) {
            puStack_b8 = (ulonglong *)lVar28;
            pdb_142dc8420(uVar20,uVar19,uVar19,&UNK_14305a908);
            goto LAB_140b660e9;
          }
          lStack_c0 = *(longlong *)(lStack_c0 + 0x18);
          if (lVar28 != 0) {
            pub_1406abac0((byte *)pcStack_160,lVar28 << 2,4);
          }
          if (pbStack_108 != (byte *)0x0) {
            pub_1406abac0(pbStack_100,(longlong)pbStack_108 * 0xc,4);
          }
          lVar18 = lStack_c0 + uVar20 * 0xc + 0x10;
          lVar28 = CONCAT17(uStack_e9,uStack_f0);
        }
        pbVar29 = pbStack_c8;
        if (lVar28 != 0) {
          pub_1406abac0((byte *)CONCAT17(uStack_e1,uStack_e8),lVar28 << 2,4);
          pbVar29 = pbStack_c8;
        }
      }
      else {
        puStack_a0 = (ulonglong *)0x4;
        puStack_a8 = (ulonglong *)0x0;
        uVar26 = 0;
      }
      pdb_140a83c80(uVar21 + 0xe00,lVar18,lVar18 + (longlong)pbVar29 * 0xc,
                    *(undefined4 *)(plVar13[1] + 0x28));
    }
    uVar19 = *(ulonglong *)(uVar21 + 0xe08);
    uVar20 = *(ulonglong *)(uVar21 + 0xe10);
    uVar1 = *(ulonglong *)(uVar21 + 0xe18);
    *(ulonglong *)(param_2 + 0x98) = *(ulonglong *)(param_2 + 0x98) | *(ulonglong *)(uVar21 + 0xe00)
    ;
    *(ulonglong *)(param_2 + 0xa0) = *(ulonglong *)(param_2 + 0xa0) | uVar19;
    *(ulonglong *)(param_2 + 0xa8) = *(ulonglong *)(param_2 + 0xa8) | uVar20;
    *(ulonglong *)(param_2 + 0xb0) = *(ulonglong *)(param_2 + 0xb0) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xe28);
    uVar20 = *(ulonglong *)(uVar21 + 0xe30);
    uVar1 = *(ulonglong *)(uVar21 + 0xe38);
    *(ulonglong *)(param_2 + 0xb8) = *(ulonglong *)(uVar21 + 0xe20) | *(ulonglong *)(param_2 + 0xb8)
    ;
    *(ulonglong *)(param_2 + 0xc0) = uVar19 | *(ulonglong *)(param_2 + 0xc0);
    *(ulonglong *)(param_2 + 200) = uVar20 | *(ulonglong *)(param_2 + 200);
    *(ulonglong *)(param_2 + 0xd0) = uVar1 | *(ulonglong *)(param_2 + 0xd0);
    uVar19 = *(ulonglong *)(uVar21 + 0xe48);
    uVar20 = *(ulonglong *)(uVar21 + 0xe50);
    uVar1 = *(ulonglong *)(uVar21 + 0xe58);
    *(ulonglong *)(param_2 + 0xd8) = *(ulonglong *)(param_2 + 0xd8) | *(ulonglong *)(uVar21 + 0xe40)
    ;
    *(ulonglong *)(param_2 + 0xe0) = *(ulonglong *)(param_2 + 0xe0) | uVar19;
    *(ulonglong *)(param_2 + 0xe8) = *(ulonglong *)(param_2 + 0xe8) | uVar20;
    *(ulonglong *)(param_2 + 0xf0) = *(ulonglong *)(param_2 + 0xf0) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xe68);
    uVar20 = *(ulonglong *)(uVar21 + 0xe70);
    uVar1 = *(ulonglong *)(uVar21 + 0xe78);
    *(ulonglong *)(param_2 + 0xf8) = *(ulonglong *)(param_2 + 0xf8) | *(ulonglong *)(uVar21 + 0xe60)
    ;
    *(ulonglong *)(param_2 + 0x100) = *(ulonglong *)(param_2 + 0x100) | uVar19;
    *(ulonglong *)(param_2 + 0x108) = *(ulonglong *)(param_2 + 0x108) | uVar20;
    *(ulonglong *)(param_2 + 0x110) = *(ulonglong *)(param_2 + 0x110) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xe88);
    uVar20 = *(ulonglong *)(uVar21 + 0xe90);
    uVar1 = *(ulonglong *)(uVar21 + 0xe98);
    *(ulonglong *)(param_2 + 0x118) =
         *(ulonglong *)(param_2 + 0x118) | *(ulonglong *)(uVar21 + 0xe80);
    *(ulonglong *)(param_2 + 0x120) = *(ulonglong *)(param_2 + 0x120) | uVar19;
    *(ulonglong *)(param_2 + 0x128) = *(ulonglong *)(param_2 + 0x128) | uVar20;
    *(ulonglong *)(param_2 + 0x130) = *(ulonglong *)(param_2 + 0x130) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xea8);
    uVar20 = *(ulonglong *)(uVar21 + 0xeb0);
    uVar1 = *(ulonglong *)(uVar21 + 0xeb8);
    *(ulonglong *)(param_2 + 0x138) =
         *(ulonglong *)(param_2 + 0x138) | *(ulonglong *)(uVar21 + 0xea0);
    *(ulonglong *)(param_2 + 0x140) = *(ulonglong *)(param_2 + 0x140) | uVar19;
    *(ulonglong *)(param_2 + 0x148) = *(ulonglong *)(param_2 + 0x148) | uVar20;
    *(ulonglong *)(param_2 + 0x150) = *(ulonglong *)(param_2 + 0x150) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xec8);
    uVar20 = *(ulonglong *)(uVar21 + 0xed0);
    uVar1 = *(ulonglong *)(uVar21 + 0xed8);
    *(ulonglong *)(param_2 + 0x158) =
         *(ulonglong *)(param_2 + 0x158) | *(ulonglong *)(uVar21 + 0xec0);
    *(ulonglong *)(param_2 + 0x160) = *(ulonglong *)(param_2 + 0x160) | uVar19;
    *(ulonglong *)(param_2 + 0x168) = *(ulonglong *)(param_2 + 0x168) | uVar20;
    *(ulonglong *)(param_2 + 0x170) = *(ulonglong *)(param_2 + 0x170) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xee8);
    uVar20 = *(ulonglong *)(uVar21 + 0xef0);
    uVar1 = *(ulonglong *)(uVar21 + 0xef8);
    *(ulonglong *)(param_2 + 0x178) =
         *(ulonglong *)(param_2 + 0x178) | *(ulonglong *)(uVar21 + 0xee0);
    *(ulonglong *)(param_2 + 0x180) = *(ulonglong *)(param_2 + 0x180) | uVar19;
    *(ulonglong *)(param_2 + 0x188) = *(ulonglong *)(param_2 + 0x188) | uVar20;
    *(ulonglong *)(param_2 + 400) = *(ulonglong *)(param_2 + 400) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xf08);
    uVar20 = *(ulonglong *)(uVar21 + 0xf10);
    uVar1 = *(ulonglong *)(uVar21 + 0xf18);
    *(ulonglong *)(param_2 + 0x198) =
         *(ulonglong *)(param_2 + 0x198) | *(ulonglong *)(uVar21 + 0xf00);
    *(ulonglong *)(param_2 + 0x1a0) = *(ulonglong *)(param_2 + 0x1a0) | uVar19;
    *(ulonglong *)(param_2 + 0x1a8) = *(ulonglong *)(param_2 + 0x1a8) | uVar20;
    *(ulonglong *)(param_2 + 0x1b0) = *(ulonglong *)(param_2 + 0x1b0) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xf28);
    uVar20 = *(ulonglong *)(uVar21 + 0xf30);
    uVar1 = *(ulonglong *)(uVar21 + 0xf38);
    *(ulonglong *)(param_2 + 0x1b8) =
         *(ulonglong *)(param_2 + 0x1b8) | *(ulonglong *)(uVar21 + 0xf20);
    *(ulonglong *)(param_2 + 0x1c0) = *(ulonglong *)(param_2 + 0x1c0) | uVar19;
    *(ulonglong *)(param_2 + 0x1c8) = *(ulonglong *)(param_2 + 0x1c8) | uVar20;
    *(ulonglong *)(param_2 + 0x1d0) = *(ulonglong *)(param_2 + 0x1d0) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xf48);
    uVar20 = *(ulonglong *)(uVar21 + 0xf50);
    uVar1 = *(ulonglong *)(uVar21 + 0xf58);
    *(ulonglong *)(param_2 + 0x1d8) =
         *(ulonglong *)(param_2 + 0x1d8) | *(ulonglong *)(uVar21 + 0xf40);
    *(ulonglong *)(param_2 + 0x1e0) = *(ulonglong *)(param_2 + 0x1e0) | uVar19;
    *(ulonglong *)(param_2 + 0x1e8) = *(ulonglong *)(param_2 + 0x1e8) | uVar20;
    *(ulonglong *)(param_2 + 0x1f0) = *(ulonglong *)(param_2 + 0x1f0) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xf68);
    uVar20 = *(ulonglong *)(uVar21 + 0xf70);
    uVar1 = *(ulonglong *)(uVar21 + 0xf78);
    *(ulonglong *)(param_2 + 0x1f8) =
         *(ulonglong *)(param_2 + 0x1f8) | *(ulonglong *)(uVar21 + 0xf60);
    *(ulonglong *)(param_2 + 0x200) = *(ulonglong *)(param_2 + 0x200) | uVar19;
    *(ulonglong *)(param_2 + 0x208) = *(ulonglong *)(param_2 + 0x208) | uVar20;
    *(ulonglong *)(param_2 + 0x210) = *(ulonglong *)(param_2 + 0x210) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xf88);
    uVar20 = *(ulonglong *)(uVar21 + 0xf90);
    uVar1 = *(ulonglong *)(uVar21 + 0xf98);
    *(ulonglong *)(param_2 + 0x218) =
         *(ulonglong *)(param_2 + 0x218) | *(ulonglong *)(uVar21 + 0xf80);
    *(ulonglong *)(param_2 + 0x220) = *(ulonglong *)(param_2 + 0x220) | uVar19;
    *(ulonglong *)(param_2 + 0x228) = *(ulonglong *)(param_2 + 0x228) | uVar20;
    *(ulonglong *)(param_2 + 0x230) = *(ulonglong *)(param_2 + 0x230) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xfa8);
    uVar20 = *(ulonglong *)(uVar21 + 0xfb0);
    uVar1 = *(ulonglong *)(uVar21 + 0xfb8);
    *(ulonglong *)(param_2 + 0x238) =
         *(ulonglong *)(param_2 + 0x238) | *(ulonglong *)(uVar21 + 4000);
    *(ulonglong *)(param_2 + 0x240) = *(ulonglong *)(param_2 + 0x240) | uVar19;
    *(ulonglong *)(param_2 + 0x248) = *(ulonglong *)(param_2 + 0x248) | uVar20;
    *(ulonglong *)(param_2 + 0x250) = *(ulonglong *)(param_2 + 0x250) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xfc8);
    uVar20 = *(ulonglong *)(uVar21 + 0xfd0);
    uVar1 = *(ulonglong *)(uVar21 + 0xfd8);
    *(ulonglong *)(param_2 + 600) = *(ulonglong *)(param_2 + 600) | *(ulonglong *)(uVar21 + 0xfc0);
    *(ulonglong *)(param_2 + 0x260) = *(ulonglong *)(param_2 + 0x260) | uVar19;
    *(ulonglong *)(param_2 + 0x268) = *(ulonglong *)(param_2 + 0x268) | uVar20;
    *(ulonglong *)(param_2 + 0x270) = *(ulonglong *)(param_2 + 0x270) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xfe8);
    uVar20 = *(ulonglong *)(uVar21 + 0xff0);
    uVar1 = *(ulonglong *)(uVar21 + 0xff8);
    *(ulonglong *)(param_2 + 0x278) =
         *(ulonglong *)(param_2 + 0x278) | *(ulonglong *)(uVar21 + 0xfe0);
    *(ulonglong *)(param_2 + 0x280) = *(ulonglong *)(param_2 + 0x280) | uVar19;
    *(ulonglong *)(param_2 + 0x288) = *(ulonglong *)(param_2 + 0x288) | uVar20;
    *(ulonglong *)(param_2 + 0x290) = *(ulonglong *)(param_2 + 0x290) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xc08);
    uVar20 = *(ulonglong *)(uVar21 + 0xc10);
    uVar1 = *(ulonglong *)(uVar21 + 0xc18);
    *(ulonglong *)(param_2 + 0x98) = *(ulonglong *)(param_2 + 0x98) | *(ulonglong *)(uVar21 + 0xc00)
    ;
    *(ulonglong *)(param_2 + 0xa0) = *(ulonglong *)(param_2 + 0xa0) | uVar19;
    *(ulonglong *)(param_2 + 0xa8) = *(ulonglong *)(param_2 + 0xa8) | uVar20;
    *(ulonglong *)(param_2 + 0xb0) = *(ulonglong *)(param_2 + 0xb0) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xc28);
    uVar20 = *(ulonglong *)(uVar21 + 0xc30);
    uVar1 = *(ulonglong *)(uVar21 + 0xc38);
    *(ulonglong *)(param_2 + 0xb8) = *(ulonglong *)(param_2 + 0xb8) | *(ulonglong *)(uVar21 + 0xc20)
    ;
    *(ulonglong *)(param_2 + 0xc0) = *(ulonglong *)(param_2 + 0xc0) | uVar19;
    *(ulonglong *)(param_2 + 200) = *(ulonglong *)(param_2 + 200) | uVar20;
    *(ulonglong *)(param_2 + 0xd0) = *(ulonglong *)(param_2 + 0xd0) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xc48);
    uVar20 = *(ulonglong *)(uVar21 + 0xc50);
    uVar1 = *(ulonglong *)(uVar21 + 0xc58);
    *(ulonglong *)(param_2 + 0xd8) = *(ulonglong *)(param_2 + 0xd8) | *(ulonglong *)(uVar21 + 0xc40)
    ;
    *(ulonglong *)(param_2 + 0xe0) = *(ulonglong *)(param_2 + 0xe0) | uVar19;
    *(ulonglong *)(param_2 + 0xe8) = *(ulonglong *)(param_2 + 0xe8) | uVar20;
    *(ulonglong *)(param_2 + 0xf0) = *(ulonglong *)(param_2 + 0xf0) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xc68);
    uVar20 = *(ulonglong *)(uVar21 + 0xc70);
    uVar1 = *(ulonglong *)(uVar21 + 0xc78);
    *(ulonglong *)(param_2 + 0xf8) = *(ulonglong *)(param_2 + 0xf8) | *(ulonglong *)(uVar21 + 0xc60)
    ;
    *(ulonglong *)(param_2 + 0x100) = *(ulonglong *)(param_2 + 0x100) | uVar19;
    *(ulonglong *)(param_2 + 0x108) = *(ulonglong *)(param_2 + 0x108) | uVar20;
    *(ulonglong *)(param_2 + 0x110) = *(ulonglong *)(param_2 + 0x110) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xc88);
    uVar20 = *(ulonglong *)(uVar21 + 0xc90);
    uVar1 = *(ulonglong *)(uVar21 + 0xc98);
    *(ulonglong *)(param_2 + 0x118) =
         *(ulonglong *)(param_2 + 0x118) | *(ulonglong *)(uVar21 + 0xc80);
    *(ulonglong *)(param_2 + 0x120) = *(ulonglong *)(param_2 + 0x120) | uVar19;
    *(ulonglong *)(param_2 + 0x128) = *(ulonglong *)(param_2 + 0x128) | uVar20;
    *(ulonglong *)(param_2 + 0x130) = *(ulonglong *)(param_2 + 0x130) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xca8);
    uVar20 = *(ulonglong *)(uVar21 + 0xcb0);
    uVar1 = *(ulonglong *)(uVar21 + 0xcb8);
    *(ulonglong *)(param_2 + 0x138) =
         *(ulonglong *)(param_2 + 0x138) | *(ulonglong *)(uVar21 + 0xca0);
    *(ulonglong *)(param_2 + 0x140) = *(ulonglong *)(param_2 + 0x140) | uVar19;
    *(ulonglong *)(param_2 + 0x148) = *(ulonglong *)(param_2 + 0x148) | uVar20;
    *(ulonglong *)(param_2 + 0x150) = *(ulonglong *)(param_2 + 0x150) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xcc8);
    uVar20 = *(ulonglong *)(uVar21 + 0xcd0);
    uVar1 = *(ulonglong *)(uVar21 + 0xcd8);
    *(ulonglong *)(param_2 + 0x158) =
         *(ulonglong *)(param_2 + 0x158) | *(ulonglong *)(uVar21 + 0xcc0);
    *(ulonglong *)(param_2 + 0x160) = *(ulonglong *)(param_2 + 0x160) | uVar19;
    *(ulonglong *)(param_2 + 0x168) = *(ulonglong *)(param_2 + 0x168) | uVar20;
    *(ulonglong *)(param_2 + 0x170) = *(ulonglong *)(param_2 + 0x170) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xce8);
    uVar20 = *(ulonglong *)(uVar21 + 0xcf0);
    uVar1 = *(ulonglong *)(uVar21 + 0xcf8);
    *(ulonglong *)(param_2 + 0x178) =
         *(ulonglong *)(param_2 + 0x178) | *(ulonglong *)(uVar21 + 0xce0);
    *(ulonglong *)(param_2 + 0x180) = *(ulonglong *)(param_2 + 0x180) | uVar19;
    *(ulonglong *)(param_2 + 0x188) = *(ulonglong *)(param_2 + 0x188) | uVar20;
    *(ulonglong *)(param_2 + 400) = *(ulonglong *)(param_2 + 400) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xd08);
    uVar20 = *(ulonglong *)(uVar21 + 0xd10);
    uVar1 = *(ulonglong *)(uVar21 + 0xd18);
    *(ulonglong *)(param_2 + 0x198) =
         *(ulonglong *)(param_2 + 0x198) | *(ulonglong *)(uVar21 + 0xd00);
    *(ulonglong *)(param_2 + 0x1a0) = *(ulonglong *)(param_2 + 0x1a0) | uVar19;
    *(ulonglong *)(param_2 + 0x1a8) = *(ulonglong *)(param_2 + 0x1a8) | uVar20;
    *(ulonglong *)(param_2 + 0x1b0) = *(ulonglong *)(param_2 + 0x1b0) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xd28);
    uVar20 = *(ulonglong *)(uVar21 + 0xd30);
    uVar1 = *(ulonglong *)(uVar21 + 0xd38);
    *(ulonglong *)(param_2 + 0x1b8) =
         *(ulonglong *)(param_2 + 0x1b8) | *(ulonglong *)(uVar21 + 0xd20);
    *(ulonglong *)(param_2 + 0x1c0) = *(ulonglong *)(param_2 + 0x1c0) | uVar19;
    *(ulonglong *)(param_2 + 0x1c8) = *(ulonglong *)(param_2 + 0x1c8) | uVar20;
    *(ulonglong *)(param_2 + 0x1d0) = *(ulonglong *)(param_2 + 0x1d0) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xd48);
    uVar20 = *(ulonglong *)(uVar21 + 0xd50);
    uVar1 = *(ulonglong *)(uVar21 + 0xd58);
    *(ulonglong *)(param_2 + 0x1d8) =
         *(ulonglong *)(param_2 + 0x1d8) | *(ulonglong *)(uVar21 + 0xd40);
    *(ulonglong *)(param_2 + 0x1e0) = *(ulonglong *)(param_2 + 0x1e0) | uVar19;
    *(ulonglong *)(param_2 + 0x1e8) = *(ulonglong *)(param_2 + 0x1e8) | uVar20;
    *(ulonglong *)(param_2 + 0x1f0) = *(ulonglong *)(param_2 + 0x1f0) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xd68);
    uVar20 = *(ulonglong *)(uVar21 + 0xd70);
    uVar1 = *(ulonglong *)(uVar21 + 0xd78);
    *(ulonglong *)(param_2 + 0x1f8) =
         *(ulonglong *)(param_2 + 0x1f8) | *(ulonglong *)(uVar21 + 0xd60);
    *(ulonglong *)(param_2 + 0x200) = *(ulonglong *)(param_2 + 0x200) | uVar19;
    *(ulonglong *)(param_2 + 0x208) = *(ulonglong *)(param_2 + 0x208) | uVar20;
    *(ulonglong *)(param_2 + 0x210) = *(ulonglong *)(param_2 + 0x210) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xd88);
    uVar20 = *(ulonglong *)(uVar21 + 0xd90);
    uVar1 = *(ulonglong *)(uVar21 + 0xd98);
    *(ulonglong *)(param_2 + 0x218) =
         *(ulonglong *)(param_2 + 0x218) | *(ulonglong *)(uVar21 + 0xd80);
    *(ulonglong *)(param_2 + 0x220) = *(ulonglong *)(param_2 + 0x220) | uVar19;
    *(ulonglong *)(param_2 + 0x228) = *(ulonglong *)(param_2 + 0x228) | uVar20;
    *(ulonglong *)(param_2 + 0x230) = *(ulonglong *)(param_2 + 0x230) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xda8);
    uVar20 = *(ulonglong *)(uVar21 + 0xdb0);
    uVar1 = *(ulonglong *)(uVar21 + 0xdb8);
    *(ulonglong *)(param_2 + 0x238) =
         *(ulonglong *)(param_2 + 0x238) | *(ulonglong *)(uVar21 + 0xda0);
    *(ulonglong *)(param_2 + 0x240) = *(ulonglong *)(param_2 + 0x240) | uVar19;
    *(ulonglong *)(param_2 + 0x248) = *(ulonglong *)(param_2 + 0x248) | uVar20;
    *(ulonglong *)(param_2 + 0x250) = *(ulonglong *)(param_2 + 0x250) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xdc8);
    uVar20 = *(ulonglong *)(uVar21 + 0xdd0);
    uVar1 = *(ulonglong *)(uVar21 + 0xdd8);
    *(ulonglong *)(param_2 + 600) = *(ulonglong *)(param_2 + 600) | *(ulonglong *)(uVar21 + 0xdc0);
    *(ulonglong *)(param_2 + 0x260) = *(ulonglong *)(param_2 + 0x260) | uVar19;
    *(ulonglong *)(param_2 + 0x268) = *(ulonglong *)(param_2 + 0x268) | uVar20;
    *(ulonglong *)(param_2 + 0x270) = *(ulonglong *)(param_2 + 0x270) | uVar1;
    uVar19 = *(ulonglong *)(uVar21 + 0xde8);
    uVar20 = *(ulonglong *)(uVar21 + 0xdf0);
    uVar1 = *(ulonglong *)(uVar21 + 0xdf8);
    *(ulonglong *)(param_2 + 0x278) =
         *(ulonglong *)(param_2 + 0x278) | *(ulonglong *)(uVar21 + 0xde0);
    *(ulonglong *)(param_2 + 0x280) = *(ulonglong *)(param_2 + 0x280) | uVar19;
    *(ulonglong *)(param_2 + 0x288) = *(ulonglong *)(param_2 + 0x288) | uVar20;
    *(ulonglong *)(param_2 + 0x290) = *(ulonglong *)(param_2 + 0x290) | uVar1;
    uVar6 = *(undefined8 *)(uVar21 + 0xe00);
    uVar8 = *(undefined8 *)(uVar21 + 0xe08);
    uVar9 = *(undefined8 *)(uVar21 + 0xe10);
    uVar10 = *(undefined8 *)(uVar21 + 0xe18);
    *(undefined8 *)(uVar21 + 0xe00) = *(undefined8 *)(uVar21 + 0xc00);
    *(undefined8 *)(uVar21 + 0xe08) = *(undefined8 *)(uVar21 + 0xc08);
    *(undefined8 *)(uVar21 + 0xe10) = *(undefined8 *)(uVar21 + 0xc10);
    *(undefined8 *)(uVar21 + 0xe18) = *(undefined8 *)(uVar21 + 0xc18);
    *(undefined8 *)(uVar21 + 0xc00) = uVar6;
    *(undefined8 *)(uVar21 + 0xc08) = uVar8;
    *(undefined8 *)(uVar21 + 0xc10) = uVar9;
    *(undefined8 *)(uVar21 + 0xc18) = uVar10;
    uVar6 = *(undefined8 *)(uVar21 + 0xe20);
    uVar8 = *(undefined8 *)(uVar21 + 0xe28);
    uVar9 = *(undefined8 *)(uVar21 + 0xe30);
    uVar10 = *(undefined8 *)(uVar21 + 0xe38);
    *(undefined8 *)(uVar21 + 0xe20) = *(undefined8 *)(uVar21 + 0xc20);
    *(undefined8 *)(uVar21 + 0xe28) = *(undefined8 *)(uVar21 + 0xc28);
    *(undefined8 *)(uVar21 + 0xe30) = *(undefined8 *)(uVar21 + 0xc30);
    *(undefined8 *)(uVar21 + 0xe38) = *(undefined8 *)(uVar21 + 0xc38);
    *(undefined8 *)(uVar21 + 0xc20) = uVar6;
    *(undefined8 *)(uVar21 + 0xc28) = uVar8;
    *(undefined8 *)(uVar21 + 0xc30) = uVar9;
    *(undefined8 *)(uVar21 + 0xc38) = uVar10;
    uVar6 = *(undefined8 *)(uVar21 + 0xe40);
    uVar8 = *(undefined8 *)(uVar21 + 0xe48);
    uVar9 = *(undefined8 *)(uVar21 + 0xe50);
    uVar10 = *(undefined8 *)(uVar21 + 0xe58);
    *(undefined8 *)(uVar21 + 0xe40) = *(undefined8 *)(uVar21 + 0xc40);
    *(undefined8 *)(uVar21 + 0xe48) = *(undefined8 *)(uVar21 + 0xc48);
    *(undefined8 *)(uVar21 + 0xe50) = *(undefined8 *)(uVar21 + 0xc50);
    *(undefined8 *)(uVar21 + 0xe58) = *(undefined8 *)(uVar21 + 0xc58);
    *(undefined8 *)(uVar21 + 0xc40) = uVar6;
    *(undefined8 *)(uVar21 + 0xc48) = uVar8;
    *(undefined8 *)(uVar21 + 0xc50) = uVar9;
    *(undefined8 *)(uVar21 + 0xc58) = uVar10;
    uVar6 = *(undefined8 *)(uVar21 + 0xe60);
    uVar8 = *(undefined8 *)(uVar21 + 0xe68);
    uVar9 = *(undefined8 *)(uVar21 + 0xe70);
    uVar10 = *(undefined8 *)(uVar21 + 0xe78);
    *(undefined8 *)(uVar21 + 0xe60) = *(undefined8 *)(uVar21 + 0xc60);
    *(undefined8 *)(uVar21 + 0xe68) = *(undefined8 *)(uVar21 + 0xc68);
    *(undefined8 *)(uVar21 + 0xe70) = *(undefined8 *)(uVar21 + 0xc70);
    *(undefined8 *)(uVar21 + 0xe78) = *(undefined8 *)(uVar21 + 0xc78);
    *(undefined8 *)(uVar21 + 0xc60) = uVar6;
    *(undefined8 *)(uVar21 + 0xc68) = uVar8;
    *(undefined8 *)(uVar21 + 0xc70) = uVar9;
    *(undefined8 *)(uVar21 + 0xc78) = uVar10;
    uVar6 = *(undefined8 *)(uVar21 + 0xe80);
    uVar8 = *(undefined8 *)(uVar21 + 0xe88);
    uVar9 = *(undefined8 *)(uVar21 + 0xe90);
    uVar10 = *(undefined8 *)(uVar21 + 0xe98);
    *(undefined8 *)(uVar21 + 0xe80) = *(undefined8 *)(uVar21 + 0xc80);
    *(undefined8 *)(uVar21 + 0xe88) = *(undefined8 *)(uVar21 + 0xc88);
    *(undefined8 *)(uVar21 + 0xe90) = *(undefined8 *)(uVar21 + 0xc90);
    *(undefined8 *)(uVar21 + 0xe98) = *(undefined8 *)(uVar21 + 0xc98);
    *(undefined8 *)(uVar21 + 0xc80) = uVar6;
    *(undefined8 *)(uVar21 + 0xc88) = uVar8;
    *(undefined8 *)(uVar21 + 0xc90) = uVar9;
    *(undefined8 *)(uVar21 + 0xc98) = uVar10;
    uVar6 = *(undefined8 *)(uVar21 + 0xea0);
    uVar8 = *(undefined8 *)(uVar21 + 0xea8);
    uVar9 = *(undefined8 *)(uVar21 + 0xeb0);
    uVar10 = *(undefined8 *)(uVar21 + 0xeb8);
    *(undefined8 *)(uVar21 + 0xea0) = *(undefined8 *)(uVar21 + 0xca0);
    *(undefined8 *)(uVar21 + 0xea8) = *(undefined8 *)(uVar21 + 0xca8);
    *(undefined8 *)(uVar21 + 0xeb0) = *(undefined8 *)(uVar21 + 0xcb0);
    *(undefined8 *)(uVar21 + 0xeb8) = *(undefined8 *)(uVar21 + 0xcb8);
    *(undefined8 *)(uVar21 + 0xca0) = uVar6;
    *(undefined8 *)(uVar21 + 0xca8) = uVar8;
    *(undefined8 *)(uVar21 + 0xcb0) = uVar9;
    *(undefined8 *)(uVar21 + 0xcb8) = uVar10;
    uVar6 = *(undefined8 *)(uVar21 + 0xec0);
    uVar8 = *(undefined8 *)(uVar21 + 0xec8);
    uVar9 = *(undefined8 *)(uVar21 + 0xed0);
    uVar10 = *(undefined8 *)(uVar21 + 0xed8);
    *(undefined8 *)(uVar21 + 0xec0) = *(undefined8 *)(uVar21 + 0xcc0);
    *(undefined8 *)(uVar21 + 0xec8) = *(undefined8 *)(uVar21 + 0xcc8);
    *(undefined8 *)(uVar21 + 0xed0) = *(undefined8 *)(uVar21 + 0xcd0);
    *(undefined8 *)(uVar21 + 0xed8) = *(undefined8 *)(uVar21 + 0xcd8);
    *(undefined8 *)(uVar21 + 0xcc0) = uVar6;
    *(undefined8 *)(uVar21 + 0xcc8) = uVar8;
    *(undefined8 *)(uVar21 + 0xcd0) = uVar9;
    *(undefined8 *)(uVar21 + 0xcd8) = uVar10;
    uVar6 = *(undefined8 *)(uVar21 + 0xee0);
    uVar8 = *(undefined8 *)(uVar21 + 0xee8);
    uVar9 = *(undefined8 *)(uVar21 + 0xef0);
    uVar10 = *(undefined8 *)(uVar21 + 0xef8);
    *(undefined8 *)(uVar21 + 0xee0) = *(undefined8 *)(uVar21 + 0xce0);
    *(undefined8 *)(uVar21 + 0xee8) = *(undefined8 *)(uVar21 + 0xce8);
    *(undefined8 *)(uVar21 + 0xef0) = *(undefined8 *)(uVar21 + 0xcf0);
    *(undefined8 *)(uVar21 + 0xef8) = *(undefined8 *)(uVar21 + 0xcf8);
    *(undefined8 *)(uVar21 + 0xce0) = uVar6;
    *(undefined8 *)(uVar21 + 0xce8) = uVar8;
    *(undefined8 *)(uVar21 + 0xcf0) = uVar9;
    *(undefined8 *)(uVar21 + 0xcf8) = uVar10;
    uVar6 = *(undefined8 *)(uVar21 + 0xf00);
    uVar8 = *(undefined8 *)(uVar21 + 0xf08);
    uVar9 = *(undefined8 *)(uVar21 + 0xf10);
    uVar10 = *(undefined8 *)(uVar21 + 0xf18);
    *(undefined8 *)(uVar21 + 0xf00) = *(undefined8 *)(uVar21 + 0xd00);
    *(undefined8 *)(uVar21 + 0xf08) = *(undefined8 *)(uVar21 + 0xd08);
    *(undefined8 *)(uVar21 + 0xf10) = *(undefined8 *)(uVar21 + 0xd10);
    *(undefined8 *)(uVar21 + 0xf18) = *(undefined8 *)(uVar21 + 0xd18);
    *(undefined8 *)(uVar21 + 0xd00) = uVar6;
    *(undefined8 *)(uVar21 + 0xd08) = uVar8;
    *(undefined8 *)(uVar21 + 0xd10) = uVar9;
    *(undefined8 *)(uVar21 + 0xd18) = uVar10;
    uVar6 = *(undefined8 *)(uVar21 + 0xf20);
    uVar8 = *(undefined8 *)(uVar21 + 0xf28);
    uVar9 = *(undefined8 *)(uVar21 + 0xf30);
    uVar10 = *(undefined8 *)(uVar21 + 0xf38);
    *(undefined8 *)(uVar21 + 0xf20) = *(undefined8 *)(uVar21 + 0xd20);
    *(undefined8 *)(uVar21 + 0xf28) = *(undefined8 *)(uVar21 + 0xd28);
    *(undefined8 *)(uVar21 + 0xf30) = *(undefined8 *)(uVar21 + 0xd30);
    *(undefined8 *)(uVar21 + 0xf38) = *(undefined8 *)(uVar21 + 0xd38);
    *(undefined8 *)(uVar21 + 0xd20) = uVar6;
    *(undefined8 *)(uVar21 + 0xd28) = uVar8;
    *(undefined8 *)(uVar21 + 0xd30) = uVar9;
    *(undefined8 *)(uVar21 + 0xd38) = uVar10;
    uVar6 = *(undefined8 *)(uVar21 + 0xf40);
    uVar8 = *(undefined8 *)(uVar21 + 0xf48);
    uVar9 = *(undefined8 *)(uVar21 + 0xf50);
    uVar10 = *(undefined8 *)(uVar21 + 0xf58);
    *(undefined8 *)(uVar21 + 0xf40) = *(undefined8 *)(uVar21 + 0xd40);
    *(undefined8 *)(uVar21 + 0xf48) = *(undefined8 *)(uVar21 + 0xd48);
    *(undefined8 *)(uVar21 + 0xf50) = *(undefined8 *)(uVar21 + 0xd50);
    *(undefined8 *)(uVar21 + 0xf58) = *(undefined8 *)(uVar21 + 0xd58);
    *(undefined8 *)(uVar21 + 0xd40) = uVar6;
    *(undefined8 *)(uVar21 + 0xd48) = uVar8;
    *(undefined8 *)(uVar21 + 0xd50) = uVar9;
    *(undefined8 *)(uVar21 + 0xd58) = uVar10;
    uVar6 = *(undefined8 *)(uVar21 + 0xf60);
    uVar8 = *(undefined8 *)(uVar21 + 0xf68);
    uVar9 = *(undefined8 *)(uVar21 + 0xf70);
    uVar10 = *(undefined8 *)(uVar21 + 0xf78);
    *(undefined8 *)(uVar21 + 0xf60) = *(undefined8 *)(uVar21 + 0xd60);
    *(undefined8 *)(uVar21 + 0xf68) = *(undefined8 *)(uVar21 + 0xd68);
    *(undefined8 *)(uVar21 + 0xf70) = *(undefined8 *)(uVar21 + 0xd70);
    *(undefined8 *)(uVar21 + 0xf78) = *(undefined8 *)(uVar21 + 0xd78);
    *(undefined8 *)(uVar21 + 0xd60) = uVar6;
    *(undefined8 *)(uVar21 + 0xd68) = uVar8;
    *(undefined8 *)(uVar21 + 0xd70) = uVar9;
    *(undefined8 *)(uVar21 + 0xd78) = uVar10;
    uVar6 = *(undefined8 *)(uVar21 + 0xf80);
    uVar8 = *(undefined8 *)(uVar21 + 0xf88);
    uVar9 = *(undefined8 *)(uVar21 + 0xf90);
    uVar10 = *(undefined8 *)(uVar21 + 0xf98);
    *(undefined8 *)(uVar21 + 0xf80) = *(undefined8 *)(uVar21 + 0xd80);
    *(undefined8 *)(uVar21 + 0xf88) = *(undefined8 *)(uVar21 + 0xd88);
    *(undefined8 *)(uVar21 + 0xf90) = *(undefined8 *)(uVar21 + 0xd90);
    *(undefined8 *)(uVar21 + 0xf98) = *(undefined8 *)(uVar21 + 0xd98);
    *(undefined8 *)(uVar21 + 0xd80) = uVar6;
    *(undefined8 *)(uVar21 + 0xd88) = uVar8;
    *(undefined8 *)(uVar21 + 0xd90) = uVar9;
    *(undefined8 *)(uVar21 + 0xd98) = uVar10;
    uVar6 = *(undefined8 *)(uVar21 + 4000);
    uVar8 = *(undefined8 *)(uVar21 + 0xfa8);
    uVar9 = *(undefined8 *)(uVar21 + 0xfb0);
    uVar10 = *(undefined8 *)(uVar21 + 0xfb8);
    *(undefined8 *)(uVar21 + 4000) = *(undefined8 *)(uVar21 + 0xda0);
    *(undefined8 *)(uVar21 + 0xfa8) = *(undefined8 *)(uVar21 + 0xda8);
    *(undefined8 *)(uVar21 + 0xfb0) = *(undefined8 *)(uVar21 + 0xdb0);
    *(undefined8 *)(uVar21 + 0xfb8) = *(undefined8 *)(uVar21 + 0xdb8);
    *(undefined8 *)(uVar21 + 0xda0) = uVar6;
    *(undefined8 *)(uVar21 + 0xda8) = uVar8;
    *(undefined8 *)(uVar21 + 0xdb0) = uVar9;
    *(undefined8 *)(uVar21 + 0xdb8) = uVar10;
    uVar6 = *(undefined8 *)(uVar21 + 0xfc0);
    uVar8 = *(undefined8 *)(uVar21 + 0xfc8);
    uVar9 = *(undefined8 *)(uVar21 + 0xfd0);
    uVar10 = *(undefined8 *)(uVar21 + 0xfd8);
    *(undefined8 *)(uVar21 + 0xfc0) = *(undefined8 *)(uVar21 + 0xdc0);
    *(undefined8 *)(uVar21 + 0xfc8) = *(undefined8 *)(uVar21 + 0xdc8);
    *(undefined8 *)(uVar21 + 0xfd0) = *(undefined8 *)(uVar21 + 0xdd0);
    *(undefined8 *)(uVar21 + 0xfd8) = *(undefined8 *)(uVar21 + 0xdd8);
    *(undefined8 *)(uVar21 + 0xdc0) = uVar6;
    *(undefined8 *)(uVar21 + 0xdc8) = uVar8;
    *(undefined8 *)(uVar21 + 0xdd0) = uVar9;
    *(undefined8 *)(uVar21 + 0xdd8) = uVar10;
    uVar6 = *(undefined8 *)(uVar21 + 0xfe0);
    uVar8 = *(undefined8 *)(uVar21 + 0xfe8);
    uVar9 = *(undefined8 *)(uVar21 + 0xff0);
    uVar10 = *(undefined8 *)(uVar21 + 0xff8);
    *(undefined8 *)(uVar21 + 0xfe0) = *(undefined8 *)(uVar21 + 0xde0);
    *(undefined8 *)(uVar21 + 0xfe8) = *(undefined8 *)(uVar21 + 0xde8);
    *(undefined8 *)(uVar21 + 0xff0) = *(undefined8 *)(uVar21 + 0xdf0);
    *(undefined8 *)(uVar21 + 0xff8) = *(undefined8 *)(uVar21 + 0xdf8);
    *(undefined8 *)(uVar21 + 0xde0) = uVar6;
    *(undefined8 *)(uVar21 + 0xde8) = uVar8;
    *(undefined8 *)(uVar21 + 0xdf0) = uVar9;
    *(undefined8 *)(uVar21 + 0xdf8) = uVar10;
    pdb_140a79940(param_2);
    lVar28 = (longlong)puStack_a0 + uVar26 * 0xc;
    pdb_140a79030(param_2,1,puStack_a0,lVar28,CONCAT44(uVar38,uVar37),uVar27,
                  *(undefined4 *)(plVar13[1] + 0x10),*(undefined4 *)(plVar13[1] + 0x14));
    puVar15 = (undefined8 *)pdb_140bf45b0(uVar17,&UNK_14331c858);
    if ((puVar15 == (undefined8 *)0x0) ||
       (lVar18 = (**(code **)(puVar15[1] + 0x18))(*puVar15), lVar18 == 0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14305a890);
    }
    pdb_140a78ae0(param_2,1,*(undefined8 *)(lVar18 + 8),*(undefined8 *)(lVar18 + 0x10));
    auStack_140._0_4_ = 0;
    if ((uVar26 != 0) && ((undefined8 *)(lVar28 + -0xc) != (undefined8 *)0x0)) {
      uStack_134 = *(undefined4 *)(lVar28 + -4);
      uVar6 = *(undefined8 *)(lVar28 + -0xc);
      auStack_140._4_4_ = (undefined4)uVar6;
      uStack_138 = (undefined4)((ulonglong)uVar6 >> 0x20);
      auStack_140._0_4_ = 1;
    }
    if (*(longlong *)(plVar13[1] + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_14305a8a8);
    }
    lVar28 = *(longlong *)(plVar13[1] + 0x18);
    pbStack_100 = (byte *)CONCAT44(pbStack_100._4_4_,*(undefined4 *)(lVar28 + 0x18));
    pbStack_108 = *(byte **)(lVar28 + 0x10);
    ppbVar16 = &pbStack_108;
    if (auStack_140._0_4_ != 0) {
      ppbVar16 = (byte **)(auStack_140 + 4);
    }
    pbVar29 = *ppbVar16;
    uVar38 = *(undefined4 *)(ppbVar16 + 1);
    if (*(char *)((longlong)plVar13 + 0x1a) != '\0') {
      plVar14 = *(longlong **)(param_5 + 8);
      if (plVar14 == (longlong *)0x0) {
        plVar14 = *(longlong **)(param_5 + 0x10);
      }
      lVar28 = plVar14[2];
      if ((ulonglong)(*plVar14 - lVar28) < 0x20) {
        pdb_142d7f1b0(plVar14,lVar28,0x20,1,1);
      }
      lVar18 = plVar14[1];
      *(code **)(lVar18 + lVar28) = pdb_14160c3a0;
      *(byte **)(lVar18 + 8 + lVar28) = pbVar29;
      *(undefined4 *)(lVar18 + 0x10 + lVar28) = uVar38;
      *(undefined4 *)(lVar18 + 0x14 + lVar28) = uVar37;
      *(undefined1 *)(lVar18 + 0x18 + lVar28) = 1;
      *(undefined2 *)(lVar18 + 0x1c + lVar28) = 0x301;
      plVar14[2] = lVar28 + 0x20;
    }
    if (_DAT_142e36f28 <= fVar36) {
      if ((char)plVar13[3] == '\0') {
        pdb_140a79cd0(param_2);
      }
      if (puStack_a8 != (ulonglong *)0x0) {
        pub_1406abac0((byte *)puStack_a0,(longlong)puStack_a8 * 0xc,4);
      }
      goto LAB_140b65bf2;
    }
    if (puStack_a8 != (ulonglong *)0x0) {
      pub_1406abac0((byte *)puStack_a0,(longlong)puStack_a8 * 0xc,4);
    }
  }
LAB_140b65c1c:
  uVar17 = (ulonglong)puStack_168 >> 1;
  if (uVar17 != 0) {
    if (puStack_168 < (ulonglong *)0x8) {
      uVar21 = 0;
    }
    else {
      uVar21 = uVar17 & 0xfffffffffffffffc;
      pauVar24 = (undefined1 (*) [16])(puStack_170 + 2);
      lVar28 = 0;
      do {
        auVar33 = pauVar24[-1];
        auVar4 = *pauVar24;
        auVar32 = *(undefined1 (*) [16])(puStack_170 + (longlong)puStack_168 + lVar28 + -4);
        auVar34 = *(undefined1 (*) [16])(puStack_170 + (longlong)puStack_168 + lVar28 + -2);
        auVar35._0_8_ = auVar34._8_8_;
        auVar35._8_4_ = auVar34._0_4_;
        auVar35._12_4_ = auVar34._4_4_;
        auVar34._0_8_ = auVar32._8_8_;
        auVar34._8_4_ = auVar32._0_4_;
        auVar34._12_4_ = auVar32._4_4_;
        pauVar24[-1] = auVar35;
        *pauVar24 = auVar34;
        auVar32._0_8_ = auVar33._8_8_;
        auVar32._8_4_ = auVar33._0_4_;
        auVar32._12_4_ = auVar33._4_4_;
        auVar33._0_8_ = auVar4._8_8_;
        auVar33._8_4_ = auVar4._0_4_;
        auVar33._12_4_ = auVar4._4_4_;
        *(undefined1 (*) [16])(puStack_170 + (longlong)puStack_168 + lVar28 + -2) = auVar32;
        *(undefined1 (*) [16])(puStack_170 + (longlong)puStack_168 + lVar28 + -4) = auVar33;
        lVar28 = lVar28 + -4;
        pauVar24 = pauVar24 + 2;
      } while (-lVar28 != (uVar17 & 0xfffffffffffffffc));
      if (uVar17 == uVar21) goto joined_r0x000140b65c5c;
    }
    puVar23 = puStack_170 + uVar21;
    lVar28 = -uVar21;
    do {
      uVar21 = *puVar23;
      *puVar23 = puStack_170[(longlong)puStack_168 + lVar28 + -1];
      puStack_170[(longlong)puStack_168 + lVar28 + -1] = uVar21;
      lVar28 = lVar28 + -1;
      puVar23 = puVar23 + 1;
    } while (-lVar28 != uVar17);
  }
joined_r0x000140b65c5c:
  puStack_a8 = puStack_178;
  puStack_a0 = puStack_170;
  if (puStack_168 != (ulonglong *)0x0) {
    puVar23 = puStack_170 + (longlong)puStack_168;
    puVar30 = puStack_170;
    do {
      puVar11 = puStack_b8;
      uVar17 = *puVar30;
      uVar21 = *(ulonglong *)((longlong)puStack_b8 + 0x10);
      if (uVar21 <= uVar17) {
LAB_140b6604f:
        pdb_142dc7ef8(uVar17,uVar21,&UNK_14305a8c0);
        goto LAB_140b660e9;
      }
      lVar28 = *(longlong *)((longlong)puStack_b8 + 8);
      lVar18 = uVar17 * 0x30;
      cVar5 = *(char *)(lVar28 + lVar18);
      puVar15 = (undefined8 *)(lVar28 + 0x20 + lVar18);
      uVar6 = puVar15[1];
      uStack_e8 = (undefined7)((ulonglong)*puVar15 >> 8);
      uStack_e1 = (undefined1)uVar6;
      uStack_e0 = (undefined7)((ulonglong)uVar6 >> 8);
      puVar15 = (undefined8 *)(lVar28 + 0x11 + lVar18);
      pbStack_f8 = (byte *)*puVar15;
      uVar6 = puVar15[1];
      uStack_f0 = (undefined7)uVar6;
      uStack_e9 = (undefined1)((ulonglong)uVar6 >> 0x38);
      plVar13 = (longlong *)(lVar28 + 1 + lVar18);
      pbStack_108 = (byte *)*plVar13;
      pbStack_100 = (byte *)plVar13[1];
      pub_142e32770(lVar28 + lVar18,lVar18 + lVar28 + 0x30,(~uVar17 + uVar21) * 0x30);
      uVar21 = uVar21 - 1;
      *(ulonglong *)((longlong)puVar11 + 0x10) = uVar21;
      if (cVar5 == '\f') goto LAB_140b6604f;
      uStack_118 = CONCAT71(uStack_e0,uStack_e1);
      uStack_11f = uStack_e8;
      uStack_130._1_3_ = SUB83(pbStack_f8,0);
      uStack_12c = (undefined2)((ulonglong)pbStack_f8 >> 0x18);
      uStack_12a = (undefined2)((ulonglong)pbStack_f8 >> 0x28);
      uStack_128 = (undefined1)((ulonglong)pbStack_f8 >> 0x38);
      uStack_127 = uStack_f0;
      uStack_120 = uStack_e9;
      auStack_140._1_3_ = SUB83(pbStack_108,0);
      auStack_140[0] = cVar5;
      auStack_140._4_4_ = (undefined4)((ulonglong)pbStack_108 >> 0x18);
      uStack_138._0_1_ = (undefined1)((ulonglong)pbStack_108 >> 0x38);
      uStack_138._1_3_ = SUB83(pbStack_100,0);
      uStack_134 = (undefined4)((ulonglong)pbStack_100 >> 0x18);
      uStack_130._0_1_ = (undefined1)((ulonglong)pbStack_100 >> 0x38);
      pdb_140b673e0(auStack_140);
      puVar30 = puVar30 + 1;
    } while (puVar30 != puVar23);
  }
  if (puStack_a8 != (ulonglong *)0x0) {
    pub_1406abac0((byte *)puStack_a0,(longlong)puStack_a8 << 3,8);
  }
  puStack_a0 = puStack_180;
LAB_140b65e45:
  puStack_b8 = (ulonglong *)0x0;
  pbVar29 = pbStack_188;
  puStack_180 = puStack_a0;
  puStack_a8 = (ulonglong *)pbStack_188;
  while (puStack_a0 != puStack_b8) {
    puStack_b8 = (ulonglong *)((longlong)puStack_b8 + 1);
    pdb_14099c550(pbVar29);
    pbVar29 = pbVar29 + 0x30;
  }
  if (lStack_190 != 0) {
    pub_1406abac0((byte *)puStack_a8,lStack_190 * 0x30,8);
  }
  return;
}

