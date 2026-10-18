// VA 0x1420bfa10, PDB extent 39 bytes
// system_onboarding::hint_state::impl$9::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_state::impl$9::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_state.rs
   Extent: 39 */

void pdb_1420bfa10(byte *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,&UNK_1434532d0 + *(int *)(&UNK_1434532d0 + (ulonglong)*param_1 * 4),
             *(undefined8 *)(&UNK_1434531f8 + (ulonglong)*param_1 * 8),*(code **)(param_2[1] + 0x18)
            );
  return;
}

