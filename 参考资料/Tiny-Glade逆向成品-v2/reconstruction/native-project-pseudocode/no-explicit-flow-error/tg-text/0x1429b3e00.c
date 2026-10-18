// VA 0x1429b3e00, PDB extent 314 bytes
// tg_text::shape_stream::_::impl$0::deserialize::impl$2::visit_enum<ron::de::Enum>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tg_text::shape_stream::_::impl$0::deserialize::impl$2::visit_enum<ron::de::Enum>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
   Extent: 314 */

char * pdb_1429b3e00(char *param_1)

{
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  pdb_14230cbf0(&uStack_50);
  if ((char)uStack_50 != '2') {
    *(undefined4 *)(param_1 + 4) = uStack_4c;
    *(uint *)(param_1 + 1) = CONCAT13((undefined1)uStack_4c,uStack_50._1_3_);
    *(undefined4 *)(param_1 + 0xc) = uStack_44;
    *(uint *)(param_1 + 9) = CONCAT13((undefined1)uStack_44,uStack_48._1_3_);
    *(undefined8 *)(param_1 + 0x28) = uStack_28;
    *(undefined8 *)(param_1 + 0x30) = uStack_20;
    *(undefined8 *)(param_1 + 0x38) = uStack_18;
    *(undefined8 *)(param_1 + 0x40) = uStack_10;
    *(undefined8 *)(param_1 + 0x18) = uStack_38;
    *(undefined8 *)(param_1 + 0x20) = uStack_30;
    *param_1 = (char)uStack_50;
    param_1[8] = (char)uStack_48;
    *(undefined8 *)(param_1 + 0x10) = uStack_40;
    return param_1;
  }
  if ((char)uStack_48 == '\0') {
    pdb_14230f240(&uStack_50,uStack_40);
    if ((char)uStack_50 != '2') goto LAB_1429b3f05;
    param_1[8] = '\x02';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = -0x80;
    *(undefined4 *)(param_1 + 0x10) = uStack_4c;
  }
  else {
    if ((char)uStack_48 == '\x01') {
      pdb_14230d350(param_1,uStack_40,&UNK_14360c5a0,2);
      return param_1;
    }
    pdb_14230ef40(&uStack_50);
    if ((char)uStack_50 != '2') {
LAB_1429b3f05:
      *(undefined8 *)(param_1 + 0x40) = uStack_10;
      *(undefined8 *)(param_1 + 0x30) = uStack_20;
      *(undefined8 *)(param_1 + 0x38) = uStack_18;
      *(undefined8 *)(param_1 + 0x20) = uStack_30;
      *(undefined8 *)(param_1 + 0x28) = uStack_28;
      *(undefined8 *)(param_1 + 0x10) = uStack_40;
      *(undefined8 *)(param_1 + 0x18) = uStack_38;
      *(ulonglong *)param_1 = CONCAT44(uStack_4c,uStack_50);
      *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_44,uStack_48);
      return param_1;
    }
    param_1[8] = '\x04';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = -0x80;
    *(undefined4 *)(param_1 + 0x10) = uStack_4c;
  }
  *param_1 = '2';
  return param_1;
}

