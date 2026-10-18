// VA 0x140c44480, PDB extent 272 bytes
// country_core::resources::walls::decorator_storage::impl$8::update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::decorator_storage::impl$8::update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 272 */

void pdb_140c44480(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  ulonglong uVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iStack_4c;
  int *piStack_48;
  code *pcStack_40;
  undefined8 *puStack_38;
  code *pcStack_30;
  
  plVar2 = (longlong *)param_1[2];
  iStack_4c = param_2;
  if (plVar2[3] != 0) {
    uVar6 = *param_1;
    uVar7 = param_1[1];
    uVar8 = pdb_1400aede0(plVar2 + 4,&iStack_4c);
    lVar3 = *plVar2;
    bVar13 = (byte)(uVar8 >> 0x39);
    auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar14 = pshuflw(auVar14,auVar14,0);
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & plVar2[1];
      pcVar1 = (char *)(lVar3 + uVar8);
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
      uVar11 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
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
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = uVar4 + uVar8 & plVar2[1];
        if (param_2 == *(int *)(lVar3 + -0x18 + uVar12 * -0x18)) {
          lVar3 = lVar3 + uVar12 * -0x18;
          *(undefined8 *)(lVar3 + -0x10) = uVar6;
          *(undefined8 *)(lVar3 + -8) = uVar7;
          return;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
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
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
  piStack_48 = &iStack_4c;
  pcStack_40 = pdb_140c447f0;
  pcStack_30 = pdb_140c34b70;
  puStack_38 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14306d3de,&piStack_48,&UNK_14306d400);
}

