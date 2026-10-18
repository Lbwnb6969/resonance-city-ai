// VA 0x141423b80, PDB extent 24101 bytes
// system_wall_constructor::construct_gates::construct_wooden_gate_doors
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_gates/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_gates::construct_wooden_gate_doors
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_gates/mod.rs
   Extent: 24101 */

longlong *
pdb_141423b80(longlong *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
             float *******param_9,undefined8 *param_10,undefined8 param_11,char *param_12,
             undefined8 param_13,longlong param_14,float *******param_15,float param_16,
             undefined8 param_17)

{
  float *******pppppppfVar1;
  float *pfVar2;
  longlong *plVar3;
  float fVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  byte *pbVar10;
  undefined4 uVar11;
  longlong lVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  float *pfVar19;
  byte *pbVar20;
  ulonglong uVar21;
  float *******pppppppfVar22;
  undefined1 auVar23 [8];
  longlong lVar24;
  float *******pppppppfVar25;
  undefined8 *puVar26;
  longlong lVar27;
  float ******ppppppfVar28;
  float *******pppppppfVar29;
  ulonglong uVar30;
  longlong lVar31;
  float ******ppppppfVar32;
  longlong *plVar33;
  float *******pppppppfVar34;
  ulonglong uVar35;
  undefined8 in_R10;
  ulonglong uVar36;
  ulonglong uVar37;
  float *******pppppppfVar38;
  ulonglong uVar39;
  float *******pppppppfVar40;
  float ******ppppppfVar41;
  ulonglong uVar42;
  float *******pppppppfVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar47;
  float fVar48;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 extraout_XMM0_Qb_00;
  float fVar59;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar60;
  float fVar63;
  float fVar64;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar65;
  uint uVar69;
  uint uVar70;
  undefined1 auVar66 [16];
  uint uVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  uint uVar76;
  uint uVar77;
  undefined1 auVar75 [16];
  float fVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar83;
  undefined4 uVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar96;
  float fVar98;
  float fVar99;
  undefined1 auVar97 [16];
  float fVar100;
  undefined8 in_stack_fffffffffffff9f8;
  ulonglong in_stack_fffffffffffffa08;
  uint uStack_53c;
  float fStack_538;
  uint uStack_534;
  undefined8 uStack_530;
  float *pfStack_528;
  longlong lStack_520;
  undefined1 auStack_518 [16];
  undefined1 auStack_508 [16];
  undefined1 auStack_4f8 [16];
  float *******pppppppfStack_4e0;
  longlong lStack_4d8;
  longlong *plStack_4d0;
  float *******pppppppfStack_4c8;
  float *******pppppppfStack_4c0;
  ulonglong uStack_4b8;
  ulonglong uStack_4b0;
  undefined8 uStack_4a8;
  float fStack_4a0;
  float fStack_49c;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  float *******pppppppfStack_478;
  float *******pppppppfStack_470;
  undefined1 auStack_468 [8];
  float fStack_460;
  float fStack_45c;
  float *******pppppppfStack_458;
  float *******pppppppfStack_450;
  float *******pppppppfStack_448;
  longlong lStack_440;
  byte *pbStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  float *******pppppppfStack_420;
  float *******pppppppfStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 auStack_3f8 [16];
  float *******pppppppfStack_3e8;
  float *pfStack_3e0;
  float *******pppppppfStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  float *******pppppppfStack_3b8;
  undefined8 uStack_3b0;
  undefined1 auStack_3a8 [8];
  float fStack_3a0;
  float fStack_39c;
  undefined1 auStack_398 [24];
  float fStack_380;
  undefined4 uStack_37c;
  float *******pppppppfStack_378;
  float fStack_370;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  ulonglong uStack_358;
  float *******pppppppfStack_350;
  byte *pbStack_348;
  ulonglong uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  float *******pppppppfStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  float *******pppppppfStack_2f0;
  float *******pppppppfStack_2e8;
  float *******pppppppfStack_2e0;
  float *******pppppppfStack_2d8;
  ulonglong uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  float *******pppppppfStack_2a8;
  float *******pppppppfStack_2a0;
  float *******pppppppfStack_298;
  byte *pbStack_290;
  undefined8 uStack_288;
  float *******pppppppfStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  int iStack_268;
  undefined1 uStack_264;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  float afStack_240 [2];
  undefined8 uStack_238;
  undefined8 uStack_230;
  float fStack_228;
  float fStack_224;
  float *******pppppppfStack_220;
  float *******pppppppfStack_218;
  float *******pppppppfStack_210;
  float *******pppppppfStack_208;
  ulonglong uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  float *******pppppppfStack_1d0;
  undefined1 auStack_1c8 [16];
  longlong lStack_1b0;
  byte *pbStack_1a8;
  longlong lStack_1a0;
  float fStack_194;
  float *******pppppppfStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  float *******pppppppfStack_170;
  float *******pppppppfStack_168;
  ulonglong uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float *******pppppppfStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined8 extraout_XMM0_Qb;
  
  uStack_f0 = 0xfffffffffffffffe;
  pppppppfStack_470 = param_15;
  lStack_1b0 = 0;
  pbStack_1a8 = (byte *)0x8;
  lStack_1a0 = 0;
  pppppppfStack_328 = *(float ********)(param_6 + 0x20);
  uVar30 = *(ulonglong *)(param_6 + 0x28);
  pppppppfVar34 = (float *******)((longlong)pppppppfStack_328 + uVar30 * 0xc);
  uStack_318 = (float *******)0x0;
  uStack_530 = param_3;
  pfStack_528 = param_2;
  plStack_4d0 = param_1;
  uStack_320 = (code *)pppppppfVar34;
  uStack_118 = pppppppfStack_328;
  pfVar19 = (float *)pdb_141466f50(&pppppppfStack_328);
  fVar83 = _DAT_142e377f0;
  if (pfVar19 != (float *)0x0) {
    do {
      fVar4 = *pfVar19;
      fVar45 = pfVar19[1];
      fVar46 = pfVar19[2];
      fVar60 = *param_2;
      fVar78 = param_2[1];
      fVar64 = param_2[2];
      pfVar19 = (float *)pdb_141466f50(&pppppppfStack_328);
      fVar83 = fVar83 + SQRT((fVar46 - fVar64) * (fVar46 - fVar64) +
                             (fVar45 - fVar78) * (fVar45 - fVar78) +
                             (fVar4 - fVar60) * (fVar4 - fVar60));
    } while (pfVar19 != (float *)0x0);
  }
  if (uVar30 == 0) {
    uStack_158._0_4_ = 0.0;
    uStack_158._4_4_ = 0.0;
    auStack_150._0_4_ = 4;
    auStack_150._4_4_ = 0;
    uStack_148._0_4_ = 0;
    uStack_148._4_4_ = 0.0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_143308f98);
  }
  pdb_14007ee60();
  pbVar20 = pub_1406abab0(uVar30 * 0xc,4);
  fVar4 = _DAT_142e36f28;
  if (pbVar20 == (byte *)0x0) {
    pdb_142dc7e2a(4,uVar30 * 0xc);
LAB_141428030:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uStack_158._0_4_ = (float)uVar30;
  uStack_158._4_4_ = (float)(uVar30 >> 0x20);
  auStack_150._0_4_ = SUB84(pbVar20,0);
  auStack_150._4_4_ = (undefined4)((ulonglong)pbVar20 >> 0x20);
  uStack_148._0_4_ = 0;
  uStack_148._4_4_ = 0.0;
  if (pppppppfVar34 == (float *******)0xc) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143308fb0);
  }
  fVar45 = *(float *)uStack_118;
  fVar46 = *(float *)((longlong)pppppppfVar34 + -0xc);
  lVar27 = *(longlong *)(param_6 + 8);
  uVar42 = *(ulonglong *)(param_6 + 0x10);
  uVar35 = uVar30;
  if (uVar42 < uVar30) {
    uVar35 = uVar42;
  }
  uStack_338 = (float *******)CONCAT44(uStack_338._4_4_,param_16 + _DAT_142e36f50);
  fVar60 = _DAT_142e36f3c;
  if (uVar42 == 0) {
    auVar80 = ZEXT816(0);
  }
  else {
    if (uVar35 < 9) {
      auVar80 = ZEXT816(0);
      uVar21 = 0;
    }
    else {
      uVar42 = 8;
      if ((uVar35 & 7) != 0) {
        uVar42 = (ulonglong)((uint)uVar35 & 7);
      }
      pppppppfVar25 = uStack_118 + 0xb;
      uVar36 = 0xfffffffffffffff8;
      auVar80 = ZEXT816(0);
      auVar75 = _DAT_14303aa60;
      auVar87 = _DAT_14303aa60;
      auVar92 = ZEXT816(0);
      do {
        auVar61 = auVar92;
        auVar74 = auVar87;
        auVar62 = auVar80;
        uVar15 = auVar75._0_4_;
        uVar16 = auVar75._4_4_;
        uVar76 = auVar75._8_4_;
        uVar77 = auVar75._12_4_;
        fVar60 = *(float *)((longlong)pppppppfVar25 + -0x54);
        fVar78 = *(float *)(pppppppfVar25 + -9);
        fVar64 = *(float *)((longlong)pppppppfVar25 + -0x3c);
        fVar59 = *(float *)(pppppppfVar25 + -6);
        auVar97._12_4_ = fVar59;
        auVar97._8_4_ = fVar64;
        auVar97._4_4_ = fVar78;
        auVar97._0_4_ = fVar60;
        fVar44 = *(float *)((longlong)pppppppfVar25 + -0x24);
        fVar86 = *(float *)(pppppppfVar25 + -3);
        fVar63 = *(float *)((longlong)pppppppfVar25 + -0xc);
        fVar65 = *(float *)pppppppfVar25;
        auVar92._12_4_ = fVar65;
        auVar92._8_4_ = fVar63;
        auVar92._4_4_ = fVar86;
        auVar92._0_4_ = fVar44;
        auVar87 = minps(auVar74,auVar97);
        pfVar19 = (float *)(lVar27 + 0x20 + uVar36 * 4);
        auVar89._0_4_ = *pfVar19 + fVar60;
        auVar89._4_4_ = pfVar19[1] + fVar78;
        auVar89._8_4_ = pfVar19[2] + fVar64;
        auVar89._12_4_ = pfVar19[3] + fVar59;
        auVar80 = maxps(auVar62,auVar89);
        auVar90._4_4_ = -(uint)(NAN(auVar89._4_4_) || NAN(fVar78));
        auVar90._0_4_ = -(uint)(NAN(auVar89._0_4_) || NAN(fVar60));
        auVar90._8_4_ = -(uint)(NAN(auVar89._8_4_) || NAN(fVar64));
        auVar90._12_4_ = -(uint)(NAN(auVar89._12_4_) || NAN(fVar59));
        auVar91._0_4_ = auVar74._0_4_ & -(uint)NAN(fVar60);
        auVar91._4_4_ = auVar74._4_4_ & -(uint)NAN(fVar78);
        auVar91._8_4_ = auVar74._8_4_ & -(uint)NAN(fVar64);
        auVar91._12_4_ = auVar74._12_4_ & -(uint)NAN(fVar59);
        auVar79._0_4_ = ~-(uint)NAN(fVar60) & auVar87._0_4_;
        auVar79._4_4_ = ~-(uint)NAN(fVar78) & auVar87._4_4_;
        auVar79._8_4_ = ~-(uint)NAN(fVar64) & auVar87._8_4_;
        auVar79._12_4_ = ~-(uint)NAN(fVar59) & auVar87._12_4_;
        auVar92 = minps(auVar75,auVar92);
        pfVar19 = (float *)(lVar27 + 0x30 + uVar36 * 4);
        auVar94._0_4_ = *pfVar19 + fVar44;
        auVar94._4_4_ = pfVar19[1] + fVar86;
        auVar94._8_4_ = pfVar19[2] + fVar63;
        auVar94._12_4_ = pfVar19[3] + fVar65;
        auVar97 = maxps(auVar61,auVar94);
        auVar95._4_4_ = -(uint)(NAN(auVar94._4_4_) || NAN(fVar86));
        auVar95._0_4_ = -(uint)(NAN(auVar94._0_4_) || NAN(fVar44));
        auVar95._8_4_ = -(uint)(NAN(auVar94._8_4_) || NAN(fVar63));
        auVar95._12_4_ = -(uint)(NAN(auVar94._12_4_) || NAN(fVar65));
        auVar87._0_4_ = uVar15 & -(uint)NAN(fVar44);
        auVar87._4_4_ = uVar16 & -(uint)NAN(fVar86);
        auVar87._8_4_ = uVar76 & -(uint)NAN(fVar63);
        auVar87._12_4_ = uVar77 & -(uint)NAN(fVar65);
        auVar75._0_4_ = ~-(uint)NAN(fVar44) & auVar92._0_4_;
        auVar75._4_4_ = ~-(uint)NAN(fVar86) & auVar92._4_4_;
        auVar75._8_4_ = ~-(uint)NAN(fVar63) & auVar92._8_4_;
        auVar75._12_4_ = ~-(uint)NAN(fVar65) & auVar92._12_4_;
        auVar75 = auVar75 | auVar87;
        auVar53._0_4_ = auVar62._0_4_ & -(uint)NAN(auVar89._0_4_);
        auVar53._4_4_ = auVar62._4_4_ & -(uint)NAN(auVar89._4_4_);
        auVar53._8_4_ = auVar62._8_4_ & -(uint)NAN(auVar89._8_4_);
        auVar53._12_4_ = auVar62._12_4_ & -(uint)NAN(auVar89._12_4_);
        auVar72._0_4_ = ~-(uint)NAN(auVar89._0_4_) & auVar80._0_4_;
        auVar72._4_4_ = ~-(uint)NAN(auVar89._4_4_) & auVar80._4_4_;
        auVar72._8_4_ = ~-(uint)NAN(auVar89._8_4_) & auVar80._8_4_;
        auVar72._12_4_ = ~-(uint)NAN(auVar89._12_4_) & auVar80._12_4_;
        auVar54._0_4_ = auVar61._0_4_ & -(uint)NAN(auVar94._0_4_);
        auVar54._4_4_ = auVar61._4_4_ & -(uint)NAN(auVar94._4_4_);
        auVar54._8_4_ = auVar61._8_4_ & -(uint)NAN(auVar94._8_4_);
        auVar54._12_4_ = auVar61._12_4_ & -(uint)NAN(auVar94._12_4_);
        auVar88._0_4_ = ~-(uint)NAN(auVar94._0_4_) & auVar97._0_4_;
        auVar88._4_4_ = ~-(uint)NAN(auVar94._4_4_) & auVar97._4_4_;
        auVar88._8_4_ = ~-(uint)NAN(auVar94._8_4_) & auVar97._8_4_;
        auVar88._12_4_ = ~-(uint)NAN(auVar94._12_4_) & auVar97._12_4_;
        iVar17 = movmskps((int)in_R10,auVar95 | auVar90);
        uVar21 = uVar36 + 8;
        if (iVar17 != 0) break;
        lVar31 = uVar36 + (uVar42 - uVar35) + 8;
        pppppppfVar25 = pppppppfVar25 + 0xc;
        in_R10 = 0;
        uVar36 = uVar21;
        auVar80 = auVar72 | auVar53;
        auVar87 = auVar79 | auVar91;
        auVar92 = auVar88 | auVar54;
      } while (lVar31 != -8);
      if ((char)iVar17 == '\0') {
        uVar15 = auVar75._0_4_;
        uVar16 = auVar75._4_4_;
        uVar76 = auVar75._8_4_;
        uVar21 = uVar35 - uVar42;
        auVar74 = auVar79 | auVar91;
        auVar62 = auVar72 | auVar53;
        auVar61 = auVar88 | auVar54;
        uVar77 = auVar75._12_4_;
      }
      auVar80 = maxps(auVar61,auVar62);
      auVar66._0_4_ = auVar61._0_4_ & -(uint)NAN(auVar62._0_4_);
      auVar66._4_4_ = auVar61._4_4_ & -(uint)NAN(auVar62._4_4_);
      auVar66._8_4_ = auVar61._8_4_ & -(uint)NAN(auVar62._8_4_);
      auVar66._12_4_ = auVar61._12_4_ & -(uint)NAN(auVar62._12_4_);
      auVar61._0_4_ = ~-(uint)NAN(auVar62._0_4_) & auVar80._0_4_;
      auVar61._4_4_ = ~-(uint)NAN(auVar62._4_4_) & auVar80._4_4_;
      auVar61._8_4_ = ~-(uint)NAN(auVar62._8_4_) & auVar80._8_4_;
      auVar61._12_4_ = ~-(uint)NAN(auVar62._12_4_) & auVar80._12_4_;
      auVar61 = auVar61 | auVar66;
      fVar78 = auVar61._0_4_;
      fVar64 = auVar61._4_4_;
      fVar59 = auVar61._8_4_;
      fVar44 = auVar61._12_4_;
      auVar62._0_8_ = auVar61._8_8_;
      auVar62._8_4_ = fVar59;
      auVar62._12_4_ = fVar44;
      fVar60 = fVar64;
      if (fVar64 <= fVar78) {
        fVar60 = fVar78;
      }
      fVar60 = (float)(~-(uint)NAN(fVar78) & (uint)fVar60 | -(uint)NAN(fVar78) & (uint)fVar64);
      if (fVar59 <= fVar60) {
        auVar62._4_12_ = auVar62._4_12_;
        auVar62._0_4_ = fVar60;
      }
      fVar78 = (float)(-(uint)NAN(fVar60) & (uint)fVar59 | ~-(uint)NAN(fVar60) & auVar62._0_4_);
      uVar69 = (uint)fVar64 & (uint)fVar44 | ~(uint)fVar64 & auVar62._4_4_;
      uVar70 = (uint)fVar44 & (uint)fVar59 | ~(uint)fVar44 & auVar62._8_4_;
      uVar71 = (uint)fVar44 | ~(uint)fVar44 & auVar62._12_4_;
      fVar60 = fVar44;
      if (fVar44 <= fVar78) {
        fVar60 = fVar78;
      }
      auVar73._0_4_ = ~-(uint)NAN(fVar78) & (uint)fVar60;
      auVar73._4_4_ = ~uVar69 & (uint)fVar44;
      auVar73._8_4_ = ~uVar70 & (uint)fVar44;
      auVar73._12_4_ = ~uVar71 & (uint)fVar44;
      auVar67._0_4_ = -(uint)NAN(fVar78) & (uint)fVar44;
      auVar67._4_4_ = uVar69 & (uint)fVar44;
      auVar67._8_4_ = uVar70 & (uint)fVar44;
      auVar67._12_4_ = uVar71 & (uint)fVar44;
      auVar80 = auVar67 | auVar73;
      auVar55._4_4_ = uVar16;
      auVar55._0_4_ = uVar15;
      auVar55._8_4_ = uVar76;
      auVar55._12_4_ = uVar77;
      auVar75 = minps(auVar55,auVar74);
      auVar49._0_4_ = ~-(uint)NAN(auVar74._0_4_) & auVar75._0_4_;
      auVar49._4_4_ = ~-(uint)NAN(auVar74._4_4_) & auVar75._4_4_;
      auVar49._8_4_ = ~-(uint)NAN(auVar74._8_4_) & auVar75._8_4_;
      auVar49._12_4_ = ~-(uint)NAN(auVar74._12_4_) & auVar75._12_4_;
      auVar6._4_4_ = uVar16 & -(uint)NAN(auVar74._4_4_);
      auVar6._0_4_ = uVar15 & -(uint)NAN(auVar74._0_4_);
      auVar6._8_4_ = uVar76 & -(uint)NAN(auVar74._8_4_);
      auVar6._12_4_ = uVar77 & -(uint)NAN(auVar74._12_4_);
      auVar49 = auVar49 | auVar6;
      fVar78 = auVar49._0_4_;
      fVar64 = auVar49._4_4_;
      fVar59 = auVar49._8_4_;
      fVar44 = auVar49._12_4_;
      auVar74._0_8_ = auVar49._8_8_;
      auVar74._8_4_ = fVar59;
      auVar74._12_4_ = fVar44;
      fVar60 = fVar64;
      if (fVar78 <= fVar64) {
        fVar60 = fVar78;
      }
      fVar60 = (float)(~-(uint)NAN(fVar78) & (uint)fVar60 | -(uint)NAN(fVar78) & (uint)fVar64);
      if (fVar60 <= fVar59) {
        auVar50._4_12_ = auVar74._4_12_;
        auVar50._0_4_ = fVar60;
        auVar74._0_8_ = auVar50._0_8_;
      }
      fVar78 = (float)(-(uint)NAN(fVar60) & (uint)fVar59 | ~-(uint)NAN(fVar60) & (uint)auVar74._0_8_
                      );
      fVar60 = fVar44;
      if (fVar78 <= fVar44) {
        fVar60 = fVar78;
      }
      fVar60 = (float)(-(uint)NAN(fVar78) & (uint)fVar44 | ~-(uint)NAN(fVar78) & (uint)fVar60);
      auStack_1c8 = ZEXT416((uint)fVar45);
    }
    pfVar19 = (float *)((longlong)uStack_118 + (uVar21 * 3 + 1) * 4);
    do {
      fVar78 = *pfVar19;
      fVar64 = fVar60;
      if (fVar78 <= fVar60) {
        fVar64 = fVar78;
      }
      fVar60 = (float)(~-(uint)NAN(fVar78) & (uint)fVar64 | -(uint)NAN(fVar78) & (uint)fVar60);
      fVar78 = fVar78 + *(float *)(lVar27 + uVar21 * 4);
      uVar21 = uVar21 + 1;
      fVar64 = auVar80._0_4_;
      if (fVar64 <= fVar78) {
        auVar80._4_12_ = auVar80._4_12_;
        auVar80._0_4_ = fVar78;
      }
      auVar56._0_4_ = ~-(uint)NAN(fVar78) & auVar80._0_4_;
      auVar56._4_4_ = auVar80._4_4_;
      auVar56._8_4_ = auVar80._8_4_;
      auVar56._12_4_ = auVar80._12_4_;
      auVar80 = ZEXT416(-(uint)NAN(fVar78) & (uint)fVar64) | auVar56;
      pfVar19 = pfVar19 + 3;
    } while (uVar35 != uVar21);
  }
  fVar86 = 0.0;
  fVar78 = *(float *)(uStack_118 + 1);
  fVar64 = *(float *)((longlong)pppppppfVar34 + -4);
  fVar44 = auVar80._0_4_ - (param_16 + _DAT_142e36f50);
  fVar59 = fVar60;
  if (fVar60 <= fVar44) {
    fVar59 = fVar44;
  }
  fVar59 = (float)(-(uint)NAN(fVar44) & (uint)fVar60 | ~-(uint)NAN(fVar44) & (uint)fVar59);
  pppppppfVar40 = (float *******)0x0;
  uVar42 = 0;
  pppppppfVar25 = uStack_118;
