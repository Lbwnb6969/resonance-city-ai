// VA 0x1424bce10, PDB extent 148 bytes
// country_core::resources::walls::decorator_subtype::impl$27::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::decorator_subtype::impl$27::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
   Extent: 148 */

void pdb_1424bce10(char *param_1,undefined8 *param_2)

{
  char *pcStack_8;
  
  if (*param_1 == '\x1a') {
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_14351027a,0x16,*(code **)(param_2[1] + 0x18));
    return;
  }
  pcStack_8 = param_1;
  pdb_140f66f00(param_2,&UNK_143510268,7,&UNK_14351026f,4,param_1 + 1,&UNK_143510228,&UNK_143510273,
                7,&pcStack_8,&UNK_143510248);
  return;
}

