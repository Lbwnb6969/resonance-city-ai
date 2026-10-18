// VA 0x140738d10, PDB extent 21450 bytes
// feedback_reporter::report_player_feedback
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/feedback-reporter/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: feedback_reporter::report_player_feedback
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/feedback-reporter/src/lib.rs
   Extent: 21450 */

void pdb_140738d10(undefined8 *param_1,longlong *param_2,ulonglong *******param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  code *pcVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  ulonglong *******pppppppuVar19;
  ulonglong ******ppppppuVar20;
  ulonglong *******pppppppuVar21;
  undefined1 *puVar22;
  ulonglong ******ppppppuVar23;
  ulonglong ******ppppppuVar24;
  ulonglong ******ppppppuVar25;
  longlong lVar26;
  longlong lVar27;
  byte bVar28;
  ulonglong *******pppppppuVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  undefined8 uVar33;
  byte bVar34;
  ulonglong *puVar35;
  ulonglong *******pppppppuVar36;
  ulonglong *******pppppppuVar37;
  byte *pbVar38;
  ulonglong *******pppppppuStack_d80;
  byte *pbStack_d78;
  undefined8 uStack_d70;
  ulonglong uStack_d68;
  byte *pbStack_d60;
  undefined8 uStack_d58;
  ulonglong *******pppppppuStack_d50;
  byte *pbStack_d48;
  ulonglong *******pppppppuStack_d40;
  ulonglong *******pppppppuStack_d38;
  ulonglong *******pppppppuStack_d30;
  ulonglong *******pppppppuStack_d28;
  ulonglong *******pppppppuStack_d20;
  ulonglong *******pppppppuStack_d18;
  ulonglong *******pppppppuStack_d10;
  ulonglong *******pppppppuStack_d08;
  undefined4 uStack_d00;
  undefined4 uStack_cfc;
  undefined4 uStack_cf8;
  undefined4 uStack_cf4;
  undefined4 uStack_cf0;
  undefined4 uStack_cec;
  undefined4 uStack_ce8;
  undefined4 uStack_ce4;
  undefined4 uStack_ce0;
  undefined4 uStack_cdc;
  undefined4 uStack_cd8;
  undefined4 uStack_cd4;
  undefined4 uStack_cd0;
  undefined4 uStack_ccc;
  undefined4 uStack_cc8;
  undefined4 uStack_cc4;
  ulonglong *******pppppppuStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  ulonglong uStack_ca8;
  byte *pbStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined4 uStack_c50;
  undefined4 uStack_c4c;
  ulonglong *******pppppppuStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  ulonglong uStack_c30;
  byte *pbStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_ae0;
  undefined4 uStack_ad8;
  undefined1 auStack_ad4 [220];
  ulonglong uStack_9f8;
  ulonglong uStack_9f0;
  ulonglong uStack_9e8;
  ulonglong uStack_9e0;
  ulonglong uStack_9d8;
  ulonglong uStack_9d0;
  undefined4 uStack_9c8;
  undefined4 uStack_9c4;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  undefined4 uStack_9b8;
  undefined4 uStack_9b4;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined4 uStack_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  ulonglong *******pppppppuStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  ulonglong uStack_970;
  byte *pbStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  ulonglong *******pppppppuStack_948;
  ulonglong *******pppppppuStack_940;
  ulonglong *******pppppppuStack_938;
  ulonglong *******pppppppuStack_930;
  ulonglong *******pppppppuStack_928;
  ulonglong *******pppppppuStack_920;
  ulonglong *******pppppppuStack_918;
  ulonglong *******pppppppuStack_908;
  ulonglong *******pppppppuStack_900;
  ulonglong *******pppppppuStack_8f8;
  ulonglong *******pppppppuStack_8f0;
  undefined2 uStack_8e8;
  undefined2 uStack_8e6;
  undefined2 uStack_8e4;
  undefined2 uStack_8e2;
  undefined2 uStack_8e0;
  undefined1 uStack_8de;
  undefined1 uStack_8dd;
  uint uStack_8dc;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  ulonglong *******pppppppuStack_8c8;
  undefined8 uStack_8c0;
  undefined4 uStack_8a0;
  ulonglong *******pppppppuStack_838;
  byte *pbStack_830;
  undefined8 uStack_828;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined4 uStack_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  ulonglong *******pppppppuStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  ulonglong *******pppppppuStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  ulonglong *******pppppppuStack_798;
  ulonglong *******pppppppuStack_790;
  ulonglong *******pppppppuStack_788;
  ulonglong *******pppppppuStack_780;
  ulonglong *******pppppppuStack_778;
  ulonglong *******pppppppuStack_770;
  undefined4 uStack_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  ulonglong *******pppppppuStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  ulonglong *******pppppppuStack_730;
  ulonglong *******pppppppuStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined4 uStack_710;
  undefined1 auStack_614 [220];
  ulonglong uStack_538;
  byte *pbStack_530;
  undefined8 uStack_528;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  ulonglong *******pppppppuStack_4d8;
  undefined8 uStack_4d0;
  ulonglong *******pppppppuStack_4c8;
  ulonglong *******pppppppuStack_4c0;
  ulonglong *******pppppppuStack_4b8;
  ulonglong *******pppppppuStack_4b0;
  ulonglong *******pppppppuStack_4a8;
  ulonglong *******pppppppuStack_4a0;
  ulonglong *******pppppppuStack_498;
  undefined8 uStack_490;
  ulonglong *******pppppppuStack_488;
  undefined8 uStack_480;
  ulonglong *******pppppppuStack_478;
  longlong *plStack_470;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  ulonglong *******pppppppuStack_458;
  ulonglong ******ppppppuStack_450;
  ulonglong ******ppppppuStack_448;
  ulonglong ******ppppppuStack_440;
  ulonglong ******ppppppuStack_438;
  ulonglong uStack_430;
  ulonglong uStack_428;
  ulonglong uStack_420;
  ulonglong uStack_418;
  ulonglong uStack_410;
  ulonglong uStack_408;
  ulonglong uStack_400;
  ulonglong uStack_3f8;
  ulonglong uStack_3f0;
  ulonglong uStack_3e8;
  ulonglong uStack_3e0;
  ulonglong uStack_3d8;
  ulonglong uStack_3d0;
  ulonglong uStack_3c8;
  ulonglong uStack_3c0;
  ulonglong uStack_3b8;
  ulonglong uStack_3b0;
  ulonglong uStack_3a8;
  ulonglong uStack_3a0;
  ulonglong uStack_398;
  ulonglong uStack_390;
  ulonglong uStack_388;
  ulonglong uStack_380;
  ulonglong uStack_378;
  ulonglong uStack_370;
  ulonglong uStack_368;
  ulonglong uStack_360;
  ulonglong uStack_358;
  ulonglong uStack_350;
  ulonglong uStack_348;
  ulonglong uStack_340;
  ulonglong uStack_338;
  ulonglong uStack_330;
  ulonglong uStack_328;
  ulonglong uStack_320;
  ulonglong uStack_318;
  ulonglong uStack_310;
  ulonglong uStack_308;
  ulonglong uStack_300;
  ulonglong uStack_2f8;
  ulonglong uStack_2f0;
  ulonglong uStack_2e8;
  ulonglong uStack_2e0;
  ulonglong uStack_2d8;
  ulonglong uStack_2d0;
  ulonglong uStack_2c8;
  ulonglong *******pppppppuStack_2c0;
  ulonglong *******pppppppuStack_2b8;
  ulonglong *******pppppppuStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  ulonglong *******pppppppuStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  ulonglong *******pppppppuStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulonglong *******pppppppuStack_188;
  ulonglong ******ppppppuStack_180;
  ulonglong ******ppppppuStack_178;
  byte *pbStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulonglong *******pppppppuStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  ulonglong *******pppppppuStack_128;
  undefined8 uStack_120;
  ulonglong ******ppppppuStack_110;
  ulonglong ******ppppppuStack_108;
  ulonglong ******ppppppuStack_100;
  ulonglong ******ppppppuStack_f8;
  ulonglong *******pppppppuStack_f0;
  ulonglong *******pppppppuStack_e8;
  ulonglong *******pppppppuStack_e0;
  code *pcStack_d8;
  ulonglong *******pppppppuStack_d0;
  ulonglong *******pppppppuStack_c8;
  ulonglong *puStack_c0;
  ulonglong *******pppppppuStack_b8;
  ulonglong *******pppppppuStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong *******pppppppuStack_98;
  byte bStack_8f;
  byte bStack_8e;
  byte bStack_8d;
  byte bStack_8c;
  byte bStack_8b;
  byte bStack_8a;
  byte bStack_89;
  ulonglong *******pppppppuStack_88;
  ulonglong *******pppppppuStack_80;
  ulonglong *******pppppppuStack_78;
  ulonglong *******pppppppuStack_70;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  byte bStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  byte bStack_5c;
  byte bStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  byte bStack_56;
  byte bStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pppppppuStack_d80 = (ulonglong *******)0x8000000000000000;
  puVar35 = (ulonglong *)*param_1;
  lVar26 = param_1[1];
  uVar32 = *puVar35;
  uVar30 = 0;
  uVar18 = uVar32 - *(ulonglong *)(lVar26 + 0x18);
  if (uVar32 < *(ulonglong *)(lVar26 + 0x18)) {
    uVar18 = uVar30;
  }
  uVar31 = uVar32 - *(ulonglong *)(lVar26 + 0x38);
  if (uVar32 < *(ulonglong *)(lVar26 + 0x38)) {
    uVar31 = uVar30;
  }
  pppppppuVar37 = (ulonglong *******)(uVar18 * 0x100 + *(longlong *)(lVar26 + 8));
  uVar32 = *(ulonglong *)(lVar26 + 0x10) - uVar18;
  if (*(ulonglong *)(lVar26 + 0x10) < uVar18) {
    pppppppuVar37 = (ulonglong *******)0x8;
    uVar32 = uVar30;
  }
  pppppppuVar19 = (ulonglong *******)(uVar31 * 0x100 + *(longlong *)(lVar26 + 0x28));
  uVar18 = *(ulonglong *)(lVar26 + 0x30) - uVar31;
  if (*(ulonglong *)(lVar26 + 0x30) < uVar31) {
    pppppppuVar19 = (ulonglong *******)0x8;
    uVar18 = uVar30;
  }
  *puVar35 = (*(longlong *)(lVar26 + 0x40) - uVar18) - uVar32;
  pppppppuStack_c8 = param_3 + 9;
  pppppppuStack_70 = param_3 + 0x14;
  pppppppuVar29 = pppppppuVar19;
  pppppppuVar36 = pppppppuVar19;
  pppppppuVar21 = pppppppuVar37;
  plStack_470 = param_2;
  if (pppppppuVar37 == (ulonglong *******)0x0) goto LAB_140738e10;
LAB_140738de7:
  pppppppuVar36 = pppppppuVar29;
  if (pppppppuVar21 == pppppppuVar37 + uVar32 * 0x20) goto LAB_140738e10;
  pppppppuStack_88 = pppppppuVar21 + 0x20;
  pppppppuVar36 = pppppppuVar21;
  pppppppuStack_b8 = pppppppuVar29;
  do {
    *puVar35 = *puVar35 + 1;
    uStack_4a = 1;
    pdb_140f60be0(&uStack_168,pppppppuVar36);
    pdb_140f60be0(&uStack_9c8,pppppppuVar36 + 3);
    pppppppuStack_80 = (ulonglong *******)0x8000000000000000;
    if (!SBORROW8(0,(longlong)pppppppuVar36[6])) {
      pppppppuVar29 = (ulonglong *******)pppppppuVar36[8];
      if ((longlong)pppppppuVar29 < 0) {
        uVar33 = 0;
      }
      else {
        if (pppppppuVar29 == (ulonglong *******)0x0) {
          ppppppuStack_110 = (ulonglong ******)0x1;
          pppppppuStack_188 = (ulonglong *******)0x0;
          pppppppuStack_80 = (ulonglong *******)0x0;
          ppppppuVar23 = pppppppuVar36[9];
          goto joined_r0x000140738f54;
        }
        ppppppuVar23 = pppppppuVar36[7];
        puStack_c0 = puVar35;
        pdb_14007ee60();
        uVar33 = 1;
        ppppppuVar20 = (ulonglong ******)pub_1406abab0((ulonglong)pppppppuVar29,1);
        if (ppppppuVar20 != (ulonglong ******)0x0) {
          ppppppuStack_110 = ppppppuVar20;
          pub_142e32760(ppppppuVar20,ppppppuVar23,pppppppuVar29);
          puVar35 = puStack_c0;
          pppppppuStack_188 = pppppppuVar29;
          pppppppuStack_80 = pppppppuVar29;
          goto LAB_140738efb;
        }
      }
      pdb_142dc7e2a(uVar33,pppppppuVar29);
      goto LAB_14073c971;
    }
LAB_140738efb:
    ppppppuVar23 = pppppppuVar36[9];
joined_r0x000140738f54:
    if (SBORROW8(0,(longlong)ppppppuVar23)) {
      uStack_7c8 = (ulonglong *******)0x8000000000000000;
      if (!SBORROW8(0,(longlong)pppppppuVar36[0x10])) goto LAB_14073904a;
LAB_140738f1f:
      pppppppuStack_b0 = (ulonglong *******)0x8000000000000000;
    }
    else {
      pppppppuVar29 = (ulonglong *******)pppppppuVar36[0xb];
      if ((longlong)pppppppuVar29 < 0) {
        uVar33 = 0;
LAB_1407394d3:
        pdb_142dc7e2a(uVar33,pppppppuVar29);
        goto LAB_14073c971;
      }
      pppppppuStack_b0 = pppppppuVar29;
      if (pppppppuVar29 == (ulonglong *******)0x0) {
        pppppppuStack_d0 = (ulonglong *******)0x1;
      }
      else {
        ppppppuVar23 = pppppppuVar36[10];
        puStack_c0 = puVar35;
        pdb_14007ee60();
        pppppppuVar29 = pppppppuStack_b0;
        uVar33 = 1;
        pppppppuVar21 = (ulonglong *******)pub_1406abab0((ulonglong)pppppppuStack_b0,1);
        if (pppppppuVar21 == (ulonglong *******)0x0) goto LAB_1407394d3;
        pppppppuStack_d0 = pppppppuVar21;
        pub_142e32760(pppppppuVar21,ppppppuVar23);
        puVar35 = puStack_c0;
      }
      bVar28 = *(byte *)(pppppppuVar36 + 0xc);
      pdb_1411da700(&uStack_c88,pppppppuVar36 + 0xd);
      pppppppuStack_798 = uStack_c78;
      uStack_7a8 = uStack_c88;
      uStack_7a0 = (ulonglong *******)uStack_c80;
      uStack_7c8 = pppppppuStack_b0;
      uStack_7c0 = (code *)pppppppuStack_d0;
      pppppppuStack_7b8 = pppppppuStack_b0;
      uStack_7b0 = (ulonglong *******)CONCAT71(uStack_7b0._1_7_,bVar28);
      if (SBORROW8(0,(longlong)pppppppuVar36[0x10])) goto LAB_140738f1f;
LAB_14073904a:
      pppppppuVar29 = (ulonglong *******)pppppppuVar36[0x12];
      if ((longlong)pppppppuVar29 < 0) {
        uVar33 = 0;
        pppppppuVar21 = uStack_7c8;
LAB_1407394e7:
        pppppppuStack_478 = pppppppuVar21;
        pdb_142dc7e2a(uVar33,pppppppuVar29);
        goto LAB_14073c971;
      }
      pppppppuStack_f0 = pppppppuVar29;
      if (pppppppuVar29 == (ulonglong *******)0x0) {
        ppppppuStack_108 = (ulonglong ******)0x1;
      }
      else {
        ppppppuVar23 = pppppppuVar36[0x11];
        puStack_c0 = puVar35;
        pppppppuStack_b0 = uStack_7c8;
        pdb_14007ee60();
        pppppppuVar29 = pppppppuStack_f0;
        uVar33 = 1;
        ppppppuVar20 = (ulonglong ******)pub_1406abab0((ulonglong)pppppppuStack_f0,1);
        pppppppuVar21 = pppppppuStack_b0;
        if (ppppppuVar20 == (ulonglong ******)0x0) goto LAB_1407394e7;
        ppppppuStack_108 = ppppppuVar20;
        pub_142e32760(ppppppuVar20,ppppppuVar23);
        puVar35 = puStack_c0;
      }
      bStack_5c = *(byte *)(pppppppuVar36 + 0x13);
      pdb_140f60be0(&uStack_c88,pppppppuVar36 + 0x14);
      pppppppuVar29 = (ulonglong *******)0x8000000000000000;
      if (!SBORROW8(0,(longlong)pppppppuVar36[0x17])) {
        pppppppuVar29 = (ulonglong *******)pppppppuVar36[0x19];
        if ((longlong)pppppppuVar29 < 0) {
          uVar33 = 0;
LAB_140739502:
          pdb_142dc7e2a(uVar33,pppppppuVar29);
          goto LAB_14073c971;
        }
        pppppppuStack_e8 = pppppppuVar29;
        puStack_c0 = puVar35;
        if (pppppppuVar29 == (ulonglong *******)0x0) {
          ppppppuStack_100 = (ulonglong ******)0x1;
          ppppppuVar23 = pppppppuVar36[0x1d];
          if (-1 < (longlong)ppppppuVar23) goto LAB_140739420;
LAB_140739513:
          uVar33 = 0;
LAB_140739516:
          pdb_142dc7e2a(uVar33,ppppppuVar23);
          goto LAB_14073c971;
        }
        ppppppuVar23 = pppppppuVar36[0x18];
        pdb_14007ee60();
        pppppppuVar29 = pppppppuStack_e8;
        uVar33 = 1;
        ppppppuVar20 = (ulonglong ******)pub_1406abab0((ulonglong)pppppppuStack_e8,1);
        if (ppppppuVar20 == (ulonglong ******)0x0) goto LAB_140739502;
        ppppppuStack_100 = ppppppuVar20;
        pub_142e32760(ppppppuVar20,ppppppuVar23);
        ppppppuVar23 = pppppppuVar36[0x1d];
        if ((longlong)ppppppuVar23 < 0) goto LAB_140739513;
LAB_140739420:
        bStack_5b = *(byte *)(pppppppuVar36 + 0x1a);
        ppppppuStack_180 = ppppppuVar23;
        if (ppppppuVar23 == (ulonglong ******)0x0) {
          ppppppuStack_178 = (ulonglong ******)0x1;
        }
        else {
          ppppppuVar20 = pppppppuVar36[0x1c];
          pdb_14007ee60();
          ppppppuVar23 = ppppppuStack_180;
          uVar33 = 1;
          ppppppuVar24 = (ulonglong ******)pub_1406abab0((ulonglong)ppppppuStack_180,1);
          if (ppppppuVar24 == (ulonglong ******)0x0) goto LAB_140739516;
          ppppppuStack_178 = ppppppuVar24;
          pub_142e32760(ppppppuVar24,ppppppuVar20);
        }
        ppppppuStack_f8 =
             (ulonglong ******)CONCAT71(ppppppuStack_f8._1_7_,*(byte *)(pppppppuVar36 + 0x1e));
        pppppppuVar29 = pppppppuStack_e8;
        puVar35 = puStack_c0;
      }
      pppppppuStack_8f8 = uStack_c78;
      pppppppuStack_908 = uStack_c88;
      pppppppuStack_900 = (ulonglong *******)uStack_c80;
      pppppppuStack_b0 = pppppppuStack_f0;
      pppppppuStack_d0 = pppppppuVar29;
    }
    uStack_248 = pppppppuStack_158;
    uStack_258 = uStack_168;
    uStack_250 = uStack_160;
    uStack_230 = (ulonglong *******)CONCAT44(uStack_9b4,uStack_9b8);
    uStack_238 = (ulonglong *******)CONCAT44(uStack_9bc,uStack_9c0);
    uStack_c88 = uStack_7c8;
    uStack_c80 = uStack_7c0;
    uStack_c78 = pppppppuStack_7b8;
    uStack_c70 = uStack_7b0;
    uStack_c68 = uStack_7a8;
    uStack_c60 = uStack_7a0;
    uStack_c58 = pppppppuStack_798;
    uStack_2a8 = pppppppuStack_908;
    uStack_2a0 = pppppppuStack_900;
    uStack_298 = pppppppuStack_8f8;
    uStack_7a8 = (ulonglong *******)CONCAT44(uStack_9bc,uStack_9c0);
    uStack_7a0 = (ulonglong *******)CONCAT44(uStack_9b4,uStack_9b8);
    pppppppuStack_7b8 = pppppppuStack_158;
    uStack_7b0 = (ulonglong *******)CONCAT44(uStack_9c4,uStack_9c8);
    uStack_7c8 = uStack_168;
    uStack_7c0 = uStack_160;
    pppppppuStack_78 = param_3;
    if (!SBORROW8(0,(longlong)*param_3)) {
      pdb_141177340(param_3);
    }
    pppppppuStack_78[4] = (ulonglong ******)uStack_7a8;
    pppppppuStack_78[5] = (ulonglong ******)uStack_7a0;
    pppppppuStack_78[2] = (ulonglong ******)pppppppuStack_7b8;
    pppppppuStack_78[3] = (ulonglong ******)uStack_7b0;
    *pppppppuStack_78 = (ulonglong ******)uStack_7c8;
    pppppppuStack_78[1] = (ulonglong ******)uStack_7c0;
    pppppppuStack_78[6] = (ulonglong ******)pppppppuStack_80;
    pppppppuStack_78[7] = ppppppuStack_110;
    pppppppuStack_78[8] = (ulonglong ******)pppppppuStack_188;
    pppppppuStack_c8[6] = (ulonglong ******)uStack_c58;
    *(undefined4 *)(pppppppuStack_c8 + 4) = (undefined4)uStack_c68;
    *(undefined4 *)((longlong)pppppppuStack_c8 + 0x24) = uStack_c68._4_4_;
    *(undefined4 *)(pppppppuStack_c8 + 5) = (undefined4)uStack_c60;
    *(undefined4 *)((longlong)pppppppuStack_c8 + 0x2c) = uStack_c60._4_4_;
    *(undefined4 *)(pppppppuStack_c8 + 2) = (undefined4)uStack_c78;
    *(undefined4 *)((longlong)pppppppuStack_c8 + 0x14) = uStack_c78._4_4_;
    *(undefined4 *)(pppppppuStack_c8 + 3) = (undefined4)uStack_c70;
    *(undefined4 *)((longlong)pppppppuStack_c8 + 0x1c) = uStack_c70._4_4_;
    *pppppppuStack_c8 = (ulonglong ******)uStack_c88;
    pppppppuStack_c8[1] = (ulonglong ******)uStack_c80;
    pppppppuStack_78[0x10] = (ulonglong ******)pppppppuStack_b0;
    pppppppuStack_78[0x11] = ppppppuStack_108;
    pppppppuStack_78[0x12] = (ulonglong ******)pppppppuStack_f0;
    *(byte *)(pppppppuStack_78 + 0x13) = bStack_5c;
    pppppppuStack_70[2] = (ulonglong ******)uStack_298;
    *(undefined4 *)pppppppuStack_70 = (undefined4)uStack_2a8;
    *(undefined4 *)((longlong)pppppppuStack_70 + 4) = uStack_2a8._4_4_;
    *(undefined4 *)(pppppppuStack_70 + 1) = (undefined4)uStack_2a0;
    *(undefined4 *)((longlong)pppppppuStack_70 + 0xc) = uStack_2a0._4_4_;
    pppppppuStack_78[0x17] = (ulonglong ******)pppppppuStack_d0;
    pppppppuStack_78[0x18] = ppppppuStack_100;
    pppppppuStack_78[0x19] = (ulonglong ******)pppppppuStack_e8;
    *(byte *)(pppppppuStack_78 + 0x1a) = bStack_5b;
    pppppppuStack_78[0x1b] = ppppppuStack_180;
    pppppppuStack_78[0x1c] = ppppppuStack_178;
    pppppppuStack_78[0x1d] = ppppppuStack_180;
    *(byte *)(pppppppuStack_78 + 0x1e) = (byte)ppppppuStack_f8;
    *(undefined4 *)(pppppppuStack_78 + 0x1f) = 0;
    pppppppuVar29 = pppppppuStack_b8;
    pppppppuVar36 = pppppppuStack_b8;
    param_3 = pppppppuStack_78;
    pppppppuVar21 = pppppppuStack_88;
    if (pppppppuStack_88 != (ulonglong *******)0x0) goto LAB_140738de7;
LAB_140738e10:
    if ((pppppppuVar36 == (ulonglong *******)0x0) ||
       (pppppppuVar36 == pppppppuVar19 + uVar18 * 0x20)) {
      if (SBORROW8(0,(longlong)*param_3)) {
        if (SBORROW8(0,(longlong)pppppppuStack_d80)) {
          return;
        }
      }
      else {
        if ((!SBORROW8(0,(longlong)param_3[0x10])) && (!SBORROW8(0,(longlong)param_3[0x17]))) {
          uStack_4a = 1;
          cVar16 = pdb_140f3ec10(param_3[0x18],param_3[0x19]);
          if (cVar16 != '\0') {
            uStack_4a = 1;
            cVar16 = pdb_140f3ec10(param_3[0x1c],param_3[0x1d]);
            if (cVar16 != '\0') goto LAB_1407395a7;
          }
          if (*(uint *)(param_3 + 0x1f) < 0x259) {
            *(uint *)(param_3 + 0x1f) = *(uint *)(param_3 + 0x1f) + 1;
            if (SBORROW8(0,(longlong)pppppppuStack_d80)) {
              return;
            }
            goto LAB_14073961f;
          }
        }
LAB_1407395a7:
        *(int *)(param_3 + 0x1f) = *(int *)(param_3 + 0x1f) + 1;
        pppppppuStack_80 = (ulonglong *******)*param_3;
        *param_3 = (ulonglong ******)0x8000000000000000;
        if (SBORROW8(0,(longlong)pppppppuStack_80)) {
          uStack_4a = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_142fa7700);
        }
        pub_142e32760(&uStack_7c8,param_3 + 1,0xf0);
        if (!SBORROW8(0,(longlong)pppppppuStack_d80)) {
          pdb_141177340(&pppppppuStack_d80);
        }
        pppppppuStack_d80 = pppppppuStack_80;
        pub_142e32760(&pbStack_d78,&uStack_7c8,0xf0);
      }
LAB_14073961f:
      pppppppuStack_b8 = pppppppuStack_d50;
      pbStack_170 = pbStack_d48;
      uStack_828 = uStack_d70;
      pppppppuStack_838 = pppppppuStack_d80;
      pbStack_830 = pbStack_d78;
      uStack_528 = uStack_d58;
      uStack_538 = uStack_d68;
      pbStack_530 = pbStack_d60;
      pppppppuStack_918 = pppppppuStack_d08;
      pppppppuStack_928 = pppppppuStack_d18;
      pppppppuStack_920 = pppppppuStack_d10;
      pppppppuStack_938 = pppppppuStack_d28;
      pppppppuStack_930 = pppppppuStack_d20;
      pppppppuStack_948 = pppppppuStack_d38;
      pppppppuStack_940 = pppppppuStack_d30;
      uStack_958 = uStack_c90;
      pbStack_968 = pbStack_ca0;
      uStack_960 = uStack_c98;
      uStack_978 = uStack_cb0;
      uStack_970 = uStack_ca8;
      pppppppuStack_988 = pppppppuStack_cc0;
      uStack_980 = uStack_cb8;
      uStack_998 = uStack_cd0;
      uStack_994 = uStack_ccc;
      uStack_990 = uStack_cc8;
      uStack_98c = uStack_cc4;
      uStack_9a8 = uStack_ce0;
      uStack_9a4 = uStack_cdc;
      uStack_9a0 = uStack_cd8;
      uStack_99c = uStack_cd4;
      uStack_9b8 = uStack_cf0;
      uStack_9b4 = uStack_cec;
      uStack_9b0 = uStack_ce8;
      uStack_9ac = uStack_ce4;
      uStack_9c8 = uStack_d00;
      uStack_9c4 = uStack_cfc;
      uStack_9c0 = uStack_cf8;
      uStack_9bc = uStack_cf4;
      uStack_54 = 1;
      bStack_55 = 1;
      bStack_56 = 1;
      pdb_1407c3490(&uStack_7c8);
      pub_142e32760(&uStack_c88,&uStack_7c8,0x290);
      pub_142e32760(&uStack_c88,&uStack_7c8,0x1a8);
      pub_142e32760(auStack_ad4,auStack_614,0xcc);
      uStack_ae0 = 5;
      uStack_ad8 = 0;
      uStack_54 = 1;
      bStack_55 = 1;
      bStack_56 = 1;
      pdb_1407c2af0(&uStack_7c8,&uStack_c88);
      if ((int)pppppppuStack_7b8 == 0x3b9aca01) {
        uStack_c88 = uStack_7c8;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_142fa7888,0x2b,&uStack_c88,&UNK_142fa7868,&UNK_142fa7560);
      }
      pppppppuStack_88 = pppppppuStack_d40;
      pppppppuStack_458 = pppppppuStack_7b8;
      uStack_468 = (undefined4)uStack_7c8;
      uStack_464 = uStack_7c8._4_4_;
      uStack_460 = (undefined4)uStack_7c0;
      uStack_45c = uStack_7c0._4_4_;
      uStack_7c8 = (ulonglong *******)0xe0f35c4e0797e59c;
      uStack_5d = 1;
      uStack_5e = 1;
      uStack_5f = 1;
      puVar22 = (undefined1 *)pdb_1411dc680(&UNK_142fa2f42,0xe0f35c4e0797e59c);
      pppppppuStack_188 = (ulonglong *******)CONCAT71(pppppppuStack_188._1_7_,puVar22[7]);
      pppppppuStack_f0 = (ulonglong *******)CONCAT71(pppppppuStack_f0._1_7_,puVar22[6]);
      pppppppuStack_b0 = (ulonglong *******)CONCAT71(pppppppuStack_b0._1_7_,puVar22[5]);
      ppppppuStack_110 = (ulonglong ******)CONCAT71(ppppppuStack_110._1_7_,puVar22[4]);
      puStack_c0 = (ulonglong *)CONCAT71(puStack_c0._1_7_,puVar22[3]);
      pppppppuStack_78 = (ulonglong *******)CONCAT71(pppppppuStack_78._1_7_,puVar22[2]);
      pppppppuStack_c8 = (ulonglong *******)CONCAT71(pppppppuStack_c8._1_7_,*puVar22);
      pppppppuStack_70 = (ulonglong *******)CONCAT71(pppppppuStack_70._1_7_,puVar22[1]);
      ppppppuStack_f8 = (ulonglong ******)CONCAT71(ppppppuStack_f8._1_7_,puVar22[0xf]);
      ppppppuStack_178 = (ulonglong ******)CONCAT71(ppppppuStack_178._1_7_,puVar22[0xe]);
      bStack_5b = puVar22[0xd];
      ppppppuStack_180 = (ulonglong ******)CONCAT71(ppppppuStack_180._1_7_,puVar22[0xc]);
      ppppppuStack_100 = (ulonglong ******)CONCAT71(ppppppuStack_100._1_7_,puVar22[0xb]);
      pppppppuStack_d0 = (ulonglong *******)CONCAT71(pppppppuStack_d0._1_7_,puVar22[10]);
      bStack_5c = puVar22[8];
      pppppppuStack_e8 = (ulonglong *******)CONCAT71(pppppppuStack_e8._1_7_,puVar22[9]);
      uStack_420 = CONCAT71(uStack_420._1_7_,puVar22[0x17]);
      bStack_8f = puVar22[0x16];
      uStack_428 = CONCAT71(uStack_428._1_7_,puVar22[0x15]);
      uStack_430 = CONCAT71(uStack_430._1_7_,puVar22[0x14]);
      ppppppuStack_438 = (ulonglong ******)CONCAT71(ppppppuStack_438._1_7_,puVar22[0x13]);
      ppppppuStack_440 = (ulonglong ******)CONCAT71(ppppppuStack_440._1_7_,puVar22[0x12]);
      ppppppuStack_450 = (ulonglong ******)CONCAT71(ppppppuStack_450._1_7_,puVar22[0x10]);
      ppppppuStack_448 = (ulonglong ******)CONCAT71(ppppppuStack_448._1_7_,puVar22[0x11]);
      uStack_408 = CONCAT71(uStack_408._1_7_,puVar22[0x1f]);
      uStack_410 = CONCAT71(uStack_410._1_7_,puVar22[0x1e]);
      bStack_8a = puVar22[0x1d];
      bStack_8b = puVar22[0x1c];
      bStack_8c = puVar22[0x1b];
      bStack_8d = puVar22[0x1a];
      uStack_418 = CONCAT71(uStack_418._1_7_,puVar22[0x18]);
      bStack_8e = puVar22[0x19];
      uStack_3d0 = CONCAT71(uStack_3d0._1_7_,puVar22[0x27]);
      uStack_3d8 = CONCAT71(uStack_3d8._1_7_,puVar22[0x26]);
      uStack_3e0 = CONCAT71(uStack_3e0._1_7_,puVar22[0x25]);
      uStack_3e8 = CONCAT71(uStack_3e8._1_7_,puVar22[0x24]);
      uStack_3f0 = CONCAT71(uStack_3f0._1_7_,puVar22[0x23]);
      uStack_3f8 = CONCAT71(uStack_3f8._1_7_,puVar22[0x22]);
      bStack_89 = puVar22[0x20];
      uStack_400 = CONCAT71(uStack_400._1_7_,puVar22[0x21]);
      uStack_390 = CONCAT71(uStack_390._1_7_,puVar22[0x2f]);
      uStack_398 = CONCAT71(uStack_398._1_7_,puVar22[0x2e]);
      uStack_3a0 = CONCAT71(uStack_3a0._1_7_,puVar22[0x2d]);
      uStack_3a8 = CONCAT71(uStack_3a8._1_7_,puVar22[0x2c]);
      uStack_3b0 = CONCAT71(uStack_3b0._1_7_,puVar22[0x2b]);
      uStack_3b8 = CONCAT71(uStack_3b8._1_7_,puVar22[0x2a]);
      uStack_3c8 = CONCAT71(uStack_3c8._1_7_,puVar22[0x28]);
      uStack_3c0 = CONCAT71(uStack_3c0._1_7_,puVar22[0x29]);
      uStack_350 = CONCAT71(uStack_350._1_7_,puVar22[0x37]);
      uStack_358 = CONCAT71(uStack_358._1_7_,puVar22[0x36]);
      uStack_360 = CONCAT71(uStack_360._1_7_,puVar22[0x35]);
      uStack_368 = CONCAT71(uStack_368._1_7_,puVar22[0x34]);
      uStack_370 = CONCAT71(uStack_370._1_7_,puVar22[0x33]);
      uStack_378 = CONCAT71(uStack_378._1_7_,puVar22[0x32]);
      uStack_388 = CONCAT71(uStack_388._1_7_,puVar22[0x30]);
      uStack_380 = CONCAT71(uStack_380._1_7_,puVar22[0x31]);
      uStack_310 = CONCAT71(uStack_310._1_7_,puVar22[0x3f]);
      uStack_318 = CONCAT71(uStack_318._1_7_,puVar22[0x3e]);
      uStack_320 = CONCAT71(uStack_320._1_7_,puVar22[0x3d]);
      uStack_328 = CONCAT71(uStack_328._1_7_,puVar22[0x3c]);
      uStack_330 = CONCAT71(uStack_330._1_7_,puVar22[0x3b]);
      uStack_338 = CONCAT71(uStack_338._1_7_,puVar22[0x3a]);
      uStack_348 = CONCAT71(uStack_348._1_7_,puVar22[0x38]);
      uStack_340 = CONCAT71(uStack_340._1_7_,puVar22[0x39]);
      uStack_2d0 = CONCAT71(uStack_2d0._1_7_,puVar22[0x47]);
      uStack_2d8 = CONCAT71(uStack_2d8._1_7_,puVar22[0x46]);
      uStack_2e0 = CONCAT71(uStack_2e0._1_7_,puVar22[0x45]);
      uStack_2e8 = CONCAT71(uStack_2e8._1_7_,puVar22[0x44]);
      uStack_2f0 = CONCAT71(uStack_2f0._1_7_,puVar22[0x43]);
      uStack_2f8 = CONCAT71(uStack_2f8._1_7_,puVar22[0x42]);
      uStack_308 = CONCAT71(uStack_308._1_7_,puVar22[0x40]);
      uStack_300 = CONCAT71(uStack_300._1_7_,puVar22[0x41]);
      bVar28 = puVar22[0x4f];
      bVar34 = puVar22[0x4e];
      bVar2 = puVar22[0x4d];
      bVar3 = puVar22[0x4c];
      bVar4 = puVar22[0x4b];
      bVar5 = puVar22[0x4a];
      uStack_2c8 = CONCAT71(uStack_2c8._1_7_,puVar22[0x48]);
      bVar6 = puVar22[0x49];
      ppppppuStack_108 = (ulonglong ******)CONCAT71(ppppppuStack_108._1_7_,puVar22[0x50]);
      pdb_14007ee60();
      pppppppuStack_80 = (ulonglong *******)pub_1406abab0(0x51,1);
      if (pppppppuStack_80 == (ulonglong *******)0x0) {
        uStack_5d = 1;
        uStack_5e = 1;
        uStack_5f = 1;
        pdb_142dc7e2a(1,0x51);
        goto LAB_14073c971;
      }
      uStack_9f8 = (ulonglong)bVar34;
      uStack_9f0 = (ulonglong)bVar2;
      uStack_9e8 = (ulonglong)bVar3;
      uStack_9e0 = (ulonglong)bVar4;
      uStack_9d8 = (ulonglong)bVar5;
      uStack_9d0 = (ulonglong)bVar6;
      uStack_2c8 = uStack_2c8 & 0xff;
      uStack_2d8 = uStack_2d8 & 0xff;
      uStack_2e0 = uStack_2e0 & 0xff;
      uStack_2e8 = uStack_2e8 & 0xff;
      uStack_2f0 = uStack_2f0 & 0xff;
      uStack_2f8 = uStack_2f8 & 0xff;
      uStack_300 = uStack_300 & 0xff;
      uStack_308 = uStack_308 & 0xff;
      uStack_318 = uStack_318 & 0xff;
      uStack_320 = uStack_320 & 0xff;
      uStack_328 = uStack_328 & 0xff;
      uStack_330 = uStack_330 & 0xff;
      uStack_338 = uStack_338 & 0xff;
      uStack_340 = uStack_340 & 0xff;
      uStack_348 = uStack_348 & 0xff;
      uStack_358 = uStack_358 & 0xff;
      uStack_360 = uStack_360 & 0xff;
      uStack_368 = uStack_368 & 0xff;
      uStack_370 = uStack_370 & 0xff;
      uStack_378 = uStack_378 & 0xff;
      uStack_380 = uStack_380 & 0xff;
      uStack_388 = uStack_388 & 0xff;
      uStack_398 = uStack_398 & 0xff;
      uStack_3a0 = uStack_3a0 & 0xff;
      uStack_3a8 = uStack_3a8 & 0xff;
      uStack_3b0 = uStack_3b0 & 0xff;
      uStack_3b8 = uStack_3b8 & 0xff;
      uStack_3c0 = uStack_3c0 & 0xff;
      uStack_3c8 = uStack_3c8 & 0xff;
      uStack_3d8 = uStack_3d8 & 0xff;
      uStack_3e0 = uStack_3e0 & 0xff;
      uStack_3e8 = uStack_3e8 & 0xff;
      uStack_3f0 = uStack_3f0 & 0xff;
      uStack_3f8 = uStack_3f8 & 0xff;
      uStack_400 = uStack_400 & 0xff;
      uStack_410 = uStack_410 & 0xff;
      uStack_418 = uStack_418 & 0xff;
      uVar18 = uStack_428 & 0xff;
      uVar32 = uStack_430 & 0xff;
      uStack_430 = (ulonglong)ppppppuStack_450 & 0xff;
      uStack_428 = (ulonglong)ppppppuStack_f8 & 0xff;
      ppppppuVar23 = (ulonglong ******)
                     ((uStack_2c8 |
                      (ulonglong)bVar6 << 8 |
                      (ulonglong)bVar5 << 0x10 |
                      (ulonglong)bVar4 << 0x18 |
                      uStack_9e8 << 0x20 |
                      uStack_9f0 << 0x28 | uStack_9f8 << 0x30 | (ulonglong)bVar28 << 0x38) ^
                     0x16d9fe3a90a6902b);
      ppppppuStack_450 =
           (ulonglong ******)
           ((uStack_308 |
            (ulonglong)(uint)((int)uStack_300 << 8) |
            (ulonglong)(uint)((int)uStack_2f8 << 0x10) |
            (ulonglong)(uint)((int)uStack_2f0 << 0x18) |
            uStack_2e8 << 0x20 | uStack_2e0 << 0x28 | uStack_2d8 << 0x30 | uStack_2d0 << 0x38) ^
           0xf591b803144c79d8);
      ppppppuVar20 = (ulonglong ******)
                     ((uStack_348 |
                      (ulonglong)(uint)((int)uStack_340 << 8) |
                      (ulonglong)(uint)((int)uStack_338 << 0x10) |
                      (ulonglong)(uint)((int)uStack_330 << 0x18) |
                      uStack_328 << 0x20 |
                      uStack_320 << 0x28 | uStack_318 << 0x30 | uStack_310 << 0x38) ^
                     0x42c7fc7ca40b01e7);
      ppppppuVar24 = (ulonglong ******)
                     ((uStack_388 |
                      (ulonglong)(uint)((int)uStack_380 << 8) |
                      (ulonglong)(uint)((int)uStack_378 << 0x10) |
                      (ulonglong)(uint)((int)uStack_370 << 0x18) |
                      uStack_368 << 0x20 |
                      uStack_360 << 0x28 | uStack_358 << 0x30 | uStack_350 << 0x38) ^
                     0xb4516df03b6e4ae9);
      ppppppuVar25 = (ulonglong ******)
                     ((uStack_3c8 |
                      (ulonglong)(uint)((int)uStack_3c0 << 8) |
                      (ulonglong)(uint)((int)uStack_3b8 << 0x10) |
                      (ulonglong)(uint)((int)uStack_3b0 << 0x18) |
                      uStack_3a8 << 0x20 |
                      uStack_3a0 << 0x28 | uStack_398 << 0x30 | uStack_390 << 0x38) ^
                     0xb77e8fdf4547e9e);
      *pppppppuStack_80 =
           (ulonglong ******)
           (((ulonglong)pppppppuStack_c8 & 0xff |
            ((ulonglong)pppppppuStack_70 & 0xff) << 8 |
            ((ulonglong)pppppppuStack_78 & 0xff) << 0x10 |
            ((ulonglong)puStack_c0 & 0xff) << 0x18 |
            ((ulonglong)ppppppuStack_110 & 0xff) << 0x20 |
            ((ulonglong)pppppppuStack_b0 & 0xff) << 0x28 |
            ((ulonglong)pppppppuStack_f0 & 0xff) << 0x30 | (longlong)pppppppuStack_188 << 0x38) ^
           0x3ded12d2cf1bdab4);
      pppppppuStack_80[1] =
           (ulonglong ******)
           (((ulonglong)bStack_5c |
            ((ulonglong)pppppppuStack_e8 & 0xff) << 8 |
            ((ulonglong)pppppppuStack_d0 & 0xff) << 0x10 |
            ((ulonglong)ppppppuStack_100 & 0xff) << 0x18 |
            ((ulonglong)ppppppuStack_180 & 0xff) << 0x20 |
            (ulonglong)bStack_5b << 0x28 |
            ((ulonglong)ppppppuStack_178 & 0xff) << 0x30 | (longlong)ppppppuStack_f8 << 0x38) ^
           0x24ed8b616954bc29);
      pppppppuStack_80[2] =
           (ulonglong ******)
           ((uStack_430 |
            ((ulonglong)ppppppuStack_448 & 0xff) << 8 |
            ((ulonglong)ppppppuStack_440 & 0xff) << 0x10 |
            ((ulonglong)ppppppuStack_438 & 0xff) << 0x18 |
            uVar32 << 0x20 | uVar18 << 0x28 | (ulonglong)bStack_8f << 0x30 | uStack_420 << 0x38) ^
           0x7ebafae725bdd581);
      pppppppuStack_80[3] =
           (ulonglong ******)
           ((uStack_418 |
            (ulonglong)bStack_8e << 8 |
            (ulonglong)bStack_8d << 0x10 |
            (ulonglong)bStack_8c << 0x18 |
            (ulonglong)bStack_8b << 0x20 |
            (ulonglong)bStack_8a << 0x28 | uStack_410 << 0x30 | uStack_408 << 0x38) ^
           0x7283e34e1d274894);
      pppppppuStack_80[4] =
           (ulonglong ******)
           (((ulonglong)bStack_89 |
            (ulonglong)(uint)((int)uStack_400 << 8) |
            (ulonglong)(uint)((int)uStack_3f8 << 0x10) |
            (ulonglong)(uint)((int)uStack_3f0 << 0x18) |
            uStack_3e8 << 0x20 | uStack_3e0 << 0x28 | uStack_3d8 << 0x30 | uStack_3d0 << 0x38) ^
           0xff7dd799d3aea35b);
      pppppppuStack_80[5] = ppppppuVar25;
      pppppppuStack_80[6] = ppppppuVar24;
      pppppppuStack_80[7] = ppppppuVar20;
      pppppppuStack_80[8] = ppppppuStack_450;
      pppppppuStack_80[9] = ppppppuVar23;
      *(byte *)(pppppppuStack_80 + 10) = (byte)ppppppuStack_108 ^ 0x15;
      uStack_4e = 1;
      uStack_4f = 1;
      uStack_50 = 1;
      uStack_51 = 1;
      ppppppuStack_448 = ppppppuVar20;
      ppppppuStack_440 = ppppppuVar24;
      ppppppuStack_438 = ppppppuVar25;
      uStack_420 = uStack_420 & 0xff;
      uStack_408 = uStack_408 & 0xff;
      uStack_3d0 = uStack_3d0 & 0xff;
      uStack_390 = uStack_390 & 0xff;
      uStack_350 = uStack_350 & 0xff;
      uStack_310 = uStack_310 & 0xff;
      uStack_2d0 = uStack_2d0 & 0xff;
      ppppppuStack_f8 = ppppppuVar23;
      pdb_1411eae00(&uStack_168);
      uStack_59 = 1;
      pdb_140f60be0(&pppppppuStack_908,&pppppppuStack_838);
      pppppppuVar37 = pppppppuStack_88;
      if (SBORROW8(0,(longlong)pppppppuStack_908)) {
        uStack_7c0 = (code *)&UNK_1432b0778;
        pppppppuStack_7b8 = pppppppuStack_900;
        uStack_7b0 = pppppppuStack_8f8;
        uStack_7a8 = (ulonglong *******)0x0;
      }
      else {
        uStack_258 = pppppppuStack_908;
        uStack_250 = (code *)pppppppuStack_900;
        uStack_248 = pppppppuStack_8f8;
        uStack_59 = 1;
        pdb_141124f00(&uStack_7c0,&uStack_258,-(longlong)pppppppuStack_908);
      }
      uStack_7c8 = (ulonglong *******)0x1;
      uStack_59 = 1;
      pdb_1411eae50(&uStack_c88,&uStack_7c8);
      pppppppuStack_218 = pppppppuStack_128;
      uStack_210 = uStack_120;
      uStack_228 = (ulonglong *******)CONCAT44(uStack_134,uStack_138);
      uStack_220 = uStack_130;
      uStack_21c = uStack_12c;
      uStack_238 = (ulonglong *******)CONCAT44(uStack_144,uStack_148);
      uStack_230 = (ulonglong *******)CONCAT44(uStack_13c,uStack_140);
      uStack_248 = pppppppuStack_158;
      uStack_240 = (ulonglong *******)CONCAT44(uStack_14c,uStack_150);
      uStack_258 = uStack_168;
      uStack_250 = uStack_160;
      pub_142e32760(&uStack_7b0,&uStack_c88,0xf8);
      pppppppuVar19 = pppppppuStack_218;
      uStack_7c8 = (ulonglong *******)0x8000000000000000;
      uStack_7c0 = (code *)&UNK_142fa7578;
      pppppppuStack_7b8 = (ulonglong *******)0x4;
      if (pppppppuStack_218 == uStack_228) {
        pdb_142dd20a0(&uStack_228);
      }
      pub_142e32760((longlong)pppppppuVar19 * 0x110 + CONCAT44(uStack_21c,uStack_220),&uStack_7c8,
                    0x110);
      pppppppuStack_8c8 = (ulonglong *******)((longlong)pppppppuVar19 + 1);
      uStack_8c0 = uStack_210;
      uStack_8d8 = (undefined4)uStack_228;
      uStack_8d4 = uStack_228._4_4_;
      uStack_8d0 = uStack_220;
      uStack_8cc = uStack_21c;
      uStack_8e8 = SUB82(uStack_238,0);
      uStack_8e6 = (undefined2)((ulonglong)uStack_238 >> 0x10);
      uStack_8e4 = (undefined2)((ulonglong)uStack_238 >> 0x20);
      uStack_8e2 = (undefined2)((ulonglong)uStack_238 >> 0x30);
      uStack_8e0 = SUB82(uStack_230,0);
      uStack_8de = (undefined1)((ulonglong)uStack_230 >> 0x10);
      uStack_8dd = (undefined1)((ulonglong)uStack_230 >> 0x18);
      uStack_8dc = uStack_230._4_4_;
      pppppppuStack_8f8 = uStack_248;
      pppppppuStack_8f0 = uStack_240;
      pppppppuStack_908 = uStack_258;
      pppppppuStack_900 = (ulonglong *******)uStack_250;
      uStack_5a = 1;
      pppppppuStack_218 = pppppppuStack_8c8;
      pdb_140f60be0(&uStack_168,&uStack_538);
      if (SBORROW8(0,(longlong)uStack_168)) {
        uStack_7c0 = (code *)&UNK_1432b0778;
        pppppppuStack_7b8 = (ulonglong *******)uStack_160;
        uStack_7b0 = pppppppuStack_158;
        uStack_7a8 = (ulonglong *******)0x0;
      }
      else {
        uStack_258 = uStack_168;
        uStack_250 = uStack_160;
        uStack_248 = pppppppuStack_158;
        uStack_5a = 1;
        pdb_141124f00(&uStack_7c0,&uStack_258,-(longlong)uStack_168);
      }
      uStack_7c8 = (ulonglong *******)0x1;
      uStack_5a = 1;
      pdb_1411eae50(&uStack_c88,&uStack_7c8);
      pppppppuStack_218 = pppppppuStack_8c8;
      uStack_210 = uStack_8c0;
      uStack_228 = (ulonglong *******)CONCAT44(uStack_8d4,uStack_8d8);
      uStack_220 = uStack_8d0;
      uStack_21c = uStack_8cc;
      uStack_238 = (ulonglong *******)
                   CONCAT44(CONCAT22(uStack_8e2,uStack_8e4),CONCAT22(uStack_8e6,uStack_8e8));
      uStack_230 = (ulonglong *******)
                   CONCAT44(uStack_8dc,CONCAT13(uStack_8dd,CONCAT12(uStack_8de,uStack_8e0)));
      uStack_248 = pppppppuStack_8f8;
      uStack_240 = pppppppuStack_8f0;
      uStack_258 = pppppppuStack_908;
      uStack_250 = (code *)pppppppuStack_900;
      pub_142e32760(&uStack_7b0,&uStack_c88,0xf8);
      pppppppuVar19 = pppppppuStack_218;
      uStack_7c8 = (ulonglong *******)0x8000000000000000;
      uStack_7c0 = (code *)&UNK_142fa757c;
      pppppppuStack_7b8 = (ulonglong *******)0x4;
      if (pppppppuStack_218 == uStack_228) {
        pdb_142dd20a0(&uStack_228);
      }
      pub_142e32760((longlong)pppppppuVar19 * 0x110 + CONCAT44(uStack_21c,uStack_220),&uStack_7c8,
                    0x110);
      pppppppuStack_7d8 = (ulonglong *******)((longlong)pppppppuVar19 + 1);
      uStack_818 = (undefined4)uStack_258;
      uStack_814 = uStack_258._4_4_;
      uStack_810 = (undefined4)uStack_250;
      uStack_80c = uStack_250._4_4_;
      uStack_808 = (undefined4)uStack_248;
      uStack_804 = uStack_248._4_4_;
      uStack_800 = (undefined4)uStack_240;
      uStack_7fc = uStack_240._4_4_;
      uStack_7f8 = (undefined4)uStack_238;
      uStack_7f4 = uStack_238._4_4_;
      uStack_7f0 = (undefined4)uStack_230;
      uStack_7ec = uStack_230._4_4_;
      uStack_7e8 = (undefined4)uStack_228;
      uStack_7e4 = uStack_228._4_4_;
      uStack_7e0 = uStack_220;
      uStack_7dc = uStack_21c;
      uStack_7d0 = uStack_210;
      pppppppuStack_c8 =
           (ulonglong *******)
           CONCAT71(pppppppuStack_c8._1_7_,SBORROW8(0,(longlong)pppppppuStack_b8));
      pppppppuStack_218 = pppppppuStack_7d8;
      if (SBORROW8(0,(longlong)pppppppuStack_b8)) {
        uStack_480 = uStack_210;
        pppppppuStack_4c8 = uStack_258;
        pppppppuStack_4c0 = (ulonglong *******)uStack_250;
        pppppppuStack_4b8 = uStack_248;
        pppppppuStack_4b0 = uStack_240;
        pppppppuStack_4a8 = uStack_238;
        pppppppuStack_4a0 = uStack_230;
        pppppppuStack_498 = uStack_228;
        uStack_490 = CONCAT44(uStack_21c,uStack_220);
        pppppppuStack_488 = pppppppuStack_7d8;
LAB_14073a772:
        if (SBORROW8(0,(longlong)pppppppuStack_948)) {
          pppppppuStack_88 = (ulonglong *******)CONCAT44(pppppppuStack_88._4_4_,1);
          lVar26 = CONCAT44(uStack_9c4,uStack_9c8);
          pppppppuStack_4d8 = pppppppuStack_488;
          uStack_4d0 = uStack_480;
          uStack_4e8 = pppppppuStack_498;
          uStack_4e0 = uStack_490;
          uStack_4f8 = pppppppuStack_4a8;
          uStack_4f0 = pppppppuStack_4a0;
          uStack_508 = pppppppuStack_4b8;
          uStack_500 = pppppppuStack_4b0;
          uStack_518 = pppppppuStack_4c8;
          uStack_510 = pppppppuStack_4c0;
          uVar12 = uStack_c50;
          uVar13 = uStack_c4c;
          pppppppuVar37 = pppppppuStack_c48;
          uVar33 = uStack_c40;
          uVar8 = uStack_c38;
          uVar32 = uStack_c30;
          pbVar1 = pbStack_c28;
          uVar14 = uStack_c20;
          uVar15 = uStack_c18;
          uStack_c50 = uStack_990;
          uStack_c4c = uStack_98c;
          pppppppuStack_c48 = pppppppuStack_988;
          uStack_c40 = uStack_980;
          uStack_c38 = uStack_978;
          uStack_c30 = uStack_970;
          pbStack_c28 = pbStack_968;
          uStack_c20 = uStack_960;
          uStack_c18 = uStack_958;
        }
        else {
          uStack_228 = pppppppuStack_918;
          uStack_238 = pppppppuStack_928;
          uStack_230 = pppppppuStack_920;
          uStack_248 = pppppppuStack_938;
          uStack_240 = pppppppuStack_930;
          uStack_258 = pppppppuStack_948;
          uStack_250 = (code *)pppppppuStack_940;
          uStack_2a8 = (ulonglong *******)0x0;
          uStack_2a0 = (ulonglong *******)0x1;
          uStack_298 = (ulonglong *******)0x0;
          uStack_52 = 1;
          uStack_53 = 1;
          pdb_1411ee220(&uStack_c88,&uStack_258,&uStack_2a8,0,1);
          if (uStack_c88 != (ulonglong *******)0x4) {
            uStack_7c0 = uStack_c80;
            pppppppuStack_7b8 = uStack_c78;
            uStack_7c8 = uStack_c88;
            uStack_52 = 1;
            uStack_53 = 1;
            ppppppuVar23 = (ulonglong ******)pdb_142dd2690(&uStack_7c8);
            if (uStack_2a8 != (ulonglong *******)0x0) {
              pub_1406abac0((byte *)uStack_2a0,(ulonglong)uStack_2a8,1);
            }
LAB_14073ad48:
            if (uStack_258 != (ulonglong *******)0x0) {
              pub_1406abac0((byte *)uStack_250,(ulonglong)uStack_258,1);
            }
            pppppppuVar37 = uStack_230;
            if (uStack_228 != (ulonglong *******)0x0) {
              pppppppuVar19 = uStack_230 + 1;
              pppppppuVar29 = uStack_228;
              do {
                if (pppppppuVar19[-1] != (ulonglong ******)0x0) {
                  pub_1406abac0((byte *)*pppppppuVar19,(ulonglong)pppppppuVar19[-1],1);
                }
                pppppppuVar19 = pppppppuVar19 + 3;
                pppppppuVar29 = (ulonglong *******)((longlong)pppppppuVar29 + -1);
              } while (pppppppuVar29 != (ulonglong *******)0x0);
            }
            if (uStack_238 != (ulonglong *******)0x0) {
              pub_1406abac0((byte *)pppppppuVar37,(longlong)uStack_238 * 0x18,8);
            }
            if (pppppppuStack_4c8 != (ulonglong *******)0x0) {
              pub_1406abac0((byte *)pppppppuStack_4c0,(ulonglong)pppppppuStack_4c8,1);
            }
            pppppppuVar37 = pppppppuStack_4a8;
            if (pppppppuStack_4a0 != (ulonglong *******)0x0) {
              pppppppuVar19 = pppppppuStack_4a8 + 1;
              pppppppuVar29 = pppppppuStack_4a0;
              do {
                if (pppppppuVar19[-1] != (ulonglong ******)0x0) {
                  pub_1406abac0((byte *)*pppppppuVar19,(ulonglong)pppppppuVar19[-1],1);
                }
                pppppppuVar19 = pppppppuVar19 + 3;
                pppppppuVar29 = (ulonglong *******)((longlong)pppppppuVar29 + -1);
              } while (pppppppuVar29 != (ulonglong *******)0x0);
            }
            if (pppppppuStack_4b0 != (ulonglong *******)0x0) {
              pub_1406abac0((byte *)pppppppuVar37,(longlong)pppppppuStack_4b0 * 0x18,8);
            }
            uStack_60 = 0;
            uStack_61 = 1;
            uStack_62 = 1;
            uStack_63 = 0;
            pdb_1411da9c0(&pppppppuStack_498);
            bVar34 = 1;
            bVar28 = 0;
            goto LAB_14073ae6c;
          }
          if (SBORROW8(0,(longlong)uStack_2a8)) {
            pppppppuStack_900 = (ulonglong *******)&UNK_1432b0778;
            pppppppuStack_8f8 = uStack_2a0;
            pppppppuStack_8f0 = uStack_298;
            uStack_8e8 = 0;
            uStack_8e6 = 0;
            uStack_8e4 = 0;
            uStack_8e2 = 0;
          }
          else {
            uStack_168 = uStack_2a8;
            uStack_160 = (code *)uStack_2a0;
            pppppppuStack_158 = uStack_298;
            uStack_52 = 1;
            uStack_53 = 0;
            pdb_141124f00(&pppppppuStack_900,&uStack_168,-(longlong)uStack_2a8);
          }
          pppppppuStack_908 = (ulonglong *******)0x1;
          uStack_52 = 1;
          uStack_53 = 0;
          pdb_1411eae50(&uStack_7c8,&pppppppuStack_908);
          uStack_52 = 1;
          uStack_53 = 0;
          pdb_1411eafc0(&uStack_c88,&uStack_7c8,&UNK_142fa7593,0xf);
          pppppppuVar19 = (ulonglong *******)uStack_c80;
          pppppppuVar37 = uStack_c88;
          if (uStack_c88 == (ulonglong *******)0x2) {
            uStack_52 = 1;
            uStack_53 = 0;
            ppppppuVar23 = (ulonglong ******)pdb_142dd25f0(uStack_c80);
            goto LAB_14073ad48;
          }
          pub_142e32760(&uStack_7a0,&uStack_c78,0xe8);
          pppppppuVar29 = pppppppuStack_488;
          pppppppuStack_c48 = pppppppuStack_488;
          uStack_c40 = uStack_480;
          uStack_c58 = pppppppuStack_498;
          uStack_c50 = (undefined4)uStack_490;
          uStack_c4c = uStack_490._4_4_;
          uStack_c68 = pppppppuStack_4a8;
          uStack_c60 = pppppppuStack_4a0;
          uStack_c78 = pppppppuStack_4b8;
          uStack_c70 = pppppppuStack_4b0;
          uStack_c88 = pppppppuStack_4c8;
          uStack_c80 = (code *)pppppppuStack_4c0;
          uStack_7b0 = pppppppuVar37;
          uStack_7a8 = pppppppuVar19;
          uStack_7c8 = (ulonglong *******)0x8000000000000000;
          uStack_7c0 = (code *)&UNK_142fa75a2;
          pppppppuStack_7b8 = (ulonglong *******)0x4;
          if (pppppppuStack_488 == pppppppuStack_498) {
            pdb_142dd20a0(&uStack_c58);
          }
          pub_142e32760((longlong)pppppppuVar29 * 0x110 + CONCAT44(uStack_c4c,uStack_c50),
                        &uStack_7c8,0x110);
          pppppppuStack_c48 = (ulonglong *******)((longlong)pppppppuVar29 + 1);
          uStack_4e0 = CONCAT44(uStack_c4c,uStack_c50);
          uStack_518 = uStack_c88;
          uStack_510 = (ulonglong *******)uStack_c80;
          uStack_508 = uStack_c78;
          uStack_500 = uStack_c70;
          uStack_4f8 = uStack_c68;
          uStack_4f0 = uStack_c60;
          uStack_4e8 = uStack_c58;
          uStack_4d0 = uStack_c40;
          pppppppuStack_4d8 = pppppppuStack_c48;
          if (uStack_258 != (ulonglong *******)0x0) {
            pub_1406abac0((byte *)uStack_250,(ulonglong)uStack_258,1);
          }
          pppppppuVar37 = uStack_230;
          if (uStack_228 != (ulonglong *******)0x0) {
            pppppppuVar19 = uStack_230 + 1;
            pppppppuVar29 = uStack_228;
            do {
              if (pppppppuVar19[-1] != (ulonglong ******)0x0) {
                pub_1406abac0((byte *)*pppppppuVar19,(ulonglong)pppppppuVar19[-1],1);
              }
              pppppppuVar19 = pppppppuVar19 + 3;
              pppppppuVar29 = (ulonglong *******)((longlong)pppppppuVar29 + -1);
            } while (pppppppuVar29 != (ulonglong *******)0x0);
          }
          if (uStack_238 != (ulonglong *******)0x0) {
            pub_1406abac0((byte *)pppppppuVar37,(longlong)uStack_238 * 0x18,8);
          }
          pppppppuStack_88 = (ulonglong *******)((ulonglong)pppppppuStack_88 & 0xffffffff00000000);
          lVar26 = CONCAT44(uStack_9c4,uStack_9c8);
          uVar12 = uStack_c50;
          uVar13 = uStack_c4c;
          pppppppuVar37 = pppppppuStack_c48;
          uVar33 = uStack_c40;
          uVar8 = uStack_c38;
          uVar32 = uStack_c30;
          pbVar1 = pbStack_c28;
          uVar14 = uStack_c20;
          uVar15 = uStack_c18;
          uStack_c50 = uStack_990;
          uStack_c4c = uStack_98c;
          pppppppuStack_c48 = pppppppuStack_988;
          uStack_c40 = uStack_980;
          uStack_c38 = uStack_978;
          uStack_c30 = uStack_970;
          pbStack_c28 = pbStack_968;
          uStack_c20 = uStack_960;
          uStack_c18 = uStack_958;
        }
        uStack_990 = uStack_c50;
        uStack_98c = uStack_c4c;
        pppppppuStack_988 = pppppppuStack_c48;
        uStack_980 = uStack_c40;
        uStack_978 = uStack_c38;
        uStack_970 = uStack_c30;
        pbStack_968 = pbStack_c28;
        uStack_960 = uStack_c20;
        uStack_958 = uStack_c18;
        if (SBORROW8(0,lVar26)) {
          uVar17 = 1;
LAB_14073bb22:
          uStack_c18 = uVar15;
          uStack_c20 = uVar14;
          pbStack_c28 = pbVar1;
          uStack_c30 = uVar32;
          uStack_c38 = uVar8;
          uStack_c40 = uVar33;
          pppppppuStack_c48 = pppppppuVar37;
          uStack_c4c = uVar13;
          uStack_c50 = uVar12;
          pppppppuStack_70 = (ulonglong *******)CONCAT44(pppppppuStack_70._4_4_,uVar17);
          pppppppuStack_268 = pppppppuStack_4d8;
          uStack_260 = uStack_4d0;
          uStack_278 = (undefined4)uStack_4e8;
          uStack_274 = uStack_4e8._4_4_;
          uStack_270 = (undefined4)uStack_4e0;
          uStack_26c = uStack_4e0._4_4_;
          uStack_288 = (undefined4)uStack_4f8;
          uStack_284 = uStack_4f8._4_4_;
          uStack_280 = (undefined4)uStack_4f0;
          uStack_27c = uStack_4f0._4_4_;
          uStack_298 = uStack_508;
          uStack_290 = (undefined4)uStack_500;
          uStack_28c = uStack_500._4_4_;
          uStack_2a8 = uStack_518;
          uStack_2a0 = uStack_510;
        }
        else {
          uStack_c58 = (ulonglong *******)CONCAT44(uStack_994,uStack_998);
          uStack_c68 = (ulonglong *******)CONCAT44(uStack_9a4,uStack_9a8);
          uStack_c60 = (ulonglong *******)CONCAT44(uStack_99c,uStack_9a0);
          uStack_c78 = (ulonglong *******)CONCAT44(uStack_9b4,uStack_9b8);
          uStack_c70 = (ulonglong *******)CONCAT44(uStack_9ac,uStack_9b0);
          uStack_c88 = (ulonglong *******)CONCAT44(uStack_9c4,uStack_9c8);
          uStack_c80 = (code *)CONCAT44(uStack_9bc,uStack_9c0);
          pppppppuStack_2c0 = (ulonglong *******)0x0;
          pppppppuStack_2b8 = (ulonglong *******)0x1;
          pppppppuStack_2b0 = (ulonglong *******)0x0;
          uStack_250 = (code *)0x8000000000000000;
          uStack_248 = (ulonglong *******)&pppppppuStack_2c0;
          uStack_240 = (ulonglong *******)0x0;
          uStack_258 = (ulonglong *******)0x8000000000000001;
          uStack_168 = (ulonglong *******)0x0;
          uStack_160 = (code *)0x8;
          pppppppuStack_158 = (ulonglong *******)0x0;
          pdb_140dbfa40(&uStack_2a8);
          pppppppuStack_730 = uStack_2a8;
          pppppppuStack_728 = uStack_2a0;
          pppppppuStack_798 = uStack_258;
          pppppppuStack_790 = (ulonglong *******)uStack_250;
          pppppppuStack_788 = uStack_248;
          pppppppuStack_780 = uStack_240;
          pppppppuStack_778 = uStack_238;
          pppppppuStack_770 = uStack_230;
          uStack_768 = (undefined4)uStack_228;
          uStack_764 = uStack_228._4_4_;
          uStack_760 = uStack_220;
          uStack_75c = uStack_21c;
          pppppppuStack_758 = pppppppuStack_218;
          uStack_750 = uStack_210;
          uStack_748 = uStack_208;
          uStack_740 = uStack_200;
          uStack_738 = uStack_1f8;
          pppppppuStack_7b8 = pppppppuStack_158;
          uStack_7c8 = uStack_168;
          uStack_7c0 = uStack_160;
          uStack_7b0 = (ulonglong *******)0x0;
          uStack_720 = 0;
          uStack_718 = 0;
          uStack_710 = 0;
          uStack_7a8 = (ulonglong *******)0x1;
          uStack_7a0 = (ulonglong *******)0x0;
          pppppppuStack_908 = (ulonglong *******)((ulonglong)pppppppuStack_908 & 0xffffffff00000000)
          ;
          pppppppuStack_900 = (ulonglong *******)((ulonglong)pppppppuStack_900 & 0xffffffff00000000)
          ;
          pppppppuStack_8f8 = (ulonglong *******)((ulonglong)pppppppuStack_8f8 & 0xffffffff00000000)
          ;
          uStack_8e8 = 1;
          uStack_8e4 = 0x7bc;
          uStack_8e2 = 0x101;
          uStack_8e0 = 0;
          uStack_8de = 0;
          uStack_8dc = uStack_8dc & 0xffffff00;
          pdb_140f60be0(&uStack_a8,&uStack_c68);
          pdb_140f55fb0(&uStack_2a8,uStack_c80,uStack_c78);
          pppppppuVar37 = uStack_298;
          if (!SBORROW8(0,(longlong)uStack_2a8)) {
            pppppppuStack_78 = uStack_2a8;
            pppppppuStack_70 = uStack_2a0;
            uStack_238 = (ulonglong *******)
                         CONCAT44(CONCAT22(uStack_8e2,uStack_8e4),CONCAT22(uStack_8e6,uStack_8e8));
            uStack_230 = (ulonglong *******)
                         CONCAT44(uStack_8dc,CONCAT13(uStack_8dd,CONCAT12(uStack_8de,uStack_8e0)));
            uStack_248 = pppppppuStack_8f8;
            uStack_240 = pppppppuStack_8f0;
            uStack_258 = pppppppuStack_908;
            uStack_250 = (code *)pppppppuStack_900;
            pdb_1411efd20(&uStack_168,&uStack_7c8,&UNK_142fa766e,7,&uStack_258);
            if (uStack_168 == (ulonglong *******)0x4) {
              lVar26 = pdb_1411ef1d0(&uStack_7c8,pppppppuStack_70,pppppppuVar37);
              if (lVar26 == 0) {
                if (pppppppuStack_78 != (ulonglong *******)0x0) {
                  pub_1406abac0((byte *)pppppppuStack_70,(ulonglong)pppppppuStack_78,1);
                }
                goto LAB_14073b34c;
              }
              pppppppuVar37 = (ulonglong *******)pdb_142dd2730(lVar26);
            }
            else {
              uStack_250 = uStack_160;
              uStack_248 = pppppppuStack_158;
              uStack_258 = uStack_168;
              pppppppuVar37 = (ulonglong *******)pdb_142dd2690(&uStack_258);
            }
            goto LAB_14073b932;
          }
          pppppppuStack_e0 = uStack_2a0;
          uStack_168 = (ulonglong *******)&pppppppuStack_e0;
          uStack_160 = pdb_140f56800;
          pdb_140f60760(&uStack_258,&UNK_142fa7675,&uStack_168);
          pppppppuVar37 = uStack_248;
          pppppppuStack_70 = (ulonglong *******)uStack_250;
          if ((ulonglong *******)(CONCAT44(uStack_a4,uStack_a8) - (longlong)pppppppuStack_98) <
              uStack_248) {
            pppppppuStack_78 = uStack_258;
            pdb_142d7f1b0(&uStack_a8,pppppppuStack_98,uStack_248,1,1);
            pppppppuVar19 = pppppppuStack_78;
LAB_14073b301:
            pub_142e32760((byte *)(CONCAT44(uStack_9c,uStack_a0) + (longlong)pppppppuStack_98),
                          pppppppuStack_70,pppppppuVar37);
          }
          else {
            pppppppuVar19 = uStack_258;
            if (uStack_248 != (ulonglong *******)0x0) goto LAB_14073b301;
          }
          pppppppuStack_98 =
               (ulonglong *******)((longlong)pppppppuStack_98 + (longlong)pppppppuVar37);
          if (pppppppuVar19 != (ulonglong *******)0x0) {
            pub_1406abac0((byte *)pppppppuStack_70,(ulonglong)pppppppuVar19,1);
          }
          pdb_1404b38e0(&pppppppuStack_e0);
LAB_14073b34c:
          if (SBORROW8(0,CONCAT44(uStack_c4c,uStack_c50))) {
            if ((ulonglong)(CONCAT44(uStack_a4,uStack_a8) - (longlong)pppppppuStack_98) < 0x18) {
              pdb_142d7f1b0(&uStack_a8,pppppppuStack_98,0x18,1,1);
            }
            pbVar1 = (byte *)(CONCAT44(uStack_9c,uStack_a0) + (longlong)pppppppuStack_98);
            *(undefined8 *)pbVar1 = _DAT_142fa76da;
            *(undefined8 *)(pbVar1 + 8) = _UNK_142fa76e2;
            pbVar1 = (byte *)(CONCAT44(uStack_9c,uStack_a0) + 0x10 + (longlong)pppppppuStack_98);
            pbVar1[0] = 0x61;
            pbVar1[1] = 0x70;
            pbVar1[2] = 0x74;
            pbVar1[3] = 0x75;
            pbVar1[4] = 0x72;
            pbVar1[5] = 0x65;
            pbVar1[6] = 100;
            pbVar1[7] = 10;
            pppppppuVar36 = pppppppuStack_98 + 3;
            pppppppuStack_98 = pppppppuVar36;
LAB_14073b816:
            pdb_1411efd20(&uStack_168,&uStack_7c8,&UNK_142fa76f2,8,&pppppppuStack_908);
            if (uStack_168 != (ulonglong *******)0x4) {
              uStack_250 = uStack_160;
              uStack_248 = pppppppuStack_158;
              uStack_258 = uStack_168;
              pppppppuVar37 = (ulonglong *******)pdb_142dd2690(&uStack_258);
              goto LAB_14073b953;
            }
            pbVar1 = (byte *)CONCAT44(uStack_9c,uStack_a0);
            lVar26 = pdb_1411ef1d0(&uStack_7c8,pbVar1,pppppppuVar36);
            if (lVar26 != 0) {
              pppppppuVar37 = (ulonglong *******)pdb_142dd2730(lVar26);
              goto LAB_14073b953;
            }
            pdb_1411f0b80(&uStack_258,&uStack_7c8);
            if (uStack_258 != (ulonglong *******)0x4) {
              pppppppuVar37 = (ulonglong *******)pdb_142dd2690(&uStack_258);
              goto LAB_14073b953;
            }
            if (CONCAT44(uStack_a4,uStack_a8) != 0) {
              pub_1406abac0(pbVar1,CONCAT44(uStack_a4,uStack_a8),1);
            }
            pdb_1411dab80(&uStack_7c8);
            pppppppuVar19 = pppppppuStack_2b0;
            pppppppuVar29 = pppppppuStack_2c0;
            pppppppuVar37 = pppppppuStack_2b8;
            if (SBORROW8(0,(longlong)pppppppuStack_2c0)) goto LAB_14073b99d;
          }
          else {
            pdb_140f55fb0(&uStack_2a8,pppppppuStack_c48,uStack_c40);
            pppppppuVar37 = uStack_298;
            if (SBORROW8(0,(longlong)uStack_2a8)) {
              pppppppuStack_e0 = uStack_2a0;
              uStack_160 = pdb_140f56800;
              uStack_168 = (ulonglong *******)&pppppppuStack_e0;
              pdb_140f60760(&uStack_258,&UNK_142fa7694,&uStack_168);
              pppppppuVar37 = uStack_248;
              pppppppuStack_78 = uStack_258;
              pppppppuStack_70 = (ulonglong *******)uStack_250;
              if ((ulonglong *******)(CONCAT44(uStack_a4,uStack_a8) - (longlong)pppppppuStack_98) <
                  uStack_248) {
                pdb_142d7f1b0(&uStack_a8,pppppppuStack_98,uStack_248,1,1);
LAB_14073b50f:
                pppppppuVar19 = pppppppuStack_98;
                pub_142e32760((byte *)(CONCAT44(uStack_9c,uStack_a0) + (longlong)pppppppuStack_98),
                              pppppppuStack_70,pppppppuVar37);
              }
              else {
                pppppppuVar19 = pppppppuStack_98;
                if (uStack_248 != (ulonglong *******)0x0) goto LAB_14073b50f;
              }
              pppppppuStack_98 =
                   (ulonglong *******)((longlong)pppppppuVar19 + (longlong)pppppppuVar37);
              if (pppppppuStack_78 != (ulonglong *******)0x0) {
                pub_1406abac0((byte *)pppppppuStack_70,(ulonglong)pppppppuStack_78,1);
              }
              pdb_1404b38e0(&pppppppuStack_e0);
LAB_14073b55e:
              pdb_140f55d10(&uStack_2a8,pbStack_c28,uStack_c20);
              if (!SBORROW8(0,(longlong)uStack_2a8)) {
                pppppppuStack_158 = uStack_298;
                uStack_168 = uStack_2a8;
                uStack_160 = (code *)uStack_2a0;
                pcStack_d8 = pdb_140001020;
                pppppppuStack_e0 = (ulonglong *******)&uStack_168;
                pdb_140f60760(&uStack_258,&UNK_142fa76a9,&pppppppuStack_e0);
                pppppppuVar37 = uStack_248;
                if ((ulonglong *******)(CONCAT44(uStack_a4,uStack_a8) - (longlong)pppppppuStack_98)
                    < uStack_248) {
                  pppppppuStack_78 = (ulonglong *******)uStack_250;
                  pppppppuStack_70 = uStack_258;
                  pdb_142d7f1b0(&uStack_a8,pppppppuStack_98,uStack_248,1,1);
                  pppppppuVar19 = pppppppuStack_70;
                  pppppppuVar29 = pppppppuStack_78;
LAB_14073b7c2:
                  pppppppuVar36 = pppppppuStack_98;
                  pub_142e32760((byte *)(CONCAT44(uStack_9c,uStack_a0) + (longlong)pppppppuStack_98)
                                ,pppppppuVar29,pppppppuVar37);
                }
                else {
                  pppppppuVar19 = uStack_258;
                  pppppppuVar29 = (ulonglong *******)uStack_250;
                  pppppppuVar36 = pppppppuStack_98;
                  if (uStack_248 != (ulonglong *******)0x0) goto LAB_14073b7c2;
                }
                pppppppuVar36 =
                     (ulonglong *******)((longlong)pppppppuVar36 + (longlong)pppppppuVar37);
                pppppppuStack_98 = pppppppuVar36;
                if (pppppppuVar19 != (ulonglong *******)0x0) {
                  pub_1406abac0((byte *)pppppppuVar29,(ulonglong)pppppppuVar19,1);
                }
                if (uStack_168 != (ulonglong *******)0x0) {
                  pub_1406abac0((byte *)uStack_160,(ulonglong)uStack_168,1);
                }
                goto LAB_14073b816;
              }
              pppppppuStack_e0 = uStack_2a0;
              uStack_160 = pdb_140f56800;
              uStack_168 = (ulonglong *******)&pppppppuStack_e0;
              pdb_140f60760(&uStack_258,&UNK_142fa76c0,&uStack_168);
              pppppppuVar37 = uStack_248;
              if ((ulonglong *******)(CONCAT44(uStack_a4,uStack_a8) - (longlong)pppppppuStack_98) <
                  uStack_248) {
                pppppppuStack_78 = (ulonglong *******)uStack_250;
                pppppppuStack_70 = uStack_258;
                pdb_142d7f1b0(&uStack_a8,pppppppuStack_98,uStack_248,1,1);
                pppppppuVar19 = pppppppuStack_70;
                pppppppuVar29 = pppppppuStack_78;
LAB_14073b5fa:
                pppppppuVar36 = pppppppuStack_98;
                pub_142e32760((byte *)(CONCAT44(uStack_9c,uStack_a0) + (longlong)pppppppuStack_98),
                              pppppppuVar29,pppppppuVar37);
              }
              else {
                pppppppuVar19 = uStack_258;
                pppppppuVar29 = (ulonglong *******)uStack_250;
                pppppppuVar36 = pppppppuStack_98;
                if (uStack_248 != (ulonglong *******)0x0) goto LAB_14073b5fa;
              }
              pppppppuVar36 = (ulonglong *******)((longlong)pppppppuVar36 + (longlong)pppppppuVar37)
              ;
              pppppppuStack_98 = pppppppuVar36;
              if (pppppppuVar19 != (ulonglong *******)0x0) {
                pub_1406abac0((byte *)pppppppuVar29,(ulonglong)pppppppuVar19,1);
              }
              pdb_1404b38e0(&pppppppuStack_e0);
              goto LAB_14073b816;
            }
            pppppppuStack_78 = uStack_2a8;
            pppppppuStack_70 = uStack_2a0;
            uStack_238 = (ulonglong *******)
                         CONCAT44(CONCAT22(uStack_8e2,uStack_8e4),CONCAT22(uStack_8e6,uStack_8e8));
            uStack_230 = (ulonglong *******)
                         CONCAT44(uStack_8dc,CONCAT13(uStack_8dd,CONCAT12(uStack_8de,uStack_8e0)));
            uStack_248 = pppppppuStack_8f8;
            uStack_240 = pppppppuStack_8f0;
            uStack_258 = pppppppuStack_908;
            uStack_250 = (code *)pppppppuStack_900;
            pdb_1411efd20(&uStack_168,&uStack_7c8,&UNK_142fa7684,0x10,&uStack_258);
            if (uStack_168 == (ulonglong *******)0x4) {
              lVar26 = pdb_1411ef1d0(&uStack_7c8,pppppppuStack_70,pppppppuVar37);
              if (lVar26 == 0) {
                if (pppppppuStack_78 != (ulonglong *******)0x0) {
                  pub_1406abac0((byte *)pppppppuStack_70,(ulonglong)pppppppuStack_78,1);
                }
                goto LAB_14073b55e;
              }
              pppppppuVar37 = (ulonglong *******)pdb_142dd2730(lVar26);
            }
            else {
              uStack_250 = uStack_160;
              uStack_248 = pppppppuStack_158;
              uStack_258 = uStack_168;
              pppppppuVar37 = (ulonglong *******)pdb_142dd2690(&uStack_258);
            }
LAB_14073b932:
            if (pppppppuStack_78 != (ulonglong *******)0x0) {
              pub_1406abac0((byte *)pppppppuStack_70,(ulonglong)pppppppuStack_78,1);
            }
LAB_14073b953:
            if (CONCAT44(uStack_a4,uStack_a8) != 0) {
              pub_1406abac0((byte *)CONCAT44(uStack_9c,uStack_a0),CONCAT44(uStack_a4,uStack_a8),1);
            }
            pdb_1411dab80(&uStack_7c8);
            if (pppppppuStack_2c0 != (ulonglong *******)0x0) {
              pub_1406abac0((byte *)pppppppuStack_2b8,(ulonglong)pppppppuStack_2c0,1);
            }
LAB_14073b99d:
            pppppppuStack_908 = pppppppuVar37;
            if (*_DAT_143ca8e90 != 0) {
              uStack_250 = pdb_140f36c20;
              uStack_7c8 = (ulonglong *******)0x0;
              uStack_7c0 = (code *)&UNK_142fa75e5;
              pppppppuStack_7b8 = (ulonglong *******)0x11;
              uStack_7b0 = (ulonglong *******)0x0;
              uStack_7a8 = (ulonglong *******)&UNK_142fa7536;
              uStack_7a0 = (ulonglong *******)0x23;
              pppppppuStack_798 = (ulonglong *******)0x1;
              pppppppuStack_790 = (ulonglong *******)&UNK_142fa75e5;
              pppppppuStack_788 = (ulonglong *******)0x11;
              pppppppuStack_780 = (ulonglong *******)0xa700000001;
              pppppppuStack_778 = (ulonglong *******)&UNK_142fa764b;
              pppppppuStack_770 = (ulonglong *******)&uStack_258;
              uStack_258 = (ulonglong *******)&pppppppuStack_908;
              pdb_140f332f0(&uStack_58,&uStack_7c8);
            }
            pppppppuVar37 = pppppppuStack_908;
            uStack_7c8 = (ulonglong *******)0x8000000000000000;
            uStack_7c0 = (code *)pppppppuStack_908;
            pdb_140f36c40(&uStack_7c0);
            pppppppuVar19 = (ulonglong *******)&pppppppuStack_908;
            pppppppuVar29 = (ulonglong *******)0x8000000000000000;
          }
          if (uStack_c88 != (ulonglong *******)0x0) {
            pub_1406abac0((byte *)uStack_c80,(ulonglong)uStack_c88,1);
          }
          if (uStack_c68 != (ulonglong *******)0x0) {
            pub_1406abac0((byte *)uStack_c60,(ulonglong)uStack_c68,1);
          }
          uVar32 = CONCAT44(uStack_c4c,uStack_c50);
          if (!SBORROW8(0,uVar32)) {
            if (uVar32 != 0) {
              pub_1406abac0((byte *)pppppppuStack_c48,uVar32,1);
            }
            if (uStack_c30 != 0) {
              pub_1406abac0(pbStack_c28,uStack_c30,1);
            }
          }
          if (SBORROW8(0,(longlong)pppppppuVar29)) {
            uVar17 = 0;
            uVar12 = uStack_c50;
            uVar13 = uStack_c4c;
            pppppppuVar37 = pppppppuStack_c48;
            uVar33 = uStack_c40;
            uVar8 = uStack_c38;
            uVar32 = uStack_c30;
            pbVar1 = pbStack_c28;
            uVar14 = uStack_c20;
            uVar15 = uStack_c18;
            goto LAB_14073bb22;
          }
          uStack_4b = 0;
          uStack_4c = 1;
          uStack_4d = 1;
          pppppppuStack_908 = pppppppuVar29;
          pppppppuStack_900 = pppppppuVar37;
          pppppppuStack_8f8 = pppppppuVar19;
          pdb_141124f00(&uStack_250,&pppppppuStack_908);
          uStack_258 = (ulonglong *******)0x1;
          uStack_4b = 0;
          uStack_4c = 1;
          uStack_4d = 1;
          pdb_1411eae50(&uStack_7c8,&uStack_258);
          uStack_4b = 0;
          uStack_4c = 1;
          uStack_4d = 1;
          pdb_1411eafc0(&uStack_c88,&uStack_7c8,&UNK_142fa7593,0xf);
          pppppppuVar19 = (ulonglong *******)uStack_c80;
          pppppppuVar37 = uStack_c88;
          if (uStack_c88 == (ulonglong *******)0x2) {
            uStack_4b = 0;
            uStack_4c = 1;
            uStack_4d = 1;
            ppppppuVar23 = (ulonglong ******)pdb_142dd25f0(uStack_c80);
            if (uStack_518 != (ulonglong *******)0x0) {
              pub_1406abac0((byte *)uStack_510,(ulonglong)uStack_518,1);
            }
            pppppppuVar37 = uStack_4f8;
            if (uStack_4f0 != (ulonglong *******)0x0) {
              pppppppuVar19 = uStack_4f8 + 1;
              pppppppuVar29 = uStack_4f0;
              do {
                if (pppppppuVar19[-1] != (ulonglong ******)0x0) {
                  pub_1406abac0((byte *)*pppppppuVar19,(ulonglong)pppppppuVar19[-1],1);
                }
                pppppppuVar19 = pppppppuVar19 + 3;
                pppppppuVar29 = (ulonglong *******)((longlong)pppppppuVar29 + -1);
              } while (pppppppuVar29 != (ulonglong *******)0x0);
            }
            if (uStack_500 != (ulonglong *******)0x0) {
              pub_1406abac0((byte *)pppppppuVar37,(longlong)uStack_500 * 0x18,8);
            }
            bVar28 = (byte)pppppppuStack_88;
            uStack_65 = 0;
            uStack_66 = 1;
            uStack_67 = 0;
            bStack_64 = (byte)pppppppuStack_88;
            pdb_1411da9c0(&uStack_4e8);
            bVar34 = 0;
            goto LAB_14073ae6c;
          }
          pub_142e32760(&uStack_7a0,&uStack_c78,0xe8);
          pppppppuVar29 = pppppppuStack_4d8;
          pppppppuStack_c48 = pppppppuStack_4d8;
          uStack_c40 = uStack_4d0;
          uStack_c58 = uStack_4e8;
          uStack_c50 = (undefined4)uStack_4e0;
          uStack_c4c = uStack_4e0._4_4_;
          uStack_c68 = uStack_4f8;
          uStack_c60 = uStack_4f0;
          uStack_c78._0_4_ = SUB84(uStack_508,0);
          uStack_c78._4_4_ = uStack_508._4_4_;
          uStack_c70 = uStack_500;
          uStack_c88._0_4_ = SUB84(uStack_518,0);
          uStack_c88._4_4_ = uStack_518._4_4_;
          uStack_c80._0_4_ = SUB84(uStack_510,0);
          uStack_c80._4_4_ = uStack_510._4_4_;
          uStack_7b0 = pppppppuVar37;
          uStack_7a8 = pppppppuVar19;
          uStack_7c8 = (ulonglong *******)0x8000000000000000;
          uStack_7c0 = (code *)&UNK_142fa75a6;
          pppppppuStack_7b8 = (ulonglong *******)0x9;
          if (pppppppuStack_4d8 == uStack_4e8) {
            pdb_142dd20a0(&uStack_c58);
          }
          pub_142e32760((longlong)pppppppuVar29 * 0x110 + CONCAT44(uStack_c4c,uStack_c50),
                        &uStack_7c8,0x110);
          pppppppuStack_c48 = (ulonglong *******)((longlong)pppppppuVar29 + 1);
          uStack_290 = (undefined4)uStack_c70;
          uStack_28c = uStack_c70._4_4_;
          uStack_288 = (undefined4)uStack_c68;
          uStack_284 = uStack_c68._4_4_;
          uStack_280 = (undefined4)uStack_c60;
          uStack_27c = uStack_c60._4_4_;
          uStack_278 = (undefined4)uStack_c58;
          uStack_274 = uStack_c58._4_4_;
          uStack_270 = uStack_c50;
          uStack_26c = uStack_c4c;
          uStack_2a8 = (ulonglong *******)CONCAT44(uStack_c88._4_4_,(undefined4)uStack_c88);
          uStack_2a0 = (ulonglong *******)CONCAT44(uStack_c80._4_4_,(undefined4)uStack_c80);
          uStack_298 = (ulonglong *******)CONCAT44(uStack_c78._4_4_,(undefined4)uStack_c78);
          uStack_260 = uStack_c40;
          pppppppuStack_70 = (ulonglong *******)((ulonglong)pppppppuStack_70 & 0xffffffff00000000);
          pppppppuStack_268 = pppppppuStack_c48;
        }
        uStack_c88 = (ulonglong *******)0x51;
        uStack_c80 = (code *)pppppppuStack_80;
        uStack_c78 = (ulonglong *******)0x51;
        uStack_49 = 1;
        pdb_1411f0ff0(&uStack_7c8,&uStack_468,&uStack_c88);
        pppppppuStack_128 = pppppppuStack_268;
        uStack_120 = uStack_260;
        uStack_138 = uStack_278;
        uStack_134 = uStack_274;
        uStack_130 = uStack_270;
        uStack_12c = uStack_26c;
        uStack_148 = uStack_288;
        uStack_144 = uStack_284;
        uStack_140 = uStack_280;
        uStack_13c = uStack_27c;
        pppppppuStack_158 = uStack_298;
        uStack_150 = uStack_290;
        uStack_14c = uStack_28c;
        uStack_168 = uStack_2a8;
        uStack_160 = (code *)uStack_2a0;
        uStack_49 = 0;
        pdb_140f8d6b0(&uStack_c88,&uStack_7c8,&uStack_168);
        uStack_49 = 0;
        pdb_140f8d5c0(&uStack_258,&uStack_c88);
        pppppppuVar19 = (ulonglong *******)uStack_250;
        pppppppuVar37 = uStack_258;
        if (uStack_258 != (ulonglong *******)0x3) {
          pub_142e32760(&pppppppuStack_8f8,&uStack_248,0xb8);
          pppppppuStack_908 = pppppppuVar37;
          pppppppuStack_900 = pppppppuVar19;
          if ((ushort)((short)uStack_8a0 - 200U) < 100) {
            uStack_49 = 0;
            pdb_1411db870(&pppppppuStack_908);
            ppppppuVar23 = (ulonglong ******)0x0;
          }
          else {
            pub_142e32760(&uStack_7c8,&pppppppuStack_908,200);
            uStack_49 = 0;
            pdb_140fa7be0(&uStack_c88,&uStack_7c8);
            if (SBORROW8(0,(longlong)uStack_c88)) {
              pppppppuStack_e0 = (ulonglong *******)uStack_c80;
              if (*_DAT_143ca8e90 != 0) {
                pppppppuStack_2c0 = (ulonglong *******)&pppppppuStack_e0;
                pppppppuStack_2b8 = (ulonglong *******)pdb_140794b00;
                uStack_7c8 = (ulonglong *******)0x0;
                uStack_7c0 = (code *)&UNK_142fa75e5;
                pppppppuStack_7b8 = (ulonglong *******)0x11;
                uStack_7b0 = (ulonglong *******)0x0;
                uStack_7a8 = (ulonglong *******)&UNK_142fa7536;
                uStack_7a0 = (ulonglong *******)0x23;
                pppppppuStack_798 = (ulonglong *******)0x1;
                pppppppuStack_790 = (ulonglong *******)&UNK_142fa75e5;
                pppppppuStack_788 = (ulonglong *******)0x11;
                pppppppuStack_780 = (ulonglong *******)0xc000000001;
                pppppppuStack_778 = (ulonglong *******)&UNK_142fa75b1;
                pppppppuStack_770 = (ulonglong *******)&pppppppuStack_2c0;
                pdb_140f332f0(&uStack_58,&uStack_7c8);
              }
              ppppppuVar23 = (ulonglong ******)pdb_142dd2110(&UNK_142fa75f6,0x22);
              uStack_49 = 0;
              pdb_1404b37d0(&pppppppuStack_e0);
              goto LAB_14073bd4f;
            }
            uStack_258 = uStack_c88;
            uStack_250 = uStack_c80;
            uStack_248 = uStack_c78;
            uStack_7c0 = pdb_140001020;
            uStack_7c8 = (ulonglong *******)&uStack_258;
            pdb_140f60760(&uStack_168,&UNK_142fa75af,&uStack_7c8);
            if (uStack_258 != (ulonglong *******)0x0) {
              pub_1406abac0((byte *)uStack_250,(ulonglong)uStack_258,1);
            }
            uStack_a8 = (undefined4)uStack_168;
            uStack_a4 = uStack_168._4_4_;
            uStack_a0 = (undefined4)uStack_160;
            uStack_9c = uStack_160._4_4_;
            pppppppuStack_98 = pppppppuStack_158;
            uStack_49 = 0;
            ppppppuVar23 = (ulonglong ******)pdb_142dd2150(&uStack_a8);
          }
          plVar11 = (longlong *)CONCAT44(uStack_464,uStack_468);
          LOCK();
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            uStack_54 = pppppppuStack_c8._0_1_;
            bStack_55 = (byte)pppppppuStack_88;
            bStack_56 = (byte)pppppppuStack_70;
            pdb_1407a2800(&uStack_468);
          }
          goto LAB_14073c40e;
        }
        uStack_168 = (ulonglong *******)uStack_250;
        if (*_DAT_143ca8e90 != 0) {
          uStack_c80 = pdb_140794b00;
          uStack_7c8 = (ulonglong *******)0x0;
          uStack_7c0 = (code *)&UNK_142fa75e5;
          pppppppuStack_7b8 = (ulonglong *******)0x11;
          uStack_7b0 = (ulonglong *******)0x0;
          uStack_7a8 = (ulonglong *******)&UNK_142fa7536;
          uStack_7a0 = (ulonglong *******)0x23;
          pppppppuStack_798 = (ulonglong *******)0x1;
          pppppppuStack_790 = (ulonglong *******)&UNK_142fa75e5;
          pppppppuStack_788 = (ulonglong *******)0x11;
          pppppppuStack_780 = (ulonglong *******)0xb800000001;
          pppppppuStack_778 = (ulonglong *******)&UNK_142fa7618;
          uStack_c88 = (ulonglong *******)&uStack_168;
          pppppppuStack_770 = (ulonglong *******)&uStack_c88;
          pdb_140f332f0(&uStack_58,&uStack_7c8);
        }
        ppppppuVar23 = (ulonglong ******)pdb_142dd2110(&UNK_142fa763a,0x11);
        uStack_49 = 0;
        pdb_1404b37d0(&uStack_168);
LAB_14073bd4f:
        bVar28 = (byte)pppppppuStack_88;
        bVar34 = (byte)pppppppuStack_70;
      }
      else {
        if ((longlong)pppppppuVar37 < 0) {
          uVar33 = 0;
LAB_14073a7f1:
          uStack_57 = 1;
          pdb_142dc7e2a(uVar33,pppppppuVar37);
LAB_14073c971:
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        if (pppppppuVar37 == (ulonglong *******)0x0) {
          pppppppuVar19 = (ulonglong *******)0x1;
        }
        else {
          pdb_14007ee60();
          uVar33 = 1;
          pppppppuVar19 = (ulonglong *******)pub_1406abab0((ulonglong)pppppppuVar37,1);
          if (pppppppuVar19 == (ulonglong *******)0x0) goto LAB_14073a7f1;
          pub_142e32760(pppppppuVar19,pbStack_170,pppppppuVar37);
        }
        pppppppuStack_908 = pppppppuVar37;
        pppppppuStack_8f8 = pppppppuVar37;
        uStack_57 = 1;
        pppppppuStack_900 = pppppppuVar19;
        pdb_141124f00(&uStack_250,&pppppppuStack_908);
        uStack_258 = (ulonglong *******)0x1;
        uStack_57 = 1;
        pdb_1411eae50(&uStack_7c8,&uStack_258);
        uStack_57 = 1;
        pdb_1411eafc0(&uStack_c88,&uStack_7c8,&UNK_142fa7580,9);
        pppppppuVar19 = (ulonglong *******)uStack_c80;
        pppppppuVar37 = uStack_c88;
        if (uStack_c88 != (ulonglong *******)0x2) {
          pub_142e32760(&uStack_7a0,&uStack_c78,0xe8);
          pppppppuVar29 = pppppppuStack_7d8;
          pppppppuStack_c48 = pppppppuStack_7d8;
          uStack_c40 = uStack_7d0;
          uStack_c58 = (ulonglong *******)CONCAT44(uStack_7e4,uStack_7e8);
          uStack_c50 = uStack_7e0;
          uStack_c4c = uStack_7dc;
          uStack_c68 = (ulonglong *******)CONCAT44(uStack_7f4,uStack_7f8);
          uStack_c60 = (ulonglong *******)CONCAT44(uStack_7ec,uStack_7f0);
          uStack_c78 = (ulonglong *******)CONCAT44(uStack_804,uStack_808);
          uStack_c70 = (ulonglong *******)CONCAT44(uStack_7fc,uStack_800);
          uStack_c88 = (ulonglong *******)CONCAT44(uStack_814,uStack_818);
          uStack_c80 = (code *)CONCAT44(uStack_80c,uStack_810);
          uStack_7b0 = pppppppuVar37;
          uStack_7a8 = pppppppuVar19;
          uStack_7c8 = (ulonglong *******)0x8000000000000000;
          uStack_7c0 = (code *)&UNK_142fa7589;
          pppppppuStack_7b8 = (ulonglong *******)0xa;
          if (pppppppuStack_7d8 == uStack_c58) {
            pdb_142dd20a0(&uStack_c58);
          }
          pub_142e32760((longlong)pppppppuVar29 * 0x110 + CONCAT44(uStack_c4c,uStack_c50),
                        &uStack_7c8,0x110);
          pppppppuStack_c48 = (ulonglong *******)((longlong)pppppppuVar29 + 1);
          uStack_490 = CONCAT44(uStack_c4c,uStack_c50);
          pppppppuStack_4c8 = uStack_c88;
          pppppppuStack_4c0 = (ulonglong *******)uStack_c80;
          pppppppuStack_4b8 = uStack_c78;
          pppppppuStack_4b0 = uStack_c70;
          pppppppuStack_4a8 = uStack_c68;
          pppppppuStack_4a0 = uStack_c60;
          pppppppuStack_498 = uStack_c58;
          uStack_480 = uStack_c40;
          pppppppuStack_488 = pppppppuStack_c48;
          if (pppppppuStack_b8 != (ulonglong *******)0x0) {
            pub_1406abac0(pbStack_170,(ulonglong)pppppppuStack_b8,1);
          }
          goto LAB_14073a772;
        }
        uStack_57 = 1;
        ppppppuVar23 = (ulonglong ******)pdb_142dd25f0(uStack_c80);
        if (pppppppuStack_b8 != (ulonglong *******)0x0) {
          pub_1406abac0(pbStack_170,(ulonglong)pppppppuStack_b8,1);
        }
        if (CONCAT44(uStack_814,uStack_818) != 0) {
          pub_1406abac0((byte *)CONCAT44(uStack_80c,uStack_810),CONCAT44(uStack_814,uStack_818),1);
        }
        pbVar1 = (byte *)CONCAT44(uStack_7f4,uStack_7f8);
        lVar26 = CONCAT44(uStack_7ec,uStack_7f0);
        if (lVar26 != 0) {
          pbVar38 = pbVar1 + 8;
          do {
            if (*(ulonglong *)(pbVar38 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar38,*(ulonglong *)(pbVar38 + -8),1);
            }
            pbVar38 = pbVar38 + 0x18;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
        }
        if (CONCAT44(uStack_7fc,uStack_800) != 0) {
          pub_1406abac0(pbVar1,CONCAT44(uStack_7fc,uStack_800) * 0x18,8);
        }
        uStack_4e = 0;
        uStack_4f = 1;
        uStack_50 = 1;
        uStack_51 = 1;
        pdb_1411da9c0(&uStack_7e8);
        bVar28 = 1;
        bVar34 = 1;
LAB_14073ae6c:
        pub_1406abac0((byte *)pppppppuStack_80,0x51,1);
      }
      plVar11 = (longlong *)CONCAT44(uStack_464,uStack_468);
      LOCK();
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        uStack_54 = pppppppuStack_c8._0_1_;
        bStack_56 = bVar34;
        bStack_55 = bVar28;
        pdb_1407a2800(&uStack_468);
      }
      uVar32 = CONCAT44(uStack_9c4,uStack_9c8);
      if ((!SBORROW8(0,uVar32) & bVar34) != 0) {
        if (uVar32 != 0) {
          pub_1406abac0((byte *)CONCAT44(uStack_9bc,uStack_9c0),uVar32,1);
        }
        if (CONCAT44(uStack_9a4,uStack_9a8) != 0) {
          pub_1406abac0((byte *)CONCAT44(uStack_99c,uStack_9a0),CONCAT44(uStack_9a4,uStack_9a8),1);
        }
        uVar32 = CONCAT44(uStack_98c,uStack_990);
        if (!SBORROW8(0,uVar32)) {
          if (uVar32 != 0) {
            pub_1406abac0((byte *)pppppppuStack_988,uVar32,1);
          }
          if (uStack_970 != 0) {
            pub_1406abac0(pbStack_968,uStack_970,1);
          }
        }
      }
      if ((!SBORROW8(0,(longlong)pppppppuStack_948) & bVar28) != 0) {
        if (pppppppuStack_948 != (ulonglong *******)0x0) {
          pub_1406abac0((byte *)pppppppuStack_940,(ulonglong)pppppppuStack_948,1);
        }
        pppppppuVar37 = pppppppuStack_920;
        if (pppppppuStack_918 != (ulonglong *******)0x0) {
          pppppppuVar19 = pppppppuStack_920 + 1;
          pppppppuVar29 = pppppppuStack_918;
          do {
            if (pppppppuVar19[-1] != (ulonglong ******)0x0) {
              pub_1406abac0((byte *)*pppppppuVar19,(ulonglong)pppppppuVar19[-1],1);
            }
            pppppppuVar19 = pppppppuVar19 + 3;
            pppppppuVar29 = (ulonglong *******)((longlong)pppppppuVar29 + -1);
          } while (pppppppuVar29 != (ulonglong *******)0x0);
        }
        if (pppppppuStack_928 != (ulonglong *******)0x0) {
          pub_1406abac0((byte *)pppppppuVar37,(longlong)pppppppuStack_928 * 0x18,8);
        }
      }
LAB_14073c40e:
      if (uStack_538 != 0) {
        pub_1406abac0(pbStack_530,uStack_538,1);
      }
      if (pppppppuStack_838 != (ulonglong *******)0x0) {
        pub_1406abac0(pbStack_830,(ulonglong)pppppppuStack_838,1);
      }
      if (ppppppuVar23 == (ulonglong ******)0x0) {
        if (2 < *_DAT_143ca8e90) {
          uStack_7c8 = (ulonglong *******)0x0;
          uStack_7c0 = (code *)&UNK_142fa75e5;
          pppppppuStack_7b8 = (ulonglong *******)0x11;
          uStack_7b0 = (ulonglong *******)0x0;
          uStack_7a8 = (ulonglong *******)&UNK_142fa7536;
          uStack_7a0 = (ulonglong *******)0x23;
          pppppppuStack_798 = (ulonglong *******)0x3;
          pppppppuStack_790 = (ulonglong *******)&UNK_142fa75e5;
          pppppppuStack_788 = (ulonglong *******)0x11;
          pppppppuStack_780 = (ulonglong *******)0x6e00000001;
          pppppppuStack_778 = (ulonglong *******)&UNK_142fa7718;
          pppppppuStack_770 = (ulonglong *******)0x35;
          uStack_4a = 0;
          pdb_140f332f0(&uStack_58,&uStack_7c8);
        }
        *(undefined4 *)plStack_470[2] = *(undefined4 *)((longlong)plStack_470 + 0x1c);
        lVar26 = *plStack_470;
        lVar7 = *(longlong *)(lVar26 + 0x30);
        uVar33 = *(undefined8 *)(lVar26 + 0x40);
        if (lVar7 == *(longlong *)(lVar26 + 0x20)) {
          uStack_4a = 0;
          pdb_142d7e6e0(lVar26 + 0x20);
        }
        lVar9 = *(longlong *)(lVar26 + 0x28);
        *(undefined8 *)(lVar9 + lVar7 * 0x20) = 0x8000000000000000;
        *(undefined8 *)(lVar9 + 0x18 + lVar7 * 0x20) = uVar33;
        *(longlong *)(lVar26 + 0x30) = lVar7 + 1;
        *(longlong *)(lVar26 + 0x40) = *(longlong *)(lVar26 + 0x40) + 1;
      }
      else {
        uStack_258 = (ulonglong *******)ppppppuVar23;
        if (*_DAT_143ca8e90 != 0) {
          uStack_c88 = (ulonglong *******)&uStack_258;
          uStack_c80 = pdb_140f36c30;
          uStack_7c8 = (ulonglong *******)0x0;
          uStack_7c0 = (code *)&UNK_142fa75e5;
          pppppppuStack_7b8 = (ulonglong *******)0x11;
          uStack_7b0 = (ulonglong *******)0x0;
          uStack_7a8 = (ulonglong *******)&UNK_142fa7536;
          uStack_7a0 = (ulonglong *******)0x23;
          pppppppuStack_798 = (ulonglong *******)0x1;
          pppppppuStack_790 = (ulonglong *******)&UNK_142fa75e5;
          pppppppuStack_788 = (ulonglong *******)0x11;
          pppppppuStack_780 = (ulonglong *******)0x7200000001;
          pppppppuStack_778 = (ulonglong *******)&UNK_142fa7732;
          pppppppuStack_770 = (ulonglong *******)&uStack_c88;
          pdb_140f332f0(&uStack_58,&uStack_7c8);
        }
        uStack_c88 = (ulonglong *******)0x0;
        uStack_c80 = (code *)0x1;
        uStack_c78 = (ulonglong *******)0x0;
        pppppppuStack_7b8 = (ulonglong *******)0x60000020;
        uStack_7c0 = (code *)&UNK_142fa7758;
        uStack_7c8 = (ulonglong *******)&uStack_c88;
        cVar16 = pdb_140f36c30(&uStack_258,&uStack_7c8);
        uVar33 = uStack_c78;
        if (cVar16 != '\0') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_142fa7788,0x37,&uStack_58,&UNK_142fa7848,&UNK_142fa7830);
        }
        pppppppuStack_80 = uStack_c88;
        pppppppuStack_b8 = (ulonglong *******)uStack_c80;
        *(undefined4 *)plStack_470[2] = *(undefined4 *)((longlong)plStack_470 + 0x1c);
        lVar26 = *plStack_470;
        lVar7 = *(longlong *)(lVar26 + 0x30);
        uVar8 = *(undefined8 *)(lVar26 + 0x40);
        if (lVar7 == *(longlong *)(lVar26 + 0x20)) {
          pdb_142d7e6e0(lVar26 + 0x20);
        }
        lVar9 = *(longlong *)(lVar26 + 0x28);
        lVar27 = lVar7 * 0x20;
        *(ulonglong ********)(lVar9 + lVar27) = pppppppuStack_80;
        *(ulonglong ********)(lVar9 + 8 + lVar27) = pppppppuStack_b8;
        *(undefined8 *)(lVar9 + 0x10 + lVar27) = uVar33;
        *(undefined8 *)(lVar9 + 0x18 + lVar27) = uVar8;
        *(longlong *)(lVar26 + 0x30) = lVar7 + 1;
        *(longlong *)(lVar26 + 0x40) = *(longlong *)(lVar26 + 0x40) + 1;
        uStack_4a = 0;
        pdb_140f36c40(&uStack_258);
      }
      return;
    }
    pppppppuStack_b8 = pppppppuVar36 + 0x20;
    pppppppuStack_88 = (ulonglong *******)0x0;
  } while( true );
}

