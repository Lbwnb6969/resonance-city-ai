// VA 0x140cee840, PDB extent 415 bytes
// clutter_pack_pipe::impl$27::resolve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::impl$27::resolve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 415 */

void pdb_140cee840(longlong param_1,uint *param_2,int *param_3,ulonglong param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar4 = *param_2 - param_4;
  uVar6 = lVar4 < 0;
  if (*param_2 < param_4) {
    if (!(bool)uVar6) goto LAB_140cee98c;
LAB_140cee85d:
    if ((int)lVar4 != lVar4) goto LAB_140cee9d9;
    param_4 = param_4 - (longlong)param_3;
    *param_3 = (int)lVar4;
    param_3[1] = (int)uVar1;
    uVar5 = (longlong)param_3 + param_4 + 8;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    lVar4 = param_2[1] - uVar5;
    uVar6 = lVar4 < 0;
    if (uVar5 <= param_2[1]) {
      if (!(bool)uVar6) goto LAB_140cee895;
      goto LAB_140cee98c;
    }
    if (!(bool)uVar6) goto LAB_140cee98c;
LAB_140cee895:
    if ((int)lVar4 != lVar4) goto LAB_140cee9d9;
    param_3[2] = (int)lVar4;
    param_3[3] = (int)uVar1;
    uVar5 = (longlong)param_3 + param_4 + 0x10;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    lVar4 = param_2[2] - uVar5;
    uVar6 = lVar4 < 0;
    if (uVar5 <= param_2[2]) {
      if (!(bool)uVar6) goto LAB_140cee8cb;
      goto LAB_140cee98c;
    }
    if (!(bool)uVar6) goto LAB_140cee98c;
LAB_140cee8cb:
    if ((int)lVar4 != lVar4) goto LAB_140cee9d9;
    param_3[4] = (int)lVar4;
    param_3[5] = (int)uVar1;
    uVar5 = (longlong)param_3 + param_4 + 0x18;
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    lVar4 = param_2[3] - uVar5;
    uVar6 = lVar4 < 0;
    if (uVar5 <= param_2[3]) {
      if (!(bool)uVar6) goto LAB_140cee901;
      goto LAB_140cee98c;
    }
    if (!(bool)uVar6) goto LAB_140cee98c;
LAB_140cee901:
    if ((int)lVar4 != lVar4) goto LAB_140cee9d9;
    param_3[6] = (int)lVar4;
    param_3[7] = (int)uVar1;
    uVar5 = (longlong)param_3 + param_4 + 0x20;
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    lVar4 = param_2[4] - uVar5;
    uVar6 = lVar4 < 0;
    if (uVar5 <= param_2[4]) {
      if (!(bool)uVar6) goto LAB_140cee930;
      goto LAB_140cee98c;
    }
    if (!(bool)uVar6) goto LAB_140cee98c;
LAB_140cee930:
    if ((int)lVar4 != lVar4) goto LAB_140cee9d9;
    param_3[8] = (int)lVar4;
    param_3[9] = (int)uVar1;
    uVar5 = (longlong)param_3 + param_4 + 0x28;
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    lVar4 = param_2[5] - uVar5;
    uVar6 = lVar4 < 0;
    if (uVar5 <= param_2[5]) {
      if (!(bool)uVar6) goto LAB_140cee962;
      goto LAB_140cee98c;
    }
    if (!(bool)uVar6) goto LAB_140cee98c;
LAB_140cee962:
    if ((int)lVar4 != lVar4) goto LAB_140cee9d9;
    param_3[10] = (int)lVar4;
    param_3[0xb] = (int)uVar1;
    uVar5 = (longlong)param_3 + param_4 + 0x30;
    iVar3 = (int)*(undefined8 *)(param_1 + 0xa0);
    param_4 = param_2[6] - uVar5;
    uVar6 = (longlong)param_4 < 0;
    if (uVar5 <= param_2[6]) goto LAB_140cee991;
    if (!(bool)uVar6) goto LAB_140cee98c;
  }
  else {
    if (!(bool)uVar6) goto LAB_140cee85d;
LAB_140cee98c:
    do {
      iVar3 = pdb_142df6ca0();
LAB_140cee991:
    } while ((bool)uVar6);
  }
  if ((longlong)(int)param_4 == param_4) {
    param_3[0xc] = (int)param_4;
    param_3[0xd] = iVar3;
    if ((char)param_2[7] != '\x01') {
      *(undefined1 *)(param_3 + 0xe) = 0;
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0xb4);
    *(undefined8 *)(param_3 + 0xf) = *(undefined8 *)(param_1 + 0xac);
    *(undefined8 *)(param_3 + 0x11) = uVar1;
    *(undefined8 *)(param_3 + 0x13) = *(undefined8 *)(param_1 + 0xbc);
    *(undefined1 *)(param_3 + 0xe) = 1;
    return;
  }
LAB_140cee9d9:
  pdb_142df6ce0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

