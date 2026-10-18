// VA 0x140b80bf0, PDB extent 478 bytes
// country_core::systems::save::save_game::AutoSaveState::close_file
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::save::save_game::AutoSaveState::close_file
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 478 */

void pdb_140b80bf0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
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
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_40 [16];
  longlong lStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_141a54c60(&uStack_88,1);
  iVar5 = iStack_78;
  uVar4 = uStack_7c;
  uVar3 = uStack_80;
  lVar1 = CONCAT44(uStack_74,iStack_78);
  uVar2 = CONCAT44(uStack_6c,uStack_70);
  uStack_80 = (undefined4)uStack_88;
  uStack_7c = uStack_88._4_4_;
  iStack_78 = uVar3;
  uStack_74 = uVar4;
  uStack_88 = 4;
  pdb_141a55160(aiStack_c8,param_1,&uStack_88);
  if (aiStack_c8[0] == 0xb) {
    if (lVar1 == 0) {
      pdb_141a9a060(uVar2);
    }
    else if (iVar5 == 1) {
      pdb_141a94b90(uVar2);
    }
    else {
      pdb_141c0d020(uVar2);
    }
    *(undefined8 *)(param_1 + 0x170) = 0;
    if (!SBORROW8(0,*(longlong *)(param_1 + 0x28))) {
      lStack_30 = param_1 + 0x28;
      pdb_14099b1f0();
    }
    *(undefined8 *)(param_1 + 0x28) = 0x8000000000000000;
    *(undefined4 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x194) = _DAT_143022ca0;
    pdb_14096d970(auStack_40);
    return;
  }
  uStack_58 = uStack_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  uStack_68 = uStack_a8;
  uStack_64 = uStack_a4;
  uStack_60 = uStack_a0;
  uStack_5c = uStack_9c;
  iStack_78 = uStack_b8;
  uStack_74 = uStack_b4;
  uStack_70 = uStack_b0;
  uStack_6c = uStack_ac;
  uStack_80 = uStack_c0;
  uStack_7c = uStack_bc;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14305d3a8,0x2b,&uStack_88,&UNK_14305d3d8,&UNK_14305cdf8);
}

