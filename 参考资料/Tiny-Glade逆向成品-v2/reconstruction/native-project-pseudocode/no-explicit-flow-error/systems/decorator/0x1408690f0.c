// VA 0x1408690f0, PDB extent 35 bytes
// system_decorator::ui_systems::ui_move_decorator::MoveDecoratorDeltaPositions::begin_frame
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_move_decorator::MoveDecoratorDeltaPositions::begin_frame
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
   Extent: 35 */

void pdb_1408690f0(undefined8 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x1c);
  puVar3 = (undefined4 *)param_1[2];
  *puVar3 = uVar2;
  puVar4 = (undefined4 *)*param_1;
  cVar1 = *(char *)(puVar4 + 4);
  puVar4[4] = 0;
  if (cVar1 != '\0') {
    return;
  }
  *puVar3 = uVar2;
  *puVar4 = 0;
  return;
}

