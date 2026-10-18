// VA 0x140a87330, PDB extent 23 bytes
// country_core::resources::stone_foundation_frames::frame_bottom_in_stone_foundation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stone_foundation_frames.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::stone_foundation_frames::frame_bottom_in_stone_foundation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stone_foundation_frames.rs
   Extent: 23 */

bool pdb_140a87330(float param_1,float param_2)

{
  return param_1 <= param_2 + _DAT_14301cb98 + _DAT_142e37ae4;
}

