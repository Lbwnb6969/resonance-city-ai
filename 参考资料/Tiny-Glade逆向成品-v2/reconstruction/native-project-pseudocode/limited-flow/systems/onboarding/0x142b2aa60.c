// VA 0x142b2aa60, PDB extent 3367 bytes
// system_onboarding::hint_binding::BindingHintDisplay::resolve_steam_impl
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding_renderer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_onboarding::hint_binding::BindingHintDisplay::resolve_steam_impl
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding_renderer.rs
   Extent: 3367 */

void pdb_142b2aa60(undefined8 param_1,uint *param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)(*param_2 - 0xc5);
  if (*param_2 < 0xc5) {
    uVar1 = 4;
  }
                    /* WARNING: Could not recover jumptable at 0x000142b2aac1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14366b740 + *(int *)(&UNK_14366b740 + uVar1 * 4)))();
  return;
}

