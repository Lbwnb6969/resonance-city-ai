// VA 0x140a39b60, PDB extent 1626 bytes
// country_core::systems::main_camera::impl$3::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/main_camera.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::main_camera::impl$3::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/main_camera.rs
   Extent: 1626 */

void pdb_140a39b60(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  longlong lVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  ulonglong uStack_3a0;
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
  undefined1 *puStack_348;
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
  undefined1 auStack_2d8 [8];
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
  undefined1 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  ulonglong uStack_250;
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
  undefined1 auStack_1f8 [224];
  undefined1 *puStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  ulonglong uStack_100;
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
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_141b74900(&puStack_268,9,&UNK_14303b450);
  pdb_1417e3f00(&puStack_118,&puStack_268);
  puVar9 = &uStack_29;
  uVar6 = pdb_140950ee0(_DAT_143ca8dd0,&uStack_29,&UNK_14336c878);
  pdb_140676ae0(&puStack_118,uVar6,puVar9);
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
  puStack_268 = puStack_118;
  uStack_260 = pcStack_110;
  pdb_140c95fe0(param_2,&puStack_268);
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x40,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x40);
  }
  pbVar7[0] = 0;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pbVar7[4] = 0;
  pbVar7[5] = 0;
  pbVar7[6] = 0;
  pbVar7[7] = 0;
  pbVar7[0x38] = 0;
  pbVar7[0x39] = 0;
  pbVar7[0x3a] = 0;
  pbVar7[0x3b] = 0;
  pbVar7[0x3c] = 0;
  pdb_140ed3cd0(&puStack_268,pbVar7,&UNK_143398798);
  pdb_1417e2600(&puStack_348,&puStack_268);
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x1f0,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x1f0);
  }
  pbVar7[0] = 0;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pbVar7[4] = 0;
  pbVar7[0x100] = 0;
  pbVar7[0x101] = 0;
  pbVar7[0x102] = 0;
  pbVar7[0x103] = 0;
  pbVar7[0x104] = 0;
  pbVar7[0x105] = 0;
  pbVar7[0x106] = 0;
  pbVar7[0x107] = 0x80;
  pdb_140ed3cd0(&puStack_268,pbVar7,&UNK_1433986f0);
  pdb_1417e2600(&puStack_3b8,&puStack_268);
  pcStack_110 = pdb_140f33ec0;
  puStack_118 = &uStack_29;
  pdb_140f60760(&puStack_268,&UNK_1430693c7,&puStack_118);
  pdb_14049e030(&puStack_268);
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x28,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x28);
  }
  pbVar7[0] = 0;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pbVar7[4] = 0;
  pbVar7[5] = 0;
  pbVar7[6] = 0;
  pbVar7[7] = 0;
  pbVar7[0x20] = 0;
  pbVar7[0x21] = 0;
  pbVar7[0x22] = 0;
  pbVar7[0x23] = 0;
  pbVar7[0x24] = 0;
  pdb_140ed3cd0(&puStack_268,pbVar7,&UNK_143398990);
  puStack_118 = (undefined1 *)0x0;
  uStack_f8 = (ulonglong)uStack_f8._5_3_ << 0x28;
  pdb_1417e44a0(auStack_2d8,&puStack_268,&puStack_118);
  puStack_118 = puStack_3b8;
  pcStack_110 = (code *)uStack_3b0;
  uStack_108 = uStack_3a8;
  uStack_100 = uStack_3a0;
  uStack_f8 = uStack_398;
  uStack_f0 = uStack_390;
  uStack_e8 = uStack_388;
  uStack_e0 = uStack_380;
  uStack_d8 = uStack_378;
  uStack_d0 = uStack_370;
  uStack_c8 = uStack_368;
  uStack_c0 = uStack_360;
  uStack_b8 = uStack_358;
  uStack_b0 = uStack_350;
  uStack_a0 = uStack_2d0;
  uStack_98 = uStack_2c8;
  uStack_90 = uStack_2c0;
  uStack_88 = uStack_2b8;
  uStack_80 = uStack_2b0;
  uStack_78 = uStack_2a8;
  uStack_70 = uStack_2a0;
  uStack_68 = uStack_298;
  uStack_60 = uStack_290;
  uStack_58 = uStack_288;
  uStack_50 = uStack_280;
  uStack_48 = uStack_278;
  uStack_40 = uStack_270;
  uStack_208 = uStack_2e8;
  uStack_200 = uStack_2e0;
  uStack_218 = uStack_2f8;
  uStack_210 = uStack_2f0;
  uStack_228 = uStack_308;
  uStack_220 = uStack_300;
  uStack_238 = uStack_318;
  uStack_230 = uStack_310;
  uStack_248 = uStack_328;
  uStack_240 = uStack_320;
  uStack_258 = uStack_338;
  uStack_250 = uStack_330;
  puStack_268 = puStack_348;
  uStack_260 = uStack_340;
  pub_142e32760(auStack_1f8,&puStack_118,0xe0);
  pdb_1417e8b80(&puStack_118,&puStack_268);
  auStack_2d8[0] = 9;
  puVar9 = auStack_2d8;
  uVar6 = pdb_140950ee0(_DAT_143ca8dd0,puVar9,&UNK_14305af38);
  pdb_140676be0(&puStack_118,uVar6,puVar9);
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
  puStack_268 = puStack_118;
  uStack_260 = pcStack_110;
  pdb_140c95fe0(param_2,&puStack_268);
  puStack_268 = (undefined1 *)0x0;
  uStack_260 = 4;
  uStack_258 = 0;
  uStack_248 = 0;
  uStack_250 = uStack_250 & 0xffffffff00000000;
  lVar8 = pdb_141902350(param_2,&puStack_268);
  if (*(longlong *)(lVar8 + 0x88) != 0) {
    lVar3 = *(longlong *)(lVar8 + 0x70);
    uVar10 = 0x36a20762f49ffdd3;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar8 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar10);
      auVar16[0] = -(*pcVar1 == DAT_142e33c30);
      auVar16[1] = -(pcVar1[1] == DAT_142e33c30._1_1_);
      auVar16[2] = -(pcVar1[2] == DAT_142e33c30._2_1_);
      auVar16[3] = -(pcVar1[3] == DAT_142e33c30._3_1_);
      auVar16[4] = -(pcVar1[4] == DAT_142e33c30._4_1_);
      auVar16[5] = -(pcVar1[5] == DAT_142e33c30._5_1_);
      auVar16[6] = -(pcVar1[6] == DAT_142e33c30._6_1_);
      auVar16[7] = -(pcVar1[7] == DAT_142e33c30._7_1_);
      auVar16[8] = -(pcVar1[8] == DAT_142e33c30._8_1_);
      auVar16[9] = -(pcVar1[9] == DAT_142e33c30._9_1_);
      auVar16[10] = -(pcVar1[10] == DAT_142e33c30._10_1_);
      auVar16[0xb] = -(pcVar1[0xb] == DAT_142e33c30._11_1_);
      auVar16[0xc] = -(pcVar1[0xc] == DAT_142e33c30._12_1_);
      auVar16[0xd] = -(pcVar1[0xd] == DAT_142e33c30._13_1_);
      auVar16[0xe] = -(pcVar1[0xe] == DAT_142e33c30._14_1_);
      auVar16[0xf] = -(pcVar1[0xf] == DAT_142e33c30._15_1_);
      uVar13 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar10 & *(ulonglong *)(lVar8 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar14 * -0x18);
        auVar17[0] = -(*pcVar2 == DAT_142e34060);
        auVar17[1] = -(pcVar2[1] == UNK_142e34061);
        auVar17[2] = -(pcVar2[2] == UNK_142e34062);
        auVar17[3] = -(pcVar2[3] == UNK_142e34063);
        auVar17[4] = -(pcVar2[4] == UNK_142e34064);
        auVar17[5] = -(pcVar2[5] == UNK_142e34065);
        auVar17[6] = -(pcVar2[6] == UNK_142e34066);
        auVar17[7] = -(pcVar2[7] == UNK_142e34067);
        auVar17[8] = -(pcVar2[8] == UNK_142e34068);
        auVar17[9] = -(pcVar2[9] == UNK_142e34069);
        auVar17[10] = -(pcVar2[10] == UNK_142e3406a);
        auVar17[0xb] = -(pcVar2[0xb] == UNK_142e3406b);
        auVar17[0xc] = -(pcVar2[0xc] == UNK_142e3406c);
        auVar17[0xd] = -(pcVar2[0xd] == UNK_142e3406d);
        auVar17[0xe] = -(pcVar2[0xe] == UNK_142e3406e);
        auVar17[0xf] = -(pcVar2[0xf] == UNK_142e3406f);
        if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar17[0xf] >> 7) << 0xf) == 0xffff) {
          uVar10 = *(ulonglong *)(lVar3 + uVar14 * -0x18 + -8);
          if (((uVar10 < *(ulonglong *)(lVar8 + 0x210)) &&
              (uVar10 = *(ulonglong *)(*(longlong *)(lVar8 + 0x208) + uVar10 * 8), uVar10 != 0)) &&
             (*(longlong *)(*(longlong *)(lVar8 + 0x1d8) + 0x20 + ~uVar10 * 0x40) != 0)) {
            return;
          }
          goto LAB_140a3a0b2;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
      uVar10 = uVar10 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_140a3a0b2:
  pdb_1418d2400(lVar8);
  return;
}

