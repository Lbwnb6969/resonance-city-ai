// VA 0x142964840, PDB extent 18580 bytes
// system_critters::wren_boids::sim_wren_boids
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/wren_boids.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::wren_boids::sim_wren_boids
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/wren_boids.rs
   Extent: 18580 */

void pdb_142964840(float *param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5,
                  undefined8 *param_6,undefined8 *param_7,ulonglong *param_8,longlong *param_9,
                  longlong *param_10,longlong *param_11,undefined8 *param_12)

{
  undefined4 *puVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  char cVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong *plVar29;
  byte *pbVar30;
  undefined4 *puVar31;
  undefined8 uVar32;
  uint uVar33;
  ulonglong uVar34;
  longlong lVar35;
  int *piVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined8 *puVar39;
  ulonglong uVar40;
  longlong lVar41;
  undefined1 uVar42;
  float *pfVar43;
  float *pfVar44;
  undefined *puVar45;
  undefined *puVar46;
  ulonglong uVar47;
  longlong lVar48;
  int iVar49;
  undefined4 *puVar50;
  longlong lVar51;
  uint *puVar52;
  uint *puVar53;
  ulonglong unaff_R12;
  float *pfVar54;
  float *pfVar55;
  undefined *unaff_R15;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined4 uVar61;
  float fVar62;
  undefined4 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar70;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar71;
  undefined1 auVar69 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  undefined8 uStack_488;
  undefined8 uStack_480;
  longlong lStack_478;
  longlong lStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  longlong lStack_458;
  undefined8 *puStack_450;
  ulonglong uStack_440;
  float *pfStack_438;
  float *pfStack_430;
  float *pfStack_428;
  longlong lStack_420;
  byte *pbStack_418;
  ulonglong uStack_410;
  undefined8 uStack_408;
  float fStack_400;
  undefined4 uStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  ulonglong uStack_3e0;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  longlong lStack_3c0;
  float *pfStack_3b8;
  ulonglong uStack_3b0;
  longlong lStack_3a8;
  uint *puStack_3a0;
  float *pfStack_398;
  longlong lStack_390;
  undefined8 uStack_388;
  float fStack_380;
  float *pfStack_378;
  byte *pbStack_370;
  float *pfStack_368;
  longlong lStack_360;
  byte *pbStack_358;
  longlong lStack_350;
  float *pfStack_348;
  float *pfStack_340;
  float *pfStack_338;
  longlong lStack_330;
  byte *pbStack_328;
  ulonglong uStack_320;
  float *pfStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  longlong lStack_2f0;
  undefined1 auStack_2e8 [16];
  longlong lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined *puStack_268;
  undefined8 uStack_260;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  undefined8 uStack_24c;
  undefined4 uStack_244;
  uint uStack_238;
  int iStack_234;
  ulonglong uStack_230;
  ulonglong uStack_228;
  longlong lStack_220;
  float *pfStack_218;
  ulonglong uStack_210;
  float *pfStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  longlong lStack_1f0;
  float *pfStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  byte *pbStack_1c8;
  ulonglong uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined8 uStack_1a4;
  int iStack_19c;
  undefined1 uStack_189;
  uint *puStack_188;
  ulonglong uStack_180;
  float *pfStack_178;
  byte *pbStack_170;
  longlong lStack_168;
  ulonglong uStack_160;
  float *pfStack_158;
  longlong lStack_150;
  undefined1 uStack_141;
  float *pfStack_140;
  float *pfStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  longlong lStack_120;
  longlong lStack_118;
  undefined4 *puStack_110;
  uint *puStack_108;
  undefined1 uStack_f9;
  uint uStack_f8;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pfVar55 = param_2;
  pfStack_218 = param_1;
  uVar26 = pdb_140e94b40();
  uVar37 = (ulonglong)uVar26;
  if ((char)uVar26 == '\0') {
    lStack_3a8 = 0;
    pfVar55 = param_3;
    goto LAB_142964a75;
  }
  unaff_R12 = 0x2b;
  lVar27 = pdb_1429690e0(0x2b);
  unaff_R15 = &UNK_1436057b0;
  if (lVar27 == 1) {
    if ((float *)0x2b < pfVar55) {
LAB_142967b05:
      puVar45 = &UNK_1436057b0;
      uVar37 = pdb_142dc8070(&UNK_1436057b0,0x2b,0);
LAB_142967b25:
      lVar27 = uVar37 << 0x20;
LAB_142967bce:
      uStack_300._4_4_ = (float)((uint)param_4 | (uint)((ulonglong)puVar45 >> 0x20));
      uStack_308._0_4_ = (float)lVar27;
      uStack_308._4_4_ = (float)((ulonglong)lVar27 >> 0x20);
      uStack_300._0_4_ = SUB84(puVar45,0);
      uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143605760,0x2b,&uStack_308,&UNK_143605790,&UNK_143605568);
    }
    uVar28 = pdb_1429690e0(pfVar55);
    if ((uVar28 & 1) != 0) {
      if (0x2b < (longlong)pfVar55 + 2U) {
        lVar27 = 0x2b;
        pdb_142dc8070(&UNK_1436057b0,0x2b,(longlong)pfVar55 + 2U,0x2b,&UNK_143605878);
LAB_142967b63:
        uVar37 = (longlong)param_2 << 0x20;
LAB_142967b6a:
        uStack_308._0_4_ = (float)uVar37;
        uStack_308._4_4_ = (float)(uVar37 >> 0x20);
        uStack_300._0_4_ = (float)lVar27;
        uStack_300._4_4_ = (float)((ulonglong)lVar27 >> 0x20);
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143605760,0x2b,&uStack_308,&UNK_143605790,&UNK_143605630);
      }
      unaff_R12 = 0x29 - (longlong)pfVar55;
      unaff_R15 = &UNK_1436057b2 + (longlong)pfVar55;
    }
  }
  puVar45 = &UNK_14360554b;
  pfVar55 = (float *)&UNK_143605522;
  do {
    bVar3 = puVar45[-1];
    uVar26 = (uint)(char)bVar3;
    pfStack_140 = param_3;
    if ((char)bVar3 < '\0') {
      bVar4 = puVar45[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar45[-3];
        if ((char)bVar5 < -0x40) {
          pbVar30 = puVar45 + -4;
          puVar45 = puVar45 + -4;
          uVar26 = bVar5 & 0x3f | (*pbVar30 & 7) << 6;
        }
        else {
          puVar45 = puVar45 + -3;
          uVar26 = bVar5 & 0xf;
        }
        uVar26 = bVar4 & 0x3f | uVar26 << 6;
      }
      else {
        puVar45 = puVar45 + -2;
        uVar26 = bVar4 & 0x1f;
      }
      uVar26 = (uint)(bVar3 & 0x3f) | uVar26 << 6;
      if (uVar26 != 0x5c) goto LAB_1429649b4;
LAB_1429649d2:
      puVar46 = puVar45 + -0x143605521;
      if ((undefined *)0x29 < puVar46) {
        pdb_142dc8070(&UNK_143605522,0x29,puVar46,0x29,&UNK_143605840);
        goto LAB_142967b05;
      }
      pfVar43 = (float *)(0x29 - (longlong)puVar46);
      pfVar55 = (float *)(puVar45 + 1);
      goto LAB_1429649fa;
    }
    puVar45 = puVar45 + -1;
    if (uVar26 == 0x5c) goto LAB_1429649d2;
LAB_1429649b4:
    if (uVar26 == 0x2f) goto LAB_1429649d2;
  } while (puVar45 != &UNK_143605522);
  pfVar43 = (float *)0x29;
