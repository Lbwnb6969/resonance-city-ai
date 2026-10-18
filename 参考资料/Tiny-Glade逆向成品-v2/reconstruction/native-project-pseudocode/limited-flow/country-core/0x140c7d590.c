// VA 0x140c7d590, PDB extent 245 bytes
// country_core::resources::roofs::roof_shape::impl$23::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::roofs::roof_shape::impl$23::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 245 */

void pdb_140c7d590(char *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *pcStack_8;
  
  if (*param_1 == '\0') {
    puVar1 = &UNK_14307435b;
    uVar2 = 0xe;
  }
  else {
    if (*param_1 != '\x01') {
      pcStack_8 = param_1 + 8;
      pdb_140f66ff0(param_2,&UNK_1430743a0,8,&UNK_143073dba,8,param_1 + 4,&UNK_143073d60,
                    &UNK_1430743a8,8,param_1 + 1,&UNK_143074380,&UNK_1430743b0,10,&pcStack_8,
                    &UNK_143073cf8);
      return;
    }
    puVar1 = &UNK_143074369;
    uVar2 = 0x17;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,puVar1,uVar2,*(code **)(param_2[1] + 0x18));
  return;
}

