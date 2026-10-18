// VA 0x141b31350, PDB extent 217 bytes
// country_core::resources::history::roof_edit::_::impl$0::deserialize::impl$2::visit_enum::impl$3::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/roof_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::roof_edit::_::impl$0::deserialize::impl$2::visit_enum::impl$3::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/roof_edit.rs
   Extent: 217 */

void pdb_141b31350(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x736d && (int)*param_2 == 0x61726170) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x64695f726f6c6f63) {
      param_1[1] = 2;
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
    break;
  case 0xc:
    if ((int)param_2[1] == 0x736d6172 && *param_2 == 0x61705f6570616873) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x656c7974735f666f && *param_2 == 0x6f6f725f74616c66
       ) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}