LAB_1414240ce:
  auStack_1c8._0_4_ = fVar86;
  fVar86 = fVar86 / fVar83;
  fVar44 = fVar4 - fVar86;
  while (pppppppfVar22 = pppppppfVar25, uStack_148 = pppppppfVar40, pppppppfVar22 != pppppppfVar34)
  {
    if (pppppppfVar40 == (float *******)CONCAT44(uStack_158._4_4_,(float)uStack_158)) {
      pdb_142db7820(&uStack_158);
    }
    pppppppfVar25 = (float *******)((longlong)pppppppfVar22 + 0xc);
    uVar42 = uVar42 + 1;
    *(ulonglong *)(CONCAT44(auStack_150._4_4_,auStack_150._0_4_) + (longlong)pppppppfVar40 * 0xc) =
         CONCAT44(fVar86 * fVar59 + fVar44 * fVar59,fVar86 * fVar46 + fVar44 * fVar45);
    *(float *)(CONCAT44(auStack_150._4_4_,auStack_150._0_4_) + 8 + (longlong)pppppppfVar40 * 0xc) =
         fVar86 * fVar64 + fVar78 * fVar44;
    pppppppfVar40 = (float *******)((longlong)pppppppfVar40 + 1);
    if (uVar42 < uVar30) goto LAB_141424180;
  }
  uVar30 = (longlong)pppppppfVar40 * 0xc;
  if ((float *******)0xaaaaaaaaaaaaaaa < pppppppfVar40) {
    auVar74._0_8_ = 0;
LAB_141424214:
    pdb_142dc7e2a(auVar74._0_8_,uVar30);
    goto LAB_141428030;
  }
  auVar51._0_8_ = CONCAT44(auStack_150._4_4_,auStack_150._0_4_);
  if (uVar30 == 0) {
    pppppppfVar22 = (float *******)0x4;
    pppppppfVar25 = (float *******)0x0;
  }
  else {
    pdb_14007ee60();
    auVar74._0_8_ = 4;
    pppppppfVar22 = (float *******)pub_1406abab0(uVar30,4);
    pppppppfVar25 = pppppppfVar40;
    if (pppppppfVar22 == (float *******)0x0) goto LAB_141424214;
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = auStack_3f8._8_8_;
  auStack_3f8 = auVar7 << 0x40;
  uStack_408 = pppppppfVar25;
  uStack_400 = pppppppfVar22;
  if (pppppppfVar40 != (float *******)0x0) {
    pub_142e32760(pppppppfVar22,auVar51._0_8_,uVar30);
    auStack_3f8._0_8_ = pppppppfVar40;
  }
  pdb_140080930(&pppppppfStack_328,&uStack_408,0);
  pppppppfVar25 = pppppppfStack_328;
  if (!SBORROW8(0,(longlong)pppppppfStack_328)) {
    uStack_238._0_4_ = SUB84(uStack_300,0);
    uStack_238._4_4_ = (float)((ulonglong)uStack_300 >> 0x20);
    uStack_230._0_4_ = SUB84(uStack_2f8,0);
    uStack_230._4_4_ = (float)((ulonglong)uStack_2f8 >> 0x20);
    uStack_248._0_4_ = SUB84(uStack_310,0);
    uStack_248._4_4_ = (float)((ulonglong)uStack_310 >> 0x20);
    afStack_240[0] = SUB84(uStack_308,0);
    afStack_240[1] = (float)((ulonglong)uStack_308 >> 0x20);
    uStack_258 = (float *******)uStack_320;
    uStack_250._0_4_ = SUB84(uStack_318,0);
    uStack_250._4_4_ = (float)((ulonglong)uStack_318 >> 0x20);
  }
  if (CONCAT44(uStack_158._4_4_,(float)uStack_158) != 0) {
    pub_1406abac0((byte *)CONCAT44(auStack_150._4_4_,auStack_150._0_4_),
                  CONCAT44(uStack_158._4_4_,(float)uStack_158) * 0xc,4);
  }
  if (SBORROW8(0,(longlong)pppppppfVar25)) {
    *plStack_4d0 = 0;
    plStack_4d0[1] = 8;
    plStack_4d0[2] = 0;
    if (lStack_1b0 == 0) {
      return plStack_4d0;
    }
    uVar30 = lStack_1b0 << 3;
    uVar42 = 8;
    pbVar20 = pbStack_1a8;
    plVar33 = plStack_4d0;
    goto LAB_141427377;
  }
  pppppppfStack_458 = pppppppfVar25;
  pppppppfVar25 = (float *******)CONCAT44(uStack_250._4_4_,(float)uStack_250);
  lStack_440 = CONCAT44(uStack_248._4_4_,(float)uStack_248);
  pbStack_438 = (byte *)CONCAT44(afStack_240[1],afStack_240[0]);
  uStack_430 = CONCAT44(uStack_238._4_4_,(float)uStack_238);
  uStack_428 = CONCAT44(uStack_230._4_4_,(float)uStack_230);
  pppppppfStack_450 = uStack_258;
  pppppppfStack_448 = pppppppfVar25;
  if (pppppppfVar25 == (float *******)0x0) {
    pppppppfVar22 = (float *******)0x4;
    pppppppfVar40 = (float *******)0x0;
  }
  else {
    pdb_14007ee60();
    pppppppfVar22 = (float *******)pub_1406abab0((longlong)pppppppfVar25 * 4,4);
    pppppppfVar40 = pppppppfStack_448;
    if (pppppppfVar22 == (float *******)0x0) {
      pdb_142dc7e2a(4,(longlong)pppppppfVar25 * 4);
      goto LAB_141428030;
    }
  }
  pppppppfVar38 = pppppppfStack_450;
  uStack_318 = (float *******)0x0;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = auStack_1c8._8_8_;
  auStack_1c8 = auVar8 << 0x40;
  pppppppfVar43 = (float *******)0x0;
  pppppppfStack_328 = pppppppfVar25;
  uStack_320 = (code *)pppppppfVar22;
  for (uVar30 = 0; uVar30 < uVar35; uVar30 = uVar30 + 1) {
    if (pppppppfVar40 <= pppppppfVar43) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pppppppfVar43,pppppppfVar40,&UNK_143308f80);
    }
    fVar83 = *(float *)((longlong)pppppppfVar38 + ((longlong)pppppppfVar43 * 3 + 1) * 4);
    fVar46 = *(float *)((longlong)uStack_118 + (uVar30 * 3 + 1) * 4);
    fVar78 = *(float *)(lVar27 + uVar30 * 4);
    if ((float *******)auStack_1c8._0_8_ == pppppppfStack_328) {
      pdb_142d89720(&pppppppfStack_328);
    }
    pppppppfVar43 = (float *******)((longlong)pppppppfVar43 + 1);
    *(float *)((longlong)uStack_320 + auStack_1c8._0_8_ * 4) = fVar78 - (fVar83 - fVar46);
    uStack_318 = (float *******)(auStack_1c8._0_8_ + 1);
    auStack_1c8._0_8_ = uStack_318;
  }
  pppppppfStack_4c0 = pppppppfStack_328;
  pppppppfStack_1d0 = (float *******)uStack_320;
  fVar83 = (float)uStack_428;
  auVar81._0_4_ = auVar80._0_4_ - fVar60;
  auVar81._4_12_ = auVar80._4_12_;
  fVar46 = (float)uStack_338;
  uStack_248 = (float *******)CONCAT44(uStack_248._4_4_,(float)uStack_248);
  if ((float)uStack_338 < auVar81._0_4_) {
    if (pppppppfStack_448 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143309098);
    }
    pfVar19 = (float *)((longlong)pppppppfStack_450 + (longlong)pppppppfStack_448 * 0xc);
    if (pfVar19 == (float *)0xc) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1433090b0);
    }
    fVar64 = *(float *)pppppppfStack_450;
    fVar59 = *(float *)((longlong)pppppppfStack_450 + 4);
    fVar78 = *(float *)(pppppppfStack_450 + 1);
    pppppppfStack_190 = (float *******)CONCAT44(pppppppfStack_190._4_4_,pfVar19[-1]);
    fVar45 = pfVar19[-1] - fVar78;
    _fStack_3a0 = 0;
    auStack_3a8 = (undefined1  [8])*(ulonglong *)(pfVar19 + -3);
    fVar44 = (float)*(ulonglong *)(pfVar19 + -3) - fVar64;
    fVar86 = _DAT_142e36f28 / SQRT(fVar45 * fVar45 + fVar44 * fVar44);
    pppppppfStack_328 = (float *******)CONCAT44(fVar86 * fVar45,fVar86 * fVar44);
    pdb_140df4520(&uStack_53c,&pppppppfStack_328);
    pppppppfStack_418 = (float *******)CONCAT44(fVar59,fVar59);
    uStack_410 = 0;
    fVar45 = fVar46;
    uStack_248 = (float *******)CONCAT44(uStack_248._4_4_,(float)uStack_248);
    if (0.0 < fVar59) {
      auStack_398._0_16_ = ZEXT416(uStack_53c);
      _auStack_468 = ZEXT416(uStack_534);
      cVar13 = pdb_1408ff980(param_5 + 0x29f);
      fVar44 = (float)(_DAT_142e37820 ^ auStack_468._0_4_);
      if (cVar13 == '\0') {
        if (_DAT_143308ea0 <= auVar81._0_4_ - fVar46) {
LAB_1414249cc:
          uStack_258 = (float *******)CONCAT44(auStack_398._0_4_,fVar44);
          fVar45 = (float)auStack_398._0_4_ * _DAT_143308eb0;
          fVar46 = fStack_538 * _UNK_143308eb4;
          fVar44 = (float)auStack_398._4_4_ * _UNK_143308eb8;
          fVar86 = _UNK_143308ebc * 0.0;
          fVar63 = _DAT_143308ec0 * (float)auStack_468._0_4_;
          if (*(float *)(pppppppfVar34 + -1) < *(float *)((longlong)uStack_118 + 4) ||
              *(float *)(pppppppfVar34 + -1) == *(float *)((longlong)uStack_118 + 4)) {
            pdb_140df4520(&pppppppfStack_328,&uStack_258);
            pppppppfStack_190 =
                 (float *******)CONCAT44(pppppppfStack_190._4_4_,pppppppfStack_190._0_4_ - fVar63);
            auStack_3a8._4_4_ = (float)auStack_3a8._4_4_ - fVar46;
            auStack_3a8._0_4_ = (float)auStack_3a8._0_4_ - fVar45;
            fStack_3a0 = fStack_3a0 - fVar44;
            fStack_39c = fStack_39c - fVar86;
            fVar45 = (float)uStack_320;
          }
          else {
            pdb_140df4520(&pppppppfStack_328,&uStack_258);
            pppppppfStack_190 = (float *******)CONCAT44(pppppppfStack_190._4_4_,fVar78 + fVar63);
            auStack_3a8._4_4_ = fVar59 + fVar46;
            auStack_3a8._0_4_ = fVar64 + fVar45;
            fStack_3a0 = fVar44 + 0.0;
            fStack_39c = fVar86 + 0.0;
            fVar45 = (float)uStack_320;
          }
          pppppppfVar34 = pppppppfStack_328;
          pdb_140de88f0(&pppppppfStack_328);
          pppppppfVar40 = (float *******)uStack_320;
          pppppppfVar25 = pppppppfStack_328;
          pdb_14007ee60();
          auVar74._0_8_ = pdb_140ed5970(*param_10);
          plVar33 = (longlong *)param_10[1];
          if (plVar33 == (longlong *)0x0) {
            plVar33 = (longlong *)param_10[2];
          }
          lVar27 = plVar33[2];
          if ((ulonglong)(*plVar33 - lVar27) < 0x68) {
            pdb_142d7f1b0(plVar33,lVar27,0x68,1,1);
          }
          lVar24 = lStack_1a0;
          auVar81._0_8_ =
               CONCAT44((float)((ulonglong)pppppppfVar34 >> 0x20) * _UNK_142f61064 * _UNK_142e36f64
                        + (float)auStack_3a8._4_4_,
                        SUB84(pppppppfVar34,0) * _DAT_142f61060 * _DAT_142e36f60 +
                        (float)auStack_3a8._0_4_);
          auVar81._8_4_ = _UNK_142f61068 * 0.0 * _UNK_142e36f68 + fStack_3a0;
          auVar81._12_4_ = _UNK_142f6106c * 0.0 * _UNK_142e36f6c + fStack_39c;
          fVar45 = fVar45 * _DAT_142e3c624 * _DAT_142e36f50;
          lVar31 = plVar33[1];
          *(code **)(lVar31 + lVar27) = pdb_1414143a0;
          plVar3 = (longlong *)(lVar31 + 8 + lVar27);
          *plVar3 = (longlong)pppppppfVar25;
          plVar3[1] = (longlong)pppppppfVar40;
          *(ulonglong *)(lVar31 + 0x18 + lVar27) = auVar81._0_8_;
          *(float *)(lVar31 + 0x20 + lVar27) = fVar45 + pppppppfStack_190._0_4_;
          *(undefined8 *)(lVar31 + 0x24 + lVar27) = 0x3f8000003f800000;
          *(undefined4 *)(lVar31 + 0x2c + lVar27) = 0x3f800000;
          *(undefined4 *)(lVar31 + 0x38 + lVar27) = 0;
          *(undefined8 *)(lVar31 + 0x40 + lVar27) = 0x54952c4fdafa39b1;
          *(undefined1 *)(lVar31 + 0x48 + lVar27) = 0x14;
          *(undefined8 *)(lVar31 + 0x58 + lVar27) = auVar74._0_8_;
          plVar33[2] = lVar27 + 0x68;
          if (lStack_1a0 == lStack_1b0) {
            pdb_142db0920(&lStack_1b0);
          }
          *(undefined8 *)(pbStack_1a8 + lVar24 * 8) = auVar74._0_8_;
          lStack_1a0 = lVar24 + 1;
          pppppppfVar25 = (float *******)0x1;
        }
        else {
          auVar51._0_8_ = pub_142e32b00();
          auVar51._8_8_ = extraout_XMM0_Qb;
          if ((float)auVar51._0_8_ <= _DAT_142e36f28) {
            auVar52._4_12_ = auVar51._4_12_;
            auVar52._0_4_ = _DAT_142e36f28;
            auVar51._0_8_ = auVar52._0_8_;
          }
          fVar45 = (float)auVar51._0_8_;
          pppppppfVar25 = (float *******)0x0;
          if (0.0 <= fVar45) {
            pppppppfVar25 =
                 (float *******)
                 ((longlong)(fVar45 - _DAT_142e36f2c) & (longlong)fVar45 >> 0x3f | (longlong)fVar45)
            ;
          }
          pppppppfVar40 = (float *******)0xffffffffffffffff;
          if (fVar45 <= _DAT_142e36f30) {
            pppppppfVar40 = pppppppfVar25;
          }
          pppppppfVar25 = (float *******)0x4;
          if (pppppppfVar40 < (float *******)0x4) {
            pppppppfVar25 = pppppppfVar40;
          }
          fVar45 = (float)(longlong)pppppppfVar25 * _DAT_142e3c624 * _DAT_142e3c670;
          fVar86 = fVar45 * (float)auStack_398._0_4_;
          fVar45 = (float)pdb_14140ce00(param_9,CONCAT44(fVar59,fVar64 + fVar45 * fVar44),
                                        fVar78 + fVar86);
          auVar81 = ZEXT416((uint)(fVar86 + pppppppfStack_190._0_4_));
          fVar86 = (float)pdb_14140ce00(param_9);
          if (_DAT_143308ea0 <= (float)((uint)(fVar45 - fVar86) & _DAT_142e377e0) - fVar46)
          goto LAB_1414249cc;
        }
        fVar46 = _DAT_14300b368;
        uStack_118 = (float *******)CONCAT44(uStack_118._4_4_,*(undefined4 *)(param_5 + 0x274));
        pppppppfStack_350 = (float *******)0x0;
        pbStack_348 = (byte *)0x4;
        uStack_340 = 0;
        fStack_368 = 0.0;
        fStack_364 = 0.0;
        fStack_360 = 5.60519e-45;
        fStack_35c = 0.0;
        uStack_358 = 0;
        pppppppfStack_170 = (float *******)0x0;
        pppppppfStack_168 = (float *******)0x4;
        uStack_160 = 0;
        fVar60 = fVar60 + _DAT_143308ec4;
        uStack_188 = (float *******)0x0;
        uStack_180 = (byte *)0x4;
        uStack_178 = 0;
        fVar78 = (float)auStack_468._4_4_ * _UNK_142f61068;
        fVar45 = (float)auStack_468._0_4_ * _DAT_142f61060 * _DAT_14300bb80;
        auStack_468._4_4_ = (float)auStack_398._0_4_ * _UNK_142f61064 * _UNK_14300bb84;
        auStack_468._0_4_ = fVar45;
        fStack_460 = fVar78 * _UNK_14300bb88;
        fStack_45c = (float)auStack_398._4_4_ * _UNK_142f6106c * _UNK_14300bb8c;
        pppppppfVar34 = (float *******)0x4;
        pppppppfVar40 = (float *******)0x0;
        uStack_338 = pppppppfVar25;
        while (pppppppfVar40 < pppppppfVar25) {
          pppppppfVar22 = (float *******)((longlong)pppppppfVar40 + 1);
          fVar78 = (float)(longlong)pppppppfVar40;
          fVar45 = fVar78 * fVar46 + pppppppfStack_418._0_4_;
          if (fVar45 <= 0.0) {
            if (pppppppfVar25 <= pppppppfVar22) break;
            pppppppfVar38 = (float *******)((longlong)pppppppfVar40 + 2);
            fVar78 = (float)(longlong)pppppppfVar22;
            fVar45 = fVar78 * fVar46 + pppppppfStack_418._0_4_;
            pppppppfVar22 = pppppppfVar38;
            if (fVar45 <= 0.0) {
              if (pppppppfVar25 <= pppppppfVar38) break;
              pppppppfVar43 = (float *******)((longlong)pppppppfVar40 + 3);
              fVar78 = (float)(longlong)pppppppfVar38;
              fVar45 = fVar78 * fVar46 + pppppppfStack_418._0_4_;
              pppppppfVar22 = pppppppfVar43;
              if (fVar45 <= 0.0) {
                if (pppppppfVar25 <= pppppppfVar43) break;
                pppppppfVar22 = (float *******)((longlong)pppppppfVar40 + 4);
                fVar78 = (float)(longlong)pppppppfVar43;
                fVar45 = fVar78 * fVar46 + pppppppfStack_418._0_4_;
                if (fVar45 <= 0.0) {
                  if (pppppppfVar25 <= pppppppfVar22) break;
                  fVar78 = (float)(longlong)pppppppfVar22;
                  fVar45 = fVar78 * fVar46 + pppppppfStack_418._0_4_;
                  pppppppfVar22 = (float *******)((longlong)pppppppfVar40 + 5);
                }
              }
            }
          }
          fVar64 = _DAT_143016280 / (float)uStack_428;
          if (_DAT_142e3b1d8 <= _DAT_143016280 / (float)uStack_428) {
            fVar64 = _DAT_142e3b1d8;
          }
          auVar81 = ZEXT416((uint)fVar64);
          pdb_14017ede0(&uStack_158);
          uStack_258 = (float *******)CONCAT44(uStack_158._4_4_,(float)uStack_158);
          uStack_250._0_4_ = (float)auStack_150._0_4_;
          uStack_250._4_4_ = (float)auStack_150._4_4_;
          uStack_248 = uStack_148;
          pdb_140080c90(&pppppppfStack_328,&uStack_258);
          pppppppfVar25 = uStack_248;
          uStack_248._0_4_ = SUB84(uStack_318,0);
          uStack_248._4_4_ = (float)((ulonglong)uStack_318 >> 0x20);
          if (SBORROW8(0,(longlong)pppppppfStack_328)) {
            uStack_258 = (float *******)uStack_320;
            uStack_250._0_4_ = (float)uStack_248;
            uStack_250._4_4_ = uStack_248._4_4_;
            uStack_248 = pppppppfVar25;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143306430,0x2b,&uStack_258,&UNK_143306410,&UNK_143306a30);
          }
          fStack_228 = SUB84(uStack_2f8,0);
          fStack_224 = (float)((ulonglong)uStack_2f8 >> 0x20);
          uStack_238._0_4_ = SUB84(uStack_308,0);
          uStack_238._4_4_ = (float)((ulonglong)uStack_308 >> 0x20);
          uStack_230._0_4_ = SUB84(uStack_300,0);
          uStack_230._4_4_ = (float)((ulonglong)uStack_300 >> 0x20);
          afStack_240[0] = SUB84(uStack_310,0);
          afStack_240[1] = (float)((ulonglong)uStack_310 >> 0x20);
          uStack_258 = pppppppfStack_328;
          uStack_250._0_4_ = SUB84(uStack_320,0);
          uStack_250._4_4_ = (float)((ulonglong)uStack_320 >> 0x20);
          if (fVar64 < 0.0) {
            pppppppfStack_328 = (float *******)&uStack_158;
            uStack_320 = pdb_140f70fc0;
            uStack_158._0_4_ = fVar64;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143307ab0,&pppppppfStack_328,&UNK_143308fc8);
          }
          uStack_158._0_4_ = _DAT_142e36f28 - fVar64;
          if (((float)uStack_158 < 0.0) || (_DAT_142e36f28 < (float)uStack_158)) {
            pppppppfStack_328 = (float *******)&uStack_158;
            uStack_320 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143307ab0,&pppppppfStack_328,&UNK_143308fe0);
          }
          uStack_4b8 = 0;
          uStack_4b0 = 4;
          uStack_4a8 = 0;
          uStack_f5 = 1;
          pdb_1413f8720(&uStack_258);
          uStack_148._0_4_ = (undefined4)uStack_4a8;
          uStack_148._4_4_ = (float)((ulonglong)uStack_4a8 >> 0x20);
          uStack_158._0_4_ = (float)uStack_4b8;
          uStack_158._4_4_ = (float)(uStack_4b8 >> 0x20);
          auStack_150._0_4_ = (undefined4)uStack_4b0;
          auStack_150._4_4_ = (undefined4)(uStack_4b0 >> 0x20);
          uStack_f5 = 0;
          pdb_140080c90(&pppppppfStack_328,&uStack_158);
          if (SBORROW8(0,(longlong)pppppppfStack_328)) {
            uStack_158._0_4_ = SUB84(uStack_320,0);
            uStack_158._4_4_ = (float)((ulonglong)uStack_320 >> 0x20);
            auStack_150._0_4_ = SUB84(uStack_318,0);
            auStack_150._4_4_ = (undefined4)((ulonglong)uStack_318 >> 0x20);
            uStack_f5 = 0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143306430,0x2b,&uStack_158,&UNK_143306410,&UNK_143308ff8);
          }
          pppppppfStack_3d8 = uStack_2f8;
          pppppppfStack_3e8 = uStack_308;
          pfStack_3e0 = uStack_300;
          auStack_3f8._8_8_ = uStack_310;
          auStack_3f8._0_8_ = uStack_318;
          uStack_408 = pppppppfStack_328;
          uStack_400 = (float *******)uStack_320;
          if (uStack_258 != (float *******)0x0) {
            pub_1406abac0((byte *)CONCAT44(uStack_250._4_4_,(float)uStack_250),
                          (longlong)uStack_258 << 3,4);
          }
          if (CONCAT44(afStack_240[1],afStack_240[0]) != 0) {
            pub_1406abac0((byte *)CONCAT44(uStack_238._4_4_,(float)uStack_238),
                          CONCAT44(afStack_240[1],afStack_240[0]) << 2,4);
          }
          uVar30 = auStack_3f8._0_8_;
          if (auStack_3f8._0_8_ == 0) {
            uVar30 = 0;
          }
          else {
            fVar64 = fVar78 * (float)auStack_468._0_4_;
            fVar78 = fVar78 * (float)auStack_468._4_4_;
            uVar42 = auStack_3f8._0_8_ * 8 - 8;
            pppppppfVar25 = uStack_400;
            if (0x17 < uVar42) {
              uVar42 = (uVar42 >> 3) + 1;
              uVar35 = uVar42 & 0xfffffffffffffffc;
              pppppppfVar25 = uStack_400 + uVar35;
              uVar36 = 0;
              do {
                pppppppfVar40 = uStack_400 + uVar36;
                fVar59 = *(float *)((longlong)pppppppfVar40 + 4);
                fVar44 = *(float *)(pppppppfVar40 + 1);
                fVar86 = *(float *)((longlong)pppppppfVar40 + 0xc);
                pppppppfVar38 = uStack_400 + uVar36 + 2;
                auVar81._0_4_ = *(float *)pppppppfVar38 - fVar64;
                auVar82._4_4_ = *(float *)(pppppppfVar38 + 1) - fVar64;
                auVar82._0_4_ = auVar81._0_4_;
                auVar82._8_4_ = auVar82._4_4_;
                auVar82._12_4_ = *(float *)((longlong)pppppppfVar38 + 0xc) + fVar78;
                auVar81._8_8_ = auVar82._8_8_;
                auVar81._4_4_ = *(float *)((longlong)pppppppfVar38 + 4) + fVar78;
                pppppppfVar38 = uStack_400 + uVar36;
                *(float *)pppppppfVar38 = *(float *)pppppppfVar40 - fVar64;
                *(float *)((longlong)pppppppfVar38 + 4) = fVar59 + fVar78;
                *(float *)(pppppppfVar38 + 1) = fVar44 - fVar64;
                *(float *)((longlong)pppppppfVar38 + 0xc) = fVar86 + fVar78;
                *(undefined1 (*) [16])(uStack_400 + uVar36 + 2) = auVar81;
                uVar36 = uVar36 + 4;
              } while (uVar35 != uVar36);
              if (uVar42 == uVar35) goto LAB_141425090;
            }
            do {
              *pppppppfVar25 =
                   (float ******)
                   CONCAT44((float)((ulonglong)*pppppppfVar25 >> 0x20) + fVar78,
                            SUB84(*pppppppfVar25,0) - fVar64);
              pppppppfVar25 = pppppppfVar25 + 1;
            } while (pppppppfVar25 != uStack_400 + auStack_3f8._0_8_);
          }
