// VA 0x1408d4130, PDB extent 52 bytes
// system_decorator::decorator_visual::door_stairs_assemble_bricks::door_stairs_assemble_bricks
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/door_stairs_assemble_bricks.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::door_stairs_assemble_bricks::door_stairs_assemble_bricks
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/door_stairs_assemble_bricks.rs
   Extent: 52 */

void pdb_1408d4130(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_18 = param_2;
  uStack_10 = param_1;
  uStack_8 = param_4;
  pdb_1414f5480(*param_3,&uStack_18);
  return;
}

