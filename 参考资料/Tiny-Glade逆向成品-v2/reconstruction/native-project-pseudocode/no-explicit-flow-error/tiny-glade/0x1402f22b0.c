// VA 0x1402f22b0, PDB extent 1662 bytes
// tiny_glade::app_config::get_app_config
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::app_config::get_app_config
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_config.rs
   Extent: 1662 */

undefined8 * pdb_1402f22b0(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined4 *puStack_2f8;
  code *pcStack_2f0;
  ulonglong *puStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined *puStack_2a8;
  undefined4 *puStack_1d0;
  code *pcStack_1c8;
  ulonglong *puStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined4 **ppuStack_178;
  undefined2 uStack_ec;
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
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  code *pcStack_48;
  undefined4 *puStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lVar6 = param_2;
  uVar2 = pdb_140dc7520();
  pdb_140f3e9e0(&uStack_68,uVar2,lVar6,&UNK_142f3964a,0xc);
  uVar2 = uStack_58;
  pbVar5 = pbStack_60;
  pbVar7 = pbStack_60;
  pdb_140f4f620(&puStack_1d0,pbStack_60,uStack_58);
  if ((int)puStack_1d0 != 2) {
    puStack_2f8 = puStack_1d0;
    pcStack_2f0 = pcStack_1c8;
    puStack_2a8 = puStack_180;
    uStack_2b8 = (undefined4)uStack_190;
    uStack_2b4 = uStack_190._4_4_;
    uStack_2b0 = (undefined4)uStack_188;
    uStack_2ac = uStack_188._4_4_;
    uStack_2c8 = uStack_1a0;
    puStack_2c0 = puStack_198;
    puStack_2d8 = puStack_1b0;
    uStack_2d0 = uStack_1a8;
    puStack_2e8 = puStack_1c0;
    pcStack_2e0 = pcStack_1b8;
    if (puStack_1d0 == (undefined4 *)0x2) goto LAB_1402f2389;
LAB_1402f2640:
    pdb_140f55d10(&puStack_1d0,pbVar5,uVar2);
    if (SBORROW8(0,(longlong)puStack_1d0)) {
      pdb_1404b38e0(&pcStack_1c8);
LAB_1402f26fe:
      pdb_140a395b0(&puStack_1d0);
      if (*(char *)(param_2 + 0x144) != '\0') goto LAB_1402f2765;
LAB_1402f2759:
      if (!SBORROW8(0,*(longlong *)(param_2 + 0xc0))) goto LAB_1402f2765;
    }
    else {
      puStack_40 = puStack_1d0;
      puStack_2e8 = (ulonglong *)0x0;
      puStack_2f8 = (undefined4 *)0x1;
      pcStack_2f0 = (code *)0x80;
      pcStack_48 = pcStack_1c8;
      pdb_140391890(&puStack_1d0,&puStack_2f8,pcStack_1c8,puStack_1c0);
      puVar1 = puStack_1d0;
      if (SBORROW8(0,(longlong)puStack_1d0)) {
        pdb_1404b4a50(&pcStack_1c8);
      }
      else {
        pub_142e32760(&puStack_2f8,&pcStack_1c8,0x120);
      }
      if (puStack_40 != (undefined4 *)0x0) {
        pub_1406abac0((byte *)pcStack_48,(ulonglong)puStack_40,1);
      }
      if (SBORROW8(0,(longlong)puVar1)) goto LAB_1402f26fe;
      puStack_1d0 = puVar1;
      pub_142e32760(&pcStack_1c8,&puStack_2f8,0x120);
      if (*(char *)(param_2 + 0x144) == '\0') goto LAB_1402f2759;
LAB_1402f2765:
      uStack_ec = 0x101;
    }
    pdb_140a31a70(&puStack_1d0);
    pub_142e32760(param_1,&puStack_1d0,0x128);
    goto LAB_1402f2790;
  }
  puStack_2f8 = (undefined4 *)0x2;
LAB_1402f2389:
  pdb_1404b38e0(&pcStack_2f0);
  uVar2 = pdb_140dc7550();
  pdb_140f3e9e0(&uStack_a8,uVar2,pbVar7,&UNK_142f395ab,0x14);
  uStack_31 = 1;
  pdb_140f4f620(&puStack_1d0,CONCAT44(uStack_9c,uStack_a0),CONCAT44(uStack_94,uStack_98));
  if ((int)puStack_1d0 == 2) {
    puStack_2f8 = (undefined4 *)0x2;
LAB_1402f2448:
    pcStack_2f0 = pcStack_1c8;
    uStack_31 = 1;
    pdb_1404b38e0(&pcStack_2f0);
    pcStack_1c8 = pdb_140f58250;
    uStack_31 = 1;
    puStack_1d0 = &uStack_a8;
    uVar2 = pdb_142d84810(&puStack_1d0);
    param_1[1] = uVar2;
    *param_1 = 0x8000000000000000;
    uVar4 = CONCAT44(uStack_a4,uStack_a8);
    if (uVar4 == 0) goto LAB_1402f2790;
    pbVar5 = (byte *)CONCAT44(uStack_9c,uStack_a0);
  }
  else {
    puStack_2f8 = puStack_1d0;
    pcStack_2f0 = pcStack_1c8;
    puStack_2a8 = puStack_180;
    uStack_2b8 = (undefined4)uStack_190;
    uStack_2b4 = uStack_190._4_4_;
    uStack_2b0 = (undefined4)uStack_188;
    uStack_2ac = uStack_188._4_4_;
    uStack_2c8 = uStack_1a0;
    puStack_2c0 = puStack_198;
    puStack_2d8 = puStack_1b0;
    uStack_2d0 = uStack_1a8;
    puStack_2e8 = puStack_1c0;
    pcStack_2e0 = pcStack_1b8;
    if (puStack_1d0 == (undefined4 *)0x2) goto LAB_1402f2448;
    uStack_88 = uStack_a8;
    uStack_84 = uStack_a4;
    uStack_80 = uStack_a0;
    uStack_7c = uStack_9c;
    uStack_78 = uStack_98;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    uVar2 = CONCAT44(uStack_94,uStack_98);
    uVar3 = pdb_140f4f180(CONCAT44(uStack_9c,uStack_a0),uVar2,pbStack_60,uStack_58);
    uVar4 = pdb_140164a30(uVar3);
    if ((uVar4 & 1) == 0) {
      if (2 < *_DAT_143ca8e90) {
        pcStack_2f0 = pdb_140f58250;
        pcStack_2e0 = pdb_140f58250;
        puStack_1d0 = (undefined4 *)0x0;
        pcStack_1c8 = (code *)&UNK_142f39634;
        puStack_1c0 = (ulonglong *)0x16;
        pcStack_1b8 = (code *)0x0;
        puStack_1b0 = &UNK_142f39610;
        uStack_1a8 = 0x23;
        uStack_1a0 = 3;
        puStack_198 = &UNK_142f39634;
        uStack_190 = 0x16;
        uStack_188 = 0xf900000001;
        puStack_180 = &UNK_142f395f2;
        ppuStack_178 = &puStack_2f8;
        puStack_2f8 = &uStack_88;
        puStack_2e8 = &uStack_68;
        pdb_140f332f0(&uStack_32,&puStack_1d0);
      }
      pbVar5 = pbStack_60;
      uVar2 = uStack_58;
      if (CONCAT44(uStack_84,uStack_88) != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_7c,uStack_80),CONCAT44(uStack_84,uStack_88),1);
        pbVar5 = pbStack_60;
        uVar2 = uStack_58;
      }
      goto LAB_1402f2640;
    }
    param_1[1] = uVar2;
    *param_1 = 0x8000000000000000;
    uVar4 = CONCAT44(uStack_84,uStack_88);
    if (uVar4 == 0) goto LAB_1402f2790;
    pbVar5 = (byte *)CONCAT44(uStack_7c,uStack_80);
  }
  pub_1406abac0(pbVar5,uVar4,1);
LAB_1402f2790:
  if (uStack_68 != 0) {
    pub_1406abac0(pbStack_60,uStack_68,1);
  }
  return param_1;
}

