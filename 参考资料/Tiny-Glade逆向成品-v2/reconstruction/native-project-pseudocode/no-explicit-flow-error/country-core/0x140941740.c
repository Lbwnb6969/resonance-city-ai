// VA 0x140941740, PDB extent 4896 bytes
// country_core::systems::save::impl$1::add_save_load_events_and_resources
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::save::impl$1::add_save_load_events_and_resources
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/mod.rs
   Extent: 4896 */

longlong pdb_140941740(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  longlong *plVar11;
  byte *pbVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ushort uVar19;
  ulonglong uVar20;
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
  byte *pbStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  byte *pbStack_368;
  longlong lStack_360;
  byte *pbStack_358;
  ulonglong uStack_350;
  undefined8 uStack_348;
  longlong lStack_340;
  ulonglong uStack_338;
  longlong lStack_330;
  undefined8 uStack_328;
  byte *pbStack_320;
  undefined8 uStack_318;
  longlong lStack_310;
  ulonglong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  byte *pbStack_2e0;
  longlong lStack_2d8;
  byte *pbStack_2d0;
  ulonglong uStack_2c8;
  undefined8 uStack_2c0;
  byte *pbStack_2b8;
  undefined8 uStack_2b0;
  byte *pbStack_2a8;
  undefined8 uStack_2a0;
  byte *pbStack_298;
  undefined8 uStack_290;
  byte *pbStack_288;
  byte *pbStack_280;
  byte *pbStack_278;
  undefined8 uStack_270;
  byte *pbStack_268;
  byte *pbStack_260;
  ulonglong uStack_258;
  undefined8 uStack_250;
  longlong lStack_248;
  ulonglong uStack_240;
  longlong lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  longlong lStack_218;
  ulonglong uStack_210;
  byte *pbStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined2 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  longlong lStack_130;
  byte *pbStack_128;
  ulonglong uStack_120;
  byte *pbStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  byte *pbStack_f8;
  uint uStack_f0;
  undefined8 uStack_ec;
  undefined8 *puStack_70;
  undefined8 uStack_60;
  
  puStack_70 = &uStack_378;
  uStack_60 = 0xfffffffffffffffe;
  uStack_100 = 1;
  pbStack_f8 = (byte *)0x1;
  uStack_f0 = uStack_f0 & 0xffffff00;
  uStack_180 = 0;
  uStack_178 = 0;
  pbStack_280 = (byte *)0x0;
  pbStack_278 = (byte *)0x0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_170 = 8;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 8;
  uStack_150 = 0;
  uStack_148 = 1;
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0x200,0x80);
  if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x80,0x200);
  }
  pub_142e32760(pbVar8,&pbStack_280,0x200);
  uStack_2c0 = 1;
  uStack_2b0 = 1;
  uStack_100 = 1;
  pbStack_f8 = (byte *)0x1;
  uStack_f0 = uStack_f0 & 0xffffff00;
  uStack_180 = 0;
  uStack_178 = 0;
  pbStack_280 = (byte *)0x0;
  pbStack_278 = (byte *)0x0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_170 = 8;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 8;
  uStack_150 = 0;
  uStack_148 = 1;
  pbStack_2b8 = pbVar8;
  pbStack_2a8 = pbVar8;
  pdb_14007ee60();
  pbVar9 = pub_1406abab0(0x200,0x80);
  if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x80,0x200);
  }
  pub_142e32760(pbVar9,&pbStack_280,0x200);
  uStack_2a0 = 1;
  uStack_290 = 1;
  pbStack_298 = pbVar9;
  pbStack_288 = pbVar9;
  pdb_14007ee60();
  pbVar10 = pub_1406abab0(0x30,8);
  if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x30);
  }
  pbVar10[0] = 1;
  pbVar10[1] = 0;
  pbVar10[2] = 0;
  pbVar10[3] = 0;
  pbVar10[4] = 0;
  pbVar10[5] = 0;
  pbVar10[6] = 0;
  pbVar10[7] = 0;
  pbVar10[8] = 1;
  pbVar10[9] = 0;
  pbVar10[10] = 0;
  pbVar10[0xb] = 0;
  pbVar10[0xc] = 0;
  pbVar10[0xd] = 0;
  pbVar10[0xe] = 0;
  pbVar10[0xf] = 0;
  pbVar10[0x10] = 0;
  pbVar10[0x18] = 0;
  pbVar10[0x19] = 0;
  pbVar10[0x1a] = 0;
  pbVar10[0x1b] = 0;
  pbVar10[0x1c] = 0;
  pbVar10[0x1d] = 0;
  pbVar10[0x1e] = 0;
  pbVar10[0x1f] = 0;
  pbVar10[0x20] = 8;
  pbVar10[0x21] = 0;
  pbVar10[0x22] = 0;
  pbVar10[0x23] = 0;
  pbVar10[0x24] = 0;
  pbVar10[0x25] = 0;
  pbVar10[0x26] = 0;
  pbVar10[0x27] = 0;
  pbVar10[0x28] = 0;
  pbVar10[0x29] = 0;
  pbVar10[0x2a] = 0;
  pbVar10[0x2b] = 0;
  pbVar10[0x2c] = 0;
  pbVar10[0x2d] = 0;
  pbVar10[0x2e] = 0;
  pbVar10[0x2f] = 0;
  LOCK();
  lVar14 = *(longlong *)pbVar10;
  *(longlong *)pbVar10 = *(longlong *)pbVar10 + 1;
  UNLOCK();
  pbStack_368 = pbVar10;
  if (*(longlong *)pbVar10 != 0 && SCARRY8(lVar14,1) == *(longlong *)pbVar10 < 0) {
    uStack_270 = 0x8000000000000000;
    pbStack_280 = (byte *)0x0;
    uStack_258 = uStack_258 & 0xffffffffffffff00;
    pbStack_2e0 = pbVar10;
    pdb_14007ee60();
    pbStack_358 = pub_1406abab0(10,1);
    if (pbStack_358 != (byte *)0x0) {
      pbStack_358[0] = 0x41;
      pbStack_358[1] = 0x73;
      pbStack_358[2] = 0x79;
      pbStack_358[3] = 0x6e;
      pbStack_358[4] = 99;
      pbStack_358[5] = 0x20;
      pbStack_358[6] = 0x73;
      pbStack_358[7] = 0x61;
      pbStack_358[8] = 0x76;
      pbStack_358[9] = 0x65;
      lStack_360 = 10;
      uStack_350 = 10;
      pdb_140f3cec0(&lStack_330,&pbStack_280,&lStack_360);
      pbStack_280 = (byte *)0x1;
      uStack_270 = 1;
      uStack_370 = lStack_310;
      pbStack_380 = pbStack_320;
      uStack_378 = uStack_318;
      pbStack_278 = pbVar8;
      pbStack_268 = pbVar9;
      pbStack_260 = pbVar10;
      pdb_1418c52b0(&lStack_360,&pbStack_380,lStack_330,uStack_328,(undefined1)uStack_308,0,
                    &pbStack_280);
      if (lStack_360 == 0) {
        pbStack_280 = pbStack_358;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_1430237a0,0x1a,&pbStack_280,&UNK_143023600,&UNK_1430237c0);
      }
      lStack_2d8 = lStack_360;
      pbStack_2d0 = pbStack_358;
      uStack_2c8 = uStack_350;
      uVar15 = uStack_350;
      if (*(longlong *)(param_1 + 0x88) != 0) {
        lVar14 = *(longlong *)(param_1 + 0x70);
        uVar15 = 0x3ab84e23d25b4944;
        lVar16 = 0;
        while( true ) {
          uVar15 = uVar15 & *(ulonglong *)(param_1 + 0x78);
          pcVar1 = (char *)(lVar14 + uVar15);
          auVar27[0] = -(*pcVar1 == DAT_142e34730);
          auVar27[1] = -(pcVar1[1] == DAT_142e34730._1_1_);
          auVar27[2] = -(pcVar1[2] == DAT_142e34730._2_1_);
          auVar27[3] = -(pcVar1[3] == DAT_142e34730._3_1_);
          auVar27[4] = -(pcVar1[4] == DAT_142e34730._4_1_);
          auVar27[5] = -(pcVar1[5] == DAT_142e34730._5_1_);
          auVar27[6] = -(pcVar1[6] == DAT_142e34730._6_1_);
          auVar27[7] = -(pcVar1[7] == DAT_142e34730._7_1_);
          auVar27[8] = -(pcVar1[8] == DAT_142e34730._8_1_);
          auVar27[9] = -(pcVar1[9] == DAT_142e34730._9_1_);
          auVar27[10] = -(pcVar1[10] == DAT_142e34730._10_1_);
          auVar27[0xb] = -(pcVar1[0xb] == DAT_142e34730._11_1_);
          auVar27[0xc] = -(pcVar1[0xc] == DAT_142e34730._12_1_);
          auVar27[0xd] = -(pcVar1[0xd] == DAT_142e34730._13_1_);
          auVar27[0xe] = -(pcVar1[0xe] == DAT_142e34730._14_1_);
          auVar27[0xf] = -(pcVar1[0xf] == DAT_142e34730._15_1_);
          uVar19 = (ushort)(SUB161(auVar27 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar27[0xf] >> 7) << 0xf;
          uVar18 = (uint)uVar19;
          while (uVar19 != 0) {
            uVar4 = 0;
            for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            uVar20 = uVar4 + uVar15 & *(ulonglong *)(param_1 + 0x78);
            pcVar2 = (char *)(lVar14 + -0x18 + uVar20 * -0x18);
            auVar28[0] = -(*pcVar2 == DAT_142e347a0);
            auVar28[1] = -(pcVar2[1] == UNK_142e347a1);
            auVar28[2] = -(pcVar2[2] == UNK_142e347a2);
            auVar28[3] = -(pcVar2[3] == UNK_142e347a3);
            auVar28[4] = -(pcVar2[4] == UNK_142e347a4);
            auVar28[5] = -(pcVar2[5] == UNK_142e347a5);
            auVar28[6] = -(pcVar2[6] == UNK_142e347a6);
            auVar28[7] = -(pcVar2[7] == UNK_142e347a7);
            auVar28[8] = -(pcVar2[8] == UNK_142e347a8);
            auVar28[9] = -(pcVar2[9] == UNK_142e347a9);
            auVar28[10] = -(pcVar2[10] == UNK_142e347aa);
            auVar28[0xb] = -(pcVar2[0xb] == UNK_142e347ab);
            auVar28[0xc] = -(pcVar2[0xc] == UNK_142e347ac);
            auVar28[0xd] = -(pcVar2[0xd] == UNK_142e347ad);
            auVar28[0xe] = -(pcVar2[0xe] == UNK_142e347ae);
            auVar28[0xf] = -(pcVar2[0xf] == UNK_142e347af);
            if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar28[0xf] >> 7) << 0xf) == 0xffff) {
              uVar20 = *(ulonglong *)(lVar14 + uVar20 * -0x18 + -8);
              if (((*(ulonglong *)(param_1 + 0x210) <= uVar20) ||
                  (uVar20 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar20 * 8), uVar20 == 0
                  )) || (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar20 * 0x40) == 0)
                 ) goto LAB_140941bb2;
              goto LAB_140941bcd;
            }
            uVar19 = (ushort)(uVar18 - 1) & (ushort)uVar18;
            uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar19);
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
          if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar21 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar21 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar21 >> 0x2f,0) & 1) != 0) || (SUB161(auVar21 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') break;
          uVar15 = uVar15 + lVar16 + 0x10;
          lVar16 = lVar16 + 0x10;
        }
      }
