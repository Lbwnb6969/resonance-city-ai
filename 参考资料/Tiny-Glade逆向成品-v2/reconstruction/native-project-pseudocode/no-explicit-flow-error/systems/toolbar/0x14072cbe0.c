// VA 0x14072cbe0, PDB extent 314 bytes
// toolbar::mei::core::NodeContext::into_child_with_global_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::NodeContext::into_child_with_global_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 314 */

longlong * pdb_14072cbe0(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ushort uVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  lVar2 = *param_2;
  pdb_14072c2d0(lVar2,param_3);
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    uVar5 = pdb_1400af0a0(lVar2 + 0x1d0,param_2 + 1);
    lVar10 = *(longlong *)(lVar2 + 0x1b0);
    bVar11 = (byte)(uVar5 >> 0x39);
    auVar12 = ZEXT216(CONCAT11(bVar11,bVar11));
    auVar12 = pshuflw(auVar12,auVar12,0);
    lVar6 = 0;
    while( true ) {
      uVar5 = uVar5 & *(ulonglong *)(lVar2 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(lVar10 + uVar5);
      auVar14[0] = -(auVar1[0] == auVar12[0]);
      auVar14[1] = -(auVar1[1] == auVar12[1]);
      auVar14[2] = -(auVar1[2] == auVar12[2]);
      auVar14[3] = -(auVar1[3] == auVar12[3]);
      auVar14[4] = -(auVar1[4] == auVar12[4]);
      auVar14[5] = -(auVar1[5] == auVar12[5]);
      auVar14[6] = -(auVar1[6] == auVar12[6]);
      auVar14[7] = -(auVar1[7] == auVar12[7]);
      auVar14[8] = -(auVar1[8] == auVar12[0]);
      auVar14[9] = -(auVar1[9] == auVar12[1]);
      auVar14[10] = -(auVar1[10] == auVar12[2]);
      auVar14[0xb] = -(auVar1[0xb] == auVar12[3]);
      auVar14[0xc] = -(auVar1[0xc] == auVar12[4]);
      auVar14[0xd] = -(auVar1[0xd] == auVar12[5]);
      auVar14[0xe] = -(auVar1[0xe] == auVar12[6]);
      auVar14[0xf] = -(auVar1[0xf] == auVar12[7]);
      uVar8 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
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
      uVar7 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar9 = (uVar3 + uVar5 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8;
        if (param_2[1] == *(longlong *)(lVar10 + -0xd8 + lVar9)) {
          lVar10 = lVar10 + lVar9;
          lVar6 = *(longlong *)(lVar10 + -0xc0);
          if (lVar6 == *(longlong *)(lVar10 + -0xd0)) {
            pdb_142d7e8a0(lVar10 + -0xd0);
          }
          *(longlong *)(*(longlong *)(lVar10 + -200) + lVar6 * 8) = param_3;
          *(longlong *)(lVar10 + -0xc0) = lVar6 + 1;
          *param_1 = lVar2;
          param_1[1] = param_3;
          param_1[2] = 0;
          return param_1;
        }
        uVar8 = (ushort)(uVar7 - 1) & (ushort)uVar7;
        uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar8);
      }
      auVar13[0] = -(auVar1[0] == -1);
      auVar13[1] = -(auVar1[1] == -1);
      auVar13[2] = -(auVar1[2] == -1);
      auVar13[3] = -(auVar1[3] == -1);
      auVar13[4] = -(auVar1[4] == -1);
      auVar13[5] = -(auVar1[5] == -1);
      auVar13[6] = -(auVar1[6] == -1);
      auVar13[7] = -(auVar1[7] == -1);
      auVar13[8] = -(auVar1[8] == -1);
      auVar13[9] = -(auVar1[9] == -1);
      auVar13[10] = -(auVar1[10] == -1);
      auVar13[0xb] = -(auVar1[0xb] == -1);
      auVar13[0xc] = -(auVar1[0xc] == -1);
      auVar13[0xd] = -(auVar1[0xd] == -1);
      auVar13[0xe] = -(auVar1[0xe] == -1);
      auVar13[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar13 >> 0x17,0) & 1) != 0) || (SUB161(auVar13 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar13 >> 0x27,0) & 1) != 0) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar13 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar13 >> 0x3f,0) & 1) != 0) || (SUB161(auVar13 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar13 >> 0x4f,0) & 1) != 0) || (SUB161(auVar13 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar13 >> 0x5f,0) & 1) != 0) || (SUB161(auVar13 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0) ||
          auVar13[0xf] < '\0') break;
      uVar5 = uVar5 + lVar6 + 0x10;
      lVar6 = lVar6 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6ab8);
}

