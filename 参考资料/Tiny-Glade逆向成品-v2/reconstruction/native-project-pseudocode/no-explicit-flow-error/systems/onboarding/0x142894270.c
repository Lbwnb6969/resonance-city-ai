// VA 0x142894270, PDB extent 343 bytes
// system_onboarding::prompt_rollercoaster
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::prompt_rollercoaster
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/lib.rs
   Extent: 343 */

void pdb_142894270(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 uStack_30;
  undefined6 uStack_2e;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  puVar2 = (ulonglong *)*param_1;
  lVar3 = param_1[1];
  uVar4 = *puVar2;
  uVar14 = 0;
  uVar15 = uVar4 - *(ulonglong *)(lVar3 + 0x18);
  if (uVar4 < *(ulonglong *)(lVar3 + 0x18)) {
    uVar15 = uVar14;
  }
  uVar13 = uVar4 - *(ulonglong *)(lVar3 + 0x38);
  if (uVar4 < *(ulonglong *)(lVar3 + 0x38)) {
    uVar13 = uVar14;
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x30);
  uVar10 = uVar4 - uVar13;
  if (uVar4 < uVar13) {
    uVar10 = uVar14;
  }
  uVar5 = *(ulonglong *)(lVar3 + 0x10);
  uVar11 = uVar5 - uVar15;
  if (uVar5 < uVar15) {
    uVar11 = uVar14;
  }
  uVar14 = *(ulonglong *)(lVar3 + 0x40);
  *puVar2 = uVar14 - (uVar11 + uVar10);
  if (uVar5 >= uVar15 && uVar5 - uVar15 != 0 || uVar4 >= uVar13 && uVar4 - uVar13 != 0) {
    *puVar2 = uVar14;
    puVar6 = (undefined4 *)param_2[2];
    *puVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar3 = *param_2;
    lVar7 = *param_3;
    uStack_a4 = pdb_140a44d70(CONCAT71((int7)((ulonglong)puVar6 >> 8),0x15));
    uStack_a8 = 0xca;
    uVar12 = 0;
    if (*(longlong *)(lVar7 + 0x328) != 0) {
      uVar12 = *(undefined8 *)(lVar7 + 800);
    }
    pdb_1420c0500(&uStack_60,&uStack_a8,uVar12);
    uStack_30 = 0x1200;
    uStack_78 = 0xb;
    lVar7 = *(longlong *)(lVar3 + 0x28);
    if (lVar7 == *(longlong *)(lVar3 + 0x18)) {
      pdb_142d8d780(lVar3 + 0x18);
    }
    lVar8 = *(longlong *)(lVar3 + 0x20);
    lVar9 = lVar7 * 0x50;
    puVar1 = (undefined8 *)(lVar8 + 0x40 + lVar9);
    *puVar1 = uStack_38;
    puVar1[1] = CONCAT62(uStack_2e,uStack_30);
    puVar1 = (undefined8 *)(lVar8 + 0x30 + lVar9);
    *puVar1 = uStack_48;
    puVar1[1] = uStack_40;
    puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar9);
    *puVar1 = uStack_58;
    puVar1[1] = uStack_50;
    puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
    *puVar1 = uStack_68;
    puVar1[1] = uStack_60;
    *(undefined8 *)(lVar8 + lVar9) = CONCAT44(uStack_74,uStack_78);
    ((undefined8 *)(lVar8 + lVar9))[1] = uStack_70;
    *(longlong *)(lVar3 + 0x28) = lVar7 + 1;
  }
  return;
}