LAB_141425090:
          uVar42 = uStack_160;
          if (uVar30 < uStack_160) {
            uVar42 = uVar30;
          }
          if (uVar42 != 0) {
            uVar30 = uVar42 * 4 - 4;
            pppppppfVar25 = pppppppfVar34;
            if (0x1b < uVar30) {
              uVar35 = (uVar30 >> 2) + 1;
              uVar36 = uVar35 & 0xfffffffffffffff8;
              pppppppfVar25 = (float *******)((longlong)pppppppfVar34 + uVar36 * 4);
              uVar30 = 0;
              do {
                pfVar19 = (float *)((longlong)pppppppfVar34 + uVar30 * 4);
                *pfVar19 = fVar45;
                pfVar19[1] = fVar45;
                pfVar19[2] = fVar45;
                pfVar19[3] = fVar45;
                pfVar19 = (float *)((longlong)pppppppfVar34 + (uVar30 + 4) * 4);
                *pfVar19 = fVar45;
                pfVar19[1] = fVar45;
                pfVar19[2] = fVar45;
                pfVar19[3] = fVar45;
                uVar30 = uVar30 + 8;
              } while (uVar36 != uVar30);
              uVar30 = auStack_3f8._0_8_;
              if (uVar35 == uVar36) goto LAB_141425115;
            }
            do {
              *(float *)pppppppfVar25 = fVar45;
              pppppppfVar25 = (float *******)((longlong)pppppppfVar25 + 4);
              uVar30 = auStack_3f8._0_8_;
            } while (pppppppfVar25 != (float *******)((longlong)pppppppfVar34 + uVar42 * 4));
          }
