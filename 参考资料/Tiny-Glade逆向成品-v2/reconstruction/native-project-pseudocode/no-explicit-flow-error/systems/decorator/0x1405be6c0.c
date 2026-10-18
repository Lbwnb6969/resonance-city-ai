// VA 0x1405be6c0, PDB extent 1070 bytes
// system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::playermade_stairs_assemble::closure$39<true>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::playermade_stairs_assemble::closure$39<true>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
   Extent: 1070 */

undefined8 pdb_1405be6c0(undefined8 *param_1,int param_2,int param_3,char param_4)

{
  char *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  ushort uVar22;
  longlong lVar23;
  byte bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  char cVar30;
  undefined1 unaff_XMM6_Bc;
  char cVar31;
  undefined1 unaff_XMM6_Bd;
  char cVar32;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  char cVar33;
  undefined1 unaff_XMM6_Bg;
  char cVar34;
  undefined1 unaff_XMM6_Bh;
  char cVar35;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  char cVar36;
  undefined1 unaff_XMM6_Bk;
  char cVar37;
  undefined1 unaff_XMM6_Bl;
  char cVar38;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  char cVar39;
  undefined1 unaff_XMM6_Bo;
  char cVar40;
  undefined1 unaff_XMM6_Bp;
  char cVar41;
  int iStack_b0;
  int iStack_ac;
  longlong lStack_a8;
  longlong lStack_a0;
  int iStack_98;
  int iStack_94;
  longlong lStack_90;
  longlong lStack_88;
  longlong *plStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  int iStack_60;
  
  lVar14 = pdb_140a61160(*(undefined8 *)*param_1);
  lStack_78 = CONCAT44(lStack_78._4_4_,param_2);
  uVar19 = *(ulonglong *)(lVar14 + 0x10);
  lStack_68 = 4;
  if (uVar19 == 0) {
LAB_1405be770:
    lStack_70 = 4;
  }
  else {
    if (uVar19 == 1) {
      lVar18 = *(longlong *)(lVar14 + 8);
      lStack_70 = 4;
      if (param_2 != *(int *)(lVar18 + 0x20)) goto LAB_1405be775;
      uVar16 = 0;
    }
    else {
      uVar16 = pdb_1400aede0(lVar14 + 0x38,&lStack_78);
      uVar17 = pdb_140401410(lVar14,uVar16,&lStack_78);
      if ((uVar17 & 1) == 0) goto LAB_1405be770;
      if (uVar19 <= uVar16) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar16,uVar19,&UNK_142f77528);
      }
      lVar18 = *(longlong *)(lVar14 + 8);
      lStack_70 = 4;
      if (lVar18 == 0) goto LAB_1405be775;
    }
    lStack_70 = *(longlong *)(lVar18 + 8 + uVar16 * 0x28);
    lStack_68 = lStack_70 + *(longlong *)(lVar18 + 0x10 + uVar16 * 0x28) * 8;
  }
LAB_1405be775:
  lStack_78 = lVar14 + 0x48;
  plVar3 = (longlong *)param_1[1];
  lVar14 = param_1[2];
  plVar4 = (longlong *)param_1[3];
  iStack_60 = param_2;
  pdb_1405c8820(&iStack_b0,&lStack_78);
  if (lStack_a8 == 0) {
    return 0;
  }
  plStack_80 = plVar4 + 4;
  lStack_88 = lVar14 + 0x48;
  lStack_90 = lVar14 + 0x80;
  iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  cVar30 = (char)((uint)iVar7 >> 8);
  cVar31 = (char)((uint)iVar7 >> 0x10);
  cVar32 = (char)((uint)iVar7 >> 0x18);
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  cVar33 = (char)((uint)iVar8 >> 8);
  cVar34 = (char)((uint)iVar8 >> 0x10);
  cVar35 = (char)((uint)iVar8 >> 0x18);
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  cVar36 = (char)((uint)iVar9 >> 8);
  cVar37 = (char)((uint)iVar9 >> 0x10);
  cVar38 = (char)((uint)iVar9 >> 0x18);
  iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  cVar39 = (char)((uint)iVar10 >> 8);
  cVar40 = (char)((uint)iVar10 >> 0x10);
  cVar41 = (char)((uint)iVar10 >> 0x18);
