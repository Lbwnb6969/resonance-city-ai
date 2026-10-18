// VA 0x141c0cd60, PDB extent 7 bytes
// asset::legacy_mod::is_shipped_era_mod_mesh
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/legacy_mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset::legacy_mod::is_shipped_era_mod_mesh
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/legacy_mod.rs
   Extent: 7 */

byte pdb_141c0cd60(byte param_1,byte param_2)

{
  return (param_2 ^ 1) & param_1;
}

