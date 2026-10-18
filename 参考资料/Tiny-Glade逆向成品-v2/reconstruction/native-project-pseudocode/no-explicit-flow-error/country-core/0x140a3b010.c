// VA 0x140a3b010, PDB extent 28 bytes
// country_core::systems::temp_eraser::TempEraser::eraser_layer
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/temp_eraser.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::temp_eraser::TempEraser::eraser_layer
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/temp_eraser.rs
   Extent: 28 */

undefined1 pdb_140a3b010(char *param_1)

{
  undefined1 uVar1;
  
  uVar1 = 7;
  if ((byte)(*param_1 - 2U) < 0xd) {
    uVar1 = (&UNK_14303c411)[(byte)(*param_1 - 2U)];
  }
  return uVar1;
}

