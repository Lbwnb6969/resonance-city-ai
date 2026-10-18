// VA 0x1419507a0, PDB extent 193 bytes
// country_core::resources::history::terrain_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/terrain_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::terrain_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/terrain_edit.rs
   Extent: 193 */

void pdb_1419507a0(undefined1 *param_1,longlong *param_2,undefined8 param_3)

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
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7468 && (int)*param_2 == 0x67696568) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 's' && *param_2 == 0x775f746867696568) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x7374 && *param_2 == 0x705f656b6f727473) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 3;
  *param_1 = 0;
  return;
}

