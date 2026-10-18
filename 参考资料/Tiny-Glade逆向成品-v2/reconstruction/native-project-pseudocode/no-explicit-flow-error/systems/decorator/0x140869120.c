// VA 0x140869120, PDB extent 108 bytes
// system_decorator::ui_systems::ui_move_decorator::MoveDecoratorDeltaPositions::record
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_move_decorator::MoveDecoratorDeltaPositions::record
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
   Extent: 108 */

void pdb_140869120(int *param_1,float *param_2,float param_3)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (*param_1 == 1) {
    fVar1 = SQRT((param_2[2] - (float)param_1[3]) * (param_2[2] - (float)param_1[3]) +
                 (param_2[1] - (float)param_1[2]) * (param_2[1] - (float)param_1[2]) +
                 (*param_2 - (float)param_1[1]) * (*param_2 - (float)param_1[1])) / param_3;
  }
  param_1[4] = 1;
  param_1[5] = (int)fVar1;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)param_2;
  param_1[3] = (int)param_2[2];
  return;
}

