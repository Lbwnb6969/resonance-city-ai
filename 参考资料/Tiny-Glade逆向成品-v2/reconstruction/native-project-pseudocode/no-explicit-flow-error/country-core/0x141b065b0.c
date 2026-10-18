// VA 0x141b065b0, PDB extent 1018 bytes
// country_core::startup::load_clutter_packs::discover_clutter_part
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_clutter_packs::discover_clutter_part
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
   Extent: 1018 */

longlong * pdb_141b065b0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulonglong uStack_150;
  byte *pbStack_148;
  ulonglong uStack_140;
  undefined1 uStack_138;
  undefined8 *puStack_130;
  code *pcStack_128;
  longlong *plStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 **ppuStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 *puStack_88;
  code *pcStack_80;
  longlong *plStack_78;
  code *pcStack_70;
  longlong lStack_68;
  ulonglong uStack_60;
  byte *pbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (SBORROW8(0,param_2[0xc])) {
    uVar3 = param_2[9];
    uVar4 = param_2[10];
    pdb_140d9aa70(&uStack_100,uVar3,uVar4);
    if (SBORROW8(0,uStack_100)) {
      *param_1 = -0x8000000000000000;
      return param_1;
    }
    if (uStack_100 != 0) {
      pub_1406abac0(uStack_f8,uStack_100,1);
    }
  }
  else {
    uVar3 = param_2[9];
    uVar4 = param_2[10];
  }
  uVar6 = uVar4 == 0;
  if (-1 < (longlong)uVar4) goto LAB_141b06647;
  uVar5 = 0;
  while( true ) {
    uVar6 = 1;
    pdb_142dc7e2a(uVar5,uVar4);
LAB_141b06647:
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uStack_60 = uVar4;
    if ((bool)uVar6) break;
    pdb_14007ee60();
    uVar5 = 1;
    pbStack_58 = pub_1406abab0(uVar4,1);
    if (pbStack_58 != (byte *)0x0) {
      pub_142e32760(pbStack_58,uVar3,uVar4);
LAB_141b06697:
      uVar6 = *(undefined1 *)(param_2 + 0xb);
      pdb_140f60be0(&puStack_88,param_2 + 2);
      pdb_140f60be0(&uStack_100,param_2 + 5);
      uVar4 = uStack_60;
      uStack_150 = uStack_60;
      pbStack_148 = pbStack_58;
      uStack_140 = uStack_60;
      puStack_130 = puStack_88;
      pcStack_128 = pcStack_80;
      plStack_120 = plStack_78;
      uStack_118 = (undefined4)uStack_100;
      uStack_114 = uStack_100._4_4_;
      uStack_110 = (undefined4)uStack_f8;
      uStack_10c = uStack_f8._4_4_;
      uStack_108 = uStack_f0;
      uStack_160 = uVar1;
      uStack_158 = uVar2;
      uStack_138 = uVar6;
      pdb_140c8ab10(&lStack_a0,&uStack_160);
      if (SBORROW8(0,lStack_a0)) {
        lStack_68 = lStack_98;
        if (*_DAT_143ca8e90 != 0) {
          pcStack_80 = pdb_140094770;
          plStack_78 = &lStack_68;
          pcStack_70 = pdb_140f36c30;
          uStack_100 = 0;
          uStack_f8 = &UNK_14338d070;
          uStack_f0 = 0x29;
          uStack_e8 = 0;
          puStack_e0 = &UNK_14338d03a;
          uStack_d8 = 0x35;
          uStack_d0 = 1;
          puStack_c8 = &UNK_14338d070;
          uStack_c0 = 0x29;
          uStack_b8 = 0x4500000001;
          puStack_b0 = &UNK_14338d10b;
          ppuStack_a8 = &puStack_88;
          puStack_88 = param_2 + 5;
          pdb_140f332f0(&uStack_49,&uStack_100);
        }
        *param_1 = -0x8000000000000000;
        pdb_140f36c40(&lStack_68);
        uVar4 = uStack_150;
      }
      else {
        param_1[2] = lStack_90;
        *param_1 = lStack_a0;
        param_1[1] = lStack_98;
      }
      if (uVar4 != 0) {
        pub_1406abac0(pbStack_148,uVar4,1);
      }
      if (puStack_130 != (undefined8 *)0x0) {
        pub_1406abac0((byte *)pcStack_128,(ulonglong)puStack_130,1);
      }
      if (CONCAT44(uStack_114,uStack_118) != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_10c,uStack_110),CONCAT44(uStack_114,uStack_118),1);
      }
      return param_1;
    }
  }
  pbStack_58 = (byte *)0x1;
  goto LAB_141b06697;
}

