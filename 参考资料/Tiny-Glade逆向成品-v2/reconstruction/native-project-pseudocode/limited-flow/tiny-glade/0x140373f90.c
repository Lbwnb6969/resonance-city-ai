// VA 0x140373f90, PDB extent 6920 bytes
// tiny_glade::gui::settings::do_gui_escape_menu_settings
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140375495) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::settings::do_gui_escape_menu_settings
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 6920 */

void pdb_140373f90(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7,code *param_8,
                  longlong *param_9,longlong *param_10,undefined **param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  int *piVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  char cVar15;
  uint uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined **ppuVar21;
  int iVar22;
  uint uVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined **ppuVar28;
  undefined8 uVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  ushort uVar32;
  longlong lVar33;
  undefined4 uVar34;
  bool bVar35;
  byte bVar36;
  undefined1 auVar37 [16];
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined8 uStack_508;
  undefined8 uStack_500;
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
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined **ppuStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  longlong lStack_468;
  longlong lStack_460;
  longlong lStack_458;
  longlong lStack_450;
  longlong lStack_448;
  longlong lStack_440;
  longlong lStack_438;
  longlong lStack_430;
  longlong lStack_428;
  longlong lStack_420;
  longlong lStack_418;
  longlong lStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  longlong lStack_388;
  longlong lStack_380;
  longlong lStack_378;
  longlong lStack_370;
  undefined1 auStack_368 [16];
  undefined1 auStack_358 [16];
  undefined8 uStack_348;
  undefined8 uStack_340;
  longlong lStack_338;
  longlong lStack_330;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined8 uStack_308;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  longlong lStack_258;
  longlong lStack_250;
  longlong lStack_248;
  longlong lStack_240;
  longlong lStack_238;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  uint *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined1 uStack_1b6;
  undefined1 uStack_1b5;
  undefined1 uStack_1b4;
  undefined1 uStack_1b3;
  undefined1 uStack_1b2;
  undefined1 uStack_1b1;
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  undefined1 uStack_1ae;
  undefined1 uStack_1ad;
  undefined1 uStack_1ac;
  undefined1 uStack_1ab;
  undefined1 uStack_1aa;
  undefined1 uStack_1a9;
  longlong lStack_1a0;
  undefined8 uStack_198;
  longlong lStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  uint uStack_16c;
  code *pcStack_168;
  undefined **ppuStack_160;
  code *pcStack_158;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined1 uStack_14e;
  undefined1 uStack_14d;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  undefined1 uStack_14a;
  undefined1 uStack_149;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined1 uStack_146;
  undefined1 uStack_145;
  undefined1 uStack_144;
  undefined1 uStack_143;
  undefined1 uStack_142;
  undefined1 uStack_141;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  longlong lStack_128;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  byte *pbStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  longlong *plStack_e8;
  undefined8 uStack_e0;
  longlong *plStack_c8;
  undefined4 uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a4;
  undefined **ppuStack_a0;
  char acStack_98 [3];
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  uStack_3a8 = param_1[4];
  uStack_3a0 = param_1[5];
  uStack_398 = param_1[6];
  uStack_390 = param_1[7];
  uStack_3c8 = param_1[8];
  uStack_3c0 = param_1[9];
  uStack_3b8 = param_1[10];
  uStack_3b0 = param_1[0xb];
  uStack_3e8 = param_1[0xc];
  uStack_3e0 = param_1[0xd];
  uStack_3d8 = param_1[0xe];
  uStack_3d0 = param_1[0xf];
  uStack_408 = param_1[0x10];
  uStack_400 = param_1[0x11];
  uStack_3f8 = param_1[0x12];
  uStack_3f0 = param_1[0x13];
  lStack_428 = *param_3;
  lStack_420 = param_3[1];
  lStack_418 = param_3[2];
  lStack_410 = param_3[3];
  lStack_388 = param_3[4];
  lStack_380 = param_3[5];
  lStack_378 = param_3[6];
  lStack_370 = param_3[7];
  lStack_448 = param_3[8];
  lStack_440 = param_3[9];
  lStack_438 = param_3[10];
  lStack_430 = param_3[0xb];
  lStack_468 = param_3[0xc];
  lStack_460 = param_3[0xd];
  lStack_458 = param_3[0xe];
  lStack_450 = param_3[0xf];
  uStack_4c8 = *param_5;
  uStack_4c0 = param_5[1];
  uStack_4b8 = param_5[2];
  uStack_4b0 = param_5[3];
  uStack_4e8 = param_5[4];
  uStack_4e0 = param_5[5];
  uStack_4d8 = param_5[6];
  uStack_4d0 = param_5[7];
  uStack_488 = param_5[8];
  uStack_480 = param_5[9];
  uStack_478 = param_5[10];
  uStack_470 = param_5[0xb];
  uStack_508 = param_5[0xc];
  uStack_500 = param_5[0xd];
  uVar39 = *(undefined1 *)(param_5 + 0xe);
  uVar41 = *(undefined1 *)((longlong)param_5 + 0x71);
  uVar43 = *(undefined1 *)((longlong)param_5 + 0x72);
  uVar45 = *(undefined1 *)((longlong)param_5 + 0x73);
  uVar46 = *(undefined1 *)((longlong)param_5 + 0x74);
  uVar47 = *(undefined1 *)((longlong)param_5 + 0x75);
  uVar48 = *(undefined1 *)((longlong)param_5 + 0x76);
  uVar49 = *(undefined1 *)((longlong)param_5 + 0x77);
  uVar50 = *(undefined1 *)(param_5 + 0xf);
  uVar51 = *(undefined1 *)((longlong)param_5 + 0x79);
  uVar52 = *(undefined1 *)((longlong)param_5 + 0x7a);
  uVar53 = *(undefined1 *)((longlong)param_5 + 0x7b);
  uVar54 = *(undefined1 *)((longlong)param_5 + 0x7c);
  uVar55 = *(undefined1 *)((longlong)param_5 + 0x7d);
  uVar56 = *(undefined1 *)((longlong)param_5 + 0x7e);
  uVar57 = *(undefined1 *)((longlong)param_5 + 0x7f);
  piVar8 = (int *)*param_2;
  uStack_4f8 = uVar39;
  uStack_4f7 = uVar41;
  uStack_4f6 = uVar43;
  uStack_4f5 = uVar45;
  uStack_4f4 = uVar46;
  uStack_4f3 = uVar47;
  uStack_4f2 = uVar48;
  uStack_4f1 = uVar49;
  uStack_4f0 = uVar50;
  uStack_4ef = uVar51;
  uStack_4ee = uVar52;
  uStack_4ed = uVar53;
  uStack_4ec = uVar54;
  uStack_4eb = uVar55;
  uStack_4ea = uVar56;
  uStack_4e9 = uVar57;
  cVar15 = pdb_140a00370(piVar8);
  lVar19 = lStack_428;
  if (cVar15 != '\0') {
    if ((*(uint *)param_11 < 2) && (param_11[2] != (undefined *)0x0)) {
      pub_1406abac0(param_11[3],(longlong)param_11[2] * 0xc,4);
    }
    *param_11 = (undefined *)0x3;
    param_11[6] = (undefined *)0x0;
    return;
  }
  *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
  ppuVar21 = (undefined **)*param_7;
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  plVar9 = (longlong *)*param_4;
  if (SBORROW8(0,*plVar9)) {
    bVar35 = *(int *)(lStack_428 + 0x68) == 1;
    if (bVar35) {
      ppuStack_f8 = *(undefined ***)(lStack_428 + 0x6c);
      ppuStack_f0 = *(undefined ***)(lStack_428 + 0x74);
    }
    pbStack_100 = (byte *)(ulonglong)bVar35;
    uVar34 = *(undefined4 *)(lStack_428 + 0x90);
    uStack_93 = *(undefined1 *)(lStack_428 + 0x7c);
    uStack_94 = *(undefined1 *)(lStack_428 + 0x7d);
    uStack_95 = *(undefined1 *)(lStack_428 + 0x7e);
    lStack_1a0 = *(longlong *)(lStack_428 + 0x60);
    ppuStack_a0 = *(undefined ***)(lStack_428 + 0x38);
    if (SBORROW8(0,(longlong)ppuStack_a0)) {
LAB_1403741f9:
      lStack_338 = *(longlong *)(lVar19 + 0x50);
      lStack_330 = *(longlong *)(lVar19 + 0x58);
    }
    else if (ppuStack_a0 != (undefined **)0x8000000000000001) {
      pdb_140f60be0(&ppuStack_2f8,lStack_428 + 0x38);
      pcStack_168 = (code *)ppuStack_2f0;
      lStack_190 = (longlong)uStack_2e8;
      ppuStack_a0 = ppuStack_2f8;
      goto LAB_1403741f9;
    }
    ppuStack_318 = ppuStack_f8;
    ppuStack_310 = ppuStack_f0;
    uStack_110 = *(undefined4 *)(lVar19 + 0x80);
    uVar4 = *(undefined4 *)(lVar19 + 0x84);
    uStack_114 = *(undefined4 *)(lVar19 + 0x88);
    uVar5 = *(undefined4 *)(lVar19 + 0x8c);
    uVar16 = *(uint *)(lVar19 + 0xaa);
    acStack_98[2] = *(undefined1 *)(lVar19 + 0xc5);
    uStack_a4 = CONCAT31(uStack_a4._1_3_,*(undefined1 *)(lVar19 + 0xc6));
    uVar29 = *(undefined8 *)(lVar19 + 0x94);
    uVar14 = *(undefined8 *)(lVar19 + 0x9c);
    uVar17 = pdb_140174fb0(&ppuStack_160,lVar19);
    if (*(char *)(lVar19 + 0xae) == '\x01') {
      puStack_138 = *(undefined **)(lVar19 + 0xaf);
      ppuStack_130 = *(undefined ***)(lVar19 + 0xb7);
      uStack_bc = (undefined4)CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
    }
    else {
      uStack_bc = 0;
    }
    auStack_368 = ZEXT416(uVar16);
    auStack_358 = ZEXT416(*(uint *)(lVar19 + 0xbf));
    uStack_91 = *(undefined1 *)(lVar19 + 0xc3);
    uStack_92 = *(undefined1 *)(lVar19 + 0xc4);
    uVar7 = *(undefined4 *)(lVar19 + 0x30);
    uStack_348 = uVar29;
    uStack_340 = uVar14;
    uStack_10c = uVar34;
    uStack_108 = uVar5;
    uStack_104 = uVar4;
    pdb_140175e80(&ppuStack_f8,lVar19 + 0x18);
    uStack_e0 = (undefined **)CONCAT44(uStack_e0._4_4_,uVar7);
    uStack_198 = *(undefined8 *)(lVar19 + 0xa4);
    uStack_b8 = (uint)ppuStack_318;
    uStack_b4 = (undefined4)((ulonglong)ppuStack_318 >> 0x20);
    uStack_b0 = SUB84(ppuStack_310,0);
    uStack_ac = (undefined4)((ulonglong)ppuStack_310 >> 0x20);
    ppuStack_2f8 = ppuStack_160;
    ppuStack_2f0 = (undefined **)pcStack_158;
    uStack_2e8 = (undefined **)
                 CONCAT17(uStack_149,
                          CONCAT16(uStack_14a,
                                   CONCAT15(uStack_14b,
                                            CONCAT14(uStack_14c,
                                                     CONCAT13(uStack_14d,
                                                              CONCAT12(uStack_14e,
                                                                       CONCAT11(uStack_14f,
                                                                                uStack_150)))))));
    puStack_188 = puStack_138;
    ppuStack_180 = ppuStack_130;
    uStack_2e0 = ppuStack_f8;
    ppuStack_2d8 = ppuStack_f0;
    ppuStack_2d0 = (undefined **)plStack_e8;
    uStack_2c8 = (uint *)CONCAT44(uStack_e0._4_4_,uVar7);
    plStack_c8 = plVar9;
    if (!SBORROW8(0,*plVar9)) {
      pdb_1404cfed0(plVar9);
    }
    plStack_c8[6] = (longlong)uStack_2c8;
    plStack_c8[4] = (longlong)ppuStack_2d8;
    plStack_c8[5] = (longlong)ppuStack_2d0;
    *(undefined1 *)(plStack_c8 + 2) = (undefined1)uStack_2e8;
    *(undefined1 *)((longlong)plStack_c8 + 0x11) = uStack_2e8._1_1_;
    *(undefined1 *)((longlong)plStack_c8 + 0x12) = uStack_2e8._2_1_;
    *(undefined1 *)((longlong)plStack_c8 + 0x13) = uStack_2e8._3_1_;
    *(undefined1 *)((longlong)plStack_c8 + 0x14) = uStack_2e8._4_1_;
    *(undefined1 *)((longlong)plStack_c8 + 0x15) = uStack_2e8._5_1_;
    *(undefined1 *)((longlong)plStack_c8 + 0x16) = uStack_2e8._6_1_;
    *(undefined1 *)((longlong)plStack_c8 + 0x17) = uStack_2e8._7_1_;
    *(undefined1 *)(plStack_c8 + 3) = (undefined1)uStack_2e0;
    *(undefined1 *)((longlong)plStack_c8 + 0x19) = uStack_2e0._1_1_;
    *(undefined1 *)((longlong)plStack_c8 + 0x1a) = uStack_2e0._2_1_;
    *(undefined1 *)((longlong)plStack_c8 + 0x1b) = uStack_2e0._3_1_;
    *(undefined1 *)((longlong)plStack_c8 + 0x1c) = uStack_2e0._4_1_;
    *(undefined1 *)((longlong)plStack_c8 + 0x1d) = uStack_2e0._5_1_;
    *(undefined1 *)((longlong)plStack_c8 + 0x1e) = uStack_2e0._6_1_;
    *(undefined1 *)((longlong)plStack_c8 + 0x1f) = uStack_2e0._7_1_;
    *plStack_c8 = (longlong)ppuStack_2f8;
    plStack_c8[1] = (longlong)ppuStack_2f0;
    plStack_c8[7] = (longlong)ppuStack_a0;
    plStack_c8[8] = (longlong)pcStack_168;
    plStack_c8[9] = lStack_190;
    plStack_c8[10] = lStack_338;
    plStack_c8[0xb] = lStack_330;
    plStack_c8[0xc] = lStack_1a0;
    *(int *)(plStack_c8 + 0xd) = (int)pbStack_100;
    *(ulonglong *)((longlong)plStack_c8 + 0x6c) = CONCAT44(uStack_b4,uStack_b8);
    *(ulonglong *)((longlong)plStack_c8 + 0x74) = CONCAT44(uStack_ac,uStack_b0);
    *(undefined1 *)((longlong)plStack_c8 + 0x7c) = uStack_93;
    *(undefined1 *)((longlong)plStack_c8 + 0x7d) = uStack_94;
    *(undefined1 *)((longlong)plStack_c8 + 0x7e) = uStack_95;
    *(undefined4 *)(plStack_c8 + 0x10) = uStack_110;
    *(undefined4 *)((longlong)plStack_c8 + 0x84) = uStack_104;
    *(undefined4 *)(plStack_c8 + 0x11) = uStack_114;
    *(undefined4 *)((longlong)plStack_c8 + 0x8c) = uStack_108;
    *(undefined4 *)(plStack_c8 + 0x12) = uStack_10c;
    *(undefined8 *)((longlong)plStack_c8 + 0x94) = uStack_348;
    *(undefined8 *)((longlong)plStack_c8 + 0x9c) = uStack_340;
    *(short *)(plStack_c8 + 0x15) = (short)((ulonglong)uStack_198 >> 0x20);
    *(int *)((longlong)plStack_c8 + 0xa4) = (int)uStack_198;
    *(undefined4 *)((longlong)plStack_c8 + 0xaa) = auStack_368._0_4_;
    *(char *)((longlong)plStack_c8 + 0xae) = (char)uStack_bc;
    *(undefined **)((longlong)plStack_c8 + 0xaf) = puStack_188;
    *(undefined ***)((longlong)plStack_c8 + 0xb7) = ppuStack_180;
    *(undefined4 *)((longlong)plStack_c8 + 0xbf) = auStack_358._0_4_;
    *(undefined1 *)((longlong)plStack_c8 + 0xc3) = uStack_91;
    *(undefined1 *)((longlong)plStack_c8 + 0xc4) = uStack_92;
    *(char *)((longlong)plStack_c8 + 0xc5) = acStack_98[2];
    *(undefined1 *)((longlong)plStack_c8 + 0xc6) = (undefined1)uStack_a4;
    uVar39 = (undefined1)uStack_2e8;
    uVar41 = uStack_2e8._1_1_;
    uVar43 = uStack_2e8._2_1_;
    uVar45 = uStack_2e8._3_1_;
    uVar46 = uStack_2e8._4_1_;
    uVar47 = uStack_2e8._5_1_;
    uVar48 = uStack_2e8._6_1_;
    uVar49 = uStack_2e8._7_1_;
    uVar50 = (undefined1)uStack_2e0;
    uVar51 = uStack_2e0._1_1_;
    uVar52 = uStack_2e0._2_1_;
    uVar53 = uStack_2e0._3_1_;
    uVar54 = uStack_2e0._4_1_;
    uVar55 = uStack_2e0._5_1_;
    uVar56 = uStack_2e0._6_1_;
    uVar57 = uStack_2e0._7_1_;
  }
  if (*piVar8 != 7) {
    return;
  }
  cVar15 = *(char *)(*param_10 + 0x98);
  fVar6 = *(float *)(*param_9 + 8);
  uVar38 = SUB41(_DAT_142f44730,0);
  uVar40 = (undefined1)((uint)_DAT_142f44730 >> 8);
  uVar42 = (undefined1)((uint)_DAT_142f44730 >> 0x10);
  uVar44 = (undefined1)((uint)_DAT_142f44730 >> 0x18);
  if (cVar15 == '\x01') {
    ppuStack_180 = (undefined **)0xc;
    puStack_188 = &UNK_142f453a6;
    if (_DAT_142e3c658 <= fVar6) {
      uVar46 = 0;
      uVar47 = 0;
      uVar48 = 0;
      uVar49 = 0;
      uVar50 = 0;
      uVar51 = 0;
      uVar52 = 0;
      uVar53 = 0;
      uVar54 = 0;
      uVar55 = 0;
      uVar56 = 0;
      uVar57 = 0;
      uVar39 = SUB41(_DAT_142e36f50,0);
      uVar41 = (char)((uint)_DAT_142e36f50 >> 8);
      uVar43 = (char)((uint)_DAT_142e36f50 >> 0x10);
      uVar45 = (char)((uint)_DAT_142e36f50 >> 0x18);
      if (fVar6 <= _DAT_142e36f50) goto LAB_1403746a1;
    }
    if (_DAT_142f44734 <= fVar6) {
      uVar46 = 0;
      uVar47 = 0;
      uVar48 = 0;
      uVar49 = 0;
      uVar50 = 0;
      uVar51 = 0;
      uVar52 = 0;
      uVar53 = 0;
      uVar54 = 0;
      uVar55 = 0;
      uVar56 = 0;
      uVar57 = 0;
      uVar39 = SUB41(_DAT_142f44738,0);
      uVar41 = (char)((uint)_DAT_142f44738 >> 8);
      uVar43 = (char)((uint)_DAT_142f44738 >> 0x10);
      uVar45 = (char)((uint)_DAT_142f44738 >> 0x18);
      if (fVar6 <= _DAT_142f44738) goto LAB_1403746a1;
    }
    if (_DAT_142e36f50 <= fVar6) {
      uVar46 = 0;
      uVar47 = 0;
      uVar48 = 0;
      uVar49 = 0;
      uVar50 = 0;
      uVar51 = 0;
      uVar52 = 0;
      uVar53 = 0;
      uVar54 = 0;
      uVar55 = 0;
      uVar56 = 0;
      uVar57 = 0;
      if (fVar6 <= _DAT_142f44730) {
        ppuStack_180 = (undefined **)0xb;
        puStack_188 = &UNK_142f4539b;
        uVar39 = uVar38;
        uVar41 = uVar40;
        uVar43 = uVar42;
        uVar45 = uVar44;
        goto LAB_1403746a1;
      }
    }
    uVar46 = 0;
    uVar47 = 0;
    uVar48 = 0;
    uVar49 = 0;
    uVar50 = 0;
    uVar51 = 0;
    uVar52 = 0;
    uVar53 = 0;
    uVar54 = 0;
    uVar55 = 0;
    uVar56 = 0;
    uVar57 = 0;
    bVar35 = _DAT_142f4473c <= fVar6;
    iVar22 = -(uint)bVar35;
    uVar41 = (undefined1)((uint)iVar22 >> 8);
    uVar43 = (undefined1)((uint)iVar22 >> 0x10);
    uVar45 = (undefined1)((uint)iVar22 >> 0x18);
    ppuStack_180 = (undefined **)((ulonglong)(fVar6 <= _DAT_142f44734 && bVar35) * 4 + 9);
    puStack_188 = &UNK_142f45385;
    uVar39 = (char)iVar22;
    if (fVar6 <= _DAT_142f44734 && bVar35) {
      puStack_188 = &UNK_142f4538e;
    }
  }
  else {
    ppuStack_180 = (undefined **)0x6;
    puStack_188 = &UNK_142f45377;
    if (_DAT_142f44720 <= fVar6) {
      uVar39 = SUB41(_DAT_142e3c620,0);
      uVar41 = (undefined1)((uint)_DAT_142e3c620 >> 8);
      uVar43 = (undefined1)((uint)_DAT_142e3c620 >> 0x10);
      uVar45 = (undefined1)((uint)_DAT_142e3c620 >> 0x18);
      uVar46 = 0;
      uVar47 = 0;
      uVar48 = 0;
      uVar49 = 0;
      uVar50 = 0;
      uVar51 = 0;
      uVar52 = 0;
      uVar53 = 0;
      uVar54 = 0;
      uVar55 = 0;
      uVar56 = 0;
      uVar57 = 0;
      if (fVar6 <= _DAT_142e3c620) goto LAB_1403746a1;
    }
    if (_DAT_142f44724 <= fVar6) {
      uVar39 = SUB41(_DAT_142f44728,0);
      uVar41 = (undefined1)((uint)_DAT_142f44728 >> 8);
      uVar43 = (undefined1)((uint)_DAT_142f44728 >> 0x10);
      uVar45 = (undefined1)((uint)_DAT_142f44728 >> 0x18);
      uVar46 = 0;
      uVar47 = 0;
      uVar48 = 0;
      uVar49 = 0;
      uVar50 = 0;
      uVar51 = 0;
      uVar52 = 0;
      uVar53 = 0;
      uVar54 = 0;
      uVar55 = 0;
      uVar56 = 0;
      uVar57 = 0;
      if (fVar6 <= _DAT_142f44728) goto LAB_1403746a1;
    }
    if (fVar6 < _DAT_142e3c620) {
LAB_14037463a:
      if (_DAT_142f44730 <= fVar6) {
        uVar39 = SUB41(_DAT_142f44724,0);
        uVar41 = (undefined1)((uint)_DAT_142f44724 >> 8);
        uVar43 = (undefined1)((uint)_DAT_142f44724 >> 0x10);
        uVar45 = (undefined1)((uint)_DAT_142f44724 >> 0x18);
        uVar46 = 0;
        uVar47 = 0;
        uVar48 = 0;
        uVar49 = 0;
        uVar50 = 0;
        uVar51 = 0;
        uVar52 = 0;
        uVar53 = 0;
        uVar54 = 0;
        uVar55 = 0;
        uVar56 = 0;
        uVar57 = 0;
        if (fVar6 <= _DAT_142f44724) goto LAB_140374658;
      }
      if (_DAT_142f4472c <= fVar6) {
        uVar46 = 0;
        uVar47 = 0;
        uVar48 = 0;
        uVar49 = 0;
        uVar50 = 0;
        uVar51 = 0;
        uVar52 = 0;
        uVar53 = 0;
        uVar54 = 0;
        uVar55 = 0;
        uVar56 = 0;
        uVar57 = 0;
        uVar39 = uVar38;
        uVar41 = uVar40;
        uVar43 = uVar42;
        uVar45 = uVar44;
        if (fVar6 <= _DAT_142f44730) {
          puStack_188 = &UNK_142f4537d;
          ppuStack_180 = (undefined **)0x4;
          goto LAB_1403746a1;
        }
      }
      if (cVar15 != '\x03') {
        ppuStack_180 = (undefined **)((ulonglong)(cVar15 == '\x04') * 5 + 5);
        puStack_188 = &UNK_142f45368;
        if (cVar15 == '\x04') {
          puStack_188 = &UNK_142f4536d;
        }
      }
    }
    else {
      uVar39 = SUB41(_DAT_142f4472c,0);
      uVar41 = (undefined1)((uint)_DAT_142f4472c >> 8);
      uVar43 = (undefined1)((uint)_DAT_142f4472c >> 0x10);
      uVar45 = (undefined1)((uint)_DAT_142f4472c >> 0x18);
      uVar46 = 0;
      uVar47 = 0;
      uVar48 = 0;
      uVar49 = 0;
      uVar50 = 0;
      uVar51 = 0;
      uVar52 = 0;
      uVar53 = 0;
      uVar54 = 0;
      uVar55 = 0;
      uVar56 = 0;
      uVar57 = 0;
      if (_DAT_142f4472c < fVar6) goto LAB_14037463a;
LAB_140374658:
      uVar57 = 0;
      uVar56 = 0;
      uVar55 = 0;
      uVar54 = 0;
      uVar53 = 0;
      uVar52 = 0;
      uVar51 = 0;
      uVar50 = 0;
      uVar49 = 0;
      uVar48 = 0;
      uVar47 = 0;
      uVar46 = 0;
      puStack_188 = &UNK_142f45381;
      ppuStack_180 = (undefined **)0x4;
    }
  }
LAB_1403746a1:
  cVar15 = pdb_140a00330(piVar8);
  if (cVar15 != '\0') {
    uStack_a4 = *(undefined4 *)((longlong)param_6 + 0x1c);
    plStack_c8 = (longlong *)param_6[2];
    *(undefined4 *)plStack_c8 = uStack_a4;
    ppuVar28 = (undefined **)*param_6;
    ppuStack_2f8 = (undefined **)&UNK_142f453b2;
    ppuStack_2f0 = (undefined **)0x13;
    uVar18 = pdb_14072aeb0(&ppuStack_2f8);
    uVar18 = uVar18 ^ 0xb1695320004fb443;
    uVar20 = uVar18;
    lVar19 = pdb_14072c2d0(ppuVar28);
    *(undefined1 *)(lVar19 + 0x5e) = 0;
    *(undefined1 *)(lVar19 + 0xcb) = 1;
    if ((uVar20 & 1) == 0) {
      puVar26 = ppuVar28[2];
      if (puVar26 == *ppuVar28) {
        pdb_142d7f080(ppuVar28);
      }
      puVar27 = ppuVar28[1];
      *(undefined4 *)(puVar27 + (longlong)puVar26 * 0x38) = 0;
      *(ulonglong *)(puVar27 + (longlong)puVar26 * 0x38 + 0x30) = uVar18;
      ppuVar28[2] = puVar26 + 1;
    }
    plStack_e8 = (longlong *)0x0;
    ppuStack_160 = &puStack_188;
    pcStack_158 = pdb_1402ed400;
    ppuStack_f8 = ppuVar28;
    ppuStack_f0 = (undefined **)uVar18;
    pdb_140f60760(&ppuStack_2f8,&UNK_142f453db,&ppuStack_160);
    ppuStack_a0 = ppuStack_2f8;
    pbStack_100 = (byte *)ppuStack_2f0;
    pdb_140306cd0(&ppuStack_2f8,&ppuStack_f8,&UNK_142f453ec,2,ppuStack_2f0,uStack_2e8,0x447a0000);
    pdb_140726fb0(&ppuStack_160,&ppuStack_2f8,0xffffffc8);
    pdb_140726f80(&ppuStack_2f8,&ppuStack_160);
    pdb_1406ccf20(&ppuStack_160,&ppuStack_2f8);
    ppuVar31 = ppuStack_160;
    if (ppuStack_160[0x39] != (undefined *)0x0) {
      uVar20 = pdb_1400af0a0(ppuStack_160 + 0x3a,&pcStack_158);
      puVar26 = ppuVar31[0x36];
      puVar27 = ppuVar31[0x37];
      bVar36 = (byte)(uVar20 >> 0x39);
      auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
      auVar37 = pshuflw(auVar37,auVar37,0);
      lVar19 = 0;
      iVar22 = -(uint)(CONCAT13(uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar39))) ==
                      CONCAT13(uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar39))));
      iVar11 = -(uint)(CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46))) ==
                      CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46))));
      iVar12 = -(uint)(CONCAT13(uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50))) ==
                      CONCAT13(uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50))));
      iVar13 = -(uint)(CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54))) ==
                      CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54))));
      while( true ) {
        uVar20 = uVar20 & (ulonglong)puVar27;
        pcVar3 = puVar26 + uVar20;
        auVar59[0] = -(*pcVar3 == auVar37[0]);
        auVar59[1] = -(pcVar3[1] == auVar37[1]);
        auVar59[2] = -(pcVar3[2] == auVar37[2]);
        auVar59[3] = -(pcVar3[3] == auVar37[3]);
        auVar59[4] = -(pcVar3[4] == auVar37[4]);
        auVar59[5] = -(pcVar3[5] == auVar37[5]);
        auVar59[6] = -(pcVar3[6] == auVar37[6]);
        auVar59[7] = -(pcVar3[7] == auVar37[7]);
        auVar59[8] = -(pcVar3[8] == auVar37[0]);
        auVar59[9] = -(pcVar3[9] == auVar37[1]);
        auVar59[10] = -(pcVar3[10] == auVar37[2]);
        auVar59[0xb] = -(pcVar3[0xb] == auVar37[3]);
        auVar59[0xc] = -(pcVar3[0xc] == auVar37[4]);
        auVar59[0xd] = -(pcVar3[0xd] == auVar37[5]);
        auVar59[0xe] = -(pcVar3[0xe] == auVar37[6]);
        auVar59[0xf] = -(pcVar3[0xf] == auVar37[7]);
        uVar32 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe | (ushort)(auVar59[0xf] >> 7) << 0xf
        ;
        uVar16 = (uint)uVar32;
        while (uVar32 != 0) {
          uVar23 = 0;
          for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar23 = uVar23 + 1;
          }
          lVar33 = (uVar23 + uVar20 & (ulonglong)puVar27) * -0xd8;
          if (pcStack_158 == *(code **)(puVar26 + lVar33 + -0xd8)) {
            *(undefined4 *)(puVar26 + lVar33 + -0x80) = 0x3f800000;
            uVar34 = uStack_a4;
            if (ppuStack_a0 != (undefined **)0x0) {
              pub_1406abac0(pbStack_100,(ulonglong)ppuStack_a0,1);
              uVar34 = uStack_a4;
            }
            goto LAB_140374a2e;
          }
          uVar32 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar32);
        }
        auVar58[0] = -(*pcVar3 == (char)iVar22);
        auVar58[1] = -(pcVar3[1] == (char)((uint)iVar22 >> 8));
        auVar58[2] = -(pcVar3[2] == (char)((uint)iVar22 >> 0x10));
        auVar58[3] = -(pcVar3[3] == (char)((uint)iVar22 >> 0x18));
        auVar58[4] = -(pcVar3[4] == (char)iVar11);
        auVar58[5] = -(pcVar3[5] == (char)((uint)iVar11 >> 8));
        auVar58[6] = -(pcVar3[6] == (char)((uint)iVar11 >> 0x10));
        auVar58[7] = -(pcVar3[7] == (char)((uint)iVar11 >> 0x18));
        auVar58[8] = -(pcVar3[8] == (char)iVar12);
        auVar58[9] = -(pcVar3[9] == (char)((uint)iVar12 >> 8));
        auVar58[10] = -(pcVar3[10] == (char)((uint)iVar12 >> 0x10));
        auVar58[0xb] = -(pcVar3[0xb] == (char)((uint)iVar12 >> 0x18));
        auVar58[0xc] = -(pcVar3[0xc] == (char)iVar13);
        auVar58[0xd] = -(pcVar3[0xd] == (char)((uint)iVar13 >> 8));
        auVar58[0xe] = -(pcVar3[0xe] == (char)((uint)iVar13 >> 0x10));
        auVar58[0xf] = -(pcVar3[0xf] == (char)((uint)iVar13 >> 0x18));
        if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar58 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar58 >> 0x1f,0) & 1) != 0) || (SUB161(auVar58 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar58 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar58 >> 0x37,0) & 1) != 0) || (SUB161(auVar58 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar58 >> 0x47,0) & 1) != 0) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') break;
        uVar20 = uVar20 + lVar19 + 0x10;
        lVar19 = lVar19 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142f3b578);
  }
  uVar34 = *(undefined4 *)((longlong)param_6 + 0x1c);
  plStack_c8 = (longlong *)param_6[2];
  *(undefined4 *)plStack_c8 = uVar34;
  ppuVar28 = (undefined **)*param_6;
  ppuStack_2f8 = (undefined **)&UNK_142f453b2;
  ppuStack_2f0 = (undefined **)0x13;
  ppuStack_a0 = ppuVar21;
  uVar18 = pdb_14072aeb0(&ppuStack_2f8);
  uVar18 = uVar18 ^ 0xb1695320004fb443;
  uVar20 = uVar18;
  lVar19 = pdb_14072c2d0(ppuVar28);
  *(undefined1 *)(lVar19 + 0x5e) = 0;
  *(undefined1 *)(lVar19 + 0xcb) = 1;
  if ((uVar20 & 1) == 0) {
    puVar26 = ppuVar28[2];
    if (puVar26 == *ppuVar28) {
      pdb_142d7f080(ppuVar28);
    }
    puVar27 = ppuVar28[1];
    *(undefined4 *)(puVar27 + (longlong)puVar26 * 0x38) = 0;
    *(ulonglong *)(puVar27 + (longlong)puVar26 * 0x38 + 0x30) = uVar18;
    ppuVar28[2] = puVar26 + 1;
  }
  plStack_e8 = (longlong *)0x0;
  ppuStack_f8 = ppuVar28;
  ppuStack_f0 = (undefined **)uVar18;
  pdb_140734630(&ppuStack_2f8,&ppuStack_f8,&UNK_142f453c5,0x16);
  ppuVar21 = ppuStack_a0;
