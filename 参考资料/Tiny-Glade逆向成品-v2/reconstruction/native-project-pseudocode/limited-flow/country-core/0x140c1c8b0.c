// VA 0x140c1c8b0, PDB extent 9497 bytes
// country_core::systems::history::replay_wall::WallReplayEditCmd::process<country_core::systems::history::replay_wall::replay_wall::closure_env$0,country_core::systems::history::replay_wall::replay_wall::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::history::replay_wall::WallReplayEditCmd::process<country_core::systems::history::replay_wall::replay_wall::closure_env$0,country_core::systems::history::replay_wall::replay_wall::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_wall.rs
   Extent: 9497 */

void pdb_140c1c8b0(int *param_1)

{
  float fVar1;
  float fVar2;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (*(char *)((longlong)param_1 + 0x15) != '\0') {
    return;
  }
  if (*param_1 == 1) {
    fVar2 = 0.0;
    if (0.0 <= (float)param_1[4] / (float)param_1[1]) {
      fVar2 = (float)param_1[4] / (float)param_1[1];
    }
    fVar1 = _DAT_142e36f28;
    if (fVar2 <= _DAT_142e36f28) {
      fVar1 = fVar2;
    }
    pdb_140dedc70(fVar1);
                    /* WARNING: Could not recover jumptable at 0x000140c1c9a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14306a014 +
              *(int *)(&UNK_14306a014 +
                      (*(longlong *)(*(longlong *)(param_1 + 2) + 0x10) >> 0x3f &
                      *(longlong *)(*(longlong *)(param_1 + 2) + 0x10) + 0x8000000000000001U) * 4)))
              ();
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
                    /* WARNING: Could not recover jumptable at 0x000140c1c9fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143069fc0 +
            *(int *)(&UNK_143069fc0 +
                    (*(longlong *)(*(longlong *)(param_1 + 2) + 0x10) >> 0x3f &
                    *(longlong *)(*(longlong *)(param_1 + 2) + 0x10) + 0x8000000000000001U) * 4)))
            (in_stack_00000030,in_stack_00000038);
  return;
}

