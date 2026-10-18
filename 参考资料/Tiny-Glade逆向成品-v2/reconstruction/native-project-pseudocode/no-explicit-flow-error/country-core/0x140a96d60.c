// VA 0x140a96d60, PDB extent 370 bytes
// country_core::render::mesh::Mesh::as_triangles
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::mesh::Mesh::as_triangles
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
   Extent: 370 */

undefined8 pdb_140a96d60(undefined8 param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ushort uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  
  if (*(longlong *)(param_2 + 0x50) != 0) {
    uVar5 = pdb_1400af950(param_2 + 0x58,&UNK_143045ae8,0xf);
    lStack_30 = *(longlong *)(param_2 + 0x38);
    bVar10 = (byte)(uVar5 >> 0x39);
    auVar11 = ZEXT216(CONCAT11(bVar10,bVar10));
    auVar11 = pshuflw(auVar11,auVar11,0);
    lVar9 = 0;
    while( true ) {
      uVar5 = uVar5 & *(ulonglong *)(param_2 + 0x40);
      auVar1 = *(undefined1 (*) [16])(lStack_30 + uVar5);
      auVar13[0] = -(auVar1[0] == auVar11[0]);
      auVar13[1] = -(auVar1[1] == auVar11[1]);
      auVar13[2] = -(auVar1[2] == auVar11[2]);
      auVar13[3] = -(auVar1[3] == auVar11[3]);
      auVar13[4] = -(auVar1[4] == auVar11[4]);
      auVar13[5] = -(auVar1[5] == auVar11[5]);
      auVar13[6] = -(auVar1[6] == auVar11[6]);
      auVar13[7] = -(auVar1[7] == auVar11[7]);
      auVar13[8] = -(auVar1[8] == auVar11[0]);
      auVar13[9] = -(auVar1[9] == auVar11[1]);
      auVar13[10] = -(auVar1[10] == auVar11[2]);
      auVar13[0xb] = -(auVar1[0xb] == auVar11[3]);
      auVar13[0xc] = -(auVar1[0xc] == auVar11[4]);
      auVar13[0xd] = -(auVar1[0xd] == auVar11[5]);
      auVar13[0xe] = -(auVar1[0xe] == auVar11[6]);
      auVar13[0xf] = -(auVar1[0xf] == auVar11[7]);
      uVar6 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar6;
      while (uVar6 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar7 = (uVar3 + uVar5 & *(ulonglong *)(param_2 + 0x40)) * -0x38;
        if ((*(longlong *)(lStack_30 + -0x28 + lVar7) == 0xf) &&
           (lVar7 = lVar7 + lStack_30, plVar2 = *(longlong **)(lVar7 + -0x30),
           *(longlong *)((longlong)plVar2 + 7) == 0x6e6f697469736f50 &&
           *plVar2 == 0x505f786574726556)) {
          uStack_38 = pdb_140e4d980(lVar7 + -0x20);
          lStack_60 = *(longlong *)(param_2 + 8);
          uVar5 = *(ulonglong *)(param_2 + 0x10) / 3;
          lStack_58 = uVar5 * 3;
          uStack_48 = *(ulonglong *)(param_2 + 0x10) % 3;
          lStack_50 = lStack_60 + uVar5 * 0xc;
          uStack_40 = 3;
          pdb_1415fd2f0(param_1,&lStack_60);
          return param_1;
        }
        uVar6 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar6);
      }
      auVar12[0] = -(auVar1[0] == -1);
      auVar12[1] = -(auVar1[1] == -1);
      auVar12[2] = -(auVar1[2] == -1);
      auVar12[3] = -(auVar1[3] == -1);
      auVar12[4] = -(auVar1[4] == -1);
      auVar12[5] = -(auVar1[5] == -1);
      auVar12[6] = -(auVar1[6] == -1);
      auVar12[7] = -(auVar1[7] == -1);
      auVar12[8] = -(auVar1[8] == -1);
      auVar12[9] = -(auVar1[9] == -1);
      auVar12[10] = -(auVar1[10] == -1);
      auVar12[0xb] = -(auVar1[0xb] == -1);
      auVar12[0xc] = -(auVar1[0xc] == -1);
      auVar12[0xd] = -(auVar1[0xd] == -1);
      auVar12[0xe] = -(auVar1[0xe] == -1);
      auVar12[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar12 >> 7,0) & 1) != 0 || (SUB161(auVar12 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar12 >> 0x17,0) & 1) != 0) || (SUB161(auVar12 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar12 >> 0x27,0) & 1) != 0) || (SUB161(auVar12 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar12 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar12 >> 0x3f,0) & 1) != 0) || (SUB161(auVar12 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar12 >> 0x4f,0) & 1) != 0) || (SUB161(auVar12 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || (SUB161(auVar12 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar12 >> 0x6f,0) & 1) != 0) || (SUB161(auVar12 >> 0x77,0) & 1) != 0) ||
          auVar12[0xf] < '\0') break;
      uVar5 = uVar5 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143045b38);
}

