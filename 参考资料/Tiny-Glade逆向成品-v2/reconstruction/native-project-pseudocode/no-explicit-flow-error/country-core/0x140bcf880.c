// VA 0x140bcf880, PDB extent 416 bytes
// country_core::systems::wall::adjust_wall_height::ui_adjust_wall_height_mode::clamp_wall_height
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/ui_adjust_wall_height_mode.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::adjust_wall_height::ui_adjust_wall_height_mode::clamp_wall_height
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/ui_adjust_wall_height_mode.rs
   Extent: 416 */

undefined8 pdb_140bcf880(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ushort uVar8;
  longlong lVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong alStack_40 [4];
  
  if (param_3[3] != 0) {
    alStack_40[0] = param_2;
    uVar4 = pdb_1400af0a0(param_3 + 4,alStack_40);
    lVar5 = *param_3;
    bVar10 = (byte)(uVar4 >> 0x39);
    auVar11 = ZEXT216(CONCAT11(bVar10,bVar10));
    auVar11 = pshuflw(auVar11,auVar11,0);
    lVar6 = 0;
    while( true ) {
      uVar4 = uVar4 & param_3[1];
      auVar1 = *(undefined1 (*) [16])(lVar5 + uVar4);
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
      uVar8 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
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
      uVar7 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar7; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar9 = (uVar2 + uVar4 & param_3[1]) * -0x2b0;
        if (param_2 == *(longlong *)(lVar5 + -0x2b0 + lVar9)) {
          lVar5 = lVar5 + lVar9;
          if ((1 < *(ulonglong *)(lVar5 + -0x298)) && (0.0 < *(float *)(lVar5 + -0x278))) {
            pdb_140b54cf0(param_3,param_2,param_4);
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430642f0);
        }
        uVar8 = (ushort)(uVar7 - 1) & (ushort)uVar7;
        uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar8);
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
      uVar4 = uVar4 + lVar6 + 0x10;
      lVar6 = lVar6 + 0x10;
    }
  }
  return 0;
}

