// VA 0x140a9b020, PDB extent 1864 bytes
// country_core::geometry::plane::impl$1::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/plane.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::geometry::plane::impl$1::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/plane.rs
   Extent: 1864 */

undefined8 * pdb_140a9b020(undefined8 *param_1,float param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uStack_1c8;
  uint uStack_1c0;
  undefined8 uStack_1bc;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  ulonglong uStack_198;
  undefined8 uStack_190;
  uint uStack_188;
  undefined1 auStack_184 [16];
  undefined4 uStack_174;
  undefined8 uStack_170;
  uint uStack_168;
  undefined4 uStack_164;
  uint uStack_160;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  byte *pbStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  param_2 = param_2 * _DAT_142e36f50;
  uStack_1c0 = _DAT_142e37820 ^ (uint)param_2;
  uStack_1c8 = (ulonglong)(uint)param_2;
  uStack_1bc = _DAT_142e378e0;
  uStack_1b4 = 0;
  uStack_1b0 = 0x3f8000003f800000;
  auStack_1a8._4_4_ = 0;
  auStack_1a8._0_4_ = param_2;
  auStack_1a8._8_4_ = param_2;
  auStack_1a8._12_4_ = 0;
  uStack_198 = (ulonglong)_DAT_142e36f28;
  uStack_190 = 0x3f800000;
  auStack_184._4_4_ = _UNK_142e4e658;
  auStack_184._0_4_ = param_2;
  auStack_184._8_4_ = _UNK_142e4e65c;
  auStack_184._12_4_ = 0;
  auStack_184 = auStack_184 << 0x20;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_164 = 0;
  uStack_15c = _DAT_142e378e0;
  uStack_154 = 0;
  uStack_150 = 0x3f80000000000000;
  uStack_188 = uStack_1c0;
  uStack_168 = uStack_1c0;
  uStack_160 = uStack_1c0;
  pdb_14007ee60();
  lVar8 = 4;
  pbStack_b8 = pub_1406abab0(0x18,4);
  uVar4 = _UNK_14303318c;
  uVar3 = _UNK_143033188;
  uVar2 = _UNK_143033184;
  if (pbStack_b8 != (byte *)0x0) {
    *(undefined4 *)pbStack_b8 = _DAT_143033180;
    *(undefined4 *)(pbStack_b8 + 4) = uVar2;
    *(undefined4 *)(pbStack_b8 + 8) = uVar3;
    *(undefined4 *)(pbStack_b8 + 0xc) = uVar4;
    pbStack_b8[0x10] = 2;
    pbStack_b8[0x11] = 0;
    pbStack_b8[0x12] = 0;
    pbStack_b8[0x13] = 0;
    pbStack_b8[0x14] = 3;
    pbStack_b8[0x15] = 0;
    pbStack_b8[0x16] = 0;
    pbStack_b8[0x17] = 0;
    uStack_68 = 0;
    uStack_60 = 4;
    lStack_58 = 0;
    uStack_80 = 0;
    uStack_78 = 4;
    lStack_70 = 0;
    uStack_b0 = 0;
    uStack_a8 = 4;
    lStack_a0 = 0;
    for (lVar9 = 0; lVar5 = lStack_58, lVar9 != 0x80; lVar9 = lVar9 + 0x20) {
      if (lStack_58 == uStack_68) {
        uStack_49 = 1;
        uStack_4a = 1;
        uStack_4b = 1;
        pdb_142d7f010(&uStack_68);
      }
      lVar6 = lStack_70;
      *(undefined4 *)(uStack_60 + 8 + lVar5 * 0xc) = *(undefined4 *)((longlong)&uStack_1c0 + lVar9);
      *(undefined8 *)(uStack_60 + lVar5 * 0xc) = *(undefined8 *)((longlong)&uStack_1c8 + lVar9);
      lStack_58 = lVar5 + 1;
      if (lStack_70 == uStack_80) {
        uStack_49 = 1;
        uStack_4a = 1;
        uStack_4b = 1;
        pdb_142d7f010(&uStack_80);
      }
      lVar5 = lStack_a0;
      lVar8 = lVar6 * 3;
      *(undefined4 *)(uStack_78 + 8 + lVar6 * 0xc) = *(undefined4 *)((longlong)&uStack_1b4 + lVar9);
      *(undefined8 *)(uStack_78 + lVar6 * 0xc) = *(undefined8 *)((longlong)&uStack_1bc + lVar9);
      lStack_70 = lVar6 + 1;
      uVar1 = *(undefined8 *)(auStack_1a8 + lVar9 + -8);
      if (lStack_a0 == uStack_b0) {
        uStack_49 = 1;
        uStack_4a = 1;
        uStack_4b = 1;
        pdb_142d8d7f0(&uStack_b0);
      }
      *(undefined8 *)(uStack_a8 + lVar5 * 8) = uVar1;
      lStack_a0 = lVar5 + 1;
    }
    uStack_49 = 1;
    uStack_4a = 1;
    uStack_4b = 1;
    plVar7 = (longlong *)pdb_140f3bda0();
    if ((char)plVar7[2] == '\x01') {
      lStack_f0 = *plVar7;
      lVar8 = plVar7[1];
    }
    else {
      uStack_49 = 1;
      uStack_4a = 1;
      uStack_4b = 1;
      lStack_f0 = pdb_140f4fd10();
      *plVar7 = lStack_f0;
      plVar7[1] = lVar8;
      *(undefined1 *)(plVar7 + 2) = 1;
    }
    *plVar7 = lStack_f0 + 1;
    uStack_100 = _DAT_143046120;
    uStack_f8 = _UNK_143046128;
    uStack_110 = _DAT_143046110;
    uStack_108 = _UNK_143046118;
    uStack_130 = 0x8000000000000000;
    puStack_e0 = &UNK_143046053;
    uStack_d8 = 5;
    uStack_d0 = 0;
    uStack_148 = 6;
    pbStack_140 = pbStack_b8;
    uStack_138 = 6;
    lStack_88 = lStack_58;
    uStack_98 = (undefined4)uStack_68;
    uStack_94 = uStack_68._4_4_;
    uStack_90 = (undefined4)uStack_60;
    uStack_8c = uStack_60._4_4_;
    uStack_4c = 1;
    uStack_4d = 1;
    lStack_e8 = lVar8;
    pdb_140c93200(&uStack_148,&UNK_143045ae8,0xf,&uStack_98);
    lStack_88 = lStack_70;
    uStack_98 = (undefined4)uStack_80;
    uStack_94 = uStack_80._4_4_;
    uStack_90 = (undefined4)uStack_78;
    uStack_8c = uStack_78._4_4_;
    uStack_4c = 1;
    uStack_4d = 0;
    pdb_140c93200(&uStack_148,&UNK_143045bc9,0xd,&uStack_98);
    lStack_88 = lStack_a0;
    uStack_98 = (undefined4)uStack_b0;
    uStack_94 = uStack_b0._4_4_;
    uStack_90 = (undefined4)uStack_a8;
    uStack_8c = uStack_a8._4_4_;
    uStack_4c = 0;
    uStack_4d = 0;
    pdb_140c92a00(&uStack_148,&UNK_143045bc0,9,&uStack_98);
    uStack_c8 = _DAT_142e37950;
    uStack_c0 = 0x3f800000;
    uStack_4c = 0;
    uStack_4d = 0;
    pdb_1415e43a0(&uStack_98,&uStack_c8,4);
    uStack_4c = 0;
    uStack_4d = 0;
    pdb_140c93200(&uStack_148,&DAT_143045cc8,0xc,&uStack_98);
    param_1[0xe] = uStack_d8;
    param_1[0xf] = CONCAT71(uStack_cf,uStack_d0);
    param_1[0xc] = lStack_e8;
    param_1[0xd] = puStack_e0;
    param_1[10] = uStack_f8;
    param_1[0xb] = lStack_f0;
    param_1[8] = uStack_108;
    param_1[9] = uStack_100;
    param_1[6] = uStack_118;
    param_1[7] = uStack_110;
    param_1[4] = uStack_128;
    param_1[5] = uStack_120;
    param_1[2] = uStack_138;
    param_1[3] = uStack_130;
    *param_1 = uStack_148;
    param_1[1] = pbStack_140;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0x18);
}

