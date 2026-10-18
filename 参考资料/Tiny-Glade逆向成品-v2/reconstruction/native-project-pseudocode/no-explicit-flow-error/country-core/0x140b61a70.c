// VA 0x140b61a70, PDB extent 10158 bytes
// country_core::systems::history::replay_raster::replay_raster<country_core::resources::world_raster_defs::PathRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::history::replay_path::replay_path::closure_env$1<country_core::systems::history::replay_path::DirtPathFilter> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::history::replay_raster::replay_raster<country_core::resources::world_raster_defs::PathRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::history::replay_path::replay_path::closure_env$1<country_core::systems::history::replay_path::DirtPathFilter>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_raster.rs
   Extent: 10158 */

void pdb_140b61a70(ulonglong *param_1,longlong param_2,code *param_3,code *param_4,longlong param_5)

{
  ulonglong uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  char cVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  byte *pbVar18;
  byte *pbVar19;
  code *pcVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  code *pcVar23;
  undefined1 (*pauVar24) [16];
  code *pcVar25;
  code cVar26;
  byte *pbVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined4 uVar34;
  undefined8 in_stack_fffffffffffffdf8;
  undefined4 uVar35;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  longlong lStack_188;
  byte *pbStack_180;
  code *pcStack_178;
  code *pcStack_170;
  code *pcStack_168;
  code *pcStack_160;
  byte *pbStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulonglong uStack_138;
  undefined1 auStack_130 [8];
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  uint uStack_11c;
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
  code *pcStack_b8;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  code *pcStack_a8;
  code *pcStack_a0;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  uVar13 = *param_1;
  pcStack_a0 = (code *)param_1[4];
  uVar16 = param_1[8];
  puVar12 = (ulonglong *)param_1[0xc];
  puVar5 = (ulonglong *)param_1[0x10];
  fVar28 = *(float *)(puVar12 + 5);
  lStack_188 = 0;
  pbStack_180 = (byte *)0x8;
  pcStack_178 = (code *)0x0;
  *(undefined4 *)param_1[0xe] = *(undefined4 *)((longlong)param_1 + 0x7c);
  if (puVar12[3] == 0) {
    pcStack_a0 = (code *)0x0;
    goto LAB_140b63678;
  }
  uVar22 = *puVar12;
  if (puVar12[2] < *puVar12) {
    uVar22 = 0;
  }
  uVar21 = puVar12[1];
  lVar14 = (puVar12[2] - uVar22) * 0x40;
  pcStack_b8 = (code *)(uVar21 + lVar14);
  pcStack_170 = (code *)0x0;
  pcStack_168 = (code *)0x8;
  pcStack_160 = (code *)0x0;
  lVar17 = *(longlong *)(uVar21 + 8 + lVar14);
  lVar14 = *(longlong *)(uVar21 + 0x10 + lVar14) * 0x30 + lVar17;
  uVar22 = 0;
  pcStack_190 = param_4;
  uStack_138 = uVar13;
  do {
    uVar13 = uVar22;
    if (lVar17 == lVar14) goto LAB_140b63438;
    uStack_91 = 1;
    puVar8 = (undefined8 *)(*param_3)(lVar17);
    uVar35 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
    lVar17 = lVar17 + 0x30;
    uVar22 = uVar13 + 1;
  } while (puVar8 == (undefined8 *)0x0);
  if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
    if (*(longlong *)(puVar8[1] + 0x20) == 0) {
      uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14305a840,0x34,&UNK_14305a878);
    }
    *(undefined1 *)((longlong)puVar8 + 0x19) = 1;
    pub_142e32780(puVar5,0,0x400);
    uVar35 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
    fVar2 = *(float *)((longlong)puVar8 + 0x14);
    if (*(char *)(puVar8 + 3) != '\0') {
      uStack_91 = 1;
      pdb_140a787a0(param_2,0);
      pbStack_c0 = (byte *)*puVar8;
      uVar22 = *(ulonglong *)(pcStack_a0 + 8);
      uVar21 = *(ulonglong *)(pcStack_a0 + 0x10);
      uVar15 = uVar22;
      while (uVar35 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20),
            uVar15 != uVar22 + uVar21 * 0x28) {
        uVar1 = uVar15 + 0x28;
        pbVar10 = *(byte **)(uVar15 + 8);
        lVar17 = *(longlong *)(uVar15 + 0x10);
        pbVar18 = pbVar10;
        while (uVar15 = uVar1, pbVar18 != pbVar10 + lVar17 * 0x18) {
          pbStack_158 = pbVar18 + 0x18;
          pcStack_a8 = pcStack_178;
          pcStack_178 = (code *)0x0;
          pcStack_a0 = (code *)0x0;
          pbVar19 = pbStack_180;
          while (pcStack_a8 != pcStack_a0) {
            pcStack_a0 = pcStack_a0 + 1;
            pdb_140b673e0(pbVar19);
            pbVar19 = pbVar19 + 0x30;
          }
          uStack_91 = 1;
          (*pcStack_190)(pbVar18,&lStack_188);
          pbVar27 = pbStack_180 + (longlong)pcStack_178 * 0x30;
          pbVar19 = pbStack_180;
          while (pbVar18 = pbStack_158, pbVar19 != pbVar27) {
            uStack_91 = 1;
            plVar9 = (longlong *)(*param_3)(pbVar19);
            uVar35 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
            pbVar19 = pbVar19 + 0x30;
            if (plVar9 != (longlong *)0x0) {
              if ((byte *)*plVar9 == pbStack_c0) goto LAB_140b61d65;
              lVar14 = plVar9[1];
              uStack_91 = 1;
              in_stack_fffffffffffffdf8 = CONCAT44(uVar35,*(undefined4 *)(lVar14 + 0x28));
              pdb_140a79030(param_2,0,*(longlong *)(lVar14 + 0x18) + 0x10,
                            *(longlong *)(lVar14 + 0x18) + *(longlong *)(lVar14 + 0x20) * 0xc + 0x10
                            ,in_stack_fffffffffffffdf8,*(undefined1 *)(lVar14 + 0x2c),
                            *(undefined4 *)(lVar14 + 0x10),*(undefined4 *)(lVar14 + 0x14));
            }
          }
        }
      }
    }
