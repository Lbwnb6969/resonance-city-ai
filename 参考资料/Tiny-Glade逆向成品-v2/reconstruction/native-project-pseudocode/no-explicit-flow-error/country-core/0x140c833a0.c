// VA 0x140c833a0, PDB extent 2624 bytes
// country_core::systems::paths::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::paths::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/mod.rs
   Extent: 2624 */

void pdb_140c833a0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  ulonglong uVar15;
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
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  ulonglong uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined1 auStack_3d0 [16];
  undefined8 uStack_3c0;
  undefined1 auStack_3b8 [16];
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  byte *pbStack_380;
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
  undefined8 uStack_150;
  byte *pbStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulonglong uStack_108;
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
  byte *pbStack_a0;
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
  auStack_3d0 = (undefined1  [16])0x0;
  auStack_3b8 = (undefined1  [16])0x0;
  uStack_3f8 = 1;
  uStack_3f0 = 1;
  uStack_3e8 = uStack_3e8 & 0xffffffffffffff00;
  uStack_3e0 = 0;
  uStack_3d8 = 8;
  uStack_3c0 = 8;
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x50,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x50);
  }
  *(undefined8 *)(pbVar7 + 0x40) = auStack_3b8._0_8_;
  *(undefined8 *)(pbVar7 + 0x48) = auStack_3b8._8_8_;
  *(undefined8 *)(pbVar7 + 0x30) = auStack_3d0._8_8_;
  *(undefined8 *)(pbVar7 + 0x38) = uStack_3c0;
  *(undefined8 *)(pbVar7 + 0x20) = uStack_3d8;
  *(undefined8 *)(pbVar7 + 0x28) = auStack_3d0._0_8_;
  *(ulonglong *)(pbVar7 + 0x10) = uStack_3e8;
  *(undefined8 *)(pbVar7 + 0x18) = uStack_3e0;
  *(undefined8 *)pbVar7 = uStack_3f8;
  *(undefined8 *)(pbVar7 + 8) = uStack_3f0;
  uStack_150 = 0x8000000000000000;
  uStack_29 = 1;
  pbStack_148 = pbVar7;
  pdb_1414dee90(&uStack_3f8);
  uStack_a8 = CONCAT71(uStack_a8._1_7_,0x10);
  puVar10 = &uStack_a8;
  uVar8 = pdb_140950ee0(_DAT_143ca8dd0,puVar10,&UNK_14305af38);
  pdb_140676be0(&uStack_3f8,uVar8,puVar10);
  uStack_b8 = uStack_398;
  uStack_b0 = uStack_390;
  uStack_c8 = uStack_3a8;
  uStack_c0 = uStack_3a0;
  uStack_d8 = auStack_3b8._0_8_;
  uStack_d0 = auStack_3b8._8_8_;
  uStack_e8 = auStack_3d0._8_8_;
  uStack_e0 = uStack_3c0;
  uStack_f8 = uStack_3d8;
  uStack_f0 = auStack_3d0._0_8_;
  uStack_108 = uStack_3e8;
  uStack_100 = uStack_3e0;
  uStack_118 = uStack_3f8;
  uStack_110 = uStack_3f0;
  pdb_140c8a230(&uStack_a8,0x22);
  uStack_398 = uStack_b8;
  uStack_390 = uStack_b0;
  uStack_3a8 = uStack_c8;
  uStack_3a0 = uStack_c0;
  auStack_3b8._8_8_ = uStack_d0;
  auStack_3b8._0_8_ = uStack_d8;
  uStack_3c0 = uStack_e0;
  uStack_3d8 = uStack_f8;
  auStack_3d0._8_8_ = uStack_e8;
  auStack_3d0._0_8_ = uStack_f0;
  uStack_3e8 = uStack_108;
  uStack_3e0 = uStack_100;
  uStack_3f8 = uStack_118;
  uStack_3f0 = uStack_110;
  uStack_388 = uStack_a8;
  pbStack_380 = pbStack_a0;
  uStack_378 = uStack_98;
  uStack_370 = uStack_90;
  uStack_368 = uStack_88;
  uStack_360 = uStack_80;
  uStack_358 = uStack_78;
  uStack_350 = uStack_70;
  uStack_348 = uStack_68;
  uStack_340 = uStack_60;
  uStack_338 = uStack_58;
  uStack_330 = uStack_50;
  uStack_328 = uStack_48;
  uStack_320 = uStack_40;
  uStack_29 = 1;
  pdb_140c971f0(param_2,&uStack_3f8);
  LOCK();
  lVar9 = *(longlong *)pbVar7;
  *(longlong *)pbVar7 = *(longlong *)pbVar7 + 1;
  UNLOCK();
  if (*(longlong *)pbVar7 != 0 && SCARRY8(lVar9,1) == *(longlong *)pbVar7 < 0) {
    uStack_a8 = 0x8000000000000001;
    uStack_29 = 1;
    pbStack_a0 = pbVar7;
    pdb_140a77de0(&uStack_3f8,&uStack_a8);
    uStack_29 = 1;
    uVar8 = pdb_1418fc3c0(param_2,&uStack_3f8);
    LOCK();
    lVar9 = *(longlong *)pbVar7;
    *(longlong *)pbVar7 = *(longlong *)pbVar7 + 1;
    UNLOCK();
    if (*(longlong *)pbVar7 != 0 && SCARRY8(lVar9,1) == *(longlong *)pbVar7 < 0) {
      uStack_a8 = 0x8000000000000001;
      uStack_29 = 1;
      pbStack_a0 = pbVar7;
      pdb_140a77de0(&uStack_3f8,&uStack_a8);
      uStack_29 = 1;
      uVar8 = pdb_1419017d0(uVar8,&uStack_3f8);
      LOCK();
      lVar9 = *(longlong *)pbVar7;
      *(longlong *)pbVar7 = *(longlong *)pbVar7 + 1;
      UNLOCK();
      if (*(longlong *)pbVar7 != 0 && SCARRY8(lVar9,1) == *(longlong *)pbVar7 < 0) {
        uStack_a8 = 0x8000000000000001;
        uStack_29 = 1;
        pbStack_a0 = pbVar7;
        pdb_140a77de0(&uStack_3f8,&uStack_a8);
        uStack_29 = 1;
        uVar8 = pdb_1418ffc10(uVar8,&uStack_3f8);
        uStack_78 = uStack_120;
        uStack_88 = uStack_130;
        uStack_80 = uStack_128;
        uStack_98 = uStack_140;
        uStack_90 = uStack_138;
        uStack_a8 = uStack_150;
        pbStack_a0 = pbStack_148;
        uStack_29 = 0;
        pdb_140a77de0(&uStack_3f8,&uStack_a8);
        uStack_29 = 0;
        uVar8 = pdb_141914b40(uVar8,&uStack_3f8);
        uStack_3f8 = _DAT_14305a4c0;
        uStack_3f0 = CONCAT44(uStack_3f0._4_4_,0x40400000);
        uStack_29 = 0;
        lVar9 = pdb_1418f4990(uVar8,&uStack_3f8);
        if (*(longlong *)(lVar9 + 0x88) != 0) {
          lVar3 = *(longlong *)(lVar9 + 0x70);
          uVar11 = 0x6bdb07584efa9fc4;
          lVar12 = 0;
          while( true ) {
            uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
            pcVar1 = (char *)(lVar3 + uVar11);
            auVar22[0] = -(*pcVar1 == DAT_142e343c0);
            auVar22[1] = -(pcVar1[1] == DAT_142e343c0._1_1_);
            auVar22[2] = -(pcVar1[2] == DAT_142e343c0._2_1_);
            auVar22[3] = -(pcVar1[3] == DAT_142e343c0._3_1_);
            auVar22[4] = -(pcVar1[4] == DAT_142e343c0._4_1_);
            auVar22[5] = -(pcVar1[5] == DAT_142e343c0._5_1_);
            auVar22[6] = -(pcVar1[6] == DAT_142e343c0._6_1_);
            auVar22[7] = -(pcVar1[7] == DAT_142e343c0._7_1_);
            auVar22[8] = -(pcVar1[8] == DAT_142e343c0._8_1_);
            auVar22[9] = -(pcVar1[9] == DAT_142e343c0._9_1_);
            auVar22[10] = -(pcVar1[10] == DAT_142e343c0._10_1_);
            auVar22[0xb] = -(pcVar1[0xb] == DAT_142e343c0._11_1_);
            auVar22[0xc] = -(pcVar1[0xc] == DAT_142e343c0._12_1_);
            auVar22[0xd] = -(pcVar1[0xd] == DAT_142e343c0._13_1_);
            auVar22[0xe] = -(pcVar1[0xe] == DAT_142e343c0._14_1_);
            auVar22[0xf] = -(pcVar1[0xf] == DAT_142e343c0._15_1_);
            uVar14 = (ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
                     (ushort)(auVar22[0xf] >> 7) << 0xf;
            uVar13 = (uint)uVar14;
            while (uVar14 != 0) {
              uVar5 = 0;
              for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              uVar15 = uVar5 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
              pcVar2 = (char *)(lVar3 + -0x18 + uVar15 * -0x18);
              auVar23[0] = -(*pcVar2 == DAT_143074650);
              auVar23[1] = -(pcVar2[1] == UNK_143074651);
              auVar23[2] = -(pcVar2[2] == UNK_143074652);
              auVar23[3] = -(pcVar2[3] == UNK_143074653);
              auVar23[4] = -(pcVar2[4] == UNK_143074654);
              auVar23[5] = -(pcVar2[5] == UNK_143074655);
              auVar23[6] = -(pcVar2[6] == UNK_143074656);
              auVar23[7] = -(pcVar2[7] == UNK_143074657);
              auVar23[8] = -(pcVar2[8] == UNK_143074658);
              auVar23[9] = -(pcVar2[9] == UNK_143074659);
              auVar23[10] = -(pcVar2[10] == UNK_14307465a);
              auVar23[0xb] = -(pcVar2[0xb] == UNK_14307465b);
              auVar23[0xc] = -(pcVar2[0xc] == UNK_14307465c);
              auVar23[0xd] = -(pcVar2[0xd] == UNK_14307465d);
              auVar23[0xe] = -(pcVar2[0xe] == UNK_14307465e);
              auVar23[0xf] = -(pcVar2[0xf] == UNK_14307465f);
              if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar23[0xf] >> 7) << 0xf) == 0xffff) {
                uVar11 = *(ulonglong *)(lVar3 + uVar15 * -0x18 + -8);
                if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
                    (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0
                    )) || (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0)
                   ) goto LAB_140c83822;
                goto LAB_140c83840;
              }
              uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
            if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar16 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar16 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar16 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar16 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar16 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar16 >> 0x57,0) & 1) != 0) || (SUB161(auVar16 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar16 >> 0x67,0) & 1) != 0) || (SUB161(auVar16 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar16 >> 0x77,0) & 1) != 0) || auVar16[0xf] < '\0') break;
            uVar11 = uVar11 + lVar12 + 0x10;
            lVar12 = lVar12 + 0x10;
          }
        }
