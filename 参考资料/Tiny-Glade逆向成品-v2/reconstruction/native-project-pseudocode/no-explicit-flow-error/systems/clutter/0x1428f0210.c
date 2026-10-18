// VA 0x1428f0210, PDB extent 8081 bytes
// system_clutter::inter_roof_merlons::construct_inter_roof_merlons::construct_inter_roof_merlons
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_roof_merlons/construct_inter_roof_merlons.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::inter_roof_merlons::construct_inter_roof_merlons::construct_inter_roof_merlons
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_roof_merlons/construct_inter_roof_merlons.rs
   Extent: 8081 */

longlong *
pdb_1428f0210(undefined8 param_1,byte *param_2,byte *param_3,byte *param_4,longlong *param_5,
             undefined8 *param_6,undefined8 *param_7,longlong *param_8)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  code *pcVar8;
  byte *pbVar9;
  float fVar10;
  float *pfVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  int *piVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  float *pfVar23;
  float *pfVar24;
  byte *pbVar25;
  float *pfVar26;
  undefined *puVar27;
  undefined *puVar28;
  byte *pbVar29;
  byte *unaff_R12;
  longlong *plVar30;
  ulonglong uVar31;
  byte *pbVar32;
  bool bVar33;
  float fVar34;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fStack_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float fStack_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float fStack_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  undefined8 uStack_488;
  longlong lStack_480;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  byte *pbStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  longlong lStack_450;
  longlong lStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  int iStack_430;
  undefined1 auStack_428 [16];
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 auStack_408 [16];
  undefined8 uStack_3f8;
  longlong lStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  byte *pbStack_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  longlong lStack_3c0;
  longlong lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  int iStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  undefined4 uStack_34c;
  byte *pbStack_348;
  longlong lStack_340;
  byte *pbStack_338;
  longlong lStack_328;
  byte *pbStack_320;
  undefined8 uStack_2f8;
  float *pfStack_2f0;
  byte *pbStack_2e8;
  undefined4 *puStack_2e0;
  undefined4 *puStack_2d8;
  longlong *plStack_2d0;
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
  uint uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  longlong lStack_240;
  undefined8 uStack_238;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_220;
  longlong lStack_218;
  float *pfStack_210;
  byte *pbStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float *pfStack_1e0;
  ulonglong uStack_1d8;
  undefined8 uStack_1d0;
  float *pfStack_1c8;
  float *pfStack_1c0;
  undefined8 uStack_1b8;
  float fStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  byte *pbStack_158;
  byte *pbStack_150;
  float *pfStack_148;
  float *pfStack_140;
  float *pfStack_138;
  float fStack_12c;
  undefined4 uStack_128;
  float fStack_124;
  byte *pbStack_120;
  byte *pbStack_118;
  float *pfStack_110;
  longlong *plStack_108;
  byte *pbStack_100;
  byte bStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pbVar25 = param_2;
  cVar12 = pdb_140e94b40();
  if (cVar12 == '\0') {
    lStack_240 = 0;
    goto LAB_1428f0417;
  }
  uVar31 = 0x5e;
  lVar14 = pdb_1428f21b0(0x5e);
  pbVar32 = &UNK_1435b3150;
  if (lVar14 == 1) {
    if ((byte *)0x5e < pbVar25) {
LAB_1428f192b:
      fVar49 = (float)pdb_142dc8070(&UNK_1435b3150,0x5e,0);
LAB_1428f194c:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(fVar49,unaff_R12,&UNK_14346bb80);
    }
    uVar15 = pdb_1428f21b0(pbVar25);
    if ((uVar15 & 1) != 0) {
      if ((byte *)0x5e < pbVar25 + 2) {
        pdb_142dc8070(&UNK_1435b3150,0x5e,pbVar25 + 2,0x5e,&UNK_1435b3250);
        pcVar8 = (code *)swi(3);
        plVar30 = (longlong *)(*pcVar8)();
        return plVar30;
      }
      uVar31 = 0x5c - (longlong)pbVar25;
      pbVar32 = pbVar25 + 0x1435b3152;
    }
  }
  puVar27 = &UNK_1435b3043;
  unaff_R12 = &UNK_1435b2ff6;
  do {
    bVar5 = puVar27[-1];
    uVar13 = (uint)(char)bVar5;
    if ((char)bVar5 < '\0') {
      bVar6 = puVar27[-2];
      if ((char)bVar6 < -0x40) {
        bVar7 = puVar27[-3];
        if ((char)bVar7 < -0x40) {
          pbVar25 = puVar27 + -4;
          puVar27 = puVar27 + -4;
          uVar13 = bVar7 & 0x3f | (*pbVar25 & 7) << 6;
        }
        else {
          puVar27 = puVar27 + -3;
          uVar13 = bVar7 & 0xf;
        }
        uVar13 = bVar6 & 0x3f | uVar13 << 6;
      }
      else {
        puVar27 = puVar27 + -2;
        uVar13 = bVar6 & 0x1f;
      }
      uVar13 = (uint)(bVar5 & 0x3f) | uVar13 << 6;
      if (uVar13 != 0x5c) goto LAB_1428f0374;
LAB_1428f038d:
      unaff_R12 = &UNK_1435b2ff6;
      puVar28 = puVar27 + -0x1435b2ff5;
      if (puVar28 < (undefined *)0x4e) {
        plVar30 = (longlong *)(0x4d - (longlong)puVar28);
        unaff_R12 = puVar27 + 1;
        goto LAB_1428f03b0;
      }
      pdb_142dc8070(&UNK_1435b2ff6,0x4d,puVar28,0x4d,&UNK_1435b3218);
      goto LAB_1428f192b;
    }
    puVar27 = puVar27 + -1;
    if (uVar13 == 0x5c) goto LAB_1428f038d;
LAB_1428f0374:
    if (uVar13 == 0x2f) goto LAB_1428f038d;
  } while (puVar27 != &UNK_1435b2ff6);
  plVar30 = (longlong *)0x4d;
