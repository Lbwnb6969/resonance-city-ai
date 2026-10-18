// VA 0x140ae28e0, PDB extent 45 bytes
// country_core::systems::wall::eraser::delete_focused::delete_action_used
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/delete_focused.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::eraser::delete_focused::delete_action_used
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/delete_focused.rs
   Extent: 45 */

void pdb_140ae28e0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140ae28f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14304fad4 + *(int *)(&UNK_14304fad4 + (ulonglong)*(uint *)(*param_1 + 0x98) * 4)))
            (&UNK_14304fad4 + *(int *)(&UNK_14304fad4 + (ulonglong)*(uint *)(*param_1 + 0x98) * 4));
  return;
}

