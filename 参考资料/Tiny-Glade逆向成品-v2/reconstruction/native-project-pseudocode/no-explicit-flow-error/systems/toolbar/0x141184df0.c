// VA 0x141184df0, PDB extent 363 bytes
// toolbar::mei::config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 363 */

undefined2 * pdb_141184df0(undefined2 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 3:
    if (*(char *)((longlong)param_2 + 2) == 'p' && (short)*param_2 == 0x6147) {
      *param_1 = 0x632;
      return param_1;
    }
    break;
  case 4:
    if ((int)*param_2 == 0x657a6953) {
      *param_1 = 0x532;
      return param_1;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'n' && (int)*param_2 == 0x67696c41) {
      *param_1 = 0x332;
      return param_1;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x646e && (int)*param_2 == 0x61707845) {
      *param_1 = 0x232;
      return param_1;
    }
    if (*(short *)((longlong)param_2 + 4) == 0x6e67 && (int)*param_2 == 0x696c4158) {
      *param_1 = 0x432;
      return param_1;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x676e6964 && (int)*param_2 == 0x64646150) {
      *param_1 = 0x732;
      return param_1;
    }
    break;
  case 8:
    if (*param_2 == 0x6c61636974726556) {
      *param_1 = 0x132;
      return param_1;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6c61 && *param_2 == 0x746e6f7a69726f48) {
      *param_1 = 0x32;
      return param_1;
    }
  }
  pdb_142db7e70();
  return param_1;
}

