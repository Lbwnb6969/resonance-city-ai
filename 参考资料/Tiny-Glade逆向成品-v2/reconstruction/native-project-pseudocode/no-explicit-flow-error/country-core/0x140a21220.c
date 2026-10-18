// VA 0x140a21220, PDB extent 114 bytes
// country_core::systems::wall::valid_enclosure::impl$7::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::wall::valid_enclosure::impl$7::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 114 */

void pdb_140a21220(int *param_1,undefined8 param_2)

{
  int *piStack_8;
  
  piStack_8 = param_1 + 1;
  if (*param_1 == 1) {
    pdb_140f66090(param_2,&UNK_143037538,9,&piStack_8,&UNK_143037518);
    return;
  }
  pdb_140f66090(param_2,&UNK_143037510,6,&piStack_8,&UNK_1430374f0);
  return;
}

