// VA 0x140a973f0, PDB extent 242 bytes
// country_core::render::mesh::Mesh::uvs_without_indices
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::mesh::Mesh::uvs_without_indices
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
   Extent: 242 */

undefined8 pdb_140a973f0(longlong param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ushort uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar6 = pdb_1400af950(param_1 + 0x58,&UNK_143045bc0,9);
    lVar2 = *(longlong *)(param_1 + 0x38);
    bVar12 = (byte)(uVar6 >> 0x39);
    auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
    auVar13 = pshuflw(auVar13,auVar13,0);
    lVar11 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x40);
      auVar1 = *(undefined1 (*) [16])(lVar2 + uVar6);
      auVar15[0] = -(auVar1[0] == auVar13[0]);
      auVar15[1] = -(auVar1[1] == auVar13[1]);
      auVar15[2] = -(auVar1[2] == auVar13[2]);
      auVar15[3] = -(auVar1[3] == auVar13[3]);
      auVar15[4] = -(auVar1[4] == auVar13[4]);
      auVar15[5] = -(auVar1[5] == auVar13[5]);
      auVar15[6] = -(auVar1[6] == auVar13[6]);
      auVar15[7] = -(auVar1[7] == auVar13[7]);
      auVar15[8] = -(auVar1[8] == auVar13[0]);
      auVar15[9] = -(auVar1[9] == auVar13[1]);
      auVar15[10] = -(auVar1[10] == auVar13[2]);
      auVar15[0xb] = -(auVar1[0xb] == auVar13[3]);
      auVar15[0xc] = -(auVar1[0xc] == auVar13[4]);
      auVar15[0xd] = -(auVar1[0xd] == auVar13[5]);
      auVar15[0xe] = -(auVar1[0xe] == auVar13[6]);
      auVar15[0xf] = -(auVar1[0xf] == auVar13[7]);
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
      uVar10 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar9 = (uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x40)) * -0x38;
        if ((*(longlong *)(lVar2 + -0x28 + lVar9) == 9) &&
           (lVar9 = lVar9 + lVar2, plVar3 = *(longlong **)(lVar9 + -0x30),
           (char)plVar3[1] == 'V' && *plVar3 == 0x555f786574726556)) {
          uVar7 = pdb_140e4d950(lVar9 + -0x20);
          return uVar7;
        }
        uVar8 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar8);
      }
      auVar14[0] = -(auVar1[0] == -1);
      auVar14[1] = -(auVar1[1] == -1);
      auVar14[2] = -(auVar1[2] == -1);
      auVar14[3] = -(auVar1[3] == -1);
      auVar14[4] = -(auVar1[4] == -1);
      auVar14[5] = -(auVar1[5] == -1);
      auVar14[6] = -(auVar1[6] == -1);
      auVar14[7] = -(auVar1[7] == -1);
      auVar14[8] = -(auVar1[8] == -1);
      auVar14[9] = -(auVar1[9] == -1);
      auVar14[10] = -(auVar1[10] == -1);
      auVar14[0xb] = -(auVar1[0xb] == -1);
      auVar14[0xc] = -(auVar1[0xc] == -1);
      auVar14[0xd] = -(auVar1[0xd] == -1);
      auVar14[0xe] = -(auVar1[0xe] == -1);
      auVar14[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar14 >> 0x17,0) & 1) != 0) || (SUB161(auVar14 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || (SUB161(auVar14 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar14 >> 0x6f,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0) ||
          auVar14[0xf] < '\0') break;
      uVar6 = uVar6 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  return 0;
}

