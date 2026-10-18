// VA 0x14289b260, PDB extent 1690 bytes
// system_onboarding::hint_stairs::add_stairs_hint
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_stairs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_stairs::add_stairs_hint
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_stairs.rs
   Extent: 1690 */

void pdb_14289b260(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  ulonglong uVar1;
  
  uVar1 = 4;
  if (0xc4 < *param_3) {
    uVar1 = (ulonglong)(*param_3 - 0xc5);
  }
                    /* WARNING: Could not recover jumptable at 0x00014289b2b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1435ac8c4 + *(int *)(&UNK_1435ac8c4 + uVar1 * 4)))
            (&UNK_1435ac8c4 + *(int *)(&UNK_1435ac8c4 + uVar1 * 4));
  return;
}

