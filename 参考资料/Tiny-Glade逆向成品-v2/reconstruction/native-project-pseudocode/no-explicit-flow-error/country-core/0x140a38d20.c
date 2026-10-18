// VA 0x140a38d20, PDB extent 20 bytes
// country_core::systems::main_camera::_::impl$0::previous
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/main_camera.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::main_camera::_::impl$0::previous
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/main_camera.rs
   Extent: 20 */

ulonglong pdb_140a38d20(byte *param_1)

{
  return 0x40302010006 >> ((*param_1 & 7) << 3);
}

