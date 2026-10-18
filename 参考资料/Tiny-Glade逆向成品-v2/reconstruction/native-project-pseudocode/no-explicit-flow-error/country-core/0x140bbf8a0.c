// VA 0x140bbf8a0, PDB extent 279 bytes
// country_core::resources::glade_color_customization::impl$2::deserialize::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_color_customization.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::glade_color_customization::impl$2::deserialize::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_color_customization.rs
   Extent: 279 */

void pdb_140bbf8a0(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 9:
    if ((char)param_2[1] == 'd' && *param_2 == 0x65666f6f725f7369) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x726f && *param_2 == 0x6c6f635f646f6f77) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if ((short)param_2[1] == 0x7974 && *param_2 == 0x5f676e696c696172) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x726f6c6f635f6369 && *param_2 == 0x6f635f636967616d
       ) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x726f6c6f && *param_2 == 0x635f737269617473) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if ((int)param_2[1] == 0x726f6c6f && *param_2 == 0x635f72656464616c) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 6;
  *param_1 = 0;
  return;
}

