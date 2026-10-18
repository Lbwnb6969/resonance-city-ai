// VA 0x140311710, PDB extent 12490 bytes
// tiny_glade::panic_reporter::panic_report::on_game_crashed
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_report.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::panic_reporter::panic_report::on_game_crashed
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_report.rs
   Extent: 12490 */

void pdb_140311710(byte *param_1,byte param_2,undefined1 param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  ulonglong ***pppuVar12;
  ulonglong ****ppppuVar13;
  uint uVar14;
  ulonglong ****ppppuVar15;
  ulonglong ****ppppuVar16;
  ulonglong ****ppppuVar17;
  ulonglong uVar18;
  byte *pbVar19;
  ulonglong ****ppppuVar20;
  undefined1 uVar21;
  byte bVar22;
  longlong lVar23;
  undefined *puVar24;
  longlong lVar25;
  longlong lVar26;
  byte *pbVar27;
  byte bVar28;
  ulonglong ****unaff_R14;
  undefined8 uVar29;
  undefined1 uVar30;
  undefined8 unaff_R15;
  undefined7 uVar31;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined4 uStack_ed0;
  undefined1 uStack_a48;
  ulonglong ***pppuStack_a38;
  ulonglong ***pppuStack_a30;
  ulonglong ***pppuStack_a28;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  undefined4 uStack_a18;
  undefined4 uStack_a14;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  undefined8 uStack_a08;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined4 uStack_9f8;
  undefined4 uStack_9f4;
  undefined4 uStack_9f0;
  undefined4 uStack_9ec;
  undefined4 uStack_9e8;
  undefined4 uStack_9e4;
  longlong lStack_9e0;
  undefined8 uStack_9d8;
  ulonglong ***pppuStack_9d0;
  longlong lStack_9c0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  ulonglong ***pppuStack_8d0;
  ulonglong ***pppuStack_8c8;
  ulonglong ***pppuStack_8c0;
  undefined8 uStack_8b8;
  ulonglong ***pppuStack_8b0;
  ulonglong ***pppuStack_8a8;
  ulonglong ***pppuStack_8a0;
  ulonglong ***pppuStack_898;
  ulonglong ***pppuStack_890;
  ulonglong ***pppuStack_888;
  ulonglong ***pppuStack_880;
  undefined8 uStack_878;
  ulonglong ***pppuStack_870;
  ulonglong ***pppuStack_868;
  ulonglong ***pppuStack_860;
  ulonglong ***pppuStack_858;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  undefined4 uStack_838;
  undefined4 uStack_834;
  ulonglong uStack_828;
  ulonglong ***pppuStack_820;
  undefined8 uStack_818;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  ulonglong ***pppuStack_7d8;
  ulonglong ***pppuStack_7d0;
  ulonglong ***pppuStack_7c8;
  ulonglong ***pppuStack_7c0;
  ulonglong ***pppuStack_7b8;
  undefined8 uStack_7b0;
  undefined4 uStack_7a8;
  undefined8 uStack_7a4;
  byte bStack_79c;
  byte bStack_79b;
  ulonglong ***pppuStack_798;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined4 uStack_778;
  undefined4 uStack_774;
  byte bStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  ulonglong ***pppuStack_738;
  ulonglong ***pppuStack_730;
  ulonglong ***pppuStack_728;
  undefined1 uStack_720;
  ulonglong ***pppuStack_718;
  byte *pbStack_710;
  ulonglong ***pppuStack_708;
  undefined1 uStack_700;
  undefined1 auStack_560 [536];
  ulonglong **ppuStack_348;
  ulonglong ***pppuStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  ulonglong ***pppuStack_328;
  ulonglong ***pppuStack_320;
  ulonglong ***pppuStack_318;
  byte bStack_310;
  undefined7 uStack_30f;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  ulonglong ***pppuStack_288;
  ulonglong ***pppuStack_280;
  ulonglong ***pppuStack_278;
  ulonglong ***pppuStack_270;
  ulonglong ***pppuStack_268;
  ulonglong ***pppuStack_260;
  ulonglong ***pppuStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined1 uStack_237;
  undefined1 uStack_236;
  byte bStack_235;
  undefined1 uStack_234;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulonglong ***pppuStack_218;
  ulonglong ***pppuStack_210;
  ulonglong ***pppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  byte *pbStack_1d0;
  ulonglong ***pppuStack_1c8;
  undefined4 uStack_1c0;
  undefined1 uStack_1bc;
  undefined2 uStack_1bb;
  undefined1 uStack_1b9;
  ulonglong ***pppuStack_1b8;
  ulonglong ***pppuStack_1b0;
  ulonglong ***pppuStack_1a8;
  ulonglong ***pppuStack_1a0;
  ulonglong ***pppuStack_198;
  ulonglong ***pppuStack_190;
  ulonglong ***pppuStack_188;
  ulonglong ***pppuStack_180;
  ulonglong ***pppuStack_178;
  ulonglong ***pppuStack_170;
  ulonglong ***pppuStack_168;
  undefined8 uStack_160;
  ulonglong ***pppuStack_158;
  ulonglong ***pppuStack_150;
  ulonglong ***pppuStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulonglong ***pppuStack_138;
  ulonglong ***pppuStack_130;
  ulonglong ***pppuStack_128;
  byte bStack_120;
  undefined4 uStack_11f;
  undefined2 uStack_11b;
  undefined1 uStack_119;
  ulonglong ***pppuStack_118;
  ulonglong ***pppuStack_110;
  ulonglong ***pppuStack_108;
  ulonglong ***pppuStack_100;
  ulonglong ***pppuStack_f8;
  ulonglong ***pppuStack_f0;
  ulonglong ***pppuStack_e8;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong ***pppuStack_c8;
  byte *pbStack_c0;
  ulonglong ***pppuStack_b8;
  ulonglong ***pppuStack_b0;
  ulonglong ***pppuStack_a8;
  ulonglong ***pppuStack_a0;
  ulonglong ***pppuStack_98;
  ulonglong ***pppuStack_90;
  ulonglong ***pppuStack_88;
  byte bStack_7a;
  byte bStack_79;
  ulonglong ***pppuStack_78;
  uint uStack_6c;
  byte *pbStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_56;
  undefined1 uStack_55;
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
  ppppuVar20 = (ulonglong ****)(ulonglong)param_4;
  pbStack_68 = param_1;
  if ((*(longlong *)(param_1 + 0x208) == -0x7fffffffffffffff) && (1 < *_DAT_143ca8e90)) {
    uStack_808 = (ulonglong ****)0x0;
    uStack_800 = (code *)&UNK_142f3c39a;
    uStack_7f8 = (ulonglong ****)0x28;
    uStack_7f0 = (ulonglong ****)0x0;
    uStack_7e8 = (ulonglong ****)&UNK_142f3c365;
    uStack_7e0 = (ulonglong ****)0x34;
    pppuStack_7d8 = (ulonglong ***)0x2;
    pppuStack_7d0 = (ulonglong ***)&UNK_142f3c39a;
    pppuStack_7c8 = (ulonglong ***)0x28;
    pppuStack_7c0 = (ulonglong ***)0x2800000001;
    pppuStack_7b8 = (ulonglong ***)&UNK_142f3c349;
    uStack_7b0._0_4_ = 0x39;
    uStack_7b0._4_4_ = 0;
    uStack_53 = 1;
    pdb_140f332f0(&uStack_52,&uStack_808);
  }
  pbVar27 = pbStack_68;
  ppppuVar17 = (ulonglong ****)(pbStack_68 + 0x208);
  if (SBORROW8(0,*(longlong *)(pbStack_68 + 0x18))) {
    pppuStack_b0 = (ulonglong ***)CONCAT71(pppuStack_b0._1_7_,param_3);
    uStack_4e = 0;
    uStack_4f = 1;
    pdb_140f60be0(&uStack_800,pbStack_68 + 0x20);
    if ((ulonglong ****)uStack_800 != (ulonglong ****)0x0) {
      pub_1406abac0((byte *)uStack_7f8,(ulonglong)uStack_800,1);
    }
    uStack_4e = 0;
    uStack_4f = 1;
    pdb_140cb0690(&uStack_808);
    pppuStack_c8 = (ulonglong ***)uStack_7f8;
    uStack_d8._0_4_ = (undefined4)uStack_808;
    uStack_d8._4_4_ = uStack_808._4_4_;
    uStack_d0 = (undefined4)uStack_800;
    uStack_cc = uStack_800._4_4_;
    uVar31 = (undefined7)((ulonglong)unaff_R15 >> 8);
    if ((char)uStack_7f8 != '\x02') {
      uStack_4e = 1;
      uStack_4f = 1;
      uVar18 = CONCAT71(uVar31,1);
      pdb_140f3e010(&pppuStack_138,uStack_808,uStack_800);
      goto LAB_140311a03;
    }
    pppuStack_130 = (ulonglong ***)&uStack_d8;
    pppuStack_138 = (ulonglong ***)0x8000000000000000;
    uVar18 = CONCAT71(uVar31,1);
LAB_140311a1d:
    uStack_808 = (ulonglong ****)&uStack_ef8;
    uStack_800 = pdb_140562d90;
    uStack_4e = (undefined1)uVar18;
    uStack_4f = 1;
    uStack_ef8 = (ulonglong ****)pppuStack_130;
    pppuStack_110 = (ulonglong ***)pdb_142d849b0(&uStack_808);
    pppuStack_118 = (ulonglong ***)0x8000000000000000;
LAB_140311a74:
    pppuStack_a38 = (ulonglong ***)&pppuStack_110;
    if (*_DAT_143ca8e90 != 0) {
      uStack_ef8 = &pppuStack_a38;
      uStack_ef0 = pdb_140677370;
      uStack_808 = (ulonglong ****)0x0;
      uStack_800 = (code *)&UNK_142f3c39a;
      uStack_7f8 = (ulonglong ****)0x28;
      uStack_7f0 = (ulonglong ****)0x0;
      uStack_7e8 = (ulonglong ****)&UNK_142f3c365;
      uStack_7e0 = (ulonglong ****)0x34;
      pppuStack_7d8 = (ulonglong ***)0x1;
      pppuStack_7d0 = (ulonglong ***)&UNK_142f3c39a;
      pppuStack_7c8 = (ulonglong ***)0x28;
      pppuStack_7c0 = (ulonglong ***)0x5100000001;
      pppuStack_7b8 = (ulonglong ***)&UNK_142f3c418;
      uStack_7b0 = (ulonglong ****)&uStack_ef8;
      uStack_49 = (undefined1)uVar18;
      uStack_4a = 1;
      uStack_4b = 1;
      pdb_140f332f0(&uStack_52,&uStack_808);
    }
  }
  else {
    unaff_R14 = *(ulonglong *****)(pbStack_68 + 0x28);
    if ((longlong)unaff_R14 < 0) {
      uVar29 = 0;
LAB_1403118e9:
      uStack_4e = 0;
      uStack_4f = 1;
      pdb_142dc7e2a(uVar29,unaff_R14);
      goto LAB_1403138ea;
    }
    pppuStack_b0 = (ulonglong ***)CONCAT71(pppuStack_b0._1_7_,param_3);
    if (unaff_R14 == (ulonglong ****)0x0) {
      ppppuVar15 = (ulonglong ****)0x1;
    }
    else {
      uVar6 = *(undefined8 *)(pbStack_68 + 0x20);
      pdb_14007ee60();
      uVar29 = 1;
      ppppuVar15 = (ulonglong ****)pub_1406abab0((ulonglong)unaff_R14,1);
      if (ppppuVar15 == (ulonglong ****)0x0) goto LAB_1403118e9;
      pub_142e32760(ppppuVar15,uVar6,unaff_R14);
    }
    ppppuVar16 = uStack_7f0;
    bStack_120 = pbStack_68[0x30];
    uStack_7f0 = (ulonglong ****)CONCAT71(uStack_7f0._1_7_,bStack_120);
    ppppuVar13 = uStack_7f0;
    uStack_7f0._1_4_ = SUB84(ppppuVar16,1);
    uStack_11f = uStack_7f0._1_4_;
    uStack_7f0._5_2_ = SUB82(ppppuVar16,5);
    uStack_11b = uStack_7f0._5_2_;
    uStack_7f0._7_1_ = SUB81(ppppuVar16,7);
    uStack_119 = uStack_7f0._7_1_;
    uVar18 = 0;
    uStack_808 = unaff_R14;
    uStack_800 = (code *)ppppuVar15;
    uStack_7f8 = unaff_R14;
    uStack_7f0 = ppppuVar13;
    pppuStack_138 = (ulonglong ***)unaff_R14;
    pppuStack_130 = (ulonglong ***)ppppuVar15;
    pppuStack_128 = (ulonglong ***)unaff_R14;
LAB_140311a03:
    if (SBORROW8(0,(longlong)pppuStack_138)) goto LAB_140311a1d;
    pppuStack_88 = pppuStack_138;
    uStack_6c = (uint)uVar18;
    pppuStack_78 = pppuStack_130;
    pdb_140f4ee90(&uStack_808,pppuStack_130,pppuStack_128);
    if (SBORROW8(0,(longlong)uStack_808)) {
      pppuStack_110 = (ulonglong ***)pdb_142d84940(uStack_800);
      pppuStack_118 = (ulonglong ***)0x8000000000000000;
    }
    else {
      pppuStack_108 = (ulonglong ***)uStack_7f8;
      pppuStack_100 = (ulonglong ***)uStack_7f0;
      pppuStack_118 = (ulonglong ***)uStack_808;
      pppuStack_110 = (ulonglong ***)uStack_800;
    }
    uVar14 = uStack_6c;
    uVar18 = (ulonglong)uStack_6c;
    if ((ulonglong ****)pppuStack_88 != (ulonglong ****)0x0) {
      pub_1406abac0((byte *)pppuStack_78,(ulonglong)pppuStack_88,1);
    }
    if (SBORROW8(0,(longlong)pppuStack_118)) goto LAB_140311a74;
    if (-0x7fffffffffffffff < (longlong)*ppppuVar17) {
      uStack_49 = (undefined1)uVar14;
      uStack_4a = 1;
      uStack_4b = 1;
      pdb_140f3e9e0(&ppuStack_348,pppuStack_110,pppuStack_108,&UNK_142f3c3c2,0xc);
      uVar29 = uStack_338;
      pppuStack_78 = pppuStack_340;
      uStack_808 = (ulonglong ****)
                   pdb_140f4f450(*(undefined8 *)(pbStack_68 + 0x210),
                                 *(undefined8 *)(pbStack_68 + 0x218),pppuStack_340,uStack_338);
      unaff_R14 = (ulonglong ****)(pbStack_68 + 0x210);
      if (uStack_808 != (ulonglong ****)0x0) {
        pdb_1404b38e0(&uStack_808);
        ppppuVar15 = *(ulonglong *****)(pbStack_68 + 0x218);
        uStack_808 = (ulonglong ****)
                     pdb_140f4f180(*(undefined8 *)(pbStack_68 + 0x210),ppppuVar15,pppuStack_78,
                                   uVar29);
        uStack_800 = (code *)ppppuVar15;
        if (uStack_808 != (ulonglong ****)0x0) {
          pdb_1404b38e0(&uStack_800);
          pppuStack_88 = (ulonglong ***)ppppuVar17;
          if (SBORROW8(0,(longlong)*ppppuVar17)) {
            pdb_1404d45b0(unaff_R14);
          }
          else if (*ppppuVar17 != (ulonglong ***)0x8000000000000001) {
            pdb_1404b58b0(ppppuVar17);
          }
          ppppuVar17 = (ulonglong ****)pppuStack_88;
          *pppuStack_88 = (ulonglong **)0x8000000000000001;
          if (*_DAT_143ca8e90 != 0) {
            uStack_808 = (ulonglong ****)&UNK_142f3c39a;
            uStack_800 = (code *)0x28;
            uStack_7f8 = (ulonglong ****)&UNK_142f3c39a;
            uStack_7f0 = (ulonglong ****)0x28;
            uStack_7e8 = (ulonglong ****)&UNK_142f3c400;
            pdb_1400c9be0(&UNK_142f3c3ce,0x5b,1,&uStack_808);
          }
          uVar18 = (ulonglong)uStack_6c;
          if ((ulonglong ***)ppuStack_348 != (ulonglong ***)0x0) {
            pub_1406abac0((byte *)pppuStack_78,(ulonglong)ppuStack_348,1);
          }
          goto LAB_140311b5c;
        }
      }
      uVar18 = (ulonglong)uStack_6c;
      if (*ppppuVar17 != (ulonglong ***)0x0) {
        pub_1406abac0((byte *)*unaff_R14,(ulonglong)*ppppuVar17,1);
      }
      *(undefined8 *)(pbVar27 + 0x218) = uStack_338;
      *(undefined8 *)(pbVar27 + 0x220) = uStack_330;
      *ppppuVar17 = (ulonglong ***)ppuStack_348;
      *(ulonglong ****)(pbVar27 + 0x210) = pppuStack_340;
    }
  }
LAB_140311b5c:
  uStack_49 = (undefined1)uVar18;
  uStack_4a = 1;
  uStack_4b = 1;
  ppppuVar15 = (ulonglong ****)pdb_140dc6060();
  uStack_6c = (uint)uVar18;
  if (ppppuVar15 != (ulonglong ****)0x0) {
    pppuStack_a38 = (ulonglong ***)ppppuVar15;
    if (*_DAT_143ca8e90 != 0) {
      uStack_ef8 = &pppuStack_a38;
      uStack_ef0 = pdb_140f36c30;
      uStack_808 = (ulonglong ****)0x0;
      uStack_800 = (code *)&UNK_142f3c39a;
      uStack_7f8 = (ulonglong ****)0x28;
      uStack_7f0 = (ulonglong ****)0x0;
      uStack_7e8 = (ulonglong ****)&UNK_142f3c365;
      uStack_7e0 = (ulonglong ****)0x34;
      pppuStack_7d8 = (ulonglong ***)0x1;
      pppuStack_7d0 = (ulonglong ***)&UNK_142f3c39a;
      pppuStack_7c8 = (ulonglong ***)0x28;
      pppuStack_7c0 = (ulonglong ***)0x5600000001;
      pppuStack_7b8 = (ulonglong ***)&UNK_142f3c441;
      uStack_7b0 = (ulonglong ****)&uStack_ef8;
      pdb_140f332f0(&uStack_52,&uStack_808);
      uVar18 = (ulonglong)uStack_6c;
    }
    uStack_49 = (undefined1)uVar18;
    uStack_4a = 1;
    uStack_4b = 1;
    pdb_140f36c40(&pppuStack_a38);
  }
  uStack_49 = (undefined1)uVar18;
  uStack_4a = 1;
  uStack_4b = 1;
  pdb_1401757a0(&pppuStack_f8,pbStack_68);
  pppuStack_88 = (ulonglong ***)ppppuVar17;
  if (SBORROW8(0,*(longlong *)(pbStack_68 + 0x18))) {
    pdb_140f60be0(&pppuStack_150,pbStack_68 + 0x20);
    pppuStack_158 = (ulonglong ***)0x8000000000000000;
    if (!SBORROW8(0,*(longlong *)(pbStack_68 + 0x38))) goto LAB_140312150;
LAB_140311cfe:
    pdb_140f60be0(&uStack_2c8,pbStack_68 + 0x40);
    uStack_2d0 = (ulonglong ****)0x8000000000000000;
    if (!SBORROW8(0,*(longlong *)(pbStack_68 + 0x58))) goto LAB_1403121e0;
LAB_140311d35:
    if (SBORROW8(0,*(longlong *)(pbStack_68 + 0x60))) {
      uStack_ef8 = (ulonglong ****)0x8000000000000000;
    }
    else {
      pdb_140f60be0(&uStack_ef8,pbStack_68 + 0x60);
    }
    uStack_7f0 = uStack_ee8;
    uStack_800 = (code *)uStack_ef8;
    uStack_7f8 = (ulonglong ****)uStack_ef0;
    uStack_808 = (ulonglong ****)0x8000000000000000;
    if (!SBORROW8(0,*(longlong *)(pbStack_68 + 0x168))) goto LAB_14031230e;
LAB_140311ffc:
    uVar21 = SUB81(ppppuVar20,0);
    pdb_140f60be0(&pppuStack_210,pbStack_68 + 0x170);
    pppuStack_218 = (ulonglong ***)0x8000000000000000;
    if (!SBORROW8(0,*(longlong *)(pbStack_68 + 0x188))) goto LAB_14031248d;
LAB_140312039:
    pdb_140f60be0(&pppuStack_280,pbStack_68 + 400);
    pppuStack_288 = (ulonglong ***)0x8000000000000000;
    if (!SBORROW8(0,*(longlong *)(pbStack_68 + 0x1a8))) goto LAB_140312529;
LAB_140312076:
    pdb_140f60be0(&pppuStack_320,pbStack_68 + 0x1b0);
    pppuStack_328 = (ulonglong ***)0x8000000000000000;
    if (!SBORROW8(0,*(longlong *)(pbStack_68 + 0x1c8))) goto LAB_1403125c5;
LAB_1403120b3:
    pdb_140f60be0(&pppuStack_1b0,pbStack_68 + 0x1d0);
    pppuStack_1b8 = (ulonglong ***)0x8000000000000000;
    if (!SBORROW8(0,*(longlong *)(pbStack_68 + 0x1e8))) goto LAB_140312661;
LAB_1403120f0:
    pdb_140f60be0(&uStack_ef0,pbStack_68 + 0x1f0);
    uStack_ef8 = (ulonglong ****)0x8000000000000000;
  }
  else {
    unaff_R14 = *(ulonglong *****)(pbStack_68 + 0x28);
    if ((longlong)unaff_R14 < 0) {
      uVar29 = 0;
LAB_140311d62:
      pdb_142dc7e2a(uVar29,unaff_R14);
      goto LAB_1403138ea;
    }
    if (unaff_R14 == (ulonglong ****)0x0) {
      ppppuVar15 = (ulonglong ****)0x1;
    }
    else {
      uVar6 = *(undefined8 *)(pbStack_68 + 0x20);
      pdb_14007ee60();
      uVar29 = 1;
      ppppuVar15 = (ulonglong ****)pub_1406abab0((ulonglong)unaff_R14,1);
      if (ppppuVar15 == (ulonglong ****)0x0) goto LAB_140311d62;
      pub_142e32760(ppppuVar15,uVar6,unaff_R14);
    }
    uStack_140 = CONCAT31(uStack_140._1_3_,pbStack_68[0x30]);
    pppuStack_158 = (ulonglong ***)unaff_R14;
    pppuStack_150 = (ulonglong ***)ppppuVar15;
    pppuStack_148 = (ulonglong ***)unaff_R14;
    if (SBORROW8(0,*(longlong *)(pbStack_68 + 0x38))) goto LAB_140311cfe;
LAB_140312150:
    unaff_R14 = *(ulonglong *****)(pbStack_68 + 0x48);
    if ((longlong)unaff_R14 < 0) {
      uVar29 = 0;
LAB_14031215d:
      pdb_142dc7e2a(uVar29,unaff_R14);
      goto LAB_1403138ea;
    }
    if (unaff_R14 == (ulonglong ****)0x0) {
      ppppuVar15 = (ulonglong ****)0x1;
    }
    else {
      uVar6 = *(undefined8 *)(pbStack_68 + 0x40);
      pdb_14007ee60();
      uVar29 = 1;
      ppppuVar15 = (ulonglong ****)pub_1406abab0((ulonglong)unaff_R14,1);
      if (ppppuVar15 == (ulonglong ****)0x0) goto LAB_14031215d;
      pub_142e32760(ppppuVar15,uVar6,unaff_R14);
    }
    uStack_2b8 = CONCAT31(uStack_2b8._1_3_,pbStack_68[0x50]);
    uStack_2d0 = unaff_R14;
    uStack_2c8 = ppppuVar15;
    uStack_2c0 = unaff_R14;
    if (SBORROW8(0,*(longlong *)(pbStack_68 + 0x58))) goto LAB_140311d35;
LAB_1403121e0:
    pbVar27 = pbStack_68;
    ppppuVar15 = *(ulonglong *****)(pbStack_68 + 0x68);
    if ((longlong)ppppuVar15 < 0) {
      uVar29 = 0;
LAB_1403121ed:
      pdb_142dc7e2a(uVar29,ppppuVar15);
      goto LAB_1403138ea;
    }
    if (ppppuVar15 == (ulonglong ****)0x0) {
      pppuStack_90 = (ulonglong ***)0x1;
    }
    else {
      unaff_R14 = *(ulonglong *****)(pbStack_68 + 0x60);
      pdb_14007ee60();
      uVar29 = 1;
      ppppuVar16 = (ulonglong ****)pub_1406abab0((ulonglong)ppppuVar15,1);
      if (ppppuVar16 == (ulonglong ****)0x0) goto LAB_1403121ed;
      pppuStack_90 = (ulonglong ***)ppppuVar16;
      pub_142e32760(ppppuVar16,unaff_R14,ppppuVar15);
    }
    bVar22 = pbVar27[0x70];
    pppuStack_78 = (ulonglong ***)ppppuVar15;
    if (SBORROW8(0,*(longlong *)(pbVar27 + 0x78))) {
      uStack_7e8 = (ulonglong ****)0x8000000000000000;
      pppuStack_738 = (ulonglong ***)ppppuVar20;
      pbStack_710 = pbVar27;
      pppuStack_730 = (ulonglong ***)ppppuVar15;
    }
    else {
      ppppuVar20 = *(ulonglong *****)(pbVar27 + 0x88);
      if ((longlong)ppppuVar20 < 0) {
        unaff_R14 = (ulonglong ****)0x0;
LAB_140312387:
        pdb_142dc7e2a(unaff_R14);
        goto LAB_1403138ea;
      }
      bVar4 = pbVar27[0x110];
      pppuStack_b8 = (ulonglong ***)ppppuVar20;
      bStack_7a = bVar22;
      if (ppppuVar20 == (ulonglong ****)0x0) {
        pppuStack_a0 = (ulonglong ***)0x1;
      }
      else {
        pppuStack_98 = (ulonglong ***)CONCAT71(pppuStack_98._1_7_,(char)param_4);
        lVar5 = *(longlong *)(pbVar27 + 0x80);
        pdb_14007ee60();
        pppuVar12 = pppuStack_b8;
        unaff_R14 = (ulonglong ****)0x1;
        ppppuVar20 = (ulonglong ****)pub_1406abab0((ulonglong)pppuStack_b8,1);
        if (ppppuVar20 == (ulonglong ****)0x0) goto LAB_140312387;
        ppppuVar17 = (ulonglong ****)((longlong)pppuVar12 + -1);
        if (pppuVar12 < (ulonglong ****)((longlong)pppuVar12 + -1)) {
          ppppuVar17 = (ulonglong ****)pppuVar12;
        }
        if (ppppuVar17 < (ulonglong ****)0x20) {
          lVar25 = 0;
          ppppuVar17 = (ulonglong ****)pppuVar12;
          lVar26 = lVar5;
        }
        else {
          puVar24 = (undefined *)((longlong)ppppuVar17 + 1);
          uVar18 = 0x20;
          if (((ulonglong)puVar24 & 0x1f) != 0) {
            uVar18 = (ulonglong)((uint)puVar24 & 0x1f);
          }
          lVar25 = (longlong)puVar24 - uVar18;
          ppppuVar17 = (ulonglong ****)((longlong)pppuVar12 - lVar25);
          lVar26 = lVar25 + lVar5;
          lVar23 = 0;
          do {
            puVar3 = (undefined4 *)(lVar5 + lVar23);
            uVar8 = puVar3[1];
            uVar9 = puVar3[2];
            uVar10 = puVar3[3];
            puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar23);
            uVar29 = *puVar2;
            uVar6 = puVar2[1];
            puVar1 = (undefined4 *)((longlong)ppppuVar20 + lVar23);
            *puVar1 = *puVar3;
            puVar1[1] = uVar8;
            puVar1[2] = uVar9;
            puVar1[3] = uVar10;
            puVar2 = (undefined8 *)((longlong)ppppuVar20 + lVar23 + 0x10);
            *puVar2 = uVar29;
            puVar2[1] = uVar6;
            lVar23 = lVar23 + 0x20;
          } while (lVar25 != lVar23);
        }
        param_4 = (uint)(byte)pppuStack_98;
        ppppuVar15 = (ulonglong ****)(lVar5 + (longlong)pppuVar12);
        ppppuVar16 = (ulonglong ****)0x0;
        do {
          pppuStack_a0 = (ulonglong ***)ppppuVar20;
          if ((ulonglong ****)(lVar26 + (longlong)ppppuVar16) == ppppuVar15) break;
          *(undefined1 *)((longlong)ppppuVar20 + lVar25 + (longlong)ppppuVar16) =
               *(undefined1 *)(lVar26 + (longlong)ppppuVar16);
          ppppuVar16 = (ulonglong ****)((longlong)ppppuVar16 + 1);
        } while (ppppuVar17 != ppppuVar16);
      }
      bVar28 = (byte)ppppuVar15;
      bVar22 = (byte)unaff_R14;
      if (SBORROW8(0,*(longlong *)(pbVar27 + 0xa8))) {
        pppuStack_98 = (ulonglong ***)0x8000000000000000;
      }
      else {
        bVar22 = pbVar27[0xd0];
        pdb_140f60be0(&uStack_808,pbVar27 + 0xa8);
        ppppuVar17 = uStack_7e0;
        uStack_7e0 = (ulonglong ****)CONCAT71(uStack_7e0._1_7_,bVar22);
        pppuStack_a30 = *(ulonglong ****)(pbVar27 + 0xc0);
        uStack_ee8 = *(ulonglong *****)(pbVar27 + 200);
        uStack_ed8 = *(undefined8 *)(pbVar27 + 0xd8);
        uStack_ed0 = *(undefined4 *)(pbVar27 + 0xe0);
        bVar22 = pbVar27[0xe4];
        bVar28 = pbVar27[0xe5];
        pppuStack_98 = (ulonglong ***)uStack_808;
        pppuStack_a8 = (ulonglong ***)uStack_800;
        uStack_ee0 = uStack_7e0;
        ppppuVar20 = uStack_ee0;
        pppuStack_a38 = (ulonglong ***)uStack_7f8;
        uStack_a20 = SUB84(uStack_7e0,0);
        uStack_ee0._4_4_ = (undefined4)((ulonglong)ppppuVar17 >> 0x20);
        uStack_a1c = uStack_ee0._4_4_;
        uStack_a18 = (undefined4)uStack_ed8;
        uStack_a14 = (undefined4)((ulonglong)uStack_ed8 >> 0x20);
        uStack_ee0 = ppppuVar20;
        pppuStack_a28 = (ulonglong ***)uStack_ee8;
        uStack_a10 = uStack_ed0;
        uStack_7f0 = (ulonglong ****)pppuStack_a30;
        uStack_7e8 = uStack_ee8;
      }
      pdb_140174e40(&pppuStack_1b8,pbVar27 + 0x90);
      if (SBORROW8(0,*(longlong *)(pbVar27 + 0xe8))) {
        pppuStack_798 = (ulonglong ***)(ulonglong ****)0x8000000000000000;
      }
      else {
        uStack_7f0 = *(ulonglong *****)(pbVar27 + 0x100);
        uStack_7e8 = *(ulonglong *****)(pbVar27 + 0x108);
        pdb_140f60be0(&uStack_808,pbVar27 + 0xe8);
        uStack_ef8 = (ulonglong ****)uStack_800;
        uStack_ef0 = (code *)uStack_7f8;
        uStack_ee8 = uStack_7f0;
        uStack_ee0 = uStack_7e8;
        pppuStack_798 = (ulonglong ***)uStack_808;
        pbVar27 = pbStack_68;
      }
      uStack_7a4 = CONCAT44(uStack_a10,uStack_a14);
      uStack_7a8 = uStack_a18;
      pppuStack_7b8 = pppuStack_a28;
      uStack_7b0._0_4_ = uStack_a20;
      uStack_7b0._4_4_ = uStack_a1c;
      pppuStack_7c8 = pppuStack_a38;
      pppuStack_7c0 = pppuStack_a30;
      uStack_7f0 = (ulonglong ****)pppuStack_1b8;
      uStack_7e8 = (ulonglong ****)pppuStack_1b0;
      uStack_7e0 = (ulonglong ****)pppuStack_1a8;
      uStack_768 = *(undefined8 *)(pbVar27 + 0x118);
      uStack_760 = *(undefined8 *)(pbVar27 + 0x120);
      uStack_808 = (ulonglong ****)pppuStack_b8;
      uStack_800 = (code *)pppuStack_a0;
      uStack_7f8 = (ulonglong ****)pppuStack_b8;
      pppuStack_7d8 = pppuStack_98;
      pppuStack_7d0 = pppuStack_a8;
      uStack_790 = (undefined4)uStack_ef8;
      uStack_78c = uStack_ef8._4_4_;
      uStack_788 = (undefined4)uStack_ef0;
      uStack_784 = uStack_ef0._4_4_;
      uStack_780 = (undefined4)uStack_ee8;
      uStack_77c = uStack_ee8._4_4_;
      uStack_778 = (undefined4)uStack_ee0;
      uStack_774 = uStack_ee0._4_4_;
      ppppuVar20 = *(ulonglong *****)(pbVar27 + 0x138);
      bStack_79c = bVar22;
      bStack_79b = bVar28;
      bStack_770 = bVar4;
      if ((longlong)ppppuVar20 < 0) {
        uVar29 = 0;
LAB_14031298e:
        pdb_142dc7e2a(uVar29,ppppuVar20);
        goto LAB_1403138ea;
      }
      pppuStack_a0 = (ulonglong ***)ppppuVar20;
      if (ppppuVar20 == (ulonglong ****)0x0) {
        pppuStack_a8 = (ulonglong ***)0x1;
      }
      else {
        uVar6 = *(undefined8 *)(pbVar27 + 0x130);
        pdb_14007ee60();
        ppppuVar20 = (ulonglong ****)pppuStack_a0;
        uVar29 = 1;
        ppppuVar17 = (ulonglong ****)pub_1406abab0((ulonglong)pppuStack_a0,1);
        if (ppppuVar17 == (ulonglong ****)0x0) goto LAB_14031298e;
        pppuStack_a8 = (ulonglong ***)ppppuVar17;
        pub_142e32760(ppppuVar17,uVar6,ppppuVar20);
      }
      unaff_R14 = *(ulonglong *****)(pbVar27 + 0x158);
      if ((longlong)unaff_R14 < 0) {
        uVar29 = 0;
LAB_1403137f1:
        pdb_142dc7e2a(uVar29,unaff_R14);
        goto LAB_1403138ea;
      }
      bStack_79 = pbVar27[0x140];
      if (unaff_R14 == (ulonglong ****)0x0) {
        pbStack_1d0 = (byte *)0x1;
      }
      else {
        uVar6 = *(undefined8 *)(pbVar27 + 0x150);
        pdb_14007ee60();
        uVar29 = 1;
        pbVar19 = pub_1406abab0((ulonglong)unaff_R14,1);
        if (pbVar19 == (byte *)0x0) goto LAB_1403137f1;
        pbStack_1d0 = pbVar19;
        pub_142e32760(pbVar19,uVar6,unaff_R14);
      }
      pppuStack_98 = (ulonglong ***)CONCAT71(pppuStack_98._1_7_,pbVar27[0x160]);
      pub_142e32760(&uStack_ef8,&uStack_800,0xa8);
      ppppuVar17 = (ulonglong ****)(ulonglong)bStack_79;
      uStack_7e8 = (ulonglong ****)pppuStack_b8;
      pppuStack_738 = pppuStack_a0;
      pbStack_710 = pbStack_1d0;
      pppuStack_730 = pppuStack_a8;
      bVar22 = bStack_7a;
    }
    uStack_808 = (ulonglong ****)pppuStack_78;
    uStack_800 = (code *)pppuStack_90;
    uStack_7f8 = (ulonglong ****)pppuStack_78;
    uStack_7f0 = (ulonglong ****)CONCAT71(uStack_7f0._1_7_,bVar22);
    pub_142e32760(&uStack_7e0,&uStack_ef8,0xa8);
    uStack_720 = SUB81(ppppuVar17,0);
    uStack_700 = (byte)pppuStack_98;
    ppppuVar20 = (ulonglong ****)(ulonglong)param_4;
    pppuStack_728 = pppuStack_738;
    pppuStack_718 = (ulonglong ***)unaff_R14;
    pppuStack_708 = (ulonglong ***)unaff_R14;
    if (SBORROW8(0,*(longlong *)(pbStack_68 + 0x168))) goto LAB_140311ffc;
LAB_14031230e:
    uVar21 = SUB81(ppppuVar20,0);
    ppppuVar20 = *(ulonglong *****)(pbStack_68 + 0x178);
    if ((longlong)ppppuVar20 < 0) {
      uVar29 = 0;
LAB_14031231e:
      pdb_142dc7e2a(uVar29,ppppuVar20);
      goto LAB_1403138ea;
    }
    if (ppppuVar20 == (ulonglong ****)0x0) {
      ppppuVar17 = (ulonglong ****)0x1;
    }
    else {
      uVar6 = *(undefined8 *)(pbStack_68 + 0x170);
      pdb_14007ee60();
      uVar29 = 1;
      ppppuVar17 = (ulonglong ****)pub_1406abab0((ulonglong)ppppuVar20,1);
      if (ppppuVar17 == (ulonglong ****)0x0) goto LAB_14031231e;
      pub_142e32760(ppppuVar17,uVar6,ppppuVar20);
    }
    uStack_200 = CONCAT31(uStack_200._1_3_,pbStack_68[0x180]);
    pppuStack_218 = (ulonglong ***)ppppuVar20;
    pppuStack_210 = (ulonglong ***)ppppuVar17;
    pppuStack_208 = (ulonglong ***)ppppuVar20;
    if (SBORROW8(0,*(longlong *)(pbStack_68 + 0x188))) goto LAB_140312039;
LAB_14031248d:
    ppppuVar20 = *(ulonglong *****)(pbStack_68 + 0x198);
    if ((longlong)ppppuVar20 < 0) {
      uVar29 = 0;
LAB_14031249d:
      pdb_142dc7e2a(uVar29,ppppuVar20);
      goto LAB_1403138ea;
    }
    if (ppppuVar20 == (ulonglong ****)0x0) {
      ppppuVar17 = (ulonglong ****)0x1;
    }
    else {
      uVar6 = *(undefined8 *)(pbStack_68 + 400);
      pdb_14007ee60();
      uVar29 = 1;
      ppppuVar17 = (ulonglong ****)pub_1406abab0((ulonglong)ppppuVar20,1);
      if (ppppuVar17 == (ulonglong ****)0x0) goto LAB_14031249d;
      pub_142e32760(ppppuVar17,uVar6,ppppuVar20);
    }
    pppuStack_270 = (ulonglong ***)CONCAT71(pppuStack_270._1_7_,pbStack_68[0x1a0]);
    pppuStack_288 = (ulonglong ***)ppppuVar20;
    pppuStack_280 = (ulonglong ***)ppppuVar17;
    pppuStack_278 = (ulonglong ***)ppppuVar20;
    if (SBORROW8(0,*(longlong *)(pbStack_68 + 0x1a8))) goto LAB_140312076;
LAB_140312529:
    ppppuVar20 = *(ulonglong *****)(pbStack_68 + 0x1b8);
    if ((longlong)ppppuVar20 < 0) {
      uVar29 = 0;
LAB_140312539:
      pdb_142dc7e2a(uVar29,ppppuVar20);
      goto LAB_1403138ea;
    }
    if (ppppuVar20 == (ulonglong ****)0x0) {
      ppppuVar17 = (ulonglong ****)0x1;
    }
    else {
      uVar6 = *(undefined8 *)(pbStack_68 + 0x1b0);
      pdb_14007ee60();
      uVar29 = 1;
      ppppuVar17 = (ulonglong ****)pub_1406abab0((ulonglong)ppppuVar20,1);
      if (ppppuVar17 == (ulonglong ****)0x0) goto LAB_140312539;
      pub_142e32760(ppppuVar17,uVar6,ppppuVar20);
    }
    bStack_310 = pbStack_68[0x1c0];
    pppuStack_328 = (ulonglong ***)ppppuVar20;
    pppuStack_320 = (ulonglong ***)ppppuVar17;
    pppuStack_318 = (ulonglong ***)ppppuVar20;
    if (SBORROW8(0,*(longlong *)(pbStack_68 + 0x1c8))) goto LAB_1403120b3;
LAB_1403125c5:
    ppppuVar20 = *(ulonglong *****)(pbStack_68 + 0x1d8);
    if ((longlong)ppppuVar20 < 0) {
      uVar29 = 0;
LAB_1403125d5:
      pdb_142dc7e2a(uVar29,ppppuVar20);
      goto LAB_1403138ea;
    }
    if (ppppuVar20 == (ulonglong ****)0x0) {
      ppppuVar17 = (ulonglong ****)0x1;
    }
    else {
      uVar6 = *(undefined8 *)(pbStack_68 + 0x1d0);
      pdb_14007ee60();
      uVar29 = 1;
      ppppuVar17 = (ulonglong ****)pub_1406abab0((ulonglong)ppppuVar20,1);
      if (ppppuVar17 == (ulonglong ****)0x0) goto LAB_1403125d5;
      pub_142e32760(ppppuVar17,uVar6,ppppuVar20);
    }
    pppuStack_1a0 = (ulonglong ***)CONCAT71(pppuStack_1a0._1_7_,pbStack_68[0x1e0]);
    pppuStack_1b8 = (ulonglong ***)ppppuVar20;
    pppuStack_1b0 = (ulonglong ***)ppppuVar17;
    pppuStack_1a8 = (ulonglong ***)ppppuVar20;
    if (SBORROW8(0,*(longlong *)(pbStack_68 + 0x1e8))) goto LAB_1403120f0;
LAB_140312661:
    ppppuVar20 = *(ulonglong *****)(pbStack_68 + 0x1f8);
    if ((longlong)ppppuVar20 < 0) {
      uVar29 = 0;
LAB_140312671:
      pdb_142dc7e2a(uVar29,ppppuVar20);
      goto LAB_1403138ea;
    }
    if (ppppuVar20 == (ulonglong ****)0x0) {
      ppppuVar17 = (ulonglong ****)0x1;
    }
    else {
      uVar6 = *(undefined8 *)(pbStack_68 + 0x1f0);
      pdb_14007ee60();
      uVar29 = 1;
      ppppuVar17 = (ulonglong ****)pub_1406abab0((ulonglong)ppppuVar20,1);
      if (ppppuVar17 == (ulonglong ****)0x0) goto LAB_140312671;
      pub_142e32760(ppppuVar17,uVar6,ppppuVar20);
    }
    uStack_ee0 = (ulonglong ****)CONCAT71(uStack_ee0._1_7_,pbStack_68[0x200]);
    uStack_ef8 = ppppuVar20;
    uStack_ef0 = (code *)ppppuVar17;
    uStack_ee8 = ppppuVar20;
  }
  pbVar27 = pbStack_68;
  pppuStack_a28 = pppuStack_e8;
  pppuStack_a38 = pppuStack_f8;
  pppuStack_a30 = pppuStack_f0;
  uStack_a08 = CONCAT44(uStack_13c,uStack_140);
  uStack_a20 = SUB84(pppuStack_158,0);
  uStack_a1c = (undefined4)((ulonglong)pppuStack_158 >> 0x20);
  uStack_a18 = SUB84(pppuStack_150,0);
  uStack_a14 = (undefined4)((ulonglong)pppuStack_150 >> 0x20);
  uStack_a10 = SUB84(pppuStack_148,0);
  uStack_a0c = (undefined4)((ulonglong)pppuStack_148 >> 0x20);
  uStack_a00 = (undefined4)uStack_2d0;
  uStack_9fc = uStack_2d0._4_4_;
  uStack_9f8 = (undefined4)uStack_2c8;
  uStack_9f4 = uStack_2c8._4_4_;
  uStack_9f0 = (undefined4)uStack_2c0;
  uStack_9ec = uStack_2c0._4_4_;
  uStack_9e8 = uStack_2b8;
  uStack_9e4 = uStack_2b4;
  pub_142e32760(&lStack_9e0,&uStack_808,0x110);
  uStack_8b8 = CONCAT44(uStack_1fc,uStack_200);
  pppuStack_8d0 = pppuStack_218;
  pppuStack_8c8 = pppuStack_210;
  pppuStack_8c0 = pppuStack_208;
  pppuStack_8b0 = pppuStack_288;
  pppuStack_8a8 = pppuStack_280;
  pppuStack_8a0 = pppuStack_278;
  pppuStack_898 = pppuStack_270;
  uStack_878 = CONCAT71(uStack_30f,bStack_310);
  pppuStack_890 = pppuStack_328;
  pppuStack_888 = pppuStack_320;
  pppuStack_880 = pppuStack_318;
  pppuStack_870 = pppuStack_1b8;
  pppuStack_868 = pppuStack_1b0;
  pppuStack_860 = pppuStack_1a8;
  pppuStack_858 = pppuStack_1a0;
  uStack_840 = (undefined4)uStack_ee8;
  uStack_83c = uStack_ee8._4_4_;
  uStack_838 = (undefined4)uStack_ee0;
  uStack_834 = uStack_ee0._4_4_;
  uStack_850 = (undefined4)uStack_ef8;
  uStack_84c = uStack_ef8._4_4_;
  uStack_848 = (undefined4)uStack_ef0;
  uStack_844 = uStack_ef0._4_4_;
  uVar30 = 0;
  if ((!SBORROW8(0,lStack_9e0)) && (!SBORROW8(0,lStack_9c0))) {
    uStack_808 = (ulonglong ****)CONCAT71(uStack_808._1_7_,1);
    uStack_4c = 1;
    uStack_4d = 1;
    uStack_808 = (ulonglong ****)pdb_140f46c40(&uStack_808,uStack_8e8,uStack_8e0);
    if (uStack_808 != (ulonglong ****)0x0) {
      uStack_4c = 1;
      uStack_4d = 1;
      pdb_1404b38e0(&uStack_808);
    }
    uStack_4c = 1;
    uStack_4d = 1;
    pdb_140dee3a0(&uStack_ef8);
    pppuStack_1b0 = (ulonglong ***)pdb_140001020;
    pppuStack_1b8 = (ulonglong ***)&uStack_ef8;
    pdb_140f60760(&uStack_808,&UNK_142f3c452,&pppuStack_1b8);
    pppuStack_78 = (ulonglong ***)uStack_808;
    pppuStack_90 = (ulonglong ***)uStack_800;
    pdb_140f3e9e0(&uStack_828,uStack_8e8,uStack_8e0,uStack_800,uStack_7f8);
    if ((ulonglong ****)pppuStack_78 != (ulonglong ****)0x0) {
      pub_1406abac0((byte *)pppuStack_90,(ulonglong)pppuStack_78,1);
    }
    if (uStack_ef8 != (ulonglong ****)0x0) {
      pub_1406abac0((byte *)uStack_ef0,(ulonglong)uStack_ef8,1);
    }
    pppuStack_78 = pppuStack_820;
    uVar18 = pdb_140f4f180(uStack_9d8,pppuStack_9d0,pppuStack_820,uStack_818);
    if (uStack_828 != 0) {
      pub_1406abac0((byte *)pppuStack_78,uStack_828,1);
    }
    uVar30 = 1;
    pbVar27 = pbStack_68;
    if ((uVar18 & 1) != 0) {
      pppuStack_1b8 = pppuStack_9d0;
      if (*_DAT_143ca8e90 != 0) {
        uStack_ef0 = pdb_140f56800;
        uStack_808 = (ulonglong ****)0x0;
        uStack_800 = (code *)&UNK_142f3c39a;
        uStack_7f8 = (ulonglong ****)0x28;
        uStack_7f0 = (ulonglong ****)0x0;
        uStack_7e8 = (ulonglong ****)&UNK_142f3c365;
        uStack_7e0 = (ulonglong ****)0x34;
        pppuStack_7d8 = (ulonglong ***)0x1;
        pppuStack_7d0 = (ulonglong ***)&UNK_142f3c39a;
        pppuStack_7c8 = (ulonglong ***)0x28;
        pppuStack_7c0 = (ulonglong ***)0x6e00000001;
        pppuStack_7b8 = (ulonglong ***)&UNK_142f3c46d;
        uStack_ef8 = &pppuStack_1b8;
        uStack_7b0 = (ulonglong ****)&uStack_ef8;
        pdb_140f332f0(&uStack_52,&uStack_808);
      }
      uStack_4c = 1;
      uStack_4d = 1;
      pdb_1404b38e0(&pppuStack_1b8);
      pbVar27 = pbStack_68;
    }
  }
  if ((longlong)*pppuStack_88 < -0x7ffffffffffffffe) {
    pppuStack_1b8 = (ulonglong ***)0x4;
  }
  else {
    uStack_4c = 1;
    uStack_4d = 1;
    pdb_140615dd0(&uStack_808,*(undefined8 *)(pbVar27 + 0x210),*(undefined8 *)(pbVar27 + 0x218));
    uStack_160 = uStack_7b0;
    pppuStack_168 = pppuStack_7b8;
    pppuStack_178 = pppuStack_7c8;
    pppuStack_170 = pppuStack_7c0;
    pppuStack_188 = pppuStack_7d8;
    pppuStack_180 = pppuStack_7d0;
    pppuStack_198 = (ulonglong ***)uStack_7e8;
    pppuStack_190 = (ulonglong ***)uStack_7e0;
    pppuStack_1a8 = (ulonglong ***)uStack_7f8;
    pppuStack_1a0 = (ulonglong ***)uStack_7f0;
    pppuStack_1b8 = (ulonglong ***)uStack_808;
    pppuStack_1b0 = (ulonglong ***)uStack_800;
  }
  uStack_5c = 1;
  uStack_5d = 1;
  pdb_140caef60(&uStack_2d0);
  ppppuVar17 = uStack_2d0;
  ppppuVar20 = (ulonglong ****)pppuStack_8a0;
  pppuVar12 = pppuStack_8a8;
  if (SBORROW8(0,(longlong)pppuStack_8b0)) {
    uStack_54 = 1;
    uStack_55 = 1;
    uStack_56 = 1;
    pdb_140f60be0(&uStack_800,&pppuStack_8a8);
    ppppuVar20 = (ulonglong ****)0x8000000000000000;
    if ((ulonglong ****)uStack_800 != (ulonglong ****)0x0) {
      pub_1406abac0((byte *)uStack_7f8,(ulonglong)uStack_800,1);
    }
  }
  else {
    if ((longlong)pppuStack_8a0 < 0) {
      uVar29 = 0;
LAB_140312f75:
      uStack_54 = 1;
      uStack_55 = 1;
      uStack_56 = 1;
      pdb_142dc7e2a(uVar29,ppppuVar20);
      goto LAB_1403138ea;
    }
    if ((ulonglong ****)pppuStack_8a0 == (ulonglong ****)0x0) {
      ppppuVar15 = (ulonglong ****)0x1;
    }
    else {
      pdb_14007ee60();
      uVar29 = 1;
      ppppuVar15 = (ulonglong ****)pub_1406abab0((ulonglong)ppppuVar20,1);
      if (ppppuVar15 == (ulonglong ****)0x0) goto LAB_140312f75;
      pub_142e32760(ppppuVar15,pppuVar12,ppppuVar20);
    }
    ppppuVar16 = uStack_7f0;
    uStack_808 = ppppuVar20;
    uStack_7f8 = ppppuVar20;
    uStack_7f0 = (ulonglong ****)CONCAT71(uStack_7f0._1_7_,pppuStack_898._0_1_);
    ppppuVar13 = uStack_7f0;
    pppuStack_1c8 = (ulonglong ***)ppppuVar20;
    uStack_1c0 = CONCAT31((int3)((ulonglong)ppppuVar16 >> 8),pppuStack_898._0_1_);
    uStack_1bc = (undefined1)((ulonglong)ppppuVar16 >> 0x20);
    uStack_7f0._5_2_ = SUB82(ppppuVar16,5);
    uStack_1bb = uStack_7f0._5_2_;
    uStack_7f0._7_1_ = SUB81(ppppuVar16,7);
    uStack_1b9 = uStack_7f0._7_1_;
    uStack_800 = (code *)ppppuVar15;
    uStack_7f0 = ppppuVar13;
    pppuStack_78 = (ulonglong ***)ppppuVar15;
  }
  pppuVar12 = pppuStack_198;
  pppuStack_88 = (ulonglong ***)ppppuVar20;
  if (pppuStack_1b8 < (ulonglong ****)0x2) {
    ppppuVar20 = (ulonglong ****)(pppuStack_198 + (longlong)pppuStack_190 * 0x2c);
    if ((((ulonglong ****)pppuStack_190 == (ulonglong ****)0x0) ||
        ((ulonglong ****)(pppuStack_198 + (longlong)pppuStack_190 * 0x2c) == (ulonglong ****)0x160))
       || (SBORROW8(0,(longlong)ppppuVar20[-0x13]))) {
      uStack_230 = 0x8000000000000000;
    }
    else {
      uStack_5e = 1;
      uStack_5f = 1;
      uStack_60 = 1;
      pdb_140f60be0(&uStack_230,ppppuVar20 + -0x13);
    }
    uStack_808 = (ulonglong ****)0x0;
    uStack_800 = (code *)0x8;
    uStack_7f8 = (ulonglong ****)0x0;
    pdb_14017a4b0(&pppuStack_f8,pppuVar12,ppppuVar20);
  }
  else {
    uStack_230 = 0x8000000000000000;
    uStack_808 = (ulonglong ****)0x0;
    uStack_800 = (code *)0x8;
    uStack_7f8 = (ulonglong ****)0x0;
    pppuStack_f8 = (ulonglong ***)0x0;
    pppuStack_f0 = (ulonglong ***)0x8;
    pppuStack_e8 = (ulonglong ***)0x0;
  }
  pub_142e32760(&uStack_7a8,pbStack_68,0x248);
  uStack_808 = (ulonglong ****)pppuStack_1b8;
  uStack_800 = (code *)pppuStack_1b0;
  uStack_7f8 = (ulonglong ****)pppuStack_1a8;
  uStack_7f0 = (ulonglong ****)pppuStack_1a0;
  uStack_7e8 = (ulonglong ****)pppuStack_198;
  uStack_7e0 = (ulonglong ****)pppuStack_190;
  pppuStack_7d8 = pppuStack_188;
  pppuStack_7d0 = pppuStack_180;
  pppuStack_7c8 = pppuStack_178;
  pppuStack_7c0 = pppuStack_170;
  pppuStack_7b8 = pppuStack_168;
  uStack_7b0._0_4_ = (undefined4)uStack_160;
  uStack_7b0._4_4_ = uStack_160._4_4_;
  pub_142e32760(auStack_560,&pppuStack_a38,0x208);
  pub_142e32760(&uStack_ef8,&uStack_808,0x4b0);
  uStack_a48 = ppppuVar17 == (ulonglong ****)0x8000000000000004;
  uStack_7f8 = (ulonglong ****)0x0;
  uStack_7f0 = (ulonglong ****)0x0;
  uStack_808 = (ulonglong ****)0x1;
  uStack_800 = (code *)0x1;
  pdb_14007ee60();
  pbStack_c0 = pub_1406abab0(0x30,8);
  if (pbStack_c0 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x30);
  }
  *(undefined4 *)(pbStack_c0 + 0x20) = (undefined4)uStack_7e8;
  *(undefined4 *)(pbStack_c0 + 0x24) = uStack_7e8._4_4_;
  *(undefined4 *)(pbStack_c0 + 0x28) = (undefined4)uStack_7e0;
  *(undefined4 *)(pbStack_c0 + 0x2c) = uStack_7e0._4_4_;
  *(undefined4 *)(pbStack_c0 + 0x10) = (undefined4)uStack_7f8;
  *(undefined4 *)(pbStack_c0 + 0x14) = uStack_7f8._4_4_;
  *(undefined4 *)(pbStack_c0 + 0x18) = (undefined4)uStack_7f0;
  *(undefined4 *)(pbStack_c0 + 0x1c) = uStack_7f0._4_4_;
  *(undefined4 *)pbStack_c0 = (undefined4)uStack_808;
  *(undefined4 *)(pbStack_c0 + 4) = uStack_808._4_4_;
  *(undefined4 *)(pbStack_c0 + 8) = (undefined4)uStack_800;
  *(undefined4 *)(pbStack_c0 + 0xc) = uStack_800._4_4_;
  puVar11 = _DAT_143ca8e90;
  if (2 < *_DAT_143ca8e90) {
    uStack_808 = (ulonglong ****)0x0;
    uStack_800 = (code *)&UNK_142f3c39a;
    uStack_7f8 = (ulonglong ****)0x28;
    uStack_7f0 = (ulonglong ****)0x0;
    uStack_7e8 = (ulonglong ****)&UNK_142f3c365;
    uStack_7e0 = (ulonglong ****)0x34;
    pppuStack_7d8 = (ulonglong ***)0x3;
    pppuStack_7d0 = (ulonglong ***)&UNK_142f3c39a;
    pppuStack_7c8 = (ulonglong ***)0x28;
    pppuStack_7c0 = (ulonglong ***)0xc700000001;
    pppuStack_7b8 = (ulonglong ***)&UNK_142f3c4a7;
    uStack_7b0._0_4_ = 0x35;
    uStack_7b0._4_4_ = 0;
    uStack_50 = 1;
    uStack_51 = 1;
    pdb_140f332f0(&uStack_52,&uStack_808);
  }
  pppuStack_260 = pppuStack_108;
  pppuStack_258 = pppuStack_100;
  pppuStack_270 = pppuStack_118;
  pppuStack_268 = pppuStack_110;
  pppuStack_288 = pppuStack_f8;
  pppuStack_280 = pppuStack_f0;
  pppuStack_278 = pppuStack_e8;
  uStack_250 = uStack_230;
  uStack_248 = uStack_228;
  uStack_240 = uStack_220;
  uStack_238 = 0;
  bStack_235 = param_2 & 1;
  uStack_234 = pppuStack_b0._0_1_;
  uStack_1d8 = uStack_290;
  uStack_1e8 = uStack_2a0;
  uStack_1e4 = uStack_29c;
  uStack_1e0 = uStack_298;
  uStack_1dc = uStack_294;
  uStack_1f8 = uStack_2b0;
  uStack_1f4 = uStack_2ac;
  uStack_1f0 = uStack_2a8;
  uStack_1ec = uStack_2a4;
  pppuStack_208 = (ulonglong ***)uStack_2c0;
  uStack_200 = uStack_2b8;
  uStack_1fc = uStack_2b4;
  pppuStack_218 = (ulonglong ***)uStack_2d0;
  pppuStack_210 = (ulonglong ***)uStack_2c8;
  pppuStack_158 = pppuStack_88;
  pppuStack_150 = pppuStack_78;
  uStack_13c = CONCAT13(uStack_1b9,CONCAT21(uStack_1bb,uStack_1bc));
  pppuStack_148 = pppuStack_1c8;
  uStack_140 = uStack_1c0;
  uStack_237 = uVar30;
  uStack_236 = uVar21;
  pub_142e32760(&uStack_808,&uStack_ef8,0x4b8);
  pppuStack_328 = (ulonglong ***)0x800000000000000d;
  uStack_50 = 0;
  uStack_51 = 0;
  pdb_1400066d0(&pppuStack_288,&pppuStack_218,&pppuStack_158,&uStack_808,&pppuStack_328);
  if (*(longlong *)(pbStack_c0 + 0x10) == 0) {
    ppppuVar20 = *(ulonglong *****)(pbStack_c0 + 0x18);
    pbStack_c0[0x10] = 0;
    pbStack_c0[0x11] = 0;
    pbStack_c0[0x12] = 0;
    pbStack_c0[0x13] = 0;
    pbStack_c0[0x14] = 0;
    pbStack_c0[0x15] = 0;
    pbStack_c0[0x16] = 0;
    pbStack_c0[0x17] = 0;
    pbStack_c0[0x18] = 0;
    pbStack_c0[0x19] = 0;
    pbStack_c0[0x1a] = 0;
    pbStack_c0[0x1b] = 0;
    pbStack_c0[0x1c] = 0;
    pbStack_c0[0x1d] = 0;
    pbStack_c0[0x1e] = 0;
    pbStack_c0[0x1f] = 0;
    if (ppppuVar20 != (ulonglong ****)0x0) {
      uStack_800 = *(code **)(pbStack_c0 + 0x20);
      uStack_7f8 = *(ulonglong *****)(pbStack_c0 + 0x28);
      uStack_50 = 0;
      uStack_51 = 0;
      uStack_808 = ppppuVar20;
      pdb_14022f510(&pppuStack_328,&uStack_808);
      if ((ulonglong ****)pppuStack_328 == (ulonglong ****)0x8000000000000001) {
        pppuStack_218 = pppuStack_320;
        pppuStack_210 = pppuStack_318;
        if (*puVar11 != 0) {
          pppuStack_280 = (ulonglong ***)pdb_1400d73e0;
          uStack_808 = (ulonglong ****)0x0;
          uStack_800 = (code *)&UNK_142f3c39a;
          uStack_7f8 = (ulonglong ****)0x28;
          uStack_7f0 = (ulonglong ****)0x0;
          uStack_7e8 = (ulonglong ****)&UNK_142f3c365;
          uStack_7e0 = (ulonglong ****)0x34;
          pppuStack_7d8 = (ulonglong ***)0x1;
          pppuStack_7d0 = (ulonglong ***)&UNK_142f3c39a;
          pppuStack_7c8 = (ulonglong ***)0x28;
          pppuStack_7c0 = (ulonglong ***)0xdf00000001;
          pppuStack_7b8 = (ulonglong ***)&UNK_142f3c4d7;
          pppuStack_288 = (ulonglong ***)&pppuStack_218;
          uStack_7b0 = &pppuStack_288;
          pdb_140f332f0(&uStack_52,&uStack_808);
        }
        pppuStack_b0 = pppuStack_218;
        pppuStack_90 = pppuStack_210;
        if ((ulonglong ***)*pppuStack_210 != (ulonglong ***)0x0) {
          (*(code *)*pppuStack_210)(pppuStack_218);
        }
        if ((ulonglong ***)pppuStack_90[1] != (ulonglong ***)0x0) {
          pub_1406abac0((byte *)pppuStack_b0,(ulonglong)pppuStack_90[1],(ulonglong)pppuStack_90[2]);
        }
      }
      else if (2 < *puVar11) {
        uStack_808 = (ulonglong ****)0x0;
        uStack_800 = (code *)&UNK_142f3c39a;
        uStack_7f8 = (ulonglong ****)0x28;
        uStack_7f0 = (ulonglong ****)0x0;
        uStack_7e8 = (ulonglong ****)&UNK_142f3c365;
        uStack_7e0 = (ulonglong ****)0x34;
        pppuStack_7d8 = (ulonglong ***)0x3;
        pppuStack_7d0 = (ulonglong ***)&UNK_142f3c39a;
        pppuStack_7c8 = (ulonglong ***)0x28;
        pppuStack_7c0 = (ulonglong ***)0xdc00000001;
        pppuStack_7b8 = (ulonglong ***)&UNK_142f3c4c1;
        uStack_7b0._0_4_ = 0x2d;
        uStack_7b0._4_4_ = 0;
        pdb_140f332f0(&uStack_52,&uStack_808);
      }
      if (SBORROW8(0,(longlong)pppuStack_328)) {
        uStack_50 = 0;
        uStack_51 = 0;
        pdb_140f36c40(&pppuStack_320);
      }
      else if (((ulonglong ****)pppuStack_328 != (ulonglong ****)0x8000000000000001) &&
              ((ulonglong ****)pppuStack_328 != (ulonglong ****)0x0)) {
        pub_1406abac0((byte *)pppuStack_320,(ulonglong)pppuStack_328,1);
      }
    }
    *(longlong *)pbStack_c0 = *(longlong *)pbStack_c0 + -1;
    if (*(longlong *)pbStack_c0 == 0) {
      uStack_5a = 0;
      uStack_5b = 0;
      pdb_1403ac590(&pbStack_c0);
    }
    if ((char)uStack_6c != '\0') {
      if ((char)pppuStack_c8 == '\x02') {
        uStack_53 = 0;
        pdb_1404b38e0(&uStack_d8);
      }
      else {
        pdb_140cb0660(&uStack_d8);
        if (CONCAT44(uStack_cc,uStack_d0) != 0) {
          pub_1406abac0((byte *)CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8),
                        CONCAT44(uStack_cc,uStack_d0),1);
        }
      }
    }
    return;
  }
  uStack_50 = 0;
  uStack_51 = 0;
  pdb_142dc8090(&UNK_142f4f108);
LAB_1403138ea:
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}

