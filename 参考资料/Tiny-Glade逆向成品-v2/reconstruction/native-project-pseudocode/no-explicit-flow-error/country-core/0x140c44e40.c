// VA 0x140c44e40, PDB extent 301 bytes
// country_core::resources::walls::decorator_subtype::DecoratorMeshLibrary::get_outline
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_subtype::DecoratorMeshLibrary::get_outline
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
   Extent: 301 */

longlong pdb_140c44e40(longlong param_1,char param_2,char param_3)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  char *pcStack_38;
  code *pcStack_30;
  char *pcStack_28;
  code *pcStack_20;
  
  cStack_3c = param_2;
  cStack_3b = param_3;
  cStack_3a = param_3;
  cStack_39 = param_2;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    uVar7 = pdb_1413f0300(param_1 + 0x80,&cStack_3a);
    lVar4 = *(longlong *)(param_1 + 0x60);
    bVar12 = (byte)(uVar7 >> 0x39);
    auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
    auVar13 = pshuflw(auVar13,auVar13,0);
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(param_1 + 0x68);
      pcVar1 = (char *)(lVar4 + uVar7);
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
      uVar8 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar9 = uVar5 + uVar7 & *(ulonglong *)(param_1 + 0x68);
        cVar3 = *(char *)(lVar4 + -0x28 + uVar9 * -0x28);
        if (((cVar3 != '\x1a') && (param_3 == cVar3)) &&
           (lVar2 = lVar4 + uVar9 * -0x28, param_2 == *(char *)(lVar2 + -0x27))) {
          return lVar2 + -0x20;
        }
        uVar8 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar8);
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
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  pcStack_38 = &cStack_3c;
  pcStack_30 = pdb_140c478f0;
  pcStack_28 = &cStack_3b;
  pcStack_20 = pdb_140c44b00;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14306d7c0,&pcStack_38,&UNK_14306d7f8);
}

