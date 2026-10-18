// VA 0x141b57340, PDB extent 226 bytes
// country_core::resources::walls::_::impl$0::deserialize::impl$0::visit_newtype_struct<serde::private::de::content::ContentRefDeserializer<serde_json::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::_::impl$0::deserialize::impl$0::visit_newtype_struct<serde::private::de::content::ContentRefDeserializer<serde_json::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/mod.rs
   Extent: 226 */

undefined8 pdb_141b57340(undefined1 *param_1)

{
  undefined1 uStack_19;
  undefined1 auStack_18 [8];
  longlong lStack_10;
  
  switch(*param_1) {
  case 1:
    return 0;
  case 2:
    return 0;
  case 3:
    return 0;
  case 4:
    return 0;
  case 5:
    lStack_10 = (longlong)(char)param_1[1];
    if (-1 < lStack_10) {
      return 0;
    }
    break;
  case 6:
    lStack_10 = (longlong)*(short *)(param_1 + 2);
    if (-1 < lStack_10) {
      return 0;
    }
    break;
  case 7:
    lStack_10 = (longlong)*(int *)(param_1 + 4);
    if (-1 < lStack_10) {
      return 0;
    }
    break;
  case 8:
    lStack_10 = *(longlong *)(param_1 + 8);
    if (-1 < lStack_10) {
      return 0;
    }
    break;
  default:
    pdb_142deedc0(param_1,&uStack_19,&UNK_143396ab8);
    return 1;
  }
  auStack_18[0] = 2;
  pdb_142db9150(auStack_18,&uStack_19,&UNK_143396ab8);
  return 1;
}

