// VA 0x140bbf130, PDB extent 195 bytes
// country_core::resources::history::decorator_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::decorator_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
   Extent: 195 */

void pdb_140bbf130(undefined1 *param_1,int *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 5) {
    if ((char)param_2[1] != 'e' || *param_2 != 0x63616c50) goto LAB_140bbf1c1;
    param_1[1] = 1;
  }
  else {
    if (param_3 != 6) {
LAB_140bbf1c1:
      uVar1 = pdb_142d8f140(param_2,param_3,&UNK_143062b30,4);
      *(undefined8 *)(param_1 + 8) = uVar1;
      *param_1 = 1;
      return;
    }
    if ((short)param_2[1] == 0x6567 && *param_2 == 0x6e616843) {
      param_1[1] = 0;
    }
    else if ((short)param_2[1] == 0x6576 && *param_2 == 0x6f6d6552) {
      param_1[1] = 2;
    }
    else {
      if ((short)param_2[1] != 0x6574 || *param_2 != 0x61746f52) goto LAB_140bbf1c1;
      param_1[1] = 3;
    }
  }
  *param_1 = 0;
  return;
}

