// VA 0x140bbed20, PDB extent 165 bytes
// utils::geometry::circle::_::impl$0::deserialize::impl$0::visit_bytes<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::geometry::circle::_::impl$0::deserialize::impl$0::visit_bytes<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 165 */

void pdb_140bbed20(undefined1 *param_1,char *param_2,longlong param_3)

{
  undefined1 uVar1;
  
  if (param_3 == 8) {
    if ((((*param_2 == 'r') && (param_2[1] == 'o')) && (param_2[2] == 't')) &&
       (((param_2[3] == 'a' && (param_2[4] == 't')) &&
        ((param_2[5] == 'i' && ((param_2[6] == 'o' && (uVar1 = 2, param_2[7] == 'n'))))))))
    goto LAB_140bbedbe;
  }
  else if (param_3 == 6) {
    if (*param_2 == 'c') {
      if ((((param_2[1] == 'e') && (param_2[2] == 'n')) && (param_2[3] == 't')) &&
         ((param_2[4] == 'e' && (param_2[5] == 'r')))) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if (((*param_2 == 'r') && (param_2[1] == 'a')) &&
            ((param_2[2] == 'd' &&
             (((param_2[3] == 'i' && (param_2[4] == 'u')) && (uVar1 = 1, param_2[5] == 's'))))))
    goto LAB_140bbedbe;
  }
  uVar1 = 3;
LAB_140bbedbe:
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}

