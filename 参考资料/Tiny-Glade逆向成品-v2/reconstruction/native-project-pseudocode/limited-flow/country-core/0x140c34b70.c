// VA 0x140c34b70, PDB extent 123 bytes
// country_core::resources::walls::decorator_storage::impl$25::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::decorator_storage::impl$25::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 123 */

void pdb_140c34b70(longlong *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  longlong *plStack_8;
  
  if (*param_1 != 0) {
    if ((int)*param_1 == 1) {
      puVar1 = &UNK_14306c464;
      uVar2 = 7;
    }
    else {
      puVar1 = &UNK_14306c46b;
      uVar2 = 6;
    }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,puVar1,uVar2,*(code **)(param_2[1] + 0x18));
    return;
  }
  plStack_8 = param_1 + 1;
  pdb_140f66090(param_2,&UNK_14306c460,4,&plStack_8,&UNK_14306c440);
  return;
}

