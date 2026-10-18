// VA 0x140a7a400, PDB extent 154 bytes
// country_core::resources::history::plant_paint_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/plant_paint_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::plant_paint_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/plant_paint_edit.rs
   Extent: 154 */

void pdb_140a7a400(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 2:
    if ((short)*param_2 == 0x7974) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'e' && (int)*param_2 == 0x73617265) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'z' && *param_2 == 0x785f73746e696f70) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x73756964 && *param_2 == 0x61725f6873757262) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}

