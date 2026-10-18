// VA 0x140a61670, PDB extent 461 bytes
// country_core::resources::stairs::stairs_state::TransientStairEdgeIdAllocator::get_or_allocate
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::TransientStairEdgeIdAllocator::get_or_allocate
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 461 */

undefined4 pdb_140a61670(undefined8 *param_1,int param_2,int param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  byte bVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iStack_38;
  int iStack_34;
  
  uVar2 = param_1[3];
  iStack_38 = param_2;
  iStack_34 = param_3;
  uVar5 = pdb_1400af680(param_1 + 4,&iStack_38);
  pauVar6 = (undefined1 (*) [16])*param_1;
  uVar7 = param_1[1];
  bVar13 = (byte)(uVar5 >> 0x38);
  bVar14 = bVar13 >> 1;
  auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
  auVar15 = pshuflw(auVar15,auVar15,0);
  lVar8 = 0;
  uVar10 = uVar5;
  do {
    uVar10 = uVar10 & uVar7;
    pcVar1 = *pauVar6 + uVar10;
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
    uVar9 = (uint)uVar11;
    while (uVar11 != 0) {
      uVar4 = 0;
      for (uVar3 = uVar9; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      uVar12 = uVar4 + uVar10 & uVar7;
      if ((*(int *)((longlong)pauVar6 + uVar12 * -0xc + -0xc) == param_2) &&
         (*(int *)((longlong)pauVar6 + uVar12 * -0xc + -8) == param_3)) {
        lVar8 = (longlong)pauVar6 + uVar12 * -0xc;
        goto LAB_140a617cb;
      }
      uVar11 = (ushort)(uVar9 - 1) & (ushort)uVar9;
      uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar11);
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
    if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar17 >> 0x37,0) & 1) != 0) || (SUB161(auVar17 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar17 >> 0x47,0) & 1) != 0) || (SUB161(auVar17 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar17 >> 0x57,0) & 1) != 0) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar17 >> 0x77,0) & 1) != 0) || auVar17[0xf] < '\0') {
      if (param_1[2] == 0) {
        pdb_142d9cbd0(param_1,1,param_1 + 4,CONCAT71((int7)(uVar10 >> 8),1));
        pauVar6 = (undefined1 (*) [16])*param_1;
        uVar7 = param_1[1];
      }
      uVar5 = uVar5 & uVar7;
      auVar15 = *(undefined1 (*) [16])(*pauVar6 + uVar5);
      uVar11 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar15[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar11;
      if (uVar11 == 0) {
        lVar8 = 0x10;
        do {
          uVar5 = uVar5 + lVar8 & uVar7;
          auVar15 = *(undefined1 (*) [16])(*pauVar6 + uVar5);
          lVar8 = lVar8 + 0x10;
          uVar9 = (uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar15[0xf] >> 7) << 0xf);
        } while (uVar9 == 0);
      }
      uVar4 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      uVar10 = uVar4 + uVar5 & uVar7;
      bVar14 = (*pauVar6)[uVar10];
      if (-1 < (char)bVar14) {
        auVar15 = *pauVar6;
        uVar9 = 0;
        for (uVar4 = (uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar15[0xf] >> 7) << 0xf); (uVar4 & 1) == 0;
            uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        uVar10 = (ulonglong)uVar9;
        bVar14 = (*pauVar6)[uVar10];
      }
      bVar13 = bVar13 >> 1;
      (*pauVar6)[uVar10] = bVar13;
      pauVar6[1][uVar10 - 0x10 & uVar7] = bVar13;
      lVar8 = (longlong)pauVar6 + uVar10 * -0xc;
      *(ulonglong *)((longlong)pauVar6 + uVar10 * -0xc + -0xc) = CONCAT44(param_3,param_2);
      *(int *)((longlong)pauVar6 + uVar10 * -0xc + -4) = (int)uVar2 + 1;
      lVar16 = param_1[3] - _UNK_142e47bf8;
      param_1[2] = param_1[2] - (ulonglong)(bVar14 & 1);
      param_1[3] = lVar16;
LAB_140a617cb:
      return *(undefined4 *)(lVar8 + -4);
    }
    uVar10 = uVar10 + lVar8 + 0x10;
    lVar8 = lVar8 + 0x10;
  } while( true );
}

