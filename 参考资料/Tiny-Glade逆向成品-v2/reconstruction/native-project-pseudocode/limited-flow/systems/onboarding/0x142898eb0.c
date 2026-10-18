// VA 0x142898eb0, PDB extent 660 bytes
// system_onboarding::hint_binding::impl$12::clone
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_binding::impl$12::clone
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding.rs
   Extent: 660 */

void pdb_142898eb0(undefined8 param_1,uint *param_2)

{
  ulonglong uVar1;
  
  uVar1 = 4;
  if (0xc4 < *param_2) {
    uVar1 = (ulonglong)(*param_2 - 0xc5);
  }
                    /* WARNING: Could not recover jumptable at 0x000142898ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1435ac744 + *(int *)(&UNK_1435ac744 + uVar1 * 4)))
            (param_1,param_2,&UNK_1435ac744 + *(int *)(&UNK_1435ac744 + uVar1 * 4));
  return;
}

