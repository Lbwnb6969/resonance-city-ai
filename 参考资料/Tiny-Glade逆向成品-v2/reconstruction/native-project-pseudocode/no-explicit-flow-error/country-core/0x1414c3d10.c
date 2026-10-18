// VA 0x1414c3d10, PDB extent 476 bytes
// country_core::systems::ui::resources::slider3d::Slider3d::update<ref$<country_core::systems::ui::resources::ui_state::UiWidgetContext>,system_decorator::ui_systems::ui_focus_stairs::ui_focus_stairs::closure_env$27>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::resources::slider3d::Slider3d::update<ref$<country_core::systems::ui::resources::ui_state::UiWidgetContext>,system_decorator::ui_systems::ui_focus_stairs::ui_focus_stairs::closure_env$27>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
   Extent: 476 */

uint * pdb_1414c3d10(uint *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
                    float *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  float fStack_70;
  undefined4 uStack_6c;
  float *pfStack_68;
  code *pcStack_60;
  
  puVar2 = (undefined8 *)*param_2;
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
    pdb_140a08a00(&uStack_78,puVar2,uVar3,uVar4,uVar5);
    if (fVar13 < fVar14) {
      uStack_78 = &fStack_80;
      fStack_70 = 7.7194595;
      uStack_6c = 1;
      pfStack_68 = &fStack_7c;
      pcStack_60 = pdb_140f705d0;
      fStack_80 = fVar14;
      fStack_7c = fVar13;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143312a3c,&uStack_78,&UNK_143312ad8);
    }
    uVar3 = *(undefined8 *)((longlong)puVar2 + 0xc);
    fVar10 = (float)uVar3;
    fVar11 = (float)((ulonglong)puVar2[2] >> 0x20);
    fVar12 = (fStack_70 * fVar11 + (float)uStack_78 * fVar10 + uStack_78._4_4_ * (float)puVar2[2]) -
             *(float *)(puVar2 + 3);
    if (fVar14 <= fVar12) {
      fVar14 = fVar12;
    }
    if (fVar14 <= fVar13) {
      fVar13 = fVar14;
    }
    fVar12 = _UNK_142e378e4 * _DAT_142e377f0;
    uVar4 = *puVar2;
    fVar14 = *(float *)(puVar2 + 1);
    param_1[1] = (uint)((float)uVar4 + fVar13 * fVar10);
    param_1[2] = (uint)((float)((ulonglong)uVar4 >> 0x20) +
                       fVar13 * (float)((ulonglong)uVar3 >> 0x20));
    param_1[3] = (uint)(fVar14 + fVar13 * fVar11);
    param_1[4] = (uint)(fVar13 + fVar12);
    uVar9 = 1;
  }
  else if (bVar8 != 0) {
    fVar14 = *(float *)((undefined8 *)param_4[1] + 1);
    fVar13 = *(float *)(param_4[2] + 4);
    uVar1 = *(undefined8 *)param_4[1];
    uVar6 = *(undefined8 *)*param_4;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((undefined8 *)*param_4 + 1);
    *puVar2 = uVar6;
    *(undefined8 *)((longlong)puVar2 + 0xc) = uVar1;
    *(float *)((longlong)puVar2 + 0x14) = fVar14;
    pdb_140a08a00(&uStack_78,puVar2,uVar3,uVar4,uVar5);
    *(float *)(puVar2 + 3) =
         (fVar14 * fStack_70 +
         (float)((ulonglong)uVar1 >> 0x20) * uStack_78._4_4_ + (float)uStack_78 * (float)uVar1) -
         fVar13;
    uVar9 = 0;
  }
  *param_1 = uVar9;
  return param_1;
}

