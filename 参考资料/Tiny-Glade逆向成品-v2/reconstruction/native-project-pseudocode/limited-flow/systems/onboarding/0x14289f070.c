// VA 0x14289f070, PDB extent 1553 bytes
// system_onboarding::hint_popup::hint_draw::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_popup.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_popup::hint_draw::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_popup.rs
   Extent: 1553 */

void pdb_14289f070(undefined8 *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(uint **)*param_1 != (uint *)0x0) {
    uVar1 = **(uint **)*param_1;
    uVar2 = 4;
    if (0xc4 < uVar1) {
      uVar2 = (ulonglong)(uVar1 - 0xc5);
    }
                    /* WARNING: Could not recover jumptable at 0x00014289f0ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1435ad290 + *(int *)(&UNK_1435ad290 + uVar2 * 4)))
              (&UNK_1435ad290 + *(int *)(&UNK_1435ad290 + uVar2 * 4));
    return;
  }
  return;
}

