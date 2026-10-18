// VA 0x141b6e820, PDB extent 292 bytes
// country_core::systems::mode_manager::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::mode_manager::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 292 */

void pdb_141b6e820(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x656e6f4e) {
      param_1[1] = 0;
    }
    else if ((int)*param_2 == 0x6c6c6157) {
      param_1[1] = 1;
    }
    else {
      if ((int)*param_2 != 0x666f6f52) goto LAB_141b6e912;
      param_1[1] = 2;
    }
    break;
  default:
LAB_141b6e912:
    uVar1 = pdb_142d8f140(param_2,param_3,&UNK_143397cb0,7);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *param_1 = 1;
    return;
  case 7:
    if (*(int *)((longlong)param_2 + 3) != 0x6e696172 || (int)*param_2 != 0x72726554)
    goto LAB_141b6e912;
    param_1[1] = 6;
    break;
  case 9:
    if ((char)param_2[1] != 'p' || *param_2 != 0x756f72476c6c6157) goto LAB_141b6e912;
    param_1[1] = 3;
    break;
  case 10:
    if ((short)param_2[1] != 0x746e || *param_2 != 0x696f507269617453) goto LAB_141b6e912;
    param_1[1] = 5;
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) != 0x72657474756c436f || *param_2 != 0x74756c436f636544
       ) goto LAB_141b6e912;
    param_1[1] = 4;
  }
  *param_1 = 0;
  return;
}

