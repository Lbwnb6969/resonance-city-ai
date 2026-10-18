// VA 0x140726180, PDB extent 270 bytes
// toolbar::mei::widgets::MenuButtonView::on_click
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::MenuButtonView::on_click
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 270 */

longlong * pdb_140726180(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ushort uVar9;
  longlong lVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong lStack_30;
  longlong lStack_28;
  
  lVar4 = *param_2;
  lStack_30 = param_2[1];
  lStack_28 = param_2[2];
  if (*(longlong *)(lVar4 + 0x1c8) != 0) {
    uVar5 = pdb_1400af0a0(lVar4 + 0x1d0,&lStack_30);
    lVar6 = *(longlong *)(lVar4 + 0x1b0);
    bVar11 = (byte)(uVar5 >> 0x39);
    auVar12 = ZEXT216(CONCAT11(bVar11,bVar11));
    auVar12 = pshuflw(auVar12,auVar12,0);
    lVar7 = 0;
    while( true ) {
      uVar5 = uVar5 & *(ulonglong *)(lVar4 + 0x1b8);
      pcVar1 = (char *)(lVar6 + uVar5);
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
        uVar2 = 0;
        for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar10 = (uVar2 + uVar5 & *(ulonglong *)(lVar4 + 0x1b8)) * -0xd8;
        if (lStack_30 == *(longlong *)(lVar6 + -0xd8 + lVar10)) {
          lVar6 = lVar6 + lVar10;
          *(undefined1 *)(lVar6 + -8) = 0;
          *(undefined1 *)(lVar6 + -7) = param_3;
          param_1[2] = lStack_28;
          *param_1 = lVar4;
          param_1[1] = lStack_30;
          return param_1;
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
      uVar5 = uVar5 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
}

