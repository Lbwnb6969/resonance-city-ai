// VA 0x1418c0450, PDB extent 286 bytes
// country_core::systems::save::save_file_identity::derive_fallback_save_file_identity
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_file_identity.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_file_identity::derive_fallback_save_file_identity
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_file_identity.rs
   Extent: 286 */

longlong pdb_1418c0450(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_d8;
  longlong lStack_d0;
  undefined8 *puStack_c8;
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
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
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
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  uVar2 = param_2;
  lStack_d0 = pdb_140f3ecf0();
  puStack_c8 = (undefined8 *)uVar2;
  lVar1 = pdb_140bb9a80(&lStack_d0);
  pdb_140f4f620(&lStack_d0,param_1,param_2);
  if ((int)lStack_d0 == 2) {
    lStack_78 = 2;
  }
  else {
    lStack_78 = lStack_d0;
    uStack_70 = puStack_c8;
    uStack_28 = uStack_80;
    uStack_38 = uStack_90;
    uStack_34 = uStack_8c;
    uStack_30 = uStack_88;
    uStack_2c = uStack_84;
    uStack_48 = uStack_a0;
    uStack_44 = uStack_9c;
    uStack_40 = uStack_98;
    uStack_3c = uStack_94;
    uStack_58 = uStack_b0;
    uStack_54 = uStack_ac;
    uStack_50 = uStack_a8;
    uStack_4c = uStack_a4;
    uStack_68 = uStack_c0;
    uStack_64 = uStack_bc;
    uStack_60 = uStack_b8;
    uStack_5c = uStack_b4;
    if (lStack_d0 != 2) {
      lStack_d0 = lVar1;
      puStack_c8 = &uStack_d8;
      lStack_d0 = pdb_140bbb390(&lStack_d0);
      uStack_d8 = CONCAT44(uStack_44,uStack_48);
      puStack_c8 = &uStack_d8;
      uVar2 = pdb_140bbb390(&lStack_d0);
      return uVar2;
    }
  }
  uStack_70 = puStack_c8;
  pdb_1404b38e0(&uStack_70);
  return lVar1;
}

