// VA 0x14092dcc0, PDB extent 414 bytes
// country_core::resources::walls::inner_walls::InnerWalls::_try_update_state<country_core::resources::walls::inner_walls::impl$1::mark_as_non_enclosed::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::inner_walls::InnerWalls::_try_update_state<country_core::resources::walls::inner_walls::impl$1::mark_as_non_enclosed::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
   Extent: 414 */

void pdb_14092dcc0(longlong *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ushort uVar8;
  longlong lVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 uStack_91;
  longlong lStack_90;
  longlong *plStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined8 **ppuStack_20;
  
  lStack_90 = param_2;
  if (param_1[3] != 0) {
    uVar5 = pdb_1400af0a0(param_1 + 4,&lStack_90);
    lVar2 = *param_1;
    bVar10 = (byte)(uVar5 >> 0x39);
    auVar11 = ZEXT216(CONCAT11(bVar10,bVar10));
    auVar11 = pshuflw(auVar11,auVar11,0);
    lVar6 = 0;
    while( true ) {
      uVar5 = uVar5 & param_1[1];
      auVar1 = *(undefined1 (*) [16])(lVar2 + uVar5);
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
        uVar3 = 0;
        for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar9 = (uVar3 + uVar5 & param_1[1]) * -0x78;
        if (lStack_90 == *(longlong *)(lVar2 + -0x78 + lVar9)) {
          pdb_1403b05d0(param_1 + 0xc,param_2);
          *(undefined4 *)(lVar2 + lVar9 + -0x38) = 2;
          return;
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
      uVar5 = uVar5 + lVar6 + 0x10;
      lVar6 = lVar6 + 0x10;
    }
  }
  if (1 < *_DAT_143ca8e90) {
    plStack_88 = &lStack_90;
    pcStack_80 = pdb_140c04ef0;
    uStack_78 = 0;
    puStack_70 = &UNK_143021dde;
    uStack_68 = 0x2b;
    uStack_60 = 0;
    puStack_58 = &UNK_143021da7;
    uStack_50 = 0x36;
    uStack_48 = 2;
    puStack_40 = &UNK_143021dde;
    uStack_38 = 0x2b;
    uStack_30 = 0xfd00000001;
    puStack_28 = &UNK_143021d78;
    ppuStack_20 = &plStack_88;
    pdb_140f332f0(&uStack_91,&uStack_78);
  }
  return;
}