LAB_140c83822:
        uStack_29 = 0;
        pdb_1418e37f0(lVar9);
        if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_140c83840:
          lVar3 = *(longlong *)(lVar9 + 0x70);
          uVar11 = 0xd99830450cc7e4c1;
          lVar12 = 0;
          while( true ) {
            uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
            pcVar1 = (char *)(lVar3 + uVar11);
            auVar24[0] = -(*pcVar1 == DAT_142e34590);
            auVar24[1] = -(pcVar1[1] == DAT_142e34590._1_1_);
            auVar24[2] = -(pcVar1[2] == DAT_142e34590._2_1_);
            auVar24[3] = -(pcVar1[3] == DAT_142e34590._3_1_);
            auVar24[4] = -(pcVar1[4] == DAT_142e34590._4_1_);
            auVar24[5] = -(pcVar1[5] == DAT_142e34590._5_1_);
            auVar24[6] = -(pcVar1[6] == DAT_142e34590._6_1_);
            auVar24[7] = -(pcVar1[7] == DAT_142e34590._7_1_);
            auVar24[8] = -(pcVar1[8] == DAT_142e34590._8_1_);
            auVar24[9] = -(pcVar1[9] == DAT_142e34590._9_1_);
            auVar24[10] = -(pcVar1[10] == DAT_142e34590._10_1_);
            auVar24[0xb] = -(pcVar1[0xb] == DAT_142e34590._11_1_);
            auVar24[0xc] = -(pcVar1[0xc] == DAT_142e34590._12_1_);
            auVar24[0xd] = -(pcVar1[0xd] == DAT_142e34590._13_1_);
            auVar24[0xe] = -(pcVar1[0xe] == DAT_142e34590._14_1_);
            auVar24[0xf] = -(pcVar1[0xf] == DAT_142e34590._15_1_);
            uVar14 = (ushort)(SUB161(auVar24 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar24[0xf] >> 7) << 0xf;
            uVar13 = (uint)uVar14;
            while (uVar14 != 0) {
              uVar5 = 0;
              for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              uVar15 = uVar5 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
              pcVar2 = (char *)(lVar3 + -0x18 + uVar15 * -0x18);
              auVar25[0] = -(*pcVar2 == DAT_143074660);
              auVar25[1] = -(pcVar2[1] == UNK_143074661);
              auVar25[2] = -(pcVar2[2] == UNK_143074662);
              auVar25[3] = -(pcVar2[3] == UNK_143074663);
              auVar25[4] = -(pcVar2[4] == UNK_143074664);
              auVar25[5] = -(pcVar2[5] == UNK_143074665);
              auVar25[6] = -(pcVar2[6] == UNK_143074666);
              auVar25[7] = -(pcVar2[7] == UNK_143074667);
              auVar25[8] = -(pcVar2[8] == UNK_143074668);
              auVar25[9] = -(pcVar2[9] == UNK_143074669);
              auVar25[10] = -(pcVar2[10] == UNK_14307466a);
              auVar25[0xb] = -(pcVar2[0xb] == UNK_14307466b);
              auVar25[0xc] = -(pcVar2[0xc] == UNK_14307466c);
              auVar25[0xd] = -(pcVar2[0xd] == UNK_14307466d);
              auVar25[0xe] = -(pcVar2[0xe] == UNK_14307466e);
              auVar25[0xf] = -(pcVar2[0xf] == UNK_14307466f);
              if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar25[0xf] >> 7) << 0xf) == 0xffff) {
                uVar11 = *(ulonglong *)(lVar3 + uVar15 * -0x18 + -8);
                if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
                    (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0
                    )) || (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0)
                   ) goto LAB_140c83912;
                goto LAB_140c83930;
              }
              uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
            if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar17 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar17 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar17 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar17 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar17 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar17 >> 0x57,0) & 1) != 0) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar17 >> 0x77,0) & 1) != 0) || auVar17[0xf] < '\0') break;
            uVar11 = uVar11 + lVar12 + 0x10;
            lVar12 = lVar12 + 0x10;
          }
        }
