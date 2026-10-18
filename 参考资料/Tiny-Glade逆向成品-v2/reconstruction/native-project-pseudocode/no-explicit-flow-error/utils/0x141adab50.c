// VA 0x141adab50, PDB extent 315 bytes
// utils::geometry::rectangle::_::impl$0::deserialize::impl$0::visit_bytes<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::geometry::rectangle::_::impl$0::deserialize::impl$0::visit_bytes<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 315 */

void pdb_141adab50(undefined1 *param_1,char *param_2,longlong param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  if (param_3 == 5) {
    if ((((*param_2 == 'w') && (param_2[1] == 'i')) && (param_2[2] == 'd')) && (param_2[3] == 't'))
    {
      uVar2 = 1;
      cVar1 = param_2[4];
joined_r0x000141adac3c:
      if (cVar1 == 'h') goto LAB_141adac84;
    }
  }
  else if (param_3 == 6) {
    cVar1 = *param_2;
    if (cVar1 == 'c') {
      if (((param_2[1] == 'e') && (param_2[2] == 'n')) &&
         ((param_2[3] == 't' && ((param_2[4] == 'e' && (uVar2 = 3, param_2[5] == 'r'))))))
      goto LAB_141adac84;
    }
    else if (cVar1 == 'o') {
      if ((((param_2[1] == 'r') && (param_2[2] == 'i')) && (param_2[3] == 'g')) &&
         ((param_2[4] == 'i' && (uVar2 = 3, param_2[5] == 'n')))) goto LAB_141adac84;
    }
    else if (((cVar1 == 'l') && ((param_2[1] == 'e' && (param_2[2] == 'n')))) &&
            ((param_2[3] == 'g' && (param_2[4] == 't')))) {
      uVar2 = 2;
      cVar1 = param_2[5];
      goto joined_r0x000141adac3c;
    }
  }
  else if (((((((param_3 == 0xb) && (*param_2 == 'o')) && (param_2[1] == 'r')) &&
             ((param_2[2] == 'i' && (param_2[3] == 'e')))) &&
            ((param_2[4] == 'n' && ((param_2[5] == 't' && (param_2[6] == 'a')))))) &&
           (param_2[7] == 't')) &&
          (((param_2[8] == 'i' && (param_2[9] == 'o')) && (param_2[10] == 'n')))) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  uVar2 = 4;
LAB_141adac84:
  param_1[1] = uVar2;
  *param_1 = 0;
  return;
}

