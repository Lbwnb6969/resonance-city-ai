// VA 0x1408ddad0, PDB extent 487 bytes
// system_decorator::decorator_visual_state::impl$5::add_decorator_visual_entity
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual_state::impl$5::add_decorator_visual_entity
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual_state.rs
   Extent: 487 */

void pdb_1408ddad0(undefined8 *param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 (*pauVar5) [16];
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined1 (*pauVar11) [16];
  byte bVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iStack_34;
  
  iStack_34 = param_2;
  uVar4 = pdb_1400aede0(param_1 + 4,&iStack_34);
  pauVar5 = (undefined1 (*) [16])*param_1;
  uVar6 = param_1[1];
  bVar12 = (byte)(uVar4 >> 0x38);
  bVar13 = bVar12 >> 1;
  auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
  auVar14 = pshuflw(auVar14,auVar14,0);
  lVar8 = 0;
  uVar9 = uVar4;
  while( true ) {
    uVar9 = uVar9 & uVar6;
    pcVar1 = *pauVar5 + uVar9;
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
    uVar10 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
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
    uVar7 = (uint)uVar10;
    while (uVar10 != 0) {
      uVar3 = 0;
      for (uVar2 = uVar7; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      pauVar11 = pauVar5 + (uVar3 + uVar9 & uVar6) * -2;
      if (*(int *)pauVar11[-2] == param_2) goto LAB_1408ddc21;
      uVar10 = (ushort)(uVar7 - 1) & (ushort)uVar7;
      uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar10);
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
        (SUB161(auVar15 >> 0x77,0) & 1) != 0) || auVar15[0xf] < '\0') break;
    uVar9 = uVar9 + lVar8 + 0x10;
    lVar8 = lVar8 + 0x10;
  }
  if (param_1[2] == 0) {
    pdb_142de0610(param_1,1,param_1 + 4,CONCAT71((int7)(uVar9 >> 8),1));
    pauVar5 = (undefined1 (*) [16])*param_1;
    uVar6 = param_1[1];
  }
  uVar4 = uVar4 & uVar6;
  auVar14 = *(undefined1 (*) [16])(*pauVar5 + uVar4);
  uVar10 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar14[0xf] >> 7) << 0xf
  ;
  uVar7 = (uint)uVar10;
  if (uVar10 == 0) {
    lVar8 = 0x10;
    do {
      uVar4 = uVar4 + lVar8 & uVar6;
      auVar14 = *(undefined1 (*) [16])(*pauVar5 + uVar4);
      lVar8 = lVar8 + 0x10;
      uVar7 = (uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
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
    } while (uVar7 == 0);
  }
  uVar3 = 0;
  for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
    uVar3 = uVar3 + 1;
  }
  uVar9 = uVar3 + uVar4 & uVar6;
  bVar13 = (*pauVar5)[uVar9];
  if (-1 < (char)bVar13) {
    auVar14 = *pauVar5;
    uVar7 = 0;
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
      uVar7 = uVar7 + 1;
    }
    uVar9 = (ulonglong)uVar7;
    bVar13 = (*pauVar5)[uVar9];
  }
  bVar12 = bVar12 >> 1;
  (*pauVar5)[uVar9] = bVar12;
  pauVar5[1][uVar9 - 0x10 & uVar6] = bVar12;
  pauVar11 = pauVar5 + uVar9 * -2;
  *(int *)pauVar5[uVar9 * -2 + -2] = param_2;
  *(undefined8 *)(pauVar11[-2] + 8) = 0;
  *(undefined8 *)pauVar11[-1] = 8;
  *(undefined8 *)(pauVar11[-1] + 8) = 0;
  lVar8 = param_1[3] - _UNK_142e47bf8;
  param_1[2] = param_1[2] - (ulonglong)(bVar13 & 1);
  param_1[3] = lVar8;
LAB_1408ddc21:
  lVar8 = *(longlong *)(pauVar11[-1] + 8);
  if (lVar8 == *(longlong *)(pauVar11[-2] + 8)) {
    pdb_142db0920(pauVar11[-2] + 8);
  }
  *(undefined8 *)(*(longlong *)pauVar11[-1] + lVar8 * 8) = param_3;
  *(longlong *)(pauVar11[-1] + 8) = lVar8 + 1;
  return;
}

