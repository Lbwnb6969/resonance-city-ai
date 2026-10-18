// VA 0x141642ad0, PDB extent 542 bytes
// utils::index_condenser::IndexCondenser::remove<country_core::render::nani::gpu_world::InstanceKey>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/index_condenser.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::index_condenser::IndexCondenser::remove<country_core::render::nani::gpu_world::InstanceKey>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/index_condenser.rs
   Extent: 542 */

undefined8 pdb_141642ad0(longlong param_1,int *param_2)

{
  char *pcVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uStack_40;
  undefined1 auStack_3c [12];
  
  uVar8 = *(ulonglong *)(param_1 + 0x10);
  uVar6 = (ulonglong)(uint)param_2[1];
  if ((uVar6 < uVar8) && (*(int *)(*(longlong *)(param_1 + 8) + uVar6 * 4) == *param_2)) {
LAB_141642bb4:
    if (uVar8 <= uVar6) {
      pdb_142dc7eb2(uVar6,uVar8);
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    uStack_40 = *(undefined4 *)(lVar2 + uVar6 * 4);
    *(undefined4 *)(lVar2 + uVar6 * 4) = *(undefined4 *)(lVar2 + -4 + uVar8 * 4);
    *(ulonglong *)(param_1 + 0x10) = uVar8 - 1;
    uVar7 = pdb_1400aede0(param_1 + 0x38,&uStack_40);
    pdb_140ca9750(auStack_3c,param_1 + 0x18,uVar7);
    if (uVar6 < *(ulonglong *)(param_1 + 0x10)) {
      if (*(longlong *)(param_1 + 0x30) != 0) {
        lVar2 = *(longlong *)(param_1 + 8);
        uVar8 = pdb_1400aede0(param_1 + 0x38,lVar2 + uVar6 * 4);
        lVar11 = *(longlong *)(param_1 + 0x18);
        bVar14 = (byte)(uVar8 >> 0x39);
        auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
        auVar15 = pshuflw(auVar15,auVar15,0);
        lVar12 = 0;
        while( true ) {
          uVar8 = uVar8 & *(ulonglong *)(param_1 + 0x20);
          pcVar1 = (char *)(lVar11 + uVar8);
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
          uVar9 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
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
          uVar13 = (uint)uVar9;
          while (uVar9 != 0) {
            uVar4 = 0;
            for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            uVar10 = uVar4 + uVar8 & *(ulonglong *)(param_1 + 0x20);
            if (*(int *)(lVar2 + uVar6 * 4) == *(int *)(lVar11 + uVar10 * -8 + -8)) {
              *(int *)(lVar11 + -4 + uVar10 * -8) = (int)uVar6;
              goto LAB_141642cc0;
            }
            uVar9 = (ushort)(uVar13 - 1) & (ushort)uVar13;
            uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar9);
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
          uVar8 = uVar8 + lVar12 + 0x10;
          lVar12 = lVar12 + 0x10;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143320de0);
    }
LAB_141642cc0:
    uVar7 = 1;
  }
  else {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      uVar6 = pdb_1400aede0(param_1 + 0x38,param_2);
      lVar2 = *(longlong *)(param_1 + 0x18);
      bVar14 = (byte)(uVar6 >> 0x39);
      auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
      auVar15 = pshuflw(auVar15,auVar15,0);
      lVar11 = 0;
      while( true ) {
        uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x20);
        pcVar1 = (char *)(lVar2 + uVar6);
        auVar18[0] = -(*pcVar1 == auVar15[0]);
        auVar18[1] = -(pcVar1[1] == auVar15[1]);
        auVar18[2] = -(pcVar1[2] == auVar15[2]);
        auVar18[3] = -(pcVar1[3] == auVar15[3]);
        auVar18[4] = -(pcVar1[4] == auVar15[4]);
        auVar18[5] = -(pcVar1[5] == auVar15[5]);
        auVar18[6] = -(pcVar1[6] == auVar15[6]);
        auVar18[7] = -(pcVar1[7] == auVar15[7]);
        auVar18[8] = -(pcVar1[8] == auVar15[0]);
        auVar18[9] = -(pcVar1[9] == auVar15[1]);
        auVar18[10] = -(pcVar1[10] == auVar15[2]);
        auVar18[0xb] = -(pcVar1[0xb] == auVar15[3]);
        auVar18[0xc] = -(pcVar1[0xc] == auVar15[4]);
        auVar18[0xd] = -(pcVar1[0xd] == auVar15[5]);
        auVar18[0xe] = -(pcVar1[0xe] == auVar15[6]);
        auVar18[0xf] = -(pcVar1[0xf] == auVar15[7]);
        uVar9 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
        uVar13 = (uint)uVar9;
        if (uVar9 != 0) {
          do {
            uVar4 = 0;
            for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x20);
            if (*param_2 == *(int *)(lVar2 + uVar10 * -8 + -8)) {
              uVar13 = *(uint *)(lVar2 + -4 + uVar10 * -8);
              uVar6 = (ulonglong)uVar13;
              param_2[1] = uVar13;
              goto LAB_141642bb4;
            }
            uVar9 = (ushort)(uVar13 - 1) & (ushort)uVar13;
            uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar9);
          } while (uVar9 != 0);
        }
        auVar16[0] = -(*pcVar1 == -1);
        auVar16[1] = -(pcVar1[1] == -1);
        auVar16[2] = -(pcVar1[2] == -1);
        auVar16[3] = -(pcVar1[3] == -1);
        auVar16[4] = -(pcVar1[4] == -1);
        auVar16[5] = -(pcVar1[5] == -1);
        auVar16[6] = -(pcVar1[6] == -1);
        auVar16[7] = -(pcVar1[7] == -1);
        auVar16[8] = -(pcVar1[8] == -1);
        auVar16[9] = -(pcVar1[9] == -1);
        auVar16[10] = -(pcVar1[10] == -1);
        auVar16[0xb] = -(pcVar1[0xb] == -1);
        auVar16[0xc] = -(pcVar1[0xc] == -1);
        auVar16[0xd] = -(pcVar1[0xd] == -1);
        auVar16[0xe] = -(pcVar1[0xe] == -1);
        auVar16[0xf] = -(pcVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar16 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar16 >> 0x1f,0) & 1) != 0) || (SUB161(auVar16 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar16 >> 0x37,0) & 1) != 0) || (SUB161(auVar16 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar16 >> 0x47,0) & 1) != 0) || (SUB161(auVar16 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar16 >> 0x57,0) & 1) != 0) || (SUB161(auVar16 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar16 >> 0x67,0) & 1) != 0) || (SUB161(auVar16 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar16 >> 0x77,0) & 1) != 0) || auVar16[0xf] < '\0') break;
        uVar6 = uVar6 + lVar11 + 0x10;
        lVar11 = lVar11 + 0x10;
      }
    }
    uVar7 = 0;
  }
  return uVar7;
}

