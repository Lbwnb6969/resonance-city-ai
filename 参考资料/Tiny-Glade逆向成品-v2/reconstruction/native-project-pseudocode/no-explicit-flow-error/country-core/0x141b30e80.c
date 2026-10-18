// VA 0x141b30e80, PDB extent 190 bytes
// country_core::resources::terrain_stroke::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_stroke.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::terrain_stroke::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_stroke.rs
   Extent: 190 */

void pdb_141b30e80(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'x' && (int)*param_2 == 0x65646e69) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7374 && (int)*param_2 == 0x6e696f70) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (*(short *)((longlong)param_2 + 4) == 0x7468 && (int)*param_2 == 0x67696568) {
code_r0x000141b30f09:
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x66666f6c && (int)*param_2 == 0x6c6c6166) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 's' && *param_2 == 0x775f746867696568) goto code_r0x000141b30f09;
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}

