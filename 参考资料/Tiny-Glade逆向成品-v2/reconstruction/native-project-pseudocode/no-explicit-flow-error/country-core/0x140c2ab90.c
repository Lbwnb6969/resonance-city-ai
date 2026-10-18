// VA 0x140c2ab90, PDB extent 46 bytes
// country_core::resources::walls::wall_holes::WallHoleStorage::as_wip_mut
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_holes::WallHoleStorage::as_wip_mut
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
   Extent: 46 */

int * pdb_140c2ab90(int *param_1)

{
  if (*param_1 != 1) {
    return param_1 + 2;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14306bc30,0x9b,&UNK_14306bcb8);
}