LAB_140b61d65:
    if (_DAT_142e37848 <= fVar2) goto LAB_140b62200;
    if (*(char *)(puVar8 + 3) == '\0') {
      lVar17 = puVar8[1];
      uStack_91 = 1;
      pdb_140a79030(param_2,0,*(longlong *)(lVar17 + 0x18) + 0x10,
                    *(longlong *)(lVar17 + 0x18) + *(longlong *)(lVar17 + 0x20) * 0xc + 0x10,
                    CONCAT44(uVar35,*(undefined4 *)(lVar17 + 0x28)),*(undefined1 *)(lVar17 + 0x2c),
                    *(undefined4 *)(lVar17 + 0x10),*(undefined4 *)(lVar17 + 0x14));
      if (*(char *)((longlong)puVar8 + 0x1a) == '\x01') {
        lVar17 = puVar8[1];
        if (*(longlong *)(lVar17 + 0x20) == 0) {
          uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,0,&UNK_14305a810);
        }
        uStack_128 = *(undefined4 *)(*(longlong *)(lVar17 + 0x18) + 0x18);
        uVar6 = *(undefined8 *)(*(longlong *)(lVar17 + 0x18) + 0x10);
        auStack_130._0_4_ = (undefined4)uVar6;
        auStack_130._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_124 = *(undefined4 *)(lVar17 + 0x28);
        uStack_120 = CONCAT31(uStack_120._1_3_,1);
        uStack_11c = uStack_11c & 0xffffff00;
        uStack_91 = 1;
        pdb_141617b30(param_5,auStack_130,&UNK_14305a760);
      }
    }
    pub_142e32780(puVar5 + 0x40,0,0x200);
    lVar17 = puVar8[1];
    uStack_91 = 1;
    pdb_140a83c80(puVar5 + 0x40,*(longlong *)(lVar17 + 0x18) + 0x10,
                  *(longlong *)(lVar17 + 0x18) + *(longlong *)(lVar17 + 0x20) * 0xc + 0x10,
                  *(undefined4 *)(lVar17 + 0x28));
    uVar22 = puVar5[0x41];
    uVar21 = puVar5[0x42];
    uVar15 = puVar5[0x43];
    *(ulonglong *)(param_2 + 0x98) = *(ulonglong *)(param_2 + 0x98) | puVar5[0x40];
    *(ulonglong *)(param_2 + 0xa0) = *(ulonglong *)(param_2 + 0xa0) | uVar22;
    *(ulonglong *)(param_2 + 0xa8) = *(ulonglong *)(param_2 + 0xa8) | uVar21;
    *(ulonglong *)(param_2 + 0xb0) = *(ulonglong *)(param_2 + 0xb0) | uVar15;
    uVar15 = puVar5[0x45];
    uVar22 = puVar5[0x46];
    uVar21 = puVar5[0x47];
    *(ulonglong *)(param_2 + 0xb8) = puVar5[0x44] | *(ulonglong *)(param_2 + 0xb8);
    *(ulonglong *)(param_2 + 0xc0) = uVar15 | *(ulonglong *)(param_2 + 0xc0);
    *(ulonglong *)(param_2 + 200) = uVar22 | *(ulonglong *)(param_2 + 200);
    *(ulonglong *)(param_2 + 0xd0) = uVar21 | *(ulonglong *)(param_2 + 0xd0);
    uVar22 = puVar5[0x49];
    uVar21 = puVar5[0x4a];
    uVar15 = puVar5[0x4b];
    *(ulonglong *)(param_2 + 0xd8) = *(ulonglong *)(param_2 + 0xd8) | puVar5[0x48];
    *(ulonglong *)(param_2 + 0xe0) = *(ulonglong *)(param_2 + 0xe0) | uVar22;
    *(ulonglong *)(param_2 + 0xe8) = *(ulonglong *)(param_2 + 0xe8) | uVar21;
    *(ulonglong *)(param_2 + 0xf0) = *(ulonglong *)(param_2 + 0xf0) | uVar15;
    uVar22 = puVar5[0x4d];
    uVar21 = puVar5[0x4e];
    uVar15 = puVar5[0x4f];
    *(ulonglong *)(param_2 + 0xf8) = *(ulonglong *)(param_2 + 0xf8) | puVar5[0x4c];
    *(ulonglong *)(param_2 + 0x100) = *(ulonglong *)(param_2 + 0x100) | uVar22;
    *(ulonglong *)(param_2 + 0x108) = *(ulonglong *)(param_2 + 0x108) | uVar21;
    *(ulonglong *)(param_2 + 0x110) = *(ulonglong *)(param_2 + 0x110) | uVar15;
    uVar22 = puVar5[0x51];
    uVar21 = puVar5[0x52];
    uVar15 = puVar5[0x53];
    *(ulonglong *)(param_2 + 0x118) = *(ulonglong *)(param_2 + 0x118) | puVar5[0x50];
    *(ulonglong *)(param_2 + 0x120) = *(ulonglong *)(param_2 + 0x120) | uVar22;
    *(ulonglong *)(param_2 + 0x128) = *(ulonglong *)(param_2 + 0x128) | uVar21;
    *(ulonglong *)(param_2 + 0x130) = *(ulonglong *)(param_2 + 0x130) | uVar15;
    uVar22 = puVar5[0x55];
    uVar21 = puVar5[0x56];
    uVar15 = puVar5[0x57];
    *(ulonglong *)(param_2 + 0x138) = *(ulonglong *)(param_2 + 0x138) | puVar5[0x54];
    *(ulonglong *)(param_2 + 0x140) = *(ulonglong *)(param_2 + 0x140) | uVar22;
    *(ulonglong *)(param_2 + 0x148) = *(ulonglong *)(param_2 + 0x148) | uVar21;
    *(ulonglong *)(param_2 + 0x150) = *(ulonglong *)(param_2 + 0x150) | uVar15;
    uVar22 = puVar5[0x59];
    uVar21 = puVar5[0x5a];
    uVar15 = puVar5[0x5b];
    *(ulonglong *)(param_2 + 0x158) = *(ulonglong *)(param_2 + 0x158) | puVar5[0x58];
    *(ulonglong *)(param_2 + 0x160) = *(ulonglong *)(param_2 + 0x160) | uVar22;
    *(ulonglong *)(param_2 + 0x168) = *(ulonglong *)(param_2 + 0x168) | uVar21;
    *(ulonglong *)(param_2 + 0x170) = *(ulonglong *)(param_2 + 0x170) | uVar15;
    uVar22 = puVar5[0x5d];
    uVar21 = puVar5[0x5e];
    uVar15 = puVar5[0x5f];
    *(ulonglong *)(param_2 + 0x178) = *(ulonglong *)(param_2 + 0x178) | puVar5[0x5c];
    *(ulonglong *)(param_2 + 0x180) = *(ulonglong *)(param_2 + 0x180) | uVar22;
    *(ulonglong *)(param_2 + 0x188) = *(ulonglong *)(param_2 + 0x188) | uVar21;
    *(ulonglong *)(param_2 + 400) = *(ulonglong *)(param_2 + 400) | uVar15;
    uVar22 = puVar5[0x61];
    uVar21 = puVar5[0x62];
    uVar15 = puVar5[99];
    *(ulonglong *)(param_2 + 0x198) = *(ulonglong *)(param_2 + 0x198) | puVar5[0x60];
    *(ulonglong *)(param_2 + 0x1a0) = *(ulonglong *)(param_2 + 0x1a0) | uVar22;
    *(ulonglong *)(param_2 + 0x1a8) = *(ulonglong *)(param_2 + 0x1a8) | uVar21;
    *(ulonglong *)(param_2 + 0x1b0) = *(ulonglong *)(param_2 + 0x1b0) | uVar15;
    uVar22 = puVar5[0x65];
    uVar21 = puVar5[0x66];
    uVar15 = puVar5[0x67];
    *(ulonglong *)(param_2 + 0x1b8) = *(ulonglong *)(param_2 + 0x1b8) | puVar5[100];
    *(ulonglong *)(param_2 + 0x1c0) = *(ulonglong *)(param_2 + 0x1c0) | uVar22;
    *(ulonglong *)(param_2 + 0x1c8) = *(ulonglong *)(param_2 + 0x1c8) | uVar21;
    *(ulonglong *)(param_2 + 0x1d0) = *(ulonglong *)(param_2 + 0x1d0) | uVar15;
    uVar22 = puVar5[0x69];
    uVar21 = puVar5[0x6a];
    uVar15 = puVar5[0x6b];
    *(ulonglong *)(param_2 + 0x1d8) = *(ulonglong *)(param_2 + 0x1d8) | puVar5[0x68];
    *(ulonglong *)(param_2 + 0x1e0) = *(ulonglong *)(param_2 + 0x1e0) | uVar22;
    *(ulonglong *)(param_2 + 0x1e8) = *(ulonglong *)(param_2 + 0x1e8) | uVar21;
    *(ulonglong *)(param_2 + 0x1f0) = *(ulonglong *)(param_2 + 0x1f0) | uVar15;
    uVar22 = puVar5[0x6d];
    uVar21 = puVar5[0x6e];
    uVar15 = puVar5[0x6f];
    *(ulonglong *)(param_2 + 0x1f8) = *(ulonglong *)(param_2 + 0x1f8) | puVar5[0x6c];
    *(ulonglong *)(param_2 + 0x200) = *(ulonglong *)(param_2 + 0x200) | uVar22;
    *(ulonglong *)(param_2 + 0x208) = *(ulonglong *)(param_2 + 0x208) | uVar21;
    *(ulonglong *)(param_2 + 0x210) = *(ulonglong *)(param_2 + 0x210) | uVar15;
    uVar22 = puVar5[0x71];
    uVar21 = puVar5[0x72];
    uVar15 = puVar5[0x73];
    *(ulonglong *)(param_2 + 0x218) = *(ulonglong *)(param_2 + 0x218) | puVar5[0x70];
    *(ulonglong *)(param_2 + 0x220) = *(ulonglong *)(param_2 + 0x220) | uVar22;
    *(ulonglong *)(param_2 + 0x228) = *(ulonglong *)(param_2 + 0x228) | uVar21;
    *(ulonglong *)(param_2 + 0x230) = *(ulonglong *)(param_2 + 0x230) | uVar15;
    uVar22 = puVar5[0x75];
    uVar21 = puVar5[0x76];
    uVar15 = puVar5[0x77];
    *(ulonglong *)(param_2 + 0x238) = *(ulonglong *)(param_2 + 0x238) | puVar5[0x74];
    *(ulonglong *)(param_2 + 0x240) = *(ulonglong *)(param_2 + 0x240) | uVar22;
    *(ulonglong *)(param_2 + 0x248) = *(ulonglong *)(param_2 + 0x248) | uVar21;
    *(ulonglong *)(param_2 + 0x250) = *(ulonglong *)(param_2 + 0x250) | uVar15;
    uVar22 = puVar5[0x79];
    uVar21 = puVar5[0x7a];
    uVar15 = puVar5[0x7b];
    *(ulonglong *)(param_2 + 600) = *(ulonglong *)(param_2 + 600) | puVar5[0x78];
    *(ulonglong *)(param_2 + 0x260) = *(ulonglong *)(param_2 + 0x260) | uVar22;
    *(ulonglong *)(param_2 + 0x268) = *(ulonglong *)(param_2 + 0x268) | uVar21;
    *(ulonglong *)(param_2 + 0x270) = *(ulonglong *)(param_2 + 0x270) | uVar15;
    uVar15 = puVar5[0x7d];
    uVar22 = puVar5[0x7e];
    uVar21 = puVar5[0x7f];
    *(ulonglong *)(param_2 + 0x278) = *(ulonglong *)(param_2 + 0x278) | puVar5[0x7c];
    *(ulonglong *)(param_2 + 0x280) = *(ulonglong *)(param_2 + 0x280) | uVar15;
    *(ulonglong *)(param_2 + 0x288) = *(ulonglong *)(param_2 + 0x288) | uVar22;
    *(ulonglong *)(param_2 + 0x290) = *(ulonglong *)(param_2 + 0x290) | uVar21;
    uStack_91 = 1;
    puVar8 = (undefined8 *)pdb_140bf45b0(uVar16);
    if (puVar8 == (undefined8 *)0x0) {
LAB_140b638c5:
      uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14305a828);
    }
    uStack_91 = 1;
    lVar17 = (**(code **)(puVar8[1] + 0x18))(*puVar8);
    if (lVar17 == 0) goto LAB_140b638c5;
    uStack_91 = 1;
    pdb_140a78ae0(param_2,0,*(undefined8 *)(lVar17 + 8),*(undefined8 *)(lVar17 + 0x10));
