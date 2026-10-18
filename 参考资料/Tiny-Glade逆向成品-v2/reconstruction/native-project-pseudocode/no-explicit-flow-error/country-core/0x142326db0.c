// VA 0x142326db0, PDB extent 574 bytes
// country_core::systems::save::save_game::AutoSaveState::create_backup_of<std::path::PathBuf>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_game::AutoSaveState::create_backup_of<std::path::PathBuf>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 574 */

undefined8 pdb_142326db0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
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
  longlong lStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  code *pcStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *puStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uStack_31 = 1;
  puStack_40 = param_3;
  pdb_141a54950(&puStack_88,1);
  uVar2 = uStack_70;
  lVar1 = lStack_78;
  lStack_98 = lStack_78;
  uStack_90 = uStack_70;
  lStack_78 = *puStack_40;
  uStack_70 = puStack_40[1];
  uStack_68 = *(undefined4 *)(puStack_40 + 2);
  uStack_64 = *(undefined4 *)((longlong)puStack_40 + 0x14);
  uStack_60 = *(undefined4 *)(puStack_40 + 3);
  uStack_5c = *(undefined4 *)((longlong)puStack_40 + 0x1c);
  uStack_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  pdb_1429ba620(&puStack_d8,param_1,&puStack_88);
  if ((int)puStack_d8 == 0xb) {
    if (lVar1 == 0) {
      pdb_1423039a0(&puStack_88,uVar2);
    }
    else if ((int)lVar1 == 1) {
      pdb_1423011f0(&puStack_88,uVar2);
    }
    else {
      pdb_1429936c0(&puStack_88,uVar2);
    }
    if ((char)puStack_88 != '\x01') {
      uStack_31 = 0;
      pdb_1411774c0(&lStack_98);
      return pcStack_80;
    }
    puStack_88 = &uStack_32;
    pcStack_80 = pdb_142326d90;
    uStack_c8 = pdb_142e191d0(&puStack_88);
    puStack_d8 = &UNK_1434da18c;
    pcStack_d0 = (code *)0x22;
    puStack_88 = (undefined1 *)0x3;
    uVar2 = pdb_142dcea00(&puStack_d8,&puStack_88);
  }
  else {
    uStack_58 = uStack_a8;
    uStack_54 = uStack_a4;
    uStack_50 = uStack_a0;
    uStack_4c = uStack_9c;
    uStack_68 = uStack_b8;
    uStack_64 = uStack_b4;
    uStack_60 = uStack_b0;
    uStack_5c = uStack_ac;
    lStack_78 = uStack_c8;
    uStack_70 = CONCAT44(uStack_bc,uStack_c0);
    pcStack_80 = pcStack_d0;
    uStack_c8 = pdb_142e19160(&puStack_88);
    puStack_d8 = &UNK_1434da169;
    pcStack_d0 = (code *)0x23;
    puStack_88 = (undefined1 *)0x3;
    uVar2 = pdb_142dcea00(&puStack_d8,&puStack_88);
  }
  uStack_31 = 0;
  pdb_1411774c0(&lStack_98);
  return uVar2;
}