LAB_1428f03b0:
  plVar16 = (longlong *)pdb_140e97000();
  if ((char)plVar16[0xd] != '\x01') goto LAB_1428f17fd;
  do {
    if (*plVar16 == 0) {
      *plVar16 = -1;
      plStack_108 = plVar16;
      uStack_238 = pdb_140e94f10(plVar16 + 1,pbVar32,uVar31,unaff_R12,plVar30,1,0);
      *plStack_108 = *plStack_108 + 1;
      lStack_240 = 1;
LAB_1428f0417:
      uStack_1fc = *(undefined4 *)((longlong)param_6 + 0x1c);
      puStack_2d8 = (undefined4 *)param_6[2];
      *puStack_2d8 = uStack_1fc;
      plStack_2d0 = (longlong *)*param_6;
      *plStack_2d0 = 0;
      plStack_108 = *(longlong **)param_4;
      puVar17 = (undefined8 *)pdb_1428fa560(plStack_108,&UNK_1435b3fd0);
      if ((puVar17 == (undefined8 *)0x0) ||
         (uVar31 = (**(code **)(puVar17[1] + 0x18))(*puVar17), uVar31 == 0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1435b3048);
      }
      **(undefined4 **)(param_3 + 0x10) = *(undefined4 *)(param_3 + 0x1c);
      plVar30 = *(longlong **)param_3;
      if (*plVar30 == 0) {
        pdb_14007ee60();
        param_3 = pub_1406abab0(0x20,8);
        if (param_3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x20);
        }
        param_3[0] = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[5] = 0;
        param_3[6] = 0;
        param_3[7] = 0;
        param_3[8] = 4;
        param_3[9] = 0;
        param_3[10] = 0;
        param_3[0xb] = 0;
        param_3[0xc] = 0;
        param_3[0xd] = 0;
        param_3[0xe] = 0;
        param_3[0xf] = 0;
        param_3[0x10] = 0;
        param_3[0x11] = 0;
        param_3[0x12] = 0;
        param_3[0x13] = 0;
        param_3[0x14] = 0;
        param_3[0x15] = 0;
        param_3[0x16] = 0;
        param_3[0x17] = 0;
        param_3[0x18] = 0;
        lVar14 = *(longlong *)(uVar31 + 0x48);
        do {
          lVar21 = *(longlong *)(lVar14 + 8);
          while (lVar21 != -1) {
            if (lVar21 < 0) {
              uStack_1b8._0_4_ = 198.45361;
              uStack_1b8._4_4_ = 1.4013e-45;
              fStack_1b0 = 2.7316895;
              uStack_1ac = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_143467430,&uStack_1b8,&UNK_1434674b8);
            }
            LOCK();
            lVar19 = *(longlong *)(lVar14 + 8);
            bVar33 = lVar21 == lVar19;
            if (bVar33) {
              *(longlong *)(lVar14 + 8) = lVar21 + 1;
              lVar19 = lVar21;
            }
            UNLOCK();
            lVar21 = lVar19;
            if (bVar33) {
              *plVar30 = lVar14;
              plVar30[1] = (longlong)param_3;
              goto joined_r0x0001428f1645;
            }
          }
        } while( true );
      }
      param_3 = (byte *)plVar30[1];
