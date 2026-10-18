// VA 0x14045dca0, PDB extent 16713 bytes
// country_core::game_key_bindings::_::impl$0::deserialize::impl$2::visit_map<ref_mut$<serde::private::de::content::MapRefDeserializer<enum2$<ron::error::Error> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014047067c) overlaps instruction at (ram,0x00014047067a)
    */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::game_key_bindings::_::impl$0::deserialize::impl$2::visit_map<ref_mut$<serde::private::de::content::MapRefDeserializer<enum2$<ron::error::Error>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 16713 */

longlong * pdb_14045dca0(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  char cVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong **pplVar16;
  longlong *extraout_RAX;
  longlong *extraout_RAX_00;
  longlong *extraout_RAX_01;
  longlong *extraout_RAX_02;
  longlong *extraout_RAX_03;
  longlong *extraout_RAX_04;
  longlong *extraout_RAX_05;
  longlong *extraout_RAX_06;
  longlong *extraout_RAX_07;
  longlong *extraout_RAX_08;
  longlong *extraout_RAX_09;
  longlong *extraout_RAX_10;
  longlong *extraout_RAX_11;
  longlong *extraout_RAX_12;
  longlong *extraout_RAX_13;
  longlong *extraout_RAX_14;
  longlong *extraout_RAX_15;
  longlong *extraout_RAX_16;
  longlong *extraout_RAX_17;
  longlong *extraout_RAX_18;
  longlong *extraout_RAX_19;
  longlong *extraout_RAX_20;
  longlong *extraout_RAX_21;
  longlong *extraout_RAX_22;
  longlong *extraout_RAX_23;
  longlong *extraout_RAX_24;
  longlong *extraout_RAX_25;
  longlong *extraout_RAX_26;
  longlong *extraout_RAX_27;
  longlong *extraout_RAX_28;
  longlong *extraout_RAX_29;
  longlong *extraout_RAX_30;
  longlong *extraout_RAX_31;
  longlong *extraout_RAX_32;
  longlong *extraout_RAX_33;
  longlong *extraout_RAX_34;
  longlong *extraout_RAX_35;
  longlong *extraout_RAX_36;
  longlong *extraout_RAX_37;
  longlong *extraout_RAX_38;
  longlong *extraout_RAX_39;
  longlong *extraout_RAX_40;
  longlong *plVar17;
  undefined8 uVar18;
  ulonglong *puVar19;
  undefined *puVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte **ppbVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte **ppbVar30;
  byte **ppbVar31;
  byte *pbVar32;
  byte *pbVar33;
  undefined8 *puVar34;
  bool bVar35;
  undefined1 auStack_e90 [16];
  byte *pbStack_e80;
  undefined *puStack_e78;
  byte *pbStack_e70;
  byte abStack_e68 [16];
  byte *pbStack_e58;
  longlong lStack_e50;
  longlong *plStack_e48;
  longlong *plStack_e40;
  longlong lStack_e38;
  longlong lStack_e30;
  ulonglong uStack_e28;
  ulonglong uStack_e20;
  longlong lStack_e18;
  byte *pbStack_e10;
  longlong lStack_e08;
  byte *pbStack_e00;
  undefined8 uStack_df8;
  longlong lStack_df0;
  longlong lStack_de8;
  longlong lStack_de0;
  longlong lStack_dd8;
  longlong lStack_dd0;
  longlong lStack_dc8;
  longlong lStack_dc0;
  longlong lStack_db8;
  longlong lStack_db0;
  longlong lStack_da8;
  longlong lStack_da0;
  longlong lStack_d98;
  longlong lStack_d90;
  longlong lStack_d88;
  longlong lStack_d80;
  longlong lStack_d78;
  longlong lStack_d70;
  longlong lStack_d68;
  longlong lStack_d60;
  longlong lStack_d58;
  longlong lStack_d50;
  longlong lStack_d48;
  longlong *plStack_d40;
  undefined1 auStack_d38 [8];
  undefined3 uStack_d30;
  undefined4 uStack_d2d;
  undefined4 uStack_d29;
  undefined4 uStack_d25;
  undefined1 uStack_d21;
  undefined8 uStack_d20;
  byte *pbStack_d18;
  longlong lStack_d08;
  byte *pbStack_d00;
  longlong lStack_cf0;
  byte *pbStack_ce8;
  longlong lStack_cd8;
  byte *pbStack_cd0;
  longlong lStack_cc0;
  byte *pbStack_cb8;
  longlong lStack_ca8;
  byte *pbStack_ca0;
  longlong lStack_c90;
  byte *pbStack_c88;
  longlong lStack_c78;
  byte *pbStack_c70;
  longlong lStack_c60;
  byte *pbStack_c58;
  longlong lStack_c48;
  byte *pbStack_c40;
  longlong lStack_c30;
  byte *pbStack_c28;
  longlong lStack_c18;
  byte *pbStack_c10;
  longlong lStack_c00;
  byte *pbStack_bf8;
  longlong lStack_be8;
  byte *pbStack_be0;
  longlong lStack_bd0;
  byte *pbStack_bc8;
  longlong lStack_bb8;
  byte *pbStack_bb0;
  longlong lStack_ba0;
  byte *pbStack_b98;
  longlong lStack_b88;
  byte *pbStack_b80;
  longlong lStack_b70;
  byte *pbStack_b68;
  longlong lStack_b58;
  byte *pbStack_b50;
  longlong lStack_b40;
  byte *pbStack_b38;
  longlong lStack_b28;
  byte *pbStack_b20;
  longlong lStack_b10;
  byte *pbStack_b08;
  longlong lStack_af8;
  byte *pbStack_af0;
  longlong lStack_ae0;
  byte *pbStack_ad8;
  longlong lStack_ac8;
  byte *pbStack_ac0;
  longlong lStack_ab0;
  byte *pbStack_aa8;
  longlong lStack_a98;
  byte *pbStack_a90;
  longlong lStack_a80;
  byte *pbStack_a78;
  longlong lStack_a68;
  byte *pbStack_a60;
  longlong lStack_a50;
  byte *pbStack_a48;
  longlong lStack_a38;
  byte *pbStack_a30;
  longlong lStack_a20;
  byte *pbStack_a18;
  longlong lStack_a08;
  byte *pbStack_a00;
  longlong lStack_9f0;
  byte *pbStack_9e8;
  ulonglong uStack_9d8;
  byte *pbStack_9d0;
  longlong lStack_9c0;
  byte *pbStack_9b8;
  longlong lStack_9a8;
  byte *pbStack_9a0;
  longlong lStack_990;
  byte *pbStack_988;
  longlong *plStack_978;
  byte *pbStack_970;
  longlong *plStack_958;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  undefined8 uStack_948;
  longlong lStack_938;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined8 uStack_928;
  longlong lStack_918;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined8 uStack_908;
  longlong lStack_8f8;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined8 uStack_8e8;
  ulonglong uStack_8d8;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined8 uStack_8c8;
  longlong lStack_8b8;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined8 uStack_8a8;
  longlong lStack_898;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined8 uStack_888;
  longlong lStack_878;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined8 uStack_868;
  longlong lStack_858;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined8 uStack_848;
  longlong lStack_838;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined8 uStack_828;
  longlong lStack_818;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined8 uStack_808;
  longlong lStack_7f8;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined8 uStack_7e8;
  longlong lStack_7d8;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined8 uStack_7c8;
  longlong lStack_7b8;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined8 uStack_7a8;
  longlong lStack_798;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined8 uStack_788;
  longlong lStack_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined8 uStack_768;
  longlong lStack_758;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined8 uStack_748;
  longlong lStack_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined8 uStack_728;
  longlong lStack_718;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined8 uStack_708;
  longlong lStack_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined8 uStack_6e8;
  longlong lStack_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined8 uStack_6c8;
  longlong lStack_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined8 uStack_6a8;
  longlong lStack_698;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined8 uStack_688;
  longlong lStack_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined8 uStack_668;
  longlong lStack_658;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined8 uStack_648;
  longlong lStack_638;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined8 uStack_628;
  longlong lStack_618;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined8 uStack_608;
  longlong lStack_5f8;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined8 uStack_5e8;
  longlong lStack_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined8 uStack_5c8;
  longlong lStack_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined8 uStack_5a8;
  longlong lStack_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined8 uStack_588;
  longlong lStack_578;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined8 uStack_568;
  longlong lStack_558;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined8 uStack_548;
  longlong lStack_538;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined8 uStack_528;
  longlong lStack_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined8 uStack_508;
  longlong lStack_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined8 uStack_4e8;
  longlong lStack_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 uStack_4c8;
  longlong lStack_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined8 uStack_4a8;
  longlong lStack_498;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined8 uStack_488;
  longlong lStack_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 uStack_468;
  longlong *plStack_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined8 uStack_448;
  char cStack_438;
  byte bStack_437;
  undefined6 uStack_436;
  undefined1 uStack_430;
  undefined1 uStack_42f;
  undefined6 uStack_42e;
  undefined1 uStack_428;
  undefined1 uStack_427;
  undefined6 uStack_426;
  undefined2 uStack_420;
  undefined6 uStack_41e;
  undefined2 uStack_418;
  undefined6 uStack_416;
  undefined2 uStack_410;
  undefined6 uStack_40e;
  undefined2 uStack_408;
  undefined6 uStack_406;
  undefined2 uStack_400;
  undefined6 uStack_3fe;
  undefined2 uStack_3f8;
  undefined6 uStack_3f6;
  longlong lStack_3f0;
  longlong lStack_3e8;
  longlong lStack_3e0;
  longlong lStack_3d8;
  longlong lStack_3d0;
  longlong lStack_3c8;
  longlong lStack_3c0;
  longlong lStack_3b8;
  longlong lStack_3b0;
  longlong lStack_3a8;
  longlong lStack_3a0;
  longlong lStack_398;
  longlong lStack_390;
  longlong lStack_388;
  longlong lStack_380;
  longlong lStack_378;
  longlong lStack_370;
  longlong lStack_368;
  longlong lStack_360;
  longlong lStack_358;
  longlong lStack_350;
  longlong lStack_348;
  longlong lStack_340;
  longlong lStack_338;
  longlong lStack_330;
  longlong lStack_328;
  longlong lStack_320;
  longlong lStack_318;
  longlong lStack_310;
  longlong lStack_308;
  longlong lStack_300;
  longlong lStack_2f8;
  longlong lStack_2f0;
  longlong lStack_2e8;
  longlong lStack_2e0;
  longlong lStack_2d8;
  longlong lStack_2d0;
  longlong lStack_2c8;
  longlong lStack_2c0;
  longlong lStack_2b8;
  longlong lStack_2b0;
  longlong lStack_2a8;
  longlong lStack_2a0;
  longlong lStack_298;
  longlong lStack_290;
  longlong lStack_288;
  longlong lStack_280;
  longlong lStack_278;
  longlong lStack_270;
  longlong lStack_268;
  longlong lStack_260;
  longlong lStack_258;
  longlong lStack_250;
  longlong lStack_248;
  longlong lStack_240;
  longlong lStack_238;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_220;
  longlong lStack_218;
  longlong lStack_210;
  longlong lStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *plStack_68;
  undefined1 uStack_51;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  pbVar24 = abStack_e68;
  pbVar25 = abStack_e68;
  pbVar26 = abStack_e68;
  pbVar28 = abStack_e68;
  pbVar29 = abStack_e68;
  ppbVar30 = (byte **)abStack_e68;
  pbVar32 = (byte *)&lStack_de8;
  uStack_48 = 0xfffffffffffffffe;
  puStack_50 = param_1;
  plStack_458 = (longlong *)0x8000000000000000;
  lStack_478 = -0x8000000000000000;
  lStack_498 = -0x8000000000000000;
  lStack_4b8 = -0x8000000000000000;
  lStack_4d8 = -0x8000000000000000;
  lStack_4f8 = -0x8000000000000000;
  lStack_518 = -0x8000000000000000;
  lStack_538 = -0x8000000000000000;
  lStack_558 = -0x8000000000000000;
  lStack_578 = -0x8000000000000000;
  lStack_598 = -0x8000000000000000;
  lStack_5b8 = -0x8000000000000000;
  lStack_5d8 = -0x8000000000000000;
  lStack_5f8 = -0x8000000000000000;
  lStack_618 = -0x8000000000000000;
  lStack_638 = -0x8000000000000000;
  lStack_658 = -0x8000000000000000;
  lStack_678 = -0x8000000000000000;
  lStack_698 = -0x8000000000000000;
  lStack_6b8 = -0x8000000000000000;
  lStack_6d8 = -0x8000000000000000;
  lStack_6f8 = -0x8000000000000000;
  lStack_718 = -0x8000000000000000;
  lStack_738 = -0x8000000000000000;
  lStack_758 = -0x8000000000000000;
  lStack_778 = -0x8000000000000000;
  lStack_798 = -0x8000000000000000;
  lStack_7b8 = -0x8000000000000000;
  lStack_7d8 = -0x8000000000000000;
  lStack_7f8 = -0x8000000000000000;
  lStack_818 = -0x8000000000000000;
  lStack_838 = -0x8000000000000000;
  lStack_858 = -0x8000000000000000;
  lStack_878 = -0x8000000000000000;
  lStack_898 = -0x8000000000000000;
  lStack_8b8 = -0x8000000000000000;
  uStack_8d8 = 0x8000000000000000;
  lStack_8f8 = -0x8000000000000000;
  lStack_918 = -0x8000000000000000;
  lStack_938 = -0x8000000000000000;
  plStack_958 = (longlong *)0x8000000000000000;
  pbVar33 = (byte *)param_2[1];
  puVar23 = (undefined8 *)&UNK_142f5b330;
  pbVar22 = (byte *)*param_2;
code_r0x00014045de10:
  if (pbVar22 == pbVar33) {
    pbStack_e70 = (byte *)0x14045f051;
    pdb_140a1f3f0();
    lVar12 = lStack_478;
    lVar11 = lStack_498;
    lVar10 = lStack_4b8;
    lVar9 = lStack_4d8;
    lVar8 = lStack_4f8;
    lVar7 = lStack_518;
    lVar5 = lStack_538;
    plStack_d40 = plStack_458;
    pplVar16 = &plStack_458;
    if (SBORROW8(0,(longlong)plStack_458)) {
      pplVar16 = (longlong **)auStack_d38;
    }
    plVar15 = pplVar16[2];
    uStack_428 = SUB81(plVar15,0);
    uStack_427 = (undefined1)((ulonglong)plVar15 >> 8);
    uStack_426 = (undefined6)((ulonglong)plVar15 >> 0x10);
    plVar15 = *pplVar16;
    plVar17 = pplVar16[1];
    cStack_438 = (char)plVar15;
    bStack_437 = (byte)((ulonglong)plVar15 >> 8);
    uStack_436 = (undefined6)((ulonglong)plVar15 >> 0x10);
    uStack_430 = SUB81(plVar17,0);
    uStack_42f = (undefined1)((ulonglong)plVar17 >> 8);
    uStack_42e = (undefined6)((ulonglong)plVar17 >> 0x10);
    plVar15 = &lStack_478;
    if (SBORROW8(0,lStack_478)) {
      plVar15 = &uStack_d20;
    }
    uStack_410 = (undefined2)plVar15[2];
    uStack_40e = (undefined6)((ulonglong)plVar15[2] >> 0x10);
    uStack_420 = (undefined2)*plVar15;
    uStack_41e = (undefined6)((ulonglong)*plVar15 >> 0x10);
    uStack_418 = (undefined2)plVar15[1];
    uStack_416 = (undefined6)((ulonglong)plVar15[1] >> 0x10);
    plVar15 = &lStack_498;
    if (SBORROW8(0,lStack_498)) {
      plVar15 = &lStack_d08;
    }
    uStack_3f8 = (undefined2)plVar15[2];
    uStack_3f6 = (undefined6)((ulonglong)plVar15[2] >> 0x10);
    plVar17 = &lStack_4b8;
    if (SBORROW8(0,lStack_4b8)) {
      plVar17 = &lStack_cf0;
    }
    uStack_408 = (undefined2)*plVar15;
    uStack_406 = (undefined6)((ulonglong)*plVar15 >> 0x10);
    uStack_400 = (undefined2)plVar15[1];
    uStack_3fe = (undefined6)((ulonglong)plVar15[1] >> 0x10);
    lStack_3e0 = plVar17[2];
    lStack_3f0 = *plVar17;
    lStack_3e8 = plVar17[1];
    plVar15 = &lStack_4d8;
    if (SBORROW8(0,lStack_4d8)) {
      plVar15 = &lStack_cd8;
    }
    lStack_3d8 = *plVar15;
    lStack_3d0 = plVar15[1];
    lStack_3c8 = plVar15[2];
    plVar15 = &lStack_4f8;
    if (SBORROW8(0,lStack_4f8)) {
      plVar15 = &lStack_cc0;
    }
    lStack_3b0 = plVar15[2];
    lStack_3c0 = *plVar15;
    lStack_3b8 = plVar15[1];
    plVar15 = &lStack_518;
    if (SBORROW8(0,lStack_518)) {
      plVar15 = &lStack_ca8;
    }
    lStack_398 = plVar15[2];
    plVar17 = &lStack_538;
    if (SBORROW8(0,lStack_538)) {
      plVar17 = &lStack_c90;
    }
    lStack_3a8 = *plVar15;
    lStack_3a0 = plVar15[1];
    lStack_380 = plVar17[2];
    lStack_390 = *plVar17;
    lStack_388 = plVar17[1];
    lStack_d48 = lStack_558;
    plVar15 = &lStack_558;
    if (SBORROW8(0,lStack_558)) {
      plVar15 = &lStack_c78;
    }
    lStack_368 = plVar15[2];
    lStack_378 = *plVar15;
    lStack_370 = plVar15[1];
    lStack_d50 = lStack_578;
    plVar15 = &lStack_578;
    if (SBORROW8(0,lStack_578)) {
      plVar15 = &lStack_c60;
    }
    lStack_350 = plVar15[2];
    lStack_d58 = lStack_598;
    plVar17 = &lStack_598;
    if (SBORROW8(0,lStack_598)) {
      plVar17 = &lStack_c48;
    }
    lStack_360 = *plVar15;
    lStack_358 = plVar15[1];
    lStack_338 = plVar17[2];
    lStack_d60 = lStack_5b8;
    plVar15 = &lStack_5b8;
    if (SBORROW8(0,lStack_5b8)) {
      plVar15 = &lStack_c30;
    }
    lStack_348 = *plVar17;
    lStack_340 = plVar17[1];
    lStack_320 = plVar15[2];
    lStack_d68 = lStack_5d8;
    plVar17 = &lStack_5d8;
    if (SBORROW8(0,lStack_5d8)) {
      plVar17 = &lStack_c18;
    }
    lStack_330 = *plVar15;
    lStack_328 = plVar15[1];
    lStack_308 = plVar17[2];
    lStack_d70 = lStack_5f8;
    plVar15 = &lStack_5f8;
    if (SBORROW8(0,lStack_5f8)) {
      plVar15 = &lStack_c00;
    }
    lStack_318 = *plVar17;
    lStack_310 = plVar17[1];
    lStack_2f0 = plVar15[2];
    lStack_d78 = lStack_618;
    plVar17 = &lStack_618;
    if (SBORROW8(0,lStack_618)) {
      plVar17 = &lStack_be8;
    }
    lStack_300 = *plVar15;
    lStack_2f8 = plVar15[1];
    lStack_2d8 = plVar17[2];
    lStack_d80 = lStack_638;
    plVar15 = &lStack_638;
    if (SBORROW8(0,lStack_638)) {
      plVar15 = &lStack_bd0;
    }
    lStack_2e8 = *plVar17;
    lStack_2e0 = plVar17[1];
    lStack_2c0 = plVar15[2];
    lStack_d88 = lStack_658;
    plVar17 = &lStack_658;
    if (SBORROW8(0,lStack_658)) {
      plVar17 = &lStack_bb8;
    }
    lStack_2d0 = *plVar15;
    lStack_2c8 = plVar15[1];
    lStack_2a8 = plVar17[2];
    lStack_d90 = lStack_678;
    plVar15 = &lStack_678;
    if (SBORROW8(0,lStack_678)) {
      plVar15 = &lStack_ba0;
    }
    lStack_2b8 = *plVar17;
    lStack_2b0 = plVar17[1];
    lStack_290 = plVar15[2];
    lStack_d98 = lStack_698;
    plVar17 = &lStack_698;
    if (SBORROW8(0,lStack_698)) {
      plVar17 = &lStack_b88;
    }
    lStack_2a0 = *plVar15;
    lStack_298 = plVar15[1];
    lStack_278 = plVar17[2];
    lStack_da0 = lStack_6b8;
    plVar15 = &lStack_6b8;
    if (SBORROW8(0,lStack_6b8)) {
      plVar15 = &lStack_b70;
    }
    lStack_288 = *plVar17;
    lStack_280 = plVar17[1];
    lStack_260 = plVar15[2];
    lStack_da8 = lStack_6d8;
    plVar17 = &lStack_6d8;
    if (SBORROW8(0,lStack_6d8)) {
      plVar17 = &lStack_b58;
    }
    lStack_270 = *plVar15;
    lStack_268 = plVar15[1];
    lStack_248 = plVar17[2];
    lStack_db0 = lStack_6f8;
    plVar15 = &lStack_6f8;
    if (SBORROW8(0,lStack_6f8)) {
      plVar15 = &lStack_b40;
    }
    lStack_258 = *plVar17;
    lStack_250 = plVar17[1];
    lStack_230 = plVar15[2];
    lStack_db8 = lStack_718;
    plVar17 = &lStack_718;
    if (SBORROW8(0,lStack_718)) {
      plVar17 = &lStack_b28;
    }
    lStack_240 = *plVar15;
    lStack_238 = plVar15[1];
    lStack_218 = plVar17[2];
    lStack_dc0 = lStack_738;
    plVar15 = &lStack_738;
    if (SBORROW8(0,lStack_738)) {
      plVar15 = &lStack_b10;
    }
    lStack_228 = *plVar17;
    lStack_220 = plVar17[1];
    lStack_200 = plVar15[2];
    lStack_dc8 = lStack_758;
    plVar17 = &lStack_758;
    if (SBORROW8(0,lStack_758)) {
      plVar17 = &lStack_af8;
    }
    lStack_210 = *plVar15;
    lStack_208 = plVar15[1];
    lStack_1e8 = plVar17[2];
    lStack_dd0 = lStack_778;
    plVar15 = &lStack_778;
    if (SBORROW8(0,lStack_778)) {
      plVar15 = &lStack_ae0;
    }
    lStack_1f8 = *plVar17;
    lStack_1f0 = plVar17[1];
    lStack_1d0 = plVar15[2];
    lStack_dd8 = lStack_798;
    plVar17 = &lStack_798;
    if (SBORROW8(0,lStack_798)) {
      plVar17 = &lStack_ac8;
    }
    lStack_1e0 = *plVar15;
    lStack_1d8 = plVar15[1];
    lStack_1b8 = plVar17[2];
    lStack_de0 = lStack_7b8;
    plVar15 = &lStack_7b8;
    if (SBORROW8(0,lStack_7b8)) {
      plVar15 = &lStack_ab0;
    }
    lStack_1c8 = *plVar17;
    lStack_1c0 = plVar17[1];
    lStack_1a0 = plVar15[2];
    lStack_de8 = lStack_7d8;
    plVar17 = &lStack_7d8;
    if (SBORROW8(0,lStack_7d8)) {
      plVar17 = &lStack_a98;
    }
    lStack_1b0 = *plVar15;
    lStack_1a8 = plVar15[1];
    lStack_188 = plVar17[2];
    lStack_df0 = lStack_7f8;
    plVar15 = &lStack_7f8;
    if (SBORROW8(0,lStack_7f8)) {
      plVar15 = &lStack_a80;
    }
    lStack_198 = *plVar17;
    lStack_190 = plVar17[1];
    lStack_170 = plVar15[2];
    uStack_df8 = lStack_818;
    plVar17 = &lStack_818;
    if (SBORROW8(0,lStack_818)) {
      plVar17 = &lStack_a68;
    }
    lStack_180 = *plVar15;
    lStack_178 = plVar15[1];
    lStack_158 = plVar17[2];
    pbStack_e00 = (byte *)lStack_838;
    plVar15 = &lStack_838;
    if (SBORROW8(0,lStack_838)) {
      plVar15 = &lStack_a50;
    }
    lStack_168 = *plVar17;
    lStack_160 = plVar17[1];
    lStack_140 = plVar15[2];
    lStack_e08 = lStack_858;
    plVar17 = &lStack_858;
    if (SBORROW8(0,lStack_858)) {
      plVar17 = &lStack_a38;
    }
    lStack_150 = *plVar15;
    lStack_148 = plVar15[1];
    lStack_128 = plVar17[2];
    pbStack_e10 = (byte *)lStack_878;
    plVar15 = &lStack_878;
    if (SBORROW8(0,lStack_878)) {
      plVar15 = &lStack_a20;
    }
    lStack_138 = *plVar17;
    lStack_130 = plVar17[1];
    lStack_110 = plVar15[2];
    lStack_e18 = lStack_898;
    plVar17 = &lStack_898;
    if (SBORROW8(0,lStack_898)) {
      plVar17 = &lStack_a08;
    }
    lStack_120 = *plVar15;
    lStack_118 = plVar15[1];
    lStack_f8 = plVar17[2];
    uStack_e20 = lStack_8b8;
    plVar15 = &lStack_8b8;
    if (SBORROW8(0,lStack_8b8)) {
      plVar15 = &lStack_9f0;
    }
    lStack_108 = *plVar17;
    lStack_100 = plVar17[1];
    lStack_e0 = plVar15[2];
    uStack_e28 = uStack_8d8;
    puVar19 = &uStack_8d8;
    if (SBORROW8(0,uStack_8d8)) {
      puVar19 = &uStack_9d8;
    }
    lStack_f0 = *plVar15;
    lStack_e8 = plVar15[1];
    uStack_c8 = puVar19[2];
    lStack_e30 = lStack_8f8;
    plVar15 = &lStack_8f8;
    if (SBORROW8(0,lStack_8f8)) {
      plVar15 = &lStack_9c0;
    }
    uStack_d8 = *puVar19;
    uStack_d0 = puVar19[1];
    lStack_b0 = plVar15[2];
    lStack_e38 = lStack_918;
    plVar17 = &lStack_918;
    if (SBORROW8(0,lStack_918)) {
      plVar17 = &lStack_9a8;
    }
    lStack_c0 = *plVar15;
    lStack_b8 = plVar15[1];
    lStack_98 = plVar17[2];
    plStack_e40 = (longlong *)lStack_938;
    plVar15 = &lStack_938;
    if (SBORROW8(0,lStack_938)) {
      plVar15 = &lStack_990;
    }
    lStack_a8 = *plVar17;
    lStack_a0 = plVar17[1];
    lStack_80 = plVar15[2];
    plStack_e48 = plStack_958;
    pplVar16 = &plStack_958;
    if (SBORROW8(0,(longlong)plStack_958)) {
      pplVar16 = &plStack_978;
    }
    lStack_90 = *plVar15;
    lStack_88 = plVar15[1];
    plStack_68 = pplVar16[2];
    uStack_78 = *(undefined4 *)pplVar16;
    uStack_74 = *(undefined4 *)((longlong)pplVar16 + 4);
    uStack_70 = *(undefined4 *)(pplVar16 + 1);
    uStack_6c = *(undefined4 *)((longlong)pplVar16 + 0xc);
    pbStack_e70 = (byte *)0x14045f8ee;
    pub_142e32760(puStack_50,&cStack_438,0x3d8);
    plVar15 = (longlong *)0x0;
    if (!SBORROW8(0,(longlong)plStack_d40)) {
      plVar15 = (longlong *)0x0;
      if (CONCAT17(auStack_d38[7],auStack_d38._0_7_) != 0) {
        pbStack_e70 = (byte *)0x14045f91f;
        pub_1406abac0((byte *)CONCAT17((undefined1)uStack_d29,CONCAT43(uStack_d2d,uStack_d30)),
                      CONCAT17(auStack_d38[7],auStack_d38._0_7_) * 0xc,4);
        plVar15 = extraout_RAX;
      }
    }
    if (!SBORROW8(0,lVar12)) {
      plVar15 = (longlong *)0x0;
      if (CONCAT17(uStack_d20._7_1_,(undefined7)uStack_d20) != 0) {
        pbStack_e70 = (byte *)0x14045f94a;
        pub_1406abac0(pbStack_d18,CONCAT17(uStack_d20._7_1_,(undefined7)uStack_d20) * 0xc,4);
        plVar15 = extraout_RAX_00;
      }
    }
    if ((!SBORROW8(0,lVar11)) && (plVar15 = (longlong *)0x0, lStack_d08 != 0)) {
      pbStack_e70 = (byte *)0x14045f975;
      pub_1406abac0(pbStack_d00,lStack_d08 * 0xc,4);
      plVar15 = extraout_RAX_01;
    }
    if ((!SBORROW8(0,lVar10)) && (plVar15 = (longlong *)0x0, lStack_cf0 != 0)) {
      pbStack_e70 = (byte *)0x14045f9a0;
      pub_1406abac0(pbStack_ce8,lStack_cf0 * 0xc,4);
      plVar15 = extraout_RAX_02;
    }
    if ((!SBORROW8(0,lVar9)) && (plVar15 = (longlong *)0x0, lStack_cd8 != 0)) {
      pbStack_e70 = (byte *)0x14045f9cb;
      pub_1406abac0(pbStack_cd0,lStack_cd8 * 0xc,4);
      plVar15 = extraout_RAX_03;
    }
    if ((!SBORROW8(0,lVar8)) && (plVar15 = (longlong *)0x0, lStack_cc0 != 0)) {
      pbStack_e70 = (byte *)0x14045f9f6;
      pub_1406abac0(pbStack_cb8,lStack_cc0 * 0xc,4);
      plVar15 = extraout_RAX_04;
    }
    if ((!SBORROW8(0,lVar7)) && (plVar15 = (longlong *)0x0, lStack_ca8 != 0)) {
      pbStack_e70 = (byte *)0x14045fa21;
      pub_1406abac0(pbStack_ca0,lStack_ca8 * 0xc,4);
      plVar15 = extraout_RAX_05;
    }
    if ((!SBORROW8(0,lVar5)) && (plVar15 = (longlong *)0x0, lStack_c90 != 0)) {
      pbStack_e70 = (byte *)0x14045fa4c;
      pub_1406abac0(pbStack_c88,lStack_c90 * 0xc,4);
      plVar15 = extraout_RAX_06;
    }
    bVar35 = SBORROW8(0,lStack_d48);
    lStack_d48 = -lStack_d48;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_c78 != 0)) {
      pbStack_e70 = (byte *)0x14045fa7b;
      pub_1406abac0(pbStack_c70,lStack_c78 * 0xc,4);
      plVar15 = extraout_RAX_07;
    }
    bVar35 = SBORROW8(0,lStack_d50);
    lStack_d50 = -lStack_d50;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_c60 != 0)) {
      pbStack_e70 = (byte *)0x14045faaa;
      pub_1406abac0(pbStack_c58,lStack_c60 * 0xc,4);
      plVar15 = extraout_RAX_08;
    }
    bVar35 = SBORROW8(0,lStack_d58);
    lStack_d58 = -lStack_d58;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_c48 != 0)) {
      pbStack_e70 = (byte *)0x14045fad9;
      pub_1406abac0(pbStack_c40,lStack_c48 * 0xc,4);
      plVar15 = extraout_RAX_09;
    }
    bVar35 = SBORROW8(0,lStack_d60);
    lStack_d60 = -lStack_d60;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_c30 != 0)) {
      pbStack_e70 = (byte *)0x14045fb08;
      pub_1406abac0(pbStack_c28,lStack_c30 * 0xc,4);
      plVar15 = extraout_RAX_10;
    }
    bVar35 = SBORROW8(0,lStack_d68);
    lStack_d68 = -lStack_d68;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_c18 != 0)) {
      pbStack_e70 = (byte *)0x14045fb37;
      pub_1406abac0(pbStack_c10,lStack_c18 * 0xc,4);
      plVar15 = extraout_RAX_11;
    }
    bVar35 = SBORROW8(0,lStack_d70);
    lStack_d70 = -lStack_d70;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_c00 != 0)) {
      pbStack_e70 = (byte *)0x14045fb63;
      pub_1406abac0(pbStack_bf8,lStack_c00 * 0xc,4);
      plVar15 = extraout_RAX_12;
    }
    bVar35 = SBORROW8(0,lStack_d78);
    lStack_d78 = -lStack_d78;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_be8 != 0)) {
      pbStack_e70 = (byte *)0x14045fb8f;
      pub_1406abac0(pbStack_be0,lStack_be8 * 0xc,4);
      plVar15 = extraout_RAX_13;
    }
    bVar35 = SBORROW8(0,lStack_d80);
    lStack_d80 = -lStack_d80;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_bd0 != 0)) {
      pbStack_e70 = (byte *)0x14045fbbb;
      pub_1406abac0(pbStack_bc8,lStack_bd0 * 0xc,4);
      plVar15 = extraout_RAX_14;
    }
    bVar35 = SBORROW8(0,lStack_d88);
    lStack_d88 = -lStack_d88;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_bb8 != 0)) {
      pbStack_e70 = (byte *)0x14045fbe7;
      pub_1406abac0(pbStack_bb0,lStack_bb8 * 0xc,4);
      plVar15 = extraout_RAX_15;
    }
    bVar35 = SBORROW8(0,lStack_d90);
    lStack_d90 = -lStack_d90;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_ba0 != 0)) {
      pbStack_e70 = (byte *)0x14045fc13;
      pub_1406abac0(pbStack_b98,lStack_ba0 * 0xc,4);
      plVar15 = extraout_RAX_16;
    }
    bVar35 = SBORROW8(0,lStack_d98);
    lStack_d98 = -lStack_d98;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_b88 != 0)) {
      pbStack_e70 = (byte *)0x14045fc3f;
      pub_1406abac0(pbStack_b80,lStack_b88 * 0xc,4);
      plVar15 = extraout_RAX_17;
    }
    bVar35 = SBORROW8(0,lStack_da0);
    lStack_da0 = -lStack_da0;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_b70 != 0)) {
      pbStack_e70 = (byte *)0x14045fc6b;
      pub_1406abac0(pbStack_b68,lStack_b70 * 0xc,4);
      plVar15 = extraout_RAX_18;
    }
    bVar35 = SBORROW8(0,lStack_da8);
    lStack_da8 = -lStack_da8;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_b58 != 0)) {
      pbStack_e70 = (byte *)0x14045fc97;
      pub_1406abac0(pbStack_b50,lStack_b58 * 0xc,4);
      plVar15 = extraout_RAX_19;
    }
    bVar35 = SBORROW8(0,lStack_db0);
    lStack_db0 = -lStack_db0;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_b40 != 0)) {
      pbStack_e70 = (byte *)0x14045fcc3;
      pub_1406abac0(pbStack_b38,lStack_b40 * 0xc,4);
      plVar15 = extraout_RAX_20;
    }
    bVar35 = SBORROW8(0,lStack_db8);
    lStack_db8 = -lStack_db8;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_b28 != 0)) {
      pbStack_e70 = (byte *)0x14045fcef;
      pub_1406abac0(pbStack_b20,lStack_b28 * 0xc,4);
      plVar15 = extraout_RAX_21;
    }
    bVar35 = SBORROW8(0,lStack_dc0);
    lStack_dc0 = -lStack_dc0;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_b10 != 0)) {
      pbStack_e70 = (byte *)0x14045fd1b;
      pub_1406abac0(pbStack_b08,lStack_b10 * 0xc,4);
      plVar15 = extraout_RAX_22;
    }
    bVar35 = SBORROW8(0,lStack_dc8);
    lStack_dc8 = -lStack_dc8;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_af8 != 0)) {
      pbStack_e70 = (byte *)0x14045fd47;
      pub_1406abac0(pbStack_af0,lStack_af8 * 0xc,4);
      plVar15 = extraout_RAX_23;
    }
    bVar35 = SBORROW8(0,lStack_dd0);
    lStack_dd0 = -lStack_dd0;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_ae0 != 0)) {
      pbStack_e70 = (byte *)0x14045fd73;
      pub_1406abac0(pbStack_ad8,lStack_ae0 * 0xc,4);
      plVar15 = extraout_RAX_24;
    }
    bVar35 = SBORROW8(0,lStack_dd8);
    lStack_dd8 = -lStack_dd8;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_ac8 != 0)) {
      pbStack_e70 = (byte *)0x14045fd9f;
      pub_1406abac0(pbStack_ac0,lStack_ac8 * 0xc,4);
      plVar15 = extraout_RAX_25;
    }
    bVar35 = SBORROW8(0,lStack_de0);
    lStack_de0 = -lStack_de0;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_ab0 != 0)) {
      pbStack_e70 = (byte *)0x14045fdcb;
      pub_1406abac0(pbStack_aa8,lStack_ab0 * 0xc,4);
      plVar15 = extraout_RAX_26;
    }
    bVar35 = SBORROW8(0,lStack_de8);
    lStack_de8 = -lStack_de8;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_a98 != 0)) {
      pbStack_e70 = (byte *)0x14045fdf7;
      pub_1406abac0(pbStack_a90,lStack_a98 * 0xc,4);
      plVar15 = extraout_RAX_27;
    }
    bVar35 = SBORROW8(0,lStack_df0);
    lStack_df0 = -lStack_df0;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_a80 != 0)) {
      pbStack_e70 = (byte *)0x14045fe23;
      pub_1406abac0(pbStack_a78,lStack_a80 * 0xc,4);
      plVar15 = extraout_RAX_28;
    }
    bVar35 = SBORROW8(0,uStack_df8);
    uStack_df8 = -uStack_df8;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_a68 != 0)) {
      pbStack_e70 = (byte *)0x14045fe4f;
      pub_1406abac0(pbStack_a60,lStack_a68 * 0xc,4);
      plVar15 = extraout_RAX_29;
    }
    bVar35 = SBORROW8(0,(longlong)pbStack_e00);
    pbStack_e00 = (byte *)-(longlong)pbStack_e00;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_a50 != 0)) {
      pbStack_e70 = (byte *)0x14045fe7b;
      pub_1406abac0(pbStack_a48,lStack_a50 * 0xc,4);
      plVar15 = extraout_RAX_30;
    }
    bVar35 = SBORROW8(0,lStack_e08);
    lStack_e08 = -lStack_e08;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_a38 != 0)) {
      pbStack_e70 = (byte *)0x14045fea7;
      pub_1406abac0(pbStack_a30,lStack_a38 * 0xc,4);
      plVar15 = extraout_RAX_31;
    }
    bVar35 = SBORROW8(0,(longlong)pbStack_e10);
    pbStack_e10 = (byte *)-(longlong)pbStack_e10;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_a20 != 0)) {
      pbStack_e70 = (byte *)0x14045fed3;
      pub_1406abac0(pbStack_a18,lStack_a20 * 0xc,4);
      plVar15 = extraout_RAX_32;
    }
    bVar35 = SBORROW8(0,lStack_e18);
    lStack_e18 = -lStack_e18;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_a08 != 0)) {
      pbStack_e70 = (byte *)0x14045feff;
      pub_1406abac0(pbStack_a00,lStack_a08 * 0xc,4);
      plVar15 = extraout_RAX_33;
    }
    bVar35 = SBORROW8(0,uStack_e20);
    uStack_e20 = -uStack_e20;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_9f0 != 0)) {
      pbStack_e70 = (byte *)0x14045ff2b;
      pub_1406abac0(pbStack_9e8,lStack_9f0 * 0xc,4);
      plVar15 = extraout_RAX_34;
    }
    bVar35 = SBORROW8(0,uStack_e28);
    uStack_e28 = -uStack_e28;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, uStack_9d8 != 0)) {
      pbStack_e70 = (byte *)0x14045ff57;
      pub_1406abac0(pbStack_9d0,uStack_9d8 * 0xc,4);
      plVar15 = extraout_RAX_35;
    }
    bVar35 = SBORROW8(0,lStack_e30);
    lStack_e30 = -lStack_e30;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_9c0 != 0)) {
      pbStack_e70 = (byte *)0x14045ff83;
      pub_1406abac0(pbStack_9b8,lStack_9c0 * 0xc,4);
      plVar15 = extraout_RAX_36;
    }
    bVar35 = SBORROW8(0,lStack_e38);
    lStack_e38 = -lStack_e38;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_9a8 != 0)) {
      pbStack_e70 = (byte *)0x14045ffaf;
      pub_1406abac0(pbStack_9a0,lStack_9a8 * 0xc,4);
      plVar15 = extraout_RAX_37;
    }
    bVar35 = SBORROW8(0,(longlong)plStack_e40);
    plStack_e40 = (longlong *)-(longlong)plStack_e40;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, lStack_990 != 0)) {
      pbStack_e70 = (byte *)0x14045ffdb;
      pub_1406abac0(pbStack_988,lStack_990 * 0xc,4);
      plVar15 = extraout_RAX_38;
    }
    bVar35 = SBORROW8(0,(longlong)plStack_e48);
    plStack_e48 = (longlong *)-(longlong)plStack_e48;
    if ((!bVar35) && (plVar15 = (longlong *)0x0, plStack_978 != (longlong *)0x0)) {
LAB_14046078f:
      pbStack_e70 = (byte *)0x1404607a2;
      pub_1406abac0(pbStack_970,(longlong)plStack_978 * 0xc,4);
      plVar15 = extraout_RAX_39;
    }
    return plVar15;
  }
  pbVar1 = pbVar22 + 0x40;
  *param_2 = pbVar1;
  pbVar2 = pbVar22 + 0x20;
  param_2[3] = param_2[3] + 1;
  param_2[2] = pbVar2;
  switch(*pbVar22) {
  case 1:
    bVar13 = pbVar22[1];
    if (0x28 < pbVar22[1]) {
      bVar13 = 0x29;
    }
    plVar15 = (longlong *)(&UNK_142f5b36c + *(int *)(&UNK_142f5b36c + (ulonglong)bVar13 * 4));
    bVar35 = plVar15 == (longlong *)0x0;
    ppbVar27 = (byte **)abStack_e68;
    ppbVar31 = (byte **)abStack_e68;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar13) {
    case 0:
      goto code_r0x00014045df18;
    case 1:
      goto code_r0x00014045e760;
    case 2:
      goto code_r0x00014045e5b8;
    case 3:
      goto code_r0x00014045e68c;
    case 4:
      goto code_r0x00014045e33c;
    case 5:
      goto code_r0x00014045e918;
    case 6:
      goto code_r0x00014045ea56;
    case 7:
      goto code_r0x00014045e6f6;
    case 8:
      goto code_r0x00014045eb94;
    case 9:
      goto code_r0x00014045e47a;
    case 10:
      goto code_r0x00014045eb2a;
    case 0xb:
      goto code_r0x00014045e2d2;
    case 0xc:
      goto code_r0x00014045e410;
    case 0xd:
      goto code_r0x00014045e9ec;
    case 0xe:
      goto code_r0x00014045e1fe;
    case 0xf:
      goto code_r0x00014045e622;
    case 0x10:
      goto code_r0x00014045e194;
    case 0x11:
      goto code_r0x00014045e834;
    case 0x12:
      goto code_r0x00014045eac0;
    case 0x13:
      goto code_r0x00014045eda6;
    case 0x14:
      goto code_r0x00014045e8ae;
    case 0x15:
      goto code_r0x00014045e982;
    case 0x16:
      goto code_r0x00014045ecd2;
    case 0x17:
      goto code_r0x00014045ee10;
    case 0x18:
      goto code_r0x00014045e54e;
    case 0x19:
      goto code_r0x00014045e4e4;
    case 0x1a:
      goto code_r0x00014045efb8;
    case 0x1b:
      goto code_r0x00014045e0c0;
    case 0x1c:
      goto code_r0x00014045ee7a;
    case 0x1d:
      goto code_r0x00014045eee4;
    case 0x1e:
      goto code_r0x00014045ebfe;
    case 0x1f:
      goto code_r0x00014045e7ca;
    case 0x20:
      goto code_r0x00014045ec68;
    case 0x21:
      goto code_r0x00014045e268;
    case 0x22:
      goto code_r0x00014045e12a;
    case 0x23:
      goto code_r0x00014045dfec;
    case 0x24:
      goto code_r0x00014045e056;
    case 0x25:
      goto code_r0x00014045df82;
    case 0x26:
      goto code_r0x00014045ef4e;
    case 0x27:
      goto code_r0x00014045ed3c;
    case 0x28:
      goto code_r0x00014045e3a6;
    case 0x29:
      goto code_r0x00014045e89e;
    default:
      goto code_r0x00014046f096;
    case 0x36:
    case 0x38:
      goto code_r0x00014046f09f;
    case 0x3b:
      goto code_r0x00014046f109;
    case 0x3d:
      goto code_r0x00014046f119;
    case 0x3e:
      goto code_r0x00014046f0b7;
    case 0x3f:
      goto code_r0x000142d855c4;
    case 0x40:
      goto code_r0x000142d855d0;
    case 0x41:
      goto code_r0x000142d85591;
    case 0x42:
      goto code_r0x000142d855ab;
    case 0x43:
      goto code_r0x000142d85565;
    case 0x44:
      goto code_r0x000142d855dd;
    case 0x45:
      goto code_r0x000142d855f8;
    case 0x46:
      goto code_r0x000142d855b7;
    case 0x47:
      goto code_r0x000142d85615;
    case 0x48:
      goto code_r0x000142d8557e;
    case 0x49:
      goto code_r0x000142d85606;
    case 0x4a:
      goto code_r0x000142d85559;
    case 0x4b:
      goto code_r0x000142d85571;
    case 0x4c:
      goto code_r0x000142d855eb;
    case 0x4d:
      goto code_r0x000142d8554c;
    case 0x4e:
      goto code_r0x000142d8559e;
    case 0x4f:
    case 0x50:
      goto code_r0x000142d85547;
    case 0x51:
      goto code_r0x000142d8562c;
    case 0x52:
      goto code_r0x000142d85631;
    case 0x53:
      goto code_r0x000142d85622;
    case 0x54:
      goto code_r0x000142d85627;
    case 0x55:
      goto code_r0x000140470651;
    case 0x56:
      goto code_r0x0001404706a8;
    case 0x57:
      goto code_r0x00014047066a;
    case 0x58:
      goto code_r0x00014047066f;
    case 0x59:
      goto code_r0x000140470657;
    case 0x5a:
      goto code_r0x0001404706ae;
    case 0x5b:
      goto code_r0x0001404706c1;
    case 0x5c:
      goto code_r0x000140470675;
    case 0x5d:
      goto code_r0x0001404707f1;
    case 0x5e:
      goto code_r0x00014047088a;
    case 0x5f:
      goto code_r0x000140470810;
    case 0x60:
      goto code_r0x000140470818;
    case 0x61:
      goto code_r0x0001404707fa;
    case 0x62:
      goto code_r0x000140470890;
    case 99:
      goto code_r0x0001404708a3;
    case 100:
      goto code_r0x000140470853;
    }
  default:
    param_3 = &uStack_51;
    pbStack_e70 = (byte *)0x14045f03c;
    pdb_142d857d0(&cStack_438,pbVar22,param_3,&UNK_142f5a578);
    pbVar21 = pbVar22;
    break;
  case 4:
    uVar14 = *(ulonglong *)(pbVar22 + 8);
    if (0x28 < uVar14) {
      uVar14 = 0x29;
    }
    plVar15 = (longlong *)(&UNK_142f5b36c + *(int *)(&UNK_142f5b36c + (uVar14 & 0xff) * 4));
    bVar35 = plVar15 == (longlong *)0x0;
    ppbVar27 = (byte **)abStack_e68;
    ppbVar31 = (byte **)abStack_e68;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar14 & 0xff) {
    case 0:
      goto code_r0x00014045df18;
    case 1:
      goto code_r0x00014045e760;
    case 2:
      goto code_r0x00014045e5b8;
    case 3:
      goto code_r0x00014045e68c;
    case 4:
      goto code_r0x00014045e33c;
    case 5:
      goto code_r0x00014045e918;
    case 6:
      goto code_r0x00014045ea56;
    case 7:
      goto code_r0x00014045e6f6;
    case 8:
      goto code_r0x00014045eb94;
    case 9:
      goto code_r0x00014045e47a;
    case 10:
      goto code_r0x00014045eb2a;
    case 0xb:
      goto code_r0x00014045e2d2;
    case 0xc:
      goto code_r0x00014045e410;
    case 0xd:
      goto code_r0x00014045e9ec;
    case 0xe:
      goto code_r0x00014045e1fe;
    case 0xf:
      goto code_r0x00014045e622;
    case 0x10:
      goto code_r0x00014045e194;
    case 0x11:
      goto code_r0x00014045e834;
    case 0x12:
      goto code_r0x00014045eac0;
    case 0x13:
      goto code_r0x00014045eda6;
    case 0x14:
      goto code_r0x00014045e8ae;
    case 0x15:
      goto code_r0x00014045e982;
    case 0x16:
      goto code_r0x00014045ecd2;
    case 0x17:
      goto code_r0x00014045ee10;
    case 0x18:
      goto code_r0x00014045e54e;
    case 0x19:
      goto code_r0x00014045e4e4;
    case 0x1a:
      goto code_r0x00014045efb8;
    case 0x1b:
      goto code_r0x00014045e0c0;
    case 0x1c:
      goto code_r0x00014045ee7a;
    case 0x1d:
      goto code_r0x00014045eee4;
    case 0x1e:
      goto code_r0x00014045ebfe;
    case 0x1f:
      goto code_r0x00014045e7ca;
    case 0x20:
      goto code_r0x00014045ec68;
    case 0x21:
      goto code_r0x00014045e268;
    case 0x22:
      goto code_r0x00014045e12a;
    case 0x23:
      goto code_r0x00014045dfec;
    case 0x24:
      goto code_r0x00014045e056;
    case 0x25:
      goto code_r0x00014045df82;
    case 0x26:
      goto code_r0x00014045ef4e;
    case 0x27:
      goto code_r0x00014045ed3c;
    case 0x28:
      goto code_r0x00014045e3a6;
    case 0x29:
      goto code_r0x00014045e89e;
    default:
      goto code_r0x00014046f096;
    case 0x36:
    case 0x38:
      goto code_r0x00014046f09f;
    case 0x3b:
      goto code_r0x00014046f109;
    case 0x3d:
      goto code_r0x00014046f119;
    case 0x3e:
      goto code_r0x00014046f0b7;
    case 0x3f:
      goto code_r0x000142d855c4;
    case 0x40:
      goto code_r0x000142d855d0;
    case 0x41:
      goto code_r0x000142d85591;
    case 0x42:
      goto code_r0x000142d855ab;
    case 0x43:
      goto code_r0x000142d85565;
    case 0x44:
      goto code_r0x000142d855dd;
    case 0x45:
      goto code_r0x000142d855f8;
    case 0x46:
      goto code_r0x000142d855b7;
    case 0x47:
      goto code_r0x000142d85615;
    case 0x48:
      goto code_r0x000142d8557e;
    case 0x49:
      goto code_r0x000142d85606;
    case 0x4a:
      goto code_r0x000142d85559;
    case 0x4b:
      goto code_r0x000142d85571;
    case 0x4c:
      goto code_r0x000142d855eb;
    case 0x4d:
      goto code_r0x000142d8554c;
    case 0x4e:
      goto code_r0x000142d8559e;
    case 0x4f:
    case 0x50:
      goto code_r0x000142d85547;
    case 0x51:
      goto code_r0x000142d8562c;
    case 0x52:
      goto code_r0x000142d85631;
    case 0x53:
      goto code_r0x000142d85622;
    case 0x54:
      goto code_r0x000142d85627;
    case 0x55:
      goto code_r0x000140470651;
    case 0x56:
      goto code_r0x0001404706a8;
    case 0x57:
      goto code_r0x00014047066a;
    case 0x58:
      goto code_r0x00014047066f;
    case 0x59:
      goto code_r0x000140470657;
    case 0x5a:
      goto code_r0x0001404706ae;
    case 0x5b:
      goto code_r0x0001404706c1;
    case 0x5c:
      goto code_r0x000140470675;
    case 0x5d:
      goto code_r0x0001404707f1;
    case 0x5e:
      goto code_r0x00014047088a;
    case 0x5f:
      goto code_r0x000140470810;
    case 0x60:
      goto code_r0x000140470818;
    case 0x61:
      goto code_r0x0001404707fa;
    case 0x62:
      goto code_r0x000140470890;
    case 99:
      goto code_r0x0001404708a3;
    case 100:
      goto code_r0x000140470853;
    }
  case 0xc:
    pbVar21 = *(byte **)(pbVar22 + 0x10);
    param_3 = *(undefined1 **)(pbVar22 + 0x18);
    pbStack_e70 = (byte *)0x14045deed;
    pdb_140187460(&cStack_438);
    break;
  case 0xd:
    pbVar21 = *(byte **)(pbVar22 + 8);
    param_3 = *(undefined1 **)(pbVar22 + 0x10);
    pbStack_e70 = (byte *)0x14045de7b;
    pdb_140187460(&cStack_438);
    break;
  case 0xe:
    pbVar21 = *(byte **)(pbVar22 + 0x10);
    param_3 = *(undefined1 **)(pbVar22 + 0x18);
    pbStack_e70 = (byte *)0x14045deaf;
    pdb_1401865e0(&cStack_438);
    break;
  case 0xf:
    pbVar21 = *(byte **)(pbVar22 + 8);
    param_3 = *(undefined1 **)(pbVar22 + 0x10);
    pbStack_e70 = (byte *)0x14045de95;
    pdb_1401865e0(&cStack_438);
  }
  if (cStack_438 != '2') {
    puStack_50[9] = CONCAT62(uStack_3f6,uStack_3f8);
    *(ulonglong *)((longlong)puStack_50 + 0x3a) = CONCAT26(uStack_400,uStack_406);
    *(ulonglong *)((longlong)puStack_50 + 0x42) = CONCAT26(uStack_3f8,uStack_3fe);
    *(ulonglong *)((longlong)puStack_50 + 0x2a) = CONCAT26(uStack_410,uStack_416);
    *(ulonglong *)((longlong)puStack_50 + 0x32) = CONCAT26(uStack_408,uStack_40e);
    *(ulonglong *)((longlong)puStack_50 + 0x1a) = CONCAT26(uStack_420,uStack_426);
    *(ulonglong *)((longlong)puStack_50 + 0x22) = CONCAT26(uStack_418,uStack_41e);
    *(ulonglong *)((longlong)puStack_50 + 10) = CONCAT17(uStack_42f,CONCAT16(uStack_430,uStack_436))
    ;
    *(ulonglong *)((longlong)puStack_50 + 0x12) =
         CONCAT17(uStack_427,CONCAT16(uStack_428,uStack_42e));
    *(char *)(puStack_50 + 1) = cStack_438;
    *(byte *)((longlong)puStack_50 + 9) = bStack_437;
    *puStack_50 = 0x8000000000000000;
    goto joined_r0x000140460c02;
  }
  plVar15 = (longlong *)(&UNK_142f5b36c + *(int *)(&UNK_142f5b36c + (ulonglong)bStack_437 * 4));
  bVar35 = plVar15 == (longlong *)0x0;
  pbVar22 = pbVar21;
  ppbVar27 = (byte **)abStack_e68;
  ppbVar31 = (byte **)abStack_e68;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bStack_437) {
  case 0:
code_r0x00014045df18:
    if (!SBORROW8(0,(longlong)plStack_458)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a8e2;
code_r0x000140460bc2:
      puStack_50[2] = puVar20;
      puStack_50[3] = 0xc;
code_r0x000140460bee:
      puStack_50[4] = 0x8000000000000000;
      *puStack_50 = 0x8000000000000000;
      goto joined_r0x000140460c02;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045df3e;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      plStack_458 = (longlong *)CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_450 = uStack_d29;
      uStack_44c = uStack_d25;
      uStack_448 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 1:
code_r0x00014045e760:
    if (!SBORROW8(0,lStack_478)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a8ee;
code_r0x000140460b82:
      puStack_50[2] = puVar20;
      puStack_50[3] = 9;
      goto code_r0x000140460bee;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e786;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_478 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_470 = uStack_d29;
      uStack_46c = uStack_d25;
      uStack_468 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 2:
code_r0x00014045e5b8:
    if (!SBORROW8(0,lStack_498)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a8f7;
      goto code_r0x000140460b82;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e5de;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_498 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_490 = uStack_d29;
      uStack_48c = uStack_d25;
      uStack_488 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 3:
code_r0x00014045e68c:
    if (!SBORROW8(0,lStack_4b8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a900;
code_r0x000140460ada:
      puStack_50[2] = puVar20;
      puStack_50[3] = 10;
      goto code_r0x000140460bee;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e6b2;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_4b8 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_4b0 = uStack_d29;
      uStack_4ac = uStack_d25;
      uStack_4a8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 4:
code_r0x00014045e33c:
    if (!SBORROW8(0,lStack_4d8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a90a;
code_r0x000140460ba2:
      puStack_50[2] = puVar20;
      puStack_50[3] = 7;
      goto code_r0x000140460bee;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e362;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_4d8 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_4d0 = uStack_d29;
      uStack_4cc = uStack_d25;
      uStack_4c8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 5:
code_r0x00014045e918:
    if (!SBORROW8(0,lStack_4f8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a911;
      goto code_r0x000140460b82;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e93e;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_4f8 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_4f0 = uStack_d29;
      uStack_4ec = uStack_d25;
      uStack_4e8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 6:
code_r0x00014045ea56:
    if (!SBORROW8(0,lStack_518)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a91a;
code_r0x000140460a37:
      puStack_50[2] = puVar20;
      puStack_50[3] = 0xb;
      goto code_r0x000140460bee;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045ea7c;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_518 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_510 = uStack_d29;
      uStack_50c = uStack_d25;
      uStack_508 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 7:
code_r0x00014045e6f6:
    if (!SBORROW8(0,lStack_538)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a925;
      goto code_r0x000140460bc2;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e71c;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_538 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_530 = uStack_d29;
      uStack_52c = uStack_d25;
      uStack_528 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 8:
code_r0x00014045eb94:
    if (!SBORROW8(0,lStack_558)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5aa50;
code_r0x0001404608f7:
      puStack_50[2] = puVar20;
      puStack_50[3] = 0x12;
      goto code_r0x000140460bee;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045ebba;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_558 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_550 = uStack_d29;
      uStack_54c = uStack_d25;
      uStack_548 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 9:
code_r0x00014045e47a:
    if (!SBORROW8(0,lStack_578)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puStack_50[2] = &UNK_142f5aa62;
      puStack_50[3] = 0xf;
      goto code_r0x000140460bee;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e4a0;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_578 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_570 = uStack_d29;
      uStack_56c = uStack_d25;
      uStack_568 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 10:
code_r0x00014045eb2a:
    if (!SBORROW8(0,lStack_598)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a931;
      goto code_r0x000140460ba2;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045eb50;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_598 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_590 = uStack_d29;
      uStack_58c = uStack_d25;
      uStack_588 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0xb:
code_r0x00014045e2d2:
    if (!SBORROW8(0,lStack_5b8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a938;
code_r0x000140460a7d:
      puStack_50[2] = puVar20;
      puStack_50[3] = 8;
      goto code_r0x000140460bee;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e2f8;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_5b8 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_5b0 = uStack_d29;
      uStack_5ac = uStack_d25;
      uStack_5a8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0xc:
code_r0x00014045e410:
    if (!SBORROW8(0,lStack_5d8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a940;
      goto code_r0x000140460a7d;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e436;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_5d8 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_5d0 = uStack_d29;
      uStack_5cc = uStack_d25;
      uStack_5c8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0xd:
code_r0x00014045e9ec:
    if (!SBORROW8(0,lStack_5f8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a948;
code_r0x0001404608d4:
      puStack_50[2] = puVar20;
      puStack_50[3] = 4;
      goto code_r0x000140460bee;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045ea12;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_5f8 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_5f0 = uStack_d29;
      uStack_5ec = uStack_d25;
      uStack_5e8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0xe:
code_r0x00014045e1fe:
    if (!SBORROW8(0,lStack_618)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a94c;
      goto code_r0x000140460ada;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e224;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_618 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_610 = uStack_d29;
      uStack_60c = uStack_d25;
      uStack_608 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0xf:
code_r0x00014045e622:
    if (!SBORROW8(0,lStack_638)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a956;
      goto code_r0x000140460b82;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e648;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_638 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_630 = uStack_d29;
      uStack_62c = uStack_d25;
      uStack_628 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x10:
code_r0x00014045e194:
    if (!SBORROW8(0,lStack_658)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a95f;
code_r0x000140460afd:
      puStack_50[2] = puVar20;
      puStack_50[3] = 6;
      goto code_r0x000140460bee;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e1ba;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_658 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_650 = uStack_d29;
      uStack_64c = uStack_d25;
      uStack_648 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x11:
code_r0x00014045e834:
    if (!SBORROW8(0,lStack_678)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a965;
      goto code_r0x000140460ba2;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e85a;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_678 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_670 = uStack_d29;
      uStack_66c = uStack_d25;
      uStack_668 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x12:
code_r0x00014045eac0:
    if (!SBORROW8(0,lStack_698)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a96c;
      goto code_r0x000140460afd;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045eae6;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_698 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_690 = uStack_d29;
      uStack_68c = uStack_d25;
      uStack_688 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x13:
code_r0x00014045eda6:
    if (!SBORROW8(0,lStack_6b8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a972;
      goto code_r0x0001404608d4;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045edcc;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_6b8 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_6b0 = uStack_d29;
      uStack_6ac = uStack_d25;
      uStack_6a8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x14:
code_r0x00014045e8ae:
    if (!SBORROW8(0,lStack_6d8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a976;
code_r0x000140460be2:
      puStack_50[2] = puVar20;
      puStack_50[3] = 5;
      goto code_r0x000140460bee;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e8d4;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_6d8 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_6d0 = uStack_d29;
      uStack_6cc = uStack_d25;
      uStack_6c8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x15:
code_r0x00014045e982:
    if (!SBORROW8(0,lStack_6f8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a97b;
      goto code_r0x000140460b82;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e9a8;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_6f8 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_6f0 = uStack_d29;
      uStack_6ec = uStack_d25;
      uStack_6e8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x16:
code_r0x00014045ecd2:
    if (!SBORROW8(0,lStack_718)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a984;
      goto code_r0x000140460a37;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045ecf8;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_718 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_710 = uStack_d29;
      uStack_70c = uStack_d25;
      uStack_708 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x17:
code_r0x00014045ee10:
    if (!SBORROW8(0,lStack_738)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a98f;
      goto code_r0x0001404608d4;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045ee36;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_738 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_730 = uStack_d29;
      uStack_72c = uStack_d25;
      uStack_728 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x18:
code_r0x00014045e54e:
    if (!SBORROW8(0,lStack_758)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a993;
      goto code_r0x0001404608d4;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e574;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_758 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_750 = uStack_d29;
      uStack_74c = uStack_d25;
      uStack_748 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x19:
code_r0x00014045e4e4:
    if (!SBORROW8(0,lStack_778)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5aa71;
      goto code_r0x000140460afd;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e50a;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_778 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_770 = uStack_d29;
      uStack_76c = uStack_d25;
      uStack_768 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x1a:
code_r0x00014045efb8:
    if (!SBORROW8(0,lStack_798)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a997;
      goto code_r0x000140460ada;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045efde;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_798 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_790 = uStack_d29;
      uStack_78c = uStack_d25;
      uStack_788 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x1b:
code_r0x00014045e0c0:
    if (!SBORROW8(0,lStack_7b8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puStack_50[2] = &UNK_142f5a9a1;
      puStack_50[3] = 0x10;
      goto code_r0x000140460bee;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e0e6;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_7b8 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_7b0 = uStack_d29;
      uStack_7ac = uStack_d25;
      uStack_7a8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x1c:
code_r0x00014045ee7a:
    if (!SBORROW8(0,lStack_7d8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5aa77;
      goto code_r0x0001404608f7;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045eea0;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_7d8 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_7d0 = uStack_d29;
      uStack_7cc = uStack_d25;
      uStack_7c8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x1d:
code_r0x00014045eee4:
    if (!SBORROW8(0,lStack_7f8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a9b1;
      goto code_r0x000140460ada;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045ef0a;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_7f8 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_7f0 = uStack_d29;
      uStack_7ec = uStack_d25;
      uStack_7e8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x1e:
code_r0x00014045ebfe:
    if (!SBORROW8(0,lStack_818)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a9bb;
      goto code_r0x000140460a7d;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045ec24;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_818 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_810 = uStack_d29;
      uStack_80c = uStack_d25;
      uStack_808 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x1f:
code_r0x00014045e7ca:
    if (!SBORROW8(0,lStack_838)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puStack_50[2] = &UNK_142f5a9c3;
      puStack_50[3] = 0x11;
      goto code_r0x000140460bee;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e7f0;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_838 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_830 = uStack_d29;
      uStack_82c = uStack_d25;
      uStack_828 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x20:
code_r0x00014045ec68:
    if (!SBORROW8(0,lStack_858)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a9d4;
      goto code_r0x000140460b82;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045ec8e;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_858 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_850 = uStack_d29;
      uStack_84c = uStack_d25;
      uStack_848 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x21:
code_r0x00014045e268:
    if (!SBORROW8(0,lStack_878)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a9dd;
      goto code_r0x000140460ada;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e28e;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_878 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_870 = uStack_d29;
      uStack_86c = uStack_d25;
      uStack_868 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x22:
code_r0x00014045e12a:
    if (!SBORROW8(0,lStack_898)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a9e7;
      goto code_r0x000140460ba2;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e150;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_898 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_890 = uStack_d29;
      uStack_88c = uStack_d25;
      uStack_888 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x23:
code_r0x00014045dfec:
    if (!SBORROW8(0,lStack_8b8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a9ee;
      goto code_r0x000140460a7d;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e012;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_8b8 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_8b0 = uStack_d29;
      uStack_8ac = uStack_d25;
      uStack_8a8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x24:
code_r0x00014045e056:
    if (!SBORROW8(0,uStack_8d8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a9f6;
      goto code_r0x000140460ba2;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e07c;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      uStack_8d8 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_8d0 = uStack_d29;
      uStack_8cc = uStack_d25;
      uStack_8c8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x25:
code_r0x00014045df82:
    if (!SBORROW8(0,lStack_8f8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5a9fd;
      goto code_r0x000140460be2;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045dfa8;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_8f8 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_8f0 = uStack_d29;
      uStack_8ec = uStack_d25;
      uStack_8e8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x26:
code_r0x00014045ef4e:
    if (!SBORROW8(0,lStack_918)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5aa02;
      goto code_r0x000140460a37;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045ef74;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_918 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_910 = uStack_d29;
      uStack_90c = uStack_d25;
      uStack_908 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x27:
code_r0x00014045ed3c:
    if (!SBORROW8(0,lStack_938)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar20 = &UNK_142f5aa0d;
      goto code_r0x000140460a37;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045ed62;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      lStack_938 = CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_930 = uStack_d29;
      uStack_92c = uStack_d25;
      uStack_928 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x28:
code_r0x00014045e3a6:
    if (!SBORROW8(0,(longlong)plStack_958)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puStack_50[2] = &UNK_142f5aa3d;
      puStack_50[3] = 0x13;
      goto code_r0x000140460bee;
    }
    param_2[2] = 0;
    pbStack_e70 = (byte *)0x14045e3cc;
    pdb_140456260(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      stack0xfffffffffffff2cf = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      plStack_958 = (longlong *)CONCAT44(uStack_d2d,stack0xfffffffffffff2cf);
      uStack_950 = uStack_d29;
      uStack_94c = uStack_d25;
      uStack_948 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar22 = pbVar1;
      goto code_r0x00014045de10;
    }
    break;
  case 0x29:
    goto code_r0x00014045e89e;
  default:
code_r0x00014046f096:
    pcVar6 = (code *)swi(3);
    plVar15 = (longlong *)(*pcVar6)();
    return plVar15;
  case 0x36:
  case 0x38:
code_r0x00014046f09f:
    pcVar6 = (code *)swi(3);
    plVar15 = (longlong *)(*pcVar6)();
    return plVar15;
  case 0x3b:
code_r0x00014046f109:
    pcVar6 = (code *)swi(3);
    plVar15 = (longlong *)(*pcVar6)();
    return plVar15;
  case 0x3d:
code_r0x00014046f119:
    lVar5 = lStack_e18;
    uStack_e28 = uStack_e20;
    *(undefined8 *)((ulonglong)&uStack_e28 & 0xffffffff) = 0xfffffffffffffffe;
    if ((ulonglong)UNK_142f5b36c < 0x15) {
                    /* WARNING: Could not recover jumptable at 0x00014046f13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar15 = (longlong *)
                (*(code *)(&UNK_142f5b414 + *(int *)(&UNK_142f5b414 + (ulonglong)UNK_142f5b36c * 4))
                )();
      return plVar15;
    }
    lStack_e18 = (longlong)pbStack_e10;
    uStack_e20 = lVar5;
    lStack_e30 = 0xfffffffffffffffe;
    lStack_e38 = _UNK_142f5b37c;
    plStack_e48 = (longlong *)&UNK_142f5b374;
    lStack_e50 = _UNK_142f5b384;
    plStack_e40 = (longlong *)0x0;
    pbStack_e10 = pbVar1;
    while (lVar5 = lStack_e38, plStack_e40 != (longlong *)lStack_e50) {
      pbStack_e58 = (byte *)((longlong)plStack_e40 * 0x40 + lStack_e38);
      plStack_e40 = (longlong *)((longlong)plStack_e40 + 1);
      pbStack_e80 = &UNK_1404a2e55;
      pdb_1404c27c0();
      pbStack_e80 = &UNK_1404a2e63;
      pdb_1404c27c0(pbStack_e58 + 0x20);
    }
    if (*plStack_e48 != 0) {
      pbStack_e10 = (byte *)lStack_e18;
      plStack_e40 = (longlong *)&UNK_140f3c37e;
      uVar18 = GetProcessHeap(lStack_e38,*plStack_e48 << 6);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar15 = (longlong *)HeapFree(uVar18,0,lVar5);
      return plVar15;
    }
    return plStack_e48;
  case 0x3e:
code_r0x00014046f0b7:
    return plVar15;
  case 0x3f:
    goto code_r0x000142d855c4;
  case 0x40:
code_r0x000142d855d0:
    goto code_r0x000142d855c4;
  case 0x41:
code_r0x000142d85591:
    pbStack_e70 = &UNK_142d85597;
    plVar15 = (longlong *)pdb_142d86ed0();
    return plVar15;
  case 0x42:
code_r0x000142d855ab:
    lStack_df0 = CONCAT44(lStack_df0._4_4_,0xfffffffe);
    puVar20 = &UNK_142f5b384;
    pbStack_e00 = pbVar22;
    goto code_r0x000142d855ba;
  case 0x43:
    goto code_r0x000142d85565;
  case 0x44:
code_r0x000142d855dd:
    *(char *)((longlong)plVar15 + -0x73) = *(char *)((longlong)plVar15 + -0x73) + 'l';
    pbVar32 = param_3 + -0x77;
    *pbVar32 = *pbVar32 >> 1 | *pbVar32 << 7;
    return plVar15;
  case 0x45:
code_r0x000142d855f8:
    ppbVar31 = &pbStack_e70;
    pbStack_e70 = pbVar32;
    pbStack_e58 = pbVar22;
  case 0x49:
code_r0x000142d85606:
    lVar5 = *(longlong *)(pbVar22 + 0x38);
    if (pbVar22[0x47] == 0) {
      return plVar15;
    }
    *(undefined **)((longlong)ppbVar31 + -0x28) = &UNK_142d85623;
    plVar15 = (longlong *)pdb_1404074d0(lVar5);
    return plVar15;
  case 0x46:
code_r0x000142d855b7:
    puVar20 = (undefined *)0x42f5b384;
code_r0x000142d855ba:
    uStack_df8 = CONCAT17(1,(undefined7)uStack_df8);
    pbStack_e70 = &UNK_142d855c3;
    plVar15 = (longlong *)pdb_140de3270(puVar20);
code_r0x000142d855c4:
    lStack_e08 = *(longlong *)(pbStack_e00 + 0x10);
    lStack_e18 = *(longlong *)pbStack_e00;
    pbStack_e10 = *(byte **)(pbStack_e00 + 8);
    uStack_df8 = uStack_df8 & 0xffffffffffffff;
    pbStack_e70 = &UNK_142d855ea;
    plVar15 = (longlong *)pdb_142db9040(&lStack_e18,plVar15,pbVar22);
code_r0x000142d855eb:
    return plVar15;
  case 0x47:
code_r0x000142d85615:
    return plVar15;
  case 0x48:
code_r0x000142d8557e:
    *(char *)((longlong)plVar15 + -0x73) = *(char *)((longlong)plVar15 + -0x73) + 'l';
    ppbVar30 = &pbStack_e70;
    pbVar33 = &UNK_142f5b36c;
    puStack_e78 = &UNK_142d8558c;
    pbStack_e70 = abStack_e68;
    uVar18 = pdb_142d84ef0();
    goto code_r0x000142d8558c;
  case 0x4a:
code_r0x000142d85559:
    pbStack_e70 = &UNK_142d8555e;
    pdb_140404540();
    if ((int)plStack_e48 == 3) {
      return plStack_e40;
    }
code_r0x000142d85565:
    plVar15 = &lStack_e08;
code_r0x000142d8552d:
    pbStack_e70 = &UNK_142d85538;
    uVar18 = pdb_140ddd040(plVar15,&UNK_142f5b330,param_2);
code_r0x000142d8558c:
    *(undefined **)((longlong)ppbVar30 + -8) = &UNK_142d85597;
    plVar15 = (longlong *)pdb_142d86ed0(uVar18,pbVar33);
code_r0x000142d8559e:
    return plVar15;
  case 0x4b:
code_r0x000142d85571:
    plVar15 = (longlong *)&UNK_142f5b36c;
    goto code_r0x000142d8552d;
  case 0x4c:
    goto code_r0x000142d855eb;
  case 0x4d:
code_r0x000142d8554c:
    *(byte *)((longlong)plVar15 + -0x77) = *(byte *)((longlong)plVar15 + -0x77) & 0x6c;
    return plVar15;
  case 0x4e:
    goto code_r0x000142d8559e;
  case 0x4f:
  case 0x50:
code_r0x000142d85547:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x51:
code_r0x000142d8562c:
    pcVar6 = (code *)swi(3);
    plVar15 = (longlong *)(*pcVar6)();
    return plVar15;
  case 0x52:
code_r0x000142d85631:
                    /* WARNING: Could not emulate address calculation at 0x000142d8563a */
                    /* WARNING: Treating indirect jump as call */
    plVar15 = (longlong *)
              (*(code *)(&UNK_142f5b468 + *(int *)(&UNK_142f5b468 + (longlong)plVar15 * 4)))();
    return plVar15;
  case 0x53:
code_r0x000142d85622:
    return plVar15;
  case 0x54:
code_r0x000142d85627:
    uStack_e28 = uStack_e28 & 0xffffffff30ffffff;
    pcVar6 = (code *)swi(3);
    plVar15 = (longlong *)(*pcVar6)();
    return plVar15;
  case 0x55:
code_r0x000140470651:
    pbVar24 = auStack_e90;
    pbVar32 = pbVar22 + 0x80;
    puVar34 = *(undefined8 **)(pbVar22 + 0x90);
    goto code_r0x000140470660;
  case 0x56:
code_r0x0001404706a8:
    puStack_e78 = (undefined *)0x8000000000000000;
    ppbVar27 = &pbStack_e80;
    pbStack_e80 = pbVar2;
    pbStack_e70 = pbVar1;
  case 0x5a:
code_r0x0001404706ae:
    *(byte **)((longlong)ppbVar27 + -8) = pbVar33;
    *(undefined8 **)((longlong)ppbVar27 + -0x10) = param_2;
    *(undefined **)((longlong)ppbVar27 + -0x18) = &UNK_142f5b330;
    pbVar28 = (byte *)((longlong)ppbVar27 + -0x40);
    pbVar32 = pbVar22 + 0x80;
    pbVar22 = *(byte **)(pbVar22 + 0xa8);
    bVar35 = pbVar22 == (byte *)0x0;
code_r0x0001404706c3:
    if (!bVar35) {
      pbVar32 = *(byte **)(pbVar32 + 0x20);
      *(undefined **)(pbVar28 + -8) = &UNK_1404706d8;
      pub_1406abac0(pbVar32,(longlong)pbVar22 << 5,8);
      plVar15 = extraout_RAX_40;
    }
    return plVar15;
  case 0x57:
code_r0x00014047066a:
    pbVar22[0x142f5b33f] = pbVar22[0x142f5b33f] & (byte)((ulonglong)pbVar22 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x58:
code_r0x00014047066f:
    *(char *)((longlong)plVar15 + -0x77) = *(char *)((longlong)plVar15 + -0x77) + 'l';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x59:
code_r0x000140470657:
    puVar34 = (undefined8 *)((longlong)param_2 + 1);
    *(char *)param_2 = (char)plVar15;
    *(char *)plVar15 = (char)*plVar15;
    pcVar3 = (char *)((longlong)plVar15 + -0x75);
    cVar4 = *pcVar3;
    *pcVar3 = *pcVar3 + 'l';
    pbVar25 = abStack_e68;
    if (SCARRY1(cVar4,'l') == *pcVar3 < '\0') goto code_r0x000140470670;
code_r0x000140470660:
    puVar23 = *(undefined8 **)(pbVar32 + 0x18);
    pbVar33 = *(byte **)(pbVar32 + 0x20);
    pbVar25 = pbVar24;
    if (puVar34 != puVar23) {
code_r0x000140470670:
      do {
        puVar20 = (undefined *)((longlong)puVar23 << 5);
code_r0x000140470677:
        *(undefined **)(pbVar25 + -8) = &UNK_14047067f;
        plVar15 = (longlong *)pdb_1404c27c0(pbVar33 + (longlong)puVar20);
        puVar23 = (undefined8 *)((longlong)puVar23 + 1);
        pbVar26 = pbVar25;
code_r0x000140470682:
        pbVar25 = pbVar26;
      } while (puVar23 != puVar34);
    }
    return plVar15;
  case 0x5b:
code_r0x0001404706c1:
    bVar35 = (int)pbVar22 == 0;
    goto code_r0x0001404706c3;
  case 0x5c:
code_r0x000140470675:
    puVar20 = &UNK_142f5b36b;
    puVar34 = param_2;
    if (!bVar35) goto code_r0x000140470677;
    uRam0000000104464e82 = uRam0000000104464e82 & (uint)plVar15;
    goto code_r0x000140470682;
  case 0x5d:
code_r0x0001404707f1:
    pbStack_e70 = &UNK_1404707f6;
    plVar15 = (longlong *)pdb_142db9150();
    goto code_r0x0001404708e3;
  case 0x5e:
code_r0x00014047088a:
    pbVar32 = (byte *)((longlong)plVar15 + -0x73);
    *pbVar32 = *pbVar32 >> 5 | *pbVar32 << 3;
    plVar15 = (longlong *)
              CONCAT62((int6)((ulonglong)plVar15 >> 0x10),
                       (short)(char)plVar15 * (short)(char)plVar15);
  case 0x62:
code_r0x000140470890:
    pbVar29 = (undefined1 *)0x90029488;
    goto code_r0x0001404708e3;
  case 0x5f:
code_r0x000140470810:
    uVar14 = (ulonglong)plVar15 & 0xffff;
    goto code_r0x000140470824;
  case 0x60:
code_r0x000140470818:
    uStack_e20 = CONCAT71((int7)((ulonglong)plVar15 >> 8),(char)plVar15 + 'H');
    if (-1 < (int)uStack_e20) {
      uVar14 = uStack_e20 & 0xffffffff;
      goto code_r0x000140470824;
    }
    uStack_e28 = CONCAT71(uStack_e28._1_7_,2);
    uStack_df8 = CONCAT17(1,(undefined7)uStack_df8);
    pbStack_e70 = &UNK_1404708e2;
    pbStack_e00 = pbVar22;
    plVar15 = (longlong *)pdb_142db9150(&uStack_e28,(longlong)&uStack_df8 + 6,&UNK_142f5a698);
    pbVar29 = abStack_e68;
    goto code_r0x0001404708e3;
  case 0x61:
code_r0x0001404707fa:
    *(char *)plVar15 = (char)*plVar15 + (char)plVar15;
    uVar14 = (ulonglong)*(ushort *)(pbVar22 + 2);
code_r0x000140470824:
    pbStack_e70 = &UNK_14047082c;
    plVar15 = (longlong *)pdb_1404c27c0(pbVar22);
    pbVar33[0] = 1;
    pbVar33[1] = 0;
    pbVar33[2] = 0;
    pbVar33[3] = 0;
    pbVar33[4] = 0;
    pbVar33[5] = 0;
    pbVar33[6] = 0;
    pbVar33[7] = 0;
    *(ulonglong *)(pbVar33 + 8) = uVar14;
    return plVar15;
  case 99:
code_r0x0001404708a3:
    uStack_df8 = CONCAT17(1,(undefined7)uStack_df8);
    pbStack_e70 = &UNK_1404708bb;
    plVar15 = (longlong *)pdb_142db9150(&uStack_e28,(longlong)&uStack_df8 + 6,&UNK_142f5a698);
    pbVar29 = abStack_e68;
code_r0x0001404708e3:
    pbVar32 = pbStack_e00;
    *(undefined **)(pbVar29 + -8) = &UNK_1404708ef;
    plVar17 = (longlong *)pdb_1404c27c0(pbVar32);
    *(longlong **)(pbVar33 + 8) = plVar15;
    pbVar33[0] = 2;
    pbVar33[1] = 0;
    pbVar33[2] = 0;
    pbVar33[3] = 0;
    pbVar33[4] = 0;
    pbVar33[5] = 0;
    pbVar33[6] = 0;
    pbVar33[7] = 0;
    return plVar17;
  case 100:
code_r0x000140470853:
    pbVar32 = param_3 + -0x73;
    *pbVar32 = *pbVar32 >> 5 | *pbVar32 << 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
  uStack_d21 = (undefined1)uStack_420;
  uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
  uStack_d30 = (undefined3)CONCAT61(uStack_42e,uStack_42f);
  stack0xfffffffffffff2cf = CONCAT31(uStack_d30,uStack_430);
  uStack_d2d = (undefined4)((uint6)uStack_42e >> 0x10);
  uStack_d29 = CONCAT31((int3)(CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428)) >> 8),uStack_428
                       );
  puStack_50[9] = CONCAT62(uStack_3f6,uStack_3f8);
  puStack_50[7] = CONCAT62(uStack_406,uStack_408);
  puStack_50[8] = CONCAT62(uStack_3fe,uStack_400);
  puStack_50[5] = CONCAT62(uStack_416,uStack_418);
  puStack_50[6] = CONCAT62(uStack_40e,uStack_410);
  puStack_50[3] = CONCAT44(uStack_d25,uStack_d29);
  puStack_50[4] = CONCAT71((undefined7)uStack_d20,uStack_d21);
  *(ulonglong *)((longlong)puStack_50 + 9) = CONCAT17(uStack_430,CONCAT61(uStack_436,bStack_437));
  *(ulonglong *)((longlong)puStack_50 + 0x11) = CONCAT17(uStack_428,CONCAT43(uStack_d2d,uStack_d30))
  ;
  *(char *)(puStack_50 + 1) = cStack_438;
  *puStack_50 = 0x8000000000000000;
joined_r0x000140460c02:
  if ((!SBORROW8(0,(longlong)plStack_958)) && (plStack_958 != (longlong *)0x0)) {
    pbStack_e70 = (byte *)0x1404600ea;
    pub_1406abac0((byte *)CONCAT44(uStack_94c,uStack_950),(longlong)plStack_958 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_938)) && (lStack_938 != 0)) {
    pbStack_e70 = (byte *)0x140460115;
    pub_1406abac0((byte *)CONCAT44(uStack_92c,uStack_930),lStack_938 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_918)) && (lStack_918 != 0)) {
    pbStack_e70 = (byte *)0x140460140;
    pub_1406abac0((byte *)CONCAT44(uStack_90c,uStack_910),lStack_918 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_8f8)) && (lStack_8f8 != 0)) {
    pbStack_e70 = (byte *)0x14046016b;
    pub_1406abac0((byte *)CONCAT44(uStack_8ec,uStack_8f0),lStack_8f8 * 0xc,4);
  }
  if ((!SBORROW8(0,uStack_8d8)) && (uStack_8d8 != 0)) {
    pbStack_e70 = (byte *)0x140460196;
    pub_1406abac0((byte *)CONCAT44(uStack_8cc,uStack_8d0),uStack_8d8 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_8b8)) && (lStack_8b8 != 0)) {
    pbStack_e70 = (byte *)0x1404601c1;
    pub_1406abac0((byte *)CONCAT44(uStack_8ac,uStack_8b0),lStack_8b8 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_898)) && (lStack_898 != 0)) {
    pbStack_e70 = (byte *)0x1404601ec;
    pub_1406abac0((byte *)CONCAT44(uStack_88c,uStack_890),lStack_898 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_878)) && (lStack_878 != 0)) {
    pbStack_e70 = (byte *)0x140460217;
    pub_1406abac0((byte *)CONCAT44(uStack_86c,uStack_870),lStack_878 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_858)) && (lStack_858 != 0)) {
    pbStack_e70 = (byte *)0x140460242;
    pub_1406abac0((byte *)CONCAT44(uStack_84c,uStack_850),lStack_858 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_838)) && (lStack_838 != 0)) {
    pbStack_e70 = (byte *)0x14046026d;
    pub_1406abac0((byte *)CONCAT44(uStack_82c,uStack_830),lStack_838 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_818)) && (lStack_818 != 0)) {
    pbStack_e70 = (byte *)0x140460298;
    pub_1406abac0((byte *)CONCAT44(uStack_80c,uStack_810),lStack_818 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_7f8)) && (lStack_7f8 != 0)) {
    pbStack_e70 = (byte *)0x1404602c3;
    pub_1406abac0((byte *)CONCAT44(uStack_7ec,uStack_7f0),lStack_7f8 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_7d8)) && (lStack_7d8 != 0)) {
    pbStack_e70 = (byte *)0x1404602ee;
    pub_1406abac0((byte *)CONCAT44(uStack_7cc,uStack_7d0),lStack_7d8 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_7b8)) && (lStack_7b8 != 0)) {
    pbStack_e70 = (byte *)0x140460319;
    pub_1406abac0((byte *)CONCAT44(uStack_7ac,uStack_7b0),lStack_7b8 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_798)) && (lStack_798 != 0)) {
    pbStack_e70 = (byte *)0x140460344;
    pub_1406abac0((byte *)CONCAT44(uStack_78c,uStack_790),lStack_798 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_778)) && (lStack_778 != 0)) {
    pbStack_e70 = (byte *)0x14046036f;
    pub_1406abac0((byte *)CONCAT44(uStack_76c,uStack_770),lStack_778 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_758)) && (lStack_758 != 0)) {
    pbStack_e70 = (byte *)0x14046039a;
    pub_1406abac0((byte *)CONCAT44(uStack_74c,uStack_750),lStack_758 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_738)) && (lStack_738 != 0)) {
    pbStack_e70 = (byte *)0x1404603c5;
    pub_1406abac0((byte *)CONCAT44(uStack_72c,uStack_730),lStack_738 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_718)) && (lStack_718 != 0)) {
    pbStack_e70 = (byte *)0x1404603f0;
    pub_1406abac0((byte *)CONCAT44(uStack_70c,uStack_710),lStack_718 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_6f8)) && (lStack_6f8 != 0)) {
    pbStack_e70 = (byte *)0x14046041b;
    pub_1406abac0((byte *)CONCAT44(uStack_6ec,uStack_6f0),lStack_6f8 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_6d8)) && (lStack_6d8 != 0)) {
    pbStack_e70 = (byte *)0x140460446;
    pub_1406abac0((byte *)CONCAT44(uStack_6cc,uStack_6d0),lStack_6d8 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_6b8)) && (lStack_6b8 != 0)) {
    pbStack_e70 = (byte *)0x140460471;
    pub_1406abac0((byte *)CONCAT44(uStack_6ac,uStack_6b0),lStack_6b8 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_698)) && (lStack_698 != 0)) {
    pbStack_e70 = (byte *)0x14046049c;
    pub_1406abac0((byte *)CONCAT44(uStack_68c,uStack_690),lStack_698 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_678)) && (lStack_678 != 0)) {
    pbStack_e70 = (byte *)0x1404604c7;
    pub_1406abac0((byte *)CONCAT44(uStack_66c,uStack_670),lStack_678 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_658)) && (lStack_658 != 0)) {
    pbStack_e70 = (byte *)0x1404604f2;
    pub_1406abac0((byte *)CONCAT44(uStack_64c,uStack_650),lStack_658 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_638)) && (lStack_638 != 0)) {
    pbStack_e70 = (byte *)0x14046051d;
    pub_1406abac0((byte *)CONCAT44(uStack_62c,uStack_630),lStack_638 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_618)) && (lStack_618 != 0)) {
    pbStack_e70 = (byte *)0x140460548;
    pub_1406abac0((byte *)CONCAT44(uStack_60c,uStack_610),lStack_618 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_5f8)) && (lStack_5f8 != 0)) {
    pbStack_e70 = (byte *)0x140460573;
    pub_1406abac0((byte *)CONCAT44(uStack_5ec,uStack_5f0),lStack_5f8 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_5d8)) && (lStack_5d8 != 0)) {
    pbStack_e70 = (byte *)0x14046059e;
    pub_1406abac0((byte *)CONCAT44(uStack_5cc,uStack_5d0),lStack_5d8 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_5b8)) && (lStack_5b8 != 0)) {
    pbStack_e70 = (byte *)0x1404605c9;
    pub_1406abac0((byte *)CONCAT44(uStack_5ac,uStack_5b0),lStack_5b8 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_598)) && (lStack_598 != 0)) {
    pbStack_e70 = (byte *)0x1404605f4;
    pub_1406abac0((byte *)CONCAT44(uStack_58c,uStack_590),lStack_598 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_578)) && (lStack_578 != 0)) {
    pbStack_e70 = (byte *)0x14046061f;
    pub_1406abac0((byte *)CONCAT44(uStack_56c,uStack_570),lStack_578 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_558)) && (lStack_558 != 0)) {
    pbStack_e70 = (byte *)0x14046064a;
    pub_1406abac0((byte *)CONCAT44(uStack_54c,uStack_550),lStack_558 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_538)) && (lStack_538 != 0)) {
    pbStack_e70 = (byte *)0x140460675;
    pub_1406abac0((byte *)CONCAT44(uStack_52c,uStack_530),lStack_538 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_518)) && (lStack_518 != 0)) {
    pbStack_e70 = (byte *)0x1404606a0;
    pub_1406abac0((byte *)CONCAT44(uStack_50c,uStack_510),lStack_518 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_4f8)) && (lStack_4f8 != 0)) {
    pbStack_e70 = (byte *)0x1404606cb;
    pub_1406abac0((byte *)CONCAT44(uStack_4ec,uStack_4f0),lStack_4f8 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_4d8)) && (lStack_4d8 != 0)) {
    pbStack_e70 = (byte *)0x1404606f6;
    pub_1406abac0((byte *)CONCAT44(uStack_4cc,uStack_4d0),lStack_4d8 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_4b8)) && (lStack_4b8 != 0)) {
    pbStack_e70 = (byte *)0x140460721;
    pub_1406abac0((byte *)CONCAT44(uStack_4ac,uStack_4b0),lStack_4b8 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_498)) && (lStack_498 != 0)) {
    pbStack_e70 = (byte *)0x14046074c;
    pub_1406abac0((byte *)CONCAT44(uStack_48c,uStack_490),lStack_498 * 0xc,4);
  }
  if ((!SBORROW8(0,lStack_478)) && (lStack_478 != 0)) {
    pbStack_e70 = (byte *)0x140460777;
    pub_1406abac0((byte *)CONCAT44(uStack_46c,uStack_470),lStack_478 * 0xc,4);
  }
  if (SBORROW8(0,(longlong)plStack_458)) {
    return plStack_458;
  }
  if (plStack_458 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  pbStack_970 = (byte *)CONCAT44(uStack_44c,uStack_450);
  plStack_978 = plStack_458;
  goto LAB_14046078f;
code_r0x00014045e89e:
  param_2[2] = 0;
  pbVar22 = pbVar1;
  goto code_r0x00014045de10;
}

