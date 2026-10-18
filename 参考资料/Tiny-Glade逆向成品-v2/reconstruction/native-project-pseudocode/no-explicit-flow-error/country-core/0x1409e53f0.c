// VA 0x1409e53f0, PDB extent 2985 bytes
// country_core::startup::startup_nani::nani_on_scene_load
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_nani.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_nani::nani_on_scene_load
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_nani.rs
   Extent: 2985 */

void pdb_1409e53f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7,longlong *param_8,
                  undefined8 param_9)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ushort uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong lVar24;
  bool bVar25;
  byte bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  undefined8 auStack_230 [2];
  longlong *plStack_220;
  longlong *plStack_218;
  ulonglong *puStack_208;
  code *pcStack_200;
  ulonglong *puStack_1f8;
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1dc;
  undefined4 uStack_1d4;
  ulonglong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  longlong lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  ulonglong uStack_180;
  byte bStack_178;
  undefined8 uStack_160;
  undefined4 *puStack_158;
  longlong *plStack_150;
  longlong *plStack_148;
  ulonglong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  undefined4 uStack_104;
  longlong *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uVar14 = _UNK_142e4e658;
  uVar13 = _DAT_142e4e650;
  uStack_70 = 0xfffffffffffffffe;
  lVar3 = *param_8;
  uStack_b8 = *(ulonglong *)(lVar3 + 0x1258);
  uStack_f8._0_1_ = 0;
  if ((uStack_b8 & 0x3f) == 0) {
    uStack_b8 = *(ulonglong *)(lVar3 + 0x1260);
    uStack_f8._0_1_ = 1;
    if ((uStack_b8 & 0x3f) == 0) {
      uStack_b8 = *(ulonglong *)(lVar3 + 0x1268);
      uStack_f8._0_1_ = 2;
      if ((uStack_b8 & 0x3f) == 0) {
        uStack_b8 = *(ulonglong *)(lVar3 + 0x1270);
        uStack_f8._0_1_ = 3;
        if ((uStack_b8 & 0x3f) == 0) {
          uStack_b8 = *(ulonglong *)(lVar3 + 0x1278);
          uStack_f8._0_1_ = 4;
          if ((uStack_b8 & 0x3f) == 0) {
            uStack_b8 = *(ulonglong *)(lVar3 + 0x1280);
            uStack_f8._0_1_ = 5;
            if ((uStack_b8 & 0x3f) == 0) {
              uStack_b8 = *(ulonglong *)(lVar3 + 0x1288);
              uStack_f8._0_1_ = 6;
              if ((uStack_b8 & 0x3f) == 0) {
                uStack_b8 = *(ulonglong *)(lVar3 + 0x1290);
                uStack_f8._0_1_ = 7;
                if ((uStack_b8 & 0x3f) == 0) {
                  uStack_b8 = *(ulonglong *)(lVar3 + 0x1298);
                  uStack_f8._0_1_ = 8;
                  if ((uStack_b8 & 0x3f) == 0) {
                    uStack_b8 = *(ulonglong *)(lVar3 + 0x12a0);
                    uStack_f8._0_1_ = 9;
                    if ((uStack_b8 & 0x3f) == 0) {
                      uStack_b8 = *(ulonglong *)(lVar3 + 0x12a8);
                      uStack_f8._0_1_ = 10;
                      if ((uStack_b8 & 0x3f) == 0) {
                        uStack_b8 = *(ulonglong *)(lVar3 + 0x12b0);
                        uStack_f8._0_1_ = 0xb;
                        if ((uStack_b8 & 0x3f) == 0) {
                          uStack_b8 = *(ulonglong *)(lVar3 + 0x12b8);
                          uStack_f8._0_1_ = 0xc;
                          if ((uStack_b8 & 0x3f) == 0) {
                            uStack_b8 = *(ulonglong *)(lVar3 + 0x12c0);
                            uStack_f8._0_1_ = 0xd;
                            if ((uStack_b8 & 0x3f) == 0) {
                              uStack_b8 = *(ulonglong *)(lVar3 + 0x12c8);
                              uStack_f8._0_1_ = 0xe;
                              if ((uStack_b8 & 0x3f) == 0) {
                                uStack_b8 = *(ulonglong *)(lVar3 + 0x12d0);
                                uStack_f8._0_1_ = 0xf;
                                if ((uStack_b8 & 0x3f) == 0) {
                                  uStack_b8 = *(ulonglong *)(lVar3 + 0x12d8);
                                  uStack_f8._0_1_ = 0x10;
                                  if ((uStack_b8 & 0x3f) == 0) {
                                    uStack_b8 = *(ulonglong *)(lVar3 + 0x12e0);
                                    uStack_f8._0_1_ = 0x11;
                                    if ((uStack_b8 & 0x3f) == 0) {
                                      uStack_b8 = *(ulonglong *)(lVar3 + 0x12e8);
                                      uStack_f8._0_1_ = 0x12;
                                      if ((uStack_b8 & 0x3f) == 0) {
                                        uStack_b8 = *(ulonglong *)(lVar3 + 0x12f0);
                                        uStack_f8._0_1_ = 0x13;
                                        if ((uStack_b8 & 0x3f) == 0) {
                                          uStack_b8 = *(ulonglong *)(lVar3 + 0x12f8);
                                          uStack_f8._0_1_ = 0x14;
                                          if ((uStack_b8 & 0x3f) == 0) {
                                            uStack_b8 = *(ulonglong *)(lVar3 + 0x1300);
                                            uStack_f8._0_1_ = 0x15;
                                            if ((uStack_b8 & 0x3f) == 0) {
                                              uStack_b8 = *(ulonglong *)(lVar3 + 0x1308);
                                              uStack_f8._0_1_ = 0x16;
                                              if ((uStack_b8 & 0x3f) == 0) {
                                                uStack_b8 = *(ulonglong *)(lVar3 + 0x1310);
                                                uStack_f8._0_1_ = 0x17;
                                                if ((uStack_b8 & 0x3f) == 0) {
                                                  uStack_b8 = *(ulonglong *)(lVar3 + 0x1318);
                                                  uStack_f8._0_1_ = 0x18;
                                                  if ((uStack_b8 & 0x3f) == 0) {
                                                    uStack_b8 = *(ulonglong *)(lVar3 + 0x1320);
                                                    uStack_f8._0_1_ = 0x19;
                                                    if ((uStack_b8 & 0x3f) == 0) {
                                                      uStack_b8 = *(ulonglong *)(lVar3 + 0x1328);
                                                      uStack_f8._0_1_ = 0x1a;
                                                      if ((uStack_b8 & 0x3f) == 0) {
                                                        uStack_b8 = *(ulonglong *)(lVar3 + 0x1330);
                                                        uStack_f8._0_1_ = 0x1b;
                                                        if ((uStack_b8 & 0x3f) == 0) {
                                                          uStack_b8 = *(ulonglong *)(lVar3 + 0x1338)
                                                          ;
                                                          uStack_f8._0_1_ = 0x1c;
                                                          if ((uStack_b8 & 0x3f) == 0) {
                                                            lVar17 = *(longlong *)*param_1 + 0x10;
                                                            plStack_150 = (longlong *)*param_7;
                                                            uStack_160 = *param_3;
                                                            uStack_138 = *param_2;
                                                            uStack_130 = *param_4;
                                                            uStack_128 = *param_5;
                                                            uStack_120 = *param_6;
                                                            uStack_104 = *(undefined4 *)
                                                                          ((longlong)param_8 + 0x1c)
                                                            ;
                                                            puStack_158 = (undefined4 *)param_8[2];
                                                            plStack_148 = plStack_150 + 4;
                                                            iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                                                                                     CONCAT12(
                                                  unaff_XMM6_Bc,
                                                  CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                                                  CONCAT13(unaff_XMM6_Bd,
                                                           CONCAT12(unaff_XMM6_Bc,
                                                                    CONCAT11(unaff_XMM6_Bb,
                                                                             unaff_XMM6_Ba))));
                                                  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                                                                           CONCAT12(unaff_XMM6_Bg,
                                                                                    CONCAT11(
                                                  unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                                                  CONCAT13(unaff_XMM6_Bh,
                                                           CONCAT12(unaff_XMM6_Bg,
                                                                    CONCAT11(unaff_XMM6_Bf,
                                                                             unaff_XMM6_Be))));
                                                  iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                                                                            CONCAT12(unaff_XMM6_Bk,
                                                                                     CONCAT11(
                                                  unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                                                  CONCAT13(unaff_XMM6_Bl,
                                                           CONCAT12(unaff_XMM6_Bk,
                                                                    CONCAT11(unaff_XMM6_Bj,
                                                                             unaff_XMM6_Bi))));
                                                  iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                                                                            CONCAT12(unaff_XMM6_Bo,
                                                                                     CONCAT11(
                                                  unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                                                  CONCAT13(unaff_XMM6_Bp,
                                                           CONCAT12(unaff_XMM6_Bo,
                                                                    CONCAT11(unaff_XMM6_Bn,
                                                                             unaff_XMM6_Bm))));
                                                  uVar21 = 0;
LAB_1409e5842:
                                                  plVar23 = plStack_150;
                                                  iVar12 = (int)uVar21;
                                                  if ((char)uVar21 == '\x1d') {
                                                    return;
                                                  }
                                                  uStack_b8 = CONCAT71(uStack_b8._1_7_,(char)uVar21)
                                                  ;
                                                  if (plStack_150[3] != 0) {
                                                    uVar15 = pdb_1417c4b30(plStack_148,&uStack_b8);
                                                    lVar24 = *plVar23;
                                                    uVar4 = plVar23[1];
                                                    bVar26 = (byte)(uVar15 >> 0x39);
                                                    auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
                                                    auVar27 = pshuflw(auVar27,auVar27,0);
                                                    lVar18 = 0;
                                                    while( true ) {
                                                      uVar15 = uVar15 & uVar4;
                                                      auVar2 = *(undefined1 (*) [16])
                                                                (lVar24 + uVar15);
                                                      auVar29[0] = -(auVar2[0] == auVar27[0]);
                                                      auVar29[1] = -(auVar2[1] == auVar27[1]);
                                                      auVar29[2] = -(auVar2[2] == auVar27[2]);
                                                      auVar29[3] = -(auVar2[3] == auVar27[3]);
                                                      auVar29[4] = -(auVar2[4] == auVar27[4]);
                                                      auVar29[5] = -(auVar2[5] == auVar27[5]);
                                                      auVar29[6] = -(auVar2[6] == auVar27[6]);
                                                      auVar29[7] = -(auVar2[7] == auVar27[7]);
                                                      auVar29[8] = -(auVar2[8] == auVar27[0]);
                                                      auVar29[9] = -(auVar2[9] == auVar27[1]);
                                                      auVar29[10] = -(auVar2[10] == auVar27[2]);
                                                      auVar29[0xb] = -(auVar2[0xb] == auVar27[3]);
                                                      auVar29[0xc] = -(auVar2[0xc] == auVar27[4]);
                                                      auVar29[0xd] = -(auVar2[0xd] == auVar27[5]);
                                                      auVar29[0xe] = -(auVar2[0xe] == auVar27[6]);
                                                      auVar29[0xf] = -(auVar2[0xf] == auVar27[7]);
                                                      uVar20 = (ushort)(SUB161(auVar29 >> 7,0) & 1)
                                                               | (ushort)(SUB161(auVar29 >> 0xf,0) &
                                                                         1) << 1 |
                                                               (ushort)(SUB161(auVar29 >> 0x17,0) &
                                                                       1) << 2 |
                                                               (ushort)(SUB161(auVar29 >> 0x1f,0) &
                                                                       1) << 3 |
                                                               (ushort)(SUB161(auVar29 >> 0x27,0) &
                                                                       1) << 4 |
                                                               (ushort)(SUB161(auVar29 >> 0x2f,0) &
                                                                       1) << 5 |
                                                               (ushort)(SUB161(auVar29 >> 0x37,0) &
                                                                       1) << 6 |
                                                               (ushort)(SUB161(auVar29 >> 0x3f,0) &
                                                                       1) << 7 |
                                                               (ushort)(SUB161(auVar29 >> 0x47,0) &
                                                                       1) << 8 |
                                                               (ushort)(SUB161(auVar29 >> 0x4f,0) &
                                                                       1) << 9 |
                                                               (ushort)(SUB161(auVar29 >> 0x57,0) &
                                                                       1) << 10 |
                                                               (ushort)(SUB161(auVar29 >> 0x5f,0) &
                                                                       1) << 0xb |
                                                               (ushort)(SUB161(auVar29 >> 0x67,0) &
                                                                       1) << 0xc |
                                                               (ushort)(SUB161(auVar29 >> 0x6f,0) &
                                                                       1) << 0xd |
                                                               (ushort)(SUB161(auVar29 >> 0x77,0) &
                                                                       1) << 0xe |
                                                               (ushort)(auVar29[0xf] >> 7) << 0xf;
                                                      uVar19 = (uint)uVar20;
                                                      while (uVar20 != 0) {
                                                        uVar6 = 0;
                                                        for (uVar7 = uVar19; (uVar7 & 1) == 0;
                                                            uVar7 = uVar7 >> 1 | 0x80000000) {
                                                          uVar6 = uVar6 + 1;
                                                        }
                                                        lVar22 = (uVar6 + uVar15 & uVar4) * -0xf0;
                                                        if ((char)uStack_b8 ==
                                                            *(char *)(lVar24 + -0xf0 + lVar22)) {
                                                          uStack_c0 = uVar21;
                                                          pdb_140a596f0(&uStack_f8,uStack_160,
                                                                        *(undefined8 *)
                                                                         (&UNK_143032f90 +
                                                                         (uint)(iVar12 << 3)),
                                                                        *(undefined8 *)
                                                                         (&UNK_143032ea8 +
                                                                         (uint)(iVar12 << 3)),
                                                                        &UNK_143031520);
                                                          lVar18 = lVar3 + 0x38;
                                                          plVar23 = (longlong *)
                                                                    (lVar18 + (ulonglong)
                                                                              (uint)(iVar12 * 0xa0))
                                                          ;
                                                          plVar1 = (longlong *)
                                                                   (lVar18 + (ulonglong)
                                                                             (uint)(iVar12 * 0xa0));
                                                          LOCK();
                                                          bVar25 = *plVar1 == 0;
                                                          if (bVar25) {
                                                            *plVar1 = 8;
                                                          }
                                                          UNLOCK();
                                                          uStack_140 = uVar21;
                                                          if (!bVar25) {
                                                            uStack_71 = 1;
                                                            pdb_142dbc1f0(plVar23,lVar18,1000000000)
                                                            ;
                                                          }
                                                          uStack_71 = 1;
                                                          pdb_140e9a150(plVar23);
                                                          uStack_71 = 1;
                                                          pdb_140e9a150((ulonglong)plVar23 | 1);
                                                          plStack_100 = plVar23;
                                                          if (plVar23[1] == -0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                            pdb_142dc8150(&UNK_14302d678);
                                                          }
                                                          lVar24 = lVar24 + lVar22;
                                                          uStack_88 = uStack_c8;
                                                          uStack_b8 = CONCAT71(uStack_f8._1_7_,
                                                                               (undefined1)uStack_f8
                                                                              );
                                                          uStack_98 = uStack_d8;
                                                          lStack_90 = lStack_d0;
                                                          uStack_a8 = uStack_e8;
                                                          uStack_a0 = uStack_e0;
                                                          uStack_b0 = uStack_f0;
                                                          if (*(int *)(lVar24 + -0xe8) == 1) {
                                                            if (lStack_d0 == 0) {
                                                              uStack_72 = 1;
                    /* WARNING: Subroutine does not return */
                                                              pdb_142dc8150(&UNK_143031668);
                                                            }
                                                            uVar5 = *(undefined8 *)(lVar24 + -0xe0);
                                                            uStack_72 = 1;
                                                            uVar16 = pdb_140e51270(lVar17,&lStack_90
                                                                                  );
                                                            uStack_73 = 1;
                                                            lStack_118 = lVar17;
                                                            uStack_110 = uVar16;
                                                            pdb_1409e6ab0(uStack_c0,&uStack_110,
                                                                          plStack_100 + 1,uStack_138
                                                                          ,uStack_130,uStack_128,
                                                                          uStack_120,lVar17);
                                                            if ((DAT_143cb2ce8 != '\0') ||
                                                               ((pcStack_188 = pdb_1409e64e0,
                                                                (byte)uStack_c0 < 2 &&
                                                                (pcStack_188 = pdb_1409e64e0,
                                                                DAT_143cb2ce9 == '\0')))) {
                                                              pcStack_188 = pdb_1409e5fa0;
                                                            }
                                                            uStack_198 = uStack_88;
                                                            uStack_1a8 = uStack_98;
                                                            lStack_1a0 = lStack_90;
                                                            uStack_1b8 = uStack_a8;
                                                            uStack_1b0 = uStack_a0;
                                                            uStack_1c8 = uStack_b8;
                                                            uStack_1c0 = uStack_b0;
                                                            puStack_208 = (ulonglong *)
                                                                          ((ulonglong)puStack_208 &
                                                                          0xffffffff00000000);
                                                            uStack_1e0 = 0;
                                                            uStack_1e8 = 0;
                                                            puStack_1f8 = (ulonglong *)uVar13;
                                                            pcStack_1f0 = (code *)uVar14;
                                                            uStack_1dc = 0x3f8000003f800000;
                                                            uStack_1d4 = 0x3f800000;
                                                            uStack_180 = uStack_140;
                                                            uStack_73 = 0;
                                                            pcStack_200 = (code *)uVar5;
                                                            uStack_190 = uVar16;
                                                            bStack_178 = (byte)uStack_c0;
                                                            pdb_141620010(auStack_230,param_9,
                                                                          &puStack_208,
                                                                          &UNK_143031680);
                                                            uVar5 = auStack_230[0];
                                                            lVar17 = lStack_118;
                                                            if ((byte)uStack_c0 == '\x1c') {
                                                              plVar23 = plStack_220;
                                                              if (plStack_220 == (longlong *)0x0) {
                                                                plVar23 = plStack_218;
                                                              }
                                                              lVar17 = plVar23[2];
                                                              if ((ulonglong)(*plVar23 - lVar17) <
                                                                  0x18) {
                                                                uStack_73 = 0;
                                                                pdb_142d7f1b0(plVar23,lVar17,0x18,1,
                                                                              1);
                                                              }
                                                              lVar18 = plVar23[1];
                                                              *(code **)(lVar18 + lVar17) =
                                                                   pdb_141609480;
                                                              *(undefined8 *)(lVar18 + 8 + lVar17) =
                                                                   uVar5;
                                                              *(undefined1 *)
                                                               (lVar18 + 0x10 + lVar17) = 0;
                                                              plVar23[2] = lVar17 + 0x18;
                                                              lVar17 = lStack_118;
                                                            }
                                                          }
                                                          else {
                                                            pdb_1409694c0(&uStack_f8);
                                                          }
                                                          plVar23 = plStack_100;
                                                          uStack_71 = 0;
                                                          pdb_140e9a350(plStack_100);
                                                          uStack_71 = 0;
                                                          pdb_140e9a350();
                                                          LOCK();
                                                          lVar18 = *plVar23;
                                                          if (lVar18 == 8) {
                                                            *plVar23 = 0;
                                                          }
                                                          UNLOCK();
                                                          if (lVar18 != 8) {
                                                            uStack_71 = 0;
                                                            pdb_142dbca40(plVar23,0);
                                                          }
                                                          *puStack_158 = uStack_104;
                                                          uStack_71 = 0;
                                                          pdb_1409d3790(lVar3,lVar17,uStack_c0,
                                                                        *(undefined8 *)
                                                                         (lVar24 + -0x50),
                                                                        *(undefined8 *)
                                                                         (lVar24 + -0x48));
                                                          uVar21 = (ulonglong)(iVar12 + 1U & 0xff);
                                                          goto LAB_1409e5842;
                                                        }
                                                        uVar20 = (ushort)(uVar19 - 1) &
                                                                 (ushort)uVar19;
                                                        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10
                                                                                 ),uVar20);
                                                      }
                                                      auVar28[0] = -(auVar2[0] == (char)iVar8);
                                                      auVar28[1] = -(auVar2[1] ==
                                                                    (char)((uint)iVar8 >> 8));
                                                      auVar28[2] = -(auVar2[2] ==
                                                                    (char)((uint)iVar8 >> 0x10));
                                                      auVar28[3] = -(auVar2[3] ==
                                                                    (char)((uint)iVar8 >> 0x18));
                                                      auVar28[4] = -(auVar2[4] == (char)iVar9);
                                                      auVar28[5] = -(auVar2[5] ==
                                                                    (char)((uint)iVar9 >> 8));
                                                      auVar28[6] = -(auVar2[6] ==
                                                                    (char)((uint)iVar9 >> 0x10));
                                                      auVar28[7] = -(auVar2[7] ==
                                                                    (char)((uint)iVar9 >> 0x18));
                                                      auVar28[8] = -(auVar2[8] == (char)iVar10);
                                                      auVar28[9] = -(auVar2[9] ==
                                                                    (char)((uint)iVar10 >> 8));
                                                      auVar28[10] = -(auVar2[10] ==
                                                                     (char)((uint)iVar10 >> 0x10));
                                                      auVar28[0xb] = -(auVar2[0xb] ==
                                                                      (char)((uint)iVar10 >> 0x18));
                                                      auVar28[0xc] = -(auVar2[0xc] == (char)iVar11);
                                                      auVar28[0xd] = -(auVar2[0xd] ==
                                                                      (char)((uint)iVar11 >> 8));
                                                      auVar28[0xe] = -(auVar2[0xe] ==
                                                                      (char)((uint)iVar11 >> 0x10));
                                                      auVar28[0xf] = -(auVar2[0xf] ==
                                                                      (char)((uint)iVar11 >> 0x18));
                                                      if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1)
                                                                        != 0 || (SUB161(auVar28 >>
                                                                                        0xf,0) & 1)
                                                                                != 0) ||
                                                                      (SUB161(auVar28 >> 0x17,0) & 1
                                                                      ) != 0) ||
                                                                     (SUB161(auVar28 >> 0x1f,0) & 1)
                                                                     != 0) || (SUB161(auVar28 >>
                                                                                      0x27,0) & 1)
                                                                              != 0) ||
                                                                   (SUB161(auVar28 >> 0x2f,0) & 1)
                                                                   != 0) || (SUB161(auVar28 >> 0x37,
                                                                                    0) & 1) != 0) ||
                                                                 (SUB161(auVar28 >> 0x3f,0) & 1) !=
                                                                 0) || (SUB161(auVar28 >> 0x47,0) &
                                                                       1) != 0) ||
                                                               (SUB161(auVar28 >> 0x4f,0) & 1) != 0)
                                                              || (SUB161(auVar28 >> 0x57,0) & 1) !=
                                                                 0) || (SUB161(auVar28 >> 0x5f,0) &
                                                                       1) != 0) ||
                                                            (SUB161(auVar28 >> 0x67,0) & 1) != 0) ||
                                                           (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
                                                          (SUB161(auVar28 >> 0x77,0) & 1) != 0) ||
                                                          auVar28[0xf] < '\0') break;
                                                      uVar15 = uVar15 + lVar18 + 0x10;
                                                      lVar18 = lVar18 + 0x10;
                                                    }
                                                  }
                                                  puStack_208 = &uStack_b8;
                                                  pcStack_200 = pdb_140a593a0;
                    /* WARNING: Subroutine does not return */
                                                  pdb_142dc83d0(&UNK_14303dd85,&puStack_208,
                                                                &UNK_14303dde0);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puStack_208 = &uStack_f8;
  pcStack_200 = pdb_140a593a0;
  puStack_1f8 = &uStack_b8;
  pcStack_1f0 = pdb_140f72a40;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14303d4f0,&puStack_208,&UNK_14303d530);
}