LAB_140c83912:
        uStack_29 = 0;
        pdb_1418e67f0(lVar9);
        if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_140c83930:
          lVar3 = *(longlong *)(lVar9 + 0x70);
          uVar11 = 0x6418d73d2e84664a;
          lVar12 = 0;
          while( true ) {
            uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
            pcVar1 = (char *)(lVar3 + uVar11);
            auVar26[0] = -(*pcVar1 == DAT_142e33f30);
            auVar26[1] = -(pcVar1[1] == DAT_142e33f30._1_1_);
            auVar26[2] = -(pcVar1[2] == DAT_142e33f30._2_1_);
            auVar26[3] = -(pcVar1[3] == DAT_142e33f30._3_1_);
            auVar26[4] = -(pcVar1[4] == DAT_142e33f30._4_1_);
            auVar26[5] = -(pcVar1[5] == DAT_142e33f30._5_1_);
            auVar26[6] = -(pcVar1[6] == DAT_142e33f30._6_1_);
            auVar26[7] = -(pcVar1[7] == DAT_142e33f30._7_1_);
            auVar26[8] = -(pcVar1[8] == DAT_142e33f30._8_1_);
            auVar26[9] = -(pcVar1[9] == DAT_142e33f30._9_1_);
            auVar26[10] = -(pcVar1[10] == DAT_142e33f30._10_1_);
            auVar26[0xb] = -(pcVar1[0xb] == DAT_142e33f30._11_1_);
            auVar26[0xc] = -(pcVar1[0xc] == DAT_142e33f30._12_1_);
            auVar26[0xd] = -(pcVar1[0xd] == DAT_142e33f30._13_1_);
            auVar26[0xe] = -(pcVar1[0xe] == DAT_142e33f30._14_1_);
            auVar26[0xf] = -(pcVar1[0xf] == DAT_142e33f30._15_1_);
            uVar14 = (ushort)(SUB161(auVar26 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar26[0xf] >> 7) << 0xf;
            uVar13 = (uint)uVar14;
            while (uVar14 != 0) {
              uVar5 = 0;
              for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              uVar15 = uVar5 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
              pcVar2 = (char *)(lVar3 + -0x18 + uVar15 * -0x18);
              auVar27[0] = -(*pcVar2 == DAT_143074670);
              auVar27[1] = -(pcVar2[1] == UNK_143074671);
              auVar27[2] = -(pcVar2[2] == UNK_143074672);
              auVar27[3] = -(pcVar2[3] == UNK_143074673);
              auVar27[4] = -(pcVar2[4] == UNK_143074674);
              auVar27[5] = -(pcVar2[5] == UNK_143074675);
              auVar27[6] = -(pcVar2[6] == UNK_143074676);
              auVar27[7] = -(pcVar2[7] == UNK_143074677);
              auVar27[8] = -(pcVar2[8] == UNK_143074678);
              auVar27[9] = -(pcVar2[9] == UNK_143074679);
              auVar27[10] = -(pcVar2[10] == UNK_14307467a);
              auVar27[0xb] = -(pcVar2[0xb] == UNK_14307467b);
              auVar27[0xc] = -(pcVar2[0xc] == UNK_14307467c);
              auVar27[0xd] = -(pcVar2[0xd] == UNK_14307467d);
              auVar27[0xe] = -(pcVar2[0xe] == UNK_14307467e);
              auVar27[0xf] = -(pcVar2[0xf] == UNK_14307467f);
              if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
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
                          (ushort)(auVar27[0xf] >> 7) << 0xf) == 0xffff) {
                uVar11 = *(ulonglong *)(lVar3 + uVar15 * -0x18 + -8);
                if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
                    (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0
                    )) || (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0)
                   ) goto LAB_140c83a02;
                goto LAB_140c83a20;
              }
              uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
            if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar18 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar18 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar18 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar18 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') break;
            uVar11 = uVar11 + lVar12 + 0x10;
            lVar12 = lVar12 + 0x10;
          }
        }
