// VA 0x141b31070, PDB extent 483 bytes
// country_core::resources::history::roof_edit::_::impl$0::deserialize::impl$2::visit_enum::impl$6::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/roof_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::roof_edit::_::impl$0::deserialize::impl$2::visit_enum::impl$6::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/roof_edit.rs
   Extent: 483 */

void pdb_141b31070(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 8:
    if (*param_2 == 0x657661655f77656e) {
      param_1[1] = 10;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'e' && *param_2 == 0x7661655f76657270) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    if ((char)param_2[1] == 'e' && *param_2 == 0x676469725f77656e) {
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x7865 && *param_2 == 0x646e695f6c6c6177) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if ((short)param_2[1] == 0x6567 && *param_2 == 0x6469725f76657270) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    if ((short)param_2[1] == 0x7468 && *param_2 == 0x676965685f77656e) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x7468676965685f76 && *param_2 == 0x6965685f76657270
       ) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x656c69666f72705f && *param_2 == 0x666f72705f77656e
       ) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x656c6966 && *param_2 == 0x6f72705f76657270) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x74657366666f5f70 && *param_2 == 0x5f7069745f77656e
       ) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x74657366666f5f70 && *param_2 == 0x7069745f76657270
       ) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 0xb;
  *param_1 = 0;
  return;
}

