// VA 0x1408366c0, PDB extent 17289 bytes
// system_wall_constructor::construct_playermade_stairs::brackets::construct_playermade_stair_brackets
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/brackets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_playermade_stairs::brackets::construct_playermade_stair_brackets
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/brackets.rs
   Extent: 17289 */

void pdb_1408366c0(float *param_1,ulonglong param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  float *pfVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float *pfVar11;
  uint uVar12;
  undefined4 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  float *pfVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  byte *pbVar23;
  int *piVar24;
  longlong lVar25;
  float *pfVar26;
  float *pfVar27;
  int iVar28;
  int iVar29;
  longlong *plVar30;
  char *pcVar31;
  undefined *puVar32;
  longlong lVar33;
  float *pfVar34;
  ushort uVar35;
  undefined *puVar36;
  longlong lVar37;
  float *pfVar38;
  bool bVar39;
  bool bVar40;
  uint uVar41;
  byte bVar42;
  byte bVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  float extraout_XMM0_Da;
  float fVar46;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  undefined1 auVar62 [12];
  float fVar61;
  float fVar71;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 auStack_598 [16];
  float *pfStack_588;
  float *pfStack_580;
  longlong lStack_578;
  byte *pbStack_570;
  longlong lStack_568;
  longlong lStack_560;
  longlong lStack_558;
  longlong lStack_550;
  longlong lStack_548;
  undefined4 uStack_540;
  float fStack_53c;
  undefined8 uStack_538;
  undefined8 uStack_530;
  float fStack_528;
  undefined8 uStack_520;
  float fStack_518;
  longlong *plStack_510;
  longlong *plStack_508;
  longlong lStack_500;
  longlong lStack_4f8;
  undefined8 uStack_4f0;
  longlong *plStack_4e8;
  byte *pbStack_4e0;
  float *pfStack_4d8;
  undefined4 *puStack_4d0;
  longlong lStack_4c8;
  longlong lStack_4c0;
  longlong lStack_4b8;
  longlong lStack_4b0;
  byte *pbStack_4a8;
  float *pfStack_4a0;
  undefined1 auStack_498 [8];
  float fStack_490;
  float fStack_48c;
  undefined8 uStack_488;
  float fStack_480;
  float fStack_47c;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float fStack_458;
  longlong lStack_450;
  float *pfStack_448;
  float *pfStack_440;
  longlong lStack_438;
  byte *pbStack_430;
  longlong lStack_428;
  longlong lStack_420;
  longlong *plStack_418;
  longlong lStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  longlong lStack_3f8;
  undefined8 uStack_3f0;
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  float *pfStack_3d0;
  float fStack_3c8;
  undefined4 uStack_3c4;
  undefined8 uStack_3c0;
  float fStack_3b8;
  undefined8 uStack_3b0;
  float fStack_3a8;
  longlong lStack_3a0;
  longlong lStack_398;
  longlong lStack_390;
  longlong lStack_388;
  longlong lStack_380;
  float *pfStack_378;
  longlong lStack_370;
  byte *pbStack_368;
  longlong *plStack_360;
  undefined8 uStack_358;
  float *pfStack_350;
  float *pfStack_348;
  float *pfStack_340;
  byte *pbStack_338;
  float **ppfStack_330;
  float *pfStack_328;
  float *pfStack_320;
  byte *pbStack_318;
  byte *pbStack_310;
  longlong lStack_308;
  float *pfStack_300;
  byte *pbStack_2f8;
  byte *pbStack_2f0;
  float *pfStack_2e8;
  float *pfStack_2e0;
  float *pfStack_2d8;
  float *pfStack_2d0;
  float *pfStack_2c8;
  float *pfStack_2c0;
  longlong *plStack_2b8;
  float *pfStack_2b0;
  float *pfStack_2a8;
  undefined1 auStack_2a0 [24];
  byte *pbStack_288;
  longlong *plStack_280;
  undefined1 auStack_278 [8];
  float fStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  byte *pbStack_250;
  longlong lStack_248;
  float *pfStack_240;
  byte *pbStack_238;
  longlong lStack_230;
  longlong lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  int iStack_210;
  float fStack_200;
  float fStack_1fc;
  byte *pbStack_1f8;
  longlong lStack_1f0;
  byte *pbStack_1e8;
  float *pfStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  undefined1 auStack_1c8 [24];
  uint uStack_1b0;
  uint uStack_1ac;
  float *pfStack_1a8;
  float *pfStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong lStack_158;
  undefined8 uStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  float *pfStack_138;
  longlong *plStack_130;
  undefined1 auStack_128 [16];
  ulonglong uStack_110;
  float *pfStack_108;
  float *pfStack_100;
  char cStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  cStack_f1 = pdb_140e94b40();
  if (cStack_f1 != '\0') {
    lVar37 = 99;
    lVar14 = pdb_14083aa50(99);
    pfVar38 = (float *)&UNK_14300a948;
    if (lVar14 == 1) {
      if (99 < param_2) {
        pdb_142dc8070(&UNK_14300a948,99,0,param_2,&UNK_14300aa28);
LAB_140839b2a:
        uVar47 = pdb_142dc8070(&UNK_14300a948,99);
LAB_140839b4e:
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar47,pfVar38,&UNK_143306608);
      }
      uVar15 = pdb_14083aa50(param_2);
      if ((uVar15 & 1) != 0) {
        if (99 < param_2 + 2) goto LAB_140839b2a;
        lVar37 = 0x61 - param_2;
        pfVar38 = (float *)(&UNK_14300a94a + param_2);
      }
    }
    puVar32 = &UNK_14300a703;
    puVar36 = &UNK_14300a6b8;
    do {
      bVar43 = puVar32[-1];
      uVar12 = (uint)(char)bVar43;
      if ((char)bVar43 < '\0') {
        bVar42 = puVar32[-2];
        if ((char)bVar42 < -0x40) {
          bVar2 = puVar32[-3];
          if ((char)bVar2 < -0x40) {
            pbVar23 = puVar32 + -4;
            puVar32 = puVar32 + -4;
            uVar12 = bVar2 & 0x3f | (*pbVar23 & 7) << 6;
          }
          else {
            puVar32 = puVar32 + -3;
            uVar12 = bVar2 & 0xf;
          }
          uVar12 = bVar42 & 0x3f | uVar12 << 6;
        }
        else {
          puVar32 = puVar32 + -2;
          uVar12 = bVar42 & 0x1f;
        }
        uVar12 = (uint)(bVar43 & 0x3f) | uVar12 << 6;
        if (uVar12 != 0x5c) goto LAB_140836834;
LAB_140836846:
        puVar36 = puVar32 + -0x14300a6b7;
        if ((undefined *)0x4b < puVar36) {
          pdb_142dc8070(&UNK_14300a6b8,0x4b,puVar36,0x4b,&UNK_14300aa08);
LAB_140839ac7:
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(param_1);
        }
        lVar14 = 0x4b - (longlong)puVar36;
        puVar36 = puVar32 + 1;
        goto LAB_140836869;
      }
      puVar32 = puVar32 + -1;
      if (uVar12 == 0x5c) goto LAB_140836846;
LAB_140836834:
      if (uVar12 == 0x2f) goto LAB_140836846;
    } while (puVar32 != &UNK_14300a6b8);
    lVar14 = 0x4b;
LAB_140836869:
    plVar16 = (longlong *)pdb_140e97000();
    if ((char)plVar16[0xd] != '\x01') {
      plVar16 = (longlong *)pdb_142dd9610(plVar16,0);
      if (plVar16 == (longlong *)0x0) goto LAB_1408397f3;
    }
    if (*plVar16 != 0) goto LAB_1408397ac;
    *plVar16 = -1;
    auStack_128._0_8_ = plVar16;
    uStack_3f0 = pdb_140e94f10(plVar16 + 1,pfVar38,lVar37,puVar36,lVar14,1,0);
    *(longlong *)auStack_128._0_8_ = *(longlong *)auStack_128._0_8_ + 1;
  }
  uVar47 = *param_4;
  puVar17 = (undefined8 *)pdb_1413e4400(uVar47,&UNK_1433056c0);
  if ((puVar17 == (undefined8 *)0x0) ||
     (lStack_1d8 = (**(code **)(puVar17[1] + 0x18))(*puVar17), lStack_1d8 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14300a708);
  }
  puVar17 = (undefined8 *)pdb_1413e4400(uVar47,&UNK_1433056b0);
  if ((puVar17 == (undefined8 *)0x0) ||
     (lStack_1d0 = (**(code **)(puVar17[1] + 0x18))(*puVar17), lStack_1d0 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14300a720);
  }
  puVar17 = (undefined8 *)pdb_1413e4400(uVar47,&UNK_1433056a8);
  if (puVar17 != (undefined8 *)0x0) {
    lStack_3f8 = (**(code **)(puVar17[1] + 0x18))(*puVar17);
    if (lStack_3f8 != 0) {
      **(float **)(param_1 + 4) = param_1[7];
      lStack_500 = *(longlong *)param_1;
      plStack_510 = *(longlong **)(lStack_500 + 8);
      lStack_4f8 = *(longlong *)(lStack_500 + 0x10);
      *(undefined8 *)(lStack_500 + 0x10) = 0;
      plStack_508 = plStack_510 + lStack_4f8 * 0x18;
      uStack_4f0 = 0;
      plStack_418 = (longlong *)*param_6;
      lStack_1f0 = *param_5;
      lStack_410 = lStack_1f0 + 0x1b8;
      plStack_130 = (longlong *)*param_3;
      puStack_4d0 = (undefined4 *)param_3[2];
      plStack_280 = plStack_130 + 4;
      uStack_408 = *param_8;
      uStack_400 = *param_7;
      uStack_3c4 = *(undefined4 *)((longlong)param_3 + 0x1c);
      plStack_4e8 = plStack_418 + 4;
      pbStack_4e0 = (byte *)(lStack_3f8 + 0x78);
      pfStack_4d8 = (float *)(lStack_3f8 + 0x58);
      lStack_4c8 = lStack_1f0 + 0x98;
      lStack_4c0 = lStack_1f0 + 0x60;
      lStack_4b8 = lStack_1d8 + 0x78;
      lStack_4b0 = lStack_1d8 + 0x58;
      pbStack_4a8 = (byte *)(lStack_1d0 + 0x78);
      pfStack_4a0 = (float *)(lStack_1d0 + 0x58);
      fVar61 = _DAT_142e36f28;
LAB_140836ac4:
      plVar16 = plStack_510;
      if (plStack_510 != plStack_508) {
        plVar16 = plStack_510 + 0x18;
        lVar14 = *plStack_510;
        lStack_548 = plStack_510[9];
        lStack_558 = plStack_510[7];
        lStack_550 = plStack_510[8];
        lStack_568 = plStack_510[5];
        lStack_560 = plStack_510[6];
        lStack_578 = plStack_510[3];
        pbStack_570 = (byte *)plStack_510[4];
        pfStack_588 = (float *)plStack_510[1];
        pfStack_580 = (float *)plStack_510[2];
        if (!SBORROW8(0,lVar14)) {
          uVar12 = *(uint *)(plStack_510 + 0x16);
          uVar15 = (ulonglong)uVar12;
          uVar4 = *(uint *)((longlong)plStack_510 + 0xb4);
          pfVar38 = (float *)plStack_510[0x16];
          bVar43 = *(byte *)((longlong)plStack_510 + 0xbe);
          fStack_1fc = *(float *)(plStack_510 + 0x17);
          lStack_398 = plStack_510[0xd];
          pbStack_140 = (byte *)plStack_510[0xe];
          pfStack_108 = (float *)plStack_510[0xf];
          lStack_390 = plStack_510[7];
          pbStack_148 = (byte *)plStack_510[8];
          pfStack_100 = (float *)plStack_510[9];
          lStack_388 = plStack_510[10];
          pbStack_288 = (byte *)plStack_510[0xb];
          auStack_128._0_8_ = plStack_510[0xc];
          uStack_110 = plStack_510[0x13];
          pbStack_1e8 = (byte *)plStack_510[0x14];
          pfVar5 = (float *)plStack_510[0x15];
          lStack_380 = plStack_510[0x10];
          pbStack_1f8 = (byte *)plStack_510[0x11];
          pfStack_138 = (float *)plStack_510[0x12];
          plStack_510 = plVar16;
          lStack_450 = lVar14;
          pfStack_448 = pfStack_588;
          pfStack_440 = pfStack_580;
          lStack_438 = lStack_578;
          pbStack_430 = pbStack_570;
          lStack_428 = lStack_568;
          lStack_420 = lStack_560;
          lStack_3a0 = lVar14;
          uStack_1b0 = uVar12;
          uStack_1ac = uVar4;
          if (plStack_418[3] != 0) {
            uVar18 = pdb_1400af680(plStack_4e8,&uStack_1b0);
            bVar42 = (byte)(uVar18 >> 0x39);
            auVar48 = ZEXT216(CONCAT11(bVar42,bVar42));
            auVar48 = pshuflw(auVar48,auVar48,0);
            lVar14 = 0;
            while( true ) {
              uVar18 = uVar18 & plStack_418[1];
              auVar65 = *(undefined1 (*) [16])(*plStack_418 + uVar18);
              auVar63[0] = -(auVar65[0] == auVar48[0]);
              auVar63[1] = -(auVar65[1] == auVar48[1]);
              auVar63[2] = -(auVar65[2] == auVar48[2]);
              auVar63[3] = -(auVar65[3] == auVar48[3]);
              auVar63[4] = -(auVar65[4] == auVar48[4]);
              auVar63[5] = -(auVar65[5] == auVar48[5]);
              auVar63[6] = -(auVar65[6] == auVar48[6]);
              auVar63[7] = -(auVar65[7] == auVar48[7]);
              auVar63[8] = -(auVar65[8] == auVar48[0]);
              auVar63[9] = -(auVar65[9] == auVar48[1]);
              auVar63[10] = -(auVar65[10] == auVar48[2]);
              auVar63[0xb] = -(auVar65[0xb] == auVar48[3]);
              auVar63[0xc] = -(auVar65[0xc] == auVar48[4]);
              auVar63[0xd] = -(auVar65[0xd] == auVar48[5]);
              auVar63[0xe] = -(auVar65[0xe] == auVar48[6]);
              auVar63[0xf] = -(auVar65[0xf] == auVar48[7]);
              uVar35 = (ushort)(SUB161(auVar63 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar63[0xf] >> 7) << 0xf;
              uVar41 = (uint)uVar35;
              while (uVar35 != 0) {
                uVar7 = 0;
                for (uVar8 = uVar41; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                  uVar7 = uVar7 + 1;
                }
                lVar37 = *plStack_418 + (uVar7 + uVar18 & plStack_418[1]) * -8;
                if ((uVar12 == *(uint *)(lVar37 + -8)) && (uVar4 == *(uint *)(lVar37 + -4))) {
                  pfVar38 = (float *)pdb_140c017b0(uVar15,uVar4);
                  lVar14 = lStack_1f0;
                  pfStack_328 = pfVar38;
                  if (*(longlong *)(lStack_1f0 + 0x1b0) == 0) goto LAB_140836ed0;
                  uVar20 = pdb_1400af0a0(lStack_410,&pfStack_328);
                  lVar37 = *(longlong *)(lVar14 + 0x198);
                  uVar18 = *(ulonglong *)(lVar14 + 0x1a0);
                  bVar42 = (byte)(uVar20 >> 0x39);
                  auVar48 = ZEXT216(CONCAT11(bVar42,bVar42));
                  auVar48 = pshuflw(auVar48,auVar48,0);
                  lVar14 = 0;
                  goto LAB_140836e47;
                }
                uVar35 = (ushort)(uVar41 - 1) & (ushort)uVar41;
                uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar35);
              }
              auVar51[0] = -(auVar65[0] == -1);
              auVar51[1] = -(auVar65[1] == -1);
              auVar51[2] = -(auVar65[2] == -1);
              auVar51[3] = -(auVar65[3] == -1);
              auVar51[4] = -(auVar65[4] == -1);
              auVar51[5] = -(auVar65[5] == -1);
              auVar51[6] = -(auVar65[6] == -1);
              auVar51[7] = -(auVar65[7] == -1);
              auVar51[8] = -(auVar65[8] == -1);
              auVar51[9] = -(auVar65[9] == -1);
              auVar51[10] = -(auVar65[10] == -1);
              auVar51[0xb] = -(auVar65[0xb] == -1);
              auVar51[0xc] = -(auVar65[0xc] == -1);
              auVar51[0xd] = -(auVar65[0xd] == -1);
              auVar51[0xe] = -(auVar65[0xe] == -1);
              auVar51[0xf] = -(auVar65[0xf] == -1);
              if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar51 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar51 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar51 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar51 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar51 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar51 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar51 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar51 >> 0x4f,0) & 1) != 0) || (SUB161(auVar51 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar51 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar51 >> 0x67,0) & 1) != 0) || (SUB161(auVar51 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar51 >> 0x77,0) & 1) != 0) || auVar51[0xf] < '\0') break;
              uVar18 = uVar18 + lVar14 + 0x10;
              lVar14 = lVar14 + 0x10;
            }
          }
          pfVar19 = (float *)pdb_140c017b0(uVar15);
          lVar14 = lStack_1f0;
          if (*(longlong *)(lStack_1f0 + 0x1b0) != 0) {
            pfStack_328 = pfVar19;
            uVar20 = pdb_1400af0a0(lStack_410,&pfStack_328);
            lVar37 = *(longlong *)(lVar14 + 0x198);
            uVar18 = *(ulonglong *)(lVar14 + 0x1a0);
            bVar42 = (byte)(uVar20 >> 0x39);
            auVar48 = ZEXT216(CONCAT11(bVar42,bVar42));
            auVar48 = pshuflw(auVar48,auVar48,0);
            lVar14 = 0;
            while( true ) {
              uVar20 = uVar20 & uVar18;
              pcVar31 = (char *)(lVar37 + uVar20);
              auVar64[0] = -(*pcVar31 == auVar48[0]);
              auVar64[1] = -(pcVar31[1] == auVar48[1]);
              auVar64[2] = -(pcVar31[2] == auVar48[2]);
              auVar64[3] = -(pcVar31[3] == auVar48[3]);
              auVar64[4] = -(pcVar31[4] == auVar48[4]);
              auVar64[5] = -(pcVar31[5] == auVar48[5]);
              auVar64[6] = -(pcVar31[6] == auVar48[6]);
              auVar64[7] = -(pcVar31[7] == auVar48[7]);
              auVar64[8] = -(pcVar31[8] == auVar48[0]);
              auVar64[9] = -(pcVar31[9] == auVar48[1]);
              auVar64[10] = -(pcVar31[10] == auVar48[2]);
              auVar64[0xb] = -(pcVar31[0xb] == auVar48[3]);
              auVar64[0xc] = -(pcVar31[0xc] == auVar48[4]);
              auVar64[0xd] = -(pcVar31[0xd] == auVar48[5]);
              auVar64[0xe] = -(pcVar31[0xe] == auVar48[6]);
              auVar64[0xf] = -(pcVar31[0xf] == auVar48[7]);
              uVar35 = (ushort)(SUB161(auVar64 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar64[0xf] >> 7) << 0xf;
              uVar41 = (uint)uVar35;
              while (uVar35 != 0) {
                uVar7 = 0;
                for (uVar8 = uVar41; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                  uVar7 = uVar7 + 1;
                }
                lVar33 = lVar37 + (uVar7 + uVar20 & uVar18) * -0x20;
                if (pfVar19 == *(float **)(lVar33 + -0x20)) {
                  uVar18 = *(ulonglong *)(lVar33 + -8);
                  if (uVar18 < 2) {
                    lVar33 = lVar33 + -0x18;
                  }
                  else {
                    uVar18 = *(ulonglong *)(lVar33 + -0x10);
                    lVar33 = *(longlong *)(lVar33 + -0x18);
                  }
                  lVar14 = 0;
                  goto LAB_140836f20;
                }
                uVar35 = (ushort)(uVar41 - 1) & (ushort)uVar41;
                uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar35);
              }
              auVar52[0] = -(*pcVar31 == -1);
              auVar52[1] = -(pcVar31[1] == -1);
              auVar52[2] = -(pcVar31[2] == -1);
              auVar52[3] = -(pcVar31[3] == -1);
              auVar52[4] = -(pcVar31[4] == -1);
              auVar52[5] = -(pcVar31[5] == -1);
              auVar52[6] = -(pcVar31[6] == -1);
              auVar52[7] = -(pcVar31[7] == -1);
              auVar52[8] = -(pcVar31[8] == -1);
              auVar52[9] = -(pcVar31[9] == -1);
              auVar52[10] = -(pcVar31[10] == -1);
              auVar52[0xb] = -(pcVar31[0xb] == -1);
              auVar52[0xc] = -(pcVar31[0xc] == -1);
              auVar52[0xd] = -(pcVar31[0xd] == -1);
              auVar52[0xe] = -(pcVar31[0xe] == -1);
              auVar52[0xf] = -(pcVar31[0xf] == -1);
              if ((((((((((((((((SUB161(auVar52 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar52 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar52 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar52 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar52 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar52 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar52 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar52 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar52 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar52 >> 0x4f,0) & 1) != 0) || (SUB161(auVar52 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar52 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar52 >> 0x67,0) & 1) != 0) || (SUB161(auVar52 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar52 >> 0x77,0) & 1) != 0) || auVar52[0xf] < '\0') break;
              uVar20 = uVar20 + lVar14 + 0x10;
              lVar14 = lVar14 + 0x10;
            }
          }
          goto LAB_140836f48;
        }
      }
      plStack_510 = plVar16;
      pdb_1413fe5e0(&plStack_510);
      if (cStack_f1 != '\0') {
        plVar16 = (longlong *)pdb_140e97000();
        if ((char)plVar16[0xd] != '\x01') {
          plVar16 = (longlong *)pdb_142dd9610(plVar16,0);
          if (plVar16 == (longlong *)0x0) {
LAB_1408397f3:
            pdb_142dc7890(&UNK_143307940);
LAB_140839800:
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_14300a768);
          }
        }
        if (*plVar16 != 0) {
LAB_1408397ac:
          pdb_142dc8090(&UNK_1433079b0);
LAB_1408397b9:
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143305b88);
        }
        *plVar16 = -1;
        auStack_128._0_8_ = plVar16;
        pdb_140e95370(plVar16 + 1,uStack_3f0);
        *(longlong *)auStack_128._0_8_ = *(longlong *)auStack_128._0_8_ + 1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14300a738);
LAB_140836e47:
  uVar20 = uVar20 & uVar18;
  pcVar31 = (char *)(lVar37 + uVar20);
  auVar65[0] = -(*pcVar31 == auVar48[0]);
  auVar65[1] = -(pcVar31[1] == auVar48[1]);
  auVar65[2] = -(pcVar31[2] == auVar48[2]);
  auVar65[3] = -(pcVar31[3] == auVar48[3]);
  auVar65[4] = -(pcVar31[4] == auVar48[4]);
  auVar65[5] = -(pcVar31[5] == auVar48[5]);
  auVar65[6] = -(pcVar31[6] == auVar48[6]);
  auVar65[7] = -(pcVar31[7] == auVar48[7]);
  auVar65[8] = -(pcVar31[8] == auVar48[0]);
  auVar65[9] = -(pcVar31[9] == auVar48[1]);
  auVar65[10] = -(pcVar31[10] == auVar48[2]);
  auVar65[0xb] = -(pcVar31[0xb] == auVar48[3]);
  auVar65[0xc] = -(pcVar31[0xc] == auVar48[4]);
  auVar65[0xd] = -(pcVar31[0xd] == auVar48[5]);
  auVar65[0xe] = -(pcVar31[0xe] == auVar48[6]);
  auVar65[0xf] = -(pcVar31[0xf] == auVar48[7]);
  uVar35 = (ushort)(SUB161(auVar65 >> 7,0) & 1) | (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe | (ushort)(auVar65[0xf] >> 7) << 0xf;
  uVar41 = (uint)uVar35;
  while (uVar35 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar41; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    lVar33 = lVar37 + (uVar7 + uVar20 & uVar18) * -0x20;
    if (pfVar38 == *(float **)(lVar33 + -0x20)) {
      uVar18 = *(ulonglong *)(lVar33 + -8);
      if (uVar18 < 2) {
        lVar33 = lVar33 + -0x18;
      }
      else {
        uVar18 = *(ulonglong *)(lVar33 + -0x10);
        lVar33 = *(longlong *)(lVar33 + -0x18);
      }
      lVar14 = 0;
      goto LAB_140837230;
    }
    uVar35 = (ushort)(uVar41 - 1) & (ushort)uVar41;
    uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar35);
  }
  auVar53[0] = -(*pcVar31 == -1);
  auVar53[1] = -(pcVar31[1] == -1);
  auVar53[2] = -(pcVar31[2] == -1);
  auVar53[3] = -(pcVar31[3] == -1);
  auVar53[4] = -(pcVar31[4] == -1);
  auVar53[5] = -(pcVar31[5] == -1);
  auVar53[6] = -(pcVar31[6] == -1);
  auVar53[7] = -(pcVar31[7] == -1);
  auVar53[8] = -(pcVar31[8] == -1);
  auVar53[9] = -(pcVar31[9] == -1);
  auVar53[10] = -(pcVar31[10] == -1);
  auVar53[0xb] = -(pcVar31[0xb] == -1);
  auVar53[0xc] = -(pcVar31[0xc] == -1);
  auVar53[0xd] = -(pcVar31[0xd] == -1);
  auVar53[0xe] = -(pcVar31[0xe] == -1);
  auVar53[0xf] = -(pcVar31[0xf] == -1);
  if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 || (SUB161(auVar53 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar53 >> 0x17,0) & 1) != 0) || (SUB161(auVar53 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar53 >> 0x27,0) & 1) != 0) || (SUB161(auVar53 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar53 >> 0x37,0) & 1) != 0) || (SUB161(auVar53 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar53 >> 0x47,0) & 1) != 0) || (SUB161(auVar53 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar53 >> 0x57,0) & 1) != 0) || (SUB161(auVar53 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar53 >> 0x67,0) & 1) != 0) || (SUB161(auVar53 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar53 >> 0x77,0) & 1) != 0) || auVar53[0xf] < '\0') goto LAB_140836ed0;
  uVar20 = uVar20 + lVar14 + 0x10;
  lVar14 = lVar14 + 0x10;
  goto LAB_140836e47;