LAB_140941bb2:
      pdb_1418d6000(param_1);
      if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_140941bcd:
        lVar14 = *(longlong *)(param_1 + 0x70);
        uVar15 = 0xf33716c1ea4fa941;
        lVar16 = 0;
        while( true ) {
          uVar15 = uVar15 & *(ulonglong *)(param_1 + 0x78);
          pcVar1 = (char *)(lVar14 + uVar15);
          auVar29[0] = -(*pcVar1 == DAT_142e33cf0);
          auVar29[1] = -(pcVar1[1] == DAT_142e33cf0._1_1_);
          auVar29[2] = -(pcVar1[2] == DAT_142e33cf0._2_1_);
          auVar29[3] = -(pcVar1[3] == DAT_142e33cf0._3_1_);
          auVar29[4] = -(pcVar1[4] == DAT_142e33cf0._4_1_);
          auVar29[5] = -(pcVar1[5] == DAT_142e33cf0._5_1_);
          auVar29[6] = -(pcVar1[6] == DAT_142e33cf0._6_1_);
          auVar29[7] = -(pcVar1[7] == DAT_142e33cf0._7_1_);
          auVar29[8] = -(pcVar1[8] == DAT_142e33cf0._8_1_);
          auVar29[9] = -(pcVar1[9] == DAT_142e33cf0._9_1_);
          auVar29[10] = -(pcVar1[10] == DAT_142e33cf0._10_1_);
          auVar29[0xb] = -(pcVar1[0xb] == DAT_142e33cf0._11_1_);
          auVar29[0xc] = -(pcVar1[0xc] == DAT_142e33cf0._12_1_);
          auVar29[0xd] = -(pcVar1[0xd] == DAT_142e33cf0._13_1_);
          auVar29[0xe] = -(pcVar1[0xe] == DAT_142e33cf0._14_1_);
          auVar29[0xf] = -(pcVar1[0xf] == DAT_142e33cf0._15_1_);
          uVar19 = (ushort)(SUB161(auVar29 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar29[0xf] >> 7) << 0xf;
          uVar18 = (uint)uVar19;
          while (uVar19 != 0) {
            uVar4 = 0;
            for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            uVar20 = uVar4 + uVar15 & *(ulonglong *)(param_1 + 0x78);
            pcVar2 = (char *)(lVar14 + -0x18 + uVar20 * -0x18);
            auVar30[0] = -(*pcVar2 == DAT_142e35020);
            auVar30[1] = -(pcVar2[1] == UNK_142e35021);
            auVar30[2] = -(pcVar2[2] == UNK_142e35022);
            auVar30[3] = -(pcVar2[3] == UNK_142e35023);
            auVar30[4] = -(pcVar2[4] == UNK_142e35024);
            auVar30[5] = -(pcVar2[5] == UNK_142e35025);
            auVar30[6] = -(pcVar2[6] == UNK_142e35026);
            auVar30[7] = -(pcVar2[7] == UNK_142e35027);
            auVar30[8] = -(pcVar2[8] == UNK_142e35028);
            auVar30[9] = -(pcVar2[9] == UNK_142e35029);
            auVar30[10] = -(pcVar2[10] == UNK_142e3502a);
            auVar30[0xb] = -(pcVar2[0xb] == UNK_142e3502b);
            auVar30[0xc] = -(pcVar2[0xc] == UNK_142e3502c);
            auVar30[0xd] = -(pcVar2[0xd] == UNK_142e3502d);
            auVar30[0xe] = -(pcVar2[0xe] == UNK_142e3502e);
            auVar30[0xf] = -(pcVar2[0xf] == UNK_142e3502f);
            if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar30[0xf] >> 7) << 0xf) == 0xffff) {
              uVar20 = *(ulonglong *)(lVar14 + uVar20 * -0x18 + -8);
              if (((*(ulonglong *)(param_1 + 0x210) <= uVar20) ||
                  (uVar20 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar20 * 8), uVar20 == 0
                  )) || (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar20 * 0x40) == 0)
                 ) goto LAB_140941ca2;
              goto LAB_140941cbd;
            }
            uVar19 = (ushort)(uVar18 - 1) & (ushort)uVar18;
            uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar19);
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
          if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar22 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar22 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar22 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar22 >> 0x2f,0) & 1) != 0) || (SUB161(auVar22 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar22 >> 0x47,0) & 1) != 0) || (SUB161(auVar22 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar22 >> 0x57,0) & 1) != 0) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') break;
          uVar15 = uVar15 + lVar16 + 0x10;
          lVar16 = lVar16 + 0x10;
        }
      }