LAB_1429649fa:
  plVar29 = (longlong *)pdb_140e97000();
  if ((char)plVar29[0xd] != '\x01') goto LAB_142967a71;
  do {
    if (*plVar29 == 0) {
      *plVar29 = -1;
      puStack_108 = (uint *)plVar29;
      puStack_3a0 = (uint *)pdb_140e94f10(plVar29 + 1,unaff_R15,unaff_R12,pfVar55,pfVar43,1,0);
      *(longlong *)puStack_108 = *(longlong *)puStack_108 + 1;
      puStack_108 = puStack_3a0;
      lStack_3a8 = 1;
      pfVar55 = pfStack_140;
LAB_142964a75:
      *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
      fVar2 = _DAT_143057f10;
      fVar74 = _DAT_143006a28;
      fVar72 = _UNK_142e61234;
      fVar62 = _DAT_142e61230;
      fVar78 = _DAT_142e36f38;
      pfVar44 = (float *)*param_6;
      if (*(char *)(*(longlong *)pfVar55 + 5) != '\0') {
        fVar77 = *(float *)(*(longlong *)param_2 + 0x28);
        if ((fVar77 != 0.0) || (NAN(fVar77))) {
          lStack_220 = *(longlong *)param_2;
          lStack_360 = 0;
          pbStack_358 = (byte *)0x8;
          lStack_350 = 0;
          pfStack_140 = *(float **)param_4;
          uVar37 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
          if (SBORROW8(0,*(longlong *)(pfVar44 + 0xc))) {
            fVar77 = (float)_DAT_143605450;
            uVar37 = (ulonglong)_DAT_143605450 >> 0x20;
            fVar79 = (float)_DAT_143605460;
            uVar28 = (ulonglong)_DAT_143605460 >> 0x20;
            for (uVar40 = 0; uVar40 < 0x50; uVar40 = uVar40 + 1) {
              uStack_f1 = 1;
              fVar56 = (float)pdb_140e02880(param_8);
              fVar76 = fVar56 * fVar74 + fVar2;
              uStack_f1 = 1;
              fVar56 = (float)pdb_140e02880(param_8);
              uStack_f1 = 1;
              fVar57 = (float)pdb_140e02880(param_8);
              fVar56 = fVar56 * fVar77 + fVar79;
              fVar57 = fVar57 * (float)uVar37 + (float)uVar28;
              uStack_f1 = 1;
              pdb_140df4940(&uStack_308);
              puVar45 = (undefined *)CONCAT44(uStack_308._4_4_,(float)uStack_308);
              uVar32 = CONCAT44(uStack_300._4_4_,(float)uStack_300);
              uStack_f1 = 1;
              pdb_140a8ccc0(&pfStack_1e8,pfStack_140,&UNK_1436055cc,0x18);
              if ((int)pfStack_1e8 == 2) {
                uStack_408 = uStack_1e0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc8170(&UNK_143605760,0x2b,&uStack_408,&UNK_143605740,&UNK_143605690);
              }
              uStack_3e8 = pbStack_1c8;
              uStack_3e0 = uStack_1c0;
              fStack_3f8 = (float)uStack_1d8;
              fStack_3f4 = uStack_1d8._4_4_;
              fStack_3f0 = (float)uStack_1d0;
              uStack_3ec = uStack_1d0._4_4_;
              uStack_408 = pfStack_1e8;
              fStack_400 = (float)uStack_1e0;
              uStack_3fc = uStack_1e0._4_4_;
              pdb_140a8a6e0(&uStack_408);
              pfStack_340 = (float *)CONCAT44(uStack_3fc,fStack_400);
              pfStack_338 = (float *)CONCAT44(fStack_3f4,fStack_3f8);
              lStack_330 = CONCAT44(uStack_3ec,fStack_3f0);
              pbStack_328 = uStack_3e8;
              uStack_320 = uStack_3e0;
              pfStack_348 = uStack_408;
              uVar47 = *param_8;
              uVar34 = uVar47 + 0xa0761d6478bd642f;
              *param_8 = uVar34;
              auVar68._8_8_ = 0;
              auVar68._0_8_ = uVar34 ^ 0xe7037ed1a0b428db;
              auVar82._8_8_ = 0;
              auVar82._0_8_ = uVar34;
              uVar38 = SUB168(auVar68 * auVar82,8) ^ SUB168(auVar68 * auVar82,0);
              if ((uint)((int)uVar38 * 100) < 0x60) {
                uVar47 = uVar47 + 0x40ec3ac8f17ac85e;
                do {
                  uVar34 = uVar34 + 0xa0761d6478bd642f;
                  auVar84._8_8_ = 0;
                  auVar84._0_8_ = uVar47 ^ 0xe7037ed1a0b428db;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = uVar47;
                  uVar38 = SUB168(auVar84 * auVar12,8) ^ SUB168(auVar84 * auVar12,0);
                  uVar47 = uVar47 + 0xa0761d6478bd642f;
                } while ((uint)((int)uVar38 * 100) < 0x60);
                *param_8 = uVar34;
              }
              iStack_19c = (int)((uVar38 & 0xffffffff) * 100 >> 0x20) + (int)uVar40;
              uStack_1a4 = 0;
              uStack_1b8 = 2;
              pfStack_1e8 = uStack_408;
              uStack_1e0 = (float *)CONCAT44(uStack_3fc,fStack_400);
              uStack_1d8 = (float *)CONCAT44(fStack_3f4,fStack_3f8);
              uStack_1d0 = CONCAT44(uStack_3ec,fStack_3f0);
              pbStack_1c8 = uStack_3e8;
              uStack_1c0 = uStack_3e0;
              pdb_14007ee60();
              uStack_288 = 0;
              uStack_280 = 0x6df6147cdf0aeade;
              auStack_2e8._8_8_ = uStack_1c0;
              auStack_2e8._0_8_ = pbStack_1c8;
              uStack_308._0_4_ = SUB84(pfStack_1e8,0);
              uStack_308._4_4_ = (float)((ulonglong)pfStack_1e8 >> 0x20);
              uStack_300._0_4_ = SUB84(uStack_1e0,0);
              uStack_300._4_4_ = (float)((ulonglong)uStack_1e0 >> 0x20);
              uStack_2f8._0_4_ = (float)uStack_1d8;
              uStack_2f8._4_4_ = uStack_1d8._4_4_;
              lStack_2f0 = uStack_1d0;
              lStack_2d8 = uStack_1b8;
              uStack_2d0 = (undefined *)CONCAT44(uStack_1ac,uStack_1b0);
              uStack_2c8 = CONCAT44((undefined4)uStack_1a4,uStack_1a8);
              uStack_2c0 = CONCAT44(iStack_19c,uStack_1a4._4_4_);
              uStack_29c = 0x3f800000;
              uStack_298 = 0x3f800000;
              uStack_294 = 0x3f800000;
              uStack_278 = 0xe;
              uStack_24c = 0x3f8000003f800000;
              uStack_244 = 0x3f800000;
              uStack_f1 = 1;
              puStack_2b8 = puVar45;
              uStack_2b0 = uVar32;
              fStack_2a8 = fVar76;
              fStack_2a4 = fVar56;
              fStack_2a0 = fVar57;
              puStack_268 = puVar45;
              uStack_260 = uVar32;
              fStack_258 = fVar76;
              fStack_254 = fVar56;
              fStack_250 = fVar57;
              pdb_14296bff0(&pfStack_1e8,param_12,&uStack_308,&UNK_143605678);
              pfVar55 = pfStack_1e8;
              uStack_f1 = 1;
              fVar58 = (float)pdb_140e02880(param_8);
              uStack_f1 = 1;
              fVar59 = (float)pdb_140e02880(param_8);
              uStack_f1 = 1;
              fVar60 = (float)pdb_140e02880(param_8);
              lVar27 = *(longlong *)(pfVar44 + 4);
              if (lVar27 == *(longlong *)pfVar44) {
                uStack_f1 = 1;
                pdb_142d89250(pfVar44);
              }
              lVar41 = *(longlong *)(pfVar44 + 2);
              *(float *)(lVar41 + lVar27 * 0x18) = fVar76;
              *(ulonglong *)(lVar41 + 4 + lVar27 * 0x18) = CONCAT44(fVar57,fVar56);
              *(float *)(lVar41 + 0xc + lVar27 * 0x18) = fVar58 + fVar78;
              *(ulonglong *)(lVar41 + 0x10 + lVar27 * 0x18) =
                   CONCAT44(fVar60 + fVar72,fVar59 + fVar62);
              *(longlong *)(pfVar44 + 4) = lVar27 + 1;
              lVar27 = *(longlong *)(pfVar44 + 10);
              if (lVar27 == *(longlong *)(pfVar44 + 6)) {
                uStack_f1 = 1;
                pdb_142d7f080(pfVar44 + 6);
              }
              lVar48 = lStack_350;
              lVar41 = *(longlong *)(pfVar44 + 8);
              lVar35 = lVar27 * 0x38;
              *(undefined4 *)(lVar41 + lVar35) = 0;
              *(float **)(lVar41 + 0x10 + lVar35) = pfVar55;
              uVar32 = _DAT_14367da50;
              *(undefined8 *)(lVar41 + 0x18 + lVar35) = _DAT_14367da50;
              uVar63 = _DAT_14367da58;
              *(undefined4 *)(lVar41 + 0x20 + lVar35) = _DAT_14367da58;
              *(undefined8 *)(lVar41 + 0x24 + lVar35) = uVar32;
              *(undefined4 *)(lVar41 + 0x2c + lVar35) = uVar63;
              *(undefined4 *)(lVar41 + 0x30 + lVar35) = 0;
              *(longlong *)(pfVar44 + 10) = lVar27 + 1;
              if (lStack_350 == lStack_360) {
                uStack_f1 = 1;
                pdb_142db0920(&lStack_360);
              }
              *(float **)(pbStack_358 + lVar48 * 8) = pfVar55;
              lStack_350 = lVar48 + 1;
            }
            uStack_2f8._0_4_ = (undefined4)lStack_350;
            uStack_2f8._4_4_ = (undefined4)((ulonglong)lStack_350 >> 0x20);
            uStack_308._0_4_ = (float)lStack_360;
            uStack_308._4_4_ = (float)((ulonglong)lStack_360 >> 0x20);
            uStack_300._0_4_ = SUB84(pbStack_358,0);
            uStack_300._4_4_ = (float)((ulonglong)pbStack_358 >> 0x20);
            lVar27 = *(longlong *)(pfVar44 + 0xc);
            if ((!SBORROW8(0,lVar27)) && (lVar27 != 0)) {
              pub_1406abac0(*(byte **)(pfVar44 + 0xe),lVar27 << 3,8);
            }
            *(ulonglong *)(pfVar44 + 0x10) = CONCAT44(uStack_2f8._4_4_,(undefined4)uStack_2f8);
            pfVar44[0xc] = (float)uStack_308;
            pfVar44[0xd] = uStack_308._4_4_;
            pfVar44[0xe] = (float)uStack_300;
            pfVar44[0xf] = uStack_300._4_4_;
            uVar37 = 0;
          }
          lStack_168 = *param_11;
          pfStack_158 = (float *)param_11[1];
          iVar49 = *(int *)((longlong)param_11 + 0x14);
          puVar53 = *(uint **)(lStack_168 + 0xf8);
          puStack_188 = puVar53 + *(longlong *)(lStack_168 + 0x100);
          uVar33 = iVar49 - (int)param_11[2];
          uVar26 = 0xc233b000;
          if (uVar33 < 0xc233b000) {
            uVar26 = uVar33;
          }
          pfStack_178 = (float *)0x8;
          fVar78 = (float)_DAT_143605420;
          uVar40 = (ulonglong)_DAT_143605420 >> 0x20;
          lStack_120 = 0;
          lStack_118 = 0;
          puStack_110 = (undefined4 *)0x0;
          uStack_130 = 0;
          uStack_f8 = (uint)uVar37;
          pfStack_138 = (float *)CONCAT44(pfStack_138._4_4_,iVar49);
          pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,*(char *)(lStack_168 + 0x108));
          lStack_150 = CONCAT44(lStack_150._4_4_,uVar26);
          uVar28 = 0;
          if (*(char *)(lStack_168 + 0x108) != '\0') goto LAB_142965312;
LAB_14296517a:
          uVar42 = (undefined1)uVar37;
          uVar34 = uStack_130;
          pfVar55 = pfStack_178;
          pfVar43 = pfStack_158;
          puVar52 = puStack_188;
          if ((int)uStack_130 == (int)uVar28) goto LAB_1429651a0;
          do {
            uVar47 = uVar34 & 0xffffffff;
            uStack_130 = uVar34;
            while( true ) {
              uVar47 = (ulonglong)~(uint)pfVar55[uVar47 * 4 + 2];
              uVar34 = uStack_130;
              if ((uint)(iVar49 - puStack_110[uVar47]) < uVar26) goto LAB_142965454;
              uVar33 = (int)uStack_130 + 1;
              uVar34 = (ulonglong)uVar33;
              if (uVar33 != (uint)uVar28) break;
LAB_1429651a0:
              do {
                if (puVar53 == puVar52) goto LAB_1429659f2;
                uVar26 = *puVar53;
                puVar53 = puVar53 + 1;
                uVar28 = *(ulonglong *)
                          (*(longlong *)(pfVar43 + 0x40) + 0x58 + (ulonglong)uVar26 * 0xa0);
              } while (uVar28 == 0);
              lVar41 = *(longlong *)(pfVar43 + 0x40) + (ulonglong)uVar26 * 0xa0;
              uVar34 = (ulonglong)*(uint *)(lVar41 + 0x94);
              lVar27 = *(longlong *)(pfVar43 + 0x68) + uVar34 * 0x48;
              uVar34 = *(ulonglong *)(*(longlong *)(pfVar43 + 0x68) + 0x40 + uVar34 * 0x48);
              if ((*(ulonglong *)(lStack_168 + 0x110) < uVar34) &&
                 (uVar47 = *(ulonglong *)
                            (*(longlong *)(lVar27 + 0x38) + *(ulonglong *)(lStack_168 + 0x110) * 8),
                 uVar47 != 0)) {
                lStack_120 = *(longlong *)(*(longlong *)(lVar27 + 0x18) + 0x10 + ~uVar47 * 0x30);
                uVar47 = *(ulonglong *)(lStack_168 + 0x118);
                if (uVar34 <= uVar47) goto LAB_142965280;
LAB_142965247:
                uVar34 = *(ulonglong *)(*(longlong *)(lVar27 + 0x38) + uVar47 * 8);
                if (uVar34 == 0) goto LAB_142965280;
                lStack_118 = *(longlong *)(*(longlong *)(lVar27 + 0x18) + 0x10 + ~uVar34 * 0x30);
              }
              else {
                lStack_120 = 0;
                uVar47 = *(ulonglong *)(lStack_168 + 0x118);
                if (uVar47 < uVar34) goto LAB_142965247;
LAB_142965280:
                lStack_118 = 0;
              }
              uStack_f1 = uVar42;
              puStack_110 = (undefined4 *)pdb_140eff660(lVar27,*(undefined8 *)(lStack_168 + 0x120));
              pfVar55 = *(float **)(lVar41 + 0x50);
              uStack_130 = 0;
              uVar47 = 0;
              pfVar43 = pfStack_158;
              puVar52 = puStack_188;
              iVar49 = (int)pfStack_138;
              uVar26 = (uint)lStack_150;
            }
          } while( true );
        }
        cVar25 = (char)uVar37;
        pfVar43 = param_4;
        param_4 = param_2;
        goto joined_r0x000142964ab5;
      }
      uVar37 = uVar37 & 0xffffffff;
      pfVar44[4] = 0.0;
      pfVar44[5] = 0.0;
      uStack_1d8 = pfVar44 + 6;
      pfVar43 = pfVar44 + 8;
      uStack_1d0 = *(longlong *)(pfVar44 + 10);
      pfVar44[10] = 0.0;
      pfVar44[0xb] = 0.0;
      pfVar55 = *(float **)pfVar43 + uStack_1d0 * 0xe;
      pbStack_1c8 = (byte *)0x0;
      uStack_1e0 = pfVar55;
      if (uStack_1d0 != 0) {
        param_4 = (float *)&UNK_143605550;
        pfVar44 = (float *)&uStack_308;
        pfVar43 = *(float **)pfVar43;
        do {
          pfVar54 = pfVar43 + 0xe;
          if (*pfVar43 == 2.8026e-45) break;
          param_2 = *(float **)(pfVar43 + 4);
          if (SUB84(param_2,0) == 0.0) break;
          unaff_R15 = (undefined *)*param_12;
          pfStack_140 = pfVar54;
          cVar25 = pdb_140ed63a0(unaff_R15,param_2);
          if (cVar25 != '\0') {
            uStack_308._4_4_ = (float)((ulonglong)param_2 >> 0x20);
            uStack_300._0_4_ = SUB84(unaff_R15,0);
            uStack_300._4_4_ = (float)((ulonglong)unaff_R15 >> 0x20);
            uStack_2f8._0_4_ = *(undefined4 *)(param_12 + 1);
            uStack_2f8._4_4_ = *(undefined4 *)((longlong)param_12 + 0xc);
            lStack_2f0 = param_12[2];
            auStack_2e8._0_8_ = param_12[3];
            uStack_308._0_4_ = SUB84(param_2,0);
            pdb_140f04aa0(pfVar44,&UNK_143605550);
          }
          pfVar43 = pfStack_140;
        } while (pfVar54 != pfVar55);
      }
      cVar25 = (char)uVar37;
      pfVar43 = param_4;
      unaff_R12 = uVar37;
      param_4 = param_2;
joined_r0x000142964ab5:
      param_2 = pfVar44;
      if (cVar25 == '\0') {
        return;
      }
      plVar29 = (longlong *)pdb_140e97000();
      if (((char)plVar29[0xd] != '\x01') &&
         (plVar29 = (longlong *)pdb_142e2d6a0(plVar29,0), plVar29 == (longlong *)0x0)) break;
      if (*plVar29 == 0) {
        *plVar29 = -1;
        pfStack_140 = (float *)plVar29;
        pdb_140e95370(plVar29 + 1,puStack_108);
LAB_14296790b:
        *(longlong *)pfStack_140 = *(longlong *)pfStack_140 + 1;
        return;
      }
    }
