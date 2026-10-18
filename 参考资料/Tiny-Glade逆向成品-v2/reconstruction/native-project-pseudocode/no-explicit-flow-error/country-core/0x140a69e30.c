// VA 0x140a69e30, PDB extent 46 bytes
// country_core::resources::walls::window_cuts::WindowCutStorage::as_wip_mut
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/window_cuts.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::window_cuts::WindowCutStorage::as_wip_mut
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/window_cuts.rs
   Extent: 46 */

int * pdb_140a69e30(int *param_1)

{
  if (*param_1 != 1) {
    return param_1 + 2;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143040a40,0xa7,&UNK_143040ad0);
}