LAB_140836ed0:
  fStack_3e8 = (float)CONCAT31(fStack_3e8._1_3_,bVar43);
  lVar14 = plStack_130[3];
  goto joined_r0x00014083725e;
LAB_1408374e7:
  uVar18 = uVar18 & plStack_130[1];
  auVar65 = *(undefined1 (*) [16])(lVar14 + uVar18);
  auVar67[0] = -(auVar65[0] == auVar48[0]);
  auVar67[1] = -(auVar65[1] == auVar48[1]);
  auVar67[2] = -(auVar65[2] == auVar48[2]);
  auVar67[3] = -(auVar65[3] == auVar48[3]);
  auVar67[4] = -(auVar65[4] == auVar48[4]);
  auVar67[5] = -(auVar65[5] == auVar48[5]);
  auVar67[6] = -(auVar65[6] == auVar48[6]);
  auVar67[7] = -(auVar65[7] == auVar48[7]);
  auVar67[8] = -(auVar65[8] == auVar48[0]);
  auVar67[9] = -(auVar65[9] == auVar48[1]);
  auVar67[10] = -(auVar65[10] == auVar48[2]);
  auVar67[0xb] = -(auVar65[0xb] == auVar48[3]);
  auVar67[0xc] = -(auVar65[0xc] == auVar48[4]);
  auVar67[0xd] = -(auVar65[0xd] == auVar48[5]);
  auVar67[0xe] = -(auVar65[0xe] == auVar48[6]);
  auVar67[0xf] = -(auVar65[0xf] == auVar48[7]);
  uVar35 = (ushort)(SUB161(auVar67 >> 7,0) & 1) | (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe | (ushort)(auVar67[0xf] >> 7) << 0xf;
  uVar41 = (uint)uVar35;
  while (uVar35 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar41; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    lVar33 = (uVar7 + uVar18 & plStack_130[1]) * -0x140;
    if ((uVar12 == *(uint *)(lVar14 + -0x140 + lVar33)) &&
       (uVar4 == *(uint *)(lVar14 + -0x13c + lVar33))) {
      uVar13 = pdb_14094c330(fVar60);
      lVar14 = lVar14 + lVar33;
      *(undefined4 *)(lVar14 + -0xc0) = 1;
      *(undefined4 *)(lVar14 + -0xbc) = uVar13;
      fVar61 = _DAT_142e36f28;
      if (pfStack_1e0 != (float *)0x0) {
        uStack_488 = uVar4 + uVar15;
        pfVar5 = pfVar38 + (longlong)pfStack_1e0 * 3;
        pfStack_1a8 = (float *)((longlong)pfStack_1e0 + -1);
        pfVar19 = (float *)0x0;
        do {
          if (pfVar19 == (float *)auStack_128._0_8_) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(auStack_128._0_8_,auStack_128._0_8_,&UNK_14300a640);
          }
          auVar48 = ZEXT416((uint)*(float *)(pbStack_288 + (longlong)pfVar19 * 4));
          if (_DAT_142e37ad4 < *(float *)(pbStack_288 + (longlong)pfVar19 * 4)) {
            auStack_1c8._8_8_ = 0;
            auStack_1c8._0_8_ = *(ulonglong *)pfVar38;
            pfStack_138 = (float *)CONCAT44(pfStack_138._4_4_,pfVar38[2]);
            _auStack_498 = auVar48;
            if ((pfStack_1e0 < (float *)0x3) ||
               ((pfVar19 != (float *)0x0 && (pfVar19 != pfStack_1a8)))) {
              uStack_358 = (byte *)((longlong)pfVar19 + uStack_488);
              if (pfStack_100 <= pfVar19) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(pfVar19,pfStack_100,&UNK_14300a658);
              }
              uVar13 = *(undefined4 *)(pbStack_148 + (longlong)pfVar19 * 8);
              uVar12 = *(uint *)(pbStack_148 + (longlong)pfVar19 * 8 + 4) ^ _DAT_142e37820;
              uStack_198 = (float *)CONCAT44(uVar13,uVar12);
              pdb_140df4520(&uStack_268,&uStack_198);
              if (pfStack_108 <= pfVar19) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(pfVar19,pfStack_108,&UNK_14300a670);
              }
              fVar46 = *(float *)(pbStack_140 + (longlong)pfVar19 * 4) + _DAT_142e36f50;
              fVar61 = (float)pdb_140e02880(&uStack_358);
              fVar61 = fVar61 * _DAT_142e3787c + fVar46;
              fVar75 = SUB84(uStack_268,0) * fVar61 * _DAT_142e36f60;
              fVar78 = (float)((ulonglong)uStack_268 >> 0x20) * fVar61 * _UNK_142e36f64;
              fVar77 = fVar61 * (float)uStack_260 * _DAT_142e36f50;
              fVar61 = (float)pdb_140e02880(&uStack_358);
              fVar60 = (float)pdb_140e02880(&uStack_358);
              uStack_198 = (float *)CONCAT44(uVar13,uVar12);
              pdb_140df4520(&uStack_268,&uStack_198);
              fVar71 = (float)pdb_140e02880(&uStack_358);
              fVar46 = fVar46 + fVar71 * _DAT_142e3787c;
              fVar76 = SUB84(uStack_268,0) * fVar46 * _DAT_142e61230;
              fVar80 = (float)((ulonglong)uStack_268 >> 0x20) * fVar46 * _UNK_142e61234;
              fVar79 = fVar46 * (float)uStack_260 * _DAT_142e36f38;
              fVar71 = (float)pdb_140e02880(&uStack_358);
              fVar46 = (float)pdb_140e02880(&uStack_358);
              uVar13 = pdb_140e02880(&uStack_358);
              uVar44 = pdb_140e02880(&uStack_358);
              uVar45 = pdb_140e02880(&uStack_358);
              uStack_268 = (float *)CONCAT44(_UNK_143009864 + fVar78 + (float)auStack_1c8._4_4_,
                                             (fVar61 + _DAT_142e36f38) * _DAT_142e3787c +
                                             fVar75 + (float)auStack_1c8._0_4_);
              uStack_260 = (float *)CONCAT44(uVar13,(fVar60 + _DAT_142e36f38) * _DAT_142e3787c +
                                                    fVar77 + pfStack_138._0_4_);
              uStack_258 = (byte *)CONCAT44(uVar45,uVar44);
              pbStack_250 = (byte *)(ulonglong)(uint)auStack_278._0_4_;
              pdb_1413f7520(&pfStack_328,&uStack_268);
              uVar13 = pdb_140e02880(&uStack_358);
              uVar44 = pdb_140e02880(&uStack_358);
              uVar45 = pdb_140e02880(&uStack_358);
              uStack_268 = (float *)CONCAT44(_UNK_143009864 + fVar80 + (float)auStack_1c8._4_4_,
                                             (fVar71 + _DAT_142e36f38) * _DAT_142e3787c +
                                             fVar76 + (float)auStack_1c8._0_4_);
              uStack_260 = (float *)CONCAT44(uVar13,(fVar46 + _DAT_142e36f38) * _DAT_142e3787c +
                                                    fVar79 + pfStack_138._0_4_);
              uStack_258 = (byte *)CONCAT44(uVar45,uVar44);
              pbStack_250 = (byte *)(ulonglong)(uint)auStack_278._0_4_;
              pdb_1413f7520(&pfStack_328,&uStack_268);
              *(undefined1 *)(lVar14 + -0x98) = 1;
              fVar61 = _DAT_142e36f28;
            }
            if (((uint)fStack_3e8 & 1) == 0) {
              uStack_358 = (byte *)((longlong)pfVar19 * 5 + uStack_488);
              if (pfStack_100 <= pfVar19) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(pfVar19,pfStack_100,&UNK_14300a688);
              }
              uStack_198 = (float *)(CONCAT44(*(undefined4 *)(pbStack_148 + (longlong)pfVar19 * 8),
                                              *(undefined4 *)
                                               (pbStack_148 + (longlong)pfVar19 * 8 + 4)) ^
                                    0x80000000);
              pdb_140df4520(&uStack_268,&uStack_198);
              if (pfStack_108 <= pfVar19) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(pfVar19,pfStack_108,&UNK_14300a6a0);
              }
              fVar61 = *(float *)(pbStack_140 + (longlong)pfVar19 * 4);
              fVar60 = (float)pdb_140e02880(&uStack_358);
              fVar60 = fVar60 * _DAT_142e3787c + fVar61 + _DAT_14300a408;
              fVar75 = (float)uStack_268 * fVar60;
              fVar61 = uStack_268._4_4_;
              fVar46 = (float)uStack_260 * fVar60;
              fVar71 = (float)pdb_140e02880(&uStack_358);
              fVar78 = fVar60 * fVar61 * _DAT_142e36f50;
              fVar79 = fVar71 * _DAT_143009870;
              fVar61 = (float)pdb_140e02880(&uStack_358);
              fVar60 = fVar61 * _DAT_143009874 + (_DAT_142e36f28 - fVar61) * _DAT_142e37848;
              if (fVar60 <= _DAT_142e3c608) {
                fVar60 = _DAT_142e3c608;
              }
              fVar77 = fVar60 * _DAT_14300a410;
              fVar76 = fVar60 * _UNK_14300a414;
              fVar60 = fVar60 * _DAT_142f95160;
              pdb_140de9620(&uStack_268,&uStack_358);
              uStack_3d8 = SUB84(uStack_268,0);
              uStack_3d4 = (undefined4)((ulonglong)uStack_268 >> 0x20);
              pfStack_3d0 = uStack_260;
              uVar13 = pdb_140e02880(&uStack_358);
              uVar44 = pdb_140e02880(&uStack_358);
              uVar45 = pdb_140e02880(&uStack_358);
              lVar37 = *(longlong *)(lVar14 + -200);
              if (lVar37 == *(longlong *)(lVar14 + -0xd8)) {
                pdb_142d8d860(lVar14 + -0xd8);
              }
              fVar61 = _DAT_142e36f28;
              fVar80 = *(float *)(&UNK_142f61070 + (ulonglong)(((ulonglong)pfVar19 & 1) == 0) * 4);
              fVar46 = fVar46 * _DAT_142e36f50;
              fVar75 = fVar75 * _DAT_142e36f50;
              fVar71 = _DAT_142e36f28 - fVar71;
              lVar33 = *(longlong *)(lVar14 + -0xd0);
              lVar25 = lVar37 * 0x40;
              auVar10._4_4_ = uStack_3d4;
              auVar10._0_4_ = uStack_3d8;
              auVar10._8_8_ = pfStack_3d0;
              *(undefined1 (*) [16])(lVar33 + lVar25) = auVar10;
              *(float *)(lVar33 + 0x10 + lVar25) = fVar75 * fVar80 + (float)auStack_1c8._0_4_;
              *(float *)(lVar33 + 0x14 + lVar25) =
                   ((float)auStack_1c8._4_4_ + fVar78 * fVar80) - (fVar79 + fVar71 * 0.0);
              *(float *)(lVar33 + 0x18 + lVar25) = pfStack_138._0_4_ + fVar46 * fVar80;
              *(ulonglong *)(lVar33 + 0x1c + lVar25) =
                   CONCAT44((float)auStack_498._0_4_ * fVar76,(float)auStack_498._0_4_ * fVar77);
              *(float *)(lVar33 + 0x24 + lVar25) = fVar60 * (float)auStack_498._0_4_;
              *(undefined4 *)(lVar33 + 0x30 + lVar25) = 0x3f800000;
              *(undefined4 *)(lVar33 + 0x34 + lVar25) = uVar13;
              *(undefined4 *)(lVar33 + 0x38 + lVar25) = uVar44;
              *(undefined4 *)(lVar33 + 0x3c + lVar25) = uVar45;
              *(longlong *)(lVar14 + -200) = lVar37 + 1;
              *(undefined1 *)(lVar14 + -0x98) = 1;
            }
          }
          pfVar38 = pfVar38 + 3;
          pfVar19 = (float *)((longlong)pfVar19 + 1);
        } while (pfVar38 != pfVar5);
      }
      goto LAB_140837bf0;
    }
    uVar35 = (ushort)(uVar41 - 1) & (ushort)uVar41;
    uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar35);
  }
  auVar56[0] = -(auVar65[0] == -1);
  auVar56[1] = -(auVar65[1] == -1);
  auVar56[2] = -(auVar65[2] == -1);
  auVar56[3] = -(auVar65[3] == -1);
  auVar56[4] = -(auVar65[4] == -1);
  auVar56[5] = -(auVar65[5] == -1);
  auVar56[6] = -(auVar65[6] == -1);
  auVar56[7] = -(auVar65[7] == -1);
  auVar56[8] = -(auVar65[8] == -1);
  auVar56[9] = -(auVar65[9] == -1);
  auVar56[10] = -(auVar65[10] == -1);
  auVar56[0xb] = -(auVar65[0xb] == -1);
  auVar56[0xc] = -(auVar65[0xc] == -1);
  auVar56[0xd] = -(auVar65[0xd] == -1);
  auVar56[0xe] = -(auVar65[0xe] == -1);
  auVar56[0xf] = -(auVar65[0xf] == -1);
  fVar61 = _DAT_142e36f28;
  if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 || (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar56 >> 0x17,0) & 1) != 0) || (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar56 >> 0x27,0) & 1) != 0) || (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar56 >> 0x37,0) & 1) != 0) || (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar56 >> 0x47,0) & 1) != 0) || (SUB161(auVar56 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar56 >> 0x57,0) & 1) != 0) || (SUB161(auVar56 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar56 >> 0x67,0) & 1) != 0) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0') goto LAB_140837bf0;
  uVar18 = uVar18 + lVar37 + 0x10;
  lVar37 = lVar37 + 0x10;
  goto LAB_1408374e7;
