// VA 0x1419bd930, PDB extent 777 bytes
// country_core::systems::ui::resources::slider3d::Slider3d::update<ref$<country_core::systems::ui::resources::ui_state::UiWidgetContext>,country_core::systems::ui_elevate_wall_group::ui_elevate_wall_group::closure_env$4>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::resources::slider3d::Slider3d::update<ref$<country_core::systems::ui::resources::ui_state::UiWidgetContext>,country_core::systems::ui_elevate_wall_group::ui_elevate_wall_group::closure_env$4>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
   Extent: 777 */

undefined4 *
pdb_1419bd930(undefined4 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             float *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 uStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 *puStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  code *pcStack_60;
  
  lVar2 = *param_3;
  bVar8 = 2;
  if ((*(char *)(lVar2 + 0x18) == '\x02') && (*(longlong *)(lVar2 + 0x38) == param_3[1])) {
    bVar8 = *(byte *)(lVar2 + 0x19);
  }
  puVar3 = (undefined8 *)*param_2;
  puVar4 = (undefined4 *)param_2[1];
  puVar5 = (uint *)param_2[5];
  uVar6 = param_2[9];
  fVar9 = *param_5;
  fVar13 = param_5[1];
  if (1 < bVar8) {
    uVar7 = 0;
    if (bVar8 == 2) goto LAB_1419bdbcc;
    if (bVar8 == 3) {
      lVar2 = *param_4;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(lVar2 + 0x38);
      *puVar3 = *(undefined8 *)(lVar2 + 0x30);
      *(ulonglong *)((longlong)puVar3 + 0xc) = CONCAT44(_UNK_142e378e4,_DAT_142e378e0);
      *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
      fStack_a0 = (float)*puVar5;
      fStack_9c = (float)puVar5[1];
      fVar13 = fStack_a0 / fStack_9c;
      uStack_94 = 0x3f800000;
      uVar11 = (ulonglong)(uint)puVar4[1];
      fStack_98 = fVar13;
      fVar9 = (float)pdb_140de83c0(*puVar4,uVar11);
      uStack_68._4_4_ = *(undefined4 *)((longlong)puVar3 + 0x14);
      uStack_6c = (undefined4)*(undefined8 *)((longlong)puVar3 + 0xc);
      uStack_68._0_4_ = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar3 + 0xc) >> 0x20);
      puStack_78 = (undefined8 *)*puVar3;
      uStack_70 = *(undefined4 *)(puVar3 + 1);
      uStack_90 = _DAT_143034900;
      uStack_88 = 0;
      pdb_140bce5a0(&fStack_84,fVar13 * fVar9,uVar11,&fStack_a0,uVar6,&puStack_78,&uStack_90);
      *(float *)(puVar3 + 3) = fStack_7c * 0.0 + fStack_84 * 0.0 + fStack_80;
      goto LAB_1419bdbcc;
    }
  }
  fStack_a0 = (float)*puVar5;
  fStack_9c = (float)puVar5[1];
  fVar14 = fStack_a0 / fStack_9c;
  uStack_94 = 0x3f800000;
  uVar11 = (ulonglong)(uint)puVar4[1];
  fStack_98 = fVar14;
  fVar10 = (float)pdb_140de83c0(*puVar4,uVar11);
  uStack_68._4_4_ = *(undefined4 *)((longlong)puVar3 + 0x14);
  uStack_6c = (undefined4)*(undefined8 *)((longlong)puVar3 + 0xc);
  uStack_68._0_4_ = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar3 + 0xc) >> 0x20);
  puStack_78 = (undefined8 *)*puVar3;
  uStack_70 = *(undefined4 *)(puVar3 + 1);
  uStack_90 = _DAT_143034900;
  uStack_88 = 0;
  pdb_140bce5a0(&fStack_84,fVar14 * fVar10,uVar11,&fStack_a0,uVar6,&puStack_78,&uStack_90);
  if (fVar13 < fVar9) {
    uStack_90 = CONCAT44(uStack_90._4_4_,fVar9);
    uStack_70 = 0x40f705d0;
    uStack_6c = 1;
    pcStack_60 = pdb_140f705d0;
    fStack_a0 = fVar13;
    puStack_78 = &uStack_90;
    uStack_68 = &fStack_a0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14335fde4,&puStack_78,&UNK_14335fe80);
  }
  uVar6 = *(undefined8 *)((longlong)puVar3 + 0xc);
  fVar10 = (float)uVar6;
  fVar14 = (float)((ulonglong)puVar3[2] >> 0x20);
  fVar12 = (fStack_7c * fVar14 + fStack_84 * fVar10 + fStack_80 * (float)puVar3[2]) -
           *(float *)(puVar3 + 3);
  if (fVar9 <= fVar12) {
    fVar9 = fVar12;
  }
  if (fVar9 <= fVar13) {
    fVar13 = fVar9;
  }
  fVar12 = _UNK_142e378e4 * _DAT_142e377f0;
  uVar1 = *puVar3;
  fVar9 = *(float *)(puVar3 + 1);
  param_1[1] = (float)uVar1 + fVar13 * fVar10;
  param_1[2] = (float)((ulonglong)uVar1 >> 0x20) + fVar13 * (float)((ulonglong)uVar6 >> 0x20);
  param_1[3] = fVar9 + fVar13 * fVar14;
  param_1[4] = fVar13 + fVar12;
  uVar7 = 1;
LAB_1419bdbcc:
  *param_1 = uVar7;
  return param_1;
}

