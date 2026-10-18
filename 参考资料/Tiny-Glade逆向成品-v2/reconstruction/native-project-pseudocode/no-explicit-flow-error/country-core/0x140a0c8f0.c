// VA 0x140a0c8f0, PDB extent 9 bytes
// country_core::resources::walls::wall_path_segment::WallPathSegment::pt_count
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_path_segment.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_path_segment::WallPathSegment::pt_count
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_path_segment.rs
   Extent: 9 */

longlong pdb_140a0c8f0(longlong param_1)

{
  return (longlong)(*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58));
}

