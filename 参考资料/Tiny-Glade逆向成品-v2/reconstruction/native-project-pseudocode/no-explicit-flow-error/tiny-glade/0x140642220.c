// VA 0x140642220, PDB extent 269 bytes
// tiny_glade::crash_pickup::crash_payload::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::crash_pickup::crash_payload::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
   Extent: 269 */

void pdb_140642220(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'c' && (int)*param_2 == 0x696e6150) {
      param_1[1] = 0;
code_r0x0001406422f1:
      *param_1 = 0;
      return;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x6761 && (int)*param_2 == 0x54746553) {
      param_1[1] = 3;
      goto code_r0x0001406422f1;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x7478 && *param_2 == 0x65746e6f43746553) {
      param_1[1] = 4;
      goto code_r0x0001406422f1;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x6f666e49 && *param_2 == 0x7363696870617247) {
      param_1[1] = 2;
      goto code_r0x0001406422f1;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x64657265766f6365 && *param_2 == 0x6365526873617243
       ) {
      param_1[1] = 1;
      goto code_r0x0001406422f1;
    }
  }
  uVar1 = pdb_142d86e40(param_2,param_3,&UNK_142f8b848,5);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}

