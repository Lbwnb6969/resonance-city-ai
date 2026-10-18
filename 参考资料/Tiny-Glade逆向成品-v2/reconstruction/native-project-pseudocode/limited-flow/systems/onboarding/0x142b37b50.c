// VA 0x142b37b50, PDB extent 4287 bytes
// system_onboarding::hint_binding_renderer::render_hints
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding_renderer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_binding_renderer::render_hints
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding_renderer.rs
   Extent: 4287 */

void pdb_142b37b50(uint *param_1)

{
  uint uVar1;
  char in_stack_00000028;
  
  uVar1 = 4;
  if (0xc4 < *param_1) {
    uVar1 = *param_1 - 0xc5;
  }
  if (in_stack_00000028 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142b37be3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14366c64c + *(int *)(&UNK_14366c64c + (ulonglong)uVar1 * 4)))
              (&UNK_14366c64c,&UNK_14366c490);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142b37cf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14366c628 + *(int *)(&UNK_14366c628 + (ulonglong)uVar1 * 4)))
            (&UNK_14366c628,&UNK_14366c458);
  return;
}

