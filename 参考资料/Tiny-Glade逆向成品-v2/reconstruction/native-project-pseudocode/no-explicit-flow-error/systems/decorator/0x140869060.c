// VA 0x140869060, PDB extent 99 bytes
// system_decorator::ui_systems::ui_move_decorator::_::impl$0::init_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_move_decorator::_::impl$0::init_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
   Extent: 99 */

undefined8 * pdb_140869060(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2;
  uVar1 = pdb_1414cd600(param_2);
  uVar2 = pdb_1414cd150(param_2);
  uVar3 = pdb_1409f1370(param_2);
  uVar4 = pdb_1414cdab0(param_2);
  *param_1 = uVar3;
  param_1[1] = uVar5;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar4;
  return param_1;
}

