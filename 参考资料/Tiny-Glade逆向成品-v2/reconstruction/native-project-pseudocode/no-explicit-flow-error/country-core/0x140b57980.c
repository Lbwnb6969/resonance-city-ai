// VA 0x140b57980, PDB extent 10382 bytes
// country_core::systems::history::replay_raster::replay_raster<country_core::resources::world_raster_defs::GardenRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::history::replay_garden::replay_garden::closure_env$2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::history::replay_raster::replay_raster<country_core::resources::world_raster_defs::GardenRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::history::replay_garden::replay_garden::closure_env$2>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_raster.rs
   Extent: 10382 */

void pdb_140b57980(ulonglong *param_1,longlong param_2,code *param_3,code *param_4,longlong *param_5
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
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 (*pauVar23) [16];
  ulonglong *puVar24;
  undefined1 uVar25;
  byte *pbVar26;
  longlong lVar27;
  longlong lVar28;
  byte *pbVar29;
  ulonglong uVar30;
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
  uVar21 = param_1[8];
  puVar16 = (ulonglong *)param_1[0xc];
  uVar6 = param_1[0x10];
  fVar31 = *(float *)(puVar16 + 5);
  lStack_188 = 0;
  pbStack_180 = (byte *)0x8;
  puStack_178 = (ulonglong *)0x0;
  *(undefined4 *)param_1[0xe] = *(undefined4 *)((longlong)param_1 + 0x7c);
  if (puVar16[3] == 0) {
    puStack_a0 = (ulonglong *)0x0;
    goto LAB_140b59685;
  }
  uVar22 = *puVar16;
  if (puVar16[2] < *puVar16) {
    uVar22 = 0;
  }
  uVar30 = puVar16[1];
  lVar18 = (puVar16[2] - uVar22) * 0x40;
  puStack_b8 = (ulonglong *)(uVar30 + lVar18);
  puStack_170 = (ulonglong *)0x0;
  puStack_168 = (ulonglong *)0x8;
  puStack_160 = (ulonglong *)0x0;
  lVar27 = *(longlong *)(uVar30 + 8 + lVar18);
  lVar18 = *(longlong *)(uVar30 + 0x10 + lVar18) * 0x30 + lVar27;
  uVar22 = 0;
  pcStack_158 = param_4;
  uStack_138 = uVar17;
  do {
    uVar17 = uVar22;
    if (lVar27 == lVar18) goto LAB_140b5945d;
    uStack_91 = 1;
    puVar13 = (undefined8 *)(*param_3)(lVar27);
    uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
    lVar27 = lVar27 + 0x30;
    uVar22 = uVar17 + 1;
  } while (puVar13 == (undefined8 *)0x0);
  if (*(char *)((longlong)puVar13 + 0x19) == '\0') {
    if (*(longlong *)(puVar13[1] + 0x20) == 0) {
      uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14305a840,0x34,&UNK_14305a878);
    }
    *(undefined1 *)((longlong)puVar13 + 0x19) = 1;
    pub_142e32780(uVar6 + 0x1400,0,0x400);
    uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
    fVar3 = *(float *)((longlong)puVar13 + 0x14);
    if (*(char *)(puVar13 + 3) != '\0') {
      uStack_91 = 1;
      pdb_140a787a0(param_2,0);
      pbStack_c0 = (byte *)*puVar13;
      uVar22 = puStack_a0[1];
      uVar30 = puStack_a0[2];
      uVar19 = uVar22;
      while (uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20),
            uVar19 != uVar22 + uVar30 * 0x28) {
        uVar1 = uVar19 + 0x28;
        lVar27 = *(longlong *)(uVar19 + 8);
        lVar18 = *(longlong *)(uVar19 + 0x10);
        lVar28 = lVar27;
        while (uVar19 = uVar1, lVar28 != lVar27 + lVar18 * 0x18) {
          lVar20 = lVar28 + 0x18;
          puStack_a8 = puStack_178;
          puStack_178 = (ulonglong *)0x0;
          puStack_a0 = (ulonglong *)0x0;
          pbVar29 = pbStack_180;
          while (puStack_a8 != puStack_a0) {
            puStack_a0 = (ulonglong *)((longlong)puStack_a0 + 1);
            pdb_140b673e0(pbVar29);
            pbVar29 = pbVar29 + 0x30;
          }
          uStack_91 = 1;
          (*pcStack_158)(lVar28,&lStack_188);
          pbVar26 = pbStack_180 + (longlong)puStack_178 * 0x30;
          pbVar29 = pbStack_180;
          while (lVar28 = lVar20, pbVar29 != pbVar26) {
            uStack_91 = 1;
            plVar14 = (longlong *)(*param_3)(pbVar29);
            uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
            pbVar29 = pbVar29 + 0x30;
            if (plVar14 != (longlong *)0x0) {
              if ((byte *)*plVar14 == pbStack_c0) goto LAB_140b57c75;
              lVar28 = plVar14[1];
              uStack_91 = 1;
              in_stack_fffffffffffffdf8 = CONCAT44(uVar38,*(undefined4 *)(lVar28 + 0x28));
              pdb_140a79030(param_2,0,*(longlong *)(lVar28 + 0x18) + 0x10,
                            *(longlong *)(lVar28 + 0x18) + *(longlong *)(lVar28 + 0x20) * 0xc + 0x10
                            ,in_stack_fffffffffffffdf8,*(undefined1 *)(lVar28 + 0x2c),
                            *(undefined4 *)(lVar28 + 0x10),*(undefined4 *)(lVar28 + 0x14));
            }
          }
        }
      }
    }
