// VA 0x140725900, PDB extent 244 bytes
// toolbar::mei::core::NodeContext::node
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::NodeContext::node
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 244 */

longlong pdb_140725900(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ushort uVar10;
  longlong lVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  lVar7 = *param_1;
  if (*(longlong *)(lVar7 + 0x1c8) != 0) {
    uVar6 = pdb_1400af0a0(lVar7 + 0x1d0,param_1 + 1);
    lVar2 = *(longlong *)(lVar7 + 0x1b0);
    bVar12 = (byte)(uVar6 >> 0x39);
    auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
    auVar13 = pshuflw(auVar13,auVar13,0);
    lVar8 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(lVar7 + 0x1b8);
      pcVar1 = (char *)(lVar2 + uVar6);
      auVar15[0] = -(*pcVar1 == auVar13[0]);
      auVar15[1] = -(pcVar1[1] == auVar13[1]);
      auVar15[2] = -(pcVar1[2] == auVar13[2]);
      auVar15[3] = -(pcVar1[3] == auVar13[3]);
      auVar15[4] = -(pcVar1[4] == auVar13[4]);
      auVar15[5] = -(pcVar1[5] == auVar13[5]);
      auVar15[6] = -(pcVar1[6] == auVar13[6]);
      auVar15[7] = -(pcVar1[7] == auVar13[7]);
      auVar15[8] = -(pcVar1[8] == auVar13[0]);
      auVar15[9] = -(pcVar1[9] == auVar13[1]);
      auVar15[10] = -(pcVar1[10] == auVar13[2]);
      auVar15[0xb] = -(pcVar1[0xb] == auVar13[3]);
      auVar15[0xc] = -(pcVar1[0xc] == auVar13[4]);
      auVar15[0xd] = -(pcVar1[0xd] == auVar13[5]);
      auVar15[0xe] = -(pcVar1[0xe] == auVar13[6]);
      auVar15[0xf] = -(pcVar1[0xf] == auVar13[7]);
      uVar10 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar9; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar11 = (uVar4 + uVar6 & *(ulonglong *)(lVar7 + 0x1b8)) * -0xd8;
        if (param_1[1] == *(longlong *)(lVar2 + -0xd8 + lVar11)) {
          return lVar2 + lVar11 + -0xd0;
        }
        uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
      }
      auVar14[0] = -(*pcVar1 == -1);
      auVar14[1] = -(pcVar1[1] == -1);
      auVar14[2] = -(pcVar1[2] == -1);
      auVar14[3] = -(pcVar1[3] == -1);
      auVar14[4] = -(pcVar1[4] == -1);
      auVar14[5] = -(pcVar1[5] == -1);
      auVar14[6] = -(pcVar1[6] == -1);
      auVar14[7] = -(pcVar1[7] == -1);
      auVar14[8] = -(pcVar1[8] == -1);
      auVar14[9] = -(pcVar1[9] == -1);
      auVar14[10] = -(pcVar1[10] == -1);
      auVar14[0xb] = -(pcVar1[0xb] == -1);
      auVar14[0xc] = -(pcVar1[0xc] == -1);
      auVar14[0xd] = -(pcVar1[0xd] == -1);
      auVar14[0xe] = -(pcVar1[0xe] == -1);
      auVar14[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar14 >> 0x17,0) & 1) != 0) || (SUB161(auVar14 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || (SUB161(auVar14 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar14 >> 0x6f,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0) ||
          auVar14[0xf] < '\0') break;
      uVar6 = uVar6 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
  pcVar3 = (code *)swi(3);
  lVar7 = (*pcVar3)();
  return lVar7;
}

