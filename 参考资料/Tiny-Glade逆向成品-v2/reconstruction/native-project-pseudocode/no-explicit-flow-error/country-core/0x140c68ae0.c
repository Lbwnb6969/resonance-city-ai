// VA 0x140c68ae0, PDB extent 86 bytes
// country_core::systems::collision::world::impl$45::into_transformed_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::impl$45::into_transformed_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 86 */

undefined8 * pdb_140c68ae0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  pdb_140de8120(&uStack_38,param_2,lVar1 + 0x50);
  plVar2 = *(longlong **)(lVar1 + 0x20);
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
    *param_1 = uStack_28;
    param_1[1] = uStack_20;
    *(undefined4 *)(param_1 + 2) = uStack_38;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_34;
    *(undefined4 *)(param_1 + 3) = uStack_30;
    param_1[4] = plVar2;
    param_1[5] = uVar3;
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

