// VA 0x140c62ff0, PDB extent 327 bytes
// country_core::systems::collision::world::impl$22::to_offset_collider_builder
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::impl$22::to_offset_collider_builder
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 327 */

undefined8 * pdb_140c62ff0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined8 uStack_31;
  undefined1 uStack_29;
  
  uStack_c8 = *(undefined4 *)(param_2 + 2);
  uStack_c4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_c0 = *(undefined4 *)(param_2 + 3);
  uStack_bc = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_d8 = *param_2;
  uStack_d0 = *(undefined4 *)(param_2 + 1);
  pdb_140de8100(&uStack_a8,&uStack_d8,&uStack_c8);
  pdb_140de8120(&uStack_c8,param_3 + 0x50,&uStack_a8);
  plVar2 = *(longlong **)(param_3 + 0x20);
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
    pdb_140cd48c0(&uStack_a8,plVar2,uVar3);
    param_1[0xc] = uStack_68;
    param_1[10] = uStack_78;
    param_1[0xb] = uStack_70;
    param_1[8] = uStack_88;
    param_1[9] = uStack_80;
    param_1[6] = uStack_98;
    param_1[7] = uStack_90;
    param_1[4] = uStack_a8;
    param_1[5] = uStack_a0;
    *(undefined4 *)(param_1 + 0x12) = uStack_38;
    *(undefined2 *)((longlong)param_1 + 0x94) = uStack_34;
    *(undefined1 *)((longlong)param_1 + 0x96) = 1;
    *(undefined8 *)((longlong)param_1 + 0x97) = uStack_31;
    *(undefined1 *)((longlong)param_1 + 0x9f) = uStack_29;
    *(undefined8 *)((longlong)param_1 + 0x84) = uStack_44;
    *(ulonglong *)((longlong)param_1 + 0x8c) = CONCAT44(uStack_38,uStack_3c);
    param_1[2] = CONCAT44(uStack_c4,uStack_c8);
    *(undefined4 *)(param_1 + 3) = uStack_c0;
    param_1[0xd] = uStack_b8;
    param_1[0xe] = uStack_b0;
    param_1[0xf] = CONCAT44(uStack_c4,uStack_c8);
    *(undefined4 *)(param_1 + 0x10) = uStack_c0;
    *param_1 = uStack_b8;
    param_1[1] = uStack_b0;
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