LAB_141425115:
          uVar36 = uVar30 - uVar42;
          uVar35 = uVar30;
          if (uVar42 <= uVar30 && uVar36 != 0) {
            uStack_160 = uVar42;
            if ((longlong)pppppppfStack_170 - uVar42 < uVar36) {
              pdb_142d7f1b0(&pppppppfStack_170,uVar42,uVar36,4,4);
              pfVar19 = (float *)((longlong)pppppppfStack_168 + uStack_160 * 4);
            }
            else {
              pfVar19 = (float *)((longlong)pppppppfStack_168 + uVar42 * 4);
            }
            if (1 < uVar36) {
              uVar35 = ~uVar42 + uVar30;
              lVar27 = 1;
              if (uVar35 < 8) {
LAB_141425199:
                lVar27 = (lVar27 + uVar42) - uVar30;
                do {
                  *pfVar19 = fVar45;
                  pfVar19 = pfVar19 + 1;
                  lVar27 = lVar27 + 1;
                } while (lVar27 != 0);
              }
              else {
                uVar21 = uVar35 & 0xfffffffffffffff8;
                pfVar19 = pfVar19 + uVar21;
                lVar27 = uVar21 + 1;
                uVar37 = 0;
                do {
                  pfVar2 = (float *)((longlong)pppppppfStack_168 + (uStack_160 + uVar37) * 4);
                  *pfVar2 = fVar45;
                  pfVar2[1] = fVar45;
                  pfVar2[2] = fVar45;
                  pfVar2[3] = fVar45;
                  pfVar2 = (float *)((longlong)pppppppfStack_168 + (uStack_160 + uVar37 + 4) * 4);
                  *pfVar2 = fVar45;
                  pfVar2[1] = fVar45;
                  pfVar2[2] = fVar45;
                  pfVar2[3] = fVar45;
                  uVar37 = uVar37 + 8;
                } while (uVar21 != uVar37);
                if (uVar35 != uVar21) goto LAB_141425199;
              }
              uStack_160 = (uStack_160 + uVar36) - 1;
            }
            *pfVar19 = fVar45;
            uVar30 = uStack_160 + 1;
            uVar35 = auStack_3f8._0_8_;
          }
          uVar36 = uStack_340;
          uVar37 = uVar35 - uStack_340;
          uVar42 = uStack_340;
          uVar21 = uStack_358;
          uStack_160 = uVar30;
          if (uStack_340 <= uVar35 && uVar37 != 0) {
            if ((longlong)pppppppfStack_350 - uStack_340 < uVar37) {
              pdb_142d7f1b0(&pppppppfStack_350,uStack_340,uVar37,4,4);
              pbVar20 = pbStack_348 + uStack_340 * 4;
              pbVar10 = pbStack_348;
              uVar42 = uStack_340;
            }
            else {
              pbVar20 = pbStack_348 + uStack_340 * 4;
              pbVar10 = pbStack_348;
            }
            pbStack_348 = pbVar10;
            if (1 < uVar37) {
              uStack_340 = uVar42;
              pub_142e32780(pbVar20,0,(~uVar36 + uVar35) * 4);
              pbVar20 = pbVar10 + ((uVar35 + uVar42) - uVar36) * 4 + -4;
              uVar42 = (uVar42 + uVar37) - 1;
            }
            uVar35 = uStack_358;
            pbVar20[0] = 0;
            pbVar20[1] = 0;
            pbVar20[2] = 0;
            pbVar20[3] = 0;
            uVar42 = uVar42 + 1;
            auVar74._0_8_ = auStack_3f8._0_8_;
            uVar36 = auStack_3f8._0_8_ - uStack_358;
            uVar21 = auStack_3f8._0_8_;
            uStack_340 = uVar42;
            if (uStack_358 <= (ulonglong)auStack_3f8._0_8_ && uVar36 != 0) {
              if (CONCAT44(fStack_364,fStack_368) - uStack_358 < uVar36) {
                pdb_142d7f1b0(&fStack_368,uStack_358,uVar36,4,4);
                lVar27 = CONCAT44(fStack_35c,fStack_360);
                pfVar19 = (float *)(lVar27 + uStack_358 * 4);
              }
              else {
                lVar27 = CONCAT44(fStack_35c,fStack_360);
                pfVar19 = (float *)(lVar27 + uStack_358 * 4);
              }
              if (1 < uVar36) {
                uVar21 = ~uVar35 + auVar74._0_8_;
                lVar31 = 1;
                if (uVar21 < 8) {
LAB_1414252d9:
                  lVar27 = (lVar31 + uVar35) - auVar74._0_8_;
                  do {
                    *pfVar19 = fVar60;
                    pfVar19 = pfVar19 + 1;
                    lVar27 = lVar27 + 1;
                  } while (lVar27 != 0);
                }
                else {
                  uVar37 = uVar21 & 0xfffffffffffffff8;
                  pfVar19 = pfVar19 + uVar37;
                  lVar31 = uVar37 + 1;
                  lVar27 = lVar27 + uStack_358 * 4;
                  uVar39 = 0;
                  do {
                    pfVar2 = (float *)(lVar27 + uVar39 * 4);
                    *pfVar2 = fVar60;
                    pfVar2[1] = fVar60;
                    pfVar2[2] = fVar60;
                    pfVar2[3] = fVar60;
                    pfVar2 = (float *)(lVar27 + 0x10 + uVar39 * 4);
                    *pfVar2 = fVar60;
                    pfVar2[1] = fVar60;
                    pfVar2[2] = fVar60;
                    pfVar2[3] = fVar60;
                    uVar39 = uVar39 + 8;
                  } while (uVar37 != uVar39);
                  if (uVar21 != uVar37) goto LAB_1414252d9;
                }
                uStack_358 = (uStack_358 + uVar36) - 1;
              }
              *pfVar19 = fVar60;
              uVar21 = uStack_358 + 1;
            }
          }
          uStack_358 = uVar21;
          uStack_158._0_4_ = SUB84(param_12,0);
          uStack_158._4_4_ = (float)((ulonglong)param_12 >> 0x20);
          auStack_150._0_4_ = (undefined4)param_11;
          auStack_150._4_4_ = (undefined4)((ulonglong)param_11 >> 0x20);
          uVar18 = pdb_1409012c0((ulonglong)uStack_118 & 0xffffffff);
          pppppppfVar34 = pppppppfStack_168;
          if (uStack_358 < (ulonglong)auStack_3f8._0_8_) {
            pdb_142dc8420(0,auStack_3f8._0_8_,uStack_358,&UNK_143309010);
            goto LAB_141428030;
          }
          if (uVar42 < (ulonglong)auStack_3f8._0_8_) {
            pdb_142dc8420(0,auStack_3f8._0_8_,uVar42,&UNK_143309028);
            goto LAB_141428030;
          }
          pbVar20 = (byte *)CONCAT44(fStack_35c,fStack_360);
          pppppppfStack_328 = (float *******)0x0;
          uStack_320 = (code *)0x4;
          uStack_318 = (float *******)0x0;
          uStack_310 = (float *******)((ulonglong)uStack_310 & 0xffffff0000000000);
          uStack_308 = (float *******)0x0;
          pppppppfStack_2e0 = (float *******)0x0;
          pppppppfStack_2d8 = (float *******)0x0;
          pppppppfStack_2f0 = (float *******)0x0;
          pppppppfStack_2e8 = (float *******)0x0;
          uStack_300 = (float *)0x4;
          uStack_2f8 = (float *******)0x0;
          uStack_248._4_4_ = (float)CONCAT31(uStack_248._5_3_,2);
          pdb_14143f9b0(&uStack_188,&uStack_408,uVar18,pppppppfStack_168,uVar30,pbVar20,
                        auStack_3f8._0_8_,pbStack_348,auStack_3f8._0_8_,0,0,&pppppppfStack_328,
                        0x3e4ccccd,&uStack_158,0,&uStack_258,0);
          if (pppppppfStack_328 != (float *******)0x0) {
            pub_1406abac0((byte *)uStack_320,(longlong)pppppppfStack_328 * 0x14,4);
          }
          if (uStack_308 != (float *******)0x0) {
            pub_1406abac0((byte *)uStack_300,(longlong)uStack_308 * 0x14,4);
          }
          if (*param_12 != '\0') {
            if (uStack_408 != (float *******)0x0) {
              pub_1406abac0((byte *)uStack_400,(longlong)uStack_408 << 3,4);
            }
            if (auStack_3f8._8_8_ != 0) {
              pub_1406abac0((byte *)pppppppfStack_3e8,auStack_3f8._8_8_ << 2,4);
            }
            if (uStack_188 != (float *******)0x0) {
              pub_1406abac0(uStack_180,(longlong)uStack_188 << 4,4);
            }
            if (pppppppfStack_170 != (float *******)0x0) {
              pub_1406abac0((byte *)pppppppfVar34,(longlong)pppppppfStack_170 << 2,4);
            }
            lVar27 = CONCAT44(fStack_364,fStack_368);
            if (lVar27 != 0) goto LAB_1414256c6;
            goto LAB_1414256d8;
          }
          if (uStack_408 != (float *******)0x0) {
            pub_1406abac0((byte *)uStack_400,(longlong)uStack_408 << 3,4);
          }
          pppppppfVar25 = uStack_338;
          pppppppfVar40 = pppppppfVar22;
          if (auStack_3f8._8_8_ != 0) {
            pub_1406abac0((byte *)pppppppfStack_3e8,auStack_3f8._8_8_ << 2,4);
          }
        }
        if (uStack_188 != (float *******)0x0) {
          pub_1406abac0(uStack_180,(longlong)uStack_188 << 4,4);
        }
        if (pppppppfStack_170 != (float *******)0x0) {
          pub_1406abac0((byte *)pppppppfVar34,(longlong)pppppppfStack_170 << 2,4);
        }
        lVar27 = CONCAT44(fStack_364,fStack_368);
        if (lVar27 != 0) {
          pbVar20 = (byte *)CONCAT44(fStack_35c,fStack_360);
LAB_1414256c6:
          pub_1406abac0(pbVar20,lVar27 << 2,4);
        }
