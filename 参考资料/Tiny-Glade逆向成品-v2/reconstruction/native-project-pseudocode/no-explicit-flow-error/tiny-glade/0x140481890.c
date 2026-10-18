// VA 0x140481890, PDB extent 6267 bytes
// tiny_glade::winit_setup::setup_window
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/winit_setup.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::winit_setup::setup_window
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/winit_setup.rs
   Extent: 6267 */

code * pdb_140481890(code *param_1,ulonglong param_2,code *param_3)

{
  byte bVar1;
  byte bVar2;
  code cVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong *puVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  byte *pbVar15;
  code *pcVar16;
  undefined8 uVar17;
  int extraout_var;
  int iVar18;
  code *unaff_RDI;
  code *pcVar19;
  undefined *puVar20;
  undefined *puVar21;
  code *pcVar22;
  uint uVar23;
  longlong lVar25;
  undefined *puVar26;
  bool bVar27;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 uStack_428;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 uStack_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 uStack_3f8;
  code *pcStack_3f0;
  longlong *plStack_3e8;
  code *pcStack_3e0;
  undefined *puStack_3d8;
  code *pcStack_3d0;
  undefined8 uStack_3c0;
  byte *pbStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  double dStack_3a0;
  double dStack_398;
  undefined4 uStack_390;
  undefined4 uStack_378;
  undefined4 uStack_360;
  undefined4 uStack_348;
  undefined4 uStack_330;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined2 uStack_30c;
  undefined1 uStack_30a;
  undefined5 uStack_309;
  undefined2 uStack_304;
  undefined1 uStack_302;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined7 uStack_2d0;
  undefined4 uStack_2c9;
  undefined4 uStack_2c5;
  undefined4 uStack_2c1;
  undefined4 uStack_2bd;
  undefined1 uStack_2b9;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  ulonglong uStack_280;
  longlong lStack_278;
  longlong lStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  code *pcStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  byte *pbStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined4 uStack_1d0;
  int iStack_1cc;
  double dStack_1c8;
  double dStack_1c0;
  code *apcStack_188 [3];
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined7 uStack_140;
  undefined4 uStack_139;
  undefined4 uStack_135;
  undefined4 uStack_131;
  undefined4 uStack_12d;
  undefined1 uStack_129;
  code *pcStack_128;
  code *pcStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  byte *pbStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  uint uVar24;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_280 = param_2;
  cVar8 = pdb_140e94b40();
  if (cVar8 == '\0') {
    lStack_278 = 0;
  }
  else {
    lVar25 = 0x25;
    lVar12 = pdb_140484810(0x25);
    puVar26 = &UNK_142f5d5e7;
    if (lVar12 == 1) {
      if (0x25 < param_2) {
LAB_140482a6f:
        pdb_142dc8070(&UNK_142f5d5e7,0x25,0);
LAB_140482a8f:
        pdb_142dc8070(&UNK_142f5d5e7,0x25);
        pcVar16 = (code *)swi(3);
        pcVar16 = (code *)(*pcVar16)();
        return pcVar16;
      }
      uVar13 = pdb_140484810(param_2);
      if ((uVar13 & 1) != 0) {
        if (0x25 < param_2 + 2) goto LAB_140482a8f;
        lVar25 = 0x23 - param_2;
        puVar26 = &UNK_142f5d5e9 + param_2;
      }
    }
    puVar20 = &UNK_142f5d199;
    puVar21 = &UNK_142f5d175;
    do {
      bVar9 = puVar20[-1];
      uVar10 = (uint)(char)bVar9;
      if ((char)bVar9 < '\0') {
        bVar1 = puVar20[-2];
        if ((char)bVar1 < -0x40) {
          bVar2 = puVar20[-3];
          if ((char)bVar2 < -0x40) {
            pbVar15 = puVar20 + -4;
            puVar20 = puVar20 + -4;
            uVar10 = bVar2 & 0x3f | (*pbVar15 & 7) << 6;
          }
          else {
            puVar20 = puVar20 + -3;
            uVar10 = bVar2 & 0xf;
          }
          uVar10 = bVar1 & 0x3f | uVar10 << 6;
        }
        else {
          puVar20 = puVar20 + -2;
          uVar10 = bVar1 & 0x1f;
        }
        uVar10 = (uint)(bVar9 & 0x3f) | uVar10 << 6;
        if (uVar10 != 0x5c) goto LAB_1404819b4;
LAB_1404819cd:
        puVar21 = puVar20 + -0x142f5d174;
        if ((undefined *)0x24 < puVar21) {
          pdb_142dc8070(&UNK_142f5d175,0x24,puVar21,0x24,&UNK_142f5d670);
          goto LAB_140482a6f;
        }
        lVar12 = 0x24 - (longlong)puVar21;
        puVar21 = puVar20 + 1;
        goto LAB_1404819f0;
      }
      puVar20 = puVar20 + -1;
      if (uVar10 == 0x5c) goto LAB_1404819cd;
LAB_1404819b4:
      if (uVar10 == 0x2f) goto LAB_1404819cd;
    } while (puVar20 != &UNK_142f5d175);
    lVar12 = 0x24;
LAB_1404819f0:
    plVar14 = (longlong *)pdb_140e97000();
    if (((char)plVar14[0xd] != '\x01') &&
       (plVar14 = (longlong *)pdb_142d7de90(plVar14,0), plVar14 == (longlong *)0x0))
    goto LAB_1404829a6;
    if (*plVar14 != 0) goto LAB_140482903;
    *plVar14 = -1;
    pcStack_58 = (code *)plVar14;
    uStack_260 = pdb_140e94f10(plVar14 + 1,puVar26,lVar25,puVar21,lVar12,1,0);
    *(longlong *)pcStack_58 = *(longlong *)pcStack_58 + 1;
    lStack_278 = 1;
  }
  plStack_3e8 = (longlong *)0x0;
  pcStack_3e0 = (code *)0x8;
  puStack_3d8 = (undefined *)0x0;
  lStack_268 = lStack_278;
  pdb_140746680(&pcStack_258);
  pcStack_58 = pcStack_250;
  pcStack_60 = param_1;
  if (pcStack_240 == (code *)0x0) {
    pcVar16 = pcStack_258;
    if (pcStack_258 != (code *)0x0) goto LAB_140481b25;
  }
  else {
    pcStack_68 = pcStack_258;
    pcVar19 = uStack_248;
    pcVar22 = pcStack_240;
    do {
      pcVar22 = pcVar22 + -1;
      uStack_d8 = *(code ***)(pcStack_58 + (longlong)pcVar19 * 8);
      pdb_140481450(&pcStack_258,&plStack_3e8,&uStack_d8);
      pcVar16 = pcStack_68;
      if (pcVar19 + 1 < pcStack_68) {
        pcVar16 = (code *)0x0;
      }
      pcVar19 = pcVar19 + 1 + -(longlong)pcVar16;
      pcVar16 = pcStack_68;
    } while (pcVar22 != (code *)0x0);
LAB_140481b25:
    pub_1406abac0((byte *)pcStack_58,(longlong)pcVar16 << 3,8);
  }
  puVar21 = puStack_3d8;
  pcStack_58 = (code *)plStack_3e8;
  pcStack_68 = pcStack_3e0;
  pdb_14007ee60();
  pbVar15 = pub_1406abab0(0xc,1);
  if (pbVar15 == (byte *)0x0) {
    pdb_142dc7e2a(1,0xc);
LAB_140482a4a:
                    /* WARNING: Does not return */
    pcVar16 = (code *)invalidInstructionException();
    (*pcVar16)();
  }
  pbVar15[0] = 0x77;
  pbVar15[1] = 0x69;
  pbVar15[2] = 0x6e;
  pbVar15[3] = 0x69;
  pbVar15[4] = 0x74;
  pbVar15[5] = 0x20;
  pbVar15[6] = 0x77;
  pbVar15[7] = 0x69;
  pbVar15[8] = 0x6e;
  pbVar15[9] = 100;
  pbVar15[10] = 0x6f;
  pbVar15[0xb] = 0x77;
  uStack_3a8 = 2;
  uStack_390 = 2;
  uStack_378 = 2;
  uStack_360 = 2;
  uStack_310 = 7;
  uStack_3c0 = 0xc;
  uStack_3b0 = 0xc;
  uStack_318 = 0;
  uStack_304 = 0x102;
  uStack_348 = 2;
  uStack_30c = 1;
  uStack_30a = 1;
  uStack_309 = 0x100010000;
  uStack_330 = 0xf;
  plStack_3e8 = (longlong *)0x0;
  pbStack_3b8 = pbVar15;
  pdb_14073f420(&uStack_d8);
  param_1 = pcStack_60;
  pub_142e32760(&pcStack_258,&plStack_3e8,0xe8);
  uStack_170 = (undefined4)uStack_d8;
  uStack_16c = uStack_d8._4_4_;
  uStack_168 = (int)uStack_d0;
  uStack_164 = uStack_d0._4_4_;
  uStack_160 = (undefined4)uStack_c8;
  uStack_15c = uStack_c8._4_4_;
  uStack_158 = (undefined4)uStack_c0;
  uStack_154 = uStack_c0._4_4_;
  uStack_150 = (undefined4)uStack_b8;
  uStack_14c = uStack_b8._4_4_;
  uStack_148 = uStack_b0;
  uStack_144 = uStack_ac;
  uStack_140 = SUB87(pbStack_a8,0);
  uStack_139._0_1_ = (undefined1)((ulonglong)pbStack_a8 >> 0x38);
  uStack_139._1_3_ = SUB83(puStack_a0,0);
  uStack_135 = (undefined4)((ulonglong)puStack_a0 >> 0x18);
  uStack_131._0_1_ = (undefined1)((ulonglong)puStack_a0 >> 0x38);
  uStack_131._1_3_ = (undefined3)uStack_98;
  uStack_12d = (undefined4)((ulonglong)uStack_98 >> 0x18);
  uStack_129 = (undefined1)((ulonglong)uStack_98 >> 0x38);
  pdb_14007ee60();
  pbVar15 = pub_1406abab0(10,1);
  if (pbVar15 == (byte *)0x0) {
    pdb_142dc7e2a(1,10);
    goto LAB_140482a4a;
  }
  pbVar15[0] = 0x54;
  pbVar15[1] = 0x69;
  pbVar15[2] = 0x6e;
  pbVar15[3] = 0x79;
  pbVar15[4] = 0x20;
  pbVar15[5] = 0x47;
  pbVar15[6] = 0x6c;
  pbVar15[7] = 0x61;
  pbVar15[8] = 100;
  pbVar15[9] = 0x65;
  if (uStack_230 != 0) {
    pub_1406abac0(pbStack_228,uStack_230,1);
  }
  uStack_230 = 10;
  puStack_220 = (undefined *)0xa;
  pbStack_228 = pbVar15;
  pub_142e32760(&plStack_3e8,&pcStack_258,0xde);
  uStack_309 = (undefined5)apcStack_188._15_8_;
  uStack_304 = SUB82(apcStack_188._15_8_,5);
  uStack_302 = SUB81(apcStack_188._15_8_,7);
  uStack_300 = uStack_170;
  uStack_2fc = uStack_16c;
  uStack_2f8 = uStack_168;
  uStack_2f4 = uStack_164;
  uStack_2f0 = uStack_160;
  uStack_2ec = uStack_15c;
  uStack_2e8 = uStack_158;
  uStack_2e4 = uStack_154;
  uStack_2e0 = uStack_150;
  uStack_2dc = uStack_14c;
  uStack_2d8 = uStack_148;
  uStack_2d4 = uStack_144;
  uStack_2d0 = uStack_140;
  uStack_2c9 = uStack_139;
  uStack_2c5 = uStack_135;
  uStack_2c1 = uStack_131;
  uStack_2bd = uStack_12d;
  uStack_2b9 = uStack_129;
  uStack_30a = 0;
  if (*(ulonglong *)param_3 == 0x8000000000000001) {
LAB_140481eb6:
    if (2 < *_DAT_143ca8e90) {
      pcStack_258 = (code *)0x0;
      pcStack_250 = (code *)&UNK_142f5d1af;
      uStack_248 = (code *)0x17;
      pcStack_240 = (code *)0x0;
      puStack_238 = &UNK_142f5d150;
      uStack_230 = 0x24;
      pbStack_228 = (byte *)0x3;
      puStack_220 = &UNK_142f5d1af;
      uStack_218 = 0x17;
      uStack_210 = 0x5900000001;
      puStack_208 = &UNK_142f5d22a;
      puStack_200 = (undefined8 *)0x53;
      uStack_49 = 1;
      pdb_140f332f0(&uStack_4c,&pcStack_258);
    }
    uStack_49 = 1;
    pcVar16 = (code *)pdb_140747850();
  }
  else {
    pcStack_128 = param_3;
    if (2 < *_DAT_143ca8e90) {
      uStack_d8 = &pcStack_128;
      uStack_d0 = pdb_1401435d0;
      pcStack_258 = (code *)0x0;
      pcStack_250 = (code *)&UNK_142f5d1af;
      uStack_248 = (code *)0x17;
      pcStack_240 = (code *)0x0;
      puStack_238 = &UNK_142f5d150;
      uStack_230 = 0x24;
      pbStack_228 = (byte *)0x3;
      puStack_220 = &UNK_142f5d1af;
      uStack_218 = 0x17;
      uStack_210 = 0x4b00000001;
      puStack_208 = &UNK_142f5d200;
      uStack_49 = 1;
      puStack_200 = &uStack_d8;
      pdb_140f332f0(&uStack_4c,&pcStack_258);
    }
    uStack_49 = 1;
    pdb_140746680(&pcStack_258);
    pcVar16 = param_3;
    uVar13 = pdb_1403fe680(&pcStack_258,param_3,&puStack_238);
    if (pcStack_258 != (code *)0x0) {
      pub_1406abac0((byte *)pcStack_250,(longlong)pcStack_258 << 3,8);
    }
    if ((uVar13 & 1) == 0) goto LAB_140481eb6;
  }
  uStack_3f8 = 1;
  uStack_49 = 1;
  pcStack_3f0 = pcVar16;
  pdb_14067e3a0(&pcStack_258,&pcStack_3f0);
  uStack_b8 = puStack_238;
  uStack_c8 = uStack_248;
  uStack_c0 = pcStack_240;
  uStack_d8 = (code **)pcStack_258;
  uStack_d0 = pcStack_250;
  uVar13 = *(ulonglong *)param_3;
  if (((uVar13 != 0x8000000000000001) && (!SBORROW8(0,uVar13))) && (uVar13 != 0)) {
    pub_1406abac0(*(byte **)(param_3 + 8),uVar13,1);
  }
  *(undefined **)(param_3 + 0x20) = uStack_b8;
  *(code **)(param_3 + 0x10) = uStack_c8;
  *(code **)(param_3 + 0x18) = uStack_c0;
  *(code ***)param_3 = uStack_d8;
  *(code **)(param_3 + 8) = uStack_d0;
  dStack_3a0 = (double)(*(ulonglong *)(param_3 + 0x28) & 0xffffffff);
  dStack_398 = (double)(*(ulonglong *)(param_3 + 0x28) >> 0x20);
  uStack_3a8 = 1;
  if (param_3[0x44] == (code)0x1) {
    if (param_3[0x46] != (code)0x0) {
      pub_142e32760(&pcStack_258,&plStack_3e8,0x130);
      pdb_140747860(&uStack_d8,pcVar16);
      if (uStack_d8._0_1_ == (code)0x0) {
        dVar4 = (double)(int)uStack_d0;
        dVar5 = (double)uStack_d0._4_4_;
        dVar6 = dVar4;
        if (dVar4 <= _DAT_142e33028) {
          dVar6 = _DAT_142e33028;
        }
        if (_DAT_142e33030 <= dVar6) {
          dVar6 = _DAT_142e33030;
        }
        iVar18 = (int)dVar6;
        if (NAN(dVar4)) {
          iVar18 = 0;
        }
        dVar4 = dVar5;
        if (dVar5 <= _DAT_142e33028) {
          dVar4 = _DAT_142e33028;
        }
        if (_DAT_142e33030 <= dVar4) {
          dVar4 = _DAT_142e33030;
        }
        iVar11 = (int)dVar4;
        if (NAN(dVar5)) {
          iVar11 = 0;
        }
      }
      else {
        pcStack_120 = uStack_d0;
        pcStack_128 = (code *)CONCAT44(pcStack_128._4_4_,1);
        iVar18 = 0;
        pdb_1404b38e0(&pcStack_120);
        iVar11 = 0;
      }
      uStack_1d0 = 0;
      dStack_1c8 = (double)CONCAT44(dStack_1c8._4_4_,iVar11);
      iStack_1cc = iVar18;
      pub_142e32760(&plStack_3e8,&pcStack_258,0x130);
      uStack_49 = 1;
      pcVar22 = pcVar16;
      pdb_140483110(&pcStack_128,pcVar16,param_3);
      param_1 = pcStack_60;
      if (pcStack_128 != (code *)0x0) {
        uStack_c8 = (code *)CONCAT44(uStack_114,uStack_118);
        uStack_c0 = (code *)CONCAT44(uStack_10c,uStack_110);
        uStack_d8 = (code **)pcStack_128;
        uStack_d0 = pcStack_120;
        uVar10 = pdb_1407479b0(&uStack_d8);
        dVar4 = 0.0;
        if (0.0 <= (double)uVar10) {
          dVar4 = (double)uVar10;
        }
        dVar5 = _DAT_142e33020;
        if (dVar4 <= _DAT_142e33020) {
          dVar5 = dVar4;
        }
        dVar4 = 0.0;
        if (0.0 <= (double)((ulonglong)pcVar22 & 0xffffffff)) {
          dVar4 = (double)((ulonglong)pcVar22 & 0xffffffff);
        }
        dVar6 = _DAT_142e33020;
        if (dVar4 <= _DAT_142e33020) {
          dVar6 = dVar4;
        }
        *(undefined4 *)(param_3 + 0x30) = 1;
        *(ulonglong *)(param_3 + 0x34) = (longlong)dVar5 & 0xffffffffU | (longlong)dVar6 << 0x20;
        *(undefined4 *)(param_3 + 0x3c) = (undefined4)uStack_c0;
        *(undefined2 *)(param_3 + 0x40) = uStack_c0._4_2_;
        if (2 < *_DAT_143ca8e90) {
          pcStack_f0 = pdb_140741c20;
          pcStack_258 = (code *)0x0;
          pcStack_250 = (code *)&UNK_142f5d1af;
          uStack_248 = (code *)0x17;
          pcStack_240 = (code *)0x0;
          puStack_238 = &UNK_142f5d150;
          uStack_230 = 0x24;
          pbStack_228 = (byte *)0x3;
          puStack_220 = &UNK_142f5d1af;
          uStack_218 = 0x17;
          uStack_210 = 0x7700000001;
          puStack_208 = &UNK_142f5d199;
          puStack_200 = &uStack_f8;
          uStack_f8 = (code *)&uStack_d8;
          pdb_140f332f0(&uStack_4c,&pcStack_258);
        }
        pcVar16 = pcStack_3e0;
        plVar14 = plStack_3e8;
        pub_142e32760(&pcStack_258,&puStack_3d8,0x120);
        pcVar22 = (code *)uStack_d8;
        uStack_f8 = uStack_d0;
        pcStack_f0 = uStack_c8;
        pcStack_e8 = uStack_c0;
        if ((plVar14 != (longlong *)0x0) && (pcVar16 != (code *)0x0)) {
          pub_1406abac0((byte *)pcVar16,0xdc,4);
        }
        uStack_248 = pcStack_e8;
        pcStack_258 = uStack_f8;
        pcStack_250 = pcStack_f0;
        plStack_3e8 = (longlong *)0x1;
        pcStack_3e0 = pcVar22;
        pub_142e32760(&puStack_3d8,&pcStack_258,0x120);
        param_1 = pcStack_60;
        goto LAB_1404824af;
      }
    }
    if ((plStack_3e8 != (longlong *)0x0) && (pcStack_3e0 != (code *)0x0)) {
      pub_1406abac0((byte *)pcStack_3e0,0xdc,4);
    }
    plStack_3e8 = (longlong *)0x1;
    pcStack_3e0 = (code *)0x0;
    puStack_3d8 = (undefined *)0x1;
    pcStack_3d0 = pcVar16;
  }
  else {
    uStack_49 = 1;
    uStack_d8 = (code **)pcVar16;
    uVar17 = pdb_140001530(&uStack_d8);
    uVar10 = (uint)uVar17 - *(uint *)(param_3 + 0x28);
    if ((uint)uVar17 < *(uint *)(param_3 + 0x28)) {
      uVar10 = 0;
    }
    uVar24 = (uint)((ulonglong)uVar17 >> 0x20);
    uVar23 = uVar24 - *(uint *)(param_3 + 0x2c);
    if (uVar24 < *(uint *)(param_3 + 0x2c)) {
      uVar23 = 0;
    }
    pub_142e32760(&pcStack_258,&plStack_3e8,0x130);
    iVar18 = pdb_140001690(&uStack_d8);
    pdb_140001690(&uStack_d8);
    dVar4 = (double)(int)((uVar10 >> 1) + iVar18);
    dVar5 = dVar4;
    if (dVar4 <= _DAT_142e33028) {
      dVar5 = _DAT_142e33028;
    }
    if (_DAT_142e33030 <= dVar5) {
      dVar5 = _DAT_142e33030;
    }
    iVar18 = (int)dVar5;
    if (NAN(dVar4)) {
      iVar18 = 0;
    }
    dVar4 = (double)(int)((uVar23 >> 1) + extraout_var);
    dVar5 = dVar4;
    if (dVar4 <= _DAT_142e33028) {
      dVar5 = _DAT_142e33028;
    }
    if (_DAT_142e33030 <= dVar5) {
      dVar5 = _DAT_142e33030;
    }
    iVar11 = (int)dVar5;
    if (NAN(dVar4)) {
      iVar11 = 0;
    }
    dStack_1c8 = (double)iVar18;
    dStack_1c0 = (double)iVar11;
    uStack_1d0 = 1;
    pub_142e32760(&plStack_3e8,&pcStack_258,0x130);
  }
LAB_1404824af:
  uStack_49 = 1;
  pdb_140da3220(&uStack_d8,&UNK_142f5d1c6,0x16);
  if (uStack_d8 == (code **)0x2) {
    uStack_d8 = (code **)0x8000000000000009;
  }
  else {
    puStack_208 = puStack_88;
    uStack_218 = uStack_98;
    uStack_210 = uStack_90;
    pbStack_228 = pbStack_a8;
    puStack_220 = puStack_a0;
    puStack_238 = uStack_b8;
    uStack_230 = CONCAT44(uStack_ac,uStack_b0);
    uStack_248 = uStack_c8;
    pcStack_240 = uStack_c0;
    pcStack_258 = (code *)uStack_d8;
    pcStack_250 = uStack_d0;
    uStack_49 = 1;
    pdb_140118450(&uStack_d8,&pcStack_258);
    if (uStack_d8 == (code **)0x800000000000000a) {
      uStack_108 = CONCAT44(uStack_ac,uStack_b0);
      uStack_118 = (undefined4)uStack_c0;
      uStack_114 = uStack_c0._4_4_;
      uStack_110 = (undefined4)uStack_b8;
      uStack_10c = uStack_b8._4_4_;
      pcStack_128 = uStack_d0;
      pcStack_120 = uStack_c8;
      uStack_4b = 1;
      pdb_140daccf0(&uStack_418,&pcStack_128);
      uStack_438 = uStack_418;
      uStack_434 = uStack_414;
      uStack_430 = uStack_410;
      uStack_42c = uStack_40c;
      uStack_428 = uStack_408;
      pub_142e32760(&pcStack_258,&plStack_3e8,0x130);
      uStack_4a = 1;
      pdb_140747140(&uStack_f8,&uStack_438,uStack_400,uStack_3fc);
      pcVar16 = pcStack_f0;
      if ((uint)uStack_f8 != 3) {
        if (1 < (uint)uStack_f8) {
          uStack_4a = 1;
          pdb_1404b38e0(&pcStack_f0);
        }
        pcStack_60 = (code *)0x0;
        pcVar16 = pcStack_60;
      }
      pcStack_60 = pcVar16;
      if (apcStack_188[0] != (code *)0x0) {
        LOCK();
        *(ulonglong *)apcStack_188[0] = *(ulonglong *)apcStack_188[0] - 1;
        UNLOCK();
        if (*(ulonglong *)apcStack_188[0] == 0) {
          pdb_140740240(apcStack_188);
        }
      }
      apcStack_188[0] = pcStack_60;
      pub_142e32760(&plStack_3e8,&pcStack_258,0x130);
      pdb_1404847a0(&pcStack_128);
      if (uStack_d8 != (code **)0x800000000000000a) {
        uStack_49 = 1;
        pdb_140484570(&uStack_d8);
      }
      goto LAB_140482668;
    }
  }
  uStack_49 = 1;
  pdb_140484570(&uStack_d8);
LAB_140482668:
  lVar12 = uStack_280 + 0x10;
  pub_142e32760(&pcStack_258,&plStack_3e8,0xe8);
  uStack_98 = CONCAT17(uStack_2b9,CONCAT43(uStack_2bd,uStack_2c1._1_3_));
  pbStack_a8 = (byte *)CONCAT17((undefined1)uStack_2c9,uStack_2d0);
  puStack_a0 = (undefined *)CONCAT17((undefined1)uStack_2c1,CONCAT43(uStack_2c5,uStack_2c9._1_3_));
  uStack_b8 = (undefined *)CONCAT44(uStack_2dc,uStack_2e0);
  uStack_b0 = uStack_2d8;
  uStack_ac = uStack_2d4;
  uStack_c8 = (code *)CONCAT44(uStack_2ec,uStack_2f0);
  uStack_c0 = (code *)CONCAT44(uStack_2e4,uStack_2e8);
  uStack_d8 = (code **)CONCAT44(uStack_2fc,uStack_300);
  uStack_d0 = (code *)CONCAT44(uStack_2f4,uStack_2f8);
  uStack_49 = 0;
  pdb_140351130(&pcStack_128,&pcStack_258,&uStack_d8,lVar12);
  pcStack_f0 = (code *)CONCAT44(uStack_114,uStack_118);
  uStack_2a8 = (code *)CONCAT44(uStack_10c,uStack_110);
  uStack_f8 = pcStack_120;
  pcVar16 = uStack_f8;
  uStack_e0 = uStack_108;
  uStack_f8._0_4_ = (uint)pcStack_120;
  uStack_f8._4_4_ = (undefined4)((ulonglong)pcStack_120 >> 0x20);
  uStack_f8 = pcVar16;
  pcStack_e8 = uStack_2a8;
  if ((char)pcStack_128 != '\0') {
    uStack_c8 = (code *)CONCAT44(uStack_10c,uStack_110);
    uStack_d8 = (code **)pcStack_120;
    uStack_d0 = (code *)CONCAT44(uStack_114,uStack_118);
    uStack_248 = (code *)CONCAT44(uStack_10c,uStack_110);
    pcStack_258 = pcStack_120;
    pcStack_250 = (code *)CONCAT44(uStack_114,uStack_118);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142f5d1dc,6,&pcStack_258,&UNK_142f5d368,&UNK_142f5d1e8);
  }
  uStack_2a0 = uStack_108;
  uStack_2b8 = (uint)uStack_f8;
  uStack_2b4 = uStack_f8._4_4_;
  uStack_2b0 = uStack_118;
  uStack_2ac = uStack_114;
  unaff_RDI = pcStack_120 + 0x10;
  LOCK();
  bVar27 = pcStack_120[0x10] == (code)0x0;
  if (bVar27) {
    pcStack_120[0x10] = (code)0x1;
  }
  UNLOCK();
  param_3 = pcStack_120;
  if (!bVar27) goto LAB_140482910;
  do {
    puVar7 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      bVar9 = 0;
      cVar3 = param_3[0x11];
    }
    else {
      bVar9 = pdb_142dc79e0();
      bVar9 = bVar9 ^ 1;
      cVar3 = param_3[0x11];
    }
    if (cVar3 != (code)0x0) {
      uVar13 = (ulonglong)pcStack_250 >> 8;
      pcStack_250 = (code *)CONCAT71((int7)uVar13,bVar9);
      pcStack_258 = unaff_RDI;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142f5d3a8,0x2b,&pcStack_258,&UNK_142f5d388,&UNK_142f5d4d0);
    }
    param_3[0xe4] = (code)0x1;
    if ((bVar9 == 0) && ((*puVar7 & 0x7fffffffffffffff) != 0)) goto LAB_1404829b3;
    while( true ) {
      LOCK();
      cVar3 = *unaff_RDI;
      *unaff_RDI = (code)0x0;
      UNLOCK();
      if (cVar3 == (code)0x2) {
        pdb_142dc6ca0(unaff_RDI);
      }
      RedrawWindow(CONCAT44(uStack_2ac,uStack_2b0),0,0,2);
      uStack_c8 = uStack_2a8;
      uStack_c0 = (code *)uStack_2a0;
      uStack_d8 = (code **)CONCAT44(uStack_2b4,uStack_2b8);
      uStack_d0 = (code *)CONCAT44(uStack_2ac,uStack_2b0);
      *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_2a8;
      *(undefined4 *)(param_1 + 0x14) = uStack_2a8._4_4_;
      *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_2a0;
      *(undefined4 *)(param_1 + 0x1c) = uStack_2a0._4_4_;
      *(undefined4 *)param_1 = uStack_2b8;
      *(undefined4 *)(param_1 + 4) = uStack_2b4;
      *(undefined4 *)(param_1 + 8) = uStack_2b0;
      *(undefined4 *)(param_1 + 0xc) = uStack_2ac;
      *(code **)(param_1 + 0x20) = pcStack_58;
      *(code **)(param_1 + 0x28) = pcStack_68;
      *(undefined **)(param_1 + 0x30) = puVar21;
      if (lStack_268 == 0) {
        return param_1;
      }
      plVar14 = (longlong *)pdb_140e97000();
      if (((char)plVar14[0xd] == '\x01') ||
         (plVar14 = (longlong *)pdb_142d7de90(plVar14), plVar14 != (longlong *)0x0)) break;
LAB_1404829a6:
      pdb_142dc7890(&UNK_142f3dc40);
LAB_1404829b3:
      cVar8 = pdb_142dc79e0();
      if (cVar8 == '\0') {
        param_3[0x11] = (code)0x1;
      }
    }
    if (*plVar14 == 0) {
      *plVar14 = -1;
      pcStack_58 = (code *)plVar14;
      pdb_140e95370(plVar14 + 1,uStack_260);
      *(longlong *)pcStack_58 = *(longlong *)pcStack_58 + 1;
      return param_1;
    }
LAB_140482903:
    pdb_142dc8090(&UNK_142f3dcc8);
LAB_140482910:
    pdb_142dc6be0(unaff_RDI);
  } while( true );
}

