// VA 0x1408f3e20, PDB extent 78 bytes
// system_decorator::blueprint::DecoratorBlueprints::remove
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::blueprint::DecoratorBlueprints::remove
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
   Extent: 78 */

void pdb_1408f3e20(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined4 uStack_1c;
  longlong *plStack_18;
  
  uStack_1c = param_2;
  plVar1 = (longlong *)pdb_1400aede0(param_1 + 0x20,&uStack_1c);
  pdb_1414ae460(param_1,plVar1,&uStack_1c);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plStack_18 = plVar1;
      pdb_1408f7f60(&plStack_18);
    }
  }
  return;
}