LAB_140941ca2:
      pdb_1418cdc00(param_1);
      if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_140941cbd:
        lVar14 = *(longlong *)(param_1 + 0x70);
        uVar15 = 0xf3f35d2361961d8a;
        lVar16 = 0;
        while( true ) {
          uVar15 = uVar15 & *(ulonglong *)(param_1 + 0x78);
          pcVar1 = (char *)(lVar14 + uVar15);
          auVar31[0] = -(*pcVar1 == DAT_142e33cf0);
          auVar31[1] = -(pcVar1[1] == DAT_142e33cf0._1_1_);
          auVar31[2] = -(pcVar1[2] == DAT_142e33cf0._2_1_);
          auVar31[3] = -(pcVar1[3] == DAT_142e33cf0._3_1_);
          auVar31[4] = -(pcVar1[4] == DAT_142e33cf0._4_1_);
          auVar31[5] = -(pcVar1[5] == DAT_142e33cf0._5_1_);
          auVar31[6] = -(pcVar1[6] == DAT_142e33cf0._6_1_);
          auVar31[7] = -(pcVar1[7] == DAT_142e33cf0._7_1_);
          auVar31[8] = -(pcVar1[8] == DAT_142e33cf0._8_1_);
          auVar31[9] = -(pcVar1[9] == DAT_142e33cf0._9_1_);
          auVar31[10] = -(pcVar1[10] == DAT_142e33cf0._10_1_);
          auVar31[0xb] = -(pcVar1[0xb] == DAT_142e33cf0._11_1_);
          auVar31[0xc] = -(pcVar1[0xc] == DAT_142e33cf0._12_1_);
          auVar31[0xd] = -(pcVar1[0xd] == DAT_142e33cf0._13_1_);
          auVar31[0xe] = -(pcVar1[0xe] == DAT_142e33cf0._14_1_);
          auVar31[0xf] = -(pcVar1[0xf] == DAT_142e33cf0._15_1_);
          uVar19 = (ushort)(SUB161(auVar31 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar31[0xf] >> 7) << 0xf;
          uVar18 = (uint)uVar19;
          while (uVar19 != 0) {
            uVar4 = 0;
            for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            uVar20 = uVar4 + uVar15 & *(ulonglong *)(param_1 + 0x78);
            pcVar2 = (char *)(lVar14 + -0x18 + uVar20 * -0x18);
            auVar32[0] = -(*pcVar2 == DAT_143022c90);
            auVar32[1] = -(pcVar2[1] == UNK_143022c91);
            auVar32[2] = -(pcVar2[2] == UNK_143022c92);
            auVar32[3] = -(pcVar2[3] == UNK_143022c93);
            auVar32[4] = -(pcVar2[4] == UNK_143022c94);
            auVar32[5] = -(pcVar2[5] == UNK_143022c95);
            auVar32[6] = -(pcVar2[6] == UNK_143022c96);
            auVar32[7] = -(pcVar2[7] == UNK_143022c97);
            auVar32[8] = -(pcVar2[8] == UNK_143022c98);
            auVar32[9] = -(pcVar2[9] == UNK_143022c99);
            auVar32[10] = -(pcVar2[10] == UNK_143022c9a);
            auVar32[0xb] = -(pcVar2[0xb] == UNK_143022c9b);
            auVar32[0xc] = -(pcVar2[0xc] == UNK_143022c9c);
            auVar32[0xd] = -(pcVar2[0xd] == UNK_143022c9d);
            auVar32[0xe] = -(pcVar2[0xe] == UNK_143022c9e);
            auVar32[0xf] = -(pcVar2[0xf] == UNK_143022c9f);
            if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar32[0xf] >> 7) << 0xf) == 0xffff) {
              uVar20 = *(ulonglong *)(lVar14 + uVar20 * -0x18 + -8);
              if (((*(ulonglong *)(param_1 + 0x210) <= uVar20) ||
                  (uVar20 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar20 * 8), uVar20 == 0
                  )) || (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar20 * 0x40) == 0)
                 ) goto LAB_140941d92;
              goto LAB_140941d9f;
            }
            uVar19 = (ushort)(uVar18 - 1) & (ushort)uVar18;
            uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar19);
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
          if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar23 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar23 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar23 >> 0x2f,0) & 1) != 0) || (SUB161(auVar23 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') break;
          uVar15 = uVar15 + lVar16 + 0x10;
          lVar16 = lVar16 + 0x10;
        }
      }