LAB_140837bf0:
  pcVar31 = (char *)(lStack_308 + 0x18);
  pdb_140e9a350();
  LOCK();
  cVar3 = *pcVar31;
  if (cVar3 == '\x01') {
    *pcVar31 = '\0';
  }
  UNLOCK();
  uVar18 = uStack_110;
  if (cVar3 != '\x01') {
    pdb_142dbcef0(pcVar31,0);
    uVar18 = uStack_110;
  }
  goto LAB_140837c19;
  while( true ) {
    pbVar23 = (byte *)(lVar33 + lVar14);
    lVar14 = lVar14 + 4;
    if ((*pbVar23 < 5) && ((0x13U >> (*pbVar23 & 0x1f) & 1) != 0)) break;
LAB_140836f20:
    if (uVar18 * 4 == lVar14) break;
  }
LAB_140836f48:
  uVar20 = *(ulonglong *)(lStack_1f0 + 0x70);
  uVar18 = uStack_110;
  pfStack_328 = pfVar38;
  if (uVar20 != 0) {
    if (uVar20 == 1) {
      lVar37 = *(longlong *)(lStack_1f0 + 0x68);
      if ((uVar12 == *(uint *)(lVar37 + 8)) && (uVar4 == *(uint *)(lVar37 + 0xc))) {
        lVar14 = 0;
        cVar3 = *(char *)(lVar37 + 0x10);
        pfVar19 = pfStack_448;
        pfVar38 = pfStack_440;
joined_r0x000140836ff4:
        pfStack_448 = pfVar19;
        pfStack_440 = pfVar38;
        uStack_110 = uVar18;
        if (cVar3 == '\x01') {
          lVar37 = lVar37 + lVar14 * 8;
          uVar47 = *(undefined8 *)(lVar37 + 0x14);
          uVar1 = *(undefined8 *)(lVar37 + 0x1c);
          fVar71 = (float)uVar47 * (float)((ulonglong)uVar1 >> 0x20);
          fVar60 = (float)((ulonglong)uVar47 >> 0x20) * (float)uVar1 - fVar71;
          uVar41 = -(uint)NAN(fVar60);
          auVar54._0_4_ =
               ~uVar41 & (((uint)fVar60 ^ _DAT_142e37820) & _DAT_142e37820 | (uint)_DAT_142e3c640);
          auVar54._4_4_ =
               ~(uint)fVar71 &
               (((uint)fVar71 ^ _UNK_142e37824) & _UNK_142e37824 | (uint)_UNK_142e3c644);
          auVar54._8_4_ = _UNK_142e37828 | (uint)_UNK_142e3c648;
          auVar54._12_4_ = _UNK_142e3782c | (uint)_UNK_142e3c64c;
          _auStack_278 = ZEXT416(uVar41 & _DAT_14300a424) | auVar54;
          if ((bVar43 & 1) == 0) {
            if (plStack_130[3] != 0) {
              uVar18 = pdb_1400af680(plStack_280,&uStack_1b0);
              lVar14 = *plStack_130;
              uVar15 = plStack_130[1];
              bVar43 = (byte)(uVar18 >> 0x39);
              auVar48 = ZEXT216(CONCAT11(bVar43,bVar43));
              auVar48 = pshuflw(auVar48,auVar48,0);
              lVar37 = 0;
              while( true ) {
                uVar18 = uVar18 & uVar15;
                auVar65 = *(undefined1 (*) [16])(lVar14 + uVar18);
                auVar68[0] = -(auVar65[0] == auVar48[0]);
                auVar68[1] = -(auVar65[1] == auVar48[1]);
                auVar68[2] = -(auVar65[2] == auVar48[2]);
                auVar68[3] = -(auVar65[3] == auVar48[3]);
                auVar68[4] = -(auVar65[4] == auVar48[4]);
                auVar68[5] = -(auVar65[5] == auVar48[5]);
                auVar68[6] = -(auVar65[6] == auVar48[6]);
                auVar68[7] = -(auVar65[7] == auVar48[7]);
                auVar68[8] = -(auVar65[8] == auVar48[0]);
                auVar68[9] = -(auVar65[9] == auVar48[1]);
                auVar68[10] = -(auVar65[10] == auVar48[2]);
                auVar68[0xb] = -(auVar65[0xb] == auVar48[3]);
                auVar68[0xc] = -(auVar65[0xc] == auVar48[4]);
                auVar68[0xd] = -(auVar65[0xd] == auVar48[5]);
                auVar68[0xe] = -(auVar65[0xe] == auVar48[6]);
                auVar68[0xf] = -(auVar65[0xf] == auVar48[7]);
                uVar35 = (ushort)(SUB161(auVar68 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar68[0xf] >> 7) << 0xf;
                uVar41 = (uint)uVar35;
                while (uVar35 != 0) {
                  uVar7 = 0;
                  for (uVar8 = uVar41; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                    uVar7 = uVar7 + 1;
                  }
                  lVar33 = (uVar7 + uVar18 & uVar15) * -0x140;
                  if ((uVar12 == *(uint *)(lVar14 + -0x140 + lVar33)) &&
                     (uVar4 == *(uint *)(lVar14 + -0x13c + lVar33))) {
                    if (*(longlong *)(lVar14 + lVar33 + -0x30) == 0) goto LAB_140839800;
                    lVar14 = *(longlong *)(lVar14 + lVar33 + -0x28);
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc8150(&UNK_143305b70);
                    }
                    LOCK();
                    bVar40 = *(char *)(lVar14 + 0x18) == '\0';
                    if (bVar40) {
                      *(char *)(lVar14 + 0x18) = '\x01';
                    }
                    UNLOCK();
                    if (!bVar40) {
                      pdb_142dbd1a0(lVar14 + 0x18,CONCAT71((int7)(uVar15 >> 8),1),1000000000);
                    }
                    pdb_140e9a150(lVar14 + 0x18);
                    if ((*(longlong *)(lVar14 + 0x10) == 0) ||
                       (piVar24 = (int *)(*(longlong *)(lVar14 + 8) +
                                          *(longlong *)(lVar14 + 0x10) * 4 + -4),
                       piVar24 == (int *)0x0)) {
                      pfVar38 = *(float **)(lStack_1d8 + 0x10);
                      if (pfVar38 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
                        pdb_142dc8150(&UNK_143305b88);
                      }
                      iStack_210 = (int)pfVar38 + -1;
                    }
                    else {
                      iStack_210 = *piVar24;
                      pfVar38 = *(float **)(lStack_1d8 + 0x10);
                    }
                    uStack_268 = *(float **)(lStack_1d8 + 8);
                    uStack_258 = *(byte **)(lStack_1d8 + 0x18);
                    pbStack_250 = *(byte **)(lStack_1d8 + 0x20);
                    pfStack_240 = *(float **)(lStack_1d8 + 0x28);
                    pbStack_238 = *(byte **)(lStack_1d8 + 0x30);
                    uStack_220 = *(undefined8 *)(lStack_1d8 + 0x38);
                    uStack_218 = *(undefined8 *)(lStack_1d8 + 0x40);
                    lStack_230 = lStack_4b8;
                    lStack_228 = lStack_4b0;
                    lStack_370 = 0;
                    pbStack_368 = (byte *)0x4;
                    plStack_360 = (longlong *)0x0;
                    pfStack_320 = pfStack_448 + (longlong)pfStack_440 * 3;
                    pbStack_310 = pbStack_140 + (longlong)pfStack_108 * 4;
                    pfStack_300 = pfStack_440;
                    if (pfStack_108 < pfStack_440) {
                      pfStack_300 = pfStack_108;
                    }
                    pbStack_2f0 = pbStack_148 + (longlong)pfStack_100 * 8;
                    pfStack_2e0 = pfStack_100;
                    if (pfStack_300 <= pfStack_100) {
                      pfStack_2e0 = pfStack_300;
                    }
                    pfStack_328 = pfStack_448;
                    pbStack_318 = pbStack_140;
                    lStack_308 = 0;
                    pbStack_2f8 = pbStack_148;
                    pfStack_2d8 = (float *)0x0;
                    pfStack_2c8 = (float *)0x0;
                    uVar13 = auStack_278._0_4_;
                    pfVar19 = (float *)0x0;
                    uStack_260 = pfVar38;
                    lStack_248 = lVar14;
                    goto LAB_140837f9e;
                  }
                  uVar35 = (ushort)(uVar41 - 1) & (ushort)uVar41;
                  uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar35);
                }
                auVar57[0] = -(auVar65[0] == -1);
                auVar57[1] = -(auVar65[1] == -1);
                auVar57[2] = -(auVar65[2] == -1);
                auVar57[3] = -(auVar65[3] == -1);
                auVar57[4] = -(auVar65[4] == -1);
                auVar57[5] = -(auVar65[5] == -1);
                auVar57[6] = -(auVar65[6] == -1);
                auVar57[7] = -(auVar65[7] == -1);
                auVar57[8] = -(auVar65[8] == -1);
                auVar57[9] = -(auVar65[9] == -1);
                auVar57[10] = -(auVar65[10] == -1);
                auVar57[0xb] = -(auVar65[0xb] == -1);
                auVar57[0xc] = -(auVar65[0xc] == -1);
                auVar57[0xd] = -(auVar65[0xd] == -1);
                auVar57[0xe] = -(auVar65[0xe] == -1);
                auVar57[0xf] = -(auVar65[0xf] == -1);
                if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar57 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar57 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar57 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar57 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar57 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar57 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar57 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar57 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar57 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar57 >> 0x5f,0) & 1) != 0) || (SUB161(auVar57 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') break;
                uVar18 = uVar18 + lVar37 + 0x10;
                lVar37 = lVar37 + 0x10;
              }
            }
            pdb_142dc8110(&UNK_14300a5d8,0x16,&UNK_14300a750);
            goto LAB_140839b73;
          }
          if ((pfVar38 != (float *)0x0) && (pfVar19 + (longlong)pfVar38 * 3 + -3 != (float *)0x0)) {
            fVar60 = (float)pub_142e32980(pfVar19 + (longlong)pfVar38 * 3 + -3,
                                          SQRT((pfVar19[2] - pfVar19[(longlong)pfVar38 * 3 + -1]) *
                                               (pfVar19[2] - pfVar19[(longlong)pfVar38 * 3 + -1]) +
                                               (*pfVar19 - pfVar19[(longlong)pfVar38 * 3 + -3]) *
                                               (*pfVar19 - pfVar19[(longlong)pfVar38 * 3 + -3])));
            if (fVar60 <= _DAT_143007998) {
              if ((float)lStack_420 <= _DAT_14300a4d0) {
                pdb_14007ee60();
                pfStack_1a0 = (float *)pub_1406abab0(0xc,4);
                if (pfStack_1a0 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc7e11(4,0xc);
                }
                uVar41 = pdb_1413f9030(&lStack_450);
                pfVar27 = (float *)(ulonglong)uVar41;
                uVar47 = extraout_XMM0_Qa;
                if (pfVar38 <= pfVar27) goto LAB_140839b4e;
                pfVar26 = (float *)((longlong)pfVar27 + 1);
                if (pfVar38 <= pfVar26) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(pfVar26,pfVar38,&UNK_143306620);
                }
                fVar46 = (float)extraout_XMM0_Qa;
                fVar61 = fVar61 - fVar46;
                fVar60 = pfVar19[(longlong)pfVar27 * 3 + 2];
                fVar71 = pfVar19[(longlong)pfVar26 * 3 + 2];
                *(ulonglong *)pfStack_1a0 =
                     CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar19 + (longlong)pfVar26 * 3) >>
                                     0x20) * fVar46 +
                              (float)((ulonglong)*(undefined8 *)(pfVar19 + (longlong)pfVar27 * 3) >>
                                     0x20) * fVar61,
                              (float)*(undefined8 *)(pfVar19 + (longlong)pfVar26 * 3) * fVar46 +
                              (float)*(undefined8 *)(pfVar19 + (longlong)pfVar27 * 3) * fVar61);
                pfStack_1a0[2] = fVar71 * fVar46 + fVar61 * fVar60;
                pfStack_378 = (float *)0x1;
                pfVar38 = (float *)0x1;
LAB_140838ad8:
                lVar14 = pdb_140c40010(uStack_400,uVar15);
                if (lVar14 == 0) {
LAB_140838b18:
                  uStack_3d8 = 0;
                  pfStack_1a8 = (float *)((ulonglong)pfStack_1a8 & 0xffffffff00000000);
                }
                else {
                  lVar14 = pdb_1409014e0(lVar14 + 0x38);
                  if (lVar14 == 0) goto LAB_140838b18;
                  uStack_3d8 = *(undefined4 *)(lVar14 + 0xc);
                  uVar13 = pdb_1409012c0(*(undefined1 *)(lVar14 + 0x14));
                  pfStack_1a8 = (float *)CONCAT44(pfStack_1a8._4_4_,uVar13);
                }
                if (plStack_130[3] != 0) {
                  uVar18 = pdb_1400af680(plStack_280,&uStack_1b0);
                  lVar14 = *plStack_130;
                  uVar15 = plStack_130[1];
                  bVar43 = (byte)(uVar18 >> 0x39);
                  auVar48 = ZEXT216(CONCAT11(bVar43,bVar43));
                  auVar48 = pshuflw(auVar48,auVar48,0);
                  lVar37 = 0;
                  while( true ) {
                    uVar18 = uVar18 & uVar15;
                    auVar65 = *(undefined1 (*) [16])(lVar14 + uVar18);
                    auVar70[0] = -(auVar65[0] == auVar48[0]);
                    auVar70[1] = -(auVar65[1] == auVar48[1]);
                    auVar70[2] = -(auVar65[2] == auVar48[2]);
                    auVar70[3] = -(auVar65[3] == auVar48[3]);
                    auVar70[4] = -(auVar65[4] == auVar48[4]);
                    auVar70[5] = -(auVar65[5] == auVar48[5]);
                    auVar70[6] = -(auVar65[6] == auVar48[6]);
                    auVar70[7] = -(auVar65[7] == auVar48[7]);
                    auVar70[8] = -(auVar65[8] == auVar48[0]);
                    auVar70[9] = -(auVar65[9] == auVar48[1]);
                    auVar70[10] = -(auVar65[10] == auVar48[2]);
                    auVar70[0xb] = -(auVar65[0xb] == auVar48[3]);
                    auVar70[0xc] = -(auVar65[0xc] == auVar48[4]);
                    auVar70[0xd] = -(auVar65[0xd] == auVar48[5]);
                    auVar70[0xe] = -(auVar65[0xe] == auVar48[6]);
                    auVar70[0xf] = -(auVar65[0xf] == auVar48[7]);
                    uVar35 = (ushort)(SUB161(auVar70 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar70[0xf] >> 7) << 0xf;
                    uVar41 = (uint)uVar35;
                    while (uVar35 != 0) {
                      uVar7 = 0;
                      for (uVar8 = uVar41; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                        uVar7 = uVar7 + 1;
                      }
                      lVar33 = (uVar7 + uVar18 & uVar15) * -0x140;
                      if ((uVar12 == *(uint *)(lVar14 + -0x140 + lVar33)) &&
                         (uVar4 == *(uint *)(lVar14 + -0x13c + lVar33))) {
                        if (*(longlong *)(lVar14 + lVar33 + -0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                          pdb_142dc8150(&UNK_14300a828);
                        }
                        lVar14 = *(longlong *)(lVar14 + lVar33 + -0x18);
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          pdb_142dc8150(&UNK_143305b70);
                        }
                        LOCK();
                        bVar40 = *(char *)(lVar14 + 0x18) == '\0';
                        if (bVar40) {
                          *(char *)(lVar14 + 0x18) = '\x01';
                        }
                        UNLOCK();
                        if (!bVar40) {
                          pdb_142dbd1a0(lVar14 + 0x18,CONCAT71((int7)(uVar15 >> 8),1),1000000000);
                        }
                        pdb_140e9a150(lVar14 + 0x18);
                        if ((*(longlong *)(lVar14 + 0x10) == 0) ||
                           (piVar24 = (int *)(*(longlong *)(lVar14 + 8) +
                                              *(longlong *)(lVar14 + 0x10) * 4 + -4),
                           piVar24 == (int *)0x0)) {
                          pfVar19 = *(float **)(lStack_1d0 + 0x10);
                          if (pfVar19 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
                            pdb_142dc8150(&UNK_143305b88);
                          }
                          iVar29 = (int)pfVar19 + -1;
                        }
                        else {
                          iVar29 = *piVar24;
                          pfVar19 = *(float **)(lStack_1d0 + 0x10);
                        }
                        pfStack_328 = *(float **)(lStack_1d0 + 8);
                        pbStack_318 = *(byte **)(lStack_1d0 + 0x18);
                        pbStack_310 = *(byte **)(lStack_1d0 + 0x20);
                        pfStack_300 = *(float **)(lStack_1d0 + 0x28);
                        pbStack_2f8 = *(byte **)(lStack_1d0 + 0x30);
                        pfStack_2e0 = *(float **)(lStack_1d0 + 0x38);
                        pfStack_2d8 = *(float **)(lStack_1d0 + 0x40);
                        pfStack_2d0 = (float *)CONCAT44(pfStack_2d0._4_4_,iVar29);
                        pbStack_2f0 = pbStack_4a8;
                        pfStack_2e8 = pfStack_4a0;
                        pfVar38 = pfStack_1a0 + (longlong)pfVar38 * 3;
                        pfStack_1e0 = (float *)CONCAT44(pfStack_1e0._4_4_,
                                                        *(undefined4 *)
                                                         (&UNK_14300a4d8 +
                                                         (ulonglong)((char)pfStack_1a8 == '\x01') *
                                                         4));
                        uStack_488._0_4_ = (float)auStack_278._0_4_;
                        uStack_488._4_4_ = (float)auStack_278._0_4_;
                        fStack_480 = fStack_270;
                        fStack_47c = fStack_270;
                        pfVar27 = pfStack_1a0;
                        iVar29 = 0;
                        pfStack_320 = pfVar19;
                        lStack_308 = lVar14;
                        goto LAB_140838d20;
                      }
                      uVar35 = (ushort)(uVar41 - 1) & (ushort)uVar41;
                      uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar35);
                    }
                    auVar59[0] = -(auVar65[0] == -1);
                    auVar59[1] = -(auVar65[1] == -1);
                    auVar59[2] = -(auVar65[2] == -1);
                    auVar59[3] = -(auVar65[3] == -1);
                    auVar59[4] = -(auVar65[4] == -1);
                    auVar59[5] = -(auVar65[5] == -1);
                    auVar59[6] = -(auVar65[6] == -1);
                    auVar59[7] = -(auVar65[7] == -1);
                    auVar59[8] = -(auVar65[8] == -1);
                    auVar59[9] = -(auVar65[9] == -1);
                    auVar59[10] = -(auVar65[10] == -1);
                    auVar59[0xb] = -(auVar65[0xb] == -1);
                    auVar59[0xc] = -(auVar65[0xc] == -1);
                    auVar59[0xd] = -(auVar65[0xd] == -1);
                    auVar59[0xe] = -(auVar65[0xe] == -1);
                    auVar59[0xf] = -(auVar65[0xf] == -1);
                    if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar59 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar59 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar59 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar59 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar59 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar59 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar59 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar59 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar59 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar59 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar59 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar59 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar59 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') break;
                    uVar18 = uVar18 + lVar37 + 0x10;
                    lVar37 = lVar37 + 0x10;
                  }
                }
                pdb_142dc8110(&UNK_14300a5d8,0x16,&UNK_14300a810);
                goto LAB_140839b73;
              }
              fVar60 = _DAT_142f95160 / (float)lStack_420;
              uStack_358 = (byte *)CONCAT44(uStack_358._4_4_,fVar60);
              if ((fVar60 < 0.0) || (fVar61 < fVar60)) {
                pfStack_328 = (float *)&uStack_358;
                pfStack_320 = (float *)pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_143307ab0,&pfStack_328,&UNK_14300a7e0);
              }
              fVar60 = fVar61 - fVar60;
              uStack_358 = (byte *)CONCAT44(uStack_358._4_4_,fVar60);
              if ((fVar60 < 0.0) || (fVar61 < fVar60)) {
                pfStack_328 = (float *)&uStack_358;
                pfStack_320 = (float *)pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_143307ab0,&pfStack_328,&UNK_14300a7f8);
              }
              pdb_1413faff0(&uStack_268,&lStack_450);
              uVar18 = uStack_110;
              if (!SBORROW8(0,(longlong)uStack_268)) {
                pbStack_2f8 = pbStack_238;
                lStack_308 = lStack_248;
                pfStack_300 = pfStack_240;
                pbStack_318 = uStack_258;
                pbStack_310 = pbStack_250;
                pfStack_328 = uStack_268;
                pfStack_320 = uStack_260;
                pdb_1413f9380(&uStack_198,&uStack_268);
                pdb_1400d9b40(&pfStack_328);
                pfVar38 = uStack_188;
                uVar18 = uStack_110;
                if (!SBORROW8(0,(longlong)uStack_198)) {
                  pfStack_378 = uStack_198;
                  pfStack_1a0 = uStack_190;
                  if (uStack_180 != (longlong *)0x0) {
                    pub_1406abac0((byte *)CONCAT44(fStack_174,fStack_178),(longlong)uStack_180 << 2,
                                  4);
                  }
                  goto LAB_140838ad8;
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar21 = pdb_1400af680(lStack_4c8,&pfStack_328);
      uVar22 = pdb_141473a20(lStack_4c0,uVar21,&pfStack_328);
      uVar18 = uStack_110;
      if ((uVar22 & 1) != 0) {
        if (uVar20 <= uVar21) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar21,uVar20,&UNK_14330bc30);
        }
        lVar37 = *(longlong *)(lStack_1f0 + 0x68);
        lVar14 = uVar21 * 5;
        cVar3 = *(char *)(lVar37 + 0x10 + uVar21 * 0x28);
        pfVar19 = pfStack_448;
        pfVar38 = pfStack_440;
        goto joined_r0x000140836ff4;
      }
    }
  }