joined_r0x0001428f1645:
      if (param_3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1435b40c8);
      }
      LOCK();
      bVar33 = param_3[0x18] == 0;
      if (bVar33) {
        param_3[0x18] = 1;
      }
      UNLOCK();
      if (!bVar33) {
        pdb_142dbd1a0(param_3 + 0x18,1,1000000000);
      }
      pdb_140e9a150(param_3 + 0x18);
      if ((*(longlong *)(param_3 + 0x10) == 0) ||
         (piVar18 = (int *)(*(longlong *)(param_3 + 8) + *(longlong *)(param_3 + 0x10) * 4 + -4),
         piVar18 == (int *)0x0)) {
        lVar14 = *(longlong *)(uVar31 + 0x10);
        if (lVar14 == 0) goto LAB_1428f181d;
        iStack_430 = (int)lVar14 + -1;
      }
      else {
        iStack_430 = *piVar18;
        lVar14 = *(longlong *)(uVar31 + 0x10);
      }
      uStack_488 = *(undefined8 *)(uVar31 + 8);
      uStack_478 = *(undefined4 *)(uVar31 + 0x18);
      uStack_474 = *(undefined4 *)(uVar31 + 0x1c);
      uStack_470 = *(undefined4 *)(uVar31 + 0x20);
      uStack_46c = *(undefined4 *)(uVar31 + 0x24);
      uStack_460 = *(undefined8 *)(uVar31 + 0x28);
      uStack_458 = *(undefined8 *)(uVar31 + 0x30);
      lStack_450 = uVar31 + 0x78;
      lStack_448 = uVar31 + 0x58;
      uStack_440 = *(undefined8 *)(uVar31 + 0x38);
      uStack_438 = *(undefined8 *)(uVar31 + 0x40);
      pbVar32 = *(byte **)(*param_5 + 8);
      pbVar25 = pbVar32 + *(longlong *)(*param_5 + 0x10) * 0x38;
      uStack_200 = *(undefined4 *)(param_2 + 0x1c);
      plVar30 = *(longlong **)param_2;
      puStack_2e0 = *(undefined4 **)(param_2 + 0x10);
      uStack_1d0 = *param_7;
      lStack_228 = *param_8;
      lStack_230 = param_8[1];
      fVar34 = _DAT_142e3c620;
      fVar49 = _DAT_142e36f2c;
      lStack_480 = lVar14;
      pbStack_468 = param_3;
      while (pbVar32 != pbVar25) {
        param_3 = *(byte **)pbVar32;
        uVar13 = *(uint *)(pbVar32 + 0x10);
        uVar31 = (ulonglong)uVar13;
        pbStack_348 = *(byte **)(pbVar32 + 0x24);
        fStack_358 = *(float *)(pbVar32 + 0x14);
        fStack_354 = *(float *)(pbVar32 + 0x18);
        fStack_350 = *(float *)(pbVar32 + 0x1c);
        uStack_34c = *(undefined4 *)(pbVar32 + 0x20);
        uVar2 = *(undefined4 *)(pbVar32 + 0x2c);
        uVar3 = *(undefined4 *)(pbVar32 + 0x30);
        fVar37 = *(float *)(pbVar32 + 0x34);
        pbStack_2e8 = param_3;
        puVar17 = (undefined8 *)pdb_1428fa560(plStack_108,&UNK_1435b3fb8);
        if ((puVar17 == (undefined8 *)0x0) ||
           (lVar14 = (**(code **)(puVar17[1] + 0x18))(*puVar17), lVar14 == 0)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1435b3060);
        }
        *puStack_2e0 = uStack_200;
        if (*plVar30 == 0) {
          pdb_14007ee60();
          pbVar29 = pub_1406abab0(0x20,8);
          if (pbVar29 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x20);
          }
          pbVar29[0] = 0;
          pbVar29[1] = 0;
          pbVar29[2] = 0;
          pbVar29[3] = 0;
          pbVar29[4] = 0;
          pbVar29[5] = 0;
          pbVar29[6] = 0;
          pbVar29[7] = 0;
          pbVar29[8] = 4;
          pbVar29[9] = 0;
          pbVar29[10] = 0;
          pbVar29[0xb] = 0;
          pbVar29[0xc] = 0;
          pbVar29[0xd] = 0;
          pbVar29[0xe] = 0;
          pbVar29[0xf] = 0;
          pbVar29[0x10] = 0;
          pbVar29[0x11] = 0;
          pbVar29[0x12] = 0;
          pbVar29[0x13] = 0;
          pbVar29[0x14] = 0;
          pbVar29[0x15] = 0;
          pbVar29[0x16] = 0;
          pbVar29[0x17] = 0;
          pbVar29[0x18] = 0;
          lVar21 = *(longlong *)(lVar14 + 0x48);
          do {
            lVar19 = *(longlong *)(lVar21 + 8);
            while (lVar19 != -1) {
              if (lVar19 < 0) {
                uStack_1b8._0_4_ = 198.45361;
                uStack_1b8._4_4_ = 1.4013e-45;
                fStack_1b0 = 2.7316895;
                uStack_1ac = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_143467430,&uStack_1b8,&UNK_1434674b8);
              }
              LOCK();
              lVar20 = *(longlong *)(lVar21 + 8);
              bVar33 = lVar19 == lVar20;
              if (bVar33) {
                *(longlong *)(lVar21 + 8) = lVar19 + 1;
                lVar20 = lVar19;
              }
              UNLOCK();
              lVar19 = lVar20;
              if (bVar33) {
                *plVar30 = lVar21;
                plVar30[1] = (longlong)pbVar29;
                goto joined_r0x0001428f06c6;
              }
            }
          } while( true );
        }
        pbVar29 = (byte *)plVar30[1];
