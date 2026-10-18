// VA 0x140a85160, PDB extent 46 bytes
// country_core::systems::wall::valid_enclosure::ShapeParameters::as_circle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::ShapeParameters::as_circle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 46 */

int * pdb_140a85160(int *param_1)

{
  if (*param_1 != 1) {
    return param_1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143043340,0x23,&UNK_143043358);
}

