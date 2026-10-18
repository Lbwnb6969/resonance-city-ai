// VA 0x140df4470, PDB extent 165 bytes
// utils::curve::impl$51::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::curve::impl$51::fmt
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 165 */

void pdb_140df4470(char *param_1,undefined8 *param_2)

{
  char *pcStack_18;
  char **ppcStack_10;
  code *pcStack_8;
  
  if (*param_1 == '\0') {
    pcStack_18 = param_1 + 1;
    ppcStack_10 = &pcStack_18;
    pcStack_8 = pdb_140d3f2e0;
    pdb_140f681d0(*param_2,param_2[1],&UNK_1431ffea6,&ppcStack_10);
    return;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_1431ffebe,0xb,*(code **)(param_2[1] + 0x18));
    return;
  }
  pcStack_18 = param_1 + 8;
  ppcStack_10 = &pcStack_18;
  pcStack_8 = pdb_1403d7700;
  pdb_140f681d0(*param_2,param_2[1],&UNK_1431ffec9,&ppcStack_10);
  return;
}

