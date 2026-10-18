// VA 0x142705a90, PDB extent 189 bytes
// asset::prefab::config::_::impl$0::deserialize::impl$2::visit_map::impl$2::deserialize<serde::private::de::content::ContentRefDeserializer<enum2$<ron::error::Error> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::prefab::config::_::impl$0::deserialize::impl$2::visit_map::impl$2::deserialize<serde::private::de::content::ContentRefDeserializer<enum2$<ron::error::Error>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
   Extent: 189 */

char * pdb_142705a90(char *param_1,undefined8 param_2)

{
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  char cStack_50;
  undefined2 uStack_4f;
  char cStack_4d;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  undefined8 uStack_14;
  undefined4 uStack_c;
  
  pdb_1427066c0(&cStack_50,param_2,3);
  if (cStack_50 == '2') {
    uStack_60 = uStack_4c;
    uStack_5c = uStack_48;
    uStack_58 = uStack_44;
    uStack_4c = 2;
  }
  else {
    param_1[3] = cStack_4d;
    *(undefined2 *)(param_1 + 1) = uStack_4f;
    uStack_58 = uStack_40;
    *(undefined4 *)(param_1 + 0x44) = uStack_c;
    *(undefined8 *)(param_1 + 0x34) = uStack_1c;
    *(undefined8 *)(param_1 + 0x3c) = uStack_14;
    *(undefined8 *)(param_1 + 0x24) = uStack_2c;
    *(undefined8 *)(param_1 + 0x2c) = uStack_24;
    *(undefined8 *)(param_1 + 0x14) = uStack_3c;
    *(undefined8 *)(param_1 + 0x1c) = uStack_34;
    uStack_60 = uStack_48;
    uStack_5c = uStack_44;
  }
  *(undefined4 *)(param_1 + 4) = uStack_4c;
  *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_5c,uStack_60);
  *(undefined4 *)(param_1 + 0x10) = uStack_58;
  *param_1 = cStack_50;
  return param_1;
}

