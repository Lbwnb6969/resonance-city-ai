// VA 0x140a96ba0, PDB extent 448 bytes
// country_core::render::mesh::Mesh::aabb_bounds
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::mesh::Mesh::aabb_bounds
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
   Extent: 448 */

undefined8 * pdb_140a96ba0(undefined8 *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  byte bVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (*(longlong *)(param_2 + 0x50) != 0) {
    uVar5 = pdb_1400af950(param_2 + 0x58,&UNK_143045ae8,0xf);
    lVar9 = *(longlong *)(param_2 + 0x38);
    bVar12 = (byte)(uVar5 >> 0x39);
    auVar14 = ZEXT216(CONCAT11(bVar12,bVar12));
    auVar14 = pshuflw(auVar14,auVar14,0);
    lVar11 = 0;
    while( true ) {
      uVar5 = uVar5 & *(ulonglong *)(param_2 + 0x40);
      auVar1 = *(undefined1 (*) [16])(lVar9 + uVar5);
      auVar17[0] = -(auVar1[0] == auVar14[0]);
      auVar17[1] = -(auVar1[1] == auVar14[1]);
      auVar17[2] = -(auVar1[2] == auVar14[2]);
      auVar17[3] = -(auVar1[3] == auVar14[3]);
      auVar17[4] = -(auVar1[4] == auVar14[4]);
      auVar17[5] = -(auVar1[5] == auVar14[5]);
      auVar17[6] = -(auVar1[6] == auVar14[6]);
      auVar17[7] = -(auVar1[7] == auVar14[7]);
      auVar17[8] = -(auVar1[8] == auVar14[0]);
      auVar17[9] = -(auVar1[9] == auVar14[1]);
      auVar17[10] = -(auVar1[10] == auVar14[2]);
      auVar17[0xb] = -(auVar1[0xb] == auVar14[3]);
      auVar17[0xc] = -(auVar1[0xc] == auVar14[4]);
      auVar17[0xd] = -(auVar1[0xd] == auVar14[5]);
      auVar17[0xe] = -(auVar1[0xe] == auVar14[6]);
      auVar17[0xf] = -(auVar1[0xf] == auVar14[7]);
      uVar7 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
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
          puVar6 = (undefined8 *)pdb_140e4d980(lVar8 + -0x20);
          if (lVar9 == 0) {
            param_1[2] = _DAT_14305aa0c;
            uVar13 = _DAT_14305a9fc;
            uVar15 = _UNK_14305aa04;
          }
          else {
            uStack_40 = *(undefined4 *)(puVar6 + 1);
            uStack_48 = (undefined4)*puVar6;
            uStack_44 = (undefined4)((ulonglong)*puVar6 >> 0x20);
            uStack_3c = uStack_48;
            uStack_38 = uStack_44;
            uStack_34 = uStack_40;
            if (lVar9 != 1) {
              lVar11 = 0;
              do {
                uStack_50 = *(undefined4 *)((longlong)puVar6 + lVar11 + 0x14);
                uStack_58 = *(undefined8 *)((longlong)puVar6 + lVar11 + 0xc);
                pdb_140deed50(&uStack_48,&uStack_58);
                lVar11 = lVar11 + 0xc;
              } while (lVar9 * 0xc + -0xc != lVar11);
            }
            param_1[2] = CONCAT44(uStack_34,uStack_38);
            uVar13 = CONCAT44(uStack_44,uStack_48);
            uVar15 = CONCAT44(uStack_3c,uStack_40);
          }
          *param_1 = uVar13;
          param_1[1] = uVar15;
          return param_1;
        }
        uVar7 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar7);
      }
      auVar16[0] = -(auVar1[0] == -1);
      auVar16[1] = -(auVar1[1] == -1);
      auVar16[2] = -(auVar1[2] == -1);
      auVar16[3] = -(auVar1[3] == -1);
      auVar16[4] = -(auVar1[4] == -1);
      auVar16[5] = -(auVar1[5] == -1);
      auVar16[6] = -(auVar1[6] == -1);
      auVar16[7] = -(auVar1[7] == -1);
      auVar16[8] = -(auVar1[8] == -1);
      auVar16[9] = -(auVar1[9] == -1);
      auVar16[10] = -(auVar1[10] == -1);
      auVar16[0xb] = -(auVar1[0xb] == -1);
      auVar16[0xc] = -(auVar1[0xc] == -1);
      auVar16[0xd] = -(auVar1[0xd] == -1);
      auVar16[0xe] = -(auVar1[0xe] == -1);
      auVar16[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar5 = uVar5 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143045b20);
}

