// VA 0x140732500, PDB extent 1492 bytes
// toolbar::mei::core::process_input_action_handlers
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::process_input_action_handlers
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 1492 */

ulonglong pdb_140732500(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ushort uVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong *puVar24;
  ulonglong uVar25;
  byte bVar26;
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
  char unaff_XMM6_Ba;
  char unaff_XMM6_Bb;
  char unaff_XMM6_Bc;
  char unaff_XMM6_Bd;
  char unaff_XMM6_Be;
  char unaff_XMM6_Bf;
  char unaff_XMM6_Bg;
  char unaff_XMM6_Bh;
  char unaff_XMM6_Bi;
  char unaff_XMM6_Bj;
  char unaff_XMM6_Bk;
  char unaff_XMM6_Bl;
  char unaff_XMM6_Bm;
  char unaff_XMM6_Bn;
  char unaff_XMM6_Bo;
  char unaff_XMM6_Bp;
  ulonglong uStack_88;
  ulonglong *puStack_80;
  ulonglong uStack_78;
  ulonglong *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_68 = param_2;
  pdb_14007ee60();
  puStack_80 = (ulonglong *)pub_1406abab0(8,8);
  if (puStack_80 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  *puStack_80 = param_2;
  uStack_88 = 1;
  uStack_78 = 1;
  if (*(longlong *)(param_1 + 0x1f8) == 0) {
    uVar22 = 1;
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x1e0);
    uVar21 = *(ulonglong *)(param_1 + 0x1e8);
    lVar23 = -8;
    lVar17 = 0;
    iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                   CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    unaff_XMM6_Ba = (char)iVar6;
    unaff_XMM6_Bb = (char)((uint)iVar6 >> 8);
    unaff_XMM6_Bc = (char)((uint)iVar6 >> 0x10);
    unaff_XMM6_Bd = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                   CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    unaff_XMM6_Be = (char)iVar6;
    unaff_XMM6_Bf = (char)((uint)iVar6 >> 8);
    unaff_XMM6_Bg = (char)((uint)iVar6 >> 0x10);
    unaff_XMM6_Bh = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                   CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    unaff_XMM6_Bi = (char)iVar6;
    unaff_XMM6_Bj = (char)((uint)iVar6 >> 8);
    unaff_XMM6_Bk = (char)((uint)iVar6 >> 0x10);
    unaff_XMM6_Bl = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                   CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
    unaff_XMM6_Bm = (char)iVar6;
    unaff_XMM6_Bn = (char)((uint)iVar6 >> 8);
    unaff_XMM6_Bo = (char)((uint)iVar6 >> 0x10);
    unaff_XMM6_Bp = (char)((uint)iVar6 >> 0x18);
LAB_1407325dc:
    uVar22 = uStack_78;
    uVar10 = pdb_1400af0a0(param_1 + 0x200,&uStack_68);
    bVar26 = (byte)(uVar10 >> 0x39);
    auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
    auVar27 = pshuflw(auVar27,auVar27,0);
    lVar13 = 0;
    while( true ) {
      uVar10 = uVar10 & uVar21;
      auVar1 = *(undefined1 (*) [16])(lVar14 + uVar10);
      auVar32[0] = -(auVar1[0] == auVar27[0]);
      auVar32[1] = -(auVar1[1] == auVar27[1]);
      auVar32[2] = -(auVar1[2] == auVar27[2]);
      auVar32[3] = -(auVar1[3] == auVar27[3]);
      auVar32[4] = -(auVar1[4] == auVar27[4]);
      auVar32[5] = -(auVar1[5] == auVar27[5]);
      auVar32[6] = -(auVar1[6] == auVar27[6]);
      auVar32[7] = -(auVar1[7] == auVar27[7]);
      auVar32[8] = -(auVar1[8] == auVar27[0]);
      auVar32[9] = -(auVar1[9] == auVar27[1]);
      auVar32[10] = -(auVar1[10] == auVar27[2]);
      auVar32[0xb] = -(auVar1[0xb] == auVar27[3]);
      auVar32[0xc] = -(auVar1[0xc] == auVar27[4]);
      auVar32[0xd] = -(auVar1[0xd] == auVar27[5]);
      auVar32[0xe] = -(auVar1[0xe] == auVar27[6]);
      auVar32[0xf] = -(auVar1[0xf] == auVar27[7]);
      uVar18 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar18;
      while (uVar18 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar19 = lVar14 + (uVar4 + uVar10 & uVar21) * -0x10;
        if (param_2 == *(ulonglong *)(lVar19 + -0x10)) {
          param_2 = *(ulonglong *)(lVar19 + -8);
          if (uVar22 == uStack_88) {
            pdb_142d7e8a0(&uStack_88);
          }
          puStack_80[uVar22] = param_2;
          uStack_78 = uVar22 + 1;
          lVar17 = lVar17 + 8;
          lVar23 = lVar23 + 8;
          uStack_68 = param_2;
          goto LAB_1407325dc;
        }
        uVar18 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar18);
      }
      auVar29[0] = -(auVar1[0] == unaff_XMM6_Ba);
      auVar29[1] = -(auVar1[1] == unaff_XMM6_Bb);
      auVar29[2] = -(auVar1[2] == unaff_XMM6_Bc);
      auVar29[3] = -(auVar1[3] == unaff_XMM6_Bd);
      auVar29[4] = -(auVar1[4] == unaff_XMM6_Be);
      auVar29[5] = -(auVar1[5] == unaff_XMM6_Bf);
      auVar29[6] = -(auVar1[6] == unaff_XMM6_Bg);
      auVar29[7] = -(auVar1[7] == unaff_XMM6_Bh);
      auVar29[8] = -(auVar1[8] == unaff_XMM6_Bi);
      auVar29[9] = -(auVar1[9] == unaff_XMM6_Bj);
      auVar29[10] = -(auVar1[10] == unaff_XMM6_Bk);
      auVar29[0xb] = -(auVar1[0xb] == unaff_XMM6_Bl);
      auVar29[0xc] = -(auVar1[0xc] == unaff_XMM6_Bm);
      auVar29[0xd] = -(auVar1[0xd] == unaff_XMM6_Bn);
      auVar29[0xe] = -(auVar1[0xe] == unaff_XMM6_Bo);
      auVar29[0xf] = -(auVar1[0xf] == unaff_XMM6_Bp);
      if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar29 >> 0x3f,0) & 1) != 0) || (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar29 >> 0x4f,0) & 1) != 0) || (SUB161(auVar29 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar29 >> 0x5f,0) & 1) != 0) || (SUB161(auVar29 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar29 >> 0x6f,0) & 1) != 0) || (SUB161(auVar29 >> 0x77,0) & 1) != 0) ||
          auVar29[0xf] < '\0') break;
      uVar10 = uVar10 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
    uVar21 = uVar22 >> 1;
    if (uVar21 != 0) {
      if (uVar22 < 8) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar21 & 0xfffffffffffffffc;
        pauVar20 = (undefined1 (*) [16])(puStack_80 + 2);
        lVar14 = 0;
        do {
          auVar27 = pauVar20[-1];
          auVar1 = *pauVar20;
          auVar32 = *(undefined1 (*) [16])((longlong)puStack_80 + lVar14 * 8 + lVar23 + -0x10);
          auVar29 = *(undefined1 (*) [16])((longlong)puStack_80 + lVar14 * 8 + lVar23);
          auVar36._0_8_ = auVar29._8_8_;
          auVar36._8_4_ = auVar29._0_4_;
          auVar36._12_4_ = auVar29._4_4_;
          auVar33._0_8_ = auVar32._8_8_;
          auVar33._8_4_ = auVar32._0_4_;
          auVar33._12_4_ = auVar32._4_4_;
          pauVar20[-1] = auVar36;
          *pauVar20 = auVar33;
          auVar28._0_8_ = auVar27._8_8_;
          auVar28._8_4_ = auVar27._0_4_;
          auVar28._12_4_ = auVar27._4_4_;
          auVar27._0_8_ = auVar1._8_8_;
          auVar27._8_4_ = auVar1._0_4_;
          auVar27._12_4_ = auVar1._4_4_;
          *(undefined1 (*) [16])((longlong)puStack_80 + lVar14 * 8 + lVar23) = auVar28;
          *(undefined1 (*) [16])((longlong)puStack_80 + lVar14 * 8 + lVar23 + -0x10) = auVar27;
          lVar14 = lVar14 + -4;
          pauVar20 = pauVar20 + 2;
        } while (-lVar14 != (uVar21 & 0xfffffffffffffffc));
        uVar22 = uStack_78;
        if (uVar21 == uVar10) goto LAB_140732752;
      }
      puVar16 = puStack_80 + uVar10;
      lVar14 = -uVar10;
      do {
        uVar22 = *puVar16;
        *puVar16 = *(ulonglong *)((longlong)puStack_80 + lVar14 * 8 + lVar17);
        *(ulonglong *)((longlong)puStack_80 + lVar14 * 8 + lVar17) = uVar22;
        lVar14 = lVar14 + -1;
        puVar16 = puVar16 + 1;
        uVar22 = uStack_78;
      } while (-lVar14 != uVar21);
    }
  }
