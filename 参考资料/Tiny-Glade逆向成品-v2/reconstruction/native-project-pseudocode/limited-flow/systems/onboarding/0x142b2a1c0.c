// VA 0x142b2a1c0, PDB extent 2207 bytes
// system_onboarding::hint_binding::BindingHintDisplay::cleanup_impl
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding_renderer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_binding::BindingHintDisplay::cleanup_impl
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding_renderer.rs
   Extent: 2207 */

void pdb_142b2a1c0(uint *param_1)

{
  ulonglong uVar1;
  
  uVar1 = 4;
  if (0xc4 < *param_1) {
    uVar1 = (ulonglong)(*param_1 - 0xc5);
  }
                    /* WARNING: Could not recover jumptable at 0x000142b2a20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14366b69c + *(int *)(&UNK_14366b69c + uVar1 * 4)))
            (&UNK_14366b69c + *(int *)(&UNK_14366b69c + uVar1 * 4));
  return;
}

