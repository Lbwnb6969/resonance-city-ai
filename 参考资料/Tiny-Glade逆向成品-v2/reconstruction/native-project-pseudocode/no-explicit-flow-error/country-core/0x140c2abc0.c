// VA 0x140c2abc0, PDB extent 46 bytes
// country_core::resources::walls::wall_holes::WallHoleStorage::as_finalized
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_holes::WallHoleStorage::as_finalized
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
   Extent: 46 */

int * pdb_140c2abc0(int *param_1)

{
  if (*param_1 == 1) {
    return param_1 + 2;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14306bcd0,0x55,&UNK_14306bd00);
}

