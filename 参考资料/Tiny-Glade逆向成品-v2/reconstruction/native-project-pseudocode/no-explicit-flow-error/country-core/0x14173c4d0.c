// VA 0x14173c4d0, PDB extent 137 bytes
// country_core::startup::load_clutter_packs::impl$0::spawn::async_block$0::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::load_clutter_packs::impl$0::spawn::async_block$0::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
   Extent: 137 */

void pdb_14173c4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2;
  uVar3 = param_3;
  lVar1 = pdb_140f2ccc0();
  uVar2 = pdb_141ae5340(*(longlong *)(lVar1 + 0x18) + 0x10,param_2,param_3,param_4,uVar2,uVar3);
  pdb_14090e320(uVar2);
  return;
}

