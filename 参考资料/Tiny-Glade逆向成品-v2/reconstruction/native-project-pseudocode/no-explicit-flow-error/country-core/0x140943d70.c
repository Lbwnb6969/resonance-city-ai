// VA 0x140943d70, PDB extent 1382 bytes
// country_core::systems::history::impl$0::add_history_systems
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::history::impl$0::add_history_systems
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/mod.rs
   Extent: 1382 */

longlong pdb_140943d70(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
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
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_90;
  undefined7 uStack_8f;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_141a55ed0(&uStack_338,0xe,&UNK_1430238e0);
  pdb_141a55840(&uStack_2c8);
  uStack_90 = 0x23;
  puVar8 = &uStack_90;
  uVar6 = pdb_140950ee0(_DAT_143ca8dd0,puVar8,&UNK_14305af38);
  pdb_140676be0(&uStack_2c8,uVar6,puVar8);
  uStack_a8 = uStack_268;
  uStack_a0 = uStack_260;
  uStack_b8 = uStack_278;
  uStack_b0 = uStack_270;
  uStack_c8 = uStack_288;
  uStack_c0 = uStack_280;
  uStack_d8 = uStack_298;
  uStack_d0 = uStack_290;
  uStack_e8 = uStack_2a8;
  uStack_e0 = uStack_2a0;
  uStack_f8 = uStack_2b8;
  uStack_f0 = uStack_2b0;
  uStack_108 = uStack_2c8;
  uStack_100 = uStack_2c0;
  pdb_140bfc240(&uStack_3a8,0x28,&UNK_1430238f8);
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x50,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x50);
  }
  pbVar7[0] = 0;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pbVar7[4] = 0;
  pbVar7[5] = 0;
  pbVar7[6] = 0;
  pbVar7[7] = 0;
  pbVar7[0x48] = 0;
  pbVar7[0x49] = 0;
  pbVar7[0x4a] = 0;
  pbVar7[0x4b] = 0;
  pbVar7[0x4c] = 0;
  pdb_140ed3cd0(&uStack_2c8,pbVar7,&UNK_143049918);
  pdb_1417e3960(&uStack_90,&uStack_2c8);
  uStack_2c8 = CONCAT71(uStack_8f,uStack_90);
  uStack_2c0 = uStack_88;
  uStack_2b8 = uStack_80;
  uStack_2b0 = uStack_78;
  uStack_2a8 = uStack_70;
  uStack_2a0 = uStack_68;
  uStack_298 = uStack_60;
  uStack_290 = uStack_58;
  uStack_288 = uStack_50;
  uStack_280 = uStack_48;
  uStack_278 = uStack_40;
  uStack_270 = uStack_38;
  uStack_268 = uStack_30;
  uStack_260 = uStack_28;
  pdb_141a0aee0(&uStack_90,&uStack_2c8);
  uStack_19 = 0x29;
  uVar6 = pdb_140950ee0(_DAT_143ca8dd0,&uStack_19,&UNK_14305af38);
  pdb_140676be0(&uStack_90,uVar6);
  uStack_118 = uStack_30;
  uStack_110 = uStack_28;
  uStack_128 = uStack_40;
  uStack_120 = uStack_38;
  uStack_138 = uStack_50;
  uStack_130 = uStack_48;
  uStack_178 = CONCAT71(uStack_8f,uStack_90);
  uStack_148 = uStack_60;
  uStack_140 = uStack_58;
  uStack_158 = uStack_70;
  uStack_150 = uStack_68;
  uStack_168 = uStack_80;
  uStack_160 = uStack_78;
  uStack_170 = uStack_88;
  uStack_2c8 = uStack_338;
  uStack_2c0 = uStack_330;
  uStack_2b8 = uStack_328;
  uStack_2b0 = uStack_320;
  uStack_2a8 = uStack_318;
  uStack_2a0 = uStack_310;
  uStack_298 = uStack_308;
  uStack_290 = uStack_300;
  uStack_288 = uStack_2f8;
  uStack_280 = uStack_2f0;
  uStack_278 = uStack_2e8;
  uStack_270 = uStack_2e0;
  uStack_268 = uStack_2d8;
  uStack_260 = uStack_2d0;
  uStack_1f8 = uStack_a8;
  uStack_1f0 = uStack_a0;
  uStack_208 = uStack_b8;
  uStack_200 = uStack_b0;
  uStack_218 = uStack_c8;
  uStack_210 = uStack_c0;
  uStack_228 = uStack_d8;
  uStack_220 = uStack_d0;
  uStack_238 = uStack_e8;
  uStack_230 = uStack_e0;
  uStack_248 = uStack_f8;
  uStack_240 = uStack_f0;
  uStack_258 = uStack_108;
  uStack_250 = uStack_100;
  uStack_188 = uStack_348;
  uStack_180 = uStack_340;
  uStack_198 = uStack_358;
  uStack_190 = uStack_350;
  uStack_1a8 = uStack_368;
  uStack_1a0 = uStack_360;
  uStack_1b8 = uStack_378;
  uStack_1b0 = uStack_370;
  uStack_1c8 = uStack_388;
  uStack_1c0 = uStack_380;
  uStack_1d8 = uStack_398;
  uStack_1d0 = uStack_390;
  uStack_1e8 = uStack_3a8;
  uStack_1e0 = uStack_3a0;
  pdb_140c978c0(param_1,&uStack_2c8);
  pdb_140c955f0(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar9 = 0xd2da0ce78dd60091;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar15[0] = -(*pcVar1 == DAT_142e34120);
      auVar15[1] = -(pcVar1[1] == DAT_142e34120._1_1_);
      auVar15[2] = -(pcVar1[2] == DAT_142e34120._2_1_);
      auVar15[3] = -(pcVar1[3] == DAT_142e34120._3_1_);
      auVar15[4] = -(pcVar1[4] == DAT_142e34120._4_1_);
      auVar15[5] = -(pcVar1[5] == DAT_142e34120._5_1_);
      auVar15[6] = -(pcVar1[6] == DAT_142e34120._6_1_);
      auVar15[7] = -(pcVar1[7] == DAT_142e34120._7_1_);
      auVar15[8] = -(pcVar1[8] == DAT_142e34120._8_1_);
      auVar15[9] = -(pcVar1[9] == DAT_142e34120._9_1_);
      auVar15[10] = -(pcVar1[10] == DAT_142e34120._10_1_);
      auVar15[0xb] = -(pcVar1[0xb] == DAT_142e34120._11_1_);
      auVar15[0xc] = -(pcVar1[0xc] == DAT_142e34120._12_1_);
      auVar15[0xd] = -(pcVar1[0xd] == DAT_142e34120._13_1_);
      auVar15[0xe] = -(pcVar1[0xe] == DAT_142e34120._14_1_);
      auVar15[0xf] = -(pcVar1[0xf] == DAT_142e34120._15_1_);
      uVar12 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar16[0] = -(*pcVar2 == DAT_142e34ae0);
        auVar16[1] = -(pcVar2[1] == UNK_142e34ae1);
        auVar16[2] = -(pcVar2[2] == UNK_142e34ae2);
        auVar16[3] = -(pcVar2[3] == UNK_142e34ae3);
        auVar16[4] = -(pcVar2[4] == UNK_142e34ae4);
        auVar16[5] = -(pcVar2[5] == UNK_142e34ae5);
        auVar16[6] = -(pcVar2[6] == UNK_142e34ae6);
        auVar16[7] = -(pcVar2[7] == UNK_142e34ae7);
        auVar16[8] = -(pcVar2[8] == UNK_142e34ae8);
        auVar16[9] = -(pcVar2[9] == UNK_142e34ae9);
        auVar16[10] = -(pcVar2[10] == UNK_142e34aea);
        auVar16[0xb] = -(pcVar2[0xb] == UNK_142e34aeb);
        auVar16[0xc] = -(pcVar2[0xc] == UNK_142e34aec);
        auVar16[0xd] = -(pcVar2[0xd] == UNK_142e34aed);
        auVar16[0xe] = -(pcVar2[0xe] == UNK_142e34aee);
        auVar16[0xf] = -(pcVar2[0xf] == UNK_142e34aef);
        if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar16[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((uVar9 < *(ulonglong *)(param_1 + 0x210)) &&
              (uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar9 * 8), uVar9 != 0)) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar9 * 0x40) != 0)) {
            return param_1;
          }
          goto LAB_1409441c2;
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
LAB_1409441c2:
  pdb_1418dddf0(param_1);
  return param_1;
}

