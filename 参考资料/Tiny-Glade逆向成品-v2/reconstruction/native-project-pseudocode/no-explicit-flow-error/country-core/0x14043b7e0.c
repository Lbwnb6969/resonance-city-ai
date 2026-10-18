// VA 0x14043b7e0, PDB extent 9 bytes
// turbosloth::store::AssetName::as_str
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::AssetName::as_str
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 9 */

undefined8 pdb_14043b7e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}