LAB_140b57c75:
    if (_DAT_142e37848 <= fVar3) goto LAB_140b58127;
    if (*(char *)(puVar13 + 3) == '\0') {
      lVar27 = puVar13[1];
      uStack_91 = 1;
      pdb_140a79030(param_2,0,*(longlong *)(lVar27 + 0x18) + 0x10,
                    *(longlong *)(lVar27 + 0x18) + *(longlong *)(lVar27 + 0x20) * 0xc + 0x10,
                    CONCAT44(uVar38,*(undefined4 *)(lVar27 + 0x28)),*(undefined1 *)(lVar27 + 0x2c),
                    *(undefined4 *)(lVar27 + 0x10),*(undefined4 *)(lVar27 + 0x14));
      if (*(char *)((longlong)puVar13 + 0x1a) == '\x01') {
        lVar27 = puVar13[1];
        if (*(longlong *)(lVar27 + 0x20) == 0) {
          uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,0,&UNK_14305a810);
        }
        uStack_128 = *(undefined4 *)(*(longlong *)(lVar27 + 0x18) + 0x18);
        uVar7 = *(undefined8 *)(*(longlong *)(lVar27 + 0x18) + 0x10);
        auStack_130._0_4_ = (undefined4)uVar7;
        auStack_130._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_124 = *(undefined4 *)(lVar27 + 0x28);
        uStack_120 = 1;
        uStack_91 = 1;
        pdb_1414af100(param_5,auStack_130,&UNK_14305a7b8);
      }
    }
    pub_142e32780(uVar6 + 0x1600,0,0x200);
    lVar27 = puVar13[1];
    uStack_91 = 1;
    pdb_140a83c80(uVar6 + 0x1600,*(longlong *)(lVar27 + 0x18) + 0x10,
                  *(longlong *)(lVar27 + 0x18) + *(longlong *)(lVar27 + 0x20) * 0xc + 0x10,
                  *(undefined4 *)(lVar27 + 0x28));
    uVar22 = *(ulonglong *)(uVar6 + 0x1608);
    uVar30 = *(ulonglong *)(uVar6 + 0x1610);
    uVar19 = *(ulonglong *)(uVar6 + 0x1618);
    *(ulonglong *)(param_2 + 0x98) = *(ulonglong *)(param_2 + 0x98) | *(ulonglong *)(uVar6 + 0x1600)
    ;
    *(ulonglong *)(param_2 + 0xa0) = *(ulonglong *)(param_2 + 0xa0) | uVar22;
    *(ulonglong *)(param_2 + 0xa8) = *(ulonglong *)(param_2 + 0xa8) | uVar30;
    *(ulonglong *)(param_2 + 0xb0) = *(ulonglong *)(param_2 + 0xb0) | uVar19;
    uVar19 = *(ulonglong *)(uVar6 + 0x1628);
    uVar22 = *(ulonglong *)(uVar6 + 0x1630);
    uVar30 = *(ulonglong *)(uVar6 + 0x1638);
    *(ulonglong *)(param_2 + 0xb8) = *(ulonglong *)(uVar6 + 0x1620) | *(ulonglong *)(param_2 + 0xb8)
    ;
    *(ulonglong *)(param_2 + 0xc0) = uVar19 | *(ulonglong *)(param_2 + 0xc0);
    *(ulonglong *)(param_2 + 200) = uVar22 | *(ulonglong *)(param_2 + 200);
    *(ulonglong *)(param_2 + 0xd0) = uVar30 | *(ulonglong *)(param_2 + 0xd0);
    uVar22 = *(ulonglong *)(uVar6 + 0x1648);
    uVar30 = *(ulonglong *)(uVar6 + 0x1650);
    uVar19 = *(ulonglong *)(uVar6 + 0x1658);
    *(ulonglong *)(param_2 + 0xd8) = *(ulonglong *)(param_2 + 0xd8) | *(ulonglong *)(uVar6 + 0x1640)
    ;
    *(ulonglong *)(param_2 + 0xe0) = *(ulonglong *)(param_2 + 0xe0) | uVar22;
    *(ulonglong *)(param_2 + 0xe8) = *(ulonglong *)(param_2 + 0xe8) | uVar30;
    *(ulonglong *)(param_2 + 0xf0) = *(ulonglong *)(param_2 + 0xf0) | uVar19;
    uVar22 = *(ulonglong *)(uVar6 + 0x1668);
    uVar30 = *(ulonglong *)(uVar6 + 0x1670);
    uVar19 = *(ulonglong *)(uVar6 + 0x1678);
    *(ulonglong *)(param_2 + 0xf8) = *(ulonglong *)(param_2 + 0xf8) | *(ulonglong *)(uVar6 + 0x1660)
    ;
    *(ulonglong *)(param_2 + 0x100) = *(ulonglong *)(param_2 + 0x100) | uVar22;
    *(ulonglong *)(param_2 + 0x108) = *(ulonglong *)(param_2 + 0x108) | uVar30;
    *(ulonglong *)(param_2 + 0x110) = *(ulonglong *)(param_2 + 0x110) | uVar19;
    uVar22 = *(ulonglong *)(uVar6 + 0x1688);
    uVar30 = *(ulonglong *)(uVar6 + 0x1690);
    uVar19 = *(ulonglong *)(uVar6 + 0x1698);
    *(ulonglong *)(param_2 + 0x118) =
         *(ulonglong *)(param_2 + 0x118) | *(ulonglong *)(uVar6 + 0x1680);
    *(ulonglong *)(param_2 + 0x120) = *(ulonglong *)(param_2 + 0x120) | uVar22;
    *(ulonglong *)(param_2 + 0x128) = *(ulonglong *)(param_2 + 0x128) | uVar30;
    *(ulonglong *)(param_2 + 0x130) = *(ulonglong *)(param_2 + 0x130) | uVar19;
    uVar22 = *(ulonglong *)(uVar6 + 0x16a8);
    uVar30 = *(ulonglong *)(uVar6 + 0x16b0);
    uVar19 = *(ulonglong *)(uVar6 + 0x16b8);
    *(ulonglong *)(param_2 + 0x138) =
         *(ulonglong *)(param_2 + 0x138) | *(ulonglong *)(uVar6 + 0x16a0);
    *(ulonglong *)(param_2 + 0x140) = *(ulonglong *)(param_2 + 0x140) | uVar22;
    *(ulonglong *)(param_2 + 0x148) = *(ulonglong *)(param_2 + 0x148) | uVar30;
    *(ulonglong *)(param_2 + 0x150) = *(ulonglong *)(param_2 + 0x150) | uVar19;
    uVar22 = *(ulonglong *)(uVar6 + 0x16c8);
    uVar30 = *(ulonglong *)(uVar6 + 0x16d0);
    uVar19 = *(ulonglong *)(uVar6 + 0x16d8);
    *(ulonglong *)(param_2 + 0x158) =
         *(ulonglong *)(param_2 + 0x158) | *(ulonglong *)(uVar6 + 0x16c0);
    *(ulonglong *)(param_2 + 0x160) = *(ulonglong *)(param_2 + 0x160) | uVar22;
    *(ulonglong *)(param_2 + 0x168) = *(ulonglong *)(param_2 + 0x168) | uVar30;
    *(ulonglong *)(param_2 + 0x170) = *(ulonglong *)(param_2 + 0x170) | uVar19;
    uVar22 = *(ulonglong *)(uVar6 + 0x16e8);
    uVar30 = *(ulonglong *)(uVar6 + 0x16f0);
    uVar19 = *(ulonglong *)(uVar6 + 0x16f8);
    *(ulonglong *)(param_2 + 0x178) =
         *(ulonglong *)(param_2 + 0x178) | *(ulonglong *)(uVar6 + 0x16e0);
    *(ulonglong *)(param_2 + 0x180) = *(ulonglong *)(param_2 + 0x180) | uVar22;
    *(ulonglong *)(param_2 + 0x188) = *(ulonglong *)(param_2 + 0x188) | uVar30;
    *(ulonglong *)(param_2 + 400) = *(ulonglong *)(param_2 + 400) | uVar19;
    uVar22 = *(ulonglong *)(uVar6 + 0x1708);
    uVar30 = *(ulonglong *)(uVar6 + 0x1710);
    uVar19 = *(ulonglong *)(uVar6 + 0x1718);
    *(ulonglong *)(param_2 + 0x198) =
         *(ulonglong *)(param_2 + 0x198) | *(ulonglong *)(uVar6 + 0x1700);
    *(ulonglong *)(param_2 + 0x1a0) = *(ulonglong *)(param_2 + 0x1a0) | uVar22;
    *(ulonglong *)(param_2 + 0x1a8) = *(ulonglong *)(param_2 + 0x1a8) | uVar30;
    *(ulonglong *)(param_2 + 0x1b0) = *(ulonglong *)(param_2 + 0x1b0) | uVar19;
    uVar22 = *(ulonglong *)(uVar6 + 0x1728);
    uVar30 = *(ulonglong *)(uVar6 + 0x1730);
    uVar19 = *(ulonglong *)(uVar6 + 0x1738);
    *(ulonglong *)(param_2 + 0x1b8) =
         *(ulonglong *)(param_2 + 0x1b8) | *(ulonglong *)(uVar6 + 0x1720);
    *(ulonglong *)(param_2 + 0x1c0) = *(ulonglong *)(param_2 + 0x1c0) | uVar22;
    *(ulonglong *)(param_2 + 0x1c8) = *(ulonglong *)(param_2 + 0x1c8) | uVar30;
    *(ulonglong *)(param_2 + 0x1d0) = *(ulonglong *)(param_2 + 0x1d0) | uVar19;
    uVar22 = *(ulonglong *)(uVar6 + 0x1748);
    uVar30 = *(ulonglong *)(uVar6 + 0x1750);
    uVar19 = *(ulonglong *)(uVar6 + 0x1758);
    *(ulonglong *)(param_2 + 0x1d8) =
         *(ulonglong *)(param_2 + 0x1d8) | *(ulonglong *)(uVar6 + 0x1740);
    *(ulonglong *)(param_2 + 0x1e0) = *(ulonglong *)(param_2 + 0x1e0) | uVar22;
    *(ulonglong *)(param_2 + 0x1e8) = *(ulonglong *)(param_2 + 0x1e8) | uVar30;
    *(ulonglong *)(param_2 + 0x1f0) = *(ulonglong *)(param_2 + 0x1f0) | uVar19;
    uVar22 = *(ulonglong *)(uVar6 + 0x1768);
    uVar30 = *(ulonglong *)(uVar6 + 6000);
    uVar19 = *(ulonglong *)(uVar6 + 0x1778);
    *(ulonglong *)(param_2 + 0x1f8) =
         *(ulonglong *)(param_2 + 0x1f8) | *(ulonglong *)(uVar6 + 0x1760);
    *(ulonglong *)(param_2 + 0x200) = *(ulonglong *)(param_2 + 0x200) | uVar22;
    *(ulonglong *)(param_2 + 0x208) = *(ulonglong *)(param_2 + 0x208) | uVar30;
    *(ulonglong *)(param_2 + 0x210) = *(ulonglong *)(param_2 + 0x210) | uVar19;
    uVar22 = *(ulonglong *)(uVar6 + 0x1788);
    uVar30 = *(ulonglong *)(uVar6 + 0x1790);
    uVar19 = *(ulonglong *)(uVar6 + 0x1798);
    *(ulonglong *)(param_2 + 0x218) =
         *(ulonglong *)(param_2 + 0x218) | *(ulonglong *)(uVar6 + 0x1780);
    *(ulonglong *)(param_2 + 0x220) = *(ulonglong *)(param_2 + 0x220) | uVar22;
    *(ulonglong *)(param_2 + 0x228) = *(ulonglong *)(param_2 + 0x228) | uVar30;
    *(ulonglong *)(param_2 + 0x230) = *(ulonglong *)(param_2 + 0x230) | uVar19;
    uVar22 = *(ulonglong *)(uVar6 + 0x17a8);
    uVar30 = *(ulonglong *)(uVar6 + 0x17b0);
    uVar19 = *(ulonglong *)(uVar6 + 0x17b8);
    *(ulonglong *)(param_2 + 0x238) =
         *(ulonglong *)(param_2 + 0x238) | *(ulonglong *)(uVar6 + 0x17a0);
    *(ulonglong *)(param_2 + 0x240) = *(ulonglong *)(param_2 + 0x240) | uVar22;
    *(ulonglong *)(param_2 + 0x248) = *(ulonglong *)(param_2 + 0x248) | uVar30;
    *(ulonglong *)(param_2 + 0x250) = *(ulonglong *)(param_2 + 0x250) | uVar19;
    uVar22 = *(ulonglong *)(uVar6 + 0x17c8);
    uVar30 = *(ulonglong *)(uVar6 + 0x17d0);
    uVar19 = *(ulonglong *)(uVar6 + 0x17d8);
    *(ulonglong *)(param_2 + 600) = *(ulonglong *)(param_2 + 600) | *(ulonglong *)(uVar6 + 0x17c0);
    *(ulonglong *)(param_2 + 0x260) = *(ulonglong *)(param_2 + 0x260) | uVar22;
    *(ulonglong *)(param_2 + 0x268) = *(ulonglong *)(param_2 + 0x268) | uVar30;
    *(ulonglong *)(param_2 + 0x270) = *(ulonglong *)(param_2 + 0x270) | uVar19;
    uVar19 = *(ulonglong *)(uVar6 + 0x17e8);
    uVar22 = *(ulonglong *)(uVar6 + 0x17f0);
    uVar30 = *(ulonglong *)(uVar6 + 0x17f8);
    *(ulonglong *)(param_2 + 0x278) =
         *(ulonglong *)(param_2 + 0x278) | *(ulonglong *)(uVar6 + 0x17e0);
    *(ulonglong *)(param_2 + 0x280) = *(ulonglong *)(param_2 + 0x280) | uVar19;
    *(ulonglong *)(param_2 + 0x288) = *(ulonglong *)(param_2 + 0x288) | uVar22;
    *(ulonglong *)(param_2 + 0x290) = *(ulonglong *)(param_2 + 0x290) | uVar30;
    uStack_91 = 1;
    puVar13 = (undefined8 *)pdb_140bf45b0(uVar21);
    if (puVar13 == (undefined8 *)0x0) {
LAB_140b598af:
      uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14305a828);
    }
    uStack_91 = 1;
    lVar27 = (**(code **)(puVar13[1] + 0x18))(*puVar13);
    if (lVar27 == 0) goto LAB_140b598af;
    uStack_91 = 1;
    pdb_140a78ae0(param_2,0,*(undefined8 *)(lVar27 + 8),*(undefined8 *)(lVar27 + 0x10));
