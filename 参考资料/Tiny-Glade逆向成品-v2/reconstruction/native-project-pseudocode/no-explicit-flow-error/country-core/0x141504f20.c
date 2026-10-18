// VA 0x141504f20, PDB extent 15978 bytes
// country_core::startup::spawn_brush_previews::spawn_brush_previews
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/spawn_brush_previews.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::spawn_brush_previews::spawn_brush_previews
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/spawn_brush_previews.rs
   Extent: 15978 */

void pdb_141504f20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  longlong *plVar19;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  ulonglong uStack_2d0;
  ulonglong uStack_2c8;
  ulonglong uStack_2c0;
  ulonglong uStack_2b8;
  ulonglong uStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined4 uStack_288;
  ulonglong uStack_280;
  ulonglong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  ulonglong uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  code *pcStack_240;
  longlong *plStack_238;
  uint uStack_230;
  undefined4 uStack_22c;
  uint uStack_228;
  undefined4 uStack_224;
  uint uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined8 uStack_200;
  longlong lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  longlong *plStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  longlong *plStack_d8;
  ulonglong uStack_d0;
  undefined *puStack_c8;
  ulonglong uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [9];
  undefined1 uStack_a7;
  undefined6 uStack_a6;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_280 = *param_3;
  uStack_1b0 = param_4;
  pdb_140a596f0(&uStack_2d8,uStack_280,&UNK_143318f30,0x20,&UNK_143318f88);
  pdb_141b241d0(&puStack_128,&UNK_143318fa0,0x1e);
  puVar15 = _DAT_142e37950;
  if (SBORROW8(0,(longlong)puStack_128)) {
    puStack_1a8 = puStack_120;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433195e0,0x2b,&puStack_1a8,&UNK_143319610,&UNK_143318fc0);
  }
  uStack_138 = puStack_b8;
  uStack_130 = auStack_b0._0_8_;
  uStack_148 = (ulonglong)puStack_c8;
  uStack_140 = uStack_c0;
  plStack_158 = plStack_d8;
  uStack_150 = uStack_d0;
  puStack_168 = puStack_e8;
  puStack_160 = puStack_e0;
  uStack_178._0_4_ = uStack_f8;
  uStack_178._4_4_ = uStack_f4;
  uStack_170 = (undefined4)uStack_f0;
  uStack_16c = uStack_f0._4_4_;
  uStack_188._0_4_ = (uint)uStack_108;
  uStack_188._4_4_ = uStack_108._4_4_;
  uStack_180._0_4_ = uStack_100;
  uStack_180._4_4_ = uStack_fc;
  uStack_198._0_4_ = SUB84(uStack_118,0);
  uStack_198._4_4_ = uStack_118._4_4_;
  uStack_190._0_4_ = (uint)uStack_110;
  uStack_190._4_4_ = uStack_110._4_4_;
  puStack_1a8 = puStack_128;
  puStack_1a0 = puStack_120;
  puStack_248 = _DAT_142e37950;
  pcStack_240._0_4_ = 0x3f800000;
  if (plStack_d8 != (longlong *)0x0) {
    auVar3 = *uStack_f0;
    uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    pauVar17 = uStack_f0;
    while (uVar13 = uVar7 ^ 0xffff, uVar13 == 0) {
      pauVar17 = pauVar17 + 1;
      auVar3 = *pauVar17;
      uStack_f0 = uStack_f0 + -0x38;
      uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    }
    uVar8 = 0;
    for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    pdb_1415e43a0(&puStack_128,&puStack_248,
                  *(undefined8 *)((longlong)uStack_f0 + (ulonglong)uVar8 * -0x38 + -8));
    pdb_140c93200(&puStack_1a8,&DAT_143045cc8,0xc,&puStack_128);
  }
  puStack_128 = puStack_1a8;
  puStack_120 = puStack_1a0;
  uStack_118._0_4_ = (undefined4)uStack_198;
  uStack_118._4_4_ = uStack_198._4_4_;
  uStack_110._0_4_ = (uint)uStack_190;
  uStack_110._4_4_ = uStack_190._4_4_;
  uStack_108._0_4_ = (uint)uStack_188;
  uStack_108._4_4_ = uStack_188._4_4_;
  uStack_100 = (uint)uStack_180;
  uStack_fc = uStack_180._4_4_;
  uStack_f8 = (undefined4)uStack_178;
  uStack_f4 = uStack_178._4_4_;
  uStack_f0._0_4_ = uStack_170;
  uStack_f0._4_4_ = uStack_16c;
  puStack_e8 = puStack_168;
  puStack_e0 = puStack_160;
  plStack_d8 = plStack_158;
  uStack_d0 = uStack_150;
  puStack_c8 = (undefined *)uStack_148;
  uStack_c0 = uStack_140;
  puStack_b8 = (undefined *)uStack_138;
  auStack_b0._0_8_ = uStack_130;
  uStack_1c0 = *param_2;
  uStack_1b8 = *param_1;
  uStack_278 = pdb_140b08d00(&puStack_128,&UNK_143318fd8,0xb,uStack_1c0,uStack_1b8);
  pdb_141b241d0(&puStack_128,&UNK_143318fe3,0x1f);
  if (SBORROW8(0,(longlong)puStack_128)) {
    puStack_1a8 = puStack_120;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433195e0,0x2b,&puStack_1a8,&UNK_143319610,&UNK_143319008);
  }
  uStack_138 = puStack_b8;
  uStack_130 = auStack_b0._0_8_;
  uStack_148 = (ulonglong)puStack_c8;
  uStack_140 = uStack_c0;
  plStack_158 = plStack_d8;
  uStack_150 = uStack_d0;
  puStack_168 = puStack_e8;
  puStack_160 = puStack_e0;
  uStack_178._0_4_ = uStack_f8;
  uStack_178._4_4_ = uStack_f4;
  uStack_170 = (undefined4)uStack_f0;
  uStack_16c = uStack_f0._4_4_;
  uStack_188._0_4_ = (uint)uStack_108;
  uStack_188._4_4_ = uStack_108._4_4_;
  uStack_180._0_4_ = uStack_100;
  uStack_180._4_4_ = uStack_fc;
  uStack_198._0_4_ = (undefined4)uStack_118;
  uStack_198._4_4_ = uStack_118._4_4_;
  uStack_190._0_4_ = (undefined4)uStack_110;
  uStack_190._4_4_ = uStack_110._4_4_;
  puStack_1a8 = puStack_128;
  puStack_1a0 = puStack_120;
  puStack_248 = puVar15;
  pcStack_240._0_4_ = 0x3f800000;
  if (plStack_d8 != (longlong *)0x0) {
    pauVar17 = (undefined1 (*) [16])CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
    auVar3 = *pauVar17;
    uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    pauVar18 = pauVar17;
    while (uVar13 = uVar7 ^ 0xffff, uVar13 == 0) {
      pauVar18 = pauVar18 + 1;
      auVar3 = *pauVar18;
      pauVar17 = pauVar17 + -0x38;
      uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    }
    uVar8 = 0;
    for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    pdb_1415e43a0(&puStack_128,&puStack_248,
                  *(undefined8 *)((longlong)pauVar17 + (ulonglong)uVar8 * -0x38 + -8));
    pdb_140c93200(&puStack_1a8,&DAT_143045cc8,0xc,&puStack_128);
  }
  puStack_128 = puStack_1a8;
  puStack_120 = puStack_1a0;
  uStack_118._0_4_ = (undefined4)uStack_198;
  uStack_118._4_4_ = uStack_198._4_4_;
  uStack_110._0_4_ = (uint)uStack_190;
  uStack_110._4_4_ = uStack_190._4_4_;
  uStack_108._0_4_ = (uint)uStack_188;
  uStack_108._4_4_ = uStack_188._4_4_;
  uStack_100 = (uint)uStack_180;
  uStack_fc = uStack_180._4_4_;
  uStack_f8 = (undefined4)uStack_178;
  uStack_f4 = uStack_178._4_4_;
  uStack_f0._0_4_ = uStack_170;
  uStack_f0._4_4_ = uStack_16c;
  puStack_e8 = puStack_168;
  puStack_e0 = puStack_160;
  plStack_d8 = plStack_158;
  uStack_d0 = uStack_150;
  puStack_c8 = (undefined *)uStack_148;
  uStack_c0 = uStack_140;
  puStack_b8 = (undefined *)uStack_138;
  auStack_b0._0_8_ = uStack_130;
  uStack_270 = pdb_140b08d00(&puStack_128,&UNK_143319020,0xc,uStack_1c0,uStack_1b8);
  pdb_141b241d0(&puStack_128,&UNK_14331902c,0x25);
  if (SBORROW8(0,(longlong)puStack_128)) {
    puStack_1a8 = puStack_120;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433195e0,0x2b,&puStack_1a8,&UNK_143319610,&UNK_143319058);
  }
  uStack_138 = puStack_b8;
  uStack_130 = auStack_b0._0_8_;
  uStack_148 = (ulonglong)puStack_c8;
  uStack_140 = uStack_c0;
  plStack_158 = plStack_d8;
  uStack_150 = uStack_d0;
  puStack_168 = puStack_e8;
  puStack_160 = puStack_e0;
  uStack_178 = CONCAT44(uStack_f4,uStack_f8);
  uStack_170 = (undefined4)uStack_f0;
  uStack_16c = uStack_f0._4_4_;
  uStack_188 = CONCAT44(uStack_108._4_4_,(uint)uStack_108);
  uStack_180 = CONCAT44(uStack_fc,uStack_100);
  uStack_198 = (longlong *)CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
  uStack_190 = (longlong *)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
  puStack_1a8 = puStack_128;
  puStack_1a0 = puStack_120;
  uStack_268 = pdb_140b08d00(&puStack_1a8,&UNK_143319070,0x12,uStack_1c0,uStack_1b8);
  pdb_141b241d0(&puStack_128,&UNK_143319082,0x28);
  if (SBORROW8(0,(longlong)puStack_128)) {
    puStack_1a8 = puStack_120;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433195e0,0x2b,&puStack_1a8,&UNK_143319610,&UNK_1433190b0);
  }
  uStack_138 = puStack_b8;
  uStack_130 = auStack_b0._0_8_;
  uStack_148 = (ulonglong)puStack_c8;
  uStack_140 = uStack_c0;
  plStack_158 = plStack_d8;
  uStack_150 = uStack_d0;
  puStack_168 = puStack_e8;
  puStack_160 = puStack_e0;
  uStack_178._0_4_ = uStack_f8;
  uStack_178._4_4_ = uStack_f4;
  uStack_170 = (undefined4)uStack_f0;
  uStack_16c = uStack_f0._4_4_;
  uStack_188._0_4_ = (uint)uStack_108;
  uStack_188._4_4_ = uStack_108._4_4_;
  uStack_180._0_4_ = uStack_100;
  uStack_180._4_4_ = uStack_fc;
  uStack_198._0_4_ = (undefined4)uStack_118;
  uStack_198._4_4_ = uStack_118._4_4_;
  uStack_190._0_4_ = (undefined4)uStack_110;
  uStack_190._4_4_ = uStack_110._4_4_;
  puStack_1a8 = puStack_128;
  puStack_1a0 = puStack_120;
  puStack_248 = (undefined8 *)(ulonglong)_DAT_142e36f50;
  pcStack_240._0_4_ = 0;
  if (plStack_d8 != (longlong *)0x0) {
    pauVar17 = (undefined1 (*) [16])CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
    auVar3 = *pauVar17;
    uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    pauVar18 = pauVar17;
    while (uVar13 = uVar7 ^ 0xffff, uVar13 == 0) {
      pauVar18 = pauVar18 + 1;
      auVar3 = *pauVar18;
      pauVar17 = pauVar17 + -0x38;
      uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    }
    uVar8 = 0;
    for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    pdb_1415e43a0(&puStack_128,&puStack_248,
                  *(undefined8 *)((longlong)pauVar17 + (ulonglong)uVar8 * -0x38 + -8));
    pdb_140c93200(&puStack_1a8,&DAT_143045cc8,0xc,&puStack_128);
  }
  puStack_128 = puStack_1a8;
  puStack_120 = puStack_1a0;
  uStack_118._0_4_ = (undefined4)uStack_198;
  uStack_118._4_4_ = uStack_198._4_4_;
  uStack_110._0_4_ = (uint)uStack_190;
  uStack_110._4_4_ = uStack_190._4_4_;
  uStack_108._0_4_ = (uint)uStack_188;
  uStack_108._4_4_ = uStack_188._4_4_;
  uStack_100 = (uint)uStack_180;
  uStack_fc = uStack_180._4_4_;
  uStack_f8 = (undefined4)uStack_178;
  uStack_f4 = uStack_178._4_4_;
  uStack_f0._0_4_ = uStack_170;
  uStack_f0._4_4_ = uStack_16c;
  puStack_e8 = puStack_168;
  puStack_e0 = puStack_160;
  plStack_d8 = plStack_158;
  uStack_d0 = uStack_150;
  puStack_c8 = (undefined *)uStack_148;
  uStack_c0 = uStack_140;
  puStack_b8 = (undefined *)uStack_138;
  auStack_b0._0_8_ = uStack_130;
  uStack_260 = pdb_140b08d00(&puStack_128,&UNK_1433190c8,0x15,uStack_1c0,uStack_1b8);
  pdb_141b241d0(&puStack_128,&UNK_1433190dd,0x23);
  if (SBORROW8(0,(longlong)puStack_128)) {
    puStack_1a8 = puStack_120;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433195e0,0x2b,&puStack_1a8,&UNK_143319610,&UNK_143319100);
  }
  uStack_138 = puStack_b8;
  uStack_130 = auStack_b0._0_8_;
  uStack_148 = (ulonglong)puStack_c8;
  uStack_140 = uStack_c0;
  plStack_158 = plStack_d8;
  uStack_150 = uStack_d0;
  puStack_168 = puStack_e8;
  puStack_160 = puStack_e0;
  uStack_178._0_4_ = uStack_f8;
  uStack_178._4_4_ = uStack_f4;
  uStack_170 = (undefined4)uStack_f0;
  uStack_16c = uStack_f0._4_4_;
  uStack_188._0_4_ = (uint)uStack_108;
  uStack_188._4_4_ = uStack_108._4_4_;
  uStack_180._0_4_ = uStack_100;
  uStack_180._4_4_ = uStack_fc;
  uStack_198._0_4_ = (undefined4)uStack_118;
  uStack_198._4_4_ = uStack_118._4_4_;
  uStack_190._0_4_ = (undefined4)uStack_110;
  uStack_190._4_4_ = uStack_110._4_4_;
  puStack_1a8 = puStack_128;
  puStack_1a0 = puStack_120;
  puStack_248 = puVar15;
  pcStack_240._0_4_ = 0x3f800000;
  if (plStack_d8 != (longlong *)0x0) {
    pauVar17 = (undefined1 (*) [16])CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
    auVar3 = *pauVar17;
    uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    pauVar18 = pauVar17;
    while (uVar13 = uVar7 ^ 0xffff, uVar13 == 0) {
      pauVar18 = pauVar18 + 1;
      auVar3 = *pauVar18;
      pauVar17 = pauVar17 + -0x38;
      uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    }
    uVar8 = 0;
    for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    pdb_1415e43a0(&puStack_128,&puStack_248,
                  *(undefined8 *)((longlong)pauVar17 + (ulonglong)uVar8 * -0x38 + -8));
    pdb_140c93200(&puStack_1a8,&DAT_143045cc8,0xc,&puStack_128);
  }
  puStack_128 = puStack_1a8;
  puStack_120 = puStack_1a0;
  uStack_118._0_4_ = (undefined4)uStack_198;
  uStack_118._4_4_ = uStack_198._4_4_;
  uStack_110._0_4_ = (uint)uStack_190;
  uStack_110._4_4_ = uStack_190._4_4_;
  uStack_108._0_4_ = (uint)uStack_188;
  uStack_108._4_4_ = uStack_188._4_4_;
  uStack_100 = (uint)uStack_180;
  uStack_fc = uStack_180._4_4_;
  uStack_f8 = (undefined4)uStack_178;
  uStack_f4 = uStack_178._4_4_;
  uStack_f0._0_4_ = uStack_170;
  uStack_f0._4_4_ = uStack_16c;
  puStack_e8 = puStack_168;
  puStack_e0 = puStack_160;
  plStack_d8 = plStack_158;
  uStack_d0 = uStack_150;
  puStack_c8 = (undefined *)uStack_148;
  uStack_c0 = uStack_140;
  puStack_b8 = (undefined *)uStack_138;
  auStack_b0._0_8_ = uStack_130;
  uStack_258 = pdb_140b08d00(&puStack_128,&UNK_143319118,0x10,uStack_1c0,uStack_1b8);
  pdb_141b241d0(&puStack_128,&UNK_143319128,0x21);
  if (SBORROW8(0,(longlong)puStack_128)) {
    puStack_1a8 = puStack_120;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433195e0,0x2b,&puStack_1a8,&UNK_143319610,&UNK_143319150);
  }
  uStack_138 = puStack_b8;
  uStack_130 = auStack_b0._0_8_;
  uStack_148 = (ulonglong)puStack_c8;
  uStack_140 = uStack_c0;
  plStack_158 = plStack_d8;
  uStack_150 = uStack_d0;
  puStack_168 = puStack_e8;
  puStack_160 = puStack_e0;
  uStack_178._0_4_ = uStack_f8;
  uStack_178._4_4_ = uStack_f4;
  uStack_170 = (undefined4)uStack_f0;
  uStack_16c = uStack_f0._4_4_;
  uStack_188._0_4_ = (uint)uStack_108;
  uStack_188._4_4_ = uStack_108._4_4_;
  uStack_180._0_4_ = uStack_100;
  uStack_180._4_4_ = uStack_fc;
  uStack_198._0_4_ = (undefined4)uStack_118;
  uStack_198._4_4_ = uStack_118._4_4_;
  uStack_190._0_4_ = (undefined4)uStack_110;
  uStack_190._4_4_ = uStack_110._4_4_;
  puStack_1a8 = puStack_128;
  puStack_1a0 = puStack_120;
  puStack_248 = puVar15;
  pcStack_240._0_4_ = 0x3f800000;
  if (plStack_d8 != (longlong *)0x0) {
    pauVar17 = (undefined1 (*) [16])CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
    auVar3 = *pauVar17;
    uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    pauVar18 = pauVar17;
    while (uVar13 = uVar7 ^ 0xffff, uVar13 == 0) {
      pauVar18 = pauVar18 + 1;
      auVar3 = *pauVar18;
      pauVar17 = pauVar17 + -0x38;
      uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    }
    uVar8 = 0;
    for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    pdb_1415e43a0(&puStack_128,&puStack_248,
                  *(undefined8 *)((longlong)pauVar17 + (ulonglong)uVar8 * -0x38 + -8));
    pdb_140c93200(&puStack_1a8,&DAT_143045cc8,0xc,&puStack_128);
  }
  puStack_128 = puStack_1a8;
  puStack_120 = puStack_1a0;
  uStack_118._0_4_ = (undefined4)uStack_198;
  uStack_118._4_4_ = uStack_198._4_4_;
  uStack_110._0_4_ = (uint)uStack_190;
  uStack_110._4_4_ = uStack_190._4_4_;
  uStack_108._0_4_ = (uint)uStack_188;
  uStack_108._4_4_ = uStack_188._4_4_;
  uStack_100 = (uint)uStack_180;
  uStack_fc = uStack_180._4_4_;
  uStack_f8 = (undefined4)uStack_178;
  uStack_f4 = uStack_178._4_4_;
  uStack_f0._0_4_ = uStack_170;
  uStack_f0._4_4_ = uStack_16c;
  puStack_e8 = puStack_168;
  puStack_e0 = puStack_160;
  plStack_d8 = plStack_158;
  uStack_d0 = uStack_150;
  puStack_c8 = (undefined *)uStack_148;
  uStack_c0 = uStack_140;
  puStack_b8 = (undefined *)uStack_138;
  auStack_b0._0_8_ = uStack_130;
  uStack_250 = pdb_140b08d00(&puStack_128,&UNK_143319168,0x12,uStack_1c0,uStack_1b8);
  pdb_141b241d0(&puStack_128,&UNK_14331917a,0x21);
  if (SBORROW8(0,(longlong)puStack_128)) {
    puStack_1a8 = puStack_120;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433195e0,0x2b,&puStack_1a8,&UNK_143319610,&UNK_1433191a0);
  }
  uStack_138 = puStack_b8;
  uStack_130 = auStack_b0._0_8_;
  uStack_148 = (ulonglong)puStack_c8;
  uStack_140 = uStack_c0;
  plStack_158 = plStack_d8;
  uStack_150 = uStack_d0;
  puStack_168 = puStack_e8;
  puStack_160 = puStack_e0;
  uStack_178._0_4_ = uStack_f8;
  uStack_178._4_4_ = uStack_f4;
  uStack_170 = (undefined4)uStack_f0;
  uStack_16c = uStack_f0._4_4_;
  uStack_188._0_4_ = (uint)uStack_108;
  uStack_188._4_4_ = uStack_108._4_4_;
  uStack_180._0_4_ = uStack_100;
  uStack_180._4_4_ = uStack_fc;
  uStack_198._0_4_ = (undefined4)uStack_118;
  uStack_198._4_4_ = uStack_118._4_4_;
  uStack_190._0_4_ = (undefined4)uStack_110;
  uStack_190._4_4_ = uStack_110._4_4_;
  puStack_1a8 = puStack_128;
  puStack_1a0 = puStack_120;
  puStack_248 = puVar15;
  pcStack_240._0_4_ = 0x3f800000;
  if (plStack_d8 != (longlong *)0x0) {
    pauVar17 = (undefined1 (*) [16])CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
    auVar3 = *pauVar17;
    uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    pauVar18 = pauVar17;
    while (uVar13 = uVar7 ^ 0xffff, uVar13 == 0) {
      pauVar18 = pauVar18 + 1;
      auVar3 = *pauVar18;
      pauVar17 = pauVar17 + -0x38;
      uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    }
    uVar8 = 0;
    for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    pdb_1415e43a0(&puStack_128,&puStack_248,
                  *(undefined8 *)((longlong)pauVar17 + (ulonglong)uVar8 * -0x38 + -8));
    pdb_140c93200(&puStack_1a8,&DAT_143045cc8,0xc,&puStack_128);
  }
  puStack_128 = puStack_1a8;
  puStack_120 = puStack_1a0;
  uStack_118._0_4_ = (undefined4)uStack_198;
  uStack_118._4_4_ = uStack_198._4_4_;
  uStack_110._0_4_ = (uint)uStack_190;
  uStack_110._4_4_ = uStack_190._4_4_;
  uStack_108._0_4_ = (uint)uStack_188;
  uStack_108._4_4_ = uStack_188._4_4_;
  uStack_100 = (uint)uStack_180;
  uStack_fc = uStack_180._4_4_;
  uStack_f8 = (undefined4)uStack_178;
  uStack_f4 = uStack_178._4_4_;
  uStack_f0._0_4_ = uStack_170;
  uStack_f0._4_4_ = uStack_16c;
  puStack_e8 = puStack_168;
  puStack_e0 = puStack_160;
  plStack_d8 = plStack_158;
  uStack_d0 = uStack_150;
  puStack_c8 = (undefined *)uStack_148;
  uStack_c0 = uStack_140;
  puStack_b8 = (undefined *)uStack_138;
  auStack_b0._0_8_ = uStack_130;
  puStack_2a0 = (undefined8 *)pdb_140b08d00(&puStack_128,&UNK_1433191b8,0x14,uStack_1c0,uStack_1b8);
  pdb_141b241d0(&puStack_128,&UNK_1433191cc,0x21);
  if (SBORROW8(0,(longlong)puStack_128)) {
    puStack_1a8 = puStack_120;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433195e0,0x2b,&puStack_1a8,&UNK_143319610,&UNK_1433191f0);
  }
  uStack_138 = puStack_b8;
  uStack_130 = auStack_b0._0_8_;
  uStack_148 = (ulonglong)puStack_c8;
  uStack_140 = uStack_c0;
  plStack_158 = plStack_d8;
  uStack_150 = uStack_d0;
  puStack_168 = puStack_e8;
  puStack_160 = puStack_e0;
  uStack_178._0_4_ = uStack_f8;
  uStack_178._4_4_ = uStack_f4;
  uStack_170 = (undefined4)uStack_f0;
  uStack_16c = uStack_f0._4_4_;
  uStack_188._0_4_ = (uint)uStack_108;
  uStack_188._4_4_ = uStack_108._4_4_;
  uStack_180._0_4_ = uStack_100;
  uStack_180._4_4_ = uStack_fc;
  uStack_198 = (longlong *)CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
  uStack_190 = (longlong *)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
  puStack_1a8 = puStack_128;
  puStack_1a0 = puStack_120;
  puStack_248 = puVar15;
  pcStack_240 = (code *)CONCAT44(pcStack_240._4_4_,0x3f800000);
  if (plStack_d8 != (longlong *)0x0) {
    pauVar17 = (undefined1 (*) [16])CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
    auVar3 = *pauVar17;
    uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    pauVar18 = pauVar17;
    while (uVar13 = uVar7 ^ 0xffff, uVar13 == 0) {
      pauVar18 = pauVar18 + 1;
      auVar3 = *pauVar18;
      pauVar17 = pauVar17 + -0x38;
      uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    }
    uVar8 = 0;
    for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    pdb_1415e43a0(&puStack_128,&puStack_248,
                  *(undefined8 *)((longlong)pauVar17 + (ulonglong)uVar8 * -0x38 + -8));
    pdb_140c93200(&puStack_1a8,&DAT_143045cc8,0xc,&puStack_128);
  }
  puStack_128 = puStack_1a8;
  puStack_120 = puStack_1a0;
  uStack_118 = uStack_198;
  uStack_110 = uStack_190;
  uStack_108 = (undefined *)CONCAT44(uStack_188._4_4_,(uint)uStack_188);
  uStack_100 = (uint)uStack_180;
  uStack_fc = uStack_180._4_4_;
  uStack_f8 = (undefined4)uStack_178;
  uStack_f4 = uStack_178._4_4_;
  uStack_f0 = (undefined1 (*) [16])CONCAT44(uStack_16c,uStack_170);
  puStack_e8 = puStack_168;
  puStack_e0 = puStack_160;
  plStack_d8 = plStack_158;
  uStack_d0 = uStack_150;
  puStack_c8 = (undefined *)uStack_148;
  uStack_c0 = uStack_140;
  puStack_b8 = (undefined *)uStack_138;
  auStack_b0._0_8_ = uStack_130;
  uStack_298 = pdb_140b08d00(&puStack_128,&UNK_143319208,0xc,uStack_1c0,uStack_1b8);
  puStack_120 = (undefined8 *)0xa;
  uStack_118 = (longlong *)&UNK_143319214;
  uStack_110 = (longlong *)0x1a;
  uStack_108 = &UNK_14331922e;
  uStack_100 = 0x1e;
  uStack_fc = 0;
  uStack_f8 = 0x4331924c;
  uStack_f4 = 1;
  uStack_f0 = (undefined1 (*) [16])0x18;
  puStack_e8 = (undefined8 *)&UNK_143319264;
  puStack_e0 = (undefined8 *)0xa;
  plStack_d8 = (longlong *)&UNK_14331926e;
  uStack_d0 = 0x12;
  puStack_c8 = &UNK_143319280;
  uStack_c0 = 0xc;
  puStack_b8 = &UNK_14331928c;
  stack0xffffffffffffff58 = (ulonglong)&UNK_1433192a0;
  auStack_b0._0_8_ = 0x14;
  uStack_a0 = 0x1d;
  puStack_98 = &UNK_1433192bd;
  uStack_90 = 10;
  puStack_88 = &UNK_1433192c7;
  uStack_80 = 0x12;
  puVar14 = (undefined8 *)0x0;
  do {
    puVar1 = (undefined8 *)((longlong)puVar14 + 1);
    uVar4 = (&uStack_118)[(longlong)puVar14 * 2];
    uVar16 = (&uStack_110)[(longlong)puVar14 * 2];
    puStack_248 = &uStack_2e8;
    pcStack_240 = pdb_1402ed400;
    uStack_2e8 = uVar4;
    uStack_2e0 = uVar16;
    puStack_128 = puVar1;
    pdb_140f60760(&puStack_1a8,&UNK_143319590,&puStack_248);
    puStack_248 = puStack_1a8;
    pcStack_240 = (code *)puStack_1a0;
    plStack_238 = uStack_198;
    pdb_141b248b0(&puStack_1a8,&puStack_248);
    if (SBORROW8(0,(longlong)puStack_1a8)) {
      puStack_248 = puStack_1a0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_1433195e0,0x2b,&puStack_248,&UNK_143319610,&UNK_1433195a8);
    }
    uStack_1d8 = uStack_138;
    uStack_1d0 = uStack_130;
    uStack_1e8 = uStack_148;
    uStack_1e0 = uStack_140;
    lStack_1f8 = (longlong)plStack_158;
    uStack_1f0 = uStack_150;
    uStack_208 = puStack_168;
    uStack_200 = puStack_160;
    uStack_218 = (undefined4)uStack_178;
    uStack_214 = uStack_178._4_4_;
    uStack_210 = uStack_170;
    uStack_20c = uStack_16c;
    uStack_228 = (uint)uStack_188;
    uStack_224 = uStack_188._4_4_;
    uStack_220 = (uint)uStack_180;
    uStack_21c = uStack_180._4_4_;
    plStack_238 = uStack_198;
    uStack_230 = (uint)uStack_190;
    uStack_22c = uStack_190._4_4_;
    puStack_248 = puStack_1a8;
    pcStack_240 = (code *)puStack_1a0;
    puStack_290 = puVar15;
    uStack_288 = 0x3f800000;
    if (plStack_158 != (longlong *)0x0) {
      pauVar17 = (undefined1 (*) [16])CONCAT44(uStack_16c,uStack_170);
      auVar3 = *pauVar17;
      uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
      pauVar18 = pauVar17;
      while (uVar13 = uVar7 ^ 0xffff, uVar13 == 0) {
        pauVar18 = pauVar18 + 1;
        auVar3 = *pauVar18;
        pauVar17 = pauVar17 + -0x38;
        uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
      }
      uVar8 = 0;
      for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      pdb_1415e43a0(&puStack_1a8,&puStack_290,
                    *(undefined8 *)((longlong)pauVar17 + (ulonglong)uVar8 * -0x38 + -8));
      pdb_140c93200(&puStack_248,&DAT_143045cc8,0xc,&puStack_1a8);
    }
    puStack_1a8 = puStack_248;
    puStack_1a0 = (undefined8 *)pcStack_240;
    uStack_198 = plStack_238;
    uStack_190 = (longlong *)CONCAT44(uStack_22c,uStack_230);
    uStack_188._0_4_ = uStack_228;
    uStack_188._4_4_ = uStack_224;
    uStack_180._0_4_ = uStack_220;
    uStack_180._4_4_ = uStack_21c;
    uStack_178._0_4_ = uStack_218;
    uStack_178._4_4_ = uStack_214;
    uStack_170 = uStack_210;
    uStack_16c = uStack_20c;
    puStack_168 = (undefined8 *)uStack_208;
    puStack_160 = (undefined8 *)uStack_200;
    plStack_158 = (longlong *)lStack_1f8;
    uStack_150 = uStack_1f0;
    uStack_148 = uStack_1e8;
    uStack_140 = uStack_1e0;
    uStack_138 = uStack_1d8;
    uStack_130 = uStack_1d0;
    pdb_140b08d00(&puStack_1a8,uVar4,uVar16,uStack_1c0,uStack_1b8);
    puVar14 = puVar1;
  } while (puVar1 != (undefined8 *)0xa);
  pdb_140a596f0(&puStack_248,uStack_280,&UNK_1433192d9,0x19,&UNK_1433192f8);
  uVar12 = uStack_260;
  uVar16 = uStack_270;
  uVar4 = uStack_298;
  LOCK();
  piVar2 = (int *)(((ulonglong)pcStack_240 & 0xffffffffffffffc0) + 0x10 +
                  (ulonglong)((uint)pcStack_240 & 0x3f) * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (plStack_238 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)plStack_238 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)plStack_238 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_d0 = CONCAT44(uStack_22c,uStack_230);
  if (uStack_d0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_d0 & 0xffffffffffffffc0) + 0x10 + (ulonglong)(uStack_230 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_c8 = (undefined *)CONCAT44(uStack_224,uStack_228);
  if (puStack_c8 != (undefined *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)puStack_c8 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)(uStack_228 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_b8 = (undefined *)CONCAT44(uStack_214,uStack_218);
  uStack_c0 = CONCAT44(uStack_21c,uStack_220);
  if (uStack_c0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_c0 & 0xfffffffffffffffc) + 0x10 + (ulonglong)(uStack_220 & 3) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uVar11 = _UNK_142e4e658;
  uVar10 = _DAT_142e4e650;
  uStack_100 = 0;
  uStack_108 = (undefined *)0x0;
  puStack_128 = (undefined8 *)((ulonglong)puStack_128 & 0xffffffff00000000);
  puStack_120 = (undefined8 *)uStack_278;
  puStack_e8 = puStack_248;
  puStack_e0 = (undefined8 *)pcStack_240;
  plStack_d8 = plStack_238;
  uStack_118 = (longlong *)_DAT_142e4e650;
  uStack_110 = (longlong *)_UNK_142e4e658;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  _auStack_b0 = (unkuint10)1 << 0x40;
  pdb_14161c270(&puStack_1a8,uStack_1b0,&puStack_128,&UNK_143319310);
  auVar3 = _auStack_b0;
  LOCK();
  piVar2 = (int *)(((ulonglong)pcStack_240 & 0xffffffffffffffc0) + 0x10 +
                  (ulonglong)((uint)pcStack_240 & 0x3f) * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (plStack_238 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)plStack_238 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)plStack_238 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_d0 = CONCAT44(uStack_22c,uStack_230);
  if (uStack_d0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_d0 & 0xffffffffffffffc0) + 0x10 + (ulonglong)(uStack_230 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_c8 = (undefined *)CONCAT44(uStack_224,uStack_228);
  if (puStack_c8 != (undefined *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)puStack_c8 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)(uStack_228 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_b8 = (undefined *)CONCAT44(uStack_214,uStack_218);
  uStack_c0 = CONCAT44(uStack_21c,uStack_220);
  if (uStack_c0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_c0 & 0xfffffffffffffffc) + 0x10 + (ulonglong)(uStack_220 & 3) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_100 = 0;
  uStack_108 = (undefined *)0x0;
  puStack_128 = (undefined8 *)((ulonglong)puStack_128 & 0xffffffff00000000);
  puStack_120 = (undefined8 *)uVar16;
  puStack_e8 = puStack_248;
  puStack_e0 = (undefined8 *)pcStack_240;
  plStack_d8 = plStack_238;
  uStack_118 = (longlong *)uVar10;
  uStack_110 = (longlong *)uVar11;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  auStack_b0 = (undefined1  [9])((unkuint9)stack0xffffffffffffff58 << 0x40);
  uStack_a6 = auVar3._10_6_;
  uStack_a7 = 3;
  auStack_b0 = (undefined1  [9])(unkuint9)0;
  pdb_14161d7c0(&puStack_1a8,uStack_1b0,&puStack_128,&UNK_143319328);
  puVar14 = puStack_1a8;
  plVar19 = uStack_198;
  if (uStack_198 == (longlong *)0x0) {
    plVar19 = uStack_190;
  }
  lVar5 = plVar19[2];
  if ((ulonglong)(*plVar19 - lVar5) < 0x18) {
    pdb_142d7f1b0(plVar19,lVar5,0x18,1,1);
  }
  lVar6 = plVar19[1];
  *(code **)(lVar6 + lVar5) = pdb_14160bfd0;
  *(undefined8 **)(lVar6 + 8 + lVar5) = puVar14;
  *(code **)(lVar6 + 0x10 + lVar5) = pdb_14160dde0;
  plVar19[2] = lVar5 + 0x18;
  LOCK();
  piVar2 = (int *)(((ulonglong)pcStack_240 & 0xffffffffffffffc0) + 0x10 +
                  (ulonglong)((uint)pcStack_240 & 0x3f) * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (plStack_238 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)plStack_238 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)plStack_238 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_d0 = CONCAT44(uStack_22c,uStack_230);
  if (uStack_d0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_d0 & 0xffffffffffffffc0) + 0x10 + (ulonglong)(uStack_230 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_c8 = (undefined *)CONCAT44(uStack_224,uStack_228);
  if (puStack_c8 != (undefined *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)puStack_c8 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)(uStack_228 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_b8 = (undefined *)CONCAT44(uStack_214,uStack_218);
  uStack_c0 = CONCAT44(uStack_21c,uStack_220);
  if (uStack_c0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_c0 & 0xfffffffffffffffc) + 0x10 + (ulonglong)(uStack_220 & 3) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_100 = 0;
  uStack_108 = (undefined *)0x0;
  puStack_128 = (undefined8 *)((ulonglong)puStack_128 & 0xffffffff00000000);
  puStack_120 = (undefined8 *)uVar16;
  puStack_e8 = puStack_248;
  puStack_e0 = (undefined8 *)pcStack_240;
  plStack_d8 = plStack_238;
  uStack_118 = (longlong *)uVar10;
  uStack_110 = (longlong *)uVar11;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  _auStack_b0 = (unkuint10)4 << 0x40;
  pdb_14161c270(&puStack_1a8,uStack_1b0,&puStack_128,&UNK_143319340);
  puVar14 = puStack_1a8;
  plVar19 = uStack_198;
  if (uStack_198 == (longlong *)0x0) {
    plVar19 = uStack_190;
  }
  lVar5 = plVar19[2];
  if ((ulonglong)(*plVar19 - lVar5) < 0x18) {
    pdb_142d7f1b0(plVar19,lVar5,0x18,1,1);
  }
  auVar3 = _auStack_b0;
  lVar6 = plVar19[1];
  *(code **)(lVar6 + lVar5) = pdb_14160bfd0;
  *(undefined8 **)(lVar6 + 8 + lVar5) = puVar14;
  *(code **)(lVar6 + 0x10 + lVar5) = pdb_14160dde0;
  plVar19[2] = lVar5 + 0x18;
  LOCK();
  piVar2 = (int *)(((ulonglong)pcStack_240 & 0xffffffffffffffc0) + 0x10 +
                  (ulonglong)((uint)pcStack_240 & 0x3f) * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (plStack_238 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)plStack_238 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)plStack_238 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_d0 = CONCAT44(uStack_22c,uStack_230);
  if (uStack_d0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_d0 & 0xffffffffffffffc0) + 0x10 + (ulonglong)(uStack_230 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_c8 = (undefined *)CONCAT44(uStack_224,uStack_228);
  if (puStack_c8 != (undefined *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)puStack_c8 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)(uStack_228 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_b8 = (undefined *)CONCAT44(uStack_214,uStack_218);
  uStack_c0 = CONCAT44(uStack_21c,uStack_220);
  if (uStack_c0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_c0 & 0xfffffffffffffffc) + 0x10 + (ulonglong)(uStack_220 & 3) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_100 = 0;
  uStack_108 = (undefined *)0x0;
  puStack_128 = (undefined8 *)((ulonglong)puStack_128 & 0xffffffff00000000);
  puStack_120 = (undefined8 *)uVar16;
  puStack_e8 = puStack_248;
  puStack_e0 = (undefined8 *)pcStack_240;
  plStack_d8 = plStack_238;
  uStack_118 = (longlong *)uVar10;
  uStack_110 = (longlong *)uVar11;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  auStack_b0 = (undefined1  [9])((unkuint9)stack0xffffffffffffff58 << 0x40);
  uStack_a6 = auVar3._10_6_;
  uStack_a7 = 5;
  auStack_b0 = (undefined1  [9])(unkuint9)0;
  uStack_a4 = 0x3e99999a;
  pdb_14161cab0(&puStack_1a8,uStack_1b0,&puStack_128,&UNK_143319358);
  puVar14 = puStack_1a8;
  plVar19 = uStack_198;
  if (uStack_198 == (longlong *)0x0) {
    plVar19 = uStack_190;
  }
  lVar5 = plVar19[2];
  if ((ulonglong)(*plVar19 - lVar5) < 0x18) {
    pdb_142d7f1b0(plVar19,lVar5,0x18,1,1);
  }
  lVar6 = plVar19[1];
  *(code **)(lVar6 + lVar5) = pdb_14160bfd0;
  *(undefined8 **)(lVar6 + 8 + lVar5) = puVar14;
  *(code **)(lVar6 + 0x10 + lVar5) = pdb_14160dde0;
  plVar19[2] = lVar5 + 0x18;
  LOCK();
  piVar2 = (int *)(((ulonglong)pcStack_240 & 0xffffffffffffffc0) + 0x10 +
                  (ulonglong)((uint)pcStack_240 & 0x3f) * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (plStack_238 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)plStack_238 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)plStack_238 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_d0 = CONCAT44(uStack_22c,uStack_230);
  if (uStack_d0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_d0 & 0xffffffffffffffc0) + 0x10 + (ulonglong)(uStack_230 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_c8 = (undefined *)CONCAT44(uStack_224,uStack_228);
  if (puStack_c8 != (undefined *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)puStack_c8 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)(uStack_228 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_b8 = (undefined *)CONCAT44(uStack_214,uStack_218);
  uStack_c0 = CONCAT44(uStack_21c,uStack_220);
  if (uStack_c0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_c0 & 0xfffffffffffffffc) + 0x10 + (ulonglong)(uStack_220 & 3) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_100 = 0;
  uStack_108 = (undefined *)0x0;
  puStack_128 = (undefined8 *)((ulonglong)puStack_128 & 0xffffffff00000000);
  puStack_120 = (undefined8 *)uStack_268;
  puStack_e8 = puStack_248;
  puStack_e0 = (undefined8 *)pcStack_240;
  plStack_d8 = plStack_238;
  uStack_118 = (longlong *)uVar10;
  uStack_110 = (longlong *)uVar11;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  _auStack_b0 = (unkuint10)6 << 0x40;
  pdb_141620290(&puStack_1a8,uStack_1b0,&puStack_128,&UNK_143319370);
  puVar14 = puStack_1a8;
  plVar19 = uStack_198;
  if (uStack_198 == (longlong *)0x0) {
    plVar19 = uStack_190;
  }
  lVar5 = plVar19[2];
  if ((ulonglong)(*plVar19 - lVar5) < 0x18) {
    pdb_142d7f1b0(plVar19,lVar5,0x18,1,1);
  }
  lVar6 = plVar19[1];
  *(code **)(lVar6 + lVar5) = pdb_14160bfd0;
  *(undefined8 **)(lVar6 + 8 + lVar5) = puVar14;
  *(code **)(lVar6 + 0x10 + lVar5) = pdb_14160dde0;
  plVar19[2] = lVar5 + 0x18;
  LOCK();
  piVar2 = (int *)(((ulonglong)pcStack_240 & 0xffffffffffffffc0) + 0x10 +
                  (ulonglong)((uint)pcStack_240 & 0x3f) * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (plStack_238 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)plStack_238 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)plStack_238 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_d0 = CONCAT44(uStack_22c,uStack_230);
  if (uStack_d0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_d0 & 0xffffffffffffffc0) + 0x10 + (ulonglong)(uStack_230 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_c8 = (undefined *)CONCAT44(uStack_224,uStack_228);
  if (puStack_c8 != (undefined *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)puStack_c8 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)(uStack_228 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_b8 = (undefined *)CONCAT44(uStack_214,uStack_218);
  uStack_c0 = CONCAT44(uStack_21c,uStack_220);
  if (uStack_c0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_c0 & 0xfffffffffffffffc) + 0x10 + (ulonglong)(uStack_220 & 3) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_100 = 0;
  uStack_108 = (undefined *)0x0;
  puStack_128 = (undefined8 *)((ulonglong)puStack_128 & 0xffffffff00000000);
  puStack_120 = (undefined8 *)uVar12;
  puStack_e8 = puStack_248;
  puStack_e0 = (undefined8 *)pcStack_240;
  plStack_d8 = plStack_238;
  uStack_118 = (longlong *)uVar10;
  uStack_110 = (longlong *)uVar11;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  _auStack_b0 = (unkuint10)7 << 0x40;
  pdb_141620290(&puStack_1a8,uStack_1b0,&puStack_128,&UNK_143319388);
  puVar14 = puStack_1a8;
  plVar19 = uStack_198;
  if (uStack_198 == (longlong *)0x0) {
    plVar19 = uStack_190;
  }
  lVar5 = plVar19[2];
  if ((ulonglong)(*plVar19 - lVar5) < 0x18) {
    pdb_142d7f1b0(plVar19,lVar5,0x18,1,1);
  }
  lVar6 = plVar19[1];
  *(code **)(lVar6 + lVar5) = pdb_14160bfd0;
  *(undefined8 **)(lVar6 + 8 + lVar5) = puVar14;
  *(code **)(lVar6 + 0x10 + lVar5) = pdb_14160dde0;
  plVar19[2] = lVar5 + 0x18;
  LOCK();
  piVar2 = (int *)(((ulonglong)pcStack_240 & 0xffffffffffffffc0) + 0x10 +
                  (ulonglong)((uint)pcStack_240 & 0x3f) * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (plStack_238 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)plStack_238 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)plStack_238 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_d0 = CONCAT44(uStack_22c,uStack_230);
  if (uStack_d0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_d0 & 0xffffffffffffffc0) + 0x10 + (ulonglong)(uStack_230 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_c8 = (undefined *)CONCAT44(uStack_224,uStack_228);
  if (puStack_c8 != (undefined *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)puStack_c8 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)(uStack_228 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_b8 = (undefined *)CONCAT44(uStack_214,uStack_218);
  uStack_c0 = CONCAT44(uStack_21c,uStack_220);
  if (uStack_c0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_c0 & 0xfffffffffffffffc) + 0x10 + (ulonglong)(uStack_220 & 3) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_100 = 0;
  uStack_108 = (undefined *)0x0;
  puStack_128 = (undefined8 *)((ulonglong)puStack_128 & 0xffffffff00000000);
  puStack_120 = (undefined8 *)uVar12;
  puStack_e8 = puStack_248;
  puStack_e0 = (undefined8 *)pcStack_240;
  plStack_d8 = plStack_238;
  uStack_118 = (longlong *)uVar10;
  uStack_110 = (longlong *)uVar11;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  _auStack_b0 = (unkuint10)8 << 0x40;
  pdb_141620290(&puStack_1a8,uStack_1b0,&puStack_128,&UNK_1433193a0);
  puVar14 = puStack_1a8;
  plVar19 = uStack_198;
  if (uStack_198 == (longlong *)0x0) {
    plVar19 = uStack_190;
  }
  lVar5 = plVar19[2];
  if ((ulonglong)(*plVar19 - lVar5) < 0x18) {
    pdb_142d7f1b0(plVar19,lVar5,0x18,1,1);
  }
  lVar6 = plVar19[1];
  *(code **)(lVar6 + lVar5) = pdb_14160bfd0;
  *(undefined8 **)(lVar6 + 8 + lVar5) = puVar14;
  *(code **)(lVar6 + 0x10 + lVar5) = pdb_14160dde0;
  plVar19[2] = lVar5 + 0x18;
  LOCK();
  piVar2 = (int *)(((ulonglong)pcStack_240 & 0xffffffffffffffc0) + 0x10 +
                  (ulonglong)((uint)pcStack_240 & 0x3f) * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (plStack_238 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)plStack_238 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)plStack_238 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_d0 = CONCAT44(uStack_22c,uStack_230);
  if (uStack_d0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_d0 & 0xffffffffffffffc0) + 0x10 + (ulonglong)(uStack_230 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_c8 = (undefined *)CONCAT44(uStack_224,uStack_228);
  if (puStack_c8 != (undefined *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)puStack_c8 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)(uStack_228 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_b8 = (undefined *)CONCAT44(uStack_214,uStack_218);
  uStack_c0 = CONCAT44(uStack_21c,uStack_220);
  if (uStack_c0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_c0 & 0xfffffffffffffffc) + 0x10 + (ulonglong)(uStack_220 & 3) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_100 = 0;
  uStack_108 = (undefined *)0x0;
  puStack_128 = (undefined8 *)((ulonglong)puStack_128 & 0xffffffff00000000);
  puStack_120 = (undefined8 *)uVar12;
  puStack_e8 = puStack_248;
  puStack_e0 = (undefined8 *)pcStack_240;
  plStack_d8 = plStack_238;
  uStack_118 = (longlong *)uVar10;
  uStack_110 = (longlong *)uVar11;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  _auStack_b0 = (unkuint10)9 << 0x40;
  pdb_141620290(&puStack_1a8,uStack_1b0,&puStack_128,&UNK_1433193b8);
  puVar14 = puStack_1a8;
  plVar19 = uStack_198;
  if (uStack_198 == (longlong *)0x0) {
    plVar19 = uStack_190;
  }
  lVar5 = plVar19[2];
  if ((ulonglong)(*plVar19 - lVar5) < 0x18) {
    pdb_142d7f1b0(plVar19,lVar5,0x18,1,1);
  }
  lVar6 = plVar19[1];
  *(code **)(lVar6 + lVar5) = pdb_14160bfd0;
  *(undefined8 **)(lVar6 + 8 + lVar5) = puVar14;
  *(code **)(lVar6 + 0x10 + lVar5) = pdb_14160dde0;
  plVar19[2] = lVar5 + 0x18;
  LOCK();
  piVar2 = (int *)(((ulonglong)pcStack_240 & 0xffffffffffffffc0) + 0x10 +
                  (ulonglong)((uint)pcStack_240 & 0x3f) * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (plStack_238 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)plStack_238 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)plStack_238 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_d0 = CONCAT44(uStack_22c,uStack_230);
  if (uStack_d0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_d0 & 0xffffffffffffffc0) + 0x10 + (ulonglong)(uStack_230 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_c8 = (undefined *)CONCAT44(uStack_224,uStack_228);
  if (puStack_c8 != (undefined *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)puStack_c8 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)(uStack_228 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_b8 = (undefined *)CONCAT44(uStack_214,uStack_218);
  uStack_c0 = CONCAT44(uStack_21c,uStack_220);
  if (uStack_c0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_c0 & 0xfffffffffffffffc) + 0x10 + (ulonglong)(uStack_220 & 3) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_100 = 0;
  uStack_108 = (undefined *)0x0;
  puStack_128 = (undefined8 *)((ulonglong)puStack_128 & 0xffffffff00000000);
  puStack_120 = (undefined8 *)uVar12;
  puStack_e8 = puStack_248;
  puStack_e0 = (undefined8 *)pcStack_240;
  plStack_d8 = plStack_238;
  uStack_118 = (longlong *)uVar10;
  uStack_110 = (longlong *)uVar11;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  _auStack_b0 = (unkuint10)10 << 0x40;
  pdb_141620290(&puStack_1a8,uStack_1b0,&puStack_128,&UNK_1433193d0);
  puVar14 = puStack_1a8;
  plVar19 = uStack_198;
  if (uStack_198 == (longlong *)0x0) {
    plVar19 = uStack_190;
  }
  lVar5 = plVar19[2];
  if ((ulonglong)(*plVar19 - lVar5) < 0x18) {
    pdb_142d7f1b0(plVar19,lVar5,0x18,1,1);
  }
  lVar6 = plVar19[1];
  *(code **)(lVar6 + lVar5) = pdb_14160bfd0;
  *(undefined8 **)(lVar6 + 8 + lVar5) = puVar14;
  *(code **)(lVar6 + 0x10 + lVar5) = pdb_14160dde0;
  plVar19[2] = lVar5 + 0x18;
  LOCK();
  piVar2 = (int *)(((ulonglong)pcStack_240 & 0xffffffffffffffc0) + 0x10 +
                  (ulonglong)((uint)pcStack_240 & 0x3f) * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (plStack_238 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)plStack_238 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)plStack_238 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_d0 = CONCAT44(uStack_22c,uStack_230);
  if (uStack_d0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_d0 & 0xffffffffffffffc0) + 0x10 + (ulonglong)(uStack_230 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_c8 = (undefined *)CONCAT44(uStack_224,uStack_228);
  if (puStack_c8 != (undefined *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)puStack_c8 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)(uStack_228 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_b8 = (undefined *)CONCAT44(uStack_214,uStack_218);
  uStack_c0 = CONCAT44(uStack_21c,uStack_220);
  if (uStack_c0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_c0 & 0xfffffffffffffffc) + 0x10 + (ulonglong)(uStack_220 & 3) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_100 = 0;
  uStack_108 = (undefined *)0x0;
  puStack_128 = (undefined8 *)((ulonglong)puStack_128 & 0xffffffff00000000);
  puStack_120 = (undefined8 *)uStack_258;
  puStack_e8 = puStack_248;
  puStack_e0 = (undefined8 *)pcStack_240;
  plStack_d8 = plStack_238;
  uStack_118 = (longlong *)uVar10;
  uStack_110 = (longlong *)uVar11;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  auStack_b0 = (undefined1  [9])((unkuint9)2 << 0x40);
  pdb_141620770(&puStack_1a8,uStack_1b0,&puStack_128,&UNK_1433193e8);
  puVar14 = puStack_1a8;
  plVar19 = uStack_198;
  if (uStack_198 == (longlong *)0x0) {
    plVar19 = uStack_190;
  }
  lVar5 = plVar19[2];
  if ((ulonglong)(*plVar19 - lVar5) < 0x18) {
    pdb_142d7f1b0(plVar19,lVar5,0x18,1,1);
  }
  lVar6 = plVar19[1];
  *(code **)(lVar6 + lVar5) = pdb_14160bfd0;
  *(undefined8 **)(lVar6 + 8 + lVar5) = puVar14;
  *(code **)(lVar6 + 0x10 + lVar5) = pdb_14160dde0;
  plVar19[2] = lVar5 + 0x18;
  LOCK();
  piVar2 = (int *)(((ulonglong)pcStack_240 & 0xffffffffffffffc0) + 0x10 +
                  (ulonglong)((uint)pcStack_240 & 0x3f) * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (plStack_238 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)plStack_238 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)plStack_238 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_d0 = CONCAT44(uStack_22c,uStack_230);
  if (uStack_d0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_d0 & 0xffffffffffffffc0) + 0x10 + (ulonglong)(uStack_230 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_c8 = (undefined *)CONCAT44(uStack_224,uStack_228);
  if (puStack_c8 != (undefined *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)puStack_c8 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)(uStack_228 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_b8 = (undefined *)CONCAT44(uStack_214,uStack_218);
  uStack_c0 = CONCAT44(uStack_21c,uStack_220);
  if (uStack_c0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_c0 & 0xfffffffffffffffc) + 0x10 + (ulonglong)(uStack_220 & 3) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_100 = 0;
  uStack_108 = (undefined *)0x0;
  puStack_128 = (undefined8 *)((ulonglong)puStack_128 & 0xffffffff00000000);
  puStack_120 = (undefined8 *)uVar4;
  puStack_e8 = puStack_248;
  puStack_e0 = (undefined8 *)pcStack_240;
  plStack_d8 = plStack_238;
  uStack_118 = (longlong *)uVar10;
  uStack_110 = (longlong *)uVar11;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  uStack_a0 = CONCAT71(uStack_a0._1_7_,0xd);
  _auStack_b0 = ZEXT816(1) << 0x40;
  pdb_14161da30(&puStack_1a8,uStack_1b0,&puStack_128,&UNK_143319400);
  puVar14 = puStack_1a8;
  plVar19 = uStack_198;
  if (uStack_198 == (longlong *)0x0) {
    plVar19 = uStack_190;
  }
  lVar5 = plVar19[2];
  if ((ulonglong)(*plVar19 - lVar5) < 0x18) {
    pdb_142d7f1b0(plVar19,lVar5,0x18,1,1);
  }
  lVar6 = plVar19[1];
  *(code **)(lVar6 + lVar5) = pdb_14160bfd0;
  *(undefined8 **)(lVar6 + 8 + lVar5) = puVar14;
  *(code **)(lVar6 + 0x10 + lVar5) = pdb_14160dde0;
  plVar19[2] = lVar5 + 0x18;
  LOCK();
  piVar2 = (int *)(((ulonglong)pcStack_240 & 0xffffffffffffffc0) + 0x10 +
                  (ulonglong)((uint)pcStack_240 & 0x3f) * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (plStack_238 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)plStack_238 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)plStack_238 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_d0 = CONCAT44(uStack_22c,uStack_230);
  if (uStack_d0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_d0 & 0xffffffffffffffc0) + 0x10 + (ulonglong)(uStack_230 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_c8 = (undefined *)CONCAT44(uStack_224,uStack_228);
  if (puStack_c8 != (undefined *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)puStack_c8 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)(uStack_228 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_b8 = (undefined *)CONCAT44(uStack_214,uStack_218);
  uStack_c0 = CONCAT44(uStack_21c,uStack_220);
  if (uStack_c0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_c0 & 0xfffffffffffffffc) + 0x10 + (ulonglong)(uStack_220 & 3) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_100 = 0;
  uStack_108 = (undefined *)0x0;
  puStack_128 = (undefined8 *)((ulonglong)puStack_128 & 0xffffffff00000000);
  puStack_120 = (undefined8 *)uVar4;
  puStack_e8 = puStack_248;
  puStack_e0 = (undefined8 *)pcStack_240;
  plStack_d8 = plStack_238;
  uStack_118 = (longlong *)uVar10;
  uStack_110 = (longlong *)uVar11;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  uStack_a0 = CONCAT71(uStack_a0._1_7_,0xd);
  _auStack_b0 = ZEXT816(2) << 0x40;
  pdb_14161da30(&puStack_1a8,uStack_1b0,&puStack_128,&UNK_143319418);
  puVar14 = puStack_1a8;
  plVar19 = uStack_198;
  if (uStack_198 == (longlong *)0x0) {
    plVar19 = uStack_190;
  }
  lVar5 = plVar19[2];
  if ((ulonglong)(*plVar19 - lVar5) < 0x18) {
    pdb_142d7f1b0(plVar19,lVar5,0x18,1,1);
  }
  lVar6 = plVar19[1];
  *(code **)(lVar6 + lVar5) = pdb_14160bfd0;
  *(undefined8 **)(lVar6 + 8 + lVar5) = puVar14;
  *(code **)(lVar6 + 0x10 + lVar5) = pdb_14160dde0;
  plVar19[2] = lVar5 + 0x18;
  uVar13 = (uint)uStack_2d0 & 0x3f;
  uStack_260 = (ulonglong)uVar13;
  LOCK();
  piVar2 = (int *)((uStack_2d0 & 0xffffffffffffffc0) + 0x10 + (ulonglong)uVar13 * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (uStack_2c8 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_2c8 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)uStack_2c8 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  if (uStack_2c0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_2c0 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)uStack_2c0 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  if (uStack_2b8 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_2b8 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)uStack_2b8 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  if (uStack_2b0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_2b0 & 0xfffffffffffffffc) + 0x10 +
                    (ulonglong)((uint)uStack_2b0 & 3) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_108 = (undefined *)0x0;
  uStack_100 = 0;
  puStack_128 = (undefined8 *)((ulonglong)puStack_128 & 0xffffffff00000000);
  puStack_120 = (undefined8 *)uStack_250;
  uStack_258 = CONCAT44(uStack_258._4_4_,uStack_2d8);
  uStack_250 = CONCAT44(uStack_250._4_4_,uStack_2d4);
  uStack_280 = uStack_2d0;
  puStack_e0 = (undefined8 *)uStack_2d0;
  uStack_278 = uStack_2c8;
  plStack_d8 = (longlong *)uStack_2c8;
  uStack_d0 = uStack_2c0;
  puStack_c8 = (undefined *)uStack_2b8;
  uStack_c0 = uStack_2b0;
  uStack_270 = CONCAT44(uStack_270._4_4_,uStack_2a8);
  uStack_268 = CONCAT44(uStack_268._4_4_,uStack_2a4);
  uStack_118 = (longlong *)uVar10;
  uStack_110 = (longlong *)uVar11;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  _auStack_b0 = (undefined1  [16])0x0;
  uStack_a0 = CONCAT62(uStack_a0._2_6_,0xb01);
  pdb_14161cd20(&puStack_1a8,uStack_1b0,&puStack_128,&UNK_143319430);
  puVar14 = puStack_1a8;
  plVar19 = uStack_198;
  if (uStack_198 == (longlong *)0x0) {
    plVar19 = uStack_190;
  }
  lVar5 = plVar19[2];
  if ((ulonglong)(*plVar19 - lVar5) < 0x18) {
    pdb_142d7f1b0(plVar19,lVar5,0x18,1,1);
  }
  lVar6 = plVar19[1];
  *(code **)(lVar6 + lVar5) = pdb_14160bfd0;
  *(undefined8 **)(lVar6 + 8 + lVar5) = puVar14;
  *(code **)(lVar6 + 0x10 + lVar5) = pdb_14160dde0;
  plVar19[2] = lVar5 + 0x18;
  LOCK();
  piVar2 = (int *)((uStack_2d0 & 0xffffffffffffffc0 | 0x10) + uStack_260 * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (uStack_278 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_278 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)uStack_278 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  if (uStack_2c0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_2c0 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)uStack_2c0 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  if (uStack_2b8 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_2b8 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)uStack_2b8 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  if (uStack_2b0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_2b0 & 0xfffffffffffffffc) + 0x10 +
                    (ulonglong)((uint)uStack_2b0 & 3) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_100 = 0;
  uStack_108 = (undefined *)0x0;
  puStack_128 = (undefined8 *)((ulonglong)puStack_128 & 0xffffffff00000000);
  puStack_120 = puStack_2a0;
  puStack_e8 = (undefined8 *)CONCAT44((undefined4)uStack_250,(int)uStack_258);
  puStack_e0 = (undefined8 *)uStack_280;
  plStack_d8 = (longlong *)uStack_278;
  uStack_d0 = uStack_2c0;
  puStack_c8 = (undefined *)uStack_2b8;
  uStack_c0 = uStack_2b0;
  puStack_b8 = (undefined *)CONCAT44((undefined4)uStack_268,(int)uStack_270);
  uStack_118 = (longlong *)uVar10;
  uStack_110 = (longlong *)uVar11;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  uStack_a0 = CONCAT62(uStack_a0._2_6_,0xc00);
  _auStack_b0 = ZEXT816(0);
  uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
  pdb_14161cd20(&puStack_1a8,uStack_1b0,&puStack_128,&UNK_143319448);
  puVar14 = puStack_1a8;
  plVar19 = uStack_198;
  if (uStack_198 == (longlong *)0x0) {
    plVar19 = uStack_190;
  }
  lVar5 = plVar19[2];
  if ((ulonglong)(*plVar19 - lVar5) < 0x18) {
    pdb_142d7f1b0(plVar19,lVar5,0x18,1,1);
  }
  lVar6 = plVar19[1];
  *(code **)(lVar6 + lVar5) = pdb_14160bfd0;
  *(undefined8 **)(lVar6 + 8 + lVar5) = puVar14;
  *(code **)(lVar6 + 0x10 + lVar5) = pdb_14160dde0;
  plVar19[2] = lVar5 + 0x18;
  pdb_140a9b770(&puStack_128,0,_DAT_142e36f28);
  if (SBORROW8(0,(longlong)puStack_128)) {
    uStack_198 = uStack_110;
    puStack_1a8 = puStack_120;
    puStack_1a0 = uStack_118;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433195e0,0x2b,&puStack_1a8,&UNK_1433195c0,&UNK_143319460);
  }
  uStack_138 = puStack_b8;
  uStack_130 = auStack_b0._0_8_;
  uStack_148 = (ulonglong)puStack_c8;
  uStack_140 = uStack_c0;
  plStack_158 = plStack_d8;
  uStack_150 = uStack_d0;
  puStack_168 = puStack_e8;
  puStack_160 = puStack_e0;
  uStack_178._0_4_ = uStack_f8;
  uStack_178._4_4_ = uStack_f4;
  uStack_170 = (undefined4)uStack_f0;
  uStack_16c = uStack_f0._4_4_;
  uStack_188._0_4_ = (uint)uStack_108;
  uStack_188._4_4_ = uStack_108._4_4_;
  uStack_180._0_4_ = uStack_100;
  uStack_180._4_4_ = uStack_fc;
  uStack_198._0_4_ = SUB84(uStack_118,0);
  uStack_198._4_4_ = uStack_118._4_4_;
  uStack_190._0_4_ = (uint)uStack_110;
  uStack_190._4_4_ = uStack_110._4_4_;
  puStack_1a8 = puStack_128;
  puStack_1a0 = puStack_120;
  puStack_290 = puVar15;
  uStack_288 = 0x3f800000;
  if (plStack_d8 != (longlong *)0x0) {
    auVar3 = *uStack_f0;
    uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    pauVar17 = uStack_f0;
    pauVar18 = uStack_f0;
    while (uVar13 = uVar7 ^ 0xffff, uVar13 == 0) {
      pauVar18 = pauVar18 + 1;
      auVar3 = *pauVar18;
      pauVar17 = pauVar17 + -0x38;
      uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    }
    uVar8 = 0;
    for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    pdb_1415e43a0(&puStack_128,&puStack_290,
                  *(undefined8 *)((longlong)pauVar17 + (ulonglong)uVar8 * -0x38 + -8));
    pdb_140c93200(&puStack_1a8,&DAT_143045cc8,0xc,&puStack_128);
  }
  puStack_128 = puStack_1a8;
  puStack_120 = puStack_1a0;
  uStack_118._0_4_ = (undefined4)uStack_198;
  uStack_118._4_4_ = uStack_198._4_4_;
  uStack_110._0_4_ = (uint)uStack_190;
  uStack_110._4_4_ = uStack_190._4_4_;
  uStack_108._0_4_ = (uint)uStack_188;
  uStack_108._4_4_ = uStack_188._4_4_;
  uStack_100 = (uint)uStack_180;
  uStack_fc = uStack_180._4_4_;
  uStack_f8 = (undefined4)uStack_178;
  uStack_f4 = uStack_178._4_4_;
  uStack_f0._0_4_ = uStack_170;
  uStack_f0._4_4_ = uStack_16c;
  puStack_e8 = puStack_168;
  puStack_e0 = puStack_160;
  plStack_d8 = plStack_158;
  uStack_d0 = uStack_150;
  puStack_c8 = (undefined *)uStack_148;
  uStack_c0 = uStack_140;
  puStack_b8 = (undefined *)uStack_138;
  auStack_b0._0_8_ = uStack_130;
  pdb_140b08d00(&puStack_128,&UNK_143319478,0xb,uStack_1c0,uStack_1b8);
  pdb_141b241d0(&puStack_128,&UNK_143319483,0x17);
  if (SBORROW8(0,(longlong)puStack_128)) {
    puStack_1a8 = puStack_120;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433195e0,0x2b,&puStack_1a8,&UNK_143319610,&UNK_1433194a0);
  }
  uStack_138 = puStack_b8;
  uStack_130 = auStack_b0._0_8_;
  uStack_148 = (ulonglong)puStack_c8;
  uStack_140 = uStack_c0;
  plStack_158 = plStack_d8;
  uStack_150 = uStack_d0;
  puStack_168 = puStack_e8;
  puStack_160 = puStack_e0;
  uStack_178 = CONCAT44(uStack_f4,uStack_f8);
  uStack_170 = (undefined4)uStack_f0;
  uStack_16c = uStack_f0._4_4_;
  uStack_188 = CONCAT44(uStack_108._4_4_,(uint)uStack_108);
  uStack_180 = CONCAT44(uStack_fc,uStack_100);
  uStack_198 = (longlong *)CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
  uStack_190 = (longlong *)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
  puStack_1a8 = puStack_128;
  puStack_1a0 = puStack_120;
  puStack_120 = (undefined8 *)pdb_140b08d00(&puStack_1a8,&UNK_1433194b8,8,uStack_1c0,uStack_1b8);
  LOCK();
  piVar2 = (int *)(((ulonglong)pcStack_240 & 0xffffffffffffffc0) + 0x10 +
                  (ulonglong)((uint)pcStack_240 & 0x3f) * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (plStack_238 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)plStack_238 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)plStack_238 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_d0 = CONCAT44(uStack_22c,uStack_230);
  if (uStack_d0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_d0 & 0xffffffffffffffc0) + 0x10 + (ulonglong)(uStack_230 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_c8 = (undefined *)CONCAT44(uStack_224,uStack_228);
  if (puStack_c8 != (undefined *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)puStack_c8 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)(uStack_228 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_b8 = (undefined *)CONCAT44(uStack_214,uStack_218);
  uStack_c0 = CONCAT44(uStack_21c,uStack_220);
  if (uStack_c0 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_c0 & 0xfffffffffffffffc) + 0x10 + (ulonglong)(uStack_220 & 3) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_100 = 0;
  uStack_108 = (undefined *)0x0;
  puStack_128 = (undefined8 *)((ulonglong)puStack_128 & 0xffffffff00000000);
  puStack_e8 = puStack_248;
  puStack_e0 = (undefined8 *)pcStack_240;
  plStack_d8 = plStack_238;
  uStack_118 = (longlong *)uVar10;
  uStack_110 = (longlong *)uVar11;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  _auStack_b0 = (unkuint10)0xe00 << 0x40;
  pdb_14161cf90(&puStack_1a8,uStack_1b0,&puStack_128,&UNK_1433194c0);
  puVar15 = puStack_1a8;
  plVar19 = uStack_198;
  if (uStack_198 == (longlong *)0x0) {
    plVar19 = uStack_190;
  }
  lVar5 = plVar19[2];
  if ((ulonglong)(*plVar19 - lVar5) < 0x18) {
    pdb_142d7f1b0(plVar19,lVar5,0x18,1,1);
  }
  lVar6 = plVar19[1];
  *(code **)(lVar6 + lVar5) = pdb_14160bfd0;
  *(undefined8 **)(lVar6 + 8 + lVar5) = puVar15;
  *(code **)(lVar6 + 0x10 + lVar5) = pdb_14160dde0;
  plVar19[2] = lVar5 + 0x18;
  pdb_141b241d0(&puStack_128,&UNK_1433194d8,0x20);
  if (SBORROW8(0,(longlong)puStack_128)) {
    puStack_1a8 = puStack_120;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433195e0,0x2b,&puStack_1a8,&UNK_143319610,&UNK_1433194f8);
  }
  uStack_138 = puStack_b8;
  uStack_130 = auStack_b0._0_8_;
  uStack_148 = (ulonglong)puStack_c8;
  uStack_140 = uStack_c0;
  plStack_158 = plStack_d8;
  uStack_150 = uStack_d0;
  puStack_168 = puStack_e8;
  puStack_160 = puStack_e0;
  uStack_178 = CONCAT44(uStack_f4,uStack_f8);
  uStack_170 = (undefined4)uStack_f0;
  uStack_16c = uStack_f0._4_4_;
  uStack_188 = (ulonglong)uStack_108;
  uStack_180 = CONCAT44(uStack_fc,uStack_100);
  uStack_198 = uStack_118;
  uStack_190 = uStack_110;
  puStack_1a8 = puStack_128;
  puStack_1a0 = puStack_120;
  puVar15 = (undefined8 *)pdb_140b08d00(&puStack_1a8,&UNK_143319510,6,uStack_1c0,uStack_1b8);
  LOCK();
  piVar2 = (int *)(((ulonglong)pcStack_240 & 0xffffffffffffffc0) + 0x10 +
                  (ulonglong)((uint)pcStack_240 & 0x3f) * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (plStack_238 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)plStack_238 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)plStack_238 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_190 = (longlong *)CONCAT44(uStack_22c,uStack_230);
  if (uStack_190 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)uStack_190 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)(uStack_230 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_188 = CONCAT44(uStack_224,uStack_228);
  if (uStack_188 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_188 & 0xffffffffffffffc0) + 0x10 + (ulonglong)(uStack_228 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_178 = CONCAT44(uStack_214,uStack_218);
  uStack_180 = CONCAT44(uStack_21c,uStack_220);
  if (uStack_180 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_180 & 0xfffffffffffffffc) + 0x10 + (ulonglong)(uStack_220 & 3) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_1a8 = puStack_248;
  puStack_1a0 = (undefined8 *)pcStack_240;
  uStack_198 = plStack_238;
  pdb_140df4940(&puStack_128);
  uStack_118 = puStack_128;
  uVar4 = _DAT_14304ab70;
  puStack_128 = (undefined8 *)((ulonglong)puStack_128 & 0xffffffff00000000);
  puStack_e8 = puStack_1a8;
  puStack_e0 = puStack_1a0;
  plStack_d8 = uStack_198;
  uStack_d0 = (ulonglong)uStack_190;
  puStack_c8 = (undefined *)uStack_188;
  uStack_c0 = uStack_180;
  puStack_b8 = (undefined *)uStack_178;
  uStack_110 = puStack_120;
  uStack_108 = (undefined *)_DAT_14304ab70;
  uStack_100 = 0x80000000;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = stack0xffffffffffffff58;
  _auStack_b0 = auVar3 << 0x40;
  puStack_120 = puVar15;
  pdb_14161e180(&puStack_1a8,uStack_1b0,&puStack_128,&UNK_143319518);
  pdb_141b241d0(&puStack_128,&UNK_143319530,0x1f);
  if (SBORROW8(0,(longlong)puStack_128)) {
    puStack_1a8 = puStack_120;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433195e0,0x2b,&puStack_1a8,&UNK_143319610,&UNK_143319550);
  }
  uStack_138 = puStack_b8;
  uStack_130 = auStack_b0._0_8_;
  uStack_148 = (ulonglong)puStack_c8;
  uStack_140 = uStack_c0;
  plStack_158 = plStack_d8;
  uStack_150 = uStack_d0;
  puStack_168 = puStack_e8;
  puStack_160 = puStack_e0;
  uStack_178 = CONCAT44(uStack_f4,uStack_f8);
  uStack_170 = (undefined4)uStack_f0;
  uStack_16c = uStack_f0._4_4_;
  uStack_188 = (ulonglong)uStack_108;
  uStack_180 = CONCAT44(uStack_fc,uStack_100);
  uStack_198 = uStack_118;
  uStack_190 = uStack_110;
  puStack_1a8 = puStack_128;
  puStack_1a0 = puStack_120;
  uVar16 = pdb_140b08d00(&puStack_1a8,&UNK_143319568,0xd,uStack_1c0,uStack_1b8);
  LOCK();
  piVar2 = (int *)(((ulonglong)pcStack_240 & 0xffffffffffffffc0) + 0x10 +
                  (ulonglong)((uint)pcStack_240 & 0x3f) * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (plStack_238 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)plStack_238 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)((uint)plStack_238 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_190 = (longlong *)CONCAT44(uStack_22c,uStack_230);
  if (uStack_190 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(((ulonglong)uStack_190 & 0xffffffffffffffc0) + 0x10 +
                    (ulonglong)(uStack_230 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_188 = CONCAT44(uStack_224,uStack_228);
  if (uStack_188 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_188 & 0xffffffffffffffc0) + 0x10 + (ulonglong)(uStack_228 & 0x3f) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uStack_178 = CONCAT44(uStack_214,uStack_218);
  uStack_180 = CONCAT44(uStack_21c,uStack_220);
  if (uStack_180 != 0) {
    LOCK();
    piVar2 = (int *)((uStack_180 & 0xfffffffffffffffc) + 0x10 + (ulonglong)(uStack_220 & 3) * 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puStack_1a8 = puStack_248;
  puStack_1a0 = (undefined8 *)pcStack_240;
  uStack_198 = plStack_238;
  pdb_140df4940(&puStack_128);
  uStack_118 = puStack_128;
  puStack_128 = (undefined8 *)((ulonglong)puStack_128 & 0xffffffff00000000);
  puStack_e8 = puStack_1a8;
  puStack_e0 = puStack_1a0;
  plStack_d8 = uStack_198;
  uStack_d0 = (ulonglong)uStack_190;
  puStack_c8 = (undefined *)uStack_188;
  uStack_c0 = uStack_180;
  puStack_b8 = (undefined *)uStack_178;
  uStack_110 = puStack_120;
  uStack_108 = (undefined *)uVar4;
  uStack_100 = 0x80000000;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = stack0xffffffffffffff58;
  _auStack_b0 = auVar9 << 0x40;
  puStack_120 = (undefined8 *)uVar16;
  pdb_14161ea10(&puStack_1a8,uStack_1b0,&puStack_128,&UNK_143319578);
  pdb_1409694c0(&puStack_248);
  pdb_1409694c0(&uStack_2d8);
  return;
}

