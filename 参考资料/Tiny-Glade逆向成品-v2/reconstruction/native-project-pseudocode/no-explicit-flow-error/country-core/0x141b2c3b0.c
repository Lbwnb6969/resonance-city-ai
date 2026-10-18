// VA 0x141b2c3b0, PDB extent 517 bytes
// serde_json::ser::impl$3::serialize_struct_variant<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::ser::impl$3::serialize_struct_variant<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 517 */

void pdb_141b2c3b0(undefined1 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)*param_2;
  lVar2 = param_2[3];
  lVar7 = lVar2 + 1;
  param_2[3] = lVar7;
  *(undefined1 *)(param_2 + 4) = 0;
  lVar6 = plVar1[2];
  if (*plVar1 == lVar6) {
    pdb_142d7f1b0(plVar1,lVar6,1,1,1);
    lVar6 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar6) = 0x7b;
  lVar6 = lVar6 + 1;
  plVar1[2] = lVar6;
  if (*plVar1 == lVar6) {
    pdb_142d7f1b0(plVar1,lVar6,1,1,1);
    lVar6 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar6) = 10;
  lVar6 = lVar6 + 1;
  plVar1[2] = lVar6;
  if (lVar7 != 0) {
    uVar3 = param_2[2];
    if (uVar3 == 0) {
      plVar1[2] = lVar6;
    }
    else {
      lVar4 = param_2[1];
      do {
        if ((ulonglong)(*plVar1 - lVar6) < uVar3) {
          pdb_142d7f1b0(plVar1,lVar6,uVar3,1,1);
          lVar6 = plVar1[2];
        }
        pub_142e32760(plVar1[1] + lVar6,lVar4,uVar3);
        lVar6 = lVar6 + uVar3;
        plVar1[2] = lVar6;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  lVar7 = pdb_14054e5c0(param_2,param_2 + 1,param_3,param_4);
  if (lVar7 == 0) {
    lVar7 = plVar1[2];
    if ((ulonglong)(*plVar1 - lVar7) < 2) {
      pdb_142d7f1b0(plVar1,lVar7,2,1,1);
      lVar7 = plVar1[2];
    }
    *(undefined2 *)(plVar1[1] + lVar7) = 0x203a;
    lVar7 = lVar7 + 2;
    plVar1[2] = lVar7;
    param_2[3] = lVar2 + 2;
    *(undefined1 *)(param_2 + 4) = 0;
    if (*plVar1 == lVar7) {
      pdb_142d7f1b0(plVar1,lVar7,1,1,1);
      lVar7 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar7) = 0x7b;
    plVar1[2] = lVar7 + 1;
    param_1[1] = 1;
    uVar5 = 0;
  }
  else {
    param_2 = (longlong *)pdb_142db8fb0(lVar7);
    uVar5 = 2;
  }
  *param_1 = uVar5;
  *(longlong **)(param_1 + 8) = param_2;
  return;
}

