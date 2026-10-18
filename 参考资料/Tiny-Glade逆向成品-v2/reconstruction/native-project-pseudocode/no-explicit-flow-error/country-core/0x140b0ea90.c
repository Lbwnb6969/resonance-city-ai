// VA 0x140b0ea90, PDB extent 196 bytes
// country_core::resources::walls::inner_walls::InnerWalls::contains
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::inner_walls::InnerWalls::contains
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
   Extent: 196 */

ulonglong pdb_140b0ea90(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong lStack_18;
  
  if (param_1[3] != 0) {
    lStack_18 = param_2;
    uVar4 = pdb_1400af0a0(param_1 + 4,&lStack_18);
    bVar10 = (byte)(uVar4 >> 0x39);
    auVar11 = ZEXT216(CONCAT11(bVar10,bVar10));
    auVar11 = pshuflw(auVar11,auVar11,0);
    lVar8 = 0;
    while( true ) {
      uVar4 = uVar4 & param_1[1];
      pcVar1 = (char *)(*param_1 + uVar4);
      auVar13[0] = -(*pcVar1 == auVar11[0]);
      auVar13[1] = -(pcVar1[1] == auVar11[1]);
      auVar13[2] = -(pcVar1[2] == auVar11[2]);
      auVar13[3] = -(pcVar1[3] == auVar11[3]);
      auVar13[4] = -(pcVar1[4] == auVar11[4]);
      auVar13[5] = -(pcVar1[5] == auVar11[5]);
      auVar13[6] = -(pcVar1[6] == auVar11[6]);
      auVar13[7] = -(pcVar1[7] == auVar11[7]);
      auVar13[8] = -(pcVar1[8] == auVar11[0]);
      auVar13[9] = -(pcVar1[9] == auVar11[1]);
      auVar13[10] = -(pcVar1[10] == auVar11[2]);
      auVar13[0xb] = -(pcVar1[0xb] == auVar11[3]);
      auVar13[0xc] = -(pcVar1[0xc] == auVar11[4]);
      auVar13[0xd] = -(pcVar1[0xd] == auVar11[5]);
      auVar13[0xe] = -(pcVar1[0xe] == auVar11[6]);
      auVar13[0xf] = -(pcVar1[0xf] == auVar11[7]);
      uVar5 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar5;
      while (uVar5 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar9; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        uVar6 = uVar2 + uVar4 & param_1[1];
        uVar7 = CONCAT71((int7)(-uVar6 >> 8),1);
        if (param_2 == *(longlong *)(*param_1 + -0x78 + uVar6 * -0x78)) goto LAB_140b0eb4b;
        uVar5 = (ushort)(uVar9 - 1) & (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar5);
      }
      auVar12[0] = -(*pcVar1 == -1);
      auVar12[1] = -(pcVar1[1] == -1);
      auVar12[2] = -(pcVar1[2] == -1);
      auVar12[3] = -(pcVar1[3] == -1);
      auVar12[4] = -(pcVar1[4] == -1);
      auVar12[5] = -(pcVar1[5] == -1);
      auVar12[6] = -(pcVar1[6] == -1);
      auVar12[7] = -(pcVar1[7] == -1);
      auVar12[8] = -(pcVar1[8] == -1);
      auVar12[9] = -(pcVar1[9] == -1);
      auVar12[10] = -(pcVar1[10] == -1);
      auVar12[0xb] = -(pcVar1[0xb] == -1);
      auVar12[0xc] = -(pcVar1[0xc] == -1);
      auVar12[0xd] = -(pcVar1[0xd] == -1);
      auVar12[0xe] = -(pcVar1[0xe] == -1);
      auVar12[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar12 >> 7,0) & 1) != 0 || (SUB161(auVar12 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar12 >> 0x17,0) & 1) != 0) || (SUB161(auVar12 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar12 >> 0x27,0) & 1) != 0) || (SUB161(auVar12 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar12 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar12 >> 0x3f,0) & 1) != 0) || (SUB161(auVar12 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar12 >> 0x4f,0) & 1) != 0) || (SUB161(auVar12 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || (SUB161(auVar12 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar12 >> 0x6f,0) & 1) != 0) || (SUB161(auVar12 >> 0x77,0) & 1) != 0) ||
          auVar12[0xf] < '\0') break;
      uVar4 = uVar4 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
  uVar7 = 0;
LAB_140b0eb4b:
  return uVar7 & 0xffffffff;
}

