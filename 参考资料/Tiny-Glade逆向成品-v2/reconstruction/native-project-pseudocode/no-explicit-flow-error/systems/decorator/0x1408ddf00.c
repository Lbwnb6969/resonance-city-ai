// VA 0x1408ddf00, PDB extent 765 bytes
// system_decorator::decorator_on_move_shape::decorator_on_move_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_on_move_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::decorator_on_move_shape::decorator_on_move_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_on_move_shape.rs
   Extent: 765 */

void pdb_1408ddf00(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ushort uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 *puVar22;
  int *piVar23;
  longlong lVar24;
  ulonglong *puVar25;
  undefined8 uVar26;
  byte bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
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
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 *puStack_90;
  undefined8 uStack_88;
  ulonglong *puStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined8 auStack_60 [4];
  
  puStack_80 = (ulonglong *)*param_2;
  lVar16 = param_2[1];
  uVar13 = *puStack_80;
  uVar14 = 0;
  uVar20 = uVar13 - *(ulonglong *)(lVar16 + 0x18);
  if (uVar13 < *(ulonglong *)(lVar16 + 0x18)) {
    uVar20 = uVar14;
  }
  uVar18 = uVar13 - *(ulonglong *)(lVar16 + 0x38);
  if (uVar13 < *(ulonglong *)(lVar16 + 0x38)) {
    uVar18 = uVar14;
  }
  lVar11 = uVar20 * 0x30 + *(longlong *)(lVar16 + 8);
  uVar13 = *(ulonglong *)(lVar16 + 0x10) - uVar20;
  if (*(ulonglong *)(lVar16 + 0x10) < uVar20) {
    lVar11 = 8;
    uVar13 = uVar14;
  }
  lVar15 = uVar18 * 0x30 + *(longlong *)(lVar16 + 0x28);
  uVar20 = *(ulonglong *)(lVar16 + 0x30) - uVar18;
  if (*(ulonglong *)(lVar16 + 0x30) < uVar18) {
    lVar15 = 8;
    uVar20 = uVar14;
  }
  *puStack_80 = (*(longlong *)(lVar16 + 0x40) - uVar20) - uVar13;
  lStack_68 = uVar13 * 0x30 + lVar11;
  lStack_78 = uVar20 * 0x30 + lVar15;
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_88 = *param_1;
  puStack_90 = (undefined4 *)param_1[2];
  iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  puVar22 = puStack_90;
  puVar25 = puStack_80;
  uVar26 = uStack_88;
  do {
    do {
      if ((lVar11 == 0) || (lVar11 == lStack_68)) {
        if ((lVar15 == 0) || (lVar15 == lStack_78)) {
          return;
        }
        lVar16 = 0;
        lVar12 = lVar15 + 0x30;
        lVar24 = lVar15;
      }
      else {
        lVar16 = lVar11 + 0x30;
        lVar12 = lVar15;
        lVar24 = lVar11;
      }
      lVar15 = lVar12;
      *puVar25 = *puVar25 + 1;
      *puVar22 = uVar3;
      lVar12 = pdb_140c3f000(uVar26,*(undefined8 *)(lVar24 + 0x18));
      lVar11 = lVar16;
    } while ((lVar12 == 0) || (*(longlong *)(lVar24 + 0x10) == 0));
    piVar23 = *(int **)(lVar24 + 8);
    piVar1 = piVar23 + *(longlong *)(lVar24 + 0x10) * 3;
    lStack_70 = lVar16;
    do {
      iVar4 = *piVar23;
      iStack_9c = iVar4;
      pdb_1403b0de0(lVar12 + 0x60,iVar4);
      if (*(longlong *)(lVar12 + 0x48) != 0) {
        uVar13 = pdb_1400aede0(lVar12 + 0x50,&iStack_9c);
        lVar16 = *(longlong *)(lVar12 + 0x30);
        bVar27 = (byte)(uVar13 >> 0x39);
        auVar28 = ZEXT216(CONCAT11(bVar27,bVar27));
        auVar28 = pshuflw(auVar28,auVar28,0);
        lVar11 = 0;
        while( true ) {
          uVar13 = uVar13 & *(ulonglong *)(lVar12 + 0x38);
          auVar2 = *(undefined1 (*) [16])(lVar16 + uVar13);
          auVar30[0] = -(auVar2[0] == auVar28[0]);
          auVar30[1] = -(auVar2[1] == auVar28[1]);
          auVar30[2] = -(auVar2[2] == auVar28[2]);
          auVar30[3] = -(auVar2[3] == auVar28[3]);
          auVar30[4] = -(auVar2[4] == auVar28[4]);
          auVar30[5] = -(auVar2[5] == auVar28[5]);
          auVar30[6] = -(auVar2[6] == auVar28[6]);
          auVar30[7] = -(auVar2[7] == auVar28[7]);
          auVar30[8] = -(auVar2[8] == auVar28[0]);
          auVar30[9] = -(auVar2[9] == auVar28[1]);
          auVar30[10] = -(auVar2[10] == auVar28[2]);
          auVar30[0xb] = -(auVar2[0xb] == auVar28[3]);
          auVar30[0xc] = -(auVar2[0xc] == auVar28[4]);
          auVar30[0xd] = -(auVar2[0xd] == auVar28[5]);
          auVar30[0xe] = -(auVar2[0xe] == auVar28[6]);
          auVar30[0xf] = -(auVar2[0xf] == auVar28[7]);
          uVar19 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
          uVar17 = (uint)uVar19;
          while (uVar19 != 0) {
            uVar5 = 0;
            for (uVar6 = uVar17; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            lVar21 = (uVar5 + uVar13 & *(ulonglong *)(lVar12 + 0x38)) * -0x68;
            if (iVar4 == *(int *)(lVar16 + -0x68 + lVar21)) {
              lVar16 = lVar16 + lVar21;
              lVar11 = (ulonglong)*(byte *)(lVar16 + -0x2e) - 1;
              if ((ulonglong)*(byte *)(lVar16 + -0x2e) < 2) {
                lVar11 = 0;
              }
              if (lVar11 != 0) {
                if (1 < (int)lVar11 - 2U) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83d0(&UNK_14301a4a8,0xb9,&UNK_14301a508);
                }
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_14301a520,0x28,&UNK_14301a548);
              }
              auStack_60[0] =
                   CONCAT44((float)((ulonglong)*(undefined8 *)(piVar23 + 1) >> 0x20) +
                            (float)((ulonglong)*(undefined8 *)(lVar24 + 0x20) >> 0x20),
                            (float)*(undefined8 *)(piVar23 + 1) +
                            (float)*(undefined8 *)(lVar24 + 0x20));
              pdb_140df4540(&iStack_9c,auStack_60,*(undefined4 *)(lVar16 + -0x38));
              *(undefined4 *)(lVar16 + -0x34) = uStack_94;
              *(ulonglong *)(lVar16 + -0x3c) = CONCAT44(uStack_98,iStack_9c);
              goto LAB_1408de180;
            }
            uVar19 = (ushort)(uVar17 - 1) & (ushort)uVar17;
            uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar19);
          }
          auVar29[0] = -(auVar2[0] == (char)iVar7);
          auVar29[1] = -(auVar2[1] == (char)((uint)iVar7 >> 8));
          auVar29[2] = -(auVar2[2] == (char)((uint)iVar7 >> 0x10));
          auVar29[3] = -(auVar2[3] == (char)((uint)iVar7 >> 0x18));
          auVar29[4] = -(auVar2[4] == (char)iVar8);
          auVar29[5] = -(auVar2[5] == (char)((uint)iVar8 >> 8));
          auVar29[6] = -(auVar2[6] == (char)((uint)iVar8 >> 0x10));
          auVar29[7] = -(auVar2[7] == (char)((uint)iVar8 >> 0x18));
          auVar29[8] = -(auVar2[8] == (char)iVar9);
          auVar29[9] = -(auVar2[9] == (char)((uint)iVar9 >> 8));
          auVar29[10] = -(auVar2[10] == (char)((uint)iVar9 >> 0x10));
          auVar29[0xb] = -(auVar2[0xb] == (char)((uint)iVar9 >> 0x18));
          auVar29[0xc] = -(auVar2[0xc] == (char)iVar10);
          auVar29[0xd] = -(auVar2[0xd] == (char)((uint)iVar10 >> 8));
          auVar29[0xe] = -(auVar2[0xe] == (char)((uint)iVar10 >> 0x10));
          auVar29[0xf] = -(auVar2[0xf] == (char)((uint)iVar10 >> 0x18));
          if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar29 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar29 >> 0x2f,0) & 1) != 0) || (SUB161(auVar29 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') break;
          uVar13 = uVar13 + lVar11 + 0x10;
          lVar11 = lVar11 + 0x10;
        }
      }
LAB_1408de180:
      piVar23 = piVar23 + 3;
      lVar11 = lStack_70;
      puVar22 = puStack_90;
      puVar25 = puStack_80;
      uVar26 = uStack_88;
    } while (piVar23 != piVar1);
  } while( true );
}

