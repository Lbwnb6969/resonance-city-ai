// VA 0x142705530, PDB extent 188 bytes
// asset::prefab::config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::prefab::config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
   Extent: 188 */

undefined2 * pdb_142705530(undefined2 *param_1,int *param_2,longlong param_3)

{
  if (param_3 == 2) {
    if ((short)*param_2 == 0x7472) {
      *param_1 = 0x232;
      return param_1;
    }
  }
  else if (param_3 == 6) {
    if ((short)param_2[1] == 0x6574 && *param_2 == 0x656c6564) {
      *param_1 = 0x32;
      return param_1;
    }
    if ((short)param_2[1] == 0x7265 && *param_2 == 0x646e6572) {
      *param_1 = 0x132;
      return param_1;
    }
  }
  else if ((param_3 == 5) && ((char)param_2[1] == 'o' && *param_2 == 0x69647561)) {
    *param_1 = 0x332;
    return param_1;
  }
  pdb_142db7cc0();
  return param_1;
}

