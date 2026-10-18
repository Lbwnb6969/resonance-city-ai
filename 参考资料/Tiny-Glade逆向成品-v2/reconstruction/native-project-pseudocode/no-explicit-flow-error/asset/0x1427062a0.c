// VA 0x1427062a0, PDB extent 143 bytes
// serde::private::de::content::impl$41::deserialize_enum<enum2$<ron::error::Error>,asset::prefab::config::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde::private::de::content::impl$41::deserialize_enum<enum2$<ron::error::Error>,asset::prefab::config::_::impl$0::deserialize::__Visitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
   Extent: 143 */

undefined8 pdb_1427062a0(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  undefined1 auStack_28 [24];
  
  if (*param_2 - 0xc < 2) {
    pbVar1 = (byte *)0x0;
  }
  else {
    if (*param_2 != 0x15) {
      pdb_142e24800(auStack_28);
      pdb_142db7ac0(param_1,auStack_28,&UNK_143589b48,&UNK_143589b18);
      return param_1;
    }
    if (*(longlong *)(param_2 + 0x18) != 1) {
      auStack_28[0] = 0xb;
      pdb_142db7ad0(param_1,auStack_28,&UNK_143589b08,&UNK_143589b18);
      return param_1;
    }
    param_2 = *(byte **)(param_2 + 0x10);
    pbVar1 = param_2 + 0x20;
  }
  pdb_142704d60(param_1,param_2,pbVar1);
  return param_1;
}

