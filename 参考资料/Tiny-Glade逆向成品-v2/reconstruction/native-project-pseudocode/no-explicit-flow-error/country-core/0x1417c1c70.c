// VA 0x1417c1c70, PDB extent 172 bytes
// country_core::resources::walls::decorator::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 172 */

void pdb_1417c1c70(undefined1 *param_1,int *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 3) {
    if (*(char *)((longlong)param_2 + 2) != 'w' || (short)*param_2 != 0x6f4c) {
LAB_1417c1cea:
      uVar1 = pdb_142d8f140(param_2,param_3,&UNK_143336cf0,4);
      *(undefined8 *)(param_1 + 8) = uVar1;
      *param_1 = 1;
      return;
    }
    param_1[1] = 1;
  }
  else if (param_3 == 4) {
    if (*param_2 == 0x656e6f4e) {
      param_1[1] = 0;
    }
    else {
      if (*param_2 != 0x68676948) goto LAB_1417c1cea;
      param_1[1] = 2;
    }
  }
  else {
    if ((param_3 != 6) || ((short)param_2[1] != 0x6e65 || *param_2 != 0x646f6f57))
    goto LAB_1417c1cea;
    param_1[1] = 3;
  }
  *param_1 = 0;
  return;
}

