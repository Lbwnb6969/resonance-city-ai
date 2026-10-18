// VA 0x1408f3400, PDB extent 114 bytes
// system_decorator::blueprint::DecoratorBlueprint::add_door_stairs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::blueprint::DecoratorBlueprint::add_door_stairs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
   Extent: 114 */

void pdb_1408f3400(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(0x20,4);
  if (pbVar4 != (byte *)0x0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    *(undefined8 *)(pbVar4 + 0x10) = param_2[2];
    *(undefined8 *)(pbVar4 + 0x18) = uVar3;
    *(undefined8 *)pbVar4 = uVar1;
    *(undefined8 *)(pbVar4 + 8) = uVar2;
    if (*(byte **)(param_1 + 0x150) != (byte *)0x0) {
      pub_1406abac0(*(byte **)(param_1 + 0x150),0x20,4);
    }
    *(byte **)(param_1 + 0x150) = pbVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0x20);
}

