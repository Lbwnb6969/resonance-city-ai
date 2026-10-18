// VA 0x140bd6830, PDB extent 381 bytes
// country_core::resources::history::path_edit::impl$1::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/path_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::path_edit::impl$1::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/path_edit.rs
   Extent: 381 */

ulonglong * pdb_140bd6830(ulonglong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  code *pcVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  plVar10 = *(longlong **)(param_2 + 2);
  uVar5 = *(ulonglong *)(param_2 + 4);
  if (uVar5 == 0) {
    pbVar7 = (byte *)0x4;
    goto LAB_140bd6906;
  }
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(uVar5 * 0xc,4);
  if (pbVar7 == (byte *)0x0) {
    pdb_142dc7e2a(4,uVar5 * 0xc);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (uVar5 == 1) {
    uVar8 = 0;
LAB_140bd68e9:
    lVar9 = uVar8 * 0xc;
    *(undefined4 *)(pbVar7 + lVar9 + 8) = *(undefined4 *)((longlong)plVar10 + lVar9 + 0x18);
    *(undefined8 *)(pbVar7 + lVar9) = *(undefined8 *)((longlong)plVar10 + lVar9 + 0x10);
  }
  else {
    uVar8 = 0;
    lVar9 = 0;
    do {
      *(undefined4 *)(pbVar7 + lVar9 + 8) = *(undefined4 *)((longlong)plVar10 + lVar9 + 0x18);
      *(undefined8 *)(pbVar7 + lVar9) = *(undefined8 *)((longlong)plVar10 + lVar9 + 0x10);
      *(undefined8 *)(pbVar7 + lVar9 + 0xc) = *(undefined8 *)((longlong)plVar10 + lVar9 + 0x1c);
      *(undefined4 *)(pbVar7 + lVar9 + 0x14) = *(undefined4 *)((longlong)plVar10 + lVar9 + 0x24);
      uVar8 = uVar8 + 2;
      lVar9 = lVar9 + 0x18;
    } while ((uVar5 & 0xfffffffffffffffe) != uVar8);
    if ((uVar5 & 1) != 0) goto LAB_140bd68e9;
  }
  plVar10 = *(longlong **)(param_2 + 2);
LAB_140bd6906:
  uVar3 = *(undefined1 *)(param_2 + 7);
  uVar1 = param_2[6];
  uVar4 = *param_2;
  uVar2 = param_2[1];
  *param_1 = uVar5;
  param_1[1] = (ulonglong)pbVar7;
  param_1[2] = uVar5;
  *(undefined1 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  LOCK();
  *plVar10 = *plVar10 + -1;
  UNLOCK();
  if (*plVar10 == 0) {
    pdb_140c79ee0(param_2 + 2);
  }
  return param_1;
}

