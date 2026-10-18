// VA 0x1406f5f40, PDB extent 5115 bytes
// system_clutter::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_clutter::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/lib.rs
   Extent: 5115 */

void pdb_1406f5f40(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  ushort uVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulonglong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulonglong uStack_180;
  longlong lStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  ulonglong uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pdb_1410c4d50(param_2);
  pdb_1410c67d0(&uStack_128,&UNK_142fa01e8);
  pdb_1410c51a0(param_2,1,&uStack_128);
  pdb_1410ca0f0(&uStack_128,0x17,&UNK_142fa0200);
  pdb_1410c4e90(param_2,&uStack_128);
  pdb_1410cb100(&uStack_128,0x17,&UNK_142fa0218);
  pdb_1410c4e90(param_2,&uStack_128);
  pdb_14007ee60();
  pbVar11 = pub_1406abab0(0x58,8);
  if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x58);
  }
  pbVar11[0] = 0;
  pbVar11[1] = 0;
  pbVar11[2] = 0;
  pbVar11[3] = 0;
  pbVar11[4] = 0;
  pbVar11[5] = 0;
  pbVar11[6] = 0;
  pbVar11[7] = 0;
  pbVar11[0x50] = 0;
  pbVar11[0x51] = 0;
  pbVar11[0x52] = 0;
  pbVar11[0x53] = 0;
  pbVar11[0x54] = 0;
  pdb_140ed3cd0(&uStack_128,pbVar11,&UNK_1432896b8);
  pdb_1410cbde0(&uStack_278,&uStack_128);
  pdb_1410cdc30(&uStack_128);
  uStack_138 = uStack_c8;
  uStack_130 = uStack_c0;
  uStack_148 = uStack_d8;
  uStack_140 = uStack_d0;
  uStack_158 = uStack_e8;
  uStack_150 = uStack_e0;
  uStack_168 = uStack_f8;
  uStack_160 = uStack_f0;
  lStack_178 = lStack_108;
  puStack_170 = puStack_100;
  uStack_188 = uStack_118;
  uStack_180 = uStack_110;
  uStack_198 = uStack_128;
  uStack_190 = uStack_120;
  pdb_1410cbfd0(&uStack_208,&uStack_198);
  uStack_128 = uStack_278;
  uStack_120 = uStack_270;
  uStack_118 = uStack_268;
  uStack_110 = uStack_260;
  lStack_108 = uStack_258;
  puStack_100 = (undefined8 *)uStack_250;
  uStack_f8 = uStack_248;
  uStack_f0 = uStack_240;
  uStack_e8 = uStack_238;
  uStack_e0 = uStack_230;
  uStack_d8 = uStack_228;
  uStack_d0 = uStack_220;
  uStack_c8 = uStack_218;
  uStack_c0 = uStack_210;
  uStack_b0 = uStack_200;
  lStack_a8 = uStack_1f8;
  lStack_a0 = uStack_1f0;
  uStack_98 = uStack_1e8;
  uStack_90 = uStack_1e0;
  lStack_88 = uStack_1d8;
  puStack_80 = (undefined8 *)uStack_1d0;
  uStack_78 = uStack_1c8;
  uStack_70 = uStack_1c0;
  uStack_68 = uStack_1b8;
  uStack_60 = uStack_1b0;
  lStack_58 = uStack_1a8;
  puStack_50 = (undefined8 *)uStack_1a0;
  pdb_1410ce830(&uStack_198,&uStack_128);
  uStack_208 = 0x24;
  puVar15 = &uStack_208;
  uVar12 = pdb_1410cf4f0(_DAT_143ca8dd0,puVar15,&UNK_14328a710);
  pdb_140676be0(&uStack_198,uVar12,puVar15);
  uStack_c8 = uStack_138;
  uStack_c0 = uStack_130;
  uStack_d8 = uStack_148;
  uStack_d0 = uStack_140;
  uStack_e8 = uStack_158;
  uStack_e0 = uStack_150;
  uStack_f8 = uStack_168;
  uStack_f0 = uStack_160;
  lStack_108 = lStack_178;
  puStack_100 = puStack_170;
  uStack_118 = uStack_188;
  uStack_110 = uStack_180;
  uStack_128 = uStack_198;
  uStack_120 = uStack_190;
  pdb_1410c4e90(param_2,&uStack_128);
  pdb_1410c5060(param_2,1);
  plVar13 = (longlong *)pdb_14008d710(0);
  if (plVar13 == (longlong *)0x0) {
    pdb_142dc7890(&UNK_14328b3f8);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lStack_178 = *plVar13;
  puStack_170 = (undefined8 *)plVar13[1];
  *plVar13 = *plVar13 + 1;
  uStack_188 = _DAT_14328aad0;
  uStack_180 = _UNK_14328aad8;
  uStack_198 = _DAT_14328aac0;
  uStack_190 = _UNK_14328aac8;
  uStack_128 = 0;
  uStack_120 = 8;
  uStack_118 = 0;
  pdb_1410d12e0(&uStack_208,&uStack_128,0x1000);
  uStack_c8 = uStack_198;
  uStack_c0 = uStack_190;
  uStack_b8 = uStack_188;
  uStack_b0 = uStack_180;
  lStack_a8 = lStack_178;
  lStack_a0 = (longlong)puStack_170;
  uStack_128 = CONCAT71(uStack_207,uStack_208);
  uStack_120 = uStack_200;
  uStack_118 = uStack_1f8;
  uStack_110 = 0;
  lStack_108 = 8;
  puStack_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_f0 = 2;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 8;
  uStack_d0 = 0;
  uStack_98 = uStack_98 & 0xffffffffffffff00;
  uVar12 = pdb_1410d4390(param_2,&uStack_128);
  uStack_128 = 0;
  uStack_120 = 0x10;
  uStack_118 = 0;
  uVar12 = pdb_1410d2c20(uVar12,&uStack_128);
  uStack_128 = 0;
  uStack_120 = 0x10;
  uStack_118 = 0;
  uVar12 = pdb_1410d37e0(uVar12,&uStack_128);
  uStack_128 = 0;
  uStack_120 = 8;
  uStack_118 = 0;
  puVar16 = &uStack_128;
  uVar12 = pdb_1410d7040(uVar12);
  plVar13 = (longlong *)pdb_140f3bda0();
  if ((char)plVar13[2] == '\x01') {
    lStack_108 = *plVar13;
    puVar16 = (undefined8 *)plVar13[1];
  }
  else {
    lStack_108 = pdb_140f4fd10();
    *plVar13 = lStack_108;
    plVar13[1] = (longlong)puVar16;
    *(undefined1 *)(plVar13 + 2) = 1;
  }
  *plVar13 = lStack_108 + 1;
  uVar10 = _UNK_142fa0258;
  uVar9 = _DAT_142fa0250;
  uVar8 = _UNK_142fa0248;
  uVar7 = _DAT_142fa0240;
  uStack_118 = _DAT_142fa0250;
  uStack_110 = _UNK_142fa0258;
  uStack_128 = _DAT_142fa0240;
  uStack_120 = _UNK_142fa0248;
  puStack_100 = puVar16;
  uVar12 = pdb_1410d3dc0(uVar12,&uStack_128);
  uVar12 = pdb_1410d5a30(uVar12,0);
  uVar12 = pdb_1410d2650(uVar12,0);
  uStack_128 = 0;
  uStack_120 = 8;
  uStack_118 = 0;
  uVar12 = pdb_1410d5450(uVar12,&uStack_128);
  uVar12 = pdb_1410d6000(uVar12,0);
  uStack_198 = 0;
  uStack_190 = 4;
  uStack_188 = 0;
  uStack_180 = uStack_180 & 0xffffffff00000000;
  pdb_1410ce6b0(&uStack_128,&uStack_198,0x1000);
  puStack_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_110 = 0;
  lStack_108 = 8;
  uStack_f0 = 8;
  uVar12 = pdb_1410d1ab0(uVar12,&uStack_128);
  uStack_128 = 0;
  uStack_120 = 8;
  uStack_118 = 0;
  uVar12 = pdb_1410d4e90(uVar12,&uStack_128);
  uStack_128 = 0;
  uStack_120 = 0x10;
  uStack_118 = 0;
  uVar12 = pdb_1410d3200(uVar12,&uStack_128);
  uStack_128 = 0;
  uStack_120 = 8;
  uStack_118 = 0;
  puVar16 = &uStack_128;
  uVar12 = pdb_1410d6540(uVar12);
  plVar13 = (longlong *)pdb_140f3bda0();
  if ((char)plVar13[2] == '\x01') {
    lStack_108 = *plVar13;
    puVar16 = (undefined8 *)plVar13[1];
  }
  else {
    lStack_108 = pdb_140f4fd10();
    *plVar13 = lStack_108;
    plVar13[1] = (longlong)puVar16;
    *(undefined1 *)(plVar13 + 2) = 1;
  }
  *plVar13 = lStack_108 + 1;
  uStack_118 = uVar9;
  uStack_110 = uVar10;
  uStack_128 = uVar7;
  uStack_120 = uVar8;
  puVar17 = &uStack_128;
  puStack_100 = puVar16;
  uVar12 = pdb_1410d7620(uVar12);
  plVar13 = (longlong *)pdb_140f3bda0();
  if ((char)plVar13[2] == '\x01') {
    lStack_178 = *plVar13;
    puVar17 = (undefined8 *)plVar13[1];
  }
  else {
    lStack_178 = pdb_140f4fd10();
    *plVar13 = lStack_178;
    plVar13[1] = (longlong)puVar17;
    *(undefined1 *)(plVar13 + 2) = 1;
  }
  *plVar13 = lStack_178 + 1;
  uStack_188 = uVar9;
  uStack_180 = uVar10;
  uStack_198 = uVar7;
  uStack_190 = uVar8;
  puStack_170 = puVar17;
  plVar13 = (longlong *)pdb_140f3bda0();
  if ((char)plVar13[2] == '\x01') {
    lStack_58 = *plVar13;
    puVar17 = (undefined8 *)plVar13[1];
  }
  else {
    lStack_58 = pdb_140f4fd10();
    *plVar13 = lStack_58;
    plVar13[1] = (longlong)puVar17;
    *(undefined1 *)(plVar13 + 2) = 1;
  }
  *plVar13 = lStack_58 + 1;
  lStack_88 = lStack_178;
  puStack_80 = puStack_170;
  uStack_98 = uStack_188;
  uStack_90 = uStack_180;
  lStack_a8 = uStack_198;
  lStack_a0 = uStack_190;
  uStack_c0 = 0;
  uStack_b8 = 8;
  uStack_b0 = 0;
  uStack_78 = uVar7;
  uStack_70 = uVar8;
  uStack_68 = uVar9;
  uStack_60 = uVar10;
  uStack_128 = 3;
  puStack_50 = puVar17;
  uVar12 = pdb_1410d2090(uVar12,&uStack_128);
  uStack_118 = pdb_140c2aa00();
  uStack_128 = _DAT_142e4e650;
  uStack_120 = _UNK_142e4e658;
  uVar12 = pdb_1410d6b00(uVar12,&uStack_128);
  puVar16 = &uStack_128;
  pdb_140ae7200(puVar16);
  uVar12 = pdb_1410d4950(uVar12);
  plVar13 = (longlong *)pdb_140f3bda0();
  if ((char)plVar13[2] == '\x01') {
    lStack_108 = *plVar13;
    puVar16 = (undefined8 *)plVar13[1];
  }
  else {
    lStack_108 = pdb_140f4fd10();
    *plVar13 = lStack_108;
    plVar13[1] = (longlong)puVar16;
    *(undefined1 *)(plVar13 + 2) = 1;
  }
  *plVar13 = lStack_108 + 1;
  uStack_118 = uVar9;
  uStack_110 = uVar10;
  uStack_128 = uVar7;
  uStack_120 = uVar8;
  puStack_100 = puVar16;
  lVar14 = pdb_1410d7bf0(uVar12,&uStack_128);
  if (*(longlong *)(lVar14 + 0x88) != 0) {
    lVar3 = *(longlong *)(lVar14 + 0x70);
    uVar18 = 0xfa9c0316b226f0a6;
    lVar19 = 0;
    while( true ) {
      uVar18 = uVar18 & *(ulonglong *)(lVar14 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar18);
      auVar34[0] = -(*pcVar1 == DAT_142e33ec0);
      auVar34[1] = -(pcVar1[1] == DAT_142e33ec0._1_1_);
      auVar34[2] = -(pcVar1[2] == DAT_142e33ec0._2_1_);
      auVar34[3] = -(pcVar1[3] == DAT_142e33ec0._3_1_);
      auVar34[4] = -(pcVar1[4] == DAT_142e33ec0._4_1_);
      auVar34[5] = -(pcVar1[5] == DAT_142e33ec0._5_1_);
      auVar34[6] = -(pcVar1[6] == DAT_142e33ec0._6_1_);
      auVar34[7] = -(pcVar1[7] == DAT_142e33ec0._7_1_);
      auVar34[8] = -(pcVar1[8] == DAT_142e33ec0._8_1_);
      auVar34[9] = -(pcVar1[9] == DAT_142e33ec0._9_1_);
      auVar34[10] = -(pcVar1[10] == DAT_142e33ec0._10_1_);
      auVar34[0xb] = -(pcVar1[0xb] == DAT_142e33ec0._11_1_);
      auVar34[0xc] = -(pcVar1[0xc] == DAT_142e33ec0._12_1_);
      auVar34[0xd] = -(pcVar1[0xd] == DAT_142e33ec0._13_1_);
      auVar34[0xe] = -(pcVar1[0xe] == DAT_142e33ec0._14_1_);
      auVar34[0xf] = -(pcVar1[0xf] == DAT_142e33ec0._15_1_);
      uVar21 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar20; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar22 = uVar5 + uVar18 & *(ulonglong *)(lVar14 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar22 * -0x18);
        auVar35[0] = -(*pcVar2 == DAT_142fa0120);
        auVar35[1] = -(pcVar2[1] == UNK_142fa0121);
        auVar35[2] = -(pcVar2[2] == UNK_142fa0122);
        auVar35[3] = -(pcVar2[3] == UNK_142fa0123);
        auVar35[4] = -(pcVar2[4] == UNK_142fa0124);
        auVar35[5] = -(pcVar2[5] == UNK_142fa0125);
        auVar35[6] = -(pcVar2[6] == UNK_142fa0126);
        auVar35[7] = -(pcVar2[7] == UNK_142fa0127);
        auVar35[8] = -(pcVar2[8] == UNK_142fa0128);
        auVar35[9] = -(pcVar2[9] == UNK_142fa0129);
        auVar35[10] = -(pcVar2[10] == UNK_142fa012a);
        auVar35[0xb] = -(pcVar2[0xb] == UNK_142fa012b);
        auVar35[0xc] = -(pcVar2[0xc] == UNK_142fa012c);
        auVar35[0xd] = -(pcVar2[0xd] == UNK_142fa012d);
        auVar35[0xe] = -(pcVar2[0xe] == UNK_142fa012e);
        auVar35[0xf] = -(pcVar2[0xf] == UNK_142fa012f);
        if ((ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar35[0xf] >> 7) << 0xf) == 0xffff) {
          uVar18 = *(ulonglong *)(lVar3 + uVar22 * -0x18 + -8);
          if (((*(ulonglong *)(lVar14 + 0x210) <= uVar18) ||
              (uVar18 = *(ulonglong *)(*(longlong *)(lVar14 + 0x208) + uVar18 * 8), uVar18 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar14 + 0x1d8) + 0x20 + ~uVar18 * 0x40) == 0))
          goto LAB_1406f6802;
          goto LAB_1406f6818;
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar23[0] = -(*pcVar1 == -1);
      auVar23[1] = -(pcVar1[1] == -1);
      auVar23[2] = -(pcVar1[2] == -1);
      auVar23[3] = -(pcVar1[3] == -1);
      auVar23[4] = -(pcVar1[4] == -1);
      auVar23[5] = -(pcVar1[5] == -1);
      auVar23[6] = -(pcVar1[6] == -1);
      auVar23[7] = -(pcVar1[7] == -1);
      auVar23[8] = -(pcVar1[8] == -1);
      auVar23[9] = -(pcVar1[9] == -1);
      auVar23[10] = -(pcVar1[10] == -1);
      auVar23[0xb] = -(pcVar1[0xb] == -1);
      auVar23[0xc] = -(pcVar1[0xc] == -1);
      auVar23[0xd] = -(pcVar1[0xd] == -1);
      auVar23[0xe] = -(pcVar1[0xe] == -1);
      auVar23[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar23 >> 0x5f,0) & 1) != 0) || (SUB161(auVar23 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar23 >> 0x6f,0) & 1) != 0) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) ||
          auVar23[0xf] < '\0') break;
      uVar18 = uVar18 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
