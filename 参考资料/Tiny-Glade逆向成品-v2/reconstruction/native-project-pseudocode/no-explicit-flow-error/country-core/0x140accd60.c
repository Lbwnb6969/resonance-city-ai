// VA 0x140accd60, PDB extent 114 bytes
// country_core::systems::egui_input::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/egui_input.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::egui_input::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/egui_input.rs
   Extent: 114 */

void pdb_140accd60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d0 [176];
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  pdb_140d4fc00(auStack_d0);
  uStack_20 = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  uVar1 = pdb_1418fb340(param_2,auStack_d0);
  pdb_141a5b220(auStack_d0,10,&UNK_14304d0c0);
  pdb_140c95fe0(uVar1,auStack_d0);
  return;
}

