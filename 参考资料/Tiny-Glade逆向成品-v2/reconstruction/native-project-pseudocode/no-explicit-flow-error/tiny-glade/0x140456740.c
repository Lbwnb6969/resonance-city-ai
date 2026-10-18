// VA 0x140456740, PDB extent 143 bytes
// serde::private::de::content::impl$41::deserialize_enum<enum2$<ron::error::Error>,bevy_input::keyboard::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde::private::de::content::impl$41::deserialize_enum<enum2$<ron::error::Error>,bevy_input::keyboard::_::impl$0::deserialize::__Visitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 143 */

undefined8 pdb_140456740(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  undefined1 auStack_28 [24];
  
  if (*param_2 - 0xc < 2) {
    pbVar1 = (byte *)0x0;
  }
  else {
    if (*param_2 != 0x15) {
      pdb_142d85630(auStack_28);
      pdb_142db7ac0(param_1,auStack_28,&UNK_142f5a328,&UNK_142f5a2f8);
      return param_1;
    }
    if (*(longlong *)(param_2 + 0x18) != 1) {
      auStack_28[0] = 0xb;
      pdb_142db7ad0(param_1,auStack_28,&UNK_142f5a2e8,&UNK_142f5a2f8);
      return param_1;
    }
    param_2 = *(byte **)(param_2 + 0x10);
    pbVar1 = param_2 + 0x20;
  }
  pdb_1403f37a0(param_1,param_2,pbVar1);
  return param_1;
}

