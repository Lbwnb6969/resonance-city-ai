// VA 0x140a97600, PDB extent 255 bytes
// country_core::render::mesh::Mesh::positions_without_indices
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::mesh::Mesh::positions_without_indices
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
   Extent: 255 */

void pdb_140a97600(longlong param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ushort uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar6 = pdb_1400af950(param_1 + 0x58,&UNK_143045ae8,0xf);
    lVar2 = *(longlong *)(param_1 + 0x38);
    bVar11 = (byte)(uVar6 >> 0x39);
    auVar12 = ZEXT216(CONCAT11(bVar11,bVar11));
    auVar12 = pshuflw(auVar12,auVar12,0);
    lVar10 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x40);
      auVar1 = *(undefined1 (*) [16])(lVar2 + uVar6);
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
      uVar7 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
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
      uVar9 = (uint)uVar7;
      while (uVar7 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar9; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar8 = (uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x40)) * -0x38;
        if ((*(longlong *)(lVar2 + -0x28 + lVar8) == 0xf) &&
           (lVar8 = lVar8 + lVar2, plVar3 = *(longlong **)(lVar8 + -0x30),
           *(longlong *)((longlong)plVar3 + 7) == 0x6e6f697469736f50 &&
           *plVar3 == 0x505f786574726556)) {
          pdb_140e4d980(lVar8 + -0x20);
          return;
        }
        uVar7 = (ushort)(uVar9 - 1) & (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar7);
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
      uVar6 = uVar6 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143045bd8);
}

