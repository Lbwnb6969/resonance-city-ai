// VA 0x1411b50d0, PDB extent 214 bytes
// toolbar::mei::layout::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::layout::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
   Extent: 214 */

undefined2 * pdb_1411b50d0(undefined2 *param_1,int *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 3:
    if (*(char *)((longlong)param_2 + 2) == 'd' && (short)*param_2 == 0x6e45) {
      *param_1 = 0x332;
      return param_1;
    }
    break;
  case 5:
    if ((char)param_2[1] == 't' && *param_2 == 0x72617453) {
      *param_1 = 0x132;
      return param_1;
    }
    break;
  case 6:
    if ((short)param_2[1] == 0x7265 && *param_2 == 0x746e6543) {
      *param_1 = 0x232;
      return param_1;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x68637465 && *param_2 == 0x65727453) {
      *param_1 = 0x32;
      return param_1;
    }
  }
  pdb_142db7e70();
  return param_1;
}

