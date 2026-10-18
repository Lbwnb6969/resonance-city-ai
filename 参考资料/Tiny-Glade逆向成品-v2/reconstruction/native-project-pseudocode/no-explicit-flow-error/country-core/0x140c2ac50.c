// VA 0x140c2ac50, PDB extent 104 bytes
// country_core::resources::walls::wall_holes::WallHoleStorage::new_in_progress
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_holes::WallHoleStorage::new_in_progress
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
   Extent: 104 */

void pdb_140c2ac50(undefined8 *param_1)

{
  uint3 uStack_23;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[5] = 4;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(ulonglong *)((longlong)param_1 + 0x3d) = (ulonglong)uStack_23;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x55) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *param_1 = 0;
  return;
}

