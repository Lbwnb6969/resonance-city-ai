// VA 0x1428b67e0, PDB extent 78670 bytes
// system_color::show_color_menu::show_color_options
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/show_color_menu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::show_color_menu::show_color_options
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/show_color_menu.rs
   Extent: 78670 */

void pdb_1428b67e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,longlong *param_7)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ushort uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint *puVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
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
  uint uStack_238;
  uint uStack_234;
  undefined8 uStack_138;
  undefined8 uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_108;
  uint *puStack_100;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar4 = (ulonglong *)*param_1;
  lVar5 = param_1[1];
  uVar14 = *puVar4;
  uVar18 = 0;
  uVar12 = uVar14 - *(ulonglong *)(lVar5 + 0x18);
  if (uVar14 < *(ulonglong *)(lVar5 + 0x18)) {
    uVar12 = uVar18;
  }
  uVar20 = uVar14 - *(ulonglong *)(lVar5 + 0x38);
  if (uVar14 < *(ulonglong *)(lVar5 + 0x38)) {
    uVar20 = uVar18;
  }
  puVar21 = (uint *)(uVar12 * 0x28 + *(longlong *)(lVar5 + 8));
  uVar14 = *(ulonglong *)(lVar5 + 0x10) - uVar12;
  if (*(ulonglong *)(lVar5 + 0x10) < uVar12) {
    puVar21 = (uint *)0x8;
    uVar14 = uVar18;
  }
  puVar13 = (uint *)(uVar20 * 0x28 + *(longlong *)(lVar5 + 0x28));
  uVar12 = *(ulonglong *)(lVar5 + 0x30) - uVar20;
  if (*(ulonglong *)(lVar5 + 0x30) < uVar20) {
    puVar13 = (uint *)0x8;
    uVar12 = uVar18;
  }
  *puVar4 = (*(longlong *)(lVar5 + 0x40) - uVar12) - uVar14;
  param_7 = (longlong *)*param_7;
  uStack_138 = *param_4;
  uStack_120 = *param_5;
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                  CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  if (((puVar21 == (uint *)0x0) || (puVar21 == puVar21 + uVar14 * 10)) &&
     ((puVar13 == (uint *)0x0 || (puVar21 = puVar13, puVar13 == puVar13 + uVar12 * 10)))) {
    return;
  }
  *puVar4 = *puVar4 + 1;
  uVar2 = *puVar21;
  uVar3 = uVar2 - 2;
  if (uVar2 < 2) {
    uVar3 = 0xe;
  }
  uStack_108 = (ulonglong)uVar3;
  if ((uVar3 == 0xe & (byte)uVar2) != 0) {
    uVar2 = puVar21[1];
    uVar3 = puVar21[2];
    uStack_238 = uVar2;
    uStack_234 = uVar3;
    if (param_7[3] != 0) {
      uVar14 = pdb_1428a3c70(param_7 + 4,&uStack_238);
      lVar5 = *param_7;
      bVar22 = (byte)(uVar14 >> 0x39);
      auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
      auVar23 = pshuflw(auVar23,auVar23,0);
      lVar15 = 0;
      while( true ) {
        uVar14 = uVar14 & param_7[1];
        pcVar1 = (char *)(lVar5 + uVar14);
        auVar25[0] = -(*pcVar1 == auVar23[0]);
        auVar25[1] = -(pcVar1[1] == auVar23[1]);
        auVar25[2] = -(pcVar1[2] == auVar23[2]);
        auVar25[3] = -(pcVar1[3] == auVar23[3]);
        auVar25[4] = -(pcVar1[4] == auVar23[4]);
        auVar25[5] = -(pcVar1[5] == auVar23[5]);
        auVar25[6] = -(pcVar1[6] == auVar23[6]);
        auVar25[7] = -(pcVar1[7] == auVar23[7]);
        auVar25[8] = -(pcVar1[8] == auVar23[0]);
        auVar25[9] = -(pcVar1[9] == auVar23[1]);
        auVar25[10] = -(pcVar1[10] == auVar23[2]);
        auVar25[0xb] = -(pcVar1[0xb] == auVar23[3]);
        auVar25[0xc] = -(pcVar1[0xc] == auVar23[4]);
        auVar25[0xd] = -(pcVar1[0xd] == auVar23[5]);
        auVar25[0xe] = -(pcVar1[0xe] == auVar23[6]);
        auVar25[0xf] = -(pcVar1[0xf] == auVar23[7]);
        uVar17 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf
        ;
        uVar16 = (uint)uVar17;
        while (uVar17 != 0) {
          uVar6 = 0;
          for (uVar7 = uVar16; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          lVar19 = (uVar6 + uVar14 & param_7[1]) * -0x140;
          if ((uVar2 == *(uint *)(lVar5 + -0x140 + lVar19)) &&
             (uVar3 == *(uint *)(lVar5 + -0x13c + lVar19))) goto LAB_1428b6b40;
          uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
        }
        auVar24[0] = -(*pcVar1 == (char)iVar8);
        auVar24[1] = -(pcVar1[1] == (char)((uint)iVar8 >> 8));
        auVar24[2] = -(pcVar1[2] == (char)((uint)iVar8 >> 0x10));
        auVar24[3] = -(pcVar1[3] == (char)((uint)iVar8 >> 0x18));
        auVar24[4] = -(pcVar1[4] == (char)iVar9);
        auVar24[5] = -(pcVar1[5] == (char)((uint)iVar9 >> 8));
        auVar24[6] = -(pcVar1[6] == (char)((uint)iVar9 >> 0x10));
        auVar24[7] = -(pcVar1[7] == (char)((uint)iVar9 >> 0x18));
        auVar24[8] = -(pcVar1[8] == (char)iVar10);
        auVar24[9] = -(pcVar1[9] == (char)((uint)iVar10 >> 8));
        auVar24[10] = -(pcVar1[10] == (char)((uint)iVar10 >> 0x10));
        auVar24[0xb] = -(pcVar1[0xb] == (char)((uint)iVar10 >> 0x18));
        auVar24[0xc] = -(pcVar1[0xc] == (char)iVar11);
        auVar24[0xd] = -(pcVar1[0xd] == (char)((uint)iVar11 >> 8));
        auVar24[0xe] = -(pcVar1[0xe] == (char)((uint)iVar11 >> 0x10));
        auVar24[0xf] = -(pcVar1[0xf] == (char)((uint)iVar11 >> 0x18));
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x1f,0) & 1) != 0) || (SUB161(auVar24 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
        uVar14 = uVar14 + lVar15 + 0x10;
        lVar15 = lVar15 + 0x10;
      }
    }
  }
LAB_1428b6b40:
  uStack_118 = uStack_108 & 0xffffffff;
  puStack_100 = puVar21;
                    /* WARNING: Could not recover jumptable at 0x0001428b6b5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1435af1d8 + *(int *)(&UNK_1435af1d8 + uStack_118 * 4)))();
  return;
}

