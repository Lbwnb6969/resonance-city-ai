// VA 0x1428d3230, PDB extent 173 bytes
// utils::curve::impl$49::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::curve::impl$49::fmt
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 173 */

void pdb_1428d3230(char *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcStack_8;
  
  if (*param_1 == '\0') {
    pcStack_8 = param_1 + 1;
    puVar3 = &UNK_1435afeb8;
    puVar1 = &UNK_1435afed8;
    puVar2 = &UNK_1435afee7;
  }
  else {
    if (*param_1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_1435afeec,10,*(code **)(param_2[1] + 0x18));
      return;
    }
    pcStack_8 = param_1 + 8;
    puVar3 = &UNK_1435afef8;
    puVar1 = &UNK_1435aff18;
    puVar2 = &UNK_1435aff27;
  }
  pdb_140f66e50(param_2,puVar1,0xf,puVar2,5,&pcStack_8,puVar3);
  return;
}

