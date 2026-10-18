// VA 0x142893c00, PDB extent 1646 bytes
// system_onboarding::hints_startup::hints_startup
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hints_startup.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_onboarding::hints_startup::hints_startup
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hints_startup.rs
   Extent: 1646 */

void pdb_142893c00(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar4 = *param_1;
  plVar11 = *(longlong **)(param_2 + 8);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = *(longlong **)(param_2 + 0x10);
  }
  uVar2 = *(undefined1 *)(lVar4 + 0x404);
  lVar5 = plVar11[2];
  if ((ulonglong)(*plVar11 - lVar5) < 0x18) {
    pdb_142d7f1b0(plVar11,lVar5,0x18,1,1);
  }
  lVar6 = plVar11[1];
  *(code **)(lVar6 + lVar5) = pdb_14289cc90;
  *(undefined8 *)(lVar6 + 8 + lVar5) = 0;
  *(undefined1 *)(lVar6 + 0x10 + lVar5) = uVar2;
  *(undefined1 *)(lVar6 + 0x11 + lVar5) = 0;
  lVar6 = lVar5 + 0x18;
  plVar11[2] = lVar6;
  uVar2 = *(undefined1 *)(lVar4 + 0x405);
  if ((ulonglong)(*plVar11 - lVar6) < 0x18) {
    pdb_142d7f1b0(plVar11,lVar6,0x18,1,1);
  }
  lVar6 = plVar11[1];
  *(code **)(lVar6 + 0x18 + lVar5) = pdb_14289d250;
  *(undefined8 *)(lVar6 + 0x20 + lVar5) = 0;
  *(undefined1 *)(lVar6 + 0x28 + lVar5) = uVar2;
  *(undefined1 *)(lVar6 + 0x29 + lVar5) = 0;
  lVar6 = lVar5 + 0x30;
  plVar11[2] = lVar6;
  uVar2 = *(undefined1 *)(lVar4 + 0x409);
  if ((ulonglong)(*plVar11 - lVar6) < 0x18) {
    pdb_142d7f1b0(plVar11,lVar6,0x18,1,1);
  }
  lVar6 = plVar11[1];
  *(code **)(lVar6 + 0x30 + lVar5) = pdb_14289cce0;
  *(undefined8 *)(lVar6 + 0x38 + lVar5) = 0;
  *(undefined1 *)(lVar6 + 0x40 + lVar5) = uVar2;
  lVar6 = lVar5 + 0x48;
  plVar11[2] = lVar6;
  uVar2 = *(undefined1 *)(lVar4 + 0x40a);
  if ((ulonglong)(*plVar11 - lVar6) < 10) {
    pdb_142d7f1b0(plVar11,lVar6,10,1,1);
  }
  lVar6 = plVar11[1];
  *(code **)(lVar6 + 0x48 + lVar5) = pdb_14289cd80;
  *(undefined1 *)(lVar6 + 0x50 + lVar5) = uVar2;
  *(undefined1 *)(lVar6 + 0x51 + lVar5) = uVar2;
  lVar6 = lVar5 + 0x52;
  plVar11[2] = lVar6;
  uVar2 = *(undefined1 *)(lVar4 + 0x40c);
  if ((ulonglong)(*plVar11 - lVar6) < 9) {
    pdb_142d7f1b0(plVar11,lVar6,9,1,1);
  }
  lVar6 = plVar11[1];
  *(code **)(lVar6 + 0x52 + lVar5) = pdb_14289cd30;
  *(undefined1 *)(lVar6 + 0x5a + lVar5) = uVar2;
  lVar6 = lVar5 + 0x5b;
  plVar11[2] = lVar6;
  if ((ulonglong)(*plVar11 - lVar6) < 0x10) {
    pdb_142d7f1b0(plVar11,lVar6,0x10,1,1);
  }
  lVar6 = plVar11[1];
  *(code **)(lVar6 + 0x5b + lVar5) = pdb_14289c980;
  *(undefined4 *)(lVar6 + 99 + lVar5) = 0;
  *(undefined1 *)(lVar6 + 0x67 + lVar5) = 0;
  lVar6 = lVar5 + 0x6b;
  plVar11[2] = lVar6;
  if ((ulonglong)(*plVar11 - lVar6) < 0x18) {
    pdb_142d7f1b0(plVar11,lVar6,0x18,1,1);
  }
  lVar6 = plVar11[1];
  *(code **)(lVar6 + 0x6b + lVar5) = pdb_14289d2a0;
  *(undefined8 *)(lVar6 + 0x73 + lVar5) = 0;
  *(undefined4 *)(lVar6 + 0x7b + lVar5) = 0;
  lVar6 = lVar5 + 0x83;
  plVar11[2] = lVar6;
  if ((ulonglong)(*plVar11 - lVar6) < 0x10) {
    pdb_142d7f1b0(plVar11,lVar6,0x10,1,1);
  }
  lVar6 = plVar11[1];
  *(code **)(lVar6 + 0x83 + lVar5) = pdb_14289d2f0;
  *(undefined8 *)(lVar6 + 0x8b + lVar5) = 0;
  lVar6 = lVar5 + 0x93;
  plVar11[2] = lVar6;
  uVar2 = *(undefined1 *)(lVar4 + 0x410);
  if ((ulonglong)(*plVar11 - lVar6) < 10) {
    pdb_142d7f1b0(plVar11,lVar6,10,1,1);
  }
  lVar6 = plVar11[1];
  *(code **)(lVar6 + 0x93 + lVar5) = pdb_14289cbf0;
  *(undefined1 *)(lVar6 + 0x9b + lVar5) = uVar2;
  *(undefined1 *)(lVar6 + 0x9c + lVar5) = uVar2;
  lVar6 = lVar5 + 0x9d;
  plVar11[2] = lVar6;
  uVar2 = *(undefined1 *)(lVar4 + 0x411);
  if ((ulonglong)(*plVar11 - lVar6) < 10) {
    pdb_142d7f1b0(plVar11,lVar6,10,1,1);
  }
  lVar6 = plVar11[1];
  *(code **)(lVar6 + 0x9d + lVar5) = pdb_14289c9d0;
  *(undefined1 *)(lVar6 + 0xa5 + lVar5) = uVar2;
  *(undefined1 *)(lVar6 + 0xa6 + lVar5) = 0;
  lVar6 = lVar5 + 0xa7;
  plVar11[2] = lVar6;
  if (((*(char *)(lVar4 + 0x406) != '\x01') || (*(char *)(lVar4 + 0x407) == '\0')) ||
     (uVar10 = 2, *(char *)(lVar4 + 0x408) == '\0')) {
    uStack_68 = 0;
    uStack_60 = 0;
    uVar10 = 0;
  }
  if ((ulonglong)(*plVar11 - lVar6) < 0x1c) {
    pdb_142d7f1b0(plVar11,lVar6,0x1c,1,1);
  }
  lVar7 = plVar11[1];
  *(code **)(lVar7 + 0xa7 + lVar5) = pdb_14289d200;
  *(undefined4 *)(lVar7 + 0xaf + lVar5) = uVar10;
  puVar1 = (undefined4 *)(lVar7 + 0xc + lVar6);
  *puVar1 = (undefined4)uStack_68;
  puVar1[1] = uStack_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  lVar6 = lVar5 + 0xc3;
  plVar11[2] = lVar6;
  uVar2 = *(undefined1 *)(lVar4 + 0x40b);
  if ((ulonglong)(*plVar11 - lVar6) < 9) {
    pdb_142d7f1b0(plVar11,lVar6,9,1,1);
  }
  lVar6 = plVar11[1];
  *(code **)(lVar6 + 0xc3 + lVar5) = pdb_14289cdd0;
  *(undefined1 *)(lVar6 + 0xcb + lVar5) = uVar2;
  lVar6 = lVar5 + 0xcc;
  plVar11[2] = lVar6;
  if (*(char *)(lVar4 + 0x406) == '\0') {
    cVar3 = *(char *)(lVar4 + 0x408);
    uVar10 = 0;
  }
  else {
    cVar3 = *(char *)(lVar4 + 0x408);
    uVar10 = _DAT_142e36f28;
  }
  if (cVar3 == '\0') {
    uVar12 = 0;
    cVar3 = *(char *)(lVar4 + 0x407);
  }
  else {
    cVar3 = *(char *)(lVar4 + 0x407);
    uVar12 = _DAT_142e36f28;
  }
  if (cVar3 == '\0') {
    uVar9 = *plVar11 - lVar6;
    uVar8 = 0;
  }
  else {
    uVar9 = *plVar11 - lVar6;
    uVar8 = _DAT_142e36f28;
  }
  if (uVar9 < 0x2c) {
    pdb_142d7f1b0(plVar11,lVar6,0x2c,1,1);
  }
  lVar4 = plVar11[1];
  *(code **)(lVar4 + 0xcc + lVar5) = pdb_14289ca20;
  *(undefined4 *)(lVar4 + 0xd4 + lVar5) = uVar10;
  *(undefined4 *)(lVar4 + 0xd8 + lVar5) = uVar8;
  *(undefined4 *)(lVar4 + 0xdc + lVar5) = uVar12;
  *(undefined4 *)(lVar4 + 0xe0 + lVar5) = uVar10;
  *(undefined4 *)(lVar4 + 0xe4 + lVar5) = uVar8;
  *(undefined4 *)(lVar4 + 0xe8 + lVar5) = uVar12;
  *(undefined8 *)(lVar4 + 0xec + lVar5) = _DAT_143315ea0;
  *(undefined4 *)(lVar4 + 0xf4 + lVar5) = 0x42700000;
  lVar4 = lVar5 + 0xf8;
  plVar11[2] = lVar4;
  if ((ulonglong)(*plVar11 - lVar4) < 0x18) {
    pdb_142d7f1b0(plVar11,lVar4,0x18,1,1);
  }
  lVar4 = plVar11[1];
  *(code **)(lVar4 + 0xf8 + lVar5) = pdb_14289ca80;
  *(undefined8 *)(lVar4 + 0x100 + lVar5) = 0;
  *(undefined4 *)(lVar4 + 0x108 + lVar5) = 0;
  plVar11[2] = lVar5 + 0x110;
  return;
}

