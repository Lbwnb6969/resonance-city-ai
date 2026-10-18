// VA 0x14215faa0, PDB extent 337 bytes
// system_color::wall_color_slots::ColorTables::colors_of
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/wall_color_slots.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::wall_color_slots::ColorTables::colors_of
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/wall_color_slots.rs
   Extent: 337 */

void pdb_14215faa0(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  longlong lVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = param_3;
  uStack_48 = pdb_140315970(&lStack_50);
  uVar4 = pdb_1409cf7d0(*param_2,param_3);
  uVar5 = pdb_1409cf7d0(param_2[1],param_3);
  uVar6 = pdb_1409cf7d0(param_2[2],param_3);
  uVar7 = pdb_1409cf7d0(param_2[3],param_3);
  uVar8 = pdb_1409cf7d0(param_2[4],param_3);
  if (param_2[8] != 0) {
    uVar10 = pdb_140fc4ba0(param_2 + 9,&lStack_50);
    bVar15 = (byte)(uVar10 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & param_2[6];
      pcVar1 = (char *)(param_2[5] + uVar10);
      auVar18[0] = -(*pcVar1 == auVar16[0]);
      auVar18[1] = -(pcVar1[1] == auVar16[1]);
      auVar18[2] = -(pcVar1[2] == auVar16[2]);
      auVar18[3] = -(pcVar1[3] == auVar16[3]);
      auVar18[4] = -(pcVar1[4] == auVar16[4]);
      auVar18[5] = -(pcVar1[5] == auVar16[5]);
      auVar18[6] = -(pcVar1[6] == auVar16[6]);
      auVar18[7] = -(pcVar1[7] == auVar16[7]);
      auVar18[8] = -(pcVar1[8] == auVar16[0]);
      auVar18[9] = -(pcVar1[9] == auVar16[1]);
      auVar18[10] = -(pcVar1[10] == auVar16[2]);
      auVar18[0xb] = -(pcVar1[0xb] == auVar16[3]);
      auVar18[0xc] = -(pcVar1[0xc] == auVar16[4]);
      auVar18[0xd] = -(pcVar1[0xd] == auVar16[5]);
      auVar18[0xe] = -(pcVar1[0xe] == auVar16[6]);
      auVar18[0xf] = -(pcVar1[0xf] == auVar16[7]);
      uVar13 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar12; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar14 = param_2[5] + (uVar2 + uVar10 & param_2[6]) * -0x10;
        if (param_3 == *(longlong *)(lVar14 + -0x10)) {
          uVar9 = *(undefined4 *)(lVar14 + -8);
          goto LAB_14215fbc3;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
      }
      auVar17[0] = -(*pcVar1 == -1);
      auVar17[1] = -(pcVar1[1] == -1);
      auVar17[2] = -(pcVar1[2] == -1);
      auVar17[3] = -(pcVar1[3] == -1);
      auVar17[4] = -(pcVar1[4] == -1);
      auVar17[5] = -(pcVar1[5] == -1);
      auVar17[6] = -(pcVar1[6] == -1);
      auVar17[7] = -(pcVar1[7] == -1);
      auVar17[8] = -(pcVar1[8] == -1);
      auVar17[9] = -(pcVar1[9] == -1);
      auVar17[10] = -(pcVar1[10] == -1);
      auVar17[0xb] = -(pcVar1[0xb] == -1);
      auVar17[0xc] = -(pcVar1[0xc] == -1);
      auVar17[0xd] = -(pcVar1[0xd] == -1);
      auVar17[0xe] = -(pcVar1[0xe] == -1);
      auVar17[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar10 = uVar10 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  uVar9 = 0;
LAB_14215fbc3:
  *param_1 = (int)uStack_48;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  return;
}