LAB_1405bea20:
  iVar12 = iStack_ac;
  iVar11 = iStack_b0;
  if (iStack_ac != param_3 || iStack_b0 != param_2) {
    uVar13 = pdb_140a61520(iStack_b0,iStack_ac);
    lVar18 = pdb_140c017b0(uVar13);
    lStack_a0 = lVar18;
    if (plVar3[3] != 0) {
      uVar19 = pdb_1400af0a0(plVar3 + 4,&lStack_a0);
      bVar24 = (byte)(uVar19 >> 0x39);
      auVar25 = ZEXT216(CONCAT11(bVar24,bVar24));
      auVar25 = pshuflw(auVar25,auVar25,0);
      lVar20 = 0;
      while( true ) {
        uVar19 = uVar19 & plVar3[1];
        auVar29 = *(undefined1 (*) [16])(*plVar3 + uVar19);
        auVar28[0] = -(auVar29[0] == auVar25[0]);
        auVar28[1] = -(auVar29[1] == auVar25[1]);
        auVar28[2] = -(auVar29[2] == auVar25[2]);
        auVar28[3] = -(auVar29[3] == auVar25[3]);
        auVar28[4] = -(auVar29[4] == auVar25[4]);
        auVar28[5] = -(auVar29[5] == auVar25[5]);
        auVar28[6] = -(auVar29[6] == auVar25[6]);
        auVar28[7] = -(auVar29[7] == auVar25[7]);
        auVar28[8] = -(auVar29[8] == auVar25[0]);
        auVar28[9] = -(auVar29[9] == auVar25[1]);
        auVar28[10] = -(auVar29[10] == auVar25[2]);
        auVar28[0xb] = -(auVar29[0xb] == auVar25[3]);
        auVar28[0xc] = -(auVar29[0xc] == auVar25[4]);
        auVar28[0xd] = -(auVar29[0xd] == auVar25[5]);
        auVar28[0xe] = -(auVar29[0xe] == auVar25[6]);
        auVar28[0xf] = -(auVar29[0xf] == auVar25[7]);
        uVar22 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf
        ;
        uVar21 = (uint)uVar22;
        while (uVar22 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar21; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          lVar23 = *plVar3 + (uVar5 + uVar19 & plVar3[1]) * -0x10;
          if (lVar18 == *(longlong *)(lVar23 + -0x10)) {
            if (*(char *)(lVar23 + -8) != '\x01') goto LAB_1405bea90;
            if (plVar4[3] == 0) goto LAB_1405be980;
            uVar19 = pdb_1400af0a0(plStack_80,&lStack_a0);
            bVar24 = (byte)(uVar19 >> 0x39);
            auVar25 = ZEXT216(CONCAT11(bVar24,bVar24));
            auVar25 = pshuflw(auVar25,auVar25,0);
            lVar20 = 0;
            goto LAB_1405be8c2;
          }
          uVar22 = (ushort)(uVar21 - 1) & (ushort)uVar21;
          uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar22);
        }
        auVar26[0] = -(auVar29[0] == (char)iVar7);
        auVar26[1] = -(auVar29[1] == cVar30);
        auVar26[2] = -(auVar29[2] == cVar31);
        auVar26[3] = -(auVar29[3] == cVar32);
        auVar26[4] = -(auVar29[4] == (char)iVar8);
        auVar26[5] = -(auVar29[5] == cVar33);
        auVar26[6] = -(auVar29[6] == cVar34);
        auVar26[7] = -(auVar29[7] == cVar35);
        auVar26[8] = -(auVar29[8] == (char)iVar9);
        auVar26[9] = -(auVar29[9] == cVar36);
        auVar26[10] = -(auVar29[10] == cVar37);
        auVar26[0xb] = -(auVar29[0xb] == cVar38);
        auVar26[0xc] = -(auVar29[0xc] == (char)iVar10);
        auVar26[0xd] = -(auVar29[0xd] == cVar39);
        auVar26[0xe] = -(auVar29[0xe] == cVar40);
        auVar26[0xf] = -(auVar29[0xf] == cVar41);
        if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar26 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar26 >> 0x1f,0) & 1) != 0) || (SUB161(auVar26 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar26 >> 0x37,0) & 1) != 0) || (SUB161(auVar26 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar26 >> 0x47,0) & 1) != 0) || (SUB161(auVar26 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar26 >> 0x57,0) & 1) != 0) || (SUB161(auVar26 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar26 >> 0x67,0) & 1) != 0) || (SUB161(auVar26 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar26 >> 0x77,0) & 1) != 0) || auVar26[0xf] < '\0') break;
        uVar19 = uVar19 + lVar20 + 0x10;
        lVar20 = lVar20 + 0x10;
      }
    }
  }
  goto LAB_1405bea90;