LAB_140374a2e:
  ppuStack_a0 = ppuVar21;
  *(undefined4 *)plStack_c8 = uVar34;
  ppuStack_2f8 = (undefined **)&UNK_142f44cd7;
  ppuStack_2f0 = (undefined **)0x8;
  uVar18 = pdb_14072aeb0(&ppuStack_2f8);
  uVar18 = uVar18 ^ 0xb1695320004fb443;
  uVar20 = uVar18;
  lVar19 = pdb_14072c2d0(ppuVar28);
  *(undefined1 *)(lVar19 + 0x5e) = 0;
  *(undefined1 *)(lVar19 + 0xcb) = 1;
  if ((uVar20 & 1) == 0) {
    puVar26 = ppuVar28[2];
    if (puVar26 == *ppuVar28) {
      pdb_142d7f080(ppuVar28);
    }
    puVar27 = ppuVar28[1];
    *(undefined4 *)(puVar27 + (longlong)puVar26 * 0x38) = 1;
    *(ulonglong *)(puVar27 + (longlong)puVar26 * 0x38 + 0x30) = uVar18;
    ppuVar28[2] = puVar26 + 1;
  }
  ppuVar31 = ppuStack_a0;
  ppuVar21 = (undefined **)(piVar8 + 2);
  uStack_308 = 0;
  if (*piVar8 == 7) {
    if (*(byte *)ppuVar21 < 3) {
      bVar35 = *(byte *)ppuVar21 == 1;
    }
    else {
      bVar35 = false;
    }
  }
  else {
    bVar35 = false;
  }
  ppuStack_318 = ppuVar28;
  ppuStack_310 = (undefined **)uVar18;
  acStack_98[0] = bVar35;
  pdb_140306420(&ppuStack_4a0,&ppuStack_318,&UNK_142f453ee,0xc);
  uVar16 = pdb_140726680(&ppuStack_4a0);
  uStack_2e8 = (undefined **)uStack_490;
  ppuStack_2f8 = ppuStack_4a0;
  ppuStack_2f0 = (undefined **)uStack_498;
  uStack_16c = uVar16;
  pdb_1406ccf20(&ppuStack_f8,&ppuStack_2f8);
  uVar29 = 0xd;
  if (bVar35 != false) {
    uVar29 = 0x13;
  }
  puVar26 = &UNK_142f453fa;
  if (bVar35 != false) {
    puVar26 = &UNK_142f45407;
  }
  pdb_140734630(&ppuStack_160,&ppuStack_f8,puVar26,uVar29);
  if (*(byte *)ppuVar21 != 10) {
    if (bVar35 == false) {
      pdb_14068e730(&ppuStack_160,&UNK_142f44cc7,6);
      ppuStack_2f0 = ppuVar31;
      uStack_2e8 = (undefined **)&uStack_16c;
      ppuStack_2f8 = ppuVar21;
      pdb_14068e530(&ppuStack_160,&UNK_142f44ccd,10,&ppuStack_2f8);
    }
    puStack_138 = (undefined *)0x0;
    ppuStack_130 = (undefined **)0x1;
    lStack_128 = 0;
    uStack_b8 = CONCAT31(uStack_b8._1_3_,1);
    ppuStack_2f0 = (undefined **)param_8;
    uStack_2e0 = (undefined **)&lStack_428;
    ppuStack_2d8 = (undefined **)uStack_488;
    ppuStack_2d0 = (undefined **)uStack_480;
    uStack_2c8 = (uint *)uStack_478;
    uStack_2c0 = uStack_470;
    uStack_2a8 = uStack_3b8;
    uStack_2a0 = uStack_3b0;
    uStack_2b8 = uStack_3c8;
    uStack_2b0 = uStack_3c0;
    uStack_298 = *param_1;
    uStack_290 = param_1[1];
    uStack_288 = param_1[2];
    uStack_280 = param_1[3];
    uStack_278 = uStack_3a8;
    uStack_270 = uStack_3a0;
    uStack_268 = uStack_398;
    uStack_260 = uStack_390;
    lStack_248 = lStack_438;
    lStack_240 = lStack_430;
    lStack_258 = lStack_448;
    lStack_250 = lStack_440;
    lStack_228 = lStack_458;
    lStack_220 = lStack_450;
    lStack_238 = lStack_468;
    lStack_230 = lStack_460;
    uStack_218 = ppuVar31;
    puStack_210 = &uStack_508;
    puStack_208 = &uStack_b8;
    uStack_1d8 = uStack_3d8;
    uStack_1d0 = uStack_3d0;
    uStack_1e8 = uStack_3e8;
    uStack_1e0 = uStack_3e0;
    uStack_1b8 = (undefined1)uStack_3f8;
    uStack_1b7 = uStack_3f8._1_1_;
    uStack_1b6 = uStack_3f8._2_1_;
    uStack_1b5 = uStack_3f8._3_1_;
    uStack_1b4 = uStack_3f8._4_1_;
    uStack_1b3 = uStack_3f8._5_1_;
    uStack_1b2 = uStack_3f8._6_1_;
    uStack_1b1 = uStack_3f8._7_1_;
    uStack_1b0 = (undefined1)uStack_3f0;
    uStack_1af = uStack_3f0._1_1_;
    uStack_1ae = uStack_3f0._2_1_;
    uStack_1ad = uStack_3f0._3_1_;
    uStack_1ac = uStack_3f0._4_1_;
    uStack_1ab = uStack_3f0._5_1_;
    uStack_1aa = uStack_3f0._6_1_;
    uStack_1a9 = uStack_3f0._7_1_;
    uStack_1c8 = uStack_408;
    uStack_1c0 = uStack_400;
    puStack_1f0 = &uStack_4e8;
    ppuStack_2f8 = ppuVar21;
    uStack_2e8 = &puStack_138;
    puStack_200 = param_4;
    puStack_1f8 = &uStack_4c8;
    pdb_140691fc0(&ppuStack_160,&UNK_142f44cd7,8,&ppuStack_2f8);
    pdb_14068fa40(&ppuStack_160,&UNK_142f44cdf,4,ppuVar21,ppuVar31);
    if ((char)uStack_b8 != '\0') {
      ppuStack_2d8 = (undefined **)uStack_140;
      uStack_2e8 = (undefined **)
                   CONCAT17(uStack_149,
                            CONCAT16(uStack_14a,
                                     CONCAT15(uStack_14b,
                                              CONCAT14(uStack_14c,
                                                       CONCAT13(uStack_14d,
                                                                CONCAT12(uStack_14e,
                                                                         CONCAT11(uStack_14f,
                                                                                  uStack_150)))))));
      uStack_2e0 = (undefined **)
                   CONCAT17(uStack_141,
                            CONCAT16(uStack_142,
                                     CONCAT15(uStack_143,
                                              CONCAT14(uStack_144,
                                                       CONCAT13(uStack_145,
                                                                CONCAT12(uStack_146,
                                                                         CONCAT11(uStack_147,
                                                                                  uStack_148)))))));
      ppuStack_2f8 = ppuStack_160;
      ppuStack_2f0 = (undefined **)pcStack_158;
      pdb_14068d3c0(&ppuStack_f8,&ppuStack_2f8,&UNK_142f4541a,0x11);
      pdb_140306e20(&ppuStack_2f8,&ppuStack_f8,&UNK_142f4542b,0x12,&UNK_142f4543d,10);
      if (lStack_128 != 0) {
        pdb_1406927f0(&ppuStack_2f8,&UNK_142f45447,4,acStack_98,&puStack_138);
      }
    }
    if (puStack_138 == (undefined *)0x0) {
      return;
    }
    pub_1406abac0((byte *)ppuStack_130,(ulonglong)puStack_138,1);
    return;
  }
  pdb_140691c50(&ppuStack_160,&UNK_142f44cc7,6);
  ppuVar21 = param_11 + 6;
  puVar26 = *param_11;
  if (puVar26 != (undefined *)0x3) {
    pdb_14068d1d0(&puStack_138,&ppuStack_160,&UNK_142f44cd7,8);
    ppuVar28 = ppuStack_130;
    if ((int)puVar26 == 2) {
      ppuStack_f8 = (undefined **)0x0;
      ppuStack_2f8 = (undefined **)pdb_140315970(&ppuStack_f8);
      ppuStack_2f0 = (undefined **)_DAT_142f3b4f0;
      uStack_2e8 = _UNK_142f3b4f8;
      ppuStack_2f0 = (undefined **)pdb_1400affa0(&ppuStack_2f8);
      ppuStack_2f8 = ppuVar28;
      uVar29 = pdb_1400b0130(&ppuStack_2f8);
      pdb_14072caa0(&ppuStack_f8,&puStack_138,uVar29);
      pdb_140734630(&ppuStack_2f8,&ppuStack_f8,&UNK_142f44ce3,0xf);
      pdb_14068eaa0(&ppuStack_2f8,&UNK_142f44d78,6);
      ppuStack_f8 = param_11;
      ppuStack_f0 = (undefined **)param_14;
      plStack_e8 = &lStack_388;
      uStack_e0 = ppuVar21;
      pdb_140691a50(&ppuStack_2f8,&UNK_142f44cfa,6,&ppuStack_f8);
      return;
    }
    ppuStack_f8 = (undefined **)0x0;
    ppuStack_2f8 = (undefined **)pdb_140315970(&ppuStack_f8);
    ppuStack_2f0 = (undefined **)_DAT_142f3b4f0;
    uStack_2e8 = _UNK_142f3b4f8;
    ppuStack_2f0 = (undefined **)pdb_1400affa0(&ppuStack_2f8);
    ppuStack_2f8 = ppuVar28;
    uVar29 = pdb_1400b0130(&ppuStack_2f8);
    pdb_14072caa0(&ppuStack_2f8,&puStack_138,uVar29);
    pdb_140734630(&ppuStack_f8,&ppuStack_2f8,&UNK_142f44ce3,0xf);
    uVar16 = *(uint *)(param_11 + 5);
    *(uint *)(param_11 + 5) = uVar16 + 1;
    uStack_b8 = 0;
    if (puVar26 != (undefined *)0x0) {
      pdb_1406a2360(&ppuStack_2f8,param_12);
      ppuVar21 = uStack_2e0;
      ppuVar28 = ppuStack_2f0;
      ppuVar31 = (undefined **)0x0;
      do {
        if ((ppuVar28 == (undefined **)0x0) || (ppuVar28 == uStack_2e8)) {
          if ((ppuVar21 == (undefined **)0x0) || (ppuVar21 == ppuStack_2d8)) goto LAB_1403751a9;
          ppuVar28 = ppuVar21 + 0xb;
          ppuVar30 = (undefined **)0x0;
          ppuVar25 = ppuVar21;
        }
        else {
          ppuVar30 = ppuVar28 + 0xb;
          ppuVar25 = ppuVar28;
          ppuVar28 = ppuVar21;
        }
        *ppuStack_2f8 = *ppuStack_2f8 + 1;
        ppuVar21 = ppuVar28;
        ppuVar28 = ppuVar30;
        if (((*(int *)(ppuVar25 + 9) != 0) && (*(int *)(ppuVar25 + 9) != 0x73)) &&
           (*(char *)((longlong)ppuVar25 + 0x54) == '\0')) {
          ppuVar31 = ppuVar25 + 1;
        }
      } while( true );
    }
LAB_1403752a6:
    pdb_140690b10(&ppuStack_f8,&UNK_142f44cc7,6,(uint *)((longlong)param_11 + 0x2c));
    ppuStack_2f0 = param_11;
    ppuStack_2f8 = param_11 + 2;
    uStack_2e8 = (undefined **)&uStack_b8;
    pdb_140691360(&ppuStack_f8,&UNK_142f44cf2,8,&ppuStack_2f8);
    acStack_98[1] = 0;
    ppuStack_2f8 = param_11;
    ppuStack_2f0 = (undefined **)(acStack_98 + 1);
    uStack_2e8 = (undefined **)param_14;
    uStack_2e0 = (undefined **)&lStack_388;
    ppuStack_2d8 = (undefined **)((longlong)param_11 + 0x2c);
    ppuStack_2d0 = param_11 + 2;
    uStack_2c8 = &uStack_b8;
    pdb_14068fe60(&ppuStack_f8,&UNK_142f44cfa,6,&ppuStack_2f8);
                    /* WARNING: Could not recover jumptable at 0x000140375378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_142f45620 + *(int *)(&UNK_142f45620 + (ulonglong)uStack_b8 * 4)))();
    return;
  }
  if ((int)uVar16 < 1) {
    if (-1 < (int)uVar16) goto LAB_1403753d0;
    puVar26 = *ppuVar21;
    uVar23 = uVar16;
    if ((-uVar16 & 3) != 0) {
      iVar22 = 0;
      do {
        puVar26 = *(undefined **)(&UNK_142f45548 + (longlong)puVar26 * 8);
        iVar22 = iVar22 + -1;
      } while (-(-uVar16 & 3) != iVar22);
      *ppuVar21 = puVar26;
      uVar23 = uVar16 - iVar22;
    }
    if (0xfffffffc < uVar16) goto LAB_1403753d0;
    do {
      puVar26 = *(undefined **)
                 (&UNK_142f45548 +
                 *(longlong *)
                  (&UNK_142f45548 +
                  *(longlong *)
                   (&UNK_142f45548 + *(longlong *)(&UNK_142f45548 + (longlong)puVar26 * 8) * 8) * 8)
                 * 8);
      uVar23 = uVar23 + 4;
    } while (uVar23 != 0);
  }
  else {
    puVar26 = *ppuVar21;
    uVar23 = uVar16;
    if ((uVar16 & 3) != 0) {
      uVar23 = 0;
      do {
        puVar27 = puVar26 + 1;
        puVar26 = (undefined *)0x0;
        if (puVar27 != (undefined *)0x7) {
          puVar26 = puVar27;
        }
        uVar23 = uVar23 + 1;
      } while ((uVar16 & 3) != uVar23);
      uVar23 = uVar16 - uVar23;
    }
    if (3 < uVar16) {
      iVar22 = uVar23 + 4;
      do {
        puVar27 = puVar26 + 2;
        bVar35 = puVar26 == (undefined *)0x6;
        puVar26 = (undefined *)0x1;
        if (bVar35) {
          puVar27 = (undefined *)0x1;
        }
        puVar24 = puVar27 + 1;
        if (puVar27 == (undefined *)0x7) {
          puVar24 = (undefined *)0x1;
        }
        if ((puVar24 != (undefined *)0x7) && (puVar26 = puVar24 + 1, puVar26 == (undefined *)0x7)) {
          puVar26 = (undefined *)0x0;
        }
        iVar22 = iVar22 + -4;
      } while (4 < iVar22);
    }
  }
  *ppuVar21 = puVar26;
LAB_1403753d0:
  pdb_140690060(&ppuStack_160,&UNK_142f44ccd,10,ppuVar21);
  pdb_140691120(&ppuStack_160,&UNK_142f44cd7,8,&lStack_388,param_11);
  pdb_1406917d0(&ppuStack_160,&UNK_142f44cdf,4,ppuVar31);
  return;
LAB_1403751a9:
  if ((1 < uVar16 + 1) && (ppuVar31 != (undefined **)0x0)) {
    ppuStack_2f0 = (undefined **)CONCAT44(ppuStack_2f0._4_4_,*(undefined4 *)(ppuVar31 + 9));
    ppuStack_2f8 = (undefined **)ppuVar31[8];
    pdb_140a118f0(&uStack_b4,&ppuStack_2f8);
    uStack_b8 = 4;
  }
  pdb_1406a22c0(&ppuStack_2f8,param_13);
  ppuVar21 = (undefined **)0x0;
  ppuVar28 = uStack_2e0;
  ppuVar31 = ppuStack_2f0;
  do {
    if ((ppuVar31 == (undefined **)0x0) || (ppuVar31 == uStack_2e8)) {
      if ((ppuVar28 == (undefined **)0x0) || (ppuVar28 == ppuStack_2d8)) break;
      ppuVar30 = (undefined **)0x0;
      ppuVar25 = ppuVar28 + 3;
      ppuVar31 = ppuVar28;
    }
    else {
      ppuVar30 = ppuVar31 + 3;
      ppuVar25 = ppuVar28;
    }
    *ppuStack_2f8 = *ppuStack_2f8 + 1;
    ppuVar1 = ppuVar31 + 2;
    ppuVar2 = ppuVar31 + 1;
    ppuVar28 = ppuVar25;
    ppuVar31 = ppuVar30;
    if (*(short *)ppuVar1 != 0) {
      ppuVar21 = ppuVar2;
    }
  } while( true );
  if (ppuVar21 != (undefined **)0x0) {
    pdb_140a11900(&ppuStack_2f8,*(undefined2 *)(ppuVar21 + 1),
                  *(undefined2 *)((longlong)ppuVar21 + 10));
    uStack_b8 = 4;
    uStack_b4 = SUB84(ppuStack_2f8,0);
    uStack_b0 = (undefined4)((ulonglong)ppuStack_2f8 >> 0x20);
    uStack_ac = ppuStack_2f0._0_4_;
  }
  goto LAB_1403752a6;
}