joined_r0x0001428f06c6:
        if (pbVar29 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1435b40c8);
        }
        LOCK();
        bVar33 = pbVar29[0x18] == 0;
        if (bVar33) {
          pbVar29[0x18] = 1;
        }
        UNLOCK();
        if (!bVar33) {
          pdb_142dbd1a0(pbVar29 + 0x18,1,1000000000);
        }
        pdb_140e9a150(pbVar29 + 0x18);
        if ((*(longlong *)(pbVar29 + 0x10) == 0) ||
           (piVar18 = (int *)(*(longlong *)(pbVar29 + 8) + *(longlong *)(pbVar29 + 0x10) * 4 + -4),
           piVar18 == (int *)0x0)) {
          lVar21 = *(longlong *)(lVar14 + 0x10);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_1435b40e0);
          }
          iStack_3a0 = (int)lVar21 + -1;
        }
        else {
          iStack_3a0 = *piVar18;
          lVar21 = *(longlong *)(lVar14 + 0x10);
        }
        uStack_3f8 = *(undefined8 *)(lVar14 + 8);
        uStack_3e8 = *(undefined8 *)(lVar14 + 0x18);
        uStack_3e0 = *(undefined8 *)(lVar14 + 0x20);
        uStack_3d0 = *(undefined4 *)(lVar14 + 0x28);
        uStack_3cc = *(undefined4 *)(lVar14 + 0x2c);
        uStack_3c8 = *(undefined4 *)(lVar14 + 0x30);
        uStack_3c4 = *(undefined4 *)(lVar14 + 0x34);
        lStack_3c0 = lVar14 + 0x78;
        lStack_3b8 = lVar14 + 0x58;
        uStack_3b0 = *(undefined8 *)(lVar14 + 0x38);
        uStack_3a8 = *(undefined8 *)(lVar14 + 0x40);
        lStack_3f0 = lVar21;
        pbStack_3d8 = pbVar29;
        if ((uVar13 & 1) == 0) {
          uStack_1b8._0_4_ = fStack_358;
          uStack_1b8._4_4_ = fStack_354;
          fStack_1b0 = fStack_350;
          uStack_1ac = uStack_34c;
          pdb_140defdf0(&lStack_340,&uStack_1b8,_DAT_142e3787c,fVar37);
        }
        else {
          uStack_1a8 = pbStack_348;
          uStack_1b8._0_4_ = fStack_358;
          uStack_1b8._4_4_ = fStack_354;
          fStack_1b0 = fStack_350;
          uStack_1ac = uStack_34c;
          pdb_140df3ac0(&lStack_340,&uStack_1b8,fVar37);
        }
        pdb_142199c80(&uStack_1b8,&lStack_340,uVar2,uVar3);
        unaff_R12 = uStack_1a8;
        pbVar32 = pbVar32 + 0x38;
        if (SBORROW8(0,CONCAT44(uStack_1b8._4_4_,(float)uStack_1b8))) {
LAB_1428f096e:
          unaff_R12 = pbVar29;
          if (lStack_340 != 0) {
            pub_1406abac0(pbStack_338,lStack_340 * 0xc,4);
          }
          if (lStack_328 != 0) {
            pub_1406abac0(pbStack_320,lStack_328 << 2,4);
          }
          param_2 = pbStack_3d8 + 0x18;
          pdb_140e9a350();
          LOCK();
          bVar5 = *param_2;
          if (bVar5 == 1) {
            *param_2 = 0;
          }
          UNLOCK();
          if (bVar5 != 1) {
            pdb_142dbcef0(param_2);
          }
        }
        else {
          uStack_248 = CONCAT44(uStack_184,uStack_188);
          uStack_258 = uStack_198;
          uStack_254 = uStack_194;
          uStack_250 = uStack_190;
          uStack_24c = uStack_18c;
          uStack_268 = (undefined4)uStack_1a8;
          uStack_264 = uStack_1a8._4_4_;
          uStack_260 = uStack_1a0;
          uStack_25c = uStack_19c;
          fStack_278 = (float)uStack_1b8;
          fStack_274 = uStack_1b8._4_4_;
          fStack_270 = fStack_1b0;
          uStack_26c = uStack_1ac;
          uVar15 = (longlong)uStack_1a8 * 0xc;
          if ((byte *)0xaaaaaaaaaaaaaaa < uStack_1a8) {
            uVar31 = 0;
LAB_1428f15bb:
            pdb_142dc7e2a(uVar31,uVar15);
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          pbStack_120 = (byte *)CONCAT44(uStack_1ac,fStack_1b0);
          if (uVar15 == 0) {
            pbStack_118 = (byte *)0x4;
            pbStack_150 = (byte *)0x0;
            pbVar29 = pbStack_150;
          }
          else {
            pdb_14007ee60();
            uVar31 = 4;
            pbStack_118 = pub_1406abab0(uVar15,4);
            pbVar29 = unaff_R12;
            if (pbStack_118 == (byte *)0x0) goto LAB_1428f15bb;
          }
          pbStack_150 = pbVar29;
          if (unaff_R12 != (byte *)0x0) {
            pub_142e32760(pbStack_118,pbStack_120,uVar15);
          }
          lVar14 = pdb_140b54f80(uStack_1d0,param_3,&UNK_1435b3078);
          if (lVar14 == 0) {
            if (pbStack_150 != (byte *)0x0) {
              pub_1406abac0(pbStack_118,(longlong)pbStack_150 * 0xc,4);
            }
            if (CONCAT44(fStack_274,fStack_278) != 0) {
              pub_1406abac0(pbStack_120,CONCAT44(fStack_274,fStack_278) * 0xc,4);
            }
            pbVar29 = unaff_R12;
            if (CONCAT44(uStack_25c,uStack_260) != 0) {
              pub_1406abac0((byte *)CONCAT44(uStack_254,uStack_258),
                            CONCAT44(uStack_25c,uStack_260) << 2,4);
            }
            goto LAB_1428f096e;
          }
          uStack_128 = *(undefined4 *)(lVar14 + 0x274);
          fStack_124 = (float)uStack_248;
          fVar34 = (float)pub_142e329c0((float)uStack_248 / fVar34);
          uVar31 = 0;
          if (0.0 <= fVar34) {
            uVar31 = (longlong)(fVar34 - fVar49) & (longlong)fVar34 >> 0x3f | (longlong)fVar34;
          }
          if (_DAT_142e36f30 < fVar34) {
            uVar31 = 0xffffffffffffffff;
          }
          lVar21 = pdb_140b54f80(uStack_1d0,param_3,&UNK_1435b3090);
          if (lVar21 == 0) {
LAB_1428f0aac:
            uVar15 = pdb_140b54b40(uStack_1d0,param_3);
            bStack_f1 = 1;
            if ((((((uVar15 & 0xffffffff) != 0) &&
                  (uVar22 = uVar15 & 0xffffffff ^ 0xffffffff,
                  uVar22 < *(ulonglong *)(lStack_230 + 0x10))) &&
                 (piVar18 = (int *)(uVar22 * 0x18 + *(longlong *)(lStack_230 + 8)),
                 piVar18[4] == (int)(uVar15 >> 0x20))) &&
                ((*piVar18 != 0 &&
                 (uVar15 = *(ulonglong *)(piVar18 + 2),
                 (uVar15 & 0xffffffff) < *(ulonglong *)(lStack_228 + 0x38))))) &&
               ((*(ulonglong *)(*(longlong *)(lStack_228 + 0x28) + (uVar15 >> 6 & 0x3ffffff) * 8) >>
                 (uVar15 & 0x3f) & 1) != 0)) {
              bStack_f1 = pdb_140b771d0((ulonglong)(uint)~piVar18[1] * 0x58 +
                                        *(longlong *)
                                         (*(longlong *)
                                           (*(longlong *)(lStack_230 + 0x1a0) + 0x18 +
                                           (uVar15 >> 0x20) * 0x48) + 0x10 +
                                         ~*(ulonglong *)
                                           (*(longlong *)
                                             (*(longlong *)(lStack_230 + 0x1a0) + 0x38 +
                                             (uVar15 >> 0x20) * 0x48) +
                                           *(longlong *)(lStack_228 + 0x110) * 8) * 0x30));
            }
          }
          else {
            cVar12 = pdb_1408ff990(lVar21 + 0x2a3);
            bStack_f1 = 1;
            if (cVar12 == '\0') goto LAB_1428f0aac;
          }
          fVar34 = fStack_124 * _DAT_142e4bfe4;
          uStack_1d8 = 0;
          if (0.0 <= fVar34) {
            uStack_1d8 = (longlong)(fVar34 - fVar49) & (longlong)fVar34 >> 0x3f | (longlong)fVar34;
          }
          if (_DAT_142e36f30 < fVar34) {
            uStack_1d8 = 0xffffffffffffffff;
          }
          lStack_218 = 0;
          pfStack_210 = (float *)0x4;
          pbStack_208 = (byte *)0x0;
          uVar31 = uVar31 + 1;
          lStack_220 = lVar14;
          pdb_140de8bb0(uVar31,_DAT_142e3c630 / fStack_124,&uStack_1d8,&lStack_218,&UNK_1435b30a8);
          pfStack_148 = pfStack_210 + (longlong)pbStack_208;
          fStack_1e8 = fVar37 + _DAT_14330a370;
          fStack_1e4 = fVar37 + _DAT_143016280;
          lStack_220 = lStack_220 + 0x29f;
          pfStack_140 = (float *)0x0;
          pfStack_138 = (float *)0x0;
          pfStack_110 = pfStack_210;
          pbStack_158 = (byte *)0x0;
          pfVar26 = pfStack_210;
          fVar49 = _DAT_142e36f28;
          pbVar29 = pbStack_158;
LAB_1428f0cb0:
          pbStack_158 = pbVar29;
          pbVar1 = pbStack_100;
          pbVar9 = pbStack_208;
          pbStack_100 = pbStack_158;
          if ((pfVar26 != (float *)0x0) && (pfVar26 != pfStack_148)) {
            pfVar11 = pfVar26 + 1;
            pfVar23 = pfStack_110;
            pfVar24 = pfStack_1c8;
            if (pfStack_140 == (float *)0x0) {
              if (pfVar11 == pfStack_148) {
                pfStack_140 = (float *)0x0;
                goto LAB_1428f0d40;
              }
              pfStack_2f0 = pfVar11;
              pfStack_1e0 = pfVar26;
              pfStack_1c0 = pfVar11;
              pfVar11 = pfVar26 + 2;
              pfStack_140 = pfVar26;
            }
            else {
              pfStack_140 = pfStack_1c0;
              pfStack_2f0 = pfVar26;
              pfStack_1e0 = pfStack_1c0;
              pfStack_1c0 = pfVar26;
            }
LAB_1428f0db0:
            pfVar26 = pfVar11;
            pbVar29 = pbStack_158 + 1;
            pfStack_1c8 = pfVar24;
            pfStack_110 = pfVar23;
            pbVar1 = pbStack_100;
            if (pfStack_1e0 == (float *)0x0) goto LAB_1428f1484;
            pbStack_100 = pbStack_158;
            param_3 = pbVar9;
            if (((bStack_f1 & pbStack_208 <= pbStack_158) == 0) &&
               (pbStack_158 < pbStack_208 || ((ulonglong)pbStack_158 & 1) != 0)) {
              fVar34 = *pfStack_1e0;
              fVar37 = *pfStack_2f0;
              uStack_2c8 = CONCAT44(uStack_2c8._4_4_,fVar34);
              pbStack_158 = pbVar29;
              if ((fVar34 < 0.0) || (fVar49 < fVar34)) {
                uStack_1b8 = &uStack_2c8;
                fStack_1b0 = 7.7206726;
                uStack_1ac = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_1435b38c0,&uStack_1b8,&UNK_1435b30c0);
              }
              fStack_1ec = fVar34;
              uVar13 = pdb_14219a120(&fStack_278,fVar34);
              pbVar29 = (byte *)(ulonglong)uVar13;
              fVar49 = extraout_XMM0_Da;
              if (unaff_R12 <= pbVar29) goto LAB_1428f194c;
              pbVar1 = pbVar29 + 1;
              if (unaff_R12 <= pbVar1) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(pbVar1,unaff_R12,&UNK_14346bb98);
              }
              fVar50 = _DAT_142e36f28 - extraout_XMM0_Da;
              fVar49 = *(float *)(pbStack_120 + (longlong)pbVar29 * 0xc + 4);
              fStack_1f8 = *(float *)(pbStack_120 + (longlong)pbVar1 * 0xc + 4) * extraout_XMM0_Da;
              uVar4 = *(undefined8 *)(pbStack_120 + (longlong)pbVar29 * 0xc + 8);
              auStack_428 = ZEXT416(*(uint *)(pbStack_120 + (longlong)pbVar1 * 0xc + 8));
              fVar34 = *(float *)(pbStack_120 + (longlong)pbVar29 * 0xc);
              uStack_2c8 = CONCAT44(uStack_2c8._4_4_,fVar37);
              if ((fVar37 < 0.0) || (_DAT_142e36f28 < fVar37)) {
                uStack_1b8 = &uStack_2c8;
                fStack_1b0 = 7.7206726;
                uStack_1ac = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_1435b38c0,&uStack_1b8,&UNK_1435b30d8);
              }
              uVar13 = pdb_14219a120(&fStack_278,fVar37);
              pbVar29 = (byte *)(ulonglong)uVar13;
              if (unaff_R12 <= pbVar29) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(pbVar29,unaff_R12,&UNK_14346bb80);
              }
              pbVar1 = pbVar29 + 1;
              if (unaff_R12 <= pbVar1) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(pbVar1,unaff_R12,&UNK_14346bb98);
              }
              fVar38 = _DAT_142e36f28 - extraout_XMM0_Da_00;
              fStack_1f4 = *(float *)(pbStack_120 + (longlong)pbVar29 * 0xc + 4) * fVar38;
              fStack_1f0 = *(float *)(pbStack_120 + (longlong)pbVar1 * 0xc + 4) *
                           extraout_XMM0_Da_00;
              uStack_418 = *(undefined8 *)(pbStack_120 + (longlong)pbVar29 * 0xc + 8);
              uStack_410 = 0;
              auStack_408 = ZEXT416(*(uint *)(pbStack_120 + (longlong)pbVar1 * 0xc + 8));
              fVar37 = *(float *)(pbStack_120 + (longlong)pbVar29 * 0xc);
              fStack_12c = fStack_1e8;
              fVar35 = _DAT_143016280;
              if (pbVar9 <= pbStack_100) {
                fVar35 = (float)pdb_140e02880(&uStack_1d8);
                fVar35 = (fVar35 * _DAT_142e36f50 - (_DAT_142e36f28 - fVar35) * _DAT_142e36f50) *
                         _DAT_14300b5d0 * _DAT_142e3c670 + _DAT_14300a330;
                fStack_12c = fVar35 * _DAT_142e36f50 + fStack_1e4;
              }
              fVar36 = (float)pdb_140e02880(&uStack_1d8);
              fVar51 = extraout_XMM0_Da * (float)auStack_428._0_4_ + (float)uVar4 * fVar50;
              fVar52 = fVar50 * fVar34 + (float)((ulonglong)uVar4 >> 0x20) * extraout_XMM0_Da;
              fVar39 = extraout_XMM0_Da_00 * (float)auStack_408._0_4_ + (float)uStack_418 * fVar38;
              fVar40 = fVar38 * fVar37 + uStack_418._4_4_ * extraout_XMM0_Da_00;
              fVar44 = (fVar36 * _DAT_142e36f50 - (_DAT_142e36f28 - fVar36) * _DAT_142e36f50) *
                       _DAT_142e3c650 + _DAT_14300b140;
              fVar47 = (fVar51 + fVar39) * _DAT_142e36f60;
              fVar48 = (fVar52 + fVar40) * _UNK_142e36f64;
              fVar37 = fVar39 - fVar51;
              fVar34 = fVar40 - fVar52;
              fVar38 = _DAT_142e36f28 / SQRT(fVar34 * fVar34 + fVar37 * fVar37);
              fVar37 = fVar38 * fVar37;
              fVar38 = fVar38 * fVar34;
              uStack_2f8 = CONCAT44(fVar37,fVar38);
              pdb_140df4520(&uStack_1b8,&uStack_2f8);
              fVar45 = fStack_1b0;
              fVar36 = uStack_1b8._4_4_;
              fVar34 = (float)uStack_1b8;
              uStack_2c8 = CONCAT44(fVar38,(uint)fVar37 ^ _DAT_142e37820);
              pdb_140df4520(&uStack_1b8,&uStack_2c8);
              fVar46 = fStack_1b0;
              fVar10 = uStack_1b8._4_4_;
              fVar37 = (float)uStack_1b8;
              fVar41 = fVar35 * _DAT_142e378e0;
              fVar42 = fVar35 * _UNK_142e378e4;
              fVar43 = fVar35 * _UNK_142e378e8;
              fVar35 = fVar35 * _UNK_142e378ec;
              uStack_2c8 = CONCAT44(fVar47,fVar48);
              pdb_140df4540(&uStack_1b8,&uStack_2c8,fStack_12c);
              fVar48 = fStack_1b0;
              fVar47 = uStack_1b8._4_4_;
              fVar38 = (float)uStack_1b8;
              fVar49 = (fVar49 * fVar50 + fStack_1f8) - (fStack_1f4 + fStack_1f0);
              fVar49 = SQRT((fVar52 - fVar40) * (fVar52 - fVar40) + fVar49 * fVar49 +
                            (fVar51 - fVar39) * (fVar51 - fVar39));
              fVar34 = fVar49 * fVar34;
              fVar36 = fVar49 * fVar36;
              fVar50 = fVar49 * fVar45;
              fVar49 = fVar49 * fVar45;
              fVar45 = fVar44 * fVar46;
              fVar46 = fVar44 * fVar46;
              fStack_498 = (float)uStack_1b8;
              fStack_494 = uStack_1b8._4_4_;
              fStack_490 = fStack_1b0;
              fStack_48c = fStack_1b0;
              *puStack_2d8 = uStack_1fc;
              *plStack_2d0 = *plStack_2d0 + 1;
              fStack_4c8 = fVar34;
              fStack_4c4 = fVar36;
              fStack_4c0 = fVar50;
              fStack_4bc = fVar49;
              fStack_4b8 = fVar41;
              fStack_4b4 = fVar42;
              fStack_4b0 = fVar43;
              fStack_4ac = fVar35;
              fStack_4a8 = fVar44 * fVar37;
              fStack_4a4 = fVar44 * fVar10;
              fStack_4a0 = fVar45;
              fStack_49c = fVar46;
              cVar12 = pdb_1408ff980(lStack_220);
              if (cVar12 == '\0') {
                pdb_140e07fe0(&uStack_1b8,&fStack_4c8);
                uStack_168 = pdb_1409012c0(uStack_128);
                fStack_164 = fStack_1ec * fStack_124;
                uStack_398 = CONCAT44(uStack_1b8._4_4_,(float)uStack_1b8);
                uStack_390 = CONCAT44(uStack_1ac,fStack_1b0);
                uStack_380 = CONCAT44(uStack_19c,uStack_1a0);
                uStack_378 = CONCAT44(uStack_194,uStack_198);
                uStack_370 = CONCAT44(uStack_18c,uStack_190);
                uStack_388 = uStack_1a8;
                uStack_368 = 0;
                uStack_360 = 0;
                uStack_188 = 0;
                uStack_184 = 0;
                uStack_180 = 0;
                uStack_17c = 0;
                uStack_178 = _DAT_1430155a0;
                uStack_170 = 0xc2c80000;
                uStack_15c = 4;
                fStack_160 = fStack_164;
                pdb_14094c790(&uStack_2c8,&uStack_1b8);
                pdb_1428fa830(&uStack_3f8,&uStack_2c8);
                fVar49 = _DAT_142e36f28;
                pbVar29 = pbStack_158;
              }
              else {
                fStack_4d8 = fVar38 + fVar34 * _DAT_1431ff8c0 + _DAT_1435b2f10;
                fStack_4d4 = fVar47 + fVar36 * _UNK_1431ff8c4 + _UNK_1435b2f14;
                fStack_4d0 = fVar48 + fVar50 * _UNK_1431ff8c8 + _UNK_1435b2f18;
                fStack_4cc = fVar48 + fVar49 * _UNK_1431ff8cc + _UNK_1435b2f1c;
                fStack_508 = fVar44 * fVar37;
                fStack_504 = fVar44 * fVar10;
                fStack_500 = fVar45;
                fStack_4fc = fVar46;
                fStack_4f8 = fVar34;
                fStack_4f4 = fVar36;
                fStack_4f0 = fVar50;
                fStack_4ec = fVar49;
                fStack_4e8 = fVar41;
                fStack_4e4 = fVar42;
                fStack_4e0 = fVar43;
                fStack_4dc = fVar35;
                pdb_140e07fe0(&uStack_398,&fStack_508);
                param_3 = (byte *)pdb_140315970(&pbStack_2e8);
                uVar13 = pdb_1409012c0(uStack_128);
                uVar31 = (ulonglong)uVar13;
                pdb_140a77410(&uStack_1b8);
                uStack_2a8 = (undefined4)uStack_378;
                uStack_2a4 = uStack_378._4_4_;
                uStack_2a0 = (undefined4)uStack_370;
                uStack_29c = uStack_370._4_4_;
                uStack_2b8 = (undefined4)uStack_388;
                uStack_2b4 = uStack_388._4_4_;
                uStack_2b0 = (undefined4)uStack_380;
                uStack_2ac = uStack_380._4_4_;
                uStack_2c8 = uStack_398;
                uStack_2c0 = uStack_390;
                uStack_298 = SUB84(param_3,0);
                uStack_294 = SUB84(pbStack_100,0);
                uStack_28c = 0xe1;
                uStack_288 = (undefined4)uStack_178;
                uStack_284 = uStack_178._4_4_;
                uStack_280 = (undefined4)uStack_170;
                uStack_27c = uStack_170._4_4_;
                uStack_290 = uVar13;
                pdb_1428faf20(&uStack_488,&uStack_2c8);
                fVar49 = _DAT_142e36f28;
                pbVar29 = pbStack_158;
              }
            }
            goto LAB_1428f0cb0;
          }
