// VA 0x14014e040, PDB extent 263 bytes
// country_core::game_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::game_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
   Extent: 263 */

void pdb_14014e040(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 2:
    if ((short)*param_2 == 0x6975) {
      param_1[1] = 2;
      *param_1 = 0x32;
      return;
    }
    break;
  case 3:
    if (*(char *)((longlong)param_2 + 2) == 'v' && (short)*param_2 == 0x6564) {
      param_1[1] = 3;
      *param_1 = 0x32;
      return;
    }
    break;
  case 4:
    if ((int)*param_2 == 0x656d6167) {
      param_1[1] = 4;
      *param_1 = 0x32;
      return;
    }
    if ((int)*param_2 == 0x676e616c) {
code_r0x00014014e12c:
      param_1[1] = 5;
      *param_1 = 0x32;
      return;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'o' && (int)*param_2 == 0x65646976) {
      param_1[1] = 0;
      *param_1 = 0x32;
      return;
    }
    if (*(char *)((longlong)param_2 + 4) == 'o' && (int)*param_2 == 0x69647561) {
      param_1[1] = 1;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x656469727265766f && *param_2 == 0x65766f5f676e616c
       ) goto code_r0x00014014e12c;
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x676e616c5f657469 && *param_2 == 0x746972777265766f
       ) goto code_r0x00014014e12c;
  }
  param_1[1] = 6;
  *param_1 = 0x32;
  return;
}

