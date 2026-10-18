// VA 0x140a457e0, PDB extent 405 bytes
// country_core::asset_libraries::configwatch::ConfigWatch::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/configwatch.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::asset_libraries::configwatch::ConfigWatch::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/configwatch.rs
   Extent: 405 */

longlong * pdb_140a457e0(longlong *param_1,char param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong lStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  lVar2 = 3;
  if (param_2 != '\0') {
    pdb_140c28b70(&lStack_50,0,100000000);
    if (lStack_50 == 3) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14303c760,0x1d,&uStack_78,&UNK_14303d020,&UNK_14303c7b8);
    }
    lStack_58 = lStack_28;
    uStack_78 = CONCAT44(uStack_44,uStack_48);
    uStack_70 = CONCAT44(uStack_3c,uStack_40);
    uStack_68 = CONCAT44(uStack_34,uStack_38);
    uStack_60 = CONCAT44(uStack_2c,uStack_30);
    lVar2 = lStack_50;
  }
  uStack_48 = (undefined4)uStack_78;
  uStack_44 = uStack_78._4_4_;
  uStack_40 = (undefined4)uStack_70;
  uStack_3c = uStack_70._4_4_;
  uStack_38 = (undefined4)uStack_68;
  uStack_34 = uStack_68._4_4_;
  uStack_30 = (undefined4)uStack_60;
  uStack_2c = uStack_60._4_4_;
  lStack_28 = lStack_58;
  lStack_50 = lVar2;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x30,8);
  if (pbVar1 != (byte *)0x0) {
    pbVar1[0] = 1;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1[4] = 0;
    pbVar1[5] = 0;
    pbVar1[6] = 0;
    pbVar1[7] = 0;
    pbVar1[8] = 1;
    pbVar1[9] = 0;
    pbVar1[10] = 0;
    pbVar1[0xb] = 0;
    pbVar1[0xc] = 0;
    pbVar1[0xd] = 0;
    pbVar1[0xe] = 0;
    pbVar1[0xf] = 0;
    pbVar1[0x10] = 0;
    pbVar1[0x11] = 0;
    pbVar1[0x18] = 0;
    pbVar1[0x19] = 0;
    pbVar1[0x1a] = 0;
    pbVar1[0x1b] = 0;
    pbVar1[0x1c] = 0;
    pbVar1[0x1d] = 0;
    pbVar1[0x1e] = 0;
    pbVar1[0x1f] = 0x80;
    param_1[4] = CONCAT44(uStack_2c,uStack_30);
    param_1[5] = lStack_28;
    param_1[2] = CONCAT44(uStack_3c,uStack_40);
    param_1[3] = CONCAT44(uStack_34,uStack_38);
    *param_1 = lStack_50;
    param_1[1] = CONCAT44(uStack_44,uStack_48);
    param_1[6] = (longlong)pbVar1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x30);
}

