// VA 0x141b57430, PDB extent 16713 bytes
// country_core::game_key_bindings::_::impl$0::deserialize::impl$2::visit_map<ref_mut$<serde::private::de::content::MapRefDeserializer<enum2$<ron::error::Error> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000141b69c5a) overlaps instruction at (ram,0x000141b69c59)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000141b69d7d */
/* Matched PDB project procedure:
   country_core::game_key_bindings::_::impl$0::deserialize::impl$2::visit_map<ref_mut$<serde::private::de::content::MapRefDeserializer<enum2$<ron::error::Error>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 16713 */

byte * pdb_141b57430(undefined8 *param_1,byte *param_2,byte *param_3,undefined *param_4)

{
  undefined4 uVar1;
  byte *pbVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte bVar14;
  char cVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  byte *pbVar18;
  byte **ppbVar19;
  byte *pbVar20;
  byte *extraout_RAX;
  byte *extraout_RAX_00;
  byte *extraout_RAX_01;
  byte *extraout_RAX_02;
  byte *extraout_RAX_03;
  byte *extraout_RAX_04;
  byte *extraout_RAX_05;
  byte *extraout_RAX_06;
  byte *extraout_RAX_07;
  byte *extraout_RAX_08;
  byte *extraout_RAX_09;
  byte *extraout_RAX_10;
  byte *extraout_RAX_11;
  byte *extraout_RAX_12;
  byte *extraout_RAX_13;
  byte *extraout_RAX_14;
  byte *extraout_RAX_15;
  byte *extraout_RAX_16;
  byte *extraout_RAX_17;
  byte *extraout_RAX_18;
  byte *extraout_RAX_19;
  byte *extraout_RAX_20;
  byte *extraout_RAX_21;
  byte *extraout_RAX_22;
  byte *extraout_RAX_23;
  byte *extraout_RAX_24;
  byte *extraout_RAX_25;
  byte *extraout_RAX_26;
  byte *extraout_RAX_27;
  byte *extraout_RAX_28;
  byte *extraout_RAX_29;
  byte *extraout_RAX_30;
  byte *extraout_RAX_31;
  byte *extraout_RAX_32;
  byte *extraout_RAX_33;
  byte *extraout_RAX_34;
  byte *extraout_RAX_35;
  byte *extraout_RAX_36;
  byte *extraout_RAX_37;
  byte *extraout_RAX_38;
  byte *extraout_RAX_39;
  byte *pbVar21;
  uint *puVar22;
  byte *pbVar23;
  byte **ppbVar24;
  longlong lVar25;
  byte *pbVar26;
  longlong lVar27;
  undefined *puVar28;
  undefined8 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  ulonglong uVar32;
  undefined1 *puVar33;
  ulonglong uVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  undefined8 uVar37;
  longlong lVar38;
  byte *pbVar39;
  undefined4 *puVar40;
  undefined8 *puVar41;
  bool bVar42;
  byte *in_XMM0_Qa;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined1 auStack_ff8 [32];
  byte abStack_fd8 [96];
  byte *apbStack_f78 [4];
  undefined *puStack_f58;
  undefined1 auStack_f40 [112];
  byte *apbStack_ed0 [2];
  undefined *puStack_ec0;
  byte *pbStack_eb0;
  byte *pbStack_ea8;
  undefined *puStack_ea0;
  byte *pbStack_e98;
  byte *pbStack_e90;
  byte *pbStack_e88;
  undefined8 uStack_e80;
  byte *pbStack_e78;
  byte *pbStack_e70;
  undefined1 auStack_e68 [8];
  undefined1 auStack_e60 [24];
  byte *pbStack_e48;
  byte *pbStack_e40;
  byte *pbStack_e38;
  undefined8 uStack_e30;
  byte *pbStack_e28;
  byte *pbStack_e20;
  byte *pbStack_e18;
  byte *pbStack_e10;
  byte *pbStack_e08;
  byte *pbStack_e00;
  byte *pbStack_df8;
  byte *pbStack_df0;
  byte *pbStack_de8;
  byte *pbStack_de0;
  byte *pbStack_dd8;
  byte *pbStack_dd0;
  byte *pbStack_dc8;
  byte *pbStack_dc0;
  byte *pbStack_db8;
  byte *pbStack_db0;
  byte *pbStack_da8;
  byte *pbStack_da0;
  byte *pbStack_d98;
  byte *pbStack_d90;
  byte *pbStack_d88;
  byte *pbStack_d80;
  byte *pbStack_d78;
  byte *pbStack_d70;
  byte *pbStack_d68;
  byte *pbStack_d60;
  byte *pbStack_d58;
  byte *pbStack_d50;
  byte *pbStack_d48;
  byte *pbStack_d40;
  undefined1 auStack_d38 [7];
  undefined8 uStack_d31;
  undefined4 uStack_d29;
  undefined4 uStack_d25;
  undefined1 uStack_d21;
  undefined8 uStack_d20;
  byte *pbStack_d18;
  byte *pbStack_d08;
  byte *pbStack_d00;
  byte *pbStack_cf0;
  byte *pbStack_ce8;
  byte *pbStack_cd8;
  byte *pbStack_cd0;
  byte *pbStack_cc0;
  byte *pbStack_cb8;
  byte *pbStack_ca8;
  byte *pbStack_ca0;
  byte *pbStack_c90;
  byte *pbStack_c88;
  byte *pbStack_c78;
  byte *pbStack_c70;
  byte *pbStack_c60;
  byte *pbStack_c58;
  byte *pbStack_c48;
  byte *pbStack_c40;
  byte *pbStack_c30;
  byte *pbStack_c28;
  byte *pbStack_c18;
  byte *pbStack_c10;
  byte *pbStack_c00;
  byte *pbStack_bf8;
  byte *pbStack_be8;
  byte *pbStack_be0;
  byte *pbStack_bd0;
  byte *pbStack_bc8;
  byte *pbStack_bb8;
  byte *pbStack_bb0;
  byte *pbStack_ba0;
  byte *pbStack_b98;
  byte *pbStack_b88;
  byte *pbStack_b80;
  byte *pbStack_b70;
  byte *pbStack_b68;
  byte *pbStack_b58;
  byte *pbStack_b50;
  byte *pbStack_b40;
  byte *pbStack_b38;
  byte *pbStack_b28;
  byte *pbStack_b20;
  byte *pbStack_b10;
  byte *pbStack_b08;
  byte *pbStack_af8;
  byte *pbStack_af0;
  byte *pbStack_ae0;
  byte *pbStack_ad8;
  byte *pbStack_ac8;
  byte *pbStack_ac0;
  byte *pbStack_ab0;
  byte *pbStack_aa8;
  byte *pbStack_a98;
  byte *pbStack_a90;
  byte *pbStack_a80;
  byte *pbStack_a78;
  byte *pbStack_a68;
  byte *pbStack_a60;
  byte *pbStack_a50;
  byte *pbStack_a48;
  byte *pbStack_a38;
  byte *pbStack_a30;
  byte *pbStack_a20;
  byte *pbStack_a18;
  byte *pbStack_a08;
  byte *pbStack_a00;
  byte *pbStack_9f0;
  byte *pbStack_9e8;
  byte *pbStack_9d8;
  byte *pbStack_9d0;
  byte *pbStack_9c0;
  byte *pbStack_9b8;
  byte *pbStack_9a8;
  byte *pbStack_9a0;
  byte *pbStack_990;
  byte *pbStack_988;
  byte *pbStack_978;
  byte *pbStack_970;
  byte *pbStack_958;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  undefined8 uStack_948;
  byte *pbStack_938;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined8 uStack_928;
  byte *pbStack_918;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined8 uStack_908;
  byte *pbStack_8f8;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined8 uStack_8e8;
  byte *pbStack_8d8;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined8 uStack_8c8;
  byte *pbStack_8b8;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined8 uStack_8a8;
  byte *pbStack_898;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined8 uStack_888;
  byte *pbStack_878;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined8 uStack_868;
  byte *pbStack_858;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined8 uStack_848;
  byte *pbStack_838;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined8 uStack_828;
  byte *pbStack_818;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined8 uStack_808;
  byte *pbStack_7f8;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined8 uStack_7e8;
  byte *pbStack_7d8;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined8 uStack_7c8;
  byte *pbStack_7b8;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined8 uStack_7a8;
  byte *pbStack_798;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined8 uStack_788;
  byte *pbStack_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined8 uStack_768;
  byte *pbStack_758;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined8 uStack_748;
  byte *pbStack_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined8 uStack_728;
  byte *pbStack_718;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined8 uStack_708;
  byte *pbStack_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined8 uStack_6e8;
  byte *pbStack_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined8 uStack_6c8;
  byte *pbStack_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined8 uStack_6a8;
  byte *pbStack_698;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined8 uStack_688;
  byte *pbStack_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined8 uStack_668;
  byte *pbStack_658;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined8 uStack_648;
  byte *pbStack_638;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined8 uStack_628;
  byte *pbStack_618;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined8 uStack_608;
  byte *pbStack_5f8;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined8 uStack_5e8;
  byte *pbStack_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined8 uStack_5c8;
  byte *pbStack_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined8 uStack_5a8;
  byte *pbStack_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined8 uStack_588;
  byte *pbStack_578;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined8 uStack_568;
  byte *pbStack_558;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined8 uStack_548;
  byte *pbStack_538;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined8 uStack_528;
  byte *pbStack_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined8 uStack_508;
  byte *pbStack_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined8 uStack_4e8;
  byte *pbStack_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 uStack_4c8;
  byte *pbStack_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined8 uStack_4a8;
  byte *pbStack_498;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined8 uStack_488;
  byte *pbStack_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 uStack_468;
  byte *pbStack_458;
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
  byte *pbStack_3f0;
  byte *pbStack_3e8;
  byte *pbStack_3e0;
  byte *pbStack_3d8;
  byte *pbStack_3d0;
  byte *pbStack_3c8;
  byte *pbStack_3c0;
  byte *pbStack_3b8;
  byte *pbStack_3b0;
  byte *pbStack_3a8;
  byte *pbStack_3a0;
  byte *pbStack_398;
  byte *pbStack_390;
  byte *pbStack_388;
  byte *pbStack_380;
  byte *pbStack_378;
  byte *pbStack_370;
  byte *pbStack_368;
  byte *pbStack_360;
  byte *pbStack_358;
  byte *pbStack_350;
  byte *pbStack_348;
  byte *pbStack_340;
  byte *pbStack_338;
  byte *pbStack_330;
  byte *pbStack_328;
  byte *pbStack_320;
  byte *pbStack_318;
  byte *pbStack_310;
  byte *pbStack_308;
  byte *pbStack_300;
  byte *pbStack_2f8;
  byte *pbStack_2f0;
  byte *pbStack_2e8;
  byte *pbStack_2e0;
  byte *pbStack_2d8;
  byte *pbStack_2d0;
  byte *pbStack_2c8;
  byte *pbStack_2c0;
  byte *pbStack_2b8;
  byte *pbStack_2b0;
  byte *pbStack_2a8;
  byte *pbStack_2a0;
  byte *pbStack_298;
  byte *pbStack_290;
  byte *pbStack_288;
  byte *pbStack_280;
  byte *pbStack_278;
  byte *pbStack_270;
  byte *pbStack_268;
  byte *pbStack_260;
  byte *pbStack_258;
  byte *pbStack_250;
  byte *pbStack_248;
  byte *pbStack_240;
  byte *pbStack_238;
  byte *pbStack_230;
  byte *pbStack_228;
  byte *pbStack_220;
  byte *pbStack_218;
  byte *pbStack_210;
  byte *pbStack_208;
  byte *pbStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  byte *pbStack_68;
  byte bStack_51;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar29 = (undefined8 *)auStack_e68;
  puVar31 = auStack_e68;
  ppbVar19 = &pbStack_de8;
  uStack_48 = 0xfffffffffffffffe;
  puStack_50 = param_1;
  puVar40 = (undefined4 *)0x8000000000000000;
  pbStack_458 = (byte *)0x8000000000000000;
  pbStack_478 = (byte *)0x8000000000000000;
  pbStack_498 = (byte *)0x8000000000000000;
  pbStack_4b8 = (byte *)0x8000000000000000;
  pbStack_4d8 = (byte *)0x8000000000000000;
  pbStack_4f8 = (byte *)0x8000000000000000;
  pbStack_518 = (byte *)0x8000000000000000;
  pbStack_538 = (byte *)0x8000000000000000;
  pbStack_558 = (byte *)0x8000000000000000;
  pbStack_578 = (byte *)0x8000000000000000;
  pbStack_598 = (byte *)0x8000000000000000;
  pbStack_5b8 = (byte *)0x8000000000000000;
  pbStack_5d8 = (byte *)0x8000000000000000;
  pbStack_5f8 = (byte *)0x8000000000000000;
  pbStack_618 = (byte *)0x8000000000000000;
  pbStack_638 = (byte *)0x8000000000000000;
  pbStack_658 = (byte *)0x8000000000000000;
  pbStack_678 = (byte *)0x8000000000000000;
  pbStack_698 = (byte *)0x8000000000000000;
  pbStack_6b8 = (byte *)0x8000000000000000;
  pbStack_6d8 = (byte *)0x8000000000000000;
  pbStack_6f8 = (byte *)0x8000000000000000;
  pbStack_718 = (byte *)0x8000000000000000;
  pbStack_738 = (byte *)0x8000000000000000;
  pbStack_758 = (byte *)0x8000000000000000;
  pbStack_778 = (byte *)0x8000000000000000;
  pbStack_798 = (byte *)0x8000000000000000;
  pbStack_7b8 = (byte *)0x8000000000000000;
  pbStack_7d8 = (byte *)0x8000000000000000;
  pbStack_7f8 = (byte *)0x8000000000000000;
  pbStack_818 = (byte *)0x8000000000000000;
  pbStack_838 = (byte *)0x8000000000000000;
  pbStack_858 = (byte *)0x8000000000000000;
  pbStack_878 = (byte *)0x8000000000000000;
  pbStack_898 = (byte *)0x8000000000000000;
  pbStack_8b8 = (byte *)0x8000000000000000;
  pbStack_8d8 = (byte *)0x8000000000000000;
  pbStack_8f8 = (byte *)0x8000000000000000;
  pbStack_918 = (byte *)0x8000000000000000;
  pbStack_938 = (byte *)0x8000000000000000;
  pbStack_958 = (byte *)0x8000000000000000;
  puVar41 = (undefined8 *)(auStack_d38 + 7);
  pbVar39 = *(byte **)(param_2 + 8);
  puVar28 = &UNK_143397664;
  pbVar21 = *(byte **)param_2;
code_r0x000141b575a0:
  if (pbVar21 == pbVar39) {
    pbStack_e70 = (byte *)0x141b587e1;
    pdb_140a1f3f0();
    pbVar13 = pbStack_478;
    pbVar18 = pbStack_498;
    pbVar23 = pbStack_4b8;
    pbVar2 = pbStack_4d8;
    pbVar26 = pbStack_4f8;
    pbVar21 = pbStack_518;
    pbVar39 = pbStack_538;
    pbStack_d40 = pbStack_458;
    ppbVar19 = &pbStack_458;
    if (SBORROW8(0,(longlong)pbStack_458)) {
      ppbVar19 = (byte **)auStack_d38;
    }
    pbVar20 = ppbVar19[2];
    uStack_428 = SUB81(pbVar20,0);
    uStack_427 = (undefined1)((ulonglong)pbVar20 >> 8);
    uStack_426 = (undefined6)((ulonglong)pbVar20 >> 0x10);
    pbVar20 = *ppbVar19;
    pbVar12 = ppbVar19[1];
    cStack_438 = (char)pbVar20;
    bStack_437 = (byte)((ulonglong)pbVar20 >> 8);
    uStack_436 = (undefined6)((ulonglong)pbVar20 >> 0x10);
    uStack_430 = SUB81(pbVar12,0);
    uStack_42f = (undefined1)((ulonglong)pbVar12 >> 8);
    uStack_42e = (undefined6)((ulonglong)pbVar12 >> 0x10);
    ppbVar19 = &pbStack_478;
    if (SBORROW8(0,(longlong)pbStack_478)) {
      ppbVar19 = (byte **)&uStack_d20;
    }
    uStack_410 = SUB82(ppbVar19[2],0);
    uStack_40e = (undefined6)((ulonglong)ppbVar19[2] >> 0x10);
    uStack_420 = SUB82(*ppbVar19,0);
    uStack_41e = (undefined6)((ulonglong)*ppbVar19 >> 0x10);
    uStack_418 = SUB82(ppbVar19[1],0);
    uStack_416 = (undefined6)((ulonglong)ppbVar19[1] >> 0x10);
    ppbVar19 = &pbStack_498;
    if (SBORROW8(0,(longlong)pbStack_498)) {
      ppbVar19 = &pbStack_d08;
    }
    uStack_3f8 = SUB82(ppbVar19[2],0);
    uStack_3f6 = (undefined6)((ulonglong)ppbVar19[2] >> 0x10);
    ppbVar24 = &pbStack_4b8;
    if (SBORROW8(0,(longlong)pbStack_4b8)) {
      ppbVar24 = &pbStack_cf0;
    }
    uStack_408 = SUB82(*ppbVar19,0);
    uStack_406 = (undefined6)((ulonglong)*ppbVar19 >> 0x10);
    uStack_400 = SUB82(ppbVar19[1],0);
    uStack_3fe = (undefined6)((ulonglong)ppbVar19[1] >> 0x10);
    pbStack_3e0 = ppbVar24[2];
    pbStack_3f0 = *ppbVar24;
    pbStack_3e8 = ppbVar24[1];
    ppbVar19 = &pbStack_4d8;
    if (SBORROW8(0,(longlong)pbStack_4d8)) {
      ppbVar19 = &pbStack_cd8;
    }
    pbStack_3d8 = *ppbVar19;
    pbStack_3d0 = ppbVar19[1];
    pbStack_3c8 = ppbVar19[2];
    ppbVar19 = &pbStack_4f8;
    if (SBORROW8(0,(longlong)pbStack_4f8)) {
      ppbVar19 = &pbStack_cc0;
    }
    pbStack_3b0 = ppbVar19[2];
    pbStack_3c0 = *ppbVar19;
    pbStack_3b8 = ppbVar19[1];
    ppbVar19 = &pbStack_518;
    if (SBORROW8(0,(longlong)pbStack_518)) {
      ppbVar19 = &pbStack_ca8;
    }
    pbStack_398 = ppbVar19[2];
    ppbVar24 = &pbStack_538;
    if (SBORROW8(0,(longlong)pbStack_538)) {
      ppbVar24 = &pbStack_c90;
    }
    pbStack_3a8 = *ppbVar19;
    pbStack_3a0 = ppbVar19[1];
    pbStack_380 = ppbVar24[2];
    pbStack_390 = *ppbVar24;
    pbStack_388 = ppbVar24[1];
    pbStack_d48 = pbStack_558;
    ppbVar19 = &pbStack_558;
    if (SBORROW8(0,(longlong)pbStack_558)) {
      ppbVar19 = &pbStack_c78;
    }
    pbStack_368 = ppbVar19[2];
    pbStack_378 = *ppbVar19;
    pbStack_370 = ppbVar19[1];
    pbStack_d50 = pbStack_578;
    ppbVar19 = &pbStack_578;
    if (SBORROW8(0,(longlong)pbStack_578)) {
      ppbVar19 = &pbStack_c60;
    }
    pbStack_350 = ppbVar19[2];
    pbStack_d58 = pbStack_598;
    ppbVar24 = &pbStack_598;
    if (SBORROW8(0,(longlong)pbStack_598)) {
      ppbVar24 = &pbStack_c48;
    }
    pbStack_360 = *ppbVar19;
    pbStack_358 = ppbVar19[1];
    pbStack_338 = ppbVar24[2];
    pbStack_d60 = pbStack_5b8;
    ppbVar19 = &pbStack_5b8;
    if (SBORROW8(0,(longlong)pbStack_5b8)) {
      ppbVar19 = &pbStack_c30;
    }
    pbStack_348 = *ppbVar24;
    pbStack_340 = ppbVar24[1];
    pbStack_320 = ppbVar19[2];
    pbStack_d68 = pbStack_5d8;
    ppbVar24 = &pbStack_5d8;
    if (SBORROW8(0,(longlong)pbStack_5d8)) {
      ppbVar24 = &pbStack_c18;
    }
    pbStack_330 = *ppbVar19;
    pbStack_328 = ppbVar19[1];
    pbStack_308 = ppbVar24[2];
    pbStack_d70 = pbStack_5f8;
    ppbVar19 = &pbStack_5f8;
    if (SBORROW8(0,(longlong)pbStack_5f8)) {
      ppbVar19 = &pbStack_c00;
    }
    pbStack_318 = *ppbVar24;
    pbStack_310 = ppbVar24[1];
    pbStack_2f0 = ppbVar19[2];
    pbStack_d78 = pbStack_618;
    ppbVar24 = &pbStack_618;
    if (SBORROW8(0,(longlong)pbStack_618)) {
      ppbVar24 = &pbStack_be8;
    }
    pbStack_300 = *ppbVar19;
    pbStack_2f8 = ppbVar19[1];
    pbStack_2d8 = ppbVar24[2];
    pbStack_d80 = pbStack_638;
    ppbVar19 = &pbStack_638;
    if (SBORROW8(0,(longlong)pbStack_638)) {
      ppbVar19 = &pbStack_bd0;
    }
    pbStack_2e8 = *ppbVar24;
    pbStack_2e0 = ppbVar24[1];
    pbStack_2c0 = ppbVar19[2];
    pbStack_d88 = pbStack_658;
    ppbVar24 = &pbStack_658;
    if (SBORROW8(0,(longlong)pbStack_658)) {
      ppbVar24 = &pbStack_bb8;
    }
    pbStack_2d0 = *ppbVar19;
    pbStack_2c8 = ppbVar19[1];
    pbStack_2a8 = ppbVar24[2];
    pbStack_d90 = pbStack_678;
    ppbVar19 = &pbStack_678;
    if (SBORROW8(0,(longlong)pbStack_678)) {
      ppbVar19 = &pbStack_ba0;
    }
    pbStack_2b8 = *ppbVar24;
    pbStack_2b0 = ppbVar24[1];
    pbStack_290 = ppbVar19[2];
    pbStack_d98 = pbStack_698;
    ppbVar24 = &pbStack_698;
    if (SBORROW8(0,(longlong)pbStack_698)) {
      ppbVar24 = &pbStack_b88;
    }
    pbStack_2a0 = *ppbVar19;
    pbStack_298 = ppbVar19[1];
    pbStack_278 = ppbVar24[2];
    pbStack_da0 = pbStack_6b8;
    ppbVar19 = &pbStack_6b8;
    if (SBORROW8(0,(longlong)pbStack_6b8)) {
      ppbVar19 = &pbStack_b70;
    }
    pbStack_288 = *ppbVar24;
    pbStack_280 = ppbVar24[1];
    pbStack_260 = ppbVar19[2];
    pbStack_da8 = pbStack_6d8;
    ppbVar24 = &pbStack_6d8;
    if (SBORROW8(0,(longlong)pbStack_6d8)) {
      ppbVar24 = &pbStack_b58;
    }
    pbStack_270 = *ppbVar19;
    pbStack_268 = ppbVar19[1];
    pbStack_248 = ppbVar24[2];
    pbStack_db0 = pbStack_6f8;
    ppbVar19 = &pbStack_6f8;
    if (SBORROW8(0,(longlong)pbStack_6f8)) {
      ppbVar19 = &pbStack_b40;
    }
    pbStack_258 = *ppbVar24;
    pbStack_250 = ppbVar24[1];
    pbStack_230 = ppbVar19[2];
    pbStack_db8 = pbStack_718;
    ppbVar24 = &pbStack_718;
    if (SBORROW8(0,(longlong)pbStack_718)) {
      ppbVar24 = &pbStack_b28;
    }
    pbStack_240 = *ppbVar19;
    pbStack_238 = ppbVar19[1];
    pbStack_218 = ppbVar24[2];
    pbStack_dc0 = pbStack_738;
    ppbVar19 = &pbStack_738;
    if (SBORROW8(0,(longlong)pbStack_738)) {
      ppbVar19 = &pbStack_b10;
    }
    pbStack_228 = *ppbVar24;
    pbStack_220 = ppbVar24[1];
    pbStack_200 = ppbVar19[2];
    pbStack_dc8 = pbStack_758;
    ppbVar24 = &pbStack_758;
    if (SBORROW8(0,(longlong)pbStack_758)) {
      ppbVar24 = &pbStack_af8;
    }
    pbStack_210 = *ppbVar19;
    pbStack_208 = ppbVar19[1];
    pbStack_1e8 = ppbVar24[2];
    pbStack_dd0 = pbStack_778;
    ppbVar19 = &pbStack_778;
    if (SBORROW8(0,(longlong)pbStack_778)) {
      ppbVar19 = &pbStack_ae0;
    }
    pbStack_1f8 = *ppbVar24;
    pbStack_1f0 = ppbVar24[1];
    pbStack_1d0 = ppbVar19[2];
    pbStack_dd8 = pbStack_798;
    ppbVar24 = &pbStack_798;
    if (SBORROW8(0,(longlong)pbStack_798)) {
      ppbVar24 = &pbStack_ac8;
    }
    pbStack_1e0 = *ppbVar19;
    pbStack_1d8 = ppbVar19[1];
    pbStack_1b8 = ppbVar24[2];
    pbStack_de0 = pbStack_7b8;
    ppbVar19 = &pbStack_7b8;
    if (SBORROW8(0,(longlong)pbStack_7b8)) {
      ppbVar19 = &pbStack_ab0;
    }
    pbStack_1c8 = *ppbVar24;
    pbStack_1c0 = ppbVar24[1];
    pbStack_1a0 = ppbVar19[2];
    pbStack_de8 = pbStack_7d8;
    ppbVar24 = &pbStack_7d8;
    if (SBORROW8(0,(longlong)pbStack_7d8)) {
      ppbVar24 = &pbStack_a98;
    }
    pbStack_1b0 = *ppbVar19;
    pbStack_1a8 = ppbVar19[1];
    pbStack_188 = ppbVar24[2];
    pbStack_df0 = pbStack_7f8;
    ppbVar19 = &pbStack_7f8;
    if (SBORROW8(0,(longlong)pbStack_7f8)) {
      ppbVar19 = &pbStack_a80;
    }
    pbStack_198 = *ppbVar24;
    pbStack_190 = ppbVar24[1];
    pbStack_170 = ppbVar19[2];
    pbStack_df8 = pbStack_818;
    ppbVar24 = &pbStack_818;
    if (SBORROW8(0,(longlong)pbStack_818)) {
      ppbVar24 = &pbStack_a68;
    }
    pbStack_180 = *ppbVar19;
    pbStack_178 = ppbVar19[1];
    pbStack_158 = ppbVar24[2];
    pbStack_e00 = pbStack_838;
    ppbVar19 = &pbStack_838;
    if (SBORROW8(0,(longlong)pbStack_838)) {
      ppbVar19 = &pbStack_a50;
    }
    pbStack_168 = *ppbVar24;
    pbStack_160 = ppbVar24[1];
    pbStack_140 = ppbVar19[2];
    pbStack_e08 = pbStack_858;
    ppbVar24 = &pbStack_858;
    if (SBORROW8(0,(longlong)pbStack_858)) {
      ppbVar24 = &pbStack_a38;
    }
    pbStack_150 = *ppbVar19;
    pbStack_148 = ppbVar19[1];
    pbStack_128 = ppbVar24[2];
    pbStack_e10 = pbStack_878;
    ppbVar19 = &pbStack_878;
    if (SBORROW8(0,(longlong)pbStack_878)) {
      ppbVar19 = &pbStack_a20;
    }
    pbStack_138 = *ppbVar24;
    pbStack_130 = ppbVar24[1];
    pbStack_110 = ppbVar19[2];
    pbStack_e18 = pbStack_898;
    ppbVar24 = &pbStack_898;
    if (SBORROW8(0,(longlong)pbStack_898)) {
      ppbVar24 = &pbStack_a08;
    }
    pbStack_120 = *ppbVar19;
    pbStack_118 = ppbVar19[1];
    pbStack_f8 = ppbVar24[2];
    pbStack_e20 = pbStack_8b8;
    ppbVar19 = &pbStack_8b8;
    if (SBORROW8(0,(longlong)pbStack_8b8)) {
      ppbVar19 = &pbStack_9f0;
    }
    pbStack_108 = *ppbVar24;
    pbStack_100 = ppbVar24[1];
    pbStack_e0 = ppbVar19[2];
    pbStack_e28 = pbStack_8d8;
    ppbVar24 = &pbStack_8d8;
    if (SBORROW8(0,(longlong)pbStack_8d8)) {
      ppbVar24 = &pbStack_9d8;
    }
    pbStack_f0 = *ppbVar19;
    pbStack_e8 = ppbVar19[1];
    pbStack_c8 = ppbVar24[2];
    uStack_e30 = pbStack_8f8;
    ppbVar19 = &pbStack_8f8;
    if (SBORROW8(0,(longlong)pbStack_8f8)) {
      ppbVar19 = &pbStack_9c0;
    }
    pbStack_d8 = *ppbVar24;
    pbStack_d0 = ppbVar24[1];
    pbStack_b0 = ppbVar19[2];
    pbStack_e38 = pbStack_918;
    ppbVar24 = &pbStack_918;
    if (SBORROW8(0,(longlong)pbStack_918)) {
      ppbVar24 = &pbStack_9a8;
    }
    pbStack_c0 = *ppbVar19;
    pbStack_b8 = ppbVar19[1];
    pbStack_98 = ppbVar24[2];
    pbStack_e40 = pbStack_938;
    ppbVar19 = &pbStack_938;
    if (SBORROW8(0,(longlong)pbStack_938)) {
      ppbVar19 = &pbStack_990;
    }
    pbStack_a8 = *ppbVar24;
    pbStack_a0 = ppbVar24[1];
    pbStack_80 = ppbVar19[2];
    pbStack_e48 = pbStack_958;
    ppbVar24 = &pbStack_958;
    if (SBORROW8(0,(longlong)pbStack_958)) {
      ppbVar24 = &pbStack_978;
    }
    pbStack_90 = *ppbVar19;
    pbStack_88 = ppbVar19[1];
    pbStack_68 = ppbVar24[2];
    uStack_78 = *(undefined4 *)ppbVar24;
    uStack_74 = *(undefined4 *)((longlong)ppbVar24 + 4);
    uStack_70 = *(undefined4 *)(ppbVar24 + 1);
    uStack_6c = *(undefined4 *)((longlong)ppbVar24 + 0xc);
    pbStack_e70 = (byte *)0x141b5907e;
    pub_142e32760(puStack_50,&cStack_438,0x3d8);
    pbVar20 = (byte *)0x0;
    if (!SBORROW8(0,(longlong)pbStack_d40)) {
      pbVar20 = (byte *)0x0;
      if (CONCAT17((undefined1)uStack_d31,auStack_d38) != 0) {
        pbStack_e70 = (byte *)0x141b590af;
        pub_1406abac0((byte *)CONCAT17((undefined1)uStack_d29,
                                       CONCAT43(uStack_d31._4_4_,uStack_d31._1_3_)),
                      CONCAT17((undefined1)uStack_d31,auStack_d38) * 0xc,4);
        pbVar20 = extraout_RAX;
      }
    }
    if (!SBORROW8(0,(longlong)pbVar13)) {
      pbVar20 = (byte *)0x0;
      if (CONCAT17(uStack_d20._7_1_,(undefined7)uStack_d20) != 0) {
        pbStack_e70 = (byte *)0x141b590da;
        pub_1406abac0(pbStack_d18,CONCAT17(uStack_d20._7_1_,(undefined7)uStack_d20) * 0xc,4);
        pbVar20 = extraout_RAX_00;
      }
    }
    if ((!SBORROW8(0,(longlong)pbVar18)) && (pbVar20 = (byte *)0x0, pbStack_d08 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b59105;
      pub_1406abac0(pbStack_d00,(longlong)pbStack_d08 * 0xc,4);
      pbVar20 = extraout_RAX_01;
    }
    if ((!SBORROW8(0,(longlong)pbVar23)) && (pbVar20 = (byte *)0x0, pbStack_cf0 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b59130;
      pub_1406abac0(pbStack_ce8,(longlong)pbStack_cf0 * 0xc,4);
      pbVar20 = extraout_RAX_02;
    }
    if ((!SBORROW8(0,(longlong)pbVar2)) && (pbVar20 = (byte *)0x0, pbStack_cd8 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b5915b;
      pub_1406abac0(pbStack_cd0,(longlong)pbStack_cd8 * 0xc,4);
      pbVar20 = extraout_RAX_03;
    }
    if ((!SBORROW8(0,(longlong)pbVar26)) && (pbVar20 = (byte *)0x0, pbStack_cc0 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b59186;
      pub_1406abac0(pbStack_cb8,(longlong)pbStack_cc0 * 0xc,4);
      pbVar20 = extraout_RAX_04;
    }
    if ((!SBORROW8(0,(longlong)pbVar21)) && (pbVar20 = (byte *)0x0, pbStack_ca8 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b591b1;
      pub_1406abac0(pbStack_ca0,(longlong)pbStack_ca8 * 0xc,4);
      pbVar20 = extraout_RAX_05;
    }
    if ((!SBORROW8(0,(longlong)pbVar39)) && (pbVar20 = (byte *)0x0, pbStack_c90 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b591dc;
      pub_1406abac0(pbStack_c88,(longlong)pbStack_c90 * 0xc,4);
      pbVar20 = extraout_RAX_06;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_d48);
    pbStack_d48 = (byte *)-(longlong)pbStack_d48;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_c78 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b5920b;
      pub_1406abac0(pbStack_c70,(longlong)pbStack_c78 * 0xc,4);
      pbVar20 = extraout_RAX_07;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_d50);
    pbStack_d50 = (byte *)-(longlong)pbStack_d50;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_c60 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b5923a;
      pub_1406abac0(pbStack_c58,(longlong)pbStack_c60 * 0xc,4);
      pbVar20 = extraout_RAX_08;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_d58);
    pbStack_d58 = (byte *)-(longlong)pbStack_d58;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_c48 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b59269;
      pub_1406abac0(pbStack_c40,(longlong)pbStack_c48 * 0xc,4);
      pbVar20 = extraout_RAX_09;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_d60);
    pbStack_d60 = (byte *)-(longlong)pbStack_d60;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_c30 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b59298;
      pub_1406abac0(pbStack_c28,(longlong)pbStack_c30 * 0xc,4);
      pbVar20 = extraout_RAX_10;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_d68);
    pbStack_d68 = (byte *)-(longlong)pbStack_d68;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_c18 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b592c7;
      pub_1406abac0(pbStack_c10,(longlong)pbStack_c18 * 0xc,4);
      pbVar20 = extraout_RAX_11;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_d70);
    pbStack_d70 = (byte *)-(longlong)pbStack_d70;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_c00 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b592f3;
      pub_1406abac0(pbStack_bf8,(longlong)pbStack_c00 * 0xc,4);
      pbVar20 = extraout_RAX_12;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_d78);
    pbStack_d78 = (byte *)-(longlong)pbStack_d78;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_be8 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b5931f;
      pub_1406abac0(pbStack_be0,(longlong)pbStack_be8 * 0xc,4);
      pbVar20 = extraout_RAX_13;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_d80);
    pbStack_d80 = (byte *)-(longlong)pbStack_d80;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_bd0 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b5934b;
      pub_1406abac0(pbStack_bc8,(longlong)pbStack_bd0 * 0xc,4);
      pbVar20 = extraout_RAX_14;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_d88);
    pbStack_d88 = (byte *)-(longlong)pbStack_d88;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_bb8 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b59377;
      pub_1406abac0(pbStack_bb0,(longlong)pbStack_bb8 * 0xc,4);
      pbVar20 = extraout_RAX_15;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_d90);
    pbStack_d90 = (byte *)-(longlong)pbStack_d90;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_ba0 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b593a3;
      pub_1406abac0(pbStack_b98,(longlong)pbStack_ba0 * 0xc,4);
      pbVar20 = extraout_RAX_16;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_d98);
    pbStack_d98 = (byte *)-(longlong)pbStack_d98;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_b88 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b593cf;
      pub_1406abac0(pbStack_b80,(longlong)pbStack_b88 * 0xc,4);
      pbVar20 = extraout_RAX_17;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_da0);
    pbStack_da0 = (byte *)-(longlong)pbStack_da0;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_b70 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b593fb;
      pub_1406abac0(pbStack_b68,(longlong)pbStack_b70 * 0xc,4);
      pbVar20 = extraout_RAX_18;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_da8);
    pbStack_da8 = (byte *)-(longlong)pbStack_da8;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_b58 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b59427;
      pub_1406abac0(pbStack_b50,(longlong)pbStack_b58 * 0xc,4);
      pbVar20 = extraout_RAX_19;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_db0);
    pbStack_db0 = (byte *)-(longlong)pbStack_db0;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_b40 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b59453;
      pub_1406abac0(pbStack_b38,(longlong)pbStack_b40 * 0xc,4);
      pbVar20 = extraout_RAX_20;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_db8);
    pbStack_db8 = (byte *)-(longlong)pbStack_db8;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_b28 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b5947f;
      pub_1406abac0(pbStack_b20,(longlong)pbStack_b28 * 0xc,4);
      pbVar20 = extraout_RAX_21;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_dc0);
    pbStack_dc0 = (byte *)-(longlong)pbStack_dc0;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_b10 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b594ab;
      pub_1406abac0(pbStack_b08,(longlong)pbStack_b10 * 0xc,4);
      pbVar20 = extraout_RAX_22;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_dc8);
    pbStack_dc8 = (byte *)-(longlong)pbStack_dc8;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_af8 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b594d7;
      pub_1406abac0(pbStack_af0,(longlong)pbStack_af8 * 0xc,4);
      pbVar20 = extraout_RAX_23;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_dd0);
    pbStack_dd0 = (byte *)-(longlong)pbStack_dd0;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_ae0 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b59503;
      pub_1406abac0(pbStack_ad8,(longlong)pbStack_ae0 * 0xc,4);
      pbVar20 = extraout_RAX_24;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_dd8);
    pbStack_dd8 = (byte *)-(longlong)pbStack_dd8;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_ac8 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b5952f;
      pub_1406abac0(pbStack_ac0,(longlong)pbStack_ac8 * 0xc,4);
      pbVar20 = extraout_RAX_25;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_de0);
    pbStack_de0 = (byte *)-(longlong)pbStack_de0;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_ab0 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b5955b;
      pub_1406abac0(pbStack_aa8,(longlong)pbStack_ab0 * 0xc,4);
      pbVar20 = extraout_RAX_26;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_de8);
    pbStack_de8 = (byte *)-(longlong)pbStack_de8;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_a98 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b59587;
      pub_1406abac0(pbStack_a90,(longlong)pbStack_a98 * 0xc,4);
      pbVar20 = extraout_RAX_27;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_df0);
    pbStack_df0 = (byte *)-(longlong)pbStack_df0;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_a80 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b595b3;
      pub_1406abac0(pbStack_a78,(longlong)pbStack_a80 * 0xc,4);
      pbVar20 = extraout_RAX_28;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_df8);
    pbStack_df8 = (byte *)-(longlong)pbStack_df8;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_a68 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b595df;
      pub_1406abac0(pbStack_a60,(longlong)pbStack_a68 * 0xc,4);
      pbVar20 = extraout_RAX_29;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_e00);
    pbStack_e00 = (byte *)-(longlong)pbStack_e00;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_a50 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b5960b;
      pub_1406abac0(pbStack_a48,(longlong)pbStack_a50 * 0xc,4);
      pbVar20 = extraout_RAX_30;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_e08);
    pbStack_e08 = (byte *)-(longlong)pbStack_e08;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_a38 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b59637;
      pub_1406abac0(pbStack_a30,(longlong)pbStack_a38 * 0xc,4);
      pbVar20 = extraout_RAX_31;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_e10);
    pbStack_e10 = (byte *)-(longlong)pbStack_e10;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_a20 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b59663;
      pub_1406abac0(pbStack_a18,(longlong)pbStack_a20 * 0xc,4);
      pbVar20 = extraout_RAX_32;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_e18);
    pbStack_e18 = (byte *)-(longlong)pbStack_e18;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_a08 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b5968f;
      pub_1406abac0(pbStack_a00,(longlong)pbStack_a08 * 0xc,4);
      pbVar20 = extraout_RAX_33;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_e20);
    pbStack_e20 = (byte *)-(longlong)pbStack_e20;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_9f0 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b596bb;
      pub_1406abac0(pbStack_9e8,(longlong)pbStack_9f0 * 0xc,4);
      pbVar20 = extraout_RAX_34;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_e28);
    pbStack_e28 = (byte *)-(longlong)pbStack_e28;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_9d8 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b596e7;
      pub_1406abac0(pbStack_9d0,(longlong)pbStack_9d8 * 0xc,4);
      pbVar20 = extraout_RAX_35;
    }
    bVar42 = SBORROW8(0,(longlong)uStack_e30);
    uStack_e30 = (byte *)-(longlong)uStack_e30;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_9c0 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b59713;
      pub_1406abac0(pbStack_9b8,(longlong)pbStack_9c0 * 0xc,4);
      pbVar20 = extraout_RAX_36;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_e38);
    pbStack_e38 = (byte *)-(longlong)pbStack_e38;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_9a8 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b5973f;
      pub_1406abac0(pbStack_9a0,(longlong)pbStack_9a8 * 0xc,4);
      pbVar20 = extraout_RAX_37;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_e40);
    pbStack_e40 = (byte *)-(longlong)pbStack_e40;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_990 != (byte *)0x0)) {
      pbStack_e70 = (byte *)0x141b5976b;
      pub_1406abac0(pbStack_988,(longlong)pbStack_990 * 0xc,4);
      pbVar20 = extraout_RAX_38;
    }
    bVar42 = SBORROW8(0,(longlong)pbStack_e48);
    pbStack_e48 = (byte *)-(longlong)pbStack_e48;
    if ((!bVar42) && (pbVar20 = (byte *)0x0, pbStack_978 != (byte *)0x0)) {
LAB_141b59f1f:
      pbStack_e70 = (byte *)0x141b59f32;
      pub_1406abac0(pbStack_970,(longlong)pbStack_978 * 0xc,4);
      pbVar20 = extraout_RAX_39;
    }
    return pbVar20;
  }
  pbVar26 = pbVar21 + 0x40;
  *(byte **)param_2 = pbVar26;
  pbVar2 = pbVar21 + 0x20;
  *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + 1;
  *(byte **)(param_2 + 0x10) = pbVar2;
  puStack_ea0 = puVar28;
  switch(*pbVar21) {
  case 1:
    bVar14 = pbVar21[1];
    if (0x28 < pbVar21[1]) {
      bVar14 = 0x29;
    }
    pbVar18 = &UNK_1433976a0 + *(int *)(&UNK_1433976a0 + (ulonglong)bVar14 * 4);
    puVar30 = auStack_e68;
    puVar35 = auStack_e68;
    puVar36 = auStack_e68;
    puVar33 = auStack_e68;
    in_XMM0_Qa = in_XMM0_Qa;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar14) {
    case 0:
      goto code_r0x000141b576a8;
    case 1:
      goto code_r0x000141b57ef0;
    case 2:
      goto code_r0x000141b57d48;
    case 3:
      goto code_r0x000141b57e1c;
    case 4:
      goto code_r0x000141b57acc;
    case 5:
      goto code_r0x000141b580a8;
    case 6:
      goto code_r0x000141b581e6;
    case 7:
      goto code_r0x000141b57e86;
    case 8:
      goto code_r0x000141b58324;
    case 9:
      goto code_r0x000141b57c0a;
    case 10:
      goto code_r0x000141b582ba;
    case 0xb:
      goto code_r0x000141b57a62;
    case 0xc:
      goto code_r0x000141b57ba0;
    case 0xd:
      goto code_r0x000141b5817c;
    case 0xe:
      goto code_r0x000141b5798e;
    case 0xf:
      goto code_r0x000141b57db2;
    case 0x10:
      goto code_r0x000141b57924;
    case 0x11:
      goto code_r0x000141b57fc4;
    case 0x12:
      goto code_r0x000141b58250;
    case 0x13:
      goto code_r0x000141b58536;
    case 0x14:
      goto code_r0x000141b5803e;
    case 0x15:
      goto code_r0x000141b58112;
    case 0x16:
      goto code_r0x000141b58462;
    case 0x17:
      goto code_r0x000141b585a0;
    case 0x18:
      goto code_r0x000141b57cde;
    case 0x19:
      goto code_r0x000141b57c74;
    case 0x1a:
      goto code_r0x000141b58748;
    case 0x1b:
      goto code_r0x000141b57850;
    case 0x1c:
      goto code_r0x000141b5860a;
    case 0x1d:
      goto code_r0x000141b58674;
    case 0x1e:
      goto code_r0x000141b5838e;
    case 0x1f:
      goto code_r0x000141b57f5a;
    case 0x20:
      goto code_r0x000141b583f8;
    case 0x21:
      goto code_r0x000141b579f8;
    case 0x22:
      goto code_r0x000141b578ba;
    case 0x23:
      goto code_r0x000141b5777c;
    case 0x24:
      goto code_r0x000141b577e6;
    case 0x25:
      goto code_r0x000141b57712;
    case 0x26:
      goto code_r0x000141b586de;
    case 0x27:
      goto code_r0x000141b584cc;
    case 0x28:
      goto code_r0x000141b57b36;
    case 0x29:
      goto code_r0x000141b5802e;
    default:
      goto code_r0x000141b68797;
    case 0x36:
    case 0x38:
      goto code_r0x000141b6879f;
    case 0x3b:
      goto code_r0x000141b68809;
    case 0x3d:
      goto code_r0x000141b68819;
    case 0x3e:
      goto code_r0x000141b687b7;
    case 0x3f:
      goto code_r0x000142deec04;
    case 0x40:
      goto code_r0x000142deec10;
    case 0x41:
      goto code_r0x000142deebd1;
    case 0x42:
      goto code_r0x000142deebeb;
    case 0x43:
      goto code_r0x000142deeba4;
    case 0x44:
      goto code_r0x000142deec1d;
    case 0x45:
      goto code_r0x000142deec38;
    case 0x46:
      goto code_r0x000142deebf7;
    case 0x47:
      goto code_r0x000142deec55;
    case 0x48:
      goto code_r0x000142deebbe;
    case 0x49:
      goto code_r0x000142deec46;
    case 0x4a:
      goto code_r0x000142deeb99;
    case 0x4b:
      goto code_r0x000142deebb1;
    case 0x4c:
      goto code_r0x000142deec2b;
    case 0x4d:
      goto code_r0x000142deeb8c;
    case 0x4e:
      goto code_r0x000142deebde;
    case 0x4f:
    case 0x50:
      goto code_r0x000142deeb87;
    case 0x51:
      goto code_r0x000142deec6c;
    case 0x52:
      goto code_r0x000142deec71;
    case 0x53:
      goto code_r0x000142deec62;
    case 0x54:
      goto code_r0x000142deec67;
    case 0x55:
      goto code_r0x000141b6911f;
    case 0x56:
      goto code_r0x000141b6918b;
    case 0x57:
      goto code_r0x000141b6914a;
    case 0x58:
      goto code_r0x000141b6916d;
    case 0x59:
      goto code_r0x000141b6912b;
    case 0x5a:
      goto code_r0x000141b6919e;
    case 0x5b:
      goto code_r0x000141b69c14;
    case 0x5c:
      goto code_r0x000141b69c6d;
    case 0x5d:
      goto code_r0x000141b69c37;
    case 0x5e:
      goto code_r0x000141b69c59;
    case 0x5f:
      goto code_r0x000141b69c1b;
    case 0x60:
      goto code_r0x000141b69c7c;
    }
  default:
    param_3 = &bStack_51;
    param_4 = &UNK_1433969b8;
    pbStack_e70 = (undefined *)0x141b587cc;
    in_XMM0_Qa = (byte *)pdb_142deed80(&cStack_438);
    pbVar23 = pbVar21;
    in_XMM0_Dc = extraout_XMM0_Dc_03;
    in_XMM0_Dd = extraout_XMM0_Dd_03;
    break;
  case 4:
    uVar17 = *(ulonglong *)(pbVar21 + 8);
    if (0x28 < uVar17) {
      uVar17 = 0x29;
    }
    pbVar18 = &UNK_1433976a0 + *(int *)(&UNK_1433976a0 + (uVar17 & 0xff) * 4);
    puVar30 = auStack_e68;
    puVar35 = auStack_e68;
    puVar36 = auStack_e68;
    puVar33 = auStack_e68;
    in_XMM0_Qa = in_XMM0_Qa;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar17 & 0xff) {
    case 0:
      goto code_r0x000141b576a8;
    case 1:
      goto code_r0x000141b57ef0;
    case 2:
      goto code_r0x000141b57d48;
    case 3:
      goto code_r0x000141b57e1c;
    case 4:
      goto code_r0x000141b57acc;
    case 5:
      goto code_r0x000141b580a8;
    case 6:
      goto code_r0x000141b581e6;
    case 7:
      goto code_r0x000141b57e86;
    case 8:
      goto code_r0x000141b58324;
    case 9:
      goto code_r0x000141b57c0a;
    case 10:
      goto code_r0x000141b582ba;
    case 0xb:
      goto code_r0x000141b57a62;
    case 0xc:
      goto code_r0x000141b57ba0;
    case 0xd:
      goto code_r0x000141b5817c;
    case 0xe:
      goto code_r0x000141b5798e;
    case 0xf:
      goto code_r0x000141b57db2;
    case 0x10:
      goto code_r0x000141b57924;
    case 0x11:
      goto code_r0x000141b57fc4;
    case 0x12:
      goto code_r0x000141b58250;
    case 0x13:
      goto code_r0x000141b58536;
    case 0x14:
      goto code_r0x000141b5803e;
    case 0x15:
      goto code_r0x000141b58112;
    case 0x16:
      goto code_r0x000141b58462;
    case 0x17:
      goto code_r0x000141b585a0;
    case 0x18:
      goto code_r0x000141b57cde;
    case 0x19:
      goto code_r0x000141b57c74;
    case 0x1a:
      goto code_r0x000141b58748;
    case 0x1b:
      goto code_r0x000141b57850;
    case 0x1c:
      goto code_r0x000141b5860a;
    case 0x1d:
      goto code_r0x000141b58674;
    case 0x1e:
      goto code_r0x000141b5838e;
    case 0x1f:
      goto code_r0x000141b57f5a;
    case 0x20:
      goto code_r0x000141b583f8;
    case 0x21:
      goto code_r0x000141b579f8;
    case 0x22:
      goto code_r0x000141b578ba;
    case 0x23:
      goto code_r0x000141b5777c;
    case 0x24:
      goto code_r0x000141b577e6;
    case 0x25:
      goto code_r0x000141b57712;
    case 0x26:
      goto code_r0x000141b586de;
    case 0x27:
      goto code_r0x000141b584cc;
    case 0x28:
      goto code_r0x000141b57b36;
    case 0x29:
      goto code_r0x000141b5802e;
    default:
      goto code_r0x000141b68797;
    case 0x36:
    case 0x38:
      goto code_r0x000141b6879f;
    case 0x3b:
      goto code_r0x000141b68809;
    case 0x3d:
      goto code_r0x000141b68819;
    case 0x3e:
      goto code_r0x000141b687b7;
    case 0x3f:
      goto code_r0x000142deec04;
    case 0x40:
      goto code_r0x000142deec10;
    case 0x41:
      goto code_r0x000142deebd1;
    case 0x42:
      goto code_r0x000142deebeb;
    case 0x43:
      goto code_r0x000142deeba4;
    case 0x44:
      goto code_r0x000142deec1d;
    case 0x45:
      goto code_r0x000142deec38;
    case 0x46:
      goto code_r0x000142deebf7;
    case 0x47:
      goto code_r0x000142deec55;
    case 0x48:
      goto code_r0x000142deebbe;
    case 0x49:
      goto code_r0x000142deec46;
    case 0x4a:
      goto code_r0x000142deeb99;
    case 0x4b:
      goto code_r0x000142deebb1;
    case 0x4c:
      goto code_r0x000142deec2b;
    case 0x4d:
      goto code_r0x000142deeb8c;
    case 0x4e:
      goto code_r0x000142deebde;
    case 0x4f:
    case 0x50:
      goto code_r0x000142deeb87;
    case 0x51:
      goto code_r0x000142deec6c;
    case 0x52:
      goto code_r0x000142deec71;
    case 0x53:
      goto code_r0x000142deec62;
    case 0x54:
      goto code_r0x000142deec67;
    case 0x55:
      goto code_r0x000141b6911f;
    case 0x56:
      goto code_r0x000141b6918b;
    case 0x57:
      goto code_r0x000141b6914a;
    case 0x58:
      goto code_r0x000141b6916d;
    case 0x59:
      goto code_r0x000141b6912b;
    case 0x5a:
      goto code_r0x000141b6919e;
    case 0x5b:
      goto code_r0x000141b69c14;
    case 0x5c:
      goto code_r0x000141b69c6d;
    case 0x5d:
      goto code_r0x000141b69c37;
    case 0x5e:
      goto code_r0x000141b69c59;
    case 0x5f:
      goto code_r0x000141b69c1b;
    case 0x60:
      goto code_r0x000141b69c7c;
    }
  case 0xc:
    pbVar23 = *(byte **)(pbVar21 + 0x10);
    param_3 = *(byte **)(pbVar21 + 0x18);
    pbStack_e70 = (undefined *)0x141b5767d;
    in_XMM0_Qa = (byte *)pdb_1418296a0(&cStack_438);
    in_XMM0_Dc = extraout_XMM0_Dc_02;
    in_XMM0_Dd = extraout_XMM0_Dd_02;
    break;
  case 0xd:
    pbVar23 = *(byte **)(pbVar21 + 8);
    param_3 = *(byte **)(pbVar21 + 0x10);
    pbStack_e70 = (undefined *)0x141b5760b;
    in_XMM0_Qa = (byte *)pdb_1418296a0(&cStack_438);
    in_XMM0_Dc = extraout_XMM0_Dc;
    in_XMM0_Dd = extraout_XMM0_Dd;
    break;
  case 0xe:
    pbVar23 = *(byte **)(pbVar21 + 0x10);
    param_3 = *(byte **)(pbVar21 + 0x18);
    pbStack_e70 = (undefined *)0x141b5763f;
    in_XMM0_Qa = (byte *)pdb_141828820(&cStack_438);
    in_XMM0_Dc = extraout_XMM0_Dc_01;
    in_XMM0_Dd = extraout_XMM0_Dd_01;
    break;
  case 0xf:
    pbVar23 = *(byte **)(pbVar21 + 8);
    param_3 = *(byte **)(pbVar21 + 0x10);
    pbStack_e70 = (undefined *)0x141b57625;
    in_XMM0_Qa = (byte *)pdb_141828820(&cStack_438);
    in_XMM0_Dc = extraout_XMM0_Dc_00;
    in_XMM0_Dd = extraout_XMM0_Dd_00;
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
    goto joined_r0x000141b5a392;
  }
  pbVar18 = &UNK_1433976a0 + *(int *)(&UNK_1433976a0 + (ulonglong)bStack_437 * 4);
  pbVar21 = pbVar23;
  puVar30 = auStack_e68;
  puVar35 = auStack_e68;
  puVar36 = auStack_e68;
  puVar33 = auStack_e68;
  in_XMM0_Qa = in_XMM0_Qa;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bStack_437) {
  case 0:
code_r0x000141b576a8:
    if (!SBORROW8(0,(longlong)pbStack_458)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396ba0;
code_r0x000141b5a352:
      puStack_50[2] = puVar28;
      puStack_50[3] = 0xc;
code_r0x000141b5a37e:
      puStack_50[4] = 0x8000000000000000;
      *puStack_50 = 0x8000000000000000;
      goto joined_r0x000141b5a392;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b576ce;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_458 = in_XMM0_Qa;
      uStack_450 = uStack_d29;
      uStack_44c = uStack_d25;
      uStack_448 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 1:
code_r0x000141b57ef0:
    if (!SBORROW8(0,(longlong)pbStack_478)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396bac;
code_r0x000141b5a312:
      puStack_50[2] = puVar28;
      puStack_50[3] = 9;
      goto code_r0x000141b5a37e;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b57f16;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_478 = in_XMM0_Qa;
      uStack_470 = uStack_d29;
      uStack_46c = uStack_d25;
      uStack_468 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 2:
code_r0x000141b57d48:
    if (!SBORROW8(0,(longlong)pbStack_498)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396bb5;
      goto code_r0x000141b5a312;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b57d6e;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_498 = in_XMM0_Qa;
      uStack_490 = uStack_d29;
      uStack_48c = uStack_d25;
      uStack_488 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 3:
code_r0x000141b57e1c:
    if (!SBORROW8(0,(longlong)pbStack_4b8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396bbe;
code_r0x000141b5a26a:
      puStack_50[2] = puVar28;
      puStack_50[3] = 10;
      goto code_r0x000141b5a37e;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b57e42;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_4b8 = in_XMM0_Qa;
      uStack_4b0 = uStack_d29;
      uStack_4ac = uStack_d25;
      uStack_4a8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 4:
code_r0x000141b57acc:
    if (!SBORROW8(0,(longlong)pbStack_4d8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396bc8;
code_r0x000141b5a332:
      puStack_50[2] = puVar28;
      puStack_50[3] = 7;
      goto code_r0x000141b5a37e;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b57af2;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_4d8 = in_XMM0_Qa;
      uStack_4d0 = uStack_d29;
      uStack_4cc = uStack_d25;
      uStack_4c8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 5:
code_r0x000141b580a8:
    if (!SBORROW8(0,(longlong)pbStack_4f8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396bcf;
      goto code_r0x000141b5a312;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b580ce;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_4f8 = in_XMM0_Qa;
      uStack_4f0 = uStack_d29;
      uStack_4ec = uStack_d25;
      uStack_4e8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 6:
code_r0x000141b581e6:
    if (!SBORROW8(0,(longlong)pbStack_518)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396bd8;
code_r0x000141b5a1c7:
      puStack_50[2] = puVar28;
      puStack_50[3] = 0xb;
      goto code_r0x000141b5a37e;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b5820c;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_518 = in_XMM0_Qa;
      uStack_510 = uStack_d29;
      uStack_50c = uStack_d25;
      uStack_508 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 7:
code_r0x000141b57e86:
    if (!SBORROW8(0,(longlong)pbStack_538)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396be3;
      goto code_r0x000141b5a352;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b57eac;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_538 = in_XMM0_Qa;
      uStack_530 = uStack_d29;
      uStack_52c = uStack_d25;
      uStack_528 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 8:
code_r0x000141b58324:
    if (!SBORROW8(0,(longlong)pbStack_558)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396d0e;
code_r0x000141b5a087:
      puStack_50[2] = puVar28;
      puStack_50[3] = 0x12;
      goto code_r0x000141b5a37e;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b5834a;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_558 = in_XMM0_Qa;
      uStack_550 = uStack_d29;
      uStack_54c = uStack_d25;
      uStack_548 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 9:
code_r0x000141b57c0a:
    if (!SBORROW8(0,(longlong)pbStack_578)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puStack_50[2] = &UNK_143396d20;
      puStack_50[3] = 0xf;
      goto code_r0x000141b5a37e;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b57c30;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_578 = in_XMM0_Qa;
      uStack_570 = uStack_d29;
      uStack_56c = uStack_d25;
      uStack_568 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 10:
code_r0x000141b582ba:
    if (!SBORROW8(0,(longlong)pbStack_598)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396bef;
      goto code_r0x000141b5a332;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b582e0;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_598 = in_XMM0_Qa;
      uStack_590 = uStack_d29;
      uStack_58c = uStack_d25;
      uStack_588 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0xb:
code_r0x000141b57a62:
    if (!SBORROW8(0,(longlong)pbStack_5b8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396bf6;
code_r0x000141b5a20d:
      puStack_50[2] = puVar28;
      puStack_50[3] = 8;
      goto code_r0x000141b5a37e;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b57a88;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_5b8 = in_XMM0_Qa;
      uStack_5b0 = uStack_d29;
      uStack_5ac = uStack_d25;
      uStack_5a8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0xc:
code_r0x000141b57ba0:
    if (!SBORROW8(0,(longlong)pbStack_5d8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396bfe;
      goto code_r0x000141b5a20d;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b57bc6;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_5d8 = in_XMM0_Qa;
      uStack_5d0 = uStack_d29;
      uStack_5cc = uStack_d25;
      uStack_5c8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0xd:
code_r0x000141b5817c:
    if (!SBORROW8(0,(longlong)pbStack_5f8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396c06;
code_r0x000141b5a064:
      puStack_50[2] = puVar28;
      puStack_50[3] = 4;
      goto code_r0x000141b5a37e;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b581a2;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_5f8 = in_XMM0_Qa;
      uStack_5f0 = uStack_d29;
      uStack_5ec = uStack_d25;
      uStack_5e8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0xe:
code_r0x000141b5798e:
    if (!SBORROW8(0,(longlong)pbStack_618)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396c0a;
      goto code_r0x000141b5a26a;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b579b4;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_618 = in_XMM0_Qa;
      uStack_610 = uStack_d29;
      uStack_60c = uStack_d25;
      uStack_608 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0xf:
code_r0x000141b57db2:
    if (!SBORROW8(0,(longlong)pbStack_638)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396c14;
      goto code_r0x000141b5a312;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b57dd8;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_638 = in_XMM0_Qa;
      uStack_630 = uStack_d29;
      uStack_62c = uStack_d25;
      uStack_628 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x10:
code_r0x000141b57924:
    if (!SBORROW8(0,(longlong)pbStack_658)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396c1d;
code_r0x000141b5a28d:
      puStack_50[2] = puVar28;
      puStack_50[3] = 6;
      goto code_r0x000141b5a37e;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b5794a;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_658 = in_XMM0_Qa;
      uStack_650 = uStack_d29;
      uStack_64c = uStack_d25;
      uStack_648 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x11:
code_r0x000141b57fc4:
    if (!SBORROW8(0,(longlong)pbStack_678)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396c23;
      goto code_r0x000141b5a332;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b57fea;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_678 = in_XMM0_Qa;
      uStack_670 = uStack_d29;
      uStack_66c = uStack_d25;
      uStack_668 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x12:
code_r0x000141b58250:
    if (!SBORROW8(0,(longlong)pbStack_698)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396c2a;
      goto code_r0x000141b5a28d;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b58276;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_698 = in_XMM0_Qa;
      uStack_690 = uStack_d29;
      uStack_68c = uStack_d25;
      uStack_688 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x13:
code_r0x000141b58536:
    if (!SBORROW8(0,(longlong)pbStack_6b8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396c30;
      goto code_r0x000141b5a064;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b5855c;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_6b8 = in_XMM0_Qa;
      uStack_6b0 = uStack_d29;
      uStack_6ac = uStack_d25;
      uStack_6a8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x14:
code_r0x000141b5803e:
    if (!SBORROW8(0,(longlong)pbStack_6d8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396c34;
code_r0x000141b5a372:
      puStack_50[2] = puVar28;
      puStack_50[3] = 5;
      goto code_r0x000141b5a37e;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b58064;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_6d8 = in_XMM0_Qa;
      uStack_6d0 = uStack_d29;
      uStack_6cc = uStack_d25;
      uStack_6c8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x15:
code_r0x000141b58112:
    if (!SBORROW8(0,(longlong)pbStack_6f8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396c39;
      goto code_r0x000141b5a312;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b58138;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_6f8 = in_XMM0_Qa;
      uStack_6f0 = uStack_d29;
      uStack_6ec = uStack_d25;
      uStack_6e8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x16:
code_r0x000141b58462:
    if (!SBORROW8(0,(longlong)pbStack_718)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396c42;
      goto code_r0x000141b5a1c7;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b58488;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_718 = in_XMM0_Qa;
      uStack_710 = uStack_d29;
      uStack_70c = uStack_d25;
      uStack_708 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x17:
code_r0x000141b585a0:
    if (!SBORROW8(0,(longlong)pbStack_738)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396c4d;
      goto code_r0x000141b5a064;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b585c6;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_738 = in_XMM0_Qa;
      uStack_730 = uStack_d29;
      uStack_72c = uStack_d25;
      uStack_728 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x18:
code_r0x000141b57cde:
    if (!SBORROW8(0,(longlong)pbStack_758)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396c51;
      goto code_r0x000141b5a064;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b57d04;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_758 = in_XMM0_Qa;
      uStack_750 = uStack_d29;
      uStack_74c = uStack_d25;
      uStack_748 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x19:
code_r0x000141b57c74:
    if (!SBORROW8(0,(longlong)pbStack_778)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396d2f;
      goto code_r0x000141b5a28d;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b57c9a;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_778 = in_XMM0_Qa;
      uStack_770 = uStack_d29;
      uStack_76c = uStack_d25;
      uStack_768 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x1a:
code_r0x000141b58748:
    if (!SBORROW8(0,(longlong)pbStack_798)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396c55;
      goto code_r0x000141b5a26a;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b5876e;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_798 = in_XMM0_Qa;
      uStack_790 = uStack_d29;
      uStack_78c = uStack_d25;
      uStack_788 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x1b:
code_r0x000141b57850:
    if (!SBORROW8(0,(longlong)pbStack_7b8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puStack_50[2] = &UNK_143396c5f;
      puStack_50[3] = 0x10;
      goto code_r0x000141b5a37e;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b57876;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_7b8 = in_XMM0_Qa;
      uStack_7b0 = uStack_d29;
      uStack_7ac = uStack_d25;
      uStack_7a8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x1c:
code_r0x000141b5860a:
    if (!SBORROW8(0,(longlong)pbStack_7d8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396d35;
      goto code_r0x000141b5a087;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b58630;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_7d8 = in_XMM0_Qa;
      uStack_7d0 = uStack_d29;
      uStack_7cc = uStack_d25;
      uStack_7c8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x1d:
code_r0x000141b58674:
    if (!SBORROW8(0,(longlong)pbStack_7f8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396c6f;
      goto code_r0x000141b5a26a;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b5869a;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_7f8 = in_XMM0_Qa;
      uStack_7f0 = uStack_d29;
      uStack_7ec = uStack_d25;
      uStack_7e8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x1e:
code_r0x000141b5838e:
    if (!SBORROW8(0,(longlong)pbStack_818)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396c79;
      goto code_r0x000141b5a20d;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b583b4;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_818 = in_XMM0_Qa;
      uStack_810 = uStack_d29;
      uStack_80c = uStack_d25;
      uStack_808 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x1f:
code_r0x000141b57f5a:
    if (!SBORROW8(0,(longlong)pbStack_838)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puStack_50[2] = &UNK_143396c81;
      puStack_50[3] = 0x11;
      goto code_r0x000141b5a37e;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b57f80;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_838 = in_XMM0_Qa;
      uStack_830 = uStack_d29;
      uStack_82c = uStack_d25;
      uStack_828 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x20:
code_r0x000141b583f8:
    if (!SBORROW8(0,(longlong)pbStack_858)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396c92;
      goto code_r0x000141b5a312;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b5841e;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_858 = in_XMM0_Qa;
      uStack_850 = uStack_d29;
      uStack_84c = uStack_d25;
      uStack_848 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x21:
code_r0x000141b579f8:
    if (!SBORROW8(0,(longlong)pbStack_878)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396c9b;
      goto code_r0x000141b5a26a;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b57a1e;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_878 = in_XMM0_Qa;
      uStack_870 = uStack_d29;
      uStack_86c = uStack_d25;
      uStack_868 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x22:
code_r0x000141b578ba:
    if (!SBORROW8(0,(longlong)pbStack_898)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396ca5;
      goto code_r0x000141b5a332;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b578e0;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_898 = in_XMM0_Qa;
      uStack_890 = uStack_d29;
      uStack_88c = uStack_d25;
      uStack_888 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x23:
code_r0x000141b5777c:
    if (!SBORROW8(0,(longlong)pbStack_8b8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396cac;
      goto code_r0x000141b5a20d;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b577a2;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_8b8 = in_XMM0_Qa;
      uStack_8b0 = uStack_d29;
      uStack_8ac = uStack_d25;
      uStack_8a8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x24:
code_r0x000141b577e6:
    if (!SBORROW8(0,(longlong)pbStack_8d8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396cb4;
      goto code_r0x000141b5a332;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b5780c;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_8d8 = in_XMM0_Qa;
      uStack_8d0 = uStack_d29;
      uStack_8cc = uStack_d25;
      uStack_8c8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x25:
code_r0x000141b57712:
    if (!SBORROW8(0,(longlong)pbStack_8f8)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396cbb;
      goto code_r0x000141b5a372;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b57738;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_8f8 = in_XMM0_Qa;
      uStack_8f0 = uStack_d29;
      uStack_8ec = uStack_d25;
      uStack_8e8 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x26:
code_r0x000141b586de:
    if (!SBORROW8(0,(longlong)pbStack_918)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396cc0;
      goto code_r0x000141b5a1c7;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b58704;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_918 = in_XMM0_Qa;
      uStack_910 = uStack_d29;
      uStack_90c = uStack_d25;
      uStack_908 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x27:
code_r0x000141b584cc:
    if (!SBORROW8(0,(longlong)pbStack_938)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puVar28 = &UNK_143396ccb;
      goto code_r0x000141b5a1c7;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b584f2;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_938 = in_XMM0_Qa;
      uStack_930 = uStack_d29;
      uStack_92c = uStack_d25;
      uStack_928 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x28:
code_r0x000141b57b36:
    if (!SBORROW8(0,(longlong)pbStack_958)) {
      *(undefined1 *)(puStack_50 + 1) = 0x2c;
      puStack_50[2] = &UNK_143396cfb;
      puStack_50[3] = 0x13;
      goto code_r0x000141b5a37e;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    pbStack_e70 = (undefined *)0x141b57b5c;
    pdb_141b4d1a0(&cStack_438,pbVar2);
    if (cStack_438 == '2') {
      uStack_d21 = (undefined1)uStack_420;
      uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
      uStack_d31._0_4_ = (undefined4)CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430));
      uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
      uStack_d29 = (undefined4)CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428));
      uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
      in_XMM0_Qa = (byte *)CONCAT44(uStack_d31._4_4_,(undefined4)uStack_d31);
      pbStack_958 = in_XMM0_Qa;
      uStack_950 = uStack_d29;
      uStack_94c = uStack_d25;
      uStack_948 = CONCAT71((undefined7)uStack_d20,uStack_d21);
      pbVar21 = pbVar26;
      in_XMM0_Dc = uStack_d29;
      in_XMM0_Dd = uStack_d25;
      goto code_r0x000141b575a0;
    }
    break;
  case 0x29:
    goto code_r0x000141b5802e;
  default:
    goto code_r0x000141b68797;
  case 0x36:
  case 0x38:
code_r0x000141b6879f:
code_r0x000141b68797:
    return pbVar18;
  case 0x3b:
code_r0x000141b68809:
    pcVar4 = (code *)swi(3);
    pbVar39 = (byte *)(*pcVar4)();
    return pbVar39;
  case 0x3d:
code_r0x000141b68819:
    pbVar21 = &UNK_1433976a0;
    pbStack_e38 = (byte *)((ulonglong)&pbStack_e28 & 0xffffffff);
    goto code_r0x000141b68810;
  case 0x3e:
code_r0x000141b687b7:
    bVar14 = in((short)pbVar21);
    *param_2 = bVar14;
    pbStack_df0 = (byte *)0xfffffffffffffffe;
    pbStack_df8 = &UNK_1433976a0;
    pbStack_e70 = &UNK_141b687cb;
    pdb_141b68810();
    pbVar21 = pbStack_df8 + 0x20;
    puVar29 = &uStack_e30;
    param_2 = param_2 + 1;
code_r0x000141b68810:
    *(byte **)((longlong)puVar29 + -8) = pbStack_e38;
    *(byte **)((longlong)puVar29 + -0x10) = pbVar39;
    *(byte **)((longlong)puVar29 + -0x18) = param_2;
    *(undefined **)((longlong)puVar29 + -0x20) = &UNK_143397664;
    *(undefined8 *)((longlong)puVar29 + -0x28) = 0xfffffffffffffffe;
    bVar14 = *pbVar21;
    if (0x14 < (ulonglong)bVar14) {
      uVar16 = *(undefined8 *)((longlong)puVar29 + -0x20);
      uVar37 = *(undefined8 *)((longlong)puVar29 + -0x18);
      uVar5 = *(undefined8 *)((longlong)puVar29 + -0x10);
      *(undefined8 *)((longlong)puVar29 + -8) = *(undefined8 *)((longlong)puVar29 + -8);
      *(byte **)((longlong)puVar29 + -0x10) = pbVar26;
      *(undefined8 *)((longlong)puVar29 + -0x18) = uVar5;
      *(undefined8 *)((longlong)puVar29 + -0x20) = uVar37;
      *(undefined8 *)((longlong)puVar29 + -0x28) = uVar16;
      *(undefined8 *)((longlong)puVar29 + -0x30) = 0xfffffffffffffffe;
      *(undefined8 *)((longlong)puVar29 + -0x38) = *(undefined8 *)(pbVar21 + 0x10);
      *(byte **)((longlong)puVar29 + -0x48) = pbVar21 + 8;
      *(undefined8 *)((longlong)puVar29 + -0x50) = *(undefined8 *)(pbVar21 + 0x18);
      *(undefined8 *)((longlong)puVar29 + -0x40) = 0;
      while (lVar25 = *(longlong *)((longlong)puVar29 + -0x40),
            lVar25 != *(longlong *)((longlong)puVar29 + -0x50)) {
        *(longlong *)((longlong)puVar29 + -0x40) = lVar25 + 1;
        *(longlong *)((longlong)puVar29 + -0x58) =
             lVar25 * 0x40 + *(longlong *)((longlong)puVar29 + -0x38);
        *(undefined **)((longlong)puVar29 + -0x80) = &UNK_140973995;
        pdb_14098ca70();
        *(undefined **)((longlong)puVar29 + -0x80) = &UNK_1409739a3;
        pdb_14098ca70(*(longlong *)((longlong)puVar29 + -0x58) + 0x20);
      }
      lVar27 = *(longlong *)*(byte **)((longlong)puVar29 + -0x48);
      lVar25 = *(longlong *)((longlong)puVar29 + -0x38);
      if (lVar27 == 0) {
        return *(byte **)((longlong)puVar29 + -0x48);
      }
      lVar27 = lVar27 << 6;
      uVar17 = 8;
      uVar16 = *(undefined8 *)((longlong)puVar29 + -0x18);
      uVar37 = *(undefined8 *)((longlong)puVar29 + -8);
code_r0x0001406abac0:
      *(undefined8 *)((longlong)puVar29 + -8) = uVar37;
      *(undefined8 *)((longlong)puVar29 + -0x10) = uVar16;
      lVar38 = lVar25;
      if (0x10 < uVar17) {
        lVar38 = *(longlong *)(lVar25 + -8);
      }
      *(undefined **)((longlong)puVar29 + -0x40) = &UNK_140f3c37e;
      uVar16 = GetProcessHeap(lVar25,lVar27);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pbVar39 = (byte *)HeapFree(uVar16,0,lVar38);
      return pbVar39;
    }
    pbVar39 = &UNK_143397748 + *(int *)(&UNK_143397748 + (ulonglong)bVar14 * 4);
    switch(bVar14) {
    default:
      goto code_r0x000141b6883e;
    case 0xc:
    case 0xe:
      lVar27 = *(longlong *)(pbVar21 + 8);
      if (lVar27 == 0) {
        return pbVar39;
      }
      lVar25 = *(longlong *)(pbVar21 + 0x10);
      uVar17 = 1;
      goto code_r0x000141b688ff;
    case 0x11:
      *(undefined8 *)((longlong)puVar29 + -0x30) = *(undefined8 *)(pbVar21 + 8);
      *(undefined **)((longlong)puVar29 + -0x70) = &UNK_141b688be;
      pdb_141b68810();
      break;
    case 0x13:
      *(undefined8 *)((longlong)puVar29 + -0x30) = *(undefined8 *)(pbVar21 + 8);
      *(undefined **)((longlong)puVar29 + -0x70) = &UNK_141b688ce;
      pdb_141b68810();
      break;
    case 0x14:
      lVar25 = *(longlong *)(pbVar21 + 0x10);
      *(byte **)((longlong)puVar29 + -0x40) = pbVar21;
      *(undefined8 *)((longlong)puVar29 + -0x48) = *(undefined8 *)(pbVar21 + 0x18);
      *(undefined8 *)((longlong)puVar29 + -0x30) = 0;
      *(longlong *)((longlong)puVar29 + -0x38) = lVar25;
      while (*(longlong *)((longlong)puVar29 + -0x48) != *(longlong *)((longlong)puVar29 + -0x30)) {
        *(longlong *)((longlong)puVar29 + -0x30) = *(longlong *)((longlong)puVar29 + -0x30) + 1;
        *(undefined **)((longlong)puVar29 + -0x70) = &UNK_141b6889a;
        pdb_14098ca70(lVar25);
        lVar25 = lVar25 + 0x20;
      }
      pbVar39 = *(byte **)((longlong)puVar29 + -0x40);
      if (*(longlong *)(pbVar39 + 8) == 0) {
code_r0x000141b6883e:
        return pbVar39;
      }
      lVar27 = *(longlong *)(pbVar39 + 8) << 5;
      uVar17 = 8;
      lVar25 = *(longlong *)((longlong)puVar29 + -0x38);
code_r0x000141b688ff:
      uVar16 = *(undefined8 *)((longlong)puVar29 + -0x10);
      uVar37 = *(undefined8 *)((longlong)puVar29 + -8);
      goto code_r0x0001406abac0;
    }
    lVar27 = 0x20;
    uVar17 = 8;
    lVar25 = *(longlong *)((longlong)puVar29 + -0x30);
    goto code_r0x000141b688ff;
  case 0x3f:
code_r0x000142deec04:
    pbVar18 = (byte *)((ulonglong)pbVar18 & 0xffffffffffffff50);
    in_XMM0_Qa = in_XMM0_Qa;
  case 0x46:
code_r0x000142deebf7:
    pbStack_e38 = in_XMM0_Qa;
    *pbVar18 = *pbVar18 + (char)pbVar18;
    pbVar18[-0x73] = pbVar18[-0x73] + 0xa0;
    *(undefined8 *)((ulonglong)pbVar18 & 0xffffffffffffff48) = pbVar21;
    uStack_e30 = (byte *)CONCAT44(in_XMM0_Dd,in_XMM0_Dc);
    pbStack_e48 = &UNK_143396248;
    pbStack_e70 = &UNK_142deec2e;
    pbStack_e40 = param_4;
    pbStack_e18 = param_3;
    pdb_142dc8294(&UNK_1433976a0,(undefined8 *)((ulonglong)pbVar18 & 0xffffffffffffff48),
                  &UNK_143396248,&pbStack_e18);
    pcVar4 = (code *)swi(3);
    pbVar39 = (byte *)(*pcVar4)();
    return pbVar39;
  case 0x40:
code_r0x000142deec10:
    pbVar18 = (byte *)((ulonglong)pbVar18 & 0xffffffffffffff30);
    in_XMM0_Qa = in_XMM0_Qa;
    goto code_r0x000142deebf7;
  case 0x41:
code_r0x000142deebd1:
  case 0x4b:
code_r0x000142deebb1:
    uVar32 = (ulonglong)((int)auStack_e68 - 1);
    puVar33 = (undefined1 *)(uVar32 - 0x58);
    uVar1 = *(undefined4 *)(uVar32 + 0x28);
    uVar6 = *(undefined4 *)(uVar32 + 0x2c);
    uVar7 = *(undefined4 *)(uVar32 + 0x30);
    uVar8 = *(undefined4 *)(uVar32 + 0x34);
    *(byte **)(uVar32 - 0x10) = pbVar21;
    *(byte **)(uVar32 - 8) = param_3;
    *(undefined4 *)(uVar32 - 0x28) = uVar1;
    *(undefined4 *)(uVar32 - 0x24) = uVar6;
    *(undefined4 *)(uVar32 - 0x20) = uVar7;
    *(undefined4 *)(uVar32 - 0x1c) = uVar8;
    *(undefined **)(uVar32 - 0x30) = param_4;
    *(undefined **)(uVar32 - 0x38) = &UNK_143396228;
code_r0x000142deebeb:
    *(undefined **)(puVar33 + -8) = &UNK_142deebf0;
    pdb_142dc8294();
    pcVar4 = (code *)swi(3);
    pbVar39 = (byte *)(*pcVar4)();
    return pbVar39;
  case 0x42:
    goto code_r0x000142deebeb;
  case 0x43:
code_r0x000142deeba4:
    pbVar18 = (byte *)((ulonglong)pbVar18 & 0xffffffffffffff20);
    in_XMM0_Qa = in_XMM0_Qa;
  case 0x4f:
  case 0x50:
code_r0x000142deeb87:
    pbStack_e38 = in_XMM0_Qa;
    *(int *)pbVar18 = (int)pbVar21;
    uStack_e30 = (byte *)CONCAT44(in_XMM0_Dd,in_XMM0_Dc);
    pbStack_e48 = &UNK_143395148;
    pbStack_e70 = &UNK_142deebb2;
    pbStack_e40 = param_4;
    pbStack_e18 = param_3;
    pdb_142dc8294(&UNK_1433976a0,pbVar18,&UNK_143395148,&pbStack_e18);
    pcVar4 = (code *)swi(3);
    pbVar39 = (byte *)(*pcVar4)();
    return pbVar39;
  case 0x44:
code_r0x000142deec1d:
    cRam00000006501f5164 = cRam00000006501f5164 + -0x60;
    pbVar18 = (byte *)((ulonglong)pbVar18 & 0xffffffffffffff20);
    goto code_r0x000142deebf7;
  case 0x45:
code_r0x000142deec38:
    *pbVar18 = *pbVar18 + (char)pbVar18;
    pbVar18[-0x73] = pbVar18[-0x73] + 0xa0;
  case 0x4c:
code_r0x000142deec2b:
    uVar34 = (ulonglong)((int)auStack_e68 - 1);
    puVar35 = (undefined1 *)(uVar34 - 0x58);
    uVar1 = *(undefined4 *)(uVar34 + 0x28);
    uVar6 = *(undefined4 *)(uVar34 + 0x2c);
    uVar7 = *(undefined4 *)(uVar34 + 0x30);
    uVar8 = *(undefined4 *)(uVar34 + 0x34);
    *(byte **)(uVar34 - 0x10) = pbVar21;
    *(byte **)(uVar34 - 8) = param_3;
    *(undefined4 *)(uVar34 - 0x28) = uVar1;
    *(undefined4 *)(uVar34 - 0x24) = uVar6;
    *(undefined4 *)(uVar34 - 0x20) = uVar7;
    *(undefined4 *)(uVar34 - 0x1c) = uVar8;
    *(undefined **)(uVar34 - 0x30) = param_4;
code_r0x000142deec55:
    *(undefined **)(puVar35 + 0x20) = &UNK_143396268;
    puVar36 = puVar35;
code_r0x000142deec67:
    *(undefined **)(puVar36 + -8) = &UNK_142deec6c;
    pdb_142dc8294();
code_r0x000142deec6c:
    pcVar4 = (code *)swi(3);
    pbVar39 = (byte *)(*pcVar4)();
    return pbVar39;
  case 0x47:
    goto code_r0x000142deec55;
  case 0x48:
code_r0x000142deebbe:
    pbVar18[-0x73] = pbVar18[-0x73] + 0xa0;
    goto code_r0x000142deebb1;
  case 0x49:
code_r0x000142deec46:
    goto code_r0x000142deec2b;
  case 0x4a:
code_r0x000142deeb99:
    pbVar18 = (byte *)((ulonglong)pbVar18 & 0xffffffffffffff28);
    goto code_r0x000142deeb87;
  case 0x4d:
code_r0x000142deeb8c:
    pbVar18 = (byte *)((ulonglong)pbVar18 & 0xffffffffffffff50);
    goto code_r0x000142deeb87;
  case 0x4e:
code_r0x000142deebde:
    puVar33 = auStack_e60;
    cRam00000006501f5164 = cRam00000006501f5164 + -0x60;
    goto code_r0x000142deebeb;
  case 0x51:
    goto code_r0x000142deec6c;
  case 0x52:
code_r0x000142deec71:
                    /* WARNING: Could not emulate address calculation at 0x000142deec7a */
                    /* WARNING: Treating indirect jump as call */
    pbVar39 = (byte *)(*(code *)(&UNK_14339779c + *(int *)(&UNK_14339779c + (longlong)pbVar18 * 4)))
                                ();
    return pbVar39;
  case 0x53:
code_r0x000142deec62:
    puVar36 = auStack_e68;
  case 0x54:
    goto code_r0x000142deec67;
  case 0x55:
code_r0x000141b6911f:
    pcVar4 = (code *)swi(3);
    pbVar39 = (byte *)(*pcVar4)();
    return pbVar39;
  case 0x56:
code_r0x000141b6918b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x57:
code_r0x000141b6914a:
    uStack_d31._0_4_ = CONCAT31(0x3976a0,(undefined1)uStack_d31);
    uStack_d31._4_4_ = CONCAT31(uStack_d31._5_3_,0x43);
  case 0x59:
code_r0x000141b6912b:
    pbStack_e70 = &UNK_143397664;
    puVar30 = auStack_ff8;
    ppbVar19 = (byte **)(abStack_fd8 + 0x60);
    pbStack_e78 = (byte *)0xfffffffffffffffe;
    puStack_ec0 = &UNK_1433976a0;
    pbVar26 = *(byte **)(pbVar21 + 0x40);
    pbVar39 = (byte *)0x4000;
    if (pbVar26 < (byte *)0x4000) {
      pbVar39 = pbVar26;
    }
    param_2 = pbVar21;
    if (pbVar26 == (byte *)0x0) {
code_r0x000141b69191:
      pbVar21 = (byte *)0x8;
      pbVar39 = (byte *)0x0;
      puVar31 = puVar30;
    }
    else {
      puVar28 = (undefined *)(ulonglong)(uint)((int)pbVar39 << 6);
      puVar30 = auStack_ff8;
code_r0x000141b6916d:
      *(undefined **)(puVar30 + -8) = &UNK_141b69172;
      pdb_14007ee60();
      *(undefined **)(puVar30 + -8) = &UNK_141b6917f;
      pbVar21 = pub_1406abab0((ulonglong)puVar28,8);
      puVar31 = puVar30;
      if (pbVar21 == (byte *)0x0) {
        *(undefined **)(puVar30 + -8) = &UNK_141b69191;
        pdb_142dc7e2a(8,puVar28);
        goto code_r0x000141b69191;
      }
    }
    ppbVar19[0x18] = pbVar39;
    ppbVar19[0x19] = pbVar21;
    ppbVar19[0x1a] = (byte *)0x0;
    puVar40 = (undefined4 *)((longlong)ppbVar19 + -0x5f);
    puVar41 = (undefined8 *)((longlong)ppbVar19 + 0x99);
    pbVar21 = param_2;
code_r0x000141b691c0:
    pbVar39 = (byte *)((longlong)ppbVar19 + -0x3f);
    *(undefined **)(puVar31 + -8) = &UNK_141b69217;
    pdb_141bdadf0(ppbVar19 + -0xc,pbVar21);
    bVar14 = *(byte *)(ppbVar19 + -0xc);
    puVar22 = (uint *)(ulonglong)bVar14;
    if (bVar14 == 0x17) {
      pbVar39 = ppbVar19[-0xb];
code_r0x000141b69498:
      pbVar21 = ppbVar19[0x17];
      *(byte **)(pbVar21 + 8) = pbVar39;
      *pbVar21 = 0x16;
      *(undefined **)(puVar31 + -8) = &UNK_141b694b2;
      pdb_140973930(ppbVar19 + 0x18);
      return pbVar21;
    }
    if (bVar14 == 0x16) {
      *(byte **)((longlong)ppbVar19 + 0x77) = ppbVar19[0x1a];
      *(byte **)((longlong)ppbVar19 + 0x67) = ppbVar19[0x18];
      *(byte **)((longlong)ppbVar19 + 0x6f) = ppbVar19[0x19];
      pbVar39 = ppbVar19[0x17];
      *pbVar39 = 0x15;
      pbVar21 = ppbVar19[0xd];
      uVar16 = *(undefined8 *)((longlong)ppbVar19 + 0x6f);
      uVar37 = *(undefined8 *)((longlong)ppbVar19 + 0x77);
      *(byte **)(pbVar39 + 1) = ppbVar19[0xc];
      *(byte **)(pbVar39 + 9) = pbVar21;
      *(undefined8 *)(pbVar39 + 0x10) = uVar16;
      *(undefined8 *)(pbVar39 + 0x18) = uVar37;
      return pbVar39;
    }
    *(byte *)(ppbVar19 + 0x13) = bVar14;
    uVar1 = *puVar40;
    uVar6 = puVar40[1];
    uVar7 = puVar40[2];
    uVar8 = puVar40[3];
    uVar9 = *(undefined4 *)((longlong)puVar40 + 0x13);
    uVar10 = *(undefined4 *)((longlong)puVar40 + 0x17);
    uVar11 = *(undefined4 *)((longlong)puVar40 + 0x1b);
    *(undefined4 *)((longlong)puVar41 + 0xf) = *(undefined4 *)((longlong)puVar40 + 0xf);
    *(undefined4 *)((longlong)puVar41 + 0x13) = uVar9;
    *(undefined4 *)((longlong)puVar41 + 0x17) = uVar10;
    *(undefined4 *)((longlong)puVar41 + 0x1b) = uVar11;
    *(undefined4 *)puVar41 = uVar1;
    *(undefined4 *)((longlong)puVar41 + 4) = uVar6;
    *(undefined4 *)(puVar41 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar41 + 0xc) = uVar8;
    bVar14 = pbVar21[0x48];
    pbVar21[0x48] = 6;
    if (bVar14 == 6) {
      *(undefined **)(puVar31 + -8) = &UNK_141b6947e;
      pbVar39 = (byte *)pdb_142d86fc0(&UNK_14339ab08,0x10);
      *(undefined **)(puVar31 + -8) = &UNK_141b69497;
      pdb_141b68810(ppbVar19 + 0x13);
      goto code_r0x000141b69498;
    }
    pbVar26 = *(byte **)(pbVar21 + 0x50);
    pbVar2 = *(byte **)(pbVar21 + 0x60);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar14) {
    case 7:
      pbVar23 = (byte *)(ulonglong)*puVar22;
      *pbVar23 = *pbVar23 + (char)*puVar22;
      *(undefined1 *)(ppbVar19 + 7) = 0xc;
      ppbVar19[8] = pbVar26;
      ppbVar19[9] = pbVar23;
      ppbVar19[10] = pbVar2;
      cVar15 = '\f';
      break;
    case 8:
      ppbVar19[-8] = (byte *)puVar22;
      ppbVar19[-7] = pbVar2;
      *(undefined **)(puVar31 + -8) = &UNK_141b69da0;
      pdb_141bc80b0(ppbVar19 + 7,ppbVar19 + -9);
      cVar15 = *(char *)(ppbVar19 + 7);
      pbVar26 = ppbVar19[8];
      if (cVar15 == '\x16') {
code_r0x000141b69ee7:
        *(byte **)((longlong)ppbVar19 + -0x37) = pbVar26;
        *pbVar39 = 0x16;
        ppbVar19[1] = ppbVar19[6];
        ppbVar19[2] = (byte *)0x0;
        ppbVar19[3] = ppbVar19[5];
        pbVar21 = ppbVar19[5];
        while (ppbVar19[1] != ppbVar19[2]) {
          ppbVar19[2] = ppbVar19[2] + 1;
          *(undefined **)(puVar31 + -8) = &UNK_141b69f2a;
          pdb_14098ca70(pbVar21);
          pbVar21 = pbVar21 + 0x20;
        }
        pbVar21 = ppbVar19[4];
        if (pbVar21 != (byte *)0x0) {
          pbVar26 = ppbVar19[3];
          *(undefined **)(puVar31 + -8) = &UNK_141b69f4c;
          pub_1406abac0(pbVar26,(longlong)pbVar21 << 5,8);
        }
        return pbVar39;
      }
      uVar1 = *(undefined4 *)((longlong)puVar41 + -0xf);
      *(undefined4 *)((longlong)ppbVar19 + 0x5b) = *(undefined4 *)((longlong)puVar41 + -0xc);
      *(undefined4 *)(ppbVar19 + 0xb) = uVar1;
      uVar1 = *(undefined4 *)((longlong)puVar41 + 4);
      uVar6 = *(undefined4 *)(puVar41 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar41 + 0xc);
      *(undefined4 *)(ppbVar19 + -2) = *(undefined4 *)puVar41;
      *(undefined4 *)((longlong)ppbVar19 + -0xc) = uVar1;
      *(undefined4 *)(ppbVar19 + -1) = uVar6;
      *(undefined4 *)((longlong)ppbVar19 + -4) = uVar7;
      if (cVar15 == '\x17') goto code_r0x000141b69ee7;
      goto code_r0x000141b69e6b;
    case 9:
      if ((int)pbVar26 == 1) {
        *(undefined1 *)(ppbVar19 + 7) = 8;
        ppbVar19[8] = (byte *)puVar22;
        cVar15 = '\b';
      }
      else {
        *(undefined1 *)(ppbVar19 + 7) = 10;
        ppbVar19[8] = (byte *)puVar22;
        cVar15 = '\n';
      }
      break;
    case 10:
      goto code_r0x000141b69d6f;
    case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar26 = ppbVar19[8];
    uVar1 = *(undefined4 *)((longlong)puVar41 + -0xc);
    *(undefined4 *)(ppbVar19 + 0xb) = *(undefined4 *)((longlong)puVar41 + -0xf);
    *(undefined4 *)((longlong)ppbVar19 + 0x5b) = uVar1;
    pbVar2 = (byte *)puVar41[1];
    ppbVar19[-2] = (byte *)*puVar41;
    ppbVar19[-1] = pbVar2;
code_r0x000141b69e6b:
    *(char *)(ppbVar19 + -6) = cVar15;
    uVar1 = *(undefined4 *)(ppbVar19 + 0xb);
    *(undefined4 *)((longlong)puVar40 + 3) = *(undefined4 *)((longlong)ppbVar19 + 0x5b);
    *puVar40 = uVar1;
    ppbVar19[-5] = pbVar26;
    uVar1 = *(undefined4 *)((longlong)ppbVar19 + -0xc);
    uVar6 = *(undefined4 *)(ppbVar19 + -1);
    uVar7 = *(undefined4 *)((longlong)ppbVar19 + -4);
    *(undefined4 *)((longlong)puVar40 + 0xf) = *(undefined4 *)(ppbVar19 + -2);
    *(undefined4 *)((longlong)puVar40 + 0x13) = uVar1;
    *(undefined4 *)((longlong)puVar40 + 0x17) = uVar6;
    *(undefined4 *)((longlong)puVar40 + 0x1b) = uVar7;
    pbVar26 = ppbVar19[6];
    if (pbVar26 == ppbVar19[4]) {
      *(undefined **)(puVar31 + -8) = &UNK_141b69e9f;
      pdb_142db0ce0(&UNK_1433977f4);
    }
    pbVar2 = ppbVar19[5];
    pbVar18 = ppbVar19[-6];
    pbVar13 = ppbVar19[-5];
    pbVar20 = ppbVar19[-3];
    pbVar23 = pbVar2 + (longlong)pbVar26 * 0x20 + 0x10;
    *(byte **)pbVar23 = ppbVar19[-4];
    *(byte **)(pbVar23 + 8) = pbVar20;
    pbVar2 = pbVar2 + (longlong)pbVar26 * 0x20;
    *(byte **)pbVar2 = pbVar18;
    *(byte **)(pbVar2 + 8) = pbVar13;
    ppbVar19[6] = pbVar26 + 1;
code_r0x000141b69d43:
    pcVar3 = *(char **)(pbVar21 + 8);
    if ((pcVar3 == *(char **)(pbVar21 + 0x18)) ||
       (*(char **)(pbVar21 + 8) = pcVar3 + 0x20, *pcVar3 == '\x06')) {
      *(byte **)((longlong)ppbVar19 + 0x4f) = ppbVar19[6];
      *(byte **)((longlong)ppbVar19 + 0x3f) = ppbVar19[4];
      *(byte **)((longlong)ppbVar19 + 0x47) = ppbVar19[5];
      *pbVar39 = 0x14;
      pbVar21 = ppbVar19[8];
      uVar16 = *(undefined8 *)((longlong)ppbVar19 + 0x47);
      uVar37 = *(undefined8 *)((longlong)ppbVar19 + 0x4f);
      *(byte **)(pbVar39 + 1) = ppbVar19[7];
      *(byte **)(pbVar39 + 9) = pbVar21;
      *(undefined8 *)(pbVar39 + 0x10) = uVar16;
      *(undefined8 *)(pbVar39 + 0x18) = uVar37;
      return pbVar39;
    }
code_r0x000141b69d6f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  case 0x58:
    goto code_r0x000141b6916d;
  case 0x5a:
code_r0x000141b6919e:
    pbVar18[-0x77] = pbVar18[-0x77] + 0xa0;
    cVar15 = (char)pbVar18;
    *pbVar18 = *pbVar18 + cVar15;
    pbVar18[-0x39] = pbVar18[-0x39] + 0xa0;
    *pbVar18 = *pbVar18 + cVar15;
    *pbVar18 = *pbVar18 + cVar15;
    *pbVar18 = *pbVar18 + cVar15;
    pbVar21 = param_2;
    goto code_r0x000141b691c0;
  case 0x5b:
code_r0x000141b69c14:
    pbStack_e70 = &UNK_141b69c1a;
    pbVar39 = (byte *)(**(code **)(pbVar18 + 0x28c48348))();
    return pbVar39;
  case 0x5c:
code_r0x000141b69c6d:
    pcVar4 = (code *)swi(3);
    pbVar39 = (byte *)(*pcVar4)();
    return pbVar39;
  case 0x5d:
code_r0x000141b69c37:
    uStack_e80 = 0x8000000000000000;
    puStack_ea0 = &UNK_143397664;
    apbStack_ed0[0] = &UNK_141b69c55;
    pbStack_e98 = param_2;
    pbStack_e90 = pbVar39;
    pbStack_e88 = pbVar2;
    pbStack_e78 = pbVar26;
    pbStack_e70 = param_2;
    pbVar18 = (byte *)pdb_14099a9b0(pbVar21 + 0xa8);
  case 0x5e:
code_r0x000141b69c59:
    puStack_ea0[0x5f] = puStack_ea0[0x5f] - (char)puStack_ea0;
    return pbVar18;
  case 0x5f:
code_r0x000141b69c1b:
    return pbVar18;
  case 0x60:
code_r0x000141b69c7c:
    ppbVar19 = apbStack_ed0;
    pbStack_e70 = (byte *)0xfffffffffffffffe;
    pbVar39 = &UNK_1433976a0;
    puStack_f58 = &UNK_141b69ca1;
    pbVar26 = pbVar21;
    uVar17 = pdb_140de2590();
    pbStack_eb0 = (byte *)0x8000;
    if (pbVar26 < (byte *)0x8000) {
      pbStack_eb0 = pbVar26;
    }
    pbVar26 = (byte *)0x0;
    if ((uVar17 & 1) != 0) {
      pbVar26 = pbStack_eb0;
    }
    if (pbVar26 == (byte *)0x0) {
      pbStack_ea8 = (byte *)0x8;
      pbStack_eb0 = (byte *)0x0;
    }
    else {
      uVar17 = (ulonglong)(uint)((int)pbVar26 << 5);
      puStack_f58 = &UNK_141b69ccc;
      pdb_14007ee60();
      puStack_f58 = &UNK_141b69cd9;
      pbStack_ea8 = pub_1406abab0(uVar17,8);
      if (pbStack_ea8 == (byte *)0x0) {
        puStack_f58 = &UNK_141b69f5b;
        pdb_142dc7e2a(8,uVar17);
        pcVar4 = (code *)swi(3);
        pbVar39 = (byte *)(*pcVar4)();
        return pbVar39;
      }
    }
    puStack_ea0 = (undefined *)0x0;
    goto code_r0x000141b69d43;
  }
  uStack_d25 = (undefined4)((uint6)uStack_426 >> 0x10);
  uStack_d21 = (undefined1)uStack_420;
  uStack_d20._0_7_ = (undefined7)(CONCAT62(uStack_41e,uStack_420) >> 8);
  uStack_d31._1_3_ = (undefined3)CONCAT61(uStack_42e,uStack_42f);
  uStack_d31._0_4_ = CONCAT31(uStack_d31._1_3_,uStack_430);
  uStack_d31._4_4_ = (undefined4)((uint6)uStack_42e >> 0x10);
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
  *(ulonglong *)((longlong)puStack_50 + 0x11) =
       CONCAT17(uStack_428,CONCAT43(uStack_d31._4_4_,uStack_d31._1_3_));
  *(char *)(puStack_50 + 1) = cStack_438;
  *puStack_50 = 0x8000000000000000;
joined_r0x000141b5a392:
  if ((!SBORROW8(0,(longlong)pbStack_958)) && (pbStack_958 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b5987a;
    pub_1406abac0((byte *)CONCAT44(uStack_94c,uStack_950),(longlong)pbStack_958 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_938)) && (pbStack_938 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b598a5;
    pub_1406abac0((byte *)CONCAT44(uStack_92c,uStack_930),(longlong)pbStack_938 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_918)) && (pbStack_918 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b598d0;
    pub_1406abac0((byte *)CONCAT44(uStack_90c,uStack_910),(longlong)pbStack_918 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_8f8)) && (pbStack_8f8 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b598fb;
    pub_1406abac0((byte *)CONCAT44(uStack_8ec,uStack_8f0),(longlong)pbStack_8f8 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_8d8)) && (pbStack_8d8 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59926;
    pub_1406abac0((byte *)CONCAT44(uStack_8cc,uStack_8d0),(longlong)pbStack_8d8 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_8b8)) && (pbStack_8b8 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59951;
    pub_1406abac0((byte *)CONCAT44(uStack_8ac,uStack_8b0),(longlong)pbStack_8b8 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_898)) && (pbStack_898 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b5997c;
    pub_1406abac0((byte *)CONCAT44(uStack_88c,uStack_890),(longlong)pbStack_898 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_878)) && (pbStack_878 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b599a7;
    pub_1406abac0((byte *)CONCAT44(uStack_86c,uStack_870),(longlong)pbStack_878 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_858)) && (pbStack_858 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b599d2;
    pub_1406abac0((byte *)CONCAT44(uStack_84c,uStack_850),(longlong)pbStack_858 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_838)) && (pbStack_838 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b599fd;
    pub_1406abac0((byte *)CONCAT44(uStack_82c,uStack_830),(longlong)pbStack_838 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_818)) && (pbStack_818 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59a28;
    pub_1406abac0((byte *)CONCAT44(uStack_80c,uStack_810),(longlong)pbStack_818 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_7f8)) && (pbStack_7f8 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59a53;
    pub_1406abac0((byte *)CONCAT44(uStack_7ec,uStack_7f0),(longlong)pbStack_7f8 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_7d8)) && (pbStack_7d8 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59a7e;
    pub_1406abac0((byte *)CONCAT44(uStack_7cc,uStack_7d0),(longlong)pbStack_7d8 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_7b8)) && (pbStack_7b8 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59aa9;
    pub_1406abac0((byte *)CONCAT44(uStack_7ac,uStack_7b0),(longlong)pbStack_7b8 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_798)) && (pbStack_798 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59ad4;
    pub_1406abac0((byte *)CONCAT44(uStack_78c,uStack_790),(longlong)pbStack_798 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_778)) && (pbStack_778 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59aff;
    pub_1406abac0((byte *)CONCAT44(uStack_76c,uStack_770),(longlong)pbStack_778 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_758)) && (pbStack_758 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59b2a;
    pub_1406abac0((byte *)CONCAT44(uStack_74c,uStack_750),(longlong)pbStack_758 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_738)) && (pbStack_738 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59b55;
    pub_1406abac0((byte *)CONCAT44(uStack_72c,uStack_730),(longlong)pbStack_738 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_718)) && (pbStack_718 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59b80;
    pub_1406abac0((byte *)CONCAT44(uStack_70c,uStack_710),(longlong)pbStack_718 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_6f8)) && (pbStack_6f8 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59bab;
    pub_1406abac0((byte *)CONCAT44(uStack_6ec,uStack_6f0),(longlong)pbStack_6f8 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_6d8)) && (pbStack_6d8 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59bd6;
    pub_1406abac0((byte *)CONCAT44(uStack_6cc,uStack_6d0),(longlong)pbStack_6d8 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_6b8)) && (pbStack_6b8 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59c01;
    pub_1406abac0((byte *)CONCAT44(uStack_6ac,uStack_6b0),(longlong)pbStack_6b8 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_698)) && (pbStack_698 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59c2c;
    pub_1406abac0((byte *)CONCAT44(uStack_68c,uStack_690),(longlong)pbStack_698 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_678)) && (pbStack_678 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59c57;
    pub_1406abac0((byte *)CONCAT44(uStack_66c,uStack_670),(longlong)pbStack_678 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_658)) && (pbStack_658 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59c82;
    pub_1406abac0((byte *)CONCAT44(uStack_64c,uStack_650),(longlong)pbStack_658 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_638)) && (pbStack_638 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59cad;
    pub_1406abac0((byte *)CONCAT44(uStack_62c,uStack_630),(longlong)pbStack_638 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_618)) && (pbStack_618 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59cd8;
    pub_1406abac0((byte *)CONCAT44(uStack_60c,uStack_610),(longlong)pbStack_618 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_5f8)) && (pbStack_5f8 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59d03;
    pub_1406abac0((byte *)CONCAT44(uStack_5ec,uStack_5f0),(longlong)pbStack_5f8 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_5d8)) && (pbStack_5d8 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59d2e;
    pub_1406abac0((byte *)CONCAT44(uStack_5cc,uStack_5d0),(longlong)pbStack_5d8 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_5b8)) && (pbStack_5b8 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59d59;
    pub_1406abac0((byte *)CONCAT44(uStack_5ac,uStack_5b0),(longlong)pbStack_5b8 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_598)) && (pbStack_598 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59d84;
    pub_1406abac0((byte *)CONCAT44(uStack_58c,uStack_590),(longlong)pbStack_598 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_578)) && (pbStack_578 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59daf;
    pub_1406abac0((byte *)CONCAT44(uStack_56c,uStack_570),(longlong)pbStack_578 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_558)) && (pbStack_558 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59dda;
    pub_1406abac0((byte *)CONCAT44(uStack_54c,uStack_550),(longlong)pbStack_558 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_538)) && (pbStack_538 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59e05;
    pub_1406abac0((byte *)CONCAT44(uStack_52c,uStack_530),(longlong)pbStack_538 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_518)) && (pbStack_518 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59e30;
    pub_1406abac0((byte *)CONCAT44(uStack_50c,uStack_510),(longlong)pbStack_518 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_4f8)) && (pbStack_4f8 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59e5b;
    pub_1406abac0((byte *)CONCAT44(uStack_4ec,uStack_4f0),(longlong)pbStack_4f8 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_4d8)) && (pbStack_4d8 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59e86;
    pub_1406abac0((byte *)CONCAT44(uStack_4cc,uStack_4d0),(longlong)pbStack_4d8 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_4b8)) && (pbStack_4b8 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59eb1;
    pub_1406abac0((byte *)CONCAT44(uStack_4ac,uStack_4b0),(longlong)pbStack_4b8 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_498)) && (pbStack_498 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59edc;
    pub_1406abac0((byte *)CONCAT44(uStack_48c,uStack_490),(longlong)pbStack_498 * 0xc,4);
  }
  if ((!SBORROW8(0,(longlong)pbStack_478)) && (pbStack_478 != (byte *)0x0)) {
    pbStack_e70 = (byte *)0x141b59f07;
    pub_1406abac0((byte *)CONCAT44(uStack_46c,uStack_470),(longlong)pbStack_478 * 0xc,4);
  }
  if (SBORROW8(0,(longlong)pbStack_458)) {
    return pbStack_458;
  }
  if (pbStack_458 == (byte *)0x0) {
    return (byte *)0x0;
  }
  pbStack_970 = (byte *)CONCAT44(uStack_44c,uStack_450);
  pbStack_978 = pbStack_458;
  goto LAB_141b59f1f;
code_r0x000141b5802e:
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  pbVar21 = pbVar26;
  goto code_r0x000141b575a0;
}

