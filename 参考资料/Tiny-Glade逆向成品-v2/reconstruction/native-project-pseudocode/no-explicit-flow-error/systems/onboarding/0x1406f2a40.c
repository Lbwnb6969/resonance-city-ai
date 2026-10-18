// VA 0x1406f2a40, PDB extent 6519 bytes
// system_onboarding::impl$0::add_onboarding
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_onboarding::impl$0::add_onboarding
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/lib.rs
   Extent: 6519 */

longlong pdb_1406f2a40(void)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 **ppuVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
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
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
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
  undefined1 *puStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  lVar6 = pdb_141087670();
  pdb_141087c00(lVar6);
  pdb_14108a350(&uStack_2d8);
  pdb_14108c7b0(&puStack_118);
  pdb_141092520(&uStack_a8);
  uStack_208 = uStack_278;
  uStack_200 = uStack_270;
  uStack_218 = uStack_288;
  uStack_210 = uStack_280;
  uStack_228 = uStack_298;
  uStack_220 = uStack_290;
  uStack_238 = uStack_2a8;
  uStack_230 = uStack_2a0;
  uStack_248 = uStack_2b8;
  uStack_240 = uStack_2b0;
  uStack_258 = uStack_2c8;
  uStack_250 = uStack_2c0;
  uStack_268 = uStack_2d8;
  uStack_260 = uStack_2d0;
  puStack_1f8 = puStack_118;
  uStack_1f0 = pcStack_110;
  uStack_1e8 = uStack_108;
  uStack_1d8 = uStack_f8;
  uStack_1d0 = uStack_f0;
  uStack_1c8 = uStack_e8;
  uStack_1c0 = uStack_e0;
  uStack_1b8 = uStack_d8;
  uStack_1b0 = uStack_d0;
  uStack_1a8 = uStack_c8;
  uStack_1a0 = uStack_c0;
  uStack_198 = uStack_b8;
  uStack_190 = uStack_b0;
  uStack_128 = uStack_48;
  uStack_120 = uStack_40;
  uStack_138 = uStack_58;
  uStack_130 = uStack_50;
  uStack_148 = uStack_68;
  uStack_140 = uStack_60;
  uStack_158 = uStack_78;
  uStack_150 = uStack_70;
  uStack_168 = uStack_88;
  uStack_160 = uStack_80;
  uStack_178 = uStack_98;
  uStack_170 = uStack_90;
  uStack_188 = uStack_a8;
  uStack_180 = uStack_a0;
  pdb_141093010(&uStack_a8,&uStack_268);
  puStack_118 = (undefined1 *)CONCAT71(puStack_118._1_7_,0xb);
  ppuVar8 = &puStack_118;
  uVar7 = pdb_141093380(_DAT_143ca8dd0,ppuVar8,&UNK_143282490);
  pdb_140676be0(&uStack_a8,uVar7,ppuVar8);
  uStack_208 = uStack_48;
  uStack_200 = uStack_40;
  uStack_218 = uStack_58;
  uStack_210 = uStack_50;
  uStack_228 = uStack_68;
  uStack_220 = uStack_60;
  uStack_238 = uStack_78;
  uStack_230 = uStack_70;
  uStack_248 = uStack_88;
  uStack_240 = uStack_80;
  uStack_258 = uStack_98;
  uStack_250 = uStack_90;
  uStack_268 = uStack_a8;
  uStack_260 = uStack_a0;
  pcStack_110 = pdb_140f33ec0;
  uStack_29 = 1;
  puStack_118 = &uStack_2b;
  pdb_140f60760(&uStack_a8,&UNK_143282714,&puStack_118);
  uStack_29 = 1;
  pdb_14049e030(&uStack_a8);
  puStack_118 = (undefined1 *)0x0;
  uStack_100 = 0;
  uStack_fc = uStack_fc & 0xffffff00;
  uStack_29 = 0;
  pdb_141092dd0(&uStack_a8,&uStack_268,&puStack_118);
  pdb_141087d40(lVar6,&uStack_a8);
  pdb_141094f80(&uStack_268);
  puStack_118 = (undefined1 *)CONCAT71(puStack_118._1_7_,0x24);
  ppuVar8 = &puStack_118;
  uVar7 = pdb_141093380(_DAT_143ca8dd0,ppuVar8,&UNK_143282490);
  pdb_140676be0(&uStack_268,uVar7,ppuVar8);
  uStack_48 = uStack_208;
  uStack_40 = uStack_200;
  uStack_58 = uStack_218;
  uStack_50 = uStack_210;
  uStack_68 = uStack_228;
  uStack_60 = uStack_220;
  uStack_78 = uStack_238;
  uStack_70 = uStack_230;
  uStack_88 = uStack_248;
  uStack_80 = uStack_240;
  uStack_98 = uStack_258;
  uStack_90 = uStack_250;
  uStack_a8 = uStack_268;
  uStack_a0 = uStack_260;
  pcStack_110 = pdb_140f33ec0;
  uStack_2a = 1;
  puStack_118 = &uStack_2b;
  pdb_140f60760(&uStack_268,&UNK_143282714,&puStack_118);
  uStack_2a = 1;
  pdb_14049e030(&uStack_268);
  puStack_118 = (undefined1 *)0x0;
  uStack_100 = 0;
  uStack_fc = uStack_fc & 0xffffff00;
  uStack_2a = 0;
  pdb_141092dd0(&uStack_268,&uStack_a8);
  pdb_141087d40(lVar6,&uStack_268);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0xfb5ce8b8832601e7;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar36[0] = -(*pcVar1 == DAT_142e33ec0);
      auVar36[1] = -(pcVar1[1] == DAT_142e33ec0._1_1_);
      auVar36[2] = -(pcVar1[2] == DAT_142e33ec0._2_1_);
      auVar36[3] = -(pcVar1[3] == DAT_142e33ec0._3_1_);
      auVar36[4] = -(pcVar1[4] == DAT_142e33ec0._4_1_);
      auVar36[5] = -(pcVar1[5] == DAT_142e33ec0._5_1_);
      auVar36[6] = -(pcVar1[6] == DAT_142e33ec0._6_1_);
      auVar36[7] = -(pcVar1[7] == DAT_142e33ec0._7_1_);
      auVar36[8] = -(pcVar1[8] == DAT_142e33ec0._8_1_);
      auVar36[9] = -(pcVar1[9] == DAT_142e33ec0._9_1_);
      auVar36[10] = -(pcVar1[10] == DAT_142e33ec0._10_1_);
      auVar36[0xb] = -(pcVar1[0xb] == DAT_142e33ec0._11_1_);
      auVar36[0xc] = -(pcVar1[0xc] == DAT_142e33ec0._12_1_);
      auVar36[0xd] = -(pcVar1[0xd] == DAT_142e33ec0._13_1_);
      auVar36[0xe] = -(pcVar1[0xe] == DAT_142e33ec0._14_1_);
      auVar36[0xf] = -(pcVar1[0xf] == DAT_142e33ec0._15_1_);
      uVar12 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar37[0] = -(*pcVar2 == DAT_142e34c70);
        auVar37[1] = -(pcVar2[1] == UNK_142e34c71);
        auVar37[2] = -(pcVar2[2] == UNK_142e34c72);
        auVar37[3] = -(pcVar2[3] == UNK_142e34c73);
        auVar37[4] = -(pcVar2[4] == UNK_142e34c74);
        auVar37[5] = -(pcVar2[5] == UNK_142e34c75);
        auVar37[6] = -(pcVar2[6] == UNK_142e34c76);
        auVar37[7] = -(pcVar2[7] == UNK_142e34c77);
        auVar37[8] = -(pcVar2[8] == UNK_142e34c78);
        auVar37[9] = -(pcVar2[9] == UNK_142e34c79);
        auVar37[10] = -(pcVar2[10] == UNK_142e34c7a);
        auVar37[0xb] = -(pcVar2[0xb] == UNK_142e34c7b);
        auVar37[0xc] = -(pcVar2[0xc] == UNK_142e34c7c);
        auVar37[0xd] = -(pcVar2[0xd] == UNK_142e34c7d);
        auVar37[0xe] = -(pcVar2[0xe] == UNK_142e34c7e);
        auVar37[0xf] = -(pcVar2[0xf] == UNK_142e34c7f);
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
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f2eb2;
          goto LAB_1406f2ec8;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar14[0] = -(*pcVar1 == -1);
      auVar14[1] = -(pcVar1[1] == -1);
      auVar14[2] = -(pcVar1[2] == -1);
      auVar14[3] = -(pcVar1[3] == -1);
      auVar14[4] = -(pcVar1[4] == -1);
      auVar14[5] = -(pcVar1[5] == -1);
      auVar14[6] = -(pcVar1[6] == -1);
      auVar14[7] = -(pcVar1[7] == -1);
      auVar14[8] = -(pcVar1[8] == -1);
      auVar14[9] = -(pcVar1[9] == -1);
      auVar14[10] = -(pcVar1[10] == -1);
      auVar14[0xb] = -(pcVar1[0xb] == -1);
      auVar14[0xc] = -(pcVar1[0xc] == -1);
      auVar14[0xd] = -(pcVar1[0xd] == -1);
      auVar14[0xe] = -(pcVar1[0xe] == -1);
      auVar14[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar14 >> 0x17,0) & 1) != 0) || (SUB161(auVar14 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || (SUB161(auVar14 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar14 >> 0x6f,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0) ||
          auVar14[0xf] < '\0') break;
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f2eb2:
  pdb_141098e40(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f2ec8:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0x508f70460a1cec65;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar38[0] = -(*pcVar1 == DAT_142e347b0);
      auVar38[1] = -(pcVar1[1] == DAT_142e347b0._1_1_);
      auVar38[2] = -(pcVar1[2] == DAT_142e347b0._2_1_);
      auVar38[3] = -(pcVar1[3] == DAT_142e347b0._3_1_);
      auVar38[4] = -(pcVar1[4] == DAT_142e347b0._4_1_);
      auVar38[5] = -(pcVar1[5] == DAT_142e347b0._5_1_);
      auVar38[6] = -(pcVar1[6] == DAT_142e347b0._6_1_);
      auVar38[7] = -(pcVar1[7] == DAT_142e347b0._7_1_);
      auVar38[8] = -(pcVar1[8] == DAT_142e347b0._8_1_);
      auVar38[9] = -(pcVar1[9] == DAT_142e347b0._9_1_);
      auVar38[10] = -(pcVar1[10] == DAT_142e347b0._10_1_);
      auVar38[0xb] = -(pcVar1[0xb] == DAT_142e347b0._11_1_);
      auVar38[0xc] = -(pcVar1[0xc] == DAT_142e347b0._12_1_);
      auVar38[0xd] = -(pcVar1[0xd] == DAT_142e347b0._13_1_);
      auVar38[0xe] = -(pcVar1[0xe] == DAT_142e347b0._14_1_);
      auVar38[0xf] = -(pcVar1[0xf] == DAT_142e347b0._15_1_);
      uVar12 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar39[0] = -(*pcVar2 == DAT_142f9ff10);
        auVar39[1] = -(pcVar2[1] == UNK_142f9ff11);
        auVar39[2] = -(pcVar2[2] == UNK_142f9ff12);
        auVar39[3] = -(pcVar2[3] == UNK_142f9ff13);
        auVar39[4] = -(pcVar2[4] == UNK_142f9ff14);
        auVar39[5] = -(pcVar2[5] == UNK_142f9ff15);
        auVar39[6] = -(pcVar2[6] == UNK_142f9ff16);
        auVar39[7] = -(pcVar2[7] == UNK_142f9ff17);
        auVar39[8] = -(pcVar2[8] == UNK_142f9ff18);
        auVar39[9] = -(pcVar2[9] == UNK_142f9ff19);
        auVar39[10] = -(pcVar2[10] == UNK_142f9ff1a);
        auVar39[0xb] = -(pcVar2[0xb] == UNK_142f9ff1b);
        auVar39[0xc] = -(pcVar2[0xc] == UNK_142f9ff1c);
        auVar39[0xd] = -(pcVar2[0xd] == UNK_142f9ff1d);
        auVar39[0xe] = -(pcVar2[0xe] == UNK_142f9ff1e);
        auVar39[0xf] = -(pcVar2[0xf] == UNK_142f9ff1f);
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
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f2fa2;
          goto LAB_1406f2fb8;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar15[0] = -(*pcVar1 == -1);
      auVar15[1] = -(pcVar1[1] == -1);
      auVar15[2] = -(pcVar1[2] == -1);
      auVar15[3] = -(pcVar1[3] == -1);
      auVar15[4] = -(pcVar1[4] == -1);
      auVar15[5] = -(pcVar1[5] == -1);
      auVar15[6] = -(pcVar1[6] == -1);
      auVar15[7] = -(pcVar1[7] == -1);
      auVar15[8] = -(pcVar1[8] == -1);
      auVar15[9] = -(pcVar1[9] == -1);
      auVar15[10] = -(pcVar1[10] == -1);
      auVar15[0xb] = -(pcVar1[0xb] == -1);
      auVar15[0xc] = -(pcVar1[0xc] == -1);
      auVar15[0xd] = -(pcVar1[0xd] == -1);
      auVar15[0xe] = -(pcVar1[0xe] == -1);
      auVar15[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f2fa2:
  pdb_14109a640(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f2fb8:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0xa98a57c7a4d5dd8e;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar40[0] = -(*pcVar1 == DAT_142e341e0);
      auVar40[1] = -(pcVar1[1] == DAT_142e341e0._1_1_);
      auVar40[2] = -(pcVar1[2] == DAT_142e341e0._2_1_);
      auVar40[3] = -(pcVar1[3] == DAT_142e341e0._3_1_);
      auVar40[4] = -(pcVar1[4] == DAT_142e341e0._4_1_);
      auVar40[5] = -(pcVar1[5] == DAT_142e341e0._5_1_);
      auVar40[6] = -(pcVar1[6] == DAT_142e341e0._6_1_);
      auVar40[7] = -(pcVar1[7] == DAT_142e341e0._7_1_);
      auVar40[8] = -(pcVar1[8] == DAT_142e341e0._8_1_);
      auVar40[9] = -(pcVar1[9] == DAT_142e341e0._9_1_);
      auVar40[10] = -(pcVar1[10] == DAT_142e341e0._10_1_);
      auVar40[0xb] = -(pcVar1[0xb] == DAT_142e341e0._11_1_);
      auVar40[0xc] = -(pcVar1[0xc] == DAT_142e341e0._12_1_);
      auVar40[0xd] = -(pcVar1[0xd] == DAT_142e341e0._13_1_);
      auVar40[0xe] = -(pcVar1[0xe] == DAT_142e341e0._14_1_);
      auVar40[0xf] = -(pcVar1[0xf] == DAT_142e341e0._15_1_);
      uVar12 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar41[0] = -(*pcVar2 == DAT_142e34cb0);
        auVar41[1] = -(pcVar2[1] == UNK_142e34cb1);
        auVar41[2] = -(pcVar2[2] == UNK_142e34cb2);
        auVar41[3] = -(pcVar2[3] == UNK_142e34cb3);
        auVar41[4] = -(pcVar2[4] == UNK_142e34cb4);
        auVar41[5] = -(pcVar2[5] == UNK_142e34cb5);
        auVar41[6] = -(pcVar2[6] == UNK_142e34cb6);
        auVar41[7] = -(pcVar2[7] == UNK_142e34cb7);
        auVar41[8] = -(pcVar2[8] == UNK_142e34cb8);
        auVar41[9] = -(pcVar2[9] == UNK_142e34cb9);
        auVar41[10] = -(pcVar2[10] == UNK_142e34cba);
        auVar41[0xb] = -(pcVar2[0xb] == UNK_142e34cbb);
        auVar41[0xc] = -(pcVar2[0xc] == UNK_142e34cbc);
        auVar41[0xd] = -(pcVar2[0xd] == UNK_142e34cbd);
        auVar41[0xe] = -(pcVar2[0xe] == UNK_142e34cbe);
        auVar41[0xf] = -(pcVar2[0xf] == UNK_142e34cbf);
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
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f3092;
          goto LAB_1406f30a8;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar16[0] = -(*pcVar1 == -1);
      auVar16[1] = -(pcVar1[1] == -1);
      auVar16[2] = -(pcVar1[2] == -1);
      auVar16[3] = -(pcVar1[3] == -1);
      auVar16[4] = -(pcVar1[4] == -1);
      auVar16[5] = -(pcVar1[5] == -1);
      auVar16[6] = -(pcVar1[6] == -1);
      auVar16[7] = -(pcVar1[7] == -1);
      auVar16[8] = -(pcVar1[8] == -1);
      auVar16[9] = -(pcVar1[9] == -1);
      auVar16[10] = -(pcVar1[10] == -1);
      auVar16[0xb] = -(pcVar1[0xb] == -1);
      auVar16[0xc] = -(pcVar1[0xc] == -1);
      auVar16[0xd] = -(pcVar1[0xd] == -1);
      auVar16[0xe] = -(pcVar1[0xe] == -1);
      auVar16[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f3092:
  pdb_141095240(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f30a8:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0x5d704093bf755afd;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar42[0] = -(*pcVar1 == DAT_142f9ff20);
      auVar42[1] = -(pcVar1[1] == DAT_142f9ff20._1_1_);
      auVar42[2] = -(pcVar1[2] == DAT_142f9ff20._2_1_);
      auVar42[3] = -(pcVar1[3] == DAT_142f9ff20._3_1_);
      auVar42[4] = -(pcVar1[4] == DAT_142f9ff20._4_1_);
      auVar42[5] = -(pcVar1[5] == DAT_142f9ff20._5_1_);
      auVar42[6] = -(pcVar1[6] == DAT_142f9ff20._6_1_);
      auVar42[7] = -(pcVar1[7] == DAT_142f9ff20._7_1_);
      auVar42[8] = -(pcVar1[8] == DAT_142f9ff20._8_1_);
      auVar42[9] = -(pcVar1[9] == DAT_142f9ff20._9_1_);
      auVar42[10] = -(pcVar1[10] == DAT_142f9ff20._10_1_);
      auVar42[0xb] = -(pcVar1[0xb] == DAT_142f9ff20._11_1_);
      auVar42[0xc] = -(pcVar1[0xc] == DAT_142f9ff20._12_1_);
      auVar42[0xd] = -(pcVar1[0xd] == DAT_142f9ff20._13_1_);
      auVar42[0xe] = -(pcVar1[0xe] == DAT_142f9ff20._14_1_);
      auVar42[0xf] = -(pcVar1[0xf] == DAT_142f9ff20._15_1_);
      uVar12 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar43[0] = -(*pcVar2 == DAT_142f9ff30);
        auVar43[1] = -(pcVar2[1] == UNK_142f9ff31);
        auVar43[2] = -(pcVar2[2] == UNK_142f9ff32);
        auVar43[3] = -(pcVar2[3] == UNK_142f9ff33);
        auVar43[4] = -(pcVar2[4] == UNK_142f9ff34);
        auVar43[5] = -(pcVar2[5] == UNK_142f9ff35);
        auVar43[6] = -(pcVar2[6] == UNK_142f9ff36);
        auVar43[7] = -(pcVar2[7] == UNK_142f9ff37);
        auVar43[8] = -(pcVar2[8] == UNK_142f9ff38);
        auVar43[9] = -(pcVar2[9] == UNK_142f9ff39);
        auVar43[10] = -(pcVar2[10] == UNK_142f9ff3a);
        auVar43[0xb] = -(pcVar2[0xb] == UNK_142f9ff3b);
        auVar43[0xc] = -(pcVar2[0xc] == UNK_142f9ff3c);
        auVar43[0xd] = -(pcVar2[0xd] == UNK_142f9ff3d);
        auVar43[0xe] = -(pcVar2[0xe] == UNK_142f9ff3e);
        auVar43[0xf] = -(pcVar2[0xf] == UNK_142f9ff3f);
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
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f3182;
          goto LAB_1406f3198;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar17[0] = -(*pcVar1 == -1);
      auVar17[1] = -(pcVar1[1] == -1);
      auVar17[2] = -(pcVar1[2] == -1);
      auVar17[3] = -(pcVar1[3] == -1);
      auVar17[4] = -(pcVar1[4] == -1);
      auVar17[5] = -(pcVar1[5] == -1);
      auVar17[6] = -(pcVar1[6] == -1);
      auVar17[7] = -(pcVar1[7] == -1);
      auVar17[8] = -(pcVar1[8] == -1);
      auVar17[9] = -(pcVar1[9] == -1);
      auVar17[10] = -(pcVar1[10] == -1);
      auVar17[0xb] = -(pcVar1[0xb] == -1);
      auVar17[0xc] = -(pcVar1[0xc] == -1);
      auVar17[0xd] = -(pcVar1[0xd] == -1);
      auVar17[0xe] = -(pcVar1[0xe] == -1);
      auVar17[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f3182:
  pdb_141099a40(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f3198:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0xfe0e38a42b6bd60a;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar44[0] = -(*pcVar1 == DAT_142e348f0);
      auVar44[1] = -(pcVar1[1] == DAT_142e348f0._1_1_);
      auVar44[2] = -(pcVar1[2] == DAT_142e348f0._2_1_);
      auVar44[3] = -(pcVar1[3] == DAT_142e348f0._3_1_);
      auVar44[4] = -(pcVar1[4] == DAT_142e348f0._4_1_);
      auVar44[5] = -(pcVar1[5] == DAT_142e348f0._5_1_);
      auVar44[6] = -(pcVar1[6] == DAT_142e348f0._6_1_);
      auVar44[7] = -(pcVar1[7] == DAT_142e348f0._7_1_);
      auVar44[8] = -(pcVar1[8] == DAT_142e348f0._8_1_);
      auVar44[9] = -(pcVar1[9] == DAT_142e348f0._9_1_);
      auVar44[10] = -(pcVar1[10] == DAT_142e348f0._10_1_);
      auVar44[0xb] = -(pcVar1[0xb] == DAT_142e348f0._11_1_);
      auVar44[0xc] = -(pcVar1[0xc] == DAT_142e348f0._12_1_);
      auVar44[0xd] = -(pcVar1[0xd] == DAT_142e348f0._13_1_);
      auVar44[0xe] = -(pcVar1[0xe] == DAT_142e348f0._14_1_);
      auVar44[0xf] = -(pcVar1[0xf] == DAT_142e348f0._15_1_);
      uVar12 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar45[0] = -(*pcVar2 == DAT_142e34900);
        auVar45[1] = -(pcVar2[1] == UNK_142e34901);
        auVar45[2] = -(pcVar2[2] == UNK_142e34902);
        auVar45[3] = -(pcVar2[3] == UNK_142e34903);
        auVar45[4] = -(pcVar2[4] == UNK_142e34904);
        auVar45[5] = -(pcVar2[5] == UNK_142e34905);
        auVar45[6] = -(pcVar2[6] == UNK_142e34906);
        auVar45[7] = -(pcVar2[7] == UNK_142e34907);
        auVar45[8] = -(pcVar2[8] == UNK_142e34908);
        auVar45[9] = -(pcVar2[9] == UNK_142e34909);
        auVar45[10] = -(pcVar2[10] == UNK_142e3490a);
        auVar45[0xb] = -(pcVar2[0xb] == UNK_142e3490b);
        auVar45[0xc] = -(pcVar2[0xc] == UNK_142e3490c);
        auVar45[0xd] = -(pcVar2[0xd] == UNK_142e3490d);
        auVar45[0xe] = -(pcVar2[0xe] == UNK_142e3490e);
        auVar45[0xf] = -(pcVar2[0xf] == UNK_142e3490f);
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
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f3272;
          goto LAB_1406f3288;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar18[0] = -(*pcVar1 == -1);
      auVar18[1] = -(pcVar1[1] == -1);
      auVar18[2] = -(pcVar1[2] == -1);
      auVar18[3] = -(pcVar1[3] == -1);
      auVar18[4] = -(pcVar1[4] == -1);
      auVar18[5] = -(pcVar1[5] == -1);
      auVar18[6] = -(pcVar1[6] == -1);
      auVar18[7] = -(pcVar1[7] == -1);
      auVar18[8] = -(pcVar1[8] == -1);
      auVar18[9] = -(pcVar1[9] == -1);
      auVar18[10] = -(pcVar1[10] == -1);
      auVar18[0xb] = -(pcVar1[0xb] == -1);
      auVar18[0xc] = -(pcVar1[0xc] == -1);
      auVar18[0xd] = -(pcVar1[0xd] == -1);
      auVar18[0xe] = -(pcVar1[0xe] == -1);
      auVar18[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f3272:
  pdb_141097640(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f3288:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0xc2a21ace40bf9f08;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar46[0] = -(*pcVar1 == DAT_142e34040);
      auVar46[1] = -(pcVar1[1] == DAT_142e34040._1_1_);
      auVar46[2] = -(pcVar1[2] == DAT_142e34040._2_1_);
      auVar46[3] = -(pcVar1[3] == DAT_142e34040._3_1_);
      auVar46[4] = -(pcVar1[4] == DAT_142e34040._4_1_);
      auVar46[5] = -(pcVar1[5] == DAT_142e34040._5_1_);
      auVar46[6] = -(pcVar1[6] == DAT_142e34040._6_1_);
      auVar46[7] = -(pcVar1[7] == DAT_142e34040._7_1_);
      auVar46[8] = -(pcVar1[8] == DAT_142e34040._8_1_);
      auVar46[9] = -(pcVar1[9] == DAT_142e34040._9_1_);
      auVar46[10] = -(pcVar1[10] == DAT_142e34040._10_1_);
      auVar46[0xb] = -(pcVar1[0xb] == DAT_142e34040._11_1_);
      auVar46[0xc] = -(pcVar1[0xc] == DAT_142e34040._12_1_);
      auVar46[0xd] = -(pcVar1[0xd] == DAT_142e34040._13_1_);
      auVar46[0xe] = -(pcVar1[0xe] == DAT_142e34040._14_1_);
      auVar46[0xf] = -(pcVar1[0xf] == DAT_142e34040._15_1_);
      uVar12 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar47[0] = -(*pcVar2 == DAT_142e34f60);
        auVar47[1] = -(pcVar2[1] == UNK_142e34f61);
        auVar47[2] = -(pcVar2[2] == UNK_142e34f62);
        auVar47[3] = -(pcVar2[3] == UNK_142e34f63);
        auVar47[4] = -(pcVar2[4] == UNK_142e34f64);
        auVar47[5] = -(pcVar2[5] == UNK_142e34f65);
        auVar47[6] = -(pcVar2[6] == UNK_142e34f66);
        auVar47[7] = -(pcVar2[7] == UNK_142e34f67);
        auVar47[8] = -(pcVar2[8] == UNK_142e34f68);
        auVar47[9] = -(pcVar2[9] == UNK_142e34f69);
        auVar47[10] = -(pcVar2[10] == UNK_142e34f6a);
        auVar47[0xb] = -(pcVar2[0xb] == UNK_142e34f6b);
        auVar47[0xc] = -(pcVar2[0xc] == UNK_142e34f6c);
        auVar47[0xd] = -(pcVar2[0xd] == UNK_142e34f6d);
        auVar47[0xe] = -(pcVar2[0xe] == UNK_142e34f6e);
        auVar47[0xf] = -(pcVar2[0xf] == UNK_142e34f6f);
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
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f3362;
          goto LAB_1406f3378;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar19[0] = -(*pcVar1 == -1);
      auVar19[1] = -(pcVar1[1] == -1);
      auVar19[2] = -(pcVar1[2] == -1);
      auVar19[3] = -(pcVar1[3] == -1);
      auVar19[4] = -(pcVar1[4] == -1);
      auVar19[5] = -(pcVar1[5] == -1);
      auVar19[6] = -(pcVar1[6] == -1);
      auVar19[7] = -(pcVar1[7] == -1);
      auVar19[8] = -(pcVar1[8] == -1);
      auVar19[9] = -(pcVar1[9] == -1);
      auVar19[10] = -(pcVar1[10] == -1);
      auVar19[0xb] = -(pcVar1[0xb] == -1);
      auVar19[0xc] = -(pcVar1[0xc] == -1);
      auVar19[0xd] = -(pcVar1[0xd] == -1);
      auVar19[0xe] = -(pcVar1[0xe] == -1);
      auVar19[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f3362:
  pdb_141099440(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f3378:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0xf8379e7e9c27d48e;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar48[0] = -(*pcVar1 == DAT_142e346a0);
      auVar48[1] = -(pcVar1[1] == DAT_142e346a0._1_1_);
      auVar48[2] = -(pcVar1[2] == DAT_142e346a0._2_1_);
      auVar48[3] = -(pcVar1[3] == DAT_142e346a0._3_1_);
      auVar48[4] = -(pcVar1[4] == DAT_142e346a0._4_1_);
      auVar48[5] = -(pcVar1[5] == DAT_142e346a0._5_1_);
      auVar48[6] = -(pcVar1[6] == DAT_142e346a0._6_1_);
      auVar48[7] = -(pcVar1[7] == DAT_142e346a0._7_1_);
      auVar48[8] = -(pcVar1[8] == DAT_142e346a0._8_1_);
      auVar48[9] = -(pcVar1[9] == DAT_142e346a0._9_1_);
      auVar48[10] = -(pcVar1[10] == DAT_142e346a0._10_1_);
      auVar48[0xb] = -(pcVar1[0xb] == DAT_142e346a0._11_1_);
      auVar48[0xc] = -(pcVar1[0xc] == DAT_142e346a0._12_1_);
      auVar48[0xd] = -(pcVar1[0xd] == DAT_142e346a0._13_1_);
      auVar48[0xe] = -(pcVar1[0xe] == DAT_142e346a0._14_1_);
      auVar48[0xf] = -(pcVar1[0xf] == DAT_142e346a0._15_1_);
      uVar12 = (ushort)(SUB161(auVar48 >> 7,0) & 1) | (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar49[0] = -(*pcVar2 == DAT_142f9ff40);
        auVar49[1] = -(pcVar2[1] == UNK_142f9ff41);
        auVar49[2] = -(pcVar2[2] == UNK_142f9ff42);
        auVar49[3] = -(pcVar2[3] == UNK_142f9ff43);
        auVar49[4] = -(pcVar2[4] == UNK_142f9ff44);
        auVar49[5] = -(pcVar2[5] == UNK_142f9ff45);
        auVar49[6] = -(pcVar2[6] == UNK_142f9ff46);
        auVar49[7] = -(pcVar2[7] == UNK_142f9ff47);
        auVar49[8] = -(pcVar2[8] == UNK_142f9ff48);
        auVar49[9] = -(pcVar2[9] == UNK_142f9ff49);
        auVar49[10] = -(pcVar2[10] == UNK_142f9ff4a);
        auVar49[0xb] = -(pcVar2[0xb] == UNK_142f9ff4b);
        auVar49[0xc] = -(pcVar2[0xc] == UNK_142f9ff4c);
        auVar49[0xd] = -(pcVar2[0xd] == UNK_142f9ff4d);
        auVar49[0xe] = -(pcVar2[0xe] == UNK_142f9ff4e);
        auVar49[0xf] = -(pcVar2[0xf] == UNK_142f9ff4f);
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
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f3452;
          goto LAB_1406f3468;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar20[0] = -(*pcVar1 == -1);
      auVar20[1] = -(pcVar1[1] == -1);
      auVar20[2] = -(pcVar1[2] == -1);
      auVar20[3] = -(pcVar1[3] == -1);
      auVar20[4] = -(pcVar1[4] == -1);
      auVar20[5] = -(pcVar1[5] == -1);
      auVar20[6] = -(pcVar1[6] == -1);
      auVar20[7] = -(pcVar1[7] == -1);
      auVar20[8] = -(pcVar1[8] == -1);
      auVar20[9] = -(pcVar1[9] == -1);
      auVar20[10] = -(pcVar1[10] == -1);
      auVar20[0xb] = -(pcVar1[0xb] == -1);
      auVar20[0xc] = -(pcVar1[0xc] == -1);
      auVar20[0xd] = -(pcVar1[0xd] == -1);
      auVar20[0xe] = -(pcVar1[0xe] == -1);
      auVar20[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') break;
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f3452:
  pdb_14109ca40(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f3468:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0xc7d9aa437cee167b;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar50[0] = -(*pcVar1 == DAT_142e34ee0);
      auVar50[1] = -(pcVar1[1] == DAT_142e34ee0._1_1_);
      auVar50[2] = -(pcVar1[2] == DAT_142e34ee0._2_1_);
      auVar50[3] = -(pcVar1[3] == DAT_142e34ee0._3_1_);
      auVar50[4] = -(pcVar1[4] == DAT_142e34ee0._4_1_);
      auVar50[5] = -(pcVar1[5] == DAT_142e34ee0._5_1_);
      auVar50[6] = -(pcVar1[6] == DAT_142e34ee0._6_1_);
      auVar50[7] = -(pcVar1[7] == DAT_142e34ee0._7_1_);
      auVar50[8] = -(pcVar1[8] == DAT_142e34ee0._8_1_);
      auVar50[9] = -(pcVar1[9] == DAT_142e34ee0._9_1_);
      auVar50[10] = -(pcVar1[10] == DAT_142e34ee0._10_1_);
      auVar50[0xb] = -(pcVar1[0xb] == DAT_142e34ee0._11_1_);
      auVar50[0xc] = -(pcVar1[0xc] == DAT_142e34ee0._12_1_);
      auVar50[0xd] = -(pcVar1[0xd] == DAT_142e34ee0._13_1_);
      auVar50[0xe] = -(pcVar1[0xe] == DAT_142e34ee0._14_1_);
      auVar50[0xf] = -(pcVar1[0xf] == DAT_142e34ee0._15_1_);
      uVar12 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar51[0] = -(*pcVar2 == DAT_142e34ef0);
        auVar51[1] = -(pcVar2[1] == UNK_142e34ef1);
        auVar51[2] = -(pcVar2[2] == UNK_142e34ef2);
        auVar51[3] = -(pcVar2[3] == UNK_142e34ef3);
        auVar51[4] = -(pcVar2[4] == UNK_142e34ef4);
        auVar51[5] = -(pcVar2[5] == UNK_142e34ef5);
        auVar51[6] = -(pcVar2[6] == UNK_142e34ef6);
        auVar51[7] = -(pcVar2[7] == UNK_142e34ef7);
        auVar51[8] = -(pcVar2[8] == UNK_142e34ef8);
        auVar51[9] = -(pcVar2[9] == UNK_142e34ef9);
        auVar51[10] = -(pcVar2[10] == UNK_142e34efa);
        auVar51[0xb] = -(pcVar2[0xb] == UNK_142e34efb);
        auVar51[0xc] = -(pcVar2[0xc] == UNK_142e34efc);
        auVar51[0xd] = -(pcVar2[0xd] == UNK_142e34efd);
        auVar51[0xe] = -(pcVar2[0xe] == UNK_142e34efe);
        auVar51[0xf] = -(pcVar2[0xf] == UNK_142e34eff);
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
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f3542;
          goto LAB_1406f3558;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar21[0] = -(*pcVar1 == -1);
      auVar21[1] = -(pcVar1[1] == -1);
      auVar21[2] = -(pcVar1[2] == -1);
      auVar21[3] = -(pcVar1[3] == -1);
      auVar21[4] = -(pcVar1[4] == -1);
      auVar21[5] = -(pcVar1[5] == -1);
      auVar21[6] = -(pcVar1[6] == -1);
      auVar21[7] = -(pcVar1[7] == -1);
      auVar21[8] = -(pcVar1[8] == -1);
      auVar21[9] = -(pcVar1[9] == -1);
      auVar21[10] = -(pcVar1[10] == -1);
      auVar21[0xb] = -(pcVar1[0xb] == -1);
      auVar21[0xc] = -(pcVar1[0xc] == -1);
      auVar21[0xd] = -(pcVar1[0xd] == -1);
      auVar21[0xe] = -(pcVar1[0xe] == -1);
      auVar21[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f3542:
  pdb_14109d040(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f3558:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0xf958fcccf6c4ae5;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar52[0] = -(*pcVar1 == DAT_142e33ff0);
      auVar52[1] = -(pcVar1[1] == DAT_142e33ff0._1_1_);
      auVar52[2] = -(pcVar1[2] == DAT_142e33ff0._2_1_);
      auVar52[3] = -(pcVar1[3] == DAT_142e33ff0._3_1_);
      auVar52[4] = -(pcVar1[4] == DAT_142e33ff0._4_1_);
      auVar52[5] = -(pcVar1[5] == DAT_142e33ff0._5_1_);
      auVar52[6] = -(pcVar1[6] == DAT_142e33ff0._6_1_);
      auVar52[7] = -(pcVar1[7] == DAT_142e33ff0._7_1_);
      auVar52[8] = -(pcVar1[8] == DAT_142e33ff0._8_1_);
      auVar52[9] = -(pcVar1[9] == DAT_142e33ff0._9_1_);
      auVar52[10] = -(pcVar1[10] == DAT_142e33ff0._10_1_);
      auVar52[0xb] = -(pcVar1[0xb] == DAT_142e33ff0._11_1_);
      auVar52[0xc] = -(pcVar1[0xc] == DAT_142e33ff0._12_1_);
      auVar52[0xd] = -(pcVar1[0xd] == DAT_142e33ff0._13_1_);
      auVar52[0xe] = -(pcVar1[0xe] == DAT_142e33ff0._14_1_);
      auVar52[0xf] = -(pcVar1[0xf] == DAT_142e33ff0._15_1_);
      uVar12 = (ushort)(SUB161(auVar52 >> 7,0) & 1) | (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar53[0] = -(*pcVar2 == DAT_142f9ff50);
        auVar53[1] = -(pcVar2[1] == UNK_142f9ff51);
        auVar53[2] = -(pcVar2[2] == UNK_142f9ff52);
        auVar53[3] = -(pcVar2[3] == UNK_142f9ff53);
        auVar53[4] = -(pcVar2[4] == UNK_142f9ff54);
        auVar53[5] = -(pcVar2[5] == UNK_142f9ff55);
        auVar53[6] = -(pcVar2[6] == UNK_142f9ff56);
        auVar53[7] = -(pcVar2[7] == UNK_142f9ff57);
        auVar53[8] = -(pcVar2[8] == UNK_142f9ff58);
        auVar53[9] = -(pcVar2[9] == UNK_142f9ff59);
        auVar53[10] = -(pcVar2[10] == UNK_142f9ff5a);
        auVar53[0xb] = -(pcVar2[0xb] == UNK_142f9ff5b);
        auVar53[0xc] = -(pcVar2[0xc] == UNK_142f9ff5c);
        auVar53[0xd] = -(pcVar2[0xd] == UNK_142f9ff5d);
        auVar53[0xe] = -(pcVar2[0xe] == UNK_142f9ff5e);
        auVar53[0xf] = -(pcVar2[0xf] == UNK_142f9ff5f);
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
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f3632;
          goto LAB_1406f3648;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar22[0] = -(*pcVar1 == -1);
      auVar22[1] = -(pcVar1[1] == -1);
      auVar22[2] = -(pcVar1[2] == -1);
      auVar22[3] = -(pcVar1[3] == -1);
      auVar22[4] = -(pcVar1[4] == -1);
      auVar22[5] = -(pcVar1[5] == -1);
      auVar22[6] = -(pcVar1[6] == -1);
      auVar22[7] = -(pcVar1[7] == -1);
      auVar22[8] = -(pcVar1[8] == -1);
      auVar22[9] = -(pcVar1[9] == -1);
      auVar22[10] = -(pcVar1[10] == -1);
      auVar22[0xb] = -(pcVar1[0xb] == -1);
      auVar22[0xc] = -(pcVar1[0xc] == -1);
      auVar22[0xd] = -(pcVar1[0xd] == -1);
      auVar22[0xe] = -(pcVar1[0xe] == -1);
      auVar22[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f3632:
  pdb_141095e40(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f3648:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0xec9b2a0c82d3a6c0;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar54[0] = -(*pcVar1 == DAT_142e34a50);
      auVar54[1] = -(pcVar1[1] == DAT_142e34a50._1_1_);
      auVar54[2] = -(pcVar1[2] == DAT_142e34a50._2_1_);
      auVar54[3] = -(pcVar1[3] == DAT_142e34a50._3_1_);
      auVar54[4] = -(pcVar1[4] == DAT_142e34a50._4_1_);
      auVar54[5] = -(pcVar1[5] == DAT_142e34a50._5_1_);
      auVar54[6] = -(pcVar1[6] == DAT_142e34a50._6_1_);
      auVar54[7] = -(pcVar1[7] == DAT_142e34a50._7_1_);
      auVar54[8] = -(pcVar1[8] == DAT_142e34a50._8_1_);
      auVar54[9] = -(pcVar1[9] == DAT_142e34a50._9_1_);
      auVar54[10] = -(pcVar1[10] == DAT_142e34a50._10_1_);
      auVar54[0xb] = -(pcVar1[0xb] == DAT_142e34a50._11_1_);
      auVar54[0xc] = -(pcVar1[0xc] == DAT_142e34a50._12_1_);
      auVar54[0xd] = -(pcVar1[0xd] == DAT_142e34a50._13_1_);
      auVar54[0xe] = -(pcVar1[0xe] == DAT_142e34a50._14_1_);
      auVar54[0xf] = -(pcVar1[0xf] == DAT_142e34a50._15_1_);
      uVar12 = (ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar55[0] = -(*pcVar2 == DAT_142e34a60);
        auVar55[1] = -(pcVar2[1] == UNK_142e34a61);
        auVar55[2] = -(pcVar2[2] == UNK_142e34a62);
        auVar55[3] = -(pcVar2[3] == UNK_142e34a63);
        auVar55[4] = -(pcVar2[4] == UNK_142e34a64);
        auVar55[5] = -(pcVar2[5] == UNK_142e34a65);
        auVar55[6] = -(pcVar2[6] == UNK_142e34a66);
        auVar55[7] = -(pcVar2[7] == UNK_142e34a67);
        auVar55[8] = -(pcVar2[8] == UNK_142e34a68);
        auVar55[9] = -(pcVar2[9] == UNK_142e34a69);
        auVar55[10] = -(pcVar2[10] == UNK_142e34a6a);
        auVar55[0xb] = -(pcVar2[0xb] == UNK_142e34a6b);
        auVar55[0xc] = -(pcVar2[0xc] == UNK_142e34a6c);
        auVar55[0xd] = -(pcVar2[0xd] == UNK_142e34a6d);
        auVar55[0xe] = -(pcVar2[0xe] == UNK_142e34a6e);
        auVar55[0xf] = -(pcVar2[0xf] == UNK_142e34a6f);
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
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f3722;
          goto LAB_1406f3738;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f3722:
  pdb_141097040(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f3738:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0x786512c774f79be3;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar56[0] = -(*pcVar1 == DAT_142e34c50);
      auVar56[1] = -(pcVar1[1] == DAT_142e34c50._1_1_);
      auVar56[2] = -(pcVar1[2] == DAT_142e34c50._2_1_);
      auVar56[3] = -(pcVar1[3] == DAT_142e34c50._3_1_);
      auVar56[4] = -(pcVar1[4] == DAT_142e34c50._4_1_);
      auVar56[5] = -(pcVar1[5] == DAT_142e34c50._5_1_);
      auVar56[6] = -(pcVar1[6] == DAT_142e34c50._6_1_);
      auVar56[7] = -(pcVar1[7] == DAT_142e34c50._7_1_);
      auVar56[8] = -(pcVar1[8] == DAT_142e34c50._8_1_);
      auVar56[9] = -(pcVar1[9] == DAT_142e34c50._9_1_);
      auVar56[10] = -(pcVar1[10] == DAT_142e34c50._10_1_);
      auVar56[0xb] = -(pcVar1[0xb] == DAT_142e34c50._11_1_);
      auVar56[0xc] = -(pcVar1[0xc] == DAT_142e34c50._12_1_);
      auVar56[0xd] = -(pcVar1[0xd] == DAT_142e34c50._13_1_);
      auVar56[0xe] = -(pcVar1[0xe] == DAT_142e34c50._14_1_);
      auVar56[0xf] = -(pcVar1[0xf] == DAT_142e34c50._15_1_);
      uVar12 = (ushort)(SUB161(auVar56 >> 7,0) & 1) | (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe | (ushort)(auVar56[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar57[0] = -(*pcVar2 == DAT_142e34f50);
        auVar57[1] = -(pcVar2[1] == UNK_142e34f51);
        auVar57[2] = -(pcVar2[2] == UNK_142e34f52);
        auVar57[3] = -(pcVar2[3] == UNK_142e34f53);
        auVar57[4] = -(pcVar2[4] == UNK_142e34f54);
        auVar57[5] = -(pcVar2[5] == UNK_142e34f55);
        auVar57[6] = -(pcVar2[6] == UNK_142e34f56);
        auVar57[7] = -(pcVar2[7] == UNK_142e34f57);
        auVar57[8] = -(pcVar2[8] == UNK_142e34f58);
        auVar57[9] = -(pcVar2[9] == UNK_142e34f59);
        auVar57[10] = -(pcVar2[10] == UNK_142e34f5a);
        auVar57[0xb] = -(pcVar2[0xb] == UNK_142e34f5b);
        auVar57[0xc] = -(pcVar2[0xc] == UNK_142e34f5c);
        auVar57[0xd] = -(pcVar2[0xd] == UNK_142e34f5d);
        auVar57[0xe] = -(pcVar2[0xe] == UNK_142e34f5e);
        auVar57[0xf] = -(pcVar2[0xf] == UNK_142e34f5f);
        if ((ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar57[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f3812;
          goto LAB_1406f3828;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f3812:
  pdb_14109a040(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f3828:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0x451d6b9ad457dd10;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar58[0] = -(*pcVar1 == DAT_142e33d10);
      auVar58[1] = -(pcVar1[1] == DAT_142e33d10._1_1_);
      auVar58[2] = -(pcVar1[2] == DAT_142e33d10._2_1_);
      auVar58[3] = -(pcVar1[3] == DAT_142e33d10._3_1_);
      auVar58[4] = -(pcVar1[4] == DAT_142e33d10._4_1_);
      auVar58[5] = -(pcVar1[5] == DAT_142e33d10._5_1_);
      auVar58[6] = -(pcVar1[6] == DAT_142e33d10._6_1_);
      auVar58[7] = -(pcVar1[7] == DAT_142e33d10._7_1_);
      auVar58[8] = -(pcVar1[8] == DAT_142e33d10._8_1_);
      auVar58[9] = -(pcVar1[9] == DAT_142e33d10._9_1_);
      auVar58[10] = -(pcVar1[10] == DAT_142e33d10._10_1_);
      auVar58[0xb] = -(pcVar1[0xb] == DAT_142e33d10._11_1_);
      auVar58[0xc] = -(pcVar1[0xc] == DAT_142e33d10._12_1_);
      auVar58[0xd] = -(pcVar1[0xd] == DAT_142e33d10._13_1_);
      auVar58[0xe] = -(pcVar1[0xe] == DAT_142e33d10._14_1_);
      auVar58[0xf] = -(pcVar1[0xf] == DAT_142e33d10._15_1_);
      uVar12 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (ushort)(auVar58[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar59[0] = -(*pcVar2 == DAT_142e34520);
        auVar59[1] = -(pcVar2[1] == UNK_142e34521);
        auVar59[2] = -(pcVar2[2] == UNK_142e34522);
        auVar59[3] = -(pcVar2[3] == UNK_142e34523);
        auVar59[4] = -(pcVar2[4] == UNK_142e34524);
        auVar59[5] = -(pcVar2[5] == UNK_142e34525);
        auVar59[6] = -(pcVar2[6] == UNK_142e34526);
        auVar59[7] = -(pcVar2[7] == UNK_142e34527);
        auVar59[8] = -(pcVar2[8] == UNK_142e34528);
        auVar59[9] = -(pcVar2[9] == UNK_142e34529);
        auVar59[10] = -(pcVar2[10] == UNK_142e3452a);
        auVar59[0xb] = -(pcVar2[0xb] == UNK_142e3452b);
        auVar59[0xc] = -(pcVar2[0xc] == UNK_142e3452c);
        auVar59[0xd] = -(pcVar2[0xd] == UNK_142e3452d);
        auVar59[0xe] = -(pcVar2[0xe] == UNK_142e3452e);
        auVar59[0xf] = -(pcVar2[0xf] == UNK_142e3452f);
        if ((ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar59[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f3902;
          goto LAB_1406f3918;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f3902:
  pdb_141095840(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f3918:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0xbf8786ae8d98e23c;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar60[0] = -(*pcVar1 == DAT_142e34e50);
      auVar60[1] = -(pcVar1[1] == DAT_142e34e50._1_1_);
      auVar60[2] = -(pcVar1[2] == DAT_142e34e50._2_1_);
      auVar60[3] = -(pcVar1[3] == DAT_142e34e50._3_1_);
      auVar60[4] = -(pcVar1[4] == DAT_142e34e50._4_1_);
      auVar60[5] = -(pcVar1[5] == DAT_142e34e50._5_1_);
      auVar60[6] = -(pcVar1[6] == DAT_142e34e50._6_1_);
      auVar60[7] = -(pcVar1[7] == DAT_142e34e50._7_1_);
      auVar60[8] = -(pcVar1[8] == DAT_142e34e50._8_1_);
      auVar60[9] = -(pcVar1[9] == DAT_142e34e50._9_1_);
      auVar60[10] = -(pcVar1[10] == DAT_142e34e50._10_1_);
      auVar60[0xb] = -(pcVar1[0xb] == DAT_142e34e50._11_1_);
      auVar60[0xc] = -(pcVar1[0xc] == DAT_142e34e50._12_1_);
      auVar60[0xd] = -(pcVar1[0xd] == DAT_142e34e50._13_1_);
      auVar60[0xe] = -(pcVar1[0xe] == DAT_142e34e50._14_1_);
      auVar60[0xf] = -(pcVar1[0xf] == DAT_142e34e50._15_1_);
      uVar12 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe | (ushort)(auVar60[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar61[0] = -(*pcVar2 == DAT_142f9ff60);
        auVar61[1] = -(pcVar2[1] == UNK_142f9ff61);
        auVar61[2] = -(pcVar2[2] == UNK_142f9ff62);
        auVar61[3] = -(pcVar2[3] == UNK_142f9ff63);
        auVar61[4] = -(pcVar2[4] == UNK_142f9ff64);
        auVar61[5] = -(pcVar2[5] == UNK_142f9ff65);
        auVar61[6] = -(pcVar2[6] == UNK_142f9ff66);
        auVar61[7] = -(pcVar2[7] == UNK_142f9ff67);
        auVar61[8] = -(pcVar2[8] == UNK_142f9ff68);
        auVar61[9] = -(pcVar2[9] == UNK_142f9ff69);
        auVar61[10] = -(pcVar2[10] == UNK_142f9ff6a);
        auVar61[0xb] = -(pcVar2[0xb] == UNK_142f9ff6b);
        auVar61[0xc] = -(pcVar2[0xc] == UNK_142f9ff6c);
        auVar61[0xd] = -(pcVar2[0xd] == UNK_142f9ff6d);
        auVar61[0xe] = -(pcVar2[0xe] == UNK_142f9ff6e);
        auVar61[0xf] = -(pcVar2[0xf] == UNK_142f9ff6f);
        if ((ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar61[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f39f2;
          goto LAB_1406f3a08;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f39f2:
  pdb_141096440(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f3a08:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0xb1e4c5936cb785ef;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar62[0] = -(*pcVar1 == DAT_142f9ff70);
      auVar62[1] = -(pcVar1[1] == DAT_142f9ff70._1_1_);
      auVar62[2] = -(pcVar1[2] == DAT_142f9ff70._2_1_);
      auVar62[3] = -(pcVar1[3] == DAT_142f9ff70._3_1_);
      auVar62[4] = -(pcVar1[4] == DAT_142f9ff70._4_1_);
      auVar62[5] = -(pcVar1[5] == DAT_142f9ff70._5_1_);
      auVar62[6] = -(pcVar1[6] == DAT_142f9ff70._6_1_);
      auVar62[7] = -(pcVar1[7] == DAT_142f9ff70._7_1_);
      auVar62[8] = -(pcVar1[8] == DAT_142f9ff70._8_1_);
      auVar62[9] = -(pcVar1[9] == DAT_142f9ff70._9_1_);
      auVar62[10] = -(pcVar1[10] == DAT_142f9ff70._10_1_);
      auVar62[0xb] = -(pcVar1[0xb] == DAT_142f9ff70._11_1_);
      auVar62[0xc] = -(pcVar1[0xc] == DAT_142f9ff70._12_1_);
      auVar62[0xd] = -(pcVar1[0xd] == DAT_142f9ff70._13_1_);
      auVar62[0xe] = -(pcVar1[0xe] == DAT_142f9ff70._14_1_);
      auVar62[0xf] = -(pcVar1[0xf] == DAT_142f9ff70._15_1_);
      uVar12 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe | (ushort)(auVar62[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar63[0] = -(*pcVar2 == DAT_142f9ff80);
        auVar63[1] = -(pcVar2[1] == UNK_142f9ff81);
        auVar63[2] = -(pcVar2[2] == UNK_142f9ff82);
        auVar63[3] = -(pcVar2[3] == UNK_142f9ff83);
        auVar63[4] = -(pcVar2[4] == UNK_142f9ff84);
        auVar63[5] = -(pcVar2[5] == UNK_142f9ff85);
        auVar63[6] = -(pcVar2[6] == UNK_142f9ff86);
        auVar63[7] = -(pcVar2[7] == UNK_142f9ff87);
        auVar63[8] = -(pcVar2[8] == UNK_142f9ff88);
        auVar63[9] = -(pcVar2[9] == UNK_142f9ff89);
        auVar63[10] = -(pcVar2[10] == UNK_142f9ff8a);
        auVar63[0xb] = -(pcVar2[0xb] == UNK_142f9ff8b);
        auVar63[0xc] = -(pcVar2[0xc] == UNK_142f9ff8c);
        auVar63[0xd] = -(pcVar2[0xd] == UNK_142f9ff8d);
        auVar63[0xe] = -(pcVar2[0xe] == UNK_142f9ff8e);
        auVar63[0xf] = -(pcVar2[0xf] == UNK_142f9ff8f);
        if ((ushort)((ushort)(SUB161(auVar63 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar63[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f3ae2;
          goto LAB_1406f3af8;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f3ae2:
  pdb_141097c40(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f3af8:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0xb93df849cc298055;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar64[0] = -(*pcVar1 == DAT_142e34f00);
      auVar64[1] = -(pcVar1[1] == DAT_142e34f00._1_1_);
      auVar64[2] = -(pcVar1[2] == DAT_142e34f00._2_1_);
      auVar64[3] = -(pcVar1[3] == DAT_142e34f00._3_1_);
      auVar64[4] = -(pcVar1[4] == DAT_142e34f00._4_1_);
      auVar64[5] = -(pcVar1[5] == DAT_142e34f00._5_1_);
      auVar64[6] = -(pcVar1[6] == DAT_142e34f00._6_1_);
      auVar64[7] = -(pcVar1[7] == DAT_142e34f00._7_1_);
      auVar64[8] = -(pcVar1[8] == DAT_142e34f00._8_1_);
      auVar64[9] = -(pcVar1[9] == DAT_142e34f00._9_1_);
      auVar64[10] = -(pcVar1[10] == DAT_142e34f00._10_1_);
      auVar64[0xb] = -(pcVar1[0xb] == DAT_142e34f00._11_1_);
      auVar64[0xc] = -(pcVar1[0xc] == DAT_142e34f00._12_1_);
      auVar64[0xd] = -(pcVar1[0xd] == DAT_142e34f00._13_1_);
      auVar64[0xe] = -(pcVar1[0xe] == DAT_142e34f00._14_1_);
      auVar64[0xf] = -(pcVar1[0xf] == DAT_142e34f00._15_1_);
      uVar12 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe | (ushort)(auVar64[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar65[0] = -(*pcVar2 == DAT_142e34f10);
        auVar65[1] = -(pcVar2[1] == UNK_142e34f11);
        auVar65[2] = -(pcVar2[2] == UNK_142e34f12);
        auVar65[3] = -(pcVar2[3] == UNK_142e34f13);
        auVar65[4] = -(pcVar2[4] == UNK_142e34f14);
        auVar65[5] = -(pcVar2[5] == UNK_142e34f15);
        auVar65[6] = -(pcVar2[6] == UNK_142e34f16);
        auVar65[7] = -(pcVar2[7] == UNK_142e34f17);
        auVar65[8] = -(pcVar2[8] == UNK_142e34f18);
        auVar65[9] = -(pcVar2[9] == UNK_142e34f19);
        auVar65[10] = -(pcVar2[10] == UNK_142e34f1a);
        auVar65[0xb] = -(pcVar2[0xb] == UNK_142e34f1b);
        auVar65[0xc] = -(pcVar2[0xc] == UNK_142e34f1c);
        auVar65[0xd] = -(pcVar2[0xd] == UNK_142e34f1d);
        auVar65[0xe] = -(pcVar2[0xe] == UNK_142e34f1e);
        auVar65[0xf] = -(pcVar2[0xf] == UNK_142e34f1f);
        if ((ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar65[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f3bd2;
          goto LAB_1406f3be8;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f3bd2:
  pdb_14109ac40(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f3be8:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0x1ff4caa877a30b4c;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar66[0] = -(*pcVar1 == DAT_142e34de0);
      auVar66[1] = -(pcVar1[1] == DAT_142e34de0._1_1_);
      auVar66[2] = -(pcVar1[2] == DAT_142e34de0._2_1_);
      auVar66[3] = -(pcVar1[3] == DAT_142e34de0._3_1_);
      auVar66[4] = -(pcVar1[4] == DAT_142e34de0._4_1_);
      auVar66[5] = -(pcVar1[5] == DAT_142e34de0._5_1_);
      auVar66[6] = -(pcVar1[6] == DAT_142e34de0._6_1_);
      auVar66[7] = -(pcVar1[7] == DAT_142e34de0._7_1_);
      auVar66[8] = -(pcVar1[8] == DAT_142e34de0._8_1_);
      auVar66[9] = -(pcVar1[9] == DAT_142e34de0._9_1_);
      auVar66[10] = -(pcVar1[10] == DAT_142e34de0._10_1_);
      auVar66[0xb] = -(pcVar1[0xb] == DAT_142e34de0._11_1_);
      auVar66[0xc] = -(pcVar1[0xc] == DAT_142e34de0._12_1_);
      auVar66[0xd] = -(pcVar1[0xd] == DAT_142e34de0._13_1_);
      auVar66[0xe] = -(pcVar1[0xe] == DAT_142e34de0._14_1_);
      auVar66[0xf] = -(pcVar1[0xf] == DAT_142e34de0._15_1_);
      uVar12 = (ushort)(SUB161(auVar66 >> 7,0) & 1) | (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe | (ushort)(auVar66[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar67[0] = -(*pcVar2 == DAT_142e34e00);
        auVar67[1] = -(pcVar2[1] == UNK_142e34e01);
        auVar67[2] = -(pcVar2[2] == UNK_142e34e02);
        auVar67[3] = -(pcVar2[3] == UNK_142e34e03);
        auVar67[4] = -(pcVar2[4] == UNK_142e34e04);
        auVar67[5] = -(pcVar2[5] == UNK_142e34e05);
        auVar67[6] = -(pcVar2[6] == UNK_142e34e06);
        auVar67[7] = -(pcVar2[7] == UNK_142e34e07);
        auVar67[8] = -(pcVar2[8] == UNK_142e34e08);
        auVar67[9] = -(pcVar2[9] == UNK_142e34e09);
        auVar67[10] = -(pcVar2[10] == UNK_142e34e0a);
        auVar67[0xb] = -(pcVar2[0xb] == UNK_142e34e0b);
        auVar67[0xc] = -(pcVar2[0xc] == UNK_142e34e0c);
        auVar67[0xd] = -(pcVar2[0xd] == UNK_142e34e0d);
        auVar67[0xe] = -(pcVar2[0xe] == UNK_142e34e0e);
        auVar67[0xf] = -(pcVar2[0xf] == UNK_142e34e0f);
        if ((ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar67[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f3cc2;
          goto LAB_1406f3cca;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f3cc2:
  pdb_14109b240(lVar6);
LAB_1406f3cca:
  if (*(longlong *)(lVar6 + 0x88) != 0) {
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0xcca062de2ced9a11;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar68[0] = -(*pcVar1 == DAT_142e35050);
      auVar68[1] = -(pcVar1[1] == DAT_142e35050._1_1_);
      auVar68[2] = -(pcVar1[2] == DAT_142e35050._2_1_);
      auVar68[3] = -(pcVar1[3] == DAT_142e35050._3_1_);
      auVar68[4] = -(pcVar1[4] == DAT_142e35050._4_1_);
      auVar68[5] = -(pcVar1[5] == DAT_142e35050._5_1_);
      auVar68[6] = -(pcVar1[6] == DAT_142e35050._6_1_);
      auVar68[7] = -(pcVar1[7] == DAT_142e35050._7_1_);
      auVar68[8] = -(pcVar1[8] == DAT_142e35050._8_1_);
      auVar68[9] = -(pcVar1[9] == DAT_142e35050._9_1_);
      auVar68[10] = -(pcVar1[10] == DAT_142e35050._10_1_);
      auVar68[0xb] = -(pcVar1[0xb] == DAT_142e35050._11_1_);
      auVar68[0xc] = -(pcVar1[0xc] == DAT_142e35050._12_1_);
      auVar68[0xd] = -(pcVar1[0xd] == DAT_142e35050._13_1_);
      auVar68[0xe] = -(pcVar1[0xe] == DAT_142e35050._14_1_);
      auVar68[0xf] = -(pcVar1[0xf] == DAT_142e35050._15_1_);
      uVar12 = (ushort)(SUB161(auVar68 >> 7,0) & 1) | (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe | (ushort)(auVar68[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar69[0] = -(*pcVar2 == DAT_142e35060);
        auVar69[1] = -(pcVar2[1] == UNK_142e35061);
        auVar69[2] = -(pcVar2[2] == UNK_142e35062);
        auVar69[3] = -(pcVar2[3] == UNK_142e35063);
        auVar69[4] = -(pcVar2[4] == UNK_142e35064);
        auVar69[5] = -(pcVar2[5] == UNK_142e35065);
        auVar69[6] = -(pcVar2[6] == UNK_142e35066);
        auVar69[7] = -(pcVar2[7] == UNK_142e35067);
        auVar69[8] = -(pcVar2[8] == UNK_142e35068);
        auVar69[9] = -(pcVar2[9] == UNK_142e35069);
        auVar69[10] = -(pcVar2[10] == UNK_142e3506a);
        auVar69[0xb] = -(pcVar2[0xb] == UNK_142e3506b);
        auVar69[0xc] = -(pcVar2[0xc] == UNK_142e3506c);
        auVar69[0xd] = -(pcVar2[0xd] == UNK_142e3506d);
        auVar69[0xe] = -(pcVar2[0xe] == UNK_142e3506e);
        auVar69[0xf] = -(pcVar2[0xf] == UNK_142e3506f);
        if ((ushort)((ushort)(SUB161(auVar69 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar69[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f3db2;
          goto LAB_1406f3dc8;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f3db2:
  pdb_141096a40(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f3dc8:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0xd2d7375f93943502;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar70[0] = -(*pcVar1 == DAT_142e34120);
      auVar70[1] = -(pcVar1[1] == DAT_142e34120._1_1_);
      auVar70[2] = -(pcVar1[2] == DAT_142e34120._2_1_);
      auVar70[3] = -(pcVar1[3] == DAT_142e34120._3_1_);
      auVar70[4] = -(pcVar1[4] == DAT_142e34120._4_1_);
      auVar70[5] = -(pcVar1[5] == DAT_142e34120._5_1_);
      auVar70[6] = -(pcVar1[6] == DAT_142e34120._6_1_);
      auVar70[7] = -(pcVar1[7] == DAT_142e34120._7_1_);
      auVar70[8] = -(pcVar1[8] == DAT_142e34120._8_1_);
      auVar70[9] = -(pcVar1[9] == DAT_142e34120._9_1_);
      auVar70[10] = -(pcVar1[10] == DAT_142e34120._10_1_);
      auVar70[0xb] = -(pcVar1[0xb] == DAT_142e34120._11_1_);
      auVar70[0xc] = -(pcVar1[0xc] == DAT_142e34120._12_1_);
      auVar70[0xd] = -(pcVar1[0xd] == DAT_142e34120._13_1_);
      auVar70[0xe] = -(pcVar1[0xe] == DAT_142e34120._14_1_);
      auVar70[0xf] = -(pcVar1[0xf] == DAT_142e34120._15_1_);
      uVar12 = (ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe | (ushort)(auVar70[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar71[0] = -(*pcVar2 == DAT_142e34580);
        auVar71[1] = -(pcVar2[1] == UNK_142e34581);
        auVar71[2] = -(pcVar2[2] == UNK_142e34582);
        auVar71[3] = -(pcVar2[3] == UNK_142e34583);
        auVar71[4] = -(pcVar2[4] == UNK_142e34584);
        auVar71[5] = -(pcVar2[5] == UNK_142e34585);
        auVar71[6] = -(pcVar2[6] == UNK_142e34586);
        auVar71[7] = -(pcVar2[7] == UNK_142e34587);
        auVar71[8] = -(pcVar2[8] == UNK_142e34588);
        auVar71[9] = -(pcVar2[9] == UNK_142e34589);
        auVar71[10] = -(pcVar2[10] == UNK_142e3458a);
        auVar71[0xb] = -(pcVar2[0xb] == UNK_142e3458b);
        auVar71[0xc] = -(pcVar2[0xc] == UNK_142e3458c);
        auVar71[0xd] = -(pcVar2[0xd] == UNK_142e3458d);
        auVar71[0xe] = -(pcVar2[0xe] == UNK_142e3458e);
        auVar71[0xf] = -(pcVar2[0xf] == UNK_142e3458f);
        if ((ushort)((ushort)(SUB161(auVar71 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar71 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar71 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar71 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar71 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar71 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar71 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar71 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar71 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar71 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar71 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar71 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar71 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar71 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar71[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f3ea2;
          goto LAB_1406f3eb8;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f3ea2:
  pdb_141098240(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f3eb8:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0x375bcde68c26ec2c;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar72[0] = -(*pcVar1 == DAT_142e33c30);
      auVar72[1] = -(pcVar1[1] == DAT_142e33c30._1_1_);
      auVar72[2] = -(pcVar1[2] == DAT_142e33c30._2_1_);
      auVar72[3] = -(pcVar1[3] == DAT_142e33c30._3_1_);
      auVar72[4] = -(pcVar1[4] == DAT_142e33c30._4_1_);
      auVar72[5] = -(pcVar1[5] == DAT_142e33c30._5_1_);
      auVar72[6] = -(pcVar1[6] == DAT_142e33c30._6_1_);
      auVar72[7] = -(pcVar1[7] == DAT_142e33c30._7_1_);
      auVar72[8] = -(pcVar1[8] == DAT_142e33c30._8_1_);
      auVar72[9] = -(pcVar1[9] == DAT_142e33c30._9_1_);
      auVar72[10] = -(pcVar1[10] == DAT_142e33c30._10_1_);
      auVar72[0xb] = -(pcVar1[0xb] == DAT_142e33c30._11_1_);
      auVar72[0xc] = -(pcVar1[0xc] == DAT_142e33c30._12_1_);
      auVar72[0xd] = -(pcVar1[0xd] == DAT_142e33c30._13_1_);
      auVar72[0xe] = -(pcVar1[0xe] == DAT_142e33c30._14_1_);
      auVar72[0xf] = -(pcVar1[0xf] == DAT_142e33c30._15_1_);
      uVar12 = (ushort)(SUB161(auVar72 >> 7,0) & 1) | (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe | (ushort)(auVar72[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar73[0] = -(*pcVar2 == DAT_142e34a00);
        auVar73[1] = -(pcVar2[1] == UNK_142e34a01);
        auVar73[2] = -(pcVar2[2] == UNK_142e34a02);
        auVar73[3] = -(pcVar2[3] == UNK_142e34a03);
        auVar73[4] = -(pcVar2[4] == UNK_142e34a04);
        auVar73[5] = -(pcVar2[5] == UNK_142e34a05);
        auVar73[6] = -(pcVar2[6] == UNK_142e34a06);
        auVar73[7] = -(pcVar2[7] == UNK_142e34a07);
        auVar73[8] = -(pcVar2[8] == UNK_142e34a08);
        auVar73[9] = -(pcVar2[9] == UNK_142e34a09);
        auVar73[10] = -(pcVar2[10] == UNK_142e34a0a);
        auVar73[0xb] = -(pcVar2[0xb] == UNK_142e34a0b);
        auVar73[0xc] = -(pcVar2[0xc] == UNK_142e34a0c);
        auVar73[0xd] = -(pcVar2[0xd] == UNK_142e34a0d);
        auVar73[0xe] = -(pcVar2[0xe] == UNK_142e34a0e);
        auVar73[0xf] = -(pcVar2[0xf] == UNK_142e34a0f);
        if ((ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar73[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f3f92;
          goto LAB_1406f3fa8;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f3f92:
  pdb_14109be40(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f3fa8:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0xc5fb346bca6a1759;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar74[0] = -(*pcVar1 == DAT_142e34310);
      auVar74[1] = -(pcVar1[1] == DAT_142e34310._1_1_);
      auVar74[2] = -(pcVar1[2] == DAT_142e34310._2_1_);
      auVar74[3] = -(pcVar1[3] == DAT_142e34310._3_1_);
      auVar74[4] = -(pcVar1[4] == DAT_142e34310._4_1_);
      auVar74[5] = -(pcVar1[5] == DAT_142e34310._5_1_);
      auVar74[6] = -(pcVar1[6] == DAT_142e34310._6_1_);
      auVar74[7] = -(pcVar1[7] == DAT_142e34310._7_1_);
      auVar74[8] = -(pcVar1[8] == DAT_142e34310._8_1_);
      auVar74[9] = -(pcVar1[9] == DAT_142e34310._9_1_);
      auVar74[10] = -(pcVar1[10] == DAT_142e34310._10_1_);
      auVar74[0xb] = -(pcVar1[0xb] == DAT_142e34310._11_1_);
      auVar74[0xc] = -(pcVar1[0xc] == DAT_142e34310._12_1_);
      auVar74[0xd] = -(pcVar1[0xd] == DAT_142e34310._13_1_);
      auVar74[0xe] = -(pcVar1[0xe] == DAT_142e34310._14_1_);
      auVar74[0xf] = -(pcVar1[0xf] == DAT_142e34310._15_1_);
      uVar12 = (ushort)(SUB161(auVar74 >> 7,0) & 1) | (ushort)(SUB161(auVar74 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar74 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar74 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar74 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar74 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar74 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar74 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar74 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar74 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar74 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar74 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar74 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar74 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar74 >> 0x77,0) & 1) << 0xe | (ushort)(auVar74[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar75[0] = -(*pcVar2 == DAT_142e35000);
        auVar75[1] = -(pcVar2[1] == UNK_142e35001);
        auVar75[2] = -(pcVar2[2] == UNK_142e35002);
        auVar75[3] = -(pcVar2[3] == UNK_142e35003);
        auVar75[4] = -(pcVar2[4] == UNK_142e35004);
        auVar75[5] = -(pcVar2[5] == UNK_142e35005);
        auVar75[6] = -(pcVar2[6] == UNK_142e35006);
        auVar75[7] = -(pcVar2[7] == UNK_142e35007);
        auVar75[8] = -(pcVar2[8] == UNK_142e35008);
        auVar75[9] = -(pcVar2[9] == UNK_142e35009);
        auVar75[10] = -(pcVar2[10] == UNK_142e3500a);
        auVar75[0xb] = -(pcVar2[0xb] == UNK_142e3500b);
        auVar75[0xc] = -(pcVar2[0xc] == UNK_142e3500c);
        auVar75[0xd] = -(pcVar2[0xd] == UNK_142e3500d);
        auVar75[0xe] = -(pcVar2[0xe] == UNK_142e3500e);
        auVar75[0xf] = -(pcVar2[0xf] == UNK_142e3500f);
        if ((ushort)((ushort)(SUB161(auVar75 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar75 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar75 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar75 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar75 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar75 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar75 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar75 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar75 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar75 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar75 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar75 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar75 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar75 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar75 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar75[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f4082;
          goto LAB_1406f4098;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f4082:
  pdb_14109b840(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f4098:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0xf4bf0eeee64bc5a3;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar76[0] = -(*pcVar1 == DAT_142e33fb0);
      auVar76[1] = -(pcVar1[1] == DAT_142e33fb0._1_1_);
      auVar76[2] = -(pcVar1[2] == DAT_142e33fb0._2_1_);
      auVar76[3] = -(pcVar1[3] == DAT_142e33fb0._3_1_);
      auVar76[4] = -(pcVar1[4] == DAT_142e33fb0._4_1_);
      auVar76[5] = -(pcVar1[5] == DAT_142e33fb0._5_1_);
      auVar76[6] = -(pcVar1[6] == DAT_142e33fb0._6_1_);
      auVar76[7] = -(pcVar1[7] == DAT_142e33fb0._7_1_);
      auVar76[8] = -(pcVar1[8] == DAT_142e33fb0._8_1_);
      auVar76[9] = -(pcVar1[9] == DAT_142e33fb0._9_1_);
      auVar76[10] = -(pcVar1[10] == DAT_142e33fb0._10_1_);
      auVar76[0xb] = -(pcVar1[0xb] == DAT_142e33fb0._11_1_);
      auVar76[0xc] = -(pcVar1[0xc] == DAT_142e33fb0._12_1_);
      auVar76[0xd] = -(pcVar1[0xd] == DAT_142e33fb0._13_1_);
      auVar76[0xe] = -(pcVar1[0xe] == DAT_142e33fb0._14_1_);
      auVar76[0xf] = -(pcVar1[0xf] == DAT_142e33fb0._15_1_);
      uVar12 = (ushort)(SUB161(auVar76 >> 7,0) & 1) | (ushort)(SUB161(auVar76 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar76 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar76 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar76 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar76 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar76 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar76 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar76 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar76 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar76 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar76 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar76 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar76 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar76 >> 0x77,0) & 1) << 0xe | (ushort)(auVar76[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar77[0] = -(*pcVar2 == DAT_142e34e80);
        auVar77[1] = -(pcVar2[1] == UNK_142e34e81);
        auVar77[2] = -(pcVar2[2] == UNK_142e34e82);
        auVar77[3] = -(pcVar2[3] == UNK_142e34e83);
        auVar77[4] = -(pcVar2[4] == UNK_142e34e84);
        auVar77[5] = -(pcVar2[5] == UNK_142e34e85);
        auVar77[6] = -(pcVar2[6] == UNK_142e34e86);
        auVar77[7] = -(pcVar2[7] == UNK_142e34e87);
        auVar77[8] = -(pcVar2[8] == UNK_142e34e88);
        auVar77[9] = -(pcVar2[9] == UNK_142e34e89);
        auVar77[10] = -(pcVar2[10] == UNK_142e34e8a);
        auVar77[0xb] = -(pcVar2[0xb] == UNK_142e34e8b);
        auVar77[0xc] = -(pcVar2[0xc] == UNK_142e34e8c);
        auVar77[0xd] = -(pcVar2[0xd] == UNK_142e34e8d);
        auVar77[0xe] = -(pcVar2[0xe] == UNK_142e34e8e);
        auVar77[0xf] = -(pcVar2[0xf] == UNK_142e34e8f);
        if ((ushort)((ushort)(SUB161(auVar77 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar77 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar77 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar77 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar77 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar77 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar77 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar77 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar77 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar77 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar77 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar77 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar77 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar77 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar77 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar77[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f4172;
          goto LAB_1406f4188;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar34[0] = -(*pcVar1 == -1);
      auVar34[1] = -(pcVar1[1] == -1);
      auVar34[2] = -(pcVar1[2] == -1);
      auVar34[3] = -(pcVar1[3] == -1);
      auVar34[4] = -(pcVar1[4] == -1);
      auVar34[5] = -(pcVar1[5] == -1);
      auVar34[6] = -(pcVar1[6] == -1);
      auVar34[7] = -(pcVar1[7] == -1);
      auVar34[8] = -(pcVar1[8] == -1);
      auVar34[9] = -(pcVar1[9] == -1);
      auVar34[10] = -(pcVar1[10] == -1);
      auVar34[0xb] = -(pcVar1[0xb] == -1);
      auVar34[0xc] = -(pcVar1[0xc] == -1);
      auVar34[0xd] = -(pcVar1[0xd] == -1);
      auVar34[0xe] = -(pcVar1[0xe] == -1);
      auVar34[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar34 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar34 >> 0x3f,0) & 1) != 0) || (SUB161(auVar34 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar34 >> 0x4f,0) & 1) != 0) || (SUB161(auVar34 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar34 >> 0x5f,0) & 1) != 0) || (SUB161(auVar34 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar34 >> 0x6f,0) & 1) != 0) || (SUB161(auVar34 >> 0x77,0) & 1) != 0) ||
          auVar34[0xf] < '\0') break;
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f4172:
  pdb_141098840(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406f4188:
    lVar3 = *(longlong *)(lVar6 + 0x70);
    uVar9 = 0x332eee18fb77e5bf;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar78[0] = -(*pcVar1 == DAT_142e42340);
      auVar78[1] = -(pcVar1[1] == DAT_142e42340._1_1_);
      auVar78[2] = -(pcVar1[2] == DAT_142e42340._2_1_);
      auVar78[3] = -(pcVar1[3] == DAT_142e42340._3_1_);
      auVar78[4] = -(pcVar1[4] == DAT_142e42340._4_1_);
      auVar78[5] = -(pcVar1[5] == DAT_142e42340._5_1_);
      auVar78[6] = -(pcVar1[6] == DAT_142e42340._6_1_);
      auVar78[7] = -(pcVar1[7] == DAT_142e42340._7_1_);
      auVar78[8] = -(pcVar1[8] == DAT_142e42340._8_1_);
      auVar78[9] = -(pcVar1[9] == DAT_142e42340._9_1_);
      auVar78[10] = -(pcVar1[10] == DAT_142e42340._10_1_);
      auVar78[0xb] = -(pcVar1[0xb] == DAT_142e42340._11_1_);
      auVar78[0xc] = -(pcVar1[0xc] == DAT_142e42340._12_1_);
      auVar78[0xd] = -(pcVar1[0xd] == DAT_142e42340._13_1_);
      auVar78[0xe] = -(pcVar1[0xe] == DAT_142e42340._14_1_);
      auVar78[0xf] = -(pcVar1[0xf] == DAT_142e42340._15_1_);
      uVar12 = (ushort)(SUB161(auVar78 >> 7,0) & 1) | (ushort)(SUB161(auVar78 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar78 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar78 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar78 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar78 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar78 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar78 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar78 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar78 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar78 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar78 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar78 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar78 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar78 >> 0x77,0) & 1) << 0xe | (ushort)(auVar78[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar79[0] = -(*pcVar2 == DAT_142f9ff90);
        auVar79[1] = -(pcVar2[1] == UNK_142f9ff91);
        auVar79[2] = -(pcVar2[2] == UNK_142f9ff92);
        auVar79[3] = -(pcVar2[3] == UNK_142f9ff93);
        auVar79[4] = -(pcVar2[4] == UNK_142f9ff94);
        auVar79[5] = -(pcVar2[5] == UNK_142f9ff95);
        auVar79[6] = -(pcVar2[6] == UNK_142f9ff96);
        auVar79[7] = -(pcVar2[7] == UNK_142f9ff97);
        auVar79[8] = -(pcVar2[8] == UNK_142f9ff98);
        auVar79[9] = -(pcVar2[9] == UNK_142f9ff99);
        auVar79[10] = -(pcVar2[10] == UNK_142f9ff9a);
        auVar79[0xb] = -(pcVar2[0xb] == UNK_142f9ff9b);
        auVar79[0xc] = -(pcVar2[0xc] == UNK_142f9ff9c);
        auVar79[0xd] = -(pcVar2[0xd] == UNK_142f9ff9d);
        auVar79[0xe] = -(pcVar2[0xe] == UNK_142f9ff9e);
        auVar79[0xf] = -(pcVar2[0xf] == UNK_142f9ff9f);
        if ((ushort)((ushort)(SUB161(auVar79 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar79 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar79 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar79 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar79 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar79 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar79 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar79 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar79 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar79 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar79 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar79 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar79 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar79 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar79 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar79[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((uVar9 < *(ulonglong *)(lVar6 + 0x210)) &&
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar9 * 8), uVar9 != 0)) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar9 * 0x40) != 0)) {
            return lVar6;
          }
          goto LAB_1406f4262;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar35[0] = -(*pcVar1 == -1);
      auVar35[1] = -(pcVar1[1] == -1);
      auVar35[2] = -(pcVar1[2] == -1);
      auVar35[3] = -(pcVar1[3] == -1);
      auVar35[4] = -(pcVar1[4] == -1);
      auVar35[5] = -(pcVar1[5] == -1);
      auVar35[6] = -(pcVar1[6] == -1);
      auVar35[7] = -(pcVar1[7] == -1);
      auVar35[8] = -(pcVar1[8] == -1);
      auVar35[9] = -(pcVar1[9] == -1);
      auVar35[10] = -(pcVar1[10] == -1);
      auVar35[0xb] = -(pcVar1[0xb] == -1);
      auVar35[0xc] = -(pcVar1[0xc] == -1);
      auVar35[0xd] = -(pcVar1[0xd] == -1);
      auVar35[0xe] = -(pcVar1[0xe] == -1);
      auVar35[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar35 >> 0x3f,0) & 1) != 0) || (SUB161(auVar35 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar35 >> 0x4f,0) & 1) != 0) || (SUB161(auVar35 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || (SUB161(auVar35 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar35 >> 0x6f,0) & 1) != 0) || (SUB161(auVar35 >> 0x77,0) & 1) != 0) ||
          auVar35[0xf] < '\0') break;
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406f4262:
  pdb_14109c440(lVar6);
  return lVar6;
}

