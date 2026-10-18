// VA 0x140a87350, PDB extent 58 bytes
// country_core::resources::stone_foundation_frames::cottage_corner_window_foundation_size
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stone_foundation_frames.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::stone_foundation_frames::cottage_corner_window_foundation_size
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stone_foundation_frames.rs
   Extent: 58 */

float pdb_140a87350(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (param_1 - 1U < 3) {
    fVar1 = *(float *)(&UNK_1430438e4 + param_1 * 4);
  }
  return param_2 * _DAT_142f6d804 + _DAT_143018840 + fVar1;
}

