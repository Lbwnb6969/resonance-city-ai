// VA 0x14081e2e0, PDB extent 929 bytes
// system_wall_constructor::gpu_clear_wall_gate_pieces
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_wall_constructor::gpu_clear_wall_gate_pieces
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/lib.rs
   Extent: 929 */

void pdb_14081e2e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int *piVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  ushort uVar22;
  ulonglong uVar23;
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
  undefined8 uStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong *plStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puVar11 = (undefined8 *)pdb_1413e4400(*param_1,&UNK_1433056b0);
  if ((puVar11 == (undefined8 *)0x0) ||
     (lVar12 = (**(code **)(puVar11[1] + 0x18))(*puVar11), lVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143009730);
  }
  puVar2 = (ulonglong *)*param_2;
  lVar14 = param_2[1];
  uVar3 = *puVar2;
  uVar23 = 0;
  uVar18 = uVar3 - *(ulonglong *)(lVar14 + 0x18);
  if (uVar3 < *(ulonglong *)(lVar14 + 0x18)) {
    uVar18 = uVar23;
  }
  uVar15 = uVar3 - *(ulonglong *)(lVar14 + 0x38);
  if (uVar3 < *(ulonglong *)(lVar14 + 0x38)) {
    uVar15 = uVar23;
  }
  lVar13 = uVar18 * 0x10 + *(longlong *)(lVar14 + 8);
  uVar3 = *(ulonglong *)(lVar14 + 0x10) - uVar18;
  if (*(ulonglong *)(lVar14 + 0x10) < uVar18) {
    lVar13 = 8;
    uVar3 = uVar23;
  }
  lVar19 = uVar15 * 0x10 + *(longlong *)(lVar14 + 0x28);
  uVar18 = *(ulonglong *)(lVar14 + 0x30) - uVar15;
  if (*(ulonglong *)(lVar14 + 0x30) < uVar15) {
    lVar19 = 8;
    uVar18 = uVar23;
  }
  *puVar2 = (*(longlong *)(lVar14 + 0x40) - uVar18) - uVar3;
  param_3 = (longlong *)*param_3;
  lStack_80 = lVar12 + 0x58;
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
  plVar10 = param_3;
  lVar14 = lVar13;
  lVar17 = lVar19;
