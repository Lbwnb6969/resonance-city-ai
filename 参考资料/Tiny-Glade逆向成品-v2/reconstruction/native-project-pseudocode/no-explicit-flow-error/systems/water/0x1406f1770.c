// VA 0x1406f1770, PDB extent 1370 bytes
// system_water::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/water/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_water::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/water/src/lib.rs
   Extent: 1370 */

void pdb_1406f1770(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  longlong lVar8;
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
  undefined1 auStack_108 [8];
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_141073b00(auStack_108,0x10,&UNK_142f9fe10);
  pdb_1410743f0(&uStack_98,0x22,&UNK_142f9fe28);
  uStack_348 = uStack_a8;
  uStack_340 = uStack_a0;
  uStack_358 = uStack_b8;
  uStack_350 = uStack_b0;
  uStack_368 = uStack_c8;
  uStack_360 = uStack_c0;
  uStack_378 = uStack_d8;
  uStack_370 = uStack_d0;
  uStack_388 = uStack_e8;
  uStack_380 = uStack_e0;
  uStack_398 = uStack_f8;
  uStack_390 = uStack_f0;
  uStack_3a0 = uStack_100;
  uStack_338 = uStack_98;
  uStack_330 = uStack_90;
  uStack_328 = uStack_88;
  uStack_320 = uStack_80;
  uStack_318 = uStack_78;
  uStack_310 = uStack_70;
  uStack_308 = uStack_68;
  uStack_300 = uStack_60;
  uStack_2f8 = uStack_58;
  uStack_2f0 = uStack_50;
  uStack_2e8 = uStack_48;
  uStack_2e0 = uStack_40;
  uStack_2d8 = uStack_38;
  uStack_2d0 = uStack_30;
  pdb_141074510(param_2,&uStack_3a8);
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x48,8);
  if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x48);
  }
  pbVar6[0] = 0;
  pbVar6[1] = 0;
  pbVar6[2] = 0;
  pbVar6[3] = 0;
  pbVar6[4] = 0;
  pbVar6[5] = 0;
  pbVar6[6] = 0;
  pbVar6[7] = 0;
  pbVar6[0x40] = 0;
  pbVar6[0x41] = 0;
  pbVar6[0x42] = 0;
  pbVar6[0x43] = 0;
  pbVar6[0x44] = 0;
  pdb_140ed3cd0(&uStack_3a8,pbVar6,&UNK_14327d378);
  pdb_141075580(&uStack_98,&uStack_3a8);
  auStack_108[0] = 0x24;
  uVar7 = pdb_1410757b0(_DAT_143ca8dd0,auStack_108,&UNK_14327da08);
  pdb_140676be0(&uStack_98,uVar7);
  uStack_348 = uStack_38;
  uStack_340 = uStack_30;
  uStack_358 = uStack_48;
  uStack_350 = uStack_40;
  uStack_368 = uStack_58;
  uStack_360 = uStack_50;
  uStack_378 = uStack_68;
  uStack_370 = uStack_60;
  uStack_388 = uStack_78;
  uStack_380 = uStack_70;
  uStack_398 = uStack_88;
  uStack_390 = uStack_80;
  uStack_3a8 = uStack_98;
  uStack_3a0 = uStack_90;
  pdb_1410746f0(param_2,&uStack_3a8);
  pdb_140c44b70(&uStack_98);
  pdb_140905850(&uStack_3a8,&uStack_98);
  lVar8 = pdb_1410761f0(param_2,&uStack_3a8);
  if (*(longlong *)(lVar8 + 0x88) != 0) {
    lVar3 = *(longlong *)(lVar8 + 0x70);
    uVar9 = 0xce334b297eb3bc4b;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar8 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar17[0] = -(*pcVar1 == DAT_142e34440);
      auVar17[1] = -(pcVar1[1] == DAT_142e34440._1_1_);
      auVar17[2] = -(pcVar1[2] == DAT_142e34440._2_1_);
      auVar17[3] = -(pcVar1[3] == DAT_142e34440._3_1_);
      auVar17[4] = -(pcVar1[4] == DAT_142e34440._4_1_);
      auVar17[5] = -(pcVar1[5] == DAT_142e34440._5_1_);
      auVar17[6] = -(pcVar1[6] == DAT_142e34440._6_1_);
      auVar17[7] = -(pcVar1[7] == DAT_142e34440._7_1_);
      auVar17[8] = -(pcVar1[8] == DAT_142e34440._8_1_);
      auVar17[9] = -(pcVar1[9] == DAT_142e34440._9_1_);
      auVar17[10] = -(pcVar1[10] == DAT_142e34440._10_1_);
      auVar17[0xb] = -(pcVar1[0xb] == DAT_142e34440._11_1_);
      auVar17[0xc] = -(pcVar1[0xc] == DAT_142e34440._12_1_);
      auVar17[0xd] = -(pcVar1[0xd] == DAT_142e34440._13_1_);
      auVar17[0xe] = -(pcVar1[0xe] == DAT_142e34440._14_1_);
      auVar17[0xf] = -(pcVar1[0xf] == DAT_142e34440._15_1_);
      uVar12 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar8 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar18[0] = -(*pcVar2 == DAT_142f9fdc0);
        auVar18[1] = -(pcVar2[1] == UNK_142f9fdc1);
        auVar18[2] = -(pcVar2[2] == UNK_142f9fdc2);
        auVar18[3] = -(pcVar2[3] == UNK_142f9fdc3);
        auVar18[4] = -(pcVar2[4] == UNK_142f9fdc4);
        auVar18[5] = -(pcVar2[5] == UNK_142f9fdc5);
        auVar18[6] = -(pcVar2[6] == UNK_142f9fdc6);
        auVar18[7] = -(pcVar2[7] == UNK_142f9fdc7);
        auVar18[8] = -(pcVar2[8] == UNK_142f9fdc8);
        auVar18[9] = -(pcVar2[9] == UNK_142f9fdc9);
        auVar18[10] = -(pcVar2[10] == UNK_142f9fdca);
        auVar18[0xb] = -(pcVar2[0xb] == UNK_142f9fdcb);
        auVar18[0xc] = -(pcVar2[0xc] == UNK_142f9fdcc);
        auVar18[0xd] = -(pcVar2[0xd] == UNK_142f9fdcd);
        auVar18[0xe] = -(pcVar2[0xe] == UNK_142f9fdce);
        auVar18[0xf] = -(pcVar2[0xf] == UNK_142f9fdcf);
        if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar18[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar8 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar8 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f1a62;
          goto LAB_1406f1a78;
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
LAB_1406f1a62:
  pdb_141076c50(lVar8);
  if (*(longlong *)(lVar8 + 0x88) != 0) {
LAB_1406f1a78:
    lVar3 = *(longlong *)(lVar8 + 0x70);
    uVar9 = 0xdf95f152cf19870e;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar8 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar19[0] = -(*pcVar1 == DAT_142e34c80);
      auVar19[1] = -(pcVar1[1] == DAT_142e34c80._1_1_);
      auVar19[2] = -(pcVar1[2] == DAT_142e34c80._2_1_);
      auVar19[3] = -(pcVar1[3] == DAT_142e34c80._3_1_);
      auVar19[4] = -(pcVar1[4] == DAT_142e34c80._4_1_);
      auVar19[5] = -(pcVar1[5] == DAT_142e34c80._5_1_);
      auVar19[6] = -(pcVar1[6] == DAT_142e34c80._6_1_);
      auVar19[7] = -(pcVar1[7] == DAT_142e34c80._7_1_);
      auVar19[8] = -(pcVar1[8] == DAT_142e34c80._8_1_);
      auVar19[9] = -(pcVar1[9] == DAT_142e34c80._9_1_);
      auVar19[10] = -(pcVar1[10] == DAT_142e34c80._10_1_);
      auVar19[0xb] = -(pcVar1[0xb] == DAT_142e34c80._11_1_);
      auVar19[0xc] = -(pcVar1[0xc] == DAT_142e34c80._12_1_);
      auVar19[0xd] = -(pcVar1[0xd] == DAT_142e34c80._13_1_);
      auVar19[0xe] = -(pcVar1[0xe] == DAT_142e34c80._14_1_);
      auVar19[0xf] = -(pcVar1[0xf] == DAT_142e34c80._15_1_);
      uVar12 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar8 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar20[0] = -(*pcVar2 == DAT_142f9fdd0);
        auVar20[1] = -(pcVar2[1] == UNK_142f9fdd1);
        auVar20[2] = -(pcVar2[2] == UNK_142f9fdd2);
        auVar20[3] = -(pcVar2[3] == UNK_142f9fdd3);
        auVar20[4] = -(pcVar2[4] == UNK_142f9fdd4);
        auVar20[5] = -(pcVar2[5] == UNK_142f9fdd5);
        auVar20[6] = -(pcVar2[6] == UNK_142f9fdd6);
        auVar20[7] = -(pcVar2[7] == UNK_142f9fdd7);
        auVar20[8] = -(pcVar2[8] == UNK_142f9fdd8);
        auVar20[9] = -(pcVar2[9] == UNK_142f9fdd9);
        auVar20[10] = -(pcVar2[10] == UNK_142f9fdda);
        auVar20[0xb] = -(pcVar2[0xb] == UNK_142f9fddb);
        auVar20[0xc] = -(pcVar2[0xc] == UNK_142f9fddc);
        auVar20[0xd] = -(pcVar2[0xd] == UNK_142f9fddd);
        auVar20[0xe] = -(pcVar2[0xe] == UNK_142f9fdde);
        auVar20[0xf] = -(pcVar2[0xf] == UNK_142f9fddf);
        if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar20[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar8 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar8 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_1406f1b52;
          goto LAB_1406f1b68;
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
LAB_1406f1b52:
  pdb_1410771a0(lVar8);
  if (*(longlong *)(lVar8 + 0x88) != 0) {
LAB_1406f1b68:
    lVar3 = *(longlong *)(lVar8 + 0x70);
    uVar9 = 0x2ad4b7474a0bb1b8;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar8 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar21[0] = -(*pcVar1 == DAT_142e34380);
      auVar21[1] = -(pcVar1[1] == DAT_142e34380._1_1_);
      auVar21[2] = -(pcVar1[2] == DAT_142e34380._2_1_);
      auVar21[3] = -(pcVar1[3] == DAT_142e34380._3_1_);
      auVar21[4] = -(pcVar1[4] == DAT_142e34380._4_1_);
      auVar21[5] = -(pcVar1[5] == DAT_142e34380._5_1_);
      auVar21[6] = -(pcVar1[6] == DAT_142e34380._6_1_);
      auVar21[7] = -(pcVar1[7] == DAT_142e34380._7_1_);
      auVar21[8] = -(pcVar1[8] == DAT_142e34380._8_1_);
      auVar21[9] = -(pcVar1[9] == DAT_142e34380._9_1_);
      auVar21[10] = -(pcVar1[10] == DAT_142e34380._10_1_);
      auVar21[0xb] = -(pcVar1[0xb] == DAT_142e34380._11_1_);
      auVar21[0xc] = -(pcVar1[0xc] == DAT_142e34380._12_1_);
      auVar21[0xd] = -(pcVar1[0xd] == DAT_142e34380._13_1_);
      auVar21[0xe] = -(pcVar1[0xe] == DAT_142e34380._14_1_);
      auVar21[0xf] = -(pcVar1[0xf] == DAT_142e34380._15_1_);
      uVar12 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar8 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar22[0] = -(*pcVar2 == DAT_142f9fde0);
        auVar22[1] = -(pcVar2[1] == UNK_142f9fde1);
        auVar22[2] = -(pcVar2[2] == UNK_142f9fde2);
        auVar22[3] = -(pcVar2[3] == UNK_142f9fde3);
        auVar22[4] = -(pcVar2[4] == UNK_142f9fde4);
        auVar22[5] = -(pcVar2[5] == UNK_142f9fde5);
        auVar22[6] = -(pcVar2[6] == UNK_142f9fde6);
        auVar22[7] = -(pcVar2[7] == UNK_142f9fde7);
        auVar22[8] = -(pcVar2[8] == UNK_142f9fde8);
        auVar22[9] = -(pcVar2[9] == UNK_142f9fde9);
        auVar22[10] = -(pcVar2[10] == UNK_142f9fdea);
        auVar22[0xb] = -(pcVar2[0xb] == UNK_142f9fdeb);
        auVar22[0xc] = -(pcVar2[0xc] == UNK_142f9fdec);
        auVar22[0xd] = -(pcVar2[0xd] == UNK_142f9fded);
        auVar22[0xe] = -(pcVar2[0xe] == UNK_142f9fdee);
        auVar22[0xf] = -(pcVar2[0xf] == UNK_142f9fdef);
        if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar22[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((uVar9 < *(ulonglong *)(lVar8 + 0x210)) &&
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar8 + 0x208) + uVar9 * 8), uVar9 != 0)) &&
             (*(longlong *)(*(longlong *)(lVar8 + 0x1d8) + 0x20 + ~uVar9 * 0x40) != 0)) {
            return;
          }
          goto LAB_1406f1c42;
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
LAB_1406f1c42:
  pdb_141076700(lVar8);
  return;
}

