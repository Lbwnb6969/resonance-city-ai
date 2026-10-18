// VA 0x140dea700, PDB extent 106 bytes
// utils::wall_space::impl$1::project
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::wall_space::impl$1::project
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
   Extent: 106 */

byte pdb_140dea700(int *param_1,float param_2)

{
  if (*param_1 == 1) {
    pub_142e32a70(param_1,param_1[1]);
    return 1;
  }
  return -(param_2 <= (float)param_1[1] && 0.0 <= param_2) & 1;
}

