// VA 0x1419997b0, PDB extent 118 bytes
// country_core::components::drawable::impl$30::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::components::drawable::impl$30::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
   Extent: 118 */

void pdb_1419997b0(int *param_1,undefined8 param_2)

{
  int *piStack_8;
  
  if (*param_1 == 1) {
    piStack_8 = param_1 + 1;
    pdb_140f66090(param_2,&UNK_14335d638,0xd,&piStack_8,&UNK_14335d618);
    return;
  }
  piStack_8 = param_1 + 2;
  pdb_140f66090(param_2,&UNK_14335d610,4,&piStack_8,&UNK_14335d5f0);
  return;
}