LAB_140c83a02:
        uStack_29 = 0;
        pdb_1418e1ff0(lVar9);
        if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_140c83a20:
          lVar3 = *(longlong *)(lVar9 + 0x70);
          uVar11 = 0x4d3d4200f75bee;
          lVar12 = 0;
          while( true ) {
            uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
            pcVar1 = (char *)(lVar3 + uVar11);
            auVar28[0] = -(*pcVar1 == '\0');
            auVar28[1] = -(pcVar1[1] == '\0');
            auVar28[2] = -(pcVar1[2] == '\0');
            auVar28[3] = -(pcVar1[3] == '\0');
            auVar28[4] = -(pcVar1[4] == '\0');
            auVar28[5] = -(pcVar1[5] == '\0');
            auVar28[6] = -(pcVar1[6] == '\0');
            auVar28[7] = -(pcVar1[7] == '\0');
            auVar28[8] = -(pcVar1[8] == '\0');
            auVar28[9] = -(pcVar1[9] == '\0');
            auVar28[10] = -(pcVar1[10] == '\0');
            auVar28[0xb] = -(pcVar1[0xb] == '\0');
            auVar28[0xc] = -(pcVar1[0xc] == '\0');
            auVar28[0xd] = -(pcVar1[0xd] == '\0');
            auVar28[0xe] = -(pcVar1[0xe] == '\0');
            auVar28[0xf] = -(pcVar1[0xf] == '\0');
            uVar14 = (ushort)(SUB161(auVar28 >> 7,0) & 1) |
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
                     (ushort)(auVar28[0xf] >> 7) << 0xf;
            uVar13 = (uint)uVar14;
            while (uVar14 != 0) {
              uVar5 = 0;
              for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              uVar15 = uVar5 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
              pcVar2 = (char *)(lVar3 + -0x18 + uVar15 * -0x18);
              auVar29[0] = -(*pcVar2 == DAT_143074680);
              auVar29[1] = -(pcVar2[1] == UNK_143074681);
              auVar29[2] = -(pcVar2[2] == UNK_143074682);
              auVar29[3] = -(pcVar2[3] == UNK_143074683);
              auVar29[4] = -(pcVar2[4] == UNK_143074684);
              auVar29[5] = -(pcVar2[5] == UNK_143074685);
              auVar29[6] = -(pcVar2[6] == UNK_143074686);
              auVar29[7] = -(pcVar2[7] == UNK_143074687);
              auVar29[8] = -(pcVar2[8] == UNK_143074688);
              auVar29[9] = -(pcVar2[9] == UNK_143074689);
              auVar29[10] = -(pcVar2[10] == UNK_14307468a);
              auVar29[0xb] = -(pcVar2[0xb] == UNK_14307468b);
              auVar29[0xc] = -(pcVar2[0xc] == UNK_14307468c);
              auVar29[0xd] = -(pcVar2[0xd] == UNK_14307468d);
              auVar29[0xe] = -(pcVar2[0xe] == UNK_14307468e);
              auVar29[0xf] = -(pcVar2[0xf] == UNK_14307468f);
              if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                          (ushort)(auVar29[0xf] >> 7) << 0xf) == 0xffff) {
                uVar11 = *(ulonglong *)(lVar3 + uVar15 * -0x18 + -8);
                if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
                    (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0
                    )) || (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0)
                   ) goto LAB_140c83af2;
                goto LAB_140c83b10;
              }
              uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
            if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar19 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar19 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') break;
            uVar11 = uVar11 + lVar12 + 0x10;
            lVar12 = lVar12 + 0x10;
          }
        }