LAB_140732752:
  puVar16 = puStack_80;
  uVar10 = uStack_88;
  puStack_70 = puStack_80 + uVar22;
  lVar14 = *(longlong *)(param_1 + 0x1c8);
  lVar17 = *(longlong *)(param_1 + 0x1b0);
  uVar21 = *(ulonglong *)(param_1 + 0x1b8);
  uVar25 = 0;
  iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                 CONCAT13(unaff_XMM6_Bp,
                          CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  for (puVar24 = puStack_80; puVar24 != puStack_70; puVar24 = puVar24 + 1) {
    uVar25 = uVar25 + 1;
    uVar2 = *puVar24;
    uStack_88 = uVar2;
    if (lVar14 != 0) {
      uVar12 = pdb_1400af0a0(param_1 + 0x1d0,&uStack_88);
      bVar26 = (byte)(uVar12 >> 0x39);
      auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
      auVar27 = pshuflw(auVar27,auVar27,0);
      lVar23 = 0;
      while( true ) {
        uVar12 = uVar12 & uVar21;
        auVar1 = *(undefined1 (*) [16])(lVar17 + uVar12);
        auVar34[0] = -(auVar1[0] == auVar27[0]);
        auVar34[1] = -(auVar1[1] == auVar27[1]);
        auVar34[2] = -(auVar1[2] == auVar27[2]);
        auVar34[3] = -(auVar1[3] == auVar27[3]);
        auVar34[4] = -(auVar1[4] == auVar27[4]);
        auVar34[5] = -(auVar1[5] == auVar27[5]);
        auVar34[6] = -(auVar1[6] == auVar27[6]);
        auVar34[7] = -(auVar1[7] == auVar27[7]);
        auVar34[8] = -(auVar1[8] == auVar27[0]);
        auVar34[9] = -(auVar1[9] == auVar27[1]);
        auVar34[10] = -(auVar1[10] == auVar27[2]);
        auVar34[0xb] = -(auVar1[0xb] == auVar27[3]);
        auVar34[0xc] = -(auVar1[0xc] == auVar27[4]);
        auVar34[0xd] = -(auVar1[0xd] == auVar27[5]);
        auVar34[0xe] = -(auVar1[0xe] == auVar27[6]);
        auVar34[0xf] = -(auVar1[0xf] == auVar27[7]);
        uVar18 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf
        ;
        uVar15 = (uint)uVar18;
        while (uVar18 != 0) {
          uVar4 = 0;
          for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          lVar13 = (uVar4 + uVar12 & uVar21) * -0xd8;
          if (uVar2 == *(ulonglong *)(lVar17 + -0xd8 + lVar13)) {
            lVar13 = lVar13 + lVar17;
            lVar23 = *(longlong *)(lVar13 + -0x38);
            if (lVar23 == 0) goto LAB_140732890;
            uStack_68 = uStack_68 & 0xffffffffffff0000;
            uVar11 = (**(code **)(*(longlong *)(lVar13 + -0x30) + 0x50))(lVar23,param_3,&uStack_68);
            if ((char)uVar11 == '\0') goto LAB_140732890;
            if (uVar22 < uVar25) {
              pdb_142dc8420(0,uVar25,uVar22,&UNK_142fa6c00);
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            puStack_70 = (ulonglong *)
                         CONCAT44(puStack_70._4_4_,(int)CONCAT71((int7)((ulonglong)uVar11 >> 8),1));
            uVar22 = uVar25;
            goto LAB_1407328a1;
          }
          uVar18 = (ushort)(uVar15 - 1) & (ushort)uVar15;
          uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar18);
        }
        auVar30[0] = -(auVar1[0] == (char)iVar6);
        auVar30[1] = -(auVar1[1] == (char)((uint)iVar6 >> 8));
        auVar30[2] = -(auVar1[2] == (char)((uint)iVar6 >> 0x10));
        auVar30[3] = -(auVar1[3] == (char)((uint)iVar6 >> 0x18));
        auVar30[4] = -(auVar1[4] == (char)iVar7);
        auVar30[5] = -(auVar1[5] == (char)((uint)iVar7 >> 8));
        auVar30[6] = -(auVar1[6] == (char)((uint)iVar7 >> 0x10));
        auVar30[7] = -(auVar1[7] == (char)((uint)iVar7 >> 0x18));
        auVar30[8] = -(auVar1[8] == (char)iVar8);
        auVar30[9] = -(auVar1[9] == (char)((uint)iVar8 >> 8));
        auVar30[10] = -(auVar1[10] == (char)((uint)iVar8 >> 0x10));
        auVar30[0xb] = -(auVar1[0xb] == (char)((uint)iVar8 >> 0x18));
        auVar30[0xc] = -(auVar1[0xc] == (char)iVar9);
        auVar30[0xd] = -(auVar1[0xd] == (char)((uint)iVar9 >> 8));
        auVar30[0xe] = -(auVar1[0xe] == (char)((uint)iVar9 >> 0x10));
        auVar30[0xf] = -(auVar1[0xf] == (char)((uint)iVar9 >> 0x18));
        if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar30 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar30 >> 0x1f,0) & 1) != 0) || (SUB161(auVar30 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar30 >> 0x37,0) & 1) != 0) || (SUB161(auVar30 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar30 >> 0x47,0) & 1) != 0) || (SUB161(auVar30 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar30 >> 0x57,0) & 1) != 0) || (SUB161(auVar30 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar30 >> 0x67,0) & 1) != 0) || (SUB161(auVar30 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar30 >> 0x77,0) & 1) != 0) || auVar30[0xf] < '\0') break;
        uVar12 = uVar12 + lVar23 + 0x10;
        lVar23 = lVar23 + 0x10;
      }
    }