LAB_1406f6802:
  pdb_1410db7c0(lVar14);
  if (*(longlong *)(lVar14 + 0x88) != 0) {
LAB_1406f6818:
    lVar3 = *(longlong *)(lVar14 + 0x70);
    uVar18 = 0x38e0c2dbb253167d;
    lVar19 = 0;
    while( true ) {
      uVar18 = uVar18 & *(ulonglong *)(lVar14 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar18);
      auVar36[0] = -(*pcVar1 == DAT_142e34aa0);
      auVar36[1] = -(pcVar1[1] == DAT_142e34aa0._1_1_);
      auVar36[2] = -(pcVar1[2] == DAT_142e34aa0._2_1_);
      auVar36[3] = -(pcVar1[3] == DAT_142e34aa0._3_1_);
      auVar36[4] = -(pcVar1[4] == DAT_142e34aa0._4_1_);
      auVar36[5] = -(pcVar1[5] == DAT_142e34aa0._5_1_);
      auVar36[6] = -(pcVar1[6] == DAT_142e34aa0._6_1_);
      auVar36[7] = -(pcVar1[7] == DAT_142e34aa0._7_1_);
      auVar36[8] = -(pcVar1[8] == DAT_142e34aa0._8_1_);
      auVar36[9] = -(pcVar1[9] == DAT_142e34aa0._9_1_);
      auVar36[10] = -(pcVar1[10] == DAT_142e34aa0._10_1_);
      auVar36[0xb] = -(pcVar1[0xb] == DAT_142e34aa0._11_1_);
      auVar36[0xc] = -(pcVar1[0xc] == DAT_142e34aa0._12_1_);
      auVar36[0xd] = -(pcVar1[0xd] == DAT_142e34aa0._13_1_);
      auVar36[0xe] = -(pcVar1[0xe] == DAT_142e34aa0._14_1_);
      auVar36[0xf] = -(pcVar1[0xf] == DAT_142e34aa0._15_1_);
      uVar21 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar20; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar22 = uVar5 + uVar18 & *(ulonglong *)(lVar14 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar22 * -0x18);
        auVar37[0] = -(*pcVar2 == DAT_142fa0130);
        auVar37[1] = -(pcVar2[1] == UNK_142fa0131);
        auVar37[2] = -(pcVar2[2] == UNK_142fa0132);
        auVar37[3] = -(pcVar2[3] == UNK_142fa0133);
        auVar37[4] = -(pcVar2[4] == UNK_142fa0134);
        auVar37[5] = -(pcVar2[5] == UNK_142fa0135);
        auVar37[6] = -(pcVar2[6] == UNK_142fa0136);
        auVar37[7] = -(pcVar2[7] == UNK_142fa0137);
        auVar37[8] = -(pcVar2[8] == UNK_142fa0138);
        auVar37[9] = -(pcVar2[9] == UNK_142fa0139);
        auVar37[10] = -(pcVar2[10] == UNK_142fa013a);
        auVar37[0xb] = -(pcVar2[0xb] == UNK_142fa013b);
        auVar37[0xc] = -(pcVar2[0xc] == UNK_142fa013c);
        auVar37[0xd] = -(pcVar2[0xd] == UNK_142fa013d);
        auVar37[0xe] = -(pcVar2[0xe] == UNK_142fa013e);
        auVar37[0xf] = -(pcVar2[0xf] == UNK_142fa013f);
        if ((ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar37[0xf] >> 7) << 0xf) == 0xffff) {
          uVar18 = *(ulonglong *)(lVar3 + uVar22 * -0x18 + -8);
          if (((*(ulonglong *)(lVar14 + 0x210) <= uVar18) ||
              (uVar18 = *(ulonglong *)(*(longlong *)(lVar14 + 0x208) + uVar18 * 8), uVar18 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar14 + 0x1d8) + 0x20 + ~uVar18 * 0x40) == 0))
          goto LAB_1406f68f2;
          goto LAB_1406f6908;
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar24[0] = -(*pcVar1 == -1);
      auVar24[1] = -(pcVar1[1] == -1);
      auVar24[2] = -(pcVar1[2] == -1);
      auVar24[3] = -(pcVar1[3] == -1);
      auVar24[4] = -(pcVar1[4] == -1);
      auVar24[5] = -(pcVar1[5] == -1);
      auVar24[6] = -(pcVar1[6] == -1);
      auVar24[7] = -(pcVar1[7] == -1);
      auVar24[8] = -(pcVar1[8] == -1);
      auVar24[9] = -(pcVar1[9] == -1);
      auVar24[10] = -(pcVar1[10] == -1);
      auVar24[0xb] = -(pcVar1[0xb] == -1);
      auVar24[0xc] = -(pcVar1[0xc] == -1);
      auVar24[0xd] = -(pcVar1[0xd] == -1);
      auVar24[0xe] = -(pcVar1[0xe] == -1);
      auVar24[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || (SUB161(auVar24 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar24 >> 0x6f,0) & 1) != 0) || (SUB161(auVar24 >> 0x77,0) & 1) != 0) ||
          auVar24[0xf] < '\0') break;
      uVar18 = uVar18 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
