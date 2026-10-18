// VA 0x14198ea80, PDB extent 283 bytes
// country_core::resources::roofs::roof_shape::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::roofs::roof_shape::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 283 */

void pdb_14198ea80(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 2:
    if ((short)*param_2 == 0x6469) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x736d && (int)*param_2 == 0x61726170) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x795f746f && (int)*param_2 == 0x6f766970) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x64695f726f6c6f63) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6570 && *param_2 == 0x6168735f6c6c6177) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x656c7974735f656c && *param_2 == 0x74735f656c626167
       ) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x656c7974735f666f && *param_2 == 0x6f6f725f74616c66
       ) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 7;
  *param_1 = 0;
  return;
}

