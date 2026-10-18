// VA 0x141adac90, PDB extent 193 bytes
// utils::geometry::rectangle::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::geometry::rectangle::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 193 */

void pdb_141adac90(undefined1 *param_1,longlong *param_2,longlong param_3)

{
  undefined1 uVar1;
  
  if (param_3 == 5) {
    if (*(char *)((longlong)param_2 + 4) == 'h' && (int)*param_2 == 0x74646977) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 6) {
    if (*(short *)((longlong)param_2 + 4) == 0x6874 && (int)*param_2 == 0x676e656c) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    uVar1 = 3;
    if ((*(short *)((longlong)param_2 + 4) == 0x7265 && (int)*param_2 == 0x746e6563) ||
       (*(short *)((longlong)param_2 + 4) == 0x6e69 && (int)*param_2 == 0x6769726f))
    goto LAB_141adaccf;
  }
  else if ((param_3 == 0xb) &&
          (*(longlong *)((longlong)param_2 + 3) == 0x6e6f697461746e65 &&
           *param_2 == 0x7461746e6569726f)) {
    uVar1 = 0;
LAB_141adaccf:
    param_1[1] = uVar1;
    *param_1 = 0;
    return;
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}

