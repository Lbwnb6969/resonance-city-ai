// VA 0x1414c3ef0, PDB extent 508 bytes
// country_core::systems::ui::resources::slider3d::Slider3d::update<ref$<country_core::systems::ui::resources::ui_state::UiWidgetContext>,system_decorator::ui_systems::ui_focus_stairs::ui_focus_stairs::closure_env$7>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::resources::slider3d::Slider3d::update<ref$<country_core::systems::ui::resources::ui_state::UiWidgetContext>,system_decorator::ui_systems::ui_focus_stairs::ui_focus_stairs::closure_env$7>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
   Extent: 508 */

uint * pdb_1414c3ef0(uint *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
                    float *param_5)

{
  undefined8 uVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  float fStack_70;
  undefined4 uStack_6c;
  float *pfStack_68;
  code *pcStack_60;
  
  pfVar2 = (float *)*param_2;
  bVar8 = pdb_1408ffab0(param_3);
  uVar3 = param_2[1];
  uVar4 = param_2[5];
  bVar9 = 3;
  if (1 < bVar8) {
    bVar9 = bVar8 - 2;
  }
  uVar5 = param_2[9];
  uVar10 = (uint)bVar9;
  if (bVar9 - 2 < 2) {
    fVar16 = *param_5;
    fVar15 = param_5[1];
    pdb_140a08a00(&uStack_78,pfVar2,uVar3,uVar4,uVar5);
    if (fVar15 < fVar16) {
      uStack_78 = &fStack_80;
      fStack_70 = 7.7194595;
      uStack_6c = 1;
      pfStack_68 = &fStack_7c;
      pcStack_60 = pdb_140f705d0;
      fStack_80 = fVar16;
      fStack_7c = fVar15;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143312a3c,&uStack_78,&UNK_143312ad8);
    }
    uVar3 = *(undefined8 *)(pfVar2 + 3);
    fVar11 = (float)uVar3;
    fVar12 = (float)((ulonglong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
    fVar13 = (fStack_70 * fVar12 +
             (float)uStack_78 * fVar11 + uStack_78._4_4_ * (float)*(undefined8 *)(pfVar2 + 4)) -
             pfVar2[6];
    if (fVar16 <= fVar13) {
      fVar16 = fVar13;
    }
    if (fVar16 <= fVar15) {
      fVar15 = fVar16;
    }
    fVar13 = _UNK_142e378e4 * _DAT_142e377f0;
    uVar4 = *(undefined8 *)pfVar2;
    fVar16 = pfVar2[2];
    param_1[1] = (uint)((float)uVar4 + fVar15 * fVar11);
    param_1[2] = (uint)((float)((ulonglong)uVar4 >> 0x20) +
                       fVar15 * (float)((ulonglong)uVar3 >> 0x20));
    param_1[3] = (uint)(fVar16 + fVar15 * fVar12);
    param_1[4] = (uint)(fVar15 + fVar13);
    uVar10 = 1;
  }
  else if (bVar9 != 0) {
    lVar6 = *param_4;
    fVar16 = *(float *)(lVar6 + 0x48);
    fVar12 = *(float *)(lVar6 + 0x40);
    fVar13 = *(float *)(lVar6 + 0x44);
    fVar7 = *(float *)(lVar6 + 0x48);
    uVar1 = *(undefined8 *)(lVar6 + 0x4c);
    fVar17 = (float)uVar1;
    fVar15 = *(float *)(lVar6 + 0x50);
    fVar11 = *(float *)(lVar6 + 0x38);
    fVar14 = _UNK_142e378e4 * _DAT_142e377f0;
    *pfVar2 = fVar11 * fVar7 + *(float *)(lVar6 + 0x3c);
    pfVar2[1] = fVar11 * fVar17 + fVar12;
    pfVar2[2] = fVar11 * (float)((ulonglong)uVar1 >> 0x20) + fVar13;
    pfVar2[3] = fVar14 + fVar7;
    pfVar2[4] = fVar17;
    pfVar2[5] = fVar15;
    pdb_140a08a00(&uStack_78,pfVar2,uVar3,uVar4,uVar5);
    pfVar2[6] = fVar15 * fStack_70 + fVar17 * uStack_78._4_4_ + fVar16 * (float)uStack_78;
    uVar10 = 0;
  }
  *param_1 = uVar10;
  return param_1;
}

