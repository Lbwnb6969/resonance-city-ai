// VA 0x141483e90, PDB extent 1141 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::BoardWallSpace::remap_x
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::BoardWallSpace::remap_x
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 1141 */

undefined8 pdb_141483e90(byte *param_1,float param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  undefined8 uVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uStack_150;
  float fStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined4 *puStack_128;
  code *pcStack_120;
  float *pfStack_118;
  code *pcStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [16];
  float fStack_d8;
  undefined4 uStack_d4;
  
  fVar10 = *(float *)(param_1 + 0x38);
  if (fVar10 < 0.0) {
    uStack_108 = 0;
    puStack_128 = &uStack_108;
    pfStack_118 = &fStack_148;
    fStack_148 = fVar10;
LAB_1414842b8:
    pcStack_120 = pdb_140f705d0;
    pcStack_110 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14330d000,&puStack_128,&UNK_14330d0a0);
  }
  fVar12 = 0.0;
  if (0.0 <= param_2) {
    fVar12 = param_2;
  }
  fVar20 = fVar10;
  if (fVar12 <= fVar10) {
    fVar20 = fVar12;
  }
  fVar12 = 0.0;
  if ((param_1[0x1c] & 1) != 0) {
    uStack_f8 = *(undefined8 *)(param_1 + 0x30);
    uStack_108 = *(undefined4 *)(param_1 + 0x20);
    uStack_104 = *(undefined4 *)(param_1 + 0x24);
    uStack_100 = *(undefined4 *)(param_1 + 0x28);
    uStack_fc = *(undefined4 *)(param_1 + 0x2c);
    if ((*param_1 & 1) != 0) {
      uStack_138 = *(undefined8 *)(param_1 + 0x14);
      fStack_148 = *(float *)(param_1 + 4);
      uStack_144 = *(undefined4 *)(param_1 + 8);
      uStack_140 = *(undefined4 *)(param_1 + 0xc);
      uStack_13c = *(undefined4 *)(param_1 + 0x10);
      uVar2 = 0;
      fVar12 = (float)pdb_140df0700(&fStack_148,0);
      uVar3 = 1;
      uVar11 = pdb_140df0700(&fStack_148,1);
      uStack_d4 = (undefined4)((ulonglong)uVar11 >> 0x20);
      fStack_14c = (float)uVar11 * fVar10;
      if (_DAT_143009d64 + fStack_14c < fVar20) {
        uVar2 = 1;
        fVar12 = (float)pdb_140df0700(&fStack_148,1);
        uVar3 = 2;
        uVar11 = pdb_140df0700(&fStack_148,2);
        uStack_d4 = (undefined4)((ulonglong)uVar11 >> 0x20);
        fStack_14c = (float)uVar11 * fVar10;
        if (_DAT_143009d64 + fStack_14c < fVar20) {
          uVar2 = 2;
          fVar12 = (float)pdb_140df0700(&fStack_148,2);
          uVar3 = 3;
          uVar11 = pdb_140df0700(&fStack_148,3);
          uStack_d4 = (undefined4)((ulonglong)uVar11 >> 0x20);
          fStack_14c = (float)uVar11 * fVar10;
          if (_DAT_143009d64 + fStack_14c < fVar20) {
            uVar2 = 3;
            fVar12 = (float)pdb_140df0700(&fStack_148,3);
            uVar3 = 4;
            uVar11 = pdb_140df0700(&fStack_148,4);
            uStack_d4 = (undefined4)((ulonglong)uVar11 >> 0x20);
            fStack_14c = (float)uVar11 * fVar10;
            if (_DAT_143009d64 + fStack_14c < fVar20) {
              fVar10 = *(float *)(param_1 + 0x3c);
              fVar12 = 0.0;
              goto LAB_141484228;
            }
          }
        }
      }
      fStack_14c = fStack_14c - fVar10 * fVar12;
      if (fStack_14c < 0.0) {
        uStack_150 = 0;
        puStack_128 = &uStack_150;
        pfStack_118 = &fStack_14c;
        goto LAB_1414842b8;
      }
      fVar20 = fVar20 - fVar10 * fVar12;
      fVar10 = 0.0;
      if (0.0 <= fVar20) {
        fVar10 = fVar20;
      }
      fStack_d8 = fStack_14c;
      if (fVar10 <= fStack_14c) {
        fStack_d8 = fVar10;
      }
      fVar4 = (float)pdb_140df0700(&uStack_108,uVar2);
      fVar20 = *(float *)(param_1 + 0x3c);
      fVar5 = (float)pdb_140df3e10(&fStack_148,uVar2);
      fVar12 = fVar10;
      fVar6 = (float)pdb_140df3e10(&fStack_148,uVar3);
      fVar13 = fVar12;
      fVar7 = (float)pdb_140df1760(&fStack_148,uVar2);
      auStack_e8 = ZEXT416(*(uint *)(param_1 + 0x40));
      fVar14 = fVar13;
      fVar8 = (float)pdb_140df3e10(&uStack_108,uVar2);
      fVar15 = fVar14;
      fVar9 = (float)pdb_140df3e10(&uStack_108,uVar3);
      fVar6 = fVar6 - fVar5;
      fVar12 = fVar12 - fVar10;
      fVar19 = _DAT_142e36f28 / SQRT(fVar12 * fVar12 + fVar6 * fVar6);
      uVar1 = (uint)((int)fVar19 - 1U < 0x7fffff ||
                    (int)ABS(fVar19) - 0x800000U < 0x7f000000 && -1 < (int)fVar19);
      fVar16 = fVar9 - fVar8;
      fVar17 = fVar15 - fVar14;
      fVar18 = fVar17 * fVar17 + fVar16 * fVar16;
      if (fVar18 <= _DAT_143006dc0) {
        fVar18 = _DAT_143006dc0;
      }
      fVar18 = ((((float)auStack_e8._0_4_ * fVar13 +
                 fStack_d8 * (float)((int)(uVar1 << 0x1f) >> 0x1f & (uint)(fVar19 * fVar12)) +
                 fVar10) - fVar14) * fVar17 +
               (((float)auStack_e8._0_4_ * fVar7 +
                fStack_d8 * (float)((int)(uVar1 << 0x1f) >> 0x1f & (uint)(fVar19 * fVar6)) + fVar5)
               - fVar8) * fVar16) / fVar18;
      fVar10 = 0.0;
      if (0.0 <= fVar18) {
        fVar10 = fVar18;
      }
      fVar13 = _DAT_142e36f28;
      if (fVar10 <= _DAT_142e36f28) {
        fVar13 = fVar10;
      }
      fVar12 = (fVar14 - fVar15) * (fVar14 - fVar15);
      fVar10 = SQRT(fVar12 + (fVar8 - fVar9) * (fVar8 - fVar9)) * fVar13 + fVar4 * fVar20;
      goto LAB_141484228;
    }
  }
  fVar10 = (fVar20 / fVar10) * *(float *)(param_1 + 0x3c);
LAB_141484228:
  return CONCAT44(fVar12,fVar10);
}