LAB_1414256d8:
        if (pppppppfStack_350 != (float *******)0x0) {
          pub_1406abac0(pbStack_348,(longlong)pppppppfStack_350 << 2,4);
        }
      }
      else {
        fStack_194 = pppppppfStack_418._0_4_;
        uStack_37c = auStack_398._0_4_;
        pppppppfStack_350 = pppppppfStack_470;
        fStack_380 = fVar44;
        uStack_248 = (float *******)CONCAT44(uStack_248._4_4_,(float)uStack_248);
        if ((pppppppfStack_448 != (float *******)0x0) &&
           (uStack_248 = (float *******)CONCAT44(uStack_248._4_4_,(float)uStack_248),
           (float *)((longlong)pppppppfStack_450 + (longlong)pppppppfStack_448 * 0xc) !=
           (float *)0xc)) {
          pppppppfStack_420 =
               (float *******)CONCAT44(pppppppfStack_420._4_4_,*(undefined4 *)(param_5 + 0x274));
          auStack_4f8 = ZEXT416((uint)*(float *)pppppppfStack_450);
          pppppppfStack_4e0 =
               (float *******)
               CONCAT44(pppppppfStack_4e0._4_4_,*(float *)((longlong)pppppppfStack_450 + 4));
          _auStack_3a8 = ZEXT416((uint)*(float *)(pppppppfStack_450 + 1));
          auStack_508 = ZEXT416((uint)*(float *)((longlong)pppppppfStack_450 +
                                                ((longlong)pppppppfStack_448 * 3 + -3) * 4));
          pppppppfStack_478 =
               (float *******)
               CONCAT44(pppppppfStack_478._4_4_,
                        *(float *)((longlong)pppppppfStack_450 +
                                  ((longlong)pppppppfStack_448 * 3 + -2) * 4));
          auStack_398._0_16_ =
               ZEXT416((uint)*(float *)((longlong)pppppppfStack_450 +
                                       ((longlong)pppppppfStack_448 * 3 + -1) * 4));
          fVar86 = SUB84(*pppppppfStack_450,0);
          fVar93 = (float)((ulonglong)*pppppppfStack_450 >> 0x20);
          uVar30 = *(ulonglong *)
                    ((longlong)pppppppfStack_450 + ((longlong)pppppppfStack_448 * 3 + -3) * 4);
          auVar81._8_8_ = 0;
          auVar81._0_8_ = uVar30;
          pdb_140df4520(&pppppppfStack_328,&fStack_380);
          fVar78 = fStack_194;
          fVar59 = _UNK_142e36f68 * 0.0;
          fVar44 = _UNK_142e36f6c * 0.0;
          fVar47 = (float)(uVar30 >> 0x20);
          fVar99 = _UNK_142e36f68 * 0.0;
          fVar100 = _UNK_142e36f6c * 0.0;
          fVar96 = _DAT_142e36f60 * (float)uVar30 + fVar86 * _DAT_142e36f60;
          fVar98 = _UNK_142e36f64 * fVar47 + fVar93 * _UNK_142e36f64;
          fVar85 = _DAT_142e36f50 * (float)auStack_398._0_4_ + auStack_3a8._0_4_ * _DAT_142e36f50;
          fVar46 = (float)uStack_320 * _DAT_142e3c624 * _DAT_142e36f50;
          fVar60 = SUB84(pppppppfStack_328,0) * _DAT_142f61060 * _DAT_142e36f60;
          fVar64 = (float)((ulonglong)pppppppfStack_328 >> 0x20) * _UNK_142f61064 * _UNK_142e36f64;
          fVar63 = _UNK_142f61068 * 0.0 * _UNK_142e36f68;
          fVar65 = _UNK_142f6106c * 0.0 * _UNK_142e36f6c;
          fStack_360 = auStack_3a8._0_4_ + fVar46;
          fStack_368 = fVar86 + fVar60;
          fStack_364 = fVar93 + fVar64;
          fVar93 = fVar85 + fVar46;
          fVar86 = fVar96 + fVar60;
          pppppppfStack_170 = (float *******)CONCAT44(fVar98 + fVar64,fVar86);
          pppppppfStack_168 = (float *******)CONCAT44(pppppppfStack_168._4_4_,fVar93);
          uStack_188 = (float *******)CONCAT44(fVar64 + fVar47,fVar60 + (float)uVar30);
          uStack_180 = (byte *)CONCAT44(uStack_180._4_4_,fVar46 + (float)auStack_398._0_4_);
          fVar46 = *(float *)(param_14 + 0x38);
          pdb_140df4520(&uStack_4b8,&fStack_380);
          uStack_2f8 = (float *******)(param_14 + 0x38);
          fVar60 = *(float *)(param_14 + 0x3c);
          auStack_518 = ZEXT416((uint)fVar60);
          fVar64 = (float)uStack_4b8;
          lStack_4d8 = CONCAT44(lStack_4d8._4_4_,(float)uStack_4b0);
          fVar86 = fVar86 + fVar60 * fVar64;
          fVar78 = fVar78 + fVar60 * (float)(uStack_4b8 >> 0x20);
          fVar93 = fVar93 + fVar60 * (float)uStack_4b0;
          pppppppfStack_2e8 = (float *******)0x3;
          uStack_258 = (float *******)&pppppppfStack_2e0;
          pppppppfStack_2e0 = (float *******)0x3f0000003e800000;
          pppppppfStack_2d8 = (float *******)CONCAT44(pppppppfStack_2d8._4_4_,0x3f800000);
          pppppppfStack_328 = (float *******)&fStack_368;
          uStack_320 = (code *)&pppppppfStack_170;
          uStack_318 = (float *******)&uStack_188;
          uStack_310 = param_9;
          uStack_300 = &fStack_194;
          uStack_250._0_4_ = 4.2039e-45;
          uStack_250._4_4_ = 0.0;
          uStack_248 = (float *******)&pppppppfStack_328;
          pppppppfVar34 = (float *******)0x0;
          uStack_308 = (float *******)&fStack_380;
LAB_141424880:
          pppppppfVar34 = (float *******)((longlong)pppppppfVar34 + 1);
          pppppppfStack_2f0 = pppppppfVar34;
          pdb_1424bb4d0(&uStack_408,&uStack_248);
          pppppppfVar38 = uStack_308;
          pppppppfVar22 = uStack_310;
          pppppppfVar40 = uStack_318;
          pppppppfVar25 = (float *******)uStack_320;
          uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffff9f8 >> 0x20);
          if ((char)uStack_408 == '\0') goto code_r0x0001414248b3;
          auVar81 = ZEXT416(uStack_408._4_4_);
          fVar45 = (float)uStack_400;
          uStack_118 = (float *******)CONCAT44(uStack_118._4_4_,uStack_400._4_4_);
          uStack_408 = pppppppfStack_2f0;
          uStack_400 = pppppppfStack_2e8;
          auStack_3f8._8_8_ = pppppppfStack_2d8;
          auStack_3f8._0_8_ = pppppppfStack_2e0;
          uStack_338 = pppppppfStack_2e8;
          if (pppppppfStack_2f0 != pppppppfStack_2e8) {
            pppppppfStack_418 = pppppppfStack_328;
            auStack_468 = (undefined1  [8])uStack_300;
            pppppppfStack_190 = uStack_2f8;
            pppppppfVar34 = pppppppfStack_2f0;
            do {
              pppppppfVar43 = (float *******)((longlong)pppppppfVar34 + 1);
              fVar60 = *(float *)(auStack_3f8 + (longlong)pppppppfVar34 * 4);
              uVar18 = 0;
              uVar84 = 0;
              auStack_150._0_4_ = *(undefined4 *)(pppppppfVar25 + 1);
              ppppppfVar32 = *pppppppfVar25;
              uStack_158._0_4_ = SUB84(ppppppfVar32,0);
              uStack_158._4_4_ = (float)((ulonglong)ppppppfVar32 >> 0x20);
              uStack_148._4_4_ = *(float *)(pppppppfVar40 + 1);
              ppppppfVar32 = *pppppppfVar40;
              auStack_150._4_4_ = SUB84(ppppppfVar32,0);
              uStack_148._0_4_ = (undefined4)((ulonglong)ppppppfVar32 >> 0x20);
              uStack_408 = pppppppfVar43;
              fVar47 = (float)pdb_14140ce00(pppppppfVar22,
                                            *(float *)pppppppfVar38 * fVar60 +
                                            *(float *)pppppppfStack_418,
                                            *(float *)((longlong)pppppppfVar38 + 4) * fVar60 +
                                            *(float *)(pppppppfStack_418 + 1));
              uStack_230._4_4_ = (float)(undefined4)uStack_148;
              fStack_228 = uStack_148._4_4_;
              afStack_240[1] = (float)uStack_158;
              uStack_238._0_4_ = uStack_158._4_4_;
              uStack_238._4_4_ = (float)auStack_150._0_4_;
              uStack_230._0_4_ = (float)auStack_150._4_4_;
              lVar27 = 1;
              bVar14 = false;
              do {
                fVar48 = (float)pdb_14140ce00(pppppppfVar22,
                                              *(float *)pppppppfVar38 * fVar60 +
                                              *(float *)((longlong)&uStack_248 + lVar27 * 0xc),
                                              *(float *)((longlong)pppppppfVar38 + 4) * fVar60 +
                                              afStack_240[lVar27 * 3]);
                if ((int)((uint)((int)fVar47 >> 0x1f) >> 1 ^ (uint)fVar47) <=
                    (int)((uint)((int)fVar48 >> 0x1f) >> 1 ^ (uint)fVar48)) {
                  fVar48 = fVar47;
                }
                lVar27 = 2;
                bVar9 = !bVar14;
                fVar47 = fVar48;
                bVar14 = true;
              } while (bVar9);
              if (fVar48 < *(float *)auStack_468) {
                fVar47 = (float)pub_142e32980();
                fVar47 = ABS(fVar47 + _DAT_143308ec8);
                if ((int)((uint)((int)(float)uStack_118 >> 0x1f) >> 1 ^ (uint)(float)uStack_118) <=
                    (int)fVar47) {
                  fVar60 = auVar81._0_4_;
                  uVar18 = auVar81._8_4_;
                  fVar47 = (float)uStack_118;
                  uVar84 = auVar81._12_4_;
                  fVar48 = fVar45;
                }
                fVar45 = fVar48;
                uStack_118 = (float *******)CONCAT44(uStack_118._4_4_,fVar47);
                auVar81._4_4_ = 0;
                auVar81._0_4_ = fVar60;
                auVar81._8_4_ = (float)uVar18;
                auVar81._12_4_ = (float)uVar84;
              }
              uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffff9f8 >> 0x20);
              pppppppfVar34 = pppppppfVar43;
            } while (pppppppfVar43 != uStack_338);
          }
          fVar47 = auVar81._0_4_;
          auVar57._4_12_ = auVar81._4_12_;
          fVar60 = fVar47 - (float)auStack_518._0_4_;
          if (fVar47 - (float)auStack_518._0_4_ <= _DAT_143035f20) {
            fVar60 = _DAT_143035f20;
          }
          auVar57._0_4_ = fVar60;
          fVar60 = (float)pub_142e32980(fStack_194 - fVar45,auVar57._0_8_);
          pppppppfVar34 = pppppppfStack_420;
          if (_DAT_143308ecc <= fVar60) {
            uStack_408 = (float *******)0x0;
            uStack_400 = (float *******)0x4;
            auStack_3f8._0_12_ = ZEXT812(0);
            auStack_3f8._12_4_ = 0;
            pppppppfStack_3e8 = (float *******)0x4;
            uStack_250._4_4_ = fVar64 * fVar47 + pppppppfStack_170._0_4_;
            uStack_248._4_4_ = (float)lStack_4d8 * fVar47 + pppppppfStack_168._0_4_;
            pfStack_3e0 = (float *)0x0;
            fVar60 = uStack_248._4_4_ - fVar93;
            uStack_158._4_4_ = fStack_368;
            auStack_150._0_4_ = fStack_360;
            auStack_150._4_4_ = (undefined4)uStack_188;
            uStack_148._0_4_ = (undefined4)uStack_180;
            uStack_148._4_4_ = fStack_380;
            uStack_140._0_4_ = (float)uStack_37c;
            uStack_158._0_4_ = 2.8026e-45;
            uStack_258 = (float *******)CONCAT44(fVar78,fVar86);
            fVar86 = uStack_250._4_4_ - fVar86;
            fVar78 = fVar45 - fVar78;
            fVar64 = _DAT_142e36f28 / SQRT(fVar78 * fVar78 + fVar86 * fVar86 + fVar60 * fVar60);
            bVar14 = (int)fVar64 - 1U < 0x7fffff ||
                     (int)ABS(fVar64) - 0x800000U < 0x7f000000 && -1 < (int)fVar64;
            auVar68._0_4_ = fVar64 * fVar86;
            auVar68._4_4_ = fVar64 * fVar78;
            auVar68._8_4_ = (0.0 - (fVar99 + fVar59 + fVar63 + 0.0)) * 0.0;
            auVar68._12_4_ = (0.0 - (fVar100 + fVar44 + fVar65 + 0.0)) * 0.0;
            if (bVar14) {
              fVar60 = fVar60 * fVar64;
            }
            else {
              fVar60 = 0.0;
            }
            uVar84 = auStack_508._0_4_;
            uVar11 = auStack_4f8._0_4_;
            uVar15 = (uint)bVar14;
            auVar58._0_4_ = (int)(uVar15 << 0x1f) >> 0x1f;
            auVar58._4_4_ = (int)(uVar15 << 0x1f) >> 0x1f;
            auVar58._8_4_ = (int)(uVar15 << 0x1f) >> 0x1f;
            auVar58._12_4_ = (int)(uVar15 << 0x1f) >> 0x1f;
            uStack_250._4_4_ = uStack_250._4_4_ + fVar46 * SUB164(auVar58 & auVar68,0);
            uStack_248._0_4_ = fVar45 + fVar46 * SUB164(auVar58 & auVar68,4);
            uStack_248._4_4_ = uStack_248._4_4_ + fVar60 * fVar46;
            uStack_f3 = 1;
            uStack_250._0_4_ = fVar93;
            afStack_240[0] = fVar46;
            iVar17 = pdb_140315970(&pppppppfStack_350);
            pppppppfStack_328 = *(float ********)(param_14 + 0x44);
            uStack_320 = *(code **)(param_14 + 0x4c);
            uStack_318 = *(float ********)(param_14 + 0x54);
            uStack_310 = *(float ********)(param_14 + 0x5c);
            uStack_308 = *(float ********)(param_14 + 100);
            uStack_300 = (float *)CONCAT44(uStack_300._4_4_,*(undefined4 *)(param_14 + 0x6c));
            uStack_f3 = 1;
            pdb_1424b60d0(&uStack_158,&uStack_258,pppppppfStack_470,
                          (ulonglong)pppppppfVar34 & 0xffffffff,CONCAT44(uVar18,iVar17 + 10000),
                          &pppppppfStack_328,in_stack_fffffffffffffa08 & 0xffffffffffffff00,
                          &uStack_408);
            uStack_f3 = 1;
            iVar17 = pdb_140315970(&pppppppfStack_350);
            fVar45 = fStack_194;
            uStack_f3 = 1;
            pdb_14140ce00(param_9);
            pppppppfStack_328 = param_9;
            uStack_320 = (code *)0x1;
            uStack_318 = (float *******)0x3;
            uStack_310 = (float *******)CONCAT44(pppppppfStack_4e0._0_4_,uVar11);
            uStack_308 = (float *******)CONCAT44(fVar96,auStack_3a8._0_4_);
            uStack_300 = (float *)CONCAT44(fVar85,fVar98);
            uStack_2f8 = (float *******)CONCAT44(pppppppfStack_478._0_4_,uVar84);
            pppppppfStack_2f0 = (float *******)CONCAT44(pppppppfStack_2f0._4_4_,auStack_398._0_4_);
            uStack_f3 = 1;
            fVar46 = (float)pdb_141420c70(&pppppppfStack_328);
            auVar81 = ZEXT416((uint)(fVar45 - fVar46));
            if (_DAT_142e37848 < fVar45 - fVar46) {
              uStack_158._0_4_ = ((float)uVar11 + (float)uVar84) * _DAT_142e36f60;
              uStack_158._4_4_ =
                   ((float)auStack_3a8._0_4_ + (float)auStack_398._0_4_) * _UNK_142e36f64;
              uStack_f3 = 1;
              pdb_140df4540(&uStack_258,&uStack_158);
              uStack_f3 = 1;
              pdb_140aaabb0(&pppppppfStack_328,&uStack_258);
              uStack_f3 = 1;
              pdb_140aaac40(&uStack_258,&pppppppfStack_328,iVar17 + 20000);
              auVar74._0_8_ = auStack_3f8._0_8_;
              if ((float *******)auStack_3f8._0_8_ == uStack_408) {
                uStack_f3 = 1;
                pdb_142d8db00(&uStack_408);
              }
              uStack_400[auVar74._0_8_ * 10 + 8] = (float ******)pppppppfStack_218;
              (uStack_400 + auVar74._0_8_ * 10 + 8)[1] = (float ******)pppppppfStack_210;
              uStack_400[auVar74._0_8_ * 10 + 6] = (float ******)CONCAT44(fStack_224,fStack_228);
              (uStack_400 + auVar74._0_8_ * 10 + 6)[1] = (float ******)pppppppfStack_220;
              uStack_400[auVar74._0_8_ * 10 + 4] =
                   (float ******)CONCAT44(uStack_238._4_4_,(float)uStack_238);
              (uStack_400 + auVar74._0_8_ * 10 + 4)[1] =
                   (float ******)CONCAT44(uStack_230._4_4_,(float)uStack_230);
              uStack_400[auVar74._0_8_ * 10 + 2] =
                   (float ******)CONCAT44(uStack_248._4_4_,(float)uStack_248);
              (uStack_400 + auVar74._0_8_ * 10 + 2)[1] =
                   (float ******)CONCAT44(afStack_240[1],afStack_240[0]);
              uStack_400[auVar74._0_8_ * 10] = (float ******)uStack_258;
              (uStack_400 + auVar74._0_8_ * 10)[1] =
                   (float ******)CONCAT44(uStack_250._4_4_,(float)uStack_250);
              auStack_3f8._0_8_ = auVar74._0_8_ + 1;
            }
            uStack_318 = (float *******)auStack_3f8._0_8_;
            pppppppfStack_328 = uStack_408;
            uStack_320 = (code *)uStack_400;
            uStack_310 = (float *******)auStack_3f8._8_8_;
            uStack_308 = pppppppfStack_3e8;
            uStack_300 = pfStack_3e0;
            uStack_2f8 = pppppppfStack_470;
            uStack_f3 = 0;
            pdb_14146bff0(param_13,&pppppppfStack_328,&UNK_143309080);
            fVar45 = (float)uVar11;
          }
        }
      }
    }
  }
