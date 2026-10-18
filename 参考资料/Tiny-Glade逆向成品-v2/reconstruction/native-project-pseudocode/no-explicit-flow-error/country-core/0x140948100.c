// VA 0x140948100, PDB extent 29 bytes
// country_core::render::nani::buffers::NaniDrawListPhase::name
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/buffers.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::nani::buffers::NaniDrawListPhase::name
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/buffers.rs
   Extent: 29 */

undefined * pdb_140948100(byte param_1)

{
  return &UNK_143025150 + *(int *)(&UNK_143025150 + (ulonglong)param_1 * 4);
}

