// VA 0x140c26ac0, PDB extent 226 bytes
// country_core::resources::clutter_registry::ClutterId::mod_item
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::clutter_registry::ClutterId::mod_item
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
   Extent: 226 */

undefined8 pdb_140c26ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_80;
  code *pcStack_78;
  undefined8 *puStack_70;
  code *pcStack_68;
  undefined8 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  puStack_70 = &uStack_28;
  uStack_18 = 0xfffffffffffffffe;
  puStack_80 = &UNK_14306af28;
  pcStack_78 = pdb_1402ed400;
  pcStack_68 = pdb_141304770;
  puStack_60 = &uStack_50;
  pcStack_58 = pdb_1402ed400;
  uStack_50 = param_2;
  uStack_48 = param_3;
  uStack_28 = param_1;
  pdb_140f60760(&uStack_40,&UNK_14306af50,&puStack_80);
  pbStack_20 = pbStack_38;
  uVar1 = pdb_140e940b0(pbStack_38,uStack_30);
  if (uStack_40 != 0) {
    pub_1406abac0(pbStack_20,uStack_40,1);
  }
  return uVar1;
}

