// VA 0x141b05c30, PDB extent 1837 bytes
// country_core::startup::load_clutter_packs::InFlightPackBuild::poll
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_clutter_packs::InFlightPackBuild::poll
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
   Extent: 1837 */

undefined8 pdb_141b05c30(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  longlong **pplStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  longlong lStack_110;
  longlong lStack_108;
  undefined8 uStack_100;
  longlong *plStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  longlong **pplStack_60;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_148 = (longlong *)(param_1 + 0x18);
  puVar5 = &UNK_143386450;
  lStack_108 = param_2;
  uStack_100 = param_3;
  uStack_b8 = (longlong **)&uStack_148;
  pdb_1416fc930(&plStack_f8,&UNK_143386450,&uStack_b8);
  if (SBORROW8(0,(longlong)uStack_e8)) {
    plStack_188 = plStack_f8;
    if (*_DAT_143ca8e90 != 0) {
      uStack_148 = &lStack_108;
      uStack_140 = pdb_1402ed400;
      pplStack_138 = &plStack_188;
      pcStack_130 = pdb_140f36c30;
      uStack_b8 = (longlong **)0x0;
      uStack_b0 = &UNK_14338d070;
      uStack_a8 = 0x29;
      uStack_a0 = 0;
      puStack_98 = &UNK_14338d03a;
      puStack_90 = (undefined *)0x35;
      uStack_88 = 1;
      puStack_80 = &UNK_14338d070;
      uStack_78 = 0x29;
      uStack_70 = 0x1a200000001;
      puStack_68 = &UNK_14338d0e2;
      pplStack_60 = (longlong **)&uStack_148;
      pdb_140f332f0(&uStack_4a,&uStack_b8);
    }
    pdb_140f36c40(&plStack_188);
    return 2;
  }
  if (uStack_e8 == (longlong *)0x8000000000000001) {
    return 0;
  }
  uStack_168 = (undefined4)uStack_d8;
  uStack_164 = uStack_d8._4_4_;
  uStack_160 = (undefined4)uStack_d0;
  uStack_15c = uStack_d0._4_4_;
  uStack_178 = (undefined4)uStack_e8;
  uStack_174 = uStack_e8._4_4_;
  uStack_170 = (undefined4)uStack_e0;
  uStack_16c = uStack_e0._4_4_;
  uStack_180 = (undefined4)uStack_f0;
  uStack_17c = uStack_f0._4_4_;
  lVar6 = *(longlong *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  uStack_49 = 1;
  puVar2 = (undefined8 *)pdb_140f3bda0();
  if (*(char *)(puVar2 + 2) == '\x01') {
    puStack_98 = (undefined *)*puVar2;
    puVar5 = (undefined *)puVar2[1];
  }
  else {
    uStack_49 = 1;
    puStack_98 = (undefined *)pdb_140f4fd10();
    *puVar2 = puStack_98;
    puVar2[1] = puVar5;
    *(undefined1 *)(puVar2 + 2) = 1;
  }
  *puVar2 = puStack_98 + 1;
  uStack_a8 = _DAT_14338cfe0;
  uStack_a0 = _UNK_14338cfe8;
  uStack_b8._0_4_ = _DAT_14338cfd0;
  uStack_b8._4_4_ = _UNK_14338cfd4;
  uStack_b0._0_4_ = _UNK_14338cfd8;
  uStack_b0._4_4_ = _UNK_14338cfdc;
  puStack_90 = puVar5;
  if (lVar1 != 0) {
    pdb_142d9b130(&uStack_b8,lVar1,&puStack_98,1);
    lVar8 = 0;
    do {
      uVar4 = pdb_140c8aa20(lVar8 * 0x90 + lVar6);
      pdb_1417bba20(&uStack_b8,uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar1);
  }
  puStack_128 = puStack_98;
  puStack_120 = puStack_90;
  pplStack_138 = (longlong **)uStack_a8;
  pcStack_130 = (code *)uStack_a0;
  uStack_148 = (longlong *)CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8);
  uStack_140 = (code *)CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
  lVar6 = *(longlong *)(param_1 + 8);
  uVar3 = pdb_141b0b950(&plStack_188,lVar6,*(undefined8 *)(param_1 + 0x10),&uStack_148,0,param_4);
  if ((uVar3 & 1) == 0) {
    lStack_110 = *(longlong *)(param_1 + 0x10);
    lStack_150 = lVar6;
    if (lStack_110 == lVar6) {
      uVar4 = 1;
      if (*_DAT_143ca8e90 < 3) goto LAB_141b06134;
      plStack_f8 = &lStack_110;
      uStack_f0 = pdb_140f72a40;
      uStack_e8 = &lStack_108;
      uStack_e0 = pdb_1402ed400;
      uStack_b8._0_4_ = 0;
      uStack_b8._4_4_ = 0;
      uStack_b0._0_4_ = 0x4338d070;
      uStack_b0._4_4_ = 1;
      uStack_a8 = 0x29;
      uStack_a0 = 0;
      puStack_98 = &UNK_14338d03a;
      puStack_90 = (undefined *)0x35;
      uStack_88 = 3;
      puStack_80 = &UNK_14338d070;
      uStack_78 = 0x29;
      uStack_70 = 0x1b000000001;
      puStack_68 = &UNK_14338d099;
      pplStack_60 = &plStack_f8;
      pdb_140f332f0(&uStack_4a,&uStack_b8);
    }
    else {
      uVar4 = 1;
      if (*_DAT_143ca8e90 < 3) goto LAB_141b06134;
      plStack_f8 = &lStack_150;
      uStack_f0 = pdb_140f72a40;
      uStack_e8 = &lStack_110;
      uStack_e0 = pdb_140f72a40;
      uStack_d8 = &lStack_108;
      uStack_d0 = pdb_1402ed400;
      uStack_b8._0_4_ = 0;
      uStack_b8._4_4_ = 0;
      uStack_b0._0_4_ = 0x4338d070;
      uStack_b0._4_4_ = 1;
      uStack_a8 = 0x29;
      uStack_a0 = 0;
      puStack_98 = &UNK_14338d03a;
      puStack_90 = (undefined *)0x35;
      uStack_88 = 3;
      puStack_80 = &UNK_14338d070;
      uStack_78 = 0x29;
      uStack_70 = 0x1b200000001;
      puStack_68 = &UNK_14338cff0;
      pplStack_60 = &plStack_f8;
      pdb_140f332f0(&uStack_4a,&uStack_b8);
    }
    uVar4 = 1;
  }
  else {
    lStack_c0 = lVar6;
    if (*_DAT_143ca8e90 != 0) {
      plStack_f8 = &lStack_108;
      uStack_f0 = pdb_1402ed400;
      uStack_e8 = &lStack_c0;
      uStack_e0 = pdb_140f36c30;
      uStack_b8._0_4_ = 0;
      uStack_b8._4_4_ = 0;
      uStack_b0._0_4_ = 0x4338d070;
      uStack_b0._4_4_ = 1;
      uStack_a8 = 0x29;
      uStack_a0 = 0;
      puStack_98 = &UNK_14338d03a;
      puStack_90 = (undefined *)0x35;
      uStack_88 = 1;
      puStack_80 = &UNK_14338d070;
      uStack_78 = 0x29;
      uStack_70 = 0x1b900000001;
      puStack_68 = &UNK_14338d0ba;
      pplStack_60 = &plStack_f8;
      pdb_140f332f0(&uStack_4a,&uStack_b8);
    }
    pdb_140f36c40(&lStack_c0);
    uVar4 = 2;
  }
LAB_141b06134:
  if (uStack_140 != (code *)0x0) {
    uVar7 = (longlong)uStack_140 * 8 + 0x17U & 0xfffffffffffffff0;
    uVar3 = (longlong)uStack_140 + uVar7 + 0x11;
    if (uVar3 != 0) {
      pub_1406abac0((byte *)((longlong)uStack_148 - uVar7),uVar3,0x10);
    }
  }
  return uVar4;
}

