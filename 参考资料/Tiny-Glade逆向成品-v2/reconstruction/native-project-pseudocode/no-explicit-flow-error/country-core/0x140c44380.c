// VA 0x140c44380, PDB extent 130 bytes
// country_core::resources::walls::decorator_storage::impl$8::insert
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::decorator_storage::impl$8::insert
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 130 */

void pdb_140c44380(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_54;
  longlong lStack_50;
  undefined8 uStack_48;
  undefined4 *puStack_40;
  code *pcStack_38;
  longlong *plStack_30;
  code *pcStack_28;
  undefined8 *puStack_20;
  code *pcStack_18;
  
  uStack_54 = (undefined4)param_2;
  lStack_50 = pdb_1417b43a0(param_1[2],param_2,*param_1,param_1[1]);
  if (lStack_50 == 3) {
    return;
  }
  puStack_40 = &uStack_54;
  pcStack_38 = pdb_140c447f0;
  plStack_30 = &lStack_50;
  pcStack_28 = pdb_140c34b70;
  pcStack_18 = pdb_140c34b70;
  uStack_48 = param_2;
  puStack_20 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14306d398,&puStack_40,param_3);
}