LAB_140837c19:
  if (lStack_380 != 0) {
    pub_1406abac0(pbStack_1f8,lStack_380 << 3,8);
  }
  if ((uVar18 & 0x7fffffffffffffff) != 0) {
LAB_140837c5c:
    pub_1406abac0(pbStack_1e8,uVar18 << 2,4);
  }
LAB_140837c61:
  lVar14 = lStack_3a0;
  if (lStack_388 != 0) {
    pub_1406abac0(pbStack_288,lStack_388 << 2,4);
  }
  if (lStack_390 != 0) {
    pub_1406abac0(pbStack_148,lStack_390 << 3,4);
  }
  if (lStack_398 != 0) {
    pub_1406abac0(pbStack_140,lStack_398 << 2,4);
  }
  if (lVar14 != 0) {
    pub_1406abac0((byte *)pfStack_448,lVar14 * 0xc,4);
  }
  if (lStack_438 != 0) {
    pub_1406abac0(pbStack_430,lStack_438 << 2,4);
  }
  goto LAB_140836ac4;
LAB_140837f9e:
  if (pfVar19 < pfStack_2e0) {
    pfStack_2e8 = (float *)((longlong)pfVar19 + 1);
    pfVar38 = pfStack_328 + ((longlong)pfVar19 + lStack_308) * 3;
    pfVar27 = (float *)(pbStack_318 + (longlong)((longlong)pfVar19 + lStack_308) * 4);
    if (pfStack_2c8 == (float *)0x0) {
      uStack_358 = (byte *)0x1;
      pfStack_350 = pfStack_2d8;
      ppfStack_330 = &pfStack_328;
      pfStack_348 = pfVar38;
      pfStack_340 = pfVar27;
      pbStack_338 = pbStack_2f8 + (longlong)pfVar19 * 8;
      pfStack_2d8 = (float *)((longlong)pfStack_2d8 + 1);
      pdb_14141f540(&uStack_198,&uStack_358);
      pfVar38 = (float *)CONCAT44(uStack_16c,fStack_170);
      pfVar27 = (float *)CONCAT44(iStack_164,uStack_168);
      auStack_2a0._8_4_ = uStack_160;
      auStack_2a0._0_8_ = pfVar27;
      auStack_2a0._12_4_ = uStack_15c;
      plStack_2b8 = uStack_180;
      fVar61 = _DAT_142e36f28;
      pfVar11 = pfStack_2d8;
      pfVar19 = uStack_198;
      pfVar26 = (float *)CONCAT44(fStack_174,fStack_178);
      pfStack_2c8 = uStack_190;
      pfVar34 = uStack_188;
    }
    else {
      pfVar34 = (float *)auStack_2a0._0_8_;
      plStack_2b8 = (longlong *)auStack_2a0._8_8_;
      auStack_2a0._8_8_ = pbStack_2f8 + (longlong)pfVar19 * 8;
      auStack_2a0._0_8_ = pfVar27;
      pfVar11 = (float *)((longlong)pfStack_2d8 + 1);
      pfVar19 = pfStack_2b0;
      pfVar26 = pfStack_2d8;
      pfStack_2c8 = pfStack_2a8;
    }
    pfStack_2d8 = pfVar11;
    pfStack_2d0 = pfVar19;
    pfStack_2c0 = pfVar34;
    pfStack_2b0 = pfVar26;
    pfStack_2a8 = pfVar38;
    if (pfStack_2c8 == (float *)0x0) goto LAB_14083898a;
    uStack_198 = (float *)CONCAT44(pfStack_2c8[2],*pfStack_2c8);
    pdb_140df4540(&uStack_520,&uStack_198);
    uStack_198._0_4_ = *pfVar38;
    uStack_198._4_4_ = pfVar38[2];
    pdb_140df4540(&uStack_530,&uStack_198);
    fVar60 = fStack_518;
    fVar61 = fStack_528;
    fVar46 = (float)uStack_530 - (float)uStack_520;
    fVar75 = fStack_528 - fStack_518;
    fVar71 = _DAT_142e36f28 / SQRT(fVar75 * fVar75 + fVar46 * fVar46);
    bVar40 = (int)fVar71 - 1U < 0x7fffff ||
             (int)ABS(fVar71) - 0x800000U < 0x7f000000 && -1 < (int)fVar71;
    if (bVar40) {
      fVar46 = fVar46 * fVar71;
    }
    else {
      fVar46 = 0.0;
    }
    fVar78 = *pfVar27 * _DAT_142e36f50 + *pfVar34 * _DAT_142e36f50;
    if (SBORROW8(0,uStack_110)) {
      fVar79 = (fVar78 + _DAT_142f684a4) * _DAT_142e36f50;
    }
    else {
      if (pfVar5 <= pfVar19) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pfVar19,pfVar5,&UNK_14300a780);
      }
      if (pfVar5 <= pfVar26) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pfVar26,pfVar5,&UNK_14300a798);
      }
      fVar79 = *(float *)(pbStack_1e8 + (longlong)pfVar26 * 4) * _DAT_142e36f50 +
               *(float *)(pbStack_1e8 + (longlong)pfVar19 * 4) * _DAT_142e36f50;
    }
    fVar76 = (float)uStack_530 * _DAT_142e36f60 + (float)uStack_520 * _DAT_142e36f60;
    fVar80 = fVar76 + _DAT_14300a430;
    fVar82 = (float)((ulonglong)uStack_530 >> 0x20) * _UNK_142e36f64 +
             (float)((ulonglong)uStack_520 >> 0x20) * _UNK_142e36f64 + _UNK_14300a434;
    fVar77 = _DAT_142e377f0;
    if (bVar40) {
      fVar77 = fVar75 * (float)((uint)fVar71 ^ _DAT_142e37820);
    }
    uStack_358 = (byte *)CONCAT44(fVar46,fVar77);
    pdb_140df4520(&uStack_198,&uStack_358);
    fVar61 = fVar61 * _DAT_142e36f50 + fVar60 * _DAT_142e36f50;
    fVar78 = fVar78 * _DAT_142e3798c;
    fStack_3a8 = fVar61 - fVar78 * (float)uStack_190 * (float)auStack_278._0_4_;
    uStack_3b0 = CONCAT44(fVar82 - uStack_198._4_4_ * fVar78 * (float)uVar13,
                          fVar76 - (float)uStack_198 * fVar78 * (float)uVar13);
    uStack_358 = (byte *)CONCAT44(fVar46,fVar77);
    pdb_140df4520(&uStack_198,&uStack_358);
    fVar79 = fVar79 + _DAT_14300a440;
    fStack_3b8 = fVar61 + fVar79 * (float)uStack_190 * (float)auStack_278._0_4_;
    uStack_3c0 = CONCAT44(fVar82 + uStack_198._4_4_ * fVar79 * (float)uVar13,
                          fVar80 + (float)uStack_198 * fVar79 * (float)uVar13);
    uStack_198 = (float *)&uStack_3b0;
    uStack_190 = (float *)&uStack_3c0;
    uStack_188._0_4_ = 0.0;
    uStack_188._4_4_ = 0.0;
    uStack_180 = (longlong *)0xa;
    pdb_1413e8fe0(&uStack_358,&uStack_198);
    pfVar38 = pfStack_348;
    pfStack_108 = pfStack_350;
    if (pfStack_348 == (float *)0x0) {
      pfVar27 = (float *)0x4;
    }
    else {
      uVar15 = (longlong)pfStack_348 * 4;
      pdb_14007ee60();
      pfVar27 = (float *)pub_1406abab0(uVar15,4);
      fVar61 = _DAT_142e36f28;
      if (pfVar27 == (float *)0x0) {
        pdb_142dc7e2a(4,uVar15);
        goto LAB_140839b73;
      }
      if (pfVar38 < (float *)0x4) {
        pfVar34 = (float *)0x0;
        fVar60 = _DAT_14300a480;
        fVar71 = _DAT_142f895fc;
      }
      else {
        pfVar34 = (float *)((ulonglong)pfVar38 & 0xfffffffffffffffc);
        pfVar26 = (float *)0x0;
        auVar49 = _DAT_142e4ff80;
        auVar58 = _DAT_1430077e0;
        do {
          uVar15 = auVar49._0_8_;
          uVar18 = auVar58._0_8_;
          uVar21 = auVar49._8_8_;
          uVar20 = auVar58._8_8_;
          if ((longlong)uVar15 < 0) {
            fVar60 = (float)((ulonglong)(auVar49._0_4_ & 1) | uVar15 >> 1);
            fVar60 = fVar60 + fVar60;
            if (auVar49._12_4_ < 0) goto LAB_140838540;
LAB_1408385b7:
            fVar71 = (float)(longlong)uVar21;
            if ((longlong)uVar18 < 0) goto LAB_140838562;
LAB_1408385c9:
            fVar46 = (float)(longlong)uVar18;
            if (auVar58._12_4_ < 0) goto LAB_1408385e4;
LAB_1408384b0:
            fVar75 = (float)(longlong)uVar20;
          }
          else {
            fVar60 = (float)(longlong)uVar15;
            if (-1 < auVar49._12_4_) goto LAB_1408385b7;
LAB_140838540:
            fVar71 = (float)uVar21;
            if (-1 < (longlong)uVar18) goto LAB_1408385c9;
LAB_140838562:
            fVar46 = (float)((ulonglong)(auVar58._0_4_ & 1) | uVar18 >> 1);
            fVar46 = fVar46 + fVar46;
            if (-1 < auVar58._12_4_) goto LAB_1408384b0;
LAB_1408385e4:
            fVar75 = (float)uVar20;
          }
          auVar69._4_4_ = fVar71;
          auVar69._0_4_ = fVar60;
          auVar69._12_4_ = fVar75;
          auVar69._8_4_ = fVar46;
          auVar48 = divps(auVar69,_DAT_14300a450);
          auVar9._4_4_ = _UNK_142e3c644;
          auVar9._0_4_ = _DAT_142e3c640;
          auVar9._8_4_ = _UNK_142e3c648;
          auVar9._12_4_ = _UNK_142e3c64c;
          auVar72._0_4_ = (_DAT_142e3c640 - auVar48._0_4_ * auVar48._0_4_) + _DAT_14300a460;
          auVar72._4_4_ = (_UNK_142e3c644 - auVar48._4_4_ * auVar48._4_4_) + _UNK_14300a464;
          auVar72._8_4_ = (_UNK_142e3c648 - auVar48._8_4_ * auVar48._8_4_) + _UNK_14300a468;
          auVar72._12_4_ = (_UNK_142e3c64c - auVar48._12_4_ * auVar48._12_4_) + _UNK_14300a46c;
          auVar48 = maxps(ZEXT816(0),auVar72);
          auVar48 = minps(auVar9,auVar48);
          auVar73._0_4_ = auVar48._0_4_ * _DAT_14300a470 + (_DAT_142e3c640 - auVar48._0_4_) * 0.0;
          auVar73._4_4_ = auVar48._4_4_ * _UNK_14300a474 + (_UNK_142e3c644 - auVar48._4_4_) * 0.0;
          auVar73._8_4_ = auVar48._8_4_ * _UNK_14300a478 + (_UNK_142e3c648 - auVar48._8_4_) * 0.0;
          auVar73._12_4_ = auVar48._12_4_ * _UNK_14300a47c + (_UNK_142e3c64c - auVar48._12_4_) * 0.0
          ;
          *(undefined1 (*) [16])(pfVar27 + (longlong)pfVar26) = auVar73;
          pfVar26 = pfVar26 + 1;
          auVar49._0_8_ = uVar15 + _DAT_142e4ffa0;
          auVar49._8_8_ = uVar21 + _UNK_142e4ffa8;
          auVar58._0_8_ = uVar18 + _DAT_142e4ffa0;
          auVar58._8_8_ = uVar20 + _UNK_142e4ffa8;
        } while (pfVar34 != pfVar26);
        fVar60 = _DAT_14300a480;
        fVar71 = _DAT_142f895fc;
        if (pfVar38 == pfVar34) goto LAB_140838620;
      }
      do {
        fVar75 = (fVar61 - ((float)pfVar34 / fVar71) * ((float)pfVar34 / fVar71)) + _DAT_142e3b1d8;
        fVar46 = 0.0;
        if (0.0 <= fVar75) {
          fVar46 = fVar75;
        }
        fVar75 = fVar61;
        if (fVar46 <= fVar61) {
          fVar75 = fVar46;
        }
        pfVar27[(longlong)pfVar34] = fVar75 * fVar60 + (fVar61 - fVar75) * 0.0;
        pfVar34 = (float *)((longlong)pfVar34 + 1);
      } while (pfVar38 != pfVar34);
    }
