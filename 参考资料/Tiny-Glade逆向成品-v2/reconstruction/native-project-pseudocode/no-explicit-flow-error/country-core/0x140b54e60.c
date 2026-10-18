// VA 0x140b54e60, PDB extent 285 bytes
// country_core::resources::walls::public_walls::PublicWalls::get_shape_params
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::public_walls::PublicWalls::get_shape_params
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_walls.rs
   Extent: 285 */

undefined8 * pdb_140b54e60(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  longlong lVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong lStack_20;
  
  if (param_2[3] != 0) {
    lStack_20 = param_3;
    uVar7 = pdb_1400af0a0(param_2 + 4,&lStack_20);
    lVar8 = *param_2;
    bVar13 = (byte)(uVar7 >> 0x39);
    auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar14 = pshuflw(auVar14,auVar14,0);
    lVar9 = 0;
    while( true ) {
      uVar7 = uVar7 & param_2[1];
      auVar1 = *(undefined1 (*) [16])(lVar8 + uVar7);
      auVar16[0] = -(auVar1[0] == auVar14[0]);
      auVar16[1] = -(auVar1[1] == auVar14[1]);
      auVar16[2] = -(auVar1[2] == auVar14[2]);
      auVar16[3] = -(auVar1[3] == auVar14[3]);
      auVar16[4] = -(auVar1[4] == auVar14[4]);
      auVar16[5] = -(auVar1[5] == auVar14[5]);
      auVar16[6] = -(auVar1[6] == auVar14[6]);
      auVar16[7] = -(auVar1[7] == auVar14[7]);
      auVar16[8] = -(auVar1[8] == auVar14[0]);
      auVar16[9] = -(auVar1[9] == auVar14[1]);
      auVar16[10] = -(auVar1[10] == auVar14[2]);
      auVar16[0xb] = -(auVar1[0xb] == auVar14[3]);
      auVar16[0xc] = -(auVar1[0xc] == auVar14[4]);
      auVar16[0xd] = -(auVar1[0xd] == auVar14[5]);
      auVar16[0xe] = -(auVar1[0xe] == auVar14[6]);
      auVar16[0xf] = -(auVar1[0xf] == auVar14[7]);
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
        uVar2 = 0;
        for (uVar3 = uVar10; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar12 = (uVar2 + uVar7 & param_2[1]) * -0x2b0;
        if (param_3 == *(longlong *)(lVar8 + -0x2b0 + lVar12)) {
          lVar8 = lVar8 + lVar12;
          if ((*(ulonglong *)(lVar8 + -0x298) < 2) || (*(float *)(lVar8 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143059e38);
          }
          if (*(uint *)(lVar8 + -0x50) < 2) {
            uVar4 = *(undefined8 *)(lVar8 + -0x50);
            uVar5 = *(undefined8 *)(lVar8 + -0x48);
            uVar6 = *(undefined8 *)(lVar8 + -0x3c);
            *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(lVar8 + -0x44);
            *(undefined8 *)((longlong)param_1 + 0x14) = uVar6;
            *param_1 = uVar4;
            param_1[1] = uVar5;
            return param_1;
          }
          goto LAB_140b54f53;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar15[0] = -(auVar1[0] == -1);
      auVar15[1] = -(auVar1[1] == -1);
      auVar15[2] = -(auVar1[2] == -1);
      auVar15[3] = -(auVar1[3] == -1);
      auVar15[4] = -(auVar1[4] == -1);
      auVar15[5] = -(auVar1[5] == -1);
      auVar15[6] = -(auVar1[6] == -1);
      auVar15[7] = -(auVar1[7] == -1);
      auVar15[8] = -(auVar1[8] == -1);
      auVar15[9] = -(auVar1[9] == -1);
      auVar15[10] = -(auVar1[10] == -1);
      auVar15[0xb] = -(auVar1[0xb] == -1);
      auVar15[0xc] = -(auVar1[0xc] == -1);
      auVar15[0xd] = -(auVar1[0xd] == -1);
      auVar15[0xe] = -(auVar1[0xe] == -1);
      auVar15[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar7 = uVar7 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_140b54f53:
  *(undefined4 *)param_1 = 2;
  return param_1;
}

