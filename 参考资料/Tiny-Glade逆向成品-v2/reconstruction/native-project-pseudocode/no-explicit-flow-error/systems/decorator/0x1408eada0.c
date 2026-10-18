// VA 0x1408eada0, PDB extent 17754 bytes
// system_decorator::audio::op_stairs_audio::op_stairs_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/audio/op_stairs_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::audio::op_stairs_audio::op_stairs_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/audio/op_stairs_audio.rs
   Extent: 17754 */

void pdb_1408eada0(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,longlong *param_6,longlong *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,longlong *param_11,longlong *param_12,
                  undefined8 *param_13,longlong *param_14,undefined8 *param_15,undefined8 *param_16)

{
  longlong **pplVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  char cVar19;
  undefined1 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iVar23;
  uint uVar24;
  longlong *plVar25;
  longlong *plVar26;
  longlong **pplVar27;
  longlong lVar28;
  ulonglong uVar29;
  float *pfVar30;
  undefined8 uVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar34;
  uint uVar35;
  longlong lVar36;
  longlong **pplVar37;
  ulonglong uVar38;
  byte *pbVar39;
  char *pcVar40;
  undefined1 uVar41;
  longlong **pplVar42;
  ushort uVar43;
  ulonglong uVar44;
  longlong lVar45;
  ulonglong uVar46;
  uint uVar47;
  ulonglong uVar48;
  longlong **pplVar49;
  undefined1 (*pauVar50) [16];
  longlong **pplVar51;
  undefined1 (*pauVar52) [16];
  ulonglong *puVar53;
  bool bVar54;
  byte bVar55;
  float fVar56;
  float extraout_XMM0_Da;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  undefined8 *in_stack_fffffffffffffa68;
  undefined4 uVar106;
  char acStack_588 [36];
  float fStack_564;
  undefined4 uStack_560;
  byte abStack_548 [36];
  float fStack_524;
  longlong *plStack_508;
  longlong **pplStack_500;
  undefined1 uStack_4f8;
  undefined1 uStack_4f7;
  undefined1 uStack_4f6;
  undefined1 uStack_4f5;
  undefined1 uStack_4f4;
  undefined1 uStack_4f3;
  undefined1 uStack_4f2;
  undefined1 uStack_4f1;
  undefined1 uStack_4f0;
  undefined1 uStack_4ef;
  undefined1 uStack_4ee;
  undefined1 uStack_4ed;
  undefined1 uStack_4ec;
  undefined1 uStack_4eb;
  undefined1 uStack_4ea;
  undefined1 uStack_4e9;
  longlong lStack_4e8;
  longlong lStack_4e0;
  longlong *plStack_4d8;
  longlong **pplStack_4d0;
  undefined1 uStack_4c8;
  undefined1 uStack_4c7;
  undefined1 uStack_4c6;
  undefined1 uStack_4c5;
  undefined1 uStack_4c4;
  undefined1 uStack_4c3;
  undefined1 uStack_4c2;
  undefined1 uStack_4c1;
  undefined1 uStack_4c0;
  undefined1 uStack_4bf;
  undefined1 uStack_4be;
  undefined1 uStack_4bd;
  undefined1 uStack_4bc;
  undefined1 uStack_4bb;
  undefined1 uStack_4ba;
  undefined1 uStack_4b9;
  longlong lStack_4b8;
  longlong lStack_4b0;
  longlong *plStack_4a8;
  longlong **pplStack_4a0;
  undefined1 uStack_498;
  undefined1 uStack_497;
  undefined1 uStack_496;
  undefined1 uStack_495;
  undefined1 uStack_494;
  undefined1 uStack_493;
  undefined1 uStack_492;
  undefined1 uStack_491;
  undefined1 uStack_490;
  undefined1 uStack_48f;
  undefined1 uStack_48e;
  undefined1 uStack_48d;
  undefined1 uStack_48c;
  undefined1 uStack_48b;
  undefined1 uStack_48a;
  undefined1 uStack_489;
  longlong lStack_488;
  longlong lStack_480;
  longlong *plStack_478;
  longlong **pplStack_470;
  undefined1 uStack_468;
  undefined1 uStack_467;
  undefined1 uStack_466;
  undefined1 uStack_465;
  undefined1 uStack_464;
  undefined1 uStack_463;
  undefined1 uStack_462;
  undefined1 uStack_461;
  undefined1 uStack_460;
  undefined1 uStack_45f;
  undefined1 uStack_45e;
  undefined1 uStack_45d;
  undefined1 uStack_45c;
  undefined1 uStack_45b;
  undefined1 uStack_45a;
  undefined1 uStack_459;
  longlong lStack_458;
  longlong lStack_450;
  longlong *plStack_448;
  longlong **pplStack_440;
  undefined1 uStack_438;
  undefined1 uStack_437;
  undefined1 uStack_436;
  undefined1 uStack_435;
  undefined1 uStack_434;
  undefined1 uStack_433;
  undefined1 uStack_432;
  undefined1 uStack_431;
  undefined1 uStack_430;
  undefined1 uStack_42f;
  undefined1 uStack_42e;
  undefined1 uStack_42d;
  undefined1 uStack_42c;
  undefined1 uStack_42b;
  undefined1 uStack_42a;
  undefined1 uStack_429;
  longlong lStack_428;
  longlong lStack_420;
  longlong *plStack_418;
  longlong **pplStack_410;
  undefined1 uStack_408;
  undefined1 uStack_407;
  undefined1 uStack_406;
  undefined1 uStack_405;
  undefined1 uStack_404;
  undefined1 uStack_403;
  undefined1 uStack_402;
  undefined1 uStack_401;
  undefined1 uStack_400;
  undefined1 uStack_3ff;
  undefined1 uStack_3fe;
  undefined1 uStack_3fd;
  undefined1 uStack_3fc;
  undefined1 uStack_3fb;
  undefined1 uStack_3fa;
  undefined1 uStack_3f9;
  longlong lStack_3f8;
  longlong lStack_3f0;
  undefined8 uStack_3e0;
  longlong lStack_3d8;
  longlong *plStack_3d0;
  longlong *plStack_3c8;
  longlong *plStack_3c0;
  longlong *plStack_3b8;
  longlong *plStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  longlong *plStack_390;
  longlong *plStack_388;
  longlong *plStack_380;
  longlong *plStack_378;
  longlong **pplStack_370;
  undefined1 auStack_368 [16];
  undefined1 auStack_358 [16];
  longlong **pplStack_340;
  longlong **pplStack_338;
  ulonglong *puStack_330;
  longlong lStack_328;
  longlong *plStack_320;
  longlong *plStack_318;
  longlong *plStack_310;
  longlong *plStack_308;
  undefined8 uStack_300;
  longlong *plStack_2f8;
  longlong **pplStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  longlong lStack_2d8;
  longlong lStack_2d0;
  longlong *plStack_2c8;
  longlong **pplStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  longlong **pplStack_2a8;
  longlong lStack_2a0;
  int iStack_290;
  int iStack_28c;
  longlong lStack_288;
  longlong **pplStack_280;
  undefined8 uStack_278;
  longlong *plStack_270;
  longlong *plStack_268;
  longlong lStack_260;
  longlong lStack_258;
  longlong **pplStack_250;
  longlong lStack_248;
  ulonglong uStack_240;
  undefined4 *puStack_238;
  longlong lStack_230;
  float fStack_224;
  float fStack_220;
  int iStack_21c;
  longlong *plStack_218;
  longlong lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 (*pauStack_1d8) [16];
  undefined1 (*pauStack_1d0) [16];
  undefined1 *puStack_1c8;
  ushort uStack_1c0;
  undefined6 uStack_1be;
  undefined8 uStack_1b8;
  ulonglong uStack_1b0;
  undefined4 uStack_1a4;
  longlong *plStack_1a0;
  float fStack_198;
  undefined4 uStack_194;
  float fStack_190;
  float fStack_18c;
  int iStack_188;
  float fStack_184;
  longlong **pplStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  float fStack_154;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 (*pauStack_138) [16];
  undefined1 (*pauStack_130) [16];
  undefined1 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  int iStack_108;
  undefined1 uStack_103;
  undefined1 uStack_102;
  byte bStack_101;
  longlong **pplStack_100;
  longlong **pplStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar53 = (ulonglong *)*param_4;
  lVar34 = param_4[1];
  uVar29 = *puVar53;
  uVar46 = 0;
  uVar38 = uVar29 - *(ulonglong *)(lVar34 + 0x18);
  if (uVar29 < *(ulonglong *)(lVar34 + 0x18)) {
    uVar38 = uVar46;
  }
  uVar32 = uVar29 - *(ulonglong *)(lVar34 + 0x38);
  if (uVar29 < *(ulonglong *)(lVar34 + 0x38)) {
    uVar32 = uVar46;
  }
  bVar54 = *(ulonglong *)(lVar34 + 0x30) < uVar32;
  uVar44 = *(ulonglong *)(lVar34 + 0x30) - uVar32;
  uVar29 = uVar44;
  if (bVar54) {
    uVar29 = uVar46;
  }
  lVar28 = CONCAT71((int7)(uVar32 >> 8),bVar54 || uVar44 == 0);
  uVar32 = *(ulonglong *)(lVar34 + 0x10);
  uVar48 = uVar32 - uVar38;
  if (uVar32 < uVar38) {
    uVar48 = uVar46;
  }
  uVar46 = *(ulonglong *)(lVar34 + 0x40);
  *puVar53 = uVar46 - (uVar48 + uVar29);
  if ((uVar32 < uVar38 || uVar32 - uVar38 == 0) && (bVar54 || uVar44 == 0)) {
    plVar25 = (longlong *)pdb_140f3bda0();
    if ((char)plVar25[2] == '\x01') {
      lStack_4e8 = *plVar25;
      lVar28 = plVar25[1];
    }
    else {
      lStack_4e8 = pdb_140f4fd10();
      *plVar25 = lStack_4e8;
      plVar25[1] = lVar28;
      *(undefined1 *)(plVar25 + 2) = 1;
    }
    *plVar25 = lStack_4e8 + 1;
    uVar102 = UNK_14301ca0f;
    uVar101 = UNK_14301ca0e;
    uVar100 = UNK_14301ca0d;
    uVar99 = UNK_14301ca0c;
    uVar98 = UNK_14301ca0b;
    uVar97 = UNK_14301ca0a;
    uVar96 = UNK_14301ca09;
    uVar95 = UNK_14301ca08;
    uVar94 = UNK_14301ca07;
    uVar93 = UNK_14301ca06;
    uVar92 = UNK_14301ca05;
    uVar91 = UNK_14301ca04;
    uVar90 = UNK_14301ca03;
    uVar89 = UNK_14301ca02;
    uVar88 = UNK_14301ca01;
    uVar87 = DAT_14301ca00;
    pplVar49 = _UNK_14301c9f8;
    plVar25 = _DAT_14301c9f0;
    uStack_4f8 = DAT_14301ca00;
    uStack_4f7 = UNK_14301ca01;
    uStack_4f6 = UNK_14301ca02;
    uStack_4f5 = UNK_14301ca03;
    uStack_4f4 = UNK_14301ca04;
    uStack_4f3 = UNK_14301ca05;
    uStack_4f2 = UNK_14301ca06;
    uStack_4f1 = UNK_14301ca07;
    uStack_4f0 = UNK_14301ca08;
    uStack_4ef = UNK_14301ca09;
    uStack_4ee = UNK_14301ca0a;
    uStack_4ed = UNK_14301ca0b;
    uStack_4ec = UNK_14301ca0c;
    uStack_4eb = UNK_14301ca0d;
    uStack_4ea = UNK_14301ca0e;
    uStack_4e9 = UNK_14301ca0f;
    plStack_508 = _DAT_14301c9f0;
    pplStack_500 = _UNK_14301c9f8;
    lStack_4e0 = lVar28;
    plVar26 = (longlong *)pdb_140f3bda0();
    if ((char)plVar26[2] == '\x01') {
      lStack_3f8 = *plVar26;
      lVar28 = plVar26[1];
    }
    else {
      lStack_3f8 = pdb_140f4fd10();
      *plVar26 = lStack_3f8;
      plVar26[1] = lVar28;
      *(undefined1 *)(plVar26 + 2) = 1;
    }
    *plVar26 = lStack_3f8 + 1;
    uStack_408 = uVar87;
    uStack_407 = uVar88;
    uStack_406 = uVar89;
    uStack_405 = uVar90;
    uStack_404 = uVar91;
    uStack_403 = uVar92;
    uStack_402 = uVar93;
    uStack_401 = uVar94;
    uStack_400 = uVar95;
    uStack_3ff = uVar96;
    uStack_3fe = uVar97;
    uStack_3fd = uVar98;
    uStack_3fc = uVar99;
    uStack_3fb = uVar100;
    uStack_3fa = uVar101;
    uStack_3f9 = uVar102;
    plStack_418 = plVar25;
    pplStack_410 = pplVar49;
    lStack_3f0 = lVar28;
    plVar26 = (longlong *)pdb_140f3bda0();
    if ((char)plVar26[2] == '\x01') {
      lStack_428 = *plVar26;
      lVar28 = plVar26[1];
    }
    else {
      lStack_428 = pdb_140f4fd10();
      *plVar26 = lStack_428;
      plVar26[1] = lVar28;
      *(undefined1 *)(plVar26 + 2) = 1;
    }
    *plVar26 = lStack_428 + 1;
    uStack_438 = uVar87;
    uStack_437 = uVar88;
    uStack_436 = uVar89;
    uStack_435 = uVar90;
    uStack_434 = uVar91;
    uStack_433 = uVar92;
    uStack_432 = uVar93;
    uStack_431 = uVar94;
    uStack_430 = uVar95;
    uStack_42f = uVar96;
    uStack_42e = uVar97;
    uStack_42d = uVar98;
    uStack_42c = uVar99;
    uStack_42b = uVar100;
    uStack_42a = uVar101;
    uStack_429 = uVar102;
    plStack_448 = plVar25;
    pplStack_440 = pplVar49;
    lStack_420 = lVar28;
    plVar26 = (longlong *)pdb_140f3bda0();
    if ((char)plVar26[2] == '\x01') {
      lStack_458 = *plVar26;
      lVar28 = plVar26[1];
    }
    else {
      lStack_458 = pdb_140f4fd10();
      *plVar26 = lStack_458;
      plVar26[1] = lVar28;
      *(undefined1 *)(plVar26 + 2) = 1;
    }
    *plVar26 = lStack_458 + 1;
    uStack_468 = uVar87;
    uStack_467 = uVar88;
    uStack_466 = uVar89;
    uStack_465 = uVar90;
    uStack_464 = uVar91;
    uStack_463 = uVar92;
    uStack_462 = uVar93;
    uStack_461 = uVar94;
    uStack_460 = uVar95;
    uStack_45f = uVar96;
    uStack_45e = uVar97;
    uStack_45d = uVar98;
    uStack_45c = uVar99;
    uStack_45b = uVar100;
    uStack_45a = uVar101;
    uStack_459 = uVar102;
    plStack_478 = plVar25;
    pplStack_470 = pplVar49;
    lStack_450 = lVar28;
    plVar26 = (longlong *)pdb_140f3bda0();
    if ((char)plVar26[2] == '\x01') {
      lStack_488 = *plVar26;
      lVar28 = plVar26[1];
    }
    else {
      lStack_488 = pdb_140f4fd10();
      *plVar26 = lStack_488;
      plVar26[1] = lVar28;
      *(undefined1 *)(plVar26 + 2) = 1;
    }
    *plVar26 = lStack_488 + 1;
    uStack_498 = uVar87;
    uStack_497 = uVar88;
    uStack_496 = uVar89;
    uStack_495 = uVar90;
    uStack_494 = uVar91;
    uStack_493 = uVar92;
    uStack_492 = uVar93;
    uStack_491 = uVar94;
    uStack_490 = uVar95;
    uStack_48f = uVar96;
    uStack_48e = uVar97;
    uStack_48d = uVar98;
    uStack_48c = uVar99;
    uStack_48b = uVar100;
    uStack_48a = uVar101;
    uStack_489 = uVar102;
    plStack_4a8 = plVar25;
    pplStack_4a0 = pplVar49;
    lStack_480 = lVar28;
    plVar26 = (longlong *)pdb_140f3bda0();
    if ((char)plVar26[2] == '\x01') {
      lStack_2d8 = *plVar26;
      lVar28 = plVar26[1];
    }
    else {
      lStack_2d8 = pdb_140f4fd10();
      *plVar26 = lStack_2d8;
      plVar26[1] = lVar28;
      *(undefined1 *)(plVar26 + 2) = 1;
    }
    *plVar26 = lStack_2d8 + 1;
    uStack_2e8 = CONCAT17(uVar94,CONCAT16(uVar93,CONCAT15(uVar92,CONCAT14(uVar91,CONCAT13(uVar90,
                                                  CONCAT12(uVar89,CONCAT11(uVar88,uVar87)))))));
    uStack_2e0 = CONCAT17(uVar102,CONCAT16(uVar101,CONCAT15(uVar100,CONCAT14(uVar99,CONCAT13(uVar98,
                                                  CONCAT12(uVar97,CONCAT11(uVar96,uVar95)))))));
    plStack_2f8 = plVar25;
    pplStack_2f0 = pplVar49;
    lStack_2d0 = lVar28;
    plVar26 = (longlong *)pdb_140f3bda0();
    if ((char)plVar26[2] == '\x01') {
      auStack_358._0_8_ = *plVar26;
      lVar28 = plVar26[1];
    }
    else {
      auStack_358._0_8_ = pdb_140f4fd10();
      *plVar26 = auStack_358._0_8_;
      plVar26[1] = lVar28;
      *(undefined1 *)(plVar26 + 2) = 1;
    }
    *plVar26 = auStack_358._0_8_ + 1;
    auStack_368[1] = uVar88;
    auStack_368[0] = uVar87;
    auStack_368[2] = uVar89;
    auStack_368[3] = uVar90;
    auStack_368[4] = uVar91;
    auStack_368[5] = uVar92;
    auStack_368[6] = uVar93;
    auStack_368[7] = uVar94;
    auStack_368[8] = uVar95;
    auStack_368[9] = uVar96;
    auStack_368[10] = uVar97;
    auStack_368[0xb] = uVar98;
    auStack_368[0xc] = uVar99;
    auStack_368[0xd] = uVar100;
    auStack_368[0xe] = uVar101;
    auStack_368[0xf] = uVar102;
    plStack_378 = plVar25;
    pplStack_370 = pplVar49;
    auStack_358._8_8_ = lVar28;
    plVar26 = (longlong *)pdb_140f3bda0();
    if ((char)plVar26[2] == '\x01') {
      lStack_4b8 = *plVar26;
      lVar28 = plVar26[1];
    }
    else {
      lStack_4b8 = pdb_140f4fd10();
      *plVar26 = lStack_4b8;
      plVar26[1] = lVar28;
      *(undefined1 *)(plVar26 + 2) = 1;
    }
    *plVar26 = lStack_4b8 + 1;
    uStack_4c8 = uVar87;
    uStack_4c7 = uVar88;
    uStack_4c6 = uVar89;
    uStack_4c5 = uVar90;
    uStack_4c4 = uVar91;
    uStack_4c3 = uVar92;
    uStack_4c2 = uVar93;
    uStack_4c1 = uVar94;
    uStack_4c0 = uVar95;
    uStack_4bf = uVar96;
    uStack_4be = uVar97;
    uStack_4bd = uVar98;
    uStack_4bc = uVar99;
    uStack_4bb = uVar100;
    uStack_4ba = uVar101;
    uStack_4b9 = uVar102;
    plStack_4d8 = plVar25;
    pplStack_4d0 = pplVar49;
    puStack_330 = (ulonglong *)*param_3;
    lVar34 = param_3[1];
    uVar29 = *puStack_330;
    uVar46 = 0;
    uVar38 = uVar29 - *(ulonglong *)(lVar34 + 0x18);
    if (uVar29 < *(ulonglong *)(lVar34 + 0x18)) {
      uVar38 = uVar46;
    }
    uVar32 = uVar29 - *(ulonglong *)(lVar34 + 0x38);
    if (uVar29 < *(ulonglong *)(lVar34 + 0x38)) {
      uVar32 = uVar46;
    }
    pplVar49 = (longlong **)(uVar38 * 0xb0 + *(longlong *)(lVar34 + 8));
    uVar29 = *(ulonglong *)(lVar34 + 0x10);
    uVar44 = uVar29 - uVar38;
    if (uVar29 < uVar38) {
      uVar44 = uVar46;
    }
    if (uVar29 < uVar38) {
      pplVar49 = (longlong **)0x8;
    }
    pplVar51 = (longlong **)(uVar32 * 0xb0 + *(longlong *)(lVar34 + 0x28));
    uVar29 = *(ulonglong *)(lVar34 + 0x30) - uVar32;
    if (*(ulonglong *)(lVar34 + 0x30) < uVar32) {
      pplVar51 = (longlong **)0x8;
      uVar29 = uVar46;
    }
    *puStack_330 = (*(longlong *)(lVar34 + 0x40) - uVar29) - uVar44;
    pplStack_338 = pplVar49 + uVar44 * 0x16;
    pplStack_280 = pplVar51 + uVar29 * 0x16;
    uStack_3e0 = *param_10;
    puStack_3a8 = (undefined8 *)*param_9;
    uStack_278 = *param_13;
    uStack_3a0 = *param_15;
    lStack_260 = *param_14;
    lStack_328 = *param_7;
    lStack_258 = *param_11;
    uStack_1a4 = *(undefined4 *)((longlong)param_1 + 0x1c);
    lStack_288 = *param_1;
    puStack_238 = (undefined4 *)param_1[2];
    uStack_398 = *param_8;
    uStack_300 = *param_16;
    lStack_248 = *param_12;
    plStack_268 = param_2 + 0x1e;
    plStack_270 = param_2 + 0x24;
    lStack_3d8 = lStack_328 + 0x188;
    plStack_3d0 = param_2 + 0x2a;
    plStack_3b0 = param_2 + 0x2e;
    lStack_230 = lStack_288 + 0x90;
    plStack_318 = param_2 + 0x10;
    plStack_320 = param_2 + 0xc;
    plStack_310 = param_2 + 0x16;
    plStack_3c0 = param_2 + 0x12;
    plStack_308 = param_2 + 0x1c;
    plStack_3c8 = param_2 + 0x18;
    plStack_390 = param_2 + 0x22;
    plStack_3b8 = param_2 + 6;
    plStack_380 = param_2 + 10;
    plStack_388 = param_2 + 4;
    uStack_240 = 0;
    pplVar42 = pplStack_338;
    puVar53 = puStack_330;
    lStack_4b0 = lVar28;
    plStack_1a0 = param_2;
LAB_1408eb2a0:
    while( true ) {
      pplStack_100 = pplVar49;
      pplVar27 = pplVar51;
      if ((pplStack_100 != (longlong **)0x0) && (pplStack_100 != pplVar42))
      goto code_r0x0001408eb2aa;
      if ((pplVar27 == (longlong **)0x0) || (pplVar27 == pplStack_280)) break;
      pplVar37 = (longlong **)0x0;
      *puVar53 = *puVar53 + 1;
      pplVar1 = pplVar27 + 0x10;
      pplVar51 = pplVar27 + 0x16;
      pplStack_100 = pplVar27;
      pplVar27 = pplVar27 + 0x16;
      pplVar49 = (longlong **)0x0;
      if (*(int *)pplVar1 == 7) goto LAB_1408eb304;
    }
    pauVar52 = *(undefined1 (**) [16])(lStack_288 + 0x90);
    lVar34 = *(longlong *)(lStack_288 + 0xa8);
    auVar60 = *pauVar52;
    pauVar50 = pauVar52 + 1;
    uVar24 = ~(uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
    pplStack_100 = (longlong **)(lStack_288 + 0x80);
    iStack_108 = *(undefined4 *)((longlong)param_6 + 0x1c);
    lVar28 = *param_6;
    pplStack_280 = (longlong **)param_6[2];
    iVar23 = -(uint)(CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87))) ==
                    CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87))));
    iVar10 = -(uint)(CONCAT13(uVar94,CONCAT12(uVar93,CONCAT11(uVar92,uVar91))) ==
                    CONCAT13(uVar94,CONCAT12(uVar93,CONCAT11(uVar92,uVar91))));
    iVar11 = -(uint)(CONCAT13(uVar98,CONCAT12(uVar97,CONCAT11(uVar96,uVar95))) ==
                    CONCAT13(uVar98,CONCAT12(uVar97,CONCAT11(uVar96,uVar95))));
    iVar12 = -(uint)(CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99))) ==
                    CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99))));
    lVar33 = uStack_150;
