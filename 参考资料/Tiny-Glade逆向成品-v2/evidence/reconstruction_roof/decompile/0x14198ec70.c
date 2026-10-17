// Matched PDB: country_core::resources::roofs::roof_shape::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// VA 0x14198ec70, PDB extent 423 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   country_core::resources::roofs::roof_shape::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Extent: 423 bytes. No whole-program auto-analysis. */

void pdb_14198ec70(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7468 && (int)*param_2 == 0x67696568) {
code_r0x00014198ee05:
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x656c6966 && (int)*param_2 == 0x666f7270) {
code_r0x00014198edfc:
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == '1' && *param_2 == 0x305f746867696568) goto code_r0x00014198ee05;
    if ((char)param_2[1] == 'r' && *param_2 == 0x69645f6567646972) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x3130 && *param_2 == 0x5f656c69666f7270) goto code_r0x00014198edfc;
    if ((short)param_2[1] == 0x7465 && *param_2 == 0x7366666f5f706974) goto code_r0x00014198edca;
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x31305f7465736666 && *param_2 == 0x7366666f5f706974
       ) {
code_r0x00014198edca:
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x31305f6874676e65 && *param_2 == 0x6e656c5f65766165
       ) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 6) == 0x656c7974735f6d69 && *param_2 == 0x6d69725f74616c66
       ) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x31305f6874676e65 && *param_2 == 0x656c5f6567646972
       ) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 7;
  *param_1 = 0;
  return;
}

