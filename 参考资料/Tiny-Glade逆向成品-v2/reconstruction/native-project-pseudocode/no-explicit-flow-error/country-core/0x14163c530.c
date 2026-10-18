// VA 0x14163c530, PDB extent 1021 bytes
// country_core::startup::bake_mod_textures::texture_mappings
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/bake_mod_textures.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::bake_mod_textures::texture_mappings
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/bake_mod_textures.rs
   Extent: 1021 */

void pdb_14163c530(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong arg1;
  ulonglong arg2;
  undefined8 *puStack_118;
  code *pcStack_110;
  byte **ppbStack_108;
  code *pcStack_100;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  byte *pbStack_c0;
  longlong lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 **ppuStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte *pbStack_40;
  byte *pbStack_38;
  undefined *puStack_30;
  undefined1 uStack_21;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_d8 = param_2;
  uStack_d0 = param_3;
  pdb_140f55d10(&puStack_c8);
  if (SBORROW8(0,(longlong)puStack_c8)) {
    pdb_1404b38e0(&pbStack_c0);
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    return;
  }
  puStack_30 = puStack_c8;
  pbStack_38 = pbStack_c0;
  pdb_14164f410(&uStack_f8,pbStack_c0,lStack_b8);
  if ((char)uStack_f8 == '\x06') {
    pbStack_40 = (byte *)CONCAT44(uStack_ec,uStack_f0);
    if (1 < *_DAT_143ca8e90) {
      puStack_118 = &uStack_d8;
      pcStack_110 = pdb_140117670;
      ppbStack_108 = &pbStack_40;
      pcStack_100 = pdb_140de07e0;
      puStack_c8 = (undefined *)0x0;
      pbStack_c0 = &UNK_1433209d4;
      lStack_b8 = 0x28;
      puStack_b0 = (undefined *)0x0;
      puStack_a8 = &UNK_14332099f;
      uStack_a0 = 0x34;
      lStack_98 = 2;
      puStack_90 = &UNK_1433209d4;
      uStack_88 = 0x28;
      uStack_80 = 0x13100000001;
      puStack_78 = &UNK_143320a5e;
      ppuStack_70 = &puStack_118;
      pdb_140f332f0(&uStack_21,&puStack_c8);
    }
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    pbStack_20 = pbStack_40;
    if (*(longlong *)pbStack_40 == 1) {
      pdb_1404b38e0(pbStack_40 + 8);
    }
    else if ((*(longlong *)pbStack_40 == 0) && (*(ulonglong *)(pbStack_40 + 0x10) != 0)) {
      pub_1406abac0(*(byte **)(pbStack_40 + 8),*(ulonglong *)(pbStack_40 + 0x10),1);
    }
    arg1 = 0x28;
LAB_14163c79e:
    arg2 = 8;
  }
  else {
    uStack_58 = uStack_e8;
    uStack_54 = uStack_e4;
    uStack_50 = uStack_e0;
    uStack_4c = uStack_dc;
    uStack_68 = uStack_f8;
    uStack_64 = uStack_f4;
    uStack_60 = uStack_f0;
    uStack_5c = uStack_ec;
    uStack_f8 = uStack_f8 & 0xff;
    if (uStack_f8 == 5) {
      lStack_b8 = CONCAT44(uStack_ec,uStack_f0);
      puStack_b0 = (undefined *)CONCAT44(uStack_e4,uStack_e8);
      puStack_c8 = (undefined *)(ulonglong)(lStack_b8 != 0);
      uStack_88 = 0;
      if (lStack_b8 != 0) {
        uStack_88 = CONCAT44(uStack_dc,uStack_e0);
      }
      pbStack_c0 = (byte *)0x0;
      uStack_a0 = 0;
      puStack_a8 = puStack_c8;
      lStack_98 = lStack_b8;
      puStack_90 = puStack_b0;
      pdb_1415f7cb0(param_1,&puStack_c8);
      pdb_1409a45e0(&uStack_60);
      goto LAB_14163c7b0;
    }
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    if (uStack_f8 < 3) goto LAB_14163c7b0;
    if (uStack_f8 != 3) {
      pbStack_20 = (byte *)CONCAT44(uStack_e4,uStack_e8);
      pdb_14098ae50(pbStack_20,CONCAT44(uStack_dc,uStack_e0));
      if (CONCAT44(uStack_5c,uStack_60) == 0) goto LAB_14163c7b0;
      arg1 = CONCAT44(uStack_5c,uStack_60) << 5;
      goto LAB_14163c79e;
    }
    arg1 = CONCAT44(uStack_ec,uStack_f0);
    if (arg1 == 0) goto LAB_14163c7b0;
    pbStack_20 = (byte *)CONCAT44(uStack_e4,uStack_e8);
    arg2 = 1;
  }
  pub_1406abac0(pbStack_20,arg1,arg2);
LAB_14163c7b0:
  if (puStack_30 == (undefined *)0x0) {
    return;
  }
  pub_1406abac0(pbStack_38,(ulonglong)puStack_30,1);
  return;
}