LAB_140941d92:
      pdb_1418d4200(param_1);
LAB_140941d9f:
      pbStack_380 = (byte *)0x0;
      uStack_378 = 8;
      uStack_370 = 0;
      plVar11 = (longlong *)pdb_140f3bda0();
      if ((char)plVar11[2] == '\x01') {
        lStack_340 = *plVar11;
        uVar15 = plVar11[1];
      }
      else {
        lStack_340 = pdb_140f4fd10();
        *plVar11 = lStack_340;
        plVar11[1] = uVar15;
        *(undefined1 *)(plVar11 + 2) = 1;
      }
      *plVar11 = lStack_340 + 1;
      uVar7 = _UNK_143023cb8;
      uVar6 = _DAT_143023cb0;
      uVar13 = _UNK_143023ca8;
      lVar14 = _DAT_143023ca0;
      uStack_350 = _DAT_143023cb0;
      uStack_348 = _UNK_143023cb8;
      lStack_360 = _DAT_143023ca0;
      pbStack_358 = (byte *)_UNK_143023ca8;
      uStack_338 = uVar15;
      plVar11 = (longlong *)pdb_140f3bda0();
      if ((char)plVar11[2] == '\x01') {
        lStack_310 = *plVar11;
        uVar15 = plVar11[1];
      }
      else {
        lStack_310 = pdb_140f4fd10();
        *plVar11 = lStack_310;
        plVar11[1] = uVar15;
        *(undefined1 *)(plVar11 + 2) = 1;
      }
      *plVar11 = lStack_310 + 1;
      pbStack_320 = (byte *)uVar6;
      uStack_318 = uVar7;
      lStack_330 = lVar14;
      uStack_328 = uVar13;
      uStack_308 = uVar15;
      pdb_14007ee60();
      pbStack_208 = pub_1406abab0(0x30,8);
      if (pbStack_208 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      pbStack_208[0] = 1;
      pbStack_208[1] = 0;
      pbStack_208[2] = 0;
      pbStack_208[3] = 0;
      pbStack_208[4] = 0;
      pbStack_208[5] = 0;
      pbStack_208[6] = 0;
      pbStack_208[7] = 0;
      pbStack_208[8] = 1;
      pbStack_208[9] = 0;
      pbStack_208[10] = 0;
      pbStack_208[0xb] = 0;
      pbStack_208[0xc] = 0;
      pbStack_208[0xd] = 0;
      pbStack_208[0xe] = 0;
      pbStack_208[0xf] = 0;
      pbStack_208[0x10] = 0;
      pbStack_208[0x18] = 0;
      pbStack_208[0x19] = 0;
      pbStack_208[0x1a] = 0;
      pbStack_208[0x1b] = 0;
      pbStack_208[0x1c] = 0;
      pbStack_208[0x1d] = 0;
      pbStack_208[0x1e] = 0;
      pbStack_208[0x1f] = 0;
      pbStack_208[0x20] = 8;
      pbStack_208[0x21] = 0;
      pbStack_208[0x22] = 0;
      pbStack_208[0x23] = 0;
      pbStack_208[0x24] = 0;
      pbStack_208[0x25] = 0;
      pbStack_208[0x26] = 0;
      pbStack_208[0x27] = 0;
      pbStack_208[0x28] = 0;
      pbStack_208[0x29] = 0;
      pbStack_208[0x2a] = 0;
      pbStack_208[0x2b] = 0;
      pbStack_208[0x2c] = 0;
      pbStack_208[0x2d] = 0;
      pbStack_208[0x2e] = 0;
      pbStack_208[0x2f] = 0;
      uStack_270 = uStack_370;
      pbStack_280 = pbStack_380;
      pbStack_278 = (byte *)uStack_378;
      pbStack_268 = (byte *)lStack_360;
      pbStack_260 = pbStack_358;
      uStack_258 = uStack_350;
      uStack_250 = uStack_348;
      lStack_248 = lStack_340;
      uStack_240 = uStack_338;
      uStack_200 = 0;
      lStack_238 = lStack_330;
      uStack_230 = uStack_328;
      uStack_228 = pbStack_320;
      uStack_220 = uStack_318;
      lStack_218 = lStack_310;
      uStack_210 = uStack_308;
      pdb_1418fa7b0(param_1,&pbStack_280);
      lStack_330 = -0x8000000000000000;
      pdb_14007ee60();
      pbVar12 = pub_1406abab0(0x20,8);
      if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x20);
      }
      pbVar12[8] = 0;
      pbVar12[0x10] = 0;
      pbVar12[0x11] = 0;
      pbVar12[0x12] = 0;
      pbVar12[0x13] = 0;
      pbVar12[0] = 0;
      pbVar12[1] = 0;
      pbVar12[2] = 0;
      pbVar12[3] = 0;
      pbVar12[4] = 0;
      pbVar12[5] = 0;
      pbVar12[6] = 0;
      pbVar12[7] = 0x80;
      uStack_228 = uStack_2f0;
      uStack_220 = uStack_2e8;
      lStack_238 = uStack_300;
      uStack_230 = uStack_2f8;
      lStack_248 = lStack_310;
      uStack_240 = uStack_308;
      uStack_258 = (ulonglong)pbStack_320;
      uStack_250 = uStack_318;
      pbStack_268 = (byte *)lStack_330;
      pbStack_260 = (byte *)uStack_328;
      lStack_218 = CONCAT71(lStack_218._1_7_,2);
      pbStack_280 = (byte *)0x1;
      uStack_270 = 1;
      pbStack_278 = pbVar12;
      uVar13 = pdb_14190e610(param_1,&pbStack_280);
      uStack_120 = uStack_2c8;
      lStack_130 = lStack_2d8;
      pbStack_128 = pbStack_2d0;
      uStack_110 = 0;
      pbStack_280 = (byte *)0x1;
      uStack_108 = 0;
      uStack_100 = 1;
      uStack_270 = 0;
      pbStack_268 = (byte *)0x8;
      pbStack_260 = (byte *)0x0;
      uStack_258 = 0x8000000000000000;
      uStack_f0 = 0;
      uStack_ec = _DAT_143022ca0;
      pbStack_278 = pbVar8;
      pbStack_118 = pbVar10;
      pbStack_f8 = pbVar9;
      lVar14 = pdb_14190fcc0(uVar13,&pbStack_280);
      if (*(longlong *)(lVar14 + 0x88) != 0) {
        lVar16 = *(longlong *)(lVar14 + 0x70);
        uVar15 = 0x7c0c43f6f1415575;
        lVar17 = 0;
        while( true ) {
          uVar15 = uVar15 & *(ulonglong *)(lVar14 + 0x78);
          pcVar1 = (char *)(lVar16 + uVar15);
          auVar33[0] = -(*pcVar1 == DAT_142e34280);
          auVar33[1] = -(pcVar1[1] == DAT_142e34280._1_1_);
          auVar33[2] = -(pcVar1[2] == DAT_142e34280._2_1_);
          auVar33[3] = -(pcVar1[3] == DAT_142e34280._3_1_);
          auVar33[4] = -(pcVar1[4] == DAT_142e34280._4_1_);
          auVar33[5] = -(pcVar1[5] == DAT_142e34280._5_1_);
          auVar33[6] = -(pcVar1[6] == DAT_142e34280._6_1_);
          auVar33[7] = -(pcVar1[7] == DAT_142e34280._7_1_);
          auVar33[8] = -(pcVar1[8] == DAT_142e34280._8_1_);
          auVar33[9] = -(pcVar1[9] == DAT_142e34280._9_1_);
          auVar33[10] = -(pcVar1[10] == DAT_142e34280._10_1_);
          auVar33[0xb] = -(pcVar1[0xb] == DAT_142e34280._11_1_);
          auVar33[0xc] = -(pcVar1[0xc] == DAT_142e34280._12_1_);
          auVar33[0xd] = -(pcVar1[0xd] == DAT_142e34280._13_1_);
          auVar33[0xe] = -(pcVar1[0xe] == DAT_142e34280._14_1_);
          auVar33[0xf] = -(pcVar1[0xf] == DAT_142e34280._15_1_);
          uVar19 = (ushort)(SUB161(auVar33 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar33[0xf] >> 7) << 0xf;
          uVar18 = (uint)uVar19;
          while (uVar19 != 0) {
            uVar4 = 0;
            for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            uVar20 = uVar4 + uVar15 & *(ulonglong *)(lVar14 + 0x78);
            pcVar2 = (char *)(lVar16 + -0x18 + uVar20 * -0x18);
            auVar34[0] = -(*pcVar2 == DAT_142e34290);
            auVar34[1] = -(pcVar2[1] == UNK_142e34291);
            auVar34[2] = -(pcVar2[2] == UNK_142e34292);
            auVar34[3] = -(pcVar2[3] == UNK_142e34293);
            auVar34[4] = -(pcVar2[4] == UNK_142e34294);
            auVar34[5] = -(pcVar2[5] == UNK_142e34295);
            auVar34[6] = -(pcVar2[6] == UNK_142e34296);
            auVar34[7] = -(pcVar2[7] == UNK_142e34297);
            auVar34[8] = -(pcVar2[8] == UNK_142e34298);
            auVar34[9] = -(pcVar2[9] == UNK_142e34299);
            auVar34[10] = -(pcVar2[10] == UNK_142e3429a);
            auVar34[0xb] = -(pcVar2[0xb] == UNK_142e3429b);
            auVar34[0xc] = -(pcVar2[0xc] == UNK_142e3429c);
            auVar34[0xd] = -(pcVar2[0xd] == UNK_142e3429d);
            auVar34[0xe] = -(pcVar2[0xe] == UNK_142e3429e);
            auVar34[0xf] = -(pcVar2[0xf] == UNK_142e3429f);
            if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar34[0xf] >> 7) << 0xf) == 0xffff) {
              uVar15 = *(ulonglong *)(lVar16 + uVar20 * -0x18 + -8);
              if (((*(ulonglong *)(lVar14 + 0x210) <= uVar15) ||
                  (uVar15 = *(ulonglong *)(*(longlong *)(lVar14 + 0x208) + uVar15 * 8), uVar15 == 0)
                  ) || (*(longlong *)(*(longlong *)(lVar14 + 0x1d8) + 0x20 + ~uVar15 * 0x40) == 0))
              goto LAB_140942182;
              goto LAB_14094219d;
            }
            uVar19 = (ushort)(uVar18 - 1) & (ushort)uVar18;
            uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar19);
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
          if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar24 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x2f,0) & 1) != 0) || (SUB161(auVar24 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
          uVar15 = uVar15 + lVar17 + 0x10;
          lVar17 = lVar17 + 0x10;
        }
      }