LAB_142967a65:
    plVar29 = (longlong *)pdb_142dc8090(&UNK_1436007f8);
LAB_142967a71:
    plVar29 = (longlong *)pdb_142e2d6a0(plVar29,0);
  } while (plVar29 != (longlong *)0x0);
LAB_142967ac4:
  pdb_142dc7890(&UNK_143600788);
LAB_142967ad0:
  uStack_f2 = 1;
  pdb_142dc7eb2();
LAB_142967c33:
                    /* WARNING: Does not return */
  pcVar19 = (code *)invalidInstructionException();
  (*pcVar19)();
LAB_142965454:
  uStack_130 = uVar34;
  pfStack_178 = pfVar55;
  uStack_160 = lStack_118 + uVar47 * 0x28;
  uStack_f1 = (undefined1)uVar37;
  uStack_180 = uVar28;
  pdb_140b40bc0(&uStack_408,uVar47 * 0x30 + lStack_120);
  uStack_130 = (ulonglong)((int)uStack_130 + 1);
  uStack_128 = CONCAT44(uStack_128._4_4_,*(undefined4 *)(uStack_160 + 0x10));
  uVar26 = 0;
  while( true ) {
    fVar2 = fStack_3f0;
    fVar74 = fStack_3f4;
    fVar72 = fStack_3f8;
    fVar62 = fStack_400;
    uVar37 = (ulonglong)uStack_f8;
    if ((uint)uStack_128 <= uVar26) break;
    puStack_108 = (uint *)CONCAT44(puStack_108._4_4_,uVar26);
    fVar77 = *(float *)(uStack_160 + 0x14);
    fVar79 = *(float *)(uStack_160 + 0x18);
    fVar56 = *(float *)(uStack_160 + 0x1c);
    fVar57 = (float)uStack_408;
    fVar76 = uStack_408._4_4_;
    fVar58 = (float)uStack_3e8;
    fVar59 = uStack_3e8._4_4_;
    fVar60 = (float)uStack_3e0;
    fVar80 = fVar56 * (float)uStack_3e8 + fVar79 * fStack_3f8 + fVar77 * (float)uStack_408 +
             fStack_3d8;
    fVar64 = fVar56 * uStack_3e8._4_4_ + fVar79 * fStack_3f4 + fVar77 * uStack_408._4_4_ +
             fStack_3d4;
    fVar65 = fVar56 * (float)uStack_3e0 + fVar79 * fStack_3f0 + fVar77 * fStack_400 + fStack_3d0;
    fVar77 = *(float *)(uStack_160 + 0x20);
    uVar42 = (undefined1)uStack_f8;
    uStack_f1 = uVar42;
    uVar63 = pdb_140e02880(param_8);
    uStack_f1 = uVar42;
    uVar61 = pdb_140e02880(param_8);
    uStack_f1 = uVar42;
    pdb_140de9570(&uStack_308,CONCAT44(uVar61,uVar63));
    fVar66 = (float)uStack_300;
    fVar56 = uStack_308._4_4_;
    fVar79 = (float)uStack_308;
    uStack_f1 = uVar42;
    fVar75 = (float)pdb_140e02880(param_8);
    uStack_f1 = uVar42;
    pdb_140df4940(&uStack_308);
    puVar45 = (undefined *)CONCAT44(uStack_308._4_4_,(float)uStack_308);
    uVar32 = CONCAT44(uStack_300._4_4_,(float)uStack_300);
    uStack_f1 = uVar42;
    pdb_140a8ccc0(&pfStack_1e8,pfStack_140,&UNK_1436055cc,0x18);
    if ((int)pfStack_1e8 == 2) {
      pfStack_348 = uStack_1e0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143605760,0x2b,&pfStack_348,&UNK_143605740,&UNK_143605690);
    }
    pbStack_328 = pbStack_1c8;
    uStack_320 = uStack_1c0;
    pfStack_338 = uStack_1d8;
    lStack_330 = uStack_1d0;
    pfStack_348 = pfStack_1e8;
    pfStack_340 = uStack_1e0;
    pdb_140a8a6f0(&pfStack_348);
    pdb_140a8a6e0(&pfStack_348);
    pbStack_418 = pbStack_328;
    uStack_410 = uStack_320;
    pfStack_428 = pfStack_338;
    lStack_420 = lStack_330;
    pfStack_438 = pfStack_348;
    pfStack_430 = pfStack_340;
    uVar28 = *param_8;
    uVar37 = uVar28 + 0xa0761d6478bd642f;
    *param_8 = uVar37;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar37 ^ 0xe7037ed1a0b428db;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar37;
    uVar34 = SUB168(auVar6 * auVar13,8) ^ SUB168(auVar6 * auVar13,0);
    if ((uint)((int)uVar34 * 100) < 0x60) {
      uVar28 = uVar28 + 0x40ec3ac8f17ac85e;
      do {
        uVar37 = uVar37 + 0xa0761d6478bd642f;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar28 ^ 0xe7037ed1a0b428db;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar28;
        uVar34 = SUB168(auVar7 * auVar14,8) ^ SUB168(auVar7 * auVar14,0);
        uVar28 = uVar28 + 0xa0761d6478bd642f;
      } while ((uint)((int)uVar34 * 100) < 0x60);
      *param_8 = uVar37;
    }
    iStack_19c = (int)((uVar34 & 0xffffffff) * 100 >> 0x20) + (uint)puStack_108;
    uStack_1a4 = 0;
    uStack_1b8 = 2;
    pfStack_1e8 = pfStack_348;
    uStack_1e0 = pfStack_340;
    uStack_1d8 = pfStack_338;
    uStack_1d0 = lStack_330;
    pbStack_1c8 = pbStack_328;
    uStack_1c0 = uStack_320;
    pdb_14007ee60();
    fVar70 = fVar77 * 0.0;
    fVar72 = fVar58 * fVar70 + fVar72 * fVar70 + fVar57 * fVar77;
    fVar74 = fVar59 * fVar70 + fVar74 * fVar70 + fVar76 * fVar77;
    fVar62 = fVar60 * fVar70 + fVar2 * fVar70 + fVar62 * fVar77;
    fVar62 = SQRT(fVar62 * fVar62 + fVar74 * fVar74 + fVar72 * fVar72);
    fVar75 = SQRT(fVar75);
    fVar80 = fVar75 * fVar62 * fVar79 + fVar80;
    fVar64 = fVar75 * fVar62 * fVar56 + fVar64;
    fVar65 = fVar65 + fVar66 * fVar62 * fVar75;
    uStack_288 = 0;
    uStack_280 = 0x6df6147cdf0aeade;
    auStack_2e8._8_8_ = uStack_1c0;
    auStack_2e8._0_8_ = pbStack_1c8;
    uStack_308._0_4_ = SUB84(pfStack_1e8,0);
    uStack_308._4_4_ = (float)((ulonglong)pfStack_1e8 >> 0x20);
    uStack_300._0_4_ = SUB84(uStack_1e0,0);
    uStack_300._4_4_ = (float)((ulonglong)uStack_1e0 >> 0x20);
    uStack_2f8._0_4_ = (float)uStack_1d8;
    uStack_2f8._4_4_ = uStack_1d8._4_4_;
    lStack_2f0 = uStack_1d0;
    lStack_2d8 = uStack_1b8;
    uStack_2d0 = (undefined *)CONCAT44(uStack_1ac,uStack_1b0);
    uStack_2c8 = CONCAT44((undefined4)uStack_1a4,uStack_1a8);
    uStack_2c0 = CONCAT44(iStack_19c,uStack_1a4._4_4_);
    uStack_29c = 0x3f800000;
    uStack_298 = 0x3f800000;
    uStack_294 = 0x3f800000;
    uStack_278 = 0xe;
    uStack_24c = 0x3f8000003f800000;
    uStack_244 = 0x3f800000;
    uVar42 = (undefined1)uStack_f8;
    puStack_2b8 = puVar45;
    uStack_2b0 = uVar32;
    fStack_2a8 = fVar80;
    fStack_2a4 = fVar64;
    fStack_2a0 = fVar65;
    puStack_268 = puVar45;
    uStack_260 = uVar32;
    fStack_258 = fVar80;
    fStack_254 = fVar64;
    fStack_250 = fVar65;
    uStack_f1 = uVar42;
    pdb_14296bff0(&pfStack_1e8,param_12,&uStack_308,&UNK_143605648);
    pfVar55 = pfStack_1e8;
    uStack_f1 = uVar42;
    fVar62 = (float)pdb_140e02880(param_8);
    fVar62 = fVar62 + _DAT_142e36f38;
    uStack_f1 = uVar42;
    fVar72 = (float)pdb_140e02880(param_8);
    uStack_f1 = uVar42;
    fVar74 = (float)pdb_140e02880(param_8);
    fVar72 = fVar72 * _DAT_142e36f50;
    lVar27 = *(longlong *)(pfVar44 + 4);
    if (lVar27 == *(longlong *)pfVar44) {
      uStack_f1 = uVar42;
      pdb_142d89250(pfVar44);
    }
    lVar41 = *(longlong *)(pfVar44 + 2);
    *(ulonglong *)(lVar41 + lVar27 * 0x18) = CONCAT44(fVar64,fVar80);
    *(float *)(lVar41 + 8 + lVar27 * 0x18) = fVar65;
    *(float *)(lVar41 + 0xc + lVar27 * 0x18) = fVar62;
    *(ulonglong *)(lVar41 + 0x10 + lVar27 * 0x18) = CONCAT44(fVar74 + (float)uVar40,fVar72 + fVar78)
    ;
    *(longlong *)(pfVar44 + 4) = lVar27 + 1;
    lVar27 = *(longlong *)(pfVar44 + 10);
    if (lVar27 == *(longlong *)(pfVar44 + 6)) {
      uStack_f1 = uVar42;
      pdb_142d7f080(pfVar44 + 6);
    }
    lVar41 = *(longlong *)(pfVar44 + 8);
    lVar48 = lVar27 * 0x38;
    *(undefined4 *)(lVar41 + lVar48) = 0;
    *(float **)(lVar41 + 0x10 + lVar48) = pfVar55;
    uVar32 = _DAT_14367da50;
    *(undefined8 *)(lVar41 + 0x18 + lVar48) = _DAT_14367da50;
    uVar63 = _DAT_14367da58;
    *(undefined4 *)(lVar41 + 0x20 + lVar48) = _DAT_14367da58;
    *(undefined8 *)(lVar41 + 0x24 + lVar48) = uVar32;
    *(undefined4 *)(lVar41 + 0x2c + lVar48) = uVar63;
    *(undefined4 *)(lVar41 + 0x30 + lVar48) = 0;
    *(longlong *)(pfVar44 + 10) = lVar27 + 1;
    uStack_f1 = (undefined1)uStack_f8;
    if (SBORROW8(0,*(longlong *)(pfVar44 + 0xc))) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143605660);
    }
    lVar27 = *(longlong *)(pfVar44 + 0x10);
    if (lVar27 == *(longlong *)(pfVar44 + 0xc)) {
      pdb_142db0920(pfVar44 + 0xc);
    }
    uVar26 = (uint)puStack_108 + 1;
    *(float **)(*(longlong *)(pfVar44 + 0xe) + lVar27 * 8) = pfVar55;
    *(longlong *)(pfVar44 + 0x10) = lVar27 + 1;
  }
  uVar28 = uStack_180;
  iVar49 = (int)pfStack_138;
  uVar26 = (uint)lStack_150;
  if ((char)pbStack_170 == '\0') goto LAB_14296517a;
