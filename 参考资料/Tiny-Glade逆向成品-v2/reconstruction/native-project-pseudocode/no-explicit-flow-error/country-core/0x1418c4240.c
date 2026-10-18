// VA 0x1418c4240, PDB extent 592 bytes
// country_core::resources::rt::RtWorld::get<enum2$<country_core::resources::rt::RtMeshHandle> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::rt::RtWorld::get<enum2$<country_core::resources::rt::RtMeshHandle> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/mod.rs
   Extent: 592 */

undefined1 (*) [16] pdb_1418c4240(longlong *param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ushort uVar7;
  undefined1 (*pauVar8) [16];
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  longlong lStack_40;
  longlong lStack_38;
  
  lStack_40 = param_2;
  lStack_38 = param_3;
  uVar5 = pdb_1417c44b0(param_1 + 4,&lStack_40);
  bVar13 = (byte)(uVar5 >> 0x38);
  bVar14 = bVar13 >> 1;
  auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
  auVar15 = pshuflw(auVar15,auVar15,0);
  lVar11 = 0;
  uVar12 = uVar5;
  while( true ) {
    uVar12 = uVar12 & param_1[1];
    pcVar1 = (char *)(*param_1 + uVar12);
    auVar17[0] = -(*pcVar1 == auVar15[0]);
    auVar17[1] = -(pcVar1[1] == auVar15[1]);
    auVar17[2] = -(pcVar1[2] == auVar15[2]);
    auVar17[3] = -(pcVar1[3] == auVar15[3]);
    auVar17[4] = -(pcVar1[4] == auVar15[4]);
    auVar17[5] = -(pcVar1[5] == auVar15[5]);
    auVar17[6] = -(pcVar1[6] == auVar15[6]);
    auVar17[7] = -(pcVar1[7] == auVar15[7]);
    auVar17[8] = -(pcVar1[8] == auVar15[0]);
    auVar17[9] = -(pcVar1[9] == auVar15[1]);
    auVar17[10] = -(pcVar1[10] == auVar15[2]);
    auVar17[0xb] = -(pcVar1[0xb] == auVar15[3]);
    auVar17[0xc] = -(pcVar1[0xc] == auVar15[4]);
    auVar17[0xd] = -(pcVar1[0xd] == auVar15[5]);
    auVar17[0xe] = -(pcVar1[0xe] == auVar15[6]);
    auVar17[0xf] = -(pcVar1[0xf] == auVar15[7]);
    uVar7 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
    uVar9 = (uint)uVar7;
    while (uVar7 != 0) {
      uVar10 = 0;
      for (uVar3 = uVar9; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      pauVar8 = (undefined1 (*) [16])(*param_1 + (uVar10 + uVar12 & param_1[1]) * -0x20);
      if ((*(longlong *)pauVar8[-2] == param_2) && (*(longlong *)(pauVar8[-2] + 8) == param_3))
      goto LAB_1418c4416;
      uVar7 = (ushort)(uVar9 - 1) & (ushort)uVar9;
      uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar7);
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
    if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar16 >> 0x37,0) & 1) != 0) || (SUB161(auVar16 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar16 >> 0x47,0) & 1) != 0) || (SUB161(auVar16 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar16 >> 0x57,0) & 1) != 0) || (SUB161(auVar16 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar16 >> 0x67,0) & 1) != 0) || (SUB161(auVar16 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar16 >> 0x77,0) & 1) != 0) || auVar16[0xf] < '\0') break;
    uVar12 = uVar12 + lVar11 + 0x10;
    lVar11 = lVar11 + 0x10;
  }
  if (param_1[2] == 0) {
    pdb_142d94cf0(param_1,1,param_1 + 4,CONCAT71((int7)((ulonglong)lVar11 >> 8),1));
  }
  *(undefined1 *)(param_1 + 7) = 1;
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x70,0x10);
  if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x10,0x70);
  }
  pbVar6[0] = 1;
  pbVar6[1] = 0;
  pbVar6[2] = 0;
  pbVar6[3] = 0;
  pbVar6[4] = 0;
  pbVar6[5] = 0;
  pbVar6[6] = 0;
  pbVar6[7] = 0;
  pbVar6[8] = 1;
  uVar4 = _UNK_143073cb8;
  pbVar6[9] = 0;
  pbVar6[10] = 0;
  pbVar6[0xb] = 0;
  pbVar6[0xc] = 0;
  pbVar6[0xd] = 0;
  pbVar6[0xe] = 0;
  pbVar6[0xf] = 0;
  *(undefined8 *)(pbVar6 + 0x40) = _DAT_143073cb0;
  *(undefined8 *)(pbVar6 + 0x48) = uVar4;
  uVar4 = _UNK_143073ca8;
  *(undefined8 *)(pbVar6 + 0x30) = _DAT_143073ca0;
  *(undefined8 *)(pbVar6 + 0x38) = uVar4;
  uVar4 = _UNK_143073c98;
  *(undefined8 *)(pbVar6 + 0x20) = _DAT_143073c90;
  *(undefined8 *)(pbVar6 + 0x28) = uVar4;
  uVar4 = _UNK_143073c88;
  *(undefined8 *)(pbVar6 + 0x10) = _DAT_143073c80;
  *(undefined8 *)(pbVar6 + 0x18) = uVar4;
  pbVar6[0x50] = 0;
  pbVar6[0x51] = 0;
  pbVar6[0x52] = 0;
  pbVar6[0x53] = 0;
  pbVar6[0x54] = 0;
  pbVar6[0x55] = 0;
  pbVar6[0x56] = 0;
  pbVar6[0x57] = 0;
  pbVar6[0x58] = 4;
  pbVar6[0x59] = 0;
  pbVar6[0x5a] = 0;
  pbVar6[0x5b] = 0;
  pbVar6[0x5c] = 0;
  pbVar6[0x5d] = 0;
  pbVar6[0x5e] = 0;
  pbVar6[0x5f] = 0;
  pbVar6[0x60] = 0;
  pbVar6[0x61] = 0;
  pbVar6[0x62] = 0;
  pbVar6[99] = 0;
  pbVar6[100] = 0;
  pbVar6[0x65] = 0;
  pbVar6[0x66] = 0;
  pbVar6[0x67] = 0;
  pbVar6[0x68] = 0;
  pbVar6[0x69] = 0;
  pbVar6[0x6a] = 0;
  pbVar6[0x6b] = 0;
  pauVar2 = (undefined1 (*) [16])*param_1;
  uVar12 = param_1[1];
  uVar5 = uVar5 & uVar12;
  auVar15 = *(undefined1 (*) [16])(*pauVar2 + uVar5);
  uVar7 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
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
          (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar15[0xf] >> 7) << 0xf;
  uVar9 = (uint)uVar7;
  if (uVar7 == 0) {
    lVar11 = 0x10;
    do {
      uVar5 = uVar5 + lVar11 & uVar12;
      auVar15 = *(undefined1 (*) [16])(*pauVar2 + uVar5);
      lVar11 = lVar11 + 0x10;
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
  uVar10 = 0;
  for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
    uVar10 = uVar10 + 1;
  }
  uVar5 = uVar10 + uVar5 & uVar12;
  bVar14 = (*pauVar2)[uVar5];
  if (-1 < (char)bVar14) {
    auVar15 = *pauVar2;
    uVar9 = 0;
    for (uVar10 = (uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar15[0xf] >> 7) << 0xf); (uVar10 & 1) == 0;
        uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    uVar5 = (ulonglong)uVar9;
    bVar14 = (*pauVar2)[uVar5];
  }
  bVar13 = bVar13 >> 1;
  (*pauVar2)[uVar5] = bVar13;
  pauVar2[1][uVar5 - 0x10 & uVar12] = bVar13;
  pauVar8 = pauVar2 + uVar5 * -2;
  *(longlong *)pauVar2[uVar5 * -2 + -2] = param_2;
  *(longlong *)(pauVar8[-2] + 8) = param_3;
  *(byte **)pauVar8[-1] = pbVar6;
  pauVar8[-1][8] = 0;
  lVar11 = param_1[3] - _UNK_142e47bf8;
  param_1[2] = param_1[2] - (ulonglong)(bVar14 & 1);
  param_1[3] = lVar11;
LAB_1418c4416:
  return pauVar8 + -1;
}

