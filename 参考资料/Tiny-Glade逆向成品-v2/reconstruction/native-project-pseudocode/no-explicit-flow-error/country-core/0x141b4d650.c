// VA 0x141b4d650, PDB extent 147 bytes
// serde::private::de::content::impl$41::deserialize_enum<serde_json::error::Error,country_core::systems::wall::valid_enclosure::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde::private::de::content::impl$41::deserialize_enum<serde_json::error::Error,country_core::systems::wall::valid_enclosure::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 147 */

undefined4 * pdb_141b4d650(undefined4 *param_1,byte *param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  undefined1 auStack_28 [24];
  
  if (*param_2 - 0xc < 2) {
    pbVar2 = (byte *)0x0;
LAB_141b4d680:
    pdb_1417c1bc0(param_1,param_2,pbVar2);
  }
  else {
    if (*param_2 == 0x15) {
      if (*(longlong *)(param_2 + 0x18) == 1) {
        param_2 = *(byte **)(param_2 + 0x10);
        pbVar2 = param_2 + 0x20;
        goto LAB_141b4d680;
      }
      auStack_28[0] = 0xb;
      uVar1 = pdb_142db9150(auStack_28,&UNK_1433966e8,&UNK_1433966f8);
    }
    else {
      pdb_142deec70(auStack_28);
      uVar1 = pdb_142db90e0(auStack_28,&UNK_143396728,&UNK_1433966f8);
    }
    *(undefined8 *)(param_1 + 2) = uVar1;
    *param_1 = 1;
  }
  return param_1;
}

