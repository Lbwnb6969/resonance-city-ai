// VA 0x1409b91b0, PDB extent 3690 bytes
// country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::generate_wall_draw_lists
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::generate_wall_draw_lists
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
   Extent: 3690 */

void pdb_1409b91b0(longlong param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined8 *puVar12;
  undefined8 *puVar13;
  int *piVar14;
  undefined4 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  int iVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  ushort uVar26;
  ulonglong uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined1 *puStack_2e8;
  undefined8 **ppuStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined1 **ppuStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined1 auStack_2b0 [16];
  undefined1 auStack_260 [20];
  undefined8 *puStack_24c;
  undefined8 uStack_244;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined1 *puStack_224;
  undefined8 uStack_21c;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 uStack_1f8;
  undefined8 uStack_1f4;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined1 uStack_1e4;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined1 uStack_1d0;
  undefined8 uStack_1cc;
  undefined4 uStack_1c4;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  longlong lStack_1b0;
  int *piStack_1a8;
  undefined4 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  longlong lStack_188;
  int *piStack_180;
  undefined4 *puStack_178;
  undefined4 uStack_164;
  undefined1 uStack_160;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined2 uStack_150;
  undefined2 uStack_14e;
  undefined4 uStack_14c;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined *puStack_140;
  undefined8 uStack_138;
  longlong lStack_c8;
  int iStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  byte *pbStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined4 uStack_78;
  byte *pbStack_70;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined4 *puVar22;
  
  uStack_60 = 0xfffffffffffffffe;
  lStack_c8 = param_3;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar16 = *(longlong *)(param_2 + 0x70);
    uVar23 = 0x1d6a82b468dfb8a2;
    lVar24 = 0;
    while( true ) {
      uVar23 = uVar23 & *(ulonglong *)(param_2 + 0x78);
      auVar39 = *(undefined1 (*) [16])(lVar16 + uVar23);
      auVar37[0] = -(auVar39[0] == DAT_142e34ec0);
      auVar37[1] = -(auVar39[1] == DAT_142e34ec0._1_1_);
      auVar37[2] = -(auVar39[2] == DAT_142e34ec0._2_1_);
      auVar37[3] = -(auVar39[3] == DAT_142e34ec0._3_1_);
      auVar37[4] = -(auVar39[4] == DAT_142e34ec0._4_1_);
      auVar37[5] = -(auVar39[5] == DAT_142e34ec0._5_1_);
      auVar37[6] = -(auVar39[6] == DAT_142e34ec0._6_1_);
      auVar37[7] = -(auVar39[7] == DAT_142e34ec0._7_1_);
      auVar37[8] = -(auVar39[8] == DAT_142e34ec0._8_1_);
      auVar37[9] = -(auVar39[9] == DAT_142e34ec0._9_1_);
      auVar37[10] = -(auVar39[10] == DAT_142e34ec0._10_1_);
      auVar37[0xb] = -(auVar39[0xb] == DAT_142e34ec0._11_1_);
      auVar37[0xc] = -(auVar39[0xc] == DAT_142e34ec0._12_1_);
      auVar37[0xd] = -(auVar39[0xd] == DAT_142e34ec0._13_1_);
      auVar37[0xe] = -(auVar39[0xe] == DAT_142e34ec0._14_1_);
      auVar37[0xf] = -(auVar39[0xf] == DAT_142e34ec0._15_1_);
      uVar26 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf;
      uVar25 = (uint)uVar26;
      while (uVar26 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar25; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar27 = uVar4 + uVar23 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar16 + -0x18 + uVar27 * -0x18);
        auVar38[0] = -(*pcVar1 == DAT_142e60e60);
        auVar38[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
        auVar38[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
        auVar38[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
        auVar38[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
        auVar38[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
        auVar38[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
        auVar38[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
        auVar38[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
        auVar38[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
        auVar38[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
        auVar38[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
        auVar38[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
        auVar38[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
        auVar38[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
        auVar38[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
        if ((ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar38[0xf] >> 7) << 0xf) == 0xffff) {
          uVar23 = *(ulonglong *)(lVar16 + uVar27 * -0x18 + -8);
          if ((uVar23 < *(ulonglong *)(param_2 + 0x210)) &&
             (uVar23 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar23 * 8), uVar23 != 0)) {
            lVar16 = ~uVar23 * 0x40;
            if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar16) != 0) {
              uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar16 + 0x10);
              uStack_63 = 1;
              uVar15 = pdb_140e25e40(0x400);
              uStack_150 = 1;
              puStack_140 = &UNK_14302adc0;
              uStack_138 = 0x2e;
              uStack_63 = 1;
              uStack_14c = uVar15;
              uStack_148 = (char)param_2;
              uStack_1c4 = pdb_140e2b4e0(param_1,&uStack_150);
              uStack_1cc = 0xffffffff00000000;
              uStack_63 = 1;
              puVar22 = &uStack_1d4;
              uStack_1d4 = uVar15;
              uStack_1d0 = (char)param_2;
              pdb_140e29980(param_1);
              uVar20 = SUB81(puVar22,0);
              uStack_63 = 1;
              uVar15 = pdb_140e25e40(0x100000);
              uStack_150 = 1;
              puStack_140 = &UNK_14302adee;
              uStack_138 = 0x25;
              uStack_63 = 1;
              uVar21 = SUB81(&uStack_150,0);
              uStack_14c = uVar15;
              uStack_148 = uVar20;
              uStack_1d8 = pdb_140e2b4e0(param_1);
              uStack_1e0 = 0xffffffff00000000;
              uStack_63 = 1;
              uStack_1e8 = uVar15;
              uStack_1e4 = uVar20;
              uVar15 = pdb_140e25e40(0x40000);
              uStack_150 = 1;
              puStack_140 = &UNK_14302ae13;
              uStack_138 = 0x14;
              uStack_63 = 1;
              uStack_14c = uVar15;
              uStack_148 = uVar21;
              uStack_1ec = pdb_140e2b4e0(param_1,&uStack_150);
              uStack_1f4 = 0xffffffff00000000;
              uVar23 = *(ulonglong *)(param_3 + 0x20);
              iStack_bc = 0;
              iVar19 = 0;
              if (uVar23 != 0) {
                lVar16 = *(longlong *)(param_3 + 0x18);
                if (uVar23 < 9) {
                  uVar27 = 0;
                  iVar19 = 0;
                }
                else {
                  uVar27 = 8;
                  if ((uVar23 & 7) != 0) {
                    uVar27 = (ulonglong)((uint)uVar23 & 7);
                  }
                  uVar27 = uVar23 - uVar27;
                  uVar17 = 0;
                  auVar39 = (undefined1  [16])0x0;
                  iVar19 = 0;
                  iVar28 = 0;
                  iVar29 = 0;
                  iVar30 = 0;
                  do {
                    puVar2 = (uint *)(lVar16 + 4 + uVar17 * 8);
                    uVar25 = *puVar2;
                    uVar4 = puVar2[2];
                    puVar2 = (uint *)(lVar16 + 0x14 + uVar17 * 8);
                    uVar5 = *puVar2;
                    uVar6 = puVar2[2];
                    puVar2 = (uint *)(lVar16 + 0x24 + uVar17 * 8);
                    uVar7 = *puVar2;
                    uVar8 = puVar2[2];
                    puVar2 = (uint *)(lVar16 + 0x34 + uVar17 * 8);
                    uVar9 = *puVar2;
                    uVar10 = puVar2[2];
                    iVar31 = auVar39._4_4_;
                    iVar32 = auVar39._8_4_;
                    iVar33 = auVar39._12_4_;
                    auVar39._0_4_ =
                         auVar39._0_4_ + (uVar25 >> 5) + (uint)(0 < (int)(uVar25 & _DAT_14302a7a0));
                    auVar39._4_4_ =
                         iVar31 + (uVar4 >> 5) + (uint)(0 < (int)(uVar4 & _UNK_14302a7a4));
                    auVar39._8_4_ =
                         iVar32 + (uVar5 >> 5) + (uint)(0 < (int)(uVar5 & _UNK_14302a7a8));
                    auVar39._12_4_ =
                         iVar33 + (uVar6 >> 5) + (uint)(0 < (int)(uVar6 & _UNK_14302a7ac));
                    iVar19 = iVar19 + (uVar7 >> 5) + (uint)(0 < (int)(uVar7 & _DAT_14302a7a0));
                    iVar28 = iVar28 + (uVar8 >> 5) + (uint)(0 < (int)(uVar8 & _UNK_14302a7a4));
                    iVar29 = iVar29 + (uVar9 >> 5) + (uint)(0 < (int)(uVar9 & _UNK_14302a7a8));
                    iVar30 = iVar30 + (uVar10 >> 5) + (uint)(0 < (int)(uVar10 & _UNK_14302a7ac));
                    uVar17 = uVar17 + 8;
                  } while (uVar27 != uVar17);
                  iVar19 = iVar30 + auVar39._12_4_ + iVar28 + auVar39._4_4_ +
                           iVar29 + auVar39._8_4_ + iVar19 + auVar39._0_4_;
                }
                do {
                  uVar25 = *(uint *)(lVar16 + 4 + uVar27 * 8);
                  iVar19 = ((uVar25 >> 5) + iVar19 + 1) - (uint)((uVar25 & 0x1f) == 0);
                  uVar27 = uVar27 + 1;
                } while (uVar23 != uVar27);
              }
              uVar23 = *(ulonglong *)(param_3 + 0x38);
              if (uVar23 != 0) {
                lVar16 = *(longlong *)(param_3 + 0x30);
                if (uVar23 < 9) {
                  uVar27 = 0;
                  iStack_bc = 0;
                }
                else {
                  uVar27 = 8;
                  if ((uVar23 & 7) != 0) {
                    uVar27 = (ulonglong)((uint)uVar23 & 7);
                  }
                  uVar27 = uVar23 - uVar27;
                  uVar17 = 0;
                  iVar32 = 0;
                  iVar33 = 0;
                  iVar34 = 0;
                  iVar35 = 0;
                  iVar28 = 0;
                  iVar29 = 0;
                  iVar30 = 0;
                  iVar31 = 0;
                  do {
                    puVar2 = (uint *)(lVar16 + 4 + uVar17 * 8);
                    uVar25 = *puVar2;
                    uVar4 = puVar2[2];
                    puVar2 = (uint *)(lVar16 + 0x14 + uVar17 * 8);
                    uVar5 = *puVar2;
                    uVar6 = puVar2[2];
                    puVar2 = (uint *)(lVar16 + 0x24 + uVar17 * 8);
                    uVar7 = *puVar2;
                    uVar8 = puVar2[2];
                    puVar2 = (uint *)(lVar16 + 0x34 + uVar17 * 8);
                    uVar9 = *puVar2;
                    uVar10 = puVar2[2];
                    iVar32 = iVar32 + (uVar25 >> 5) + (uint)(0 < (int)(uVar25 & _DAT_14302a7a0));
                    iVar33 = iVar33 + (uVar4 >> 5) + (uint)(0 < (int)(uVar4 & _UNK_14302a7a4));
                    iVar34 = iVar34 + (uVar5 >> 5) + (uint)(0 < (int)(uVar5 & _UNK_14302a7a8));
                    iVar35 = iVar35 + (uVar6 >> 5) + (uint)(0 < (int)(uVar6 & _UNK_14302a7ac));
                    iVar28 = iVar28 + (uVar7 >> 5) + (uint)(0 < (int)(uVar7 & _DAT_14302a7a0));
                    iVar29 = iVar29 + (uVar8 >> 5) + (uint)(0 < (int)(uVar8 & _UNK_14302a7a4));
                    iVar30 = iVar30 + (uVar9 >> 5) + (uint)(0 < (int)(uVar9 & _UNK_14302a7a8));
                    iVar31 = iVar31 + (uVar10 >> 5) + (uint)(0 < (int)(uVar10 & _UNK_14302a7ac));
                    uVar17 = uVar17 + 8;
                  } while (uVar27 != uVar17);
                  iStack_bc = iVar31 + iVar35 + iVar29 + iVar33 + iVar30 + iVar34 + iVar28 + iVar32;
                }
                do {
                  uVar25 = *(uint *)(lVar16 + 4 + uVar27 * 8);
                  iStack_bc = ((uVar25 >> 5) + iStack_bc + 1) - (uint)((uVar25 & 0x1f) == 0);
                  uVar27 = uVar27 + 1;
                } while (uVar23 != uVar27);
              }
              iStack_bc = iStack_bc + iVar19;
              puStack_1c0 = (undefined8 *)&uStack_1e8;
              puStack_1b8 = (undefined8 *)&uStack_1fc;
              piStack_1a8 = &iStack_bc;
              uStack_62 = 1;
              uStack_1fc = uVar15;
              uStack_1f8 = uVar21;
              lStack_1b0 = param_3;
              puStack_1a0 = &uStack_1d4;
              pdb_1415240d0(auStack_260,uVar3,param_1);
              uStack_62 = 1;
              pdb_141526820(&puStack_a0,uVar3,param_1);
              uStack_62 = 1;
              pdb_14152cde0(&uStack_370,uVar3,param_1);
              uStack_62 = 1;
              pdb_14152afd0(&puStack_2e8,uVar3,param_1);
              uStack_62 = 1;
              pdb_14152b6c0(&uStack_150,uVar3,param_1);
              uStack_23c = auStack_90._0_4_;
              puStack_24c = puStack_a0;
              uStack_244 = pbStack_98;
              uStack_238 = uStack_370;
              uStack_230 = uStack_368;
              uStack_228 = uStack_360;
              puStack_224 = puStack_2e8;
              uStack_21c = ppuStack_2e0;
              uStack_214 = puStack_2d8._0_4_;
              uStack_210 = CONCAT44(uStack_14c,CONCAT22(uStack_14e,uStack_150));
              uStack_208 = CONCAT71(uStack_147,uStack_148);
              uStack_200 = puStack_140._0_4_;
              puStack_178 = puStack_1a0;
              lStack_188 = lStack_1b0;
              piStack_180 = piStack_1a8;
              puStack_198 = puStack_1c0;
              puStack_190 = puStack_1b8;
              uStack_61 = 1;
              pdb_140e29980(param_1,&uStack_238);
              puVar13 = puStack_190;
              puVar12 = puStack_198;
              puStack_a0 = (undefined8 *)0x0;
              pbStack_98 = (byte *)0x8;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = auStack_90._8_8_;
              auStack_90 = auVar11 << 0x40;
              uStack_61 = 1;
              uVar18 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331578,0x2e,
                                     &puStack_a0);
              uStack_61 = 1;
              pdb_140e291c0(&uStack_150,&UNK_143331578,0x2e,uVar18,param_1);
              ppuStack_2e0 = &puStack_24c;
              ppuStack_2c8 = &puStack_224;
              puStack_2d0 = &uStack_210;
              puStack_2c0 = puVar12;
              puStack_2b8 = puVar13;
              auVar39 = ZEXT416(_DAT_14302a7b0);
              uStack_61 = 1;
              puStack_2e8 = auStack_260;
              puStack_2d8 = &uStack_238;
              auStack_2b0 = auVar39;
              pdb_14178fc80(&uStack_370,&uStack_150,&puStack_2e8);
              piVar14 = piStack_180;
              uStack_61 = 0;
              lVar16 = lStack_188;
              pdb_141782fe0(&uStack_370,lStack_188,*piStack_180);
              uVar21 = (undefined1)lVar16;
              uStack_61 = 0;
              uVar15 = pdb_140e25e40(0x100000);
              uStack_150 = 1;
              puStack_140 = &UNK_14302ae27;
              uStack_138 = 0x24;
              uStack_61 = 0;
              uStack_14c = uVar15;
              uStack_148 = uVar21;
              uStack_154 = pdb_140e2b4e0(param_1,&uStack_150);
              puVar22 = puStack_178;
              uStack_15c = 0xffffffff00000000;
              uStack_b8 = 0;
              uStack_b0 = 8;
              uStack_a8 = 0;
              uStack_61 = 0;
              uStack_164 = uVar15;
              uStack_160 = uVar21;
              uVar18 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331e44,0x2a,&uStack_b8
                                    );
              uStack_61 = 0;
              pdb_140e291c0(&uStack_150,&UNK_143331e44,0x2a,uVar18,param_1);
              puStack_a0 = puVar12;
              pbStack_98 = (byte *)&uStack_164;
              auStack_90._8_8_ = 0;
              auStack_90._0_8_ = puVar22;
              uStack_80 = (undefined1 **)((ulonglong)uStack_80._4_4_ << 0x20);
              uStack_61 = 0;
              pdb_141784e70(&puStack_2e8,&uStack_150,&puStack_a0);
              iVar19 = *piVar14;
              pub_142e32760(&uStack_150,&puStack_2e8,0x88);
              pdb_14007ee60();
              pbStack_70 = pub_1406abab0(4,4);
              if (pbStack_70 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(4,4);
              }
              *(int *)pbStack_70 = iVar19;
              auStack_90._0_8_ = &UNK_143333798;
              puStack_a0 = (undefined8 *)CONCAT44(puStack_a0._4_4_,3);
              pbStack_98 = pbStack_70;
              pdb_140e28810(&uStack_150,&puStack_a0);
              uStack_b8 = 0;
              uStack_b0 = 8;
              uStack_a8 = 0;
              uStack_61 = 0;
              uVar18 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_14333177e,0x33,&uStack_b8
                                    );
              uStack_61 = 0;
              pdb_140e291c0(&uStack_150,&UNK_14333177e,0x33,uVar18,param_1);
              puStack_a0 = &uStack_210;
              pbStack_98 = (byte *)puVar22;
              uStack_61 = 0;
              auStack_90 = auVar39;
              pdb_14179d790(&puStack_2e8,&uStack_150,&puStack_a0);
              iVar19 = *piVar14;
              pub_142e32760(&uStack_150,&puStack_2e8,0x88);
              pdb_14007ee60();
              pbStack_70 = pub_1406abab0(4,4);
              if (pbStack_70 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(4,4);
              }
              *(int *)pbStack_70 = iVar19;
              auStack_90._0_8_ = &UNK_1433337d8;
              puStack_a0 = (undefined8 *)CONCAT44(puStack_a0._4_4_,3);
              pbStack_98 = pbStack_70;
              pdb_140e28810(&uStack_150,&puStack_a0);
              uStack_b8 = 0;
              uStack_b0 = 8;
              uStack_a8 = 0;
              uStack_61 = 0;
              uVar18 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331657,0x30,&uStack_b8
                                    );
              uStack_61 = 0;
              pdb_140e291c0(&uStack_150,&UNK_143331657,0x30,uVar18,param_1);
              puStack_a0 = puVar13;
              pbStack_98 = (byte *)puVar12;
              auStack_90._0_8_ = &uStack_164;
              auStack_90._8_8_ = puVar22;
              uStack_80 = &puStack_224;
              uStack_78 = 0;
              uStack_61 = 0;
              pdb_1417a0850(&puStack_2e8,&uStack_150,&puStack_a0);
              iVar19 = *piVar14;
              pub_142e32760(&uStack_150,&puStack_2e8,0x88);
              pdb_14007ee60();
              pbStack_70 = pub_1406abab0(4,4);
              if (pbStack_70 != (byte *)0x0) {
                *(int *)pbStack_70 = iVar19;
                auStack_90._0_8_ = &UNK_1433336d8;
                puStack_a0 = (undefined8 *)CONCAT44(puStack_a0._4_4_,3);
                pbStack_98 = pbStack_70;
                pdb_140e28810(&uStack_150,&puStack_a0);
                uStack_62 = 0;
                pdb_141535d20(uVar3,param_1);
                uStack_62 = 0;
                pdb_141534d60(uVar3,param_1);
                uStack_62 = 0;
                pdb_141538240(uVar3,param_1);
                uStack_62 = 0;
                pdb_1415398c0(uVar3,param_1);
                uStack_62 = 0;
                pdb_141539c80(uVar3,param_1);
                return;
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(4,4);
            }
          }
          goto LAB_1409b949e;
        }
        uVar26 = (ushort)(uVar25 - 1) & (ushort)uVar25;
        uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar26);
      }
      auVar36[0] = -(auVar39[0] == -1);
      auVar36[1] = -(auVar39[1] == -1);
      auVar36[2] = -(auVar39[2] == -1);
      auVar36[3] = -(auVar39[3] == -1);
      auVar36[4] = -(auVar39[4] == -1);
      auVar36[5] = -(auVar39[5] == -1);
      auVar36[6] = -(auVar39[6] == -1);
      auVar36[7] = -(auVar39[7] == -1);
      auVar36[8] = -(auVar39[8] == -1);
      auVar36[9] = -(auVar39[9] == -1);
      auVar36[10] = -(auVar39[10] == -1);
      auVar36[0xb] = -(auVar39[0xb] == -1);
      auVar36[0xc] = -(auVar39[0xc] == -1);
      auVar36[0xd] = -(auVar39[0xd] == -1);
      auVar36[0xe] = -(auVar39[0xe] == -1);
      auVar36[0xf] = -(auVar39[0xf] == -1);
      if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar36 >> 0x6f,0) & 1) != 0) || (SUB161(auVar36 >> 0x77,0) & 1) != 0) ||
          auVar36[0xf] < '\0') break;
      uVar23 = uVar23 + lVar24 + 0x10;
      lVar24 = lVar24 + 0x10;
    }
  }
LAB_1409b949e:
  uStack_63 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14302ada8);
}

