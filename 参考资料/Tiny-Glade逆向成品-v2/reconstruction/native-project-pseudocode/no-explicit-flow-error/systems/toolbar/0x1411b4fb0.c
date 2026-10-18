// VA 0x1411b4fb0, PDB extent 275 bytes
// toolbar::mei::layout::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::layout::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
   Extent: 275 */

undefined2 * pdb_1411b4fb0(undefined2 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 3:
    if (*(char *)((longlong)param_2 + 2) == 'd' && (short)*param_2 == 0x6e45) {
      *param_1 = 0x232;
      return param_1;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 't' && (int)*param_2 == 0x72617453) {
      *param_1 = 0x32;
      return param_1;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7265 && (int)*param_2 == 0x746e6543) {
      *param_1 = 0x132;
      return param_1;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x796c6e6576456563 && *param_2 == 0x6576456563617053
       ) {
      *param_1 = 0x432;
      return param_1;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x6e656577 && *param_2 == 0x7465426563617053) {
      *param_1 = 0x332;
      return param_1;
    }
  }
  pdb_142db7e70();
  return param_1;
}

