// VA 0x141184b20, PDB extent 299 bytes
// toolbar::mei::config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 299 */

undefined2 * pdb_141184b20(undefined2 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x74786574) {
      *param_1 = 0x32;
      return param_1;
    }
    if ((int)*param_2 == 0x746e6f66) {
      *param_1 = 0x332;
      return param_1;
    }
    if ((int)*param_2 == 0x657a6973) {
      *param_1 = 0x432;
      return param_1;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'r' && (int)*param_2 == 0x6f6c6f63) {
      *param_1 = 0x132;
      return param_1;
    }
    if (*(char *)((longlong)param_2 + 4) == 'n' && (int)*param_2 == 0x67696c61) {
      *param_1 = 0x232;
      return param_1;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7468 && (int)*param_2 == 0x67696577) {
      *param_1 = 0x632;
      return param_1;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'h' && *param_2 == 0x746469775f78616d) {
      *param_1 = 0x532;
      return param_1;
    }
  }
  pdb_142db7cc0();
  return param_1;
}