LAB_142965312:
  uVar42 = (undefined1)uVar37;
  uVar34 = uStack_130;
  pfVar43 = pfStack_158;
  puVar52 = puStack_188;
  if ((int)uStack_130 != (int)uVar28) goto LAB_14296542d;
  while (puVar53 != puVar52) {
    uVar26 = *puVar53;
    puVar53 = puVar53 + 1;
    uVar28 = *(ulonglong *)(*(longlong *)(pfVar43 + 0x68) + 0x10 + (ulonglong)uVar26 * 0x48);
    if (uVar28 != 0) {
      lVar27 = *(longlong *)(pfVar43 + 0x68) + (ulonglong)uVar26 * 0x48;
      uVar34 = *(ulonglong *)(lVar27 + 0x40);
      if ((*(ulonglong *)(lStack_168 + 0x110) < uVar34) &&
         (uVar47 = *(ulonglong *)
                    (*(longlong *)(lVar27 + 0x38) + *(ulonglong *)(lStack_168 + 0x110) * 8),
         uVar47 != 0)) {
        lStack_120 = *(longlong *)(*(longlong *)(lVar27 + 0x18) + 0x10 + ~uVar47 * 0x30);
        uVar47 = *(ulonglong *)(lStack_168 + 0x118);
        if (uVar34 <= uVar47) goto LAB_1429653e8;
LAB_1429653be:
        uVar34 = *(ulonglong *)(*(longlong *)(lVar27 + 0x38) + uVar47 * 8);
        if (uVar34 == 0) goto LAB_1429653e8;
        lStack_118 = *(longlong *)(*(longlong *)(lVar27 + 0x18) + 0x10 + ~uVar34 * 0x30);
      }
      else {
        lStack_120 = 0;
        uVar47 = *(ulonglong *)(lStack_168 + 0x118);
        if (uVar47 < uVar34) goto LAB_1429653be;
LAB_1429653e8:
        lStack_118 = 0;
      }
      uStack_f1 = uVar42;
      puStack_110 = (undefined4 *)pdb_140eff660(lVar27,*(undefined8 *)(lStack_168 + 0x120));
      uVar34 = 0;
      pfVar43 = pfStack_158;
      puVar52 = puStack_188;
      iVar49 = (int)pfStack_138;
      uVar26 = (uint)lStack_150;
LAB_14296542d:
      do {
        uVar47 = uVar34 & 0xffffffff;
        pfVar55 = pfStack_178;
        if ((uint)(iVar49 - puStack_110[uVar47]) < uVar26) goto LAB_142965454;
        uVar33 = (int)uVar34 + 1;
        uVar34 = (ulonglong)uVar33;
      } while (uVar33 != (uint)uVar28);
    }
  }
