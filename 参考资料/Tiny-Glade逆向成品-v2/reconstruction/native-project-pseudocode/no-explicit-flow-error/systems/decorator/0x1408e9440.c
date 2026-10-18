// VA 0x1408e9440, PDB extent 979 bytes
// system_decorator::decorator_on_freehand_wall_edited::decorator_on_freehand_wall_edited
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_on_freehand_wall_edited.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_on_freehand_wall_edited::decorator_on_freehand_wall_edited
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_on_freehand_wall_edited.rs
   Extent: 979 */

void pdb_1408e9440(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int *piVar18;
  uint uVar19;
  ushort uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong *puVar23;
  longlong lVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  byte bVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  ulonglong *puStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined4 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [8];
  
  puStack_b8 = (ulonglong *)*param_2;
  lVar24 = param_2[1];
  uVar15 = *puStack_b8;
  uVar26 = 0;
  uVar17 = uVar15 - *(ulonglong *)(lVar24 + 0x18);
  if (uVar15 < *(ulonglong *)(lVar24 + 0x18)) {
    uVar17 = uVar26;
  }
  uVar21 = uVar15 - *(ulonglong *)(lVar24 + 0x38);
  if (uVar15 < *(ulonglong *)(lVar24 + 0x38)) {
    uVar21 = uVar26;
  }
  lVar13 = uVar17 * 0x28 + *(longlong *)(lVar24 + 8);
  uVar15 = *(ulonglong *)(lVar24 + 0x10) - uVar17;
  if (*(ulonglong *)(lVar24 + 0x10) < uVar17) {
    lVar13 = 8;
    uVar15 = uVar26;
  }
  lVar16 = uVar21 * 0x28 + *(longlong *)(lVar24 + 0x28);
  uVar17 = *(ulonglong *)(lVar24 + 0x30) - uVar21;
  if (*(ulonglong *)(lVar24 + 0x30) < uVar21) {
    lVar16 = 8;
    uVar17 = uVar26;
  }
  *puStack_b8 = (*(longlong *)(lVar24 + 0x40) - uVar17) - uVar15;
  fVar12 = _DAT_142e36f28;
  lStack_a0 = lVar13 + uVar15 * 0x28;
  lStack_b0 = lVar16 + uVar17 * 0x28;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_c0 = *param_3;
  puStack_98 = (undefined4 *)param_3[2];
  uStack_90 = *param_1;
  iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                 CONCAT13(unaff_XMM7_Bd,
                          CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                 CONCAT13(unaff_XMM7_Bh,
                          CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                  CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                  CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  puVar23 = puStack_b8;
  uVar25 = uStack_c0;
  do {
    do {
      if ((lVar13 == 0) || (lVar13 == lStack_a0)) {
        if ((lVar16 == 0) || (lVar16 == lStack_b0)) {
          return;
        }
        lVar24 = 0;
        lVar14 = lVar16 + 0x28;
        lVar22 = lVar16;
      }
      else {
        lVar24 = lVar13 + 0x28;
        lVar14 = lVar16;
        lVar22 = lVar13;
      }
      lVar16 = lVar14;
      *puVar23 = *puVar23 + 1;
      *puStack_98 = uVar4;
      uStack_88 = *(undefined8 *)(lVar22 + 0x18);
      lVar14 = pdb_140c3f000(uVar25);
      lVar13 = lVar24;
    } while ((lVar14 == 0) || (*(longlong *)(lVar22 + 0x10) == 0));
    piVar18 = *(int **)(lVar22 + 8);
    piVar1 = piVar18 + *(longlong *)(lVar22 + 0x10) * 3;
    lStack_a8 = lVar24;
    do {
      iVar5 = *piVar18;
      iStack_cc = iVar5;
      pdb_1403b0de0(lVar14 + 0x60,iVar5);
      if (*(longlong *)(lVar14 + 0x48) != 0) {
        uVar15 = pdb_1400aede0(lVar14 + 0x50,&iStack_cc);
        lVar24 = *(longlong *)(lVar14 + 0x30);
        bVar27 = (byte)(uVar15 >> 0x39);
        auVar29 = ZEXT216(CONCAT11(bVar27,bVar27));
        auVar29 = pshuflw(auVar29,auVar29,0);
        lVar13 = 0;
        while( true ) {
          uVar15 = uVar15 & *(ulonglong *)(lVar14 + 0x38);
          auVar3 = *(undefined1 (*) [16])(lVar24 + uVar15);
          auVar32[0] = -(auVar3[0] == auVar29[0]);
          auVar32[1] = -(auVar3[1] == auVar29[1]);
          auVar32[2] = -(auVar3[2] == auVar29[2]);
          auVar32[3] = -(auVar3[3] == auVar29[3]);
          auVar32[4] = -(auVar3[4] == auVar29[4]);
          auVar32[5] = -(auVar3[5] == auVar29[5]);
          auVar32[6] = -(auVar3[6] == auVar29[6]);
          auVar32[7] = -(auVar3[7] == auVar29[7]);
          auVar32[8] = -(auVar3[8] == auVar29[0]);
          auVar32[9] = -(auVar3[9] == auVar29[1]);
          auVar32[10] = -(auVar3[10] == auVar29[2]);
          auVar32[0xb] = -(auVar3[0xb] == auVar29[3]);
          auVar32[0xc] = -(auVar3[0xc] == auVar29[4]);
          auVar32[0xd] = -(auVar3[0xd] == auVar29[5]);
          auVar32[0xe] = -(auVar3[0xe] == auVar29[6]);
          auVar32[0xf] = -(auVar3[0xf] == auVar29[7]);
          uVar20 = (ushort)(SUB161(auVar32 >> 7,0) & 1) |
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
          uVar19 = (uint)uVar20;
          while (uVar20 != 0) {
            uVar6 = 0;
            for (uVar7 = uVar19; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            lVar22 = (uVar6 + uVar15 & *(ulonglong *)(lVar14 + 0x38)) * -0x68;
            if (iVar5 == *(int *)(lVar24 + -0x68 + lVar22)) {
              lVar24 = lVar24 + lVar22;
              lVar13 = (ulonglong)*(byte *)(lVar24 + -0x2e) - 1;
              if ((ulonglong)*(byte *)(lVar24 + -0x2e) < 2) {
                lVar13 = 0;
              }
              if (lVar13 == 0) {
                lVar13 = pdb_140b54f80(uStack_90,uStack_88,&UNK_14301bf98);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_14301bfb0);
                }
                uVar17 = (ulonglong)(uint)piVar18[1];
                uVar15 = *(ulonglong *)(lVar13 + 0x10);
                if (uVar15 <= uVar17) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar17,uVar15,&UNK_14330d718);
                }
                if (uVar15 <= uVar17 + 1) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar17 + 1,uVar15,&UNK_14330d730);
                }
                fVar30 = (float)piVar18[2];
                uVar25 = *(undefined8 *)(*(longlong *)(lVar13 + 8) + uVar17 * 8);
                uVar2 = *(undefined8 *)(*(longlong *)(lVar13 + 8) + 8 + uVar17 * 8);
                auStack_80[0] =
                     CONCAT44(fVar30 * (float)((ulonglong)uVar2 >> 0x20) +
                              (fVar12 - fVar30) * (float)((ulonglong)uVar25 >> 0x20),
                              fVar30 * (float)uVar2 + (fVar12 - fVar30) * (float)uVar25);
                pdb_140df4540(&iStack_cc,auStack_80);
                *(undefined4 *)(lVar24 + -0x34) = uStack_c4;
                *(ulonglong *)(lVar24 + -0x3c) = CONCAT44(uStack_c8,iStack_cc);
                uVar28 = pdb_140dea570(uVar17);
                *(undefined4 *)(lVar24 + -0x50) = uVar28;
                *(float *)(lVar24 + -0x4c) = fVar30;
              }
              else if ((int)lVar13 != 1) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_14301bf58,0x28,&UNK_14301bfc8);
              }
              goto LAB_1408e9780;
            }
            uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
            uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
          }
          auVar31[0] = -(auVar3[0] == (char)iVar8);
          auVar31[1] = -(auVar3[1] == (char)((uint)iVar8 >> 8));
          auVar31[2] = -(auVar3[2] == (char)((uint)iVar8 >> 0x10));
          auVar31[3] = -(auVar3[3] == (char)((uint)iVar8 >> 0x18));
          auVar31[4] = -(auVar3[4] == (char)iVar9);
          auVar31[5] = -(auVar3[5] == (char)((uint)iVar9 >> 8));
          auVar31[6] = -(auVar3[6] == (char)((uint)iVar9 >> 0x10));
          auVar31[7] = -(auVar3[7] == (char)((uint)iVar9 >> 0x18));
          auVar31[8] = -(auVar3[8] == (char)iVar10);
          auVar31[9] = -(auVar3[9] == (char)((uint)iVar10 >> 8));
          auVar31[10] = -(auVar3[10] == (char)((uint)iVar10 >> 0x10));
          auVar31[0xb] = -(auVar3[0xb] == (char)((uint)iVar10 >> 0x18));
          auVar31[0xc] = -(auVar3[0xc] == (char)iVar11);
          auVar31[0xd] = -(auVar3[0xd] == (char)((uint)iVar11 >> 8));
          auVar31[0xe] = -(auVar3[0xe] == (char)((uint)iVar11 >> 0x10));
          auVar31[0xf] = -(auVar3[0xf] == (char)((uint)iVar11 >> 0x18));
          if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar31 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar31 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar31 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar31 >> 0x2f,0) & 1) != 0) || (SUB161(auVar31 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar31 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar31 >> 0x47,0) & 1) != 0) || (SUB161(auVar31 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar31 >> 0x57,0) & 1) != 0) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') break;
          uVar15 = uVar15 + lVar13 + 0x10;
          lVar13 = lVar13 + 0x10;
        }
      }
LAB_1408e9780:
      piVar18 = piVar18 + 3;
      lVar13 = lStack_a8;
      puVar23 = puStack_b8;
      uVar25 = uStack_c0;
    } while (piVar18 != piVar1);
  } while( true );
}

