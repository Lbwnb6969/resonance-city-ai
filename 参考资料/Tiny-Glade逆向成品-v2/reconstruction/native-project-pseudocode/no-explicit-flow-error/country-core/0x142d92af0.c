// VA 0x142d92af0, PDB extent 77 bytes
// country_core::resources::walls::decorator_storage::_::impl$0::deserialize<serde::private::de::missing_field::MissingFieldDeserializer<serde_json::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::_::impl$0::deserialize<serde::private::de::missing_field::MissingFieldDeserializer<serde_json::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 77 */

undefined8 * pdb_142d92af0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 *puStack_18;
  code *pcStack_10;
  
  puStack_18 = &uStack_28;
  pcStack_10 = pdb_1402ed400;
  uStack_28 = param_2;
  uStack_20 = param_3;
  uVar1 = pdb_142d872f0(&UNK_143044fe5,&puStack_18);
  param_1[1] = uVar1;
  *param_1 = 3;
  return param_1;
}