LAB_1408edfcd:
    plVar26 = plStack_1a0;
    plVar25 = plStack_3b8;
    uStack_150._4_4_ = (undefined4)((ulonglong)lVar33 >> 0x20);
    if (lVar34 != 0) {
      if ((short)uVar24 == 0) {
        do {
          auVar60 = *pauVar50;
          pauVar52 = pauVar52 + -0x40;
          pauVar50 = pauVar50 + 1;
          uVar24 = (ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar60[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar24 == 0);
      }
      iVar6 = 0;
      for (uVar35 = uVar24; (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x80000000) {
        iVar6 = iVar6 + 1;
      }
      uVar24 = uVar24 - 1 & uVar24;
      uVar35 = iVar6 << 6;
      lVar34 = lVar34 + -1;
      if (*(longlong *)(lStack_288 + 0x78) != 0) {
        uStack_150 = lVar33;
        uVar29 = pdb_14148b4d0(pplStack_100,(longlong)pauVar52 + (-0x40 - (ulonglong)uVar35));
        bVar55 = (byte)(uVar29 >> 0x39);
        auVar60 = ZEXT216(CONCAT11(bVar55,bVar55));
        auVar60 = pshuflw(auVar60,auVar60,0);
        pplVar49 = (longlong **)0x0;
        while( true ) {
          uVar29 = uVar29 & *(ulonglong *)(lStack_288 + 0x68);
          pcVar40 = (char *)(*(longlong *)(lStack_288 + 0x60) + uVar29);
          auVar86[0] = -(*pcVar40 == auVar60[0]);
          auVar86[1] = -(pcVar40[1] == auVar60[1]);
          auVar86[2] = -(pcVar40[2] == auVar60[2]);
          auVar86[3] = -(pcVar40[3] == auVar60[3]);
          auVar86[4] = -(pcVar40[4] == auVar60[4]);
          auVar86[5] = -(pcVar40[5] == auVar60[5]);
          auVar86[6] = -(pcVar40[6] == auVar60[6]);
          auVar86[7] = -(pcVar40[7] == auVar60[7]);
          auVar86[8] = -(pcVar40[8] == auVar60[0]);
          auVar86[9] = -(pcVar40[9] == auVar60[1]);
          auVar86[10] = -(pcVar40[10] == auVar60[2]);
          auVar86[0xb] = -(pcVar40[0xb] == auVar60[3]);
          auVar86[0xc] = -(pcVar40[0xc] == auVar60[4]);
          auVar86[0xd] = -(pcVar40[0xd] == auVar60[5]);
          auVar86[0xe] = -(pcVar40[0xe] == auVar60[6]);
          auVar86[0xf] = -(pcVar40[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar86 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar86 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar86 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar86 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar86 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar86 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar86 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar86 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar86 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar86 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar86 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar86 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar86 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar86 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar86 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar86[0xf] >> 7) << 0xf;
          uVar47 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar7 = 0;
            for (uVar8 = uVar47; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            lVar45 = *(longlong *)(lStack_288 + 0x60) +
                     (uVar7 + uVar29 & *(ulonglong *)(lStack_288 + 0x68)) * -0x40;
            pplStack_250 = pplVar49;
            if ((*(int *)((longlong)pauVar52 + (-0x38 - (ulonglong)uVar35)) ==
                 *(int *)(lVar45 + -0x38)) &&
               (lVar33 = uStack_150,
               *(longlong *)((longlong)pauVar52 + (-0x40 - (ulonglong)uVar35)) ==
               *(longlong *)(lVar45 + -0x40))) goto LAB_1408edfcd;
            uVar43 = (ushort)(uVar47 - 1) & (ushort)uVar47;
            uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar43);
          }
          auVar73[0] = -(*pcVar40 == (char)iVar23);
          auVar73[1] = -(pcVar40[1] == (char)((uint)iVar23 >> 8));
          auVar73[2] = -(pcVar40[2] == (char)((uint)iVar23 >> 0x10));
          auVar73[3] = -(pcVar40[3] == (char)((uint)iVar23 >> 0x18));
          auVar73[4] = -(pcVar40[4] == (char)iVar10);
          auVar73[5] = -(pcVar40[5] == (char)((uint)iVar10 >> 8));
          auVar73[6] = -(pcVar40[6] == (char)((uint)iVar10 >> 0x10));
          auVar73[7] = -(pcVar40[7] == (char)((uint)iVar10 >> 0x18));
          auVar73[8] = -(pcVar40[8] == (char)iVar11);
          auVar73[9] = -(pcVar40[9] == (char)((uint)iVar11 >> 8));
          auVar73[10] = -(pcVar40[10] == (char)((uint)iVar11 >> 0x10));
          auVar73[0xb] = -(pcVar40[0xb] == (char)((uint)iVar11 >> 0x18));
          auVar73[0xc] = -(pcVar40[0xc] == (char)iVar12);
          auVar73[0xd] = -(pcVar40[0xd] == (char)((uint)iVar12 >> 8));
          auVar73[0xe] = -(pcVar40[0xe] == (char)((uint)iVar12 >> 0x10));
          auVar73[0xf] = -(pcVar40[0xf] == (char)((uint)iVar12 >> 0x18));
          if ((((((((((((((((SUB161(auVar73 >> 7,0) & 1) != 0 || (SUB161(auVar73 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar73 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar73 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar73 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar73 >> 0x2f,0) & 1) != 0) || (SUB161(auVar73 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar73 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar73 >> 0x47,0) & 1) != 0) || (SUB161(auVar73 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar73 >> 0x57,0) & 1) != 0) || (SUB161(auVar73 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar73 >> 0x67,0) & 1) != 0) || (SUB161(auVar73 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar73 >> 0x77,0) & 1) != 0) || auVar73[0xf] < '\0') break;
          uVar29 = (longlong)pplVar49 + uVar29 + 0x10;
          pplVar49 = pplVar49 + 2;
        }
      }
      uStack_178 = *(longlong **)((longlong)pauVar52 + (-0x30 - (ulonglong)uVar35));
      uStack_170 = *(longlong ***)((longlong)pauVar52 + (-0x28 - (ulonglong)uVar35));
      uVar13 = *(undefined8 *)((longlong)pauVar52 + (-0x20 - (ulonglong)uVar35));
      uVar14 = *(undefined8 *)((longlong)pauVar52 + (-0x18 - (ulonglong)uVar35));
      uVar31 = *(undefined8 *)((longlong)pauVar52 + (-0xc - (ulonglong)uVar35));
      uStack_158 = (undefined4)
                   ((ulonglong)*(undefined8 *)((longlong)pauVar52 + (-0x14 - (ulonglong)uVar35)) >>
                   0x20);
      fStack_154 = (float)uVar31;
      uStack_150._0_4_ = (uint)((ulonglong)uVar31 >> 0x20);
      uStack_168._0_4_ = (float)uVar13;
      uStack_168._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
      uStack_160._0_4_ = (undefined4)uVar14;
      uStack_160._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
      *(int *)pplStack_280 = iStack_108;
      lVar45 = *(longlong *)(lVar28 + 0x30);
      uVar31 = *(undefined8 *)(lVar28 + 0x40);
      if (lVar45 == *(longlong *)(lVar28 + 0x20)) {
        pdb_142d7f080(lVar28 + 0x20);
      }
      lVar33 = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
      lVar4 = *(longlong *)(lVar28 + 0x28);
      lVar36 = lVar45 * 0x38;
      *(undefined8 *)(lVar4 + lVar36) = uVar31;
      puVar3 = (undefined8 *)(lVar4 + 0x24 + lVar36);
      *puVar3 = CONCAT44(uStack_158,uStack_160._4_4_);
      puVar3[1] = CONCAT44((uint)uStack_150,fStack_154);
      plVar25 = (longlong *)(lVar4 + 0x18 + lVar36);
      *plVar25 = (longlong)uStack_168;
      plVar25[1] = uStack_160;
      plVar25 = (longlong *)(lVar4 + 8 + lVar36);
      *plVar25 = (longlong)uStack_178;
      plVar25[1] = (longlong)uStack_170;
      *(longlong *)(lVar28 + 0x30) = lVar45 + 1;
      *(longlong *)(lVar28 + 0x40) = *(longlong *)(lVar28 + 0x40) + 1;
      goto LAB_1408edfcd;
    }
    uStack_168._0_4_ =
         (float)CONCAT13(uStack_405,CONCAT12(uStack_406,CONCAT11(uStack_407,uStack_408)));
    uStack_160._0_4_ = CONCAT13(uStack_3fd,CONCAT12(uStack_3fe,CONCAT11(uStack_3ff,uStack_400)));
    uStack_158 = (undefined4)lStack_3f8;
    fStack_154 = (float)((ulonglong)lStack_3f8 >> 0x20);
    uStack_150._0_4_ = (uint)lStack_3f0;
    uStack_150._4_4_ = (undefined4)((ulonglong)lStack_3f0 >> 0x20);
    uStack_168._4_4_ =
         (undefined4)
         (CONCAT17(uStack_401,
                   CONCAT16(uStack_402,CONCAT15(uStack_403,CONCAT14(uStack_404,(float)uStack_168))))
         >> 0x20);
    uStack_160._4_4_ =
         (undefined4)
         (CONCAT17(uStack_3f9,
                   CONCAT16(uStack_3fa,
                            CONCAT15(uStack_3fb,CONCAT14(uStack_3fc,(undefined4)uStack_160)))) >>
         0x20);
    uStack_178 = plStack_418;
    uStack_170 = pplStack_410;
    lVar34 = plStack_1a0[7];
    if (lVar34 != 0) {
      uVar29 = lVar34 * 8 + 0x17U & 0xfffffffffffffff0;
      uVar38 = lVar34 + uVar29 + 0x11;
      if (uVar38 != 0) {
        pub_1406abac0((byte *)(*plStack_3b8 - uVar29),uVar38,0x10);
      }
    }
    plVar18 = plStack_3c0;
    plVar17 = plStack_3c8;
    plVar16 = plStack_3d0;
    plVar25[4] = CONCAT44(fStack_154,uStack_158);
    plVar25[5] = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
    plVar25[2] = CONCAT44(uStack_168._4_4_,(float)uStack_168);
    plVar25[3] = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    *plVar25 = (longlong)uStack_178;
    plVar25[1] = (longlong)uStack_170;
    uStack_168._0_4_ =
         (float)CONCAT13(uStack_4f5,CONCAT12(uStack_4f6,CONCAT11(uStack_4f7,uStack_4f8)));
    uStack_160._0_4_ = CONCAT13(uStack_4ed,CONCAT12(uStack_4ee,CONCAT11(uStack_4ef,uStack_4f0)));
    uStack_158 = (undefined4)lStack_4e8;
    fStack_154 = (float)((ulonglong)lStack_4e8 >> 0x20);
    uStack_150._0_4_ = (uint)lStack_4e0;
    uStack_150._4_4_ = (undefined4)((ulonglong)lStack_4e0 >> 0x20);
    uStack_168._4_4_ =
         (undefined4)
         (CONCAT17(uStack_4f1,
                   CONCAT16(uStack_4f2,CONCAT15(uStack_4f3,CONCAT14(uStack_4f4,(float)uStack_168))))
         >> 0x20);
    uStack_160._4_4_ =
         (undefined4)
         (CONCAT17(uStack_4e9,
                   CONCAT16(uStack_4ea,
                            CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,(undefined4)uStack_160)))) >>
         0x20);
    uStack_178 = plStack_508;
    uStack_170 = pplStack_500;
    lVar34 = plVar26[1];
    if (lVar34 != 0) {
      uVar29 = lVar34 * 8 + 0x17U & 0xfffffffffffffff0;
      uVar38 = lVar34 + uVar29 + 0x11;
      if (uVar38 != 0) {
        pub_1406abac0((byte *)(*plVar26 - uVar29),uVar38,0x10);
      }
    }
    plVar26[4] = CONCAT44(fStack_154,uStack_158);
    plVar26[5] = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
    plVar26[2] = CONCAT44(uStack_168._4_4_,(float)uStack_168);
    plVar26[3] = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    *plVar26 = (longlong)uStack_178;
    plVar26[1] = (longlong)uStack_170;
    uStack_168._0_4_ =
         (float)CONCAT13(uStack_435,CONCAT12(uStack_436,CONCAT11(uStack_437,uStack_438)));
    uStack_160._0_4_ = CONCAT13(uStack_42d,CONCAT12(uStack_42e,CONCAT11(uStack_42f,uStack_430)));
    uStack_158 = (undefined4)lStack_428;
    fStack_154 = (float)((ulonglong)lStack_428 >> 0x20);
    uStack_150._0_4_ = (uint)lStack_420;
    uStack_150._4_4_ = (undefined4)((ulonglong)lStack_420 >> 0x20);
    uStack_168._4_4_ =
         (undefined4)
         (CONCAT17(uStack_431,
                   CONCAT16(uStack_432,CONCAT15(uStack_433,CONCAT14(uStack_434,(float)uStack_168))))
         >> 0x20);
    uStack_160._4_4_ =
         (undefined4)
         (CONCAT17(uStack_429,
                   CONCAT16(uStack_42a,
                            CONCAT15(uStack_42b,CONCAT14(uStack_42c,(undefined4)uStack_160)))) >>
         0x20);
    uStack_178 = plStack_448;
    uStack_170 = pplStack_440;
    lVar34 = plVar26[0xd];
    if (lVar34 != 0) {
      uVar29 = lVar34 * 8 + 0x17U & 0xfffffffffffffff0;
      uVar38 = lVar34 + uVar29 + 0x11;
      if (uVar38 != 0) {
        pub_1406abac0((byte *)(*plStack_320 - uVar29),uVar38,0x10);
      }
    }
    plStack_320[4] = CONCAT44(fStack_154,uStack_158);
    plStack_320[5] = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
    plStack_320[2] = CONCAT44(uStack_168._4_4_,(float)uStack_168);
    plStack_320[3] = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    *plStack_320 = (longlong)uStack_178;
    plStack_320[1] = (longlong)uStack_170;
    uStack_168._0_4_ =
         (float)CONCAT13(uStack_465,CONCAT12(uStack_466,CONCAT11(uStack_467,uStack_468)));
    uStack_160._0_4_ = CONCAT13(uStack_45d,CONCAT12(uStack_45e,CONCAT11(uStack_45f,uStack_460)));
    uStack_158 = (undefined4)lStack_458;
    fStack_154 = (float)((ulonglong)lStack_458 >> 0x20);
    uStack_150._0_4_ = (uint)lStack_450;
    uStack_150._4_4_ = (undefined4)((ulonglong)lStack_450 >> 0x20);
    uStack_168._4_4_ =
         (undefined4)
         (CONCAT17(uStack_461,
                   CONCAT16(uStack_462,CONCAT15(uStack_463,CONCAT14(uStack_464,(float)uStack_168))))
         >> 0x20);
    uStack_160._4_4_ =
         (undefined4)
         (CONCAT17(uStack_459,
                   CONCAT16(uStack_45a,
                            CONCAT15(uStack_45b,CONCAT14(uStack_45c,(undefined4)uStack_160)))) >>
         0x20);
    uStack_178 = plStack_478;
    uStack_170 = pplStack_470;
    lVar34 = plVar26[0x13];
    if (lVar34 != 0) {
      uVar29 = lVar34 * 8 + 0x17U & 0xfffffffffffffff0;
      uVar38 = lVar34 + uVar29 + 0x11;
      if (uVar38 != 0) {
        pub_1406abac0((byte *)(*plVar18 - uVar29),uVar38,0x10);
      }
    }
    plVar18[4] = CONCAT44(fStack_154,uStack_158);
    plVar18[5] = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
    plVar18[2] = CONCAT44(uStack_168._4_4_,(float)uStack_168);
    plVar18[3] = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    *plVar18 = (longlong)uStack_178;
    plVar18[1] = (longlong)uStack_170;
    uStack_168._0_4_ =
         (float)CONCAT13(uStack_495,CONCAT12(uStack_496,CONCAT11(uStack_497,uStack_498)));
    uStack_160._0_4_ = CONCAT13(uStack_48d,CONCAT12(uStack_48e,CONCAT11(uStack_48f,uStack_490)));
    uStack_158 = (undefined4)lStack_488;
    fStack_154 = (float)((ulonglong)lStack_488 >> 0x20);
    uStack_150._0_4_ = (uint)lStack_480;
    uStack_150._4_4_ = (undefined4)((ulonglong)lStack_480 >> 0x20);
    uStack_168._4_4_ =
         (undefined4)
         (CONCAT17(uStack_491,
                   CONCAT16(uStack_492,CONCAT15(uStack_493,CONCAT14(uStack_494,(float)uStack_168))))
         >> 0x20);
    uStack_160._4_4_ =
         (undefined4)
         (CONCAT17(uStack_489,
                   CONCAT16(uStack_48a,
                            CONCAT15(uStack_48b,CONCAT14(uStack_48c,(undefined4)uStack_160)))) >>
         0x20);
    uStack_178 = plStack_4a8;
    uStack_170 = pplStack_4a0;
    lVar34 = plVar26[0x19];
    if (lVar34 != 0) {
      uVar29 = lVar34 * 8 + 0x17U & 0xfffffffffffffff0;
      uVar38 = lVar34 + uVar29 + 0x11;
      if (uVar38 != 0) {
        pub_1406abac0((byte *)(*plVar17 - uVar29),uVar38,0x10);
      }
    }
    plVar17[4] = CONCAT44(fStack_154,uStack_158);
    plVar17[5] = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
    plVar17[2] = CONCAT44(uStack_168._4_4_,(float)uStack_168);
    plVar17[3] = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    *plVar17 = (longlong)uStack_178;
    plVar17[1] = (longlong)uStack_170;
    uStack_168._0_4_ =
         (float)CONCAT13(uStack_4c5,CONCAT12(uStack_4c6,CONCAT11(uStack_4c7,uStack_4c8)));
    uStack_160._0_4_ = CONCAT13(uStack_4bd,CONCAT12(uStack_4be,CONCAT11(uStack_4bf,uStack_4c0)));
    uStack_158 = (undefined4)lStack_4b8;
    fStack_154 = (float)((ulonglong)lStack_4b8 >> 0x20);
    uStack_150._0_4_ = (uint)lStack_4b0;
    uStack_150._4_4_ = (undefined4)((ulonglong)lStack_4b0 >> 0x20);
    uStack_168._4_4_ =
         (undefined4)
         (CONCAT17(uStack_4c1,
                   CONCAT16(uStack_4c2,CONCAT15(uStack_4c3,CONCAT14(uStack_4c4,(float)uStack_168))))
         >> 0x20);
    uStack_160._4_4_ =
         (undefined4)
         (CONCAT17(uStack_4b9,
                   CONCAT16(uStack_4ba,
                            CONCAT15(uStack_4bb,CONCAT14(uStack_4bc,(undefined4)uStack_160)))) >>
         0x20);
    uStack_178 = plStack_4d8;
    uStack_170 = pplStack_4d0;
    lVar34 = plVar26[0x2b];
    if (lVar34 != 0) {
      uVar29 = lVar34 * 8 + 0x17U & 0xfffffffffffffff0;
      uVar38 = lVar34 + uVar29 + 0x11;
      if (uVar38 != 0) {
        pub_1406abac0((byte *)(*plVar16 - uVar29),uVar38,0x10);
      }
    }
    plVar16[4] = CONCAT44(fStack_154,uStack_158);
    plVar16[5] = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
    plVar16[2] = CONCAT44(uStack_168._4_4_,(float)uStack_168);
    plVar16[3] = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    *plVar16 = (longlong)uStack_178;
    plVar16[1] = (longlong)uStack_170;
    if ((uStack_240 & 1) == 0) {
      if (pplStack_370 != (longlong **)0x0) {
        uVar29 = (longlong)pplStack_370 * 0x11 + 0x21;
        if (uVar29 != 0) {
          pub_1406abac0((byte *)((longlong)plStack_378 - ((longlong)pplStack_370 * 0x10 + 0x10)),
                        uVar29,0x10);
        }
      }
      if (pplStack_2f0 != (longlong **)0x0) {
        uVar29 = (longlong)pplStack_2f0 * 8 + 0x17U & 0xfffffffffffffff0;
        uVar38 = (longlong)pplStack_2f0 + uVar29 + 0x11;
        if (uVar38 != 0) {
          pub_1406abac0((byte *)((longlong)plStack_2f8 - uVar29),uVar38,0x10);
        }
      }
    }
    else {
      uStack_158 = (undefined4)lStack_2d8;
      fStack_154 = (float)((ulonglong)lStack_2d8 >> 0x20);
      uStack_150._0_4_ = (uint)lStack_2d0;
      uStack_150._4_4_ = (undefined4)((ulonglong)lStack_2d0 >> 0x20);
      uStack_168._0_4_ = (float)uStack_2e8;
      uStack_168._4_4_ = (undefined4)((ulonglong)uStack_2e8 >> 0x20);
      uStack_160._0_4_ = (undefined4)uStack_2e0;
      uStack_160._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
      uStack_178 = plStack_2f8;
      uStack_170 = pplStack_2f0;
      lVar34 = plVar26[0x1f];
      if (lVar34 != 0) {
        uVar29 = lVar34 * 8 + 0x17U & 0xfffffffffffffff0;
        uVar38 = lVar34 + uVar29 + 0x11;
        if (uVar38 != 0) {
          pub_1406abac0((byte *)(*plStack_268 - uVar29),uVar38,0x10);
        }
      }
      plStack_268[4] = CONCAT44(fStack_154,uStack_158);
      plStack_268[5] = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
      plStack_268[2] = CONCAT44(uStack_168._4_4_,(float)uStack_168);
      plStack_268[3] = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
      *plStack_268 = (longlong)uStack_178;
      plStack_268[1] = (longlong)uStack_170;
      uStack_158 = auStack_358._0_4_;
      fStack_154 = auStack_358._4_4_;
      uStack_150._0_4_ = auStack_358._8_4_;
      uStack_150._4_4_ = auStack_358._12_4_;
      uStack_168._0_4_ = auStack_368._0_4_;
      uStack_168._4_4_ = auStack_368._4_4_;
      uStack_160._0_4_ = auStack_368._8_4_;
      uStack_160._4_4_ = auStack_368._12_4_;
      uStack_178 = plStack_378;
      uStack_170 = pplStack_370;
      lVar34 = plVar26[0x25];
      if (lVar34 != 0) {
        lVar28 = lVar34 * 0x10 + 0x10;
        uVar29 = lVar34 + lVar28 + 0x11;
        if (uVar29 != 0) {
          pub_1406abac0((byte *)(*plStack_270 - lVar28),uVar29,0x10);
        }
      }
      plStack_270[4] = CONCAT44(fStack_154,uStack_158);
      plStack_270[5] = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
      plStack_270[2] = CONCAT44(uStack_168._4_4_,(float)uStack_168);
      plStack_270[3] = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
      *plStack_270 = (longlong)uStack_178;
      plStack_270[1] = (longlong)uStack_170;
    }
  }
  else {
    *puVar53 = uVar46;
  }
  return;
code_r0x0001408eb2aa:
  pplVar37 = pplStack_100 + 0x16;
  *puVar53 = *puVar53 + 1;
  pplVar51 = pplVar27;
  pplVar49 = pplVar37;
  if (*(int *)(pplStack_100 + 0x10) != 7) goto LAB_1408eb2a0;
LAB_1408eb304:
  pplVar51 = pplVar27;
  pplVar49 = pplVar37;
  if (*(char *)((longlong)pplStack_100 + 0x9c) == '\x02') goto LAB_1408eb2a0;
  lVar34 = 0;
  if ((longlong *)0x1 < *pplStack_100) {
    lVar34 = (longlong)*pplStack_100 - 2;
  }
  pplStack_340 = pplVar27;
  pplStack_250 = pplVar37;
  if (lVar34 == 2) {
    pplVar27 = pplStack_100 + 3;
  }
  else {
    pdb_1409016e0();
    pplVar27 = (longlong **)pdb_140c40010(uStack_3e0);
    pplVar51 = pplStack_340;
    pplVar42 = pplStack_338;
    pplVar49 = pplStack_250;
    puVar53 = puStack_330;
    if (pplVar27 == (longlong **)0x0) goto LAB_1408eb2a0;
  }
  pplStack_f8 = pplVar27 + 7;
  lVar28 = pdb_140901490(pplStack_f8,&UNK_14301c368);
  pplVar49 = pplStack_100;
  puVar3 = puStack_3a8;
  bStack_101 = *(byte *)(lVar28 + 0x16);
  uStack_1b0 = (ulonglong)bStack_101;
  if ((uStack_240 & 1) == 0) {
    pauStack_1d8 = (undefined1 (*) [16])*puStack_3a8;
    puStack_1c8 = *pauStack_1d8 + puStack_3a8[1] + 1;
    auVar60 = *pauStack_1d8;
    uStack_1c0 = ~((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
    uStack_1b8 = puStack_3a8[3];
    plStack_218 = (longlong *)0x0;
    uStack_1f8 = 0;
    pauStack_1d0 = pauStack_1d8 + 1;
    uStack_102 = 1;
    plVar25 = (longlong *)pdb_14008d710(0);
    if (plVar25 == (longlong *)0x0) {
      uStack_102 = 1;
      pdb_142dc7890(&UNK_14330e598);
    }
    else {
      pplStack_2a8 = (longlong **)*plVar25;
      lStack_2a0 = plVar25[1];
      *plVar25 = *plVar25 + 1;
      uVar102 = UNK_143317eff;
      uVar101 = UNK_143317efe;
      uVar100 = UNK_143317efd;
      uVar99 = UNK_143317efc;
      uVar98 = UNK_143317efb;
      uVar97 = UNK_143317efa;
      uVar96 = UNK_143317ef9;
      uVar95 = UNK_143317ef8;
      uVar94 = UNK_143317ef7;
      uVar93 = UNK_143317ef6;
      uVar92 = UNK_143317ef5;
      uVar91 = UNK_143317ef4;
      uVar90 = UNK_143317ef3;
      uVar89 = UNK_143317ef2;
      uVar88 = UNK_143317ef1;
      uVar87 = DAT_143317ef0;
      pplVar51 = _UNK_143317ee8;
      plVar25 = _DAT_143317ee0;
      uStack_2b8._0_2_ = CONCAT11(UNK_143317ef1,DAT_143317ef0);
      uStack_2b8._0_3_ = CONCAT12(UNK_143317ef2,(undefined2)uStack_2b8);
      uStack_2b8._0_4_ = CONCAT13(UNK_143317ef3,(undefined3)uStack_2b8);
      uStack_2b8._0_5_ = CONCAT14(UNK_143317ef4,(undefined4)uStack_2b8);
      uStack_2b8._0_6_ = CONCAT15(UNK_143317ef5,(undefined5)uStack_2b8);
      uStack_2b8._0_7_ = CONCAT16(UNK_143317ef6,(undefined6)uStack_2b8);
      uStack_2b8 = (longlong **)CONCAT17(UNK_143317ef7,(undefined7)uStack_2b8);
      uStack_2b0._0_2_ = CONCAT11(UNK_143317ef9,UNK_143317ef8);
      uStack_2b0._0_3_ = CONCAT12(UNK_143317efa,(undefined2)uStack_2b0);
      uStack_2b0._0_4_ = CONCAT13(UNK_143317efb,(undefined3)uStack_2b0);
      uStack_2b0._0_5_ = CONCAT14(UNK_143317efc,(undefined4)uStack_2b0);
      uStack_2b0._0_6_ = CONCAT15(UNK_143317efd,(undefined5)uStack_2b0);
      uStack_2b0._0_7_ = CONCAT16(UNK_143317efe,(undefined6)uStack_2b0);
      uStack_2b0 = (longlong *)CONCAT17(UNK_143317eff,(undefined7)uStack_2b0);
      plStack_2c8 = _DAT_143317ee0;
      pplStack_2c0 = _UNK_143317ee8;
      uStack_118 = uStack_1b8;
      uStack_120 = CONCAT62(uStack_1be,uStack_1c0);
      puStack_128 = puStack_1c8;
      pauStack_138 = pauStack_1d8;
      pauStack_130 = pauStack_1d0;
      uStack_148 = uStack_1e8;
      uStack_144 = uStack_1e4;
      uStack_140 = uStack_1e0;
      uStack_13c = uStack_1dc;
      uStack_158 = (undefined4)uStack_1f8;
      fStack_154 = (float)((ulonglong)uStack_1f8 >> 0x20);
      uStack_150._0_4_ = (uint)uStack_1f0;
      uStack_150._4_4_ = (undefined4)((ulonglong)uStack_1f0 >> 0x20);
      uStack_168._0_4_ = (float)uStack_208;
      uStack_168._4_4_ = (undefined4)((ulonglong)uStack_208 >> 0x20);
      uStack_160._0_4_ = (undefined4)uStack_200;
      uStack_160._4_4_ = (undefined4)((ulonglong)uStack_200 >> 0x20);
      uStack_178 = plStack_218;
      uStack_170 = (longlong **)lStack_210;
      pdb_1414b0140(&plStack_2c8,&uStack_178);
      uStack_178 = plStack_2c8;
      uStack_170 = pplStack_2c0;
      uStack_168._0_4_ = SUB84(uStack_2b8,0);
      uStack_168._4_4_ = (undefined4)((ulonglong)uStack_2b8 >> 0x20);
      uStack_160._0_4_ = SUB84(uStack_2b0,0);
      uStack_160._4_4_ = (undefined4)((ulonglong)uStack_2b0 >> 0x20);
      uStack_158 = SUB84(pplStack_2a8,0);
      fStack_154 = (float)((ulonglong)pplStack_2a8 >> 0x20);
      uStack_150._0_4_ = (uint)lStack_2a0;
      uStack_150._4_4_ = (undefined4)((ulonglong)lStack_2a0 >> 0x20);
      if (pplStack_2f0 != (longlong **)0x0) {
        uVar29 = (longlong)pplStack_2f0 * 8 + 0x17U & 0xfffffffffffffff0;
        uVar38 = (longlong)pplStack_2f0 + uVar29 + 0x11;
        if (uVar38 != 0) {
          pub_1406abac0((byte *)((longlong)plStack_2f8 - uVar29),uVar38,0x10);
        }
      }
      uStack_2e8 = CONCAT44(uStack_168._4_4_,(float)uStack_168);
      uStack_2e0 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
      lStack_2d8 = CONCAT44(fStack_154,uStack_158);
      lStack_2d0 = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
      plStack_2f8 = uStack_178;
      pplStack_2f0 = uStack_170;
      pauStack_1d8 = (undefined1 (*) [16])*puVar3;
      puStack_1c8 = *pauStack_1d8 + puVar3[1] + 1;
      auVar60 = *pauStack_1d8;
      uStack_1c0 = ~((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
      uStack_1b8 = puVar3[3];
      plStack_218 = (longlong *)0x0;
      uStack_1f8 = 0;
      pauStack_1d0 = pauStack_1d8 + 1;
      uStack_103 = 1;
      plVar26 = (longlong *)pdb_14008d710(0);
      if (plVar26 != (longlong *)0x0) {
        pplStack_2a8 = (longlong **)*plVar26;
        lStack_2a0 = plVar26[1];
        *plVar26 = *plVar26 + 1;
        uStack_2b8._0_2_ = CONCAT11(uVar88,uVar87);
        uStack_2b8._0_3_ = CONCAT12(uVar89,(undefined2)uStack_2b8);
        uStack_2b8._0_4_ = CONCAT13(uVar90,(undefined3)uStack_2b8);
        uStack_2b8._0_5_ = CONCAT14(uVar91,(undefined4)uStack_2b8);
        uStack_2b8._0_6_ = CONCAT15(uVar92,(undefined5)uStack_2b8);
        uStack_2b8._0_7_ = CONCAT16(uVar93,(undefined6)uStack_2b8);
        uStack_2b8 = (longlong **)CONCAT17(uVar94,(undefined7)uStack_2b8);
        uStack_2b0._0_2_ = CONCAT11(uVar96,uVar95);
        uStack_2b0._0_3_ = CONCAT12(uVar97,(undefined2)uStack_2b0);
        uStack_2b0._0_4_ = CONCAT13(uVar98,(undefined3)uStack_2b0);
        uStack_2b0._0_5_ = CONCAT14(uVar99,(undefined4)uStack_2b0);
        uStack_2b0._0_6_ = CONCAT15(uVar100,(undefined5)uStack_2b0);
        uStack_2b0._0_7_ = CONCAT16(uVar101,(undefined6)uStack_2b0);
        uStack_2b0 = (longlong *)CONCAT17(uVar102,(undefined7)uStack_2b0);
        plStack_2c8 = plVar25;
        pplStack_2c0 = pplVar51;
        uStack_118 = uStack_1b8;
        uStack_120 = CONCAT62(uStack_1be,uStack_1c0);
        puStack_128 = puStack_1c8;
        pauStack_138 = pauStack_1d8;
        pauStack_130 = pauStack_1d0;
        uStack_148 = uStack_1e8;
        uStack_144 = uStack_1e4;
        uStack_140 = uStack_1e0;
        uStack_13c = uStack_1dc;
        uStack_158 = (undefined4)uStack_1f8;
        fStack_154 = (float)((ulonglong)uStack_1f8 >> 0x20);
        uStack_150._0_4_ = (uint)uStack_1f0;
        uStack_150._4_4_ = (undefined4)((ulonglong)uStack_1f0 >> 0x20);
        uStack_168._0_4_ = (float)uStack_208;
        uStack_168._4_4_ = (undefined4)((ulonglong)uStack_208 >> 0x20);
        uStack_160._0_4_ = (undefined4)uStack_200;
        uStack_160._4_4_ = (undefined4)((ulonglong)uStack_200 >> 0x20);
        uStack_178 = plStack_218;
        uStack_170 = (longlong **)lStack_210;
        pdb_1414afde0(&plStack_2c8,&uStack_178);
        uStack_178 = plStack_2c8;
        uStack_170 = pplStack_2c0;
        uStack_168._0_4_ = SUB84(uStack_2b8,0);
        uStack_168._4_4_ = (undefined4)((ulonglong)uStack_2b8 >> 0x20);
        uStack_160._0_4_ = SUB84(uStack_2b0,0);
        uStack_160._4_4_ = (undefined4)((ulonglong)uStack_2b0 >> 0x20);
        uStack_158 = SUB84(pplStack_2a8,0);
        fStack_154 = (float)((ulonglong)pplStack_2a8 >> 0x20);
        uStack_150._0_4_ = (uint)lStack_2a0;
        uStack_150._4_4_ = (undefined4)((ulonglong)lStack_2a0 >> 0x20);
        if (pplStack_370 != (longlong **)0x0) {
          uVar29 = (longlong)pplStack_370 * 0x11 + 0x21;
          if (uVar29 != 0) {
            pub_1406abac0((byte *)((longlong)plStack_378 - ((longlong)pplStack_370 * 0x10 + 0x10)),
                          uVar29,0x10);
          }
        }
        auStack_368._8_4_ = (undefined4)uStack_160;
        auStack_368._0_8_ = uStack_168;
        auStack_368._12_4_ = uStack_160._4_4_;
        auStack_358._4_4_ = fStack_154;
        auStack_358._0_4_ = uStack_158;
        auStack_358._8_4_ = (uint)uStack_150;
        auStack_358._12_4_ = uStack_150._4_4_;
        plStack_378 = uStack_178;
        pplStack_370 = uStack_170;
        goto LAB_1408eb6f8;
      }
      uStack_103 = 1;
      pdb_142dc7890(&UNK_14330e598);
    }
LAB_1408ee7a2:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
LAB_1408eb6f8:
  uVar21 = pdb_1409016e0(pplVar49);
  pdb_140c45b00(&uStack_178,uStack_278,uVar21);
  fVar103 = fStack_154;
  uVar106 = (undefined4)((ulonglong)in_stack_fffffffffffffa68 >> 0x20);
  uVar21 = (uint)uStack_150;
  iStack_108 = 0;
  uVar22 = 0;
  if (((ulonglong)uStack_178 & 1) != 0) {
    uVar87 = SUB41(fStack_154,0);
    uVar88 = (undefined1)((uint)fStack_154 >> 8);
    uVar89 = (undefined1)((uint)fStack_154 >> 0x10);
    uVar90 = (undefined1)((uint)fStack_154 >> 0x18);
    uVar91 = 0;
    uVar92 = 0;
    uVar93 = 0;
    uVar94 = 0;
    uVar95 = 0;
    uVar96 = 0;
    uVar97 = 0;
    uVar98 = 0;
    uVar99 = 0;
    uVar100 = 0;
    uVar101 = 0;
    uVar102 = 0;
    lVar28 = pdb_1406d0830(uStack_3a0);
    puVar53 = (ulonglong *)(lVar28 + 0x20);
    plVar25 = (longlong *)(lVar28 + 0x28);
    if (*(char *)(lVar28 + 0x298) == '\0') {
      plVar25 = (longlong *)(lVar28 + 0x10);
      puVar53 = (ulonglong *)(lVar28 + 8);
    }
    lStack_210 = *plVar25;
    plStack_218 = (longlong *)*puVar53;
    in_stack_fffffffffffffa68 = (undefined8 *)CONCAT44(uVar106,0x43020000);
    fVar56 = (float)pdb_140a7d8d0(&plStack_218,puVar53,uVar21,(longlong *)(lVar28 + 0x10),
                                  in_stack_fffffffffffffa68);
    if (fVar56 <= _DAT_142e3b1d8) {
      uVar22 = 0;
    }
    else {
      pfVar30 = (float *)pdb_1409014e0(pplStack_f8);
      if (pfVar30 == (float *)0x0) {
        fVar56 = 0.0;
      }
      else {
        fVar56 = *pfVar30;
      }
      plStack_218 = *(longlong **)(lStack_260 + 8);
      lStack_210 = *(longlong *)(lStack_260 + 0x10) * 2;
      uStack_208 = *(undefined8 *)(lStack_260 + 0x50);
      uVar31 = pdb_1402202d0(&plStack_218,lStack_260,uVar21);
      fVar103 = (fVar103 - fVar56) - extraout_XMM0_Da;
      uVar87 = SUB41(fVar103,0);
      uVar88 = (undefined1)((uint)fVar103 >> 8);
      uVar89 = (undefined1)((uint)fVar103 >> 0x10);
      uVar90 = (undefined1)((uint)fVar103 >> 0x18);
      uVar22 = (undefined4)CONCAT71((int7)((ulonglong)uVar31 >> 8),fVar103 < _DAT_142e3787c);
    }
  }
  pplStack_180 = pplStack_100 + 0x12;
  uStack_240 = *(longlong *)(lStack_328 + 0x10) * 0x150 + *(ulonglong *)(lStack_328 + 8);
  fVar103 = 0.0;
  fStack_18c = 0.0;
  fStack_190 = 0.0;
  fVar104 = 0.0;
  fStack_198 = 0.0;
  iStack_188 = 0;
  fStack_220 = 0.0;
  fStack_224 = 0.0;
  fVar105 = 0.0;
  fVar56 = 0.0;
  iStack_21c = 0;
  fStack_184 = 0.0;
  uVar29 = *(ulonglong *)(lStack_328 + 8);
  uStack_194 = uVar22;
  lVar28 = uStack_150;
LAB_1408eb8d0:
  uVar38 = uVar29;
  uStack_150 = lVar28;
  if (uVar38 != uStack_240) {
    iVar23 = pdb_1409016e0(pplStack_100);
    uVar29 = uVar38 + 0x150;
    if (*(int *)(uVar38 + 0x128) != iVar23) goto code_r0x0001408eb8fd;
    goto LAB_1408eb913;
  }
  bVar54 = iStack_188 == 0;
  fVar57 = fVar104 + _DAT_142e3787c;
  if (!bVar54) {
    fVar57 = fVar104;
  }
  uVar21 = pdb_1409016e0(pplStack_100);
  pdb_1414b61f0(&plStack_448,uVar21);
  uVar21 = pdb_1409016e0(pplStack_100);
  pdb_1414b61f0(&plStack_478,uVar21);
  uVar21 = pdb_1409016e0(pplStack_100);
  pdb_1414b61f0(&plStack_4a8,uVar21);
  pdb_1409016e0(pplStack_100);
  pdb_1414b61f0(&plStack_4d8);
  iVar23 = pdb_1409016e0(pplStack_100);
  plVar25 = plStack_1a0;
  uStack_178 = (longlong *)CONCAT44(uStack_178._4_4_,iVar23);
  fVar104 = 0.0;
  if (plStack_1a0[0x2d] != 0) {
    uVar38 = pdb_1400aede0(plStack_3b0,&uStack_178);
    lVar28 = plVar25[0x2a];
    uVar29 = plVar25[0x2b];
    bVar55 = (byte)(uVar38 >> 0x39);
    auVar60 = ZEXT216(CONCAT11(bVar55,bVar55));
    auVar60 = pshuflw(auVar60,auVar60,0);
    lVar33 = 0;
    while( true ) {
      uVar38 = uVar38 & uVar29;
      auVar77 = *(undefined1 (*) [16])(lVar28 + uVar38);
      auVar75[0] = -(auVar77[0] == auVar60[0]);
      auVar75[1] = -(auVar77[1] == auVar60[1]);
      auVar75[2] = -(auVar77[2] == auVar60[2]);
      auVar75[3] = -(auVar77[3] == auVar60[3]);
      auVar75[4] = -(auVar77[4] == auVar60[4]);
      auVar75[5] = -(auVar77[5] == auVar60[5]);
      auVar75[6] = -(auVar77[6] == auVar60[6]);
      auVar75[7] = -(auVar77[7] == auVar60[7]);
      auVar75[8] = -(auVar77[8] == auVar60[0]);
      auVar75[9] = -(auVar77[9] == auVar60[1]);
      auVar75[10] = -(auVar77[10] == auVar60[2]);
      auVar75[0xb] = -(auVar77[0xb] == auVar60[3]);
      auVar75[0xc] = -(auVar77[0xc] == auVar60[4]);
      auVar75[0xd] = -(auVar77[0xd] == auVar60[5]);
      auVar75[0xe] = -(auVar77[0xe] == auVar60[6]);
      auVar75[0xf] = -(auVar77[0xf] == auVar60[7]);
      uVar43 = (ushort)(SUB161(auVar75 >> 7,0) & 1) | (ushort)(SUB161(auVar75 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar75 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar75 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar75 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar75 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar75 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar75 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar75 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar75 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar75 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar75 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar75 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar75 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar75 >> 0x77,0) & 1) << 0xe | (ushort)(auVar75[0xf] >> 7) << 0xf;
      uVar24 = (uint)uVar43;
      while (uVar43 != 0) {
        uVar35 = 0;
        for (uVar47 = uVar24; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
          uVar35 = uVar35 + 1;
        }
        uVar46 = uVar35 + uVar38 & uVar29;
        if (iVar23 == *(int *)(lVar28 + uVar46 * -8 + -8)) {
          fVar104 = (float)((uint)(fVar56 - *(float *)(lVar28 + -4 + uVar46 * -8)) & _DAT_142e377e0)
                    / *(float *)(lStack_258 + 0x58);
          goto LAB_1408ebee6;
        }
        uVar43 = (ushort)(uVar24 - 1) & (ushort)uVar24;
        uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar43);
      }
      auVar62[0] = -(auVar77[0] == -1);
      auVar62[1] = -(auVar77[1] == -1);
      auVar62[2] = -(auVar77[2] == -1);
      auVar62[3] = -(auVar77[3] == -1);
      auVar62[4] = -(auVar77[4] == -1);
      auVar62[5] = -(auVar77[5] == -1);
      auVar62[6] = -(auVar77[6] == -1);
      auVar62[7] = -(auVar77[7] == -1);
      auVar62[8] = -(auVar77[8] == -1);
      auVar62[9] = -(auVar77[9] == -1);
      auVar62[10] = -(auVar77[10] == -1);
      auVar62[0xb] = -(auVar77[0xb] == -1);
      auVar62[0xc] = -(auVar77[0xc] == -1);
      auVar62[0xd] = -(auVar77[0xd] == -1);
      auVar62[0xe] = -(auVar77[0xe] == -1);
      auVar62[0xf] = -(auVar77[0xf] == -1);
      if ((((((((((((((((SUB161(auVar62 >> 7,0) & 1) != 0 || (SUB161(auVar62 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar62 >> 0x17,0) & 1) != 0) || (SUB161(auVar62 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar62 >> 0x27,0) & 1) != 0) || (SUB161(auVar62 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar62 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar62 >> 0x3f,0) & 1) != 0) || (SUB161(auVar62 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar62 >> 0x4f,0) & 1) != 0) || (SUB161(auVar62 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar62 >> 0x5f,0) & 1) != 0) || (SUB161(auVar62 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar62 >> 0x6f,0) & 1) != 0) || (SUB161(auVar62 >> 0x77,0) & 1) != 0) ||
          auVar62[0xf] < '\0') break;
      uVar38 = uVar38 + lVar33 + 0x10;
      lVar33 = lVar33 + 0x10;
    }
  }
LAB_1408ebee6:
  if (0 < iStack_21c) {
    fStack_184 = fStack_184 / (float)iStack_21c;
  }
  iStack_108 = iStack_108 + (uint)bVar54;
  plStack_2c8 = plStack_268;
  uStack_2b8 = &plStack_2f8;
  uStack_2b0 = plStack_270;
  pplStack_2a8 = &plStack_378;
  pplStack_2c0 = pplStack_100;
  if (lVar34 == 0) {
    if (*(char *)(pplStack_100 + 0x14) == '\0') {
      if (((*(int *)(pplStack_100 + 2) != 3) || (*(char *)(pplStack_100 + 0xc) != '\0')) ||
         (pplVar49 = pplStack_100, *(int *)(pplStack_100 + 0xd) != 0)) {
        pplVar49 = (longlong **)((longlong)*pplStack_100 - 2);
        pplVar51 = (longlong **)0x0;
        if ((longlong *)0x1 < *pplStack_100) {
          pplVar51 = pplVar49;
        }
        uVar21 = *(undefined4 *)(pplStack_100 + 0xf);
        if (iStack_108 < 1) {
          if (0 < iStack_188) {
            *puStack_238 = uStack_1a4;
            lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
            plStack_218 = *pplStack_180;
            uVar20 = *(undefined1 *)((longlong)pplStack_100 + 0x9c);
            lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c380);
            uVar22 = *(undefined4 *)(lVar34 + 4);
            uVar87 = (undefined1)uVar22;
            uVar88 = (undefined1)((uint)uVar22 >> 8);
            uVar89 = (undefined1)((uint)uVar22 >> 0x10);
            uVar90 = (undefined1)((uint)uVar22 >> 0x18);
            uVar91 = 0;
            uVar92 = 0;
            uVar93 = 0;
            uVar94 = 0;
            uVar95 = 0;
            uVar96 = 0;
            uVar97 = 0;
            uVar98 = 0;
            uVar99 = 0;
            uVar100 = 0;
            uVar101 = 0;
            uVar102 = 0;
            pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c398);
            fStack_154 = *pfVar30;
            uStack_178 = (longlong *)CONCAT71(uStack_178._1_7_,0x12);
            uStack_160._4_4_ = (undefined4)lStack_210;
            uStack_168._4_4_ = SUB84(plStack_218,0);
            uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
            uStack_150._0_4_ = CONCAT31(uStack_150._1_3_,uVar20);
            in_stack_fffffffffffffa68 = &uStack_178;
            uStack_158 = uVar22;
            pplVar49 = (longlong **)
                       pdb_1414b4ce0(&plStack_218,lStack_230,pplVar51,uVar21,
                                     in_stack_fffffffffffffa68);
          }
        }
        else {
          *puStack_238 = uStack_1a4;
          uVar20 = 3;
          if ((char)uStack_1b0 != '\0') {
            uVar20 = 10;
          }
          lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
          plStack_218 = *pplStack_180;
          uVar41 = *(undefined1 *)((longlong)pplStack_100 + 0x9c);
          lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c3b0);
          uVar22 = *(undefined4 *)(lVar34 + 4);
          uVar87 = (undefined1)uVar22;
          uVar88 = (undefined1)((uint)uVar22 >> 8);
          uVar89 = (undefined1)((uint)uVar22 >> 0x10);
          uVar90 = (undefined1)((uint)uVar22 >> 0x18);
          uVar91 = 0;
          uVar92 = 0;
          uVar93 = 0;
          uVar94 = 0;
          uVar95 = 0;
          uVar96 = 0;
          uVar97 = 0;
          uVar98 = 0;
          uVar99 = 0;
          uVar100 = 0;
          uVar101 = 0;
          uVar102 = 0;
          pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c3c8);
          fStack_154 = *pfVar30;
          uStack_178 = (longlong *)CONCAT71(uStack_178._1_7_,uVar20);
          uStack_160._4_4_ = (undefined4)lStack_210;
          uStack_168._4_4_ = SUB84(plStack_218,0);
          uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
          uStack_150._0_4_ = CONCAT31(uStack_150._1_3_,uVar41);
          in_stack_fffffffffffffa68 = &uStack_178;
          uStack_158 = uVar22;
          pplVar49 = (longlong **)
                     pdb_1414b4ce0(&plStack_218,lStack_230,pplVar51,uVar21,in_stack_fffffffffffffa68
                                  );
        }
      }
    }
    else {
      iVar23 = pdb_1409016e0(pplStack_100);
      plVar25 = plStack_1a0;
      uStack_178 = (longlong *)CONCAT44(uStack_178._4_4_,iVar23);
      if (plStack_1a0[0xf] != 0) {
        uVar38 = pdb_1400aede0(plStack_318,&uStack_178);
        lVar34 = plVar25[0xc];
        uVar29 = plVar25[0xd];
        bVar55 = (byte)(uVar38 >> 0x39);
        auVar60 = ZEXT216(CONCAT11(bVar55,bVar55));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar28 = 0;
        while( true ) {
          uVar38 = uVar38 & uVar29;
          pcVar40 = (char *)(lVar34 + uVar38);
          auVar77[0] = -(*pcVar40 == auVar60[0]);
          auVar77[1] = -(pcVar40[1] == auVar60[1]);
          auVar77[2] = -(pcVar40[2] == auVar60[2]);
          auVar77[3] = -(pcVar40[3] == auVar60[3]);
          auVar77[4] = -(pcVar40[4] == auVar60[4]);
          auVar77[5] = -(pcVar40[5] == auVar60[5]);
          auVar77[6] = -(pcVar40[6] == auVar60[6]);
          auVar77[7] = -(pcVar40[7] == auVar60[7]);
          auVar77[8] = -(pcVar40[8] == auVar60[0]);
          auVar77[9] = -(pcVar40[9] == auVar60[1]);
          auVar77[10] = -(pcVar40[10] == auVar60[2]);
          auVar77[0xb] = -(pcVar40[0xb] == auVar60[3]);
          auVar77[0xc] = -(pcVar40[0xc] == auVar60[4]);
          auVar77[0xd] = -(pcVar40[0xd] == auVar60[5]);
          auVar77[0xe] = -(pcVar40[0xe] == auVar60[6]);
          auVar77[0xf] = -(pcVar40[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar77 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar77 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar77 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar77 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar77 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar77 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar77 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar77 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar77 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar77 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar77 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar77 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar77 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar77 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar77 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar77[0xf] >> 7) << 0xf;
          uVar24 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar35 = 0;
            for (uVar47 = uVar24; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
              uVar35 = uVar35 + 1;
            }
            uVar46 = uVar35 + uVar38 & uVar29;
            if (iVar23 == *(int *)(lVar34 + uVar46 * -8 + -8)) {
              fVar56 = *(float *)(lVar34 + -4 + uVar46 * -8);
              if ((fVar56 == 0.0 && 0.0 < fVar103) || (fVar56 + _DAT_142e36f28 <= fVar103)) {
                lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
                plStack_218 = *pplStack_180;
                lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c3e0);
                uVar21 = *(undefined4 *)(lVar34 + 4);
                uVar87 = (undefined1)uVar21;
                uVar88 = (undefined1)((uint)uVar21 >> 8);
                uVar89 = (undefined1)((uint)uVar21 >> 0x10);
                uVar90 = (undefined1)((uint)uVar21 >> 0x18);
                uVar91 = 0;
                uVar92 = 0;
                uVar93 = 0;
                uVar94 = 0;
                uVar95 = 0;
                uVar96 = 0;
                uVar97 = 0;
                uVar98 = 0;
                uVar99 = 0;
                uVar100 = 0;
                uVar101 = 0;
                uVar102 = 0;
                pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c3f8);
                fStack_154 = *pfVar30;
                uStack_178 = (longlong *)CONCAT71(uStack_178._1_7_,0xf);
                uStack_178 = (longlong *)CONCAT44(fStack_224,(undefined4)uStack_178);
                uStack_160._4_4_ = (undefined4)lStack_210;
                uStack_168._4_4_ = SUB84(plStack_218,0);
                uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
                uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
                uStack_158 = uVar21;
                pdb_1414aefa0(param_6,&uStack_178,&UNK_14301c410);
              }
              goto LAB_1408ec57e;
            }
            uVar43 = (ushort)(uVar24 - 1) & (ushort)uVar24;
            uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar43);
          }
          auVar64[0] = -(*pcVar40 == -1);
          auVar64[1] = -(pcVar40[1] == -1);
          auVar64[2] = -(pcVar40[2] == -1);
          auVar64[3] = -(pcVar40[3] == -1);
          auVar64[4] = -(pcVar40[4] == -1);
          auVar64[5] = -(pcVar40[5] == -1);
          auVar64[6] = -(pcVar40[6] == -1);
          auVar64[7] = -(pcVar40[7] == -1);
          auVar64[8] = -(pcVar40[8] == -1);
          auVar64[9] = -(pcVar40[9] == -1);
          auVar64[10] = -(pcVar40[10] == -1);
          auVar64[0xb] = -(pcVar40[0xb] == -1);
          auVar64[0xc] = -(pcVar40[0xc] == -1);
          auVar64[0xd] = -(pcVar40[0xd] == -1);
          auVar64[0xe] = -(pcVar40[0xe] == -1);
          auVar64[0xf] = -(pcVar40[0xf] == -1);
          if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar64 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar64 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar64 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar64 >> 0x2f,0) & 1) != 0) || (SUB161(auVar64 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar64 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar64 >> 0x47,0) & 1) != 0) || (SUB161(auVar64 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar64 >> 0x57,0) & 1) != 0) || (SUB161(auVar64 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar64 >> 0x67,0) & 1) != 0) || (SUB161(auVar64 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar64 >> 0x77,0) & 1) != 0) || auVar64[0xf] < '\0') break;
          uVar38 = uVar38 + lVar28 + 0x10;
          lVar28 = lVar28 + 0x10;
        }
      }
LAB_1408ec57e:
      cVar19 = pdb_1408ef300(&plStack_2c8);
      if (cVar19 != '\0') {
        lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
        plStack_218 = *pplStack_180;
        lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c428);
        uVar21 = *(undefined4 *)(lVar34 + 4);
        uVar87 = (undefined1)uVar21;
        uVar88 = (undefined1)((uint)uVar21 >> 8);
        uVar89 = (undefined1)((uint)uVar21 >> 0x10);
        uVar90 = (undefined1)((uint)uVar21 >> 0x18);
        uVar91 = 0;
        uVar92 = 0;
        uVar93 = 0;
        uVar94 = 0;
        uVar95 = 0;
        uVar96 = 0;
        uVar97 = 0;
        uVar98 = 0;
        uVar99 = 0;
        uVar100 = 0;
        uVar101 = 0;
        uVar102 = 0;
        pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c440);
        fStack_154 = *pfVar30;
        uStack_178 = (longlong *)CONCAT71(uStack_178._1_7_,(char)uStack_1b0 * '\x02' + '\x16');
        uStack_160._4_4_ = (undefined4)lStack_210;
        uStack_168._4_4_ = SUB84(plStack_218,0);
        uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
        uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
        uStack_158 = uVar21;
        pdb_1414aefa0(param_6,&uStack_178,&UNK_14301c458);
      }
      cVar19 = pdb_140901380(&bStack_101);
      if (cVar19 != '\0') {
        iVar23 = pdb_1409016e0(pplStack_100);
        plVar25 = plStack_1a0;
        uStack_178 = (longlong *)CONCAT44(uStack_178._4_4_,iVar23);
        if (plStack_1a0[0x15] != 0) {
          uVar38 = pdb_1400aede0(plStack_310,&uStack_178);
          lVar34 = plVar25[0x12];
          uVar29 = plVar25[0x13];
          bVar55 = (byte)(uVar38 >> 0x39);
          auVar60 = ZEXT216(CONCAT11(bVar55,bVar55));
          auVar60 = pshuflw(auVar60,auVar60,0);
          lVar28 = 0;
          while( true ) {
            uVar38 = uVar38 & uVar29;
            pcVar40 = (char *)(lVar34 + uVar38);
            auVar78[0] = -(*pcVar40 == auVar60[0]);
            auVar78[1] = -(pcVar40[1] == auVar60[1]);
            auVar78[2] = -(pcVar40[2] == auVar60[2]);
            auVar78[3] = -(pcVar40[3] == auVar60[3]);
            auVar78[4] = -(pcVar40[4] == auVar60[4]);
            auVar78[5] = -(pcVar40[5] == auVar60[5]);
            auVar78[6] = -(pcVar40[6] == auVar60[6]);
            auVar78[7] = -(pcVar40[7] == auVar60[7]);
            auVar78[8] = -(pcVar40[8] == auVar60[0]);
            auVar78[9] = -(pcVar40[9] == auVar60[1]);
            auVar78[10] = -(pcVar40[10] == auVar60[2]);
            auVar78[0xb] = -(pcVar40[0xb] == auVar60[3]);
            auVar78[0xc] = -(pcVar40[0xc] == auVar60[4]);
            auVar78[0xd] = -(pcVar40[0xd] == auVar60[5]);
            auVar78[0xe] = -(pcVar40[0xe] == auVar60[6]);
            auVar78[0xf] = -(pcVar40[0xf] == auVar60[7]);
            uVar43 = (ushort)(SUB161(auVar78 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar78 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar78 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar78 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar78 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar78 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar78 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar78 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar78 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar78 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar78 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar78 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar78 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar78 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar78 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar78[0xf] >> 7) << 0xf;
            uVar24 = (uint)uVar43;
            while (uVar43 != 0) {
              uVar35 = 0;
              for (uVar47 = uVar24; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
                uVar35 = uVar35 + 1;
              }
              uVar46 = uVar35 + uVar38 & uVar29;
              if (iVar23 == *(int *)(lVar34 + uVar46 * -8 + -8)) {
                fVar103 = *(float *)(lVar34 + -4 + uVar46 * -8);
                if ((fVar103 == 0.0 && 0.0 < fStack_18c) || (fVar103 + _DAT_142e36f28 <= fStack_18c)
                   ) {
                  lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
                  plStack_218 = *pplStack_180;
                  lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c470);
                  uVar21 = *(undefined4 *)(lVar34 + 4);
                  uVar87 = (undefined1)uVar21;
                  uVar88 = (undefined1)((uint)uVar21 >> 8);
                  uVar89 = (undefined1)((uint)uVar21 >> 0x10);
                  uVar90 = (undefined1)((uint)uVar21 >> 0x18);
                  uVar91 = 0;
                  uVar92 = 0;
                  uVar93 = 0;
                  uVar94 = 0;
                  uVar95 = 0;
                  uVar96 = 0;
                  uVar97 = 0;
                  uVar98 = 0;
                  uVar99 = 0;
                  uVar100 = 0;
                  uVar101 = 0;
                  uVar102 = 0;
                  pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c488);
                  fStack_154 = *pfVar30;
                  uStack_178 = (longlong *)CONCAT71(uStack_178._1_7_,0x13);
                  uStack_178 = (longlong *)CONCAT44(fStack_220,(undefined4)uStack_178);
                  uStack_160._4_4_ = (undefined4)lStack_210;
                  uStack_168._4_4_ = SUB84(plStack_218,0);
                  uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
                  uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
                  uStack_158 = uVar21;
                  pdb_1414aefa0(param_6,&uStack_178,&UNK_14301c4a0);
                }
                goto LAB_1408ecac4;
              }
              uVar43 = (ushort)(uVar24 - 1) & (ushort)uVar24;
              uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar43);
            }
            auVar65[0] = -(*pcVar40 == -1);
            auVar65[1] = -(pcVar40[1] == -1);
            auVar65[2] = -(pcVar40[2] == -1);
            auVar65[3] = -(pcVar40[3] == -1);
            auVar65[4] = -(pcVar40[4] == -1);
            auVar65[5] = -(pcVar40[5] == -1);
            auVar65[6] = -(pcVar40[6] == -1);
            auVar65[7] = -(pcVar40[7] == -1);
            auVar65[8] = -(pcVar40[8] == -1);
            auVar65[9] = -(pcVar40[9] == -1);
            auVar65[10] = -(pcVar40[10] == -1);
            auVar65[0xb] = -(pcVar40[0xb] == -1);
            auVar65[0xc] = -(pcVar40[0xc] == -1);
            auVar65[0xd] = -(pcVar40[0xd] == -1);
            auVar65[0xe] = -(pcVar40[0xe] == -1);
            auVar65[0xf] = -(pcVar40[0xf] == -1);
            if ((((((((((((((((SUB161(auVar65 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar65 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar65 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar65 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar65 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar65 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar65 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar65 >> 0x3f,0) & 1) != 0) || (SUB161(auVar65 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar65 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar65 >> 0x57,0) & 1) != 0) || (SUB161(auVar65 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar65 >> 0x67,0) & 1) != 0) || (SUB161(auVar65 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar65 >> 0x77,0) & 1) != 0) || auVar65[0xf] < '\0') break;
            uVar38 = uVar38 + lVar28 + 0x10;
            lVar28 = lVar28 + 0x10;
          }
        }
      }
LAB_1408ecac4:
      cVar19 = pdb_140901380(&bStack_101);
      pplVar49 = pplStack_100;
      if (cVar19 != '\0') {
        iVar23 = pdb_1409016e0(pplStack_100);
        pplVar49 = pplStack_100;
        plVar25 = plStack_1a0;
        uStack_178 = (longlong *)CONCAT44(uStack_178._4_4_,iVar23);
        if (plStack_1a0[0x1b] != 0) {
          uVar38 = pdb_1400aede0(plStack_308,&uStack_178);
          lVar34 = plVar25[0x18];
          uVar29 = plVar25[0x19];
          bVar55 = (byte)(uVar38 >> 0x39);
          auVar60 = ZEXT216(CONCAT11(bVar55,bVar55));
          auVar60 = pshuflw(auVar60,auVar60,0);
          lVar28 = 0;
          while( true ) {
            uVar38 = uVar38 & uVar29;
            pcVar40 = (char *)(lVar34 + uVar38);
            auVar80[0] = -(*pcVar40 == auVar60[0]);
            auVar80[1] = -(pcVar40[1] == auVar60[1]);
            auVar80[2] = -(pcVar40[2] == auVar60[2]);
            auVar80[3] = -(pcVar40[3] == auVar60[3]);
            auVar80[4] = -(pcVar40[4] == auVar60[4]);
            auVar80[5] = -(pcVar40[5] == auVar60[5]);
            auVar80[6] = -(pcVar40[6] == auVar60[6]);
            auVar80[7] = -(pcVar40[7] == auVar60[7]);
            auVar80[8] = -(pcVar40[8] == auVar60[0]);
            auVar80[9] = -(pcVar40[9] == auVar60[1]);
            auVar80[10] = -(pcVar40[10] == auVar60[2]);
            auVar80[0xb] = -(pcVar40[0xb] == auVar60[3]);
            auVar80[0xc] = -(pcVar40[0xc] == auVar60[4]);
            auVar80[0xd] = -(pcVar40[0xd] == auVar60[5]);
            auVar80[0xe] = -(pcVar40[0xe] == auVar60[6]);
            auVar80[0xf] = -(pcVar40[0xf] == auVar60[7]);
            uVar43 = (ushort)(SUB161(auVar80 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar80 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar80 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar80 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar80 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar80 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar80 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar80 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar80 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar80 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar80 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar80 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar80 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar80 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar80 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar80[0xf] >> 7) << 0xf;
            uVar24 = (uint)uVar43;
            while (uVar43 != 0) {
              uVar35 = 0;
              for (uVar47 = uVar24; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
                uVar35 = uVar35 + 1;
              }
              uVar46 = uVar35 + uVar38 & uVar29;
              if (iVar23 == *(int *)(lVar34 + uVar46 * -8 + -8)) {
                fVar103 = *(float *)(lVar34 + -4 + uVar46 * -8);
                if ((fVar103 == 0.0 && 0.0 < fStack_190) || (fVar103 + _DAT_142e36f28 <= fStack_190)
                   ) {
                  lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
                  plStack_218 = *pplStack_180;
                  lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c4b8);
                  uVar21 = *(undefined4 *)(lVar34 + 4);
                  uVar87 = (undefined1)uVar21;
                  uVar88 = (undefined1)((uint)uVar21 >> 8);
                  uVar89 = (undefined1)((uint)uVar21 >> 0x10);
                  uVar90 = (undefined1)((uint)uVar21 >> 0x18);
                  uVar91 = 0;
                  uVar92 = 0;
                  uVar93 = 0;
                  uVar94 = 0;
                  uVar95 = 0;
                  uVar96 = 0;
                  uVar97 = 0;
                  uVar98 = 0;
                  uVar99 = 0;
                  uVar100 = 0;
                  uVar101 = 0;
                  uVar102 = 0;
                  pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c4d0);
                  fStack_154 = *pfVar30;
                  uStack_178 = (longlong *)CONCAT71(uStack_178._1_7_,0x14);
                  uStack_178 = (longlong *)CONCAT44(fVar105,(undefined4)uStack_178);
                  uStack_160._4_4_ = (undefined4)lStack_210;
                  uStack_168._4_4_ = SUB84(plStack_218,0);
                  uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
                  uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
                  uStack_158 = uVar21;
                  pdb_1414aefa0(param_6,&uStack_178,&UNK_14301c4e8);
                  pplVar49 = pplStack_100;
                }
                goto LAB_1408ecca7;
              }
              uVar43 = (ushort)(uVar24 - 1) & (ushort)uVar24;
              uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar43);
            }
            auVar67[0] = -(*pcVar40 == -1);
            auVar67[1] = -(pcVar40[1] == -1);
            auVar67[2] = -(pcVar40[2] == -1);
            auVar67[3] = -(pcVar40[3] == -1);
            auVar67[4] = -(pcVar40[4] == -1);
            auVar67[5] = -(pcVar40[5] == -1);
            auVar67[6] = -(pcVar40[6] == -1);
            auVar67[7] = -(pcVar40[7] == -1);
            auVar67[8] = -(pcVar40[8] == -1);
            auVar67[9] = -(pcVar40[9] == -1);
            auVar67[10] = -(pcVar40[10] == -1);
            auVar67[0xb] = -(pcVar40[0xb] == -1);
            auVar67[0xc] = -(pcVar40[0xc] == -1);
            auVar67[0xd] = -(pcVar40[0xd] == -1);
            auVar67[0xe] = -(pcVar40[0xe] == -1);
            auVar67[0xf] = -(pcVar40[0xf] == -1);
            if ((((((((((((((((SUB161(auVar67 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar67 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar67 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar67 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar67 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar67 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar67 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar67 >> 0x3f,0) & 1) != 0) || (SUB161(auVar67 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar67 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar67 >> 0x57,0) & 1) != 0) || (SUB161(auVar67 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar67 >> 0x67,0) & 1) != 0) || (SUB161(auVar67 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar67 >> 0x77,0) & 1) != 0) || auVar67[0xf] < '\0') break;
            uVar38 = uVar38 + lVar28 + 0x10;
            lVar28 = lVar28 + 0x10;
          }
        }
      }
LAB_1408ecca7:
      pplVar51 = pplVar49 + 0xf;
      if (*(int *)(pplVar49 + 2) == 3) {
        iVar23 = pdb_1409016e0(pplVar49);
        plVar25 = plStack_1a0;
        iStack_28c = iVar23;
        if (plStack_1a0[0x21] == 0) {
          pcVar40 = (char *)0x0;
        }
        else {
          uVar38 = pdb_1400aede0(plStack_390,&iStack_28c);
          lVar34 = plVar25[0x1e];
          uVar29 = plVar25[0x1f];
          bVar55 = (byte)(uVar38 >> 0x39);
          auVar60 = ZEXT216(CONCAT11(bVar55,bVar55));
          auVar60 = pshuflw(auVar60,auVar60,0);
          lVar28 = 0;
          while( true ) {
            uVar38 = uVar38 & uVar29;
            auVar77 = *(undefined1 (*) [16])(lVar34 + uVar38);
            auVar81[0] = -(auVar77[0] == auVar60[0]);
            auVar81[1] = -(auVar77[1] == auVar60[1]);
            auVar81[2] = -(auVar77[2] == auVar60[2]);
            auVar81[3] = -(auVar77[3] == auVar60[3]);
            auVar81[4] = -(auVar77[4] == auVar60[4]);
            auVar81[5] = -(auVar77[5] == auVar60[5]);
            auVar81[6] = -(auVar77[6] == auVar60[6]);
            auVar81[7] = -(auVar77[7] == auVar60[7]);
            auVar81[8] = -(auVar77[8] == auVar60[0]);
            auVar81[9] = -(auVar77[9] == auVar60[1]);
            auVar81[10] = -(auVar77[10] == auVar60[2]);
            auVar81[0xb] = -(auVar77[0xb] == auVar60[3]);
            auVar81[0xc] = -(auVar77[0xc] == auVar60[4]);
            auVar81[0xd] = -(auVar77[0xd] == auVar60[5]);
            auVar81[0xe] = -(auVar77[0xe] == auVar60[6]);
            auVar81[0xf] = -(auVar77[0xf] == auVar60[7]);
            uVar43 = (ushort)(SUB161(auVar81 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar81 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar81 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar81 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar81 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar81 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar81 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar81 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar81 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar81 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar81 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar81 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar81 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar81 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar81 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar81[0xf] >> 7) << 0xf;
            uVar24 = (uint)uVar43;
            while (uVar43 != 0) {
              uVar35 = 0;
              for (uVar47 = uVar24; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
                uVar35 = uVar35 + 1;
              }
              lVar33 = lVar34 + (uVar35 + uVar38 & uVar29) * -8;
              if (iVar23 == *(int *)(lVar33 + -8)) goto LAB_1408ecf5f;
              uVar43 = (ushort)(uVar24 - 1) & (ushort)uVar24;
              uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar43);
            }
            auVar68[0] = -(auVar77[0] == -1);
            auVar68[1] = -(auVar77[1] == -1);
            auVar68[2] = -(auVar77[2] == -1);
            auVar68[3] = -(auVar77[3] == -1);
            auVar68[4] = -(auVar77[4] == -1);
            auVar68[5] = -(auVar77[5] == -1);
            auVar68[6] = -(auVar77[6] == -1);
            auVar68[7] = -(auVar77[7] == -1);
            auVar68[8] = -(auVar77[8] == -1);
            auVar68[9] = -(auVar77[9] == -1);
            auVar68[10] = -(auVar77[10] == -1);
            auVar68[0xb] = -(auVar77[0xb] == -1);
            auVar68[0xc] = -(auVar77[0xc] == -1);
            auVar68[0xd] = -(auVar77[0xd] == -1);
            auVar68[0xe] = -(auVar77[0xe] == -1);
            auVar68[0xf] = -(auVar77[0xf] == -1);
            if ((((((((((((((((SUB161(auVar68 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar68 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar68 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar68 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar68 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar68 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar68 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar68 >> 0x3f,0) & 1) != 0) || (SUB161(auVar68 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar68 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar68 >> 0x57,0) & 1) != 0) || (SUB161(auVar68 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar68 >> 0x67,0) & 1) != 0) || (SUB161(auVar68 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar68 >> 0x77,0) & 1) != 0) || auVar68[0xf] < '\0') break;
            uVar38 = uVar38 + lVar28 + 0x10;
            lVar28 = lVar28 + 0x10;
          }
          lVar33 = 0;
LAB_1408ecf5f:
          pcVar40 = (char *)(lVar33 + -4);
          if (lVar33 == 0) {
            pcVar40 = (char *)0x0;
          }
        }
        iVar23 = pdb_1409016e0(pplStack_100);
        pplVar49 = pplStack_100;
        iStack_290 = iVar23;
        if (uStack_2e0 != 0) {
          uVar29 = pdb_1400aede0(&lStack_2d8,&iStack_290);
          bVar55 = (byte)(uVar29 >> 0x39);
          auVar60 = ZEXT216(CONCAT11(bVar55,bVar55));
          auVar60 = pshuflw(auVar60,auVar60,0);
          lVar34 = 0;
          while( true ) {
            uVar29 = uVar29 & (ulonglong)pplStack_2f0;
            auVar77 = *(undefined1 (*) [16])((longlong)plStack_2f8 + uVar29);
            auVar82[0] = -(auVar77[0] == auVar60[0]);
            auVar82[1] = -(auVar77[1] == auVar60[1]);
            auVar82[2] = -(auVar77[2] == auVar60[2]);
            auVar82[3] = -(auVar77[3] == auVar60[3]);
            auVar82[4] = -(auVar77[4] == auVar60[4]);
            auVar82[5] = -(auVar77[5] == auVar60[5]);
            auVar82[6] = -(auVar77[6] == auVar60[6]);
            auVar82[7] = -(auVar77[7] == auVar60[7]);
            auVar82[8] = -(auVar77[8] == auVar60[0]);
            auVar82[9] = -(auVar77[9] == auVar60[1]);
            auVar82[10] = -(auVar77[10] == auVar60[2]);
            auVar82[0xb] = -(auVar77[0xb] == auVar60[3]);
            auVar82[0xc] = -(auVar77[0xc] == auVar60[4]);
            auVar82[0xd] = -(auVar77[0xd] == auVar60[5]);
            auVar82[0xe] = -(auVar77[0xe] == auVar60[6]);
            auVar82[0xf] = -(auVar77[0xf] == auVar60[7]);
            uVar43 = (ushort)(SUB161(auVar82 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar82 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar82 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar82 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar82 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar82 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar82 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar82 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar82 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar82 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar82 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar82 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar82 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar82 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar82 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar82[0xf] >> 7) << 0xf;
            uVar24 = (uint)uVar43;
            while (uVar43 != 0) {
              uVar35 = 0;
              for (uVar47 = uVar24; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
                uVar35 = uVar35 + 1;
              }
              uVar38 = uVar35 + uVar29 & (ulonglong)pplStack_2f0;
              if (iVar23 == (int)plStack_2f8[-1 - uVar38]) {
                if (((pcVar40 != (char *)0x0) && (*pcVar40 == '\0')) &&
                   (*(char *)((longlong)plStack_2f8 + uVar38 * -8 + -4) == '\x01')) {
                  lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
                  plStack_218 = *pplStack_180;
                  lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c5a0);
                  uVar21 = *(undefined4 *)(lVar34 + 4);
                  uVar87 = (undefined1)uVar21;
                  uVar88 = (undefined1)((uint)uVar21 >> 8);
                  uVar89 = (undefined1)((uint)uVar21 >> 0x10);
                  uVar90 = (undefined1)((uint)uVar21 >> 0x18);
                  uVar91 = 0;
                  uVar92 = 0;
                  uVar93 = 0;
                  uVar94 = 0;
                  uVar95 = 0;
                  uVar96 = 0;
                  uVar97 = 0;
                  uVar98 = 0;
                  uVar99 = 0;
                  uVar100 = 0;
                  uVar101 = 0;
                  uVar102 = 0;
                  pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c5b8);
                  fStack_154 = *pfVar30;
                  uStack_178 = (longlong *)
                               (CONCAT71(uStack_178._1_7_,(char)uStack_1b0 * '\x02') | 0x15);
                  uStack_160._4_4_ = (undefined4)lStack_210;
                  uStack_168._4_4_ = SUB84(plStack_218,0);
                  uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
                  uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
                  uStack_158 = uVar21;
                  pdb_1414aefa0(param_6,&uStack_178,&UNK_14301c5d0);
                  pplVar49 = pplStack_100;
                }
                goto LAB_1408ed104;
              }
              uVar43 = (ushort)(uVar24 - 1) & (ushort)uVar24;
              uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar43);
            }
            auVar69[0] = -(auVar77[0] == -1);
            auVar69[1] = -(auVar77[1] == -1);
            auVar69[2] = -(auVar77[2] == -1);
            auVar69[3] = -(auVar77[3] == -1);
            auVar69[4] = -(auVar77[4] == -1);
            auVar69[5] = -(auVar77[5] == -1);
            auVar69[6] = -(auVar77[6] == -1);
            auVar69[7] = -(auVar77[7] == -1);
            auVar69[8] = -(auVar77[8] == -1);
            auVar69[9] = -(auVar77[9] == -1);
            auVar69[10] = -(auVar77[10] == -1);
            auVar69[0xb] = -(auVar77[0xb] == -1);
            auVar69[0xc] = -(auVar77[0xc] == -1);
            auVar69[0xd] = -(auVar77[0xd] == -1);
            auVar69[0xe] = -(auVar77[0xe] == -1);
            auVar69[0xf] = -(auVar77[0xf] == -1);
            if ((((((((((((((((SUB161(auVar69 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar69 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar69 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar69 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar69 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar69 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar69 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar69 >> 0x3f,0) & 1) != 0) || (SUB161(auVar69 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar69 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar69 >> 0x57,0) & 1) != 0) || (SUB161(auVar69 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar69 >> 0x67,0) & 1) != 0) || (SUB161(auVar69 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar69 >> 0x77,0) & 1) != 0) || auVar69[0xf] < '\0') break;
            uVar29 = uVar29 + lVar34 + 0x10;
            lVar34 = lVar34 + 0x10;
          }
        }
LAB_1408ed104:
        plVar25 = plStack_1a0;
        if (*(char *)(pplVar49 + 0xc) != '\0') {
          uVar24 = CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87))) ^
                   CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87)));
          uVar87 = (undefined1)uVar24;
          uVar88 = (undefined1)(uVar24 >> 8);
          uVar89 = (undefined1)(uVar24 >> 0x10);
          uVar90 = (undefined1)(uVar24 >> 0x18);
          uVar24 = CONCAT13(uVar94,CONCAT12(uVar93,CONCAT11(uVar92,uVar91))) ^
                   CONCAT13(uVar94,CONCAT12(uVar93,CONCAT11(uVar92,uVar91)));
          uVar91 = (undefined1)uVar24;
          uVar92 = (undefined1)(uVar24 >> 8);
          uVar93 = (undefined1)(uVar24 >> 0x10);
          uVar94 = (undefined1)(uVar24 >> 0x18);
          uVar24 = CONCAT13(uVar98,CONCAT12(uVar97,CONCAT11(uVar96,uVar95))) ^
                   CONCAT13(uVar98,CONCAT12(uVar97,CONCAT11(uVar96,uVar95)));
          uVar95 = (undefined1)uVar24;
          uVar96 = (undefined1)(uVar24 >> 8);
          uVar97 = (undefined1)(uVar24 >> 0x10);
          uVar98 = (undefined1)(uVar24 >> 0x18);
          uVar24 = CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99))) ^
                   CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99)));
          uVar99 = (undefined1)uVar24;
          uVar100 = (undefined1)(uVar24 >> 8);
          uVar101 = (undefined1)(uVar24 >> 0x10);
          uVar102 = (undefined1)(uVar24 >> 0x18);
          if (plStack_1a0[9] != 0) {
            uVar38 = pdb_1400aede0(plStack_380,pplVar51);
            lVar34 = plVar25[6];
            uVar29 = plVar25[7];
            bVar55 = (byte)(uVar38 >> 0x39);
            auVar60 = ZEXT216(CONCAT11(bVar55,bVar55));
            auVar60 = pshuflw(auVar60,auVar60,0);
            lVar28 = 0;
            while( true ) {
              uVar38 = uVar38 & uVar29;
              pcVar40 = (char *)(lVar34 + uVar38);
              auVar83[0] = -(*pcVar40 == auVar60[0]);
              auVar83[1] = -(pcVar40[1] == auVar60[1]);
              auVar83[2] = -(pcVar40[2] == auVar60[2]);
              auVar83[3] = -(pcVar40[3] == auVar60[3]);
              auVar83[4] = -(pcVar40[4] == auVar60[4]);
              auVar83[5] = -(pcVar40[5] == auVar60[5]);
              auVar83[6] = -(pcVar40[6] == auVar60[6]);
              auVar83[7] = -(pcVar40[7] == auVar60[7]);
              auVar83[8] = -(pcVar40[8] == auVar60[0]);
              auVar83[9] = -(pcVar40[9] == auVar60[1]);
              auVar83[10] = -(pcVar40[10] == auVar60[2]);
              auVar83[0xb] = -(pcVar40[0xb] == auVar60[3]);
              auVar83[0xc] = -(pcVar40[0xc] == auVar60[4]);
              auVar83[0xd] = -(pcVar40[0xd] == auVar60[5]);
              auVar83[0xe] = -(pcVar40[0xe] == auVar60[6]);
              auVar83[0xf] = -(pcVar40[0xf] == auVar60[7]);
              uVar43 = (ushort)(SUB161(auVar83 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar83 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar83 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar83 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar83 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar83 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar83 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar83 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar83 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar83 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar83 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar83 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar83 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar83 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar83 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar83[0xf] >> 7) << 0xf;
              uVar24 = (uint)uVar43;
              if (uVar43 != 0) {
                do {
                  uVar35 = 0;
                  for (uVar47 = uVar24; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
                    uVar35 = uVar35 + 1;
                  }
                  uVar46 = uVar35 + uVar38 & uVar29;
                  if (*(int *)pplVar51 == *(int *)(lVar34 + uVar46 * -8 + -8)) {
                    fVar103 = *(float *)(lVar34 + -4 + uVar46 * -8);
                    fVar56 = *(float *)((longlong)pplStack_100 + 100);
                    fVar104 = (float)((uint)((fVar56 - fVar103) / *(float *)(lStack_258 + 0x58)) &
                                     _DAT_142e377e0) / _DAT_142e37844;
                    if ((fVar103 == fVar56) && (!NAN(fVar103) && !NAN(fVar56))) goto LAB_1408eda02;
                    uVar87 = SUB41(_DAT_142e36f28,0);
                    uVar88 = (undefined1)((uint)_DAT_142e36f28 >> 8);
                    uVar89 = (undefined1)((uint)_DAT_142e36f28 >> 0x10);
                    uVar90 = (undefined1)((uint)_DAT_142e36f28 >> 0x18);
                    uVar91 = 0;
                    uVar92 = 0;
                    uVar93 = 0;
                    uVar94 = 0;
                    uVar95 = 0;
                    uVar96 = 0;
                    uVar97 = 0;
                    uVar98 = 0;
                    uVar99 = 0;
                    uVar100 = 0;
                    uVar101 = 0;
                    uVar102 = 0;
                    if (fVar104 <= _DAT_142e36f28) {
                      uVar87 = SUB41(fVar104,0);
                      uVar88 = (undefined1)((uint)fVar104 >> 8);
                      uVar89 = (undefined1)((uint)fVar104 >> 0x10);
                      uVar90 = (undefined1)((uint)fVar104 >> 0x18);
                    }
                    goto LAB_1408ed868;
                  }
                  uVar43 = (ushort)(uVar24 - 1) & (ushort)uVar24;
                  uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar43);
                } while (uVar43 != 0);
              }
              auVar70[0] = -(*pcVar40 == -1);
              auVar70[1] = -(pcVar40[1] == -1);
              auVar70[2] = -(pcVar40[2] == -1);
              auVar70[3] = -(pcVar40[3] == -1);
              auVar70[4] = -(pcVar40[4] == -1);
              auVar70[5] = -(pcVar40[5] == -1);
              auVar70[6] = -(pcVar40[6] == -1);
              auVar70[7] = -(pcVar40[7] == -1);
              auVar70[8] = -(pcVar40[8] == -1);
              auVar70[9] = -(pcVar40[9] == -1);
              auVar70[10] = -(pcVar40[10] == -1);
              auVar70[0xb] = -(pcVar40[0xb] == -1);
              auVar70[0xc] = -(pcVar40[0xc] == -1);
              auVar70[0xd] = -(pcVar40[0xd] == -1);
              auVar70[0xe] = -(pcVar40[0xe] == -1);
              auVar70[0xf] = -(pcVar40[0xf] == -1);
              if ((((((((((((((((SUB161(auVar70 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar70 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar70 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar70 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar70 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar70 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar70 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar70 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar70 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar70 >> 0x4f,0) & 1) != 0) || (SUB161(auVar70 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar70 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar70 >> 0x67,0) & 1) != 0) || (SUB161(auVar70 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar70 >> 0x77,0) & 1) != 0) || auVar70[0xf] < '\0') break;
              uVar38 = uVar38 + lVar28 + 0x10;
              lVar28 = lVar28 + 0x10;
            }
          }
LAB_1408ed868:
          if (0 < iStack_108) {
            uVar20 = 1;
            if ((char)uStack_1b0 != '\0') {
              uVar20 = 8;
            }
            lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
            plStack_218 = *pplStack_180;
            lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c5e8);
            uVar21 = *(undefined4 *)(lVar34 + 4);
            pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c600);
            fStack_154 = *pfVar30;
            uStack_178 = (longlong *)CONCAT71(uStack_178._1_7_,uVar20);
            uStack_178 = (longlong *)
                         CONCAT44(CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87))),
                                  (undefined4)uStack_178);
            uStack_170 = (longlong **)CONCAT44(uStack_170._4_4_,fVar57);
            uStack_160._4_4_ = (undefined4)lStack_210;
            uStack_168._4_4_ = SUB84(plStack_218,0);
            uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
            uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
            uStack_158 = uVar21;
            pdb_1414aefa0(param_6,&uStack_178,&UNK_14301c618);
          }
          if (0 < iStack_188) {
            lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
            plStack_218 = *pplStack_180;
            lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c630);
            uVar21 = *(undefined4 *)(lVar34 + 4);
            pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c648);
            fStack_154 = *pfVar30;
            uStack_178 = (longlong *)CONCAT71(uStack_178._1_7_,0x10);
            uStack_178 = (longlong *)
                         CONCAT44(CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87))),
                                  (undefined4)uStack_178);
            uStack_170 = (longlong **)CONCAT44(uStack_170._4_4_,fStack_198);
            uStack_160._4_4_ = (undefined4)lStack_210;
            uStack_168._4_4_ = SUB84(plStack_218,0);
            uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
            uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
            uStack_158 = uVar21;
            pdb_1414aefa0(param_6,&uStack_178,&UNK_14301c660);
          }
LAB_1408eda02:
          pdb_1414b61f0(&plStack_418);
        }
      }
      else {
        pdb_1414d1b30(&uStack_178,param_5);
        if ((uStack_160 != CONCAT44(fStack_154,uStack_158) && uStack_160 != 0) ||
           (uStack_170 != (longlong **)0x0 && uStack_170 != uStack_168)) {
          *uStack_178 = *uStack_178 + uStack_150;
          if (0 < iStack_108) {
            uStack_178 = (longlong *)&UNK_14301c500;
            uStack_170 = (longlong **)0xf;
            uVar31 = pdb_140bbbcb0(&uStack_178);
            uStack_178 = (longlong *)pdb_1406d0830(uStack_300);
            uStack_170 = (longlong **)uVar31;
            uVar20 = pdb_1408ffab0(&uStack_178);
            plStack_218 = (longlong *)CONCAT71(plStack_218._1_7_,uVar20);
            uVar20 = pdb_140901040(&plStack_218);
            if (*(char *)(lStack_248 + 0x10) == '\0') {
              uVar24 = CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87))) ^
                       CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87)));
              uVar87 = (undefined1)uVar24;
              uVar88 = (undefined1)(uVar24 >> 8);
              uVar89 = (undefined1)(uVar24 >> 0x10);
              uVar90 = (undefined1)(uVar24 >> 0x18);
              uVar24 = CONCAT13(uVar94,CONCAT12(uVar93,CONCAT11(uVar92,uVar91))) ^
                       CONCAT13(uVar94,CONCAT12(uVar93,CONCAT11(uVar92,uVar91)));
              uVar91 = (undefined1)uVar24;
              uVar92 = (undefined1)(uVar24 >> 8);
              uVar93 = (undefined1)(uVar24 >> 0x10);
              uVar94 = (undefined1)(uVar24 >> 0x18);
              uVar24 = CONCAT13(uVar98,CONCAT12(uVar97,CONCAT11(uVar96,uVar95))) ^
                       CONCAT13(uVar98,CONCAT12(uVar97,CONCAT11(uVar96,uVar95)));
              uVar95 = (undefined1)uVar24;
              uVar96 = (undefined1)(uVar24 >> 8);
              uVar97 = (undefined1)(uVar24 >> 0x10);
              uVar98 = (undefined1)(uVar24 >> 0x18);
              uVar24 = CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99))) ^
                       CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99)));
              uVar99 = (undefined1)uVar24;
              uVar100 = (undefined1)(uVar24 >> 8);
              uVar101 = (undefined1)(uVar24 >> 0x10);
              uVar102 = (undefined1)(uVar24 >> 0x18);
            }
            else {
              uVar21 = *(undefined4 *)(lStack_248 + 0x14);
              uVar87 = (undefined1)uVar21;
              uVar88 = (undefined1)((uint)uVar21 >> 8);
              uVar89 = (undefined1)((uint)uVar21 >> 0x10);
              uVar90 = (undefined1)((uint)uVar21 >> 0x18);
              uVar91 = 0;
              uVar92 = 0;
              uVar93 = 0;
              uVar94 = 0;
              uVar95 = 0;
              uVar96 = 0;
              uVar97 = 0;
              uVar98 = 0;
              uVar99 = 0;
              uVar100 = 0;
              uVar101 = 0;
              uVar102 = 0;
            }
            bVar55 = 0;
            if ((char)uStack_1b0 != '\0') {
              bVar55 = 7;
            }
            lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
            plStack_218 = *pplStack_180;
            lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c510);
            uVar21 = *(undefined4 *)(lVar34 + 4);
            pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c528);
            fStack_154 = *pfVar30;
            uStack_178._0_2_ = (ushort)bVar55;
            uStack_178._0_3_ = CONCAT12(uVar20,(ushort)uStack_178);
            uStack_178._0_4_ = CONCAT13((char)uStack_194,(undefined3)uStack_178);
            uStack_178 = (longlong *)
                         CONCAT44(CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87))),
                                  (undefined4)uStack_178);
            uStack_170 = (longlong **)CONCAT44(fVar57,fVar104);
            uStack_168._0_4_ = fStack_184;
            uStack_160._4_4_ = (undefined4)lStack_210;
            uStack_168._4_4_ = SUB84(plStack_218,0);
            uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
            uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
            uStack_158 = uVar21;
            pdb_1414aefa0(param_6,&uStack_178,&UNK_14301c540);
          }
          if (0 < iStack_188) {
            if (*(char *)(lStack_248 + 0x10) == '\0') {
              uVar24 = CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87))) ^
                       CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87)));
              uVar87 = (undefined1)uVar24;
              uVar88 = (undefined1)(uVar24 >> 8);
              uVar89 = (undefined1)(uVar24 >> 0x10);
              uVar90 = (undefined1)(uVar24 >> 0x18);
              uVar24 = CONCAT13(uVar94,CONCAT12(uVar93,CONCAT11(uVar92,uVar91))) ^
                       CONCAT13(uVar94,CONCAT12(uVar93,CONCAT11(uVar92,uVar91)));
              uVar91 = (undefined1)uVar24;
              uVar92 = (undefined1)(uVar24 >> 8);
              uVar93 = (undefined1)(uVar24 >> 0x10);
              uVar94 = (undefined1)(uVar24 >> 0x18);
              uVar24 = CONCAT13(uVar98,CONCAT12(uVar97,CONCAT11(uVar96,uVar95))) ^
                       CONCAT13(uVar98,CONCAT12(uVar97,CONCAT11(uVar96,uVar95)));
              uVar95 = (undefined1)uVar24;
              uVar96 = (undefined1)(uVar24 >> 8);
              uVar97 = (undefined1)(uVar24 >> 0x10);
              uVar98 = (undefined1)(uVar24 >> 0x18);
              uVar24 = CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99))) ^
                       CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99)));
              uVar99 = (undefined1)uVar24;
              uVar100 = (undefined1)(uVar24 >> 8);
              uVar101 = (undefined1)(uVar24 >> 0x10);
              uVar102 = (undefined1)(uVar24 >> 0x18);
            }
            else {
              uVar21 = *(undefined4 *)(lStack_248 + 0x14);
              uVar87 = (undefined1)uVar21;
              uVar88 = (undefined1)((uint)uVar21 >> 8);
              uVar89 = (undefined1)((uint)uVar21 >> 0x10);
              uVar90 = (undefined1)((uint)uVar21 >> 0x18);
              uVar91 = 0;
              uVar92 = 0;
              uVar93 = 0;
              uVar94 = 0;
              uVar95 = 0;
              uVar96 = 0;
              uVar97 = 0;
              uVar98 = 0;
              uVar99 = 0;
              uVar100 = 0;
              uVar101 = 0;
              uVar102 = 0;
            }
            lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
            plStack_218 = *pplStack_180;
            lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c558);
            uVar21 = *(undefined4 *)(lVar34 + 4);
            pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c570);
            fStack_154 = *pfVar30;
            uStack_178._0_2_ = CONCAT11((char)uStack_194,0xe);
            uStack_178 = (longlong *)
                         CONCAT44(CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87))),
                                  (undefined4)uStack_178);
            uStack_170 = (longlong **)CONCAT44(fStack_198,fVar104);
            uStack_168._0_4_ = fStack_184;
            uStack_160._4_4_ = (undefined4)lStack_210;
            uStack_168._4_4_ = SUB84(plStack_218,0);
            uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
            uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
            uStack_158 = uVar21;
            pdb_1414aefa0(param_6,&uStack_178,&UNK_14301c588);
          }
        }
      }
      plVar25 = plStack_1a0;
      pplVar49 = pplStack_100;
      if (*(char *)(pplStack_100 + 0xd) != '\0') {
        uVar24 = CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87))) ^
                 CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87)));
        uVar87 = (undefined1)uVar24;
        uVar88 = (undefined1)(uVar24 >> 8);
        uVar89 = (undefined1)(uVar24 >> 0x10);
        uVar90 = (undefined1)(uVar24 >> 0x18);
        uVar24 = CONCAT13(uVar94,CONCAT12(uVar93,CONCAT11(uVar92,uVar91))) ^
                 CONCAT13(uVar94,CONCAT12(uVar93,CONCAT11(uVar92,uVar91)));
        uVar91 = (undefined1)uVar24;
        uVar92 = (undefined1)(uVar24 >> 8);
        uVar93 = (undefined1)(uVar24 >> 0x10);
        uVar94 = (undefined1)(uVar24 >> 0x18);
        uVar24 = CONCAT13(uVar98,CONCAT12(uVar97,CONCAT11(uVar96,uVar95))) ^
                 CONCAT13(uVar98,CONCAT12(uVar97,CONCAT11(uVar96,uVar95)));
        uVar95 = (undefined1)uVar24;
        uVar96 = (undefined1)(uVar24 >> 8);
        uVar97 = (undefined1)(uVar24 >> 0x10);
        uVar98 = (undefined1)(uVar24 >> 0x18);
        uVar24 = CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99))) ^
                 CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99)));
        uVar99 = (undefined1)uVar24;
        uVar100 = (undefined1)(uVar24 >> 8);
        uVar101 = (undefined1)(uVar24 >> 0x10);
        uVar102 = (undefined1)(uVar24 >> 0x18);
        if (plStack_1a0[3] != 0) {
          uVar38 = pdb_1400aede0(plStack_388,pplVar51);
          lVar34 = *plVar25;
          uVar29 = plVar25[1];
          bVar55 = (byte)(uVar38 >> 0x39);
          auVar60 = ZEXT216(CONCAT11(bVar55,bVar55));
          auVar60 = pshuflw(auVar60,auVar60,0);
          lVar28 = 0;
          while( true ) {
            uVar38 = uVar38 & uVar29;
            pcVar40 = (char *)(lVar34 + uVar38);
            auVar85[0] = -(*pcVar40 == auVar60[0]);
            auVar85[1] = -(pcVar40[1] == auVar60[1]);
            auVar85[2] = -(pcVar40[2] == auVar60[2]);
            auVar85[3] = -(pcVar40[3] == auVar60[3]);
            auVar85[4] = -(pcVar40[4] == auVar60[4]);
            auVar85[5] = -(pcVar40[5] == auVar60[5]);
            auVar85[6] = -(pcVar40[6] == auVar60[6]);
            auVar85[7] = -(pcVar40[7] == auVar60[7]);
            auVar85[8] = -(pcVar40[8] == auVar60[0]);
            auVar85[9] = -(pcVar40[9] == auVar60[1]);
            auVar85[10] = -(pcVar40[10] == auVar60[2]);
            auVar85[0xb] = -(pcVar40[0xb] == auVar60[3]);
            auVar85[0xc] = -(pcVar40[0xc] == auVar60[4]);
            auVar85[0xd] = -(pcVar40[0xd] == auVar60[5]);
            auVar85[0xe] = -(pcVar40[0xe] == auVar60[6]);
            auVar85[0xf] = -(pcVar40[0xf] == auVar60[7]);
            uVar43 = (ushort)(SUB161(auVar85 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar85 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar85 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar85 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar85 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar85 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar85 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar85 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar85 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar85 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar85 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar85 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar85 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar85 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar85 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar85[0xf] >> 7) << 0xf;
            uVar24 = (uint)uVar43;
            if (uVar43 != 0) {
              do {
                uVar35 = 0;
                for (uVar47 = uVar24; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
                  uVar35 = uVar35 + 1;
                }
                uVar46 = uVar35 + uVar38 & uVar29;
                if (*(int *)pplVar51 == *(int *)(lVar34 + uVar46 * -8 + -8)) {
                  fVar103 = *(float *)(lVar34 + -4 + uVar46 * -8);
                  fVar56 = *(float *)((longlong)pplStack_100 + 0x6c);
                  fVar104 = (float)((uint)((fVar56 - fVar103) / *(float *)(lStack_258 + 0x58)) &
                                   _DAT_142e377e0) / _DAT_142e382c8;
                  if ((fVar103 == fVar56) && (!NAN(fVar103) && !NAN(fVar56))) goto LAB_1408edeee;
                  uVar87 = SUB41(_DAT_142e36f28,0);
                  uVar88 = (undefined1)((uint)_DAT_142e36f28 >> 8);
                  uVar89 = (undefined1)((uint)_DAT_142e36f28 >> 0x10);
                  uVar90 = (undefined1)((uint)_DAT_142e36f28 >> 0x18);
                  uVar91 = 0;
                  uVar92 = 0;
                  uVar93 = 0;
                  uVar94 = 0;
                  uVar95 = 0;
                  uVar96 = 0;
                  uVar97 = 0;
                  uVar98 = 0;
                  uVar99 = 0;
                  uVar100 = 0;
                  uVar101 = 0;
                  uVar102 = 0;
                  if (fVar104 <= _DAT_142e36f28) {
                    uVar87 = SUB41(fVar104,0);
                    uVar88 = (undefined1)((uint)fVar104 >> 8);
                    uVar89 = (undefined1)((uint)fVar104 >> 0x10);
                    uVar90 = (undefined1)((uint)fVar104 >> 0x18);
                  }
                  goto LAB_1408edd3c;
                }
                uVar43 = (ushort)(uVar24 - 1) & (ushort)uVar24;
                uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar43);
              } while (uVar43 != 0);
            }
            auVar72[0] = -(*pcVar40 == -1);
            auVar72[1] = -(pcVar40[1] == -1);
            auVar72[2] = -(pcVar40[2] == -1);
            auVar72[3] = -(pcVar40[3] == -1);
            auVar72[4] = -(pcVar40[4] == -1);
            auVar72[5] = -(pcVar40[5] == -1);
            auVar72[6] = -(pcVar40[6] == -1);
            auVar72[7] = -(pcVar40[7] == -1);
            auVar72[8] = -(pcVar40[8] == -1);
            auVar72[9] = -(pcVar40[9] == -1);
            auVar72[10] = -(pcVar40[10] == -1);
            auVar72[0xb] = -(pcVar40[0xb] == -1);
            auVar72[0xc] = -(pcVar40[0xc] == -1);
            auVar72[0xd] = -(pcVar40[0xd] == -1);
            auVar72[0xe] = -(pcVar40[0xe] == -1);
            auVar72[0xf] = -(pcVar40[0xf] == -1);
            if ((((((((((((((((SUB161(auVar72 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar72 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar72 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar72 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar72 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar72 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar72 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar72 >> 0x3f,0) & 1) != 0) || (SUB161(auVar72 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar72 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar72 >> 0x57,0) & 1) != 0) || (SUB161(auVar72 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar72 >> 0x67,0) & 1) != 0) || (SUB161(auVar72 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar72 >> 0x77,0) & 1) != 0) || auVar72[0xf] < '\0') break;
            uVar38 = uVar38 + lVar28 + 0x10;
            lVar28 = lVar28 + 0x10;
          }
        }
LAB_1408edd3c:
        if (0 < iStack_108) {
          uVar20 = 2;
          if ((char)uStack_1b0 != '\0') {
            uVar20 = 9;
          }
          lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
          plStack_218 = *pplStack_180;
          lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c678);
          uVar21 = *(undefined4 *)(lVar34 + 4);
          pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c690);
          fStack_154 = *pfVar30;
          uStack_178._0_2_ = CONCAT11((char)uStack_194,uVar20);
          uStack_178 = (longlong *)
                       CONCAT44(CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87))),
                                (undefined4)uStack_178);
          uStack_170 = (longlong **)CONCAT44(uStack_170._4_4_,fVar57);
          uStack_160._4_4_ = (undefined4)lStack_210;
          uStack_168._4_4_ = SUB84(plStack_218,0);
          uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
          uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
          uStack_158 = uVar21;
          pdb_1414aefa0(param_6,&uStack_178,&UNK_14301c6a8);
        }
        if (0 < iStack_188) {
          lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
          plStack_218 = *pplStack_180;
          lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c6c0);
          uVar21 = *(undefined4 *)(lVar34 + 4);
          pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c6d8);
          fStack_154 = *pfVar30;
          uStack_178._0_2_ = CONCAT11((char)uStack_194,0x11);
          uStack_178 = (longlong *)
                       CONCAT44(CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87))),
                                (undefined4)uStack_178);
          uStack_170 = (longlong **)CONCAT44(uStack_170._4_4_,fStack_198);
          uStack_160._4_4_ = (undefined4)lStack_210;
          uStack_168._4_4_ = SUB84(plStack_218,0);
          uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
          uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
          uStack_158 = uVar21;
          pdb_1414aefa0(param_6,&uStack_178,&UNK_14301c6f0);
        }
