// VA 0x142de6bf0, PDB extent 274 bytes
// country_core::resources::clutter_registry::impl$3::deserialize::closure$0<serde::private::de::missing_field::MissingFieldDeserializer<serde_json::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_registry::impl$3::deserialize::closure$0<serde::private::de::missing_field::MissingFieldDeserializer<serde_json::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
   Extent: 274 */

undefined8 pdb_142de6bf0(undefined8 param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  byte *pbStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pcStack_40 = pdb_140094770;
  pbStack_50 = param_2;
  uStack_48 = param_1;
  pdb_140f60760(auStack_68,&UNK_14331824c,&uStack_48);
  uStack_38 = uStack_58;
  uVar1 = pdb_142d871f0(&uStack_48);
  pbStack_28 = param_2;
  if (*(longlong *)param_2 == 1) {
    pdb_1404b38e0(param_2 + 8);
  }
  else if ((*(longlong *)param_2 == 0) && (*(ulonglong *)(param_2 + 0x10) != 0)) {
    pub_1406abac0(*(byte **)(param_2 + 8),*(ulonglong *)(param_2 + 0x10),1);
  }
  pub_1406abac0(pbStack_28,0x28,8);
  return uVar1;
}

