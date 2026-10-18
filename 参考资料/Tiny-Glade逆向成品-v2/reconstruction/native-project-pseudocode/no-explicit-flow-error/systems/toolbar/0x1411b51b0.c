// VA 0x1411b51b0, PDB extent 376 bytes
// toolbar::mei::layout::_::impl$0::deserialize::impl$2::visit_enum<serde::private::de::content::EnumRefDeserializer<enum2$<ron::error::Error> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::layout::_::impl$0::deserialize::impl$2::visit_enum<serde::private::de::content::EnumRefDeserializer<enum2$<ron::error::Error>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
   Extent: 376 */

char * pdb_1411b51b0(char *param_1)

{
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 auStack_20 [24];
  
  pdb_1423668d0(&uStack_68);
  if ((char)uStack_68 != '2') {
    *(undefined4 *)(param_1 + 4) = uStack_64;
    *(uint *)(param_1 + 1) = CONCAT13((undefined1)uStack_64,uStack_68._1_3_);
    *(undefined4 *)(param_1 + 0xc) = uStack_5c;
    *(uint *)(param_1 + 9) = CONCAT13((undefined1)uStack_5c,uStack_60._1_3_);
    *(undefined8 *)(param_1 + 0x28) = uStack_40;
    *(undefined8 *)(param_1 + 0x30) = uStack_38;
    *(undefined8 *)(param_1 + 0x38) = uStack_30;
    *(undefined8 *)(param_1 + 0x40) = uStack_28;
    *(undefined8 *)(param_1 + 0x18) = uStack_50;
    *(undefined8 *)(param_1 + 0x20) = uStack_48;
    *param_1 = (char)uStack_68;
    param_1[8] = (char)uStack_60;
    *(longlong *)(param_1 + 0x10) = lStack_58;
    return param_1;
  }
  if ((char)uStack_60 == '\x01') {
    if (lStack_58 == 0) {
      auStack_20[0] = 0xd;
      pdb_142db7ac0(&uStack_68,auStack_20,&UNK_1434dcb98,&UNK_1434dcb28);
    }
    else {
      pdb_142366aa0(&uStack_68);
    }
    if ((char)uStack_68 != '2') {
LAB_1411b52f0:
      *(undefined8 *)(param_1 + 0x40) = uStack_28;
      *(undefined8 *)(param_1 + 0x30) = uStack_38;
      *(undefined8 *)(param_1 + 0x38) = uStack_30;
      *(undefined8 *)(param_1 + 0x20) = uStack_48;
      *(undefined8 *)(param_1 + 0x28) = uStack_40;
      *(longlong *)(param_1 + 0x10) = lStack_58;
      *(undefined8 *)(param_1 + 0x18) = uStack_50;
      *(ulonglong *)param_1 = CONCAT44(uStack_64,uStack_68);
      *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_5c,uStack_60);
      return param_1;
    }
    param_1[4] = '\x01';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  else {
    if (lStack_58 == 0) {
      auStack_20[0] = 0xd;
      pdb_142db7ac0(&uStack_68,auStack_20,&UNK_1434dcb98,&UNK_1434dcb28);
    }
    else {
      pdb_142366aa0(&uStack_68);
    }
    if ((char)uStack_68 != '2') goto LAB_1411b52f0;
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  *(undefined4 *)(param_1 + 8) = uStack_64;
  *param_1 = '2';
  return param_1;
}

