// VA 0x1408ddcc0, PDB extent 548 bytes
// system_decorator::decorator_visual_state::impl$4::add_decorator_visual_entity
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual_state::impl$4::add_decorator_visual_entity
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual_state.rs
   Extent: 548 */

void pdb_1408ddcc0(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  char *pcVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 (*pauVar7) [16];
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  byte bVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  
  uStack_3c = param_2;
  uVar6 = pdb_1400aede0(param_1 + 4,&uStack_3c);
  pauVar7 = (undefined1 (*) [16])*param_1;
  uVar8 = param_1[1];
  bVar14 = (byte)(uVar6 >> 0x38);
  bVar15 = bVar14 >> 1;
  auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
  auVar16 = pshuflw(auVar16,auVar16,0);
  lVar10 = 0;
  uVar11 = uVar6;
  do {
    uVar11 = uVar11 & uVar8;
    pcVar1 = *pauVar7 + uVar11;
    auVar19[0] = -(*pcVar1 == auVar16[0]);
    auVar19[1] = -(pcVar1[1] == auVar16[1]);
    auVar19[2] = -(pcVar1[2] == auVar16[2]);
    auVar19[3] = -(pcVar1[3] == auVar16[3]);
    auVar19[4] = -(pcVar1[4] == auVar16[4]);
    auVar19[5] = -(pcVar1[5] == auVar16[5]);
    auVar19[6] = -(pcVar1[6] == auVar16[6]);
    auVar19[7] = -(pcVar1[7] == auVar16[7]);
    auVar19[8] = -(pcVar1[8] == auVar16[0]);
    auVar19[9] = -(pcVar1[9] == auVar16[1]);
    auVar19[10] = -(pcVar1[10] == auVar16[2]);
    auVar19[0xb] = -(pcVar1[0xb] == auVar16[3]);
    auVar19[0xc] = -(pcVar1[0xc] == auVar16[4]);
    auVar19[0xd] = -(pcVar1[0xd] == auVar16[5]);
    auVar19[0xe] = -(pcVar1[0xe] == auVar16[6]);
    auVar19[0xf] = -(pcVar1[0xf] == auVar16[7]);
    uVar12 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
    uVar9 = (uint)uVar12;
    while (uVar12 != 0) {
      uVar5 = 0;
      for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      uVar13 = uVar5 + uVar11 & uVar8;
      if (*(uint *)((longlong)pauVar7 + uVar13 * -0x28 + -0x28) == param_2) {
        lVar10 = (longlong)pauVar7 + uVar13 * -0x28;
        iVar3 = *(int *)(lVar10 + -0x20);
        goto joined_r0x0001408ddd84;
      }
      uVar12 = (ushort)(uVar9 - 1) & (ushort)uVar9;
      uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar12);
    }
    auVar18[0] = -(*pcVar1 == -1);
    auVar18[1] = -(pcVar1[1] == -1);
    auVar18[2] = -(pcVar1[2] == -1);
    auVar18[3] = -(pcVar1[3] == -1);
    auVar18[4] = -(pcVar1[4] == -1);
    auVar18[5] = -(pcVar1[5] == -1);
    auVar18[6] = -(pcVar1[6] == -1);
    auVar18[7] = -(pcVar1[7] == -1);
    auVar18[8] = -(pcVar1[8] == -1);
    auVar18[9] = -(pcVar1[9] == -1);
    auVar18[10] = -(pcVar1[10] == -1);
    auVar18[0xb] = -(pcVar1[0xb] == -1);
    auVar18[0xc] = -(pcVar1[0xc] == -1);
    auVar18[0xd] = -(pcVar1[0xd] == -1);
    auVar18[0xe] = -(pcVar1[0xe] == -1);
    auVar18[0xf] = -(pcVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar18 >> 0x37,0) & 1) != 0) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar18 >> 0x47,0) & 1) != 0) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') {
      if (param_1[2] == 0) {
        pdb_142ddfac0(param_1,1,param_1 + 4,CONCAT71((int7)(uVar11 >> 8),1));
        pauVar7 = (undefined1 (*) [16])*param_1;
        uVar8 = param_1[1];
      }
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_2c = 0;
      uVar6 = uVar6 & uVar8;
      auVar16 = *(undefined1 (*) [16])(*pauVar7 + uVar6);
      uVar12 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar16[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar12;
      if (uVar12 == 0) {
        lVar10 = 0x10;
        do {
          uVar6 = uVar6 + lVar10 & uVar8;
          auVar16 = *(undefined1 (*) [16])(*pauVar7 + uVar6);
          lVar10 = lVar10 + 0x10;
          uVar9 = (uint)(ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar16[0xf] >> 7) << 0xf);
        } while (uVar9 == 0);
      }
      uVar5 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      uVar11 = uVar5 + uVar6 & uVar8;
      bVar15 = (*pauVar7)[uVar11];
      if (-1 < (char)bVar15) {
        auVar16 = *pauVar7;
        uVar9 = 0;
        for (uVar5 = (uint)(ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar16[0xf] >> 7) << 0xf); (uVar5 & 1) == 0;
            uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        uVar11 = (ulonglong)uVar9;
        bVar15 = (*pauVar7)[uVar11];
      }
      bVar14 = bVar14 >> 1;
      (*pauVar7)[uVar11] = bVar14;
      pauVar7[1][uVar11 - 0x10 & uVar8] = bVar14;
      lVar10 = (longlong)pauVar7 + uVar11 * -0x28;
      *(uint *)((longlong)pauVar7 + uVar11 * -0x28 + -0x28) = param_2;
      puVar2 = (ulonglong *)((longlong)pauVar7 + uVar11 * -0x28 + -0x24);
      *puVar2 = (ulonglong)uStack_3c;
      puVar2[1] = 0;
      *(undefined4 *)((longlong)pauVar7 + uVar11 * -0x28 + -0x14) = 0;
      *(undefined8 *)((longlong)pauVar7 + uVar11 * -0x28 + -0x10) = 8;
      *(undefined8 *)((longlong)pauVar7 + uVar11 * -0x28 + -8) = 0;
      lVar17 = param_1[3] - _UNK_142e47bf8;
      param_1[2] = param_1[2] - (ulonglong)(bVar15 & 1);
      param_1[3] = lVar17;
      iVar3 = *(int *)(lVar10 + -0x20);
joined_r0x0001408ddd84:
      if (iVar3 == 1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14301a394,0x89,&UNK_14301a410);
      }
      lVar17 = *(longlong *)(lVar10 + -8);
      if (lVar17 == *(longlong *)(lVar10 + -0x18)) {
        pdb_142db0920(lVar10 + -0x18);
      }
      *(undefined8 *)(*(longlong *)(lVar10 + -0x10) + lVar17 * 8) = param_3;
      *(longlong *)(lVar10 + -8) = lVar17 + 1;
      return;
    }
    uVar11 = uVar11 + lVar10 + 0x10;
    lVar10 = lVar10 + 0x10;
  } while( true );
}

