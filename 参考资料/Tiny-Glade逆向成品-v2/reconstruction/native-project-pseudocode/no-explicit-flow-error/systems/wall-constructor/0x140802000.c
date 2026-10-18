// VA 0x140802000, PDB extent 1001 bytes
// system_wall_constructor::segmentation::calculate_wall_path_segmentation::calculate_path_wall_segmentation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/segmentation/calculate_wall_path_segmentation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_wall_constructor::segmentation::calculate_wall_path_segmentation::calculate_path_wall_segmentation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/segmentation/calculate_wall_path_segmentation.rs
   Extent: 1001 */

void pdb_140802000(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  byte *pbVar16;
  uint uVar17;
  ushort uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  byte bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
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
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  longlong lStack_e0;
  byte *pbStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong lStack_b0;
  longlong *plStack_a8;
  undefined8 uStack_a0;
  undefined4 *puStack_98;
  undefined4 *puStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  byte *pbStack_70;
  undefined4 uStack_68;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puVar3 = (ulonglong *)*param_1;
  lVar22 = param_1[1];
  uVar12 = *puVar3;
  uVar20 = 0;
  uVar13 = uVar12 - *(ulonglong *)(lVar22 + 0x18);
  if (uVar12 < *(ulonglong *)(lVar22 + 0x18)) {
    uVar13 = uVar20;
  }
  uVar21 = uVar12 - *(ulonglong *)(lVar22 + 0x38);
  if (uVar12 < *(ulonglong *)(lVar22 + 0x38)) {
    uVar21 = uVar20;
  }
  lStack_78 = uVar13 * 0x10 + *(longlong *)(lVar22 + 8);
  uVar12 = *(ulonglong *)(lVar22 + 0x10) - uVar13;
  if (*(ulonglong *)(lVar22 + 0x10) < uVar13) {
    lStack_78 = 8;
    uVar12 = uVar20;
  }
  lStack_80 = uVar21 * 0x10 + *(longlong *)(lVar22 + 0x28);
  uVar13 = *(ulonglong *)(lVar22 + 0x30) - uVar21;
  if (*(ulonglong *)(lVar22 + 0x30) < uVar21) {
    lStack_80 = 8;
    uVar13 = uVar20;
  }
  *puVar3 = (*(longlong *)(lVar22 + 0x40) - uVar13) - uVar12;
  lVar22 = uVar12 * 0x10 + lStack_78;
  lStack_88 = uVar13 * 0x10 + lStack_80;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  plVar4 = (longlong *)*param_2;
  puStack_90 = (undefined4 *)param_2[2];
  uStack_68 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_a0 = *param_3;
  puStack_98 = (undefined4 *)param_3[2];
  plStack_a8 = plVar4 + 4;
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
LAB_1408020ef:
  if ((lStack_78 == 0) || (lStack_78 == lVar22)) {
    if ((lStack_80 == 0) || (lStack_80 == lStack_88)) {
      return;
    }
    lStack_78 = 0;
    lVar11 = lStack_80;
    lStack_80 = lStack_80 + 0x10;
  }
  else {
    lVar11 = lStack_78;
    lStack_78 = lStack_78 + 0x10;
  }
  *puVar3 = *puVar3 + 1;
  lVar11 = *(longlong *)(lVar11 + 8);
  *puStack_90 = uVar2;
  lStack_b0 = lVar11;
  if (plVar4[3] != 0) {
    uVar12 = pdb_1400af0a0(plStack_a8,&lStack_b0);
    lVar15 = *plVar4;
    bVar23 = (byte)(uVar12 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
    auVar24 = pshuflw(auVar24,auVar24,0);
    lVar14 = 0;
    while( true ) {
      uVar12 = uVar12 & plVar4[1];
      auVar1 = *(undefined1 (*) [16])(lVar15 + uVar12);
      auVar26[0] = -(auVar1[0] == auVar24[0]);
      auVar26[1] = -(auVar1[1] == auVar24[1]);
      auVar26[2] = -(auVar1[2] == auVar24[2]);
      auVar26[3] = -(auVar1[3] == auVar24[3]);
      auVar26[4] = -(auVar1[4] == auVar24[4]);
      auVar26[5] = -(auVar1[5] == auVar24[5]);
      auVar26[6] = -(auVar1[6] == auVar24[6]);
      auVar26[7] = -(auVar1[7] == auVar24[7]);
      auVar26[8] = -(auVar1[8] == auVar24[0]);
      auVar26[9] = -(auVar1[9] == auVar24[1]);
      auVar26[10] = -(auVar1[10] == auVar24[2]);
      auVar26[0xb] = -(auVar1[0xb] == auVar24[3]);
      auVar26[0xc] = -(auVar1[0xc] == auVar24[4]);
      auVar26[0xd] = -(auVar1[0xd] == auVar24[5]);
      auVar26[0xe] = -(auVar1[0xe] == auVar24[6]);
      auVar26[0xf] = -(auVar1[0xf] == auVar24[7]);
      uVar18 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
      uVar17 = (uint)uVar18;
      while (uVar18 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar17; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar19 = (uVar5 + uVar12 & plVar4[1]) * -0x2b0;
        if (lVar11 == *(longlong *)(lVar15 + -0x2b0 + lVar19)) {
          lVar15 = lVar15 + lVar19;
          pdb_140801390(&uStack_c8,lVar15 + -0x2a8);
          uStack_61 = 1;
          pdb_140b2e360(lVar15 + -0x120,*(undefined4 *)(lVar15 + -0x1f0),
                        *(undefined1 *)(lVar15 + -8));
          uStack_61 = 1;
          pdb_140b2e930(lVar15 + -0x120,uStack_b8);
          *puStack_98 = uStack_68;
          uStack_e8 = uStack_b8;
          uStack_f8 = uStack_c8;
          uStack_f0 = uStack_c0;
          uStack_61 = 0;
          pdb_141407ca0(&lStack_e0,uStack_a0,lVar11,&uStack_f8);
          lVar11 = lStack_e0;
          if (!SBORROW8(0,lStack_e0)) {
            pbStack_70 = pbStack_d8;
            if (lStack_d0 != 0) {
              pbVar16 = pbStack_d8 + 0x68;
              lVar15 = lStack_d0;
              do {
                if (*(ulonglong *)(pbVar16 + -0x68) != 0) {
                  pub_1406abac0(*(byte **)(pbVar16 + -0x60),*(ulonglong *)(pbVar16 + -0x68),1);
                }
                if (*(longlong *)(pbVar16 + -0x50) != 0) {
                  pub_1406abac0(*(byte **)(pbVar16 + -0x48),*(longlong *)(pbVar16 + -0x50) << 3,4);
                }
                if (*(longlong *)(pbVar16 + -0x38) != 0) {
                  pub_1406abac0(*(byte **)(pbVar16 + -0x30),*(longlong *)(pbVar16 + -0x38) * 0x1c,4)
                  ;
                }
                if (*(longlong *)(pbVar16 + -0x20) != 0) {
                  pub_1406abac0(*(byte **)(pbVar16 + -0x18),*(longlong *)(pbVar16 + -0x20) << 2,4);
                }
                if (*(longlong *)(pbVar16 + -8) != 0) {
                  pub_1406abac0(*(byte **)pbVar16,*(longlong *)(pbVar16 + -8) << 3,8);
                }
                pbVar16 = pbVar16 + 0x88;
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
            }
            if (lVar11 != 0) {
              pub_1406abac0(pbStack_70,lVar11 * 0x88,8);
            }
          }
          goto LAB_1408020ef;
        }
        uVar18 = (ushort)(uVar17 - 1) & (ushort)uVar17;
        uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar18);
      }
      auVar25[0] = -(auVar1[0] == (char)iVar7);
      auVar25[1] = -(auVar1[1] == (char)((uint)iVar7 >> 8));
      auVar25[2] = -(auVar1[2] == (char)((uint)iVar7 >> 0x10));
      auVar25[3] = -(auVar1[3] == (char)((uint)iVar7 >> 0x18));
      auVar25[4] = -(auVar1[4] == (char)iVar8);
      auVar25[5] = -(auVar1[5] == (char)((uint)iVar8 >> 8));
      auVar25[6] = -(auVar1[6] == (char)((uint)iVar8 >> 0x10));
      auVar25[7] = -(auVar1[7] == (char)((uint)iVar8 >> 0x18));
      auVar25[8] = -(auVar1[8] == (char)iVar9);
      auVar25[9] = -(auVar1[9] == (char)((uint)iVar9 >> 8));
      auVar25[10] = -(auVar1[10] == (char)((uint)iVar9 >> 0x10));
      auVar25[0xb] = -(auVar1[0xb] == (char)((uint)iVar9 >> 0x18));
      auVar25[0xc] = -(auVar1[0xc] == (char)iVar10);
      auVar25[0xd] = -(auVar1[0xd] == (char)((uint)iVar10 >> 8));
      auVar25[0xe] = -(auVar1[0xe] == (char)((uint)iVar10 >> 0x10));
      auVar25[0xf] = -(auVar1[0xf] == (char)((uint)iVar10 >> 0x18));
      if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar25 >> 0x3f,0) & 1) != 0) || (SUB161(auVar25 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar25 >> 0x4f,0) & 1) != 0) || (SUB161(auVar25 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar25 >> 0x5f,0) & 1) != 0) || (SUB161(auVar25 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar25 >> 0x6f,0) & 1) != 0) || (SUB161(auVar25 >> 0x77,0) & 1) != 0) ||
          auVar25[0xf] < '\0') break;
      uVar12 = uVar12 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143007128);
}

