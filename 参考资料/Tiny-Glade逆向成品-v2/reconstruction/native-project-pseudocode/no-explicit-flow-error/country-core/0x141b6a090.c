// VA 0x141b6a090, PDB extent 610 bytes
// serde_json::ser::impl$3::serialize_struct_variant<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::ser::impl$3::serialize_struct_variant<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 610 */

void pdb_141b6a090(undefined1 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  plVar2 = (longlong *)*param_2;
  lVar3 = param_2[3];
  lVar1 = lVar3 + 1;
  param_2[3] = lVar1;
  *(undefined1 *)(param_2 + 4) = 0;
  lVar8 = plVar2[2];
  if (*plVar2 == lVar8) {
    pdb_142d7f1b0(plVar2,lVar8,1,1,1);
    lVar8 = plVar2[2];
  }
  *(undefined1 *)(plVar2[1] + lVar8) = 0x7b;
  lVar8 = lVar8 + 1;
  plVar2[2] = lVar8;
  if (*plVar2 == lVar8) {
    pdb_142d7f1b0(plVar2,lVar8,1,1,1);
    lVar8 = plVar2[2];
  }
  *(undefined1 *)(plVar2[1] + lVar8) = 10;
  lVar8 = lVar8 + 1;
  plVar2[2] = lVar8;
  if (lVar1 != 0) {
    uVar4 = param_2[2];
    if (uVar4 == 0) {
      plVar2[2] = lVar8;
    }
    else {
      lVar5 = param_2[1];
      lVar9 = lVar1;
      do {
        if ((ulonglong)(*plVar2 - lVar8) < uVar4) {
          pdb_142d7f1b0(plVar2,lVar8,uVar4,1,1);
          lVar8 = plVar2[2];
        }
        pub_142e32760(plVar2[1] + lVar8,lVar5,uVar4);
        lVar8 = lVar8 + uVar4;
        plVar2[2] = lVar8;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  lVar8 = pdb_14054e5c0(param_2,param_2 + 1,param_3,param_4);
  if (lVar8 == 0) {
    lVar8 = plVar2[2];
    if ((ulonglong)(*plVar2 - lVar8) < 2) {
      pdb_142d7f1b0(plVar2,lVar8,2,1,1);
      lVar8 = plVar2[2];
    }
    *(undefined2 *)(plVar2[1] + lVar8) = 0x203a;
    lVar8 = lVar8 + 2;
    plVar2[2] = lVar8;
    param_2[3] = lVar3 + 2;
    *(undefined1 *)(param_2 + 4) = 0;
    if (*plVar2 == lVar8) {
      pdb_142d7f1b0(plVar2,lVar8,1,1,1);
      lVar8 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar8) = 0x7b;
    lVar8 = lVar8 + 1;
    plVar2[2] = lVar8;
    uVar6 = 1;
    if (param_5 == 0) {
      param_2[3] = lVar1;
      if (*plVar2 == lVar8) {
        pdb_142d7f1b0(plVar2,lVar8,1,1,1);
        lVar8 = plVar2[2];
      }
      *(undefined1 *)(plVar2[1] + lVar8) = 0x7d;
      plVar2[2] = lVar8 + 1;
      uVar6 = 0;
    }
    *param_1 = 0;
    param_1[1] = uVar6;
    *(longlong **)(param_1 + 8) = param_2;
  }
  else {
    uVar7 = pdb_142db8fb0(lVar8);
    *(undefined8 *)(param_1 + 8) = uVar7;
    *param_1 = 2;
  }
  return;
}

