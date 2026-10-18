// VA 0x1429b3f40, PDB extent 211 bytes
// tg_text::shape_stream::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tg_text::shape_stream::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
   Extent: 211 */

undefined2 * pdb_1429b3f40(undefined2 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x656e694e) {
      *param_1 = 0x332;
      return param_1;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x68637465 && (int)*param_2 == 0x65727453) {
      *param_1 = 0x32;
      return param_1;
    }
    break;
  case 9:
    if ((char)param_2[1] == 't' && *param_2 == 0x6867696548746946) {
      *param_1 = 0x132;
      return param_1;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x646e && *param_2 == 0x6574784572756c42) {
      *param_1 = 0x232;
      return param_1;
    }
  }
  pdb_142db7e70();
  return param_1;
}

