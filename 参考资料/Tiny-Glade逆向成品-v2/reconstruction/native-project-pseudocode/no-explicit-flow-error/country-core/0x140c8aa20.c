// VA 0x140c8aa20, PDB extent 226 bytes
// country_core::resources::clutter_packs::ClutterPackObject::id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::clutter_packs::ClutterPackObject::id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
   Extent: 226 */

undefined8 pdb_140c8aa20(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined *puStack_70;
  code *pcStack_68;
  longlong *plStack_60;
  code *pcStack_58;
  undefined4 *puStack_50;
  code *pcStack_48;
  ulonglong uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  longlong lStack_28;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  plStack_60 = &lStack_28;
  uStack_18 = 0xfffffffffffffffe;
  uStack_80 = *(undefined4 *)(param_1 + 0x28);
  uStack_7c = *(undefined4 *)(param_1 + 0x2c);
  uStack_78 = *(undefined4 *)(param_1 + 0x30);
  uStack_74 = *(undefined4 *)(param_1 + 0x34);
  lStack_28 = param_1 + 0x58;
  puStack_70 = &UNK_14306af28;
  pcStack_68 = pdb_1402ed400;
  pcStack_58 = pdb_141304770;
  puStack_50 = &uStack_80;
  pcStack_48 = pdb_1402ed400;
  pdb_140f60760(&uStack_40,&UNK_14306af50,&puStack_70);
  pbStack_20 = pbStack_38;
  uVar1 = pdb_140e940b0(pbStack_38,uStack_30);
  if (uStack_40 != 0) {
    pub_1406abac0(pbStack_20,uStack_40,1);
  }
  return uVar1;
}

