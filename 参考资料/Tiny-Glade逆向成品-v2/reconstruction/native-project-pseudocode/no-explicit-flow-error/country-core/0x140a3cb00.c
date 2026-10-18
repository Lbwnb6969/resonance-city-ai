// VA 0x140a3cb00, PDB extent 308 bytes
// country_core::systems::save::save_backup_list::SaveBackupList::iter_backup_files
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_backup_list.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_backup_list::SaveBackupList::iter_backup_files
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_backup_list.rs
   Extent: 308 */

undefined8 * pdb_140a3cb00(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_68;
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
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_140f4f710(&uStack_2d8);
  uVar1 = uStack_2d0;
  if (uStack_2d8 == (undefined *)0x2) {
    uStack_38 = uStack_2d0;
    uStack_29 = 1;
    pdb_140f3f5b0(&uStack_2d8);
    uStack_48 = uStack_2b8;
    uStack_44 = uStack_2b4;
    uStack_40 = uStack_2b0;
    uStack_3c = uStack_2ac;
    uStack_58 = (undefined4)uStack_2c8;
    uStack_54 = uStack_2c8._4_4_;
    uStack_50 = uStack_2c0;
    uStack_4c = uStack_2bc;
    uStack_68 = (undefined4)uStack_2d8;
    uStack_64 = uStack_2d8._4_4_;
    uStack_60 = (undefined4)uStack_2d0;
    uStack_5c = uStack_2d0._4_4_;
    uStack_2d8 = &UNK_14303bb3c;
    uStack_2d0 = 0x23;
    uStack_2c8 = uVar1;
    uStack_29 = 0;
    uStack_2d0 = pdb_142dea990(&uStack_2d8,&uStack_68);
    uVar1 = 2;
    lVar2 = 8;
  }
  else {
    pub_142e32760(param_1 + 0x9a,&uStack_2c8,0x260);
    param_1[0x4c] = 0;
    param_1[0x98] = uStack_2d8;
    lVar2 = 0x4c8;
    uVar1 = 0;
  }
  *(undefined8 *)((longlong)param_1 + lVar2) = uStack_2d0;
  *param_1 = uVar1;
  return param_1;
}

