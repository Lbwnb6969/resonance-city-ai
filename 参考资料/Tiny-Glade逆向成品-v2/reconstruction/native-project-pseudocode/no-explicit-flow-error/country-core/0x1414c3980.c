// VA 0x1414c3980, PDB extent 463 bytes
// country_core::systems::ui::resources::slider3d::Slider3d::update<ref$<country_core::systems::ui::resources::ui_state::UiWidgetContext>,system_decorator::ui_systems::ui_focus_stairs::ui_focus_stairs::closure_env$9>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::resources::slider3d::Slider3d::update<ref$<country_core::systems::ui::resources::ui_state::UiWidgetContext>,system_decorator::ui_systems::ui_focus_stairs::ui_focus_stairs::closure_env$9>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
   Extent: 463 */

uint * pdb_1414c3980(uint *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
                    float *param_5)

{
  undefined8 uVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_70;
  float fStack_6c;
  undefined8 uStack_68;
  float fStack_60;
  undefined4 uStack_5c;
  float *pfStack_58;
  code *pcStack_50;
  
  pfVar2 = (float *)*param_2;
  bVar7 = pdb_1408ffab0(param_3);
  uVar3 = param_2[1];
  uVar4 = param_2[5];
  bVar8 = 3;
  if (1 < bVar7) {
    bVar8 = bVar7 - 2;
  }
  uVar5 = param_2[9];
  uVar9 = (uint)bVar8;
  if (bVar8 - 2 < 2) {
    fVar14 = *param_5;
    fVar13 = param_5[1];
    pdb_140a08a00(&uStack_68,pfVar2,uVar3,uVar4,uVar5);
    if (fVar13 < fVar14) {
      uStack_68 = &fStack_70;
      fStack_60 = 7.7194595;
      uStack_5c = 1;
      pfStack_58 = &fStack_6c;
      pcStack_50 = pdb_140f705d0;
      fStack_70 = fVar14;
      fStack_6c = fVar13;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143312a3c,&uStack_68,&UNK_143312ad8);
    }
    uVar3 = *(undefined8 *)(pfVar2 + 3);
    fVar10 = (float)uVar3;
    fVar11 = (float)((ulonglong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
    fVar12 = (fStack_60 * fVar11 +
             (float)uStack_68 * fVar10 + uStack_68._4_4_ * (float)*(undefined8 *)(pfVar2 + 4)) -
             pfVar2[6];
    if (fVar14 <= fVar12) {
      fVar14 = fVar12;
    }
    if (fVar14 <= fVar13) {
      fVar13 = fVar14;
    }
    fVar12 = _UNK_142e378e4 * _DAT_142e377f0;
    uVar4 = *(undefined8 *)pfVar2;
    fVar14 = pfVar2[2];
    param_1[1] = (uint)((float)uVar4 + fVar13 * fVar10);
    param_1[2] = (uint)((float)((ulonglong)uVar4 >> 0x20) +
                       fVar13 * (float)((ulonglong)uVar3 >> 0x20));
    param_1[3] = (uint)(fVar14 + fVar13 * fVar11);
    param_1[4] = (uint)(fVar13 + fVar12);
    uVar9 = 1;
  }
  else if (bVar8 != 0) {
    lVar6 = *param_4;
    fVar14 = *(float *)(lVar6 + 0x38);
    fVar10 = fVar14 * _UNK_14300d254;
    fVar11 = fVar14 * _UNK_14300d258;
    fVar12 = _UNK_142e378e4 * _UNK_14300d25c;
    uVar1 = *(undefined8 *)(lVar6 + 0x3c);
    fVar13 = *(float *)(lVar6 + 0x44);
    *pfVar2 = (float)uVar1 + fVar14 * _DAT_14300d250;
    pfVar2[1] = (float)((ulonglong)uVar1 >> 0x20) + fVar10;
    pfVar2[2] = fVar13 + fVar11;
    pfVar2[3] = fVar12 + 0.0;
    *(ulonglong *)(pfVar2 + 4) = (ulonglong)_DAT_142e36f28;
    pdb_140a08a00(&uStack_68,pfVar2,uVar3,uVar4,uVar5);
    pfVar2[6] = fStack_60 * 0.0 + (float)uStack_68 * 0.0 + uStack_68._4_4_;
    uVar9 = 0;
  }
  *param_1 = uVar9;
  return param_1;
}

