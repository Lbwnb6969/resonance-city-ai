// VA 0x141172f20, PDB extent 536 bytes
// toolbar::mei::core::iter_subtree<tuple$<>,toolbar::mei::core::impl$15::subtree_has_focus::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::core::iter_subtree<tuple$<>,toolbar::mei::core::impl$15::subtree_has_focus::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 536 */

ulonglong pdb_141172f20(longlong param_1,longlong param_2,longlong *param_3)

{
  char *pcVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  ulonglong uVar7;
  undefined *puVar8;
  ulonglong unaff_RBP;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ushort uVar13;
  int iVar14;
  ulonglong in_R10;
  longlong lVar15;
  bool bVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  longlong lStack_40;
  longlong lStack_38;
  
  lVar10 = *param_3;
  lStack_40 = param_2;
  lStack_38 = param_2;
  if (*(longlong *)(lVar10 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lVar10 + 0x1d0,&lStack_38);
    lVar2 = *(longlong *)(lVar10 + 0x1b0);
    bVar17 = (byte)(uVar7 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar9 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar10 + 0x1b8);
      auVar22 = *(undefined1 (*) [16])(lVar2 + uVar7);
      auVar21[0] = -(auVar22[0] == auVar18[0]);
      auVar21[1] = -(auVar22[1] == auVar18[1]);
      auVar21[2] = -(auVar22[2] == auVar18[2]);
      auVar21[3] = -(auVar22[3] == auVar18[3]);
      auVar21[4] = -(auVar22[4] == auVar18[4]);
      auVar21[5] = -(auVar22[5] == auVar18[5]);
      auVar21[6] = -(auVar22[6] == auVar18[6]);
      auVar21[7] = -(auVar22[7] == auVar18[7]);
      auVar21[8] = -(auVar22[8] == auVar18[0]);
      auVar21[9] = -(auVar22[9] == auVar18[1]);
      auVar21[10] = -(auVar22[10] == auVar18[2]);
      auVar21[0xb] = -(auVar22[0xb] == auVar18[3]);
      auVar21[0xc] = -(auVar22[0xc] == auVar18[4]);
      auVar21[0xd] = -(auVar22[0xd] == auVar18[5]);
      auVar21[0xe] = -(auVar22[0xe] == auVar18[6]);
      auVar21[0xf] = -(auVar22[0xf] == auVar18[7]);
      uVar13 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
      uVar12 = (ulonglong)uVar13;
      while (uVar13 != 0) {
        uVar11 = 0;
        for (uVar4 = (uint)uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        lVar15 = (uVar11 + uVar7 & *(ulonglong *)(lVar10 + 0x1b8)) * -0xd8;
        if (param_2 == *(longlong *)(lVar2 + -0xd8 + lVar15)) {
          unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
          if ((*(byte *)(lVar2 + lVar15 + -6) & 0x40) != 0) goto LAB_141173110;
          if (*(longlong *)(param_1 + 0x1c8) == 0) goto LAB_14117311f;
          uVar7 = pdb_1400af0a0(param_1 + 0x1d0,&lStack_40);
          puVar8 = *(undefined **)(param_1 + 0x1b0);
          bVar17 = (byte)(uVar7 >> 0x39);
          auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
          auVar18 = pshuflw(auVar18,auVar18,0);
          lVar10 = 0;
          goto LAB_14117305d;
        }
        iVar14 = (uint)uVar12 - 1;
        uVar13 = (ushort)iVar14 & (ushort)uVar12;
        uVar12 = (ulonglong)CONCAT22((short)((uint)iVar14 >> 0x10),uVar13);
        in_R10 = uVar12;
      }
      auVar19[0] = -(auVar22[0] == -1);
      auVar19[1] = -(auVar22[1] == -1);
      auVar19[2] = -(auVar22[2] == -1);
      auVar19[3] = -(auVar22[3] == -1);
      auVar19[4] = -(auVar22[4] == -1);
      auVar19[5] = -(auVar22[5] == -1);
      auVar19[6] = -(auVar22[6] == -1);
      auVar19[7] = -(auVar22[7] == -1);
      auVar19[8] = -(auVar22[8] == -1);
      auVar19[9] = -(auVar22[9] == -1);
      auVar19[10] = -(auVar22[10] == -1);
      auVar19[0xb] = -(auVar22[0xb] == -1);
      auVar19[0xc] = -(auVar22[0xc] == -1);
      auVar19[0xd] = -(auVar22[0xd] == -1);
      auVar19[0xe] = -(auVar22[0xe] == -1);
      auVar19[0xf] = -(auVar22[0xf] == -1);
      unaff_RSI = param_3;
      unaff_RDI = param_1;
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar7 = uVar7 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
  puVar8 = &UNK_14329be28;
  pdb_142dc8110(&UNK_14329be28,0x16,&UNK_14329c4f8);
  param_3 = unaff_RSI;
  param_1 = unaff_RDI;
LAB_1411730d6:
  lVar10 = *(longlong *)(puVar8 + (in_R10 - 200));
  lVar2 = *(longlong *)(puVar8 + (in_R10 - 0xc0));
  lVar9 = 0;
  do {
    bVar16 = lVar2 << 3 == lVar9;
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),!bVar16);
    if (bVar16) break;
    cVar6 = pdb_141172f20(param_1,*(undefined8 *)(lVar10 + lVar9),param_3);
    lVar9 = lVar9 + 8;
  } while (cVar6 == '\0');
LAB_141173110:
  return unaff_RBP & 0xffffffff;
LAB_14117305d:
  uVar7 = uVar7 & *(ulonglong *)(param_1 + 0x1b8);
  pcVar1 = puVar8 + uVar7;
  auVar22[0] = -(*pcVar1 == auVar18[0]);
  auVar22[1] = -(pcVar1[1] == auVar18[1]);
  auVar22[2] = -(pcVar1[2] == auVar18[2]);
  auVar22[3] = -(pcVar1[3] == auVar18[3]);
  auVar22[4] = -(pcVar1[4] == auVar18[4]);
  auVar22[5] = -(pcVar1[5] == auVar18[5]);
  auVar22[6] = -(pcVar1[6] == auVar18[6]);
  auVar22[7] = -(pcVar1[7] == auVar18[7]);
  auVar22[8] = -(pcVar1[8] == auVar18[0]);
  auVar22[9] = -(pcVar1[9] == auVar18[1]);
  auVar22[10] = -(pcVar1[10] == auVar18[2]);
  auVar22[0xb] = -(pcVar1[0xb] == auVar18[3]);
  auVar22[0xc] = -(pcVar1[0xc] == auVar18[4]);
  auVar22[0xd] = -(pcVar1[0xd] == auVar18[5]);
  auVar22[0xe] = -(pcVar1[0xe] == auVar18[6]);
  auVar22[0xf] = -(pcVar1[0xf] == auVar18[7]);
  uVar13 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
  uVar11 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    in_R10 = (uVar4 + uVar7 & *(ulonglong *)(param_1 + 0x1b8)) * -0xd8;
    if (param_2 == *(longlong *)(puVar8 + (in_R10 - 0xd8))) goto LAB_1411730d6;
    uVar13 = (ushort)(uVar11 - 1) & (ushort)uVar11;
    uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar13);
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
  if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar20 >> 0x37,0) & 1) != 0) || (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar20 >> 0x47,0) & 1) != 0) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') {
LAB_14117311f:
    pdb_142dc8110(&UNK_14329be28,0x16,&UNK_14329cd78);
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  uVar7 = uVar7 + lVar10 + 0x10;
  lVar10 = lVar10 + 0x10;
  goto LAB_14117305d;
}

