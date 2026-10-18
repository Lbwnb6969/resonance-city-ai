// VA 0x141adbc30, PDB extent 225 bytes
// country_core::resources::walls::inner_wall_state::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::inner_wall_state::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
   Extent: 225 */

void pdb_141adbc30(undefined1 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  switch(param_3) {
  case 5:
    if (*(char *)((longlong)param_2 + 4) != 'e' || (int)*param_2 != 0x6e6f7453) goto LAB_141adbcdf;
    param_1[1] = 0;
    goto code_r0x000141adbcd5;
  default:
    goto LAB_141adbcdf;
  case 0xc:
    uVar2 = *param_2 ^ 0x626d6954666c6148;
    uVar3 = (ulonglong)(uint)param_2[1] ^ 0x64657265;
    break;
  case 0xd:
    uVar2 = *param_2 ^ 0x6e41656c74746157;
    uVar3 = *(ulonglong *)((longlong)param_2 + 5) ^ 0x62756144646e4165;
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x737472696b536874 && *param_2 == 0x746957656e6f7453
       ) {
      param_1[1] = 1;
      goto code_r0x000141adbcd5;
    }
    goto LAB_141adbcdf;
  }
  if (uVar3 == 0 && uVar2 == 0) {
    param_1[1] = 2;
code_r0x000141adbcd5:
    *param_1 = 0;
    return;
  }
LAB_141adbcdf:
  uVar1 = pdb_142d8f140(param_2,param_3,&UNK_143389038,4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}

