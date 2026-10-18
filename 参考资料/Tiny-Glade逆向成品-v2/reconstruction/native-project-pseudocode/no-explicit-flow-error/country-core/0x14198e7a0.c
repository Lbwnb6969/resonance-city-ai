// VA 0x14198e7a0, PDB extent 734 bytes
// country_core::resources::history::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 734 */

void pdb_14198e7a0(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x68746150) {
      param_1[1] = 1;
      break;
    }
    if ((int)*param_2 != 0x6c6c6157) {
      if ((int)*param_2 == 0x666f6f52) {
        param_1[1] = 8;
      }
      else {
        if ((int)*param_2 != 0x65657254) goto LAB_14198ea1a;
        param_1[1] = 0xc;
      }
      break;
    }
    goto code_r0x00014198ea0e;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'r' && (int)*param_2 == 0x65746157) {
      param_1[1] = 5;
    }
    else {
      if (*(char *)((longlong)param_2 + 4) != 'r' || (int)*param_2 != 0x6f6c6f43)
      goto LAB_14198ea1a;
      param_1[1] = 9;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x6e65 && (int)*param_2 == 0x64726147) {
      param_1[1] = 6;
    }
    else {
      if (*(short *)((longlong)param_2 + 4) != 0x7372 || (int)*param_2 != 0x69617453)
      goto LAB_14198ea1a;
      param_1[1] = 0xe;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) != 0x6e696172 || (int)*param_2 != 0x72726554)
    goto LAB_14198ea1a;
    param_1[1] = 0;
    break;
  default:
LAB_14198ea1a:
    uVar1 = pdb_142d8f140(param_2,param_3,&UNK_14335c908,0x14);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *param_1 = 1;
    return;
  case 9:
    if ((char)param_2[1] != 'r' || *param_2 != 0x6f7461726f636544) goto LAB_14198ea1a;
    goto code_r0x00014198e81e;
  case 10:
    if ((short)param_2[1] == 0x3572 && *param_2 == 0x6f7461726f636544) goto code_r0x00014198ea14;
    if ((short)param_2[1] != 0x3472 || *param_2 != 0x6f7461726f636544) {
      if ((short)param_2[1] == 0x746e && *param_2 == 0x696150746e616c50) {
        param_1[1] = 0xf;
        break;
      }
      goto LAB_14198ea1a;
    }
    goto code_r0x00014198e81e;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) != 0x3556726f7461726f || *param_2 != 0x6f7461726f636544
       ) {
      if (*(longlong *)((longlong)param_2 + 3) == 0x72657474756c436f &&
          *param_2 == 0x74756c436f747541) {
        param_1[1] = 0xd;
        break;
      }
      goto LAB_14198ea1a;
    }
code_r0x00014198ea14:
    param_1[1] = 10;
    break;
  case 0xc:
    if ((int)param_2[1] == 0x31656e6f && *param_2 == 0x7473656c62626f43) {
      param_1[1] = 2;
      break;
    }
    if ((int)param_2[1] == 0x32656e6f && *param_2 == 0x7473656c62626f43) {
      param_1[1] = 3;
      break;
    }
    if ((int)param_2[1] == 0x33656e6f && *param_2 == 0x7473656c62626f43) {
      param_1[1] = 4;
      break;
    }
    if ((int)param_2[1] != 0x646c4f72 || *param_2 != 0x6f7461726f636544) goto LAB_14198ea1a;
code_r0x00014198e81e:
    param_1[1] = 0xb;
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) != 0x6d65747379537765 || *param_2 != 0x5377654e6c6c6157
       ) goto LAB_14198ea1a;
code_r0x00014198ea0e:
    param_1[1] = 7;
  }
  *param_1 = 0;
  return;
}

