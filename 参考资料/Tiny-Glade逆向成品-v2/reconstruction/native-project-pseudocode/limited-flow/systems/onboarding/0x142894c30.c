// VA 0x142894c30, PDB extent 2324 bytes
// system_onboarding::hint_unlink_windows::hint_unlink_windows
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_unlink_windows.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_unlink_windows::hint_unlink_windows
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_unlink_windows.rs
   Extent: 2324 */

void pdb_142894c30(undefined8 *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 uStack_128;
  undefined2 uStack_124;
  undefined4 *puStack_d8;
  undefined4 uStack_cc;
  undefined4 uStack_94;
  uint auStack_90 [18];
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar2 = (ulonglong *)*param_1;
  lVar3 = param_1[1];
  uVar8 = *puVar2;
  uVar15 = 0;
  uVar12 = uVar8 - *(ulonglong *)(lVar3 + 0x18);
  if (uVar8 < *(ulonglong *)(lVar3 + 0x18)) {
    uVar12 = uVar15;
  }
  uVar9 = uVar8 - *(ulonglong *)(lVar3 + 0x38);
  if (uVar8 < *(ulonglong *)(lVar3 + 0x38)) {
    uVar9 = uVar15;
  }
  lVar10 = uVar12 * 0x10 + *(longlong *)(lVar3 + 8);
  uVar8 = *(ulonglong *)(lVar3 + 0x10) - uVar12;
  if (*(ulonglong *)(lVar3 + 0x10) < uVar12) {
    lVar10 = 8;
    uVar8 = uVar15;
  }
  lVar16 = uVar9 * 0x10 + *(longlong *)(lVar3 + 0x28);
  uVar12 = *(ulonglong *)(lVar3 + 0x30) - uVar9;
  if (*(ulonglong *)(lVar3 + 0x30) < uVar9) {
    lVar16 = 8;
    uVar12 = uVar15;
  }
  *puVar2 = (*(longlong *)(lVar3 + 0x40) - uVar12) - uVar8;
  lVar11 = uVar8 * 0x10 + lVar10;
  lVar13 = uVar12 * 0x10 + lVar16;
  lVar3 = *param_3;
  uStack_94 = *(undefined4 *)(param_2 + 0x1c);
  puStack_d8 = *(undefined4 **)(param_2 + 0x10);
  uStack_cc = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar4 = *param_4;
  puVar5 = (undefined4 *)param_4[2];
  do {
    if ((lVar10 == 0) || (lVar10 == lVar11)) {
      if ((lVar16 == 0) || (lVar16 == lVar13)) {
        return;
      }
      *puVar2 = *puVar2 + 1;
      cVar1 = *(char *)(lVar16 + 8);
      lVar6 = lVar16 + 0x10;
      lVar7 = lVar16;
      lVar10 = 0;
    }
    else {
      *puVar2 = *puVar2 + 1;
      cVar1 = *(char *)(lVar10 + 8);
      lVar6 = lVar16;
      lVar7 = lVar10;
      lVar10 = lVar10 + 0x10;
    }
    lVar16 = lVar6;
    if (cVar1 == '\0') {
      uStack_124 = pdb_140a44d70(CONCAT71((int7)((ulonglong)lVar7 >> 8),0x10));
      uStack_128 = 0xca;
      uVar14 = 0;
      if (*(longlong *)(lVar3 + 0x298) != 0) {
        uVar14 = *(undefined8 *)(lVar3 + 0x290);
      }
      pdb_1420c0500(auStack_90,&uStack_128,uVar14);
      *puStack_d8 = uStack_94;
      uVar8 = (ulonglong)(auStack_90[0] - 0xc5);
      if (auStack_90[0] < 0xc5) {
        uVar8 = 4;
      }
                    /* WARNING: Could not recover jumptable at 0x000142894e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1435ac4e0 + *(int *)(&UNK_1435ac4e0 + uVar8 * 4)))();
      return;
    }
    if (*(char *)(lVar3 + 0x40d) == '\0') {
      *puVar5 = uStack_cc;
      lVar7 = *(longlong *)(lVar4 + 0x30);
      uVar14 = *(undefined8 *)(lVar4 + 0x40);
      if (lVar7 == *(longlong *)(lVar4 + 0x20)) {
        pdb_142d7e980(lVar4 + 0x20);
      }
      lVar6 = *(longlong *)(lVar4 + 0x28);
      *(undefined8 *)(lVar6 + lVar7 * 0x10) = uVar14;
      *(undefined1 *)(lVar6 + 8 + lVar7 * 0x10) = 8;
      *(longlong *)(lVar4 + 0x30) = lVar7 + 1;
      *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
    }
  } while( true );
}

