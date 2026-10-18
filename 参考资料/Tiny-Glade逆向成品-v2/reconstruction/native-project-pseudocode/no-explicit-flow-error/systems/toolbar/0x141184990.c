// VA 0x141184990, PDB extent 400 bytes
// toolbar::mei::config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 400 */

undefined2 * pdb_141184990(undefined2 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x6e696854) {
      *param_1 = 0x32;
      return param_1;
    }
    if ((int)*param_2 == 0x646c6f42) {
      *param_1 = 0x632;
      return param_1;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 't' && (int)*param_2 == 0x6867694c) {
      *param_1 = 0x232;
      return param_1;
    }
    if (*(char *)((longlong)param_2 + 4) == 'k' && (int)*param_2 == 0x63616c42) {
      *param_1 = 0x832;
      return param_1;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x6c61 && (int)*param_2 == 0x6d726f4e) {
      *param_1 = 0x332;
      return param_1;
    }
    if (*(short *)((longlong)param_2 + 4) == 0x6d75 && (int)*param_2 == 0x6964654d) {
      *param_1 = 0x432;
      return param_1;
    }
    break;
  case 8:
    if (*param_2 == 0x646c6f62696d6553) {
      *param_1 = 0x532;
      return param_1;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'd' && *param_2 == 0x6c6f426172747845) {
      *param_1 = 0x732;
      return param_1;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x7468 && *param_2 == 0x67694c6172747845) {
      *param_1 = 0x132;
      return param_1;
    }
  }
  pdb_142db7e70();
  return param_1;
}