LAB_1429659f2:
  uStack_2d0 = (undefined *)*param_9;
  auStack_2e8._0_8_ = param_9[1];
  uStack_2c8 = *(longlong *)((longlong)uStack_2d0 + 0xf8);
  uStack_2c0 = uStack_2c8 + *(longlong *)((longlong)uStack_2d0 + 0x100) * 4;
  fStack_2a0 = 0.0;
  uStack_29c = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_290 = 0;
  lStack_2d8 = auStack_2e8._0_8_ + 0xf8;
  uStack_308._0_4_ = 0.0;
  uStack_308._4_4_ = 0.0;
  uStack_2f8._0_4_ = 0;
  uStack_2f8._4_4_ = 0;
  auStack_2e8._8_8_ = auStack_2e8._0_8_ + 0x198;
  puStack_2b8 = (undefined *)0x8;
  uStack_2b0 = 0;
  fStack_2a8 = 1.12104e-44;
  fStack_2a4 = 0.0;
  uStack_288 = CONCAT31(uStack_288._1_3_,*(undefined1 *)((longlong)uStack_2d0 + 0x108));
  puVar39 = &uStack_308;
  uStack_f1 = uVar42;
  pdb_142299a50(&lStack_3c0);
  plVar29 = (longlong *)pdb_140f3bda0();
  if ((char)plVar29[2] == '\x01') {
    lStack_458 = *plVar29;
    puVar39 = (undefined8 *)plVar29[1];
  }
  else {
    lStack_458 = pdb_140f4fd10();
    *plVar29 = lStack_458;
    plVar29[1] = (longlong)puVar39;
    *(undefined1 *)(plVar29 + 2) = 1;
  }
  *plVar29 = lStack_458 + 1;
  uStack_468 = _DAT_1436056d0;
  uStack_460 = _UNK_1436056d8;
  lStack_478 = _DAT_1436056c0;
  lStack_470 = _UNK_1436056c8;
  lVar27 = *param_10;
  lStack_120 = param_10[1];
  uStack_130 = CONCAT44(uStack_130._4_4_,*(undefined4 *)((longlong)param_10 + 0x14));
  puStack_188 = (uint *)(lStack_120 + 0x198);
  lStack_150 = lStack_120 + 0xf8;
  uStack_2b0 = 0;
  fStack_2a8 = 0.0;
  fStack_2a4 = 0.0;
  uStack_2c0 = 0;
  puStack_2b8 = (undefined *)0x0;
  uStack_308._0_4_ = (float)lStack_120;
  uStack_308._4_4_ = (float)((ulonglong)lStack_120 >> 0x20);
  auStack_2e8._8_8_ = *(longlong *)(lVar27 + 0xf8) + *(longlong *)(lVar27 + 0x100) * 4;
  auStack_2e8._0_8_ = *(longlong *)(lVar27 + 0xf8);
  lStack_2d8 = 8;
  uStack_2d0 = (undefined *)0x0;
  uStack_2c8 = 8;
  fStack_2a0 = (float)CONCAT31(fStack_2a0._1_3_,*(undefined1 *)(lVar27 + 0x108));
  puStack_450 = puVar39;
  lStack_2f0 = lVar27;
  uStack_300 = (longlong)puStack_188;
  uStack_2f8 = lStack_150;
  pdb_142b50200(&pfStack_1e8,&uStack_308);
  pfVar55 = uStack_1e0;
  pfStack_398 = pfStack_1e8;
  pfStack_138 = uStack_1d8;
  lStack_390 = uStack_1d0;
  pbStack_370 = pbStack_1c8;
  uStack_210 = uStack_1c0;
  uStack_200 = 0;
  uStack_1f8 = 8;
  lStack_1f0 = 0;
  uStack_230 = *(ulonglong *)(pfVar44 + 4);
  uStack_141 = uStack_230 < 0x50;
  puVar39 = *(undefined8 **)(pfVar44 + 2);
  uVar37 = uStack_230 * 0x18;
  pfStack_378 = uStack_1e0;
  uStack_180 = uVar37;
  lStack_118 = lVar27;
  if (uStack_230 == 0) {
    pbStack_170 = (byte *)0x4;
    puStack_110 = (undefined4 *)0x0;
  }
  else {
    pdb_14007ee60();
    pbVar30 = pub_1406abab0(uVar37,4);
    if (pbVar30 == (byte *)0x0) {
      uStack_f9 = 1;
      pdb_142dc7e2a(4,uVar37);
      goto LAB_142967c33;
    }
    uVar40 = 0;
    uVar28 = uStack_230;
    do {
      if (uVar37 == uVar40) break;
      puVar31 = (undefined4 *)((longlong)puVar39 + 0x14);
      uStack_2f8._0_4_ = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar39 + 0xc) >> 0x20);
      uStack_300 = puVar39[1];
      lVar27 = puVar39[1];
      uVar32 = *puVar39;
      puVar39 = puVar39 + 3;
      uStack_308._0_4_ = (float)uVar32;
      uStack_308._4_4_ = (float)((ulonglong)uVar32 >> 0x20);
      uStack_2f8 = CONCAT44(*puVar31,(undefined4)uStack_2f8);
      *(longlong *)(pbVar30 + uVar40 + 0x10) = uStack_2f8;
      *(undefined8 *)(pbVar30 + uVar40) = uVar32;
      *(longlong *)(pbVar30 + uVar40 + 8) = lVar27;
      uVar40 = uVar40 + 0x18;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
    puVar39 = *(undefined8 **)(pfVar44 + 2);
    puStack_110 = *(undefined4 **)(pfVar44 + 4);
    pbStack_170 = pbVar30;
  }
  fVar62 = _DAT_143601050;
  fVar78 = _DAT_142e37844;
  uStack_128 = *(ulonglong *)(pfVar44 + 8);
  if (*(undefined4 **)(pfVar44 + 10) < puStack_110) {
    puStack_110 = *(undefined4 **)(pfVar44 + 10);
  }
  pfStack_158 = (float *)*param_7;
  uStack_160 = param_7[1];
  pfStack_178 = pfVar55 + (longlong)pfStack_138 * 4;
  pfStack_208 = pfStack_3b8;
  puVar31 = (undefined4 *)0x0;
  puVar50 = puStack_110;
  puVar53 = (uint *)0x0;
  uVar37 = uStack_228;
  lVar27 = uStack_300;
  lVar41 = uStack_2f8;
  while (uStack_228 = uVar37, puVar52 = puVar53, lVar48 = lStack_1f0, puVar31 < puVar50) {
    puVar1 = (undefined4 *)((longlong)puVar31 + 1);
    puVar53 = (uint *)((longlong)puVar52 + 1);
    if ((fVar62 < SQRT(*(float *)(puVar39 + (longlong)puVar31 * 3 + 1) *
                       *(float *)(puVar39 + (longlong)puVar31 * 3 + 1) +
                       *(float *)(puVar39 + (longlong)puVar31 * 3) *
                       *(float *)(puVar39 + (longlong)puVar31 * 3))) ||
       (pfVar55 = (float *)(puVar39 + (longlong)puVar31 * 3), fVar78 < pfVar55[1])) {
      uStack_300 = lVar27;
      uStack_2f8 = lVar41;
      if (lStack_1f0 == uStack_200) {
        uStack_f2 = 1;
        puStack_108 = puVar53;
        pdb_142d896b0(&uStack_200);
        puVar50 = puStack_110;
        puVar53 = puStack_108;
      }
LAB_142965da0:
      *(uint **)(uStack_1f8 + lVar48 * 8) = puVar52;
      lStack_1f0 = lVar48 + 1;
      puVar31 = puVar1;
      uVar37 = uStack_228;
      lVar27 = uStack_300;
      lVar41 = uStack_2f8;
    }
    else {
      lVar48 = (longlong)puVar31 * 0x38 + uStack_128;
      uVar28 = (ulonglong)~(uint)*(undefined8 *)(lVar48 + 0x10);
      puVar31 = puVar1;
      uVar37 = uStack_228;
      if (((((uVar28 < *(ulonglong *)(uStack_160 + 0x10)) &&
            (piVar36 = (int *)(uVar28 * 0x18 + *(longlong *)(uStack_160 + 8)),
            piVar36[4] == (int)((ulonglong)*(undefined8 *)(lVar48 + 0x10) >> 0x20))) &&
           (*piVar36 != 0)) &&
          ((uVar28 = *(ulonglong *)(piVar36 + 2), lStack_168 = lVar48,
           (uVar28 & 0xffffffff) < *(ulonglong *)(pfStack_158 + 0xe) &&
           ((*(ulonglong *)(*(longlong *)(pfStack_158 + 10) + (uVar28 >> 6 & 0x3ffffff) * 8) >>
             (uVar28 & 0x3f) & 1) != 0)))) &&
         (*(int *)(*(longlong *)
                    (*(longlong *)
                      (*(longlong *)(uStack_160 + 0x1a0) + 0x18 + (uVar28 >> 0x20) * 0x48) + 0x10 +
                    ~*(ulonglong *)
                      (*(longlong *)
                        (*(longlong *)(uStack_160 + 0x1a0) + 0x38 + (uVar28 >> 0x20) * 0x48) +
                      *(longlong *)(pfStack_158 + 0x46) * 8) * 0x30) + 0x30 +
                  (ulonglong)(uint)~piVar36[1] * 0x50) != 0)) {
        uStack_308 = &uStack_141;
        uStack_300._0_4_ = (float)param_5;
        uStack_300._4_4_ = (float)((ulonglong)param_5 >> 0x20);
        uStack_2f8._0_4_ = SUB84(pfStack_218,0);
        uStack_2f8._4_4_ = (undefined4)((ulonglong)pfStack_218 >> 0x20);
        uStack_f2 = 1;
        puStack_108 = puVar53;
        cVar25 = pdb_142b4e0f0(pfVar55,lVar48,puVar52,pbStack_170,uStack_230,param_8,0x40e00000,
                               0x41600000,0x3fa66666,0x3def9db2,&uStack_308,
                               *(undefined4 *)(lStack_220 + 0x28));
        lVar48 = lStack_1f0;
        puVar53 = (uint *)((longlong)puVar52 + 1);
        puVar50 = puStack_110;
        if (cVar25 != '\0') {
          if (lStack_1f0 == uStack_200) {
            uStack_f2 = 1;
            pdb_142d896b0(&uStack_200);
            puVar53 = (uint *)((longlong)puVar52 + 1);
            puVar50 = puStack_110;
          }
          goto LAB_142965da0;
        }
        if (uStack_3b0 == 0) {
LAB_1429661c6:
          uVar37 = uStack_228;
          lVar27 = CONCAT44(uStack_300._4_4_,(float)uStack_300);
          lVar41 = CONCAT44(uStack_2f8._4_4_,(undefined4)uStack_2f8);
          if ((0x50 < uStack_230) &&
             (lVar27 = CONCAT44(uStack_300._4_4_,(float)uStack_300),
             lVar41 = CONCAT44(uStack_2f8._4_4_,(undefined4)uStack_2f8), pfStack_138 != (float *)0x0
             )) {
            uVar28 = 0;
            pfVar43 = pfStack_378;
            do {
              fVar72 = pfVar43[3] * pfVar43[3];
              pfStack_310 = pfVar55;
              if ((pfVar55[2] - pfVar43[2]) * (pfVar55[2] - pfVar43[2]) +
                  (pfVar55[1] - pfVar43[1]) * (pfVar55[1] - pfVar43[1]) +
                  (*pfVar55 - *pfVar43) * (*pfVar55 - *pfVar43) < fVar72) {
                if (uStack_210 <= uVar28) {
                  uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(fVar72,uStack_210,&UNK_143605618);
                }
                lVar27 = *(longlong *)(pbStack_370 + uVar28 * 8);
                uVar40 = (ulonglong)~(uint)lVar27;
                if (((*(ulonglong *)(lStack_120 + 0x10) <= uVar40) ||
                    (piVar36 = (int *)(uVar40 * 0x18 + *(longlong *)(lStack_120 + 8)),
                    piVar36[4] != (int)((ulonglong)lVar27 >> 0x20))) || (*piVar36 == 0)) {
                  uVar37 = (uVar37 & 0xffffffff00000000) + 1;
                  goto LAB_142967b6a;
                }
                param_2 = *(float **)(piVar36 + 2);
                if ((((ulonglong)param_2 & 0xffffffff) < *(ulonglong *)(lStack_118 + 0x38)) &&
                   ((*(ulonglong *)
                      (*(longlong *)(lStack_118 + 0x28) + ((ulonglong)param_2 >> 6 & 0x3ffffff) * 8)
                     >> ((ulonglong)param_2 & 0x3f) & 1) != 0)) {
                  lVar35 = *(longlong *)
                            (*(longlong *)(lStack_120 + 0x1a0) + 0x18 +
                            ((ulonglong)param_2 >> 0x20) * 0x48);
                  lVar51 = ~*(ulonglong *)
                             (*(longlong *)
                               (*(longlong *)(lStack_120 + 0x1a0) + 0x38 +
                               ((ulonglong)param_2 >> 0x20) * 0x48) +
                             *(longlong *)(lStack_118 + 0x110) * 8) * 0x30;
                  lVar41 = lVar35 + lVar51;
                  uVar40 = (ulonglong)(uint)~piVar36[1];
                  uVar37 = uVar40 * 0x28 + *(longlong *)(lVar35 + 0x10 + lVar51);
                  if ((uint)lVar27 == 0) {
                    lVar27 = uVar40 * 4 + *(longlong *)(lVar41 + 0x20);
                    goto LAB_142967b6a;
                  }
                  *(undefined4 *)(*(longlong *)(lVar41 + 0x28) + uVar40 * 4) =
                       (undefined4)uStack_130;
                  if (*(uint *)(uVar37 + 0x10) < 5) {
                    *(uint *)(uVar37 + 0x10) = *(uint *)(uVar37 + 0x10) + 1;
                    puVar53 = (uint *)((longlong)puVar52 + 1);
                    uStack_228 = uVar37;
                    if (lStack_1f0 == uStack_200) {
                      uStack_f2 = 1;
                      pdb_142d896b0(&uStack_200);
                      puVar53 = (uint *)((longlong)puVar52 + 1);
                      puVar50 = puStack_110;
                    }
                    goto LAB_142965da0;
                  }
                  goto LAB_142966201;
                }
                goto LAB_142967b63;
              }
LAB_142966201:
              pfVar43 = pfVar43 + 4;
              uVar28 = uVar28 + 1;
              puVar53 = puStack_108;
              lVar27 = uStack_300;
              lVar41 = uStack_2f8;
            } while (pfVar43 != pfStack_178);
          }
        }
        else {
          uVar37 = 0;
          pfVar43 = pfStack_208;
          while (fVar72 = pfVar43[1] - pfVar55[1], fVar72 < _DAT_142f69450) {
LAB_142966070:
            pfVar43 = pfVar43 + 4;
            uVar37 = uVar37 + 1;
            if (pfVar43 == pfStack_208 + uStack_3b0 * 4) goto LAB_1429661c6;
          }
          auVar67._0_4_ = pfVar43[2] - pfVar55[2];
          auVar67._4_4_ = *pfVar43 - *pfVar55;
          auVar67._8_8_ = 0;
          fVar74 = SQRT(auVar67._4_4_ * auVar67._4_4_ + fVar72 * fVar72 +
                        auVar67._0_4_ * auVar67._0_4_);
          if (_DAT_142f57bc8 < fVar74) goto LAB_142966070;
          auVar21._4_4_ = fVar74;
          auVar21._0_4_ = fVar74;
          auVar21._8_8_ = 0;
          auVar68 = divps(auVar67,auVar21);
          fVar2 = pfVar55[3];
          fVar77 = (float)*(undefined8 *)(pfVar55 + 4);
          fVar79 = (float)((ulonglong)*(undefined8 *)(pfVar55 + 4) >> 0x20);
          auVar81._4_12_ = DAT_142e378e0._4_12_;
          auVar81._0_4_ = fVar72;
          auVar23._4_4_ = SQRT(fVar79 * fVar79 + fVar2 * fVar2 + fVar77 * fVar77);
          auVar23._0_4_ = fVar74;
          auVar23._8_8_ = 0;
          auVar82 = divps(auVar81,auVar23);
          fVar72 = auVar82._4_4_;
          if (fVar2 * fVar72 * auVar68._4_4_ + fVar77 * fVar72 * auVar82._0_4_ +
              fVar79 * fVar72 * auVar68._0_4_ < _DAT_142e3783c) goto LAB_142966070;
          if (uStack_3b0 <= uVar37) goto LAB_142967ad0;
          uStack_488 = *(undefined8 *)pfVar43;
          uStack_480 = *(undefined8 *)(pfVar43 + 2);
          uStack_3b0 = uStack_3b0 - 1;
          pfVar55 = pfStack_208 + uStack_3b0 * 4;
          fVar72 = pfVar55[1];
          fVar74 = pfVar55[2];
          fVar2 = pfVar55[3];
          *pfVar43 = *pfVar55;
          pfVar43[1] = fVar72;
          pfVar43[2] = fVar74;
          pfVar43[3] = fVar2;
          uStack_f2 = 1;
          pdb_14229bca0(&uStack_308,&lStack_478,*(undefined8 *)(lStack_168 + 0x10),&uStack_488);
          puVar50 = puStack_110;
          puVar53 = puStack_108;
          uVar37 = uStack_228;
          lVar27 = CONCAT44(uStack_300._4_4_,(float)uStack_300);
          lVar41 = CONCAT44(uStack_2f8._4_4_,(undefined4)uStack_2f8);
        }
      }
    }
  }
  uStack_2b0 = 0;
  fStack_2a8 = 0.0;
  fStack_2a4 = 0.0;
  uStack_2c0 = 0;
  puStack_2b8 = (undefined *)0x0;
  uStack_308._0_4_ = (float)lStack_120;
  uStack_308._4_4_ = (float)((ulonglong)lStack_120 >> 0x20);
  uStack_300._0_4_ = SUB84(puStack_188,0);
  uStack_300._4_4_ = (float)((ulonglong)puStack_188 >> 0x20);
  uStack_2f8._0_4_ = (undefined4)lStack_150;
  uStack_2f8._4_4_ = (undefined4)((ulonglong)lStack_150 >> 0x20);
  lStack_2f0 = lStack_118;
  auStack_2e8._8_8_ = *(longlong *)(lStack_118 + 0xf8) + *(longlong *)(lStack_118 + 0x100) * 4;
  auStack_2e8._0_8_ = *(longlong *)(lStack_118 + 0xf8);
  lStack_2d8 = 8;
  uStack_2d0 = (undefined *)0x0;
  uStack_2c8 = 8;
  fStack_2a0 = (float)CONCAT31(fStack_2a0._1_3_,*(undefined1 *)(lStack_118 + 0x108));
  uStack_f2 = 1;
  _DAT_143cb2bf0 = pdb_14293b9f0();
  pfStack_208 = (float *)(_DAT_143cb2bf0 + *(longlong *)(pfVar44 + 4));
  pfVar55 = *(float **)(lStack_118 + 0xf8);
  pfStack_178 = pfVar55 + *(longlong *)(lStack_118 + 0x100);
  puStack_188 = (uint *)CONCAT71(puStack_188._1_7_,*(char *)(lStack_118 + 0x108));
  pfStack_310 = (float *)0x8;
  lStack_168 = 0;
  uStack_228 = 8;
  lStack_150 = 0;
  iStack_234 = 0;
  uStack_238 = 0;
  pfStack_368 = (float *)0x8;
  pfVar43 = (float *)0x0;
  uVar37 = 0;
  if (*(char *)(lStack_118 + 0x108) != '\0') goto LAB_142966640;
