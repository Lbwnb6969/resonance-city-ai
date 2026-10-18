// VA 0x141b6e950, PDB extent 250 bytes
// country_core::systems::mode_manager::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::mode_manager::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 250 */

void pdb_141b6e950(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 3:
    if (*(char *)((longlong)param_2 + 2) != 'l' || (short)*param_2 != 0x6c41) goto LAB_141b6ea18;
    param_1[1] = 0;
    break;
  case 4:
    if ((int)*param_2 == 0x6c6c6157) {
      param_1[1] = 1;
    }
    else if ((int)*param_2 == 0x68746150) {
      param_1[1] = 2;
    }
    else {
      if ((int)*param_2 != 0x65657254) goto LAB_141b6ea18;
      param_1[1] = 6;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) != 'r' || (int)*param_2 != 0x65746157) goto LAB_141b6ea18;
    param_1[1] = 4;
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) != 0x6e65 || (int)*param_2 != 0x64726147)
    goto LAB_141b6ea18;
    param_1[1] = 5;
    break;
  default:
LAB_141b6ea18:
    uVar1 = pdb_142d8f140(param_2,param_3,&UNK_143397d20,7);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *param_1 = 1;
    return;
  case 8:
    if (*param_2 != 0x657a6f646c6c7542) goto LAB_141b6ea18;
    param_1[1] = 3;
  }
  *param_1 = 0;
  return;
}

