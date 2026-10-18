// VA 0x140a84d90, PDB extent 46 bytes
// country_core::systems::wall::valid_enclosure::ShapeParameters::as_rectangle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::ShapeParameters::as_rectangle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 46 */

int * pdb_140a84d90(int *param_1)

{
  if (*param_1 == 1) {
    return param_1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1430432d8,0x29,&UNK_143043328);
}

