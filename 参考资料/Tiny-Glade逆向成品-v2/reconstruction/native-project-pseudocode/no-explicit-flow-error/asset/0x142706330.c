// VA 0x142706330, PDB extent 330 bytes
// serde::private::de::content::impl$41::deserialize_enum<enum2$<ron::error::Error>,asset::prefab::config::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde::private::de::content::impl$41::deserialize_enum<enum2$<ron::error::Error>,asset::prefab::config::_::impl$0::deserialize::__Visitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
   Extent: 330 */

char * pdb_142706330(char *param_1,byte *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  undefined1 uStack_59;
  char cStack_58;
  undefined4 uStack_57;
  undefined4 uStack_53;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined7 uStack_1f;
  undefined1 uStack_18;
  undefined7 uStack_17;
  
  if (*param_2 - 0xc < 2) {
    pbVar2 = (byte *)0x0;
  }
  else {
    if (*param_2 != 0x15) {
      pdb_142e24800(&cStack_58);
      pdb_142db7ac0(param_1,&cStack_58,&UNK_143589b48,&UNK_143589b18);
      return param_1;
    }
    if (*(longlong *)(param_2 + 0x18) != 1) {
      cStack_58 = '\v';
      pdb_142db7ad0(param_1,&cStack_58,&UNK_143589b08,&UNK_143589b18);
      return param_1;
    }
    param_2 = *(byte **)(param_2 + 0x10);
    pbVar2 = param_2 + 0x20;
  }
  pdb_142706130(&cStack_58,param_2,pbVar2);
  if (cStack_58 == '2') {
    pcVar1 = (char *)CONCAT71(uStack_4f,uStack_53._3_1_);
    if (((pcVar1 != (char *)0x0) && (*pcVar1 != '\x12')) &&
       (pdb_142e24910(&cStack_58,pcVar1,&uStack_59,&UNK_143589b58), cStack_58 != '2')) {
      *(ulonglong *)(param_1 + 0x40) = CONCAT71(uStack_17,uStack_18);
      *(ulonglong *)(param_1 + 0x31) = CONCAT17(uStack_20,uStack_27);
      *(ulonglong *)(param_1 + 0x39) = CONCAT17(uStack_18,uStack_1f);
      *(ulonglong *)(param_1 + 0x21) = CONCAT17(uStack_30,uStack_37);
      *(ulonglong *)(param_1 + 0x29) = CONCAT17(uStack_28,uStack_2f);
      *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_40,uStack_47);
      *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_38,uStack_3f);
      *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_53,uStack_57);
      *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_48,uStack_4f);
      *param_1 = cStack_58;
      return param_1;
    }
    *param_1 = '2';
  }
  else {
    *(uint *)(param_1 + 4) = CONCAT31((undefined3)uStack_53,uStack_57._3_1_);
    *(undefined4 *)(param_1 + 1) = uStack_57;
    *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_37,uStack_38);
    *(ulonglong *)(param_1 + 0x28) = CONCAT71(uStack_2f,uStack_30);
    *(ulonglong *)(param_1 + 0x30) = CONCAT71(uStack_27,uStack_28);
    *(ulonglong *)(param_1 + 0x38) = CONCAT71(uStack_1f,uStack_20);
    *(ulonglong *)(param_1 + 0x40) = CONCAT71(uStack_17,uStack_18);
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_47,uStack_48);
    *(ulonglong *)(param_1 + 0x18) = CONCAT71(uStack_3f,uStack_40);
    *param_1 = cStack_58;
    *(ulonglong *)(param_1 + 8) = CONCAT71(uStack_4f,uStack_53._3_1_);
  }
  return param_1;
}