joined_r0x00014081e3d0:
  if ((lVar14 == 0) || (lVar14 == uVar3 * 0x10 + lVar13)) {
    if (lVar17 == 0) {
      return;
    }
    if (lVar17 == uVar18 * 0x10 + lVar19) {
      return;
    }
    lStack_70 = lVar17 + 0x10;
    lStack_68 = 0;
    lVar14 = lVar17;
  }
  else {
    lStack_68 = lVar14 + 0x10;
    lStack_70 = lVar17;
  }
  *puVar2 = *puVar2 + 1;
  lVar14 = *(longlong *)(lVar14 + 8);
  lStack_88 = lVar14;
  plStack_78 = plVar10;
  if (plVar10[3] == 0) {
LAB_14081e5eb:
    pdb_142dc8110(&UNK_1430096a0,0x16,&UNK_143009748);
    return;
  }
  uVar15 = pdb_1400af0a0(param_3 + 4,&lStack_88);
  lVar17 = *plVar10;
  uVar23 = plVar10[1];
  bVar26 = (byte)(uVar15 >> 0x39);
  auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
  auVar27 = pshuflw(auVar27,auVar27,0);
  lVar20 = 0;
  do {
    uVar15 = uVar15 & uVar23;
    auVar1 = *(undefined1 (*) [16])(lVar17 + uVar15);
    auVar29[0] = -(auVar1[0] == auVar27[0]);
    auVar29[1] = -(auVar1[1] == auVar27[1]);
    auVar29[2] = -(auVar1[2] == auVar27[2]);
    auVar29[3] = -(auVar1[3] == auVar27[3]);
    auVar29[4] = -(auVar1[4] == auVar27[4]);
    auVar29[5] = -(auVar1[5] == auVar27[5]);
    auVar29[6] = -(auVar1[6] == auVar27[6]);
    auVar29[7] = -(auVar1[7] == auVar27[7]);
    auVar29[8] = -(auVar1[8] == auVar27[0]);
    auVar29[9] = -(auVar1[9] == auVar27[1]);
    auVar29[10] = -(auVar1[10] == auVar27[2]);
    auVar29[0xb] = -(auVar1[0xb] == auVar27[3]);
    auVar29[0xc] = -(auVar1[0xc] == auVar27[4]);
    auVar29[0xd] = -(auVar1[0xd] == auVar27[5]);
    auVar29[0xe] = -(auVar1[0xe] == auVar27[6]);
    auVar29[0xf] = -(auVar1[0xf] == auVar27[7]);
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
      uVar4 = 0;
      for (uVar5 = uVar21; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      lVar24 = (uVar4 + uVar15 & uVar23) * -0x2b0;
      if (lVar14 == *(longlong *)(lVar17 + -0x2b0 + lVar24)) {
        lVar14 = *(longlong *)(lVar17 + lVar24 + -0x178);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143305b70);
        }
        LOCK();
        bVar25 = *(char *)(lVar14 + 0x18) == '\0';
        if (bVar25) {
          *(char *)(lVar14 + 0x18) = '\x01';
        }
        UNLOCK();
        if (bVar25) {
          pdb_140e9a150(lVar14 + 0x18);
          lVar17 = *(longlong *)(lVar14 + 0x10);
          if (lVar17 == 0) goto LAB_14081e540;
LAB_14081e501:
          piVar16 = (int *)(*(longlong *)(lVar14 + 8) + lVar17 * 4 + -4);
          if (piVar16 == (int *)0x0) goto LAB_14081e540;
          iStack_90 = *piVar16;
          lVar17 = *(longlong *)(lVar12 + 0x10);
        }
        else {
          pdb_142dbd1a0(lVar14 + 0x18,CONCAT71((int7)(uVar23 >> 8),1),1000000000);
          pdb_140e9a150(lVar14 + 0x18);
          lVar17 = *(longlong *)(lVar14 + 0x10);
          if (lVar17 != 0) goto LAB_14081e501;
LAB_14081e540:
          lVar17 = *(longlong *)(lVar12 + 0x10);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143305b88);
          }
          iStack_90 = (int)lVar17 + -1;
        }
        uStack_e8 = *(undefined8 *)(lVar12 + 8);
        uStack_d8 = *(undefined8 *)(lVar12 + 0x18);
        uStack_d0 = *(undefined8 *)(lVar12 + 0x20);
        uStack_c0 = *(undefined8 *)(lVar12 + 0x28);
        uStack_b8 = *(undefined8 *)(lVar12 + 0x30);
        uStack_a0 = *(undefined8 *)(lVar12 + 0x38);
        uStack_98 = *(undefined8 *)(lVar12 + 0x40);
        lStack_b0 = lVar12 + 0x78;
        lStack_a8 = lStack_80;
        lStack_e0 = lVar17;
        lStack_c8 = lVar14;
        pdb_1413f7bd0(&uStack_e8);
        lVar14 = lStack_c8;
        lVar20 = lStack_c8 + 0x18;
        pdb_140e9a350();
        LOCK();
        bVar25 = *(char *)(lVar14 + 0x18) == '\x01';
        if (bVar25) {
          *(char *)(lVar14 + 0x18) = '\0';
        }
        UNLOCK();
        plVar10 = plStack_78;
        lVar14 = lStack_68;
        lVar17 = lStack_70;
        if (!bVar25) {
          pdb_142dbcef0(lVar20,0);
          plVar10 = plStack_78;
          lVar14 = lStack_68;
          lVar17 = lStack_70;
        }
        goto joined_r0x00014081e3d0;
      }
      uVar22 = (ushort)(uVar21 - 1) & (ushort)uVar21;
      uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar22);
    }
    auVar28[0] = -(auVar1[0] == (char)iVar6);
    auVar28[1] = -(auVar1[1] == (char)((uint)iVar6 >> 8));
    auVar28[2] = -(auVar1[2] == (char)((uint)iVar6 >> 0x10));
    auVar28[3] = -(auVar1[3] == (char)((uint)iVar6 >> 0x18));
    auVar28[4] = -(auVar1[4] == (char)iVar7);
    auVar28[5] = -(auVar1[5] == (char)((uint)iVar7 >> 8));
    auVar28[6] = -(auVar1[6] == (char)((uint)iVar7 >> 0x10));
    auVar28[7] = -(auVar1[7] == (char)((uint)iVar7 >> 0x18));
    auVar28[8] = -(auVar1[8] == (char)iVar8);
    auVar28[9] = -(auVar1[9] == (char)((uint)iVar8 >> 8));
    auVar28[10] = -(auVar1[10] == (char)((uint)iVar8 >> 0x10));
    auVar28[0xb] = -(auVar1[0xb] == (char)((uint)iVar8 >> 0x18));
    auVar28[0xc] = -(auVar1[0xc] == (char)iVar9);
    auVar28[0xd] = -(auVar1[0xd] == (char)((uint)iVar9 >> 8));
    auVar28[0xe] = -(auVar1[0xe] == (char)((uint)iVar9 >> 0x10));
    auVar28[0xf] = -(auVar1[0xf] == (char)((uint)iVar9 >> 0x18));
    if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar28 >> 0x37,0) & 1) != 0) || (SUB161(auVar28 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x47,0) & 1) != 0) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') goto LAB_14081e5eb;
    uVar15 = uVar15 + lVar20 + 0x10;
    lVar20 = lVar20 + 0x10;
  } while( true );
}

