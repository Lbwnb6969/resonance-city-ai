// VA 0x141adb8a0, PDB extent 175 bytes
// country_core::resources::clutter_meshes::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_meshes::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
   Extent: 175 */

void pdb_141adb8a0(undefined1 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 4) {
    if ((int)*param_2 == 0x646f6f46) {
      param_1[1] = 0;
    }
    else {
      if ((int)*param_2 != 0x6c6f6f54) goto LAB_141adb91d;
      param_1[1] = 1;
    }
  }
  else if (param_3 == 6) {
    if (*(short *)((longlong)param_2 + 4) != 0x6572 || (int)*param_2 != 0x7574614e) {
LAB_141adb91d:
      uVar1 = pdb_142d8f140(param_2,param_3,&UNK_143388c48,4);
      *(undefined8 *)(param_1 + 8) = uVar1;
      *param_1 = 1;
      return;
    }
    param_1[1] = 2;
  }
  else {
    if ((param_3 != 9) || ((char)param_2[1] != 'e' || *param_2 != 0x727574696e727546))
    goto LAB_141adb91d;
    param_1[1] = 3;
  }
  *param_1 = 0;
  return;
}

