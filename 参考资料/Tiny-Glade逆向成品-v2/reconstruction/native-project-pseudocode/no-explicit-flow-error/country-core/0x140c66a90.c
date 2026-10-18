// VA 0x140c66a90, PDB extent 1474 bytes
// country_core::systems::wall::shapes::rectangle::ui_modes::edit_orientation::UiRectangleOrientationEdit::widget
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_modes/edit_orientation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::ui_modes::edit_orientation::UiRectangleOrientationEdit::widget
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_modes/edit_orientation.rs
   Extent: 1474 */

void pdb_140c66a90(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,byte param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  float extraout_XMM0_Da;
  float fVar8;
  float fVar9;
  undefined4 extraout_XMM0_Db;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 in_XMM1_Qa;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float afStack_1d0 [2];
  float fStack_1c8;
  float fStack_1c4;
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  int iStack_168;
  undefined8 uStack_158;
  int iStack_150;
  int iStack_138;
  undefined1 uStack_120;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  undefined7 uStack_107;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  byte bStack_f0;
  undefined1 uStack_ef;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  
  lVar1 = param_1 + 8;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = pdb_140df3e10(lVar1,uVar4);
  uVar6 = pdb_1419aab30(param_3 + 0x88,uVar13,in_XMM1_Qa);
  fVar10 = (float)uVar13;
  uVar7 = (ulonglong)uVar6;
  fVar8 = (float)pdb_140df3e10(lVar1,uVar4);
  fVar12 = _DAT_142e36f28;
  uVar5 = *(ulonglong *)(param_3 + 0x98);
  fStack_1c8 = fVar8;
  fStack_1c4 = fVar10;
  if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar7,uVar5,&UNK_14335e4e0);
  }
  uVar2 = uVar7 + 1;
  if (uVar5 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar2,uVar5,&UNK_14335e4f8);
  }
  fVar17 = *(float *)(*(longlong *)(param_3 + 0x90) + 4 + uVar2 * 0xc) * extraout_XMM0_Da +
           (_DAT_142e36f28 - extraout_XMM0_Da) *
           *(float *)(*(longlong *)(param_3 + 0x90) + 4 + uVar7 * 0xc) + _DAT_142e36f28;
  *(float *)(param_1 + 0x28) = fVar17;
  bVar3 = *(byte *)(param_1 + 0x2c);
  fStack_1f4 = fVar17;
  if (bVar3 == 0) {
    if (param_5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar7,param_5,&UNK_143070be0);
    }
    if (param_5 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar2,param_5,&UNK_143070be0);
    }
    fVar9 = *(float *)(param_4 + uVar7 * 4);
    fVar11 = *(float *)(param_4 + 4 + uVar7 * 4) - fVar9;
    fVar15 = (extraout_XMM0_Da * fVar11 + fVar9) - fVar17;
    fVar16 = _DAT_142e36f50 * fVar15;
    fVar9 = (float)pdb_140df1dc0(lVar1,uVar4);
    fVar9 = fVar9 * _DAT_142e37988;
    fVar11 = fVar11 * _DAT_142e37988;
    pdb_140df1c30(&fStack_1f0,lVar1);
    if (afStack_1d0[0] <= 0.0) {
      fVar18 = fStack_1e0 - fStack_1f0;
      if (fVar18 <= 0.0) {
        fVar18 = (fVar12 - afStack_1d0[0]) - fVar18;
        fVar12 = _DAT_142e36f50 / SQRT(fVar18);
        fVar14 = fVar18 * fVar12;
        fVar18 = fVar12 * (fStack_1ec + fStack_1e4);
        fVar19 = fVar12 * (fStack_1e8 + fStack_1d8);
        fVar12 = (fStack_1dc - fStack_1d4) * fVar12;
      }
      else {
        fVar18 = (fVar12 - afStack_1d0[0]) + fVar18;
        fVar12 = _DAT_142e36f50 / SQRT(fVar18);
        fVar14 = (fStack_1e4 + fStack_1ec) * fVar12;
        fVar18 = fVar12 * fVar18;
        fVar19 = fVar12 * (fStack_1d4 + fStack_1dc);
        fVar12 = (fStack_1d8 - fStack_1e8) * fVar12;
      }
    }
    else {
      fVar20 = fStack_1f0 + fStack_1e0;
      if (fVar20 <= 0.0) {
        fVar20 = (afStack_1d0[0] + _DAT_142e36f28) - fVar20;
        fVar12 = _DAT_142e36f50 / SQRT(fVar20);
        fVar14 = (fStack_1e8 + fStack_1d8) * fVar12;
        fVar18 = fVar12 * (fStack_1dc + fStack_1d4);
        fVar19 = fVar12 * fVar20;
        fVar12 = (fStack_1ec - fStack_1e4) * fVar12;
      }
      else {
        fVar20 = fVar20 + afStack_1d0[0] + _DAT_142e36f28;
        fVar12 = _DAT_142e36f50 / SQRT(fVar20);
        fVar14 = (fStack_1dc - fStack_1d4) * fVar12;
        fVar18 = fVar12 * (fStack_1d8 - fStack_1e8);
        fVar19 = fVar12 * (fStack_1ec - fStack_1e4);
        fVar12 = fVar12 * fVar20;
      }
    }
    uStack_188 = (float *)CONCAT44(fVar16 + fVar17,fVar8 - fVar9);
    uStack_198 = (float *)CONCAT44(fVar18,fVar14);
    uStack_190 = (float *)CONCAT44(fVar12,fVar19);
    uStack_180._4_4_ = 0x3f800000;
    uStack_178 = 0x3f800000;
    uStack_174 = 0x3f800000;
    uStack_180._0_4_ = fVar10 - fVar11;
    pdb_140b3d590(auStack_1b0,_DAT_142e37838,CONCAT44(extraout_XMM0_Db,fVar15),_DAT_142e37838,
                  &uStack_198);
  }
  else {
    pdb_140df1dc0(lVar1,uVar4);
    pdb_140df3060(auStack_1c0,lVar1,uVar4);
    fStack_1f0 = (float)auStack_1c0._0_8_;
    fStack_1ec = SUB84(auStack_1c0._0_8_,4);
    fStack_1e4 = (float)((uint)fStack_1f0 ^ (uint)_DAT_142e37820);
    fStack_1dc = SUB84(auStack_1c0._8_8_,4);
    fStack_1d8 = (float)((uint)fStack_1dc ^ (uint)_DAT_142e37820);
    fStack_1e0 = (float)auStack_1c0._8_8_;
    uStack_190 = afStack_1d0;
    uStack_198 = &fStack_1f0;
    uStack_188 = &fStack_1c8;
    uStack_180 = &fStack_1f4;
    uStack_178 = 0;
    uStack_174 = 0;
    uStack_158 = 0;
    fStack_1e8 = fStack_1ec;
    fStack_1d4 = fStack_1e0;
    pdb_1416005a0(auStack_1b0,&uStack_198);
  }
  uStack_d0 = uStack_1a0;
  uVar4 = uStack_d0;
  uStack_e0 = (undefined1)auStack_1b0._0_8_;
  uStack_df = SUB87(auStack_1b0._0_8_,1);
  uStack_d8 = (undefined4)auStack_1b0._8_8_;
  uStack_d4 = SUB84(auStack_1b0._8_8_,4);
  param_6 = param_6 ^ 1;
  iStack_168 = (uint)param_6 + (uint)param_6;
  iStack_150 = (uint)param_6 + (uint)param_6 * 2;
  bStack_f0 = bVar3 ^ 1;
  uStack_198 = (float *)0x0;
  uStack_190 = (float *)0x8;
  uStack_188 = (float *)0x0;
  uStack_180._0_4_ = (float)(uint)param_6;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_120 = 0;
  uStack_110 = 2;
  uStack_10f = CONCAT17(uStack_e0,uStack_e7);
  uStack_107 = uStack_df;
  uStack_d0._0_4_ = (undefined4)uStack_1a0;
  uStack_d0._4_4_ = (undefined4)((ulonglong)uStack_1a0 >> 0x20);
  uStack_100 = uStack_d8;
  uStack_fc = uStack_d4;
  uStack_f8 = (undefined4)uStack_d0;
  uStack_f4 = uStack_d0._4_4_;
  uStack_ef = 1;
  iStack_138 = iStack_150;
  uStack_d0 = uVar4;
  pdb_140900680(param_2,param_1,&uStack_198);
  return;
}