LAB_140838620:
    auStack_1c8._0_8_ = pfVar38;
    fVar61 = SQRT((fStack_3a8 - fStack_3b8) * (fStack_3a8 - fStack_3b8) +
                  (uStack_3b0._4_4_ - uStack_3c0._4_4_) * (uStack_3b0._4_4_ - uStack_3c0._4_4_) +
                  ((float)uStack_3b0 - (float)uStack_3c0) * ((float)uStack_3b0 - (float)uStack_3c0))
    ;
    fStack_3c8 = fVar61;
    pfStack_100 = pfVar27;
    if (pfStack_138 <= pfVar19) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pfVar19,pfStack_138,&UNK_14300a7b0);
    }
    lVar14 = pdb_140b54f80(uStack_408,*(undefined8 *)(pbStack_1f8 + (longlong)pfVar19 * 8),
                           &UNK_14300a7c8);
    pfVar38 = pfStack_100;
    if (lVar14 == 0) {
      fVar60 = 0.0;
    }
    else {
      fVar60 = *(float *)(lVar14 + 0x284);
    }
    uVar1 = auStack_1c8._0_8_;
    fStack_200 = INFINITY;
    plStack_360 = (longlong *)0x0;
    uStack_538 = _DAT_14300a490;
    uStack_540 = 0;
    fStack_53c = fVar61;
    pdb_14007ee60();
    pbVar23 = pub_1406abab0(0x28,4);
    uVar47 = _UNK_14300a4a8;
    if (pbVar23 == (byte *)0x0) {
      pdb_142dc7e2a(4,0x28);
      goto LAB_140839b73;
    }
    *(undefined8 *)pbVar23 = _DAT_14300a4a0;
    *(undefined8 *)(pbVar23 + 8) = uVar47;
    uVar47 = _UNK_14300a4b8;
    *(undefined8 *)(pbVar23 + 0x10) = _DAT_14300a4b0;
    *(undefined8 *)(pbVar23 + 0x18) = uVar47;
    *(undefined8 *)(pbVar23 + 0x20) = _DAT_14300a4c0;
    uStack_198 = &fStack_200;
    uStack_190 = &fStack_1fc;
    uStack_188 = &fStack_3c8;
    uStack_180 = &lStack_370;
    auStack_128._0_8_ = pbVar23;
    pdb_141403f80(&uStack_540,pfVar38,uVar1,pfStack_108,uVar1,pbVar23,10,&uStack_198);
    fVar61 = _DAT_142e36f28;
    pub_1406abac0((byte *)auStack_128._0_8_,0x28,4);
    plVar16 = plStack_360;
    if ((fVar60 <= 0.0) || (fVar60 <= fStack_200)) {
      plStack_360 = (longlong *)0x0;
      plVar30 = (longlong *)((longlong)plVar16 * 0x40);
      uStack_190 = (float *)(pbStack_368 + (longlong)plVar30);
      uStack_188 = (float *)&lStack_370;
      fStack_178 = 0.0;
      fStack_174 = 0.0;
      uStack_180 = plVar16;
      pbVar23 = pbStack_368;
      while (plVar16 != (longlong *)0x0) {
        uStack_5c8 = *(undefined8 *)pbVar23;
        uStack_5c0 = *(undefined8 *)(pbVar23 + 8);
        uStack_5b8 = *(undefined8 *)(pbVar23 + 0x10);
        uStack_5b0 = *(undefined8 *)(pbVar23 + 0x18);
        uStack_5a8 = *(undefined8 *)(pbVar23 + 0x20);
        uStack_5a0 = *(undefined8 *)(pbVar23 + 0x28);
        auStack_128._0_8_ = pbVar23 + 0x40;
        auStack_598 = *(undefined1 (*) [16])(pbVar23 + 0x30);
        pdb_1413f66a0(&uStack_268,&uStack_5c8);
        plVar30 = plVar30 + -8;
        pbVar23 = (byte *)auStack_128._0_8_;
        plVar16 = plVar30;
      }
    }
    if (auStack_1c8._0_8_ != 0) {
      pub_1406abac0((byte *)pfStack_100,auStack_1c8._0_8_ << 2,4);
    }
    pfVar19 = pfStack_2e8;
    if (uStack_358 != (byte *)0x0) {
      pub_1406abac0((byte *)pfStack_108,(longlong)uStack_358 * 0xc,4);
      pfVar19 = pfStack_2e8;
    }
    goto LAB_140837f9e;
  }
