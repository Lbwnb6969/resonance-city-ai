// VA 0x140a61520, PDB extent 11 bytes
// country_core::resources::stairs::stairs_state::StairSegment::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::stairs::stairs_state::StairSegment::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 11 */

uint pdb_140a61520(uint param_1,uint param_2)

{
  if (param_1 < param_2) {
    param_2 = param_1;
  }
  return param_2;
}

