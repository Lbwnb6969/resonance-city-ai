// VA 0x1427052d0, PDB extent 296 bytes
// asset::prefab::config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::prefab::config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
   Extent: 296 */

undefined2 * pdb_1427052d0(undefined2 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x6873656d) {
      *param_1 = 0x32;
      return param_1;
    }
    break;
  case 8:
    if (*param_2 == 0x6369746e616d6573) {
      *param_1 = 0x532;
      return param_1;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x656c && *param_2 == 0x6163735f6873656d) {
      *param_1 = 0x132;
      return param_1;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x6f6465626c615f72 && *param_2 == 0x615f72656d6d7573
       ) {
      *param_1 = 0x232;
      return param_1;
    }
    if (*(longlong *)((longlong)param_2 + 5) == 0x6f6465626c615f6e && *param_2 == 0x615f6e6d75747561
       ) {
      *param_1 = 0x332;
      return param_1;
    }
    if (*(longlong *)((longlong)param_2 + 5) == 0x6f6465626c615f72 && *param_2 == 0x615f7265746e6977
       ) {
      *param_1 = 0x432;
      return param_1;
    }
  }
  pdb_142db7cc0();
  return param_1;
}

