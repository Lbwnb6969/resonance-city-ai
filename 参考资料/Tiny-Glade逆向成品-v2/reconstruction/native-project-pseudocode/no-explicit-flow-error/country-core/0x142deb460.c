// VA 0x142deb460, PDB extent 76 bytes
// country_core::systems::wall::valid_enclosure::_::impl$0::deserialize<serde::private::de::missing_field::MissingFieldDeserializer<serde_json::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::_::impl$0::deserialize<serde::private::de::missing_field::MissingFieldDeserializer<serde_json::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 76 */

undefined4 * pdb_142deb460(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

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
  *(undefined8 *)(param_1 + 2) = uVar1;
  *param_1 = 1;
  return param_1;
}

