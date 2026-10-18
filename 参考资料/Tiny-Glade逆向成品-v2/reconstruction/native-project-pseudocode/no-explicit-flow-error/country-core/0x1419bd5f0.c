// VA 0x1419bd5f0, PDB extent 826 bytes
// country_core::systems::ui::resources::slider3d::Slider3d::update<enum2$<country_core::systems::ui::resources::ui_state::DragState>,country_core::systems::wall::shapes::rectangle::ui_edit_rectangle_dims::do_ui_edit_rectangle_dims::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::resources::slider3d::Slider3d::update<enum2$<country_core::systems::ui::resources::ui_state::DragState>,country_core::systems::wall::shapes::rectangle::ui_edit_rectangle_dims::do_ui_edit_rectangle_dims::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
   Extent: 826 */

uint * pdb_1419bd5f0(uint *param_1,undefined8 *param_2,byte param_3,longlong *param_4,float *param_5
                    )

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  byte bVar8;
  float *pfVar9;
  float fVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 *puStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  code *pcStack_70;
  
  puVar2 = (undefined8 *)*param_2;
  puVar3 = (undefined4 *)param_2[1];
  puVar4 = (uint *)param_2[5];
  bVar8 = 3;
  if (1 < param_3) {
    bVar8 = param_3 - 2;
  }
  uVar5 = param_2[9];
  uVar7 = (uint)bVar8;
  if (bVar8 - 2 < 2) {
    fVar15 = *param_5;
    fVar14 = param_5[1];
    fStack_b0 = (float)*puVar4;
    fStack_ac = (float)puVar4[1];
    fVar13 = fStack_b0 / fStack_ac;
    uStack_a4 = 0x3f800000;
    uVar11 = (ulonglong)(uint)puVar3[1];
    fStack_a8 = fVar13;
    fVar10 = (float)pdb_140de83c0(*puVar3,uVar11);
    uStack_78._4_4_ = *(undefined4 *)((longlong)puVar2 + 0x14);
    uStack_7c = (undefined4)*(undefined8 *)((longlong)puVar2 + 0xc);
    uStack_78._0_4_ = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar2 + 0xc) >> 0x20);
    puStack_88 = (undefined8 *)*puVar2;
    uStack_80 = *(undefined4 *)(puVar2 + 1);
    uStack_a0 = _DAT_143034900;
    uStack_98 = 0;
    pdb_140bce5a0(&fStack_94,fVar13 * fVar10,uVar11,&fStack_b0,uVar5,&puStack_88,&uStack_a0);
    if (fVar14 < fVar15) {
      uStack_a0 = CONCAT44(uStack_a0._4_4_,fVar15);
      uStack_80 = 0x40f705d0;
      uStack_7c = 1;
      pcStack_70 = pdb_140f705d0;
      fStack_b0 = fVar14;
      puStack_88 = &uStack_a0;
      uStack_78 = &fStack_b0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14335fde4,&puStack_88,&UNK_14335fe80);
    }
    uVar5 = *(undefined8 *)((longlong)puVar2 + 0xc);
    fVar10 = (float)uVar5;
    fVar13 = (float)((ulonglong)puVar2[2] >> 0x20);
    fVar12 = (fStack_8c * fVar13 + fStack_94 * fVar10 + fStack_90 * (float)puVar2[2]) -
             *(float *)(puVar2 + 3);
    if (fVar15 <= fVar12) {
      fVar15 = fVar12;
    }
    if (fVar15 <= fVar14) {
      fVar14 = fVar15;
    }
    fVar12 = _UNK_142e378e4 * _DAT_142e377f0;
    uVar1 = *puVar2;
    fVar15 = *(float *)(puVar2 + 1);
    param_1[1] = (uint)((float)uVar1 + fVar14 * fVar10);
    param_1[2] = (uint)((float)((ulonglong)uVar1 >> 0x20) +
                       fVar14 * (float)((ulonglong)uVar5 >> 0x20));
    param_1[3] = (uint)(fVar15 + fVar14 * fVar13);
    param_1[4] = (uint)(fVar14 + fVar12);
    uVar7 = 1;
  }
  else if (bVar8 != 0) {
    pfVar9 = (float *)param_4[4];
    if ((*(longlong *)param_4[2] - 1U & 0xfffffffffffffffd) != 0) {
      pfVar9 = (float *)param_4[3];
    }
    fVar15 = *pfVar9;
    fVar14 = *(float *)((undefined8 *)param_4[1] + 1);
    uVar1 = *(undefined8 *)param_4[1];
    uVar6 = *(undefined8 *)*param_4;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((undefined8 *)*param_4 + 1);
    *puVar2 = uVar6;
    *(undefined8 *)((longlong)puVar2 + 0xc) = uVar1;
    *(float *)((longlong)puVar2 + 0x14) = fVar14;
    fStack_b0 = (float)*puVar4;
    fStack_ac = (float)puVar4[1];
    fVar13 = fStack_b0 / fStack_ac;
    uStack_a4 = 0x3f800000;
    uVar11 = (ulonglong)(uint)puVar3[1];
    fStack_a8 = fVar13;
    fVar10 = (float)pdb_140de83c0(*puVar3,uVar11);
    uStack_78._4_4_ = *(undefined4 *)((longlong)puVar2 + 0x14);
    uStack_7c = (undefined4)*(undefined8 *)((longlong)puVar2 + 0xc);
    uStack_78._0_4_ = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar2 + 0xc) >> 0x20);
    puStack_88 = (undefined8 *)*puVar2;
    uStack_80 = *(undefined4 *)(puVar2 + 1);
    uStack_a0 = _DAT_143034900;
    uStack_98 = 0;
    pdb_140bce5a0(&fStack_94,fVar13 * fVar10,uVar11,&fStack_b0,uVar5,&puStack_88,&uStack_a0);
    *(float *)(puVar2 + 3) =
         (fVar14 * fStack_8c +
         (float)((ulonglong)uVar1 >> 0x20) * fStack_90 + fStack_94 * (float)uVar1) - fVar15;
    uVar7 = 0;
  }
  *param_1 = uVar7;
  return param_1;
}