LAB_1406f68f2:
  pdb_1410dbdc0(lVar14);
  if (*(longlong *)(lVar14 + 0x88) != 0) {
LAB_1406f6908:
    lVar3 = *(longlong *)(lVar14 + 0x70);
    uVar18 = 0x474ac7683990e701;
    lVar19 = 0;
    while( true ) {
      uVar18 = uVar18 & *(ulonglong *)(lVar14 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar18);
      auVar38[0] = -(*pcVar1 == DAT_142e34140);
      auVar38[1] = -(pcVar1[1] == DAT_142e34140._1_1_);
      auVar38[2] = -(pcVar1[2] == DAT_142e34140._2_1_);
      auVar38[3] = -(pcVar1[3] == DAT_142e34140._3_1_);
      auVar38[4] = -(pcVar1[4] == DAT_142e34140._4_1_);
      auVar38[5] = -(pcVar1[5] == DAT_142e34140._5_1_);
      auVar38[6] = -(pcVar1[6] == DAT_142e34140._6_1_);
      auVar38[7] = -(pcVar1[7] == DAT_142e34140._7_1_);
      auVar38[8] = -(pcVar1[8] == DAT_142e34140._8_1_);
      auVar38[9] = -(pcVar1[9] == DAT_142e34140._9_1_);
      auVar38[10] = -(pcVar1[10] == DAT_142e34140._10_1_);
      auVar38[0xb] = -(pcVar1[0xb] == DAT_142e34140._11_1_);
      auVar38[0xc] = -(pcVar1[0xc] == DAT_142e34140._12_1_);
      auVar38[0xd] = -(pcVar1[0xd] == DAT_142e34140._13_1_);
      auVar38[0xe] = -(pcVar1[0xe] == DAT_142e34140._14_1_);
      auVar38[0xf] = -(pcVar1[0xf] == DAT_142e34140._15_1_);
      uVar21 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar20; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar22 = uVar5 + uVar18 & *(ulonglong *)(lVar14 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar22 * -0x18);
        auVar39[0] = -(*pcVar2 == DAT_142fa0140);
        auVar39[1] = -(pcVar2[1] == UNK_142fa0141);
        auVar39[2] = -(pcVar2[2] == UNK_142fa0142);
        auVar39[3] = -(pcVar2[3] == UNK_142fa0143);
        auVar39[4] = -(pcVar2[4] == UNK_142fa0144);
        auVar39[5] = -(pcVar2[5] == UNK_142fa0145);
        auVar39[6] = -(pcVar2[6] == UNK_142fa0146);
        auVar39[7] = -(pcVar2[7] == UNK_142fa0147);
        auVar39[8] = -(pcVar2[8] == UNK_142fa0148);
        auVar39[9] = -(pcVar2[9] == UNK_142fa0149);
        auVar39[10] = -(pcVar2[10] == UNK_142fa014a);
        auVar39[0xb] = -(pcVar2[0xb] == UNK_142fa014b);
        auVar39[0xc] = -(pcVar2[0xc] == UNK_142fa014c);
        auVar39[0xd] = -(pcVar2[0xd] == UNK_142fa014d);
        auVar39[0xe] = -(pcVar2[0xe] == UNK_142fa014e);
        auVar39[0xf] = -(pcVar2[0xf] == UNK_142fa014f);
        if ((ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar39[0xf] >> 7) << 0xf) == 0xffff) {
          uVar18 = *(ulonglong *)(lVar3 + uVar22 * -0x18 + -8);
          if (((*(ulonglong *)(lVar14 + 0x210) <= uVar18) ||
              (uVar18 = *(ulonglong *)(*(longlong *)(lVar14 + 0x208) + uVar18 * 8), uVar18 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar14 + 0x1d8) + 0x20 + ~uVar18 * 0x40) == 0))
          goto LAB_1406f69e2;
          goto LAB_1406f69f8;
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar25[0] = -(*pcVar1 == -1);
      auVar25[1] = -(pcVar1[1] == -1);
      auVar25[2] = -(pcVar1[2] == -1);
      auVar25[3] = -(pcVar1[3] == -1);
      auVar25[4] = -(pcVar1[4] == -1);
      auVar25[5] = -(pcVar1[5] == -1);
      auVar25[6] = -(pcVar1[6] == -1);
      auVar25[7] = -(pcVar1[7] == -1);
      auVar25[8] = -(pcVar1[8] == -1);
      auVar25[9] = -(pcVar1[9] == -1);
      auVar25[10] = -(pcVar1[10] == -1);
      auVar25[0xb] = -(pcVar1[0xb] == -1);
      auVar25[0xc] = -(pcVar1[0xc] == -1);
      auVar25[0xd] = -(pcVar1[0xd] == -1);
      auVar25[0xe] = -(pcVar1[0xe] == -1);
      auVar25[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar25 >> 0x3f,0) & 1) != 0) || (SUB161(auVar25 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar25 >> 0x4f,0) & 1) != 0) || (SUB161(auVar25 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar25 >> 0x5f,0) & 1) != 0) || (SUB161(auVar25 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar25 >> 0x6f,0) & 1) != 0) || (SUB161(auVar25 >> 0x77,0) & 1) != 0) ||
          auVar25[0xf] < '\0') break;
      uVar18 = uVar18 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