LAB_1408edeee:
        pplVar49 = (longlong **)
                   pdb_1414b61f0(&plStack_508,*(undefined4 *)(pplStack_100 + 0xf),
                                 *(undefined4 *)((longlong)pplStack_100 + 0x6c));
      }
    }
  }
  else if (lVar34 == 1) {
    if (*(char *)(pplStack_100 + 0x14) == '\0') {
      pplVar49 = pplStack_2a8;
      if (*(char *)((longlong)pplStack_100 + 0x44) != '\0') {
        pplVar49 = (longlong **)((longlong)*pplStack_100 - 2);
        pplVar51 = (longlong **)0x0;
        if ((longlong *)0x1 < *pplStack_100) {
          pplVar51 = pplVar49;
        }
        uVar21 = *(undefined4 *)(pplStack_100 + 8);
        if (iStack_108 < 1) {
          if (0 < iStack_188) {
            *puStack_238 = uStack_1a4;
            lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
            plStack_218 = *pplStack_180;
            uVar20 = *(undefined1 *)((longlong)pplStack_100 + 0x9c);
            lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c708);
            uVar22 = *(undefined4 *)(lVar34 + 4);
            uVar87 = (undefined1)uVar22;
            uVar88 = (undefined1)((uint)uVar22 >> 8);
            uVar89 = (undefined1)((uint)uVar22 >> 0x10);
            uVar90 = (undefined1)((uint)uVar22 >> 0x18);
            uVar91 = 0;
            uVar92 = 0;
            uVar93 = 0;
            uVar94 = 0;
            uVar95 = 0;
            uVar96 = 0;
            uVar97 = 0;
            uVar98 = 0;
            uVar99 = 0;
            uVar100 = 0;
            uVar101 = 0;
            uVar102 = 0;
            pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c720);
            fStack_154 = *pfVar30;
            uStack_178 = (longlong *)CONCAT71(uStack_178._1_7_,0x12);
            uStack_160._4_4_ = (undefined4)lStack_210;
            uStack_168._4_4_ = SUB84(plStack_218,0);
            uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
            uStack_150._0_4_ = CONCAT31(uStack_150._1_3_,uVar20);
            in_stack_fffffffffffffa68 = &uStack_178;
            uStack_158 = uVar22;
            pplVar49 = (longlong **)
                       pdb_1414b4ce0(&plStack_218,lStack_230,pplVar51,uVar21,
                                     in_stack_fffffffffffffa68);
          }
        }
        else {
          *puStack_238 = uStack_1a4;
          uVar20 = 3;
          if ((char)uStack_1b0 != '\0') {
            uVar20 = 10;
          }
          lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
          plStack_218 = *pplStack_180;
          uVar41 = *(undefined1 *)((longlong)pplStack_100 + 0x9c);
          lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c738);
          uVar22 = *(undefined4 *)(lVar34 + 4);
          uVar87 = (undefined1)uVar22;
          uVar88 = (undefined1)((uint)uVar22 >> 8);
          uVar89 = (undefined1)((uint)uVar22 >> 0x10);
          uVar90 = (undefined1)((uint)uVar22 >> 0x18);
          uVar91 = 0;
          uVar92 = 0;
          uVar93 = 0;
          uVar94 = 0;
          uVar95 = 0;
          uVar96 = 0;
          uVar97 = 0;
          uVar98 = 0;
          uVar99 = 0;
          uVar100 = 0;
          uVar101 = 0;
          uVar102 = 0;
          pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c750);
          fStack_154 = *pfVar30;
          uStack_178 = (longlong *)CONCAT71(uStack_178._1_7_,uVar20);
          uStack_160._4_4_ = (undefined4)lStack_210;
          uStack_168._4_4_ = SUB84(plStack_218,0);
          uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
          uStack_150._0_4_ = CONCAT31(uStack_150._1_3_,uVar41);
          in_stack_fffffffffffffa68 = &uStack_178;
          uStack_158 = uVar22;
          pplVar49 = (longlong **)
                     pdb_1414b4ce0(&plStack_218,lStack_230,pplVar51,uVar21,in_stack_fffffffffffffa68
                                  );
        }
      }
    }
    else {
      uVar29 = pdb_1414d1b30(&uStack_178,param_5);
      if ((uStack_160 != CONCAT44(fStack_154,uStack_158) && uStack_160 != 0) ||
         (pplVar49 = (longlong **)(uVar29 & 0xffffffffffffff00),
         uStack_170 != (longlong **)0x0 && uStack_170 != uStack_168)) {
        *uStack_178 = *uStack_178 + uStack_150;
        iVar23 = pdb_1409016e0(pplStack_100);
        plVar25 = plStack_1a0;
        uStack_178 = (longlong *)CONCAT44(uStack_178._4_4_,iVar23);
        if (plStack_1a0[0xf] != 0) {
          uVar38 = pdb_1400aede0(plStack_318,&uStack_178);
          lVar34 = plVar25[0xc];
          uVar29 = plVar25[0xd];
          bVar55 = (byte)(uVar38 >> 0x39);
          auVar60 = ZEXT216(CONCAT11(bVar55,bVar55));
          auVar60 = pshuflw(auVar60,auVar60,0);
          lVar28 = 0;
          while( true ) {
            uVar38 = uVar38 & uVar29;
            pcVar40 = (char *)(lVar34 + uVar38);
            auVar76[0] = -(*pcVar40 == auVar60[0]);
            auVar76[1] = -(pcVar40[1] == auVar60[1]);
            auVar76[2] = -(pcVar40[2] == auVar60[2]);
            auVar76[3] = -(pcVar40[3] == auVar60[3]);
            auVar76[4] = -(pcVar40[4] == auVar60[4]);
            auVar76[5] = -(pcVar40[5] == auVar60[5]);
            auVar76[6] = -(pcVar40[6] == auVar60[6]);
            auVar76[7] = -(pcVar40[7] == auVar60[7]);
            auVar76[8] = -(pcVar40[8] == auVar60[0]);
            auVar76[9] = -(pcVar40[9] == auVar60[1]);
            auVar76[10] = -(pcVar40[10] == auVar60[2]);
            auVar76[0xb] = -(pcVar40[0xb] == auVar60[3]);
            auVar76[0xc] = -(pcVar40[0xc] == auVar60[4]);
            auVar76[0xd] = -(pcVar40[0xd] == auVar60[5]);
            auVar76[0xe] = -(pcVar40[0xe] == auVar60[6]);
            auVar76[0xf] = -(pcVar40[0xf] == auVar60[7]);
            uVar43 = (ushort)(SUB161(auVar76 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar76 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar76 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar76 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar76 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar76 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar76 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar76 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar76 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar76 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar76 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar76 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar76 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar76 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar76 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar76[0xf] >> 7) << 0xf;
            uVar24 = (uint)uVar43;
            while (uVar43 != 0) {
              uVar35 = 0;
              for (uVar47 = uVar24; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
                uVar35 = uVar35 + 1;
              }
              uVar46 = uVar35 + uVar38 & uVar29;
              if (iVar23 == *(int *)(lVar34 + uVar46 * -8 + -8)) {
                fVar56 = *(float *)(lVar34 + -4 + uVar46 * -8);
                if ((fVar56 == 0.0 && 0.0 < fVar103) || (fVar56 + _DAT_142e36f28 <= fVar103)) {
                  lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
                  plStack_218 = *pplStack_180;
                  lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c768);
                  uVar21 = *(undefined4 *)(lVar34 + 4);
                  uVar87 = (undefined1)uVar21;
                  uVar88 = (undefined1)((uint)uVar21 >> 8);
                  uVar89 = (undefined1)((uint)uVar21 >> 0x10);
                  uVar90 = (undefined1)((uint)uVar21 >> 0x18);
                  uVar91 = 0;
                  uVar92 = 0;
                  uVar93 = 0;
                  uVar94 = 0;
                  uVar95 = 0;
                  uVar96 = 0;
                  uVar97 = 0;
                  uVar98 = 0;
                  uVar99 = 0;
                  uVar100 = 0;
                  uVar101 = 0;
                  uVar102 = 0;
                  pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c780);
                  fStack_154 = *pfVar30;
                  uStack_178 = (longlong *)CONCAT71(uStack_178._1_7_,0xf);
                  uStack_178 = (longlong *)CONCAT44(fStack_224,(undefined4)uStack_178);
                  uStack_160._4_4_ = (undefined4)lStack_210;
                  uStack_168._4_4_ = SUB84(plStack_218,0);
                  uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
                  uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
                  uStack_158 = uVar21;
                  pdb_1414aefa0(param_6,&uStack_178,&UNK_14301c798);
                }
                goto LAB_1408ec8e7;
              }
              uVar43 = (ushort)(uVar24 - 1) & (ushort)uVar24;
              uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar43);
            }
            auVar63[0] = -(*pcVar40 == -1);
            auVar63[1] = -(pcVar40[1] == -1);
            auVar63[2] = -(pcVar40[2] == -1);
            auVar63[3] = -(pcVar40[3] == -1);
            auVar63[4] = -(pcVar40[4] == -1);
            auVar63[5] = -(pcVar40[5] == -1);
            auVar63[6] = -(pcVar40[6] == -1);
            auVar63[7] = -(pcVar40[7] == -1);
            auVar63[8] = -(pcVar40[8] == -1);
            auVar63[9] = -(pcVar40[9] == -1);
            auVar63[10] = -(pcVar40[10] == -1);
            auVar63[0xb] = -(pcVar40[0xb] == -1);
            auVar63[0xc] = -(pcVar40[0xc] == -1);
            auVar63[0xd] = -(pcVar40[0xd] == -1);
            auVar63[0xe] = -(pcVar40[0xe] == -1);
            auVar63[0xf] = -(pcVar40[0xf] == -1);
            if ((((((((((((((((SUB161(auVar63 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar63 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar63 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar63 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar63 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar63 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar63 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar63 >> 0x3f,0) & 1) != 0) || (SUB161(auVar63 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar63 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar63 >> 0x57,0) & 1) != 0) || (SUB161(auVar63 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar63 >> 0x67,0) & 1) != 0) || (SUB161(auVar63 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar63 >> 0x77,0) & 1) != 0) || auVar63[0xf] < '\0') break;
            uVar38 = uVar38 + lVar28 + 0x10;
            lVar28 = lVar28 + 0x10;
          }
        }
LAB_1408ec8e7:
        cVar19 = pdb_140901380(&bStack_101);
        if (cVar19 != '\0') {
          iVar23 = pdb_1409016e0(pplStack_100);
          plVar25 = plStack_1a0;
          uStack_178 = (longlong *)CONCAT44(uStack_178._4_4_,iVar23);
          if (plStack_1a0[0x15] != 0) {
            uVar38 = pdb_1400aede0(plStack_310,&uStack_178);
            lVar34 = plVar25[0x12];
            uVar29 = plVar25[0x13];
            bVar55 = (byte)(uVar38 >> 0x39);
            auVar60 = ZEXT216(CONCAT11(bVar55,bVar55));
            auVar60 = pshuflw(auVar60,auVar60,0);
            lVar28 = 0;
            while( true ) {
              uVar38 = uVar38 & uVar29;
              pcVar40 = (char *)(lVar34 + uVar38);
              auVar79[0] = -(*pcVar40 == auVar60[0]);
              auVar79[1] = -(pcVar40[1] == auVar60[1]);
              auVar79[2] = -(pcVar40[2] == auVar60[2]);
              auVar79[3] = -(pcVar40[3] == auVar60[3]);
              auVar79[4] = -(pcVar40[4] == auVar60[4]);
              auVar79[5] = -(pcVar40[5] == auVar60[5]);
              auVar79[6] = -(pcVar40[6] == auVar60[6]);
              auVar79[7] = -(pcVar40[7] == auVar60[7]);
              auVar79[8] = -(pcVar40[8] == auVar60[0]);
              auVar79[9] = -(pcVar40[9] == auVar60[1]);
              auVar79[10] = -(pcVar40[10] == auVar60[2]);
              auVar79[0xb] = -(pcVar40[0xb] == auVar60[3]);
              auVar79[0xc] = -(pcVar40[0xc] == auVar60[4]);
              auVar79[0xd] = -(pcVar40[0xd] == auVar60[5]);
              auVar79[0xe] = -(pcVar40[0xe] == auVar60[6]);
              auVar79[0xf] = -(pcVar40[0xf] == auVar60[7]);
              uVar43 = (ushort)(SUB161(auVar79 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar79 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar79 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar79 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar79 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar79 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar79 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar79 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar79 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar79 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar79 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar79 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar79 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar79 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar79 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar79[0xf] >> 7) << 0xf;
              uVar24 = (uint)uVar43;
              while (uVar43 != 0) {
                uVar35 = 0;
                for (uVar47 = uVar24; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
                  uVar35 = uVar35 + 1;
                }
                uVar46 = uVar35 + uVar38 & uVar29;
                if (iVar23 == *(int *)(lVar34 + uVar46 * -8 + -8)) {
                  fVar103 = *(float *)(lVar34 + -4 + uVar46 * -8);
                  if ((fVar103 == 0.0 && 0.0 < fStack_18c) ||
                     (fVar103 + _DAT_142e36f28 <= fStack_18c)) {
                    lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
                    plStack_218 = *pplStack_180;
                    lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c7b0);
                    uVar21 = *(undefined4 *)(lVar34 + 4);
                    uVar87 = (undefined1)uVar21;
                    uVar88 = (undefined1)((uint)uVar21 >> 8);
                    uVar89 = (undefined1)((uint)uVar21 >> 0x10);
                    uVar90 = (undefined1)((uint)uVar21 >> 0x18);
                    uVar91 = 0;
                    uVar92 = 0;
                    uVar93 = 0;
                    uVar94 = 0;
                    uVar95 = 0;
                    uVar96 = 0;
                    uVar97 = 0;
                    uVar98 = 0;
                    uVar99 = 0;
                    uVar100 = 0;
                    uVar101 = 0;
                    uVar102 = 0;
                    pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c7c8);
                    fStack_154 = *pfVar30;
                    uStack_178 = (longlong *)CONCAT71(uStack_178._1_7_,0x13);
                    uStack_178 = (longlong *)CONCAT44(fStack_220,(undefined4)uStack_178);
                    uStack_160._4_4_ = (undefined4)lStack_210;
                    uStack_168._4_4_ = SUB84(plStack_218,0);
                    uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
                    uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
                    uStack_158 = uVar21;
                    pdb_1414aefa0(param_6,&uStack_178,&UNK_14301c7e0);
                  }
                  goto LAB_1408ed2ca;
                }
                uVar43 = (ushort)(uVar24 - 1) & (ushort)uVar24;
                uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar43);
              }
              auVar66[0] = -(*pcVar40 == -1);
              auVar66[1] = -(pcVar40[1] == -1);
              auVar66[2] = -(pcVar40[2] == -1);
              auVar66[3] = -(pcVar40[3] == -1);
              auVar66[4] = -(pcVar40[4] == -1);
              auVar66[5] = -(pcVar40[5] == -1);
              auVar66[6] = -(pcVar40[6] == -1);
              auVar66[7] = -(pcVar40[7] == -1);
              auVar66[8] = -(pcVar40[8] == -1);
              auVar66[9] = -(pcVar40[9] == -1);
              auVar66[10] = -(pcVar40[10] == -1);
              auVar66[0xb] = -(pcVar40[0xb] == -1);
              auVar66[0xc] = -(pcVar40[0xc] == -1);
              auVar66[0xd] = -(pcVar40[0xd] == -1);
              auVar66[0xe] = -(pcVar40[0xe] == -1);
              auVar66[0xf] = -(pcVar40[0xf] == -1);
              if ((((((((((((((((SUB161(auVar66 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar66 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar66 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar66 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar66 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar66 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar66 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar66 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar66 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar66 >> 0x4f,0) & 1) != 0) || (SUB161(auVar66 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar66 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar66 >> 0x67,0) & 1) != 0) || (SUB161(auVar66 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar66 >> 0x77,0) & 1) != 0) || auVar66[0xf] < '\0') break;
              uVar38 = uVar38 + lVar28 + 0x10;
              lVar28 = lVar28 + 0x10;
            }
          }
        }
LAB_1408ed2ca:
        cVar19 = pdb_140901380(&bStack_101);
        if (cVar19 != '\0') {
          iVar23 = pdb_1409016e0(pplStack_100);
          plVar25 = plStack_1a0;
          uStack_178 = (longlong *)CONCAT44(uStack_178._4_4_,iVar23);
          if (plStack_1a0[0x1b] != 0) {
            uVar38 = pdb_1400aede0(plStack_308,&uStack_178);
            lVar34 = plVar25[0x18];
            uVar29 = plVar25[0x19];
            bVar55 = (byte)(uVar38 >> 0x39);
            auVar60 = ZEXT216(CONCAT11(bVar55,bVar55));
            auVar60 = pshuflw(auVar60,auVar60,0);
            lVar28 = 0;
            while( true ) {
              uVar38 = uVar38 & uVar29;
              pcVar40 = (char *)(lVar34 + uVar38);
              auVar84[0] = -(*pcVar40 == auVar60[0]);
              auVar84[1] = -(pcVar40[1] == auVar60[1]);
              auVar84[2] = -(pcVar40[2] == auVar60[2]);
              auVar84[3] = -(pcVar40[3] == auVar60[3]);
              auVar84[4] = -(pcVar40[4] == auVar60[4]);
              auVar84[5] = -(pcVar40[5] == auVar60[5]);
              auVar84[6] = -(pcVar40[6] == auVar60[6]);
              auVar84[7] = -(pcVar40[7] == auVar60[7]);
              auVar84[8] = -(pcVar40[8] == auVar60[0]);
              auVar84[9] = -(pcVar40[9] == auVar60[1]);
              auVar84[10] = -(pcVar40[10] == auVar60[2]);
              auVar84[0xb] = -(pcVar40[0xb] == auVar60[3]);
              auVar84[0xc] = -(pcVar40[0xc] == auVar60[4]);
              auVar84[0xd] = -(pcVar40[0xd] == auVar60[5]);
              auVar84[0xe] = -(pcVar40[0xe] == auVar60[6]);
              auVar84[0xf] = -(pcVar40[0xf] == auVar60[7]);
              uVar43 = (ushort)(SUB161(auVar84 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar84 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar84 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar84 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar84 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar84 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar84 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar84 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar84 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar84 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar84 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar84 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar84 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar84 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar84 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar84[0xf] >> 7) << 0xf;
              uVar24 = (uint)uVar43;
              while (uVar43 != 0) {
                uVar35 = 0;
                for (uVar47 = uVar24; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
                  uVar35 = uVar35 + 1;
                }
                uVar46 = uVar35 + uVar38 & uVar29;
                if (iVar23 == *(int *)(lVar34 + uVar46 * -8 + -8)) {
                  fVar103 = *(float *)(lVar34 + -4 + uVar46 * -8);
                  if ((fVar103 == 0.0 && 0.0 < fStack_190) ||
                     (fVar103 + _DAT_142e36f28 <= fStack_190)) {
                    lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
                    plStack_218 = *pplStack_180;
                    lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c7f8);
                    uVar21 = *(undefined4 *)(lVar34 + 4);
                    uVar87 = (undefined1)uVar21;
                    uVar88 = (undefined1)((uint)uVar21 >> 8);
                    uVar89 = (undefined1)((uint)uVar21 >> 0x10);
                    uVar90 = (undefined1)((uint)uVar21 >> 0x18);
                    uVar91 = 0;
                    uVar92 = 0;
                    uVar93 = 0;
                    uVar94 = 0;
                    uVar95 = 0;
                    uVar96 = 0;
                    uVar97 = 0;
                    uVar98 = 0;
                    uVar99 = 0;
                    uVar100 = 0;
                    uVar101 = 0;
                    uVar102 = 0;
                    pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c810);
                    fStack_154 = *pfVar30;
                    uStack_178 = (longlong *)CONCAT71(uStack_178._1_7_,0x14);
                    uStack_178 = (longlong *)CONCAT44(fVar105,(undefined4)uStack_178);
                    uStack_160._4_4_ = (undefined4)lStack_210;
                    uStack_168._4_4_ = SUB84(plStack_218,0);
                    uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
                    uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
                    uStack_158 = uVar21;
                    pdb_1414aefa0(param_6,&uStack_178,&UNK_14301c828);
                  }
                  goto LAB_1408ed49c;
                }
                uVar43 = (ushort)(uVar24 - 1) & (ushort)uVar24;
                uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar43);
              }
              auVar71[0] = -(*pcVar40 == -1);
              auVar71[1] = -(pcVar40[1] == -1);
              auVar71[2] = -(pcVar40[2] == -1);
              auVar71[3] = -(pcVar40[3] == -1);
              auVar71[4] = -(pcVar40[4] == -1);
              auVar71[5] = -(pcVar40[5] == -1);
              auVar71[6] = -(pcVar40[6] == -1);
              auVar71[7] = -(pcVar40[7] == -1);
              auVar71[8] = -(pcVar40[8] == -1);
              auVar71[9] = -(pcVar40[9] == -1);
              auVar71[10] = -(pcVar40[10] == -1);
              auVar71[0xb] = -(pcVar40[0xb] == -1);
              auVar71[0xc] = -(pcVar40[0xc] == -1);
              auVar71[0xd] = -(pcVar40[0xd] == -1);
              auVar71[0xe] = -(pcVar40[0xe] == -1);
              auVar71[0xf] = -(pcVar40[0xf] == -1);
              if ((((((((((((((((SUB161(auVar71 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar71 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar71 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar71 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar71 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar71 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar71 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar71 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar71 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar71 >> 0x4f,0) & 1) != 0) || (SUB161(auVar71 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar71 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar71 >> 0x67,0) & 1) != 0) || (SUB161(auVar71 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar71 >> 0x77,0) & 1) != 0) || auVar71[0xf] < '\0') break;
              uVar38 = uVar38 + lVar28 + 0x10;
              lVar28 = lVar28 + 0x10;
            }
          }
        }
LAB_1408ed49c:
        pplVar49 = (longlong **)pdb_1408ef300(&plStack_2c8);
        if ((char)pplVar49 != '\0') {
          lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
          plStack_218 = *pplStack_180;
          lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c840);
          uVar21 = *(undefined4 *)(lVar34 + 4);
          uVar87 = (undefined1)uVar21;
          uVar88 = (undefined1)((uint)uVar21 >> 8);
          uVar89 = (undefined1)((uint)uVar21 >> 0x10);
          uVar90 = (undefined1)((uint)uVar21 >> 0x18);
          uVar91 = 0;
          uVar92 = 0;
          uVar93 = 0;
          uVar94 = 0;
          uVar95 = 0;
          uVar96 = 0;
          uVar97 = 0;
          uVar98 = 0;
          uVar99 = 0;
          uVar100 = 0;
          uVar101 = 0;
          uVar102 = 0;
          pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c858);
          fStack_154 = *pfVar30;
          uStack_178 = (longlong *)CONCAT71(uStack_178._1_7_,(char)uStack_1b0 * '\x02' + '\x16');
          uStack_160._4_4_ = (undefined4)lStack_210;
          uStack_168._4_4_ = SUB84(plStack_218,0);
          uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
          uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
          uStack_158 = uVar21;
          pplVar49 = (longlong **)pdb_1414aefa0(param_6,&uStack_178,&UNK_14301c870);
        }
        if (0 < iStack_108) {
          uVar31 = pdb_140a61160(uStack_398);
          uVar24 = pdb_1409016e0(pplStack_100);
          uVar38 = (ulonglong)uVar24;
          uVar29 = pdb_1414aef60(uVar31);
          uStack_178 = (longlong *)&UNK_14301c500;
          uStack_170 = (longlong **)0xf;
          uVar31 = pdb_140bbbcb0(&uStack_178);
          uStack_178 = (longlong *)pdb_1406d0830(uStack_300);
          uStack_170 = (longlong **)uVar31;
          uVar20 = pdb_1408ffab0(&uStack_178);
          plStack_218 = (longlong *)CONCAT71(plStack_218._1_7_,uVar20);
          uVar20 = pdb_140901040(&plStack_218);
          if (*(char *)(lStack_248 + 0x10) == '\0') {
            uVar24 = CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87))) ^
                     CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87)));
            uVar87 = (undefined1)uVar24;
            uVar88 = (undefined1)(uVar24 >> 8);
            uVar89 = (undefined1)(uVar24 >> 0x10);
            uVar90 = (undefined1)(uVar24 >> 0x18);
            uVar24 = CONCAT13(uVar94,CONCAT12(uVar93,CONCAT11(uVar92,uVar91))) ^
                     CONCAT13(uVar94,CONCAT12(uVar93,CONCAT11(uVar92,uVar91)));
            uVar91 = (undefined1)uVar24;
            uVar92 = (undefined1)(uVar24 >> 8);
            uVar93 = (undefined1)(uVar24 >> 0x10);
            uVar94 = (undefined1)(uVar24 >> 0x18);
            uVar24 = CONCAT13(uVar98,CONCAT12(uVar97,CONCAT11(uVar96,uVar95))) ^
                     CONCAT13(uVar98,CONCAT12(uVar97,CONCAT11(uVar96,uVar95)));
            uVar95 = (undefined1)uVar24;
            uVar96 = (undefined1)(uVar24 >> 8);
            uVar97 = (undefined1)(uVar24 >> 0x10);
            uVar98 = (undefined1)(uVar24 >> 0x18);
            uVar24 = CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99))) ^
                     CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99)));
            uVar99 = (undefined1)uVar24;
            uVar100 = (undefined1)(uVar24 >> 8);
            uVar101 = (undefined1)(uVar24 >> 0x10);
            uVar102 = (undefined1)(uVar24 >> 0x18);
          }
          else {
            uVar21 = *(undefined4 *)(lStack_248 + 0x14);
            uVar87 = (undefined1)uVar21;
            uVar88 = (undefined1)((uint)uVar21 >> 8);
            uVar89 = (undefined1)((uint)uVar21 >> 0x10);
            uVar90 = (undefined1)((uint)uVar21 >> 0x18);
            uVar91 = 0;
            uVar92 = 0;
            uVar93 = 0;
            uVar94 = 0;
            uVar95 = 0;
            uVar96 = 0;
            uVar97 = 0;
            uVar98 = 0;
            uVar99 = 0;
            uVar100 = 0;
            uVar101 = 0;
            uVar102 = 0;
          }
          uVar41 = 0;
          if ((char)uStack_1b0 != '\0') {
            uVar41 = 7;
          }
          lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
          plStack_218 = *pplStack_180;
          lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c888);
          uVar21 = *(undefined4 *)(lVar34 + 4);
          pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c8a0);
          fStack_154 = *pfVar30;
          uStack_178._0_2_ = CONCAT11(uVar29 == uVar38,uVar41);
          uStack_178._0_3_ = CONCAT12(uVar20,(ushort)uStack_178);
          uStack_178._0_4_ = CONCAT13((char)uStack_194,(undefined3)uStack_178);
          uStack_178 = (longlong *)
                       CONCAT44(CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87))),
                                (undefined4)uStack_178);
          uStack_170 = (longlong **)CONCAT44(fVar57,fVar104);
          uStack_168._0_4_ = fStack_184;
          uStack_160._4_4_ = (undefined4)lStack_210;
          uStack_168._4_4_ = SUB84(plStack_218,0);
          uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
          uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
          uStack_158 = uVar21;
          pplVar49 = (longlong **)pdb_1414aefa0(param_6,&uStack_178,&UNK_14301c8b8);
        }
        if (0 < iStack_188) {
          if (*(char *)(lStack_248 + 0x10) == '\0') {
            uVar24 = CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87))) ^
                     CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87)));
            uVar87 = (undefined1)uVar24;
            uVar88 = (undefined1)(uVar24 >> 8);
            uVar89 = (undefined1)(uVar24 >> 0x10);
            uVar90 = (undefined1)(uVar24 >> 0x18);
            uVar24 = CONCAT13(uVar94,CONCAT12(uVar93,CONCAT11(uVar92,uVar91))) ^
                     CONCAT13(uVar94,CONCAT12(uVar93,CONCAT11(uVar92,uVar91)));
            uVar91 = (undefined1)uVar24;
            uVar92 = (undefined1)(uVar24 >> 8);
            uVar93 = (undefined1)(uVar24 >> 0x10);
            uVar94 = (undefined1)(uVar24 >> 0x18);
            uVar24 = CONCAT13(uVar98,CONCAT12(uVar97,CONCAT11(uVar96,uVar95))) ^
                     CONCAT13(uVar98,CONCAT12(uVar97,CONCAT11(uVar96,uVar95)));
            uVar95 = (undefined1)uVar24;
            uVar96 = (undefined1)(uVar24 >> 8);
            uVar97 = (undefined1)(uVar24 >> 0x10);
            uVar98 = (undefined1)(uVar24 >> 0x18);
            uVar24 = CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99))) ^
                     CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99)));
            uVar99 = (undefined1)uVar24;
            uVar100 = (undefined1)(uVar24 >> 8);
            uVar101 = (undefined1)(uVar24 >> 0x10);
            uVar102 = (undefined1)(uVar24 >> 0x18);
          }
          else {
            uVar21 = *(undefined4 *)(lStack_248 + 0x14);
            uVar87 = (undefined1)uVar21;
            uVar88 = (undefined1)((uint)uVar21 >> 8);
            uVar89 = (undefined1)((uint)uVar21 >> 0x10);
            uVar90 = (undefined1)((uint)uVar21 >> 0x18);
            uVar91 = 0;
            uVar92 = 0;
            uVar93 = 0;
            uVar94 = 0;
            uVar95 = 0;
            uVar96 = 0;
            uVar97 = 0;
            uVar98 = 0;
            uVar99 = 0;
            uVar100 = 0;
            uVar101 = 0;
            uVar102 = 0;
          }
          lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
          plStack_218 = *pplStack_180;
          lVar34 = pdb_140901490(pplStack_f8,&UNK_14301c8d0);
          uVar21 = *(undefined4 *)(lVar34 + 4);
          pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c8e8);
          fStack_154 = *pfVar30;
          uStack_178._0_2_ = CONCAT11((char)uStack_194,0xe);
          uStack_178 = (longlong *)
                       CONCAT44(CONCAT13(uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87))),
                                (undefined4)uStack_178);
          uStack_170 = (longlong **)CONCAT44(fStack_198,fVar104);
          uStack_168._0_4_ = fStack_184;
          uStack_160._4_4_ = (undefined4)lStack_210;
          uStack_168._4_4_ = SUB84(plStack_218,0);
          uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
          uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
          uStack_158 = uVar21;
          pplVar49 = (longlong **)pdb_1414aefa0(param_6,&uStack_178,&UNK_14301c900);
        }
      }
    }
  }
  else {
    lVar34 = 0;
    if ((longlong *)0x1 < *pplStack_100) {
      lVar34 = (longlong)*pplStack_100 - 2;
    }
    uVar21 = *(undefined4 *)(pplStack_100 + 0xf);
    *puStack_238 = uStack_1a4;
    uVar20 = 4;
    if ((char)uStack_1b0 != '\0') {
      uVar20 = 0xb;
    }
    lStack_210 = CONCAT44(lStack_210._4_4_,*(undefined4 *)(pplStack_180 + 1));
    plStack_218 = *pplStack_180;
    uVar41 = *(undefined1 *)((longlong)pplStack_100 + 0x9c);
    lVar28 = pdb_140901490(pplStack_f8,&UNK_14301c918);
    uVar22 = *(undefined4 *)(lVar28 + 4);
    uVar87 = (undefined1)uVar22;
    uVar88 = (undefined1)((uint)uVar22 >> 8);
    uVar89 = (undefined1)((uint)uVar22 >> 0x10);
    uVar90 = (undefined1)((uint)uVar22 >> 0x18);
    uVar91 = 0;
    uVar92 = 0;
    uVar93 = 0;
    uVar94 = 0;
    uVar95 = 0;
    uVar96 = 0;
    uVar97 = 0;
    uVar98 = 0;
    uVar99 = 0;
    uVar100 = 0;
    uVar101 = 0;
    uVar102 = 0;
    pfVar30 = (float *)pdb_140901490(pplStack_f8,&UNK_14301c930);
    fStack_154 = *pfVar30;
    uStack_178 = (longlong *)CONCAT71(uStack_178._1_7_,uVar20);
    uStack_160._4_4_ = (undefined4)lStack_210;
    uStack_168._4_4_ = SUB84(plStack_218,0);
    uStack_160._0_4_ = (undefined4)((ulonglong)plStack_218 >> 0x20);
    uStack_150._0_4_ = CONCAT31(uStack_150._1_3_,uVar41);
    in_stack_fffffffffffffa68 = &uStack_178;
    uStack_158 = uVar22;
    pplVar49 = (longlong **)
               pdb_1414b4ce0(&plStack_218,lStack_230,lVar34,uVar21,in_stack_fffffffffffffa68);
  }
  uStack_240 = CONCAT71((int7)((ulonglong)pplVar49 >> 8),1);
  pplVar51 = pplStack_340;
  pplVar42 = pplStack_338;
  pplVar49 = pplStack_250;
  puVar53 = puStack_330;
  goto LAB_1408eb2a0;
