// VA 0x140737690, PDB extent 232 bytes
// toolbar::mei::config::TemplateView::node_mut
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::config::TemplateView::node_mut
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 232 */

longlong pdb_140737690(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ushort uVar9;
  longlong lVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    uVar6 = pdb_1400af0a0(lVar2 + 0x1d0,param_1 + 0x18);
    lVar3 = *(longlong *)(lVar2 + 0x1b0);
    bVar11 = (byte)(uVar6 >> 0x39);
    auVar12 = ZEXT216(CONCAT11(bVar11,bVar11));
    auVar12 = pshuflw(auVar12,auVar12,0);
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(lVar2 + 0x1b8);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar14[0] = -(*pcVar1 == auVar12[0]);
      auVar14[1] = -(pcVar1[1] == auVar12[1]);
      auVar14[2] = -(pcVar1[2] == auVar12[2]);
      auVar14[3] = -(pcVar1[3] == auVar12[3]);
      auVar14[4] = -(pcVar1[4] == auVar12[4]);
      auVar14[5] = -(pcVar1[5] == auVar12[5]);
      auVar14[6] = -(pcVar1[6] == auVar12[6]);
      auVar14[7] = -(pcVar1[7] == auVar12[7]);
      auVar14[8] = -(pcVar1[8] == auVar12[0]);
      auVar14[9] = -(pcVar1[9] == auVar12[1]);
      auVar14[10] = -(pcVar1[10] == auVar12[2]);
      auVar14[0xb] = -(pcVar1[0xb] == auVar12[3]);
      auVar14[0xc] = -(pcVar1[0xc] == auVar12[4]);
      auVar14[0xd] = -(pcVar1[0xd] == auVar12[5]);
      auVar14[0xe] = -(pcVar1[0xe] == auVar12[6]);
      auVar14[0xf] = -(pcVar1[0xf] == auVar12[7]);
      uVar9 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar10 = (uVar4 + uVar6 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8;
        if (*(longlong *)(param_1 + 0x18) == *(longlong *)(lVar3 + -0xd8 + lVar10)) {
          return lVar3 + lVar10 + -0xd0;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar13[0] = -(*pcVar1 == -1);
      auVar13[1] = -(pcVar1[1] == -1);
      auVar13[2] = -(pcVar1[2] == -1);
      auVar13[3] = -(pcVar1[3] == -1);
      auVar13[4] = -(pcVar1[4] == -1);
      auVar13[5] = -(pcVar1[5] == -1);
      auVar13[6] = -(pcVar1[6] == -1);
      auVar13[7] = -(pcVar1[7] == -1);
      auVar13[8] = -(pcVar1[8] == -1);
      auVar13[9] = -(pcVar1[9] == -1);
      auVar13[10] = -(pcVar1[10] == -1);
      auVar13[0xb] = -(pcVar1[0xb] == -1);
      auVar13[0xc] = -(pcVar1[0xc] == -1);
      auVar13[0xd] = -(pcVar1[0xd] == -1);
      auVar13[0xe] = -(pcVar1[0xe] == -1);
      auVar13[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar13 >> 0x17,0) & 1) != 0) || (SUB161(auVar13 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar13 >> 0x27,0) & 1) != 0) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar13 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar13 >> 0x3f,0) & 1) != 0) || (SUB161(auVar13 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar13 >> 0x4f,0) & 1) != 0) || (SUB161(auVar13 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar13 >> 0x5f,0) & 1) != 0) || (SUB161(auVar13 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0) ||
          auVar13[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
}