LAB_1406f69e2:
  pdb_1410d99c0(lVar14);
  if (*(longlong *)(lVar14 + 0x88) != 0) {
LAB_1406f69f8:
    lVar3 = *(longlong *)(lVar14 + 0x70);
    uVar18 = 0x53340c3c8e790723;
    lVar19 = 0;
    while( true ) {
      uVar18 = uVar18 & *(ulonglong *)(lVar14 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar18);
      auVar40[0] = -(*pcVar1 == DAT_142e33c10);
      auVar40[1] = -(pcVar1[1] == DAT_142e33c10._1_1_);
      auVar40[2] = -(pcVar1[2] == DAT_142e33c10._2_1_);
      auVar40[3] = -(pcVar1[3] == DAT_142e33c10._3_1_);
      auVar40[4] = -(pcVar1[4] == DAT_142e33c10._4_1_);
      auVar40[5] = -(pcVar1[5] == DAT_142e33c10._5_1_);
      auVar40[6] = -(pcVar1[6] == DAT_142e33c10._6_1_);
      auVar40[7] = -(pcVar1[7] == DAT_142e33c10._7_1_);
      auVar40[8] = -(pcVar1[8] == DAT_142e33c10._8_1_);
      auVar40[9] = -(pcVar1[9] == DAT_142e33c10._9_1_);
      auVar40[10] = -(pcVar1[10] == DAT_142e33c10._10_1_);
      auVar40[0xb] = -(pcVar1[0xb] == DAT_142e33c10._11_1_);
      auVar40[0xc] = -(pcVar1[0xc] == DAT_142e33c10._12_1_);
      auVar40[0xd] = -(pcVar1[0xd] == DAT_142e33c10._13_1_);
      auVar40[0xe] = -(pcVar1[0xe] == DAT_142e33c10._14_1_);
      auVar40[0xf] = -(pcVar1[0xf] == DAT_142e33c10._15_1_);
      uVar21 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar20; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar22 = uVar5 + uVar18 & *(ulonglong *)(lVar14 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar22 * -0x18);
        auVar41[0] = -(*pcVar2 == DAT_142fa0150);
        auVar41[1] = -(pcVar2[1] == UNK_142fa0151);
        auVar41[2] = -(pcVar2[2] == UNK_142fa0152);
        auVar41[3] = -(pcVar2[3] == UNK_142fa0153);
        auVar41[4] = -(pcVar2[4] == UNK_142fa0154);
        auVar41[5] = -(pcVar2[5] == UNK_142fa0155);
        auVar41[6] = -(pcVar2[6] == UNK_142fa0156);
        auVar41[7] = -(pcVar2[7] == UNK_142fa0157);
        auVar41[8] = -(pcVar2[8] == UNK_142fa0158);
        auVar41[9] = -(pcVar2[9] == UNK_142fa0159);
        auVar41[10] = -(pcVar2[10] == UNK_142fa015a);
        auVar41[0xb] = -(pcVar2[0xb] == UNK_142fa015b);
        auVar41[0xc] = -(pcVar2[0xc] == UNK_142fa015c);
        auVar41[0xd] = -(pcVar2[0xd] == UNK_142fa015d);
        auVar41[0xe] = -(pcVar2[0xe] == UNK_142fa015e);
        auVar41[0xf] = -(pcVar2[0xf] == UNK_142fa015f);
        if ((ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar41[0xf] >> 7) << 0xf) == 0xffff) {
          uVar18 = *(ulonglong *)(lVar3 + uVar22 * -0x18 + -8);
          if (((*(ulonglong *)(lVar14 + 0x210) <= uVar18) ||
              (uVar18 = *(ulonglong *)(*(longlong *)(lVar14 + 0x208) + uVar18 * 8), uVar18 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar14 + 0x1d8) + 0x20 + ~uVar18 * 0x40) == 0))
          goto LAB_1406f6ad2;
          goto LAB_1406f6ae8;
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar26[0] = -(*pcVar1 == -1);
      auVar26[1] = -(pcVar1[1] == -1);
      auVar26[2] = -(pcVar1[2] == -1);
      auVar26[3] = -(pcVar1[3] == -1);
      auVar26[4] = -(pcVar1[4] == -1);
      auVar26[5] = -(pcVar1[5] == -1);
      auVar26[6] = -(pcVar1[6] == -1);
      auVar26[7] = -(pcVar1[7] == -1);
      auVar26[8] = -(pcVar1[8] == -1);
      auVar26[9] = -(pcVar1[9] == -1);
      auVar26[10] = -(pcVar1[10] == -1);
      auVar26[0xb] = -(pcVar1[0xb] == -1);
      auVar26[0xc] = -(pcVar1[0xc] == -1);
      auVar26[0xd] = -(pcVar1[0xd] == -1);
      auVar26[0xe] = -(pcVar1[0xe] == -1);
      auVar26[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar26 >> 0x17,0) & 1) != 0) || (SUB161(auVar26 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar26 >> 0x27,0) & 1) != 0) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar26 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar26 >> 0x3f,0) & 1) != 0) || (SUB161(auVar26 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar26 >> 0x4f,0) & 1) != 0) || (SUB161(auVar26 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar26 >> 0x5f,0) & 1) != 0) || (SUB161(auVar26 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar26 >> 0x6f,0) & 1) != 0) || (SUB161(auVar26 >> 0x77,0) & 1) != 0) ||
          auVar26[0xf] < '\0') break;
      uVar18 = uVar18 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
