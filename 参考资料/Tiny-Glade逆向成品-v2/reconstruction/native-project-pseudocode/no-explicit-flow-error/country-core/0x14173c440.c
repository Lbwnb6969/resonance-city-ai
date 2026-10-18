// VA 0x14173c440, PDB extent 137 bytes
// country_core::startup::mod_hot_reload::reload_changed_clutter::closure$7
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod_hot_reload.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::mod_hot_reload::reload_changed_clutter::closure$7
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod_hot_reload.rs
   Extent: 137 */

void pdb_14173c440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2;
  uVar3 = param_3;
  lVar1 = pdb_140f2cc80();
  uVar2 = pdb_141ae5340(*(longlong *)(lVar1 + 0x18) + 0x10,param_2,param_3,param_4,uVar2,uVar3);
  pdb_14090e320(uVar2);
  return;
}

