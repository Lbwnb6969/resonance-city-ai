// VA 0x1417ecda0, PDB extent 10563 bytes
// country_core::systems::history::history_process::generate_replay_cmds_from_edit<country_core::systems::history::replay_garden::replay_garden::closure$1::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/history_process.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::history::history_process::generate_replay_cmds_from_edit<country_core::systems::history::replay_garden::replay_garden::closure$1::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/history_process.rs
   Extent: 10563 */

void pdb_1417ecda0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001417ecddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14333d45c + *(int *)(&UNK_14333d45c + *param_1 * 4)))(&UNK_14333d45c,param_1);
  return;
}