LAB_1406f6ad2:
  pdb_1410dabc0(lVar14);
  if (*(longlong *)(lVar14 + 0x88) != 0) {
LAB_1406f6ae8:
    lVar3 = *(longlong *)(lVar14 + 0x70);
    uVar18 = 0xaec79ca2ad333e20;
    lVar19 = 0;
    while( true ) {
      uVar18 = uVar18 & *(ulonglong *)(lVar14 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar18);
      auVar42[0] = -(*pcVar1 == DAT_142e34200);
      auVar42[1] = -(pcVar1[1] == DAT_142e34200._1_1_);
      auVar42[2] = -(pcVar1[2] == DAT_142e34200._2_1_);
      auVar42[3] = -(pcVar1[3] == DAT_142e34200._3_1_);
      auVar42[4] = -(pcVar1[4] == DAT_142e34200._4_1_);
      auVar42[5] = -(pcVar1[5] == DAT_142e34200._5_1_);
      auVar42[6] = -(pcVar1[6] == DAT_142e34200._6_1_);
      auVar42[7] = -(pcVar1[7] == DAT_142e34200._7_1_);
      auVar42[8] = -(pcVar1[8] == DAT_142e34200._8_1_);
      auVar42[9] = -(pcVar1[9] == DAT_142e34200._9_1_);
      auVar42[10] = -(pcVar1[10] == DAT_142e34200._10_1_);
      auVar42[0xb] = -(pcVar1[0xb] == DAT_142e34200._11_1_);
      auVar42[0xc] = -(pcVar1[0xc] == DAT_142e34200._12_1_);
      auVar42[0xd] = -(pcVar1[0xd] == DAT_142e34200._13_1_);
      auVar42[0xe] = -(pcVar1[0xe] == DAT_142e34200._14_1_);
      auVar42[0xf] = -(pcVar1[0xf] == DAT_142e34200._15_1_);
      uVar21 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar20; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar22 = uVar5 + uVar18 & *(ulonglong *)(lVar14 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar22 * -0x18);
        auVar43[0] = -(*pcVar2 == DAT_142fa0160);
        auVar43[1] = -(pcVar2[1] == UNK_142fa0161);
        auVar43[2] = -(pcVar2[2] == UNK_142fa0162);
        auVar43[3] = -(pcVar2[3] == UNK_142fa0163);
        auVar43[4] = -(pcVar2[4] == UNK_142fa0164);
        auVar43[5] = -(pcVar2[5] == UNK_142fa0165);
        auVar43[6] = -(pcVar2[6] == UNK_142fa0166);
        auVar43[7] = -(pcVar2[7] == UNK_142fa0167);
        auVar43[8] = -(pcVar2[8] == UNK_142fa0168);
        auVar43[9] = -(pcVar2[9] == UNK_142fa0169);
        auVar43[10] = -(pcVar2[10] == UNK_142fa016a);
        auVar43[0xb] = -(pcVar2[0xb] == UNK_142fa016b);
        auVar43[0xc] = -(pcVar2[0xc] == UNK_142fa016c);
        auVar43[0xd] = -(pcVar2[0xd] == UNK_142fa016d);
        auVar43[0xe] = -(pcVar2[0xe] == UNK_142fa016e);
        auVar43[0xf] = -(pcVar2[0xf] == UNK_142fa016f);
        if ((ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar43[0xf] >> 7) << 0xf) == 0xffff) {
          uVar18 = *(ulonglong *)(lVar3 + uVar22 * -0x18 + -8);
          if (((*(ulonglong *)(lVar14 + 0x210) <= uVar18) ||
              (uVar18 = *(ulonglong *)(*(longlong *)(lVar14 + 0x208) + uVar18 * 8), uVar18 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar14 + 0x1d8) + 0x20 + ~uVar18 * 0x40) == 0))
          goto LAB_1406f6bc2;
          goto LAB_1406f6bd8;
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar27[0] = -(*pcVar1 == -1);
      auVar27[1] = -(pcVar1[1] == -1);
      auVar27[2] = -(pcVar1[2] == -1);
      auVar27[3] = -(pcVar1[3] == -1);
      auVar27[4] = -(pcVar1[4] == -1);
      auVar27[5] = -(pcVar1[5] == -1);
      auVar27[6] = -(pcVar1[6] == -1);
      auVar27[7] = -(pcVar1[7] == -1);
      auVar27[8] = -(pcVar1[8] == -1);
      auVar27[9] = -(pcVar1[9] == -1);
      auVar27[10] = -(pcVar1[10] == -1);
      auVar27[0xb] = -(pcVar1[0xb] == -1);
      auVar27[0xc] = -(pcVar1[0xc] == -1);
      auVar27[0xd] = -(pcVar1[0xd] == -1);
      auVar27[0xe] = -(pcVar1[0xe] == -1);
      auVar27[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar27 >> 0x3f,0) & 1) != 0) || (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar27 >> 0x4f,0) & 1) != 0) || (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar27 >> 0x5f,0) & 1) != 0) || (SUB161(auVar27 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar27 >> 0x6f,0) & 1) != 0) || (SUB161(auVar27 >> 0x77,0) & 1) != 0) ||
          auVar27[0xf] < '\0') break;
      uVar18 = uVar18 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
LAB_1406f6bc2:
  pdb_1410d8dc0(lVar14);
  if (*(longlong *)(lVar14 + 0x88) != 0) {
LAB_1406f6bd8:
    lVar3 = *(longlong *)(lVar14 + 0x70);
    uVar18 = 0x19de76cf2ddc78f1;
    lVar19 = 0;
    while( true ) {
      uVar18 = uVar18 & *(ulonglong *)(lVar14 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar18);
      auVar44[0] = -(*pcVar1 == DAT_142e34620);
      auVar44[1] = -(pcVar1[1] == DAT_142e34620._1_1_);
      auVar44[2] = -(pcVar1[2] == DAT_142e34620._2_1_);
      auVar44[3] = -(pcVar1[3] == DAT_142e34620._3_1_);
      auVar44[4] = -(pcVar1[4] == DAT_142e34620._4_1_);
      auVar44[5] = -(pcVar1[5] == DAT_142e34620._5_1_);
      auVar44[6] = -(pcVar1[6] == DAT_142e34620._6_1_);
      auVar44[7] = -(pcVar1[7] == DAT_142e34620._7_1_);
      auVar44[8] = -(pcVar1[8] == DAT_142e34620._8_1_);
      auVar44[9] = -(pcVar1[9] == DAT_142e34620._9_1_);
      auVar44[10] = -(pcVar1[10] == DAT_142e34620._10_1_);
      auVar44[0xb] = -(pcVar1[0xb] == DAT_142e34620._11_1_);
      auVar44[0xc] = -(pcVar1[0xc] == DAT_142e34620._12_1_);
      auVar44[0xd] = -(pcVar1[0xd] == DAT_142e34620._13_1_);
      auVar44[0xe] = -(pcVar1[0xe] == DAT_142e34620._14_1_);
      auVar44[0xf] = -(pcVar1[0xf] == DAT_142e34620._15_1_);
      uVar21 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar20; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar22 = uVar5 + uVar18 & *(ulonglong *)(lVar14 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar22 * -0x18);
        auVar45[0] = -(*pcVar2 == DAT_142e34d30);
        auVar45[1] = -(pcVar2[1] == UNK_142e34d31);
        auVar45[2] = -(pcVar2[2] == UNK_142e34d32);
        auVar45[3] = -(pcVar2[3] == UNK_142e34d33);
        auVar45[4] = -(pcVar2[4] == UNK_142e34d34);
        auVar45[5] = -(pcVar2[5] == UNK_142e34d35);
        auVar45[6] = -(pcVar2[6] == UNK_142e34d36);
        auVar45[7] = -(pcVar2[7] == UNK_142e34d37);
        auVar45[8] = -(pcVar2[8] == UNK_142e34d38);
        auVar45[9] = -(pcVar2[9] == UNK_142e34d39);
        auVar45[10] = -(pcVar2[10] == UNK_142e34d3a);
        auVar45[0xb] = -(pcVar2[0xb] == UNK_142e34d3b);
        auVar45[0xc] = -(pcVar2[0xc] == UNK_142e34d3c);
        auVar45[0xd] = -(pcVar2[0xd] == UNK_142e34d3d);
        auVar45[0xe] = -(pcVar2[0xe] == UNK_142e34d3e);
        auVar45[0xf] = -(pcVar2[0xf] == UNK_142e34d3f);
        if ((ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar45[0xf] >> 7) << 0xf) == 0xffff) {
          uVar18 = *(ulonglong *)(lVar3 + uVar22 * -0x18 + -8);
          if (((*(ulonglong *)(lVar14 + 0x210) <= uVar18) ||
              (uVar18 = *(ulonglong *)(*(longlong *)(lVar14 + 0x208) + uVar18 * 8), uVar18 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar14 + 0x1d8) + 0x20 + ~uVar18 * 0x40) == 0))
          goto LAB_1406f6cb2;
          goto LAB_1406f6cc8;
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar28[0] = -(*pcVar1 == -1);
      auVar28[1] = -(pcVar1[1] == -1);
      auVar28[2] = -(pcVar1[2] == -1);
      auVar28[3] = -(pcVar1[3] == -1);
      auVar28[4] = -(pcVar1[4] == -1);
      auVar28[5] = -(pcVar1[5] == -1);
      auVar28[6] = -(pcVar1[6] == -1);
      auVar28[7] = -(pcVar1[7] == -1);
      auVar28[8] = -(pcVar1[8] == -1);
      auVar28[9] = -(pcVar1[9] == -1);
      auVar28[10] = -(pcVar1[10] == -1);
      auVar28[0xb] = -(pcVar1[0xb] == -1);
      auVar28[0xc] = -(pcVar1[0xc] == -1);
      auVar28[0xd] = -(pcVar1[0xd] == -1);
      auVar28[0xe] = -(pcVar1[0xe] == -1);
      auVar28[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar28 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar28 >> 0x3f,0) & 1) != 0) || (SUB161(auVar28 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar28 >> 0x4f,0) & 1) != 0) || (SUB161(auVar28 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar28 >> 0x5f,0) & 1) != 0) || (SUB161(auVar28 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar28 >> 0x6f,0) & 1) != 0) || (SUB161(auVar28 >> 0x77,0) & 1) != 0) ||
          auVar28[0xf] < '\0') break;
      uVar18 = uVar18 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