LAB_140942182:
      pdb_1418d5400(lVar14);
      if (*(longlong *)(lVar14 + 0x88) != 0) {
LAB_14094219d:
        lVar16 = *(longlong *)(lVar14 + 0x70);
        uVar15 = 0x14be76b9004a4d90;
        lVar17 = 0;
        while( true ) {
          uVar15 = uVar15 & *(ulonglong *)(lVar14 + 0x78);
          pcVar1 = (char *)(lVar16 + uVar15);
          auVar35[0] = -(*pcVar1 == DAT_142e33c70);
          auVar35[1] = -(pcVar1[1] == DAT_142e33c70._1_1_);
          auVar35[2] = -(pcVar1[2] == DAT_142e33c70._2_1_);
          auVar35[3] = -(pcVar1[3] == DAT_142e33c70._3_1_);
          auVar35[4] = -(pcVar1[4] == DAT_142e33c70._4_1_);
          auVar35[5] = -(pcVar1[5] == DAT_142e33c70._5_1_);
          auVar35[6] = -(pcVar1[6] == DAT_142e33c70._6_1_);
          auVar35[7] = -(pcVar1[7] == DAT_142e33c70._7_1_);
          auVar35[8] = -(pcVar1[8] == DAT_142e33c70._8_1_);
          auVar35[9] = -(pcVar1[9] == DAT_142e33c70._9_1_);
          auVar35[10] = -(pcVar1[10] == DAT_142e33c70._10_1_);
          auVar35[0xb] = -(pcVar1[0xb] == DAT_142e33c70._11_1_);
          auVar35[0xc] = -(pcVar1[0xc] == DAT_142e33c70._12_1_);
          auVar35[0xd] = -(pcVar1[0xd] == DAT_142e33c70._13_1_);
          auVar35[0xe] = -(pcVar1[0xe] == DAT_142e33c70._14_1_);
          auVar35[0xf] = -(pcVar1[0xf] == DAT_142e33c70._15_1_);
          uVar19 = (ushort)(SUB161(auVar35 >> 7,0) & 1) |
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
                   (ushort)(auVar35[0xf] >> 7) << 0xf;
          uVar18 = (uint)uVar19;
          while (uVar19 != 0) {
            uVar4 = 0;
            for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            uVar20 = uVar4 + uVar15 & *(ulonglong *)(lVar14 + 0x78);
            pcVar2 = (char *)(lVar16 + -0x18 + uVar20 * -0x18);
            auVar36[0] = -(*pcVar2 == DAT_142e34110);
            auVar36[1] = -(pcVar2[1] == UNK_142e34111);
            auVar36[2] = -(pcVar2[2] == UNK_142e34112);
            auVar36[3] = -(pcVar2[3] == UNK_142e34113);
            auVar36[4] = -(pcVar2[4] == UNK_142e34114);
            auVar36[5] = -(pcVar2[5] == UNK_142e34115);
            auVar36[6] = -(pcVar2[6] == UNK_142e34116);
            auVar36[7] = -(pcVar2[7] == UNK_142e34117);
            auVar36[8] = -(pcVar2[8] == UNK_142e34118);
            auVar36[9] = -(pcVar2[9] == UNK_142e34119);
            auVar36[10] = -(pcVar2[10] == UNK_142e3411a);
            auVar36[0xb] = -(pcVar2[0xb] == UNK_142e3411b);
            auVar36[0xc] = -(pcVar2[0xc] == UNK_142e3411c);
            auVar36[0xd] = -(pcVar2[0xd] == UNK_142e3411d);
            auVar36[0xe] = -(pcVar2[0xe] == UNK_142e3411e);
            auVar36[0xf] = -(pcVar2[0xf] == UNK_142e3411f);
            if ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar36[0xf] >> 7) << 0xf) == 0xffff) {
              uVar15 = *(ulonglong *)(lVar16 + uVar20 * -0x18 + -8);
              if (((*(ulonglong *)(lVar14 + 0x210) <= uVar15) ||
                  (uVar15 = *(ulonglong *)(*(longlong *)(lVar14 + 0x208) + uVar15 * 8), uVar15 == 0)
                  ) || (*(longlong *)(*(longlong *)(lVar14 + 0x1d8) + 0x20 + ~uVar15 * 0x40) == 0))
              goto LAB_140942272;
              goto LAB_14094228d;
            }
            uVar19 = (ushort)(uVar18 - 1) & (ushort)uVar18;
            uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar19);
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
          if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar25 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar25 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar25 >> 0x2f,0) & 1) != 0) || (SUB161(auVar25 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') break;
          uVar15 = uVar15 + lVar17 + 0x10;
          lVar17 = lVar17 + 0x10;
        }
      }