LAB_140b6340e:
    pcVar23 = pcStack_160;
    if (pcStack_160 == pcStack_170) {
      uStack_91 = 1;
      pdb_142d896b0(&pcStack_170);
    }
    *(ulonglong *)(pcStack_168 + (longlong)pcVar23 * 8) = uVar13;
    pcStack_160 = pcVar23 + 1;
  }
  else {
LAB_140b62200:
    fVar33 = fVar28 * *(float *)(uStack_138 + 0x28) + *(float *)(puVar8 + 2);
    *(float *)(puVar8 + 2) = fVar33;
    fVar2 = _DAT_142e36f28;
    fVar33 = fVar33 / *(float *)((longlong)puVar8 + 0x14);
    fVar28 = 0.0;
    if (0.0 <= fVar33) {
      fVar28 = fVar33;
    }
    fVar33 = _DAT_142e36f28;
    if (fVar28 <= _DAT_142e36f28) {
      fVar33 = fVar28;
    }
    pub_142e32780(puVar5 + 0x40,0);
    pcVar23 = (code *)puVar8[1];
    auStack_130 = (undefined1  [8])&uStack_1a8;
    if (*(char *)(puVar8 + 3) == '\0') {
      uStack_91 = 1;
      fVar28 = (float)pdb_140dedc70();
      cVar26 = pcVar23[0x2c];
      uVar34 = *(undefined4 *)(pcVar23 + 0x28);
      if (_DAT_142e37848 <= fVar28) {
        uVar22 = *(ulonglong *)(pcVar23 + 0x20);
        if (uVar22 == 0) {
          pbVar10 = (byte *)0x4;
        }
        else {
          pbStack_c0 = (byte *)CONCAT71(pbStack_c0._1_7_,cVar26);
          uVar21 = *(ulonglong *)(pcVar23 + 0x18);
          pcStack_a0 = pcVar23;
          pdb_14007ee60();
          pcStack_a8 = (code *)(uVar22 * 0xc);
          pbVar10 = pub_1406abab0(uVar22 * 0xc,4);
          if (pbVar10 == (byte *)0x0) {
            uStack_91 = 1;
            pdb_142dc7e2a(4,pcStack_a8);
            goto LAB_140b63929;
          }
          if (uVar22 == 1) {
            uVar15 = 0;
LAB_140b626c9:
            lVar17 = uVar15 * 0xc;
            *(undefined4 *)(pbVar10 + lVar17 + 8) = *(undefined4 *)(uVar21 + 0x18 + lVar17);
            *(undefined8 *)(pbVar10 + lVar17) = *(undefined8 *)(uVar21 + 0x10 + lVar17);
          }
          else {
            uVar15 = 0;
            lVar17 = 0;
            do {
              *(undefined4 *)(pbVar10 + lVar17 + 8) = *(undefined4 *)(uVar21 + 0x18 + lVar17);
              *(undefined8 *)(pbVar10 + lVar17) = *(undefined8 *)(uVar21 + 0x10 + lVar17);
              *(undefined8 *)(pbVar10 + lVar17 + 0xc) = *(undefined8 *)(uVar21 + 0x1c + lVar17);
              *(undefined4 *)(pbVar10 + lVar17 + 0x14) = *(undefined4 *)(uVar21 + 0x24 + lVar17);
              uVar15 = uVar15 + 2;
              lVar17 = lVar17 + 0x18;
            } while ((uVar22 & 0xfffffffffffffffe) != uVar15);
            if ((uVar22 & 1) != 0) goto LAB_140b626c9;
          }
          pcVar23 = pcStack_a0;
          cVar26 = pbStack_c0._0_1_;
        }
        uStack_91 = 1;
        uStack_f8 = uVar22;
        pbStack_f0 = pbVar10;
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
        uStack_e8 = CONCAT44(uStack_11c,uStack_120);
        uStack_d8 = (undefined7)CONCAT71(uStack_10f,uStack_110);
        uStack_d1 = (undefined1)((uint7)uStack_10f >> 0x30);
        uStack_d0 = (undefined7)uStack_108;
        uStack_c9 = (undefined1)((ulonglong)uStack_108 >> 0x38);
        uStack_e0 = (undefined7)CONCAT71(uStack_117,uStack_118);
        uStack_d9 = (undefined1)((uint7)uStack_117 >> 0x30);
        uStack_1a8 = CONCAT44(uStack_1a8._4_4_,fVar28);
        if ((fVar28 < 0.0) || (fVar2 < fVar28)) {
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
        pcVar25 = (code *)CONCAT44(auStack_130._4_4_,auStack_130._0_4_);
        if (SBORROW8(0,(longlong)pcVar25)) {
          if (uStack_f8 != 0) {
            pub_1406abac0(pbStack_f0,uStack_f8 * 0xc,4);
          }
          lVar17 = CONCAT17(uStack_d9,uStack_e0);
          pcVar20 = (code *)0x4;
          uVar21 = 0;
          pcStack_a8 = (code *)0x0;
        }
        else {
          pcVar20 = (code *)CONCAT44(uStack_124,uStack_128);
          uVar21 = CONCAT44(uStack_11c,uStack_120);
          lVar17 = CONCAT71(uStack_117,uStack_118);
          pbStack_c0 = (byte *)CONCAT71(uStack_10f,uStack_110);
          uVar22 = *(ulonglong *)(pcVar23 + 0x20);
          uVar15 = 0;
          if (2 < uVar21) {
            uVar15 = uVar21 - 3;
          }
          pcStack_a8 = pcVar25;
          if (uVar22 < uVar15) {
            pcStack_b8 = (code *)lVar17;
            pcStack_a0 = pcVar20;
            pdb_142dc8420(uVar15,uVar22,uVar22,&UNK_14305a908);
LAB_140b63929:
                    /* WARNING: Does not return */
            pcVar23 = (code *)invalidInstructionException();
            (*pcVar23)();
          }
          if (lVar17 != 0) {
            pub_1406abac0(pbStack_c0,lVar17 << 2,4);
          }
          if (uStack_f8 != 0) {
            pub_1406abac0(pbStack_f0,uStack_f8 * 0xc,4);
          }
          lVar17 = CONCAT17(uStack_d9,uStack_e0);
        }
        if (lVar17 != 0) {
          pub_1406abac0((byte *)CONCAT17(uStack_d1,uStack_d8),lVar17 << 2,4);
        }
      }
      else {
        pcVar20 = (code *)0x4;
        uVar21 = 0;
        pcStack_a8 = (code *)0x0;
      }
      pcStack_a0 = pcVar20;
      pdb_140a83c80(puVar5 + 0x40,pcVar20,pcVar20 + uVar21 * 0xc,*(undefined4 *)(puVar8[1] + 0x28));
    }
    else {
      uStack_91 = 1;
      fVar28 = (float)pdb_140dedc70(fVar2 - fVar33);
      cVar26 = pcVar23[0x2c];
      uVar34 = *(undefined4 *)(pcVar23 + 0x28);
      uVar22 = *(ulonglong *)(pcVar23 + 0x18);
      uVar15 = *(ulonglong *)(pcVar23 + 0x20);
      pcVar25 = (code *)(uVar22 + 0x10);
      if (_DAT_142e37848 <= fVar28) {
        pbStack_c0 = (byte *)CONCAT71(pbStack_c0._1_7_,cVar26);
        uStack_138 = uVar15;
        if (uVar15 == 0) {
          pbVar10 = (byte *)0x4;
        }
        else {
          pdb_14007ee60();
          pcStack_a0 = (code *)(uVar15 * 0xc);
          pbVar10 = pub_1406abab0(uVar15 * 0xc,4);
          if (pbVar10 == (byte *)0x0) {
            uStack_91 = 1;
            pdb_142dc7e2a(4,pcStack_a0);
            goto LAB_140b63929;
          }
          cVar26 = pbStack_c0._0_1_;
          if (uStack_138 == 1) {
            uVar21 = 0;
          }
          else {
            uVar21 = 0;
            lVar17 = 0;
            do {
              *(undefined4 *)(pbVar10 + lVar17 + 8) = *(undefined4 *)(uVar22 + 0x18 + lVar17);
              *(undefined8 *)(pbVar10 + lVar17) = *(undefined8 *)(pcVar25 + lVar17);
              *(undefined8 *)(pbVar10 + lVar17 + 0xc) = *(undefined8 *)(uVar22 + 0x1c + lVar17);
              *(undefined4 *)(pbVar10 + lVar17 + 0x14) = *(undefined4 *)(uVar22 + 0x24 + lVar17);
              uVar21 = uVar21 + 2;
              lVar17 = lVar17 + 0x18;
            } while ((uStack_138 & 0xfffffffffffffffe) != uVar21);
            if ((uStack_138 & 1) == 0) goto LAB_140b62424;
          }
          lVar17 = uVar21 * 0xc;
          *(undefined4 *)(pbVar10 + lVar17 + 8) = *(undefined4 *)(uVar22 + 0x18 + lVar17);
          *(undefined8 *)(pbVar10 + lVar17) = *(undefined8 *)(pcVar25 + lVar17);
        }
LAB_140b62424:
        uStack_91 = 1;
        uStack_f8 = uStack_138;
        pbStack_f0 = pbVar10;
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
        uStack_e8 = CONCAT44(uStack_11c,uStack_120);
        uStack_d8 = (undefined7)CONCAT71(uStack_10f,uStack_110);
        uStack_d1 = (undefined1)((uint7)uStack_10f >> 0x30);
        uStack_d0 = (undefined7)uStack_108;
        uStack_c9 = (undefined1)((ulonglong)uStack_108 >> 0x38);
        uStack_e0 = (undefined7)CONCAT71(uStack_117,uStack_118);
        uStack_d9 = (undefined1)((uint7)uStack_117 >> 0x30);
        uStack_1a8 = CONCAT44(uStack_1a8._4_4_,fVar28);
        if ((fVar28 < 0.0) || (fVar2 < fVar28)) {
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
        pcVar20 = (code *)CONCAT44(auStack_130._4_4_,auStack_130._0_4_);
        if (SBORROW8(0,(longlong)pcVar20)) {
          if (uStack_f8 != 0) {
            pub_1406abac0(pbStack_f0,uStack_f8 * 0xc,4);
          }
          lVar17 = CONCAT17(uStack_d9,uStack_e0);
          pcStack_a0 = (code *)0x4;
          pcStack_a8 = (code *)0x0;
          uVar21 = 0;
        }
        else {
          pcStack_a0 = (code *)CONCAT44(uStack_124,uStack_128);
          uVar21 = CONCAT44(uStack_11c,uStack_120);
          lVar17 = CONCAT71(uStack_117,uStack_118);
          pbStack_158 = (byte *)CONCAT71(uStack_10f,uStack_110);
          uVar22 = *(ulonglong *)(pcVar23 + 0x20);
          uVar15 = 0;
          if (2 < uVar21) {
            uVar15 = uVar21 - 3;
          }
          uStack_138 = uVar22 - uVar15;
          pcStack_a8 = pcVar20;
          if (uVar22 < uVar15) {
            pcStack_b8 = (code *)lVar17;
            pdb_142dc8420(uVar15,uVar22,uVar22,&UNK_14305a908);
            goto LAB_140b63929;
          }
          pcStack_190 = *(code **)(pcVar23 + 0x18);
          if (lVar17 != 0) {
            pub_1406abac0(pbStack_158,lVar17 << 2,4);
          }
          if (uStack_f8 != 0) {
            pub_1406abac0(pbStack_f0,uStack_f8 * 0xc,4);
          }
          pcVar25 = pcStack_190 + uVar15 * 0xc + 0x10;
          lVar17 = CONCAT17(uStack_d9,uStack_e0);
          cVar26 = pbStack_c0._0_1_;
        }
        uVar15 = uStack_138;
        if (lVar17 != 0) {
          pub_1406abac0((byte *)CONCAT17(uStack_d1,uStack_d8),lVar17 << 2,4);
          uVar15 = uStack_138;
        }
      }
      else {
        pcStack_a0 = (code *)0x4;
        pcStack_a8 = (code *)0x0;
        uVar21 = 0;
      }
      pdb_140a83c80(puVar5 + 0x40,pcVar25,pcVar25 + uVar15 * 0xc,*(undefined4 *)(puVar8[1] + 0x28));
    }
    uVar22 = puVar5[0x41];
    uVar15 = puVar5[0x42];
    uVar1 = puVar5[0x43];
    *(ulonglong *)(param_2 + 0x98) = *(ulonglong *)(param_2 + 0x98) | puVar5[0x40];
    *(ulonglong *)(param_2 + 0xa0) = *(ulonglong *)(param_2 + 0xa0) | uVar22;
    *(ulonglong *)(param_2 + 0xa8) = *(ulonglong *)(param_2 + 0xa8) | uVar15;
    *(ulonglong *)(param_2 + 0xb0) = *(ulonglong *)(param_2 + 0xb0) | uVar1;
    uVar22 = puVar5[0x45];
    uVar15 = puVar5[0x46];
    uVar1 = puVar5[0x47];
    *(ulonglong *)(param_2 + 0xb8) = puVar5[0x44] | *(ulonglong *)(param_2 + 0xb8);
    *(ulonglong *)(param_2 + 0xc0) = uVar22 | *(ulonglong *)(param_2 + 0xc0);
    *(ulonglong *)(param_2 + 200) = uVar15 | *(ulonglong *)(param_2 + 200);
    *(ulonglong *)(param_2 + 0xd0) = uVar1 | *(ulonglong *)(param_2 + 0xd0);
    uVar22 = puVar5[0x49];
    uVar15 = puVar5[0x4a];
    uVar1 = puVar5[0x4b];
    *(ulonglong *)(param_2 + 0xd8) = *(ulonglong *)(param_2 + 0xd8) | puVar5[0x48];
    *(ulonglong *)(param_2 + 0xe0) = *(ulonglong *)(param_2 + 0xe0) | uVar22;
    *(ulonglong *)(param_2 + 0xe8) = *(ulonglong *)(param_2 + 0xe8) | uVar15;
    *(ulonglong *)(param_2 + 0xf0) = *(ulonglong *)(param_2 + 0xf0) | uVar1;
    uVar22 = puVar5[0x4d];
    uVar15 = puVar5[0x4e];
    uVar1 = puVar5[0x4f];
    *(ulonglong *)(param_2 + 0xf8) = *(ulonglong *)(param_2 + 0xf8) | puVar5[0x4c];
    *(ulonglong *)(param_2 + 0x100) = *(ulonglong *)(param_2 + 0x100) | uVar22;
    *(ulonglong *)(param_2 + 0x108) = *(ulonglong *)(param_2 + 0x108) | uVar15;
    *(ulonglong *)(param_2 + 0x110) = *(ulonglong *)(param_2 + 0x110) | uVar1;
    uVar22 = puVar5[0x51];
    uVar15 = puVar5[0x52];
    uVar1 = puVar5[0x53];
    *(ulonglong *)(param_2 + 0x118) = *(ulonglong *)(param_2 + 0x118) | puVar5[0x50];
    *(ulonglong *)(param_2 + 0x120) = *(ulonglong *)(param_2 + 0x120) | uVar22;
    *(ulonglong *)(param_2 + 0x128) = *(ulonglong *)(param_2 + 0x128) | uVar15;
    *(ulonglong *)(param_2 + 0x130) = *(ulonglong *)(param_2 + 0x130) | uVar1;
    uVar22 = puVar5[0x55];
    uVar15 = puVar5[0x56];
    uVar1 = puVar5[0x57];
    *(ulonglong *)(param_2 + 0x138) = *(ulonglong *)(param_2 + 0x138) | puVar5[0x54];
    *(ulonglong *)(param_2 + 0x140) = *(ulonglong *)(param_2 + 0x140) | uVar22;
    *(ulonglong *)(param_2 + 0x148) = *(ulonglong *)(param_2 + 0x148) | uVar15;
    *(ulonglong *)(param_2 + 0x150) = *(ulonglong *)(param_2 + 0x150) | uVar1;
    uVar22 = puVar5[0x59];
    uVar15 = puVar5[0x5a];
    uVar1 = puVar5[0x5b];
    *(ulonglong *)(param_2 + 0x158) = *(ulonglong *)(param_2 + 0x158) | puVar5[0x58];
    *(ulonglong *)(param_2 + 0x160) = *(ulonglong *)(param_2 + 0x160) | uVar22;
    *(ulonglong *)(param_2 + 0x168) = *(ulonglong *)(param_2 + 0x168) | uVar15;
    *(ulonglong *)(param_2 + 0x170) = *(ulonglong *)(param_2 + 0x170) | uVar1;
    uVar22 = puVar5[0x5d];
    uVar15 = puVar5[0x5e];
    uVar1 = puVar5[0x5f];
    *(ulonglong *)(param_2 + 0x178) = *(ulonglong *)(param_2 + 0x178) | puVar5[0x5c];
    *(ulonglong *)(param_2 + 0x180) = *(ulonglong *)(param_2 + 0x180) | uVar22;
    *(ulonglong *)(param_2 + 0x188) = *(ulonglong *)(param_2 + 0x188) | uVar15;
    *(ulonglong *)(param_2 + 400) = *(ulonglong *)(param_2 + 400) | uVar1;
    uVar22 = puVar5[0x61];
    uVar15 = puVar5[0x62];
    uVar1 = puVar5[99];
    *(ulonglong *)(param_2 + 0x198) = *(ulonglong *)(param_2 + 0x198) | puVar5[0x60];
    *(ulonglong *)(param_2 + 0x1a0) = *(ulonglong *)(param_2 + 0x1a0) | uVar22;
    *(ulonglong *)(param_2 + 0x1a8) = *(ulonglong *)(param_2 + 0x1a8) | uVar15;
    *(ulonglong *)(param_2 + 0x1b0) = *(ulonglong *)(param_2 + 0x1b0) | uVar1;
    uVar22 = puVar5[0x65];
    uVar15 = puVar5[0x66];
    uVar1 = puVar5[0x67];
    *(ulonglong *)(param_2 + 0x1b8) = *(ulonglong *)(param_2 + 0x1b8) | puVar5[100];
    *(ulonglong *)(param_2 + 0x1c0) = *(ulonglong *)(param_2 + 0x1c0) | uVar22;
    *(ulonglong *)(param_2 + 0x1c8) = *(ulonglong *)(param_2 + 0x1c8) | uVar15;
    *(ulonglong *)(param_2 + 0x1d0) = *(ulonglong *)(param_2 + 0x1d0) | uVar1;
    uVar22 = puVar5[0x69];
    uVar15 = puVar5[0x6a];
    uVar1 = puVar5[0x6b];
    *(ulonglong *)(param_2 + 0x1d8) = *(ulonglong *)(param_2 + 0x1d8) | puVar5[0x68];
    *(ulonglong *)(param_2 + 0x1e0) = *(ulonglong *)(param_2 + 0x1e0) | uVar22;
    *(ulonglong *)(param_2 + 0x1e8) = *(ulonglong *)(param_2 + 0x1e8) | uVar15;
    *(ulonglong *)(param_2 + 0x1f0) = *(ulonglong *)(param_2 + 0x1f0) | uVar1;
    uVar22 = puVar5[0x6d];
    uVar15 = puVar5[0x6e];
    uVar1 = puVar5[0x6f];
    *(ulonglong *)(param_2 + 0x1f8) = *(ulonglong *)(param_2 + 0x1f8) | puVar5[0x6c];
    *(ulonglong *)(param_2 + 0x200) = *(ulonglong *)(param_2 + 0x200) | uVar22;
    *(ulonglong *)(param_2 + 0x208) = *(ulonglong *)(param_2 + 0x208) | uVar15;
    *(ulonglong *)(param_2 + 0x210) = *(ulonglong *)(param_2 + 0x210) | uVar1;
    uVar22 = puVar5[0x71];
    uVar15 = puVar5[0x72];
    uVar1 = puVar5[0x73];
    *(ulonglong *)(param_2 + 0x218) = *(ulonglong *)(param_2 + 0x218) | puVar5[0x70];
    *(ulonglong *)(param_2 + 0x220) = *(ulonglong *)(param_2 + 0x220) | uVar22;
    *(ulonglong *)(param_2 + 0x228) = *(ulonglong *)(param_2 + 0x228) | uVar15;
    *(ulonglong *)(param_2 + 0x230) = *(ulonglong *)(param_2 + 0x230) | uVar1;
    uVar22 = puVar5[0x75];
    uVar15 = puVar5[0x76];
    uVar1 = puVar5[0x77];
    *(ulonglong *)(param_2 + 0x238) = *(ulonglong *)(param_2 + 0x238) | puVar5[0x74];
    *(ulonglong *)(param_2 + 0x240) = *(ulonglong *)(param_2 + 0x240) | uVar22;
    *(ulonglong *)(param_2 + 0x248) = *(ulonglong *)(param_2 + 0x248) | uVar15;
    *(ulonglong *)(param_2 + 0x250) = *(ulonglong *)(param_2 + 0x250) | uVar1;
    uVar22 = puVar5[0x79];
    uVar15 = puVar5[0x7a];
    uVar1 = puVar5[0x7b];
    *(ulonglong *)(param_2 + 600) = *(ulonglong *)(param_2 + 600) | puVar5[0x78];
    *(ulonglong *)(param_2 + 0x260) = *(ulonglong *)(param_2 + 0x260) | uVar22;
    *(ulonglong *)(param_2 + 0x268) = *(ulonglong *)(param_2 + 0x268) | uVar15;
    *(ulonglong *)(param_2 + 0x270) = *(ulonglong *)(param_2 + 0x270) | uVar1;
    uVar22 = puVar5[0x7d];
    uVar15 = puVar5[0x7e];
    uVar1 = puVar5[0x7f];
    *(ulonglong *)(param_2 + 0x278) = *(ulonglong *)(param_2 + 0x278) | puVar5[0x7c];
    *(ulonglong *)(param_2 + 0x280) = *(ulonglong *)(param_2 + 0x280) | uVar22;
    *(ulonglong *)(param_2 + 0x288) = *(ulonglong *)(param_2 + 0x288) | uVar15;
    *(ulonglong *)(param_2 + 0x290) = *(ulonglong *)(param_2 + 0x290) | uVar1;
    uVar22 = puVar5[1];
    uVar15 = puVar5[2];
    uVar1 = puVar5[3];
    *(ulonglong *)(param_2 + 0x98) = *(ulonglong *)(param_2 + 0x98) | *puVar5;
    *(ulonglong *)(param_2 + 0xa0) = *(ulonglong *)(param_2 + 0xa0) | uVar22;
    *(ulonglong *)(param_2 + 0xa8) = *(ulonglong *)(param_2 + 0xa8) | uVar15;
    *(ulonglong *)(param_2 + 0xb0) = *(ulonglong *)(param_2 + 0xb0) | uVar1;
    uVar22 = puVar5[5];
    uVar15 = puVar5[6];
    uVar1 = puVar5[7];
    *(ulonglong *)(param_2 + 0xb8) = *(ulonglong *)(param_2 + 0xb8) | puVar5[4];
    *(ulonglong *)(param_2 + 0xc0) = *(ulonglong *)(param_2 + 0xc0) | uVar22;
    *(ulonglong *)(param_2 + 200) = *(ulonglong *)(param_2 + 200) | uVar15;
    *(ulonglong *)(param_2 + 0xd0) = *(ulonglong *)(param_2 + 0xd0) | uVar1;
    uVar22 = puVar5[9];
    uVar15 = puVar5[10];
    uVar1 = puVar5[0xb];
    *(ulonglong *)(param_2 + 0xd8) = *(ulonglong *)(param_2 + 0xd8) | puVar5[8];
    *(ulonglong *)(param_2 + 0xe0) = *(ulonglong *)(param_2 + 0xe0) | uVar22;
    *(ulonglong *)(param_2 + 0xe8) = *(ulonglong *)(param_2 + 0xe8) | uVar15;
    *(ulonglong *)(param_2 + 0xf0) = *(ulonglong *)(param_2 + 0xf0) | uVar1;
    uVar22 = puVar5[0xd];
    uVar15 = puVar5[0xe];
    uVar1 = puVar5[0xf];
    *(ulonglong *)(param_2 + 0xf8) = *(ulonglong *)(param_2 + 0xf8) | puVar5[0xc];
    *(ulonglong *)(param_2 + 0x100) = *(ulonglong *)(param_2 + 0x100) | uVar22;
    *(ulonglong *)(param_2 + 0x108) = *(ulonglong *)(param_2 + 0x108) | uVar15;
    *(ulonglong *)(param_2 + 0x110) = *(ulonglong *)(param_2 + 0x110) | uVar1;
    uVar22 = puVar5[0x11];
    uVar15 = puVar5[0x12];
    uVar1 = puVar5[0x13];
    *(ulonglong *)(param_2 + 0x118) = *(ulonglong *)(param_2 + 0x118) | puVar5[0x10];
    *(ulonglong *)(param_2 + 0x120) = *(ulonglong *)(param_2 + 0x120) | uVar22;
    *(ulonglong *)(param_2 + 0x128) = *(ulonglong *)(param_2 + 0x128) | uVar15;
    *(ulonglong *)(param_2 + 0x130) = *(ulonglong *)(param_2 + 0x130) | uVar1;
    uVar22 = puVar5[0x15];
    uVar15 = puVar5[0x16];
    uVar1 = puVar5[0x17];
    *(ulonglong *)(param_2 + 0x138) = *(ulonglong *)(param_2 + 0x138) | puVar5[0x14];
    *(ulonglong *)(param_2 + 0x140) = *(ulonglong *)(param_2 + 0x140) | uVar22;
    *(ulonglong *)(param_2 + 0x148) = *(ulonglong *)(param_2 + 0x148) | uVar15;
    *(ulonglong *)(param_2 + 0x150) = *(ulonglong *)(param_2 + 0x150) | uVar1;
    uVar22 = puVar5[0x19];
    uVar15 = puVar5[0x1a];
    uVar1 = puVar5[0x1b];
    *(ulonglong *)(param_2 + 0x158) = *(ulonglong *)(param_2 + 0x158) | puVar5[0x18];
    *(ulonglong *)(param_2 + 0x160) = *(ulonglong *)(param_2 + 0x160) | uVar22;
    *(ulonglong *)(param_2 + 0x168) = *(ulonglong *)(param_2 + 0x168) | uVar15;
    *(ulonglong *)(param_2 + 0x170) = *(ulonglong *)(param_2 + 0x170) | uVar1;
    uVar22 = puVar5[0x1d];
    uVar15 = puVar5[0x1e];
    uVar1 = puVar5[0x1f];
    *(ulonglong *)(param_2 + 0x178) = *(ulonglong *)(param_2 + 0x178) | puVar5[0x1c];
    *(ulonglong *)(param_2 + 0x180) = *(ulonglong *)(param_2 + 0x180) | uVar22;
    *(ulonglong *)(param_2 + 0x188) = *(ulonglong *)(param_2 + 0x188) | uVar15;
    *(ulonglong *)(param_2 + 400) = *(ulonglong *)(param_2 + 400) | uVar1;
    uVar22 = puVar5[0x21];
    uVar15 = puVar5[0x22];
    uVar1 = puVar5[0x23];
    *(ulonglong *)(param_2 + 0x198) = *(ulonglong *)(param_2 + 0x198) | puVar5[0x20];
    *(ulonglong *)(param_2 + 0x1a0) = *(ulonglong *)(param_2 + 0x1a0) | uVar22;
    *(ulonglong *)(param_2 + 0x1a8) = *(ulonglong *)(param_2 + 0x1a8) | uVar15;
    *(ulonglong *)(param_2 + 0x1b0) = *(ulonglong *)(param_2 + 0x1b0) | uVar1;
    uVar22 = puVar5[0x25];
    uVar15 = puVar5[0x26];
    uVar1 = puVar5[0x27];
    *(ulonglong *)(param_2 + 0x1b8) = *(ulonglong *)(param_2 + 0x1b8) | puVar5[0x24];
    *(ulonglong *)(param_2 + 0x1c0) = *(ulonglong *)(param_2 + 0x1c0) | uVar22;
    *(ulonglong *)(param_2 + 0x1c8) = *(ulonglong *)(param_2 + 0x1c8) | uVar15;
    *(ulonglong *)(param_2 + 0x1d0) = *(ulonglong *)(param_2 + 0x1d0) | uVar1;
    uVar22 = puVar5[0x29];
    uVar15 = puVar5[0x2a];
    uVar1 = puVar5[0x2b];
    *(ulonglong *)(param_2 + 0x1d8) = *(ulonglong *)(param_2 + 0x1d8) | puVar5[0x28];
    *(ulonglong *)(param_2 + 0x1e0) = *(ulonglong *)(param_2 + 0x1e0) | uVar22;
    *(ulonglong *)(param_2 + 0x1e8) = *(ulonglong *)(param_2 + 0x1e8) | uVar15;
    *(ulonglong *)(param_2 + 0x1f0) = *(ulonglong *)(param_2 + 0x1f0) | uVar1;
    uVar22 = puVar5[0x2d];
    uVar15 = puVar5[0x2e];
    uVar1 = puVar5[0x2f];
    *(ulonglong *)(param_2 + 0x1f8) = *(ulonglong *)(param_2 + 0x1f8) | puVar5[0x2c];
    *(ulonglong *)(param_2 + 0x200) = *(ulonglong *)(param_2 + 0x200) | uVar22;
    *(ulonglong *)(param_2 + 0x208) = *(ulonglong *)(param_2 + 0x208) | uVar15;
    *(ulonglong *)(param_2 + 0x210) = *(ulonglong *)(param_2 + 0x210) | uVar1;
    uVar22 = puVar5[0x31];
    uVar15 = puVar5[0x32];
    uVar1 = puVar5[0x33];
    *(ulonglong *)(param_2 + 0x218) = *(ulonglong *)(param_2 + 0x218) | puVar5[0x30];
    *(ulonglong *)(param_2 + 0x220) = *(ulonglong *)(param_2 + 0x220) | uVar22;
    *(ulonglong *)(param_2 + 0x228) = *(ulonglong *)(param_2 + 0x228) | uVar15;
    *(ulonglong *)(param_2 + 0x230) = *(ulonglong *)(param_2 + 0x230) | uVar1;
    uVar22 = puVar5[0x35];
    uVar15 = puVar5[0x36];
    uVar1 = puVar5[0x37];
    *(ulonglong *)(param_2 + 0x238) = *(ulonglong *)(param_2 + 0x238) | puVar5[0x34];
    *(ulonglong *)(param_2 + 0x240) = *(ulonglong *)(param_2 + 0x240) | uVar22;
    *(ulonglong *)(param_2 + 0x248) = *(ulonglong *)(param_2 + 0x248) | uVar15;
    *(ulonglong *)(param_2 + 0x250) = *(ulonglong *)(param_2 + 0x250) | uVar1;
    uVar22 = puVar5[0x39];
    uVar15 = puVar5[0x3a];
    uVar1 = puVar5[0x3b];
    *(ulonglong *)(param_2 + 600) = *(ulonglong *)(param_2 + 600) | puVar5[0x38];
    *(ulonglong *)(param_2 + 0x260) = *(ulonglong *)(param_2 + 0x260) | uVar22;
    *(ulonglong *)(param_2 + 0x268) = *(ulonglong *)(param_2 + 0x268) | uVar15;
    *(ulonglong *)(param_2 + 0x270) = *(ulonglong *)(param_2 + 0x270) | uVar1;
    uVar22 = puVar5[0x3d];
    uVar15 = puVar5[0x3e];
    uVar1 = puVar5[0x3f];
    *(ulonglong *)(param_2 + 0x278) = *(ulonglong *)(param_2 + 0x278) | puVar5[0x3c];
    *(ulonglong *)(param_2 + 0x280) = *(ulonglong *)(param_2 + 0x280) | uVar22;
    *(ulonglong *)(param_2 + 0x288) = *(ulonglong *)(param_2 + 0x288) | uVar15;
    *(ulonglong *)(param_2 + 0x290) = *(ulonglong *)(param_2 + 0x290) | uVar1;
    uVar22 = puVar5[0x40];
    uVar15 = puVar5[0x41];
    uVar1 = puVar5[0x42];
    uVar7 = puVar5[0x43];
    puVar5[0x40] = *puVar5;
    puVar5[0x41] = puVar5[1];
    puVar5[0x42] = puVar5[2];
    puVar5[0x43] = puVar5[3];
    *puVar5 = uVar22;
    puVar5[1] = uVar15;
    puVar5[2] = uVar1;
    puVar5[3] = uVar7;
    uVar22 = puVar5[0x44];
    uVar15 = puVar5[0x45];
    uVar1 = puVar5[0x46];
    uVar7 = puVar5[0x47];
    puVar5[0x44] = puVar5[4];
    puVar5[0x45] = puVar5[5];
    puVar5[0x46] = puVar5[6];
    puVar5[0x47] = puVar5[7];
    puVar5[4] = uVar22;
    puVar5[5] = uVar15;
    puVar5[6] = uVar1;
    puVar5[7] = uVar7;
    uVar22 = puVar5[0x48];
    uVar15 = puVar5[0x49];
    uVar1 = puVar5[0x4a];
    uVar7 = puVar5[0x4b];
    puVar5[0x48] = puVar5[8];
    puVar5[0x49] = puVar5[9];
    puVar5[0x4a] = puVar5[10];
    puVar5[0x4b] = puVar5[0xb];
    puVar5[8] = uVar22;
    puVar5[9] = uVar15;
    puVar5[10] = uVar1;
    puVar5[0xb] = uVar7;
    uVar22 = puVar5[0x4c];
    uVar15 = puVar5[0x4d];
    uVar1 = puVar5[0x4e];
    uVar7 = puVar5[0x4f];
    puVar5[0x4c] = puVar5[0xc];
    puVar5[0x4d] = puVar5[0xd];
    puVar5[0x4e] = puVar5[0xe];
    puVar5[0x4f] = puVar5[0xf];
    puVar5[0xc] = uVar22;
    puVar5[0xd] = uVar15;
    puVar5[0xe] = uVar1;
    puVar5[0xf] = uVar7;
    uVar22 = puVar5[0x50];
    uVar15 = puVar5[0x51];
    uVar1 = puVar5[0x52];
    uVar7 = puVar5[0x53];
    puVar5[0x50] = puVar5[0x10];
    puVar5[0x51] = puVar5[0x11];
    puVar5[0x52] = puVar5[0x12];
    puVar5[0x53] = puVar5[0x13];
    puVar5[0x10] = uVar22;
    puVar5[0x11] = uVar15;
    puVar5[0x12] = uVar1;
    puVar5[0x13] = uVar7;
    uVar22 = puVar5[0x54];
    uVar15 = puVar5[0x55];
    uVar1 = puVar5[0x56];
    uVar7 = puVar5[0x57];
    puVar5[0x54] = puVar5[0x14];
    puVar5[0x55] = puVar5[0x15];
    puVar5[0x56] = puVar5[0x16];
    puVar5[0x57] = puVar5[0x17];
    puVar5[0x14] = uVar22;
    puVar5[0x15] = uVar15;
    puVar5[0x16] = uVar1;
    puVar5[0x17] = uVar7;
    uVar22 = puVar5[0x58];
    uVar15 = puVar5[0x59];
    uVar1 = puVar5[0x5a];
    uVar7 = puVar5[0x5b];
    puVar5[0x58] = puVar5[0x18];
    puVar5[0x59] = puVar5[0x19];
    puVar5[0x5a] = puVar5[0x1a];
    puVar5[0x5b] = puVar5[0x1b];
    puVar5[0x18] = uVar22;
    puVar5[0x19] = uVar15;
    puVar5[0x1a] = uVar1;
    puVar5[0x1b] = uVar7;
    uVar22 = puVar5[0x5c];
    uVar15 = puVar5[0x5d];
    uVar1 = puVar5[0x5e];
    uVar7 = puVar5[0x5f];
    puVar5[0x5c] = puVar5[0x1c];
    puVar5[0x5d] = puVar5[0x1d];
    puVar5[0x5e] = puVar5[0x1e];
    puVar5[0x5f] = puVar5[0x1f];
    puVar5[0x1c] = uVar22;
    puVar5[0x1d] = uVar15;
    puVar5[0x1e] = uVar1;
    puVar5[0x1f] = uVar7;
    uVar22 = puVar5[0x60];
    uVar15 = puVar5[0x61];
    uVar1 = puVar5[0x62];
    uVar7 = puVar5[99];
    puVar5[0x60] = puVar5[0x20];
    puVar5[0x61] = puVar5[0x21];
    puVar5[0x62] = puVar5[0x22];
    puVar5[99] = puVar5[0x23];
    puVar5[0x20] = uVar22;
    puVar5[0x21] = uVar15;
    puVar5[0x22] = uVar1;
    puVar5[0x23] = uVar7;
    uVar22 = puVar5[100];
    uVar15 = puVar5[0x65];
    uVar1 = puVar5[0x66];
    uVar7 = puVar5[0x67];
    puVar5[100] = puVar5[0x24];
    puVar5[0x65] = puVar5[0x25];
    puVar5[0x66] = puVar5[0x26];
    puVar5[0x67] = puVar5[0x27];
    puVar5[0x24] = uVar22;
    puVar5[0x25] = uVar15;
    puVar5[0x26] = uVar1;
    puVar5[0x27] = uVar7;
    uVar22 = puVar5[0x68];
    uVar15 = puVar5[0x69];
    uVar1 = puVar5[0x6a];
    uVar7 = puVar5[0x6b];
    puVar5[0x68] = puVar5[0x28];
    puVar5[0x69] = puVar5[0x29];
    puVar5[0x6a] = puVar5[0x2a];
    puVar5[0x6b] = puVar5[0x2b];
    puVar5[0x28] = uVar22;
    puVar5[0x29] = uVar15;
    puVar5[0x2a] = uVar1;
    puVar5[0x2b] = uVar7;
    uVar22 = puVar5[0x6c];
    uVar15 = puVar5[0x6d];
    uVar1 = puVar5[0x6e];
    uVar7 = puVar5[0x6f];
    puVar5[0x6c] = puVar5[0x2c];
    puVar5[0x6d] = puVar5[0x2d];
    puVar5[0x6e] = puVar5[0x2e];
    puVar5[0x6f] = puVar5[0x2f];
    puVar5[0x2c] = uVar22;
    puVar5[0x2d] = uVar15;
    puVar5[0x2e] = uVar1;
    puVar5[0x2f] = uVar7;
    uVar22 = puVar5[0x70];
    uVar15 = puVar5[0x71];
    uVar1 = puVar5[0x72];
    uVar7 = puVar5[0x73];
    puVar5[0x70] = puVar5[0x30];
    puVar5[0x71] = puVar5[0x31];
    puVar5[0x72] = puVar5[0x32];
    puVar5[0x73] = puVar5[0x33];
    puVar5[0x30] = uVar22;
    puVar5[0x31] = uVar15;
    puVar5[0x32] = uVar1;
    puVar5[0x33] = uVar7;
    uVar22 = puVar5[0x74];
    uVar15 = puVar5[0x75];
    uVar1 = puVar5[0x76];
    uVar7 = puVar5[0x77];
    puVar5[0x74] = puVar5[0x34];
    puVar5[0x75] = puVar5[0x35];
    puVar5[0x76] = puVar5[0x36];
    puVar5[0x77] = puVar5[0x37];
    puVar5[0x34] = uVar22;
    puVar5[0x35] = uVar15;
    puVar5[0x36] = uVar1;
    puVar5[0x37] = uVar7;
    uVar22 = puVar5[0x78];
    uVar15 = puVar5[0x79];
    uVar1 = puVar5[0x7a];
    uVar7 = puVar5[0x7b];
    puVar5[0x78] = puVar5[0x38];
    puVar5[0x79] = puVar5[0x39];
    puVar5[0x7a] = puVar5[0x3a];
    puVar5[0x7b] = puVar5[0x3b];
    puVar5[0x38] = uVar22;
    puVar5[0x39] = uVar15;
    puVar5[0x3a] = uVar1;
    puVar5[0x3b] = uVar7;
    uVar22 = puVar5[0x7c];
    uVar15 = puVar5[0x7d];
    uVar1 = puVar5[0x7e];
    uVar7 = puVar5[0x7f];
    puVar5[0x7c] = puVar5[0x3c];
    puVar5[0x7d] = puVar5[0x3d];
    puVar5[0x7e] = puVar5[0x3e];
    puVar5[0x7f] = puVar5[0x3f];
    puVar5[0x3c] = uVar22;
    puVar5[0x3d] = uVar15;
    puVar5[0x3e] = uVar1;
    puVar5[0x3f] = uVar7;
    pdb_140a79940(param_2);
    pcVar23 = pcStack_a0 + uVar21 * 0xc;
    pdb_140a79030(param_2,1,pcStack_a0,pcVar23,CONCAT44(uVar35,uVar34),cVar26,
                  *(undefined4 *)(puVar8[1] + 0x10),*(undefined4 *)(puVar8[1] + 0x14));
    puVar11 = (undefined8 *)pdb_140bf45b0(uVar16,&UNK_14331c878);
    if ((puVar11 == (undefined8 *)0x0) ||
       (lVar17 = (**(code **)(puVar11[1] + 0x18))(*puVar11), lVar17 == 0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14305a890);
    }
    pdb_140a78ae0(param_2,1,*(undefined8 *)(lVar17 + 8),*(undefined8 *)(lVar17 + 0x10));
    auStack_130._0_4_ = 0;
    if ((uVar21 != 0) && (pcVar23 + -0xc != (code *)0x0)) {
      uStack_124 = *(undefined4 *)(pcVar23 + -4);
      uVar6 = *(undefined8 *)(pcVar23 + -0xc);
      auStack_130._4_4_ = (undefined4)uVar6;
      uStack_128 = (undefined4)((ulonglong)uVar6 >> 0x20);
      auStack_130._0_4_ = 1;
    }
    if (*(longlong *)(puVar8[1] + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_14305a8a8);
    }
    lVar17 = *(longlong *)(puVar8[1] + 0x18);
    pbStack_f0 = (byte *)CONCAT44(pbStack_f0._4_4_,*(undefined4 *)(lVar17 + 0x18));
    uStack_f8 = *(ulonglong *)(lVar17 + 0x10);
    puVar12 = &uStack_f8;
    if (auStack_130._0_4_ != 0) {
      puVar12 = (ulonglong *)(auStack_130 + 4);
    }
    uVar16 = *puVar12;
    uVar22 = puVar12[1];
    if (*(char *)((longlong)puVar8 + 0x1a) != '\0') {
      plVar9 = *(longlong **)(param_5 + 8);
      if (plVar9 == (longlong *)0x0) {
        plVar9 = *(longlong **)(param_5 + 0x10);
      }
      lVar17 = plVar9[2];
      if ((ulonglong)(*plVar9 - lVar17) < 0x20) {
        pdb_142d7f1b0(plVar9,lVar17,0x20,1,1);
      }
      lVar14 = plVar9[1];
      *(code **)(lVar14 + lVar17) = pdb_14160c3a0;
      *(ulonglong *)(lVar14 + 8 + lVar17) = uVar16;
      *(int *)(lVar14 + 0x10 + lVar17) = (int)uVar22;
      *(undefined4 *)(lVar14 + 0x14 + lVar17) = uVar34;
      *(undefined1 *)(lVar14 + 0x18 + lVar17) = 1;
      *(undefined1 *)(lVar14 + 0x1c + lVar17) = 0;
      plVar9[2] = lVar17 + 0x20;
    }
    if (_DAT_142e36f28 <= fVar33) {
      if (*(char *)(puVar8 + 3) == '\0') {
        pdb_140a79cd0(param_2);
      }
      if (pcStack_a8 != (code *)0x0) {
        pub_1406abac0((byte *)pcStack_a0,(longlong)pcStack_a8 * 0xc,4);
      }
      goto LAB_140b6340e;
    }
    if (pcStack_a8 != (code *)0x0) {
      pub_1406abac0((byte *)pcStack_a0,(longlong)pcStack_a8 * 0xc,4);
    }
  }
LAB_140b63438:
  uVar13 = (ulonglong)pcStack_160 >> 1;
  if (uVar13 != 0) {
    if (pcStack_160 < (code *)0x8) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar13 & 0xfffffffffffffffc;
      pauVar24 = (undefined1 (*) [16])(pcStack_168 + 0x10);
      lVar17 = (longlong)pcStack_160 * 8 + -0x10;
      lVar14 = 0;
      do {
        auVar30 = pauVar24[-1];
        auVar3 = *pauVar24;
        auVar29 = *(undefined1 (*) [16])
                   (pcStack_168 + lVar14 * 8 + (longlong)pcStack_160 * 8 + -0x20);
        auVar31 = *(undefined1 (*) [16])(pcStack_168 + lVar14 * 8 + lVar17);
        auVar32._0_8_ = auVar31._8_8_;
        auVar32._8_4_ = auVar31._0_4_;
        auVar32._12_4_ = auVar31._4_4_;
        auVar31._0_8_ = auVar29._8_8_;
        auVar31._8_4_ = auVar29._0_4_;
        auVar31._12_4_ = auVar29._4_4_;
        pauVar24[-1] = auVar32;
        *pauVar24 = auVar31;
        auVar29._0_8_ = auVar30._8_8_;
        auVar29._8_4_ = auVar30._0_4_;
        auVar29._12_4_ = auVar30._4_4_;
        auVar30._0_8_ = auVar3._8_8_;
        auVar30._8_4_ = auVar3._0_4_;
        auVar30._12_4_ = auVar3._4_4_;
        *(undefined1 (*) [16])(pcStack_168 + lVar14 * 8 + lVar17) = auVar29;
        *(undefined1 (*) [16])(pcStack_168 + lVar14 * 8 + (longlong)pcStack_160 * 8 + -0x20) =
             auVar30;
        lVar14 = lVar14 + -4;
        pauVar24 = pauVar24 + 2;
      } while (-lVar14 != (uVar13 & 0xfffffffffffffffc));
      if (uVar13 == uVar16) goto joined_r0x000140b63478;
    }
    pcVar23 = pcStack_168 + uVar16 * 8;
    lVar14 = -uVar16;
    lVar17 = (longlong)pcStack_160 * 8 + -8;
    do {
      uVar6 = *(undefined8 *)pcVar23;
      *(undefined8 *)pcVar23 = *(undefined8 *)(pcStack_168 + lVar14 * 8 + lVar17);
      *(undefined8 *)(pcStack_168 + lVar14 * 8 + lVar17) = uVar6;
      lVar14 = lVar14 + -1;
      pcVar23 = pcVar23 + 8;
    } while (-lVar14 != uVar13);
  }
joined_r0x000140b63478:
  pcStack_a8 = pcStack_170;
  pcStack_a0 = pcStack_168;
  if (pcStack_160 != (code *)0x0) {
    pcVar25 = pcStack_168 + (longlong)pcStack_160 * 8;
    pcVar23 = pcStack_168;
    do {
      pcVar20 = pcStack_b8;
      uVar13 = *(ulonglong *)pcVar23;
      uVar16 = *(ulonglong *)((longlong)pcStack_b8 + 0x10);
      if (uVar16 <= uVar13) {
LAB_140b6388b:
        pdb_142dc7ef8(uVar13,uVar16,&UNK_14305a8c0);
        goto LAB_140b63929;
      }
      lVar17 = *(longlong *)((longlong)pcStack_b8 + 8);
      lVar14 = uVar13 * 0x30;
      cVar4 = *(char *)(lVar17 + lVar14);
      puVar8 = (undefined8 *)(lVar17 + 0x20 + lVar14);
      uVar6 = puVar8[1];
      uStack_d8 = (undefined7)((ulonglong)*puVar8 >> 8);
      uStack_d1 = (undefined1)uVar6;
      uStack_d0 = (undefined7)((ulonglong)uVar6 >> 8);
      puVar8 = (undefined8 *)(lVar17 + 0x11 + lVar14);
      uStack_e8 = *puVar8;
      uVar6 = puVar8[1];
      uStack_e0 = (undefined7)uVar6;
      uStack_d9 = (undefined1)((ulonglong)uVar6 >> 0x38);
      puVar12 = (ulonglong *)(lVar17 + 1 + lVar14);
      uStack_f8 = *puVar12;
      pbStack_f0 = (byte *)puVar12[1];
      pub_142e32770(lVar17 + lVar14,lVar14 + lVar17 + 0x30,(~uVar13 + uVar16) * 0x30);
      uVar16 = uVar16 - 1;
      *(ulonglong *)((longlong)pcVar20 + 0x10) = uVar16;
      if (cVar4 == '\f') goto LAB_140b6388b;
      uStack_108 = CONCAT71(uStack_d0,uStack_d1);
      uStack_10f = uStack_d8;
      uStack_120._1_3_ = (undefined3)uStack_e8;
      uStack_11c = (uint)(uStack_e8 >> 0x18);
      uStack_118 = (undefined1)(uStack_e8 >> 0x38);
      uStack_117 = uStack_e0;
      uStack_110 = uStack_d9;
      auStack_130._1_3_ = (undefined3)uStack_f8;
      auStack_130[0] = cVar4;
      auStack_130._4_4_ = (undefined4)(uStack_f8 >> 0x18);
      uStack_128._0_1_ = (undefined1)(uStack_f8 >> 0x38);
      uStack_128._1_3_ = SUB83(pbStack_f0,0);
      uStack_124 = (undefined4)((ulonglong)pbStack_f0 >> 0x18);
      uStack_120._0_1_ = (undefined1)((ulonglong)pbStack_f0 >> 0x38);
      pdb_140b673e0(auStack_130);
      pcVar23 = pcVar23 + 8;
    } while (pcVar23 != pcVar25);
  }
  if (pcStack_a8 != (code *)0x0) {
    pub_1406abac0((byte *)pcStack_a0,(longlong)pcStack_a8 << 3,8);
  }
  pcStack_a0 = pcStack_178;
LAB_140b63678:
  pcStack_b8 = (code *)0x0;
  pbVar10 = pbStack_180;
  pcStack_178 = pcStack_a0;
  pcStack_a8 = (code *)pbStack_180;
  while (pcStack_a0 != pcStack_b8) {
    pcStack_b8 = pcStack_b8 + 1;
    pdb_14099c550(pbVar10);
    pbVar10 = pbVar10 + 0x30;
  }
  if (lStack_188 != 0) {
    pub_1406abac0((byte *)pcStack_a8,lStack_188 * 0x30,8);
  }
  return;
}

