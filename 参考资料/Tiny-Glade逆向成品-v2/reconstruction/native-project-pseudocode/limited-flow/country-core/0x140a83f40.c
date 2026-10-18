// VA 0x140a83f40, PDB extent 13 bytes
// country_core::utils::dirty_tiles::DirtyTiles::clear
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::utils::dirty_tiles::DirtyTiles::clear
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 13 */

void pdb_140a83f40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142e32780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memset(param_1,0,0x200);
  return;
}

