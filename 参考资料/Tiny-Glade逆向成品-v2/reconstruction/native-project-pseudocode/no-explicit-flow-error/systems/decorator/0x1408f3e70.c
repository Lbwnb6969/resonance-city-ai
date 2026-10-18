// VA 0x1408f3e70, PDB extent 539 bytes
// system_decorator::blueprint::validate_blueprints
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::blueprint::validate_blueprints
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
   Extent: 539 */

void pdb_1408f3e70(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong *param_8,
                  longlong *param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 *param_13,longlong *param_14)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cStack_c9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 (*pauStack_b8) [16];
  undefined1 (*pauStack_b0) [16];
  undefined1 *puStack_a8;
  ushort uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  uVar6 = param_2;
  pdb_140c40cf0(*param_3);
  lVar2 = *param_4;
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    return;
  }
  uStack_c8 = pdb_140c47770(param_7);
  cStack_c9 = '\0';
  pauStack_b8 = *(undefined1 (**) [16])(lVar2 + 0x18);
  puStack_a8 = *pauStack_b8 + *(longlong *)(lVar2 + 0x20) + 1;
  auVar1 = *pauStack_b8;
  uStack_a0 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  pauStack_b0 = pauStack_b8 + 1;
  uStack_98 = *(undefined8 *)(lVar2 + 0x30);
  puStack_80 = &uStack_c8;
  uStack_70 = param_6;
  uStack_68 = param_11;
  puStack_60 = param_10;
  uStack_58 = param_5;
  pcStack_50 = &cStack_c9;
  uStack_48 = param_12;
  uStack_c0 = uVar6;
  puStack_90 = param_3;
  uStack_88 = param_1;
  uStack_78 = param_2;
  cVar4 = pdb_1414face0(&pauStack_b8,&puStack_90);
  if (cVar4 == '\0') {
    return;
  }
  lVar2 = *param_8;
  if (*(char *)(lVar2 + 0x281) == '\0') {
    return;
  }
  if (cStack_c9 == '\0') {
    puVar3 = (ulonglong *)*param_9;
    lVar5 = -(1 - *puVar3);
    if (puVar3[1] == 0 && (ulonglong)(1 < *puVar3) <= -puVar3[1]) {
      lVar5 = 0;
    }
    if (lVar5 - 1U < 4) {
      lVar7 = 0x10;
    }
    else {
      lVar7 = 0x20;
      if (lVar5 != 0) goto LAB_1408f4031;
    }
    pdb_14086ebd0(*(undefined8 *)((longlong)puVar3 + lVar7),
                  *(undefined8 *)((longlong)puVar3 + lVar7 + 8),*(undefined4 *)*param_13,
                  ((undefined4 *)*param_13)[1],*param_10);
  }
LAB_1408f4031:
  *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
  *(undefined1 *)(lVar2 + 0x282) = 2;
  *(undefined4 *)param_14[2] = *(undefined4 *)((longlong)param_14 + 0x1c);
  lVar2 = *param_14;
  lVar5 = *(longlong *)(lVar2 + 0x30);
  uVar6 = *(undefined8 *)(lVar2 + 0x40);
  if (lVar5 == *(longlong *)(lVar2 + 0x20)) {
    pdb_142d7e8a0(lVar2 + 0x20);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + lVar5 * 8) = uVar6;
  *(longlong *)(lVar2 + 0x30) = lVar5 + 1;
  *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
  return;
}

