// VA 0x140c44410, PDB extent 107 bytes
// country_core::resources::walls::decorator_storage::impl$8::remove
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::decorator_storage::impl$8::remove
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 107 */

void pdb_140c44410(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  code *pcStack_28;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  uStack_34 = param_2;
  uVar2 = pdb_1400aede0(lVar1 + 0x20,&uStack_34);
  pdb_140cabcd0(&puStack_30,lVar1,uVar2,&uStack_34);
  if ((int)pcStack_28 != 3) {
    return;
  }
  pcStack_28 = pdb_140c447f0;
  puStack_30 = &uStack_34;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14306d3c7,&puStack_30,param_3);
}

