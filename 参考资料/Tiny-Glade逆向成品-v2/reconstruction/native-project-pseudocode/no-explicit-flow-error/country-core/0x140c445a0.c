// VA 0x140c445a0, PDB extent 89 bytes
// country_core::resources::walls::decorator_storage::impl$10::remove
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::decorator_storage::impl$10::remove
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 89 */

void pdb_140c445a0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uStack_34;
  undefined1 auStack_30 [8];
  int iStack_28;
  
  uStack_34 = param_2;
  uVar1 = pdb_1400aede0(param_1 + 0x20,&uStack_34);
  pdb_140cabcd0(auStack_30,param_1,uVar1,&uStack_34);
  if (iStack_28 != 3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14306d418,0x30,param_3);
}

