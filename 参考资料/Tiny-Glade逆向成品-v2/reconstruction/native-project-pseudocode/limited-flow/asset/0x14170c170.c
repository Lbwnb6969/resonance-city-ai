// VA 0x14170c170, PDB extent 121 bytes
// asset::texture::desc::impl$16::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/desc.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset::texture::desc::impl$16::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/desc.rs
   Extent: 121 */

void pdb_14170c170(int *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int *piStack_8;
  
  if (*param_1 == 0) {
    puVar1 = &UNK_143329f19;
  }
  else {
    if (*param_1 != 1) {
      piStack_8 = param_1 + 1;
      pdb_140f66090(param_2,&UNK_143329f08,7,&piStack_8,&UNK_143329f48);
      return;
    }
    puVar1 = &UNK_143329f40;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,puVar1,4,*(code **)(param_2[1] + 0x18));
  return;
}

