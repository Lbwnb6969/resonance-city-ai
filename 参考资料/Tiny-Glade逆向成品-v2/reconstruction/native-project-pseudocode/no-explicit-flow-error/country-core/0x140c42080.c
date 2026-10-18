// VA 0x140c42080, PDB extent 213 bytes
// country_core::resources::walls::decorator_archivist::DecoratorArchivist::is_decorator_cull_allowed
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::DecoratorArchivist::is_decorator_cull_allowed
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 213 */

undefined8 pdb_140c42080(longlong param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ushort uVar8;
  byte bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iStack_14;
  
  uVar4 = 1;
  if (*(char *)(param_1 + 0x1e0) == '\0') {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      iStack_14 = param_2;
      uVar5 = pdb_1400aede0(param_1 + 0x50,&iStack_14);
      bVar9 = (byte)(uVar5 >> 0x39);
      auVar10 = ZEXT216(CONCAT11(bVar9,bVar9));
      auVar10 = pshuflw(auVar10,auVar10,0);
      lVar6 = 0;
      while( true ) {
        uVar5 = uVar5 & *(ulonglong *)(param_1 + 0x38);
        pcVar1 = (char *)(*(longlong *)(param_1 + 0x30) + uVar5);
        auVar12[0] = -(*pcVar1 == auVar10[0]);
        auVar12[1] = -(pcVar1[1] == auVar10[1]);
        auVar12[2] = -(pcVar1[2] == auVar10[2]);
        auVar12[3] = -(pcVar1[3] == auVar10[3]);
        auVar12[4] = -(pcVar1[4] == auVar10[4]);
        auVar12[5] = -(pcVar1[5] == auVar10[5]);
        auVar12[6] = -(pcVar1[6] == auVar10[6]);
        auVar12[7] = -(pcVar1[7] == auVar10[7]);
        auVar12[8] = -(pcVar1[8] == auVar10[0]);
        auVar12[9] = -(pcVar1[9] == auVar10[1]);
        auVar12[10] = -(pcVar1[10] == auVar10[2]);
        auVar12[0xb] = -(pcVar1[0xb] == auVar10[3]);
        auVar12[0xc] = -(pcVar1[0xc] == auVar10[4]);
        auVar12[0xd] = -(pcVar1[0xd] == auVar10[5]);
        auVar12[0xe] = -(pcVar1[0xe] == auVar10[6]);
        auVar12[0xf] = -(pcVar1[0xf] == auVar10[7]);
        uVar8 = (ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe | (ushort)(auVar12[0xf] >> 7) << 0xf;
        uVar7 = (uint)uVar8;
        while (uVar8 != 0) {
          uVar2 = 0;
          for (uVar3 = uVar7; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          if (param_2 ==
              *(int *)(*(longlong *)(param_1 + 0x30) +
                       (uVar2 + uVar5 & *(ulonglong *)(param_1 + 0x38)) * -4 + -4)) {
            return 1;
          }
          uVar8 = (ushort)(uVar7 - 1) & (ushort)uVar7;
          uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar8);
        }
        auVar11[0] = -(*pcVar1 == -1);
        auVar11[1] = -(pcVar1[1] == -1);
        auVar11[2] = -(pcVar1[2] == -1);
        auVar11[3] = -(pcVar1[3] == -1);
        auVar11[4] = -(pcVar1[4] == -1);
        auVar11[5] = -(pcVar1[5] == -1);
        auVar11[6] = -(pcVar1[6] == -1);
        auVar11[7] = -(pcVar1[7] == -1);
        auVar11[8] = -(pcVar1[8] == -1);
        auVar11[9] = -(pcVar1[9] == -1);
        auVar11[10] = -(pcVar1[10] == -1);
        auVar11[0xb] = -(pcVar1[0xb] == -1);
        auVar11[0xc] = -(pcVar1[0xc] == -1);
        auVar11[0xd] = -(pcVar1[0xd] == -1);
        auVar11[0xe] = -(pcVar1[0xe] == -1);
        auVar11[0xf] = -(pcVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar11 >> 7,0) & 1) != 0 || (SUB161(auVar11 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar11 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar11 >> 0x1f,0) & 1) != 0) || (SUB161(auVar11 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar11 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar11 >> 0x37,0) & 1) != 0) || (SUB161(auVar11 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar11 >> 0x47,0) & 1) != 0) || (SUB161(auVar11 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar11 >> 0x57,0) & 1) != 0) || (SUB161(auVar11 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar11 >> 0x67,0) & 1) != 0) || (SUB161(auVar11 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar11 >> 0x77,0) & 1) != 0) || auVar11[0xf] < '\0') break;
        uVar5 = uVar5 + lVar6 + 0x10;
        lVar6 = lVar6 + 0x10;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