code_r0x0001408eb8fd:
  iVar23 = pdb_1409016e0(pplStack_100);
  lVar28 = uStack_150;
  if (*(int *)(uVar38 + 300) == iVar23) {
LAB_1408eb913:
    fVar57 = (float)pdb_140c014f0(uVar38);
    uVar21 = *(undefined4 *)(uVar38 + 0x128);
    uVar22 = *(undefined4 *)(uVar38 + 300);
    plVar25 = (longlong *)pdb_140c017b0(uVar21,uVar22);
    lVar28 = lStack_328;
    plStack_218 = plVar25;
    if (*(longlong *)(lStack_328 + 0x180) != 0) {
      uVar32 = pdb_1400af0a0(lStack_3d8,&plStack_218);
      lVar33 = *(longlong *)(lVar28 + 0x168);
      uVar46 = *(ulonglong *)(lVar28 + 0x170);
      bVar55 = (byte)(uVar32 >> 0x39);
      auVar60 = ZEXT216(CONCAT11(bVar55,bVar55));
      auVar60 = pshuflw(auVar60,auVar60,0);
      lVar28 = 0;
      while( true ) {
        uVar32 = uVar32 & uVar46;
        auVar77 = *(undefined1 (*) [16])(lVar33 + uVar32);
        auVar74[0] = -(auVar77[0] == auVar60[0]);
        auVar74[1] = -(auVar77[1] == auVar60[1]);
        auVar74[2] = -(auVar77[2] == auVar60[2]);
        auVar74[3] = -(auVar77[3] == auVar60[3]);
        auVar74[4] = -(auVar77[4] == auVar60[4]);
        auVar74[5] = -(auVar77[5] == auVar60[5]);
        auVar74[6] = -(auVar77[6] == auVar60[6]);
        auVar74[7] = -(auVar77[7] == auVar60[7]);
        auVar74[8] = -(auVar77[8] == auVar60[0]);
        auVar74[9] = -(auVar77[9] == auVar60[1]);
        auVar74[10] = -(auVar77[10] == auVar60[2]);
        auVar74[0xb] = -(auVar77[0xb] == auVar60[3]);
        auVar74[0xc] = -(auVar77[0xc] == auVar60[4]);
        auVar74[0xd] = -(auVar77[0xd] == auVar60[5]);
        auVar74[0xe] = -(auVar77[0xe] == auVar60[6]);
        auVar74[0xf] = -(auVar77[0xf] == auVar60[7]);
        uVar43 = (ushort)(SUB161(auVar74 >> 7,0) & 1) | (ushort)(SUB161(auVar74 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar74 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar74 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar74 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar74 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar74 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar74 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar74 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar74 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar74 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar74 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar74 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar74 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar74 >> 0x77,0) & 1) << 0xe | (ushort)(auVar74[0xf] >> 7) << 0xf
        ;
        uVar24 = (uint)uVar43;
        while (uVar43 != 0) {
          uVar35 = 0;
          for (uVar47 = uVar24; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
            uVar35 = uVar35 + 1;
          }
          lVar45 = lVar33 + (uVar35 + uVar32 & uVar46) * -0x10;
          if (plVar25 == *(longlong **)(lVar45 + -0x10)) {
            if (*(char *)(lVar45 + -8) == '\x01') {
              pdb_140c45b00(abStack_548,uStack_278,uVar21);
              pdb_140c45b00(acStack_588,uStack_278,uVar22);
              fVar15 = fStack_524;
              uVar21 = uStack_560;
              fVar9 = fStack_564;
              if (((abStack_548[0] & 1) != 0) && (acStack_588[0] != '\0')) {
                uVar91 = 0;
                uVar92 = 0;
                uVar93 = 0;
                uVar94 = 0;
                uVar95 = 0;
                uVar96 = 0;
                uVar97 = 0;
                uVar98 = 0;
                uVar99 = 0;
                uVar100 = 0;
                uVar101 = 0;
                uVar102 = 0;
                uStack_178 = *(longlong **)(lStack_260 + 8);
                uStack_170 = (longlong **)(*(longlong *)(lStack_260 + 0x10) * 2);
                uStack_168._0_4_ = (float)*(undefined8 *)(lStack_260 + 0x50);
                uStack_168._4_4_ =
                     (undefined4)((ulonglong)*(undefined8 *)(lStack_260 + 0x50) >> 0x20);
                fVar58 = (float)pdb_1402202d0(&uStack_178);
                uStack_178 = *(longlong **)(lStack_260 + 8);
                uStack_170 = (longlong **)(*(longlong *)(lStack_260 + 0x10) * 2);
                uStack_168._0_4_ = (float)*(undefined8 *)(lStack_260 + 0x50);
                uStack_168._4_4_ =
                     (undefined4)((ulonglong)*(undefined8 *)(lStack_260 + 0x50) >> 0x20);
                fVar59 = (float)pdb_1402202d0(&uStack_178,lStack_260,uVar21);
                fVar9 = ((fVar9 - fVar59) + (fVar15 - fVar58)) * _DAT_142e36f50;
                uVar87 = SUB41(fVar9,0);
                uVar88 = (undefined1)((uint)fVar9 >> 8);
                uVar89 = (undefined1)((uint)fVar9 >> 0x10);
                uVar90 = (undefined1)((uint)fVar9 >> 0x18);
                fStack_184 = fStack_184 + fVar9;
                iStack_21c = iStack_21c + 1;
              }
            }
            goto LAB_1408ebb14;
          }
          uVar43 = (ushort)(uVar24 - 1) & (ushort)uVar24;
          uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar43);
        }
        auVar61[0] = -(auVar77[0] == -1);
        auVar61[1] = -(auVar77[1] == -1);
        auVar61[2] = -(auVar77[2] == -1);
        auVar61[3] = -(auVar77[3] == -1);
        auVar61[4] = -(auVar77[4] == -1);
        auVar61[5] = -(auVar77[5] == -1);
        auVar61[6] = -(auVar77[6] == -1);
        auVar61[7] = -(auVar77[7] == -1);
        auVar61[8] = -(auVar77[8] == -1);
        auVar61[9] = -(auVar77[9] == -1);
        auVar61[10] = -(auVar77[10] == -1);
        auVar61[0xb] = -(auVar77[0xb] == -1);
        auVar61[0xc] = -(auVar77[0xc] == -1);
        auVar61[0xd] = -(auVar77[0xd] == -1);
        auVar61[0xe] = -(auVar77[0xe] == -1);
        auVar61[0xf] = -(auVar77[0xf] == -1);
        if ((((((((((((((((SUB161(auVar61 >> 7,0) & 1) != 0 || (SUB161(auVar61 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar61 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar61 >> 0x1f,0) & 1) != 0) || (SUB161(auVar61 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar61 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar61 >> 0x37,0) & 1) != 0) || (SUB161(auVar61 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar61 >> 0x47,0) & 1) != 0) || (SUB161(auVar61 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar61 >> 0x57,0) & 1) != 0) || (SUB161(auVar61 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar61 >> 0x67,0) & 1) != 0) || (SUB161(auVar61 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar61 >> 0x77,0) & 1) != 0) || auVar61[0xf] < '\0') break;
        uVar32 = uVar32 + lVar28 + 0x10;
        lVar28 = lVar28 + 0x10;
      }
    }
LAB_1408ebb14:
    uVar46 = *(ulonglong *)(uVar38 + 0x140);
    if (uVar46 < 2) {
      pbVar39 = (byte *)(uVar38 + 0x130);
    }
    else {
      pbVar39 = *(byte **)(uVar38 + 0x130);
      uVar46 = *(ulonglong *)(uVar38 + 0x138);
    }
    fVar56 = fVar56 + fVar57;
    pbVar2 = pbVar39 + uVar46 * 4;
    uVar46 = 0;
    lVar28 = uStack_150;
    while (pbVar39 != pbVar2) {
      uVar44 = *(ushort *)(pbVar39 + 2) + uVar46;
      uVar32 = uVar44;
      if (*(ulonglong *)(uVar38 + 0x10) <= uVar44) {
LAB_1408ee648:
        uStack_150 = lVar28;
        pdb_142dc8420(uVar46,uVar32,*(ulonglong *)(uVar38 + 0x10),&UNK_14301c948);
        goto LAB_1408ee7a2;
      }
      uVar32 = uVar44 + 1;
      uStack_150 = uVar32 - uVar46;
      if (uVar32 < uVar46) goto LAB_1408ee648;
      if (*(ulonglong *)(uVar38 + 0x48) <= uVar44) {
        uStack_150 = lVar28;
        pdb_142dc8420(uVar46,uVar44,*(ulonglong *)(uVar38 + 0x48),&UNK_14301c960);
        goto LAB_1408ee7a2;
      }
      uStack_178 = (longlong *)(*(longlong *)(uVar38 + 8) + uVar46 * 8);
      uStack_168 = (longlong **)(*(longlong *)(uVar38 + 0x40) + uVar46 * 4);
      uStack_170 = (longlong **)(*(longlong *)(uVar38 + 8) + uVar32 * 8);
      uStack_160 = *(longlong *)(uVar38 + 0x40) + uVar32 * 4;
      uStack_158 = 0;
      fStack_154 = 0.0;
      uStack_148 = 0;
      fVar57 = (float)pdb_1414e26d0(&uStack_178);
      bVar55 = *pbVar39;
      pbVar39 = pbVar39 + 4;
      lVar33 = (ulonglong)bVar55 - 1;
      if ((ulonglong)bVar55 < 2) {
        lVar33 = 0;
      }
      lVar28 = uStack_150;
      if (lVar33 == 4) {
        iStack_108 = iStack_108 + 1;
        fVar104 = fVar104 + fVar57;
        uVar46 = uVar44;
      }
      else {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(bVar55) {
        case 2:
          if (*(ulonglong *)(uVar38 + 0x60) <= uVar46) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar46,*(ulonglong *)(uVar38 + 0x60),&UNK_14301c990);
          }
          fVar104 = fVar104 + fVar57;
          iStack_108 = iStack_108 + 1;
          fStack_220 = fStack_220 + *(float *)(*(longlong *)(uVar38 + 0x58) + uVar46 * 4) * fVar57;
          fStack_18c = fStack_18c + fVar57;
          uVar46 = uVar44;
          break;
        case 3:
          if (*(ulonglong *)(uVar38 + 0x60) <= uVar46) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar46,*(ulonglong *)(uVar38 + 0x60),&UNK_14301c9a8);
          }
          fStack_198 = fStack_198 + fVar57;
          iStack_188 = iStack_188 + 1;
          fStack_224 = fStack_224 + *(float *)(*(longlong *)(uVar38 + 0x58) + uVar46 * 4) * fVar57;
          fVar103 = fVar103 + fVar57;
          uVar46 = uVar44;
          break;
        default:
          if (*(ulonglong *)(uVar38 + 0x60) <= uVar46) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar46,*(ulonglong *)(uVar38 + 0x60),&UNK_14301c9c0);
          }
          fVar105 = *(float *)(*(longlong *)(uVar38 + 0x58) + uVar46 * 4) * fVar57;
          iStack_108 = iStack_108 + 1;
          fVar104 = fVar104 + fVar57;
          fStack_190 = fStack_190 + fVar57;
          uVar46 = uVar44;
        }
      }
    }
  }
  goto LAB_1408eb8d0;
}