LAB_14296650a:
  if ((int)uVar37 != (int)pfVar43) {
    uVar28 = uVar37 & 0xffffffff;
    pfStack_138 = pfVar43;
    uStack_128 = uVar37;
LAB_142966618:
    pfVar43 = pfStack_310 + uVar28 * 4;
    uVar28 = (ulonglong)~(uint)pfStack_310[uVar28 * 4 + 2];
    do {
      piVar36 = (int *)(lStack_168 + uVar28 * 0x28);
      puStack_110 = (undefined4 *)(uStack_210 + uVar28 * 4);
      lVar27 = uVar28 * 0x30 + lStack_150;
      uVar37 = *(ulonglong *)pfVar43;
      if ((int)uVar37 == 0) goto LAB_14296708c;
      fVar78 = *(float *)(lStack_220 + 0x28);
      *puStack_110 = (undefined4)uStack_130;
      piVar36[9] = (int)((float)piVar36[9] - fVar78);
      puStack_108 = (uint *)((ulonglong)puStack_108 & 0xffffffff00000000);
      uStack_440 = uVar37;
      pfStack_218 = pfVar55;
      if ((piVar36[4] != 0) && (*(ulonglong *)(pfVar44 + 4) < 0x50)) {
        fVar78 = *(float *)(lStack_220 + 0x28);
        uStack_f2 = 1;
        fVar62 = (float)pdb_140e02880(param_8);
        fVar78 = fVar78 / _DAT_142e37834;
        fVar72 = (float)pub_142e32bc0(fVar78);
        fVar74 = (float)pub_142e32a40(fVar78);
        iVar49 = (int)(longlong)fVar74;
        if (fVar74 < 0.0) {
          iVar49 = 0;
        }
        if (_DAT_142e46a48 < fVar74) {
          iVar49 = -1;
        }
        puStack_108 = (uint *)CONCAT44(puStack_108._4_4_,(uint)(fVar62 < fVar78 - fVar72) + iVar49);
      }
      uStack_f2 = 1;
      pdb_140b40bc0(&uStack_408,lVar27);
      fVar79 = fStack_3d0;
      fVar77 = fStack_3d4;
      fVar2 = fStack_3d8;
      fVar74 = fStack_3f0;
      fVar72 = fStack_3f4;
      fVar62 = fStack_3f8;
      fVar78 = fStack_400;
      fVar56 = 0.0;
      if (*piVar36 == 1) {
        fVar56 = (float)*(undefined8 *)(piVar36 + 2) - fStack_3d4;
        fVar57 = (float)((ulonglong)*(undefined8 *)(piVar36 + 2) >> 0x20) - fStack_3d0;
        fVar56 = SQRT(fVar57 * fVar57 +
                      ((float)piVar36[1] - fStack_3d8) * ((float)piVar36[1] - fStack_3d8) +
                      fVar56 * fVar56);
      }
      fVar57 = (float)piVar36[5];
      fVar60 = (float)uStack_408;
      fVar66 = uStack_408._4_4_;
      fVar75 = (float)uStack_3e8;
      fVar80 = uStack_3e8._4_4_;
      fVar64 = (float)uStack_3e0;
      fVar76 = (float)piVar36[6];
      fVar58 = (float)piVar36[7];
      fVar59 = (float)piVar36[8];
      *puStack_110 = (undefined4)uStack_130;
      *piVar36 = 1;
      piVar36[1] = (int)fStack_3d8;
      piVar36[2] = (int)fStack_3d4;
      piVar36[3] = (int)fStack_3d0;
      fVar65 = *(float *)(lStack_220 + 0x28);
      if (*(float *)(lStack_220 + 0x28) <= _DAT_14304ab40) {
        fVar65 = _DAT_14304ab40;
      }
      if (((float)piVar36[9] <= 0.0) && (_DAT_142e37878 < fVar56 / fVar65)) {
        if (4 < *_DAT_143ca8e90) {
          uStack_308._0_4_ = 0.0;
          uStack_308._4_4_ = 0.0;
          uStack_300._0_4_ = 224.33455;
          uStack_300._4_4_ = 1.4013e-45;
          uStack_2f8._0_4_ = 0x1b;
          uStack_2f8._4_4_ = 0;
          lStack_2f0 = 0;
          auStack_2e8._8_8_ = 0x29;
          auStack_2e8._0_8_ = &UNK_1436054f8;
          lStack_2d8 = 5;
          uStack_2d0 = &UNK_1436055a5;
          uStack_2c8 = 0x1b;
          uStack_2c0 = 0x18f00000001;
          puStack_2b8 = &UNK_143605580;
          uStack_2b0 = 0x4b;
          uStack_f2 = 1;
          pdb_140f332f0(&uStack_189,&uStack_308);
        }
        uStack_f2 = 1;
        fVar56 = (float)pdb_140e02880(param_8);
        fVar65 = (_DAT_142e36f28 - fVar56) * _DAT_142e3c670;
        fVar56 = fVar56 * _DAT_142e37900;
        *puStack_110 = (undefined4)uStack_130;
        piVar36[9] = (int)(fVar56 + fVar65);
        uVar28 = *param_8;
        uVar37 = uVar28 + 0xa0761d6478bd642f;
        *param_8 = uVar37;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar37 ^ 0xe7037ed1a0b428db;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar37;
        uVar40 = SUB168(auVar8 * auVar15,8) ^ SUB168(auVar8 * auVar15,0);
        if ((int)uVar40 == 0) {
          uVar28 = uVar28 + 0x40ec3ac8f17ac85e;
          do {
            uVar37 = uVar37 + 0xa0761d6478bd642f;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar28 ^ 0xe7037ed1a0b428db;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar28;
            uVar40 = SUB168(auVar9 * auVar16,8) ^ SUB168(auVar9 * auVar16,0);
            uVar28 = uVar28 + 0xa0761d6478bd642f;
          } while ((int)uVar40 == 0);
          *param_8 = uVar37;
        }
        uVar26 = (int)((uVar40 & 0xffffffff) * 5 >> 0x20) + 1;
        if (uVar26 <= (uint)puStack_108) {
          uVar26 = (uint)puStack_108;
        }
        puStack_108 = (uint *)CONCAT44(puStack_108._4_4_,uVar26);
      }
      uStack_128 = (ulonglong)((int)uStack_128 + 1);
      fVar56 = fVar59 * 0.0;
      fVar65 = fVar56 * fVar75 + fVar62 * fVar56 + fVar59 * fVar60;
      fVar70 = fVar56 * fVar80 + fVar72 * fVar56 + fVar59 * fVar66;
      fVar56 = fVar56 * fVar64 + fVar74 * fVar56 + fVar59 * fVar78;
      fVar56 = SQRT(fVar56 * fVar56 + fVar70 * fVar70 + fVar65 * fVar65);
      for (uVar26 = 0; uVar26 < (uint)puStack_108; uVar26 = uVar26 + 1) {
        iVar49 = piVar36[4];
        *puStack_110 = (undefined4)uStack_130;
        piVar36[4] = iVar49 + -1 + (uint)(iVar49 == 0);
        uStack_f2 = 1;
        fVar59 = (float)pdb_140e02880(param_8);
        fVar59 = fVar59 + _DAT_142e36f38;
        uStack_f2 = 1;
        fVar65 = (float)pdb_140e02880(param_8);
        uStack_f2 = 1;
        fVar70 = (float)pdb_140e02880(param_8);
        fVar71 = fVar65 * _DAT_142e36f50 + _DAT_142e3787c;
        fVar70 = fVar70 + _DAT_142e36f38;
        fVar65 = _DAT_142e36f28 / SQRT(fVar70 * fVar70 + fVar71 * fVar71 + fVar59 * fVar59);
        fVar73 = 0.0;
        puVar45 = &UNK_1436055c0;
        if ((int)fVar65 - 1U < 0x7fffff ||
            (int)ABS(fVar65) - 0x800000U < 0x7f000000 && -1 < (int)fVar65) {
          fVar73 = fVar65 * fVar59;
          uStack_308._4_4_ = fVar73;
          uStack_300._0_4_ = fVar65 * fVar71;
          uStack_300._4_4_ = fVar70 * fVar65;
          puVar45 = (undefined *)((longlong)&uStack_308 + 4);
        }
        fVar59 = *(float *)(puVar45 + 4);
        fVar65 = *(float *)(puVar45 + 8);
        fVar70 = fVar73 * fVar56 * _DAT_143605430;
        fVar71 = fVar59 * fVar56 * _UNK_143605434;
        fVar85 = fVar56 * fVar65 * _DAT_143429330;
        uStack_f2 = 1;
        pdb_140df4940(&uStack_308);
        puVar45 = (undefined *)CONCAT44(uStack_308._4_4_,(float)uStack_308);
        uVar32 = CONCAT44(uStack_300._4_4_,(float)uStack_300);
        uStack_f2 = 1;
        pdb_140a8ccc0(&pfStack_1e8,pfStack_140,&UNK_1436055cc,0x18);
        if ((int)pfStack_1e8 == 2) {
          pfStack_348 = uStack_1e0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143605760,0x2b,&pfStack_348,&UNK_143605740,&UNK_143605690);
        }
        pbStack_328 = pbStack_1c8;
        uStack_320 = uStack_1c0;
        pfStack_338 = uStack_1d8;
        lStack_330 = uStack_1d0;
        pfStack_348 = pfStack_1e8;
        pfStack_340 = uStack_1e0;
        pdb_140a8a6f0(&pfStack_348);
        pdb_140a8a6e0(&pfStack_348);
        pbStack_418 = pbStack_328;
        uStack_410 = uStack_320;
        pfStack_428 = pfStack_338;
        lStack_420 = lStack_330;
        pfStack_438 = pfStack_348;
        pfStack_430 = pfStack_340;
        uVar28 = *param_8;
        uVar37 = uVar28 + 0xa0761d6478bd642f;
        *param_8 = uVar37;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar37 ^ 0xe7037ed1a0b428db;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar37;
        uVar40 = SUB168(auVar10 * auVar17,8) ^ SUB168(auVar10 * auVar17,0);
        if ((uint)((int)uVar40 * 100) < 0x60) {
          uVar28 = uVar28 + 0x40ec3ac8f17ac85e;
          do {
            uVar37 = uVar37 + 0xa0761d6478bd642f;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar28 ^ 0xe7037ed1a0b428db;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar28;
            uVar40 = SUB168(auVar11 * auVar18,8) ^ SUB168(auVar11 * auVar18,0);
            uVar28 = uVar28 + 0xa0761d6478bd642f;
          } while ((uint)((int)uVar40 * 100) < 0x60);
          *param_8 = uVar37;
        }
        iStack_19c = (int)((uVar40 & 0xffffffff) * 100 >> 0x20) + uVar26;
        uStack_1a4 = 0;
        uStack_1b8 = 2;
        pfStack_1e8 = pfStack_348;
        uStack_1e0 = pfStack_340;
        uStack_1d8 = pfStack_338;
        uStack_1d0 = lStack_330;
        pbStack_1c8 = pbStack_328;
        uStack_1c0 = uStack_320;
        pdb_14007ee60();
        fVar70 = fVar70 + fVar2 + fVar58 * fVar75 + fVar76 * fVar62 + fVar57 * fVar60;
        fVar71 = fVar71 + fVar77 + fVar58 * fVar80 + fVar76 * fVar72 + fVar57 * fVar66;
        fVar85 = fVar85 + fVar79 + fVar58 * fVar64 + fVar76 * fVar74 + fVar57 * fVar78;
        uStack_288 = 0;
        uStack_280 = 0x6df6147cdf0aeade;
        auStack_2e8._8_8_ = uStack_1c0;
        auStack_2e8._0_8_ = pbStack_1c8;
        uStack_308._0_4_ = SUB84(pfStack_1e8,0);
        uStack_308._4_4_ = (float)((ulonglong)pfStack_1e8 >> 0x20);
        uStack_300._0_4_ = SUB84(uStack_1e0,0);
        uStack_300._4_4_ = (float)((ulonglong)uStack_1e0 >> 0x20);
        uStack_2f8._0_4_ = (float)uStack_1d8;
        uStack_2f8._4_4_ = uStack_1d8._4_4_;
        lStack_2f0 = uStack_1d0;
        lStack_2d8 = uStack_1b8;
        uStack_2d0 = (undefined *)CONCAT44(uStack_1ac,uStack_1b0);
        uStack_2c8 = CONCAT44((undefined4)uStack_1a4,uStack_1a8);
        uStack_2c0 = CONCAT44(iStack_19c,uStack_1a4._4_4_);
        uStack_29c = 0x3f800000;
        uStack_298 = 0x3f800000;
        uStack_294 = 0x3f800000;
        uStack_278 = 0xe;
        uStack_24c = 0x3f8000003f800000;
        uStack_244 = 0x3f800000;
        uStack_f2 = 1;
        puStack_2b8 = puVar45;
        uStack_2b0 = uVar32;
        fStack_2a8 = fVar70;
        fStack_2a4 = fVar71;
        fStack_2a0 = fVar85;
        puStack_268 = puVar45;
        uStack_260 = uVar32;
        fStack_258 = fVar70;
        fStack_254 = fVar71;
        fStack_250 = fVar85;
        pdb_14296bff0(&pfStack_1e8,param_12,&uStack_308,&UNK_1436055e8);
        pfVar55 = pfStack_1e8;
        lVar27 = *(longlong *)(pfVar44 + 4);
        if (lVar27 == *(longlong *)pfVar44) {
          uStack_f2 = 1;
          pdb_142d89250(pfVar44);
        }
        lVar41 = *(longlong *)(pfVar44 + 2);
        *(ulonglong *)(lVar41 + lVar27 * 0x18) = CONCAT44(fVar71,fVar70);
        *(float *)(lVar41 + 8 + lVar27 * 0x18) = fVar85;
        *(float *)(lVar41 + 0xc + lVar27 * 0x18) = fVar73;
        *(float *)(lVar41 + 0x10 + lVar27 * 0x18) = fVar59;
        *(float *)(lVar41 + 0x14 + lVar27 * 0x18) = fVar65;
        *(longlong *)(pfVar44 + 4) = lVar27 + 1;
        lVar27 = *(longlong *)(pfVar44 + 10);
        if (lVar27 == *(longlong *)(pfVar44 + 6)) {
          uStack_f2 = 1;
          pdb_142d7f080(pfVar44 + 6);
        }
        lVar41 = *(longlong *)(pfVar44 + 8);
        lVar48 = lVar27 * 0x38;
        *(undefined4 *)(lVar41 + lVar48) = 0;
        *(float **)(lVar41 + 0x10 + lVar48) = pfVar55;
        uVar32 = _DAT_14367da50;
        *(undefined8 *)(lVar41 + 0x18 + lVar48) = _DAT_14367da50;
        uVar63 = _DAT_14367da58;
        *(undefined4 *)(lVar41 + 0x20 + lVar48) = _DAT_14367da58;
        *(undefined8 *)(lVar41 + 0x24 + lVar48) = uVar32;
        *(undefined4 *)(lVar41 + 0x2c + lVar48) = uVar63;
        *(undefined4 *)(lVar41 + 0x30 + lVar48) = 0;
        *(longlong *)(pfVar44 + 10) = lVar27 + 1;
        if (SBORROW8(0,*(longlong *)(pfVar44 + 0xc))) {
          uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143605600);
        }
        lVar27 = *(longlong *)(pfVar44 + 0x10);
        if (lVar27 == *(longlong *)(pfVar44 + 0xc)) {
          uStack_f2 = 1;
          pdb_142db0920(pfVar44 + 0xc);
        }
        *(float **)(*(longlong *)(pfVar44 + 0xe) + lVar27 * 8) = pfVar55;
        *(longlong *)(pfVar44 + 0x10) = lVar27 + 1;
      }
      if ((uint)puStack_108 == 0) {
        if (pfStack_208 < (float *)0x3e8) {
          if ((uint)piVar36[4] < 5) {
LAB_14296700e:
            uStack_f2 = 1;
            fVar78 = (float)pdb_140e02880(param_8);
            iStack_234 = iStack_234 + 1;
            if (fVar78 < _DAT_142e36f28 / (float)iStack_234) {
              pfStack_368 = (float *)(uStack_440 >> 0x20);
              uStack_238 = (uint)uStack_440;
            }
          }
        }
        else if (((float *)0x3e8 < pfStack_208) && (piVar36[4] != 0)) goto LAB_14296700e;
      }
      pfVar43 = pfStack_138;
      uVar37 = uStack_128;
      pfVar55 = pfStack_218;
      if ((char)puStack_188 == '\0') goto LAB_14296650a;
