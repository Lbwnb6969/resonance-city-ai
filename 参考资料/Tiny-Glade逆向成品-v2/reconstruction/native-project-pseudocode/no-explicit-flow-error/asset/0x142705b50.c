// VA 0x142705b50, PDB extent 131 bytes
// asset::prefab::config::_::impl$0::deserialize::impl$2::visit_map::impl$5::deserialize<serde::private::de::content::ContentRefDeserializer<enum2$<ron::error::Error> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::prefab::config::_::impl$0::deserialize::impl$2::visit_map::impl$5::deserialize<serde::private::de::content::ContentRefDeserializer<enum2$<ron::error::Error>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
   Extent: 131 */

char * pdb_142705b50(char *param_1,undefined8 param_2)

{
  char cStack_50;
  char cStack_4f;
  undefined8 uStack_4e;
  undefined8 uStack_46;
  undefined8 uStack_3e;
  undefined8 uStack_36;
  undefined8 uStack_2e;
  undefined8 uStack_26;
  undefined8 uStack_1e;
  undefined6 uStack_16;
  undefined2 uStack_10;
  undefined6 uStack_e;
  
  pdb_1427062a0(&cStack_50,param_2,&UNK_143589a1d,0xe,&UNK_143589840,2);
  if (cStack_50 != '2') {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_e,uStack_10);
    *(undefined8 *)(param_1 + 0x32) = uStack_1e;
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_10,uStack_16);
    *(undefined8 *)(param_1 + 0x22) = uStack_2e;
    *(undefined8 *)(param_1 + 0x2a) = uStack_26;
    *(undefined8 *)(param_1 + 0x12) = uStack_3e;
    *(undefined8 *)(param_1 + 0x1a) = uStack_36;
    *(undefined8 *)(param_1 + 2) = uStack_4e;
    *(undefined8 *)(param_1 + 10) = uStack_46;
  }
  param_1[1] = cStack_4f;
  *param_1 = cStack_50;
  return param_1;
}

