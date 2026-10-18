// VA 0x1417c1fe0, PDB extent 203 bytes
// country_core::systems::wall::valid_enclosure::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 203 */

void pdb_1417c1fe0(undefined1 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  switch(param_3) {
  case 2:
    if ((short)*param_2 != 0x6f4e) goto LAB_1417c2079;
    param_1[1] = 0;
    goto code_r0x0001417c206f;
  case 3:
    if (*(char *)((longlong)param_2 + 2) == 's' && (short)*param_2 == 0x6559) {
      param_1[1] = 1;
      goto code_r0x0001417c206f;
    }
  default:
    goto LAB_1417c2079;
  case 0xc:
    uVar2 = *param_2 ^ 0x536564616d657250;
    uVar3 = (ulonglong)(uint)param_2[1] ^ 0x65706168;
    break;
  case 0xe:
    uVar2 = *param_2 ^ 0x636e4564696c6156;
    uVar3 = *(ulonglong *)((longlong)param_2 + 6) ^ 0x657275736f6c636e;
  }
  if (uVar3 == 0 && uVar2 == 0) {
    param_1[1] = 2;
code_r0x0001417c206f:
    *param_1 = 0;
    return;
  }
LAB_1417c2079:
  uVar1 = pdb_142d8f140(param_2,param_3,&UNK_1433368f0,4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}

