// VA 0x1417c1a60, PDB extent 352 bytes
// country_core::resources::walls::decorator::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 352 */

void pdb_1417c1a60(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 != 0x67616c46) goto LAB_1417c1b8e;
    param_1[1] = 5;
    break;
  default:
LAB_1417c1b8e:
    uVar1 = pdb_142d8f140(param_2,param_3,&UNK_143336b38,8);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *param_1 = 1;
    return;
  case 6:
    if (*(short *)((longlong)param_2 + 4) != 0x7372 || (int)*param_2 != 0x69617453)
    goto LAB_1417c1b8e;
    param_1[1] = 7;
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x79656e6d && (int)*param_2 == 0x6d696843) {
      param_1[1] = 3;
    }
    else if (*(int *)((longlong)param_2 + 3) == 0x6e726574 && (int)*param_2 == 0x746e614c) {
      param_1[1] = 4;
    }
    else {
      if (*(int *)((longlong)param_2 + 3) != 0x72657474 || (int)*param_2 != 0x74756c43)
      goto LAB_1417c1b8e;
      param_1[1] = 6;
    }
    break;
  case 9:
    if ((char)param_2[1] != 't' || *param_2 != 0x696c53776f727241) goto LAB_1417c1b8e;
    param_1[1] = 2;
    break;
  case 0xc:
    if ((int)param_2[1] != 0x776f646e || *param_2 != 0x6957636968746f47) goto LAB_1417c1b8e;
    param_1[1] = 1;
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) != 0x776f646e69576567 || *param_2 != 0x5765676174746f43
       ) goto LAB_1417c1b8e;
    param_1[1] = 0;
  }
  *param_1 = 0;
  return;
}

