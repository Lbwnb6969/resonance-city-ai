// VA 0x140ceea30, PDB extent 568 bytes
// clutter_pack_pipe::impl$45::resolve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::impl$45::resolve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 568 */

void pdb_140ceea30(longlong param_1,int *param_2,undefined1 *param_3,longlong param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong lVar7;
  uint uVar8;
  
  if (*param_2 == 1) {
    uVar3 = param_2[1];
    piVar1 = (int *)(param_3 + 4);
    *param_3 = 1;
    if (8 < *(ulonglong *)(param_1 + 0x10)) {
      uVar8 = (uint)*(ulonglong *)(param_1 + 0x10);
      *piVar1 = (uVar8 & 0x3f) + (uVar8 & 0xffffffc0) * 4 + 0x80;
      lVar7 = (ulonglong)uVar3 - (param_4 + 4U);
      if ((ulonglong)uVar3 < param_4 + 4U) {
        if (lVar7 >= 0) goto LAB_140ceec62;
      }
      else if (lVar7 < 0) goto LAB_140ceec62;
      *(int *)(param_3 + 8) = (int)lVar7;
      iVar4 = param_2[2];
      goto joined_r0x000140ceea91;
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    piVar1[0] = -1;
    piVar1[1] = -1;
    pub_142e32760(piVar1,uVar5);
    param_4 = param_4 - (longlong)param_3;
    if (param_2[2] != 1) goto LAB_140ceeb49;
LAB_140ceea97:
    uVar3 = param_2[3];
    piVar1 = (int *)(param_3 + 0x10);
    puVar2 = param_3 + 0xc;
    *puVar2 = 1;
    if (*(ulonglong *)(param_1 + 0x28) < 9) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      piVar1[0] = -1;
      piVar1[1] = -1;
      pub_142e32760(piVar1,uVar5);
      iVar4 = param_2[4];
      goto joined_r0x000140ceeb55;
    }
    uVar8 = (uint)*(ulonglong *)(param_1 + 0x28);
    *piVar1 = (uVar8 & 0x3f) + (uVar8 & 0xffffffc0) * 4 + 0x80;
    lVar7 = (longlong)(ulonglong)uVar3 - (longlong)(puVar2 + param_4 + 4);
    if ((undefined1 *)(ulonglong)uVar3 < puVar2 + param_4 + 4) {
      if (lVar7 >= 0) goto LAB_140ceec62;
    }
    else if (lVar7 < 0) goto LAB_140ceec62;
    *(int *)(param_3 + 0x14) = (int)lVar7;
    if (param_2[4] == 1) goto LAB_140ceeb57;
LAB_140ceebcd:
    param_3[0x18] = 0;
    iVar4 = param_2[6];
  }
  else {
    *param_3 = 0;
    iVar4 = param_2[2];
joined_r0x000140ceea91:
    param_4 = param_4 - (longlong)param_3;
    if (iVar4 == 1) goto LAB_140ceea97;
LAB_140ceeb49:
    param_3[0xc] = 0;
    iVar4 = param_2[4];
joined_r0x000140ceeb55:
    if (iVar4 != 1) goto LAB_140ceebcd;
LAB_140ceeb57:
    uVar3 = param_2[5];
    piVar1 = (int *)(param_3 + 0x1c);
    puVar2 = param_3 + 0x18;
    *puVar2 = 1;
    if (*(ulonglong *)(param_1 + 0x40) < 9) {
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      piVar1[0] = -1;
      piVar1[1] = -1;
      pub_142e32760(piVar1,uVar5);
      iVar4 = param_2[6];
    }
    else {
      uVar8 = (uint)*(ulonglong *)(param_1 + 0x40);
      *piVar1 = (uVar8 & 0x3f) + (uVar8 & 0xffffffc0) * 4 + 0x80;
      lVar7 = (longlong)(ulonglong)uVar3 - (longlong)(puVar2 + param_4 + 4);
      if ((undefined1 *)(ulonglong)uVar3 < puVar2 + param_4 + 4) {
        if (lVar7 >= 0) goto LAB_140ceec62;
      }
      else if (lVar7 < 0) goto LAB_140ceec62;
      *(int *)(param_3 + 0x20) = (int)lVar7;
      iVar4 = param_2[6];
    }
  }
  if (iVar4 == 1) {
    uVar3 = param_2[7];
    piVar1 = (int *)(param_3 + 0x28);
    puVar2 = param_3 + 0x24;
    *puVar2 = 1;
    if (*(ulonglong *)(param_1 + 0x58) < 9) {
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      piVar1[0] = -1;
      piVar1[1] = -1;
      pub_142e32760(piVar1,uVar5);
    }
    else {
      uVar8 = (uint)*(ulonglong *)(param_1 + 0x58);
      *piVar1 = (uVar8 & 0x3f) + (uVar8 & 0xffffffc0) * 4 + 0x80;
      lVar7 = (longlong)(ulonglong)uVar3 - (longlong)(puVar2 + param_4 + 4);
      if ((undefined1 *)(ulonglong)uVar3 < puVar2 + param_4 + 4) {
        if (lVar7 >= 0) {
LAB_140ceec62:
          pdb_142df6ca0();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else if (lVar7 < 0) goto LAB_140ceec62;
      *(int *)(param_3 + 0x2c) = (int)lVar7;
    }
  }
  else {
    param_3[0x24] = 0;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_3 + 0x38) = uVar5;
  *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_1 + 0x70);
  return;
}