LAB_14083898a:
  if (lStack_370 != 0) {
    pub_1406abac0(pbStack_368,lStack_370 << 6,4);
  }
  pcVar31 = (char *)(lStack_248 + 0x18);
  pdb_140e9a350();
  LOCK();
  cVar3 = *pcVar31;
  if (cVar3 == '\x01') {
    *pcVar31 = '\0';
  }
  UNLOCK();
  if (cVar3 != '\x01') {
    pdb_142dbcef0(pcVar31,0);
  }
LAB_1408389da:
  uVar18 = uStack_110;
  if (lStack_380 != 0) {
    pub_1406abac0(pbStack_1f8,lStack_380 << 3,8);
  }
  if ((uVar18 & 0x7fffffffffffffff) == 0) goto LAB_140837c61;
  goto LAB_140837c5c;
LAB_140838d20:
  iVar28 = iVar29;
  if (pfVar27 == pfVar38) goto LAB_1408395a0;
  fVar61 = *pfVar27;
  fVar60 = pfVar27[1];
  fVar71 = pfVar27[2];
  uVar12 = pdb_1413fa210(&lStack_450);
  uStack_268 = (float *)CONCAT44(fVar71,fVar61);
  auVar48 = ZEXT416((uint)(fVar60 + _DAT_14300a420 + _DAT_14300a4e0));
  pdb_140df4540(&fStack_46c,&uStack_268);
  fVar60 = fStack_464;
  fVar61 = fStack_46c;
  auVar62 = auVar48._0_12_;
  param_1 = (float *)(ulonglong)uVar12;
  if (pfStack_108 <= param_1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_1,pfStack_108,&UNK_14300a840);
  }
  pfVar19 = (float *)((longlong)param_1 + 1);
  if (pfStack_108 <= pfVar19) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(pfVar19,pfStack_108,&UNK_14300a840);
  }
  if (pfStack_100 <= param_1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_1,pfStack_100,&UNK_14300a858);
  }
  if (pfStack_100 <= pfVar19) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(pfVar19,pfStack_100,&UNK_14300a858);
  }
  fVar71 = (*(float *)(pbStack_148 + (longlong)param_1 * 8 + 8) -
           *(float *)(pbStack_148 + (longlong)param_1 * 8)) * extraout_XMM0_Da +
           *(float *)(pbStack_148 + (longlong)param_1 * 8);
  fVar75 = (*(float *)(pbStack_148 + (longlong)param_1 * 8 + 0xc) -
           *(float *)(pbStack_148 + (longlong)param_1 * 8 + 4)) * extraout_XMM0_Da +
           *(float *)(pbStack_148 + (longlong)param_1 * 8 + 4);
  fVar46 = _DAT_142e36f28 / SQRT(fVar75 * fVar75 + fVar71 * fVar71);
  bVar40 = (int)fVar46 - 1U < 0x7fffff ||
           (int)ABS(fVar46) - 0x800000U < 0x7f000000 && -1 < (int)fVar46;
  if (bVar40) {
    fVar71 = fVar71 * fVar46;
  }
  else {
    fVar71 = 0.0;
  }
  if (!SBORROW8(0,uStack_110)) {
    if (pfVar5 <= param_1) goto LAB_140839ac7;
    if (pfVar5 <= pfVar19) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pfVar19,pfVar5,&UNK_14300a8d0);
    }
    auVar62._0_4_ =
         (*(float *)(pbStack_1e8 + (longlong)param_1 * 4 + 4) -
         *(float *)(pbStack_1e8 + (longlong)param_1 * 4)) * extraout_XMM0_Da +
         *(float *)(pbStack_1e8 + (longlong)param_1 * 4);
    auVar62._4_8_ = 0;
  }
  fVar77 = (*(float *)(pbStack_140 + (longlong)param_1 * 4 + 4) -
           *(float *)(pbStack_140 + (longlong)param_1 * 4)) * extraout_XMM0_Da +
           *(float *)(pbStack_140 + (longlong)param_1 * 4);
  fVar79 = 0.0;
  fVar78 = (fVar77 + _DAT_142f684a4) * _DAT_142e36f50;
  if (!SBORROW8(0,uStack_110)) {
    fVar78 = auVar62._0_4_;
    fVar79 = auVar62._8_4_;
  }
  fVar80 = fStack_468 + _DAT_14300a4e4;
  fVar76 = _DAT_142e377f0;
  if (bVar40) {
    fVar76 = fVar75 * (float)((uint)fVar46 ^ _DAT_142e37820);
  }
  uStack_198 = (float *)CONCAT44(fVar71,fVar76);
  pdb_140df4520(&uStack_268,&uStack_198);
  fVar75 = SUB84(uStack_268,0);
  uVar15 = (ulonglong)uStack_268 >> 0x20;
  fVar46 = (float)uStack_260;
  uStack_198 = (float *)CONCAT44(fVar71,fVar76);
  pdb_140df4520(&uStack_268);
  pfVar27 = pfVar27 + 3;
  iVar29 = iVar28 + 1;
  fVar71 = fVar77 + _DAT_142e37ae0 + _DAT_14300a4e8;
  if (fVar71 <= _DAT_142e3b1d8) {
    fVar71 = _DAT_142e3b1d8;
  }
  fVar71 = fVar71 * _DAT_142e36f50 - pfStack_1e0._0_4_;
  fVar78 = fVar78 + _DAT_14300a440;
  fVar82 = uStack_268._4_4_ * fVar78 * (float)auStack_278._0_4_ + fVar80;
  fVar75 = (fVar61 - fVar71 * fVar75 * (float)uStack_488) + _DAT_14300a4f0;
  fVar77 = (fVar80 - fVar71 * (float)uVar15 * uStack_488._4_4_) + _UNK_14300a4f4;
  fVar46 = (fVar60 - fVar46 * fVar71 * (float)auStack_278._0_4_) + 0.0;
  fVar71 = fVar82 - fVar77;
  auStack_1c8._0_16_ = ZEXT416((uint)fVar46);
  fVar76 = (fVar61 + fVar78 * (float)uStack_268 * (float)uStack_488) - fVar75;
  fVar46 = (fVar60 + fVar78 * (float)uStack_260 * uStack_488._4_4_) - fVar46;
  fVar60 = (fVar79 * 0.0 * fStack_480 + 0.0) - ((0.0 - fStack_480 * 0.0) + _UNK_14300a4f8);
  fVar78 = (fVar79 * 0.0 * fStack_47c + 0.0) - ((0.0 - fStack_47c * 0.0) + _UNK_14300a4fc);
  fStack_3e8 = fVar76 * fVar76;
  fStack_3e4 = fVar46 * fVar46;
  fStack_3e0 = fVar60 * fVar60;
  fStack_3dc = fVar78 * fVar78;
  auStack_498._4_4_ = fStack_3e4;
  auStack_498._0_4_ = fStack_3e4;
  fStack_490 = fStack_3dc;
  fStack_48c = fStack_3dc;
  fVar61 = SQRT(fVar71 * fVar71 + fStack_3e8 + fStack_3e4);
  auStack_128 = ZEXT416((uint)fVar61);
  if (_DAT_143009d64 <= fVar61) {
    auVar74._8_4_ = fVar60;
    auVar74._4_4_ = fVar46;
    auVar74._12_4_ = fVar78;
    auVar74._0_4_ = fVar71;
    auVar50._4_4_ = fVar61;
    auVar50._0_4_ = fVar61;
    auVar50._8_8_ = 0;
    auVar48 = divps(auVar74,auVar50);
    fVar61 = fVar76 / fVar61;
    fVar71 = 0.0;
    fVar78 = auVar48._0_4_;
    fVar79 = auVar48._4_4_;
    fVar60 = fVar61 - fVar78 * 0.0;
    fVar80 = fVar78 * 0.0 - fVar79;
    fVar81 = fVar79 * 0.0 - fVar61 * 0.0;
    fVar84 = _DAT_142e36f28 / SQRT(fVar60 * fVar60 + fVar81 * fVar81 + fVar80 * fVar80);
    bVar40 = (int)ABS(fVar84) - 0x800000U < 0x7f000000;
    bVar39 = (int)fVar84 - 1U < 0x7fffff;
    if (bVar39 || bVar40 && -1 < (int)fVar84) {
      fVar71 = fVar60 * fVar84;
    }
    param_1 = (float *)((longlong)param_1 + (ulonglong)(_DAT_142e36f50 < extraout_XMM0_Da));
    if (pfStack_138 <= param_1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(param_1,pfStack_138,&UNK_14300a870);
    }
    lVar14 = pdb_140b54f80(uStack_408,*(undefined8 *)(pbStack_1f8 + (longlong)param_1 * 8),
                           &UNK_14300a888);
    if (lVar14 == 0) {
      fVar60 = 0.0;
    }
    else {
      fVar60 = *(float *)(lVar14 + 0x284);
    }
    uVar12 = (uint)(bVar39 || bVar40 && -1 < (int)fVar84);
    fVar80 = (float)((int)(uVar12 << 0x1f) >> 0x1f & (uint)(fVar80 * fVar84));
    fVar81 = (float)((int)(uVar12 << 0x1f) >> 0x1f & (uint)(fVar81 * fVar84));
    fVar84 = fVar79 * fVar80 - fVar61 * fVar71;
    if (0.0 < fVar60) {
      fVar83 = fVar82;
      if (fVar77 <= fVar82) {
        fVar83 = fVar77;
      }
      if ((float)(~-(uint)NAN(fVar77) & (uint)fVar83 | -(uint)NAN(fVar77) & (uint)fVar82) +
          ((float)((uint)fVar81 & (uint)DAT_142e377e0) + (float)((uint)fVar84 & (uint)DAT_142e377e0)
          ) * _DAT_142e42360 < fVar60) goto LAB_140838d20;
    }
    fVar60 = fVar71 * _DAT_142e3787c;
    uVar13 = pdb_1409012c0(uStack_3d8);
    pdb_140a77410(&uStack_268);
    uStack_190._0_4_ = (fVar61 * fVar81 - fVar78 * fVar80) * _UNK_14300a508;
    uStack_190._4_4_ = fVar61 * (float)auStack_128._0_4_;
    uStack_188._0_4_ = fVar78 * (float)auStack_128._0_4_;
    uStack_188._4_4_ = fVar79 * (float)auStack_128._0_4_;
    uStack_198 = (float *)CONCAT44(fVar84 * _UNK_14300a504,
                                   (fVar71 * fVar78 - fVar79 * fVar81) * _DAT_14300a500);
    uStack_180 = (longlong *)
                 CONCAT44((float)((ulonglong)_UNK_14300a518 >> 0x20) * fVar81,
                          (float)_UNK_14300a518 * fVar80);
    uStack_16c = auStack_1c8._0_4_;
    uStack_168 = 0;
    uStack_15c = 0x19;
    lStack_158 = lStack_228;
    uStack_150 = uStack_220;
    fStack_178 = fVar60;
    fStack_174 = fVar75;
    fStack_170 = fVar77;
    iStack_164 = iVar28;
    uStack_160 = uVar13;
    pdb_1413f6d90(&pfStack_328);
    if ((char)pfStack_1a8 == '\x01') {
      fVar61 = _DAT_142e36f28 / SQRT((float)auStack_498._0_4_ + fStack_3e8);
      uVar12 = (uint)((int)fVar61 - 1U < 0x7fffff ||
                     (int)ABS(fVar61) - 0x800000U < 0x7f000000 && -1 < (int)fVar61);
      uStack_268 = (float *)(CONCAT44((int)(uVar12 << 0x1f) >> 0x1f,(int)(uVar12 << 0x1f) >> 0x1f) &
                            CONCAT44(fVar46 * fVar61,fVar76 * fVar61));
      pdb_140df4520(&fStack_460,&uStack_268);
      fVar71 = fStack_458;
      fVar60 = fStack_45c;
      fVar61 = fStack_460;
      fVar78 = 0.0;
      fVar46 = fStack_460 - fStack_45c * 0.0;
      fVar79 = fStack_45c * 0.0 - fStack_458;
      fVar76 = fStack_458 * 0.0 - fStack_460 * 0.0;
      fVar80 = _DAT_142e36f28 / SQRT(fVar46 * fVar46 + fVar76 * fVar76 + fVar79 * fVar79);
      bVar40 = (int)ABS(fVar80) - 0x800000U < 0x7f000000;
      bVar39 = (int)fVar80 - 1U < 0x7fffff;
      if (bVar39 || bVar40 && -1 < (int)fVar80) {
        fVar78 = fVar46 * fVar80 * _DAT_14300a520;
      }
      fVar75 = fVar75 + _DAT_14300a530;
      fVar77 = fVar77 + _UNK_14300a534;
      uVar13 = pdb_1409012c0(uStack_3d8);
      pdb_140a77410(&uStack_268);
      uStack_190._0_4_ = fVar71 * _DAT_14300a520;
      uVar12 = (uint)(bVar39 || bVar40 && -1 < (int)fVar80);
      uStack_180 = (longlong *)
                   (CONCAT44((int)(uVar12 << 0x1f) >> 0x1f,(int)(uVar12 << 0x1f) >> 0x1f) &
                   CONCAT44(fVar76 * fVar80 * _DAT_14300a520,fVar79 * fVar80 * _DAT_14300a520));
      uStack_198 = (float *)CONCAT44(fVar60 * _DAT_14300a520,fVar61 * _DAT_14300a520);
      uStack_190._4_4_ = (float)_DAT_14300a540;
      uStack_188._0_4_ = (float)((ulonglong)_DAT_14300a540 >> 0x20);
      uStack_188._4_4_ = 0.0;
      uStack_16c = auStack_1c8._0_4_;
      uStack_168 = 0;
      uStack_15c = 0x19;
      lStack_158 = lStack_228;
      uStack_150 = uStack_220;
      fStack_178 = fVar78;
      fStack_174 = fVar75;
      fStack_170 = fVar77;
      iStack_164 = iVar28;
      uStack_160 = uVar13;
      pdb_1413f6d90(&pfStack_328);
    }
  }
  goto LAB_140838d20;
