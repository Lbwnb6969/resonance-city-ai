// VA 0x140c04f30, PDB extent 261 bytes
// country_core::resources::critters::sheep::impl$5::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters/sheep.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::critters::sheep::impl$5::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters/sheep.rs
   Extent: 261 */

void pdb_140c04f30(char *param_1,undefined8 param_2)

{
  char *pcStack_8;
  
  if (*param_1 == '\x01') {
    pcStack_8 = param_1 + 1;
    pdb_140f66ff0(param_2,&UNK_143068310,7,&UNK_1430682c4,9,param_1 + 4,&UNK_1430682d0,
                  &UNK_143068317,0x13,param_1 + 8,&UNK_1430682d0,&UNK_14306832a,0x10,&pcStack_8,
                  &UNK_1430682f0);
    return;
  }
  pcStack_8 = param_1 + 4;
  pdb_140f66e50(param_2,&UNK_1430682c0,4,&UNK_1430682c4,9,&pcStack_8,&UNK_1430682a0);
  return;
}

