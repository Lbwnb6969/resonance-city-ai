// VA 0x142704d60, PDB extent 287 bytes
// asset::prefab::config::_::impl$0::deserialize::impl$2::visit_enum<serde::private::de::content::EnumRefDeserializer<enum2$<ron::error::Error> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::prefab::config::_::impl$0::deserialize::impl$2::visit_enum<serde::private::de::content::EnumRefDeserializer<enum2$<ron::error::Error>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
   Extent: 287 */

char * pdb_142704d60(char *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined1 uStack_51;
  char cStack_50;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
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
  undefined1 uStack_10;
  undefined7 uStack_f;
  
  pdb_142705df0(&cStack_50);
  if (cStack_50 != '2') {
    *(uint *)(param_1 + 4) = CONCAT31((undefined3)uStack_4b,uStack_4f._3_1_);
    *(undefined4 *)(param_1 + 1) = uStack_4f;
    *(uint *)(param_1 + 0xc) = CONCAT31((undefined3)uStack_43,uStack_47._3_1_);
    *(undefined4 *)(param_1 + 9) = uStack_47;
    *(ulonglong *)(param_1 + 0x28) = CONCAT71(uStack_27,uStack_28);
    *(ulonglong *)(param_1 + 0x30) = CONCAT71(uStack_1f,uStack_20);
    *(ulonglong *)(param_1 + 0x38) = CONCAT71(uStack_17,uStack_18);
    *(ulonglong *)(param_1 + 0x40) = CONCAT71(uStack_f,uStack_10);
    *(ulonglong *)(param_1 + 0x18) = CONCAT71(uStack_37,uStack_38);
    *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_2f,uStack_30);
    *param_1 = cStack_50;
    param_1[8] = uStack_4b._3_1_;
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_3f,uStack_43._3_1_);
    return param_1;
  }
  pcVar1 = (char *)CONCAT71(uStack_3f,uStack_43._3_1_);
  if (uStack_4b._3_1_ == '\x01') {
    if (((pcVar1 != (char *)0x0) && (*pcVar1 != '\x12')) &&
       (pdb_142e24910(&cStack_50,pcVar1,&uStack_51,&UNK_143589b58), cStack_50 != '2')) {
LAB_142704e47:
      *(ulonglong *)(param_1 + 0x40) = CONCAT71(uStack_f,uStack_10);
      *(ulonglong *)(param_1 + 0x31) = CONCAT17(uStack_18,uStack_1f);
      *(ulonglong *)(param_1 + 0x39) = CONCAT17(uStack_10,uStack_17);
      *(ulonglong *)(param_1 + 0x21) = CONCAT17(uStack_28,uStack_2f);
      *(ulonglong *)(param_1 + 0x29) = CONCAT17(uStack_20,uStack_27);
      *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_38,uStack_3f);
      *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_30,uStack_37);
      *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_4b,uStack_4f);
      *(ulonglong *)(param_1 + 9) = CONCAT44(uStack_43,uStack_47);
      *param_1 = cStack_50;
      return param_1;
    }
    cVar2 = '\x01';
  }
  else {
    if (((pcVar1 != (char *)0x0) && (*pcVar1 != '\x12')) &&
       (pdb_142e24910(&cStack_50,pcVar1,&uStack_51,&UNK_143589b58), cStack_50 != '2'))
    goto LAB_142704e47;
    cVar2 = '\0';
  }
  param_1[1] = cVar2;
  *param_1 = '2';
  return param_1;
}

