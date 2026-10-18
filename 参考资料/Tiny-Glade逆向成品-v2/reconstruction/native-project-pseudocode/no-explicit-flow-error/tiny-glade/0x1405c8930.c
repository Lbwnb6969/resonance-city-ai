// VA 0x1405c8930, PDB extent 9103 bytes
// tiny_glade::decorator_plugin::decorators_on_glade_unload
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/decorator_plugin.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::decorator_plugin::decorators_on_glade_unload
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/decorator_plugin.rs
   Extent: 9103 */

void pdb_1405c8930(undefined8 *param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined4 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong *puVar20;
  longlong lVar21;
  uint *puVar22;
  ulonglong uVar23;
  undefined4 *puVar24;
  undefined1 (*pauVar25) [16];
  longlong lVar26;
  longlong lVar27;
  undefined1 (*pauVar28) [16];
  uint uVar29;
  uint uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  uint uStack_4ac;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  longlong lStack_478;
  longlong lStack_470;
  longlong lStack_468;
  longlong *plStack_460;
  longlong lStack_458;
  longlong lStack_450;
  longlong lStack_448;
  longlong lStack_440;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  longlong lStack_428;
  longlong lStack_420;
  longlong lStack_418;
  longlong lStack_410;
  undefined4 *puStack_2c8;
  undefined4 *puStack_2c0;
  undefined4 *puStack_2b8;
  undefined4 *puStack_2b0;
  undefined4 *puStack_2a8;
  undefined4 *puStack_2a0;
  undefined4 *puStack_298;
  undefined4 *puStack_290;
  undefined4 *puStack_288;
  undefined4 *puStack_280;
  undefined4 *puStack_278;
  uint *puStack_270;
  undefined4 *puStack_268;
  undefined4 *puStack_260;
  undefined4 *puStack_258;
  undefined4 *puStack_250;
  uint *puStack_248;
  undefined4 *puStack_240;
  undefined8 uStack_238;
  longlong *plStack_230;
  undefined4 *puStack_228;
  longlong *plStack_220;
  longlong lStack_218;
  undefined4 *puStack_210;
  longlong lStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  undefined4 *puStack_1e0;
  undefined8 *puStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  longlong *plStack_1a0;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  uint uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  longlong lStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  longlong lStack_110;
  undefined4 *puStack_108;
  longlong *plStack_100;
  longlong lStack_f8;
  longlong *plStack_f0;
  longlong *plStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong *plStack_a8;
  longlong lStack_a0;
  longlong *plStack_98;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  puVar2 = (undefined8 *)*param_1;
  puVar24 = (undefined4 *)param_1[2];
  uVar13 = *(undefined4 *)((longlong)param_1 + 0x1c);
  plStack_a8 = (longlong *)param_1[4];
  puStack_108 = (undefined4 *)param_1[6];
  uStack_194 = *(undefined4 *)((longlong)param_1 + 0x3c);
  plStack_98 = (longlong *)param_1[8];
  puStack_2c8 = (undefined4 *)param_1[10];
  uStack_190 = *(undefined4 *)((longlong)param_1 + 0x5c);
  uStack_148 = param_1[0xc];
  puStack_2c0 = (undefined4 *)param_1[0xe];
  uStack_18c = *(undefined4 *)((longlong)param_1 + 0x7c);
  plVar17 = (longlong *)param_1[0x10];
  puStack_2b8 = (undefined4 *)param_1[0x12];
  uStack_188 = *(undefined4 *)((longlong)param_1 + 0x9c);
  puStack_118 = (undefined8 *)param_1[0x14];
  puStack_2b0 = (undefined4 *)param_1[0x16];
  uStack_184 = *(undefined4 *)((longlong)param_1 + 0xbc);
  puStack_2a8 = (undefined4 *)param_1[0x18];
  puStack_298 = (undefined4 *)param_1[0x1a];
  uStack_17c = *(undefined4 *)((longlong)param_1 + 0xdc);
  puStack_290 = (undefined4 *)param_1[0x1c];
  puStack_2a0 = (undefined4 *)param_1[0x1e];
  uStack_180 = *(undefined4 *)((longlong)param_1 + 0xfc);
  lStack_110 = param_1[0x20];
  puStack_288 = (undefined4 *)param_1[0x22];
  uStack_178 = *(undefined4 *)((longlong)param_1 + 0x11c);
  plVar19 = (longlong *)param_1[0x24];
  puStack_280 = (undefined4 *)param_1[0x26];
  uStack_174 = *(undefined4 *)((longlong)param_1 + 0x13c);
  uStack_238 = param_1[0x28];
  puStack_228 = (undefined4 *)param_1[0x2a];
  uStack_150 = *(undefined4 *)((longlong)param_1 + 0x15c);
  plVar18 = (longlong *)param_1[0x2c];
  puStack_278 = (undefined4 *)param_1[0x2e];
  uStack_170 = *(undefined4 *)((longlong)param_1 + 0x17c);
  puStack_140 = (undefined8 *)param_1[0x30];
  puStack_270 = (uint *)param_1[0x32];
  uStack_16c = *(uint *)((longlong)param_1 + 0x19c);
  plStack_e8 = (longlong *)param_1[0x34];
  puStack_268 = (undefined4 *)param_1[0x36];
  uStack_168 = *(undefined4 *)((longlong)param_1 + 0x1bc);
  puStack_130 = (undefined8 *)param_1[0x38];
  puStack_260 = (undefined4 *)param_1[0x3a];
  uStack_164 = *(undefined4 *)((longlong)param_1 + 0x1dc);
  uStack_138 = param_1[0x3c];
  puStack_258 = (undefined4 *)param_1[0x3e];
  uStack_160 = *(undefined4 *)((longlong)param_1 + 0x1fc);
  lStack_128 = *param_2;
  puStack_250 = (undefined4 *)param_2[2];
  uStack_15c = *(undefined4 *)((longlong)param_2 + 0x1c);
  puStack_120 = (undefined8 *)param_2[4];
  puStack_248 = (uint *)param_2[6];
  uStack_158 = *(uint *)((longlong)param_2 + 0x3c);
  plStack_100 = (longlong *)param_2[8];
  puStack_240 = (undefined4 *)param_2[10];
  uStack_154 = *(undefined4 *)((longlong)param_2 + 0x5c);
  lStack_218 = param_2[0xc];
  puStack_210 = (undefined4 *)param_2[0xe];
  uStack_14c = *(undefined4 *)((longlong)param_2 + 0x7c);
  plStack_220 = (longlong *)param_2[0x11];
  plStack_230 = (longlong *)param_2[0x12];
  plVar14 = (longlong *)pdb_140f3bda0();
  if ((char)plVar14[2] == '\x01') {
    lStack_1a8 = *plVar14;
    param_2 = (longlong *)plVar14[1];
  }
  else {
    lStack_1a8 = pdb_140f4fd10();
    *plVar14 = lStack_1a8;
    plVar14[1] = (longlong)param_2;
    *(undefined1 *)(plVar14 + 2) = 1;
  }
  *plVar14 = lStack_1a8 + 1;
  lStack_1b8 = _DAT_142f70760;
  lStack_1b0 = _UNK_142f70768;
  lStack_1c8 = _DAT_142f70750;
  lStack_1c0 = _UNK_142f70758;
  plStack_1a0 = param_2;
  plVar14 = (longlong *)pdb_140f3bda0();
  if ((char)plVar14[2] == '\x01') {
    uStack_b8 = *plVar14;
    param_2 = (longlong *)plVar14[1];
  }
  else {
    uStack_b8 = pdb_140f4fd10();
    *plVar14 = uStack_b8;
    plVar14[1] = (longlong)param_2;
    *(undefined1 *)(plVar14 + 2) = 1;
  }
  *plVar14 = uStack_b8 + 1;
  uStack_c8 = _DAT_142f70760;
  uStack_c0 = _UNK_142f70768;
  lStack_d8 = _DAT_142f70750;
  lStack_d0 = _UNK_142f70758;
  uStack_b0 = param_2;
  plVar14 = (longlong *)pdb_140f3bda0();
  if ((char)plVar14[2] == '\x01') {
    lStack_f8 = *plVar14;
    plStack_f0 = (longlong *)plVar14[1];
  }
  else {
    lStack_f8 = pdb_140f4fd10();
    *plVar14 = lStack_f8;
    plVar14[1] = (longlong)param_2;
    *(undefined1 *)(plVar14 + 2) = 1;
    plStack_f0 = param_2;
  }
  *plVar14 = lStack_f8 + 1;
  uStack_498 = lStack_1a8;
  uStack_490 = plStack_1a0;
  uStack_4a8 = lStack_1b8;
  uStack_4a0 = lStack_1b0;
  uStack_4b8 = (uint)lStack_1c8;
  uStack_4b4 = (undefined4)((ulonglong)lStack_1c8 >> 0x20);
  uStack_4b0 = (undefined4)lStack_1c0;
  uStack_4ac = (uint)((ulonglong)lStack_1c0 >> 0x20);
  uStack_488 = lStack_d8;
  uStack_480 = lStack_d0;
  lStack_478 = uStack_c8;
  lStack_470 = uStack_c0;
  lStack_468 = uStack_b8;
  plStack_460 = uStack_b0;
  lStack_458 = _DAT_142f70750;
  lStack_450 = _UNK_142f70758;
  lStack_448 = _DAT_142f70760;
  lStack_440 = _UNK_142f70768;
  *puVar24 = uVar13;
  puStack_1d0 = puVar2;
  pdb_1404da850(puVar2);
  puStack_1d0[0xe] = lStack_448;
  puStack_1d0[0xf] = lStack_440;
  puStack_1d0[0xc] = lStack_458;
  puStack_1d0[0xd] = lStack_450;
  puStack_1d0[10] = lStack_468;
  puStack_1d0[0xb] = plStack_460;
  puStack_1d0[8] = lStack_478;
  puStack_1d0[9] = lStack_470;
  *(undefined4 *)(puStack_1d0 + 6) = (undefined4)uStack_488;
  *(undefined4 *)((longlong)puStack_1d0 + 0x34) = uStack_488._4_4_;
  *(undefined4 *)(puStack_1d0 + 7) = (undefined4)uStack_480;
  *(undefined4 *)((longlong)puStack_1d0 + 0x3c) = uStack_480._4_4_;
  *(undefined4 *)(puStack_1d0 + 4) = (undefined4)uStack_498;
  *(undefined4 *)((longlong)puStack_1d0 + 0x24) = uStack_498._4_4_;
  *(undefined4 *)(puStack_1d0 + 5) = (undefined4)uStack_490;
  *(undefined4 *)((longlong)puStack_1d0 + 0x2c) = uStack_490._4_4_;
  *(undefined4 *)(puStack_1d0 + 2) = (undefined4)uStack_4a8;
  *(undefined4 *)((longlong)puStack_1d0 + 0x14) = uStack_4a8._4_4_;
  *(undefined4 *)(puStack_1d0 + 3) = (undefined4)uStack_4a0;
  *(undefined4 *)((longlong)puStack_1d0 + 0x1c) = uStack_4a0._4_4_;
  *puStack_1d0 = CONCAT44(uStack_4b4,uStack_4b8);
  puStack_1d0[1] = CONCAT44(uStack_4ac,uStack_4b0);
  puStack_1d0[0x10] = lStack_f8;
  puStack_1d0[0x11] = plStack_f0;
  puStack_1d0[0x12] = 0;
  puStack_1d0[0x24] = 0;
  *(undefined1 *)(puStack_1d0 + 0x36) = 0;
  plVar15 = (longlong *)pdb_140f3bda0();
  plVar14 = plStack_a8;
  uVar11 = uStack_148;
  if ((char)plVar15[2] == '\x01') {
    lStack_f8 = *plVar15;
    plStack_f0 = (longlong *)plVar15[1];
  }
  else {
    lStack_f8 = pdb_140f4fd10();
    *plVar15 = lStack_f8;
    plVar15[1] = (longlong)param_2;
    *(undefined1 *)(plVar15 + 2) = 1;
    plStack_f0 = param_2;
  }
  plVar12 = plStack_98;
  *plVar15 = lStack_f8 + 1;
  *puStack_108 = uStack_194;
  plVar15 = plVar14 + 4;
  pdb_140264170(plVar14,plVar15,0x10,0x10);
  lVar21 = _UNK_142f70768;
  plStack_a8[2] = _DAT_142f70760;
  plStack_a8[3] = lVar21;
  lVar21 = _UNK_142f70758;
  *plStack_a8 = _DAT_142f70750;
  plStack_a8[1] = lVar21;
  plStack_a8[4] = lStack_f8;
  plStack_a8[5] = (longlong)plStack_f0;
  plVar14 = (longlong *)pdb_140f3bda0();
  if ((char)plVar14[2] == '\x01') {
    puStack_108 = (undefined4 *)*plVar14;
    plStack_a8 = (longlong *)plVar14[1];
  }
  else {
    puStack_108 = (undefined4 *)pdb_140f4fd10();
    *plVar14 = (longlong)puStack_108;
    plVar14[1] = (longlong)plVar15;
    *(undefined1 *)(plVar14 + 2) = 1;
    plStack_a8 = plVar15;
  }
  *plVar14 = (longlong)puStack_108 + 1;
  *puStack_2c8 = uStack_190;
  pdb_140264170(plVar12,plVar12 + 4,0x10,0x10);
  lVar21 = _UNK_142f70768;
  plStack_98[2] = _DAT_142f70760;
  plStack_98[3] = lVar21;
  lVar21 = _UNK_142f70758;
  *plStack_98 = _DAT_142f70750;
  plStack_98[1] = lVar21;
  plStack_98[4] = (longlong)puStack_108;
  plStack_98[5] = (longlong)plStack_a8;
  pdb_1405cacc0(&uStack_4b8);
  *puStack_2c0 = uStack_18c;
  pdb_1404dc230(uVar11);
  puVar22 = &uStack_4b8;
  pub_142e32760(uStack_148,puVar22,0x1e8);
  plVar14 = (longlong *)pdb_140f3bda0();
  if ((char)plVar14[2] == '\x01') {
    lVar21 = *plVar14;
    puVar22 = (uint *)plVar14[1];
  }
  else {
    lVar21 = pdb_140f4fd10();
    *plVar14 = lVar21;
    plVar14[1] = (longlong)puVar22;
    *(undefined1 *)(plVar14 + 2) = 1;
  }
  *plVar14 = lVar21 + 1;
  *puStack_2b8 = uStack_188;
  if (*plVar17 != 0) {
    pub_1406abac0((byte *)plVar17[1],*plVar17 << 5,8);
  }
  lVar27 = plVar17[4];
  uVar23 = 0;
  if (lVar27 != 0) {
    uVar16 = lVar27 * 0x18 + 0x27U & 0xfffffffffffffff0;
    uVar23 = lVar27 + uVar16 + 0x11;
    if (uVar23 != 0) {
      pub_1406abac0((byte *)(plVar17[3] - uVar16),uVar23,0x10);
    }
  }
  *plVar17 = 0;
  plVar17[1] = 8;
  plVar17[2] = 0;
  lVar27 = _UNK_142f70768;
  plVar17[5] = _DAT_142f70760;
  plVar17[6] = lVar27;
  lVar27 = _UNK_142f70758;
  plVar17[3] = _DAT_142f70750;
  plVar17[4] = lVar27;
  plVar17[7] = lVar21;
  plVar17[8] = (longlong)puVar22;
  *(undefined1 *)(plVar17 + 9) = 0;
  plVar17 = (longlong *)pdb_140f3bda0();
  if ((char)plVar17[2] == '\x01') {
    uStack_498 = *plVar17;
    uVar23 = plVar17[1];
  }
  else {
    uStack_498 = pdb_140f4fd10();
    *plVar17 = uStack_498;
    plVar17[1] = uVar23;
    *(undefined1 *)(plVar17 + 2) = 1;
  }
  puVar2 = puStack_118;
  *plVar17 = uStack_498 + 1;
  uStack_4a8 = _DAT_142f70760;
  uStack_4a0 = _UNK_142f70768;
  uStack_4b8 = (uint)_DAT_142f70750;
  uStack_4b4 = (undefined4)((ulonglong)_DAT_142f70750 >> 0x20);
  uStack_4b0 = (undefined4)_UNK_142f70758;
  uStack_4ac = (uint)((ulonglong)_UNK_142f70758 >> 0x20);
  uStack_490 = (longlong *)uVar23;
  plVar17 = (longlong *)pdb_140f3bda0();
  if ((char)plVar17[2] == '\x01') {
    plStack_98 = (longlong *)*plVar17;
    plStack_a8 = (longlong *)plVar17[1];
  }
  else {
    plStack_98 = (longlong *)pdb_140f4fd10();
    *plVar17 = (longlong)plStack_98;
    plVar17[1] = uVar23;
    *(undefined1 *)(plVar17 + 2) = 1;
    plStack_a8 = (longlong *)uVar23;
  }
  *plVar17 = (longlong)plStack_98 + 1;
  lStack_d8 = CONCAT44(uStack_4b4,uStack_4b8);
  lStack_d0 = CONCAT44(uStack_4ac,uStack_4b0);
  uStack_b8._0_4_ = (undefined4)uStack_498;
  uStack_b8._4_4_ = uStack_498._4_4_;
  uStack_b0._0_4_ = SUB84(uStack_490,0);
  uStack_b0._4_4_ = uStack_490._4_4_;
  uStack_c8._0_4_ = (undefined4)uStack_4a8;
  uStack_c8._4_4_ = uStack_4a8._4_4_;
  uStack_c0._0_4_ = (undefined4)uStack_4a0;
  uStack_c0._4_4_ = uStack_4a0._4_4_;
  *puStack_2b0 = uStack_184;
  pdb_1404d7c10(puVar2);
  *puStack_118 = 0;
  puStack_118[1] = 0x10;
  puStack_118[2] = 0;
  puStack_118[3] = lStack_d8;
  puStack_118[4] = lStack_d0;
  *(undefined4 *)(puStack_118 + 5) = (undefined4)uStack_c8;
  *(undefined4 *)((longlong)puStack_118 + 0x2c) = uStack_c8._4_4_;
  *(undefined4 *)(puStack_118 + 6) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)puStack_118 + 0x34) = uStack_c0._4_4_;
  *(undefined4 *)(puStack_118 + 7) = (undefined4)uStack_b8;
  *(undefined4 *)((longlong)puStack_118 + 0x3c) = uStack_b8._4_4_;
  *(undefined4 *)(puStack_118 + 8) = (undefined4)uStack_b0;
  *(undefined4 *)((longlong)puStack_118 + 0x44) = uStack_b0._4_4_;
  lVar21 = _UNK_142f70758;
  puStack_118[9] = _DAT_142f70750;
  puStack_118[10] = lVar21;
  lVar21 = _UNK_142f70768;
  puStack_118[0xb] = _DAT_142f70760;
  puStack_118[0xc] = lVar21;
  puStack_118[0xd] = plStack_98;
  puStack_118[0xe] = plStack_a8;
  uVar13 = pdb_14007fac0();
  *puStack_298 = uStack_17c;
  *puStack_2a8 = uVar13;
  uStack_4ac = uStack_4ac & 0xff000000;
  uStack_4b4 = 0;
  uStack_4b0 = 0;
  *puStack_2a0 = uStack_180;
  *puStack_290 = 0;
  *(ulonglong *)(puStack_290 + 1) = (ulonglong)uStack_4b8;
  *(undefined8 *)((longlong)puStack_290 + 0xb) = 0;
  puVar24 = puStack_290;
  plVar17 = (longlong *)pdb_140f3bda0();
  if ((char)plVar17[2] == '\x01') {
    lStack_1e8 = *plVar17;
    puVar24 = (undefined4 *)plVar17[1];
  }
  else {
    lStack_1e8 = pdb_140f4fd10();
    *plVar17 = lStack_1e8;
    plVar17[1] = (longlong)puVar24;
    *(undefined1 *)(plVar17 + 2) = 1;
  }
  lVar21 = lStack_110;
  *plVar17 = lStack_1e8 + 1;
  lStack_1f8 = _DAT_142f70760;
  lStack_1f0 = _UNK_142f70768;
  lStack_208 = _DAT_142f70750;
  lStack_200 = _UNK_142f70758;
  puStack_1e0 = puVar24;
  plVar17 = (longlong *)pdb_140f3bda0();
  if ((char)plVar17[2] == '\x01') {
    lStack_1a8 = *plVar17;
    puVar24 = (undefined4 *)plVar17[1];
  }
  else {
    lStack_1a8 = pdb_140f4fd10();
    *plVar17 = lStack_1a8;
    plVar17[1] = (longlong)puVar24;
    *(undefined1 *)(plVar17 + 2) = 1;
  }
  *plVar17 = lStack_1a8 + 1;
  lStack_1b8 = _DAT_142f70760;
  lStack_1b0 = _UNK_142f70768;
  lStack_1c8 = _DAT_142f70750;
  lStack_1c0 = _UNK_142f70758;
  plStack_1a0 = (longlong *)puVar24;
  plVar17 = (longlong *)pdb_140f3bda0();
  if ((char)plVar17[2] == '\x01') {
    uStack_b8 = *plVar17;
    puVar24 = (undefined4 *)plVar17[1];
  }
  else {
    uStack_b8 = pdb_140f4fd10();
    *plVar17 = uStack_b8;
    plVar17[1] = (longlong)puVar24;
    *(undefined1 *)(plVar17 + 2) = 1;
  }
  *plVar17 = uStack_b8 + 1;
  uStack_c8 = _DAT_142f70760;
  uStack_c0 = _UNK_142f70768;
  lStack_d8 = _DAT_142f70750;
  lStack_d0 = _UNK_142f70758;
  uStack_b0 = (longlong *)puVar24;
  plVar17 = (longlong *)pdb_140f3bda0();
  if ((char)plVar17[2] == '\x01') {
    plStack_98 = (longlong *)*plVar17;
    plStack_a8 = (longlong *)plVar17[1];
  }
  else {
    plStack_98 = (longlong *)pdb_140f4fd10();
    *plVar17 = (longlong)plStack_98;
    plVar17[1] = (longlong)puVar24;
    *(undefined1 *)(plVar17 + 2) = 1;
    plStack_a8 = (longlong *)puVar24;
  }
  *plVar17 = (longlong)plStack_98 + 1;
  uStack_498 = lStack_1e8;
  uStack_490 = (longlong *)puStack_1e0;
  uStack_4a8 = lStack_1f8;
  uStack_4a0 = lStack_1f0;
  uStack_4b8 = (uint)lStack_208;
  uStack_4b4 = (undefined4)((ulonglong)lStack_208 >> 0x20);
  uStack_4b0 = (undefined4)lStack_200;
  uStack_4ac = (uint)((ulonglong)lStack_200 >> 0x20);
  uStack_488 = lStack_1c8;
  uStack_480 = lStack_1c0;
  lStack_478 = lStack_1b8;
  lStack_470 = lStack_1b0;
  lStack_468 = lStack_1a8;
  plStack_460 = plStack_1a0;
  lStack_458 = lStack_d8;
  lStack_450 = lStack_d0;
  lStack_448 = uStack_c8;
  lStack_440 = uStack_c0;
  uStack_438 = (undefined4)uStack_b8;
  uStack_434 = uStack_b8._4_4_;
  uStack_430 = (undefined4)uStack_b0;
  uStack_42c = uStack_b0._4_4_;
  lStack_418 = _DAT_142f70760;
  lStack_410 = _UNK_142f70768;
  lStack_428 = _DAT_142f70750;
  lStack_420 = _UNK_142f70758;
  *puStack_288 = uStack_178;
  pdb_1404d7fe0(lVar21);
  lVar21 = lStack_110;
  puVar22 = &uStack_4b8;
  pub_142e32760(lStack_110,puVar22,0xb0);
  *(longlong **)(lVar21 + 0xb0) = plStack_98;
  *(longlong **)(lVar21 + 0xb8) = plStack_a8;
  plVar17 = (longlong *)pdb_140f3bda0();
  if ((char)plVar17[2] == '\x01') {
    lVar21 = *plVar17;
    puVar22 = (uint *)plVar17[1];
  }
  else {
    lVar21 = pdb_140f4fd10();
    *plVar17 = lVar21;
    plVar17[1] = (longlong)puVar22;
    *(undefined1 *)(plVar17 + 2) = 1;
  }
  *plVar17 = lVar21 + 1;
  *puStack_280 = uStack_174;
  lVar27 = plVar19[1];
  if (lVar27 != 0) {
    uVar23 = lVar27 * 0x18 + 0x27U & 0xfffffffffffffff0;
    uVar16 = lVar27 + uVar23 + 0x11;
    if (uVar16 != 0) {
      pub_1406abac0((byte *)(*plVar19 - uVar23),uVar16,0x10);
    }
  }
  lVar27 = _UNK_142f70768;
  plVar19[2] = _DAT_142f70760;
  plVar19[3] = lVar27;
  lVar27 = _UNK_142f70758;
  *plVar19 = _DAT_142f70750;
  plVar19[1] = lVar27;
  plVar19[4] = lVar21;
  plVar19[5] = (longlong)puVar22;
  *(undefined1 *)(plVar19 + 6) = 0;
  plVar17 = (longlong *)pdb_14008d710(0);
  if (plVar17 == (longlong *)0x0) {
LAB_1405c9e6e:
    pdb_142dc7890(&UNK_142f3dc40);
  }
  else {
    uStack_b8 = *plVar17;
    uStack_b0 = (longlong *)plVar17[1];
    *plVar17 = *plVar17 + 1;
    lVar10 = _UNK_142f72578;
    lVar9 = _DAT_142f72570;
    lVar27 = _UNK_142f72568;
    lVar21 = _DAT_142f72560;
    uStack_c8 = _DAT_142f72570;
    uStack_c0 = _UNK_142f72578;
    lStack_d8 = _DAT_142f72560;
    lStack_d0 = _UNK_142f72568;
    plVar14 = (longlong *)pdb_14008d710(0);
    plVar19 = plStack_e8;
    plVar17 = plStack_100;
    if (plVar14 != (longlong *)0x0) {
      lVar3 = *plVar14;
      lVar26 = plVar14[1];
      *plVar14 = *plVar14 + 1;
      uStack_498 = uStack_b8;
      uStack_490 = uStack_b0;
      uStack_4a8 = uStack_c8;
      uStack_4a0 = uStack_c0;
      uStack_4b8 = (uint)lStack_d8;
      uStack_4b4 = (undefined4)((ulonglong)lStack_d8 >> 0x20);
      uStack_4b0 = (undefined4)lStack_d0;
      uStack_4ac = (uint)((ulonglong)lStack_d0 >> 0x20);
      uStack_488 = lVar21;
      uStack_480 = lVar27;
      lStack_478 = lVar9;
      lStack_470 = lVar10;
      *puStack_278 = uStack_170;
      lVar21 = plVar18[1];
      if (lVar21 != 0) {
        uVar23 = lVar21 * 0x18 + 0x27U & 0xfffffffffffffff0;
        uVar16 = lVar21 + uVar23 + 0x11;
        if (uVar16 != 0) {
          pub_1406abac0((byte *)(*plVar18 - uVar23),uVar16,0x10);
        }
      }
      lVar21 = plVar18[7];
      puVar24 = (undefined4 *)0x0;
      if (lVar21 != 0) {
        uVar23 = lVar21 * 0x18 + 0x27U & 0xfffffffffffffff0;
        puVar24 = (undefined4 *)(lVar21 + uVar23 + 0x11);
        if (puVar24 != (undefined4 *)0x0) {
          pub_1406abac0((byte *)(plVar18[6] - uVar23),(ulonglong)puVar24,0x10);
        }
      }
      plVar18[8] = lStack_478;
      plVar18[9] = lStack_470;
      *(undefined4 *)(plVar18 + 6) = (undefined4)uStack_488;
      *(undefined4 *)((longlong)plVar18 + 0x34) = uStack_488._4_4_;
      *(undefined4 *)(plVar18 + 7) = (undefined4)uStack_480;
      *(undefined4 *)((longlong)plVar18 + 0x3c) = uStack_480._4_4_;
      *(undefined4 *)(plVar18 + 4) = (undefined4)uStack_498;
      *(undefined4 *)((longlong)plVar18 + 0x24) = uStack_498._4_4_;
      *(undefined4 *)(plVar18 + 5) = (undefined4)uStack_490;
      *(undefined4 *)((longlong)plVar18 + 0x2c) = uStack_490._4_4_;
      *(undefined4 *)(plVar18 + 2) = (undefined4)uStack_4a8;
      *(undefined4 *)((longlong)plVar18 + 0x14) = uStack_4a8._4_4_;
      *(undefined4 *)(plVar18 + 3) = (undefined4)uStack_4a0;
      *(undefined4 *)((longlong)plVar18 + 0x1c) = uStack_4a0._4_4_;
      *plVar18 = CONCAT44(uStack_4b4,uStack_4b8);
      plVar18[1] = CONCAT44(uStack_4ac,uStack_4b0);
      plVar18[10] = lVar3;
      plVar18[0xb] = lVar26;
      plVar18 = (longlong *)pdb_140f3bda0();
      if ((char)plVar18[2] == '\x01') {
        uStack_498 = *plVar18;
        puVar24 = (undefined4 *)plVar18[1];
      }
      else {
        uStack_498 = pdb_140f4fd10();
        *plVar18 = uStack_498;
        plVar18[1] = (longlong)puVar24;
        *(undefined1 *)(plVar18 + 2) = 1;
      }
      *plVar18 = uStack_498 + 1;
      uStack_4a8 = _DAT_142f70760;
      uStack_4a0 = _UNK_142f70768;
      uStack_4b8 = (uint)_DAT_142f70750;
      uStack_4b4 = (undefined4)((ulonglong)_DAT_142f70750 >> 0x20);
      uStack_4b0 = (undefined4)_UNK_142f70758;
      uStack_4ac = (uint)((ulonglong)_UNK_142f70758 >> 0x20);
      uStack_490 = (longlong *)puVar24;
      plVar18 = (longlong *)pdb_14008d710(0);
      if (plVar18 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_142f3dc40);
        goto LAB_1405c9ee2;
      }
      plStack_a8 = (longlong *)*plVar18;
      lStack_a0 = plVar18[1];
      plStack_98 = (longlong *)*plVar18;
      *plVar18 = (longlong)plStack_98 + 1;
      lStack_d8 = CONCAT44(uStack_4b4,uStack_4b8);
      lStack_d0 = CONCAT44(uStack_4ac,uStack_4b0);
      uStack_b8 = uStack_498;
      uStack_b0 = uStack_490;
      uStack_c8 = uStack_4a8;
      uStack_c0 = uStack_4a0;
      plVar18 = (longlong *)(ulonglong)uStack_16c;
      *puStack_270 = uStack_16c;
      pdb_1404984c0(puStack_140);
      *puStack_140 = 0;
      puStack_140[1] = 8;
      puStack_140[2] = 0;
      puStack_140[3] = lStack_d8;
      puStack_140[4] = lStack_d0;
      *(undefined4 *)(puStack_140 + 5) = (undefined4)uStack_c8;
      *(undefined4 *)((longlong)puStack_140 + 0x2c) = uStack_c8._4_4_;
      *(undefined4 *)(puStack_140 + 6) = (undefined4)uStack_c0;
      *(undefined4 *)((longlong)puStack_140 + 0x34) = uStack_c0._4_4_;
      *(undefined4 *)(puStack_140 + 7) = (undefined4)uStack_b8;
      *(undefined4 *)((longlong)puStack_140 + 0x3c) = uStack_b8._4_4_;
      *(undefined4 *)(puStack_140 + 8) = (undefined4)uStack_b0;
      *(undefined4 *)((longlong)puStack_140 + 0x44) = uStack_b0._4_4_;
      lVar27 = _UNK_142f72568;
      lVar21 = _DAT_142f72560;
      puStack_140[9] = _DAT_142f72560;
      puStack_140[10] = lVar27;
      lVar10 = _UNK_142f72578;
      lVar9 = _DAT_142f72570;
      puStack_140[0xb] = _DAT_142f72570;
      puStack_140[0xc] = lVar10;
      puStack_140[0xd] = plStack_a8;
      puStack_140[0xe] = lStack_a0;
      plVar14 = (longlong *)pdb_140f3bda0();
      if ((char)plVar14[2] == '\x01') {
        plVar15 = (longlong *)*plVar14;
        plVar18 = (longlong *)plVar14[1];
      }
      else {
        plVar15 = (longlong *)pdb_140f4fd10();
        *plVar14 = (longlong)plVar15;
        plVar14[1] = (longlong)plVar18;
        *(undefined1 *)(plVar14 + 2) = 1;
      }
      *plVar14 = (longlong)plVar15 + 1;
      *puStack_268 = uStack_168;
      lVar3 = plVar19[1];
      if (lVar3 != 0) {
        lVar26 = plVar19[3];
        plStack_a8 = plVar18;
        plStack_98 = plVar15;
        if (lVar26 != 0) {
          pauVar28 = (undefined1 (*) [16])*plStack_e8;
          auVar1 = *pauVar28;
          pauVar25 = pauVar28 + 1;
          uVar29 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
          do {
            if ((short)uVar29 == 0) {
              do {
                auVar1 = *pauVar25;
                pauVar28 = pauVar28 + -0x18;
                pauVar25 = pauVar25 + 1;
                uVar29 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar29 == 0);
            }
            uVar5 = 0;
            for (uVar6 = uVar29; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            pdb_1404a9710((longlong)pauVar28 + (ulonglong)uVar5 * -0x18 + -0x10);
            uVar29 = uVar29 - 1 & uVar29;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
        }
        plVar15 = plStack_98;
        plVar18 = plStack_a8;
        plVar19 = plStack_e8;
        plVar17 = plStack_100;
        uVar23 = lVar3 * 0x18 + 0x27U & 0xfffffffffffffff0;
        uVar16 = lVar3 + uVar23 + 0x11;
        if (uVar16 != 0) {
          pub_1406abac0((byte *)(*plStack_e8 - uVar23),uVar16,0x10);
        }
      }
      lVar3 = _UNK_142f70768;
      plVar19[2] = _DAT_142f70760;
      plVar19[3] = lVar3;
      lVar3 = _UNK_142f70758;
      *plVar19 = _DAT_142f70750;
      plVar19[1] = lVar3;
      plVar19[4] = (longlong)plVar15;
      plVar19[5] = (longlong)plVar18;
      plVar19 = (longlong *)pdb_14008d710(0);
      if (plVar19 != (longlong *)0x0) {
        uStack_b8 = *plVar19;
        uStack_b0 = (longlong *)plVar19[1];
        *plVar19 = *plVar19 + 1;
        lVar8 = _UNK_142f43c68;
        lVar7 = _DAT_142f43c60;
        lVar26 = _UNK_142f43c58;
        lVar3 = _DAT_142f43c50;
        uStack_c8 = _DAT_142f43c60;
        uStack_c0 = _UNK_142f43c68;
        lStack_d8 = _DAT_142f43c50;
        lStack_d0 = _UNK_142f43c58;
        plVar19 = (longlong *)pdb_14008d710(0);
        uVar11 = uStack_138;
        if (plVar19 == (longlong *)0x0) {
          pdb_142dc7890(&UNK_142f3dc40);
          goto LAB_1405c9ee2;
        }
        plStack_e8 = (longlong *)*plVar19;
        uStack_e0 = plVar19[1];
        plStack_a8 = (longlong *)*plVar19;
        *plVar19 = (longlong)plStack_a8 + 1;
        uStack_498 = uStack_b8;
        uStack_490 = uStack_b0;
        uStack_4a8 = uStack_c8;
        uStack_4a0 = uStack_c0;
        uStack_4b8 = (uint)lStack_d8;
        uStack_4b4 = (undefined4)((ulonglong)lStack_d8 >> 0x20);
        uStack_4b0 = (undefined4)lStack_d0;
        uStack_4ac = (uint)((ulonglong)lStack_d0 >> 0x20);
        uStack_488 = lVar3;
        uStack_480 = lVar26;
        lStack_478 = lVar7;
        lStack_470 = lVar8;
        *puStack_260 = uStack_164;
        pdb_1404add80(puStack_130);
        puStack_130[8] = lStack_478;
        puStack_130[9] = lStack_470;
        *(undefined4 *)(puStack_130 + 6) = (undefined4)uStack_488;
        *(undefined4 *)((longlong)puStack_130 + 0x34) = uStack_488._4_4_;
        *(undefined4 *)(puStack_130 + 7) = (undefined4)uStack_480;
        *(undefined4 *)((longlong)puStack_130 + 0x3c) = uStack_480._4_4_;
        *(undefined4 *)(puStack_130 + 4) = (undefined4)uStack_498;
        *(undefined4 *)((longlong)puStack_130 + 0x24) = uStack_498._4_4_;
        *(undefined4 *)(puStack_130 + 5) = (undefined4)uStack_490;
        *(undefined4 *)((longlong)puStack_130 + 0x2c) = uStack_490._4_4_;
        *(undefined4 *)(puStack_130 + 2) = (undefined4)uStack_4a8;
        *(undefined4 *)((longlong)puStack_130 + 0x14) = uStack_4a8._4_4_;
        *(undefined4 *)(puStack_130 + 3) = (undefined4)uStack_4a0;
        *(undefined4 *)((longlong)puStack_130 + 0x1c) = uStack_4a0._4_4_;
        *puStack_130 = CONCAT44(uStack_4b4,uStack_4b8);
        puStack_130[1] = CONCAT44(uStack_4ac,uStack_4b0);
        puStack_130[10] = plStack_e8;
        puStack_130[0xb] = uStack_e0;
        pdb_1405c83f0(&uStack_4b8);
        *puStack_258 = uStack_160;
        pdb_1404d4c70(uVar11);
        pub_142e32760(uStack_138,&uStack_4b8,0x180);
        plVar19 = (longlong *)pdb_14008d710(0);
        if (plVar19 != (longlong *)0x0) {
          lStack_1e8 = *plVar19;
          puStack_1e0 = (undefined4 *)plVar19[1];
          *plVar19 = *plVar19 + 1;
          lStack_1f8 = lVar9;
          lStack_1f0 = lVar10;
          lStack_208 = lVar21;
          lStack_200 = lVar27;
          plVar19 = (longlong *)pdb_14008d710(0);
          if (plVar19 == (longlong *)0x0) {
            pdb_142dc7890(&UNK_142f3dc40);
            goto LAB_1405c9ee2;
          }
          lStack_1a8 = *plVar19;
          plStack_1a0 = (longlong *)plVar19[1];
          *plVar19 = *plVar19 + 1;
          lStack_1b8 = lVar9;
          lStack_1b0 = lVar10;
          lStack_1c8 = lVar21;
          lStack_1c0 = lVar27;
          plVar19 = (longlong *)pdb_14008d710(0);
          if (plVar19 == (longlong *)0x0) {
            pdb_142dc7890(&UNK_142f3dc40);
            goto LAB_1405c9ee2;
          }
          uStack_b8 = *plVar19;
          uStack_b0 = (longlong *)plVar19[1];
          *plVar19 = *plVar19 + 1;
          uStack_c8 = lVar9;
          uStack_c0 = lVar10;
          lStack_d8 = lVar21;
          lStack_d0 = lVar27;
          plVar19 = (longlong *)pdb_14008d710(0);
          if (plVar19 == (longlong *)0x0) {
            pdb_142dc7890(&UNK_142f3dc40);
            goto LAB_1405c9ee2;
          }
          plStack_e8 = (longlong *)*plVar19;
          uStack_e0 = plVar19[1];
          plStack_a8 = (longlong *)*plVar19;
          *plVar19 = (longlong)plStack_a8 + 1;
          uStack_498 = lStack_1e8;
          uStack_490 = (longlong *)puStack_1e0;
          uStack_4a8 = lStack_1f8;
          uStack_4a0 = lStack_1f0;
          uStack_4b8 = (uint)lStack_208;
          uStack_4b4 = (undefined4)((ulonglong)lStack_208 >> 0x20);
          uStack_4b0 = (undefined4)lStack_200;
          uStack_4ac = (uint)((ulonglong)lStack_200 >> 0x20);
          uStack_488 = lStack_1c8;
          uStack_480 = lStack_1c0;
          lStack_478 = lStack_1b8;
          lStack_470 = lStack_1b0;
          lStack_468 = lStack_1a8;
          plStack_460 = plStack_1a0;
          lStack_458 = lStack_d8;
          lStack_450 = lStack_d0;
          lStack_448 = uStack_c8;
          lStack_440 = uStack_c0;
          uStack_438 = (undefined4)uStack_b8;
          uStack_434 = uStack_b8._4_4_;
          uStack_430 = (undefined4)uStack_b0;
          uStack_42c = uStack_b0._4_4_;
          lStack_418 = lVar9;
          lStack_410 = lVar10;
          lStack_428 = lVar21;
          lStack_420 = lVar27;
          *puStack_250 = uStack_15c;
          pdb_1404dc0b0(lStack_128);
          lVar21 = lStack_128;
          pub_142e32760(lStack_128,&uStack_4b8,0xb0);
          *(longlong **)(lVar21 + 0xb0) = plStack_e8;
          *(ulonglong *)(lVar21 + 0xb8) = uStack_e0;
          plVar19 = (longlong *)pdb_14008d710(0);
          if (plVar19 != (longlong *)0x0) {
            uStack_b8 = *plVar19;
            uStack_b0 = (longlong *)plVar19[1];
            *plVar19 = *plVar19 + 1;
            uStack_c8 = lVar7;
            uStack_c0 = lVar8;
            lStack_d8 = lVar3;
            lStack_d0 = lVar26;
            puVar20 = (ulonglong *)pdb_14008d710(0);
            if (puVar20 != (ulonglong *)0x0) {
              plStack_e8 = (longlong *)*puVar20;
              uStack_e0 = puVar20[1];
              plStack_a8 = (longlong *)*puVar20;
              *puVar20 = (longlong)plStack_a8 + 1;
              uStack_498._0_4_ = (undefined4)uStack_b8;
              uStack_498._4_4_ = uStack_b8._4_4_;
              uStack_490._0_4_ = SUB84(uStack_b0,0);
              uStack_490._4_4_ = uStack_b0._4_4_;
              uStack_4a8._0_4_ = (undefined4)uStack_c8;
              uStack_4a8._4_4_ = uStack_c8._4_4_;
              uStack_4a0._0_4_ = (undefined4)uStack_c0;
              uStack_4a0._4_4_ = uStack_c0._4_4_;
              uStack_4b8 = (uint)lStack_d8;
              uStack_4b4 = (undefined4)((ulonglong)lStack_d8 >> 0x20);
              uStack_4b0 = (undefined4)lStack_d0;
              uStack_4ac = (uint)((ulonglong)lStack_d0 >> 0x20);
              uStack_488 = lVar3;
              uStack_480 = lVar26;
              lStack_478 = lVar7;
              lStack_470 = lVar8;
              plVar19 = (longlong *)(ulonglong)uStack_158;
              *puStack_248 = uStack_158;
              pdb_1404ae8c0(puStack_120);
              puStack_120[8] = lStack_478;
              puStack_120[9] = lStack_470;
              *(undefined4 *)(puStack_120 + 6) = (undefined4)uStack_488;
              *(undefined4 *)((longlong)puStack_120 + 0x34) = uStack_488._4_4_;
              *(undefined4 *)(puStack_120 + 7) = (undefined4)uStack_480;
              *(undefined4 *)((longlong)puStack_120 + 0x3c) = uStack_480._4_4_;
              *(undefined4 *)(puStack_120 + 4) = (undefined4)uStack_498;
              *(undefined4 *)((longlong)puStack_120 + 0x24) = uStack_498._4_4_;
              *(undefined4 *)(puStack_120 + 5) = (undefined4)uStack_490;
              *(undefined4 *)((longlong)puStack_120 + 0x2c) = uStack_490._4_4_;
              *(undefined4 *)(puStack_120 + 2) = (undefined4)uStack_4a8;
              *(undefined4 *)((longlong)puStack_120 + 0x14) = uStack_4a8._4_4_;
              *(undefined4 *)(puStack_120 + 3) = (undefined4)uStack_4a0;
              *(undefined4 *)((longlong)puStack_120 + 0x1c) = uStack_4a0._4_4_;
              *puStack_120 = CONCAT44(uStack_4b4,uStack_4b8);
              puStack_120[1] = CONCAT44(uStack_4ac,uStack_4b0);
              puStack_120[10] = plStack_e8;
              puStack_120[0xb] = uStack_e0;
              puVar20 = (ulonglong *)pdb_140f3bda0();
              if ((char)puVar20[2] == '\x01') {
                plVar18 = (longlong *)*puVar20;
                plVar19 = (longlong *)puVar20[1];
              }
              else {
                plVar18 = (longlong *)pdb_140f4fd10();
                *puVar20 = (ulonglong)plVar18;
                puVar20[1] = (ulonglong)plVar19;
                *(undefined1 *)(puVar20 + 2) = 1;
              }
              *puVar20 = (longlong)plVar18 + 1;
              *puStack_240 = uStack_154;
              lVar21 = plVar17[1];
              if (lVar21 != 0) {
                lVar27 = plVar17[3];
                plStack_e8 = plVar19;
                plStack_a8 = plVar18;
                if (lVar27 != 0) {
                  pauVar28 = (undefined1 (*) [16])*plStack_100;
                  auVar1 = *pauVar28;
                  pauVar25 = pauVar28 + 1;
                  uVar29 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
                  do {
                    if ((short)uVar29 == 0) {
                      do {
                        auVar1 = *pauVar25;
                        pauVar28 = pauVar28 + -0x140;
                        pauVar25 = pauVar25 + 1;
                        uVar29 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                          (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                          (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                          (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                          (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                          (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                          (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                          (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                          (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                          (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                          (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                          (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                          (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                          (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                          (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                         (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
                      } while (uVar29 == 0);
                    }
                    uVar5 = 0;
                    for (uVar6 = uVar29; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                      uVar5 = uVar5 + 1;
                    }
                    pdb_1404d7630(pauVar28[(ulonglong)uVar5 * -0x14 + -0x14] + 8);
                    uVar29 = uVar29 - 1 & uVar29;
                    lVar27 = lVar27 + -1;
                  } while (lVar27 != 0);
                }
                plVar18 = plStack_a8;
                plVar19 = plStack_e8;
                plVar17 = plStack_100;
                lVar27 = lVar21 * 0x140 + 0x140;
                uVar23 = lVar21 + lVar27 + 0x11;
                if (uVar23 != 0) {
                  pub_1406abac0((byte *)(*plStack_100 - lVar27),uVar23,0x10);
                }
              }
              lVar21 = _UNK_142f70768;
              plVar17[2] = _DAT_142f70760;
              plVar17[3] = lVar21;
              lVar21 = _UNK_142f70758;
              *plVar17 = _DAT_142f70750;
              plVar17[1] = lVar21;
              plVar17[4] = (longlong)plVar18;
              plVar17[5] = (longlong)plVar19;
              *(undefined1 *)(plVar17 + 6) = 0;
              *puStack_210 = uStack_14c;
              pdb_140c46f50(lStack_218);
              *puStack_228 = uStack_150;
              pdb_140870670(uStack_238);
              plVar17 = plStack_230;
              if (plStack_220 != (longlong *)0x0) {
                plVar17 = plStack_220;
              }
              lVar21 = plVar17[2];
              if ((ulonglong)(*plVar17 - lVar21) < 8) {
                pdb_142d7f1b0(plVar17,lVar21,8,1,1);
              }
              *(code **)(plVar17[1] + lVar21) = pdb_140093270;
              plVar17[2] = lVar21 + 8;
              return;
            }
            pdb_142dc7890(&UNK_142f3dc40);
            goto LAB_1405c9ee2;
          }
        }
      }
      goto LAB_1405c9e6e;
    }
  }
  pdb_142dc7890(&UNK_142f3dc40);
LAB_1405c9ee2:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