LAB_1414256fa:
  if (pppppppfStack_448 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_143308f50);
  }
  pfVar19 = (float *)((longlong)pppppppfStack_450 + (longlong)pppppppfStack_448 * 0xc);
  if (pfVar19 == (float *)0xc) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143308f68);
  }
  fVar46 = pfVar19[-1] - *(float *)(pppppppfStack_450 + 1);
  fVar60 = pfVar19[-3] - *(float *)pppppppfStack_450;
  fVar78 = fVar4 / SQRT(fVar60 * fVar60 + fVar46 * fVar46);
  if ((int)fVar78 - 1U < 0x7fffff || (int)ABS(fVar78) - 0x800000U < 0x7f000000 && -1 < (int)fVar78)
  {
    pppppppfStack_328 =
         (float *******)CONCAT44(fVar60 * fVar78,fVar46 * (float)(_DAT_142e37820 ^ (uint)fVar78));
    pdb_140df4520(&fStack_364,&pppppppfStack_328);
    pppppppfVar34 = pppppppfStack_448;
    fStack_368 = 1.4013e-45;
    pppppppfStack_378 = (float *******)CONCAT44(fStack_360,fStack_364);
    fStack_370 = fStack_35c;
    if (fVar83 <= _DAT_143308ed0) {
      pdb_14007ee60();
      pppppppfStack_4c8 = (float *******)pub_1406abab0(0x18,8);
      if (pppppppfStack_4c8 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x18);
      }
      *pppppppfStack_4c8 = (float ******)CONCAT44(_UNK_142e378e4,_DAT_142e378e0);
      pppppppfStack_4c8[1] = (float ******)pppppppfStack_448;
      *(undefined1 *)(pppppppfStack_4c8 + 2) = 0;
      lStack_520 = 1;
    }
    else {
      pdb_14007ee60();
      pppppppfStack_4c8 = (float *******)pub_1406abab0(0x30,8);
      if (pppppppfStack_4c8 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      fVar46 = _DAT_142e37ad4 / fVar83;
      if (_DAT_142e3b1d8 <= _DAT_142e37ad4 / fVar83) {
        fVar46 = _DAT_142e3b1d8;
      }
      ppppppfVar32 = (float ******)((ulonglong)pppppppfVar34 >> 1);
      lStack_520 = 2;
      if (ppppppfVar32 < (float ******)0x3) {
        ppppppfVar32 = (float ******)0x2;
      }
      fVar60 = _DAT_142e36f50 - fVar46;
      fVar46 = fVar46 + _DAT_142e36f50;
      *(float *)pppppppfStack_4c8 = 0.0;
      *(float *)((longlong)pppppppfStack_4c8 + 4) = fVar60;
      pppppppfStack_4c8[1] = ppppppfVar32;
      *(undefined1 *)(pppppppfStack_4c8 + 2) = 1;
      *(float *)(pppppppfStack_4c8 + 3) = fVar46;
      *(float *)((longlong)pppppppfStack_4c8 + 0x1c) = 1.0;
      pppppppfStack_4c8[4] = ppppppfVar32;
      *(undefined1 *)(pppppppfStack_4c8 + 5) = 1;
    }
    pppppppfStack_4e0 = pppppppfStack_4c8 + lStack_520 * 3;
    auStack_468 = (undefined1  [8])(param_5 + 0x88);
    lVar31 = *(longlong *)(param_6 + 0x38);
    lStack_4d8 = *(longlong *)(param_6 + 0x40);
    lVar27 = lStack_4d8 * 4;
    pppppppfVar34 = (float *******)((longlong)pppppppfStack_1d0 + auStack_1c8._0_8_ * 4);
    auVar23 = (undefined1  [8])(float *******)0x0;
    uVar30 = auStack_1c8._0_8_;
    pppppppfVar25 = pppppppfStack_4c8;
    while (pppppppfVar22 = pppppppfStack_448, pppppppfVar40 = pppppppfStack_450,
          fVar46 = auVar81._0_4_, pppppppfVar25 != pppppppfStack_4e0) {
      pppppppfStack_190 = pppppppfVar25 + 3;
      auStack_3a8 = (undefined1  [8])((longlong)auVar23 + 1);
      uStack_408 = (float *******)0x0;
      uStack_400 = (float *******)0x4;
      auStack_3f8 = ZEXT816(0);
      pppppppfStack_3e8 = (float *******)0x4;
      pfStack_3e0 = (float *)0x0;
      pppppppfStack_3d8 = (float *******)0x0;
      uStack_3d0 = 4;
      uStack_3c8 = 0;
      uStack_3c0 = 0;
      pppppppfStack_3b8 = (float *******)0x4;
      uStack_3b0 = 0;
      uStack_180 = (byte *)CONCAT44(uStack_180._4_4_,fStack_370);
      uStack_188 = pppppppfStack_378;
      ppppppfVar32 = pppppppfVar25[1];
      cVar13 = *(char *)(pppppppfVar25 + 2);
      fVar46 = *(float *)pppppppfVar25;
      uStack_118._0_4_ = *(float *)((longlong)pppppppfVar25 + 4);
      uStack_110 = 0;
      uStack_330 = 0;
      ppppppfVar41 = (float ******)0x0;
      bVar14 = false;
      pppppppfStack_418 = (float *******)auVar23;
      uStack_118._4_4_ = (float)uStack_118;
      uStack_338._0_4_ = fVar46;
      uStack_338._4_4_ = fVar46;
      if (ppppppfVar32 != (float ******)0x0) {
        do {
          if ((longlong)ppppppfVar41 < 0) {
            fVar60 = (float)ppppppfVar41;
            ppppppfVar28 = pppppppfVar25[1];
            if (-1 < (longlong)ppppppfVar28) goto LAB_141425ab6;
LAB_141425a67:
            fVar78 = (float)ppppppfVar28;
          }
          else {
            fVar60 = (float)(longlong)ppppppfVar41;
            ppppppfVar28 = pppppppfVar25[1];
            if ((longlong)ppppppfVar28 < 0) goto LAB_141425a67;
LAB_141425ab6:
            fVar78 = (float)(longlong)ppppppfVar28;
          }
          ppppppfVar28 = (float ******)((longlong)ppppppfVar41 + 1);
          fVar60 = fVar60 / (fVar78 + _DAT_142e36f34);
          fVar64 = fVar60 * *(float *)((longlong)pppppppfVar25 + 4) +
                   (fVar4 - fVar60) * *(float *)pppppppfVar25;
          fVar60 = fVar45;
          if (!bVar14) {
            if (ppppppfVar32 <= ppppppfVar28) break;
            fVar45 = (float)ppppppfVar28 / (fVar78 + _DAT_142e36f34);
            fVar60 = fVar64;
            ppppppfVar28 = (float ******)((longlong)ppppppfVar41 + 2);
            fVar64 = *(float *)((longlong)pppppppfVar25 + 4) * fVar45 +
                     *(float *)pppppppfVar25 * (fVar4 - fVar45);
          }
          fVar45 = fVar64;
          ppppppfVar41 = ppppppfVar28;
          uStack_158._0_4_ = fVar60;
          if ((fVar60 < 0.0) || (fVar4 < fVar60)) {
            uStack_258 = (float *******)&uStack_158;
            uStack_250._0_4_ = 7.7206726;
            uStack_250._4_4_ = 1.4013e-45;
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143307ab0,&uStack_258,&UNK_143309298);
          }
          uStack_f1 = 1;
          uVar15 = pdb_1413f9030(&pppppppfStack_458);
          uStack_158._0_4_ = fVar45;
          if ((fVar45 < 0.0) || (fVar4 < fVar45)) {
            uStack_258 = (float *******)&uStack_158;
            uStack_250._0_4_ = 7.7206726;
            uStack_250._4_4_ = 1.4013e-45;
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143307ab0,&uStack_258,&UNK_1433092b0);
          }
          uStack_f1 = 1;
          uVar16 = pdb_1413f9030(&pppppppfStack_458);
          pppppppfVar38 = (float *******)(ulonglong)uVar15;
          if ((ulonglong)auStack_1c8._0_8_ <= pppppppfVar38) {
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pppppppfVar38,auStack_1c8._0_8_,&UNK_1433092c8);
          }
          pppppppfVar43 = (float *******)((longlong)pppppppfVar38 + 1);
          if ((ulonglong)auStack_1c8._0_8_ <= pppppppfVar43) {
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pppppppfVar43,auStack_1c8._0_8_,&UNK_1433092c8);
          }
          pppppppfVar29 = (float *******)(ulonglong)uVar16;
          if ((ulonglong)auStack_1c8._0_8_ <= pppppppfVar29) {
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pppppppfVar29,auStack_1c8._0_8_,&UNK_1433092e0);
          }
          pppppppfVar1 = (float *******)((longlong)pppppppfVar29 + 1);
          if ((ulonglong)auStack_1c8._0_8_ <= pppppppfVar1) {
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pppppppfVar1,auStack_1c8._0_8_,&UNK_1433092e0);
          }
          if (pppppppfVar22 <= pppppppfVar38) {
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pppppppfVar38,pppppppfVar22,&UNK_1433092f8);
          }
          if (pppppppfVar22 <= pppppppfVar43) {
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pppppppfVar43,pppppppfVar22,&UNK_1433092f8);
          }
          if (pppppppfVar22 <= pppppppfVar29) {
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pppppppfVar29,pppppppfVar22,&UNK_143309310);
          }
          if (pppppppfVar22 <= pppppppfVar1) {
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pppppppfVar1,pppppppfVar22,&UNK_143309310);
          }
          afStack_240[1] = *(float *)((longlong)pppppppfStack_1d0 + (longlong)pppppppfVar38 * 4);
          afStack_240[1] =
               (*(float *)((longlong)pppppppfStack_1d0 + ((longlong)pppppppfVar38 + 1) * 4) -
               afStack_240[1]) * extraout_XMM0_Da + afStack_240[1];
          uStack_248._4_4_ = *(float *)((longlong)pppppppfStack_1d0 + (longlong)pppppppfVar29 * 4);
          uStack_248._4_4_ =
               (*(float *)((longlong)pppppppfStack_1d0 + ((longlong)pppppppfVar29 + 1) * 4) -
               uStack_248._4_4_) * extraout_XMM0_Da_00 + uStack_248._4_4_;
          fVar78 = *(float *)((longlong)pppppppfVar40 + ((longlong)pppppppfVar38 * 3 + 2) * 4);
          auVar74._0_8_ = *(undefined8 *)((longlong)pppppppfVar40 + (longlong)pppppppfVar38 * 0xc);
          auVar51._0_8_ = *(undefined8 *)((longlong)pppppppfVar40 + (longlong)pppppppfVar43 * 0xc);
          fVar44 = (float)auVar74._0_8_;
          fVar86 = (float)((ulonglong)auVar74._0_8_ >> 0x20);
          fVar44 = extraout_XMM0_Da * ((float)auVar51._0_8_ - fVar44) + fVar44;
          fVar86 = extraout_XMM0_Da * ((float)((ulonglong)auVar51._0_8_ >> 0x20) - fVar86) + fVar86;
          pppppppfStack_328 = (float *******)CONCAT44(fVar86,fVar44);
          fVar78 = (*(float *)((longlong)pppppppfVar40 + ((longlong)pppppppfVar43 * 3 + 2) * 4) -
                   fVar78) * extraout_XMM0_Da + fVar78;
          fVar64 = *(float *)((longlong)pppppppfVar40 + ((longlong)pppppppfVar29 * 3 + 2) * 4);
          auVar74._0_8_ = *(undefined8 *)((longlong)pppppppfVar40 + (longlong)pppppppfVar29 * 0xc);
          auVar51._0_8_ = *(undefined8 *)((longlong)pppppppfVar40 + (longlong)pppppppfVar1 * 0xc);
          fVar63 = (float)auVar74._0_8_;
          fVar65 = (float)((ulonglong)auVar74._0_8_ >> 0x20);
          fVar63 = fVar63 + extraout_XMM0_Da_00 * ((float)auVar51._0_8_ - fVar63);
          fVar65 = fVar65 + extraout_XMM0_Da_00 *
                            ((float)((ulonglong)auVar51._0_8_ >> 0x20) - fVar65);
          fVar64 = fVar64 + extraout_XMM0_Da_00 *
                            (*(float *)((longlong)pppppppfVar40 +
                                       ((longlong)pppppppfVar1 * 3 + 2) * 4) - fVar64);
          fVar59 = afStack_240[1] * (_UNK_142e4e65c - 0.0) * 0.0;
          uStack_320 = (code *)CONCAT44(fVar63,fVar78);
          uStack_318 = (float *******)CONCAT44(fVar64,fVar65);
          uStack_310 = (float *******)
                       CONCAT44(uStack_248._4_4_ * _UNK_143308d74 + fVar65,
                                uStack_248._4_4_ * _DAT_143308d70 + fVar63);
          uStack_308 = (float *******)
                       CONCAT44(fVar44 * _UNK_143308d7c + fVar59,
                                uStack_248._4_4_ * _UNK_143308d78 + fVar64);
          uStack_300 = (float *)CONCAT44(fVar59 + fVar78,fVar86 + afStack_240[1]);
          uStack_250._0_4_ = fVar45;
          if (cVar13 != '\0') {
            if ((fVar46 != 0.0) || (NAN(fVar46))) {
              fVar60 = fVar60 - (float)uStack_338;
              uStack_250._0_4_ = fVar45 - uStack_338._4_4_;
            }
            else {
              fVar60 = (float)uStack_118 - fVar60;
              uStack_250._0_4_ = uStack_118._4_4_ - fVar45;
            }
          }
          uStack_158._0_4_ = (float)_DAT_143308ef0;
          uStack_158._4_4_ = (float)((ulonglong)_DAT_143308ef0 >> 0x20);
          auStack_150._0_4_ = (undefined4)_UNK_143308ef8;
          auStack_150._4_4_ = (undefined4)((ulonglong)_UNK_143308ef8 >> 0x20);
          afStack_240[0] = fVar83 * fVar60;
          uStack_250._0_4_ = (float)uStack_250 * fVar83;
          uStack_258 = (float *******)(ulonglong)(uint)afStack_240[0];
          uStack_250._4_4_ = 0.0;
          uStack_4b8 = _DAT_143308f00;
          uStack_4b0 = CONCAT44(uStack_4b0._4_4_,0x3d0e8a72);
          uStack_f1 = 1;
          uStack_248._0_4_ = (float)uStack_250;
          pdb_141423520(&uStack_408,&pppppppfStack_328,&uStack_158,&uStack_188,&uStack_258,
                        &uStack_4b8);
          bVar14 = true;
          uVar30 = auStack_1c8._0_8_;
        } while (ppppppfVar41 < ppppppfVar32);
      }
      if (_DAT_143308ed0 < fVar83 && pppppppfStack_418 == (float *******)0x1) {
        pbStack_348 = (byte *)CONCAT44(pbStack_348._4_4_,fStack_370);
        pppppppfStack_350 = pppppppfStack_378;
        pppppppfStack_170 = (float *******)&pppppppfStack_458;
        pppppppfStack_168 = pppppppfStack_1d0;
        uStack_f1 = 1;
        uStack_160 = uVar30;
        pdb_1424b7bd0(&uStack_158,&pppppppfStack_170);
        uStack_318 = uStack_148;
        pppppppfStack_328 = (float *******)CONCAT44(uStack_158._4_4_,(float)uStack_158);
        uStack_320 = (code *)auStack_150;
        uStack_f1 = 1;
        uStack_258 = pppppppfStack_328;
        uStack_250 = auStack_150;
        uStack_248 = uStack_148;
        pdb_1424b7bd0(&uStack_158,&pppppppfStack_170);
        uStack_318 = uStack_148;
        pppppppfStack_328 = (float *******)CONCAT44(uStack_158._4_4_,(float)uStack_158);
        uStack_320 = (code *)auStack_150;
        afStack_240[0] = (float)uStack_158;
        afStack_240[1] = uStack_158._4_4_;
        uStack_f1 = 1;
        uStack_238 = auStack_150;
        uStack_230 = uStack_148;
        pdb_1424b7bd0(&uStack_158,&pppppppfStack_170);
        pppppppfStack_2d8 = uStack_148;
        pppppppfStack_2e0 = (float *******)auStack_150;
        fStack_228 = (float)uStack_158;
        fStack_224 = uStack_158._4_4_;
        uStack_310 = (float *******)uStack_250;
        uStack_308 = uStack_248;
        uStack_300 = (float *)CONCAT44(afStack_240[1],afStack_240[0]);
        uStack_2f8 = (float *******)uStack_238;
        pppppppfStack_2f0 = uStack_230;
        pppppppfStack_2e8 = (float *******)CONCAT44(uStack_158._4_4_,(float)uStack_158);
        uStack_318 = uStack_258;
        pppppppfStack_328 = (float *******)0x0;
        uStack_320 = (code *)0x3;
        uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
        pppppppfStack_220 = pppppppfStack_2e0;
        pppppppfStack_218 = pppppppfStack_2d8;
        uStack_158 = pppppppfStack_2e8;
        pppppppfVar25 = uStack_148;
        while( true ) {
          uStack_f1 = 1;
          uStack_148 = pppppppfVar25;
          pdb_141467530(&uStack_258,&pppppppfStack_328);
          if ((char)uStack_258 == '\0') break;
          auStack_150._0_4_ = (float)uStack_248;
          uStack_148._4_4_ = (float)uStack_230 + _DAT_14300c770 * _DAT_143035ea0;
          uStack_140._0_4_ = (float)uStack_238 + uStack_230._4_4_ * _UNK_143035ea4;
          uStack_140._4_4_ = uStack_238._4_4_ + uStack_230._4_4_ * _UNK_143035ea8;
          fStack_4a0 = uStack_258._4_4_ * fVar83;
          uStack_4b8 = (ulonglong)(uint)fStack_4a0;
          uStack_4b0 = (ulonglong)(uint)(afStack_240[1] * fVar83);
          uStack_4a8 = CONCAT44(uStack_230._4_4_,afStack_240[1] * fVar83);
          fStack_49c = uStack_248._4_4_;
          uStack_138 = CONCAT44((float)uStack_250 + uStack_248._4_4_ * 0.0,
                                (float)uStack_230 + uStack_230._4_4_ * _UNK_143035eac);
          uStack_130 = (float *******)
                       CONCAT44(uStack_248._4_4_ * 0.0 + (float)uStack_248,
                                uStack_250._4_4_ + uStack_248._4_4_);
          uStack_188 = (float *******)CONCAT44(fStack_228,afStack_240[0]);
          uStack_180 = (byte *)CONCAT44(afStack_240[0],fStack_228);
          pppppppfStack_170 = _DAT_143308ee0;
          pppppppfStack_168 = (float *******)CONCAT44(pppppppfStack_168._4_4_,0x3ca64c2f);
          uStack_f1 = 1;
          uStack_158 = (float *******)uStack_250;
          unique0x10008645 = (float *******)uStack_238;
          pdb_141423520(&uStack_408,&uStack_158,&uStack_188,&pppppppfStack_350,&uStack_4b8,
                        &pppppppfStack_170);
          pppppppfVar25 = (float *******)CONCAT44(uStack_148._4_4_,(undefined4)uStack_148);
        }
      }
      auVar51._0_8_ = uStack_3b0;
      auVar74._0_8_ = uStack_3c8;
      pfVar19 = pfStack_3e0;
      auStack_518._0_8_ = uStack_408;
      uStack_118 = (float *******)auStack_3f8._8_8_;
      auStack_508._0_8_ = pppppppfStack_3e8;
      pppppppfStack_420 = pppppppfStack_3d8;
      auStack_4f8._0_8_ = uStack_3d0;
      auStack_398._0_8_ = uStack_3c0;
      uStack_338 = pppppppfStack_3b8;
      uStack_f8 = 0;
      uStack_f9 = 1;
      uStack_fa = 1;
      pppppppfStack_478 = uStack_400;
      pdb_1409fc690(&pppppppfStack_328,&UNK_143309058,4,uStack_400,
                    (float *)((longlong)uStack_400 + auStack_3f8._0_8_ * 0xc));
      uStack_258 = (float *******)auStack_398._0_8_;
      uStack_250._0_4_ = SUB84(uStack_338,0);
      uStack_250._4_4_ = (float)((ulonglong)uStack_338 >> 0x20);
      uStack_248._0_4_ = (float)auVar51._0_8_;
      uStack_248._4_4_ = (float)((ulonglong)auVar51._0_8_ >> 0x20);
      uStack_f6 = 1;
      uStack_f7 = 1;
      pdb_1424bbb20(&pppppppfStack_328,&UNK_14330905c,0xc,&uStack_258);
      uStack_258 = uStack_118;
      uStack_250._0_4_ = auStack_508._0_4_;
      uStack_250._4_4_ = auStack_508._4_4_;
      uStack_248._0_4_ = SUB84(pfVar19,0);
      uStack_248._4_4_ = (float)((ulonglong)pfVar19 >> 0x20);
      uStack_f6 = 0;
      uStack_f7 = 1;
      pdb_1424bbb20(&pppppppfStack_328,&UNK_143309068,0xd,&uStack_258);
      uStack_258 = pppppppfStack_420;
      uStack_250._0_4_ = auStack_4f8._0_4_;
      uStack_250._4_4_ = auStack_4f8._4_4_;
      uStack_248._0_4_ = (float)auVar74._0_8_;
      uStack_248._4_4_ = (float)((ulonglong)auVar74._0_8_ >> 0x20);
      uStack_f6 = 0;
      uStack_f7 = 0;
      pdb_1424bb6a0(&pppppppfStack_328,&UNK_143309075,9,&uStack_258);
      uStack_258 = pppppppfStack_328;
      uStack_250._0_4_ = SUB84(uStack_320,0);
      uStack_250._4_4_ = (float)((ulonglong)uStack_320 >> 0x20);
      uStack_248._0_4_ = SUB84(uStack_318,0);
      uStack_248._4_4_ = (float)((ulonglong)uStack_318 >> 0x20);
      afStack_240[0] = SUB84(uStack_310,0);
      afStack_240[1] = (float)((ulonglong)uStack_310 >> 0x20);
      uStack_238._0_4_ = SUB84(uStack_308,0);
      uStack_238._4_4_ = (float)((ulonglong)uStack_308 >> 0x20);
      uStack_230._0_4_ = SUB84(uStack_300,0);
      uStack_230._4_4_ = (float)((ulonglong)uStack_300 >> 0x20);
      fStack_228 = SUB84(uStack_2f8,0);
      fStack_224 = (float)((ulonglong)uStack_2f8 >> 0x20);
      pppppppfStack_220 = pppppppfStack_2f0;
      pppppppfStack_218 = pppppppfStack_2e8;
      pppppppfStack_210 = pppppppfStack_2e0;
      pppppppfStack_208 = pppppppfStack_2d8;
      uStack_200 = uStack_2d0;
      uStack_1f8 = uStack_2c8;
      uStack_1f0 = uStack_2c0;
      uStack_1e8 = uStack_2b8;
      uStack_1e0 = uStack_2b0;
      if (auStack_518._0_8_ != 0) {
        pub_1406abac0((byte *)pppppppfStack_478,auStack_518._0_8_ * 0xc,4);
      }
      uStack_2b8 = uStack_1e8;
      uStack_2b0 = uStack_1e0;
      uStack_2c8 = uStack_1f8;
      uStack_2c0 = uStack_1f0;
      pppppppfStack_2d8 = pppppppfStack_208;
      uStack_2d0 = uStack_200;
      pppppppfStack_2e8 = pppppppfStack_218;
      pppppppfStack_2e0 = pppppppfStack_210;
      uStack_320 = (code *)CONCAT44(uStack_250._4_4_,(float)uStack_250);
      uStack_318 = (float *******)CONCAT44(uStack_248._4_4_,(float)uStack_248);
      uStack_310 = (float *******)CONCAT44(afStack_240[1],afStack_240[0]);
      uStack_308 = (float *******)CONCAT44(uStack_238._4_4_,(float)uStack_238);
      uStack_300 = (float *)CONCAT44(uStack_230._4_4_,(float)uStack_230);
      uStack_2f8 = (float *******)CONCAT44(fStack_224,fStack_228);
      pppppppfStack_2f0 = pppppppfStack_220;
      pppppppfStack_328 = uStack_258;
      pppppppfStack_2a8 = (float *******)0x8000000000000000;
      uStack_f1 = 0;
      auVar74._0_8_ = pdb_140a2ca40(param_7,&pppppppfStack_328);
      uStack_f1 = 0;
      pdb_140a596f0(&uStack_4b8,param_8,&UNK_143309128,0x2b,&UNK_143309158);
      uStack_f4 = 1;
      pppppppfStack_328 = (float *******)pdb_1406d0830(&uStack_4b8);
      uStack_f4 = 1;
      lVar24 = pdb_140315970(&pppppppfStack_328);
      if (*(longlong *)(lVar24 + 0x28) == 0) {
        uStack_f4 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143309170);
      }
      uStack_f4 = 1;
      pppppppfVar25 = (float *******)pdb_140e51270(pfStack_528,lVar24 + 0x28);
      uStack_f2 = 1;
      pppppppfStack_350 = pppppppfVar25;
      iVar17 = pdb_140315970(&param_15);
      uStack_f2 = 1;
      auVar51._0_8_ = pdb_140df4400(&UNK_143309188,0x12);
      uStack_f2 = 1;
      ppppppfVar32 = (float ******)pdb_140a2e580(uStack_530,auVar51._0_8_);
      uStack_f2 = 1;
      auVar51._0_8_ = pdb_140df4400(&UNK_14330919a,0x10);
      uStack_f2 = 1;
      auVar51._0_8_ = pdb_140a2e580(uStack_530,auVar51._0_8_);
      uStack_f2 = 1;
      uVar18 = pdb_1409012c0(*(undefined4 *)(param_5 + 0x274));
      uStack_f2 = 1;
      puVar26 = (undefined8 *)pdb_1413e4400(param_4,&UNK_1433056b8);
      if (puVar26 == (undefined8 *)0x0) {
LAB_141427f0a:
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1433091b0);
      }
      uStack_f2 = 1;
      lVar24 = (**(code **)(puVar26[1] + 0x18))(*puVar26);
      if (lVar24 == 0) goto LAB_141427f0a;
      iVar17 = (int)pppppppfStack_418 + iVar17 * (int)param_17;
      uStack_318 = (float *******)CONCAT44(uVar18,iVar17);
      pppppppfStack_2d8 = (float *******)_DAT_143309200;
      uStack_2d0 = _UNK_143309208;
      pppppppfStack_2e8 = (float *******)_DAT_1433091f0;
      pppppppfStack_2e0 = (float *******)_UNK_1433091f8;
      uStack_2f8 = (float *******)_DAT_1433091e0;
      pppppppfStack_2f0 = (float *******)_UNK_1433091e8;
      uStack_308 = (float *******)_DAT_1433091d0;
      uStack_300 = (float *)_UNK_1433091d8;
      uStack_250._0_4_ = 0.0;
      uStack_250._4_4_ = -0.0;
      uStack_248._0_4_ = 176.57056;
      uStack_248._4_4_ = 1.4013e-45;
      afStack_240[0] = 7.9874e-44;
      afStack_240[1] = 0.0;
      uStack_258 = (float *******)0x0;
      uStack_f2 = 1;
      pppppppfStack_328 = (float *******)ppppppfVar32;
      uStack_320 = (code *)auVar51._0_8_;
      uStack_310 = (float *******)lVar24;
      pdb_141470480(pfStack_528,&pppppppfStack_350,1,&uStack_258,&pppppppfStack_328);
      uStack_f2 = 1;
      pdb_1408fd560(&uStack_188,auVar74._0_8_);
      pppppppfStack_128 = (float *******)uStack_488;
      uStack_138 = uStack_498;
      uStack_130 = (float *******)uStack_490;
      uStack_148._0_4_ = (undefined4)uStack_4a8;
      uStack_148._4_4_ = (float)((ulonglong)uStack_4a8 >> 0x20);
      uStack_140._0_4_ = fStack_4a0;
      uStack_140._4_4_ = fStack_49c;
      uStack_158._0_4_ = (float)uStack_4b8;
      uStack_158._4_4_ = (float)(uStack_4b8 >> 0x20);
      auStack_150._0_4_ = (undefined4)uStack_4b0;
      auStack_150._4_4_ = (undefined4)(uStack_4b0 >> 0x20);
      uStack_1e0 = pdb_1406d0830(pppppppfVar25);
      uStack_258 = uStack_188;
      uStack_250._0_4_ = SUB84(uStack_180,0);
      uStack_250._4_4_ = (float)((ulonglong)uStack_180 >> 0x20);
      uStack_1e8 = pppppppfStack_128;
      pppppppfStack_218 = (float *******)CONCAT44(uStack_158._4_4_,(float)uStack_158);
      pppppppfStack_210 = (float *******)CONCAT44(auStack_150._4_4_,auStack_150._0_4_);
      pppppppfStack_208 = (float *******)CONCAT44(uStack_148._4_4_,(undefined4)uStack_148);
      uStack_200 = CONCAT44(uStack_140._4_4_,(float)uStack_140);
      uStack_1f8 = uStack_138;
      uStack_1f0 = uStack_130;
      uStack_248._0_4_ = (float)_DAT_142e4e650;
      uStack_248._4_4_ = (float)((ulonglong)_DAT_142e4e650 >> 0x20);
      afStack_240[0] = _UNK_142e4e658;
      afStack_240[1] = _UNK_142e4e65c;
      uStack_230._0_4_ = 0.0;
      uStack_238._0_4_ = 0.0;
      uStack_238._4_4_ = 0.0;
      uStack_230._4_4_ = 1.0;
      fStack_228 = 1.0;
      fStack_224 = 1.0;
      pppppppfVar25 = (float *******)pdb_1408ffdc0(param_7);
      pppppppfVar40 = (float *******)pdb_140961c90(auVar74._0_8_);
      uStack_130 = pppppppfStack_448;
      if ((ulonglong)auStack_1c8._0_8_ < pppppppfStack_448) {
        uStack_130 = (float *******)auStack_1c8._0_8_;
      }
      auStack_150 = (undefined1  [8])
                    ((longlong)pppppppfStack_450 + (longlong)pppppppfStack_448 * 0xc);
      uStack_158._0_4_ = SUB84(pppppppfStack_450,0);
      uStack_158._4_4_ = (float)((ulonglong)pppppppfStack_450 >> 0x20);
      uStack_148._0_4_ = SUB84(pppppppfStack_1d0,0);
      uStack_148._4_4_ = (float)((ulonglong)pppppppfStack_1d0 >> 0x20);
      uStack_138 = 0;
      pppppppfStack_128 = (float *******)&pppppppfStack_378;
      pppppppfStack_170 = pppppppfVar40;
      pppppppfStack_168 = pppppppfVar25;
      uStack_140 = pppppppfVar34;
      pdb_1413ed2d0(&uStack_188,&uStack_158);
      if (lStack_4d8 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143309250);
      }
      uVar15 = pdb_1413f9030(auStack_468);
      uVar42 = (ulonglong)uVar15;
      uVar30 = uVar42 + 1;
      if (*(ulonglong *)(param_5 + 0x98) <= uVar30) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar30,*(ulonglong *)(param_5 + 0x98),&UNK_143306638);
      }
      if (lVar31 + -4 + lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143309268);
      }
      lVar24 = *(longlong *)(param_5 + 0x90);
      fVar46 = *(float *)(lVar24 + uVar30 * 0xc) - *(float *)(lVar24 + uVar42 * 0xc);
      fVar60 = *(float *)(lVar24 + 4 + uVar30 * 0xc) - *(float *)(lVar24 + 4 + uVar42 * 0xc);
      fVar78 = *(float *)(lVar24 + 8 + uVar30 * 0xc) - *(float *)(lVar24 + 8 + uVar42 * 0xc);
      uVar15 = pdb_1413f9030(auStack_468);
      uVar42 = (ulonglong)uVar15;
      uVar30 = uVar42 + 1;
      if (*(ulonglong *)(param_5 + 0x98) <= uVar30) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar30,*(ulonglong *)(param_5 + 0x98),&UNK_143306638);
      }
      fVar60 = fVar4 / SQRT(fVar78 * fVar78 + fVar60 * fVar60 + fVar46 * fVar46);
      fVar46 = fVar46 * fVar60;
      fVar60 = fVar60 * fVar78;
      fStack_274 = fVar4 / SQRT(fVar60 * fVar60 + fVar46 * fVar46);
      fStack_278 = fVar46 * fStack_274;
      auVar81 = ZEXT416((uint)fStack_278);
      fStack_274 = fStack_274 * fVar60;
      lVar24 = *(longlong *)(param_5 + 0x90);
      fStack_270 = *(float *)(lVar24 + uVar30 * 0xc) - *(float *)(lVar24 + uVar42 * 0xc);
      fVar46 = *(float *)(lVar24 + 4 + uVar30 * 0xc) - *(float *)(lVar24 + 4 + uVar42 * 0xc);
      fVar60 = *(float *)(lVar24 + 8 + uVar30 * 0xc) - *(float *)(lVar24 + 8 + uVar42 * 0xc);
      fVar46 = fVar4 / SQRT(fVar60 * fVar60 + fVar46 * fVar46 + fStack_270 * fStack_270);
      fStack_270 = fStack_270 * fVar46;
      fVar46 = fVar46 * fVar60;
      fStack_26c = fVar4 / SQRT(fVar46 * fVar46 + fStack_270 * fStack_270);
      fStack_270 = fStack_270 * fStack_26c;
      fStack_26c = fStack_26c * fVar46;
      uStack_264 = *(undefined1 *)(param_5 + 0x2a4);
      uStack_288 = uStack_178;
      pppppppfStack_298 = uStack_188;
      pbStack_290 = uStack_180;
      uStack_320 = (code *)CONCAT44(uStack_250._4_4_,(float)uStack_250);
      uStack_318 = (float *******)CONCAT44(uStack_248._4_4_,(float)uStack_248);
      uStack_310 = (float *******)CONCAT44(afStack_240[1],afStack_240[0]);
      uStack_2f8 = (float *******)CONCAT44(fStack_224,fStack_228);
      pppppppfStack_328 = uStack_258;
      uStack_308 = (float *******)CONCAT44(uStack_238._4_4_,(float)uStack_238);
      uStack_300 = (float *)CONCAT44(uStack_230._4_4_,(float)uStack_230);
      pppppppfStack_2f0 = pppppppfStack_220;
      pppppppfStack_2e8 = pppppppfStack_218;
      pppppppfStack_2e0 = pppppppfStack_210;
      pppppppfStack_2d8 = pppppppfStack_208;
      uStack_2d0 = uStack_200;
      uStack_2c8 = uStack_1f8;
      uStack_2c0 = uStack_1f0;
      uStack_2b8 = uStack_1e8;
      uStack_2b0 = uStack_1e0;
      pppppppfStack_280 = pppppppfStack_470;
      uStack_f2 = 0;
      pppppppfStack_2a8 = pppppppfVar40;
      pppppppfStack_2a0 = pppppppfVar25;
      iStack_268 = iVar17;
      pdb_141416ae0(&uStack_258,param_10,&pppppppfStack_328,&UNK_143309280);
      lVar24 = lStack_1a0;
      pppppppfVar25 = uStack_258;
      if (lStack_1a0 == lStack_1b0) {
        uStack_f2 = 0;
        pdb_142db0920(&lStack_1b0);
      }
      *(float ********)(pbStack_1a8 + lVar24 * 8) = pppppppfVar25;
      lStack_1a0 = lVar24 + 1;
      auVar23 = auStack_3a8;
      uVar30 = auStack_1c8._0_8_;
      pppppppfVar25 = pppppppfStack_190;
    }
    pub_1406abac0((byte *)pppppppfStack_4c8,(ulonglong)(uint)((int)lStack_520 << 3) * 3,8);
    if (pppppppfStack_448 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_1433090c8);
    }
    pfVar19 = (float *)((longlong)pppppppfStack_450 + (longlong)pppppppfStack_448 * 0xc);
    if (pfVar19 == (float *)0xc) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1433090e0);
    }
    if (uVar30 == 0) {
      fVar45 = _DAT_143308f10;
      if (fVar83 <= _DAT_143308ed0) goto LAB_141426c17;
LAB_141426d60:
      fVar60 = pfVar19[-3] - *(float *)pppppppfStack_450;
      fVar46 = pfVar19[-2] - *(float *)((longlong)pppppppfStack_450 + 4);
      fVar83 = pfVar19[-1] - *(float *)(pppppppfStack_450 + 1);
      uVar15 = pdb_1413f9030(&pppppppfStack_458);
      auStack_1c8._8_8_ = extraout_XMM0_Qb_00;
      auStack_1c8._0_8_ = extraout_XMM0_Qa;
      pppppppfVar34 = (float *******)(ulonglong)uVar15;
      if (pppppppfStack_448 <= pppppppfVar34) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pppppppfVar34,pppppppfStack_448,&UNK_143309110);
      }
      pppppppfVar25 = (float *******)((longlong)pppppppfVar34 + 1);
      if (pppppppfStack_448 <= pppppppfVar25) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pppppppfVar25,pppppppfStack_448,&UNK_143309110);
      }
      fVar64 = fVar4 / SQRT(fVar83 * fVar83 + fVar46 * fVar46 + fVar60 * fVar60);
      fVar60 = fVar60 * fVar64;
      fVar64 = fVar64 * fVar83;
      fVar83 = *(float *)((longlong)pppppppfStack_450 + ((longlong)pppppppfVar34 * 3 + 2) * 4);
      fVar46 = *(float *)((longlong)pppppppfStack_450 + ((longlong)pppppppfVar25 * 3 + 2) * 4);
      auVar74._0_8_ = *(undefined8 *)((longlong)pppppppfStack_450 + (longlong)pppppppfVar34 * 0xc);
      auVar51._0_8_ = *(undefined8 *)((longlong)pppppppfStack_450 + (longlong)pppppppfVar25 * 0xc);
      uStack_258 = (float *******)CONCAT44(fVar64,fVar60);
      pdb_140df4520(&pppppppfStack_328,&uStack_258);
      pppppppfVar40 = pppppppfStack_328;
      fVar78 = (float)uStack_320;
      uStack_258 = (float *******)CONCAT44(fVar64,fVar60);
      pdb_140df4520(&pppppppfStack_328,&uStack_258);
      pppppppfVar22 = pppppppfStack_328;
      fVar60 = (float)uStack_320;
      pdb_14007ee60();
      pppppppfVar25 = (float *******)0x18;
      pppppppfVar34 = (float *******)pub_1406abab0(0x18,4);
      if (pppppppfVar34 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x18);
      }
      fVar83 = (fVar46 - fVar83) * (float)auStack_1c8._0_4_ + fVar83;
      fVar46 = (float)auVar74._0_8_;
      fVar64 = (float)((ulonglong)auVar74._0_8_ >> 0x20);
      fVar59 = fVar45 * _DAT_142e378e0;
      fVar78 = fVar78 * _DAT_142e37ae4;
      fVar46 = (float)auStack_1c8._0_4_ * ((float)auVar51._0_8_ - fVar46) + fVar46;
      fVar64 = (float)auStack_1c8._0_4_ * ((float)((ulonglong)auVar51._0_8_ >> 0x20) - fVar64) +
               fVar64;
      fVar60 = fVar60 * _DAT_143008210;
      fVar44 = SUB84(pppppppfVar22,0) * _DAT_14303aa50;
      fVar86 = (float)((ulonglong)pppppppfVar22 >> 0x20) * _UNK_14303aa54;
      *pppppppfVar34 =
           (float ******)
           CONCAT44((float)((ulonglong)pppppppfVar40 >> 0x20) * _UNK_142f6e3e4 +
                    fVar45 * _UNK_142e378e4 + fVar64,
                    SUB84(pppppppfVar40,0) * _DAT_142f6e3e0 + fVar59 + fVar46);
      *(float *)(pppppppfVar34 + 1) = fVar78 + fVar59 + fVar83;
      *(ulonglong *)((longlong)pppppppfVar34 + 0xc) =
           CONCAT44(fVar45 + fVar86 + fVar64,fVar59 + fVar44 + fVar46);
      *(float *)((longlong)pppppppfVar34 + 0x14) = fVar60 + fVar59 + fVar83;
    }
    else {
      uVar30 = uVar30 * 4 - 4;
      if ((uVar30 & 4) == 0) {
        pppppppfVar25 = (float *******)((longlong)pppppppfStack_1d0 + 4);
        fVar46 = *(float *)pppppppfStack_1d0;
        fVar45 = fVar46;
        if (fVar46 <= 0.0) {
          fVar46 = 0.0;
          fVar45 = fVar46;
        }
      }
      else {
        pppppppfVar25 = pppppppfStack_1d0;
        fVar45 = 0.0;
      }
      if (uVar30 != 0) {
        do {
          fVar46 = *(float *)pppppppfVar25;
          fVar60 = *(float *)((longlong)pppppppfVar25 + 4);
          fVar78 = fVar46;
          if (fVar46 <= fVar45) {
            fVar78 = fVar45;
          }
          fVar46 = (float)(~-(uint)NAN(fVar45) & (uint)fVar78 | -(uint)NAN(fVar45) & (uint)fVar46);
          pppppppfVar25 = pppppppfVar25 + 1;
          fVar45 = fVar60;
          if (fVar60 <= fVar46) {
            fVar45 = fVar46;
          }
          fVar46 = (float)(-(uint)NAN(fVar46) & (uint)fVar60 | ~-(uint)NAN(fVar46) & (uint)fVar45);
          fVar45 = fVar46;
        } while (pppppppfVar25 != pppppppfVar34);
      }
      fVar45 = fVar46 * _DAT_142e3798c + _DAT_143308f10;
      if (_DAT_143308ed0 < fVar83) goto LAB_141426d60;
LAB_141426c17:
      uVar15 = pdb_1413f9030(&pppppppfStack_458);
      pppppppfVar34 = (float *******)(ulonglong)uVar15;
      if (pppppppfStack_448 <= pppppppfVar34) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pppppppfVar34,pppppppfStack_448,&UNK_1433090f8);
      }
      pppppppfVar25 = (float *******)((longlong)pppppppfVar34 + 1);
      if (pppppppfStack_448 <= pppppppfVar25) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pppppppfVar25,pppppppfStack_448,&UNK_1433090f8);
      }
      fVar83 = *(float *)((longlong)pppppppfStack_450 + ((longlong)pppppppfVar34 * 3 + 2) * 4);
      auVar74._0_8_ = *(undefined8 *)((longlong)pppppppfStack_450 + (longlong)pppppppfVar34 * 0xc);
      fVar60 = (float)auVar74._0_8_;
      fVar78 = (float)((ulonglong)auVar74._0_8_ >> 0x20);
      auVar74._0_8_ = *(undefined8 *)((longlong)pppppppfStack_450 + (longlong)pppppppfVar25 * 0xc);
      fVar46 = *(float *)((longlong)pppppppfStack_450 + ((longlong)pppppppfVar25 * 3 + 2) * 4);
      pdb_14007ee60();
      pppppppfVar25 = (float *******)0xc;
      pppppppfVar34 = (float *******)pub_1406abab0(0xc,4);
      if (pppppppfVar34 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0xc);
      }
      fVar64 = fVar45 * _DAT_142e378e0;
      *pppppppfVar34 =
           (float ******)
           CONCAT44(fVar45 * _UNK_142e378e4 +
                    extraout_XMM0_Da_01 * ((float)((ulonglong)auVar74._0_8_ >> 0x20) - fVar78) +
                    fVar78,fVar64 + extraout_XMM0_Da_01 * ((float)auVar74._0_8_ - fVar60) + fVar60);
      *(float *)(pppppppfVar34 + 1) = (fVar46 - fVar83) * extraout_XMM0_Da_01 + fVar83 + fVar64;
    }
    uStack_310 = (float *******)((longlong)pppppppfVar34 + (longlong)pppppppfVar25);
    auStack_1c8._0_8_ = uStack_310;
    uStack_300 = (float *)0x2;
    uStack_2f8 = (float *******)0x100;
    pppppppfStack_2f0 = (float *******)0x0;
    pppppppfStack_2e8 = (float *******)0x2;
    pppppppfStack_2e0 = (float *******)CONCAT62(pppppppfStack_2e0._2_6_,0x100);
    plVar33 = (longlong *)param_10[1];
    if (plVar33 == (longlong *)0x0) {
      plVar33 = (longlong *)param_10[2];
    }
    auVar74._0_8_ = *param_10;
    uStack_308 = (float *******)0x1;
    pppppppfVar40 = (float *******)((longlong)pppppppfVar34 + 0xc);
    pppppppfStack_328 = (float *******)0x1;
    fVar46 = SUB84(pppppppfStack_378,0);
    uVar30 = (ulonglong)pppppppfStack_378 >> 0x20;
    ppppppfVar32 = *pppppppfVar34;
    fVar45 = _DAT_14330578c * fStack_370;
    fVar83 = *(float *)(pppppppfVar34 + 1);
    uStack_338 = pppppppfVar25;
    uStack_320 = (code *)pppppppfVar34;
    uStack_318 = pppppppfVar40;
    uStack_118 = pppppppfVar34;
    pdb_140de88f0(&uStack_258);
    pppppppfVar34 = uStack_258;
    lVar31 = CONCAT44(uStack_250._4_4_,(float)uStack_250);
    pdb_14007ee60();
    auVar51._0_8_ = pdb_140ed5970(auVar74._0_8_);
    lVar27 = plVar33[2];
    if ((ulonglong)(*plVar33 - lVar27) < 0x68) {
      pdb_142d7f1b0(plVar33,lVar27,0x68,1,1);
    }
    lVar12 = lStack_1a0;
    fVar46 = fVar46 * _DAT_143305790;
    fVar60 = (float)uVar30 * _UNK_143305794;
    lVar24 = plVar33[1];
    *(code **)(lVar24 + lVar27) = pdb_1414143a0;
    plVar3 = (longlong *)(lVar24 + 8 + lVar27);
    *plVar3 = (longlong)pppppppfVar34;
    plVar3[1] = lVar31;
    *(ulonglong *)(lVar24 + 0x18 + lVar27) =
         CONCAT44(fVar60 + (float)((ulonglong)ppppppfVar32 >> 0x20),fVar46 + SUB84(ppppppfVar32,0));
    *(float *)(lVar24 + 0x20 + lVar27) = fVar45 + fVar83;
    *(undefined8 *)(lVar24 + 0x24 + lVar27) = 0x3f8000003f800000;
    *(undefined4 *)(lVar24 + 0x2c + lVar27) = 0x3f800000;
    *(undefined4 *)(lVar24 + 0x38 + lVar27) = 0;
    *(undefined8 *)(lVar24 + 0x40 + lVar27) = 0xb75231fda9a1fa83;
    *(undefined1 *)(lVar24 + 0x48 + lVar27) = 0x14;
    *(undefined8 *)(lVar24 + 0x58 + lVar27) = auVar51._0_8_;
    plVar33[2] = lVar27 + 0x68;
    if (lStack_1a0 == lStack_1b0) {
      pdb_142db0920(&lStack_1b0);
    }
    *(undefined8 *)(pbStack_1a8 + lVar12 * 8) = auVar51._0_8_;
    fVar45 = _UNK_143305794;
    fVar83 = _DAT_143305790;
    lStack_1a0 = lVar12 + 1;
    pppppppfVar25 = (float *******)0x1;
    pppppppfVar34 = uStack_118;
    while( true ) {
      if (pppppppfVar25 == (float *******)0x2) {
        uStack_300 = (float *)0x2;
        uStack_2f8 = (float *******)0x100;
        uStack_308 = (float *******)0x1;
        if (pppppppfVar40 == (float *******)auStack_1c8._0_8_) {
          pppppppfVar34 = (float *******)0x0;
          pppppppfVar25 = pppppppfVar40;
        }
        else {
          uStack_318 = (float *******)((longlong)pppppppfVar40 + 0xc);
          pppppppfVar25 = uStack_318;
          pppppppfVar34 = pppppppfVar40;
        }
        pppppppfStack_328 = (float *******)0x1;
        cVar13 = '\0';
        pppppppfVar40 = pppppppfVar25;
        pppppppfVar25 = uStack_308;
        uStack_320 = (code *)pppppppfVar34;
      }
      else {
        uStack_308 = (float *******)((longlong)pppppppfVar25 + 1);
        cVar13 = *(char *)((longlong)&uStack_2f8 + (longlong)pppppppfVar25);
        pppppppfVar25 = uStack_308;
      }
      uStack_308 = pppppppfVar25;
      if (pppppppfVar34 == (float *******)0x0) break;
      fVar46 = _DAT_142e36f34;
      if (cVar13 == '\0') {
        fVar46 = fVar4;
      }
      fVar78 = SUB84(pppppppfStack_378,0);
      uVar30 = (ulonglong)pppppppfStack_378 >> 0x20;
      ppppppfVar32 = *pppppppfVar34;
      fVar64 = fVar46 * fStack_370 * _DAT_14330578c;
      fVar60 = *(float *)(pppppppfVar34 + 1);
      pdb_140de88f0(&uStack_258);
      pppppppfVar22 = uStack_258;
      lVar31 = CONCAT44(uStack_250._4_4_,(float)uStack_250);
      pdb_14007ee60();
      auVar51._0_8_ = pdb_140ed5970(auVar74._0_8_);
      lVar27 = plVar33[2];
      if ((ulonglong)(*plVar33 - lVar27) < 0x68) {
        pdb_142d7f1b0(plVar33,lVar27,0x68,1,1);
      }
      lVar12 = lStack_1a0;
      lVar24 = plVar33[1];
      *(code **)(lVar24 + lVar27) = pdb_1414143a0;
      plVar3 = (longlong *)(lVar24 + 8 + lVar27);
      *plVar3 = (longlong)pppppppfVar22;
      plVar3[1] = lVar31;
      *(ulonglong *)(lVar24 + 0x18 + lVar27) =
           CONCAT44((float)uVar30 * fVar46 * fVar45 + (float)((ulonglong)ppppppfVar32 >> 0x20),
                    fVar78 * fVar46 * fVar83 + SUB84(ppppppfVar32,0));
      *(float *)(lVar24 + 0x20 + lVar27) = fVar64 + fVar60;
      *(undefined8 *)(lVar24 + 0x24 + lVar27) = 0x3f8000003f800000;
      *(undefined4 *)(lVar24 + 0x2c + lVar27) = 0x3f800000;
      *(undefined4 *)(lVar24 + 0x38 + lVar27) = 0;
      *(undefined8 *)(lVar24 + 0x40 + lVar27) = 0xb75231fda9a1fa83;
      *(undefined1 *)(lVar24 + 0x48 + lVar27) = 0x14;
      *(undefined8 *)(lVar24 + 0x58 + lVar27) = auVar51._0_8_;
      plVar33[2] = lVar27 + 0x68;
      if (lStack_1a0 == lStack_1b0) {
        pdb_142db0920(&lStack_1b0);
      }
      *(undefined8 *)(pbStack_1a8 + lVar12 * 8) = auVar51._0_8_;
      lStack_1a0 = lVar12 + 1;
    }
    pub_1406abac0((byte *)uStack_118,(ulonglong)uStack_338,4);
  }
  plVar33 = plStack_4d0;
  plStack_4d0[2] = lStack_1a0;
  *plStack_4d0 = lStack_1b0;
  plStack_4d0[1] = (longlong)pbStack_1a8;
  if (pppppppfStack_4c0 != (float *******)0x0) {
    pub_1406abac0((byte *)pppppppfStack_1d0,(longlong)pppppppfStack_4c0 << 2,4);
  }
  if (pppppppfStack_458 != (float *******)0x0) {
    pub_1406abac0((byte *)pppppppfStack_450,(longlong)pppppppfStack_458 * 0xc,4);
  }
  if (lStack_440 != 0) {
    uVar30 = lStack_440 << 2;
    uVar42 = 4;
    pbVar20 = pbStack_438;
LAB_141427377:
    pub_1406abac0(pbVar20,uVar30,uVar42);
  }
  return plVar33;
LAB_141424180:
  fVar44 = *(float *)((longlong)uStack_118 + (uVar42 * 3 + 1) * 4) -
           *(float *)((longlong)pppppppfVar22 + 4);
  fVar86 = *(float *)((longlong)uStack_118 + uVar42 * 0xc) - *(float *)pppppppfVar22;
  fVar63 = *(float *)((longlong)uStack_118 + (uVar42 * 3 + 2) * 4) - *(float *)(pppppppfVar22 + 1);
  fVar86 = (float)auStack_1c8._0_4_ + SQRT(fVar63 * fVar63 + fVar44 * fVar44 + fVar86 * fVar86);
  goto LAB_1414240ce;
code_r0x0001414248b3:
  if (pppppppfVar34 == (float *******)0x3) goto LAB_1414256fa;
  goto LAB_141424880;
}

