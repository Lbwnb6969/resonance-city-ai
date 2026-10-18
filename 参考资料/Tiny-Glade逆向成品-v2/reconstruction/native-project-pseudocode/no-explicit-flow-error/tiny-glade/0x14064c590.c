// VA 0x14064c590, PDB extent 3365 bytes
// tiny_glade::run_game::WindowBackend::make_temp_window
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::run_game::WindowBackend::make_temp_window
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
   Extent: 3365 */

void pdb_14064c590(int *param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  uint6 uVar7;
  double dVar8;
  double dVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  char cVar14;
  int iVar15;
  byte *pbVar16;
  char *pcVar17;
  undefined8 uVar18;
  int iVar19;
  undefined1 *puVar20;
  byte *pbVar21;
  ulonglong uVar22;
  ulonglong unaff_R13;
  uint uVar23;
  char *pcVar24;
  uint uVar25;
  bool bVar26;
  char acStack_3a0 [8];
  longlong lStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  uint uStack_368;
  undefined4 uStack_364;
  undefined8 uStack_358;
  ulonglong uStack_350;
  byte *pbStack_348;
  undefined8 uStack_340;
  undefined1 auStack_32c [60];
  undefined4 uStack_2f0;
  int iStack_2ec;
  int iStack_2e8;
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
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  char *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  byte *pbStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined1 auStack_1dc [12];
  undefined4 uStack_1d0;
  undefined4 uStack_1b8;
  undefined4 uStack_1a0;
  undefined4 uStack_188;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined2 uStack_144;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  char *pcStack_70;
  byte bStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if (*param_1 == 3) {
    if ((param_2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_142f8d8fe,0x13,&UNK_142f8d938);
    }
  }
  else if ((param_2 & 1) != 0) {
    plVar2 = *(longlong **)(param_3 + 0x10);
    uVar18 = *(undefined8 *)(param_3 + 0x18);
    LOCK();
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
      uStack_368 = uStack_368 & 0xffffff00;
      uStack_378 = plVar2;
      uStack_370 = (byte *)uVar18;
      pdb_14010d1a0(param_3 + 0x20,&uStack_378);
      uStack_378 = (longlong *)0x0;
      uStack_370 = (byte *)0x0;
      iVar15 = GetClientRect(*(undefined8 *)(param_3 + 0x18),&uStack_378);
      if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_142f8e664,0xcb,&UNK_142f8e730);
      }
      uVar25 = (int)uStack_370 - (int)uStack_378;
      pcVar24 = (char *)(ulonglong)(uint)(uStack_370._4_4_ - uStack_378._4_4_);
      pdb_14007ee60();
      pbVar16 = pub_1406abab0(0xc,1);
      if (pbVar16 == (byte *)0x0) {
        pdb_142dc7e2a(1,0xc);
      }
      else {
        pbVar16[0] = 0x77;
        pbVar16[1] = 0x69;
        pbVar16[2] = 0x6e;
        pbVar16[3] = 0x69;
        pbVar16[4] = 0x74;
        pbVar16[5] = 0x20;
        pbVar16[6] = 0x77;
        pbVar16[7] = 0x69;
        pbVar16[8] = 0x6e;
        pbVar16[9] = 100;
        pbVar16[10] = 0x6f;
        pbVar16[0xb] = 0x77;
        uStack_1e8 = 2;
        uStack_1d0 = 2;
        uStack_1b8 = 2;
        uStack_1a0 = 2;
        uStack_150 = 7;
        uStack_200 = 0xc;
        uStack_1f0 = 0xc;
        uStack_158 = 0;
        uStack_144 = 0x102;
        uStack_188 = 2;
        uStack_14c = 0x100010000010001;
        uStack_170 = 0xf;
        pcStack_228 = (char *)0x0;
        pbStack_1f8 = pbVar16;
        pdb_14073f420(&uStack_c8);
        pub_142e32760(&uStack_378,&pcStack_228,0xe8);
        uStack_290 = uStack_c8;
        uStack_28c = uStack_c4;
        uStack_288 = (undefined4)uStack_c0;
        uStack_284 = uStack_c0._4_4_;
        uStack_280 = uStack_b8;
        uStack_27c = uStack_b4;
        uStack_278 = uStack_b0;
        uStack_274 = uStack_ac;
        uStack_270 = uStack_a8;
        uStack_26c = uStack_a4;
        uStack_268 = uStack_a0;
        uStack_264 = uStack_9c;
        uStack_260 = uStack_98;
        uStack_258 = uStack_90;
        uStack_250 = uStack_88;
        pdb_14007ee60();
        pbVar16 = pub_1406abab0(10,1);
        dVar6 = _DAT_142e33020;
        if (pbVar16 != (byte *)0x0) {
          pbVar21 = (byte *)(param_3 + 0x10);
          dVar5 = 0.0;
          if (0.0 <= (double)uVar25) {
            dVar5 = (double)uVar25;
          }
          dVar8 = _DAT_142e33020;
          if (dVar5 <= _DAT_142e33020) {
            dVar8 = dVar5;
          }
          uVar22 = (ulonglong)dVar8;
          dVar5 = 0.0;
          if (0.0 <= (double)(longlong)pcVar24) {
            dVar5 = (double)(longlong)pcVar24;
          }
          dVar8 = _DAT_142e33020;
          if (dVar5 <= _DAT_142e33020) {
            dVar8 = dVar5;
          }
          uStack_80 = (ulonglong)dVar8;
          pbVar16[0] = 0x54;
          pbVar16[1] = 0x69;
          pbVar16[2] = 0x6e;
          pbVar16[3] = 0x79;
          pbVar16[4] = 0x20;
          pbVar16[5] = 0x47;
          pbVar16[6] = 0x6c;
          pbVar16[7] = 0x61;
          pbVar16[8] = 100;
          pbVar16[9] = 0x65;
          if (uStack_350 != 0) {
            pub_1406abac0(pbStack_348,uStack_350,1);
          }
          uStack_350 = 10;
          uStack_340 = 10;
          pcStack_228 = (char *)uStack_378;
          uStack_220 = uStack_370;
          uStack_218 = (char *)CONCAT44(uStack_364,uStack_368);
          uStack_208 = uStack_358;
          uStack_200 = 10;
          uStack_1f0 = 10;
          puVar20 = auStack_32c;
          pbStack_348 = pbVar16;
          pbStack_1f8 = pbVar16;
          pub_142e32760(auStack_1dc,puVar20,0xe4);
          bVar13 = (byte)puVar20;
          dVar5 = 0.0;
          if (0.0 <= (double)(uVar22 & 0xffffffff)) {
            dVar5 = (double)(uVar22 & 0xffffffff);
          }
          dVar8 = dVar6;
          if (dVar5 <= dVar6) {
            dVar8 = dVar5;
          }
          dVar5 = 0.0;
          if (0.0 <= (double)(uStack_80 & 0xffffffff)) {
            dVar5 = (double)(uStack_80 & 0xffffffff);
          }
          dVar9 = dVar6;
          if (dVar5 <= dVar6) {
            dVar9 = dVar5;
          }
          uStack_1e8 = 0;
          uStack_1e4 = (undefined4)(longlong)dVar8;
          uStack_1e0 = (undefined4)(longlong)dVar9;
          pcVar17 = (char *)pdb_140744c40(pbVar21);
          lVar1 = *(longlong *)(pcVar17 + 0x28);
          if (lVar1 == 1) {
            lVar3 = *(longlong *)(pcVar17 + 0x30);
            pcVar24 = *(char **)(pcVar17 + 0x38);
            if (lVar3 == 0) {
              lStack_78 = *(longlong *)(pcVar17 + 0x40);
              pbVar21 = (byte *)0x0;
            }
            else {
              uVar7 = *(uint6 *)(pcVar17 + 0x48);
              lStack_78 = *(longlong *)(pcVar17 + 0x40);
              uStack_d0 = uVar22;
              pcStack_70 = pcVar17;
              bStack_62 = bVar13;
              pdb_14007ee60();
              pbVar21 = pub_1406abab0(0xdc,4);
              if (pbVar21 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(4,0xdc);
              }
              pub_142e32760(pbVar21,lVar3,0xdc);
              unaff_R13 = (ulonglong)uVar7;
              uVar22 = uStack_d0;
              pcVar17 = pcStack_70;
              bVar13 = bStack_62;
            }
          }
          if ((((bVar13 & 1) == 0) && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
             (cVar14 = pdb_142dc79e0(), cVar14 == '\0')) {
            pcVar17[1] = '\x01';
          }
          LOCK();
          cVar14 = *pcVar17;
          *pcVar17 = '\0';
          UNLOCK();
          if (cVar14 == '\x02') {
            pdb_142dc6ca0(pcVar17);
          }
          if ((char)lVar1 == '\0') {
            pcVar24 = (char *)0x0;
          }
          else {
            pcVar17 = (char *)(ulonglong)((uint)pcVar24 & 1);
            if (pbVar21 != (byte *)0x0) {
              pcVar17 = pcVar24;
            }
            pcVar24 = (char *)0x1;
            lVar1 = lStack_78;
          }
          if ((pcStack_228 != (char *)0x0) && (uStack_220 != (byte *)0x0)) {
            pub_1406abac0(uStack_220,0xdc,4);
          }
          pcStack_228 = pcVar24;
          uStack_220 = pbVar21;
          uStack_218 = pcVar17;
          uStack_210 = lVar1;
          uStack_208 = unaff_R13;
          pub_142e32760(&uStack_378,&pcStack_228,0x130);
          uStack_61 = 1;
          uVar18 = pdb_140747850();
          uStack_61 = 1;
          pdb_140747860(&pcStack_228,uVar18);
          if ((char)pcStack_228 == '\0') {
            dVar5 = 0.0;
            if (0.0 <= (double)(uint)((int)uStack_218 - (int)uStack_220)) {
              dVar5 = (double)(uint)((int)uStack_218 - (int)uStack_220);
            }
            dVar8 = dVar6;
            if (dVar5 <= dVar6) {
              dVar8 = dVar5;
            }
            dVar5 = 0.0;
            if (0.0 <= (double)(uint)(uStack_218._4_4_ - uStack_220._4_4_)) {
              dVar5 = (double)(uint)(uStack_218._4_4_ - uStack_220._4_4_);
            }
            if (dVar5 <= dVar6) {
              dVar6 = dVar5;
            }
            uVar25 = (uint)(longlong)dVar8 - (uint)uVar22;
            if ((uint)(longlong)dVar8 < (uint)uVar22) {
              uVar25 = 0;
            }
            uVar23 = (uint)(longlong)dVar6 - (uint)uStack_80;
            if ((uint)(longlong)dVar6 < (uint)uStack_80) {
              uVar23 = 0;
            }
            uVar25 = uVar25 >> 1;
            uVar23 = uVar23 >> 1;
          }
          else {
            uStack_c0 = uStack_220;
            uStack_c8 = 1;
            uStack_61 = 1;
            uVar25 = 0;
            pdb_1404b38e0(&uStack_c0);
            uVar23 = 0;
          }
          uStack_61 = 1;
          pdb_140747860(&pcStack_228,uVar18);
          if ((char)pcStack_228 == '\0') {
            dVar6 = (double)(int)uStack_220;
            dVar5 = (double)uStack_220._4_4_;
            dVar8 = dVar6;
            if (dVar6 <= _DAT_142e33028) {
              dVar8 = _DAT_142e33028;
            }
            if (_DAT_142e33030 <= dVar8) {
              dVar8 = _DAT_142e33030;
            }
            iVar15 = (int)dVar8;
            if (NAN(dVar6)) {
              iVar15 = 0;
            }
            dVar6 = dVar5;
            if (dVar5 <= _DAT_142e33028) {
              dVar6 = _DAT_142e33028;
            }
            if (_DAT_142e33030 <= dVar6) {
              dVar6 = _DAT_142e33030;
            }
            iVar19 = (int)dVar6;
            if (NAN(dVar5)) {
              iVar19 = 0;
            }
          }
          else {
            uStack_c0 = uStack_220;
            uStack_c8 = 1;
            uStack_61 = 1;
            iVar15 = 0;
            pdb_1404b38e0();
            iVar19 = 0;
          }
          dVar6 = (double)(int)(iVar15 + uVar25);
          dVar5 = dVar6;
          if (dVar6 <= _DAT_142e33028) {
            dVar5 = _DAT_142e33028;
          }
          if (_DAT_142e33030 <= dVar5) {
            dVar5 = _DAT_142e33030;
          }
          iVar15 = (int)dVar5;
          if (NAN(dVar6)) {
            iVar15 = 0;
          }
          dVar6 = (double)(int)(iVar19 + uVar23);
          dVar5 = dVar6;
          if (dVar6 <= _DAT_142e33028) {
            dVar5 = _DAT_142e33028;
          }
          if (_DAT_142e33030 <= dVar5) {
            dVar5 = _DAT_142e33030;
          }
          iVar19 = (int)dVar5;
          if (NAN(dVar6)) {
            iVar19 = 0;
          }
          dVar6 = (double)iVar15;
          dVar5 = dVar6;
          if (dVar6 <= _DAT_142e33028) {
            dVar5 = _DAT_142e33028;
          }
          if (_DAT_142e33030 <= dVar5) {
            dVar5 = _DAT_142e33030;
          }
          iStack_2ec = (int)dVar5;
          if (NAN(dVar6)) {
            iStack_2ec = 0;
          }
          dVar6 = (double)iVar19;
          dVar5 = dVar6;
          if (dVar6 <= _DAT_142e33028) {
            dVar5 = _DAT_142e33028;
          }
          if (_DAT_142e33030 <= dVar5) {
            dVar5 = _DAT_142e33030;
          }
          iStack_2e8 = (int)dVar5;
          if (NAN(dVar6)) {
            iStack_2e8 = 0;
          }
          uStack_2f0 = 0;
          pub_142e32760(&pcStack_228,&uStack_378,0xe8);
          uStack_88 = uStack_250;
          uStack_98 = uStack_260;
          uStack_90 = uStack_258;
          uStack_a8 = uStack_270;
          uStack_a4 = uStack_26c;
          uStack_a0 = uStack_268;
          uStack_9c = uStack_264;
          uStack_b8 = uStack_280;
          uStack_b4 = uStack_27c;
          uStack_b0 = uStack_278;
          uStack_ac = uStack_274;
          uStack_c8 = uStack_290;
          uStack_c4 = uStack_28c;
          uStack_c0 = (byte *)CONCAT44(uStack_284,uStack_288);
          uStack_61 = 0;
          pdb_140351130(acStack_3a0,&pcStack_228,&uStack_c8,param_1 + 4);
          uStack_248 = lStack_398;
          lVar1 = uStack_248;
          uStack_240 = uStack_390;
          uVar18 = uStack_240;
          uStack_238 = uStack_388;
          uVar11 = uStack_238;
          uStack_230 = uStack_380;
          uVar12 = uStack_230;
          uStack_248._0_4_ = (undefined4)lStack_398;
          uStack_248._4_4_ = (undefined4)((ulonglong)lStack_398 >> 0x20);
          uStack_240._0_4_ = (undefined4)uStack_390;
          uStack_240._4_4_ = (undefined4)((ulonglong)uStack_390 >> 0x20);
          uStack_238._0_4_ = (undefined4)uStack_388;
          uStack_238._4_4_ = (undefined4)((ulonglong)uStack_388 >> 0x20);
          uStack_230._0_4_ = (undefined4)uStack_380;
          uStack_230._4_4_ = (undefined4)((ulonglong)uStack_380 >> 0x20);
          uStack_248 = lVar1;
          uStack_240 = uVar18;
          uStack_238 = uVar11;
          uStack_230 = uVar12;
          if (acStack_3a0[0] != '\0') {
            uStack_b8 = (undefined4)uStack_238;
            uStack_b4 = uStack_238._4_4_;
            uStack_b0 = (undefined4)uStack_230;
            uStack_ac = uStack_230._4_4_;
            uStack_c8 = (undefined4)uStack_248;
            uStack_c4 = uStack_248._4_4_;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_142f8d950,6,&pcStack_228,&UNK_142f8e4c0,&UNK_142f8d958);
          }
          uStack_e8 = (undefined4)uStack_238;
          uStack_e4 = uStack_238._4_4_;
          uStack_e0 = (undefined4)uStack_230;
          uStack_dc = uStack_230._4_4_;
          uStack_f8 = (undefined4)uStack_248;
          uStack_f4 = uStack_248._4_4_;
          uStack_f0 = (undefined4)uStack_240;
          uStack_ec = uStack_240._4_4_;
          pcVar24 = (char *)(lStack_398 + 0x10);
          LOCK();
          bVar26 = *(char *)(lStack_398 + 0x10) == '\0';
          if (bVar26) {
            *(char *)(lStack_398 + 0x10) = '\x01';
          }
          UNLOCK();
          if (!bVar26) {
            pdb_142dc6be0(pcVar24);
          }
          puVar10 = _DAT_143ca8f38;
          if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
            bVar13 = 0;
            cVar14 = *(char *)(lStack_398 + 0x11);
          }
          else {
            bVar13 = pdb_142dc79e0();
            bVar13 = bVar13 ^ 1;
            cVar14 = *(char *)(lStack_398 + 0x11);
          }
          if (cVar14 != '\0') {
            uVar22 = (ulonglong)uStack_220 >> 8;
            uStack_220 = (byte *)CONCAT71((int7)uVar22,bVar13);
            pcStack_228 = pcVar24;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_142f8e520,0x2b,&pcStack_228,&UNK_142f8e570,&UNK_142f8e748);
          }
          *(undefined1 *)(lStack_398 + 0xe4) = 1;
          if (((bVar13 == 0) && ((*puVar10 & 0x7fffffffffffffff) != 0)) &&
             (cVar14 = pdb_142dc79e0(), cVar14 == '\0')) {
            *(undefined1 *)(lStack_398 + 0x11) = 1;
          }
          LOCK();
          cVar14 = *pcVar24;
          *pcVar24 = '\0';
          UNLOCK();
          if (cVar14 == '\x02') {
            pdb_142dc6ca0(pcVar24);
          }
          RedrawWindow(CONCAT44(uStack_ec,uStack_f0),0,0,2);
          uStack_b8 = uStack_e8;
          uStack_b4 = uStack_e4;
          uStack_b0 = uStack_e0;
          uStack_ac = uStack_dc;
          uStack_c8 = uStack_f8;
          uStack_c4 = uStack_f4;
          uStack_c0 = (byte *)CONCAT44(uStack_ec,uStack_f0);
          uStack_208 = CONCAT44(uStack_e4,uStack_e8);
          uStack_200 = CONCAT44(uStack_dc,uStack_e0);
          uStack_218 = (char *)CONCAT44(uStack_f4,uStack_f8);
          uStack_210 = CONCAT44(uStack_ec,uStack_f0);
          pcStack_228 = (char *)0x1;
          uStack_220 = (byte *)0x1;
          pdb_14007ee60();
          pbVar16 = pub_1406abab0(0x30,8);
          if (pbVar16 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x30);
          }
          *(ulonglong *)(pbVar16 + 0x20) = uStack_208;
          *(undefined8 *)(pbVar16 + 0x28) = uStack_200;
          *(char **)(pbVar16 + 0x10) = uStack_218;
          *(longlong *)(pbVar16 + 0x18) = uStack_210;
          *(char **)pbVar16 = pcStack_228;
          *(byte **)(pbVar16 + 8) = uStack_220;
          return;
        }
      }
      pdb_142dc7e2a(1,10);
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_142f8d970,0x28,&UNK_142f8d998);
}