LAB_1406f6cb2:
  pdb_1410d9fc0(lVar14);
  if (*(longlong *)(lVar14 + 0x88) != 0) {
LAB_1406f6cc8:
    lVar3 = *(longlong *)(lVar14 + 0x70);
    uVar18 = 0xa4b59de79f48f308;
    lVar19 = 0;
    while( true ) {
      uVar18 = uVar18 & *(ulonglong *)(lVar14 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar18);
      auVar46[0] = -(*pcVar1 == DAT_142fa0170);
      auVar46[1] = -(pcVar1[1] == DAT_142fa0170._1_1_);
      auVar46[2] = -(pcVar1[2] == DAT_142fa0170._2_1_);
      auVar46[3] = -(pcVar1[3] == DAT_142fa0170._3_1_);
      auVar46[4] = -(pcVar1[4] == DAT_142fa0170._4_1_);
      auVar46[5] = -(pcVar1[5] == DAT_142fa0170._5_1_);
      auVar46[6] = -(pcVar1[6] == DAT_142fa0170._6_1_);
      auVar46[7] = -(pcVar1[7] == DAT_142fa0170._7_1_);
      auVar46[8] = -(pcVar1[8] == DAT_142fa0170._8_1_);
      auVar46[9] = -(pcVar1[9] == DAT_142fa0170._9_1_);
      auVar46[10] = -(pcVar1[10] == DAT_142fa0170._10_1_);
      auVar46[0xb] = -(pcVar1[0xb] == DAT_142fa0170._11_1_);
      auVar46[0xc] = -(pcVar1[0xc] == DAT_142fa0170._12_1_);
      auVar46[0xd] = -(pcVar1[0xd] == DAT_142fa0170._13_1_);
      auVar46[0xe] = -(pcVar1[0xe] == DAT_142fa0170._14_1_);
      auVar46[0xf] = -(pcVar1[0xf] == DAT_142fa0170._15_1_);
      uVar21 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe | (ushort)(auVar46[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar20; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar22 = uVar5 + uVar18 & *(ulonglong *)(lVar14 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar22 * -0x18);
        auVar47[0] = -(*pcVar2 == DAT_142fa0180);
        auVar47[1] = -(pcVar2[1] == UNK_142fa0181);
        auVar47[2] = -(pcVar2[2] == UNK_142fa0182);
        auVar47[3] = -(pcVar2[3] == UNK_142fa0183);
        auVar47[4] = -(pcVar2[4] == UNK_142fa0184);
        auVar47[5] = -(pcVar2[5] == UNK_142fa0185);
        auVar47[6] = -(pcVar2[6] == UNK_142fa0186);
        auVar47[7] = -(pcVar2[7] == UNK_142fa0187);
        auVar47[8] = -(pcVar2[8] == UNK_142fa0188);
        auVar47[9] = -(pcVar2[9] == UNK_142fa0189);
        auVar47[10] = -(pcVar2[10] == UNK_142fa018a);
        auVar47[0xb] = -(pcVar2[0xb] == UNK_142fa018b);
        auVar47[0xc] = -(pcVar2[0xc] == UNK_142fa018c);
        auVar47[0xd] = -(pcVar2[0xd] == UNK_142fa018d);
        auVar47[0xe] = -(pcVar2[0xe] == UNK_142fa018e);
        auVar47[0xf] = -(pcVar2[0xf] == UNK_142fa018f);
        if ((ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar47[0xf] >> 7) << 0xf) == 0xffff) {
          uVar18 = *(ulonglong *)(lVar3 + uVar22 * -0x18 + -8);
          if (((*(ulonglong *)(lVar14 + 0x210) <= uVar18) ||
              (uVar18 = *(ulonglong *)(*(longlong *)(lVar14 + 0x208) + uVar18 * 8), uVar18 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar14 + 0x1d8) + 0x20 + ~uVar18 * 0x40) == 0))
          goto LAB_1406f6da2;
          goto LAB_1406f6db8;
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar29[0] = -(*pcVar1 == -1);
      auVar29[1] = -(pcVar1[1] == -1);
      auVar29[2] = -(pcVar1[2] == -1);
      auVar29[3] = -(pcVar1[3] == -1);
      auVar29[4] = -(pcVar1[4] == -1);
      auVar29[5] = -(pcVar1[5] == -1);
      auVar29[6] = -(pcVar1[6] == -1);
      auVar29[7] = -(pcVar1[7] == -1);
      auVar29[8] = -(pcVar1[8] == -1);
      auVar29[9] = -(pcVar1[9] == -1);
      auVar29[10] = -(pcVar1[10] == -1);
      auVar29[0xb] = -(pcVar1[0xb] == -1);
      auVar29[0xc] = -(pcVar1[0xc] == -1);
      auVar29[0xd] = -(pcVar1[0xd] == -1);
      auVar29[0xe] = -(pcVar1[0xe] == -1);
      auVar29[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar29 >> 0x3f,0) & 1) != 0) || (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar29 >> 0x4f,0) & 1) != 0) || (SUB161(auVar29 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar29 >> 0x5f,0) & 1) != 0) || (SUB161(auVar29 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar29 >> 0x6f,0) & 1) != 0) || (SUB161(auVar29 >> 0x77,0) & 1) != 0) ||
          auVar29[0xf] < '\0') break;
      uVar18 = uVar18 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
LAB_1406f6da2:
  pdb_1410db1c0(lVar14);
  if (*(longlong *)(lVar14 + 0x88) != 0) {
LAB_1406f6db8:
    lVar3 = *(longlong *)(lVar14 + 0x70);
    uVar18 = 0x3a5662bb7b4466b9;
    lVar19 = 0;
    while( true ) {
      uVar18 = uVar18 & *(ulonglong *)(lVar14 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar18);
      auVar48[0] = -(*pcVar1 == DAT_142e34730);
      auVar48[1] = -(pcVar1[1] == DAT_142e34730._1_1_);
      auVar48[2] = -(pcVar1[2] == DAT_142e34730._2_1_);
      auVar48[3] = -(pcVar1[3] == DAT_142e34730._3_1_);
      auVar48[4] = -(pcVar1[4] == DAT_142e34730._4_1_);
      auVar48[5] = -(pcVar1[5] == DAT_142e34730._5_1_);
      auVar48[6] = -(pcVar1[6] == DAT_142e34730._6_1_);
      auVar48[7] = -(pcVar1[7] == DAT_142e34730._7_1_);
      auVar48[8] = -(pcVar1[8] == DAT_142e34730._8_1_);
      auVar48[9] = -(pcVar1[9] == DAT_142e34730._9_1_);
      auVar48[10] = -(pcVar1[10] == DAT_142e34730._10_1_);
      auVar48[0xb] = -(pcVar1[0xb] == DAT_142e34730._11_1_);
      auVar48[0xc] = -(pcVar1[0xc] == DAT_142e34730._12_1_);
      auVar48[0xd] = -(pcVar1[0xd] == DAT_142e34730._13_1_);
      auVar48[0xe] = -(pcVar1[0xe] == DAT_142e34730._14_1_);
      auVar48[0xf] = -(pcVar1[0xf] == DAT_142e34730._15_1_);
      uVar21 = (ushort)(SUB161(auVar48 >> 7,0) & 1) | (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe | (ushort)(auVar48[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar20; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar22 = uVar5 + uVar18 & *(ulonglong *)(lVar14 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar22 * -0x18);
        auVar49[0] = -(*pcVar2 == DAT_142fa0190);
        auVar49[1] = -(pcVar2[1] == UNK_142fa0191);
        auVar49[2] = -(pcVar2[2] == UNK_142fa0192);
        auVar49[3] = -(pcVar2[3] == UNK_142fa0193);
        auVar49[4] = -(pcVar2[4] == UNK_142fa0194);
        auVar49[5] = -(pcVar2[5] == UNK_142fa0195);
        auVar49[6] = -(pcVar2[6] == UNK_142fa0196);
        auVar49[7] = -(pcVar2[7] == UNK_142fa0197);
        auVar49[8] = -(pcVar2[8] == UNK_142fa0198);
        auVar49[9] = -(pcVar2[9] == UNK_142fa0199);
        auVar49[10] = -(pcVar2[10] == UNK_142fa019a);
        auVar49[0xb] = -(pcVar2[0xb] == UNK_142fa019b);
        auVar49[0xc] = -(pcVar2[0xc] == UNK_142fa019c);
        auVar49[0xd] = -(pcVar2[0xd] == UNK_142fa019d);
        auVar49[0xe] = -(pcVar2[0xe] == UNK_142fa019e);
        auVar49[0xf] = -(pcVar2[0xf] == UNK_142fa019f);
        if ((ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar49[0xf] >> 7) << 0xf) == 0xffff) {
          uVar18 = *(ulonglong *)(lVar3 + uVar22 * -0x18 + -8);
          if (((*(ulonglong *)(lVar14 + 0x210) <= uVar18) ||
              (uVar18 = *(ulonglong *)(*(longlong *)(lVar14 + 0x208) + uVar18 * 8), uVar18 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar14 + 0x1d8) + 0x20 + ~uVar18 * 0x40) == 0))
          goto LAB_1406f6e92;
          goto LAB_1406f6ea8;
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar30[0] = -(*pcVar1 == -1);
      auVar30[1] = -(pcVar1[1] == -1);
      auVar30[2] = -(pcVar1[2] == -1);
      auVar30[3] = -(pcVar1[3] == -1);
      auVar30[4] = -(pcVar1[4] == -1);
      auVar30[5] = -(pcVar1[5] == -1);
      auVar30[6] = -(pcVar1[6] == -1);
      auVar30[7] = -(pcVar1[7] == -1);
      auVar30[8] = -(pcVar1[8] == -1);
      auVar30[9] = -(pcVar1[9] == -1);
      auVar30[10] = -(pcVar1[10] == -1);
      auVar30[0xb] = -(pcVar1[0xb] == -1);
      auVar30[0xc] = -(pcVar1[0xc] == -1);
      auVar30[0xd] = -(pcVar1[0xd] == -1);
      auVar30[0xe] = -(pcVar1[0xe] == -1);
      auVar30[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar30 >> 0x17,0) & 1) != 0) || (SUB161(auVar30 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar30 >> 0x27,0) & 1) != 0) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar30 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar30 >> 0x3f,0) & 1) != 0) || (SUB161(auVar30 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar30 >> 0x4f,0) & 1) != 0) || (SUB161(auVar30 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar30 >> 0x5f,0) & 1) != 0) || (SUB161(auVar30 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar30 >> 0x6f,0) & 1) != 0) || (SUB161(auVar30 >> 0x77,0) & 1) != 0) ||
          auVar30[0xf] < '\0') break;
      uVar18 = uVar18 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
