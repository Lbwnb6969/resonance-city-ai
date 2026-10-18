// VA 0x141829ce0, PDB extent 236 bytes
// country_core::startup::load_mesh_atlases::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mesh_atlases.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::load_mesh_atlases::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mesh_atlases.rs
   Extent: 236 */

undefined2 * pdb_141829ce0(undefined2 *param_1,int *param_2,longlong param_3)

{
  if (param_3 == 5) {
    if ((char)param_2[1] == '2' && *param_2 == 0x78323346) {
      *param_1 = 0x232;
      return param_1;
    }
    if ((char)param_2[1] == '3' && *param_2 == 0x78323346) {
      *param_1 = 0x332;
      return param_1;
    }
    if ((char)param_2[1] == '4' && *param_2 == 0x78323346) {
      *param_1 = 0x432;
      return param_1;
    }
  }
  else if (param_3 == 3) {
    if (*(char *)((longlong)param_2 + 2) == '2' && (short)*param_2 == 0x3349) {
      *param_1 = 0x32;
      return param_1;
    }
    if (*(char *)((longlong)param_2 + 2) == '2' && (short)*param_2 == 0x3346) {
      *param_1 = 0x132;
      return param_1;
    }
  }
  pdb_142db7e70();
  return param_1;
}

