// VA 0x140c2abf0, PDB extent 81 bytes
// country_core::resources::walls::wall_holes::WallHoleStorage::new_finalized
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_holes::WallHoleStorage::new_finalized
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
   Extent: 81 */

undefined8 * pdb_140c2abf0(undefined8 *param_1)

{
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  param_1[5] = 0;
  param_1[6] = 4;
  param_1[7] = 0;
  *param_1 = 1;
  return param_1;
}

