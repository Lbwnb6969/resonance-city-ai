// VA 0x1409f9910, PDB extent 241 bytes
// country_core::systems::collision::world::impl$23::to_offset_collider_builder
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::impl$23::to_offset_collider_builder
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 241 */

undefined8 * pdb_1409f9910(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined8 uStack_21;
  undefined1 uStack_19;
  
  plVar3 = *(longlong **)(param_3 + 0x20);
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  LOCK();
  lVar2 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 != 0 && SCARRY8(lVar2,1) == *plVar3 < 0) {
    pdb_140cd48c0(&uStack_98,plVar3,uVar4);
    param_1[0xc] = uStack_58;
    param_1[10] = uStack_68;
    param_1[0xb] = uStack_60;
    param_1[8] = uStack_78;
    param_1[9] = uStack_70;
    param_1[6] = uStack_88;
    param_1[7] = uStack_80;
    param_1[4] = uStack_98;
    param_1[5] = uStack_90;
    *(undefined8 *)((longlong)param_1 + 0x84) = uStack_34;
    *(ulonglong *)((longlong)param_1 + 0x8c) = CONCAT44(uStack_28,uStack_2c);
    *(undefined4 *)(param_1 + 0x12) = uStack_28;
    *(undefined2 *)((longlong)param_1 + 0x94) = uStack_24;
    *(undefined1 *)((longlong)param_1 + 0x96) = 1;
    *(undefined8 *)((longlong)param_1 + 0x97) = uStack_21;
    *(undefined1 *)((longlong)param_1 + 0x9f) = uStack_19;
    uVar1 = *(undefined4 *)(param_2 + 3);
    uVar4 = param_2[1];
    param_1[0xd] = *param_2;
    param_1[0xe] = uVar4;
    param_1[0xf] = param_2[2];
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar4 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar4;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