LAB_140b59433:
    puVar16 = puStack_160;
    if (puStack_160 == puStack_170) {
      uStack_91 = 1;
      pdb_142d896b0(&puStack_170);
    }
    puStack_168[(longlong)puVar16] = uVar17;
    puStack_160 = (ulonglong *)((longlong)puVar16 + 1);
  }
  else {
LAB_140b58127:
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
    pub_142e32780(uVar6 + 0x1600,0);
    puVar16 = (ulonglong *)puVar13[1];
    auStack_130 = (undefined1  [8])&uStack_1a8;
    if (*(char *)(puVar13 + 3) == '\0') {
      uStack_91 = 1;
      fVar31 = (float)pdb_140dedc70();
      uVar25 = *(undefined1 *)((longlong)puVar16 + 0x2c);
      uVar37 = (undefined4)puVar16[5];
      if (_DAT_142e37848 <= fVar31) {
        uVar22 = puVar16[4];
        if (uVar22 == 0) {
          pbVar29 = (byte *)0x4;
        }
        else {
          pbStack_c0 = (byte *)CONCAT71(pbStack_c0._1_7_,uVar25);
          uVar30 = puVar16[3];
          puStack_a0 = puVar16;
          pdb_14007ee60();
          puStack_a8 = (ulonglong *)(uVar22 * 0xc);
          pbVar29 = pub_1406abab0(uVar22 * 0xc,4);
          if (pbVar29 == (byte *)0x0) {
            uStack_91 = 1;
            pdb_142dc7e2a(4,puStack_a8);
            goto LAB_140b59913;
          }
          if (uVar22 == 1) {
            uVar19 = 0;
LAB_140b585e9:
            lVar27 = uVar19 * 0xc;
            *(undefined4 *)(pbVar29 + lVar27 + 8) = *(undefined4 *)(uVar30 + 0x18 + lVar27);
            *(undefined8 *)(pbVar29 + lVar27) = *(undefined8 *)(uVar30 + 0x10 + lVar27);
          }
          else {
            uVar19 = 0;
            lVar27 = 0;
            do {
              *(undefined4 *)(pbVar29 + lVar27 + 8) = *(undefined4 *)(uVar30 + 0x18 + lVar27);
              *(undefined8 *)(pbVar29 + lVar27) = *(undefined8 *)(uVar30 + 0x10 + lVar27);
              *(undefined8 *)(pbVar29 + lVar27 + 0xc) = *(undefined8 *)(uVar30 + 0x1c + lVar27);
              *(undefined4 *)(pbVar29 + lVar27 + 0x14) = *(undefined4 *)(uVar30 + 0x24 + lVar27);
              uVar19 = uVar19 + 2;
              lVar27 = lVar27 + 0x18;
            } while ((uVar22 & 0xfffffffffffffffe) != uVar19);
            if ((uVar22 & 1) != 0) goto LAB_140b585e9;
          }
          puVar16 = puStack_a0;
          uVar25 = pbStack_c0._0_1_;
        }
        uStack_91 = 1;
        uStack_f8 = uVar22;
        pbStack_f0 = pbVar29;
        uStack_e8 = uVar22;
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
        puVar24 = (ulonglong *)CONCAT44(auStack_130._4_4_,auStack_130._0_4_);
        if (SBORROW8(0,(longlong)puVar24)) {
          if (uStack_f8 != 0) {
            pub_1406abac0(pbStack_f0,uStack_f8 * 0xc,4);
          }
          lVar27 = CONCAT17(uStack_d9,uStack_e0);
          puStack_a0 = (ulonglong *)0x4;
          uVar30 = 0;
          puStack_a8 = (ulonglong *)0x0;
        }
        else {
          puStack_a0 = (ulonglong *)CONCAT44(uStack_124,uStack_128);
          uVar30 = CONCAT71(uStack_11f,uStack_120);
          lVar27 = CONCAT71(uStack_117,uStack_118);
          uVar22 = puVar16[4];
          uVar19 = 0;
          if (2 < uVar30) {
            uVar19 = uVar30 - 3;
          }
          puStack_a8 = puVar24;
          if (uVar22 < uVar19) {
            pbStack_c0 = (byte *)CONCAT71(uStack_10f,uStack_110);
            puStack_b8 = (ulonglong *)lVar27;
            pdb_142dc8420(uVar19,uVar22,uVar22,&UNK_14305a908);
LAB_140b59913:
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          if (lVar27 != 0) {
            pub_1406abac0((byte *)CONCAT71(uStack_10f,uStack_110),lVar27 << 2,4);
          }
          if (uStack_f8 != 0) {
            pub_1406abac0(pbStack_f0,uStack_f8 * 0xc,4);
          }
          lVar27 = CONCAT17(uStack_d9,uStack_e0);
        }
        if (lVar27 != 0) {
          pub_1406abac0((byte *)CONCAT17(uStack_d1,uStack_d8),lVar27 << 2,4);
        }
      }
      else {
        puStack_a0 = (ulonglong *)0x4;
        uVar30 = 0;
        puStack_a8 = (ulonglong *)0x0;
      }
      pdb_140a83c80(uVar6 + 0x1600,puStack_a0,(longlong)puStack_a0 + uVar30 * 0xc,
                    *(undefined4 *)(puVar13[1] + 0x28));
    }
    else {
      uStack_91 = 1;
      fVar31 = (float)pdb_140dedc70(fVar3 - fVar36);
      uVar25 = *(undefined1 *)((longlong)puVar16 + 0x2c);
      uVar37 = (undefined4)puVar16[5];
      uVar22 = puVar16[3];
      uVar19 = puVar16[4];
      lVar27 = uVar22 + 0x10;
      if (_DAT_142e37848 <= fVar31) {
        pbStack_c0 = (byte *)CONCAT71(pbStack_c0._1_7_,uVar25);
        uStack_138 = uVar19;
        if (uVar19 == 0) {
          pbVar29 = (byte *)0x4;
        }
        else {
          pdb_14007ee60();
          puStack_a0 = (ulonglong *)(uVar19 * 0xc);
          pbVar29 = pub_1406abab0(uVar19 * 0xc,4);
          if (pbVar29 == (byte *)0x0) {
            uStack_91 = 1;
            pdb_142dc7e2a(4,puStack_a0);
            goto LAB_140b59913;
          }
          uVar25 = pbStack_c0._0_1_;
          if (uStack_138 == 1) {
            uVar30 = 0;
          }
          else {
            uVar30 = 0;
            lVar18 = 0;
            do {
              *(undefined4 *)(pbVar29 + lVar18 + 8) = *(undefined4 *)(uVar22 + 0x18 + lVar18);
              *(undefined8 *)(pbVar29 + lVar18) = *(undefined8 *)(lVar27 + lVar18);
              *(undefined8 *)(pbVar29 + lVar18 + 0xc) = *(undefined8 *)(uVar22 + 0x1c + lVar18);
              *(undefined4 *)(pbVar29 + lVar18 + 0x14) = *(undefined4 *)(uVar22 + 0x24 + lVar18);
              uVar30 = uVar30 + 2;
              lVar18 = lVar18 + 0x18;
            } while ((uStack_138 & 0xfffffffffffffffe) != uVar30);
            if ((uStack_138 & 1) == 0) goto LAB_140b58352;
          }
          lVar18 = uVar30 * 0xc;
          *(undefined4 *)(pbVar29 + lVar18 + 8) = *(undefined4 *)(uVar22 + 0x18 + lVar18);
          *(undefined8 *)(pbVar29 + lVar18) = *(undefined8 *)(lVar27 + lVar18);
        }
LAB_140b58352:
        uStack_91 = 1;
        uStack_f8 = uStack_138;
        pbStack_f0 = pbVar29;
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
        puVar24 = (ulonglong *)CONCAT44(auStack_130._4_4_,auStack_130._0_4_);
        if (SBORROW8(0,(longlong)puVar24)) {
          if (uStack_f8 != 0) {
            pub_1406abac0(pbStack_f0,uStack_f8 * 0xc,4);
          }
          lVar18 = CONCAT17(uStack_d9,uStack_e0);
          puStack_a0 = (ulonglong *)0x4;
          puStack_a8 = (ulonglong *)0x0;
          uVar30 = 0;
        }
        else {
          puStack_a0 = (ulonglong *)CONCAT44(uStack_124,uStack_128);
          uVar30 = CONCAT71(uStack_11f,uStack_120);
          lVar27 = CONCAT71(uStack_117,uStack_118);
          pcStack_158 = (code *)CONCAT71(uStack_10f,uStack_110);
          uVar22 = puVar16[4];
          uVar19 = 0;
          if (2 < uVar30) {
            uVar19 = uVar30 - 3;
          }
          uStack_138 = uVar22 - uVar19;
          puStack_a8 = puVar24;
          if (uVar22 < uVar19) {
            puStack_b8 = (ulonglong *)lVar27;
            pdb_142dc8420(uVar19,uVar22,uVar22,&UNK_14305a908);
            goto LAB_140b59913;
          }
          uVar22 = puVar16[3];
          if (lVar27 != 0) {
            pub_1406abac0((byte *)pcStack_158,lVar27 << 2,4);
          }
          if (uStack_f8 != 0) {
            pub_1406abac0(pbStack_f0,uStack_f8 * 0xc,4);
          }
          lVar27 = uVar22 + uVar19 * 0xc + 0x10;
          lVar18 = CONCAT17(uStack_d9,uStack_e0);
          uVar25 = pbStack_c0._0_1_;
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
        uVar30 = 0;
      }
      pdb_140a83c80(uVar6 + 0x1600,lVar27,lVar27 + uVar19 * 0xc,*(undefined4 *)(puVar13[1] + 0x28));
    }
    uVar22 = *(ulonglong *)(uVar6 + 0x1608);
    uVar19 = *(ulonglong *)(uVar6 + 0x1610);
    uVar1 = *(ulonglong *)(uVar6 + 0x1618);
    *(ulonglong *)(param_2 + 0x98) = *(ulonglong *)(param_2 + 0x98) | *(ulonglong *)(uVar6 + 0x1600)
    ;
    *(ulonglong *)(param_2 + 0xa0) = *(ulonglong *)(param_2 + 0xa0) | uVar22;
    *(ulonglong *)(param_2 + 0xa8) = *(ulonglong *)(param_2 + 0xa8) | uVar19;
    *(ulonglong *)(param_2 + 0xb0) = *(ulonglong *)(param_2 + 0xb0) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1628);
    uVar19 = *(ulonglong *)(uVar6 + 0x1630);
    uVar1 = *(ulonglong *)(uVar6 + 0x1638);
    *(ulonglong *)(param_2 + 0xb8) = *(ulonglong *)(uVar6 + 0x1620) | *(ulonglong *)(param_2 + 0xb8)
    ;
    *(ulonglong *)(param_2 + 0xc0) = uVar22 | *(ulonglong *)(param_2 + 0xc0);
    *(ulonglong *)(param_2 + 200) = uVar19 | *(ulonglong *)(param_2 + 200);
    *(ulonglong *)(param_2 + 0xd0) = uVar1 | *(ulonglong *)(param_2 + 0xd0);
    uVar22 = *(ulonglong *)(uVar6 + 0x1648);
    uVar19 = *(ulonglong *)(uVar6 + 0x1650);
    uVar1 = *(ulonglong *)(uVar6 + 0x1658);
    *(ulonglong *)(param_2 + 0xd8) = *(ulonglong *)(param_2 + 0xd8) | *(ulonglong *)(uVar6 + 0x1640)
    ;
    *(ulonglong *)(param_2 + 0xe0) = *(ulonglong *)(param_2 + 0xe0) | uVar22;
    *(ulonglong *)(param_2 + 0xe8) = *(ulonglong *)(param_2 + 0xe8) | uVar19;
    *(ulonglong *)(param_2 + 0xf0) = *(ulonglong *)(param_2 + 0xf0) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1668);
    uVar19 = *(ulonglong *)(uVar6 + 0x1670);
    uVar1 = *(ulonglong *)(uVar6 + 0x1678);
    *(ulonglong *)(param_2 + 0xf8) = *(ulonglong *)(param_2 + 0xf8) | *(ulonglong *)(uVar6 + 0x1660)
    ;
    *(ulonglong *)(param_2 + 0x100) = *(ulonglong *)(param_2 + 0x100) | uVar22;
    *(ulonglong *)(param_2 + 0x108) = *(ulonglong *)(param_2 + 0x108) | uVar19;
    *(ulonglong *)(param_2 + 0x110) = *(ulonglong *)(param_2 + 0x110) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1688);
    uVar19 = *(ulonglong *)(uVar6 + 0x1690);
    uVar1 = *(ulonglong *)(uVar6 + 0x1698);
    *(ulonglong *)(param_2 + 0x118) =
         *(ulonglong *)(param_2 + 0x118) | *(ulonglong *)(uVar6 + 0x1680);
    *(ulonglong *)(param_2 + 0x120) = *(ulonglong *)(param_2 + 0x120) | uVar22;
    *(ulonglong *)(param_2 + 0x128) = *(ulonglong *)(param_2 + 0x128) | uVar19;
    *(ulonglong *)(param_2 + 0x130) = *(ulonglong *)(param_2 + 0x130) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x16a8);
    uVar19 = *(ulonglong *)(uVar6 + 0x16b0);
    uVar1 = *(ulonglong *)(uVar6 + 0x16b8);
    *(ulonglong *)(param_2 + 0x138) =
         *(ulonglong *)(param_2 + 0x138) | *(ulonglong *)(uVar6 + 0x16a0);
    *(ulonglong *)(param_2 + 0x140) = *(ulonglong *)(param_2 + 0x140) | uVar22;
    *(ulonglong *)(param_2 + 0x148) = *(ulonglong *)(param_2 + 0x148) | uVar19;
    *(ulonglong *)(param_2 + 0x150) = *(ulonglong *)(param_2 + 0x150) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x16c8);
    uVar19 = *(ulonglong *)(uVar6 + 0x16d0);
    uVar1 = *(ulonglong *)(uVar6 + 0x16d8);
    *(ulonglong *)(param_2 + 0x158) =
         *(ulonglong *)(param_2 + 0x158) | *(ulonglong *)(uVar6 + 0x16c0);
    *(ulonglong *)(param_2 + 0x160) = *(ulonglong *)(param_2 + 0x160) | uVar22;
    *(ulonglong *)(param_2 + 0x168) = *(ulonglong *)(param_2 + 0x168) | uVar19;
    *(ulonglong *)(param_2 + 0x170) = *(ulonglong *)(param_2 + 0x170) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x16e8);
    uVar19 = *(ulonglong *)(uVar6 + 0x16f0);
    uVar1 = *(ulonglong *)(uVar6 + 0x16f8);
    *(ulonglong *)(param_2 + 0x178) =
         *(ulonglong *)(param_2 + 0x178) | *(ulonglong *)(uVar6 + 0x16e0);
    *(ulonglong *)(param_2 + 0x180) = *(ulonglong *)(param_2 + 0x180) | uVar22;
    *(ulonglong *)(param_2 + 0x188) = *(ulonglong *)(param_2 + 0x188) | uVar19;
    *(ulonglong *)(param_2 + 400) = *(ulonglong *)(param_2 + 400) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1708);
    uVar19 = *(ulonglong *)(uVar6 + 0x1710);
    uVar1 = *(ulonglong *)(uVar6 + 0x1718);
    *(ulonglong *)(param_2 + 0x198) =
         *(ulonglong *)(param_2 + 0x198) | *(ulonglong *)(uVar6 + 0x1700);
    *(ulonglong *)(param_2 + 0x1a0) = *(ulonglong *)(param_2 + 0x1a0) | uVar22;
    *(ulonglong *)(param_2 + 0x1a8) = *(ulonglong *)(param_2 + 0x1a8) | uVar19;
    *(ulonglong *)(param_2 + 0x1b0) = *(ulonglong *)(param_2 + 0x1b0) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1728);
    uVar19 = *(ulonglong *)(uVar6 + 0x1730);
    uVar1 = *(ulonglong *)(uVar6 + 0x1738);
    *(ulonglong *)(param_2 + 0x1b8) =
         *(ulonglong *)(param_2 + 0x1b8) | *(ulonglong *)(uVar6 + 0x1720);
    *(ulonglong *)(param_2 + 0x1c0) = *(ulonglong *)(param_2 + 0x1c0) | uVar22;
    *(ulonglong *)(param_2 + 0x1c8) = *(ulonglong *)(param_2 + 0x1c8) | uVar19;
    *(ulonglong *)(param_2 + 0x1d0) = *(ulonglong *)(param_2 + 0x1d0) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1748);
    uVar19 = *(ulonglong *)(uVar6 + 0x1750);
    uVar1 = *(ulonglong *)(uVar6 + 0x1758);
    *(ulonglong *)(param_2 + 0x1d8) =
         *(ulonglong *)(param_2 + 0x1d8) | *(ulonglong *)(uVar6 + 0x1740);
    *(ulonglong *)(param_2 + 0x1e0) = *(ulonglong *)(param_2 + 0x1e0) | uVar22;
    *(ulonglong *)(param_2 + 0x1e8) = *(ulonglong *)(param_2 + 0x1e8) | uVar19;
    *(ulonglong *)(param_2 + 0x1f0) = *(ulonglong *)(param_2 + 0x1f0) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1768);
    uVar19 = *(ulonglong *)(uVar6 + 6000);
    uVar1 = *(ulonglong *)(uVar6 + 0x1778);
    *(ulonglong *)(param_2 + 0x1f8) =
         *(ulonglong *)(param_2 + 0x1f8) | *(ulonglong *)(uVar6 + 0x1760);
    *(ulonglong *)(param_2 + 0x200) = *(ulonglong *)(param_2 + 0x200) | uVar22;
    *(ulonglong *)(param_2 + 0x208) = *(ulonglong *)(param_2 + 0x208) | uVar19;
    *(ulonglong *)(param_2 + 0x210) = *(ulonglong *)(param_2 + 0x210) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1788);
    uVar19 = *(ulonglong *)(uVar6 + 0x1790);
    uVar1 = *(ulonglong *)(uVar6 + 0x1798);
    *(ulonglong *)(param_2 + 0x218) =
         *(ulonglong *)(param_2 + 0x218) | *(ulonglong *)(uVar6 + 0x1780);
    *(ulonglong *)(param_2 + 0x220) = *(ulonglong *)(param_2 + 0x220) | uVar22;
    *(ulonglong *)(param_2 + 0x228) = *(ulonglong *)(param_2 + 0x228) | uVar19;
    *(ulonglong *)(param_2 + 0x230) = *(ulonglong *)(param_2 + 0x230) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x17a8);
    uVar19 = *(ulonglong *)(uVar6 + 0x17b0);
    uVar1 = *(ulonglong *)(uVar6 + 0x17b8);
    *(ulonglong *)(param_2 + 0x238) =
         *(ulonglong *)(param_2 + 0x238) | *(ulonglong *)(uVar6 + 0x17a0);
    *(ulonglong *)(param_2 + 0x240) = *(ulonglong *)(param_2 + 0x240) | uVar22;
    *(ulonglong *)(param_2 + 0x248) = *(ulonglong *)(param_2 + 0x248) | uVar19;
    *(ulonglong *)(param_2 + 0x250) = *(ulonglong *)(param_2 + 0x250) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x17c8);
    uVar19 = *(ulonglong *)(uVar6 + 0x17d0);
    uVar1 = *(ulonglong *)(uVar6 + 0x17d8);
    *(ulonglong *)(param_2 + 600) = *(ulonglong *)(param_2 + 600) | *(ulonglong *)(uVar6 + 0x17c0);
    *(ulonglong *)(param_2 + 0x260) = *(ulonglong *)(param_2 + 0x260) | uVar22;
    *(ulonglong *)(param_2 + 0x268) = *(ulonglong *)(param_2 + 0x268) | uVar19;
    *(ulonglong *)(param_2 + 0x270) = *(ulonglong *)(param_2 + 0x270) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x17e8);
    uVar19 = *(ulonglong *)(uVar6 + 0x17f0);
    uVar1 = *(ulonglong *)(uVar6 + 0x17f8);
    *(ulonglong *)(param_2 + 0x278) =
         *(ulonglong *)(param_2 + 0x278) | *(ulonglong *)(uVar6 + 0x17e0);
    *(ulonglong *)(param_2 + 0x280) = *(ulonglong *)(param_2 + 0x280) | uVar22;
    *(ulonglong *)(param_2 + 0x288) = *(ulonglong *)(param_2 + 0x288) | uVar19;
    *(ulonglong *)(param_2 + 0x290) = *(ulonglong *)(param_2 + 0x290) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1408);
    uVar19 = *(ulonglong *)(uVar6 + 0x1410);
    uVar1 = *(ulonglong *)(uVar6 + 0x1418);
    *(ulonglong *)(param_2 + 0x98) = *(ulonglong *)(param_2 + 0x98) | *(ulonglong *)(uVar6 + 0x1400)
    ;
    *(ulonglong *)(param_2 + 0xa0) = *(ulonglong *)(param_2 + 0xa0) | uVar22;
    *(ulonglong *)(param_2 + 0xa8) = *(ulonglong *)(param_2 + 0xa8) | uVar19;
    *(ulonglong *)(param_2 + 0xb0) = *(ulonglong *)(param_2 + 0xb0) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1428);
    uVar19 = *(ulonglong *)(uVar6 + 0x1430);
    uVar1 = *(ulonglong *)(uVar6 + 0x1438);
    *(ulonglong *)(param_2 + 0xb8) = *(ulonglong *)(param_2 + 0xb8) | *(ulonglong *)(uVar6 + 0x1420)
    ;
    *(ulonglong *)(param_2 + 0xc0) = *(ulonglong *)(param_2 + 0xc0) | uVar22;
    *(ulonglong *)(param_2 + 200) = *(ulonglong *)(param_2 + 200) | uVar19;
    *(ulonglong *)(param_2 + 0xd0) = *(ulonglong *)(param_2 + 0xd0) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1448);
    uVar19 = *(ulonglong *)(uVar6 + 0x1450);
    uVar1 = *(ulonglong *)(uVar6 + 0x1458);
    *(ulonglong *)(param_2 + 0xd8) = *(ulonglong *)(param_2 + 0xd8) | *(ulonglong *)(uVar6 + 0x1440)
    ;
    *(ulonglong *)(param_2 + 0xe0) = *(ulonglong *)(param_2 + 0xe0) | uVar22;
    *(ulonglong *)(param_2 + 0xe8) = *(ulonglong *)(param_2 + 0xe8) | uVar19;
    *(ulonglong *)(param_2 + 0xf0) = *(ulonglong *)(param_2 + 0xf0) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1468);
    uVar19 = *(ulonglong *)(uVar6 + 0x1470);
    uVar1 = *(ulonglong *)(uVar6 + 0x1478);
    *(ulonglong *)(param_2 + 0xf8) = *(ulonglong *)(param_2 + 0xf8) | *(ulonglong *)(uVar6 + 0x1460)
    ;
    *(ulonglong *)(param_2 + 0x100) = *(ulonglong *)(param_2 + 0x100) | uVar22;
    *(ulonglong *)(param_2 + 0x108) = *(ulonglong *)(param_2 + 0x108) | uVar19;
    *(ulonglong *)(param_2 + 0x110) = *(ulonglong *)(param_2 + 0x110) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1488);
    uVar19 = *(ulonglong *)(uVar6 + 0x1490);
    uVar1 = *(ulonglong *)(uVar6 + 0x1498);
    *(ulonglong *)(param_2 + 0x118) =
         *(ulonglong *)(param_2 + 0x118) | *(ulonglong *)(uVar6 + 0x1480);
    *(ulonglong *)(param_2 + 0x120) = *(ulonglong *)(param_2 + 0x120) | uVar22;
    *(ulonglong *)(param_2 + 0x128) = *(ulonglong *)(param_2 + 0x128) | uVar19;
    *(ulonglong *)(param_2 + 0x130) = *(ulonglong *)(param_2 + 0x130) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x14a8);
    uVar19 = *(ulonglong *)(uVar6 + 0x14b0);
    uVar1 = *(ulonglong *)(uVar6 + 0x14b8);
    *(ulonglong *)(param_2 + 0x138) =
         *(ulonglong *)(param_2 + 0x138) | *(ulonglong *)(uVar6 + 0x14a0);
    *(ulonglong *)(param_2 + 0x140) = *(ulonglong *)(param_2 + 0x140) | uVar22;
    *(ulonglong *)(param_2 + 0x148) = *(ulonglong *)(param_2 + 0x148) | uVar19;
    *(ulonglong *)(param_2 + 0x150) = *(ulonglong *)(param_2 + 0x150) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x14c8);
    uVar19 = *(ulonglong *)(uVar6 + 0x14d0);
    uVar1 = *(ulonglong *)(uVar6 + 0x14d8);
    *(ulonglong *)(param_2 + 0x158) =
         *(ulonglong *)(param_2 + 0x158) | *(ulonglong *)(uVar6 + 0x14c0);
    *(ulonglong *)(param_2 + 0x160) = *(ulonglong *)(param_2 + 0x160) | uVar22;
    *(ulonglong *)(param_2 + 0x168) = *(ulonglong *)(param_2 + 0x168) | uVar19;
    *(ulonglong *)(param_2 + 0x170) = *(ulonglong *)(param_2 + 0x170) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x14e8);
    uVar19 = *(ulonglong *)(uVar6 + 0x14f0);
    uVar1 = *(ulonglong *)(uVar6 + 0x14f8);
    *(ulonglong *)(param_2 + 0x178) =
         *(ulonglong *)(param_2 + 0x178) | *(ulonglong *)(uVar6 + 0x14e0);
    *(ulonglong *)(param_2 + 0x180) = *(ulonglong *)(param_2 + 0x180) | uVar22;
    *(ulonglong *)(param_2 + 0x188) = *(ulonglong *)(param_2 + 0x188) | uVar19;
    *(ulonglong *)(param_2 + 400) = *(ulonglong *)(param_2 + 400) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1508);
    uVar19 = *(ulonglong *)(uVar6 + 0x1510);
    uVar1 = *(ulonglong *)(uVar6 + 0x1518);
    *(ulonglong *)(param_2 + 0x198) =
         *(ulonglong *)(param_2 + 0x198) | *(ulonglong *)(uVar6 + 0x1500);
    *(ulonglong *)(param_2 + 0x1a0) = *(ulonglong *)(param_2 + 0x1a0) | uVar22;
    *(ulonglong *)(param_2 + 0x1a8) = *(ulonglong *)(param_2 + 0x1a8) | uVar19;
    *(ulonglong *)(param_2 + 0x1b0) = *(ulonglong *)(param_2 + 0x1b0) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1528);
    uVar19 = *(ulonglong *)(uVar6 + 0x1530);
    uVar1 = *(ulonglong *)(uVar6 + 0x1538);
    *(ulonglong *)(param_2 + 0x1b8) =
         *(ulonglong *)(param_2 + 0x1b8) | *(ulonglong *)(uVar6 + 0x1520);
    *(ulonglong *)(param_2 + 0x1c0) = *(ulonglong *)(param_2 + 0x1c0) | uVar22;
    *(ulonglong *)(param_2 + 0x1c8) = *(ulonglong *)(param_2 + 0x1c8) | uVar19;
    *(ulonglong *)(param_2 + 0x1d0) = *(ulonglong *)(param_2 + 0x1d0) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1548);
    uVar19 = *(ulonglong *)(uVar6 + 0x1550);
    uVar1 = *(ulonglong *)(uVar6 + 0x1558);
    *(ulonglong *)(param_2 + 0x1d8) =
         *(ulonglong *)(param_2 + 0x1d8) | *(ulonglong *)(uVar6 + 0x1540);
    *(ulonglong *)(param_2 + 0x1e0) = *(ulonglong *)(param_2 + 0x1e0) | uVar22;
    *(ulonglong *)(param_2 + 0x1e8) = *(ulonglong *)(param_2 + 0x1e8) | uVar19;
    *(ulonglong *)(param_2 + 0x1f0) = *(ulonglong *)(param_2 + 0x1f0) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1568);
    uVar19 = *(ulonglong *)(uVar6 + 0x1570);
    uVar1 = *(ulonglong *)(uVar6 + 0x1578);
    *(ulonglong *)(param_2 + 0x1f8) =
         *(ulonglong *)(param_2 + 0x1f8) | *(ulonglong *)(uVar6 + 0x1560);
    *(ulonglong *)(param_2 + 0x200) = *(ulonglong *)(param_2 + 0x200) | uVar22;
    *(ulonglong *)(param_2 + 0x208) = *(ulonglong *)(param_2 + 0x208) | uVar19;
    *(ulonglong *)(param_2 + 0x210) = *(ulonglong *)(param_2 + 0x210) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x1588);
    uVar19 = *(ulonglong *)(uVar6 + 0x1590);
    uVar1 = *(ulonglong *)(uVar6 + 0x1598);
    *(ulonglong *)(param_2 + 0x218) =
         *(ulonglong *)(param_2 + 0x218) | *(ulonglong *)(uVar6 + 0x1580);
    *(ulonglong *)(param_2 + 0x220) = *(ulonglong *)(param_2 + 0x220) | uVar22;
    *(ulonglong *)(param_2 + 0x228) = *(ulonglong *)(param_2 + 0x228) | uVar19;
    *(ulonglong *)(param_2 + 0x230) = *(ulonglong *)(param_2 + 0x230) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x15a8);
    uVar19 = *(ulonglong *)(uVar6 + 0x15b0);
    uVar1 = *(ulonglong *)(uVar6 + 0x15b8);
    *(ulonglong *)(param_2 + 0x238) =
         *(ulonglong *)(param_2 + 0x238) | *(ulonglong *)(uVar6 + 0x15a0);
    *(ulonglong *)(param_2 + 0x240) = *(ulonglong *)(param_2 + 0x240) | uVar22;
    *(ulonglong *)(param_2 + 0x248) = *(ulonglong *)(param_2 + 0x248) | uVar19;
    *(ulonglong *)(param_2 + 0x250) = *(ulonglong *)(param_2 + 0x250) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x15c8);
    uVar19 = *(ulonglong *)(uVar6 + 0x15d0);
    uVar1 = *(ulonglong *)(uVar6 + 0x15d8);
    *(ulonglong *)(param_2 + 600) = *(ulonglong *)(param_2 + 600) | *(ulonglong *)(uVar6 + 0x15c0);
    *(ulonglong *)(param_2 + 0x260) = *(ulonglong *)(param_2 + 0x260) | uVar22;
    *(ulonglong *)(param_2 + 0x268) = *(ulonglong *)(param_2 + 0x268) | uVar19;
    *(ulonglong *)(param_2 + 0x270) = *(ulonglong *)(param_2 + 0x270) | uVar1;
    uVar22 = *(ulonglong *)(uVar6 + 0x15e8);
    uVar19 = *(ulonglong *)(uVar6 + 0x15f0);
    uVar1 = *(ulonglong *)(uVar6 + 0x15f8);
    *(ulonglong *)(param_2 + 0x278) =
         *(ulonglong *)(param_2 + 0x278) | *(ulonglong *)(uVar6 + 0x15e0);
    *(ulonglong *)(param_2 + 0x280) = *(ulonglong *)(param_2 + 0x280) | uVar22;
    *(ulonglong *)(param_2 + 0x288) = *(ulonglong *)(param_2 + 0x288) | uVar19;
    *(ulonglong *)(param_2 + 0x290) = *(ulonglong *)(param_2 + 0x290) | uVar1;
    uVar7 = *(undefined8 *)(uVar6 + 0x1600);
    uVar9 = *(undefined8 *)(uVar6 + 0x1608);
    uVar10 = *(undefined8 *)(uVar6 + 0x1610);
    uVar11 = *(undefined8 *)(uVar6 + 0x1618);
    *(undefined8 *)(uVar6 + 0x1600) = *(undefined8 *)(uVar6 + 0x1400);
    *(undefined8 *)(uVar6 + 0x1608) = *(undefined8 *)(uVar6 + 0x1408);
    *(undefined8 *)(uVar6 + 0x1610) = *(undefined8 *)(uVar6 + 0x1410);
    *(undefined8 *)(uVar6 + 0x1618) = *(undefined8 *)(uVar6 + 0x1418);
    *(undefined8 *)(uVar6 + 0x1400) = uVar7;
    *(undefined8 *)(uVar6 + 0x1408) = uVar9;
    *(undefined8 *)(uVar6 + 0x1410) = uVar10;
    *(undefined8 *)(uVar6 + 0x1418) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1620);
    uVar9 = *(undefined8 *)(uVar6 + 0x1628);
    uVar10 = *(undefined8 *)(uVar6 + 0x1630);
    uVar11 = *(undefined8 *)(uVar6 + 0x1638);
    *(undefined8 *)(uVar6 + 0x1620) = *(undefined8 *)(uVar6 + 0x1420);
    *(undefined8 *)(uVar6 + 0x1628) = *(undefined8 *)(uVar6 + 0x1428);
    *(undefined8 *)(uVar6 + 0x1630) = *(undefined8 *)(uVar6 + 0x1430);
    *(undefined8 *)(uVar6 + 0x1638) = *(undefined8 *)(uVar6 + 0x1438);
    *(undefined8 *)(uVar6 + 0x1420) = uVar7;
    *(undefined8 *)(uVar6 + 0x1428) = uVar9;
    *(undefined8 *)(uVar6 + 0x1430) = uVar10;
    *(undefined8 *)(uVar6 + 0x1438) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1640);
    uVar9 = *(undefined8 *)(uVar6 + 0x1648);
    uVar10 = *(undefined8 *)(uVar6 + 0x1650);
    uVar11 = *(undefined8 *)(uVar6 + 0x1658);
    *(undefined8 *)(uVar6 + 0x1640) = *(undefined8 *)(uVar6 + 0x1440);
    *(undefined8 *)(uVar6 + 0x1648) = *(undefined8 *)(uVar6 + 0x1448);
    *(undefined8 *)(uVar6 + 0x1650) = *(undefined8 *)(uVar6 + 0x1450);
    *(undefined8 *)(uVar6 + 0x1658) = *(undefined8 *)(uVar6 + 0x1458);
    *(undefined8 *)(uVar6 + 0x1440) = uVar7;
    *(undefined8 *)(uVar6 + 0x1448) = uVar9;
    *(undefined8 *)(uVar6 + 0x1450) = uVar10;
    *(undefined8 *)(uVar6 + 0x1458) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1660);
    uVar9 = *(undefined8 *)(uVar6 + 0x1668);
    uVar10 = *(undefined8 *)(uVar6 + 0x1670);
    uVar11 = *(undefined8 *)(uVar6 + 0x1678);
    *(undefined8 *)(uVar6 + 0x1660) = *(undefined8 *)(uVar6 + 0x1460);
    *(undefined8 *)(uVar6 + 0x1668) = *(undefined8 *)(uVar6 + 0x1468);
    *(undefined8 *)(uVar6 + 0x1670) = *(undefined8 *)(uVar6 + 0x1470);
    *(undefined8 *)(uVar6 + 0x1678) = *(undefined8 *)(uVar6 + 0x1478);
    *(undefined8 *)(uVar6 + 0x1460) = uVar7;
    *(undefined8 *)(uVar6 + 0x1468) = uVar9;
    *(undefined8 *)(uVar6 + 0x1470) = uVar10;
    *(undefined8 *)(uVar6 + 0x1478) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1680);
    uVar9 = *(undefined8 *)(uVar6 + 0x1688);
    uVar10 = *(undefined8 *)(uVar6 + 0x1690);
    uVar11 = *(undefined8 *)(uVar6 + 0x1698);
    *(undefined8 *)(uVar6 + 0x1680) = *(undefined8 *)(uVar6 + 0x1480);
    *(undefined8 *)(uVar6 + 0x1688) = *(undefined8 *)(uVar6 + 0x1488);
    *(undefined8 *)(uVar6 + 0x1690) = *(undefined8 *)(uVar6 + 0x1490);
    *(undefined8 *)(uVar6 + 0x1698) = *(undefined8 *)(uVar6 + 0x1498);
    *(undefined8 *)(uVar6 + 0x1480) = uVar7;
    *(undefined8 *)(uVar6 + 0x1488) = uVar9;
    *(undefined8 *)(uVar6 + 0x1490) = uVar10;
    *(undefined8 *)(uVar6 + 0x1498) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x16a0);
    uVar9 = *(undefined8 *)(uVar6 + 0x16a8);
    uVar10 = *(undefined8 *)(uVar6 + 0x16b0);
    uVar11 = *(undefined8 *)(uVar6 + 0x16b8);
    *(undefined8 *)(uVar6 + 0x16a0) = *(undefined8 *)(uVar6 + 0x14a0);
    *(undefined8 *)(uVar6 + 0x16a8) = *(undefined8 *)(uVar6 + 0x14a8);
    *(undefined8 *)(uVar6 + 0x16b0) = *(undefined8 *)(uVar6 + 0x14b0);
    *(undefined8 *)(uVar6 + 0x16b8) = *(undefined8 *)(uVar6 + 0x14b8);
    *(undefined8 *)(uVar6 + 0x14a0) = uVar7;
    *(undefined8 *)(uVar6 + 0x14a8) = uVar9;
    *(undefined8 *)(uVar6 + 0x14b0) = uVar10;
    *(undefined8 *)(uVar6 + 0x14b8) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x16c0);
    uVar9 = *(undefined8 *)(uVar6 + 0x16c8);
    uVar10 = *(undefined8 *)(uVar6 + 0x16d0);
    uVar11 = *(undefined8 *)(uVar6 + 0x16d8);
    *(undefined8 *)(uVar6 + 0x16c0) = *(undefined8 *)(uVar6 + 0x14c0);
    *(undefined8 *)(uVar6 + 0x16c8) = *(undefined8 *)(uVar6 + 0x14c8);
    *(undefined8 *)(uVar6 + 0x16d0) = *(undefined8 *)(uVar6 + 0x14d0);
    *(undefined8 *)(uVar6 + 0x16d8) = *(undefined8 *)(uVar6 + 0x14d8);
    *(undefined8 *)(uVar6 + 0x14c0) = uVar7;
    *(undefined8 *)(uVar6 + 0x14c8) = uVar9;
    *(undefined8 *)(uVar6 + 0x14d0) = uVar10;
    *(undefined8 *)(uVar6 + 0x14d8) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x16e0);
    uVar9 = *(undefined8 *)(uVar6 + 0x16e8);
    uVar10 = *(undefined8 *)(uVar6 + 0x16f0);
    uVar11 = *(undefined8 *)(uVar6 + 0x16f8);
    *(undefined8 *)(uVar6 + 0x16e0) = *(undefined8 *)(uVar6 + 0x14e0);
    *(undefined8 *)(uVar6 + 0x16e8) = *(undefined8 *)(uVar6 + 0x14e8);
    *(undefined8 *)(uVar6 + 0x16f0) = *(undefined8 *)(uVar6 + 0x14f0);
    *(undefined8 *)(uVar6 + 0x16f8) = *(undefined8 *)(uVar6 + 0x14f8);
    *(undefined8 *)(uVar6 + 0x14e0) = uVar7;
    *(undefined8 *)(uVar6 + 0x14e8) = uVar9;
    *(undefined8 *)(uVar6 + 0x14f0) = uVar10;
    *(undefined8 *)(uVar6 + 0x14f8) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1700);
    uVar9 = *(undefined8 *)(uVar6 + 0x1708);
    uVar10 = *(undefined8 *)(uVar6 + 0x1710);
    uVar11 = *(undefined8 *)(uVar6 + 0x1718);
    *(undefined8 *)(uVar6 + 0x1700) = *(undefined8 *)(uVar6 + 0x1500);
    *(undefined8 *)(uVar6 + 0x1708) = *(undefined8 *)(uVar6 + 0x1508);
    *(undefined8 *)(uVar6 + 0x1710) = *(undefined8 *)(uVar6 + 0x1510);
    *(undefined8 *)(uVar6 + 0x1718) = *(undefined8 *)(uVar6 + 0x1518);
    *(undefined8 *)(uVar6 + 0x1500) = uVar7;
    *(undefined8 *)(uVar6 + 0x1508) = uVar9;
    *(undefined8 *)(uVar6 + 0x1510) = uVar10;
    *(undefined8 *)(uVar6 + 0x1518) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1720);
    uVar9 = *(undefined8 *)(uVar6 + 0x1728);
    uVar10 = *(undefined8 *)(uVar6 + 0x1730);
    uVar11 = *(undefined8 *)(uVar6 + 0x1738);
    *(undefined8 *)(uVar6 + 0x1720) = *(undefined8 *)(uVar6 + 0x1520);
    *(undefined8 *)(uVar6 + 0x1728) = *(undefined8 *)(uVar6 + 0x1528);
    *(undefined8 *)(uVar6 + 0x1730) = *(undefined8 *)(uVar6 + 0x1530);
    *(undefined8 *)(uVar6 + 0x1738) = *(undefined8 *)(uVar6 + 0x1538);
    *(undefined8 *)(uVar6 + 0x1520) = uVar7;
    *(undefined8 *)(uVar6 + 0x1528) = uVar9;
    *(undefined8 *)(uVar6 + 0x1530) = uVar10;
    *(undefined8 *)(uVar6 + 0x1538) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1740);
    uVar9 = *(undefined8 *)(uVar6 + 0x1748);
    uVar10 = *(undefined8 *)(uVar6 + 0x1750);
    uVar11 = *(undefined8 *)(uVar6 + 0x1758);
    *(undefined8 *)(uVar6 + 0x1740) = *(undefined8 *)(uVar6 + 0x1540);
    *(undefined8 *)(uVar6 + 0x1748) = *(undefined8 *)(uVar6 + 0x1548);
    *(undefined8 *)(uVar6 + 0x1750) = *(undefined8 *)(uVar6 + 0x1550);
    *(undefined8 *)(uVar6 + 0x1758) = *(undefined8 *)(uVar6 + 0x1558);
    *(undefined8 *)(uVar6 + 0x1540) = uVar7;
    *(undefined8 *)(uVar6 + 0x1548) = uVar9;
    *(undefined8 *)(uVar6 + 0x1550) = uVar10;
    *(undefined8 *)(uVar6 + 0x1558) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1760);
    uVar9 = *(undefined8 *)(uVar6 + 0x1768);
    uVar10 = *(undefined8 *)(uVar6 + 6000);
    uVar11 = *(undefined8 *)(uVar6 + 0x1778);
    *(undefined8 *)(uVar6 + 0x1760) = *(undefined8 *)(uVar6 + 0x1560);
    *(undefined8 *)(uVar6 + 0x1768) = *(undefined8 *)(uVar6 + 0x1568);
    *(undefined8 *)(uVar6 + 6000) = *(undefined8 *)(uVar6 + 0x1570);
    *(undefined8 *)(uVar6 + 0x1778) = *(undefined8 *)(uVar6 + 0x1578);
    *(undefined8 *)(uVar6 + 0x1560) = uVar7;
    *(undefined8 *)(uVar6 + 0x1568) = uVar9;
    *(undefined8 *)(uVar6 + 0x1570) = uVar10;
    *(undefined8 *)(uVar6 + 0x1578) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x1780);
    uVar9 = *(undefined8 *)(uVar6 + 0x1788);
    uVar10 = *(undefined8 *)(uVar6 + 0x1790);
    uVar11 = *(undefined8 *)(uVar6 + 0x1798);
    *(undefined8 *)(uVar6 + 0x1780) = *(undefined8 *)(uVar6 + 0x1580);
    *(undefined8 *)(uVar6 + 0x1788) = *(undefined8 *)(uVar6 + 0x1588);
    *(undefined8 *)(uVar6 + 0x1790) = *(undefined8 *)(uVar6 + 0x1590);
    *(undefined8 *)(uVar6 + 0x1798) = *(undefined8 *)(uVar6 + 0x1598);
    *(undefined8 *)(uVar6 + 0x1580) = uVar7;
    *(undefined8 *)(uVar6 + 0x1588) = uVar9;
    *(undefined8 *)(uVar6 + 0x1590) = uVar10;
    *(undefined8 *)(uVar6 + 0x1598) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x17a0);
    uVar9 = *(undefined8 *)(uVar6 + 0x17a8);
    uVar10 = *(undefined8 *)(uVar6 + 0x17b0);
    uVar11 = *(undefined8 *)(uVar6 + 0x17b8);
    *(undefined8 *)(uVar6 + 0x17a0) = *(undefined8 *)(uVar6 + 0x15a0);
    *(undefined8 *)(uVar6 + 0x17a8) = *(undefined8 *)(uVar6 + 0x15a8);
    *(undefined8 *)(uVar6 + 0x17b0) = *(undefined8 *)(uVar6 + 0x15b0);
    *(undefined8 *)(uVar6 + 0x17b8) = *(undefined8 *)(uVar6 + 0x15b8);
    *(undefined8 *)(uVar6 + 0x15a0) = uVar7;
    *(undefined8 *)(uVar6 + 0x15a8) = uVar9;
    *(undefined8 *)(uVar6 + 0x15b0) = uVar10;
    *(undefined8 *)(uVar6 + 0x15b8) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x17c0);
    uVar9 = *(undefined8 *)(uVar6 + 0x17c8);
    uVar10 = *(undefined8 *)(uVar6 + 0x17d0);
    uVar11 = *(undefined8 *)(uVar6 + 0x17d8);
    *(undefined8 *)(uVar6 + 0x17c0) = *(undefined8 *)(uVar6 + 0x15c0);
    *(undefined8 *)(uVar6 + 0x17c8) = *(undefined8 *)(uVar6 + 0x15c8);
    *(undefined8 *)(uVar6 + 0x17d0) = *(undefined8 *)(uVar6 + 0x15d0);
    *(undefined8 *)(uVar6 + 0x17d8) = *(undefined8 *)(uVar6 + 0x15d8);
    *(undefined8 *)(uVar6 + 0x15c0) = uVar7;
    *(undefined8 *)(uVar6 + 0x15c8) = uVar9;
    *(undefined8 *)(uVar6 + 0x15d0) = uVar10;
    *(undefined8 *)(uVar6 + 0x15d8) = uVar11;
    uVar7 = *(undefined8 *)(uVar6 + 0x17e0);
    uVar9 = *(undefined8 *)(uVar6 + 0x17e8);
    uVar10 = *(undefined8 *)(uVar6 + 0x17f0);
    uVar11 = *(undefined8 *)(uVar6 + 0x17f8);
    *(undefined8 *)(uVar6 + 0x17e0) = *(undefined8 *)(uVar6 + 0x15e0);
    *(undefined8 *)(uVar6 + 0x17e8) = *(undefined8 *)(uVar6 + 0x15e8);
    *(undefined8 *)(uVar6 + 0x17f0) = *(undefined8 *)(uVar6 + 0x15f0);
    *(undefined8 *)(uVar6 + 0x17f8) = *(undefined8 *)(uVar6 + 0x15f8);
    *(undefined8 *)(uVar6 + 0x15e0) = uVar7;
    *(undefined8 *)(uVar6 + 0x15e8) = uVar9;
    *(undefined8 *)(uVar6 + 0x15f0) = uVar10;
    *(undefined8 *)(uVar6 + 0x15f8) = uVar11;
    pdb_140a79940(param_2);
    lVar27 = (longlong)puStack_a0 + uVar30 * 0xc;
    pdb_140a79030(param_2,1,puStack_a0,lVar27,CONCAT44(uVar38,uVar37),uVar25,
                  *(undefined4 *)(puVar13[1] + 0x10),*(undefined4 *)(puVar13[1] + 0x14));
    puVar15 = (undefined8 *)pdb_140bf45b0(uVar21,&UNK_14331ca50);
    if ((puVar15 == (undefined8 *)0x0) ||
       (lVar18 = (**(code **)(puVar15[1] + 0x18))(*puVar15), lVar18 == 0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14305a890);
    }
    pdb_140a78ae0(param_2,1,*(undefined8 *)(lVar18 + 8),*(undefined8 *)(lVar18 + 0x10));
    auStack_130._0_4_ = 0;
    if ((uVar30 != 0) && ((undefined8 *)(lVar27 + -0xc) != (undefined8 *)0x0)) {
      uStack_124 = *(undefined4 *)(lVar27 + -4);
      uVar7 = *(undefined8 *)(lVar27 + -0xc);
      auStack_130._4_4_ = (undefined4)uVar7;
      uStack_128 = (undefined4)((ulonglong)uVar7 >> 0x20);
      auStack_130._0_4_ = 1;
    }
    if (*(longlong *)(puVar13[1] + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_14305a8a8);
    }
    lVar27 = *(longlong *)(puVar13[1] + 0x18);
    pbStack_f0 = (byte *)CONCAT44(pbStack_f0._4_4_,*(undefined4 *)(lVar27 + 0x18));
    uStack_f8 = *(ulonglong *)(lVar27 + 0x10);
    puVar16 = &uStack_f8;
    if (auStack_130._0_4_ != 0) {
      puVar16 = (ulonglong *)(auStack_130 + 4);
    }
    uVar21 = *puVar16;
    uVar6 = puVar16[1];
    if (*(char *)((longlong)puVar13 + 0x1a) != '\0') {
      *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
      lVar27 = *param_5;
      lVar18 = *(longlong *)(lVar27 + 0x30);
      uVar7 = *(undefined8 *)(lVar27 + 0x40);
      if (lVar18 == *(longlong *)(lVar27 + 0x20)) {
        pdb_142d7e6e0(lVar27 + 0x20);
      }
      lVar28 = *(longlong *)(lVar27 + 0x28);
      lVar20 = lVar18 * 0x20;
      *(undefined8 *)(lVar28 + lVar20) = uVar7;
      *(ulonglong *)(lVar28 + 8 + lVar20) = uVar21;
      *(int *)(lVar28 + 0x10 + lVar20) = (int)uVar6;
      *(undefined4 *)(lVar28 + 0x14 + lVar20) = uVar37;
      *(undefined1 *)(lVar28 + 0x18 + lVar20) = 1;
      *(longlong *)(lVar27 + 0x30) = lVar18 + 1;
      *(longlong *)(lVar27 + 0x40) = *(longlong *)(lVar27 + 0x40) + 1;
    }
    if (_DAT_142e36f28 <= fVar36) {
      if (*(char *)(puVar13 + 3) == '\0') {
        pdb_140a79cd0(param_2);
      }
      if (puStack_a8 != (ulonglong *)0x0) {
        pub_1406abac0((byte *)puStack_a0,(longlong)puStack_a8 * 0xc,4);
      }
      goto LAB_140b59433;
    }
    if (puStack_a8 != (ulonglong *)0x0) {
      pub_1406abac0((byte *)puStack_a0,(longlong)puStack_a8 * 0xc,4);
    }
  }
