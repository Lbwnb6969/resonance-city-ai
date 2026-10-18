// VA 0x140b4b6a0, PDB extent 14 bytes
// country_core::systems::mode_manager::impl$3::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mode_manager::impl$3::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 14 */

undefined1 * pdb_140b4b6a0(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  return param_1;
}

