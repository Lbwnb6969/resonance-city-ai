// VA 0x140c58350, PDB extent 403 bytes
// country_core::startup::load_prefabs::PrefabWatcher::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::load_prefabs::PrefabWatcher::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
   Extent: 403 */

longlong * pdb_140c58350(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  longlong lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  lStack_28 = 3;
  if (param_2 != '\0') {
    pdb_140c28b70(&lStack_58,0,100000000);
    if (lStack_58 == 3) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14306e9e0,0x1d,&uStack_88,&UNK_14306f550,&UNK_14306ea00);
    }
    lStack_68 = lStack_30;
    uStack_88 = CONCAT44(uStack_4c,uStack_50);
    uStack_80 = CONCAT44(uStack_44,uStack_48);
    uStack_78 = CONCAT44(uStack_3c,uStack_40);
    uStack_70 = CONCAT44(uStack_34,uStack_38);
    lStack_28 = lStack_58;
  }
  uStack_50 = (undefined4)uStack_88;
  uStack_4c = uStack_88._4_4_;
  uStack_48 = (undefined4)uStack_80;
  uStack_44 = uStack_80._4_4_;
  uStack_40 = (undefined4)uStack_78;
  uStack_3c = uStack_78._4_4_;
  uStack_38 = (undefined4)uStack_70;
  uStack_34 = uStack_70._4_4_;
  lStack_30 = lStack_68;
  lStack_58 = lStack_28;
  lStack_20 = pdb_140c7d190();
  lVar1 = pdb_140c7d190();
  param_1[4] = CONCAT44(uStack_34,uStack_38);
  param_1[5] = lStack_30;
  param_1[2] = CONCAT44(uStack_44,uStack_48);
  param_1[3] = CONCAT44(uStack_3c,uStack_40);
  *param_1 = lStack_58;
  param_1[1] = CONCAT44(uStack_4c,uStack_50);
  param_1[6] = lStack_20;
  param_1[7] = lVar1;
  return param_1;
}

