// VA 0x141184890, PDB extent 249 bytes
// toolbar::mei::config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 249 */

undefined2 * pdb_141184890(undefined2 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 3:
    if (*(char *)((longlong)param_2 + 2) == 'd' && (short)*param_2 == 0x6e45) {
      *param_1 = 0x432;
      return param_1;
    }
    break;
  case 4:
    if ((int)*param_2 == 0x7466654c) {
      *param_1 = 0x32;
      return param_1;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 't' && (int)*param_2 == 0x68676952) {
      *param_1 = 0x132;
      return param_1;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7265 && (int)*param_2 == 0x746e6543) {
      *param_1 = 0x232;
      return param_1;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'd' && *param_2 == 0x656966697473754a) {
      *param_1 = 0x332;
      return param_1;
    }
  }
  pdb_142db7e70();
  return param_1;
}

