// VA 0x141c6f450, PDB extent 193 bytes
// country_core::resources::ui_settings::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ui_settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::ui_settings::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ui_settings.rs
   Extent: 193 */

void pdb_141c6f450(undefined1 *param_1,int *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 3:
    if (*(char *)((longlong)param_2 + 2) == 'p' && (short)*param_2 == 0x6f54) {
      param_1[1] = 3;
code_r0x000141c6f4d5:
      *param_1 = 0;
      return;
    }
    break;
  case 4:
    if (*param_2 == 0x7466654c) {
      param_1[1] = 1;
      goto code_r0x000141c6f4d5;
    }
    break;
  case 5:
    if ((char)param_2[1] == 't' && *param_2 == 0x68676952) {
      param_1[1] = 2;
      goto code_r0x000141c6f4d5;
    }
    break;
  case 6:
    if ((short)param_2[1] == 0x6d6f && *param_2 == 0x74746f42) {
      param_1[1] = 0;
      goto code_r0x000141c6f4d5;
    }
  }
  uVar1 = pdb_142d8f140(param_2,param_3,&UNK_1433a3368,4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}

