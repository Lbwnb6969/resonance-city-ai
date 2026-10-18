// VA 0x140ad6e60, PDB extent 10 bytes
// country_core::systems::mod_editor::ModEditor::editing
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mod_editor::ModEditor::editing
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 10 */

uint * pdb_140ad6e60(uint *param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)0x0;
  if (*param_1 < 2) {
    puVar1 = param_1;
  }
  return puVar1;
}

