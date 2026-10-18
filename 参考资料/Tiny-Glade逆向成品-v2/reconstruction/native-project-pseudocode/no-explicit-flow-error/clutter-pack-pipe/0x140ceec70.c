// VA 0x140ceec70, PDB extent 264 bytes
// clutter_pack_pipe::impl$52::resolve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::impl$52::resolve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 264 */

void pdb_140ceec70(longlong param_1,uint *param_2,int *param_3,ulonglong param_4)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 uVar9;
  
  if (*(ulonglong *)(param_1 + 0x20) < 9) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    param_3[0] = -1;
    param_3[1] = -1;
    pub_142e32760(param_3,uVar3);
LAB_140ceecd2:
    lVar7 = param_4 - (longlong)param_3;
    pdb_141c36ef0(param_1,param_3 + 4,(longlong)param_3 + lVar7 + 0x10);
    uVar6 = (longlong)param_3 + lVar7 + 0x20;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = param_2[1] - uVar6;
    uVar9 = lVar5 < 0;
    if (uVar6 <= param_2[1]) {
      if (!(bool)uVar9) goto LAB_140ceed04;
      goto LAB_140ceed56;
    }
    if (!(bool)uVar9) goto LAB_140ceed56;
LAB_140ceed04:
    if ((int)lVar5 != lVar5) {
      pdb_142df6ce0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    param_3[8] = (int)lVar5;
    param_3[9] = (int)uVar3;
    piVar1 = param_3 + 10;
    if (*(ulonglong *)(param_1 + 0x50) < 9) {
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      piVar1[0] = -1;
      piVar1[1] = -1;
      pub_142e32760(piVar1,uVar3);
      goto LAB_140ceed60;
    }
    uVar2 = param_2[2];
    uVar8 = (uint)*(ulonglong *)(param_1 + 0x50);
    *piVar1 = (uVar8 & 0x3f) + (uVar8 & 0xffffffc0) * 4 + 0x80;
    lVar5 = (ulonglong)uVar2 - (lVar7 + (longlong)piVar1);
    uVar9 = lVar5 < 0;
    if ((ulonglong)(lVar7 + (longlong)piVar1) <= (ulonglong)uVar2) goto LAB_140ceed5b;
    if (!(bool)uVar9) goto LAB_140ceed56;
  }
  else {
    uVar2 = *param_2;
    uVar8 = (uint)*(ulonglong *)(param_1 + 0x20);
    *param_3 = (uVar8 & 0x3f) + (uVar8 & 0xffffffc0) * 4 + 0x80;
    lVar5 = uVar2 - param_4;
    uVar9 = lVar5 < 0;
    if (uVar2 < param_4) {
      if ((bool)uVar9) {
LAB_140ceeccf:
        param_3[1] = (int)lVar5;
        goto LAB_140ceecd2;
      }
    }
    else if (!(bool)uVar9) goto LAB_140ceeccf;
LAB_140ceed56:
    do {
      lVar5 = pdb_142df6ca0();
LAB_140ceed5b:
    } while ((bool)uVar9);
  }
  param_3[0xb] = (int)lVar5;
LAB_140ceed60:
  *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(param_1 + 0x58);
  return;
}