LAB_140942272:
      pdb_1418e01f0(lVar14);
      if (*(longlong *)(lVar14 + 0x88) != 0) {
LAB_14094228d:
        lVar16 = *(longlong *)(lVar14 + 0x70);
        uVar15 = 0xb2f8a419b5d2d04;
        lVar17 = 0;
        while( true ) {
          uVar15 = uVar15 & *(ulonglong *)(lVar14 + 0x78);
          pcVar1 = (char *)(lVar16 + uVar15);
          auVar37[0] = -(*pcVar1 == DAT_142e34910);
          auVar37[1] = -(pcVar1[1] == DAT_142e34910._1_1_);
          auVar37[2] = -(pcVar1[2] == DAT_142e34910._2_1_);
          auVar37[3] = -(pcVar1[3] == DAT_142e34910._3_1_);
          auVar37[4] = -(pcVar1[4] == DAT_142e34910._4_1_);
          auVar37[5] = -(pcVar1[5] == DAT_142e34910._5_1_);
          auVar37[6] = -(pcVar1[6] == DAT_142e34910._6_1_);
          auVar37[7] = -(pcVar1[7] == DAT_142e34910._7_1_);
          auVar37[8] = -(pcVar1[8] == DAT_142e34910._8_1_);
          auVar37[9] = -(pcVar1[9] == DAT_142e34910._9_1_);
          auVar37[10] = -(pcVar1[10] == DAT_142e34910._10_1_);
          auVar37[0xb] = -(pcVar1[0xb] == DAT_142e34910._11_1_);
          auVar37[0xc] = -(pcVar1[0xc] == DAT_142e34910._12_1_);
          auVar37[0xd] = -(pcVar1[0xd] == DAT_142e34910._13_1_);
          auVar37[0xe] = -(pcVar1[0xe] == DAT_142e34910._14_1_);
          auVar37[0xf] = -(pcVar1[0xf] == DAT_142e34910._15_1_);
          uVar19 = (ushort)(SUB161(auVar37 >> 7,0) & 1) |
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
                   (ushort)(auVar37[0xf] >> 7) << 0xf;
          uVar18 = (uint)uVar19;
          while (uVar19 != 0) {
            uVar4 = 0;
            for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            uVar20 = uVar4 + uVar15 & *(ulonglong *)(lVar14 + 0x78);
            pcVar2 = (char *)(lVar16 + -0x18 + uVar20 * -0x18);
            auVar38[0] = -(*pcVar2 == DAT_142e34920);
            auVar38[1] = -(pcVar2[1] == UNK_142e34921);
            auVar38[2] = -(pcVar2[2] == UNK_142e34922);
            auVar38[3] = -(pcVar2[3] == UNK_142e34923);
            auVar38[4] = -(pcVar2[4] == UNK_142e34924);
            auVar38[5] = -(pcVar2[5] == UNK_142e34925);
            auVar38[6] = -(pcVar2[6] == UNK_142e34926);
            auVar38[7] = -(pcVar2[7] == UNK_142e34927);
            auVar38[8] = -(pcVar2[8] == UNK_142e34928);
            auVar38[9] = -(pcVar2[9] == UNK_142e34929);
            auVar38[10] = -(pcVar2[10] == UNK_142e3492a);
            auVar38[0xb] = -(pcVar2[0xb] == UNK_142e3492b);
            auVar38[0xc] = -(pcVar2[0xc] == UNK_142e3492c);
            auVar38[0xd] = -(pcVar2[0xd] == UNK_142e3492d);
            auVar38[0xe] = -(pcVar2[0xe] == UNK_142e3492e);
            auVar38[0xf] = -(pcVar2[0xf] == UNK_142e3492f);
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
              uVar15 = *(ulonglong *)(lVar16 + uVar20 * -0x18 + -8);
              if (((uVar15 < *(ulonglong *)(lVar14 + 0x210)) &&
                  (uVar15 = *(ulonglong *)(*(longlong *)(lVar14 + 0x208) + uVar15 * 8), uVar15 != 0)
                  ) && (*(longlong *)(*(longlong *)(lVar14 + 0x1d8) + 0x20 + ~uVar15 * 0x40) != 0))
              {
                return lVar14;
              }
              goto LAB_140942362;
            }
            uVar19 = (ushort)(uVar18 - 1) & (ushort)uVar18;
            uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar19);
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
          if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar26 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar26 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar26 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar26 >> 0x2f,0) & 1) != 0) || (SUB161(auVar26 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar26 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar26 >> 0x47,0) & 1) != 0) || (SUB161(auVar26 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar26 >> 0x57,0) & 1) != 0) || (SUB161(auVar26 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar26 >> 0x67,0) & 1) != 0) || (SUB161(auVar26 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar26 >> 0x77,0) & 1) != 0) || auVar26[0xf] < '\0') break;
          uVar15 = uVar15 + lVar17 + 0x10;
          lVar17 = lVar17 + 0x10;
        }
      }
LAB_140942362:
      pdb_1418e2bf0(lVar14);
      return lVar14;
    }
    pdb_142dc7e2a(1,10);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