LAB_1428f0d40:
          pbVar29 = pbStack_158;
          if (pfStack_110 == pfStack_148) goto LAB_1428f1484;
          pfVar24 = pfStack_110 + 1;
          if (pfStack_138 != (float *)0x0) {
            pfStack_138 = pfStack_1c8;
            pfStack_2f0 = pfStack_110;
            pfVar23 = pfVar24;
            pfVar24 = pfStack_110;
            pfStack_1e0 = pfStack_1c8;
            pfVar11 = (float *)0x0;
            goto LAB_1428f0db0;
          }
          if (pfVar24 != pfStack_148) {
            pfVar23 = pfStack_110 + 2;
            pfStack_138 = pfStack_110;
            pfStack_2f0 = pfVar24;
            pfStack_1e0 = pfStack_110;
            pfVar11 = (float *)0x0;
            goto LAB_1428f0db0;
          }
          pfStack_138 = (float *)0x0;
          pfStack_110 = pfVar24;
LAB_1428f1484:
          pbStack_100 = pbVar1;
          pbStack_158 = pbVar29;
          pfStack_1e0 = (float *)0x0;
          if (lStack_218 != 0) {
            pub_1406abac0((byte *)pfStack_210,lStack_218 << 2,4);
          }
          fVar34 = _DAT_142e3c620;
          fVar49 = _DAT_142e36f2c;
          if (pbStack_150 != (byte *)0x0) {
            pub_1406abac0(pbStack_118,(longlong)pbStack_150 * 0xc,4);
          }
          if (CONCAT44(fStack_274,fStack_278) != 0) {
            pub_1406abac0(pbStack_120,CONCAT44(fStack_274,fStack_278) * 0xc,4);
          }
          if (CONCAT44(uStack_25c,uStack_260) != 0) {
            pub_1406abac0((byte *)CONCAT44(uStack_254,uStack_258),
                          CONCAT44(uStack_25c,uStack_260) << 2,4);
          }
          if (lStack_340 != 0) {
            pub_1406abac0(pbStack_338,lStack_340 * 0xc,4);
          }
          if (lStack_328 != 0) {
            pub_1406abac0(pbStack_320,lStack_328 << 2,4);
          }
          param_2 = pbStack_3d8 + 0x18;
          pdb_140e9a350();
          LOCK();
          bVar5 = *param_2;
          if (bVar5 == 1) {
            *param_2 = 0;
          }
          UNLOCK();
          if (bVar5 != 1) {
            pdb_142dbcef0(param_2);
          }
        }
      }
      param_4 = pbStack_468 + 0x18;
      pdb_140e9a350();
      plVar16 = (longlong *)0x1;
      LOCK();
      bVar5 = *param_4;
      if (bVar5 == 1) {
        *param_4 = 0;
      }
      else {
        plVar16 = (longlong *)(ulonglong)bVar5;
      }
      UNLOCK();
      if (bVar5 != 1) {
        plVar16 = (longlong *)pdb_142dbcef0(param_4,0);
      }
      if (lStack_240 == 0) {
        return plVar16;
      }
      plVar16 = (longlong *)pdb_140e97000();
      if (((char)plVar16[0xd] != '\x01') &&
         (plVar16 = (longlong *)pdb_142e16b00(plVar16,0), plVar16 == (longlong *)0x0)) break;
      if (*plVar16 == 0) {
        *plVar16 = -1;
        plStack_108 = plVar16;
        pdb_140e95370(plVar16 + 1,uStack_238);
        *plStack_108 = *plStack_108 + 1;
        return plStack_108;
      }
    }
    plVar16 = (longlong *)pdb_142dc8090(&UNK_14328b468);
LAB_1428f17fd:
    plVar16 = (longlong *)pdb_142e16b00(plVar16,0);
  } while (plVar16 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14328b3f8);
LAB_1428f181d:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1435b40e0);
}

