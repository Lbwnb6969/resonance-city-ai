// VA 0x141950870, PDB extent 337 bytes
// country_core::resources::history::terrain_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/terrain_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::terrain_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/terrain_edit.rs
   Extent: 337 */

void pdb_141950870(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 2:
    if ((short)*param_2 == 0x6469) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'x' && (int)*param_2 == 0x65646e69) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x7468 && *param_2 == 0x676965685f77656e) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x7468676965685f76 && *param_2 == 0x6965685f76657270
       ) {
code_r0x0001419509af:
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x66666f6c6c61665f && *param_2 == 0x6c6c61665f77656e
       ) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x66666f6c && *param_2 == 0x6c61665f76657270) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x73775f7468676965 && *param_2 == 0x676965685f77656e
       ) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x73775f7468676965 && *param_2 == 0x6965685f76657270
       ) goto code_r0x0001419509af;
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}