LAB_140b5945d:
  uVar17 = (ulonglong)puStack_160 >> 1;
  if (uVar17 != 0) {
    if (puStack_160 < (ulonglong *)0x8) {
      uVar21 = 0;
    }
    else {
      uVar21 = uVar17 & 0xfffffffffffffffc;
      pauVar23 = (undefined1 (*) [16])(puStack_168 + 2);
      lVar27 = 0;
      do {
        auVar33 = pauVar23[-1];
        auVar4 = *pauVar23;
        auVar32 = *(undefined1 (*) [16])(puStack_168 + (longlong)puStack_160 + lVar27 + -4);
        auVar34 = *(undefined1 (*) [16])(puStack_168 + (longlong)puStack_160 + lVar27 + -2);
        auVar35._0_8_ = auVar34._8_8_;
        auVar35._8_4_ = auVar34._0_4_;
        auVar35._12_4_ = auVar34._4_4_;
        auVar34._0_8_ = auVar32._8_8_;
        auVar34._8_4_ = auVar32._0_4_;
        auVar34._12_4_ = auVar32._4_4_;
        pauVar23[-1] = auVar35;
        *pauVar23 = auVar34;
        auVar32._0_8_ = auVar33._8_8_;
        auVar32._8_4_ = auVar33._0_4_;
        auVar32._12_4_ = auVar33._4_4_;
        auVar33._0_8_ = auVar4._8_8_;
        auVar33._8_4_ = auVar4._0_4_;
        auVar33._12_4_ = auVar4._4_4_;
        *(undefined1 (*) [16])(puStack_168 + (longlong)puStack_160 + lVar27 + -2) = auVar32;
        *(undefined1 (*) [16])(puStack_168 + (longlong)puStack_160 + lVar27 + -4) = auVar33;
        lVar27 = lVar27 + -4;
        pauVar23 = pauVar23 + 2;
      } while (-lVar27 != (uVar17 & 0xfffffffffffffffc));
      if (uVar17 == uVar21) goto joined_r0x000140b5949d;
    }
    puVar16 = puStack_168 + uVar21;
    lVar27 = -uVar21;
    do {
      uVar21 = *puVar16;
      *puVar16 = puStack_168[(longlong)puStack_160 + lVar27 + -1];
      puStack_168[(longlong)puStack_160 + lVar27 + -1] = uVar21;
      lVar27 = lVar27 + -1;
      puVar16 = puVar16 + 1;
    } while (-lVar27 != uVar17);
  }
