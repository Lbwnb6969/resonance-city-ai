// VA 0x1414d1de0, PDB extent 213 bytes
// system_decorator::ui_systems::ui_decorator_affordance_dispatch::create_decorator_widget<system_decorator::decorator_resources::DecoratorHandleName>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_decorator_affordance_dispatch.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_decorator_affordance_dispatch::create_decorator_widget<system_decorator::decorator_resources::DecoratorHandleName>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_decorator_affordance_dispatch.rs
   Extent: 213 */

void pdb_1414d1de0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_e8 [169];
  byte bStack_3f;
  
  uStack_198 = CONCAT44(param_4,(undefined4)uStack_198);
  uStack_198 = CONCAT71(uStack_198._1_7_,5);
  auStack_1a8[0] = 0;
  pdb_140c9dcb0(auStack_e8,&uStack_198,auStack_1a8);
  bStack_3f = (param_5 == 7) << 3 | bStack_3f | 2;
  pub_142e32760(&uStack_198,auStack_e8,0xb0);
  pdb_140c9dd20(auStack_e8,&uStack_198,param_7);
  uStack_198 = pdb_1414aeb10(param_1,param_2,param_3,auStack_e8);
  uStack_190 = param_2;
  pdb_14072cd40(&uStack_198);
  return;
}

