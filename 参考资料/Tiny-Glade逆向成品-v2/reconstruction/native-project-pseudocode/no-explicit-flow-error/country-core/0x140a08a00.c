// VA 0x140a08a00, PDB extent 212 bytes
// country_core::systems::ui::resources::slider3d::Slider3dState::project_cursor_onto_line
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::resources::slider3d::Slider3dState::project_cursor_onto_line
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
   Extent: 212 */

undefined8
pdb_140a08a00(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,uint *param_4,
             undefined8 param_5)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  
  fStack_60 = (float)*param_4;
  fStack_5c = (float)param_4[1];
  fVar3 = fStack_60 / fStack_5c;
  uStack_54 = 0x3f800000;
  uVar2 = param_3[1];
  fStack_58 = fVar3;
  fVar1 = (float)pdb_140de83c0(*param_3,uVar2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_34 = *(undefined8 *)((longlong)param_2 + 0xc);
  uStack_40 = *param_2;
  uStack_38 = *(undefined4 *)(param_2 + 1);
  uStack_50 = _DAT_143034900;
  uStack_48 = 0;
  pdb_140bce5a0(param_1,fVar3 * fVar1,uVar2,&fStack_60,param_5,&uStack_40,&uStack_50);
  return param_1;
}

