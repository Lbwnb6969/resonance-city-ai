// VA 0x140cf1b80, PDB extent 15434 bytes
// clutter_icon_pipe::render_icon
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: clutter_icon_pipe::render_icon
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 15434 */

undefined8 *
pdb_140cf1b80(undefined8 *param_1,longlong param_2,longlong *param_3,longlong *param_4,char param_5)

{
  ulonglong ******ppppppuVar1;
  float *pfVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  float *pfVar10;
  longlong lVar11;
  byte *pbVar12;
  ulonglong *******pppppppuVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong *******pppppppuVar17;
  byte **ppbVar18;
  ulonglong uVar19;
  ulonglong *******pppppppuVar20;
  longlong lVar21;
  undefined8 uVar22;
  ulonglong *******pppppppuVar23;
  ulonglong *******pppppppuVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 *puVar50;
  float fStack_848;
  float fStack_844;
  float fStack_840;
  float fStack_83c;
  float fStack_838;
  float fStack_834;
  float fStack_830;
  float fStack_82c;
  float fStack_828;
  float fStack_824;
  float fStack_820;
  float fStack_81c;
  float fStack_818;
  float fStack_814;
  float fStack_810;
  float fStack_80c;
  float fStack_808;
  float fStack_804;
  float fStack_800;
  float fStack_7fc;
  float fStack_7f8;
  float fStack_7f4;
  float fStack_7f0;
  float fStack_7ec;
  float fStack_7e8;
  float fStack_7e4;
  float fStack_7e0;
  float fStack_7dc;
  float fStack_7d8;
  float fStack_7d4;
  float fStack_7d0;
  float fStack_7cc;
  float afStack_7c8 [6];
  ulonglong *******pppppppuStack_7b0;
  ulonglong *******pppppppuStack_7a8;
  ulonglong *******pppppppuStack_7a0;
  ulonglong *******pppppppuStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined4 uStack_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined4 uStack_764;
  ulonglong *******pppppppuStack_5d8;
  ulonglong *******pppppppuStack_5d0;
  ulonglong *******pppppppuStack_5c8;
  ulonglong *******pppppppuStack_5c0;
  undefined1 auStack_5b8 [32];
  ulonglong ******ppppppuStack_598;
  undefined4 uStack_590;
  undefined8 uStack_588;
  undefined4 uStack_580;
  undefined8 uStack_578;
  uint uStack_570;
  undefined8 uStack_568;
  undefined4 uStack_560;
  ulonglong *******pppppppuStack_558;
  ulonglong *******pppppppuStack_550;
  undefined8 uStack_548;
  ulonglong *******pppppppuStack_540;
  ulonglong *******pppppppuStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  ulonglong *******pppppppuStack_508;
  ulonglong *******pppppppuStack_500;
  ulonglong *******pppppppuStack_4f8;
  ulonglong *******pppppppuStack_4f0;
  ulonglong *******pppppppuStack_4e8;
  ulonglong *******pppppppuStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  ulonglong *******pppppppuStack_4c8;
  ulonglong *******pppppppuStack_4c0;
  ulonglong *******pppppppuStack_4b8;
  ulonglong *******pppppppuStack_4b0;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined *puStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  ulonglong uStack_480;
  byte *pbStack_478;
  ulonglong uStack_470;
  uint uStack_380;
  longlong alStack_378 [7];
  undefined4 uStack_33c;
  undefined8 uStack_338;
  ulonglong *******pppppppuStack_330;
  ulonglong *******pppppppuStack_328;
  longlong lStack_320;
  ulonglong *******pppppppuStack_318;
  ulonglong *******pppppppuStack_310;
  ulonglong *******pppppppuStack_308;
  float *pfStack_300;
  ulonglong *******pppppppuStack_2f8;
  ulonglong *******pppppppuStack_2f0;
  ulonglong *******pppppppuStack_2e8;
  ulonglong *******pppppppuStack_2e0;
  int iStack_2d8;
  longlong lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  longlong lStack_2a8;
  ulonglong *******pppppppuStack_2a0;
  undefined8 uStack_298;
  ulonglong ******ppppppuStack_290;
  undefined4 uStack_288;
  ulonglong ******ppppppuStack_280;
  ulonglong *******pppppppuStack_278;
  ulonglong *******pppppppuStack_270;
  ulonglong *******pppppppuStack_268;
  ulonglong *******pppppppuStack_258;
  ulonglong *******pppppppuStack_250;
  ulonglong *******pppppppuStack_248;
  ulonglong *******pppppppuStack_240;
  uint uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  ulonglong *******pppppppuStack_228;
  float *pfStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  ulonglong *******pppppppuStack_200;
  float fStack_1d0;
  float fStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  ulonglong ******ppppppuStack_1c0;
  byte *pbStack_1b8;
  ulonglong ******ppppppuStack_1b0;
  longlong lStack_1a8;
  ulonglong uStack_1a0;
  ulonglong *******pppppppuStack_198;
  ulonglong *******pppppppuStack_190;
  ulonglong *******pppppppuStack_188;
  ulonglong ******ppppppuStack_178;
  byte *pbStack_170;
  longlong lStack_168;
  ulonglong *******pppppppuStack_160;
  longlong *plStack_158;
  ulonglong *******pppppppuStack_150;
  ulonglong *******pppppppuStack_148;
  ulonglong *******pppppppuStack_140;
  ulonglong *******pppppppuStack_138;
  byte *pbStack_130;
  ulonglong *******pppppppuStack_128;
  undefined8 *puStack_120;
  undefined1 uStack_113;
  undefined1 uStack_112;
  undefined1 uStack_111;
  ulonglong *******pppppppuStack_110;
  ulonglong *******pppppppuStack_108;
  ulonglong *******pppppppuStack_100;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined1 auVar30 [16];
  undefined1 auVar43 [16];
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_f1 = 1;
  plStack_158 = param_4;
  puStack_120 = param_1;
  pppppppuStack_110 = (ulonglong *******)param_2;
  uStack_568 = pdb_140f3c9d0();
  uVar22 = _DAT_142e378e0;
  fVar45 = _DAT_142e36f50;
  uStack_560 = (undefined4)param_2;
  if (param_5 == '\0') {
    uVar40 = (undefined4)_DAT_143087990;
    uVar36 = (undefined4)((ulonglong)_DAT_143087990 >> 0x20);
    fStack_1cc = _DAT_142e36f28;
    fStack_1d0 = 0.0;
  }
  else {
    uVar40 = (undefined4)_DAT_143087980;
    uVar36 = (undefined4)((ulonglong)_DAT_143087980 >> 0x20);
    fStack_1cc = _DAT_142e37830;
    fStack_1d0 = _DAT_142e36f28;
  }
  uStack_33c = 0x3f0ed916;
  uStack_338 = CONCAT44(uVar36,uVar40);
  pppppppuVar13 = (ulonglong *******)param_3[2];
  pppppppuStack_330 = pppppppuVar13;
  fVar41 = _DAT_143053cb0;
  fVar47 = _DAT_142f7737c;
  uVar29 = _DAT_14305bf40;
  uVar42 = _DAT_142e3ec80;
  if (pppppppuVar13 != (ulonglong *******)0x0) {
    pfVar10 = (float *)param_3[1];
    pfVar2 = pfVar10 + (longlong)pppppppuVar13 * 3;
    auVar30 = _DAT_14305bf40;
    auVar43 = _DAT_142e3ec80;
    do {
      fVar28 = *pfVar10;
      if (fVar28 <= fVar47) {
        fVar47 = fVar28;
      }
      if (fVar41 <= fVar28) {
        fVar41 = fVar28;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *(ulonglong *)(pfVar10 + 1);
      auVar43 = minps(auVar43,auVar5);
      uVar42 = auVar43._0_8_;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *(ulonglong *)(pfVar10 + 1);
      auVar30 = maxps(auVar30,auVar6);
      uVar29 = auVar30._0_8_;
      pfVar10 = pfVar10 + 3;
    } while (pfVar10 != pfVar2);
  }
  pppppppuStack_100 = pppppppuVar13;
  pppppppuStack_108 = (ulonglong *******)CONCAT44(pppppppuStack_108._4_4_,(int)param_3[0x11]);
  fVar31 = (float)((ulonglong)uVar29 >> 0x20);
  fVar44 = (float)((ulonglong)uVar42 >> 0x20);
  fVar38 = (fVar41 + fVar47) * _DAT_142e36f50;
  fVar39 = (float)uVar42;
  fVar28 = (float)uVar29 - fVar39;
  fVar32 = fVar31 - fVar44;
  if (fVar28 <= fVar32) {
    fVar28 = fVar32;
  }
  fVar32 = fVar41 - fVar47;
  if (fVar41 - fVar47 <= fVar28) {
    fVar32 = fVar28;
  }
  if (fVar32 <= _DAT_142e37870) {
    fVar32 = _DAT_142e37870;
  }
  fVar32 = fVar32 * _DAT_142f57bc8;
  fVar41 = (fVar31 + fVar44) * _DAT_142e36f50;
  uStack_548 = _DAT_1430879a0;
  pppppppuStack_540 = _UNK_1430879a8;
  pppppppuStack_538 = _DAT_1430879b0;
  uStack_530 = (code *)_UNK_1430879b8;
  lVar21 = 0;
  do {
    fVar47 = *(float *)(&uStack_548 + lVar21);
    fVar28 = *(float *)((longlong)&uStack_548 + lVar21 * 8 + 4);
    lVar11 = param_3[2];
    if (lVar11 == *param_3) {
      uStack_f1 = 1;
      pdb_142d7f010(param_3);
    }
    lVar3 = param_3[1];
    *(float *)(lVar3 + lVar11 * 0xc) = fVar47 * fVar32 + fVar38;
    *(float *)(lVar3 + 4 + lVar11 * 0xc) = fVar39;
    *(float *)(lVar3 + 8 + lVar11 * 0xc) = fVar28 * fVar32 + fVar41;
    param_3[2] = lVar11 + 1;
    lVar11 = param_3[5];
    if (lVar11 == param_3[3]) {
      uStack_f1 = 1;
      pdb_142d7f010(param_3 + 3);
    }
    lVar3 = param_3[4];
    *(undefined8 *)(lVar3 + lVar11 * 0xc) = 0x3eeb851f3f000000;
    *(undefined4 *)(lVar3 + 8 + lVar11 * 0xc) = 0x3ecccccd;
    param_3[5] = lVar11 + 1;
    lVar11 = param_3[8];
    if (lVar11 == param_3[6]) {
      uStack_f1 = 1;
      pdb_142d7f010(param_3 + 6);
    }
    lVar3 = param_3[7];
    *(undefined8 *)(lVar3 + lVar11 * 0xc) = uVar22;
    *(undefined4 *)(lVar3 + 8 + lVar11 * 0xc) = 0;
    param_3[8] = lVar11 + 1;
    lVar11 = param_3[0xb];
    if (lVar11 == param_3[9]) {
      uStack_f1 = 1;
      pdb_142d8d7f0(param_3 + 9);
    }
    *(undefined8 *)(param_3[10] + lVar11 * 8) = 0;
    param_3[0xb] = lVar11 + 1;
    lVar11 = param_3[0xe];
    if (lVar11 == param_3[0xc]) {
      uStack_f1 = 1;
      pdb_142d8d710(param_3 + 0xc);
    }
    lVar21 = lVar21 + 1;
    *(undefined4 *)(param_3[0xd] + lVar11 * 4) = 0x40000000;
    param_3[0xe] = lVar11 + 1;
  } while (lVar21 != 4);
  lVar21 = param_3[0x11];
  if ((ulonglong)(param_3[0xf] - lVar21) < 6) {
    uStack_f1 = 1;
    pdb_142d7f1b0(param_3 + 0xf,lVar21,6,4,4);
    lVar21 = param_3[0x11];
  }
  iVar7 = (int)pppppppuStack_100;
  lVar11 = param_3[0x10];
  *(int *)(lVar11 + lVar21 * 4) = iVar7;
  *(int *)(lVar11 + 4 + lVar21 * 4) = iVar7 + 1;
  *(int *)(lVar11 + 8 + lVar21 * 4) = iVar7 + 2;
  *(int *)(lVar11 + 0xc + lVar21 * 4) = iVar7;
  *(int *)(lVar11 + 0x10 + lVar21 * 4) = iVar7 + 2;
  *(int *)(lVar11 + 0x14 + lVar21 * 4) = iVar7 + 3;
  param_3[0x11] = lVar21 + 6;
  pppppppuVar17 = (ulonglong *******)param_3[2];
  if (pppppppuVar17 < pppppppuStack_100) {
    uStack_f1 = 1;
    pdb_142dc8420(0,pppppppuStack_100,pppppppuVar17,&UNK_143087b58);
    goto LAB_140cf3b63;
  }
  lVar21 = param_3[1];
  uVar22 = (undefined8)DAT_14305bf40;
  fVar47 = _DAT_1430879c0;
  fVar28 = _UNK_1430879c4;
  fVar31 = _UNK_1430879c8;
  fVar44 = _UNK_1430879cc;
  if (pppppppuStack_100 != (ulonglong *******)0x0) {
    lVar11 = 0;
    auVar30 = _DAT_14305bf40;
    do {
      fVar34 = (float)*(undefined8 *)(lVar21 + lVar11);
      fVar49 = (float)((ulonglong)*(undefined8 *)(lVar21 + lVar11) >> 0x20);
      fVar35 = *(float *)(lVar21 + 8 + lVar11);
      fVar46 = fVar35 * _DAT_1430879f0 + fVar34 * _DAT_1430879d0 + fVar49 * _DAT_1430879e0;
      fVar48 = fVar35 * _UNK_1430879f4 + (fVar49 * _UNK_1430879d4 - fVar34 * _UNK_1430879e4);
      auVar43._8_4_ = fVar35 * _UNK_1430879f8 + fVar49 * _UNK_1430879d8 + fVar34 * _UNK_1430879e8;
      auVar43._12_4_ = fVar35 * _UNK_1430879fc + (fVar34 * _UNK_1430879dc - fVar49 * _UNK_1430879ec)
      ;
      uVar27 = -(uint)(fVar47 < fVar46);
      fVar47 = (float)((uint)fVar47 & uVar27 | ~uVar27 & (uint)fVar46);
      fVar28 = (float)((uint)fVar28 & -(uint)(fVar28 < fVar48) |
                      ~-(uint)(fVar28 < fVar48) & (uint)fVar48);
      fVar31 = (float)((uint)fVar31 & -(uint)(auVar43._8_4_ < fVar31) |
                      ~-(uint)(auVar43._8_4_ < fVar31) & (uint)auVar43._8_4_);
      fVar44 = (float)((uint)fVar44 & -(uint)(fVar44 < auVar43._12_4_) |
                      ~-(uint)(fVar44 < auVar43._12_4_) & (uint)auVar43._12_4_);
      auVar43._4_4_ = auVar43._12_4_;
      auVar43._0_4_ = fVar48;
      auVar30 = maxps(auVar30,auVar43);
      uVar22 = auVar30._0_8_;
      lVar11 = lVar11 + 0xc;
    } while ((longlong)pppppppuVar13 * 0xc != lVar11);
  }
  fVar34 = (fVar38 - fVar32) * _DAT_143087a00 - _DAT_143087a04 * fVar39;
  fVar46 = (fVar41 - fVar32) * _DAT_143087a08;
  fVar49 = fVar34 - fVar46;
  fVar35 = fVar49;
  if (fVar44 <= fVar49) {
    fVar35 = fVar44;
  }
  fVar35 = (float)(~-(uint)NAN(fVar44) & (uint)fVar35 | -(uint)NAN(fVar44) & (uint)fVar49);
  fVar33 = (float)((ulonglong)uVar22 >> 0x20);
  fVar48 = fVar49;
  if (fVar49 <= fVar33) {
    fVar48 = fVar33;
  }
  fVar49 = (float)(~-(uint)NAN(fVar33) & (uint)fVar48 | -(uint)NAN(fVar33) & (uint)fVar49);
  fVar39 = (fVar38 + fVar32) * _DAT_143087a00 - _DAT_143087a04 * fVar39;
  fVar46 = fVar39 - fVar46;
  fVar38 = fVar46;
  if (fVar35 <= fVar46) {
    fVar38 = fVar35;
  }
  fVar38 = (float)(-(uint)NAN(fVar35) & (uint)fVar46 | ~-(uint)NAN(fVar35) & (uint)fVar38);
  fVar35 = fVar46;
  if (fVar46 <= fVar49) {
    fVar35 = fVar49;
  }
  fVar35 = (float)(-(uint)NAN(fVar49) & (uint)fVar46 | ~-(uint)NAN(fVar49) & (uint)fVar35);
  fVar32 = (fVar41 + fVar32) * _DAT_143087a08;
  fVar39 = fVar39 - fVar32;
  fVar41 = fVar39;
  if (fVar38 <= fVar39) {
    fVar41 = fVar38;
  }
  fVar41 = (float)(-(uint)NAN(fVar38) & (uint)fVar39 | ~-(uint)NAN(fVar38) & (uint)fVar41);
  fVar38 = fVar39;
  if (fVar39 <= fVar35) {
    fVar38 = fVar35;
  }
  fVar38 = (float)(-(uint)NAN(fVar35) & (uint)fVar39 | ~-(uint)NAN(fVar35) & (uint)fVar38);
  fVar34 = fVar34 - fVar32;
  fVar32 = fVar34;
  if (fVar41 <= fVar34) {
    fVar32 = fVar41;
  }
  fVar39 = fVar34;
  if (fVar34 <= fVar38) {
    fVar39 = fVar38;
  }
  fVar38 = (float)(-(uint)NAN(fVar38) & (uint)fVar34 | ~-(uint)NAN(fVar38) & (uint)fVar39);
  fVar39 = (float)uVar22 - fVar28;
  if (fVar39 <= fVar33 - fVar44) {
    fVar39 = fVar33 - fVar44;
  }
  fVar35 = fVar31 - fVar47;
  if (fVar31 - fVar47 <= fVar39) {
    fVar35 = fVar39;
  }
  if (fVar35 <= _DAT_142e37870) {
    fVar35 = _DAT_142e37870;
  }
  fVar39 = (fVar44 + fVar33) * fVar45;
  afStack_7c8[0] = fVar35 * fVar45 * _DAT_142e3c628;
  fVar45 = fVar38 - (float)(-(uint)NAN(fVar41) & (uint)fVar34 | ~-(uint)NAN(fVar41) & (uint)fVar32);
  fStack_7d8 = (fVar31 + fVar47) * _DAT_142e61230;
  fStack_7d4 = ((float)uVar22 + fVar28) * _UNK_142e61234;
  if (fVar45 <= _DAT_142e37870) {
    fVar45 = _DAT_142e37870;
  }
  fStack_7d0 = (float)((uint)fVar39 ^ _UNK_142e37828);
  fStack_7e8 = fStack_7d8 * 0.0;
  fStack_7e4 = fStack_7d4 * 0.0;
  fStack_7e0 = fStack_7d0 * 0.0;
  fStack_7dc = _DAT_142e36f28 * 0.0;
  fStack_808 = _DAT_143087a10 + fStack_7e8;
  fStack_804 = _UNK_143087a14 + fStack_7e4;
  fStack_800 = _UNK_143087a18 + fStack_7e0;
  fStack_7fc = _UNK_143087a1c + fStack_7dc;
  fStack_7f8 = _DAT_143087a20 + fStack_7e8;
  fStack_7f4 = _UNK_143087a24 + fStack_7e4;
  fStack_7f0 = _UNK_143087a28 + fStack_7e0;
  fStack_7ec = _UNK_143087a2c + fStack_7dc;
  fStack_7e8 = fStack_7e8 + _DAT_143087a30;
  fStack_7e4 = fStack_7e4 + _UNK_143087a34;
  fStack_7e0 = fStack_7e0 + _UNK_143087a38;
  fStack_7dc = fStack_7dc + _UNK_143087a3c;
  fStack_7d8 = fStack_7d8 + 0.0;
  fStack_7d4 = fStack_7d4 + 0.0;
  fStack_7d0 = fStack_7d0 + 0.0;
  fStack_7cc = _DAT_142e36f28 + 0.0;
  fVar47 = _DAT_142e36f28 / (_DAT_14300c294 * afStack_7c8[0]);
  fVar41 = _DAT_142e36f28 / afStack_7c8[0];
  fVar28 = _DAT_142e36f34 / fVar45;
  fVar45 = (fVar38 - fVar39) / fVar45;
  fStack_848 = fStack_7fc * _DAT_142e4e650 +
               fStack_800 * 0.0 + fStack_804 * 0.0 + fStack_808 * fVar47;
  fStack_844 = fStack_7fc * _UNK_142e4e654 +
               fStack_800 * 0.0 + fStack_804 * fVar41 + fStack_808 * 0.0;
  fStack_840 = fStack_7fc * fVar45 + fStack_800 * fVar28 + fStack_804 * 0.0 + fStack_808 * 0.0;
  fStack_83c = fStack_7fc * _UNK_142e4e65c + fStack_800 * 0.0 + fStack_804 * 0.0 + fStack_808 * 0.0;
  fStack_838 = fStack_7ec * _DAT_142e4e650 +
               fStack_7f0 * 0.0 + fStack_7f4 * 0.0 + fStack_7f8 * fVar47;
  fStack_834 = fStack_7ec * _UNK_142e4e654 +
               fStack_7f0 * 0.0 + fStack_7f4 * fVar41 + fStack_7f8 * 0.0;
  fStack_830 = fStack_7ec * fVar45 + fStack_7f0 * fVar28 + fStack_7f4 * 0.0 + fStack_7f8 * 0.0;
  fStack_82c = fStack_7ec * _UNK_142e4e65c + fStack_7f0 * 0.0 + fStack_7f4 * 0.0 + fStack_7f8 * 0.0;
  fStack_828 = fStack_7dc * _DAT_142e4e650 +
               fStack_7e0 * 0.0 + fStack_7e4 * 0.0 + fStack_7e8 * fVar47;
  fStack_824 = fStack_7dc * _UNK_142e4e654 +
               fStack_7e0 * 0.0 + fStack_7e4 * fVar41 + fStack_7e8 * 0.0;
  fStack_820 = fStack_7dc * fVar45 + fStack_7e0 * fVar28 + fStack_7e4 * 0.0 + fStack_7e8 * 0.0;
  fStack_81c = fStack_7dc * _UNK_142e4e65c + fStack_7e0 * 0.0 + fStack_7e4 * 0.0 + fStack_7e8 * 0.0;
  fStack_818 = fStack_7cc * _DAT_142e4e650 +
               fStack_7d0 * 0.0 + fStack_7d4 * 0.0 + fStack_7d8 * fVar47;
  fStack_814 = fStack_7cc * _UNK_142e4e654 +
               fStack_7d0 * 0.0 + fStack_7d4 * fVar41 + fStack_7d8 * 0.0;
  fStack_810 = fStack_7cc * fVar45 + fStack_7d0 * fVar28 + fStack_7d4 * 0.0 + fStack_7d8 * 0.0;
  fStack_80c = fStack_7cc * _UNK_142e4e65c + fStack_7d0 * 0.0 + fStack_7d4 * 0.0 + fStack_7d8 * 0.0;
  uVar19 = (longlong)pppppppuVar17 * 0xc;
  if ((ulonglong *******)0xaaaaaaaaaaaaaaa < pppppppuVar17) {
    uVar22 = 0;
LAB_140cf23dc:
    uStack_f1 = 1;
    pdb_142dc7e2a(uVar22,uVar19);
    goto LAB_140cf3b63;
  }
  if (uVar19 == 0) {
    pbVar12 = (byte *)0x4;
    pppppppuVar13 = (ulonglong *******)0x0;
  }
  else {
    pdb_14007ee60();
    uVar22 = 4;
    pbVar12 = pub_1406abab0(uVar19,4);
    pppppppuVar13 = pppppppuVar17;
    if (pbVar12 == (byte *)0x0) goto LAB_140cf23dc;
  }
  if (pppppppuVar17 != (ulonglong *******)0x0) {
    pub_142e32760(pbVar12,lVar21,uVar19);
  }
  pppppppuStack_150 = (ulonglong *******)&UNK_143087b70;
  pppppppuStack_148 = (ulonglong *******)0xf;
  pppppppuStack_140 = (ulonglong *******)0x4;
  pppppppuVar24 = (ulonglong *******)param_3[5];
  uVar19 = (longlong)pppppppuVar24 * 0xc;
  pppppppuStack_138 = pppppppuVar13;
  pbStack_130 = pbVar12;
  pppppppuStack_128 = pppppppuVar17;
  if ((ulonglong *******)0xaaaaaaaaaaaaaaa < pppppppuVar24) {
    uVar22 = 0;
LAB_140cf2487:
    pdb_142dc7e2a(uVar22,uVar19);
    goto LAB_140cf3b63;
  }
  lVar21 = param_3[4];
  if (uVar19 == 0) {
    pppppppuVar13 = (ulonglong *******)0x4;
    pppppppuVar17 = (ulonglong *******)0x0;
  }
  else {
    pdb_14007ee60();
    uVar22 = 4;
    pppppppuVar13 = (ulonglong *******)pub_1406abab0(uVar19,4);
    pppppppuVar17 = pppppppuVar24;
    if (pppppppuVar13 == (ulonglong *******)0x0) goto LAB_140cf2487;
  }
  if (pppppppuVar24 != (ulonglong *******)0x0) {
    pub_142e32760(pppppppuVar13,lVar21,uVar19);
  }
  pppppppuStack_308 = (ulonglong *******)&UNK_143087b7f;
  pfStack_300 = (float *)0xc;
  pppppppuStack_2f8 = (ulonglong *******)0x4;
  pppppppuVar20 = (ulonglong *******)param_3[8];
  uVar19 = (longlong)pppppppuVar20 * 0xc;
  pppppppuStack_2f0 = pppppppuVar17;
  pppppppuStack_2e8 = pppppppuVar13;
  pppppppuStack_2e0 = pppppppuVar24;
  if ((ulonglong *******)0xaaaaaaaaaaaaaaa < pppppppuVar20) {
    uVar22 = 0;
LAB_140cf252c:
    pdb_142dc7e2a(uVar22,uVar19);
    goto LAB_140cf3b63;
  }
  lVar21 = param_3[7];
  if (uVar19 == 0) {
    pbVar12 = (byte *)0x4;
    pppppppuVar13 = (ulonglong *******)0x0;
  }
  else {
    pdb_14007ee60();
    uVar22 = 4;
    pbVar12 = pub_1406abab0(uVar19,4);
    pppppppuVar13 = pppppppuVar20;
    if (pbVar12 == (byte *)0x0) goto LAB_140cf252c;
  }
  if (pppppppuVar20 != (ulonglong *******)0x0) {
    pub_142e32760(pbVar12,lVar21,uVar19);
  }
  uStack_238 = (uint)pbVar12;
  uStack_234 = (undefined4)((ulonglong)pbVar12 >> 0x20);
  uStack_230 = SUB84(pppppppuVar20,0);
  uStack_22c = (undefined4)((ulonglong)pppppppuVar20 >> 0x20);
  pppppppuStack_258 = (ulonglong *******)&UNK_143087b8b;
  pppppppuStack_250 = (ulonglong *******)0xd;
  pppppppuStack_248 = (ulonglong *******)0x4;
  pppppppuVar17 = (ulonglong *******)param_3[0xb];
  uVar19 = (longlong)pppppppuVar17 * 8;
  pppppppuStack_240 = pppppppuVar13;
  if (0x7ffffffffffffffc < uVar19 || (ulonglong)pppppppuVar17 >> 0x3d != 0) {
    uVar22 = 0;
LAB_140cf25fc:
    pdb_142dc7e2a(uVar22,uVar19);
    goto LAB_140cf3b63;
  }
  lVar21 = param_3[10];
  if (uVar19 == 0) {
    pppppppuVar13 = (ulonglong *******)0x4;
    pppppppuVar24 = (ulonglong *******)0x0;
  }
  else {
    pdb_14007ee60();
    uVar22 = 4;
    pppppppuVar13 = (ulonglong *******)pub_1406abab0(uVar19,4);
    pppppppuVar24 = pppppppuVar17;
    if (pppppppuVar13 == (ulonglong *******)0x0) goto LAB_140cf25fc;
  }
  if (pppppppuVar17 != (ulonglong *******)0x0) {
    pub_142e32760(pppppppuVar13,lVar21,uVar19);
  }
  pppppppuStack_7b0 = (ulonglong *******)&UNK_143087b98;
  pppppppuStack_7a8 = (ulonglong *******)0x9;
  pppppppuStack_7a0 = (ulonglong *******)0x3;
  uVar15 = param_3[0xe];
  uVar19 = uVar15 * 4;
  pppppppuStack_798 = pppppppuVar24;
  uStack_790 = pppppppuVar13;
  uStack_788 = pppppppuVar17;
  if (uVar19 < 0x7ffffffffffffffd && uVar15 >> 0x3e == 0) {
    lVar21 = param_3[0xd];
    if (uVar19 == 0) {
      pbVar12 = (byte *)0x4;
      uVar26 = 0;
    }
    else {
      pdb_14007ee60();
      uVar22 = 4;
      pbVar12 = pub_1406abab0(uVar19,4);
      uVar26 = uVar15;
      if (pbVar12 == (byte *)0x0) goto LAB_140cf26ba;
    }
    if (uVar15 != 0) {
      pub_142e32760(pbVar12,lVar21,uVar19);
    }
    pppppppuStack_558 = pppppppuStack_150;
    pppppppuStack_550 = pppppppuStack_148;
    uStack_548 = pppppppuStack_140;
    pppppppuStack_540 = pppppppuStack_138;
    pppppppuStack_538 = (ulonglong *******)pbStack_130;
    uStack_530 = (code *)pppppppuStack_128;
    uStack_528 = pppppppuStack_308;
    uStack_520 = (code *)pfStack_300;
    uStack_518 = pppppppuStack_2f8;
    uStack_510 = (code *)pppppppuStack_2f0;
    pppppppuStack_508 = pppppppuStack_2e8;
    pppppppuStack_500 = pppppppuStack_2e0;
    uStack_4d8 = CONCAT44(uStack_234,uStack_238);
    uStack_4d0 = CONCAT44(uStack_22c,uStack_230);
    pppppppuStack_4f8 = pppppppuStack_258;
    pppppppuStack_4f0 = pppppppuStack_250;
    pppppppuStack_4e8 = pppppppuStack_248;
    pppppppuStack_4e0 = pppppppuStack_240;
    uStack_4a8 = (undefined4)uStack_790;
    uStack_4a4 = uStack_790._4_4_;
    uStack_4a0 = (undefined4)uStack_788;
    uStack_49c = uStack_788._4_4_;
    pppppppuStack_4b8 = pppppppuStack_7a0;
    pppppppuStack_4b0 = pppppppuStack_798;
    pppppppuStack_4c8 = pppppppuStack_7b0;
    pppppppuStack_4c0 = pppppppuStack_7a8;
    puStack_498 = &UNK_143087ba1;
    uStack_490 = 5;
    uStack_488 = 0;
    uStack_480 = uVar26;
    pbStack_478 = pbVar12;
    uStack_470 = uVar15;
    pdb_140e4cd50(&ppppppuStack_178,&pppppppuStack_558,5);
    pdb_140cf9be0(&pppppppuStack_558);
    pppppppuStack_538 =
         (ulonglong *******)(*(longlong *)((longlong)pppppppuStack_110 + 0x248) + 0x10);
    pppppppuStack_308 = (ulonglong *******)&UNK_143087ba6;
    pfStack_300 = (float *)0x11;
    pppppppuStack_150 = (ulonglong *******)CONCAT62(pppppppuStack_150._2_6_,0x80);
    pppppppuStack_558 = *(ulonglong ********)((longlong)pppppppuStack_110 + 0x238);
    pppppppuStack_550 = pppppppuStack_558 + *(longlong *)((longlong)pppppppuStack_110 + 0x240) * 4;
    uStack_548 = (ulonglong *******)&pppppppuStack_308;
    uStack_530 = (code *)&pppppppuStack_150;
    uStack_f3 = 1;
    pppppppuVar13 = (ulonglong *******)&pppppppuStack_558;
    pppppppuStack_540 = &ppppppuStack_178;
    pdb_141d58ba0(&pppppppuStack_7b0);
    pppppppuStack_258 = pppppppuStack_7a8;
    pppppppuStack_250 = pppppppuStack_7a0;
    pppppppuStack_248 = pppppppuStack_798;
    if (pppppppuStack_7b0 == (ulonglong *******)0xc) {
      pppppppuStack_198 = pppppppuStack_7a8;
      pppppppuStack_190 = pppppppuStack_7a0;
      pppppppuStack_188 = pppppppuStack_798;
      uStack_1c4 = *(uint *)(param_3 + 0x11);
      lVar21 = *(longlong *)((longlong)pppppppuStack_110 + 0x248);
      uStack_f4 = 1;
      plVar14 = (longlong *)pdb_140f3bda0();
      if ((char)plVar14[2] == '\x01') {
        lStack_2a8 = *plVar14;
        pppppppuVar13 = (ulonglong *******)plVar14[1];
      }
      else {
        uStack_f4 = 1;
        lStack_2a8 = pdb_140f4fd10();
        *plVar14 = lStack_2a8;
        plVar14[1] = (longlong)pppppppuVar13;
        *(undefined1 *)(plVar14 + 2) = 1;
      }
      plVar9 = plStack_158;
      *plVar14 = lStack_2a8 + 1;
      lStack_2d0 = lVar21 + 0x10;
      uStack_2c8 = _DAT_143088830;
      uStack_2c0 = _UNK_143088838;
      uStack_2b8 = _DAT_143088840;
      uStack_2b0 = _UNK_143088848;
      uStack_298 = 0;
      pppppppuStack_308 = (ulonglong *******)0x0;
      pfStack_300 = (float *)0x4;
      pppppppuStack_2e0 = (ulonglong *******)0x0;
      iStack_2d8 = 0;
      pppppppuStack_2f8 = (ulonglong *******)0x0;
      pppppppuStack_2f0 = (ulonglong *******)0x0;
      pppppppuStack_2e8 = (ulonglong *******)((ulonglong)pppppppuStack_2e8 & 0xffffffff00000000);
      lVar21 = plStack_158[2];
      ppppppuVar1 = (ulonglong ******)(lVar21 + 1);
      uVar19 = (longlong)ppppppuVar1 * 0x38;
      pppppppuStack_2a0 = pppppppuVar13;
      pdb_14007ee60();
      pbVar12 = pub_1406abab0(uVar19,8);
      uStack_111 = pbVar12 == (byte *)0x0;
      if ((bool)uStack_111) {
        pdb_142dc7e2a(8,uVar19);
        goto LAB_140cf3b63;
      }
      ppppppuStack_1b0 = (ulonglong ******)0x0;
      lStack_1a8 = *plVar9;
      pppppppuVar13 = (ulonglong *******)plVar9[1];
      pppppppuStack_310 = pppppppuVar13 + lVar21 * 9;
      uStack_1a0 = lStack_1a8 * 0x48;
      lVar21 = 0;
      pppppppuVar17 = pppppppuVar13;
      ppppppuStack_1c0 = ppppppuVar1;
      pbStack_1b8 = pbVar12;
LAB_140cf2ac0:
      pppppppuVar24 = pppppppuVar17;
      if (pppppppuVar13 == (ulonglong *******)0x0) {
LAB_140cf2b02:
        if (lVar21 != 0) {
          lVar21 = *(longlong *)((longlong)pppppppuStack_110 + 0x248);
          ppppppuStack_280 = (ulonglong ******)0x20000000280;
          uVar19 = pdb_140e1d0f0(0x140000,0x30);
          pdb_140e55ce0(&pppppppuStack_7b0,lVar21 + 0x10,&UNK_143087bb7,0x15,uVar19);
          pppppppuVar17 = pppppppuStack_798;
          pppppppuVar13 = pppppppuStack_7a0;
          if (pppppppuStack_7b0 == (ulonglong *******)0xb) {
            pppppppuStack_160 = pppppppuStack_7a8;
            uVar25 = 0;
            pub_142e32780(pppppppuStack_7a0,0,pppppppuStack_798);
            uVar15 = pdb_140f3cb70(&uStack_568);
            uVar27 = uVar25;
            uStack_578 = pdb_140f3c9d0();
            uStack_570 = uVar27;
            pdb_140e6c160(auStack_5b8,*(longlong *)((longlong)pppppppuStack_110 + 0x248) + 0x10);
            puVar50 = auStack_5b8;
            pdb_141d5a6b0(&pppppppuStack_558,pppppppuStack_110,puVar50,
                          (longlong)pppppppuStack_110 + 0x140,uVar19 & 0xffffffff00000000);
            pub_142e32760(&pppppppuStack_7b0,&pppppppuStack_558,0x1d8);
            if ((ulonglong)uStack_380 != 0) {
              lVar21 = 0;
              do {
                if (*(longlong *)((longlong)alStack_378 + lVar21) != 0) {
                  pub_1406abac0(*(byte **)((longlong)alStack_378 + lVar21 + 8),
                                *(longlong *)((longlong)alStack_378 + lVar21) * 0x18,8);
                }
                lVar21 = lVar21 + 0x18;
              } while ((ulonglong)uStack_380 * 0x18 != lVar21);
            }
            lVar21 = (longlong)pppppppuStack_110 + 0x250;
            pppppppuStack_558 = (ulonglong *******)((longlong)pppppppuStack_110 + 0x298);
            pppppppuStack_550 = (ulonglong *******)((longlong)pppppppuStack_110 + 0x2a0);
            uStack_548 = (ulonglong *******)((longlong)pppppppuStack_110 + 0x2a8);
            pppppppuStack_540 = &ppppppuStack_1c0;
            pppppppuStack_538 = &ppppppuStack_280;
            uStack_530 = (code *)&fStack_848;
            uStack_528 = (ulonglong *******)&fStack_808;
            uStack_520 = (code *)afStack_7c8;
            uStack_518 = (ulonglong *******)&uStack_33c;
            uStack_510 = (code *)&pppppppuStack_198;
            pppppppuStack_508 = (ulonglong *******)&fStack_1cc;
            pppppppuStack_500 = (ulonglong *******)&pppppppuStack_160;
            pppppppuStack_4f8 = (ulonglong *******)&fStack_1d0;
            uStack_f2 = 1;
            pdb_141d5d850(&pppppppuStack_258,&pppppppuStack_7b0,&UNK_143087bcc,0x11,lVar21,puVar50,
                          &pppppppuStack_558);
            uVar40 = (undefined4)((ulonglong)lVar21 >> 0x20);
            uVar36 = (undefined4)((ulonglong)puVar50 >> 0x20);
            if (pppppppuStack_258 == (ulonglong *******)0x0) {
              uStack_f2 = 1;
              uVar22 = pdb_142df8040();
              puStack_120[1] = uVar22;
              *puStack_120 = 0x8000000000000000;
              pdb_141d4f630(&pppppppuStack_7b0);
              pdb_1404bccd0(auStack_5b8);
              pdb_141d51b20(&pppppppuStack_160);
              goto LAB_140cf3363;
            }
            pppppppuStack_138 = pppppppuStack_240;
            pppppppuStack_148 = pppppppuStack_250;
            pppppppuStack_140 = pppppppuStack_248;
            pppppppuStack_150 = pppppppuStack_258;
            ppbVar18 = &pbStack_130;
            uStack_f2 = 1;
            pdb_140cfaba0(&pppppppuStack_150,ppbVar18,0x20,0x10);
            puVar8 = _DAT_143ca8e90;
            uStack_580 = SUB84(ppbVar18,0);
            if (3 < *_DAT_143ca8e90) {
              ppppppuStack_290 =
                   (ulonglong ******)CONCAT44(ppppppuStack_290._4_4_,(uint)pppppppuStack_108 / 3);
              uVar19 = (longlong)pppppppuStack_2e0 + (longlong)pppppppuStack_2f0;
              if (CARRY8((ulonglong)pppppppuStack_2e0,(ulonglong)pppppppuStack_2f0)) {
LAB_140cf3b11:
                uStack_f2 = 1;
                pdb_142dc8110(&UNK_143087ae0,0x1e,&UNK_143087b00);
                goto LAB_140cf3b63;
              }
              uVar27 = (int)pppppppuStack_2e8 + iStack_2d8;
              if (999999999 < uVar27) {
                if (uVar19 == 0xffffffffffffffff) goto LAB_140cf3b11;
                uVar19 = uVar19 + 1;
                uVar27 = uVar27 + 0xc4653600;
              }
              uVar16 = 1000000000;
              pppppppuVar24 = (ulonglong *******)(uVar15 - uVar19);
              if (uVar19 <= uVar15) {
                if (uVar25 < uVar27) {
                  if (pppppppuVar24 == (ulonglong *******)0x0) goto LAB_140cf34ef;
                  pppppppuVar24 = (ulonglong *******)((longlong)pppppppuVar24 + -1);
                  uVar25 = uVar25 + 1000000000;
                }
                uVar16 = uVar25 - uVar27;
                if (999999999 < uVar16) {
                  if (pppppppuVar24 == (ulonglong *******)0xffffffffffffffff) {
                    uStack_f2 = 1;
                    pdb_142dc8110(&UNK_143087a40,0x19,&UNK_143087ac8);
                    goto LAB_140cf3b63;
                  }
                  pppppppuVar24 = (ulonglong *******)((longlong)pppppppuVar24 + 1);
                  uVar16 = uVar16 + 0xc4653600;
                }
              }
LAB_140cf34ef:
              uVar27 = 0;
              pppppppuStack_278 = (ulonglong *******)0x0;
              if (uVar16 != 1000000000) {
                pppppppuStack_278 = pppppppuVar24;
                uVar27 = uVar16;
              }
              pppppppuStack_270 = (ulonglong *******)CONCAT44(pppppppuStack_270._4_4_,uVar27);
              uStack_f2 = 1;
              pppppppuStack_150 = (ulonglong *******)pdb_140f3cb70(&uStack_578);
              uStack_528 = (ulonglong *******)&pppppppuStack_2f0;
              pppppppuStack_148 = (ulonglong *******)CONCAT44(pppppppuStack_148._4_4_,(int)uVar19);
              pppppppuStack_558 = &ppppppuStack_290;
              pppppppuStack_550 = (ulonglong *******)pdb_140f71a50;
              uStack_548 = (ulonglong *******)&pppppppuStack_330;
              pppppppuStack_540 = (ulonglong *******)pdb_140f72a40;
              pppppppuStack_538 = (ulonglong *******)&pppppppuStack_308;
              uStack_530 = pdb_141d5ebf0;
              uStack_520 = pdb_140f72840;
              uStack_518 = (ulonglong *******)&pppppppuStack_2e0;
              uStack_510 = pdb_140f72840;
              pppppppuStack_508 = (ulonglong *******)&pppppppuStack_278;
              pppppppuStack_500 = (ulonglong *******)pdb_140f72840;
              pppppppuStack_4f0 = (ulonglong *******)pdb_140f72840;
              pppppppuStack_258 = (ulonglong *******)0x0;
              pppppppuStack_250 = (ulonglong *******)&UNK_143087c7d;
              pppppppuStack_248 = (ulonglong *******)0x11;
              pppppppuStack_240 = (ulonglong *******)0x0;
              uStack_238 = 0x43087b18;
              uStack_234 = 1;
              uStack_230 = 0x23;
              uStack_22c = 0;
              pppppppuStack_228 = (ulonglong *******)0x4;
              pfStack_220 = (float *)&UNK_143087c7d;
              uStack_218 = 0x11;
              uStack_210 = 0x48500000001;
              puStack_208 = &UNK_143087bdd;
              pppppppuStack_200 = (ulonglong *******)&pppppppuStack_558;
              uStack_f2 = 1;
              uStack_580 = SUB84(&pppppppuStack_258,0);
              pppppppuStack_4f8 = (ulonglong *******)&pppppppuStack_150;
              pdb_140f332f0(&uStack_113);
            }
            uStack_f2 = 1;
            uStack_588 = pdb_140f3c9d0();
            pppppppuVar24 = (ulonglong *******)&pppppppuStack_558;
            pub_142e32760(pppppppuVar24,&pppppppuStack_7b0,0x1d8);
            uStack_f2 = 0;
            pdb_141d5c1b0(&pppppppuStack_258);
            uVar37 = SUB84(pppppppuVar24,0);
            if (!SBORROW8(0,(longlong)pppppppuStack_258)) {
              uStack_f2 = 0;
              pdb_141d4f500(&pppppppuStack_258);
            }
            uStack_f2 = 0;
            ppppppuStack_598 = (ulonglong ******)pdb_140f3cb70(&uStack_588);
            uStack_f2 = 0;
            uStack_590 = uVar37;
            ppppppuStack_290 = (ulonglong ******)pdb_140f3c9d0();
            pppppppuStack_150 = (ulonglong *******)0x0;
            pppppppuStack_148 = (ulonglong *******)0x1;
            pppppppuStack_140 = (ulonglong *******)0x0;
            pppppppuStack_550 = (ulonglong *******)CONCAT62(pppppppuStack_550._2_6_,0x105);
            pppppppuVar24 = (ulonglong *******)&pppppppuStack_558;
            pppppppuStack_558 = (ulonglong *******)&pppppppuStack_150;
            uStack_288 = uVar37;
            pdb_141d60820(&pppppppuStack_258,pppppppuVar24,pppppppuVar13,pppppppuVar17,
                          CONCAT44(uVar40,(int)ppppppuStack_280),
                          CONCAT44(uVar36,(int)((ulonglong)ppppppuStack_280 >> 0x20)),0x10);
            if (pppppppuStack_258 == (ulonglong *******)0x800000000000000a) {
              pppppppuStack_278 = pppppppuStack_150;
              pppppppuStack_270 = pppppppuStack_148;
              pppppppuStack_268 = pppppppuStack_140;
            }
            else {
              uStack_520 = (code *)pfStack_220;
              pppppppuStack_538 = (ulonglong *******)CONCAT44(uStack_234,uStack_238);
              uStack_530 = (code *)CONCAT44(uStack_22c,uStack_230);
              uStack_528 = pppppppuStack_228;
              pppppppuStack_540 = pppppppuStack_240;
              pppppppuStack_550 = pppppppuStack_250;
              uStack_548 = pppppppuStack_248;
              pppppppuStack_558 = pppppppuStack_258;
              pppppppuStack_270 = (ulonglong *******)pdb_142df8190(&pppppppuStack_558);
              pppppppuStack_278 = (ulonglong *******)0x8000000000000000;
              pppppppuVar24 = pppppppuStack_150;
              if (pppppppuStack_150 != (ulonglong *******)0x0) {
                pub_1406abac0((byte *)pppppppuStack_148,(ulonglong)pppppppuStack_150,1);
              }
            }
            uVar40 = SUB84(pppppppuVar24,0);
            if (3 < *puVar8) {
              pppppppuStack_150 = (ulonglong *******)pdb_140f3cb70(&ppppppuStack_290);
              pppppppuStack_148 = (ulonglong *******)CONCAT44(pppppppuStack_148._4_4_,uVar40);
              pppppppuStack_258 = &ppppppuStack_598;
              pppppppuStack_250 = (ulonglong *******)pdb_140f72840;
              pppppppuStack_240 = (ulonglong *******)pdb_140f72840;
              pppppppuStack_558 = (ulonglong *******)0x0;
              pppppppuStack_550 = (ulonglong *******)&UNK_143087c7d;
              uStack_548 = (ulonglong *******)0x11;
              pppppppuStack_540 = (ulonglong *******)0x0;
              pppppppuStack_538 = (ulonglong *******)&UNK_143087b18;
              uStack_530 = (code *)0x23;
              uStack_528 = (ulonglong *******)0x4;
              uStack_520 = (code *)&UNK_143087c7d;
              uStack_518 = (ulonglong *******)0x11;
              uStack_510 = (code *)0x49700000001;
              pppppppuStack_508 = (ulonglong *******)&UNK_143087c8e;
              pppppppuStack_500 = (ulonglong *******)&pppppppuStack_258;
              pppppppuStack_248 = (ulonglong *******)&pppppppuStack_150;
              pdb_140f332f0(&uStack_113,&pppppppuStack_558);
            }
            puStack_120[2] = pppppppuStack_268;
            *puStack_120 = pppppppuStack_278;
            puStack_120[1] = pppppppuStack_270;
            pdb_1404bccd0(auStack_5b8);
            pdb_141d51b20(&pppppppuStack_160);
            pdb_141d558a0(&ppppppuStack_1c0);
            uStack_f4 = 0;
            pdb_141d52760(&pppppppuStack_308);
            pppppppuStack_110 = pppppppuStack_188;
            pppppppuStack_100 = (ulonglong *******)0x0;
            pppppppuStack_108 = pppppppuStack_190;
            pppppppuVar13 = pppppppuStack_190;
            while (pppppppuStack_110 != pppppppuStack_100) {
              pppppppuStack_100 = (ulonglong *******)((longlong)pppppppuStack_100 + 1);
              pdb_141d51b20(pppppppuVar13);
              pppppppuVar13 = pppppppuVar13 + 1;
            }
            if (pppppppuStack_198 != (ulonglong *******)0x0) {
              pub_1406abac0((byte *)pppppppuStack_108,(longlong)pppppppuStack_198 << 3,8);
            }
            pppppppuStack_110 = (ulonglong *******)lStack_168;
            pppppppuStack_100 = (ulonglong *******)0x0;
            pppppppuStack_108 = (ulonglong *******)pbStack_170;
            pbVar12 = pbStack_170;
            while (pppppppuStack_110 != pppppppuStack_100) {
              pppppppuStack_100 = (ulonglong *******)((longlong)pppppppuStack_100 + 1);
              pdb_141d55cf0(pbVar12);
              pbVar12 = pbVar12 + 0x30;
            }
            goto LAB_140cf3a5c;
          }
          uStack_528 = (ulonglong *******)CONCAT44(uStack_77c,uStack_780);
          uStack_520 = (code *)CONCAT44(uStack_774,uStack_778);
          uStack_518 = (ulonglong *******)CONCAT44(uStack_76c,uStack_770);
          uStack_510 = (code *)CONCAT44(uStack_764,uStack_768);
          pppppppuStack_538 = uStack_790;
          uStack_530 = (code *)uStack_788;
          pppppppuStack_558 = pppppppuStack_7b0;
          pppppppuStack_550 = pppppppuStack_7a8;
          uStack_548 = pppppppuStack_7a0;
          pppppppuStack_540 = pppppppuStack_798;
          uVar22 = pdb_142df7fb0(&pppppppuStack_558);
          puStack_120[1] = uVar22;
          *puStack_120 = 0x8000000000000000;
          goto LAB_140cf3363;
        }
        uVar36 = 0;
        uVar37 = 0;
        pppppppuVar23 = (ulonglong *******)0x2;
        pppppppuVar13 = (ulonglong *******)0x0;
        uVar40 = 0;
        lVar21 = 1;
        uVar16 = 0;
        pppppppuVar20 = (ulonglong *******)0x2;
        uVar27 = (uint)pppppppuStack_108;
        uVar25 = uStack_1c4;
        if ((uint)pppppppuStack_108 <= uStack_1c4) goto LAB_140cf2b83;
      }
      else {
        pppppppuVar24 = pppppppuStack_310;
        if (pppppppuVar17 == pppppppuStack_310) {
LAB_140cf2ae1:
          if (lStack_1a8 != 0) {
            pub_1406abac0((byte *)pppppppuVar13,uStack_1a0,8);
          }
          goto LAB_140cf2b02;
        }
        pppppppuVar24 = pppppppuVar17 + 9;
        pppppppuVar20 = (ulonglong *******)*pppppppuVar17;
        if (pppppppuVar20 == (ulonglong *******)0x3) goto LAB_140cf2ae1;
        pppppppuStack_5d8 = (ulonglong *******)pppppppuVar17[1];
        pppppppuStack_5d0 = (ulonglong *******)pppppppuVar17[2];
        pppppppuVar23 = (ulonglong *******)pppppppuVar17[3];
        pppppppuStack_5c8 = (ulonglong *******)pppppppuVar17[4];
        pppppppuStack_5c0 = (ulonglong *******)pppppppuVar17[5];
        uVar27 = *(uint *)(pppppppuVar17 + 6);
        uVar25 = *(uint *)((longlong)pppppppuVar17 + 0x34);
        uVar36 = SUB84(pppppppuVar17[7],0);
        uVar37 = (undefined4)((ulonglong)pppppppuVar17[7] >> 0x20);
        uVar40 = *(undefined4 *)(pppppppuVar17 + 8);
        uVar16 = *(byte *)((longlong)pppppppuVar17 + 0x44) & 1;
        if (uVar27 <= uVar25) {
LAB_140cf2b83:
          if ((ulonglong)uVar25 <= (ulonglong)param_3[0x11]) goto code_r0x000140cf2b93;
        }
      }
      pppppppuStack_100 = pppppppuVar13;
      pdb_140f3f5b0(&pppppppuStack_558);
      uVar22 = pdb_142df75c0(&UNK_143087cd1,0x2d,&pppppppuStack_558);
LAB_140cf3039:
      puStack_120[1] = uVar22;
      *puStack_120 = 0x8000000000000000;
LAB_140cf30a9:
      if ((pppppppuStack_100 != (ulonglong *******)0x0) && (lStack_1a8 != 0)) {
        pub_1406abac0((byte *)pppppppuStack_100,uStack_1a0,8);
      }
LAB_140cf3363:
      pdb_141d558a0(&ppppppuStack_1c0);
      uStack_f4 = 0;
      pdb_141d52760(&pppppppuStack_308);
      pppppppuStack_110 = pppppppuStack_188;
      pppppppuStack_100 = (ulonglong *******)0x0;
      pppppppuStack_108 = pppppppuStack_190;
      pppppppuVar13 = pppppppuStack_190;
      while (pppppppuStack_110 != pppppppuStack_100) {
        pppppppuStack_100 = (ulonglong *******)((longlong)pppppppuStack_100 + 1);
        pdb_141d51b20(pppppppuVar13);
        pppppppuVar13 = pppppppuVar13 + 1;
      }
      if (pppppppuStack_198 != (ulonglong *******)0x0) {
        pub_1406abac0((byte *)pppppppuStack_108,(longlong)pppppppuStack_198 << 3,8);
      }
      pppppppuStack_110 = (ulonglong *******)lStack_168;
      pppppppuStack_100 = (ulonglong *******)0x0;
      pppppppuStack_108 = (ulonglong *******)pbStack_170;
      pbVar12 = pbStack_170;
      while (pppppppuStack_110 != pppppppuStack_100) {
        pppppppuStack_100 = (ulonglong *******)((longlong)pppppppuStack_100 + 1);
        pdb_141d55cf0(pbVar12);
        pbVar12 = pbVar12 + 0x30;
      }
LAB_140cf3a5c:
      if (ppppppuStack_178 == (ulonglong ******)0x0) {
        return puStack_120;
      }
      uVar19 = (longlong)ppppppuStack_178 * 0x30;
      pppppppuVar13 = pppppppuStack_108;
    }
    else {
      uStack_528 = (ulonglong *******)CONCAT44(uStack_77c,uStack_780);
      uStack_520 = (code *)CONCAT44(uStack_774,uStack_778);
      uStack_518 = (ulonglong *******)CONCAT44(uStack_76c,uStack_770);
      uStack_510 = (code *)CONCAT44(uStack_764,uStack_768);
      pppppppuStack_538 = uStack_790;
      uStack_530 = (code *)uStack_788;
      pppppppuStack_550 = pppppppuStack_7a8;
      uStack_548 = pppppppuStack_7a0;
      pppppppuStack_540 = pppppppuStack_798;
      pppppppuStack_558 = pppppppuStack_7b0;
      uStack_f3 = 1;
      uVar22 = pdb_142df8070(&pppppppuStack_558);
      puStack_120[1] = uVar22;
      *puStack_120 = 0x8000000000000000;
      pppppppuStack_110 = (ulonglong *******)lStack_168;
      pppppppuStack_100 = (ulonglong *******)0x0;
      pppppppuStack_108 = (ulonglong *******)pbStack_170;
      while (pppppppuStack_110 != pppppppuStack_100) {
        pppppppuStack_100 = (ulonglong *******)((longlong)pppppppuStack_100 + 1);
        pdb_141d55cf0(pbStack_170);
        pbStack_170 = pbStack_170 + 0x30;
      }
      if (ppppppuStack_178 != (ulonglong ******)0x0) {
        pub_1406abac0((byte *)pppppppuStack_108,(longlong)ppppppuStack_178 * 0x30,8);
      }
      if (*plStack_158 == 0) {
        return puStack_120;
      }
      pppppppuVar13 = (ulonglong *******)plStack_158[1];
      uVar19 = *plStack_158 * 0x48;
    }
    pub_1406abac0((byte *)pppppppuVar13,uVar19,8);
    return puStack_120;
  }
  uVar22 = 0;
LAB_140cf26ba:
  pdb_142dc7e2a(uVar22,uVar19);
LAB_140cf3b63:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
code_r0x000140cf2b93:
  pppppppuVar17 = pppppppuVar24;
  if (uVar25 != uVar27) {
    lVar11 = (ulonglong)uVar25 - (ulonglong)uVar27;
    uStack_1c8 = uVar16;
    pppppppuStack_100 = pppppppuVar13;
    pdb_140e54f50(&pppppppuStack_7b0,*(longlong *)((longlong)pppppppuStack_110 + 0x248) + 0x10,
                  &UNK_143087cfe,0x14,(ulonglong)uVar27 * 4 + param_3[0x10],lVar11,0x40);
    if (pppppppuStack_7b0 != (ulonglong *******)0xb) {
      uStack_518 = (ulonglong *******)CONCAT44(uStack_76c,uStack_770);
      uStack_510 = (code *)CONCAT44(uStack_764,uStack_768);
      uStack_528 = (ulonglong *******)CONCAT44(uStack_77c,uStack_780);
      uStack_520 = (code *)CONCAT44(uStack_774,uStack_778);
      pppppppuStack_538 = uStack_790;
      uStack_530 = (code *)uStack_788;
      uStack_548 = pppppppuStack_7a0;
      pppppppuStack_540 = pppppppuStack_798;
      pppppppuStack_558 = pppppppuStack_7b0;
      pppppppuStack_550 = pppppppuStack_7a8;
      uVar22 = pdb_142df7fb0(&pppppppuStack_558);
      goto LAB_140cf3039;
    }
    pppppppuStack_328 = pppppppuStack_7a8;
    pppppppuStack_150 = pppppppuStack_7a8;
    uStack_112 = pppppppuVar20 != (ulonglong *******)0x2;
    pppppppuStack_550 = pppppppuStack_5d8;
    uStack_548 = pppppppuStack_5d0;
    pppppppuVar13 = (ulonglong *******)&UNK_143087d12;
    pppppppuStack_558 = pppppppuVar20;
    lStack_320 = lVar21;
    pppppppuStack_318 = pppppppuVar24;
    uVar19 = pdb_140cf5890(&pppppppuStack_308,&UNK_143087d12,0x17,&pppppppuStack_558);
    if ((uVar19 & 1) != 0) {
      puStack_120[1] = pppppppuVar13;
      *puStack_120 = 0x8000000000000000;
      pdb_141d51b20(&pppppppuStack_150);
      goto LAB_140cf30a9;
    }
    pppppppuStack_550 = pppppppuStack_5c8;
    uStack_548 = pppppppuStack_5c0;
    pppppppuVar17 = (ulonglong *******)&UNK_143087d29;
    pppppppuStack_7b0 = pppppppuVar13;
    pppppppuStack_558 = pppppppuVar23;
    uVar19 = pdb_140cf5890(&pppppppuStack_308,&UNK_143087d29,0x19,&pppppppuStack_558);
    ppppppuVar1 = ppppppuStack_1b0;
    if ((uVar19 & 1) != 0) {
      puStack_120[1] = pppppppuVar17;
      *puStack_120 = 0x8000000000000000;
      pdb_141d52180(&pppppppuStack_7b0);
      pdb_141d51b20(&pppppppuStack_150);
      goto LAB_140cf30a9;
    }
    pppppppuStack_258 = pppppppuStack_328;
    pppppppuStack_240 = (ulonglong *******)(ulonglong)CONCAT14(uStack_112,(int)lVar11);
    uStack_238 = (uint)(pppppppuVar23 != (ulonglong *******)0x2);
    pppppppuStack_228 = (ulonglong *******)CONCAT44(pppppppuStack_228._4_4_,uStack_1c8);
    pppppppuStack_250 = pppppppuVar13;
    pppppppuStack_248 = pppppppuVar17;
    uStack_234 = uVar36;
    uStack_230 = uVar37;
    uStack_22c = uVar40;
    if (ppppppuStack_1b0 == ppppppuStack_1c0) {
      pdb_142d7f080(&ppppppuStack_1c0);
    }
    lVar21 = (longlong)ppppppuVar1 * 0x38;
    *(ulonglong ********)(pbStack_1b8 + lVar21 + 0x30) = pppppppuStack_228;
    *(ulonglong *)(pbStack_1b8 + lVar21 + 0x20) = CONCAT44(uStack_234,uStack_238);
    *(ulonglong *)(pbStack_1b8 + lVar21 + 0x20 + 8) = CONCAT44(uStack_22c,uStack_230);
    *(ulonglong ********)(pbStack_1b8 + lVar21 + 0x10) = pppppppuStack_248;
    *(ulonglong ********)(pbStack_1b8 + lVar21 + 0x10 + 8) = pppppppuStack_240;
    *(ulonglong ********)(pbStack_1b8 + lVar21) = pppppppuStack_258;
    *(ulonglong ********)(pbStack_1b8 + lVar21 + 8) = pppppppuStack_250;
    ppppppuStack_1b0 = (ulonglong ******)((longlong)ppppppuVar1 + 1);
    pppppppuVar13 = pppppppuStack_100;
    lVar21 = lStack_320;
    pppppppuVar17 = pppppppuStack_318;
  }
  goto LAB_140cf2ac0;
}

