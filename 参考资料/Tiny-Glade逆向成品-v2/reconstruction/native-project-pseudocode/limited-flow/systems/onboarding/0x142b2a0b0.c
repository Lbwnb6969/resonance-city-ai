// VA 0x142b2a0b0, PDB extent 267 bytes
// system_onboarding::hint_binding::BindingHintDisplay::filter_to_mode_impl
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_onboarding::hint_binding::BindingHintDisplay::filter_to_mode_impl
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding.rs
   Extent: 267 */

void pdb_142b2a0b0(uint *param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 4;
  if (0xc4 < *param_1) {
    uVar1 = *param_1 - 0xc5;
  }
  if (param_2 == '\0') {
    if (4 < uVar1) {
      if (2 < uVar1 - 6) {
        *param_1 = 0xc5;
        return;
      }
      if (*(longlong *)(param_1 + 6) != 0) {
        lVar3 = *(longlong *)(param_1 + 6) * 0x30;
        lVar2 = *(longlong *)(param_1 + 4);
        do {
          pdb_142b2a0b0(lVar2,0);
          lVar3 = lVar3 + -0x30;
          lVar2 = lVar2 + 0x30;
        } while (lVar3 != 0);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142b2a0dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14366b678 + *(int *)(&UNK_14366b678 + (ulonglong)uVar1 * 4)))();
  return;
}