LAB_1405be8c2:
  uVar19 = uVar19 & plVar4[1];
  pcVar1 = (char *)(*plVar4 + uVar19);
  auVar29[0] = -(*pcVar1 == auVar25[0]);
  auVar29[1] = -(pcVar1[1] == auVar25[1]);
  auVar29[2] = -(pcVar1[2] == auVar25[2]);
  auVar29[3] = -(pcVar1[3] == auVar25[3]);
  auVar29[4] = -(pcVar1[4] == auVar25[4]);
  auVar29[5] = -(pcVar1[5] == auVar25[5]);
  auVar29[6] = -(pcVar1[6] == auVar25[6]);
  auVar29[7] = -(pcVar1[7] == auVar25[7]);
  auVar29[8] = -(pcVar1[8] == auVar25[0]);
  auVar29[9] = -(pcVar1[9] == auVar25[1]);
  auVar29[10] = -(pcVar1[10] == auVar25[2]);
  auVar29[0xb] = -(pcVar1[0xb] == auVar25[3]);
  auVar29[0xc] = -(pcVar1[0xc] == auVar25[4]);
  auVar29[0xd] = -(pcVar1[0xd] == auVar25[5]);
  auVar29[0xe] = -(pcVar1[0xe] == auVar25[6]);
  auVar29[0xf] = -(pcVar1[0xf] == auVar25[7]);
  uVar22 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
  uVar21 = (uint)uVar22;
  while (uVar22 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar21; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar23 = *plVar4 + (uVar5 + uVar19 & plVar4[1]) * -0x20;
    if (lVar18 == *(longlong *)(lVar23 + -0x20)) {
      plVar15 = (longlong *)(lVar23 + -0x18);
      uVar19 = *(ulonglong *)(lVar23 + -8);
      if (param_4 == '\0') {
        uVar16 = uVar19;
        if (1 < uVar19) {
          uVar16 = *(ulonglong *)(lVar23 + -0x10);
        }
        if (uVar16 == 0) goto LAB_1405be980;
        if (1 < uVar19) {
          plVar15 = (longlong *)*plVar15;
        }
      }
      else {
        if (1 < uVar19) {
          plVar15 = *(longlong **)(lVar23 + -0x18);
          uVar19 = *(ulonglong *)(lVar23 + -0x10);
        }
        if ((uVar19 == 0) ||
           (plVar15 = (longlong *)((longlong)plVar15 + uVar19 * 4 + -4), plVar15 == (longlong *)0x0)
           ) goto LAB_1405be980;
      }
      if (*(char *)plVar15 == '\x03') {
        return 0;
      }
      goto LAB_1405be980;
    }
    uVar22 = (ushort)(uVar21 - 1) & (ushort)uVar21;
    uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar22);
  }
  auVar27[0] = -(*pcVar1 == (char)iVar7);
  auVar27[1] = -(pcVar1[1] == cVar30);
  auVar27[2] = -(pcVar1[2] == cVar31);
  auVar27[3] = -(pcVar1[3] == cVar32);
  auVar27[4] = -(pcVar1[4] == (char)iVar8);
  auVar27[5] = -(pcVar1[5] == cVar33);
  auVar27[6] = -(pcVar1[6] == cVar34);
  auVar27[7] = -(pcVar1[7] == cVar35);
  auVar27[8] = -(pcVar1[8] == (char)iVar9);
  auVar27[9] = -(pcVar1[9] == cVar36);
  auVar27[10] = -(pcVar1[10] == cVar37);
  auVar27[0xb] = -(pcVar1[0xb] == cVar38);
  auVar27[0xc] = -(pcVar1[0xc] == (char)iVar10);
  auVar27[0xd] = -(pcVar1[0xd] == cVar39);
  auVar27[0xe] = -(pcVar1[0xe] == cVar40);
  auVar27[0xf] = -(pcVar1[0xf] == cVar41);
  if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar27 >> 0x37,0) & 1) != 0) || (SUB161(auVar27 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar27 >> 0x47,0) & 1) != 0) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') goto LAB_1405be980;
  uVar19 = uVar19 + lVar20 + 0x10;
  lVar20 = lVar20 + 0x10;
  goto LAB_1405be8c2;
LAB_1405be980:
  iStack_98 = iVar11;
  iStack_94 = iVar12;
  uVar19 = *(ulonglong *)(lVar14 + 0x58);
  if (uVar19 == 1) {
    lVar18 = *(longlong *)(lVar14 + 0x50);
    if (iVar11 != *(int *)(lVar18 + 8)) {
      return 1;
    }
    if (iVar12 != *(int *)(lVar18 + 0xc)) {
      return 1;
    }
    cVar2 = *(char *)(lVar18 + 0x10);
  }
  else {
    if (uVar19 == 0) {
      return 1;
    }
    uVar16 = pdb_1400af680(lStack_90,&iStack_98);
    uVar17 = pdb_1404014e0(lStack_88,uVar16,&iStack_98);
    if ((uVar17 & 1) == 0) {
      return 1;
    }
    if (uVar19 <= uVar16) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar16,uVar19,&UNK_142f77528);
    }
    cVar2 = *(char *)(*(longlong *)(lVar14 + 0x50) + 0x10 + uVar16 * 0x28);
  }
  if (cVar2 != '\0') {
    return 1;
  }
LAB_1405bea90:
  pdb_1405c8820(&iStack_b0,&lStack_78);
  if (lStack_a8 == 0) {
    return 0;
  }
  goto LAB_1405bea20;
}