LAB_1408395a0:
  pcVar31 = (char *)(lStack_308 + 0x18);
  pdb_140e9a350();
  fVar61 = _DAT_142e36f28;
  LOCK();
  cVar3 = *pcVar31;
  if (cVar3 == '\x01') {
    *pcVar31 = '\0';
  }
  UNLOCK();
  if (cVar3 != '\x01') {
    pdb_142dbcef0(pcVar31,0);
  }
  if (pfStack_378 != (float *)0x0) {
    pub_1406abac0((byte *)pfStack_1a0,(longlong)pfStack_378 * 0xc,4);
  }
  goto LAB_1408389da;
  while (lVar14 = lVar37 + 4, *(char *)(lVar33 + lVar37) != '\x03') {
LAB_140837230:
    lVar37 = lVar14;
    if (uVar18 * 4 == lVar37) break;
  }
  fStack_3e8 = (float)CONCAT31(fStack_3e8._1_3_,uVar18 * 4 != lVar37 | bVar43);
  lVar14 = plStack_130[3];
joined_r0x00014083725e:
  if (lVar14 != 0) {
    uVar20 = pdb_1400af680(plStack_280,&uStack_1b0);
    lVar14 = *plStack_130;
    uVar18 = plStack_130[1];
    bVar43 = (byte)(uVar20 >> 0x39);
    auVar48 = ZEXT216(CONCAT11(bVar43,bVar43));
    auVar48 = pshuflw(auVar48,auVar48,0);
    lVar37 = 0;
    while( true ) {
      uVar20 = uVar20 & uVar18;
      auVar65 = *(undefined1 (*) [16])(lVar14 + uVar20);
      auVar66[0] = -(auVar65[0] == auVar48[0]);
      auVar66[1] = -(auVar65[1] == auVar48[1]);
      auVar66[2] = -(auVar65[2] == auVar48[2]);
      auVar66[3] = -(auVar65[3] == auVar48[3]);
      auVar66[4] = -(auVar65[4] == auVar48[4]);
      auVar66[5] = -(auVar65[5] == auVar48[5]);
      auVar66[6] = -(auVar65[6] == auVar48[6]);
      auVar66[7] = -(auVar65[7] == auVar48[7]);
      auVar66[8] = -(auVar65[8] == auVar48[0]);
      auVar66[9] = -(auVar65[9] == auVar48[1]);
      auVar66[10] = -(auVar65[10] == auVar48[2]);
      auVar66[0xb] = -(auVar65[0xb] == auVar48[3]);
      auVar66[0xc] = -(auVar65[0xc] == auVar48[4]);
      auVar66[0xd] = -(auVar65[0xd] == auVar48[5]);
      auVar66[0xe] = -(auVar65[0xe] == auVar48[6]);
      auVar66[0xf] = -(auVar65[0xf] == auVar48[7]);
      uVar35 = (ushort)(SUB161(auVar66 >> 7,0) & 1) | (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe | (ushort)(auVar66[0xf] >> 7) << 0xf;
      uVar41 = (uint)uVar35;
      while (uVar35 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar41; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar33 = (uVar7 + uVar20 & uVar18) * -0x140;
        if ((uVar12 == *(uint *)(lVar14 + -0x140 + lVar33)) &&
           (uVar4 == *(uint *)(lVar14 + -0x13c + lVar33))) {
          if (*(longlong *)(lVar14 + lVar33 + -0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_14300a8b8);
          }
          lVar14 = *(longlong *)(lVar14 + lVar33 + -0xa0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143305b70);
          }
          LOCK();
          bVar40 = *(char *)(lVar14 + 0x18) == '\0';
          if (bVar40) {
            *(char *)(lVar14 + 0x18) = '\x01';
          }
          UNLOCK();
          if (!bVar40) {
            pdb_142dbd1a0(lVar14 + 0x18,CONCAT71((int7)(uVar18 >> 8),1),1000000000);
          }
          pdb_140e9a150(lVar14 + 0x18);
          if ((*(longlong *)(lVar14 + 0x10) == 0) ||
             (piVar24 = (int *)(*(longlong *)(lVar14 + 8) + *(longlong *)(lVar14 + 0x10) * 4 + -4),
             piVar24 == (int *)0x0)) {
            pfVar38 = *(float **)(lStack_3f8 + 0x10);
            if (pfVar38 == (float *)0x0) goto LAB_1408397b9;
            iVar29 = (int)pfVar38 + -1;
          }
          else {
            iVar29 = *piVar24;
            pfVar38 = *(float **)(lStack_3f8 + 0x10);
          }
          pfStack_328 = *(float **)(lStack_3f8 + 8);
          pbStack_318 = *(byte **)(lStack_3f8 + 0x18);
          pbStack_310 = *(byte **)(lStack_3f8 + 0x20);
          pfStack_300 = *(float **)(lStack_3f8 + 0x28);
          pbStack_2f8 = *(byte **)(lStack_3f8 + 0x30);
          pfStack_2e0 = *(float **)(lStack_3f8 + 0x38);
          pfStack_2d8 = *(float **)(lStack_3f8 + 0x40);
          pfStack_2d0 = (float *)CONCAT44(pfStack_2d0._4_4_,iVar29);
          pbStack_2f0 = pbStack_4e0;
          pfStack_2e8 = pfStack_4d8;
          pfStack_320 = pfVar38;
          lStack_308 = lVar14;
          lVar14 = pdb_140c40010(uStack_400,uVar15);
          auVar48._12_4_ = 0;
          auVar48._0_12_ = stack0xfffffffffffffd8c;
          _auStack_278 = auVar48 << 0x20;
          if (lVar14 != 0) {
            lVar14 = pdb_1409014e0(lVar14 + 0x38);
            if (lVar14 != 0) {
              auStack_278._0_4_ = *(undefined4 *)(lVar14 + 0x10);
            }
          }
          fVar60 = fStack_1fc;
          pfVar38 = pfStack_448;
          *puStack_4d0 = uStack_3c4;
          fVar61 = _DAT_142e36f28;
          if (plStack_130[3] == 0) goto LAB_140837bf0;
          pfStack_1e0 = pfStack_440;
          uVar18 = pdb_1400af680(plStack_280,&uStack_1b0);
          lVar14 = *plStack_130;
          bVar43 = (byte)(uVar18 >> 0x39);
          auVar48 = ZEXT216(CONCAT11(bVar43,bVar43));
          auVar48 = pshuflw(auVar48,auVar48,0);
          lVar37 = 0;
          goto LAB_1408374e7;
        }
        uVar35 = (ushort)(uVar41 - 1) & (ushort)uVar41;
        uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar35);
      }
      auVar55[0] = -(auVar65[0] == -1);
      auVar55[1] = -(auVar65[1] == -1);
      auVar55[2] = -(auVar65[2] == -1);
      auVar55[3] = -(auVar65[3] == -1);
      auVar55[4] = -(auVar65[4] == -1);
      auVar55[5] = -(auVar65[5] == -1);
      auVar55[6] = -(auVar65[6] == -1);
      auVar55[7] = -(auVar65[7] == -1);
      auVar55[8] = -(auVar65[8] == -1);
      auVar55[9] = -(auVar65[9] == -1);
      auVar55[10] = -(auVar65[10] == -1);
      auVar55[0xb] = -(auVar65[0xb] == -1);
      auVar55[0xc] = -(auVar65[0xc] == -1);
      auVar55[0xd] = -(auVar65[0xd] == -1);
      auVar55[0xe] = -(auVar65[0xe] == -1);
      auVar55[0xf] = -(auVar65[0xf] == -1);
      if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 || (SUB161(auVar55 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar55 >> 0x17,0) & 1) != 0) || (SUB161(auVar55 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar55 >> 0x27,0) & 1) != 0) || (SUB161(auVar55 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar55 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar55 >> 0x3f,0) & 1) != 0) || (SUB161(auVar55 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar55 >> 0x4f,0) & 1) != 0) || (SUB161(auVar55 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar55 >> 0x5f,0) & 1) != 0) || (SUB161(auVar55 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar55 >> 0x6f,0) & 1) != 0) || (SUB161(auVar55 >> 0x77,0) & 1) != 0) ||
          auVar55[0xf] < '\0') break;
      uVar20 = uVar20 + lVar37 + 0x10;
      lVar37 = lVar37 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_14300a5d8,0x16,&UNK_14300a8a0);
LAB_140839b73:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

