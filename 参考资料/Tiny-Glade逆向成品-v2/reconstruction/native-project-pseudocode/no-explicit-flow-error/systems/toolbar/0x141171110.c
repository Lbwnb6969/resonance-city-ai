// VA 0x141171110, PDB extent 518 bytes
// toolbar::mei::core::NodeContext::with<toolbar::menu::save_error::ui::closure$0::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::core::NodeContext::with<toolbar::menu::save_error::ui::closure$0::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 518 */

longlong * pdb_141171110(longlong *param_1,longlong *param_2,float *param_3)

{
  char *pcVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  longlong lVar12;
  byte bVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  lVar3 = *param_2;
  if (*(longlong *)(lVar3 + 0x1c8) != 0) {
    fVar2 = *param_3;
    uVar8 = pdb_1400af0a0(lVar3 + 0x1d0,param_2 + 1);
    lVar4 = *(longlong *)(lVar3 + 0x1b0);
    bVar13 = (byte)(uVar8 >> 0x39);
    auVar15 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar15 = pshuflw(auVar15,auVar15,0);
    lVar5 = param_2[1];
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar3 + 0x1b8);
      auVar19 = *(undefined1 (*) [16])(lVar4 + uVar8);
      auVar18[0] = -(auVar19[0] == auVar15[0]);
      auVar18[1] = -(auVar19[1] == auVar15[1]);
      auVar18[2] = -(auVar19[2] == auVar15[2]);
      auVar18[3] = -(auVar19[3] == auVar15[3]);
      auVar18[4] = -(auVar19[4] == auVar15[4]);
      auVar18[5] = -(auVar19[5] == auVar15[5]);
      auVar18[6] = -(auVar19[6] == auVar15[6]);
      auVar18[7] = -(auVar19[7] == auVar15[7]);
      auVar18[8] = -(auVar19[8] == auVar15[0]);
      auVar18[9] = -(auVar19[9] == auVar15[1]);
      auVar18[10] = -(auVar19[10] == auVar15[2]);
      auVar18[0xb] = -(auVar19[0xb] == auVar15[3]);
      auVar18[0xc] = -(auVar19[0xc] == auVar15[4]);
      auVar18[0xd] = -(auVar19[0xd] == auVar15[5]);
      auVar18[0xe] = -(auVar19[0xe] == auVar15[6]);
      auVar18[0xf] = -(auVar19[0xf] == auVar15[7]);
      uVar11 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar10; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        lVar12 = (uVar6 + uVar8 & *(ulonglong *)(lVar3 + 0x1b8)) * -0xd8;
        if (lVar5 == *(longlong *)(lVar4 + -0xd8 + lVar12)) {
          *(undefined4 *)(lVar4 + lVar12 + -0x14) = 0xc1200000;
          if (*(longlong *)(lVar3 + 0x1c8) != 0) {
            uVar8 = pdb_1400af0a0(lVar3 + 0x1d0,param_2 + 1);
            lVar4 = *(longlong *)(lVar3 + 0x1b0);
            bVar13 = (byte)(uVar8 >> 0x39);
            auVar15 = ZEXT216(CONCAT11(bVar13,bVar13));
            auVar15 = pshuflw(auVar15,auVar15,0);
            lVar9 = 0;
            while( true ) {
              uVar8 = uVar8 & *(ulonglong *)(lVar3 + 0x1b8);
              pcVar1 = (char *)(lVar4 + uVar8);
              auVar19[0] = -(*pcVar1 == auVar15[0]);
              auVar19[1] = -(pcVar1[1] == auVar15[1]);
              auVar19[2] = -(pcVar1[2] == auVar15[2]);
              auVar19[3] = -(pcVar1[3] == auVar15[3]);
              auVar19[4] = -(pcVar1[4] == auVar15[4]);
              auVar19[5] = -(pcVar1[5] == auVar15[5]);
              auVar19[6] = -(pcVar1[6] == auVar15[6]);
              auVar19[7] = -(pcVar1[7] == auVar15[7]);
              auVar19[8] = -(pcVar1[8] == auVar15[0]);
              auVar19[9] = -(pcVar1[9] == auVar15[1]);
              auVar19[10] = -(pcVar1[10] == auVar15[2]);
              auVar19[0xb] = -(pcVar1[0xb] == auVar15[3]);
              auVar19[0xc] = -(pcVar1[0xc] == auVar15[4]);
              auVar19[0xd] = -(pcVar1[0xd] == auVar15[5]);
              auVar19[0xe] = -(pcVar1[0xe] == auVar15[6]);
              auVar19[0xf] = -(pcVar1[0xf] == auVar15[7]);
              uVar11 = (ushort)(SUB161(auVar19 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar19[0xf] >> 7) << 0xf;
              uVar10 = (uint)uVar11;
              while (uVar11 != 0) {
                uVar6 = 0;
                for (uVar7 = uVar10; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                  uVar6 = uVar6 + 1;
                }
                lVar12 = (uVar6 + uVar8 & *(ulonglong *)(lVar3 + 0x1b8)) * -0xd8;
                if (lVar5 == *(longlong *)(lVar4 + -0xd8 + lVar12)) {
                  fVar14 = 0.0;
                  if (0.0 <= fVar2 / _DAT_142e37880) {
                    fVar14 = fVar2 / _DAT_142e37880;
                  }
                  fVar2 = _DAT_142e36f28;
                  if (fVar14 <= _DAT_142e36f28) {
                    fVar2 = fVar14;
                  }
                  *(float *)(lVar4 + lVar12 + -0xc) = _DAT_142e36f28 - fVar2;
                  param_1[2] = param_2[2];
                  lVar3 = param_2[1];
                  *param_1 = *param_2;
                  param_1[1] = lVar3;
                  return param_1;
                }
                uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
                uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
              }
              auVar17[0] = -(*pcVar1 == -1);
              auVar17[1] = -(pcVar1[1] == -1);
              auVar17[2] = -(pcVar1[2] == -1);
              auVar17[3] = -(pcVar1[3] == -1);
              auVar17[4] = -(pcVar1[4] == -1);
              auVar17[5] = -(pcVar1[5] == -1);
              auVar17[6] = -(pcVar1[6] == -1);
              auVar17[7] = -(pcVar1[7] == -1);
              auVar17[8] = -(pcVar1[8] == -1);
              auVar17[9] = -(pcVar1[9] == -1);
              auVar17[10] = -(pcVar1[10] == -1);
              auVar17[0xb] = -(pcVar1[0xb] == -1);
              auVar17[0xc] = -(pcVar1[0xc] == -1);
              auVar17[0xd] = -(pcVar1[0xd] == -1);
              auVar17[0xe] = -(pcVar1[0xe] == -1);
              auVar17[0xf] = -(pcVar1[0xf] == -1);
              if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar17 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar17 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar17 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar17 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar17 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar17 >> 0x77,0) & 1) != 0) || auVar17[0xf] < '\0') break;
              uVar8 = uVar8 + lVar9 + 0x10;
              lVar9 = lVar9 + 0x10;
            }
          }
          goto LAB_1411712bb;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar16[0] = -(auVar19[0] == -1);
      auVar16[1] = -(auVar19[1] == -1);
      auVar16[2] = -(auVar19[2] == -1);
      auVar16[3] = -(auVar19[3] == -1);
      auVar16[4] = -(auVar19[4] == -1);
      auVar16[5] = -(auVar19[5] == -1);
      auVar16[6] = -(auVar19[6] == -1);
      auVar16[7] = -(auVar19[7] == -1);
      auVar16[8] = -(auVar19[8] == -1);
      auVar16[9] = -(auVar19[9] == -1);
      auVar16[10] = -(auVar19[10] == -1);
      auVar16[0xb] = -(auVar19[0xb] == -1);
      auVar16[0xc] = -(auVar19[0xc] == -1);
      auVar16[0xd] = -(auVar19[0xd] == -1);
      auVar16[0xe] = -(auVar19[0xe] == -1);
      auVar16[0xf] = -(auVar19[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_1411712bb:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
}

