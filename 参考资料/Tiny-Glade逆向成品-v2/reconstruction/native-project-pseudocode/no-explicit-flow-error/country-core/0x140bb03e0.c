// VA 0x140bb03e0, PDB extent 432 bytes
// country_core::systems::wall::eraser::bulldoze_params::BulldozeParams::try_decorator_delete_cmd
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/bulldoze_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::eraser::bulldoze_params::BulldozeParams::try_decorator_delete_cmd
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/bulldoze_params.rs
   Extent: 432 */

undefined8 * pdb_140bb03e0(undefined8 *param_1,longlong param_2,int param_3)

{
  char *pcVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iStack_40;
  int aiStack_3c [7];
  
  lVar9 = *(longlong *)(param_2 + 0xd8);
  if (*(longlong *)(lVar9 + 0x78) != 0) {
    iStack_40 = param_3;
    uVar7 = pdb_1400aede0(lVar9 + 0x80,&iStack_40);
    lVar13 = *(longlong *)(lVar9 + 0x60);
    bVar14 = (byte)(uVar7 >> 0x39);
    auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar15 = pshuflw(auVar15,auVar15,0);
    lVar8 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar9 + 0x68);
      auVar19 = *(undefined1 (*) [16])(lVar13 + uVar7);
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
        uVar3 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar12 = uVar3 + uVar7 & *(ulonglong *)(lVar9 + 0x68);
        if (param_3 == *(int *)(lVar13 + -0x18 + uVar12 * -0x18)) {
          lVar13 = lVar13 + uVar12 * -0x18;
          uVar5 = *(undefined8 *)(lVar13 + -0x10);
          uVar6 = *(undefined8 *)(lVar13 + -8);
          plVar2 = *(longlong **)(param_2 + 0x178);
          if (plVar2[3] != 0) {
            aiStack_3c[0] = param_3;
            uVar7 = pdb_1400aede0(plVar2 + 4,aiStack_3c);
            bVar14 = (byte)(uVar7 >> 0x39);
            auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
            auVar15 = pshuflw(auVar15,auVar15,0);
            lVar9 = 0;
            while( true ) {
              uVar7 = uVar7 & plVar2[1];
              pcVar1 = (char *)(*plVar2 + uVar7);
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
                uVar3 = 0;
                for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                  uVar3 = uVar3 + 1;
                }
                lVar13 = *plVar2 + (uVar3 + uVar7 & plVar2[1]) * -0x40;
                if (param_3 == *(int *)(lVar13 + -0x40)) {
                  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(lVar13 + -0x18);
                  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)(lVar13 + -0x20);
                  *param_1 = uVar5;
                  param_1[1] = uVar6;
                  *(int *)(param_1 + 2) = param_3;
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
              uVar7 = uVar7 + lVar9 + 0x10;
              lVar9 = lVar9 + 0x10;
            }
          }
          goto LAB_140bb0560;
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
      uVar7 = uVar7 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
LAB_140bb0560:
  *param_1 = 3;
  return param_1;
}

