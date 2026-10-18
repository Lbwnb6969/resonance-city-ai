// VA 0x140b80de0, PDB extent 406 bytes
// country_core::systems::save::save_game::AutoSaveState::flush
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::save::save_game::AutoSaveState::flush
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 406 */

undefined8 pdb_140b80de0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int aiStack_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_141a54950(&uStack_78,1);
  iVar5 = iStack_68;
  uVar4 = uStack_6c;
  uVar3 = uStack_70;
  lVar2 = CONCAT44(uStack_64,iStack_68);
  uVar1 = CONCAT44(uStack_5c,uStack_60);
  uStack_70 = (undefined4)uStack_78;
  uStack_6c = uStack_78._4_4_;
  iStack_68 = uVar3;
  uStack_64 = uVar4;
  uStack_78 = 10;
  pdb_141a55160(aiStack_c8,param_1,&uStack_78);
  if (aiStack_c8[0] != 0xb) {
    uStack_48 = uStack_98;
    uStack_44 = uStack_94;
    uStack_40 = uStack_90;
    uStack_3c = uStack_8c;
    uStack_58 = uStack_a8;
    uStack_54 = uStack_a4;
    uStack_50 = uStack_a0;
    uStack_4c = uStack_9c;
    iStack_68 = uStack_b8;
    uStack_64 = uStack_b4;
    uStack_60 = uStack_b0;
    uStack_5c = uStack_ac;
    uStack_70 = uStack_c0;
    uStack_6c = uStack_bc;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14305d3a8,0x2b,&uStack_78,&UNK_14305d3d8,&UNK_14305ce10);
  }
  if (lVar2 == 0) {
    pdb_141a9a480(&uStack_78,uVar1);
  }
  else if (iVar5 == 1) {
    pdb_141a95670(&uStack_78,uVar1);
  }
  else {
    pdb_141c0d750(&uStack_78,uVar1);
  }
  if ((char)uStack_78 != '\x01') {
    uVar1 = CONCAT44(uStack_6c,uStack_70);
    pdb_140969610(auStack_88);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14305ce28,0x1e,&uStack_29,&UNK_14305d368,&UNK_14305ce48);
}

