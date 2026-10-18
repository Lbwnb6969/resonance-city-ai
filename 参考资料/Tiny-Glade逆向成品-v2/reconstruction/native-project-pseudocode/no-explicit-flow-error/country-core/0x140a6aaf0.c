// VA 0x140a6aaf0, PDB extent 491 bytes
// country_core::resources::walls::wall_stone_columns::StoneColumnCollisionStorage::clear_and_get_mut
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_stone_columns.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::wall_stone_columns::StoneColumnCollisionStorage::clear_and_get_mut
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_stone_columns.rs
   Extent: 491 */

undefined1 * pdb_140a6aaf0(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ushort uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong lStack_30;
  
  lVar10 = param_1[2];
  if (lVar10 == *param_1) {
    pdb_142d7e8a0(param_1);
  }
  *(longlong *)(param_1[1] + lVar10 * 8) = param_2;
  param_1[2] = lVar10 + 1;
  lStack_30 = param_2;
  uVar4 = pdb_1400af0a0(param_1 + 7,&lStack_30);
  pauVar8 = (undefined1 (*) [16])param_1[3];
  uVar9 = param_1[4];
  bVar12 = (byte)(uVar4 >> 0x38);
  bVar13 = bVar12 >> 1;
  auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
  auVar14 = pshuflw(auVar14,auVar14,0);
  lVar10 = 0;
  uVar11 = uVar4;
  do {
    uVar11 = uVar11 & uVar9;
    pcVar1 = *pauVar8 + uVar11;
    auVar16[0] = -(*pcVar1 == auVar14[0]);
    auVar16[1] = -(pcVar1[1] == auVar14[1]);
    auVar16[2] = -(pcVar1[2] == auVar14[2]);
    auVar16[3] = -(pcVar1[3] == auVar14[3]);
    auVar16[4] = -(pcVar1[4] == auVar14[4]);
    auVar16[5] = -(pcVar1[5] == auVar14[5]);
    auVar16[6] = -(pcVar1[6] == auVar14[6]);
    auVar16[7] = -(pcVar1[7] == auVar14[7]);
    auVar16[8] = -(pcVar1[8] == auVar14[0]);
    auVar16[9] = -(pcVar1[9] == auVar14[1]);
    auVar16[10] = -(pcVar1[10] == auVar14[2]);
    auVar16[0xb] = -(pcVar1[0xb] == auVar14[3]);
    auVar16[0xc] = -(pcVar1[0xc] == auVar14[4]);
    auVar16[0xd] = -(pcVar1[0xd] == auVar14[5]);
    auVar16[0xe] = -(pcVar1[0xe] == auVar14[6]);
    auVar16[0xf] = -(pcVar1[0xf] == auVar14[7]);
    uVar5 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
    uVar6 = (uint)uVar5;
    while (uVar5 != 0) {
      uVar3 = 0;
      for (uVar2 = uVar6; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      pauVar7 = pauVar8 + (uVar3 + uVar11 & uVar9) * -2;
      if (*(longlong *)pauVar7[-2] == param_2) {
        *(undefined8 *)(pauVar7[-1] + 8) = 0;
        goto LAB_140a6ac67;
      }
      uVar5 = (ushort)(uVar6 - 1) & (ushort)uVar6;
      uVar6 = CONCAT22((short)(uVar6 - 1 >> 0x10),uVar5);
    }
    auVar15[0] = -(*pcVar1 == -1);
    auVar15[1] = -(pcVar1[1] == -1);
    auVar15[2] = -(pcVar1[2] == -1);
    auVar15[3] = -(pcVar1[3] == -1);
    auVar15[4] = -(pcVar1[4] == -1);
    auVar15[5] = -(pcVar1[5] == -1);
    auVar15[6] = -(pcVar1[6] == -1);
    auVar15[7] = -(pcVar1[7] == -1);
    auVar15[8] = -(pcVar1[8] == -1);
    auVar15[9] = -(pcVar1[9] == -1);
    auVar15[10] = -(pcVar1[10] == -1);
    auVar15[0xb] = -(pcVar1[0xb] == -1);
    auVar15[0xc] = -(pcVar1[0xc] == -1);
    auVar15[0xd] = -(pcVar1[0xd] == -1);
    auVar15[0xe] = -(pcVar1[0xe] == -1);
    auVar15[0xf] = -(pcVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar15 >> 0x37,0) & 1) != 0) || (SUB161(auVar15 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar15 >> 0x47,0) & 1) != 0) || (SUB161(auVar15 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar15 >> 0x57,0) & 1) != 0) || (SUB161(auVar15 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar15 >> 0x67,0) & 1) != 0) || (SUB161(auVar15 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar15 >> 0x77,0) & 1) != 0) || auVar15[0xf] < '\0') {
      if (param_1[5] == 0) {
        pdb_142d9a110(param_1 + 3,1,param_1 + 7,CONCAT71((int7)((ulonglong)lVar10 >> 8),1));
        pauVar8 = (undefined1 (*) [16])param_1[3];
        uVar9 = param_1[4];
      }
      uVar4 = uVar4 & uVar9;
      auVar14 = *(undefined1 (*) [16])(*pauVar8 + uVar4);
      uVar5 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar14[0xf] >> 7) << 0xf;
      uVar6 = (uint)uVar5;
      if (uVar5 == 0) {
        lVar10 = 0x10;
        do {
          uVar4 = uVar4 + lVar10 & uVar9;
          auVar14 = *(undefined1 (*) [16])(*pauVar8 + uVar4);
          lVar10 = lVar10 + 0x10;
          uVar6 = (uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar14[0xf] >> 7) << 0xf);
        } while (uVar6 == 0);
      }
      uVar3 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      uVar11 = uVar3 + uVar4 & uVar9;
      bVar13 = (*pauVar8)[uVar11];
      if (-1 < (char)bVar13) {
        auVar14 = *pauVar8;
        uVar6 = 0;
        for (uVar3 = (uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar14[0xf] >> 7) << 0xf); (uVar3 & 1) == 0;
            uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar11 = (ulonglong)uVar6;
        bVar13 = (*pauVar8)[uVar11];
      }
      bVar12 = bVar12 >> 1;
      (*pauVar8)[uVar11] = bVar12;
      pauVar8[1][uVar11 - 0x10 & uVar9] = bVar12;
      pauVar7 = pauVar8 + uVar11 * -2;
      *(longlong *)pauVar8[uVar11 * -2 + -2] = param_2;
      *(undefined8 *)(pauVar7[-2] + 8) = 0;
      *(undefined8 *)pauVar7[-1] = 4;
      *(undefined8 *)(pauVar7[-1] + 8) = 0;
      lVar10 = param_1[6] - _UNK_142e47bf8;
      param_1[5] = param_1[5] - (ulonglong)(bVar13 & 1);
      param_1[6] = lVar10;
LAB_140a6ac67:
      return pauVar7[-2] + 8;
    }
    uVar11 = uVar11 + lVar10 + 0x10;
    lVar10 = lVar10 + 0x10;
  } while( true );
}

