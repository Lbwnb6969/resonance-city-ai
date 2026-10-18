// VA 0x1414c3b50, PDB extent 445 bytes
// country_core::systems::ui::resources::slider3d::Slider3d::update<ref$<country_core::systems::ui::resources::ui_state::UiWidgetContext>,system_decorator::ui_systems::ui_change_stair_height::ui_change_stair_height::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::resources::slider3d::Slider3d::update<ref$<country_core::systems::ui::resources::ui_state::UiWidgetContext>,system_decorator::ui_systems::ui_change_stair_height::ui_change_stair_height::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
   Extent: 445 */

uint * pdb_1414c3b50(uint *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                    float *param_5,float *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_70;
  float fStack_6c;
  undefined8 uStack_68;
  float fStack_60;
  undefined4 uStack_5c;
  float *pfStack_58;
  code *pcStack_50;
  
  puVar1 = (undefined8 *)*param_2;
  bVar5 = pdb_1408ffab0(param_3);
  uVar2 = param_2[1];
  uVar3 = param_2[5];
  bVar6 = 3;
  if (1 < bVar5) {
    bVar6 = bVar5 - 2;
  }
  uVar4 = param_2[9];
  uVar7 = (uint)bVar6;
  if (bVar6 - 2 < 2) {
    fVar12 = *param_6;
    fVar11 = param_6[1];
    pdb_140a08a00(&uStack_68,puVar1,uVar2,uVar3,uVar4);
    if (fVar11 < fVar12) {
      uStack_68 = &fStack_70;
      fStack_60 = 7.7194595;
      uStack_5c = 1;
      pfStack_58 = &fStack_6c;
      pcStack_50 = pdb_140f705d0;
      fStack_70 = fVar12;
      fStack_6c = fVar11;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143312a3c,&uStack_68,&UNK_143312ad8);
    }
    uVar2 = *(undefined8 *)((longlong)puVar1 + 0xc);
    fVar8 = (float)uVar2;
    fVar9 = (float)((ulonglong)puVar1[2] >> 0x20);
    fVar10 = (fStack_60 * fVar9 + (float)uStack_68 * fVar8 + uStack_68._4_4_ * (float)puVar1[2]) -
             *(float *)(puVar1 + 3);
    if (fVar12 <= fVar10) {
      fVar12 = fVar10;
    }
    if (fVar12 <= fVar11) {
      fVar11 = fVar12;
    }
    fVar10 = _UNK_142e378e4 * _DAT_142e377f0;
    uVar3 = *puVar1;
    fVar12 = *(float *)(puVar1 + 1);
    param_1[1] = (uint)((float)uVar3 + fVar11 * fVar8);
    param_1[2] = (uint)((float)((ulonglong)uVar3 >> 0x20) +
                       fVar11 * (float)((ulonglong)uVar2 >> 0x20));
    param_1[3] = (uint)(fVar12 + fVar11 * fVar9);
    param_1[4] = (uint)(fVar11 + fVar10);
    uVar7 = 1;
  }
  else if (bVar6 != 0) {
    fVar12 = *param_5;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_4 + 1);
    *puVar1 = *param_4;
    *(ulonglong *)((longlong)puVar1 + 0xc) = CONCAT44(_UNK_142e378e4,_DAT_142e378e0);
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    pdb_140a08a00(&uStack_68,puVar1,uVar2,uVar3,uVar4);
    *(float *)(puVar1 + 3) = (fStack_60 * 0.0 + (float)uStack_68 * 0.0 + uStack_68._4_4_) - fVar12;
    uVar7 = 0;
  }
  *param_1 = uVar7;
  return param_1;
}