joined_r0x000140b5949d:
  puStack_a8 = puStack_170;
  puStack_a0 = puStack_168;
  if (puStack_160 != (ulonglong *)0x0) {
    puVar16 = puStack_168 + (longlong)puStack_160;
    puVar24 = puStack_168;
    do {
      puVar12 = puStack_b8;
      uVar17 = *puVar24;
      uVar21 = *(ulonglong *)((longlong)puStack_b8 + 0x10);
      if (uVar21 <= uVar17) {
LAB_140b59875:
        pdb_142dc7ef8(uVar17,uVar21,&UNK_14305a8c0);
        goto LAB_140b59913;
      }
      lVar27 = *(longlong *)((longlong)puStack_b8 + 8);
      lVar18 = uVar17 * 0x30;
      cVar5 = *(char *)(lVar27 + lVar18);
      puVar13 = (undefined8 *)(lVar27 + 0x20 + lVar18);
      uVar7 = puVar13[1];
      uStack_d8 = (undefined7)((ulonglong)*puVar13 >> 8);
      uStack_d1 = (undefined1)uVar7;
      uStack_d0 = (undefined7)((ulonglong)uVar7 >> 8);
      puVar13 = (undefined8 *)(lVar27 + 0x11 + lVar18);
      uStack_e8 = *puVar13;
      uVar7 = puVar13[1];
      uStack_e0 = (undefined7)uVar7;
      uStack_d9 = (undefined1)((ulonglong)uVar7 >> 0x38);
      puVar2 = (ulonglong *)(lVar27 + 1 + lVar18);
      uStack_f8 = *puVar2;
      pbStack_f0 = (byte *)puVar2[1];
      pub_142e32770(lVar27 + lVar18,lVar18 + lVar27 + 0x30,(~uVar17 + uVar21) * 0x30);
      uVar21 = uVar21 - 1;
      *(ulonglong *)((longlong)puVar12 + 0x10) = uVar21;
      if (cVar5 == '\f') goto LAB_140b59875;
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
      puVar24 = puVar24 + 1;
    } while (puVar24 != puVar16);
  }
  if (puStack_a8 != (ulonglong *)0x0) {
    pub_1406abac0((byte *)puStack_a0,(longlong)puStack_a8 << 3,8);
  }
  puStack_a0 = puStack_178;
LAB_140b59685:
  puStack_b8 = (ulonglong *)0x0;
  pbVar29 = pbStack_180;
  puStack_178 = puStack_a0;
  puStack_a8 = (ulonglong *)pbStack_180;
  while (puStack_a0 != puStack_b8) {
    puStack_b8 = (ulonglong *)((longlong)puStack_b8 + 1);
    pdb_14099c550(pbVar29);
    pbVar29 = pbVar29 + 0x30;
  }
  if (lStack_188 != 0) {
    pub_1406abac0((byte *)puStack_a8,lStack_188 * 0x30,8);
  }
  return;
}

