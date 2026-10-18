// VA 0x140a97aa0, PDB extent 297 bytes
// country_core::render::mesh::Mesh::positions
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::mesh::Mesh::positions
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
   Extent: 297 */

longlong * pdb_140a97aa0(longlong *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (*(longlong *)(param_2 + 0x50) != 0) {
    uVar5 = pdb_1400af950(param_2 + 0x58,&UNK_143045ae8,0xf);
    lVar9 = *(longlong *)(param_2 + 0x38);
    bVar12 = (byte)(uVar5 >> 0x39);
    auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
    auVar13 = pshuflw(auVar13,auVar13,0);
    lVar11 = 0;
    while( true ) {
      uVar5 = uVar5 & *(ulonglong *)(param_2 + 0x40);
      auVar1 = *(undefined1 (*) [16])(lVar9 + uVar5);
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
      uVar7 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
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
      uVar10 = (uint)uVar7;
      while (uVar7 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar8 = (uVar3 + uVar5 & *(ulonglong *)(param_2 + 0x40)) * -0x38;
        if ((*(longlong *)(lVar9 + -0x28 + lVar8) == 0xf) &&
           (lVar8 = lVar8 + lVar9, plVar2 = *(longlong **)(lVar8 + -0x30),
           *(longlong *)((longlong)plVar2 + 7) == 0x6e6f697469736f50 &&
           *plVar2 == 0x505f786574726556)) {
          lVar6 = pdb_140e4d980(lVar8 + -0x20);
          lVar11 = *(longlong *)(param_2 + 8);
          lVar8 = *(longlong *)(param_2 + 0x10);
          *param_1 = lVar11;
          param_1[1] = lVar11 + lVar8 * 4;
          param_1[2] = lVar6;
          param_1[3] = lVar9;
          return param_1;
        }
        uVar7 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar7);
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
      uVar5 = uVar5 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143045cd8);
}

