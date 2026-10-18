// VA 0x1408d3550, PDB extent 117 bytes
// system_decorator::decorator_visual::chimney_assemble_bricks::chimney_assemble_bricks
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/chimney_assemble_bricks.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::chimney_assemble_bricks::chimney_assemble_bricks
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/chimney_assemble_bricks.rs
   Extent: 117 */

void pdb_1408d3550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 uStack_60;
  undefined4 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  
  puVar2 = (undefined4 *)param_4[2];
  *puVar2 = *(undefined4 *)((longlong)param_4 + 0x1c);
  uVar1 = *param_4;
  uStack_60 = pdb_140c47770();
  uStack_40 = param_5;
  uStack_38 = param_7;
  puStack_30 = &uStack_60;
  puStack_58 = puVar2;
  uStack_50 = param_3;
  uStack_48 = param_2;
  pdb_1414f46c0(uVar1,&uStack_50);
  return;
}

