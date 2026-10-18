// VA 0x1406420b0, PDB extent 356 bytes
// tiny_glade::crash_pickup::crash_payload::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::crash_pickup::crash_payload::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
   Extent: 356 */

void pdb_1406420b0(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 3:
    if (*(char *)((longlong)param_2 + 2) == 'g' && (short)*param_2 == 0x6f6c) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 4:
    if ((int)*param_2 == 0x65766173) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7374 && (int)*param_2 == 0x75706e69) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x656c6966 && (int)*param_2 == 0x666f7270) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x73676e6974746573) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x746f && *param_2 == 0x68736e6565726373) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x73626d7572636461 && *param_2 == 0x7572636461657262
       ) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x7265646c6f665f74 && *param_2 == 0x665f74726f706572
       ) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x706d75645f687361 && *param_2 == 0x736172635f757067
       ) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 9;
  *param_1 = 0;
  return;
}

