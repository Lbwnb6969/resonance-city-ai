// VA 0x1429b4130, PDB extent 136 bytes
// tg_text::shape_stream::_::impl$0::deserialize<ref_mut$<ron::de::tag::Deserializer> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tg_text::shape_stream::_::impl$0::deserialize<ref_mut$<ron::de::tag::Deserializer> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
   Extent: 136 */

undefined8 * pdb_1429b4130(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  char cStack_50;
  undefined7 uStack_4f;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  pdb_1423153f0(&cStack_50,*param_2);
  if (cStack_50 == '2') {
    uStack_58 = uStack_38;
    uStack_68 = uStack_48;
    uStack_64 = uStack_44;
    uStack_60 = uStack_40;
    uStack_5c = uStack_3c;
    pdb_1406ccf20(param_1 + 1,&uStack_68);
    *(undefined1 *)param_1 = 0x32;
    return param_1;
  }
  param_1[8] = uStack_10;
  param_1[6] = uStack_20;
  param_1[7] = uStack_18;
  param_1[4] = uStack_30;
  param_1[5] = uStack_28;
  param_1[2] = CONCAT44(uStack_3c,uStack_40);
  param_1[3] = uStack_38;
  *param_1 = CONCAT71(uStack_4f,cStack_50);
  param_1[1] = CONCAT44(uStack_44,uStack_48);
  return param_1;
}

