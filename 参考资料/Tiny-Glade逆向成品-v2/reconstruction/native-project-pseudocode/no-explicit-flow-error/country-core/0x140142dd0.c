// VA 0x140142dd0, PDB extent 158 bytes
// country_core::render::render_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::render_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 158 */

undefined2 * pdb_140142dd0(undefined2 *param_1,int *param_2,longlong param_3)

{
  if (param_3 == 3) {
    if (*(char *)((longlong)param_2 + 2) == 'a' && (short)*param_2 == 0x6154) {
LAB_140142e16:
      *param_1 = 0x32;
      return param_1;
    }
  }
  else if (param_3 == 4) {
    if (*param_2 == 0x656e6f4e) goto LAB_140142e16;
    if (*param_2 == 0x72736754) {
      *param_1 = 0x132;
      return param_1;
    }
  }
  else if ((param_3 == 5) && ((char)param_2[1] == '2' && *param_2 == 0x72736754)) {
    *param_1 = 0x232;
    return param_1;
  }
  pdb_142db7e70();
  return param_1;
}

