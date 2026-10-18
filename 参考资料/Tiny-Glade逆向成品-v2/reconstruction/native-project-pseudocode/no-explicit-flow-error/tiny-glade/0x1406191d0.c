// VA 0x1406191d0, PDB extent 2948 bytes
// tiny_glade::panic_reporter::sentry_reporter::panic_info_to_sentry_event
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/sentry_reporter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::panic_reporter::sentry_reporter::panic_info_to_sentry_event
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/sentry_reporter.rs
   Extent: 2948 */

undefined4 *
pdb_1406191d0(undefined4 *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  code *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined8 uStack_810;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined8 uStack_800;
  undefined1 auStack_7f8 [64];
  undefined8 uStack_7b8;
  undefined8 uStack_798;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  longlong lStack_748;
  byte *pbStack_740;
  longlong lStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined2 uStack_710;
  undefined6 uStack_70e;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined1 auStack_540 [232];
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
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
  undefined8 uStack_388;
  undefined8 auStack_378 [9];
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 uStack_2f0;
  ulonglong uStack_2e8;
  byte *pbStack_2e0;
  undefined8 uStack_2d8;
  ulonglong uStack_2d0;
  byte *pbStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  longlong alStack_2a0 [39];
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  byte *pbStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x228,8);
  if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x228);
  }
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(5,1);
  pbStack_60 = pbVar2;
  if (pbVar3 == (byte *)0x0) {
    pdb_142dc7e2a(1,5);
  }
  else {
    pbVar3[4] = 99;
    pbVar3[0] = 0x70;
    pbVar3[1] = 0x61;
    pbVar3[2] = 0x6e;
    pbVar3[3] = 0x69;
    pbStack_68 = pbVar3;
    pdb_14007ee60();
    pbVar2 = pub_1406abab0(5,1);
    if (pbVar2 == (byte *)0x0) {
      pdb_142dc7e2a(1,5);
    }
    else {
      pbVar2[4] = 99;
      pbVar2[0] = 0x70;
      pbVar2[1] = 0x61;
      pbVar2[2] = 0x6e;
      pbVar2[3] = 0x69;
      uStack_828 = 0x8000000000000000;
      uStack_810 = 0x8000000000000000;
      uStack_728 = 0;
      uStack_718 = 0;
      uStack_7b8 = 0x8000000000000001;
      uStack_798 = 0x8000000000000001;
      uStack_758 = 0x8000000000000001;
      uStack_840 = 5;
      uStack_830 = 5;
      uStack_710 = 0x200;
      uStack_838 = pbVar2;
      if ((longlong)param_3 < 0) {
        uVar4 = 0;
      }
      else {
        if (param_3 == 0) {
          pbStack_70 = (byte *)0x1;
          pbStack_58 = (byte *)param_3;
LAB_14061933e:
          pdb_140706fc0(&uStack_150,param_4);
          pbVar2 = pbStack_60;
          uStack_2e8 = 0;
          pbStack_2e0 = (byte *)0x1;
          uStack_2d8 = 0;
          uStack_2d0 = 0x8000000000000000;
          uStack_2b8 = 0x8000000000000000;
          auStack_378[0] = 2;
          uStack_330 = 2;
          uStack_168 = 0x8000000000000001;
          alStack_2a0[0] = -0x8000000000000000;
          *(undefined8 *)(pbStack_60 + 0xd0) = uStack_2a8;
          pbVar2[0xc0] = 0;
          pbVar2[0xc1] = 0;
          pbVar2[0xc2] = 0;
          pbVar2[0xc3] = 0;
          pbVar2[0xc4] = 0;
          pbVar2[0xc5] = 0;
          pbVar2[0xc6] = 0;
          pbVar2[199] = 0x80;
          *(undefined8 *)(pbStack_60 + 200) = uStack_2b0;
          uStack_108 = uStack_150;
          pbStack_100 = (byte *)uStack_148;
          uStack_f8 = uStack_140;
          uStack_f0 = uStack_138;
          uStack_e8 = uStack_130;
          uStack_e0 = uStack_128;
          uStack_d8 = uStack_120;
          uStack_d0 = uStack_118;
          uStack_c8 = uStack_110;
          uStack_c0 = 2;
          uStack_b8 = uStack_328;
          uStack_b0 = uStack_320;
          uStack_ac = uStack_31c;
          uStack_a8 = uStack_318;
          uStack_a4 = uStack_314;
          uStack_a0 = uStack_310;
          uStack_9c = uStack_30c;
          uStack_98 = uStack_308;
          uStack_94 = uStack_304;
          uStack_90 = uStack_300;
          uStack_8c = uStack_2fc;
          uStack_88 = uStack_2f8;
          uStack_84 = uStack_2f4;
          uStack_80 = uStack_2f0;
          *(undefined8 *)(pbStack_60 + 0x220) = uStack_158;
          pbVar2[0x210] = 1;
          pbVar2[0x211] = 0;
          pbVar2[0x212] = 0;
          pbVar2[0x213] = 0;
          pbVar2[0x214] = 0;
          pbVar2[0x215] = 0;
          pbVar2[0x216] = 0;
          pbVar2[0x217] = 0x80;
          *(undefined4 *)(pbStack_60 + 0x218) = uStack_160;
          *(undefined4 *)(pbStack_60 + 0x21c) = uStack_15c;
          pub_142e32760(pbStack_60 + 0xd8,&uStack_840,0x138);
          pub_142e32760(pbVar2,&uStack_108,0x90);
          pbVar2[0x90] = 5;
          pbVar2[0x91] = 0;
          pbVar2[0x92] = 0;
          pbVar2[0x93] = 0;
          pbVar2[0x94] = 0;
          pbVar2[0x95] = 0;
          pbVar2[0x96] = 0;
          pbVar2[0x97] = 0;
          *(byte **)(pbVar2 + 0x98) = pbStack_68;
          pbVar2[0xa0] = 5;
          pbVar2[0xa1] = 0;
          pbVar2[0xa2] = 0;
          pbVar2[0xa3] = 0;
          pbVar2[0xa4] = 0;
          pbVar2[0xa5] = 0;
          pbVar2[0xa6] = 0;
          pbVar2[0xa7] = 0;
          *(byte **)(pbVar2 + 0xa8) = pbStack_58;
          *(byte **)(pbVar2 + 0xb0) = pbStack_70;
          *(byte **)(pbVar2 + 0xb8) = pbStack_58;
          uStack_108 = 1;
          pbStack_100 = pbVar2;
          uStack_f8 = 1;
          uStack_49 = 1;
          pdb_14071a090(&uStack_840);
          *(undefined8 *)(param_1 + 0x112) = uStack_3f8;
          *(undefined8 *)(param_1 + 0x114) = uStack_3f0;
          *(undefined1 *)(param_1 + 0x130) = 4;
          *(undefined8 *)(param_1 + 0x4e) = uStack_708;
          *(undefined8 *)(param_1 + 0x4a) = uStack_718;
          *(ulonglong *)(param_1 + 0x4c) = CONCAT62(uStack_70e,uStack_710);
          *(undefined8 *)(param_1 + 0x54) = uStack_6f0;
          *(undefined8 *)(param_1 + 0x50) = uStack_700;
          *(undefined8 *)(param_1 + 0x52) = uStack_6f8;
          *(undefined8 *)(param_1 + 0x5a) = uStack_6d8;
          *(undefined8 *)(param_1 + 0x56) = uStack_6e8;
          *(undefined8 *)(param_1 + 0x58) = uStack_6e0;
          *(undefined8 *)(param_1 + 0x60) = uStack_6c0;
          *(undefined8 *)(param_1 + 0x5c) = uStack_6d0;
          *(undefined8 *)(param_1 + 0x5e) = uStack_6c8;
          *(undefined8 *)(param_1 + 0x6a) = uStack_698;
          *(undefined8 *)(param_1 + 0x6c) = uStack_690;
          *(undefined8 *)(param_1 + 0x66) = uStack_6a8;
          *(undefined8 *)(param_1 + 0x68) = uStack_6a0;
          *(undefined8 *)(param_1 + 0x62) = uStack_6b8;
          *(undefined8 *)(param_1 + 100) = uStack_6b0;
          *(undefined8 *)(param_1 + 0x72) = uStack_678;
          *(undefined8 *)(param_1 + 0x6e) = uStack_688;
          *(undefined8 *)(param_1 + 0x70) = uStack_680;
          *(undefined8 *)(param_1 + 0x11a) = uStack_3d8;
          *(undefined8 *)(param_1 + 0x116) = uStack_3e8;
          *(undefined8 *)(param_1 + 0x118) = uStack_3e0;
          *(undefined8 *)(param_1 + 0x78) = uStack_660;
          *(undefined8 *)(param_1 + 0x74) = uStack_670;
          *(undefined8 *)(param_1 + 0x76) = uStack_668;
          *(undefined8 *)(param_1 + 0x11c) = uStack_3d0;
          *(undefined8 *)(param_1 + 0x8e) = uStack_608;
          *(undefined8 *)(param_1 + 0x8a) = uStack_618;
          *(undefined8 *)(param_1 + 0x8c) = uStack_610;
          *(undefined8 *)(param_1 + 0x94) = uStack_5f0;
          *(undefined8 *)(param_1 + 0x90) = uStack_600;
          *(undefined8 *)(param_1 + 0x92) = uStack_5f8;
          *(undefined8 *)(param_1 + 0x9a) = uStack_5d8;
          *(undefined8 *)(param_1 + 0x96) = uStack_5e8;
          *(undefined8 *)(param_1 + 0x98) = uStack_5e0;
          *(undefined8 *)(param_1 + 0x9c) = uStack_5d0;
          *(undefined8 *)(param_1 + 0x9e) = uStack_5c8;
          *(undefined8 *)(param_1 + 0xa0) = uStack_5c0;
          *(undefined8 *)(param_1 + 0xbe) = uStack_548;
          *(undefined8 *)(param_1 + 0xba) = uStack_558;
          *(undefined8 *)(param_1 + 0xbc) = uStack_550;
          *(undefined8 *)(param_1 + 0xb6) = uStack_568;
          *(undefined8 *)(param_1 + 0xb8) = uStack_560;
          *(undefined8 *)(param_1 + 0xb2) = uStack_578;
          *(undefined8 *)(param_1 + 0xb4) = uStack_570;
          param_1[0xae] = uStack_588;
          param_1[0xaf] = uStack_584;
          param_1[0xb0] = uStack_580;
          param_1[0xb1] = uStack_57c;
          param_1[0xaa] = uStack_598;
          param_1[0xab] = uStack_594;
          param_1[0xac] = uStack_590;
          param_1[0xad] = uStack_58c;
          param_1[0xa6] = uStack_5a8;
          param_1[0xa7] = uStack_5a4;
          param_1[0xa8] = uStack_5a0;
          param_1[0xa9] = uStack_59c;
          param_1[0xa2] = uStack_5b8;
          param_1[0xa3] = uStack_5b4;
          param_1[0xa4] = uStack_5b0;
          param_1[0xa5] = uStack_5ac;
          pub_142e32760(param_1 + 0xc0,auStack_540,0xe8);
          *(undefined8 *)(param_1 + 0x122) = uStack_3b8;
          *(undefined8 *)(param_1 + 0x11e) = uStack_3c8;
          *(undefined8 *)(param_1 + 0x120) = uStack_3c0;
          *(undefined8 *)(param_1 + 0x3c) = uStack_750;
          *(undefined8 *)(param_1 + 0x38) = uStack_760;
          *(undefined8 *)(param_1 + 0x3a) = uStack_758;
          *(undefined8 *)(param_1 + 0x3e) = uStack_108;
          *(byte **)(param_1 + 0x40) = pbStack_100;
          *(undefined8 *)(param_1 + 0x42) = uStack_f8;
          *param_1 = (undefined4)uStack_840;
          param_1[1] = uStack_840._4_4_;
          param_1[2] = (undefined4)uStack_838;
          param_1[3] = uStack_838._4_4_;
          param_1[4] = (undefined4)uStack_830;
          param_1[5] = uStack_830._4_4_;
          param_1[6] = (undefined4)uStack_828;
          param_1[7] = uStack_828._4_4_;
          param_1[8] = uStack_820;
          param_1[9] = uStack_81c;
          param_1[10] = uStack_818;
          param_1[0xb] = uStack_814;
          param_1[0xc] = (undefined4)uStack_810;
          param_1[0xd] = uStack_810._4_4_;
          param_1[0xe] = uStack_808;
          param_1[0xf] = uStack_804;
          *(undefined8 *)(param_1 + 0x10) = uStack_800;
          pub_142e32760(param_1 + 0x12,auStack_7f8,0x98);
          *(undefined8 *)(param_1 + 0x48) = uStack_720;
          *(undefined8 *)(param_1 + 0x44) = uStack_730;
          *(undefined8 *)(param_1 + 0x46) = uStack_728;
          *(undefined8 *)(param_1 + 0x128) = uStack_3a0;
          *(undefined8 *)(param_1 + 0x124) = uStack_3b0;
          *(undefined8 *)(param_1 + 0x126) = uStack_3a8;
          *(undefined8 *)(param_1 + 0x12e) = uStack_388;
          *(undefined8 *)(param_1 + 0x12a) = uStack_398;
          *(undefined8 *)(param_1 + 300) = uStack_390;
          *(undefined8 *)(param_1 + 0x86) = uStack_628;
          *(undefined8 *)(param_1 + 0x88) = uStack_620;
          *(undefined8 *)(param_1 + 0x82) = uStack_638;
          *(undefined8 *)(param_1 + 0x84) = uStack_630;
          *(undefined8 *)(param_1 + 0x7e) = uStack_648;
          *(undefined8 *)(param_1 + 0x80) = uStack_640;
          *(undefined8 *)(param_1 + 0x7a) = uStack_658;
          *(undefined8 *)(param_1 + 0x7c) = uStack_650;
          *(undefined8 *)(param_1 + 0xfa) = uStack_458;
          *(undefined8 *)(param_1 + 0xfc) = uStack_450;
          *(undefined8 *)(param_1 + 0xfe) = uStack_448;
          *(undefined8 *)(param_1 + 0x100) = uStack_440;
          *(undefined8 *)(param_1 + 0x102) = uStack_438;
          *(undefined8 *)(param_1 + 0x104) = uStack_430;
          *(undefined8 *)(param_1 + 0x106) = uStack_428;
          *(undefined8 *)(param_1 + 0x108) = uStack_420;
          *(undefined8 *)(param_1 + 0x10a) = uStack_418;
          *(undefined8 *)(param_1 + 0x10c) = uStack_410;
          param_1[0x10e] = uStack_408;
          param_1[0x10f] = uStack_404;
          param_1[0x110] = uStack_400;
          param_1[0x111] = uStack_3fc;
          pbStack_68 = (byte *)lStack_738;
          pbStack_60 = (byte *)0x0;
          pbStack_58 = pbStack_740;
          pbVar2 = pbStack_740;
          while (pbStack_68 != pbStack_60) {
            pbStack_60 = (byte *)((longlong)pbStack_60 + 1);
            pdb_1404c2360(pbVar2);
            pbVar2 = pbVar2 + 0x228;
          }
          if (lStack_748 != 0) {
            pub_1406abac0(pbStack_58,lStack_748 * 0x228,8);
          }
          if (uStack_2e8 != 0) {
            pub_1406abac0(pbStack_2e0,uStack_2e8,1);
          }
          if ((!SBORROW8(0,uStack_2d0)) && (uStack_2d0 != 0)) {
            pub_1406abac0(pbStack_2c8,uStack_2d0,1);
          }
          if ((int)auStack_378[0] != 2) {
            pdb_1404c4aa0(auStack_378);
          }
          if (!SBORROW8(0,alStack_2a0[0])) {
            pdb_1404c24f0(alStack_2a0);
          }
          return param_1;
        }
        pbStack_58 = (byte *)param_3;
        pdb_14007ee60();
        uVar4 = 1;
        pbStack_70 = pub_1406abab0(param_3,1);
        if (pbStack_70 != (byte *)0x0) {
          pub_142e32760(pbStack_70,param_2,param_3);
          goto LAB_14061933e;
        }
      }
      pdb_142dc7e2a(uVar4,param_3);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