LAB_140c83af2:
        uStack_29 = 0;
        pdb_1418dd200(lVar9);
        if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_140c83b10:
          lVar3 = *(longlong *)(lVar9 + 0x70);
          uVar11 = 0x8cdf713e61f0b506;
          lVar12 = 0;
          while( true ) {
            uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
            pcVar1 = (char *)(lVar3 + uVar11);
            auVar30[0] = -(*pcVar1 == DAT_142e35070);
            auVar30[1] = -(pcVar1[1] == DAT_142e35070._1_1_);
            auVar30[2] = -(pcVar1[2] == DAT_142e35070._2_1_);
            auVar30[3] = -(pcVar1[3] == DAT_142e35070._3_1_);
            auVar30[4] = -(pcVar1[4] == DAT_142e35070._4_1_);
            auVar30[5] = -(pcVar1[5] == DAT_142e35070._5_1_);
            auVar30[6] = -(pcVar1[6] == DAT_142e35070._6_1_);
            auVar30[7] = -(pcVar1[7] == DAT_142e35070._7_1_);
            auVar30[8] = -(pcVar1[8] == DAT_142e35070._8_1_);
            auVar30[9] = -(pcVar1[9] == DAT_142e35070._9_1_);
            auVar30[10] = -(pcVar1[10] == DAT_142e35070._10_1_);
            auVar30[0xb] = -(pcVar1[0xb] == DAT_142e35070._11_1_);
            auVar30[0xc] = -(pcVar1[0xc] == DAT_142e35070._12_1_);
            auVar30[0xd] = -(pcVar1[0xd] == DAT_142e35070._13_1_);
            auVar30[0xe] = -(pcVar1[0xe] == DAT_142e35070._14_1_);
            auVar30[0xf] = -(pcVar1[0xf] == DAT_142e35070._15_1_);
            uVar14 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                     (ushort)(auVar30[0xf] >> 7) << 0xf;
            uVar13 = (uint)uVar14;
            while (uVar14 != 0) {
              uVar5 = 0;
              for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              uVar15 = uVar5 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
              pcVar2 = (char *)(lVar3 + -0x18 + uVar15 * -0x18);
              auVar31[0] = -(*pcVar2 == DAT_143074690);
              auVar31[1] = -(pcVar2[1] == UNK_143074691);
              auVar31[2] = -(pcVar2[2] == UNK_143074692);
              auVar31[3] = -(pcVar2[3] == UNK_143074693);
              auVar31[4] = -(pcVar2[4] == UNK_143074694);
              auVar31[5] = -(pcVar2[5] == UNK_143074695);
              auVar31[6] = -(pcVar2[6] == UNK_143074696);
              auVar31[7] = -(pcVar2[7] == UNK_143074697);
              auVar31[8] = -(pcVar2[8] == UNK_143074698);
              auVar31[9] = -(pcVar2[9] == UNK_143074699);
              auVar31[10] = -(pcVar2[10] == UNK_14307469a);
              auVar31[0xb] = -(pcVar2[0xb] == UNK_14307469b);
              auVar31[0xc] = -(pcVar2[0xc] == UNK_14307469c);
              auVar31[0xd] = -(pcVar2[0xd] == UNK_14307469d);
              auVar31[0xe] = -(pcVar2[0xe] == UNK_14307469e);
              auVar31[0xf] = -(pcVar2[0xf] == UNK_14307469f);
              if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
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
                          (ushort)(auVar31[0xf] >> 7) << 0xf) == 0xffff) {
                uVar11 = *(ulonglong *)(lVar3 + uVar15 * -0x18 + -8);
                if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
                    (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0
                    )) || (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0)
                   ) goto LAB_140c83be2;
                goto LAB_140c83c00;
              }
              uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
            if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar20 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar20 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') break;
            uVar11 = uVar11 + lVar12 + 0x10;
            lVar12 = lVar12 + 0x10;
          }
        }
