// VA 0x14052db80, PDB extent 200 bytes
// country_core::resources::ui_settings::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ui_settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::ui_settings::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ui_settings.rs
   Extent: 200 */

undefined2 * pdb_14052db80(undefined2 *param_1,int *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 3:
    if (*(char *)((longlong)param_2 + 2) == 'p' && (short)*param_2 == 0x6f54) {
      *param_1 = 0x332;
      return param_1;
    }
    break;
  case 4:
    if (*param_2 == 0x7466654c) {
      *param_1 = 0x132;
      return param_1;
    }
    break;
  case 5:
    if ((char)param_2[1] == 't' && *param_2 == 0x68676952) {
      *param_1 = 0x232;
      return param_1;
    }
    break;
  case 6:
    if ((short)param_2[1] == 0x6d6f && *param_2 == 0x74746f42) {
      *param_1 = 0x32;
      return param_1;
    }
  }
  pdb_142db7e70();
  return param_1;
}

