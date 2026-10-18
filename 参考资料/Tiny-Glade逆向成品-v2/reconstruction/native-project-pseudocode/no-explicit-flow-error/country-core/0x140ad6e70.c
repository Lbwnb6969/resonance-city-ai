// VA 0x140ad6e70, PDB extent 177 bytes
// country_core::systems::mod_editor::ModEditor::close
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mod_editor::ModEditor::close
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 177 */

void pdb_140ad6e70(ulonglong *param_1)

{
  ulonglong arg1;
  longlong lVar1;
  
  lVar1 = 2;
  if (1 < *param_1) {
    lVar1 = *param_1 - 2;
  }
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      if (param_1[1] != 0) {
        pub_1406abac0((byte *)param_1[2],param_1[1],1);
      }
      arg1 = param_1[4];
      if ((!SBORROW8(0,arg1)) && (arg1 != 0)) {
        pub_1406abac0((byte *)param_1[5],arg1,1);
      }
    }
    else {
      pdb_140991de0(param_1);
    }
  }
  *param_1 = 2;
  return;
}