LAB_140732890:
  }
  puStack_70 = (ulonglong *)((ulonglong)puStack_70 & 0xffffffff00000000);
LAB_1407328a1:
  puVar24 = puVar16 + uVar22;
  do {
    if (puVar16 == puVar24) {
LAB_1407329be:
      if (uVar10 != 0) {
        pub_1406abac0((byte *)puVar16,uVar10 << 3,8);
      }
      return (ulonglong)puStack_70 & 0xffffffff;
    }
    uVar22 = puVar24[-1];
    uStack_88 = uVar22;
    if (lVar14 != 0) {
      uVar25 = pdb_1400af0a0(param_1 + 0x1d0,&uStack_88);
      bVar26 = (byte)(uVar25 >> 0x39);
      auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
      auVar27 = pshuflw(auVar27,auVar27,0);
      lVar23 = 0;
      while( true ) {
        uVar25 = uVar25 & uVar21;
        auVar1 = *(undefined1 (*) [16])(lVar17 + uVar25);
        auVar35[0] = -(auVar1[0] == auVar27[0]);
        auVar35[1] = -(auVar1[1] == auVar27[1]);
        auVar35[2] = -(auVar1[2] == auVar27[2]);
        auVar35[3] = -(auVar1[3] == auVar27[3]);
        auVar35[4] = -(auVar1[4] == auVar27[4]);
        auVar35[5] = -(auVar1[5] == auVar27[5]);
        auVar35[6] = -(auVar1[6] == auVar27[6]);
        auVar35[7] = -(auVar1[7] == auVar27[7]);
        auVar35[8] = -(auVar1[8] == auVar27[0]);
        auVar35[9] = -(auVar1[9] == auVar27[1]);
        auVar35[10] = -(auVar1[10] == auVar27[2]);
        auVar35[0xb] = -(auVar1[0xb] == auVar27[3]);
        auVar35[0xc] = -(auVar1[0xc] == auVar27[4]);
        auVar35[0xd] = -(auVar1[0xd] == auVar27[5]);
        auVar35[0xe] = -(auVar1[0xe] == auVar27[6]);
        auVar35[0xf] = -(auVar1[0xf] == auVar27[7]);
        uVar18 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf
        ;
        uVar15 = (uint)uVar18;
        while (uVar18 != 0) {
          uVar4 = 0;
          for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          lVar13 = (uVar4 + uVar25 & uVar21) * -0xd8;
          if (uVar22 == *(ulonglong *)(lVar17 + -0xd8 + lVar13)) {
            lVar13 = lVar13 + lVar17;
            lVar23 = *(longlong *)(lVar13 + -0x38);
            if (lVar23 == 0) goto LAB_1407329a0;
            uStack_68._0_2_ = CONCAT11((char)puStack_70,1);
            uVar11 = (**(code **)(*(longlong *)(lVar13 + -0x30) + 0x50))(lVar23,param_3,&uStack_68);
            if ((char)uVar11 == '\0') goto LAB_1407329a0;
            puStack_70 = (ulonglong *)
                         CONCAT44(puStack_70._4_4_,(int)CONCAT71((int7)((ulonglong)uVar11 >> 8),1));
            goto LAB_1407329be;
          }
          uVar18 = (ushort)(uVar15 - 1) & (ushort)uVar15;
          uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar18);
        }
        auVar31[0] = -(auVar1[0] == -1);
        auVar31[1] = -(auVar1[1] == -1);
        auVar31[2] = -(auVar1[2] == -1);
        auVar31[3] = -(auVar1[3] == -1);
        auVar31[4] = -(auVar1[4] == -1);
        auVar31[5] = -(auVar1[5] == -1);
        auVar31[6] = -(auVar1[6] == -1);
        auVar31[7] = -(auVar1[7] == -1);
        auVar31[8] = -(auVar1[8] == -1);
        auVar31[9] = -(auVar1[9] == -1);
        auVar31[10] = -(auVar1[10] == -1);
        auVar31[0xb] = -(auVar1[0xb] == -1);
        auVar31[0xc] = -(auVar1[0xc] == -1);
        auVar31[0xd] = -(auVar1[0xd] == -1);
        auVar31[0xe] = -(auVar1[0xe] == -1);
        auVar31[0xf] = -(auVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar31 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar31 >> 0x1f,0) & 1) != 0) || (SUB161(auVar31 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar31 >> 0x37,0) & 1) != 0) || (SUB161(auVar31 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar31 >> 0x47,0) & 1) != 0) || (SUB161(auVar31 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar31 >> 0x57,0) & 1) != 0) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') break;
        uVar25 = uVar25 + lVar23 + 0x10;
        lVar23 = lVar23 + 0x10;
      }
    }
LAB_1407329a0:
    puVar24 = puVar24 + -1;
  } while( true );
}

