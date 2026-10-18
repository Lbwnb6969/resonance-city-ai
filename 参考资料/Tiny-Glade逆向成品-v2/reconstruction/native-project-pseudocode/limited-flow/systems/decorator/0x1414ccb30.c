// VA 0x1414ccb30, PDB extent 518 bytes
// system_decorator::ui_systems::move_ops::calculate_move_dst
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/move_ops.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::ui_systems::move_ops::calculate_move_dst
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/move_ops.rs
   Extent: 518 */

void pdb_1414ccb30(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001414ccb5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143313a9c + *(int *)(&UNK_143313a9c + (ulonglong)*(uint *)(param_2 + 0x20) * 4)))
            ();
  return;
}

