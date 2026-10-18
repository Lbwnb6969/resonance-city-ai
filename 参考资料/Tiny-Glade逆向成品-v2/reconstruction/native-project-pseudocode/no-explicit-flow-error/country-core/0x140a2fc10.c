// VA 0x140a2fc10, PDB extent 217 bytes
// country_core::resources::tree_storage::TreeStorage::get_mut
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/tree_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::tree_storage::TreeStorage::get_mut
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/tree_storage.rs
   Extent: 217 */

longlong pdb_140a2fc10(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ushort uVar7;
  longlong lVar8;
  byte bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  longlong lStack_18;
  
  if (param_1[3] == 0) {
    return 0;
  }
  lStack_18 = param_2;
  uVar4 = pdb_1400af0a0(param_1 + 4,&lStack_18);
  bVar9 = (byte)(uVar4 >> 0x39);
  auVar10 = ZEXT216(CONCAT11(bVar9,bVar9));
  auVar10 = pshuflw(auVar10,auVar10,0);
  lVar5 = 0;
  while( true ) {
    uVar4 = uVar4 & param_1[1];
    pcVar1 = (char *)(*param_1 + uVar4);
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
    uVar7 = (ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
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
    uVar6 = (uint)uVar7;
    while (uVar7 != 0) {
      uVar2 = 0;
      for (uVar3 = uVar6; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar8 = *param_1 + (uVar2 + uVar4 & param_1[1]) * -0x10;
      if (param_2 == *(longlong *)(lVar8 + -0x10)) goto LAB_140a2fcd7;
      uVar7 = (ushort)(uVar6 - 1) & (ushort)uVar6;
      uVar6 = CONCAT22((short)(uVar6 - 1 >> 0x10),uVar7);
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
    if ((((((((((((((((SUB161(auVar11 >> 7,0) & 1) != 0 || (SUB161(auVar11 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar11 >> 0x17,0) & 1) != 0) || (SUB161(auVar11 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar11 >> 0x27,0) & 1) != 0) || (SUB161(auVar11 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar11 >> 0x37,0) & 1) != 0) || (SUB161(auVar11 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar11 >> 0x47,0) & 1) != 0) || (SUB161(auVar11 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar11 >> 0x57,0) & 1) != 0) || (SUB161(auVar11 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar11 >> 0x67,0) & 1) != 0) || (SUB161(auVar11 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar11 >> 0x77,0) & 1) != 0) || auVar11[0xf] < '\0') break;
    uVar4 = uVar4 + lVar5 + 0x10;
    lVar5 = lVar5 + 0x10;
  }
  lVar8 = 0;
LAB_140a2fcd7:
  lVar5 = lVar8 + -8;
  if (lVar8 == 0) {
    lVar5 = 0;
  }
  return lVar5;
}