LAB_1406f6e92:
  pdb_1410d81c0(lVar14);
  if (*(longlong *)(lVar14 + 0x88) != 0) {
LAB_1406f6ea8:
    lVar3 = *(longlong *)(lVar14 + 0x70);
    uVar18 = 0xa69bfdce39de325e;
    lVar19 = 0;
    while( true ) {
      uVar18 = uVar18 & *(ulonglong *)(lVar14 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar18);
      auVar50[0] = -(*pcVar1 == DAT_142e34670);
      auVar50[1] = -(pcVar1[1] == DAT_142e34670._1_1_);
      auVar50[2] = -(pcVar1[2] == DAT_142e34670._2_1_);
      auVar50[3] = -(pcVar1[3] == DAT_142e34670._3_1_);
      auVar50[4] = -(pcVar1[4] == DAT_142e34670._4_1_);
      auVar50[5] = -(pcVar1[5] == DAT_142e34670._5_1_);
      auVar50[6] = -(pcVar1[6] == DAT_142e34670._6_1_);
      auVar50[7] = -(pcVar1[7] == DAT_142e34670._7_1_);
      auVar50[8] = -(pcVar1[8] == DAT_142e34670._8_1_);
      auVar50[9] = -(pcVar1[9] == DAT_142e34670._9_1_);
      auVar50[10] = -(pcVar1[10] == DAT_142e34670._10_1_);
      auVar50[0xb] = -(pcVar1[0xb] == DAT_142e34670._11_1_);
      auVar50[0xc] = -(pcVar1[0xc] == DAT_142e34670._12_1_);
      auVar50[0xd] = -(pcVar1[0xd] == DAT_142e34670._13_1_);
      auVar50[0xe] = -(pcVar1[0xe] == DAT_142e34670._14_1_);
      auVar50[0xf] = -(pcVar1[0xf] == DAT_142e34670._15_1_);
      uVar21 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe | (ushort)(auVar50[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar20; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar22 = uVar5 + uVar18 & *(ulonglong *)(lVar14 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar22 * -0x18);
        auVar51[0] = -(*pcVar2 == DAT_142e34680);
        auVar51[1] = -(pcVar2[1] == UNK_142e34681);
        auVar51[2] = -(pcVar2[2] == UNK_142e34682);
        auVar51[3] = -(pcVar2[3] == UNK_142e34683);
        auVar51[4] = -(pcVar2[4] == UNK_142e34684);
        auVar51[5] = -(pcVar2[5] == UNK_142e34685);
        auVar51[6] = -(pcVar2[6] == UNK_142e34686);
        auVar51[7] = -(pcVar2[7] == UNK_142e34687);
        auVar51[8] = -(pcVar2[8] == UNK_142e34688);
        auVar51[9] = -(pcVar2[9] == UNK_142e34689);
        auVar51[10] = -(pcVar2[10] == UNK_142e3468a);
        auVar51[0xb] = -(pcVar2[0xb] == UNK_142e3468b);
        auVar51[0xc] = -(pcVar2[0xc] == UNK_142e3468c);
        auVar51[0xd] = -(pcVar2[0xd] == UNK_142e3468d);
        auVar51[0xe] = -(pcVar2[0xe] == UNK_142e3468e);
        auVar51[0xf] = -(pcVar2[0xf] == UNK_142e3468f);
        if ((ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar51[0xf] >> 7) << 0xf) == 0xffff) {
          uVar18 = *(ulonglong *)(lVar3 + uVar22 * -0x18 + -8);
          if (((*(ulonglong *)(lVar14 + 0x210) <= uVar18) ||
              (uVar18 = *(ulonglong *)(*(longlong *)(lVar14 + 0x208) + uVar18 * 8), uVar18 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar14 + 0x1d8) + 0x20 + ~uVar18 * 0x40) == 0))
          goto LAB_1406f6f82;
          goto LAB_1406f6f98;
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar31[0] = -(*pcVar1 == -1);
      auVar31[1] = -(pcVar1[1] == -1);
      auVar31[2] = -(pcVar1[2] == -1);
      auVar31[3] = -(pcVar1[3] == -1);
      auVar31[4] = -(pcVar1[4] == -1);
      auVar31[5] = -(pcVar1[5] == -1);
      auVar31[6] = -(pcVar1[6] == -1);
      auVar31[7] = -(pcVar1[7] == -1);
      auVar31[8] = -(pcVar1[8] == -1);
      auVar31[9] = -(pcVar1[9] == -1);
      auVar31[10] = -(pcVar1[10] == -1);
      auVar31[0xb] = -(pcVar1[0xb] == -1);
      auVar31[0xc] = -(pcVar1[0xc] == -1);
      auVar31[0xd] = -(pcVar1[0xd] == -1);
      auVar31[0xe] = -(pcVar1[0xe] == -1);
      auVar31[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar31 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar31 >> 0x3f,0) & 1) != 0) || (SUB161(auVar31 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar31 >> 0x4f,0) & 1) != 0) || (SUB161(auVar31 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar31 >> 0x5f,0) & 1) != 0) || (SUB161(auVar31 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar31 >> 0x6f,0) & 1) != 0) || (SUB161(auVar31 >> 0x77,0) & 1) != 0) ||
          auVar31[0xf] < '\0') break;
      uVar18 = uVar18 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