LAB_140c83be2:
        uStack_29 = 0;
        pdb_1418d1e00(lVar9);
        if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_140c83c00:
          lVar3 = *(longlong *)(lVar9 + 0x70);
          uVar11 = 0xd5979a94e81af197;
          lVar12 = 0;
          while( true ) {
            uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
            pcVar1 = (char *)(lVar3 + uVar11);
            auVar32[0] = -(*pcVar1 == DAT_142f4f230);
            auVar32[1] = -(pcVar1[1] == DAT_142f4f230._1_1_);
            auVar32[2] = -(pcVar1[2] == DAT_142f4f230._2_1_);
            auVar32[3] = -(pcVar1[3] == DAT_142f4f230._3_1_);
            auVar32[4] = -(pcVar1[4] == DAT_142f4f230._4_1_);
            auVar32[5] = -(pcVar1[5] == DAT_142f4f230._5_1_);
            auVar32[6] = -(pcVar1[6] == DAT_142f4f230._6_1_);
            auVar32[7] = -(pcVar1[7] == DAT_142f4f230._7_1_);
            auVar32[8] = -(pcVar1[8] == DAT_142f4f230._8_1_);
            auVar32[9] = -(pcVar1[9] == DAT_142f4f230._9_1_);
            auVar32[10] = -(pcVar1[10] == DAT_142f4f230._10_1_);
            auVar32[0xb] = -(pcVar1[0xb] == DAT_142f4f230._11_1_);
            auVar32[0xc] = -(pcVar1[0xc] == DAT_142f4f230._12_1_);
            auVar32[0xd] = -(pcVar1[0xd] == DAT_142f4f230._13_1_);
            auVar32[0xe] = -(pcVar1[0xe] == DAT_142f4f230._14_1_);
            auVar32[0xf] = -(pcVar1[0xf] == DAT_142f4f230._15_1_);
            uVar14 = (ushort)(SUB161(auVar32 >> 7,0) & 1) |
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
                     (ushort)(auVar32[0xf] >> 7) << 0xf;
            uVar13 = (uint)uVar14;
            while (uVar14 != 0) {
              uVar5 = 0;
              for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              uVar15 = uVar5 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
              pcVar2 = (char *)(lVar3 + -0x18 + uVar15 * -0x18);
              auVar33[0] = -(*pcVar2 == DAT_1430746a0);
              auVar33[1] = -(pcVar2[1] == UNK_1430746a1);
              auVar33[2] = -(pcVar2[2] == UNK_1430746a2);
              auVar33[3] = -(pcVar2[3] == UNK_1430746a3);
              auVar33[4] = -(pcVar2[4] == UNK_1430746a4);
              auVar33[5] = -(pcVar2[5] == UNK_1430746a5);
              auVar33[6] = -(pcVar2[6] == UNK_1430746a6);
              auVar33[7] = -(pcVar2[7] == UNK_1430746a7);
              auVar33[8] = -(pcVar2[8] == UNK_1430746a8);
              auVar33[9] = -(pcVar2[9] == UNK_1430746a9);
              auVar33[10] = -(pcVar2[10] == UNK_1430746aa);
              auVar33[0xb] = -(pcVar2[0xb] == UNK_1430746ab);
              auVar33[0xc] = -(pcVar2[0xc] == UNK_1430746ac);
              auVar33[0xd] = -(pcVar2[0xd] == UNK_1430746ad);
              auVar33[0xe] = -(pcVar2[0xe] == UNK_1430746ae);
              auVar33[0xf] = -(pcVar2[0xf] == UNK_1430746af);
              if ((ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
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
                          (ushort)(auVar33[0xf] >> 7) << 0xf) == 0xffff) {
                uVar11 = *(ulonglong *)(lVar3 + uVar15 * -0x18 + -8);
                if (((uVar11 < *(ulonglong *)(lVar9 + 0x210)) &&
                    (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 != 0
                    )) && (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) != 0)
                   ) {
                  return;
                }
                goto LAB_140c83cd2;
              }
              uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
            if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar21 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar21 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') break;
            uVar11 = uVar11 + lVar12 + 0x10;
            lVar12 = lVar12 + 0x10;
          }
        }
LAB_140c83cd2:
        uStack_29 = 0;
        pdb_1418dc000(lVar9);
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

