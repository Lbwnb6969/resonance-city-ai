// VA 0x140725b60, PDB extent 785 bytes
// toolbar::mei::widgets::back_button
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::back_button
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 785 */

longlong * pdb_140725b60(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ushort uVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_28;
  longlong lStack_20;
  longlong lStack_18;
  
  pdb_1411743c0(&lStack_48,param_2,param_3,param_4,param_3,param_4);
  lVar7 = lStack_48;
  if (*(longlong *)(lStack_48 + 0x1c8) != 0) {
    uVar5 = pdb_1400af0a0(lStack_48 + 0x1d0,&lStack_40);
    lVar8 = *(longlong *)(lVar7 + 0x1b0);
    uVar6 = *(ulonglong *)(lVar7 + 0x1b8);
    bVar13 = (byte)(uVar5 >> 0x39);
    auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar14 = pshuflw(auVar14,auVar14,0);
    lVar7 = 0;
    while( true ) {
      uVar5 = uVar5 & uVar6;
      auVar20 = *(undefined1 (*) [16])(lVar8 + uVar5);
      auVar18[0] = -(auVar20[0] == auVar14[0]);
      auVar18[1] = -(auVar20[1] == auVar14[1]);
      auVar18[2] = -(auVar20[2] == auVar14[2]);
      auVar18[3] = -(auVar20[3] == auVar14[3]);
      auVar18[4] = -(auVar20[4] == auVar14[4]);
      auVar18[5] = -(auVar20[5] == auVar14[5]);
      auVar18[6] = -(auVar20[6] == auVar14[6]);
      auVar18[7] = -(auVar20[7] == auVar14[7]);
      auVar18[8] = -(auVar20[8] == auVar14[0]);
      auVar18[9] = -(auVar20[9] == auVar14[1]);
      auVar18[10] = -(auVar20[10] == auVar14[2]);
      auVar18[0xb] = -(auVar20[0xb] == auVar14[3]);
      auVar18[0xc] = -(auVar20[0xc] == auVar14[4]);
      auVar18[0xd] = -(auVar20[0xd] == auVar14[5]);
      auVar18[0xe] = -(auVar20[0xe] == auVar14[6]);
      auVar18[0xf] = -(auVar20[0xf] == auVar14[7]);
      uVar10 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar11 = (uVar3 + uVar5 & uVar6) * -0xd8;
        if (lStack_40 == *(longlong *)(lVar8 + -0xd8 + lVar11)) {
          *(undefined2 *)(lVar8 + lVar11 + -8) = 0xf00;
          lStack_18 = lStack_38;
          lStack_28 = lStack_48;
          lStack_20 = lStack_40;
          if (*(longlong *)(lStack_48 + 0x1c8) == 0) goto LAB_140725e64;
          uVar6 = pdb_1400af0a0(lStack_48 + 0x1d0,&lStack_20);
          lVar8 = lStack_28;
          lVar7 = *(longlong *)(lStack_48 + 0x1b0);
          bVar13 = (byte)(uVar6 >> 0x39);
          auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
          auVar14 = pshuflw(auVar14,auVar14,0);
          lVar11 = 0;
          goto LAB_140725cb6;
        }
        uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
      }
      auVar15[0] = -(auVar20[0] == -1);
      auVar15[1] = -(auVar20[1] == -1);
      auVar15[2] = -(auVar20[2] == -1);
      auVar15[3] = -(auVar20[3] == -1);
      auVar15[4] = -(auVar20[4] == -1);
      auVar15[5] = -(auVar20[5] == -1);
      auVar15[6] = -(auVar20[6] == -1);
      auVar15[7] = -(auVar20[7] == -1);
      auVar15[8] = -(auVar20[8] == -1);
      auVar15[9] = -(auVar20[9] == -1);
      auVar15[10] = -(auVar20[10] == -1);
      auVar15[0xb] = -(auVar20[0xb] == -1);
      auVar15[0xc] = -(auVar20[0xc] == -1);
      auVar15[0xd] = -(auVar20[0xd] == -1);
      auVar15[0xe] = -(auVar20[0xe] == -1);
      auVar15[0xf] = -(auVar20[0xf] == -1);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar5 = uVar5 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_140725e36:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
LAB_140725cb6:
  uVar6 = uVar6 & *(ulonglong *)(lStack_48 + 0x1b8);
  auVar20 = *(undefined1 (*) [16])(lVar7 + uVar6);
  auVar19[0] = -(auVar20[0] == auVar14[0]);
  auVar19[1] = -(auVar20[1] == auVar14[1]);
  auVar19[2] = -(auVar20[2] == auVar14[2]);
  auVar19[3] = -(auVar20[3] == auVar14[3]);
  auVar19[4] = -(auVar20[4] == auVar14[4]);
  auVar19[5] = -(auVar20[5] == auVar14[5]);
  auVar19[6] = -(auVar20[6] == auVar14[6]);
  auVar19[7] = -(auVar20[7] == auVar14[7]);
  auVar19[8] = -(auVar20[8] == auVar14[0]);
  auVar19[9] = -(auVar20[9] == auVar14[1]);
  auVar19[10] = -(auVar20[10] == auVar14[2]);
  auVar19[0xb] = -(auVar20[0xb] == auVar14[3]);
  auVar19[0xc] = -(auVar20[0xc] == auVar14[4]);
  auVar19[0xd] = -(auVar20[0xd] == auVar14[5]);
  auVar19[0xe] = -(auVar20[0xe] == auVar14[6]);
  auVar19[0xf] = -(auVar20[0xf] == auVar14[7]);
  uVar10 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
  uVar9 = (uint)uVar10;
  while (uVar10 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    lVar12 = (uVar3 + uVar6 & *(ulonglong *)(lStack_48 + 0x1b8)) * -0xd8;
    if (lStack_20 == *(longlong *)(lVar7 + -0xd8 + lVar12)) {
      lVar7 = lVar7 + lVar12;
      *(undefined1 (*) [16])(lVar7 + -0x9c) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar7 + -0xa8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar7 + -0xb8) = (undefined1  [16])0x0;
      *(undefined8 *)(lVar7 + -0x8c) = 0x42480000;
      *(undefined4 *)(lVar7 + -0x84) = 0x42480000;
      *(undefined8 *)(lVar7 + -0x80) = 0;
      *(undefined8 *)(lVar7 + -0x7a) = 0;
      *(undefined2 *)(lVar7 + -0x72) = 0x102;
      lStack_38 = lStack_18;
      lStack_48 = lStack_28;
      lStack_40 = lStack_20;
      if (*(longlong *)(lStack_28 + 0x1c8) != 0) {
        uVar5 = pdb_1400af0a0(lStack_28 + 0x1d0,&lStack_40);
        lVar7 = *(longlong *)(lVar8 + 0x1b0);
        uVar6 = *(ulonglong *)(lVar8 + 0x1b8);
        bVar13 = (byte)(uVar5 >> 0x39);
        auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
        auVar14 = pshuflw(auVar14,auVar14,0);
        lVar8 = 0;
        while( true ) {
          uVar5 = uVar5 & uVar6;
          pcVar2 = (char *)(lVar7 + uVar5);
          auVar20[0] = -(*pcVar2 == auVar14[0]);
          auVar20[1] = -(pcVar2[1] == auVar14[1]);
          auVar20[2] = -(pcVar2[2] == auVar14[2]);
          auVar20[3] = -(pcVar2[3] == auVar14[3]);
          auVar20[4] = -(pcVar2[4] == auVar14[4]);
          auVar20[5] = -(pcVar2[5] == auVar14[5]);
          auVar20[6] = -(pcVar2[6] == auVar14[6]);
          auVar20[7] = -(pcVar2[7] == auVar14[7]);
          auVar20[8] = -(pcVar2[8] == auVar14[0]);
          auVar20[9] = -(pcVar2[9] == auVar14[1]);
          auVar20[10] = -(pcVar2[10] == auVar14[2]);
          auVar20[0xb] = -(pcVar2[0xb] == auVar14[3]);
          auVar20[0xc] = -(pcVar2[0xc] == auVar14[4]);
          auVar20[0xd] = -(pcVar2[0xd] == auVar14[5]);
          auVar20[0xe] = -(pcVar2[0xe] == auVar14[6]);
          auVar20[0xf] = -(pcVar2[0xf] == auVar14[7]);
          uVar10 = (ushort)(SUB161(auVar20 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar20[0xf] >> 7) << 0xf;
          uVar9 = (uint)uVar10;
          while (uVar10 != 0) {
            uVar3 = 0;
            for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar3 = uVar3 + 1;
            }
            lVar11 = (uVar3 + uVar5 & uVar6) * -0xd8;
            if (lStack_40 == *(longlong *)(lVar7 + -0xd8 + lVar11)) {
              pbVar1 = (byte *)(lVar7 + lVar11 + -5);
              *pbVar1 = *pbVar1 & 0xdf;
              param_1[2] = lStack_38;
              *param_1 = lStack_48;
              param_1[1] = lStack_40;
              return param_1;
            }
            uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
            uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
          }
          auVar17[0] = -(*pcVar2 == -1);
          auVar17[1] = -(pcVar2[1] == -1);
          auVar17[2] = -(pcVar2[2] == -1);
          auVar17[3] = -(pcVar2[3] == -1);
          auVar17[4] = -(pcVar2[4] == -1);
          auVar17[5] = -(pcVar2[5] == -1);
          auVar17[6] = -(pcVar2[6] == -1);
          auVar17[7] = -(pcVar2[7] == -1);
          auVar17[8] = -(pcVar2[8] == -1);
          auVar17[9] = -(pcVar2[9] == -1);
          auVar17[10] = -(pcVar2[10] == -1);
          auVar17[0xb] = -(pcVar2[0xb] == -1);
          auVar17[0xc] = -(pcVar2[0xc] == -1);
          auVar17[0xd] = -(pcVar2[0xd] == -1);
          auVar17[0xe] = -(pcVar2[0xe] == -1);
          auVar17[0xf] = -(pcVar2[0xf] == -1);
          if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar17 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar17 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar17 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar17 >> 0x2f,0) & 1) != 0) || (SUB161(auVar17 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar17 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar17 >> 0x47,0) & 1) != 0) || (SUB161(auVar17 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar17 >> 0x57,0) & 1) != 0) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar17 >> 0x77,0) & 1) != 0) || auVar17[0xf] < '\0') break;
          uVar5 = uVar5 + lVar8 + 0x10;
          lVar8 = lVar8 + 0x10;
        }
      }
      goto LAB_140725e36;
    }
    uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
    uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
  }
  auVar16[0] = -(auVar20[0] == -1);
  auVar16[1] = -(auVar20[1] == -1);
  auVar16[2] = -(auVar20[2] == -1);
  auVar16[3] = -(auVar20[3] == -1);
  auVar16[4] = -(auVar20[4] == -1);
  auVar16[5] = -(auVar20[5] == -1);
  auVar16[6] = -(auVar20[6] == -1);
  auVar16[7] = -(auVar20[7] == -1);
  auVar16[8] = -(auVar20[8] == -1);
  auVar16[9] = -(auVar20[9] == -1);
  auVar16[10] = -(auVar20[10] == -1);
  auVar16[0xb] = -(auVar20[0xb] == -1);
  auVar16[0xc] = -(auVar20[0xc] == -1);
  auVar16[0xd] = -(auVar20[0xd] == -1);
  auVar16[0xe] = -(auVar20[0xe] == -1);
  auVar16[0xf] = -(auVar20[0xf] == -1);
  if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar16 >> 0x37,0) & 1) != 0) || (SUB161(auVar16 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar16 >> 0x47,0) & 1) != 0) || (SUB161(auVar16 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar16 >> 0x57,0) & 1) != 0) || (SUB161(auVar16 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar16 >> 0x67,0) & 1) != 0) || (SUB161(auVar16 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar16 >> 0x77,0) & 1) != 0) || auVar16[0xf] < '\0') {
LAB_140725e64:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b30);
  }
  uVar6 = uVar6 + lVar11 + 0x10;
  lVar11 = lVar11 + 0x10;
  goto LAB_140725cb6;
}