LAB_1406f6f82:
  pdb_1410d93c0(lVar14);
  if (*(longlong *)(lVar14 + 0x88) != 0) {
LAB_1406f6f98:
    lVar3 = *(longlong *)(lVar14 + 0x70);
    uVar18 = 0xc89361832df1c44e;
    lVar19 = 0;
    while( true ) {
      uVar18 = uVar18 & *(ulonglong *)(lVar14 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar18);
      auVar52[0] = -(*pcVar1 == DAT_142e34600);
      auVar52[1] = -(pcVar1[1] == DAT_142e34600._1_1_);
      auVar52[2] = -(pcVar1[2] == DAT_142e34600._2_1_);
      auVar52[3] = -(pcVar1[3] == DAT_142e34600._3_1_);
      auVar52[4] = -(pcVar1[4] == DAT_142e34600._4_1_);
      auVar52[5] = -(pcVar1[5] == DAT_142e34600._5_1_);
      auVar52[6] = -(pcVar1[6] == DAT_142e34600._6_1_);
      auVar52[7] = -(pcVar1[7] == DAT_142e34600._7_1_);
      auVar52[8] = -(pcVar1[8] == DAT_142e34600._8_1_);
      auVar52[9] = -(pcVar1[9] == DAT_142e34600._9_1_);
      auVar52[10] = -(pcVar1[10] == DAT_142e34600._10_1_);
      auVar52[0xb] = -(pcVar1[0xb] == DAT_142e34600._11_1_);
      auVar52[0xc] = -(pcVar1[0xc] == DAT_142e34600._12_1_);
      auVar52[0xd] = -(pcVar1[0xd] == DAT_142e34600._13_1_);
      auVar52[0xe] = -(pcVar1[0xe] == DAT_142e34600._14_1_);
      auVar52[0xf] = -(pcVar1[0xf] == DAT_142e34600._15_1_);
      uVar21 = (ushort)(SUB161(auVar52 >> 7,0) & 1) | (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe | (ushort)(auVar52[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar20; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar22 = uVar5 + uVar18 & *(ulonglong *)(lVar14 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar22 * -0x18);
        auVar53[0] = -(*pcVar2 == DAT_142fa01a0);
        auVar53[1] = -(pcVar2[1] == UNK_142fa01a1);
        auVar53[2] = -(pcVar2[2] == UNK_142fa01a2);
        auVar53[3] = -(pcVar2[3] == UNK_142fa01a3);
        auVar53[4] = -(pcVar2[4] == UNK_142fa01a4);
        auVar53[5] = -(pcVar2[5] == UNK_142fa01a5);
        auVar53[6] = -(pcVar2[6] == UNK_142fa01a6);
        auVar53[7] = -(pcVar2[7] == UNK_142fa01a7);
        auVar53[8] = -(pcVar2[8] == UNK_142fa01a8);
        auVar53[9] = -(pcVar2[9] == UNK_142fa01a9);
        auVar53[10] = -(pcVar2[10] == UNK_142fa01aa);
        auVar53[0xb] = -(pcVar2[0xb] == UNK_142fa01ab);
        auVar53[0xc] = -(pcVar2[0xc] == UNK_142fa01ac);
        auVar53[0xd] = -(pcVar2[0xd] == UNK_142fa01ad);
        auVar53[0xe] = -(pcVar2[0xe] == UNK_142fa01ae);
        auVar53[0xf] = -(pcVar2[0xf] == UNK_142fa01af);
        if ((ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar53[0xf] >> 7) << 0xf) == 0xffff) {
          uVar18 = *(ulonglong *)(lVar3 + uVar22 * -0x18 + -8);
          if (((*(ulonglong *)(lVar14 + 0x210) <= uVar18) ||
              (uVar18 = *(ulonglong *)(*(longlong *)(lVar14 + 0x208) + uVar18 * 8), uVar18 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar14 + 0x1d8) + 0x20 + ~uVar18 * 0x40) == 0))
          goto LAB_1406f7072;
          goto LAB_1406f7088;
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar32[0] = -(*pcVar1 == -1);
      auVar32[1] = -(pcVar1[1] == -1);
      auVar32[2] = -(pcVar1[2] == -1);
      auVar32[3] = -(pcVar1[3] == -1);
      auVar32[4] = -(pcVar1[4] == -1);
      auVar32[5] = -(pcVar1[5] == -1);
      auVar32[6] = -(pcVar1[6] == -1);
      auVar32[7] = -(pcVar1[7] == -1);
      auVar32[8] = -(pcVar1[8] == -1);
      auVar32[9] = -(pcVar1[9] == -1);
      auVar32[10] = -(pcVar1[10] == -1);
      auVar32[0xb] = -(pcVar1[0xb] == -1);
      auVar32[0xc] = -(pcVar1[0xc] == -1);
      auVar32[0xd] = -(pcVar1[0xd] == -1);
      auVar32[0xe] = -(pcVar1[0xe] == -1);
      auVar32[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar32 >> 0x17,0) & 1) != 0) || (SUB161(auVar32 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar32 >> 0x27,0) & 1) != 0) || (SUB161(auVar32 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar32 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar32 >> 0x3f,0) & 1) != 0) || (SUB161(auVar32 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar32 >> 0x4f,0) & 1) != 0) || (SUB161(auVar32 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar32 >> 0x5f,0) & 1) != 0) || (SUB161(auVar32 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar32 >> 0x6f,0) & 1) != 0) || (SUB161(auVar32 >> 0x77,0) & 1) != 0) ||
          auVar32[0xf] < '\0') break;
      uVar18 = uVar18 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
LAB_1406f7072:
  pdb_1410d87c0(lVar14);
  if (*(longlong *)(lVar14 + 0x88) != 0) {
LAB_1406f7088:
    lVar3 = *(longlong *)(lVar14 + 0x70);
    uVar18 = 0x1989c4ffe765be36;
    lVar19 = 0;
    while( true ) {
      uVar18 = uVar18 & *(ulonglong *)(lVar14 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar18);
      auVar54[0] = -(*pcVar1 == DAT_142e34620);
      auVar54[1] = -(pcVar1[1] == DAT_142e34620._1_1_);
      auVar54[2] = -(pcVar1[2] == DAT_142e34620._2_1_);
      auVar54[3] = -(pcVar1[3] == DAT_142e34620._3_1_);
      auVar54[4] = -(pcVar1[4] == DAT_142e34620._4_1_);
      auVar54[5] = -(pcVar1[5] == DAT_142e34620._5_1_);
      auVar54[6] = -(pcVar1[6] == DAT_142e34620._6_1_);
      auVar54[7] = -(pcVar1[7] == DAT_142e34620._7_1_);
      auVar54[8] = -(pcVar1[8] == DAT_142e34620._8_1_);
      auVar54[9] = -(pcVar1[9] == DAT_142e34620._9_1_);
      auVar54[10] = -(pcVar1[10] == DAT_142e34620._10_1_);
      auVar54[0xb] = -(pcVar1[0xb] == DAT_142e34620._11_1_);
      auVar54[0xc] = -(pcVar1[0xc] == DAT_142e34620._12_1_);
      auVar54[0xd] = -(pcVar1[0xd] == DAT_142e34620._13_1_);
      auVar54[0xe] = -(pcVar1[0xe] == DAT_142e34620._14_1_);
      auVar54[0xf] = -(pcVar1[0xf] == DAT_142e34620._15_1_);
      uVar21 = (ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe | (ushort)(auVar54[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar20; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar22 = uVar5 + uVar18 & *(ulonglong *)(lVar14 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar22 * -0x18);
        auVar55[0] = -(*pcVar2 == DAT_142fa01b0);
        auVar55[1] = -(pcVar2[1] == UNK_142fa01b1);
        auVar55[2] = -(pcVar2[2] == UNK_142fa01b2);
        auVar55[3] = -(pcVar2[3] == UNK_142fa01b3);
        auVar55[4] = -(pcVar2[4] == UNK_142fa01b4);
        auVar55[5] = -(pcVar2[5] == UNK_142fa01b5);
        auVar55[6] = -(pcVar2[6] == UNK_142fa01b6);
        auVar55[7] = -(pcVar2[7] == UNK_142fa01b7);
        auVar55[8] = -(pcVar2[8] == UNK_142fa01b8);
        auVar55[9] = -(pcVar2[9] == UNK_142fa01b9);
        auVar55[10] = -(pcVar2[10] == UNK_142fa01ba);
        auVar55[0xb] = -(pcVar2[0xb] == UNK_142fa01bb);
        auVar55[0xc] = -(pcVar2[0xc] == UNK_142fa01bc);
        auVar55[0xd] = -(pcVar2[0xd] == UNK_142fa01bd);
        auVar55[0xe] = -(pcVar2[0xe] == UNK_142fa01be);
        auVar55[0xf] = -(pcVar2[0xf] == UNK_142fa01bf);
        if ((ushort)((ushort)(SUB161(auVar55 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar55[0xf] >> 7) << 0xf) == 0xffff) {
          uVar18 = *(ulonglong *)(lVar3 + uVar22 * -0x18 + -8);
          if (((uVar18 < *(ulonglong *)(lVar14 + 0x210)) &&
              (uVar18 = *(ulonglong *)(*(longlong *)(lVar14 + 0x208) + uVar18 * 8), uVar18 != 0)) &&
             (*(longlong *)(*(longlong *)(lVar14 + 0x1d8) + 0x20 + ~uVar18 * 0x40) != 0)) {
            return;
          }
          goto LAB_1406f7162;
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar33[0] = -(*pcVar1 == -1);
      auVar33[1] = -(pcVar1[1] == -1);
      auVar33[2] = -(pcVar1[2] == -1);
      auVar33[3] = -(pcVar1[3] == -1);
      auVar33[4] = -(pcVar1[4] == -1);
      auVar33[5] = -(pcVar1[5] == -1);
      auVar33[6] = -(pcVar1[6] == -1);
      auVar33[7] = -(pcVar1[7] == -1);
      auVar33[8] = -(pcVar1[8] == -1);
      auVar33[9] = -(pcVar1[9] == -1);
      auVar33[10] = -(pcVar1[10] == -1);
      auVar33[0xb] = -(pcVar1[0xb] == -1);
      auVar33[0xc] = -(pcVar1[0xc] == -1);
      auVar33[0xd] = -(pcVar1[0xd] == -1);
      auVar33[0xe] = -(pcVar1[0xe] == -1);
      auVar33[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar33 >> 0x17,0) & 1) != 0) || (SUB161(auVar33 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar33 >> 0x27,0) & 1) != 0) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar33 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar33 >> 0x3f,0) & 1) != 0) || (SUB161(auVar33 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar33 >> 0x4f,0) & 1) != 0) || (SUB161(auVar33 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar33 >> 0x5f,0) & 1) != 0) || (SUB161(auVar33 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar33 >> 0x6f,0) & 1) != 0) || (SUB161(auVar33 >> 0x77,0) & 1) != 0) ||
          auVar33[0xf] < '\0') break;
      uVar18 = uVar18 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
LAB_1406f7162:
  pdb_1410da5c0(lVar14);
  return;
}

