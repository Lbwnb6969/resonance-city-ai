// VA 0x140678a30, PDB extent 173 bytes
// utils::curve::impl$49::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::curve::impl$49::fmt
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 173 */

void pdb_140678a30(char *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcStack_8;
  
  if (*param_1 == '\0') {
    pcStack_8 = param_1 + 1;
    puVar3 = &UNK_142f90e38;
    puVar1 = &UNK_142f91247;
    puVar2 = &UNK_142f91256;
  }
  else {
    if (*param_1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_142f9125b,10,*(code **)(param_2[1] + 0x18));
      return;
    }
    pcStack_8 = param_1 + 8;
    puVar3 = &UNK_142f90400;
    puVar1 = &UNK_142f91265;
    puVar2 = &UNK_142f91274;
  }
  pdb_140f66e50(param_2,puVar1,0xf,puVar2,5,&pcStack_8,puVar3);
  return;
}

