// VA 0x140c45920, PDB extent 250 bytes
// country_core::resources::walls::decorator_subtype::DerivedDecoratorInfo::subtype
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_subtype::DerivedDecoratorInfo::subtype
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
   Extent: 250 */

undefined1 pdb_140c45920(longlong *param_1,int param_2)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ushort uVar8;
  ulonglong uVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iStack_24;
  int *piStack_20;
  code *pcStack_18;
  
  param_1 = (longlong *)*param_1;
  iStack_24 = param_2;
  if (param_1[3] != 0) {
    uVar5 = pdb_1400aede0(param_1 + 4,&iStack_24);
    lVar2 = *param_1;
    bVar10 = (byte)(uVar5 >> 0x39);
    auVar11 = ZEXT216(CONCAT11(bVar10,bVar10));
    auVar11 = pshuflw(auVar11,auVar11,0);
    lVar6 = 0;
    while( true ) {
      uVar5 = uVar5 & param_1[1];
      pcVar1 = (char *)(lVar2 + uVar5);
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
      uVar8 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
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
      uVar7 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar9 = uVar3 + uVar5 & param_1[1];
        if (param_2 == *(int *)(lVar2 + uVar9 * -8 + -8)) {
          return *(undefined1 *)(lVar2 + -4 + uVar9 * -8);
        }
        uVar8 = (ushort)(uVar7 - 1) & (ushort)uVar7;
        uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar8);
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
      uVar5 = uVar5 + lVar6 + 0x10;
      lVar6 = lVar6 + 0x10;
    }
  }
  piStack_20 = &iStack_24;
  pcStack_18 = pdb_140c478b0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14306d828,&piStack_20,&UNK_14306d858);
}