LAB_142966640:
      if ((int)uVar37 == (int)pfVar43) {
        if (pfVar55 == pfStack_178) goto LAB_14296708c;
        while( true ) {
          pfVar43 = *(float **)
                     (*(longlong *)(lStack_120 + 0x1a0) + 0x10 + (ulonglong)(uint)*pfVar55 * 0x48);
          if (pfVar43 != (float *)0x0) break;
          pfVar55 = pfVar55 + 1;
          if (pfVar55 == pfStack_178) goto LAB_14296708c;
        }
        lVar27 = *(longlong *)(lStack_120 + 0x1a0) + (ulonglong)(uint)*pfVar55 * 0x48;
        lVar41 = *(longlong *)(lVar27 + 0x18);
        if ((*(ulonglong *)(lStack_118 + 0x118) < *(ulonglong *)(lVar27 + 0x40)) &&
           (uVar37 = *(ulonglong *)
                      (*(longlong *)(lVar27 + 0x38) + *(ulonglong *)(lStack_118 + 0x118) * 8),
           uVar37 != 0)) {
          lStack_150 = *(longlong *)(lVar41 + 0x10 + ~uVar37 * 0x30);
        }
        else {
          lStack_150 = 0;
        }
        lVar48 = ~*(ulonglong *)
                   (*(longlong *)(lVar27 + 0x38) + *(longlong *)(lStack_118 + 0x110) * 8) * 0x30;
        lStack_168 = *(longlong *)(lVar41 + 0x10 + lVar48);
        uStack_210 = *(ulonglong *)(lVar41 + 0x28 + lVar48);
        pfVar55 = pfVar55 + 1;
        uStack_228 = *(ulonglong *)(lVar27 + 8);
        uVar37 = 0;
      }
      pfStack_138 = pfVar43;
      uVar28 = uVar37 & 0xffffffff;
      pfVar43 = (float *)(uStack_228 + uVar28 * 8);
      uStack_128 = uVar37;
    } while( true );
  }
  if (pfVar55 != pfStack_178) {
    do {
      pfVar43 = *(float **)
                 (*(longlong *)(lStack_120 + 0x100) + 0x58 + (ulonglong)(uint)*pfVar55 * 0xa0);
      if (pfVar43 != (float *)0x0) {
        lVar35 = *(longlong *)(lStack_120 + 0x100) + (ulonglong)(uint)*pfVar55 * 0xa0;
        uVar37 = (ulonglong)*(uint *)(lVar35 + 0x94);
        lVar27 = *(longlong *)(lStack_120 + 0x1a0);
        lVar41 = *(longlong *)(lVar27 + 0x18 + uVar37 * 0x48);
        lVar48 = *(longlong *)(lVar27 + 0x38 + uVar37 * 0x48);
        if ((*(ulonglong *)(lStack_118 + 0x118) < *(ulonglong *)(lVar27 + 0x40 + uVar37 * 0x48)) &&
           (uVar37 = *(ulonglong *)(lVar48 + *(ulonglong *)(lStack_118 + 0x118) * 8), uVar37 != 0))
        {
          lStack_150 = *(longlong *)(lVar41 + 0x10 + ~uVar37 * 0x30);
        }
        else {
          lStack_150 = 0;
        }
        lVar27 = ~*(ulonglong *)(lVar48 + *(longlong *)(lStack_118 + 0x110) * 8) * 0x30;
        lStack_168 = *(longlong *)(lVar41 + 0x10 + lVar27);
        uStack_210 = *(ulonglong *)(lVar41 + 0x28 + lVar27);
        pfVar55 = pfVar55 + 1;
        pfStack_310 = *(float **)(lVar35 + 0x50);
        uStack_128 = 0;
        uVar28 = 0;
        pfStack_138 = pfVar43;
        goto LAB_142966618;
      }
      pfVar55 = pfVar55 + 1;
    } while (pfVar55 != pfStack_178);
  }
LAB_14296708c:
  if (uStack_238 != 0) {
    puVar45 = (undefined *)(ulonglong)uStack_238;
    lVar27 = 1;
    param_4 = pfStack_368;
    if (((*(ulonglong *)(lStack_120 + 0x10) <= ((ulonglong)puVar45 ^ 0xffffffff)) ||
        (piVar36 = (int *)(((ulonglong)puVar45 ^ 0xffffffff) * 0x18 + *(longlong *)(lStack_120 + 8))
        , piVar36[4] != (int)pfStack_368)) || (*piVar36 == 0)) goto LAB_142967bce;
    uVar37 = *(ulonglong *)(piVar36 + 2);
    if (((uVar37 & 0xffffffff) < *(ulonglong *)(lStack_118 + 0x38)) &&
       ((*(ulonglong *)(*(longlong *)(lStack_118 + 0x28) + (uVar37 >> 6 & 0x3ffffff) * 8) >>
         (uVar37 & 0x3f) & 1) != 0)) {
      if (pfStack_208 != (float *)0x3e8) {
        uVar26 = piVar36[1];
        lVar27 = *(longlong *)(*(longlong *)(lStack_120 + 0x1a0) + 0x18 + (uVar37 >> 0x20) * 0x48);
        lVar48 = ~*(ulonglong *)
                   (*(longlong *)
                     (*(longlong *)(lStack_120 + 0x1a0) + 0x38 + (uVar37 >> 0x20) * 0x48) +
                   *(longlong *)(lStack_118 + 0x110) * 8) * 0x30;
        lVar41 = *(longlong *)(lVar27 + 0x10 + lVar48);
        *(undefined4 *)(*(longlong *)(lVar27 + 0x28 + lVar48) + (ulonglong)~uVar26 * 4) =
             (undefined4)uStack_130;
        piVar36 = (int *)(lVar41 + 0x10 + (ulonglong)~uVar26 * 0x28);
        *piVar36 = *piVar36 + ((pfStack_208 < (float *)0x3e8) - 1 | 1);
      }
      goto LAB_142967178;
    }
    goto LAB_142967b25;
  }
