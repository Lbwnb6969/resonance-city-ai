// VA 0x1428cf6a0, PDB extent 1491 bytes
// system_color::remember_color_customization::remember_color_customization
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/remember_color_customization.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_color::remember_color_customization::remember_color_customization
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/remember_color_customization.rs
   Extent: 1491 */

void pdb_1428cf6a0(undefined8 *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar1 = (ulonglong *)*param_1;
  lVar2 = param_1[1];
  uVar3 = *puVar1;
  uVar7 = 0;
  uVar6 = uVar3 - *(ulonglong *)(lVar2 + 0x18);
  if (uVar3 < *(ulonglong *)(lVar2 + 0x18)) {
    uVar6 = uVar7;
  }
  uVar5 = uVar3 - *(ulonglong *)(lVar2 + 0x38);
  if (uVar3 < *(ulonglong *)(lVar2 + 0x38)) {
    uVar5 = uVar7;
  }
  puVar4 = (uint *)(uVar6 * 0x20 + *(longlong *)(lVar2 + 8));
  uVar3 = *(ulonglong *)(lVar2 + 0x10) - uVar6;
  if (*(ulonglong *)(lVar2 + 0x10) < uVar6) {
    puVar4 = (uint *)0x8;
    uVar3 = uVar7;
  }
  puVar8 = (uint *)(uVar5 * 0x20 + *(longlong *)(lVar2 + 0x28));
  uVar6 = *(ulonglong *)(lVar2 + 0x30) - uVar5;
  if (*(ulonglong *)(lVar2 + 0x30) < uVar5) {
    puVar8 = (uint *)0x8;
    uVar6 = uVar7;
  }
  *puVar1 = (*(longlong *)(lVar2 + 0x40) - uVar6) - uVar3;
  if ((puVar4 == (uint *)0x0) || (puVar4 == puVar4 + uVar3 * 8)) {
    if ((puVar8 == (uint *)0x0) || (puVar8 == puVar8 + uVar6 * 8)) {
      return;
    }
    puVar9 = (uint *)0x0;
  }
  else {
    puVar9 = puVar4 + 8;
    puVar8 = puVar4;
  }
  *puVar1 = *puVar1 + 1;
  uVar3 = (ulonglong)(*puVar8 - 2);
  if (*puVar8 < 2) {
    uVar3 = 0xe;
  }
                    /* WARNING: Could not recover jumptable at 0x0001428cf8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1435af998 + *(int *)(&UNK_1435af998 + uVar3 * 4)))(puVar9,puVar8[1]);
  return;
}

