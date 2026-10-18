// VA 0x140a934c0, PDB extent 164 bytes
// country_core::resources::session::refresh_session_list
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::session::refresh_session_list
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 164 */

void pdb_140a934c0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong lStack_28;
  
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  param_1 = (longlong *)*param_1;
  uVar2 = *param_2;
  uVar6 = pdb_140dc74f0();
  pdb_140a93620(&uStack_38,uVar6,param_2);
  if (*param_1 != 0) {
    pub_1406abac0((byte *)param_1[1],*param_1 * 0x1c,4);
  }
  param_1[2] = lStack_28;
  *(undefined4 *)param_1 = uStack_38;
  *(undefined4 *)((longlong)param_1 + 4) = uStack_34;
  *(undefined4 *)(param_1 + 1) = uStack_30;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_2c;
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    lVar4 = param_1[1];
    lVar7 = lVar4;
    do {
      lVar1 = lVar7 + 0x1c;
      uVar5 = pdb_140b7e9a0(lVar7,uVar2);
      *(undefined1 *)(lVar7 + 0x18) = uVar5;
      lVar7 = lVar1;
    } while (lVar1 != lVar3 * 0x1c + lVar4);
  }
  return;
}