LAB_142967178:
  uStack_2f8._0_4_ = (undefined4)lStack_1f0;
  uStack_2f8._4_4_ = (undefined4)((ulonglong)lStack_1f0 >> 0x20);
  uStack_308._0_4_ = (float)uStack_200;
  uStack_308._4_4_ = uStack_200._4_4_;
  uStack_300._0_4_ = (float)uStack_1f8;
  uStack_300._4_4_ = uStack_1f8._4_4_;
  uStack_f2 = 0;
  pdb_142b4fee0(pfVar44,&uStack_308,param_12);
  fVar57 = _UNK_143314da4;
  fVar56 = _DAT_143314da0;
  fVar79 = _UNK_142f46988;
  fVar77 = _UNK_142f46984;
  fVar2 = _DAT_142f46980;
  fVar74 = _UNK_142f46978;
  fVar72 = _UNK_142f46974;
  fVar62 = _DAT_142f46970;
  auVar68 = _DAT_142e37b00;
  fVar78 = _DAT_142e37ae0;
  uStack_130 = *(ulonglong *)(pfVar44 + 2);
  uVar37 = *(ulonglong *)(pfVar44 + 8);
  pfVar55 = *(float **)(pfVar44 + 4);
  if (*(float **)(pfVar44 + 10) < *(float **)(pfVar44 + 4)) {
    pfVar55 = *(float **)(pfVar44 + 10);
  }
  puStack_110 = (undefined4 *)CONCAT44(puStack_110._4_4_,*(undefined4 *)((longlong)param_7 + 0x14));
  fVar76 = (float)DAT_142e37b00;
  pfVar43 = (float *)0x0;
  fVar58 = _DAT_142f3e570;
  do {
    while( true ) {
      do {
        param_4 = pfVar43;
        uVar26 = uStack_f8;
        param_2 = pfStack_158;
        unaff_R12 = uStack_160;
        unaff_R15 = (undefined *)(ulonglong)uStack_f8;
        if (pfVar55 <= param_4) {
          if (uStack_230 != 0) {
            pub_1406abac0(pbStack_170,uStack_180,4);
          }
          pfVar43 = pfStack_378;
          if (lStack_390 != 0) {
            pub_1406abac0(pbStack_370,lStack_390 << 3,8);
          }
          if (pfStack_398 != (float *)0x0) {
            pub_1406abac0((byte *)pfVar43,(longlong)pfStack_398 << 4,4);
          }
          if (lStack_470 != 0) {
            uVar28 = lStack_470 * 0x18 + 0x27U & 0xfffffffffffffff0;
            uVar40 = lStack_470 + uVar28 + 0x11;
            if (uVar40 != 0) {
              pub_1406abac0((byte *)(lStack_478 - uVar28),uVar40,0x10);
            }
          }
          if (lStack_3c0 != 0) {
            pub_1406abac0((byte *)pfStack_3b8,lStack_3c0 << 4,4);
          }
          if (((char)uVar26 != '\0') && (lStack_360 != 0)) {
            pub_1406abac0(pbStack_358,lStack_360 << 3,8);
          }
          if (lStack_3a8 == 0) {
            return;
          }
          plVar29 = (longlong *)pdb_140e97000();
          if (((char)plVar29[0xd] == '\x01') ||
             (plVar29 = (longlong *)pdb_142e2d6a0(plVar29,0), plVar29 != (longlong *)0x0)) {
            if (*plVar29 == 0) {
              *plVar29 = -1;
              pfStack_140 = (float *)plVar29;
              pdb_140e95370(plVar29 + 1,puStack_3a0);
              goto LAB_14296790b;
            }
            goto LAB_142967a65;
          }
          goto LAB_142967ac4;
        }
        pfVar43 = (float *)((longlong)param_4 + 1);
        lVar27 = (longlong)param_4 * 0x38;
        uVar32 = *(undefined8 *)(uVar37 + 0x10 + lVar27);
        uVar28 = (ulonglong)~(uint)uVar32;
      } while ((((*(ulonglong *)(uStack_160 + 0x10) <= uVar28) ||
                (piVar36 = (int *)(uVar28 * 0x18 + *(longlong *)(uStack_160 + 8)),
                piVar36[4] != (int)((ulonglong)uVar32 >> 0x20))) || (*piVar36 == 0)) ||
              ((uVar28 = *(ulonglong *)(piVar36 + 2),
               *(ulonglong *)(pfStack_158 + 0xe) <= (uVar28 & 0xffffffff) ||
               ((*(ulonglong *)(*(longlong *)(pfStack_158 + 10) + (uVar28 >> 6 & 0x3ffffff) * 8) >>
                 (uVar28 & 0x3f) & 1) == 0))));
      puVar31 = (undefined4 *)(uVar37 + lVar27);
      lVar41 = *(longlong *)(*(longlong *)(uStack_160 + 0x1a0) + 0x18 + (uVar28 >> 0x20) * 0x48);
      lVar48 = *(longlong *)(*(longlong *)(uStack_160 + 0x1a0) + 0x38 + (uVar28 >> 0x20) * 0x48);
      lVar51 = ~*(ulonglong *)(lVar48 + *(longlong *)(pfStack_158 + 0x44) * 8) * 0x30;
      pfStack_140 = *(float **)(lVar41 + 0x28 + lVar51);
      lVar35 = ~*(ulonglong *)(lVar48 + *(longlong *)(pfStack_158 + 0x46) * 8) * 0x30;
      lVar48 = *(longlong *)(lVar41 + 0x10 + lVar35);
      uVar28 = *(ulonglong *)(lVar41 + 0x28 + lVar35);
      uVar40 = (ulonglong)(uint)~piVar36[1];
      pfVar54 = (float *)(uVar40 * 0x30 + *(longlong *)(lVar41 + 0x10 + lVar51));
      lVar41 = lVar48 + uVar40 * 0x50;
      *puVar31 = 0;
      fVar59 = _DAT_142f3e570;
      iVar49 = *(int *)(lVar48 + 0x30 + uVar40 * 0x50);
      pfVar44 = (float *)(uStack_130 + (longlong)param_4 * 0x18);
      if (iVar49 != 2) break;
LAB_142967556:
      puStack_108 = (uint *)(lVar27 + uVar37 + 0x10);
      uStack_300._0_4_ = pfVar44[2];
      uVar32 = *(undefined8 *)pfVar44;
      uStack_308._0_4_ = (float)uVar32;
      uStack_308._4_4_ = (float)((ulonglong)uVar32 >> 0x20);
      pfStack_140[uVar40] = puStack_110._0_4_;
      pfVar54[6] = (float)uStack_300;
      *(undefined8 *)(pfVar54 + 4) = uVar32;
      fVar59 = (float)*(undefined8 *)(pfVar44 + 3);
      fVar60 = (float)((ulonglong)*(undefined8 *)(pfVar44 + 3) >> 0x20);
      fStack_380 = pfVar44[5];
      fVar66 = _DAT_142e36f28 / SQRT(fStack_380 * fStack_380 + fVar60 * fVar60 + fVar59 * fVar59);
      uStack_128 = uVar28;
      if ((int)fVar66 - 1U < 0x7fffff ||
          (int)ABS(fVar66) - 0x800000U < 0x7f000000 && -1 < (int)fVar66) {
        fVar60 = fVar60 * fVar66;
        fStack_380 = fStack_380 * fVar66;
        uStack_388 = CONCAT44(fVar60,fVar59 * fVar66);
        if (fVar78 < fVar60) goto LAB_1429676fa;
        *(float *)(uVar28 + uVar40 * 4) = puStack_110._0_4_;
        uVar63 = pub_142e32a70(*(undefined4 *)(lVar41 + 0x44),_DAT_142e36f28);
        *(undefined4 *)(lVar41 + 0x44) = uVar63;
        dVar20 = (double)pub_142e32a60(SUB84((double)~*puStack_108 * _DAT_143605440,0),
                                       (int)_DAT_143089150);
        pub_142e32b20(SUB84((dVar20 + _DAT_142e33008) *
                            *(double *)(lStack_220 + 0x10) * _DAT_1433a2d30,0));
        fVar59 = puStack_110._0_4_;
        *(float *)(uStack_128 + uVar40 * 4) = puStack_110._0_4_;
        uStack_f2 = 0;
        pdb_140de9710(lVar41 + 0x44);
      }
      else {
        fStack_380 = 0.0;
        uStack_388 = 0;
        fVar60 = 0.0;
LAB_1429676fa:
        fVar60 = fVar60 * _DAT_142e36f50 + _DAT_142e36f50;
        fVar59 = *(float *)(lStack_220 + 0x28);
        *(float *)(uVar28 + uVar40 * 4) = puStack_110._0_4_;
        *(float *)(lVar41 + 0x44) = fVar60 * fVar59 * fVar58 + *(float *)(lVar41 + 0x44);
        fVar59 = puStack_110._0_4_;
      }
      uStack_f2 = 0;
      pdb_14052dc80(&uStack_308,&uStack_388);
      pfStack_140[uVar40] = fVar59;
      *pfVar54 = (float)uStack_308;
      pfVar54[1] = uStack_308._4_4_;
      pfVar54[2] = (float)uStack_300;
      pfVar54[3] = uStack_300._4_4_;
      uStack_f2 = 0;
      uVar32 = pdb_140fc4ba0(&lStack_458,puStack_108);
      uStack_f2 = 0;
      pdb_142275a80(&uStack_308,&lStack_478,uVar32,puStack_108);
      if ((float)uStack_308 != 0.0) {
        uStack_1e0 = (float *)CONCAT44(uStack_1e0._4_4_,(undefined4)uStack_2f8);
        pfStack_1e8 = (float *)CONCAT44(uStack_300._4_4_,(float)uStack_300);
        *(float *)(uStack_128 + uVar40 * 4) = fVar59;
        *(undefined4 *)(lVar41 + 0x30) = 4;
        *(float **)(lVar41 + 0x34) = pfStack_1e8;
        *(undefined4 *)(lVar41 + 0x3c) = (undefined4)uStack_2f8;
        *(undefined4 *)(lVar41 + 0x40) = uStack_2f8._4_4_;
      }
    }
    fVar60 = auVar68._4_4_;
    fVar66 = auVar68._8_4_;
    if (iVar49 == 4) {
      uVar32 = *(undefined8 *)(lVar41 + 0x34);
      fVar60 = (float)((ulonglong)uVar32 >> 0x20) - pfVar44[1];
      if (_DAT_142f69450 <= fVar60) {
        fVar66 = *(float *)(lVar41 + 0x3c);
        auVar69._0_4_ = fVar66 - pfVar44[2];
        auVar69._4_4_ = (float)uVar32 - *pfVar44;
        auVar69._8_8_ = 0;
        fVar75 = SQRT(auVar69._4_4_ * auVar69._4_4_ + fVar60 * fVar60 +
                      auVar69._0_4_ * auVar69._0_4_);
        if (fVar75 <= _DAT_142f57bc8) {
          auVar22._4_4_ = fVar75;
          auVar22._0_4_ = fVar75;
          auVar22._8_8_ = 0;
          auVar82 = divps(auVar69,auVar22);
          fVar80 = pfVar44[3];
          fVar64 = (float)*(undefined8 *)(pfVar44 + 4);
          fVar65 = (float)((ulonglong)*(undefined8 *)(pfVar44 + 4) >> 0x20);
          auVar83._4_12_ = DAT_142e378e0._4_12_;
          auVar83._0_4_ = fVar60;
          auVar24._4_4_ = SQRT(fVar65 * fVar65 + fVar80 * fVar80 + fVar64 * fVar64);
          auVar24._0_4_ = fVar75;
          auVar24._8_8_ = 0;
          auVar84 = divps(auVar83,auVar24);
          fVar60 = auVar84._4_4_;
          fVar58 = _DAT_142f3e570;
          if (_DAT_142e3783c <=
              fVar80 * fVar60 * auVar82._4_4_ + fVar64 * fVar60 * auVar84._0_4_ +
              fVar65 * fVar60 * auVar82._0_4_) {
            *puVar31 = 1;
            *(undefined8 *)(puVar31 + 1) = uVar32;
            puVar31[3] = fVar66;
            fVar58 = fVar59;
            goto LAB_142967556;
          }
        }
      }
      *(float *)(uVar28 + uVar40 * 4) = puStack_110._0_4_;
      *(undefined8 *)(lVar41 + 0x30) = 2;
      goto LAB_142967556;
    }
    uVar32 = *(undefined8 *)(pfVar54 + 4);
    pfVar44[2] = pfVar54[6];
    *(undefined8 *)pfVar44 = uVar32;
    fVar59 = *pfVar54;
    fVar75 = pfVar54[1];
    fVar80 = pfVar54[2];
    fVar64 = pfVar54[3];
    fVar70 = fVar80 * fVar80;
    fVar71 = fVar64 * fVar64;
    fVar73 = fVar75 * fVar75 + fVar59 * fVar59;
    fVar65 = fVar80 * fVar66 + fVar75 * fVar60 + fVar59 * fVar76;
    fVar65 = fVar65 + fVar65;
    fVar64 = fVar64 + fVar64;
    fVar66 = (fVar64 * (fVar59 * fVar74 - fVar75 * fVar79) +
             fVar65 * fVar80 + (fVar71 - (fVar73 + fVar70)) * fVar66) * _DAT_142e37878;
    *(ulonglong *)(pfVar44 + 3) =
         CONCAT44((fVar64 * (fVar80 * fVar72 - fVar59 * fVar77) +
                  fVar65 * fVar75 + (fVar71 - (fVar73 + fVar70)) * fVar60) * fVar57,
                  (fVar64 * (fVar75 * fVar62 - fVar80 * fVar2) +
                  fVar65 * fVar59 + (fVar71 - (fVar73 + fVar70)) * fVar76) * fVar56);
    pfVar44[5] = fVar66;
  } while( true );
}

