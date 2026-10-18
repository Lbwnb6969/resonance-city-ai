// VA 0x1409bd9d0, PDB extent 36 bytes
// country_core::systems::ui::signifiers::SignifierEntityBuilder::rotation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::signifiers::SignifierEntityBuilder::rotation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
   Extent: 36 */

undefined8 pdb_1409bd9d0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)(param_2 + 0x30) = uVar1;
  *(undefined4 *)(param_2 + 0x34) = uVar2;
  *(undefined4 *)(param_2 + 0x38) = uVar3;
  *(undefined4 *)(param_2 + 0x3c) = uVar4;
  pub_142e32760(uVar1,param_2,0x90);
  return param_1;
}

