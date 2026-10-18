// VA 0x1423212b0, PDB extent 201 bytes
// tg_text::font_table::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/font_table.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tg_text::font_table::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/font_table.rs
   Extent: 201 */

undefined2 * pdb_1423212b0(undefined2 *param_1,longlong *param_2,longlong param_3)

{
  if (param_3 == 5) {
    if (*(char *)((longlong)param_2 + 4) == 'l' && (int)*param_2 == 0x6562614c) {
      *param_1 = 0x32;
      return param_1;
    }
  }
  else if (param_3 == 10) {
    if ((short)param_2[1] == 0x6e6f && *param_2 == 0x74747542756e654d) {
      *param_1 = 0x132;
      return param_1;
    }
    if ((short)param_2[1] == 0x726f && *param_2 == 0x7469644574786554) {
      *param_1 = 0x232;
      return param_1;
    }
  }
  else if ((param_3 == 4) && ((int)*param_2 == 0x646e6148)) {
    *param_1 = 0x332;
    return param_1;
  }
  pdb_142db7e70();
  return param_1;
}

