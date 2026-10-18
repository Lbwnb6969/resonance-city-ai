// VA 0x1407f0120, PDB extent 23384 bytes
// system_wall_constructor::construct_arches::construct_arches
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::construct_arches::construct_arches
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/mod.rs
   Extent: 23384 */

void pdb_1407f0120(undefined8 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  byte *param_4,undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,
                  longlong *param_8,longlong *param_9,undefined8 *param_10,undefined8 *param_11,
                  longlong *param_12,longlong *param_13,longlong *param_14)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  char cVar36;
  byte bVar37;
  uint uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong *plVar43;
  undefined8 *puVar44;
  byte *pbVar45;
  longlong lVar46;
  int *piVar47;
  undefined1 (*pauVar48) [16];
  byte *pbVar49;
  float *pfVar50;
  longlong lVar51;
  ulonglong uVar52;
  undefined4 *puVar53;
  ulonglong *puVar54;
  ulonglong uVar55;
  undefined1 (*pauVar56) [16];
  undefined4 *puVar57;
  undefined1 (*pauVar58) [16];
  undefined8 *puVar59;
  uint uVar60;
  undefined8 *puVar61;
  undefined1 (*pauVar62) [16];
  char *pcVar63;
  undefined1 (*pauVar64) [16];
  undefined *puVar65;
  undefined *puVar66;
  ulonglong uVar67;
  byte *pbVar68;
  undefined *puVar69;
  ushort uVar70;
  longlong lVar71;
  undefined *puVar72;
  longlong lVar73;
  longlong *plVar74;
  undefined8 uVar75;
  undefined1 (*pauVar76) [16];
  bool bVar77;
  uint uVar78;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar79;
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar121;
  float fVar122;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float fVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  float fVar169;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar170 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar171 [16];
  float unaff_XMM7_Da;
  char unaff_XMM8_Ba;
  undefined1 uVar172;
  char unaff_XMM8_Bb;
  undefined1 uVar173;
  char unaff_XMM8_Bc;
  undefined1 uVar174;
  char unaff_XMM8_Bd;
  undefined1 uVar175;
  char unaff_XMM8_Be;
  char unaff_XMM8_Bf;
  char unaff_XMM8_Bg;
  char unaff_XMM8_Bh;
  char unaff_XMM8_Bi;
  char unaff_XMM8_Bj;
  char unaff_XMM8_Bk;
  char unaff_XMM8_Bl;
  char unaff_XMM8_Bm;
  char unaff_XMM8_Bn;
  char unaff_XMM8_Bo;
  char unaff_XMM8_Bp;
  float fVar176;
  float fVar177;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar178 [16];
  undefined1 (*apauStack_498 [2]) [16];
  undefined8 uStack_488;
  undefined8 uStack_480;
  longlong lStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  longlong lStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  byte *pbStack_448;
  byte *pbStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  int iStack_428;
  ulonglong uStack_420;
  ulonglong uStack_418;
  undefined4 uStack_410;
  undefined4 *puStack_408;
  longlong lStack_400;
  undefined4 *puStack_3f8;
  undefined4 *puStack_3f0;
  longlong lStack_3e8;
  ulonglong uStack_3e0;
  longlong lStack_3d8;
  undefined1 (*pauStack_3d0) [16];
  undefined1 (*pauStack_3c8) [16];
  ulonglong uStack_3c0;
  undefined1 (*pauStack_3b8) [16];
  undefined1 (*pauStack_3b0) [16];
  undefined1 (*pauStack_3a8) [16];
  longlong lStack_3a0;
  byte *pbStack_398;
  ulonglong uStack_390;
  ulonglong uStack_388;
  undefined1 (*pauStack_378) [16];
  undefined4 uStack_370;
  undefined8 *puStack_368;
  longlong lStack_360;
  ulonglong uStack_358;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  ulonglong uStack_340;
  byte *pbStack_338;
  byte *pbStack_330;
  longlong *plStack_328;
  uint *puStack_320;
  longlong *plStack_318;
  undefined8 uStack_310;
  undefined1 (*pauStack_308) [16];
  longlong lStack_300;
  undefined1 (*pauStack_2f8) [16];
  undefined1 (*pauStack_2f0) [16];
  ulonglong uStack_2e8;
  undefined1 (*pauStack_2e0) [16];
  byte *pbStack_2d8;
  undefined1 (*pauStack_2d0) [16];
  longlong lStack_2c8;
  longlong *plStack_2c0;
  longlong lStack_2b8;
  longlong lStack_2b0;
  undefined1 (*pauStack_2a8) [16];
  longlong lStack_2a0;
  undefined1 (*pauStack_298) [16];
  undefined1 (*pauStack_290) [16];
  undefined8 *puStack_288;
  longlong *plStack_280;
  undefined1 (*pauStack_278) [16];
  undefined1 (*pauStack_270) [16];
  undefined1 (*pauStack_268) [16];
  undefined1 (*pauStack_260) [16];
  longlong lStack_258;
  undefined8 uStack_250;
  undefined1 (*pauStack_248) [16];
  ulonglong uStack_240;
  ulonglong uStack_238;
  undefined1 (*pauStack_230) [16];
  ulonglong uStack_228;
  byte *pbStack_220;
  longlong *plStack_218;
  undefined1 (*pauStack_210) [16];
  undefined1 (*pauStack_208) [16];
  undefined1 (*pauStack_200) [16];
  undefined1 (*pauStack_1f8) [16];
  longlong lStack_1f0;
  byte *pbStack_1e8;
  ulonglong uStack_1e0;
  ulonglong uStack_1d8;
  undefined8 uStack_1c8;
  undefined1 (*pauStack_1c0) [16];
  undefined1 (*pauStack_1b8) [16];
  ushort uStack_1b0;
  undefined6 uStack_1ae;
  byte *pbStack_1a8;
  ulonglong uStack_1a0;
  ulonglong uStack_198;
  byte *pbStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined *puStack_178;
  undefined1 (*pauStack_170) [16];
  undefined4 uStack_168;
  undefined4 uStack_164;
  ulonglong uStack_160;
  longlong lStack_158;
  longlong lStack_150;
  float fStack_148;
  uint uStack_144;
  ulonglong uStack_140;
  undefined8 *puStack_138;
  undefined1 (*pauStack_130) [16];
  float fStack_124;
  undefined1 (*pauStack_120) [16];
  undefined1 (*pauStack_118) [16];
  float fStack_110;
  undefined1 uStack_10b;
  byte bStack_10a;
  char cStack_109;
  undefined1 (*pauStack_108) [16];
  byte *pbStack_100;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pauVar64 = param_2;
  pbStack_100 = param_4;
  cStack_109 = pdb_140e94b40();
  if (cStack_109 == '\0') goto LAB_1407f0328;
  pauVar62 = (undefined1 (*) [16])0x3b;
  lVar41 = pdb_1407f5c80(0x3b);
  puVar72 = &UNK_143006248;
  if (lVar41 == 1) {
    if ((undefined1 (*) [16])0x3b < pauVar64) {
      pdb_142dc8070(&UNK_143006248,0x3b,0,pauVar64,&UNK_143006300);
LAB_1407f4824:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2();
    }
    uVar42 = pdb_1407f5c80(pauVar64);
    if ((uVar42 & 1) != 0) {
      puVar72 = (undefined *)((longlong)*pauVar64 + 2);
      if ((undefined *)0x3b < puVar72) {
        uVar42 = pdb_142dc8070(&UNK_143006248,0x3b,puVar72,0x3b,&UNK_143006318);
LAB_1407f486e:
        uStack_f1 = 1;
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar42);
      }
      pauVar62 = (undefined1 (*) [16])(0x39 - (longlong)pauVar64);
      puVar72 = (undefined *)((longlong)pauVar64[0x14300624] + 10);
    }
  }
  puVar65 = &UNK_143005e37;
  plVar74 = (longlong *)&UNK_143005dfc;
  do {
    bVar37 = puVar65[-1];
    uVar38 = (uint)(char)bVar37;
    if ((char)bVar37 < '\0') {
      bVar2 = puVar65[-2];
      if ((char)bVar2 < -0x40) {
        bVar3 = puVar65[-3];
        if ((char)bVar3 < -0x40) {
          pbVar45 = puVar65 + -4;
          puVar65 = puVar65 + -4;
          uVar38 = bVar3 & 0x3f | (*pbVar45 & 7) << 6;
        }
        else {
          puVar65 = puVar65 + -3;
          uVar38 = bVar3 & 0xf;
        }
        uVar38 = bVar2 & 0x3f | uVar38 << 6;
      }
      else {
        puVar65 = puVar65 + -2;
        uVar38 = bVar2 & 0x1f;
      }
      uVar38 = (uint)(bVar37 & 0x3f) | uVar38 << 6;
      if (uVar38 != 0x5c) goto LAB_1407f0294;
LAB_1407f02a5:
      puVar66 = puVar65 + -0x143005dfb;
      if ((undefined *)0x3b < puVar66) {
        pdb_142dc8070(&UNK_143005dfc,0x3b,puVar66,0x3b,&UNK_1430062e0);
LAB_1407f4713:
        uStack_f1 = 1;
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143005f48);
      }
      pauVar64 = (undefined1 (*) [16])(0x3b - (longlong)puVar66);
      plVar74 = (longlong *)(puVar65 + 1);
      goto LAB_1407f02c7;
    }
    puVar65 = puVar65 + -1;
    if (uVar38 == 0x5c) goto LAB_1407f02a5;
LAB_1407f0294:
    if (uVar38 == 0x2f) goto LAB_1407f02a5;
  } while (puVar65 != &UNK_143005dfc);
  pauVar64 = (undefined1 (*) [16])0x3b;
LAB_1407f02c7:
  plVar43 = (longlong *)pdb_140e97000();
  if ((char)plVar43[0xd] != '\x01') goto LAB_1407f42ec;
LAB_1407f02d6:
  if (*plVar43 == 0) {
    *plVar43 = -1;
    pauStack_120 = (undefined1 (*) [16])plVar43;
    uStack_310 = pdb_140e94f10(plVar43 + 1,puVar72,pauVar62,plVar74,pauVar64,1,0);
    *(longlong *)pauStack_120 = *(longlong *)pauStack_120 + 1;
LAB_1407f0328:
    puVar44 = (undefined8 *)pdb_1413e4400(*param_6,&UNK_1433056c0);
    if ((puVar44 == (undefined8 *)0x0) ||
       (pbVar45 = (byte *)(**(code **)(puVar44[1] + 0x18))(*puVar44), pbVar45 == (byte *)0x0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143005e38);
    }
    bStack_10a = 0;
    uStack_1c8 = (undefined1 (*) [16])*param_1;
    lVar41 = param_1[1];
    uVar42 = *(ulonglong *)*uStack_1c8;
    uVar55 = 0;
    uVar67 = uVar42 - *(ulonglong *)(lVar41 + 0x18);
    if (uVar42 < *(ulonglong *)(lVar41 + 0x18)) {
      uVar67 = uVar55;
    }
    uVar52 = uVar42 - *(ulonglong *)(lVar41 + 0x38);
    if (uVar42 < *(ulonglong *)(lVar41 + 0x38)) {
      uVar52 = uVar55;
    }
    pauStack_1c0 = (undefined1 (*) [16])(uVar67 * 0x10 + *(longlong *)(lVar41 + 8));
    uVar42 = *(ulonglong *)(lVar41 + 0x10) - uVar67;
    if (*(ulonglong *)(lVar41 + 0x10) < uVar67) {
      pauStack_1c0 = (undefined1 (*) [16])0x8;
      uVar42 = uVar55;
    }
    lVar71 = uVar52 * 0x10 + *(longlong *)(lVar41 + 0x28);
    uVar67 = *(ulonglong *)(lVar41 + 0x30) - uVar52;
    if (*(ulonglong *)(lVar41 + 0x30) < uVar52) {
      lVar71 = 8;
      uVar67 = uVar55;
    }
    uStack_1a0 = uVar67 + uVar42;
    *(ulonglong *)*uStack_1c8 = *(longlong *)(lVar41 + 0x40) - uStack_1a0;
    pauStack_1b8 = pauStack_1c0 + uVar42;
    pbStack_1a8 = (byte *)(uVar67 * 0x10 + lVar71);
    uStack_1b0 = (ushort)lVar71;
    uStack_1ae = (undefined6)((ulonglong)lVar71 >> 0x10);
    pdb_140fc81a0(&uStack_238,&uStack_1c8);
    puVar54 = *(ulonglong **)*param_2;
    lVar41 = *(longlong *)((longlong)*param_2 + 8);
    uVar42 = *puVar54;
    uVar55 = 0;
    uVar67 = uVar42 - *(ulonglong *)(lVar41 + 0x18);
    if (uVar42 < *(ulonglong *)(lVar41 + 0x18)) {
      uVar67 = uVar55;
    }
    uVar52 = uVar42 - *(ulonglong *)(lVar41 + 0x38);
    if (uVar42 < *(ulonglong *)(lVar41 + 0x38)) {
      uVar52 = uVar55;
    }
    lVar71 = uVar67 * 0x40 + *(longlong *)(lVar41 + 8);
    uVar42 = *(ulonglong *)(lVar41 + 0x10) - uVar67;
    if (*(ulonglong *)(lVar41 + 0x10) < uVar67) {
      lVar71 = 8;
      uVar42 = uVar55;
    }
    lVar51 = uVar52 * 0x40 + *(longlong *)(lVar41 + 0x28);
    uVar67 = *(ulonglong *)(lVar41 + 0x30) - uVar52;
    if (*(ulonglong *)(lVar41 + 0x30) < uVar52) {
      lVar51 = 8;
      uVar67 = uVar55;
    }
    *puVar54 = (*(longlong *)(lVar41 + 0x40) - uVar67) - uVar42;
    lVar41 = uVar42 * 0x40 + lVar71;
    lVar73 = uVar67 * 0x40 + lVar51;
    pbStack_220 = pbVar45;
    pauStack_120 = param_3;
    do {
      uVar42 = uStack_228;
      if ((lVar71 == 0) || (lVar71 == lVar41)) {
        if ((lVar51 == 0) || (lVar51 == lVar73)) goto LAB_1407f0561;
        lVar71 = 0;
        lVar46 = lVar51;
        lVar51 = lVar51 + 0x40;
      }
      else {
        lVar46 = lVar71;
        lVar71 = lVar71 + 0x40;
      }
      *puVar54 = *puVar54 + 1;
      uVar75 = *(undefined8 *)(lVar46 + 8);
      if (uStack_228 == uStack_238) {
        if (lVar71 == 0) {
          if (lVar51 == 0) {
            uVar67 = 0;
          }
          else {
            uVar67 = (ulonglong)(lVar73 - lVar51) >> 6;
          }
        }
        else {
          uVar67 = (ulonglong)(lVar41 - lVar71) >> 6;
          if (lVar51 != 0) {
            uVar67 = uVar67 + ((ulonglong)(lVar73 - lVar51) >> 6);
          }
        }
        pdb_142d7f1b0(&uStack_238,uStack_228,uVar67 + 1,8,8);
      }
      *(undefined8 *)((longlong)*pauStack_230 + uVar42 * 8) = uVar75;
      uStack_228 = uVar42 + 1;
    } while( true );
  }
  goto LAB_1407f42e0;
LAB_1407f0561:
  puVar54 = *(ulonglong **)*pauStack_120;
  lVar41 = *(longlong *)((longlong)*pauStack_120 + 8);
  uVar42 = *puVar54;
  uVar55 = 0;
  uVar67 = uVar42 - *(ulonglong *)(lVar41 + 0x18);
  if (uVar42 < *(ulonglong *)(lVar41 + 0x18)) {
    uVar67 = uVar55;
  }
  uVar52 = uVar42 - *(ulonglong *)(lVar41 + 0x38);
  if (uVar42 < *(ulonglong *)(lVar41 + 0x38)) {
    uVar52 = uVar55;
  }
  lVar71 = uVar67 * 0x20 + *(longlong *)(lVar41 + 8);
  uVar42 = *(ulonglong *)(lVar41 + 0x10) - uVar67;
  if (*(ulonglong *)(lVar41 + 0x10) < uVar67) {
    lVar71 = 8;
    uVar42 = uVar55;
  }
  lVar51 = uVar52 * 0x20 + *(longlong *)(lVar41 + 0x28);
  uVar67 = *(ulonglong *)(lVar41 + 0x30) - uVar52;
  if (*(ulonglong *)(lVar41 + 0x30) < uVar52) {
    lVar51 = 8;
    uVar67 = uVar55;
  }
  *puVar54 = (*(longlong *)(lVar41 + 0x40) - uVar67) - uVar42;
  lVar41 = uVar42 * 0x20 + lVar71;
  lVar73 = uVar67 * 0x20 + lVar51;
  do {
    uVar42 = uStack_228;
    pauVar64 = pauStack_230;
    if ((lVar71 == 0) || (lVar71 == lVar41)) {
      if ((lVar51 == 0) || (lVar51 == lVar73)) break;
      lVar71 = 0;
      lVar46 = lVar51;
      lVar51 = lVar51 + 0x20;
    }
    else {
      lVar46 = lVar71;
      lVar71 = lVar71 + 0x20;
    }
    *puVar54 = *puVar54 + 1;
    uVar75 = *(undefined8 *)(lVar46 + 8);
    if (uStack_228 == uStack_238) {
      if (lVar71 == 0) {
        if (lVar51 == 0) {
          uVar67 = 0;
        }
        else {
          uVar67 = (ulonglong)(lVar73 - lVar51) >> 5;
        }
      }
      else {
        uVar67 = (ulonglong)(lVar41 - lVar71) >> 5;
        if (lVar51 != 0) {
          uVar67 = uVar67 + ((ulonglong)(lVar73 - lVar51) >> 5);
        }
      }
      pdb_142d7f1b0(&uStack_238,uStack_228,uVar67 + 1,8,8);
    }
    *(undefined8 *)((longlong)*pauStack_230 + uVar42 * 8) = uVar75;
    uStack_228 = uVar42 + 1;
  } while( true );
  uVar67 = uVar42;
  if (1 < uStack_228) {
    if (uStack_228 < 0x15) {
      puVar54 = (ulonglong *)((longlong)*pauStack_230 + 8);
      lVar41 = 8;
      do {
        uVar52 = puVar54[-1];
        uVar55 = *puVar54;
        lVar71 = lVar41;
        if (uVar55 < uVar52) {
          do {
            lVar51 = lVar71;
            *(ulonglong *)((longlong)*pauStack_230 + lVar51) = uVar52;
            pauVar62 = pauStack_230;
            if (lVar51 == 8) goto LAB_1407f423b;
            uVar52 = *(ulonglong *)((longlong)pauStack_230[-1] + lVar51);
            lVar71 = lVar51 + -8;
          } while (uVar55 < uVar52);
          pauVar62 = (undefined1 (*) [16])((longlong)pauStack_230[-1] + lVar51 + 8);
LAB_1407f423b:
          *(ulonglong *)*pauVar62 = uVar55;
        }
        puVar54 = puVar54 + 1;
        lVar41 = lVar41 + 8;
      } while (puVar54 != (ulonglong *)((longlong)*pauStack_230 + uStack_228 * 8));
      if (uStack_228 < 2) goto LAB_1407f06c9;
    }
    else {
      pdb_140a91360(pauStack_230,uStack_228,&uStack_10b);
    }
    lVar41 = 0;
    do {
      if (*(longlong *)((longlong)*pauVar64 + (lVar41 + 1) * 8) ==
          *(longlong *)((longlong)*pauVar64 + lVar41 * 8)) {
        uVar55 = lVar41 + 2;
        uStack_228 = lVar41 + 1;
        uVar67 = uStack_228;
        if (uVar55 < uVar42) {
          if (((int)uVar42 - (int)lVar41 & 1U) != 0) {
            if (*(longlong *)((longlong)pauVar64[1] + lVar41 * 8) !=
                *(longlong *)((longlong)*pauVar64 + lVar41 * 8)) {
              *(longlong *)((longlong)*pauVar64 + (lVar41 + 1) * 8) =
                   *(longlong *)((longlong)pauVar64[1] + lVar41 * 8);
              uStack_228 = lVar41 + 2;
            }
            uVar55 = lVar41 + 3;
          }
          uVar67 = uStack_228;
          if (uVar42 - 3 != lVar41) goto LAB_1407f4370;
        }
        break;
      }
      lVar41 = lVar41 + 1;
    } while (uVar42 - 1 != lVar41);
  }
  goto LAB_1407f06c9;
LAB_1407f125d:
  uVar42 = uVar42 & plVar74[1];
  auVar88 = *(undefined1 (*) [16])(*plVar74 + uVar42);
  auVar126[0] = -(auVar88[0] == auVar81[0]);
  auVar126[1] = -(auVar88[1] == auVar81[1]);
  auVar126[2] = -(auVar88[2] == auVar81[2]);
  auVar126[3] = -(auVar88[3] == auVar81[3]);
  auVar126[4] = -(auVar88[4] == auVar81[4]);
  auVar126[5] = -(auVar88[5] == auVar81[5]);
  auVar126[6] = -(auVar88[6] == auVar81[6]);
  auVar126[7] = -(auVar88[7] == auVar81[7]);
  auVar126[8] = -(auVar88[8] == auVar81[0]);
  auVar126[9] = -(auVar88[9] == auVar81[1]);
  auVar126[10] = -(auVar88[10] == auVar81[2]);
  auVar126[0xb] = -(auVar88[0xb] == auVar81[3]);
  auVar126[0xc] = -(auVar88[0xc] == auVar81[4]);
  auVar126[0xd] = -(auVar88[0xd] == auVar81[5]);
  auVar126[0xe] = -(auVar88[0xe] == auVar81[6]);
  auVar126[0xf] = -(auVar88[0xf] == auVar81[7]);
  uVar70 = (ushort)(SUB161(auVar126 >> 7,0) & 1) | (ushort)(SUB161(auVar126 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar126 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar126 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar126 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar126 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar126 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar126 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar126 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar126 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar126 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar126 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar126 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar126 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar126 >> 0x77,0) & 1) << 0xe | (ushort)(auVar126[0xf] >> 7) << 0xf;
  uVar78 = (uint)uVar70;
  while (uVar70 != 0) {
    uVar60 = 0;
    for (uVar13 = uVar78; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar60 = uVar60 + 1;
    }
    lVar71 = *plVar74 + (uVar60 + uVar42 & plVar74[1]) * -0x20;
    if (uStack_140 == *(ulonglong *)(lVar71 + -0x20)) {
      pauVar48 = *(undefined1 (**) [16])(lVar71 + -0x10);
      pauStack_3c8 = (undefined1 (*) [16])(*(longlong *)(lVar71 + -8) * 0x88 + (longlong)pauVar48);
      fStack_124 = 0.0;
      pauStack_2f8 = (undefined1 (*) [16])0x8;
      pauStack_2a8 = (undefined1 (*) [16])0x0;
      uVar42 = 0;
      lStack_300 = 0;
      lStack_2a0 = 0;
      fStack_110 = 0.0;
      fStack_148 = 0.0;
      pauStack_298 = pauVar64;
      pauStack_290 = param_3;
      puStack_288 = param_1;
      plStack_280 = plVar74;
      uStack_144 = uVar38;
      if (pauVar48 == pauStack_3c8) goto LAB_1407f273c;
      goto LAB_1407f1362;
    }
    uVar70 = (ushort)(uVar78 - 1) & (ushort)uVar78;
    uVar78 = CONCAT22((short)(uVar78 - 1 >> 0x10),uVar70);
  }
  auVar87[0] = -(auVar88[0] == unaff_XMM8_Ba);
  auVar87[1] = -(auVar88[1] == unaff_XMM8_Bb);
  auVar87[2] = -(auVar88[2] == unaff_XMM8_Bc);
  auVar87[3] = -(auVar88[3] == unaff_XMM8_Bd);
  auVar87[4] = -(auVar88[4] == unaff_XMM8_Be);
  auVar87[5] = -(auVar88[5] == unaff_XMM8_Bf);
  auVar87[6] = -(auVar88[6] == unaff_XMM8_Bg);
  auVar87[7] = -(auVar88[7] == unaff_XMM8_Bh);
  auVar87[8] = -(auVar88[8] == unaff_XMM8_Bi);
  auVar87[9] = -(auVar88[9] == unaff_XMM8_Bj);
  auVar87[10] = -(auVar88[10] == unaff_XMM8_Bk);
  auVar87[0xb] = -(auVar88[0xb] == unaff_XMM8_Bl);
  auVar87[0xc] = -(auVar88[0xc] == unaff_XMM8_Bm);
  auVar87[0xd] = -(auVar88[0xd] == unaff_XMM8_Bn);
  auVar87[0xe] = -(auVar88[0xe] == unaff_XMM8_Bo);
  auVar87[0xf] = -(auVar88[0xf] == unaff_XMM8_Bp);
  if ((((((((((((((((SUB161(auVar87 >> 7,0) & 1) != 0 || (SUB161(auVar87 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar87 >> 0x17,0) & 1) != 0) || (SUB161(auVar87 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar87 >> 0x27,0) & 1) != 0) || (SUB161(auVar87 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar87 >> 0x37,0) & 1) != 0) || (SUB161(auVar87 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar87 >> 0x47,0) & 1) != 0) || (SUB161(auVar87 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar87 >> 0x57,0) & 1) != 0) || (SUB161(auVar87 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar87 >> 0x67,0) & 1) != 0) || (SUB161(auVar87 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar87 >> 0x77,0) & 1) != 0) || auVar87[0xf] < '\0') {
LAB_1407f3b65:
    uStack_f1 = 1;
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143005eb8);
  }
  uVar42 = uVar42 + lVar41 + 0x10;
  lVar41 = lVar41 + 0x10;
  goto LAB_1407f125d;
LAB_1407f1362:
  uStack_358 = uStack_240;
  puStack_138 = *(undefined8 **)(pbStack_100 + -0x1e0);
  pauStack_130 = *(undefined1 (**) [16])(pbStack_100 + -0x1d8);
  uVar75 = *(undefined8 *)(pbStack_100 + -0x1c8);
  uVar4 = *(undefined8 *)(pbStack_100 + -0x1c0);
  uVar5 = *(undefined8 *)(pbStack_100 + -0x218);
  uVar6 = *(undefined8 *)(pbStack_100 + -0x210);
  uVar7 = *(undefined8 *)(pbStack_100 + -0x200);
  uVar8 = *(undefined8 *)(pbStack_100 + -0x1f8);
  uVar38 = *(uint *)(pbStack_100 + -0x50);
  uStack_f1 = 1;
  uStack_f2 = 1;
  uStack_3e0 = uVar42;
  pauStack_108 = pauVar48;
  uVar39 = pdb_1409303b0(pauStack_118);
  uStack_1c8 = (undefined1 (*) [16])CONCAT44(extraout_XMM0_Da_01,uVar39);
  uStack_f1 = 1;
  uStack_f2 = 1;
  pdb_1413fb850(&pauStack_208,pauStack_108,puStack_138,pauStack_130,uVar75,uVar4,uVar5,uVar6,uVar7,
                uVar8,uVar38 < 2,&uStack_1c8);
  pauVar64 = pauStack_1f8;
  pauStack_1f8 = (undefined1 (*) [16])0x0;
  pauStack_1c0 = (undefined1 (*) [16])((longlong)pauVar64 * 0x68 + (longlong)pauStack_200);
  uStack_1c8 = pauStack_200;
  uStack_1b0 = (ushort)pauVar64;
  uStack_1ae = (undefined6)((ulonglong)pauVar64 >> 0x10);
  pbStack_1a8 = (byte *)0x0;
  pauStack_1b8 = (undefined1 (*) [16])&pauStack_208;
  pdb_1413e7730(&uStack_250,&uStack_1c8);
  uStack_f1 = 1;
  uStack_f2 = 1;
  pdb_14049d240((undefined1 (*) [16])&pauStack_208);
  uVar42 = uStack_240;
  uStack_f1 = 1;
  uStack_f2 = 1;
  bVar37 = pdb_140b55090(pauStack_120,uStack_140);
  bVar37 = bVar37 & uVar42 - uStack_358 == 1;
  puStack_138 = (undefined8 *)CONCAT71(puStack_138._1_7_,bVar37);
  if (bVar37 == 0) {
    fStack_148 = fStack_148 + *(float *)((longlong)pauStack_108[8] + 4);
    bVar37 = pbStack_100[-0xc];
  }
  else {
    if (uStack_240 == 0) {
      uStack_f1 = 1;
      uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143005ed0);
    }
    uVar42 = *(ulonglong *)((longlong)pauStack_248[2] + 8);
    if (uVar42 == 0) {
      auVar81 = (undefined1  [16])0x0;
    }
    else {
      if (uVar42 == 1) {
        auVar81 = (undefined1  [16])0x0;
        uVar67 = 0;
      }
      else {
        pfVar50 = (float *)(*(longlong *)pauStack_248[2] + 0x10);
        auVar81 = (undefined1  [16])0x0;
        uVar67 = 0;
        do {
          auVar166._0_4_ = ~-(uint)(pfVar50[-3] < 0.0) & (uint)auVar81._0_4_;
          auVar166._4_4_ = 0;
          auVar166._8_4_ = auVar81._8_4_;
          auVar166._12_4_ = auVar81._12_4_;
          auVar166 = auVar166 |
                     ZEXT416((uint)(auVar81._0_4_ + _DAT_142e36f28) & -(uint)(pfVar50[-3] < 0.0));
          auVar81._0_4_ = ~-(uint)(*pfVar50 < 0.0) & (uint)auVar166._0_4_;
          auVar81._4_4_ = 0;
          auVar81._8_4_ = auVar166._8_4_;
          auVar81._12_4_ = auVar166._12_4_;
          auVar81 = ZEXT416(-(uint)(*pfVar50 < 0.0) & (uint)(auVar166._0_4_ + _DAT_142e36f28)) |
                    auVar81;
          uVar67 = uVar67 + 2;
          pfVar50 = pfVar50 + 6;
        } while ((uVar42 & 0xfffffffffffffffe) != uVar67);
        if ((uVar42 & 1) == 0) goto LAB_1407f163a;
      }
      uVar38 = -(uint)(*(float *)(*(longlong *)pauStack_248[2] + 4 + uVar67 * 0xc) < 0.0);
      auVar170._0_4_ = ~uVar38 & (uint)auVar81._0_4_;
      auVar170._4_4_ = 0;
      auVar170._8_4_ = auVar81._8_4_;
      auVar170._12_4_ = auVar81._12_4_;
      auVar81 = auVar170 | ZEXT416((uint)(auVar81._0_4_ + _DAT_142e36f28) & uVar38);
    }
LAB_1407f163a:
    fVar80 = *(float *)((longlong)pauStack_108[8] + 4);
    if (_DAT_142e36f50 < auVar81._0_4_ / (float)(longlong)uVar42) {
      fStack_124 = fStack_124 + fVar80;
      auVar88 = ZEXT416((uint)fStack_124);
      lStack_300 = lStack_300 + 1;
      bVar37 = pbStack_100[-0xc];
    }
    else {
      fStack_110 = fStack_110 + fVar80;
      auVar88 = ZEXT416((uint)fStack_110);
      lStack_2a0 = lStack_2a0 + 1;
      bVar37 = pbStack_100[-0xc];
    }
  }
  pauVar64 = (undefined1 (*) [16])((ulonglong)pauStack_130 & 0xffffffff00000000);
  if (bVar37 != 0) {
    if (uStack_240 < uStack_358) {
      uStack_f1 = 1;
      uStack_f2 = 1;
      pauStack_130 = (undefined1 (*) [16])((ulonglong)pauStack_130 & 0xffffffff00000000);
      pdb_142dc8420(uStack_358,uStack_240,uStack_240,&UNK_143005ee8);
      goto LAB_1407f496a;
    }
    pauStack_130 = (undefined1 (*) [16])CONCAT44(pauStack_130._4_4_,1);
    unaff_XMM6 = ZEXT816(0);
    pauVar64 = pauStack_130;
    if (uStack_358 == uStack_240) {
      unaff_XMM7_Da = 0.0;
    }
    else {
      puVar44 = (undefined8 *)(uStack_358 * 0x68 + (longlong)pauStack_248);
      unaff_XMM7_Da = 0.0;
      do {
        if (puVar44[2] != 0) {
          lVar71 = puVar44[2] * 4;
          uVar42 = puVar44[5];
          lVar51 = 1;
          uVar67 = 0;
          lVar41 = lVar71;
          fVar80 = unaff_XMM7_Da;
          do {
            if (uVar42 == uVar67) {
              uVar67 = lVar71 - 4U >> 2;
              if (uVar42 < uVar67) {
                uVar67 = uVar42;
              }
              uStack_f1 = 1;
              uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar67,uVar42,&UNK_143006038);
            }
            fVar79 = *(float *)(puVar44[4] + lVar51 * 4);
            unaff_XMM7_Da = *(float *)(puVar44[1] + uVar67 * 4) + fVar79;
            uVar67 = uVar67 + 1;
            auVar171._0_4_ = ~-(uint)(fVar80 < unaff_XMM7_Da) & unaff_XMM6._0_4_;
            auVar171._4_4_ = 0;
            auVar171._8_4_ = unaff_XMM6._8_4_;
            auVar171._12_4_ = unaff_XMM6._12_4_;
            unaff_XMM6 = auVar171 | ZEXT416((uint)fVar79 & -(uint)(fVar80 < unaff_XMM7_Da));
            if (unaff_XMM7_Da <= fVar80) {
              unaff_XMM7_Da = fVar80;
            }
            lVar51 = lVar51 + 3;
            lVar41 = lVar41 + -4;
            auVar88 = unaff_XMM6;
            fVar80 = unaff_XMM7_Da;
          } while (lVar41 != 0);
        }
        puVar44 = puVar44 + 0xd;
      } while (puVar44 != (undefined8 *)(uStack_240 * 0x68 + (longlong)pauStack_248));
    }
  }
  pauStack_130 = pauVar64;
  if (uStack_240 < uStack_358) {
    uStack_f1 = 1;
    uStack_f2 = 1;
    pdb_142dc8420(uStack_358,uStack_240,uStack_240,&UNK_143005f00);
    goto LAB_1407f496a;
  }
  pauStack_3d0 = (undefined1 (*) [16])((longlong)pauStack_108[8] + 8);
  lStack_3d8 = uStack_358 * 0x68;
  pauStack_210 = (undefined1 (*) [16])(uStack_240 * 0x68 + (longlong)pauStack_248);
  pauVar64 = pauStack_108;
  pauVar62 = (undefined1 (*) [16])((longlong)pauStack_248 + lStack_3d8);
  pbVar45 = pbStack_100;
  while (pauVar62 != pauStack_210) {
    lStack_2c8 = lStack_2c8 + 1;
    if (pbVar45[-9] == 0) {
      unaff_XMM11 = ZEXT416(*(uint *)(pbVar45 + -0x1c));
      uStack_1c8 = (undefined1 (*) [16])CONCAT44(unaff_XMM7_Da,(int)pauStack_130);
      pauStack_1c0 = (undefined1 (*) [16])CONCAT44(pauStack_1c0._4_4_,unaff_XMM6._0_4_);
      uStack_f1 = 1;
      uStack_f2 = 1;
      uVar39 = pdb_140811d10(pauVar62,*(uint *)(pbVar45 + -0x1c),*(undefined8 *)(pbVar45 + -0x210),
                             plStack_328,&uStack_1c8,pauStack_118);
    }
    else {
      uStack_1c8 = (undefined1 (*) [16])CONCAT44(unaff_XMM7_Da,(int)pauStack_130);
      pauStack_1c0 = (undefined1 (*) [16])CONCAT44(pauStack_1c0._4_4_,unaff_XMM6._0_4_);
      uStack_f1 = 1;
      uStack_f2 = 1;
      uVar39 = pdb_140811920(pauVar62,&uStack_1c8,*(uint *)(pbVar45 + -0x50) < 2,
                             *(undefined8 *)(pbVar45 + -0x1c8),*(undefined8 *)(pbVar45 + -0x1c0));
      unaff_XMM11 = auVar88;
    }
    pauVar64 = pauStack_2d0;
    auVar88 = unaff_XMM11;
    if (pauStack_2d0 == pauStack_2e0) {
      uStack_f1 = 1;
      uStack_f2 = 1;
      pdb_142d8d7f0(&pauStack_2e0);
    }
    *(undefined4 *)(pbStack_2d8 + (longlong)pauVar64 * 8) = uVar39;
    *(int *)(pbStack_2d8 + (longlong)pauVar64 * 8 + 4) = unaff_XMM11._0_4_;
    pauStack_2d0 = (undefined1 (*) [16])((longlong)*pauVar64 + 1);
    pauStack_3b8 = (undefined1 (*) [16])0x0;
    if (((char)puStack_138 != '\0') && (1 < *(ulonglong *)((longlong)pauVar62[2] + 8))) {
      pauVar64 = *(undefined1 (**) [16])pauVar62[1];
      uVar42 = (longlong)pauVar64 * 4;
      if (0x7ffffffffffffffc < uVar42 || (ulonglong)pauVar64 >> 0x3e != 0) {
        uVar75 = 0;
LAB_1407f3b87:
        uStack_f1 = 1;
        uStack_f2 = 1;
        pdb_142dc7e2a(uVar75,uVar42);
        goto LAB_1407f496a;
      }
      uVar4 = *(undefined8 *)((longlong)*pauVar62 + 8);
      if (uVar42 == 0) {
        pauStack_278 = (undefined1 (*) [16])0x4;
        pauStack_2f0 = (undefined1 (*) [16])0x0;
        pauVar48 = pauStack_2f0;
      }
      else {
        pdb_14007ee60();
        uVar75 = 4;
        pauStack_278 = (undefined1 (*) [16])pub_1406abab0(uVar42,4);
        pauVar48 = pauVar64;
        if (pauStack_278 == (undefined1 (*) [16])0x0) goto LAB_1407f3b87;
      }
      pauStack_2f0 = pauVar48;
      if (pauVar64 != (undefined1 (*) [16])0x0) {
        pub_142e32760(pauStack_278,uVar4,uVar42);
      }
      uVar42 = *(ulonglong *)((longlong)pauVar62[2] + 8);
      uVar67 = uVar42 * 0xc;
      if (0xaaaaaaaaaaaaaaa < uVar42) {
        uVar75 = 0;
LAB_1407f3ba9:
        pdb_142dc7e2a(uVar75,uVar67);
        goto LAB_1407f496a;
      }
      uVar4 = *(undefined8 *)pauVar62[2];
      if (uVar67 == 0) {
        pbVar45 = (byte *)0x4;
        uVar55 = 0;
      }
      else {
        pdb_14007ee60();
        uVar75 = 4;
        pbVar45 = pub_1406abab0(uVar67,4);
        uVar55 = uVar42;
        if (pbVar45 == (byte *)0x0) goto LAB_1407f3ba9;
      }
      if (uVar42 != 0) {
        pub_142e32760(pbVar45,uVar4,uVar67);
      }
      uVar52 = *(ulonglong *)pauVar62[4];
      uVar67 = uVar52 * 4;
      if (0x7ffffffffffffffc < uVar67 || uVar52 >> 0x3e != 0) {
        uVar75 = 0;
        uStack_2e8 = uVar55;
LAB_1407f4207:
        pbStack_100 = pbVar45;
        pdb_142dc7e2a(uVar75,uVar67);
        goto LAB_1407f496a;
      }
      if (uVar67 == 0) {
        pbVar49 = (byte *)0x4;
        uStack_198 = uVar52;
      }
      else {
        puVar53 = *(undefined4 **)((longlong)pauVar62[3] + 8);
        uStack_3c0 = uVar52;
        uStack_2e8 = uVar55;
        pdb_14007ee60();
        uVar75 = 4;
        pbVar49 = pub_1406abab0(uVar67,4);
        if (pbVar49 == (byte *)0x0) goto LAB_1407f4207;
        uStack_198 = uStack_3c0;
        uVar55 = uStack_2e8;
        if (uStack_3c0 != 0) {
          uVar67 = uStack_3c0 - 1;
          if (uStack_3c0 < uStack_3c0 - 1) {
            uVar67 = uStack_3c0;
          }
          if (uVar67 < 8) {
            lVar41 = 0;
            uVar67 = uStack_3c0;
            puVar57 = puVar53;
          }
          else {
            uVar67 = uVar67 + 1;
            uVar52 = (ulonglong)((uint)uVar67 & 7);
            if ((uVar67 & 7) == 0) {
              uVar52 = 8;
            }
            lVar41 = uVar67 - uVar52;
            uVar67 = uStack_3c0 - lVar41;
            puVar57 = puVar53 + lVar41;
            lVar71 = 0;
            do {
              uVar75 = *(undefined8 *)((longlong)(puVar53 + lVar71) + 8);
              uVar4 = *(undefined8 *)(puVar53 + lVar71 + 4);
              uVar5 = *(undefined8 *)((longlong)(puVar53 + lVar71 + 4) + 8);
              *(undefined8 *)(pbVar49 + lVar71 * 4) = *(undefined8 *)(puVar53 + lVar71);
              *(undefined8 *)(pbVar49 + lVar71 * 4 + 8) = uVar75;
              *(undefined8 *)(pbVar49 + lVar71 * 4 + 0x10) = uVar4;
              *(undefined8 *)(pbVar49 + lVar71 * 4 + 0x10 + 8) = uVar5;
              lVar71 = lVar71 + 8;
            } while (lVar41 != lVar71);
          }
          pbVar68 = pbVar49 + lVar41 * 4;
          do {
            if (puVar57 == puVar53 + uStack_3c0) break;
            uVar39 = *puVar57;
            puVar57 = puVar57 + 1;
            *(undefined4 *)pbVar68 = uVar39;
            pbVar68 = pbVar68 + 4;
            uVar67 = uVar67 - 1;
          } while (uVar67 != 0);
        }
      }
      uStack_168 = *(undefined4 *)pauVar62[6];
      pauStack_200 = (undefined1 (*) [16])CONCAT44(pauStack_200._4_4_,uStack_168);
      pauStack_208 = *(undefined1 (**) [16])((longlong)pauVar62[5] + 8);
      uStack_180 = *(ulonglong *)((longlong)pauVar62[4] + 8);
      puStack_178 = *(undefined **)pauVar62[5];
      *puStack_408 = uStack_34c;
      lStack_150 = *(longlong *)(lStack_2b0 + 0x40);
      uStack_1c8 = pauStack_2f0;
      pauStack_1c0 = pauStack_278;
      uStack_1b0 = (ushort)uVar55;
      uStack_1ae = (undefined6)(uVar55 >> 0x10);
      uStack_160 = uStack_140;
      lStack_158 = lStack_2c8;
      lVar41 = *(longlong *)(lStack_2b0 + 0x30);
      pauStack_1b8 = pauVar64;
      pbStack_1a8 = pbVar45;
      uStack_1a0 = uVar42;
      pbStack_190 = pbVar49;
      uStack_188 = uStack_198;
      pauStack_170 = pauStack_208;
      if (lVar41 == *(longlong *)(lStack_2b0 + 0x20)) {
        pdb_142d7e670(lStack_400);
      }
      lVar71 = *(longlong *)(lStack_2b0 + 0x28);
      lVar51 = lVar41 * 0x80;
      plVar74 = (longlong *)(lVar71 + 0x70 + lVar51);
      *plVar74 = lStack_158;
      plVar74[1] = lStack_150;
      puVar44 = (undefined8 *)(lVar71 + 0x60 + lVar51);
      *puVar44 = CONCAT44(uStack_164,uStack_168);
      puVar44[1] = uStack_160;
      puVar44 = (undefined8 *)(lVar71 + 0x50 + lVar51);
      *puVar44 = puStack_178;
      puVar44[1] = pauStack_170;
      puVar54 = (ulonglong *)(lVar71 + 0x40 + lVar51);
      *puVar54 = uStack_188;
      puVar54[1] = uStack_180;
      auVar88._8_2_ = uStack_1b0;
      auVar88._0_8_ = pauStack_1b8;
      auVar88._10_6_ = uStack_1ae;
      auVar34._8_8_ = uStack_1a0;
      auVar34._0_8_ = pbStack_1a8;
      puVar54 = (ulonglong *)(lVar71 + 0x30 + lVar51);
      *puVar54 = uStack_198;
      puVar54[1] = (ulonglong)pbStack_190;
      *(undefined1 (*) [16])(lVar71 + 0x20 + lVar51) = auVar34;
      *(undefined1 (*) [16])(lVar71 + 0x10 + lVar51) = auVar88;
      *(undefined8 *)(lVar71 + lVar51) = uStack_1c8;
      ((undefined8 *)(lVar71 + lVar51))[1] = pauStack_1c0;
      *(longlong *)(lStack_2b0 + 0x30) = lVar41 + 1;
      *(longlong *)(lStack_2b0 + 0x40) = *(longlong *)(lStack_2b0 + 0x40) + 1;
    }
    pauVar48 = (undefined1 (*) [16])((longlong)pauVar62[6] + 8);
    if (pbStack_100[-9] == 0) {
      pauStack_200 = _DAT_143005d20;
      pauStack_208 = (undefined1 (*) [16])CONCAT44(extraout_XMM0_Da,(int)pauStack_308);
      uStack_1c8 = (undefined1 (*) [16])&lStack_2c8;
      pauStack_1c0 = (undefined1 (*) [16])&pauStack_3b8;
      pauStack_1b8 = pauStack_118;
      uStack_1b0 = (ushort)&uStack_480;
      uStack_1ae = (undefined6)((ulonglong)&uStack_480 >> 0x10);
      pbStack_1a8 = &bStack_10a;
      uStack_f1 = 1;
      uStack_f2 = 1;
      pdb_141402590(&pauStack_208,*(undefined8 *)((longlong)*pauVar62 + 8),
                    *(undefined8 *)pauVar62[1],*(undefined8 *)pauVar62[2],
                    *(undefined8 *)((longlong)pauVar62[2] + 8),
                    *(undefined8 *)((longlong)pauVar62[3] + 8),*(undefined8 *)pauVar62[4],
                    &uStack_1c8);
      pauVar64 = pauStack_108;
      pauVar62 = pauVar48;
      pbVar45 = pbStack_100;
    }
    else {
      uStack_f1 = 1;
      uStack_f2 = 1;
      pdb_1407fb810(&pauStack_208,pauVar62,1 < *(uint *)(pbStack_100 + -0x50));
      pauVar56 = pauStack_1f8;
      pauVar76 = pauStack_200;
      pauVar64 = pauStack_208;
      lVar71 = (longlong)pauStack_1f8 * 0x38;
      lVar41 = (longlong)pauStack_200 + lVar71;
      uStack_1c8 = pauStack_200;
      pauStack_1b8 = pauStack_208;
      pauStack_1c0 = pauStack_200;
      uStack_1b0 = (ushort)lVar41;
      uStack_1ae = (undefined6)((ulonglong)lVar41 >> 0x10);
      if ((undefined1 (*) [16])((longlong)pauStack_270 - (longlong)pauStack_2a8) < pauStack_1f8) {
        pdb_142d7f1b0(&pauStack_270,pauStack_2a8,pauStack_1f8,8,0x38);
        pauStack_2f8 = pauStack_268;
        pauVar58 = pauStack_260;
LAB_1407f1c73:
        pub_142e32760((undefined8 *)((longlong)pauVar58 * 0x38 + (longlong)pauStack_2f8),pauVar76,
                      lVar71);
      }
      else {
        pauVar58 = pauStack_2a8;
        if (pauStack_1f8 != (undefined1 (*) [16])0x0) goto LAB_1407f1c73;
      }
      pauVar56 = (undefined1 (*) [16])((longlong)*pauVar56 + (longlong)*pauVar58);
      pauStack_260 = pauVar56;
      if (pauVar64 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauVar76,(longlong)pauVar64 * 0x38,8);
      }
      uStack_f1 = 1;
      uStack_f2 = 1;
      pdb_1407fc300(&pauStack_208,pauVar62,lStack_258,1 < *(uint *)(pbStack_100 + -0x50));
      pauVar62 = pauStack_1f8;
      pauVar58 = pauStack_200;
      pauVar76 = pauStack_208;
      lVar71 = (longlong)pauStack_1f8 * 0x38;
      lVar41 = (longlong)pauStack_200 + lVar71;
      uStack_1c8 = pauStack_200;
      pauStack_1b8 = pauStack_208;
      pauStack_1c0 = pauStack_200;
      uStack_1b0 = (ushort)lVar41;
      uStack_1ae = (undefined6)((ulonglong)lVar41 >> 0x10);
      if ((undefined1 (*) [16])((longlong)pauStack_270 - (longlong)pauVar56) < pauStack_1f8) {
        pdb_142d7f1b0(&pauStack_270,pauVar56,pauStack_1f8,8,0x38);
        pauVar56 = pauStack_260;
LAB_1407f1d49:
        pbVar45 = pbStack_100;
        pauVar64 = pauStack_108;
        pauStack_2f8 = pauStack_268;
        pub_142e32760((undefined8 *)((longlong)pauVar56 * 0x38 + (longlong)pauStack_268),pauVar58,
                      lVar71);
      }
      else {
        pauVar64 = pauStack_108;
        pbVar45 = pbStack_100;
        if (pauStack_1f8 != (undefined1 (*) [16])0x0) goto LAB_1407f1d49;
      }
      pauStack_2a8 = (undefined1 (*) [16])((longlong)*pauVar62 + (longlong)pauVar56);
      pauVar62 = pauVar48;
      pauStack_260 = pauStack_2a8;
      if (pauVar76 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauVar58,(longlong)pauVar76 * 0x38,8);
      }
    }
  }
  if (uStack_240 < uStack_358) {
    uStack_f1 = 1;
    uStack_f2 = 1;
    pdb_142dc8420(uStack_358,uStack_240,uStack_240,&UNK_143005f18);
    goto LAB_1407f496a;
  }
  puVar61 = (undefined8 *)(uStack_240 * 0x68 + (longlong)pauStack_248);
  pauStack_130 = pauVar64 + 3;
  pauStack_210 = pauVar64 + 6;
  puStack_138 = (undefined8 *)((longlong)pauVar64[4] + 8);
  puVar44 = (undefined8 *)((longlong)*pauStack_248 + lStack_3d8);
  uVar42 = uStack_3e0;
LAB_1407f2030:
  puVar59 = puVar44;
  if (puVar59 != puVar61) {
    if (puVar59[2] == 0) {
      uStack_f1 = 1;
      uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143005f30);
    }
    if (*(float *)puVar59[1] <= _DAT_142e37988) {
      pbVar45 = (byte *)(uVar42 & 0xffffffff);
    }
    else {
      uStack_f1 = 1;
      uStack_f2 = 1;
      uVar39 = pdb_1413f84c0(puVar59 + 0xb);
      uStack_f1 = 1;
      uStack_f2 = 1;
      lVar41 = pdb_1413f8440(uVar39);
      if (puVar59[5] == 0) goto LAB_1407f4713;
      if (puVar59[2] == 0) {
        uStack_f1 = 1;
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143005f60);
      }
      if (puVar59[5] == 1) {
        uStack_f1 = 1;
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(1,1,&UNK_143005f78);
      }
      if (puVar59[8] == 0) {
        uStack_f1 = 1;
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143005f90);
      }
      lVar71 = puVar59[9];
      pfVar50 = (float *)puVar59[4];
      fVar80 = *(float *)puVar59[1];
      unaff_XMM8_Ba = SUB41(fVar80,0);
      unaff_XMM8_Bb = (char)((uint)fVar80 >> 8);
      unaff_XMM8_Bc = (char)((uint)fVar80 >> 0x10);
      unaff_XMM8_Bd = (char)((uint)fVar80 >> 0x18);
      unaff_XMM8_Be = '\0';
      unaff_XMM8_Bf = '\0';
      unaff_XMM8_Bg = '\0';
      unaff_XMM8_Bh = '\0';
      unaff_XMM8_Bi = '\0';
      unaff_XMM8_Bj = '\0';
      unaff_XMM8_Bk = '\0';
      unaff_XMM8_Bl = '\0';
      unaff_XMM8_Bm = '\0';
      unaff_XMM8_Bn = '\0';
      unaff_XMM8_Bo = '\0';
      unaff_XMM8_Bp = '\0';
      fVar177 = pfVar50[5] - pfVar50[2];
      fVar79 = pfVar50[3] - *pfVar50;
      fVar176 = SQRT(fVar177 * fVar177 + fVar79 * fVar79);
      auVar88 = ZEXT416((uint)fVar176);
      fVar176 = _DAT_142e36f28 / fVar176;
      fVar177 = fVar177 * fVar176;
      fVar176 = fVar176 * fVar79;
      uVar38 = *(uint *)puVar59[7];
      unaff_XMM11 = ZEXT416(uVar38);
      fVar79 = pfVar50[2];
      pauStack_1c0 = (undefined1 (*) [16])CONCAT44(pauStack_1c0._4_4_,fVar79);
      uStack_1c8 = *(undefined1 (**) [16])pfVar50;
      if (((*(longlong *)pauStack_108[7] == 0) ||
          (plVar74 = (longlong *)
                     (*(longlong *)((longlong)pauStack_108[6] + 8) +
                      *(longlong *)pauStack_108[7] * 8 + -8), plVar74 == (longlong *)0x0)) ||
         (*plVar74 != lVar71)) {
        lVar51 = *(longlong *)((longlong)pauStack_108[5] + 8);
        if (lVar51 == *(longlong *)((longlong)pauStack_108[4] + 8)) {
          uStack_f1 = 1;
          uStack_f2 = 1;
          pdb_142d89720(puStack_138);
        }
        *(float *)(*(longlong *)pauStack_108[5] + lVar51 * 4) = fVar80;
        *(longlong *)((longlong)pauStack_108[5] + 8) = lVar51 + 1;
        lVar51 = *(longlong *)pauStack_108[4];
        if (lVar51 == *(longlong *)pauStack_108[3]) {
          uStack_f1 = 1;
          uStack_f2 = 1;
          pdb_142d8dbe0(pauStack_130);
        }
        lVar73 = *(longlong *)((longlong)pauStack_108[3] + 8);
        lVar46 = lVar51 * 0x1c;
        *(float *)(lVar73 + lVar46) = fVar176;
        *(float *)(lVar73 + 4 + lVar46) = fVar177;
        *(undefined1 (**) [16])(lVar73 + 8 + lVar46) = uStack_1c8;
        *(undefined4 *)(lVar73 + 0x10 + lVar46) = pauStack_1c0._0_4_;
        *(float *)(lVar73 + 0x14 + lVar46) = fVar80;
        *(uint *)(lVar73 + 0x18 + lVar46) = uVar38;
        *(longlong *)pauStack_108[4] = lVar51 + 1;
        lVar51 = *(longlong *)pauStack_108[7];
        if (lVar51 == *(longlong *)pauStack_108[6]) {
          uStack_f1 = 1;
          uStack_f2 = 1;
          pdb_142d896b0(pauStack_210);
        }
        *(longlong *)(*(longlong *)((longlong)pauStack_108[6] + 8) + lVar51 * 8) = lVar71;
        *(longlong *)pauStack_108[7] = lVar51 + 1;
      }
      else {
        if ((*(longlong *)((longlong)pauStack_108[5] + 8) == 0) ||
           (pfVar50 = (float *)(*(longlong *)pauStack_108[5] +
                                *(longlong *)((longlong)pauStack_108[5] + 8) * 4 + -4),
           pfVar50 == (float *)0x0)) {
          uStack_f1 = 1;
          uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143007610);
        }
        fVar15 = *pfVar50;
        fVar12 = fVar80;
        if (fVar15 <= fVar80) {
          fVar12 = fVar15;
        }
        auVar88 = ZEXT416((uint)fVar12);
        *pfVar50 = (float)(~-(uint)NAN(fVar15) & (uint)fVar12 | -(uint)NAN(fVar15) & (uint)fVar80);
        if (*(longlong *)pauStack_108[4] == 0) {
LAB_1407f44dd:
          uStack_f1 = 1;
          uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143007628);
        }
        lVar71 = *(longlong *)pauStack_108[4] * 0x1c;
        if (*(longlong *)((longlong)pauStack_108[3] + 8) + lVar71 == 0x1c) goto LAB_1407f44dd;
        lVar71 = *(longlong *)((longlong)pauStack_108[3] + 8) + lVar71;
        if (*(float *)(lVar71 + -8) <= fVar80 && fVar80 != *(float *)(lVar71 + -8)) {
          *(float *)(lVar71 + -0x1c) = fVar176;
          *(float *)(lVar71 + -0x18) = fVar177;
          *(undefined1 (**) [16])(lVar71 + -0x14) = uStack_1c8;
          *(float *)(lVar71 + -0xc) = fVar79;
          *(float *)(lVar71 + -8) = fVar80;
          *(uint *)(lVar71 + -4) = uVar38;
        }
      }
      pbVar45 = (byte *)CONCAT71((int7)((ulonglong)pbVar45 >> 8),lVar41 == 0 | (byte)uVar42);
    }
    uStack_f1 = 1;
    uStack_f2 = 1;
    lVar41 = pdb_140a0c8f0(puVar59);
    if ((ulonglong)puVar59[2] <= lVar41 - 1U) {
      uStack_f1 = 1;
      uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(lVar41 - 1U,puVar59[2],&UNK_143005fa8);
    }
    puVar44 = puVar59 + 0xd;
    uVar42 = (ulonglong)pbVar45 & 0xffffffff;
    if (_DAT_142e37988 < *(float *)(puVar59[1] + -4 + lVar41 * 4)) {
      uStack_f1 = 1;
      uStack_f2 = 1;
      fVar80 = (float)pdb_140a0c900();
      uVar42 = (ulonglong)pbVar45 & 0xffffffff;
      if (_DAT_142e37988 < fVar80) {
        if (((ulonglong)pbVar45 & 1) != 0) {
          uStack_f1 = 1;
          uStack_f2 = 1;
          pdb_1413f84a0(puVar59 + 0xb);
          uStack_f1 = 1;
          uStack_f2 = 1;
          lVar41 = pdb_1413f8440();
          uVar42 = CONCAT71((int7)(uVar42 >> 8),1);
          if (lVar41 == 1) goto LAB_1407f2030;
        }
        lVar41 = puVar59[10];
        uStack_f1 = 1;
        uStack_f2 = 1;
        lVar71 = pdb_140a0c8f0(puVar59);
        uVar42 = lVar71 - 1;
        if ((ulonglong)puVar59[5] <= uVar42) goto LAB_1407f486e;
        pauStack_1c0 = (undefined1 (*) [16])
                       CONCAT44(pauStack_1c0._4_4_,*(undefined4 *)(puVar59[4] + 8 + uVar42 * 0xc));
        uStack_1c8 = *(undefined1 (**) [16])(puVar59[4] + uVar42 * 0xc);
        uStack_f1 = 1;
        uStack_f2 = 1;
        lVar71 = pdb_140a0c8f0(puVar59);
        if ((ulonglong)puVar59[2] <= lVar71 - 1U) {
          uStack_f1 = 1;
          uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(lVar71 - 1U,puVar59[2],&UNK_143005fd8);
        }
        fVar80 = *(float *)(puVar59[1] + -4 + lVar71 * 4);
        uStack_f1 = 1;
        uStack_f2 = 1;
        lVar71 = pdb_140a0c8f0(puVar59);
        uVar42 = lVar71 - 1;
        if ((ulonglong)puVar59[5] <= uVar42) {
          uStack_f1 = 1;
          uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar42,puVar59[5],&UNK_143005ff0);
        }
        fVar79 = *(float *)(puVar59[4] + uVar42 * 0xc);
        unaff_XMM8_Be = '\0';
        unaff_XMM8_Bf = '\0';
        unaff_XMM8_Bg = '\0';
        unaff_XMM8_Bh = '\0';
        unaff_XMM8_Bi = '\0';
        unaff_XMM8_Bj = '\0';
        unaff_XMM8_Bk = '\0';
        unaff_XMM8_Bl = '\0';
        unaff_XMM8_Bm = '\0';
        unaff_XMM8_Bn = '\0';
        unaff_XMM8_Bo = '\0';
        unaff_XMM8_Bp = '\0';
        fVar176 = *(float *)(puVar59[4] + 8 + uVar42 * 0xc);
        uStack_f1 = 1;
        uStack_f2 = 1;
        lVar71 = pdb_140a0c8f0(puVar59);
        uVar42 = lVar71 - 2;
        if ((ulonglong)puVar59[5] <= uVar42) {
          uStack_f1 = 1;
          uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar42,puVar59[5],&UNK_143006008);
        }
        fVar79 = fVar79 - *(float *)(puVar59[4] + uVar42 * 0xc);
        fVar176 = fVar176 - *(float *)(puVar59[4] + 8 + uVar42 * 0xc);
        uStack_f1 = 1;
        uStack_f2 = 1;
        lVar71 = pdb_140a0c8f0(puVar59);
        if ((ulonglong)puVar59[8] <= lVar71 - 1U) {
          uStack_f1 = 1;
          uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(lVar71 - 1U,puVar59[8],&UNK_143006020);
        }
        fVar177 = fVar176 * fVar176 + fVar79 * fVar79;
        auVar88 = ZEXT416((uint)fVar177);
        fVar177 = _DAT_142e36f28 / SQRT(fVar177);
        fVar79 = fVar79 * fVar177;
        unaff_XMM8_Ba = SUB41(fVar79,0);
        unaff_XMM8_Bb = (char)((uint)fVar79 >> 8);
        unaff_XMM8_Bc = (char)((uint)fVar79 >> 0x10);
        unaff_XMM8_Bd = (char)((uint)fVar79 >> 0x18);
        fVar177 = fVar177 * fVar176;
        uVar38 = *(uint *)(puVar59[7] + -4 + lVar71 * 4);
        unaff_XMM11 = ZEXT416(uVar38);
        pauStack_200 = (undefined1 (*) [16])CONCAT44(pauStack_200._4_4_,pauStack_1c0._0_4_);
        pauStack_208 = uStack_1c8;
        if (((*(longlong *)pauStack_108[7] == 0) ||
            (plVar74 = (longlong *)
                       (*(longlong *)((longlong)pauStack_108[6] + 8) +
                        *(longlong *)pauStack_108[7] * 8 + -8), plVar74 == (longlong *)0x0)) ||
           (*plVar74 != lVar41 + -1)) {
          lVar71 = *(longlong *)((longlong)pauStack_108[5] + 8);
          if (lVar71 == *(longlong *)((longlong)pauStack_108[4] + 8)) {
            uStack_f1 = 1;
            uStack_f2 = 1;
            pdb_142d89720(puStack_138);
          }
          *(float *)(*(longlong *)pauStack_108[5] + lVar71 * 4) = fVar80;
          *(longlong *)((longlong)pauStack_108[5] + 8) = lVar71 + 1;
          lVar71 = *(longlong *)pauStack_108[4];
          if (lVar71 == *(longlong *)pauStack_108[3]) {
            uStack_f1 = 1;
            uStack_f2 = 1;
            pdb_142d8dbe0(pauStack_130);
          }
          lVar51 = *(longlong *)((longlong)pauStack_108[3] + 8);
          lVar73 = lVar71 * 0x1c;
          *(float *)(lVar51 + lVar73) = fVar79;
          *(float *)(lVar51 + 4 + lVar73) = fVar177;
          *(undefined1 (**) [16])(lVar51 + 8 + lVar73) = pauStack_208;
          *(undefined4 *)(lVar51 + 0x10 + lVar73) = pauStack_200._0_4_;
          *(float *)(lVar51 + 0x14 + lVar73) = fVar80;
          *(uint *)(lVar51 + 0x18 + lVar73) = uVar38;
          *(longlong *)pauStack_108[4] = lVar71 + 1;
          lVar71 = *(longlong *)pauStack_108[7];
          if (lVar71 == *(longlong *)pauStack_108[6]) {
            uStack_f1 = 1;
            uStack_f2 = 1;
            pdb_142d896b0(pauStack_210);
          }
          *(longlong *)(*(longlong *)((longlong)pauStack_108[6] + 8) + lVar71 * 8) = lVar41 + -1;
          *(longlong *)pauStack_108[7] = lVar71 + 1;
        }
        else {
          if ((*(longlong *)((longlong)pauStack_108[5] + 8) == 0) ||
             (pfVar50 = (float *)(*(longlong *)pauStack_108[5] +
                                  *(longlong *)((longlong)pauStack_108[5] + 8) * 4 + -4),
             pfVar50 == (float *)0x0)) {
            uStack_f1 = 1;
            uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143007610);
          }
          fVar176 = *pfVar50;
          fVar15 = fVar80;
          if (fVar176 <= fVar80) {
            fVar15 = fVar176;
          }
          auVar88 = ZEXT416((uint)fVar15);
          *pfVar50 = (float)(~-(uint)NAN(fVar176) & (uint)fVar15 |
                            -(uint)NAN(fVar176) & (uint)fVar80);
          if (*(longlong *)pauStack_108[4] == 0) {
LAB_1407f454f:
            uStack_f1 = 1;
            uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143007628);
          }
          lVar41 = *(longlong *)pauStack_108[4] * 0x1c;
          if (*(longlong *)((longlong)pauStack_108[3] + 8) + lVar41 == 0x1c) goto LAB_1407f454f;
          lVar41 = *(longlong *)((longlong)pauStack_108[3] + 8) + lVar41;
          if (*(float *)(lVar41 + -8) <= fVar80 && fVar80 != *(float *)(lVar41 + -8)) {
            *(float *)(lVar41 + -0x1c) = fVar79;
            *(float *)(lVar41 + -0x18) = fVar177;
            *(undefined1 (**) [16])(lVar41 + -0x14) = uStack_1c8;
            *(undefined4 *)(lVar41 + -0xc) = pauStack_1c0._0_4_;
            *(float *)(lVar41 + -8) = fVar80;
            *(uint *)(lVar41 + -4) = uVar38;
          }
        }
        uVar42 = (ulonglong)pbVar45 & 0xffffffff;
      }
    }
    goto LAB_1407f2030;
  }
  iVar14 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                            CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                  CONCAT13(unaff_XMM8_Bd,
                           CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
  unaff_XMM8_Ba = (char)iVar14;
  unaff_XMM8_Bb = (char)((uint)iVar14 >> 8);
  unaff_XMM8_Bc = (char)((uint)iVar14 >> 0x10);
  unaff_XMM8_Bd = (char)((uint)iVar14 >> 0x18);
  iVar14 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                            CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                  CONCAT13(unaff_XMM8_Bh,
                           CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
  unaff_XMM8_Be = (char)iVar14;
  unaff_XMM8_Bf = (char)((uint)iVar14 >> 8);
  unaff_XMM8_Bg = (char)((uint)iVar14 >> 0x10);
  unaff_XMM8_Bh = (char)((uint)iVar14 >> 0x18);
  iVar14 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                            CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                  CONCAT13(unaff_XMM8_Bl,
                           CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
  unaff_XMM8_Bi = (char)iVar14;
  unaff_XMM8_Bj = (char)((uint)iVar14 >> 8);
  unaff_XMM8_Bk = (char)((uint)iVar14 >> 0x10);
  unaff_XMM8_Bl = (char)((uint)iVar14 >> 0x18);
  iVar14 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                            CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                  CONCAT13(unaff_XMM8_Bp,
                           CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
  unaff_XMM8_Bm = (char)iVar14;
  unaff_XMM8_Bn = (char)((uint)iVar14 >> 8);
  unaff_XMM8_Bo = (char)((uint)iVar14 >> 0x10);
  unaff_XMM8_Bp = (char)((uint)iVar14 >> 0x18);
  pauVar48 = pauStack_3d0;
  pauVar62 = pauStack_120;
  if (pauStack_3d0 == pauStack_3c8) {
LAB_1407f273c:
    fVar80 = _DAT_142e36f50;
    puVar72 = (undefined *)(ulonglong)uStack_144;
    *(undefined4 *)puStack_288 = (undefined4)lStack_2b8;
    param_3 = pauStack_290;
    plVar74 = plStack_280;
    pauVar64 = pauStack_298;
    param_1 = puStack_288;
    fVar79 = fStack_110;
    fVar176 = fStack_124;
    if (*(longlong *)((longlong)pauVar62 + 0x18) != 0) {
LAB_1407f0aae:
      uVar42 = pdb_1400af0a0(plStack_218,&uStack_340);
      lVar41 = *(longlong *)pauVar62;
      bVar37 = (byte)(uVar42 >> 0x39);
      auVar81 = ZEXT216(CONCAT11(bVar37,bVar37));
      auVar81 = pshuflw(auVar81,auVar81,0);
      lVar71 = 0;
      while( true ) {
        uVar42 = uVar42 & *(ulonglong *)((longlong)pauVar62 + 8);
        auVar88 = *(undefined1 (*) [16])(lVar41 + uVar42);
        auVar125[0] = -(auVar88[0] == auVar81[0]);
        auVar125[1] = -(auVar88[1] == auVar81[1]);
        auVar125[2] = -(auVar88[2] == auVar81[2]);
        auVar125[3] = -(auVar88[3] == auVar81[3]);
        auVar125[4] = -(auVar88[4] == auVar81[4]);
        auVar125[5] = -(auVar88[5] == auVar81[5]);
        auVar125[6] = -(auVar88[6] == auVar81[6]);
        auVar125[7] = -(auVar88[7] == auVar81[7]);
        auVar125[8] = -(auVar88[8] == auVar81[0]);
        auVar125[9] = -(auVar88[9] == auVar81[1]);
        auVar125[10] = -(auVar88[10] == auVar81[2]);
        auVar125[0xb] = -(auVar88[0xb] == auVar81[3]);
        auVar125[0xc] = -(auVar88[0xc] == auVar81[4]);
        auVar125[0xd] = -(auVar88[0xd] == auVar81[5]);
        auVar125[0xe] = -(auVar88[0xe] == auVar81[6]);
        auVar125[0xf] = -(auVar88[0xf] == auVar81[7]);
        uVar70 = (ushort)(SUB161(auVar125 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar125 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar125 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar125 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar125 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar125 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar125 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar125 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar125 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar125 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar125 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar125 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar125 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar125 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar125 >> 0x77,0) & 1) << 0xe |
                 (ushort)(auVar125[0xf] >> 7) << 0xf;
        uVar38 = (uint)uVar70;
        while (uVar70 != 0) {
          uVar78 = 0;
          for (uVar60 = uVar38; (uVar60 & 1) == 0; uVar60 = uVar60 >> 1 | 0x80000000) {
            uVar78 = uVar78 + 1;
          }
          lVar51 = (uVar78 + uVar42 & *(ulonglong *)((longlong)pauVar62 + 8)) * -0x2b0;
          if (uStack_140 == *(ulonglong *)(lVar41 + -0x2b0 + lVar51)) {
            pbStack_100 = (byte *)(lVar41 + lVar51);
            pauStack_2a8 = (undefined1 (*) [16])(uStack_240 * 0x68 + (longlong)pauStack_248);
            pauStack_108 = (undefined1 (*) [16])0x0;
            uStack_144 = (uint)puVar72;
            pauVar62 = pauStack_248;
            pauStack_298 = pauVar64;
            pauStack_290 = param_3;
            puStack_288 = param_1;
            plStack_280 = plVar74;
            fStack_110 = fVar79;
            if (pauStack_248 == pauStack_2a8) goto LAB_1407f110d;
            goto LAB_1407f0bc3;
          }
          uVar70 = (ushort)(uVar38 - 1) & (ushort)uVar38;
          uVar38 = CONCAT22((short)(uVar38 - 1 >> 0x10),uVar70);
        }
        auVar86[0] = -(auVar88[0] == unaff_XMM8_Ba);
        auVar86[1] = -(auVar88[1] == unaff_XMM8_Bb);
        auVar86[2] = -(auVar88[2] == unaff_XMM8_Bc);
        auVar86[3] = -(auVar88[3] == unaff_XMM8_Bd);
        auVar86[4] = -(auVar88[4] == unaff_XMM8_Be);
        auVar86[5] = -(auVar88[5] == unaff_XMM8_Bf);
        auVar86[6] = -(auVar88[6] == unaff_XMM8_Bg);
        auVar86[7] = -(auVar88[7] == unaff_XMM8_Bh);
        auVar86[8] = -(auVar88[8] == unaff_XMM8_Bi);
        auVar86[9] = -(auVar88[9] == unaff_XMM8_Bj);
        auVar86[10] = -(auVar88[10] == unaff_XMM8_Bk);
        auVar86[0xb] = -(auVar88[0xb] == unaff_XMM8_Bl);
        auVar86[0xc] = -(auVar88[0xc] == unaff_XMM8_Bm);
        auVar86[0xd] = -(auVar88[0xd] == unaff_XMM8_Bn);
        auVar86[0xe] = -(auVar88[0xe] == unaff_XMM8_Bo);
        auVar86[0xf] = -(auVar88[0xf] == unaff_XMM8_Bp);
        if ((((((((((((((((SUB161(auVar86 >> 7,0) & 1) != 0 || (SUB161(auVar86 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar86 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar86 >> 0x1f,0) & 1) != 0) || (SUB161(auVar86 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar86 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar86 >> 0x37,0) & 1) != 0) || (SUB161(auVar86 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar86 >> 0x47,0) & 1) != 0) || (SUB161(auVar86 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar86 >> 0x57,0) & 1) != 0) || (SUB161(auVar86 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar86 >> 0x67,0) & 1) != 0) || (SUB161(auVar86 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar86 >> 0x77,0) & 1) != 0) || auVar86[0xf] < '\0') break;
        uVar42 = uVar42 + lVar71 + 0x10;
        lVar71 = lVar71 + 0x10;
      }
    }
LAB_1407f3b45:
    uStack_f1 = 1;
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143006050);
  }
  goto LAB_1407f1362;
LAB_1407f0bc3:
  do {
    pauStack_308 = (undefined1 (*) [16])((longlong)pauVar62[6] + 8);
    pauVar64 = (undefined1 (*) [16])((longlong)*pauStack_108 + 1);
    uStack_410 = *(undefined4 *)pauVar62[6];
    uStack_418 = *(ulonglong *)((longlong)pauVar62[5] + 8);
    uStack_420 = 0;
    pauVar48 = pauStack_108;
    while( true ) {
      uStack_f1 = 1;
      uStack_f2 = 1;
      pdb_1413f86f0(&uStack_1c8,&uStack_418);
      pauVar76 = pauStack_1c0;
      uVar42 = uStack_420;
      if ((int)uStack_1c8 != 1) break;
      uVar39 = uStack_1c8._4_4_;
      uStack_420 = uStack_420 + 1;
      if (pauStack_2d0 <= pauVar48) {
        uStack_f1 = 1;
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pauVar48,pauStack_2d0,&UNK_143006140);
      }
      fVar79 = *(float *)(pbStack_2d8 + (longlong)pauVar48 * 8);
      fVar177 = *(float *)(pbStack_2d8 + (longlong)pauVar64 * 8 + -4);
      if ((((fVar79 != 0.0) || (NAN(fVar79))) || (fVar177 != _DAT_142e36f28)) ||
         (NAN(fVar177) || NAN(_DAT_142e36f28))) {
        uStack_f1 = 1;
        uStack_f2 = 1;
        uVar67 = pdb_140a0c8f0(pauVar62);
        auVar178._4_12_ = unaff_XMM11._4_12_;
        if ((longlong)uVar67 < 0) {
          auVar178._0_4_ = (float)uVar67;
          if ((longlong)uVar42 < 0) goto LAB_1407f0d00;
LAB_1407f0d45:
          fVar15 = (float)(longlong)uVar42;
          uVar172 = SUB41(fVar15,0);
          uVar173 = (undefined1)((uint)fVar15 >> 8);
          uVar174 = (undefined1)((uint)fVar15 >> 0x10);
          uVar175 = (undefined1)((uint)fVar15 >> 0x18);
        }
        else {
          auVar178._0_4_ = (float)(longlong)uVar67;
          if (-1 < (longlong)uVar42) goto LAB_1407f0d45;
LAB_1407f0d00:
          fVar15 = (float)uVar42;
          uVar172 = SUB41(fVar15,0);
          uVar173 = (undefined1)((uint)fVar15 >> 8);
          uVar174 = (undefined1)((uint)fVar15 >> 0x10);
          uVar175 = (undefined1)((uint)fVar15 >> 0x18);
        }
        unaff_XMM11._4_12_ = auVar178._4_12_;
        unaff_XMM11._0_4_ = auVar178._0_4_ + fVar35;
        pauVar48 = *(undefined1 (**) [16])((longlong)pauVar62[2] + 8);
        uVar42 = (longlong)pauVar48 * 0xc;
        if ((undefined1 (*) [16])0xaaaaaaaaaaaaaaa < pauVar48) {
          uVar75 = 0;
LAB_1407f3b26:
          uStack_f1 = 1;
          uStack_f2 = 1;
          pdb_142dc7e2a(uVar75,uVar42);
          goto LAB_1407f496a;
        }
        pauStack_130 = *(undefined1 (**) [16])((longlong)*pauVar62 + 8);
        puStack_138 = *(undefined8 **)pauVar62[1];
        uVar4 = *(undefined8 *)pauVar62[2];
        pauStack_118 = pauVar64;
        if (uVar42 == 0) {
          pbVar45 = (byte *)0x4;
          pauVar64 = (undefined1 (*) [16])0x0;
        }
        else {
          pauStack_210 = (undefined1 (*) [16])CONCAT44(pauStack_210._4_4_,uVar39);
          pdb_14007ee60(0xaaaaaaaaaaaaaaa,uVar4);
          uVar75 = 4;
          pbVar45 = pub_1406abab0(uVar42,4);
          if (pbVar45 == (byte *)0x0) goto LAB_1407f3b26;
          pauVar64 = pauVar48;
          uVar39 = pauStack_210._0_4_;
        }
        if (pauVar48 != (undefined1 (*) [16])0x0) {
          pub_142e32760(pbVar45,uVar4,uVar42);
        }
        uStack_f1 = 1;
        uStack_f2 = 1;
        pauStack_208 = pauVar64;
        pauStack_200 = (undefined1 (*) [16])pbVar45;
        pauStack_1f8 = pauVar48;
        pdb_140080930(&uStack_1c8,&pauStack_208,0);
        pauVar48 = pauStack_108;
        pauVar64 = pauStack_118;
        if (SBORROW8(0,(longlong)uStack_1c8)) {
          pauStack_208 = pauStack_1c0;
          pauStack_200 = pauStack_1b8;
          uStack_f1 = 1;
          uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143306430,0x2b,&pauStack_208,&UNK_143306410,&UNK_143006158);
        }
        uStack_1d8 = uStack_198;
        lStack_1f0 = CONCAT62(uStack_1ae,uStack_1b0);
        pbStack_1e8 = pbStack_1a8;
        uStack_1e0 = uStack_1a0;
        pauStack_1f8 = pauStack_1b8;
        pauStack_208 = uStack_1c8;
        pauStack_200 = pauStack_1c0;
        pdb_14017ede0(apauStack_498);
        pauStack_3a8 = (undefined1 (*) [16])uStack_488;
        pauStack_3b8 = apauStack_498[0];
        pauStack_3b0 = apauStack_498[1];
        pdb_140080c90(&uStack_1c8,&pauStack_3b8);
        if (SBORROW8(0,(longlong)uStack_1c8)) {
          pauStack_3b8 = pauStack_1c0;
          pauStack_3b0 = pauStack_1b8;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143306430,0x2b,&pauStack_3b8,&UNK_143306410,&UNK_143306a30);
        }
        uStack_388 = uStack_198;
        lStack_3a0 = CONCAT62(uStack_1ae,uStack_1b0);
        pbStack_398 = pbStack_1a8;
        uStack_390 = uStack_1a0;
        pauStack_3a8 = pauStack_1b8;
        pauStack_3b8 = uStack_1c8;
        pauStack_3b0 = pauStack_1c0;
        if (pauStack_208 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)pauStack_200,(longlong)pauStack_208 * 0xc,4);
        }
        if (lStack_1f0 != 0) {
          pub_1406abac0(pbStack_1e8,lStack_1f0 << 2,4);
        }
        fVar79 = ((float)CONCAT13(uVar175,CONCAT12(uVar174,CONCAT11(uVar173,uVar172))) /
                  unaff_XMM11._0_4_ - fVar79) / (fVar177 - fVar79);
        if (NAN(fVar79)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143307adb,0x1d,&UNK_143006170);
        }
        if (ABS(fVar79) == INFINITY) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143307b60,0x22,&UNK_143006170);
        }
        uVar38 = pdb_1413f9030(&pauStack_3b8);
        puVar44 = (undefined8 *)(ulonglong)uVar38;
        if (puStack_138 <= puVar44) goto LAB_1407f4824;
        if (puStack_138 <= (undefined8 *)((longlong)puVar44 + 1)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2((undefined8 *)((longlong)puVar44 + 1),puStack_138,&UNK_143006188);
        }
        fVar79 = *(float *)((longlong)*pauStack_130 + (longlong)puVar44 * 4);
        fVar177 = *(float *)((longlong)*pauStack_130 + (longlong)puVar44 * 4 + 4);
        if (pauStack_3b8 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)pauStack_3b0,(longlong)pauStack_3b8 << 3,4);
        }
        if (lStack_3a0 != 0) {
          pub_1406abac0(pbStack_398,lStack_3a0 << 2,4);
        }
        fVar79 = (fVar177 - fVar79) * extraout_XMM0_Da_00 + fVar79;
        unaff_XMM8_Ba = SUB41(fVar79,0);
        unaff_XMM8_Bb = (char)((uint)fVar79 >> 8);
        unaff_XMM8_Bc = (char)((uint)fVar79 >> 0x10);
        unaff_XMM8_Bd = (char)((uint)fVar79 >> 0x18);
      }
      else {
        uStack_f1 = 1;
        uStack_f2 = 1;
        pauVar56 = pauStack_2d0;
        uVar40 = pdb_1413f84c0((undefined8 *)((longlong)pauVar62[5] + 8));
        uStack_f1 = 1;
        uStack_f2 = 1;
        uVar42 = pdb_1413f86e0(uVar39,(ulonglong)pauVar76 & 0xffffffff,uVar40,
                               (ulonglong)pauVar56 & 0xffffffff);
        if (*(ulonglong *)pauVar62[1] <= uVar42) {
          uStack_f1 = 1;
          uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar42,*(ulonglong *)pauVar62[1],&UNK_1430061a0);
        }
        uVar40 = *(undefined4 *)(*(longlong *)((longlong)*pauVar62 + 8) + uVar42 * 4);
        unaff_XMM8_Ba = (char)uVar40;
        unaff_XMM8_Bb = (char)((uint)uVar40 >> 8);
        unaff_XMM8_Bc = (char)((uint)uVar40 >> 0x10);
        unaff_XMM8_Bd = (char)((uint)uVar40 >> 0x18);
      }
      unaff_XMM8_Bp = '\0';
      unaff_XMM8_Bo = '\0';
      unaff_XMM8_Bn = '\0';
      unaff_XMM8_Bm = '\0';
      unaff_XMM8_Bl = '\0';
      unaff_XMM8_Bk = '\0';
      unaff_XMM8_Bj = '\0';
      unaff_XMM8_Bi = '\0';
      unaff_XMM8_Bh = '\0';
      unaff_XMM8_Bg = '\0';
      unaff_XMM8_Bf = '\0';
      unaff_XMM8_Be = '\0';
      uStack_f1 = 1;
      uStack_f2 = 1;
      uVar42 = pdb_1413f8440(uVar39,(ulonglong)pauVar76 & 0xffffffff);
      if (*(ulonglong *)(pbStack_100 + -0x1a8) <= uVar42) {
        uStack_f1 = 1;
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar42,*(ulonglong *)(pbStack_100 + -0x1a8),&UNK_1430061b8);
      }
      fVar79 = *(float *)(*(longlong *)(pbStack_100 + -0x1b0) + uVar42 * 4);
      fVar177 = (float)CONCAT13(unaff_XMM8_Bd,
                                CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba)));
      if (fVar177 <= fVar79) {
        fVar177 = fVar79;
      }
      *(uint *)(*(longlong *)(pbStack_100 + -0x1b0) + uVar42 * 4) =
           -(uint)NAN(fVar79) &
           CONCAT13(unaff_XMM8_Bd,CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) |
           ~-(uint)NAN(fVar79) & (uint)fVar177;
    }
    puVar72 = (undefined *)(ulonglong)uStack_144;
    pauVar62 = pauStack_308;
    pauStack_108 = pauVar64;
  } while (pauStack_308 != pauStack_2a8);
LAB_1407f110d:
  pbVar45 = pbStack_100;
  if (1 < *(uint *)(pbStack_100 + -0x50)) {
    uStack_f1 = 1;
    uStack_f2 = 1;
    fStack_124 = fVar176;
    cVar36 = pdb_140901380(pbStack_100 + -0xb);
    pbVar45 = pbStack_100;
    if (cVar36 != '\0') {
      uStack_f1 = 1;
      uStack_f2 = 1;
      cVar36 = pdb_1408ff980(pbStack_100 + -9);
      pbVar45 = pbStack_100;
      if ((cVar36 == '\0') &&
         (*(float *)(pbStack_100 + -0x20) <= *(float *)(pbStack_100 + -0x1c) + _DAT_143005d30 &&
          *(float *)(pbStack_100 + -0x1c) + _DAT_143005d30 != *(float *)(pbStack_100 + -0x20))) {
        pauVar64 = *(undefined1 (**) [16])(pbStack_100 + -0x1c0);
        uVar42 = (longlong)pauVar64 * 4;
        if (0x7ffffffffffffffc < uVar42 || (ulonglong)pauVar64 >> 0x3e != 0) {
          uVar75 = 0;
LAB_1407f42c1:
          uStack_f1 = 1;
          uStack_f2 = 1;
          pdb_142dc7e2a(uVar75,uVar42);
LAB_1407f496a:
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        uVar4 = *(undefined8 *)(pbStack_100 + -0x1c8);
        if (uVar42 == 0) {
          pauVar48 = (undefined1 (*) [16])0x4;
          pauStack_118 = (undefined1 (*) [16])0x0;
          pauVar62 = pauStack_118;
        }
        else {
          pdb_14007ee60();
          uVar75 = 4;
          pauVar48 = (undefined1 (*) [16])pub_1406abab0(uVar42,4);
          pauVar62 = pauVar64;
          if (pauVar48 == (undefined1 (*) [16])0x0) goto LAB_1407f42c1;
        }
        pauStack_118 = pauVar62;
        fVar79 = _DAT_143005d30;
        unaff_XMM11 = ZEXT416((uint)_DAT_143005d30);
        if (pauVar64 != (undefined1 (*) [16])0x0) {
          pub_142e32760(pauVar48,uVar4);
        }
        pauVar76 = (undefined1 (*) [16])(uStack_240 * 0x68 + (longlong)pauStack_248);
        pauVar62 = pauStack_248;
        pauStack_108 = pauVar48;
        while (pbVar45 = pbStack_100, fVar12 = _UNK_142e36f4c, fVar15 = _UNK_142e36f48,
              fVar177 = _UNK_142e36f44, fVar176 = _DAT_142e36f40, pauVar62 != pauVar76) {
          puVar44 = (undefined8 *)((longlong)pauVar62[5] + 8);
          uVar39 = pdb_1413f84c0(puVar44);
          uVar42 = pdb_1413f8440(uVar39);
          if (*(ulonglong *)(pbStack_100 + -0x210) <= uVar42) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar42,*(ulonglong *)(pbStack_100 + -0x210),&UNK_143006068);
          }
          if (*(longlong *)pauVar62[1] == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(0,0,&UNK_143006080);
          }
          pauVar48 = pauVar62 + 6;
          fVar176 = *(float *)(*(longlong *)(pbStack_100 + -0x218) + 4 + uVar42 * 0xc) +
                    **(float **)((longlong)*pauVar62 + 8);
          uVar172 = SUB41(fVar176,0);
          uVar173 = (undefined1)((uint)fVar176 >> 8);
          uVar174 = (undefined1)((uint)fVar176 >> 0x10);
          uVar175 = (undefined1)((uint)fVar176 >> 0x18);
          uStack_370 = *(undefined4 *)pauVar62[6];
          pauStack_378 = (undefined1 (*) [16])*puVar44;
          pauStack_208 = (undefined1 (*) [16])*puVar44;
          pauStack_200._0_4_ = *(undefined4 *)pauVar62[6];
          while( true ) {
            unaff_XMM8_Bp = '\0';
            unaff_XMM8_Bo = '\0';
            unaff_XMM8_Bn = '\0';
            unaff_XMM8_Bm = '\0';
            unaff_XMM8_Bl = '\0';
            unaff_XMM8_Bk = '\0';
            unaff_XMM8_Bj = '\0';
            unaff_XMM8_Bi = '\0';
            unaff_XMM8_Bh = '\0';
            unaff_XMM8_Bg = '\0';
            unaff_XMM8_Bf = '\0';
            unaff_XMM8_Be = '\0';
            pdb_1413f86f0(&uStack_1c8,&pauStack_208);
            pauVar56 = pauStack_1c0;
            if ((int)uStack_1c8 != 1) break;
            uVar39 = uStack_1c8._4_4_;
            uVar67 = pdb_1413f8440(uStack_1c8._4_4_,(ulonglong)pauStack_1c0 & 0xffffffff);
            uVar42 = *(ulonglong *)(pbStack_100 + -0x210);
            if (uVar42 <= uVar67) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar67,uVar42,&UNK_1430060b0);
            }
            fVar176 = *(float *)(*(longlong *)(pbStack_100 + -0x218) + 4 + uVar67 * 0xc);
            uVar40 = pdb_1413f84c0(puVar44);
            uVar42 = pdb_1413f86e0(uVar39,(ulonglong)pauVar56 & 0xffffffff,uVar40,
                                   uVar42 & 0xffffffff);
            if (*(ulonglong *)pauVar62[1] <= uVar42) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar42,*(ulonglong *)pauVar62[1],&UNK_1430060c8);
            }
            fVar176 = fVar176 + *(float *)(*(longlong *)((longlong)*pauVar62 + 8) + uVar42 * 4);
            uVar78 = -(uint)(NAN((float)CONCAT13(uVar175,CONCAT12(uVar174,CONCAT11(uVar173,uVar172))
                                                )) ||
                            NAN((float)CONCAT13(uVar175,CONCAT12(uVar174,CONCAT11(uVar173,uVar172)))
                               ));
            uVar38 = uVar78 & (uint)fVar176;
            if (fVar176 <= (float)CONCAT13(uVar175,CONCAT12(uVar174,CONCAT11(uVar173,uVar172)))) {
              fVar176 = (float)CONCAT13(uVar175,CONCAT12(uVar174,CONCAT11(uVar173,uVar172)));
            }
            uVar38 = ~uVar78 & (uint)fVar176 | uVar38;
            uVar172 = (undefined1)uVar38;
            uVar173 = (undefined1)(uVar38 >> 8);
            uVar174 = (undefined1)(uVar38 >> 0x10);
            uVar175 = (undefined1)(uVar38 >> 0x18);
          }
          pauStack_200 = (undefined1 (*) [16])CONCAT44(pauStack_200._4_4_,uStack_370);
          pauStack_208 = pauStack_378;
          fVar176 = (float)CONCAT13(uVar175,CONCAT12(uVar174,CONCAT11(uVar173,uVar172))) + fVar79;
          unaff_XMM8_Ba = SUB41(fVar176,0);
          unaff_XMM8_Bb = (char)((uint)fVar176 >> 8);
          unaff_XMM8_Bc = (char)((uint)fVar176 >> 0x10);
          unaff_XMM8_Bd = (char)((uint)fVar176 >> 0x18);
          while( true ) {
            pdb_1413f86f0(&uStack_1c8,&pauStack_208);
            pauVar62 = (undefined1 (*) [16])((longlong)*pauVar48 + 8);
            if ((int)uStack_1c8 != 1) break;
            pauVar62 = (undefined1 (*) [16])
                       pdb_1413f8440(uStack_1c8._4_4_,(ulonglong)pauStack_1c0 & 0xffffffff);
            if (pauVar64 <= pauVar62) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pauVar62,pauVar64,&UNK_143006098);
            }
            fVar177 = *(float *)(*pauStack_108 + (longlong)pauVar62 * 4);
            fVar15 = fVar176;
            if (fVar176 <= fVar177) {
              fVar15 = fVar177;
            }
            *(uint *)(*pauStack_108 + (longlong)pauVar62 * 4) =
                 -(uint)NAN(fVar177) & (uint)fVar176 | ~-(uint)NAN(fVar177) & (uint)fVar15;
          }
        }
        if ((undefined1 (*) [16])0x2 < pauVar64) {
          puVar72 = (undefined *)((longlong)pauVar64[-1] + 0xe);
          uVar42 = *(ulonglong *)*pauStack_108;
          auVar82._8_8_ = 0;
          auVar82._0_8_ = uVar42;
          puVar65 = (undefined *)0x1;
          auVar83._0_4_ = (float)uVar42;
          auVar90._8_8_ = 0;
          auVar90._0_8_ = uVar42;
          if (puVar72 < (undefined *)0x8) {
LAB_1407f2a98:
            pauVar62 = (undefined1 (*) [16])(puVar65 + 1);
            do {
              fVar79 = *(float *)(*pauStack_108 + (longlong)pauVar62 * 4);
              fVar176 = auVar90._4_4_;
              *(float *)(pauStack_108[-1] + (longlong)pauVar62 * 4 + 0xc) =
                   ((auVar90._0_4_ + fVar79) * fVar80 - fVar176) * fVar80 + fVar176;
              auVar90._4_4_ = fVar79;
              auVar90._0_4_ = fVar176;
              pauVar62 = (undefined1 (*) [16])((longlong)*pauVar62 + 1);
              auVar90._8_4_ = auVar90._12_4_;
            } while (pauVar64 != pauVar62);
          }
          else {
            puVar66 = (undefined *)((ulonglong)puVar72 & 0xfffffffffffffff8);
            puVar65 = puVar66 + 1;
            auVar89._8_8_ = uVar42;
            auVar89._0_8_ = uVar42;
            puVar69 = (undefined *)0x0;
            fVar79 = auVar83._0_4_;
            do {
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 8);
              fVar30 = *pfVar50;
              fVar31 = pfVar50[1];
              fVar32 = pfVar50[2];
              fVar33 = pfVar50[3];
              fVar122 = auVar89._12_4_;
              fVar123 = fVar79 + fVar30;
              auVar89 = *(undefined1 (*) [16])(pauStack_108[1] + (longlong)puVar69 * 4 + 8);
              fVar11 = auVar89._0_4_;
              fVar121 = auVar89._4_4_;
              fVar79 = auVar89._8_4_;
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 4);
              *pfVar50 = (fVar123 * fVar176 - fVar122) * fVar176 + fVar122;
              pfVar50[1] = ((fVar122 + fVar31) * fVar177 - fVar30) * fVar177 + fVar30;
              pfVar50[2] = ((fVar30 + fVar32) * fVar15 - fVar31) * fVar15 + fVar31;
              pfVar50[3] = ((fVar31 + fVar33) * fVar12 - fVar32) * fVar12 + fVar32;
              pfVar50 = (float *)(pauStack_108[1] + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar32 + fVar11) * fVar176 - fVar33) * fVar176 + fVar33;
              pfVar50[1] = ((fVar33 + fVar121) * fVar177 - fVar11) * fVar177 + fVar11;
              pfVar50[2] = ((fVar11 + fVar79) * fVar15 - fVar121) * fVar15 + fVar121;
              pfVar50[3] = ((fVar121 + auVar89._12_4_) * fVar12 - fVar79) * fVar12 + fVar79;
              puVar69 = puVar69 + 8;
            } while (puVar66 != puVar69);
            if (puVar72 != puVar66) {
              auVar90._8_8_ = auVar89._8_8_;
              auVar90._0_8_ = auVar90._8_8_;
              goto LAB_1407f2a98;
            }
          }
          fVar15 = _UNK_142e36f4c;
          fVar177 = _UNK_142e36f48;
          fVar176 = _UNK_142e36f44;
          fVar79 = _DAT_142e36f40;
          uVar38 = *(uint *)(*pauStack_108 + 4);
          auVar91 = ZEXT416(uVar38);
          puVar65 = (undefined *)0x1;
          if (puVar72 < (undefined *)0x8) {
            auVar129._8_8_ = 0;
            auVar129._0_8_ = uVar42;
LAB_1407f2b82:
            pauVar62 = (undefined1 (*) [16])(puVar65 + 1);
            do {
              auVar81 = auVar91;
              fVar79 = *(float *)(*pauStack_108 + (longlong)pauVar62 * 4);
              fVar176 = auVar81._0_4_;
              *(float *)(pauStack_108[-1] + (longlong)pauVar62 * 4 + 0xc) =
                   ((auVar129._0_4_ + fVar79) * fVar80 - fVar176) * fVar80 + fVar176;
              pauVar62 = (undefined1 (*) [16])((longlong)*pauVar62 + 1);
              auVar91 = ZEXT416((uint)fVar79);
              auVar129 = auVar81;
            } while (pauVar64 != pauVar62);
          }
          else {
            puVar66 = (undefined *)((ulonglong)puVar72 & 0xfffffffffffffff8);
            puVar65 = puVar66 + 1;
            auVar127._4_4_ = auVar83._0_4_;
            auVar127._0_4_ = auVar83._0_4_;
            auVar127._8_4_ = auVar83._0_4_;
            auVar127._12_4_ = auVar83._0_4_;
            auVar92._4_4_ = uVar38;
            auVar92._0_4_ = uVar38;
            auVar92._8_4_ = uVar38;
            auVar92._12_4_ = uVar38;
            puVar69 = (undefined *)0x0;
            do {
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 8);
              fVar30 = *pfVar50;
              fVar31 = pfVar50[1];
              fVar32 = pfVar50[2];
              fVar33 = pfVar50[3];
              fVar123 = auVar92._12_4_;
              fVar169 = auVar127._12_4_;
              auVar92 = *(undefined1 (*) [16])(pauStack_108[1] + (longlong)puVar69 * 4 + 8);
              fVar12 = auVar92._0_4_;
              fVar11 = auVar92._12_4_;
              fVar121 = auVar92._4_4_;
              fVar122 = auVar92._8_4_;
              auVar127._4_4_ = fVar12;
              auVar127._0_4_ = fVar33;
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar169 + fVar30) * fVar79 - fVar123) * fVar79 + fVar123;
              pfVar50[1] = ((fVar123 + fVar31) * fVar176 - fVar30) * fVar176 + fVar30;
              pfVar50[2] = ((fVar30 + fVar32) * fVar177 - fVar31) * fVar177 + fVar31;
              pfVar50[3] = ((fVar31 + fVar33) * fVar15 - fVar32) * fVar15 + fVar32;
              pfVar50 = (float *)(pauStack_108[1] + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar32 + fVar12) * fVar79 - fVar33) * fVar79 + fVar33;
              pfVar50[1] = ((fVar33 + fVar121) * fVar176 - fVar12) * fVar176 + fVar12;
              pfVar50[2] = ((fVar12 + fVar122) * fVar177 - fVar121) * fVar177 + fVar121;
              pfVar50[3] = ((fVar121 + fVar11) * fVar15 - fVar122) * fVar15 + fVar122;
              puVar69 = puVar69 + 8;
              auVar127._8_4_ = fVar121;
              auVar127._12_4_ = fVar122;
            } while (puVar66 != puVar69);
            if (puVar72 != puVar66) {
              auVar16._4_8_ = auVar127._8_8_;
              auVar16._0_4_ = fVar121;
              auVar128._0_8_ = auVar16._0_8_ << 0x20;
              auVar128._8_4_ = fVar122;
              auVar128._12_4_ = fVar11;
              auVar129._8_8_ = auVar92._8_8_;
              auVar129._0_8_ = auVar128._8_8_;
              auVar91._4_4_ = fVar11;
              auVar91._0_4_ = fVar11;
              auVar91._8_4_ = fVar11;
              auVar91._12_4_ = fVar11;
              goto LAB_1407f2b82;
            }
          }
          fVar15 = _UNK_142e36f4c;
          fVar177 = _UNK_142e36f48;
          fVar176 = _UNK_142e36f44;
          fVar79 = _DAT_142e36f40;
          uVar38 = *(uint *)(*pauStack_108 + 4);
          auVar93 = ZEXT416(uVar38);
          puVar65 = (undefined *)0x1;
          if (puVar72 < (undefined *)0x8) {
            auVar132._8_8_ = 0;
            auVar132._0_8_ = uVar42;
LAB_1407f2c60:
            pauVar62 = (undefined1 (*) [16])(puVar65 + 1);
            do {
              auVar81 = auVar93;
              fVar79 = *(float *)(*pauStack_108 + (longlong)pauVar62 * 4);
              fVar176 = auVar81._0_4_;
              *(float *)(pauStack_108[-1] + (longlong)pauVar62 * 4 + 0xc) =
                   ((auVar132._0_4_ + fVar79) * fVar80 - fVar176) * fVar80 + fVar176;
              pauVar62 = (undefined1 (*) [16])((longlong)*pauVar62 + 1);
              auVar93 = ZEXT416((uint)fVar79);
              auVar132 = auVar81;
            } while (pauVar64 != pauVar62);
          }
          else {
            puVar66 = (undefined *)((ulonglong)puVar72 & 0xfffffffffffffff8);
            puVar65 = puVar66 + 1;
            auVar130._4_4_ = auVar83._0_4_;
            auVar130._0_4_ = auVar83._0_4_;
            auVar130._8_4_ = auVar83._0_4_;
            auVar130._12_4_ = auVar83._0_4_;
            auVar94._4_4_ = uVar38;
            auVar94._0_4_ = uVar38;
            auVar94._8_4_ = uVar38;
            auVar94._12_4_ = uVar38;
            puVar69 = (undefined *)0x0;
            do {
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 8);
              fVar30 = *pfVar50;
              fVar31 = pfVar50[1];
              fVar32 = pfVar50[2];
              fVar33 = pfVar50[3];
              fVar123 = auVar94._12_4_;
              fVar169 = auVar130._12_4_;
              auVar94 = *(undefined1 (*) [16])(pauStack_108[1] + (longlong)puVar69 * 4 + 8);
              fVar12 = auVar94._0_4_;
              fVar11 = auVar94._12_4_;
              fVar121 = auVar94._4_4_;
              fVar122 = auVar94._8_4_;
              auVar130._4_4_ = fVar12;
              auVar130._0_4_ = fVar33;
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar169 + fVar30) * fVar79 - fVar123) * fVar79 + fVar123;
              pfVar50[1] = ((fVar123 + fVar31) * fVar176 - fVar30) * fVar176 + fVar30;
              pfVar50[2] = ((fVar30 + fVar32) * fVar177 - fVar31) * fVar177 + fVar31;
              pfVar50[3] = ((fVar31 + fVar33) * fVar15 - fVar32) * fVar15 + fVar32;
              pfVar50 = (float *)(pauStack_108[1] + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar32 + fVar12) * fVar79 - fVar33) * fVar79 + fVar33;
              pfVar50[1] = ((fVar33 + fVar121) * fVar176 - fVar12) * fVar176 + fVar12;
              pfVar50[2] = ((fVar12 + fVar122) * fVar177 - fVar121) * fVar177 + fVar121;
              pfVar50[3] = ((fVar121 + fVar11) * fVar15 - fVar122) * fVar15 + fVar122;
              puVar69 = puVar69 + 8;
              auVar130._8_4_ = fVar121;
              auVar130._12_4_ = fVar122;
            } while (puVar66 != puVar69);
            if (puVar72 != puVar66) {
              auVar17._4_8_ = auVar130._8_8_;
              auVar17._0_4_ = fVar121;
              auVar131._0_8_ = auVar17._0_8_ << 0x20;
              auVar131._8_4_ = fVar122;
              auVar131._12_4_ = fVar11;
              auVar132._8_8_ = auVar94._8_8_;
              auVar132._0_8_ = auVar131._8_8_;
              auVar93._4_4_ = fVar11;
              auVar93._0_4_ = fVar11;
              auVar93._8_4_ = fVar11;
              auVar93._12_4_ = fVar11;
              goto LAB_1407f2c60;
            }
          }
          fVar15 = _UNK_142e36f4c;
          fVar177 = _UNK_142e36f48;
          fVar176 = _UNK_142e36f44;
          fVar79 = _DAT_142e36f40;
          uVar38 = *(uint *)(*pauStack_108 + 4);
          auVar95 = ZEXT416(uVar38);
          puVar65 = (undefined *)0x1;
          if (puVar72 < (undefined *)0x8) {
            auVar135._8_8_ = 0;
            auVar135._0_8_ = uVar42;
LAB_1407f2d3e:
            pauVar62 = (undefined1 (*) [16])(puVar65 + 1);
            do {
              auVar81 = auVar95;
              fVar79 = *(float *)(*pauStack_108 + (longlong)pauVar62 * 4);
              fVar176 = auVar81._0_4_;
              *(float *)(pauStack_108[-1] + (longlong)pauVar62 * 4 + 0xc) =
                   ((auVar135._0_4_ + fVar79) * fVar80 - fVar176) * fVar80 + fVar176;
              pauVar62 = (undefined1 (*) [16])((longlong)*pauVar62 + 1);
              auVar95 = ZEXT416((uint)fVar79);
              auVar135 = auVar81;
            } while (pauVar64 != pauVar62);
          }
          else {
            puVar66 = (undefined *)((ulonglong)puVar72 & 0xfffffffffffffff8);
            puVar65 = puVar66 + 1;
            auVar133._4_4_ = auVar83._0_4_;
            auVar133._0_4_ = auVar83._0_4_;
            auVar133._8_4_ = auVar83._0_4_;
            auVar133._12_4_ = auVar83._0_4_;
            auVar96._4_4_ = uVar38;
            auVar96._0_4_ = uVar38;
            auVar96._8_4_ = uVar38;
            auVar96._12_4_ = uVar38;
            puVar69 = (undefined *)0x0;
            do {
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 8);
              fVar30 = *pfVar50;
              fVar31 = pfVar50[1];
              fVar32 = pfVar50[2];
              fVar33 = pfVar50[3];
              fVar123 = auVar96._12_4_;
              fVar169 = auVar133._12_4_;
              auVar96 = *(undefined1 (*) [16])(pauStack_108[1] + (longlong)puVar69 * 4 + 8);
              fVar12 = auVar96._0_4_;
              fVar11 = auVar96._12_4_;
              fVar121 = auVar96._4_4_;
              fVar122 = auVar96._8_4_;
              auVar133._4_4_ = fVar12;
              auVar133._0_4_ = fVar33;
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar169 + fVar30) * fVar79 - fVar123) * fVar79 + fVar123;
              pfVar50[1] = ((fVar123 + fVar31) * fVar176 - fVar30) * fVar176 + fVar30;
              pfVar50[2] = ((fVar30 + fVar32) * fVar177 - fVar31) * fVar177 + fVar31;
              pfVar50[3] = ((fVar31 + fVar33) * fVar15 - fVar32) * fVar15 + fVar32;
              pfVar50 = (float *)(pauStack_108[1] + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar32 + fVar12) * fVar79 - fVar33) * fVar79 + fVar33;
              pfVar50[1] = ((fVar33 + fVar121) * fVar176 - fVar12) * fVar176 + fVar12;
              pfVar50[2] = ((fVar12 + fVar122) * fVar177 - fVar121) * fVar177 + fVar121;
              pfVar50[3] = ((fVar121 + fVar11) * fVar15 - fVar122) * fVar15 + fVar122;
              puVar69 = puVar69 + 8;
              auVar133._8_4_ = fVar121;
              auVar133._12_4_ = fVar122;
            } while (puVar66 != puVar69);
            if (puVar72 != puVar66) {
              auVar18._4_8_ = auVar133._8_8_;
              auVar18._0_4_ = fVar121;
              auVar134._0_8_ = auVar18._0_8_ << 0x20;
              auVar134._8_4_ = fVar122;
              auVar134._12_4_ = fVar11;
              auVar135._8_8_ = auVar96._8_8_;
              auVar135._0_8_ = auVar134._8_8_;
              auVar95._4_4_ = fVar11;
              auVar95._0_4_ = fVar11;
              auVar95._8_4_ = fVar11;
              auVar95._12_4_ = fVar11;
              goto LAB_1407f2d3e;
            }
          }
          fVar15 = _UNK_142e36f4c;
          fVar177 = _UNK_142e36f48;
          fVar176 = _UNK_142e36f44;
          fVar79 = _DAT_142e36f40;
          uVar38 = *(uint *)(*pauStack_108 + 4);
          auVar97 = ZEXT416(uVar38);
          puVar65 = (undefined *)0x1;
          if (puVar72 < (undefined *)0x8) {
            auVar138._8_8_ = 0;
            auVar138._0_8_ = uVar42;
LAB_1407f2e1c:
            pauVar62 = (undefined1 (*) [16])(puVar65 + 1);
            do {
              auVar81 = auVar97;
              fVar79 = *(float *)(*pauStack_108 + (longlong)pauVar62 * 4);
              fVar176 = auVar81._0_4_;
              *(float *)(pauStack_108[-1] + (longlong)pauVar62 * 4 + 0xc) =
                   ((auVar138._0_4_ + fVar79) * fVar80 - fVar176) * fVar80 + fVar176;
              pauVar62 = (undefined1 (*) [16])((longlong)*pauVar62 + 1);
              auVar97 = ZEXT416((uint)fVar79);
              auVar138 = auVar81;
            } while (pauVar64 != pauVar62);
          }
          else {
            puVar66 = (undefined *)((ulonglong)puVar72 & 0xfffffffffffffff8);
            puVar65 = puVar66 + 1;
            auVar136._4_4_ = auVar83._0_4_;
            auVar136._0_4_ = auVar83._0_4_;
            auVar136._8_4_ = auVar83._0_4_;
            auVar136._12_4_ = auVar83._0_4_;
            auVar98._4_4_ = uVar38;
            auVar98._0_4_ = uVar38;
            auVar98._8_4_ = uVar38;
            auVar98._12_4_ = uVar38;
            puVar69 = (undefined *)0x0;
            do {
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 8);
              fVar30 = *pfVar50;
              fVar31 = pfVar50[1];
              fVar32 = pfVar50[2];
              fVar33 = pfVar50[3];
              fVar123 = auVar98._12_4_;
              fVar169 = auVar136._12_4_;
              auVar98 = *(undefined1 (*) [16])(pauStack_108[1] + (longlong)puVar69 * 4 + 8);
              fVar12 = auVar98._0_4_;
              fVar11 = auVar98._12_4_;
              fVar121 = auVar98._4_4_;
              fVar122 = auVar98._8_4_;
              auVar136._4_4_ = fVar12;
              auVar136._0_4_ = fVar33;
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar169 + fVar30) * fVar79 - fVar123) * fVar79 + fVar123;
              pfVar50[1] = ((fVar123 + fVar31) * fVar176 - fVar30) * fVar176 + fVar30;
              pfVar50[2] = ((fVar30 + fVar32) * fVar177 - fVar31) * fVar177 + fVar31;
              pfVar50[3] = ((fVar31 + fVar33) * fVar15 - fVar32) * fVar15 + fVar32;
              pfVar50 = (float *)(pauStack_108[1] + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar32 + fVar12) * fVar79 - fVar33) * fVar79 + fVar33;
              pfVar50[1] = ((fVar33 + fVar121) * fVar176 - fVar12) * fVar176 + fVar12;
              pfVar50[2] = ((fVar12 + fVar122) * fVar177 - fVar121) * fVar177 + fVar121;
              pfVar50[3] = ((fVar121 + fVar11) * fVar15 - fVar122) * fVar15 + fVar122;
              puVar69 = puVar69 + 8;
              auVar136._8_4_ = fVar121;
              auVar136._12_4_ = fVar122;
            } while (puVar66 != puVar69);
            if (puVar72 != puVar66) {
              auVar19._4_8_ = auVar136._8_8_;
              auVar19._0_4_ = fVar121;
              auVar137._0_8_ = auVar19._0_8_ << 0x20;
              auVar137._8_4_ = fVar122;
              auVar137._12_4_ = fVar11;
              auVar138._8_8_ = auVar98._8_8_;
              auVar138._0_8_ = auVar137._8_8_;
              auVar97._4_4_ = fVar11;
              auVar97._0_4_ = fVar11;
              auVar97._8_4_ = fVar11;
              auVar97._12_4_ = fVar11;
              goto LAB_1407f2e1c;
            }
          }
          fVar15 = _UNK_142e36f4c;
          fVar177 = _UNK_142e36f48;
          fVar176 = _UNK_142e36f44;
          fVar79 = _DAT_142e36f40;
          uVar38 = *(uint *)(*pauStack_108 + 4);
          auVar99 = ZEXT416(uVar38);
          puVar65 = (undefined *)0x1;
          if (puVar72 < (undefined *)0x8) {
            auVar141._8_8_ = 0;
            auVar141._0_8_ = uVar42;
LAB_1407f2efa:
            pauVar62 = (undefined1 (*) [16])(puVar65 + 1);
            do {
              auVar81 = auVar99;
              fVar79 = *(float *)(*pauStack_108 + (longlong)pauVar62 * 4);
              fVar176 = auVar81._0_4_;
              *(float *)(pauStack_108[-1] + (longlong)pauVar62 * 4 + 0xc) =
                   ((auVar141._0_4_ + fVar79) * fVar80 - fVar176) * fVar80 + fVar176;
              pauVar62 = (undefined1 (*) [16])((longlong)*pauVar62 + 1);
              auVar99 = ZEXT416((uint)fVar79);
              auVar141 = auVar81;
            } while (pauVar64 != pauVar62);
          }
          else {
            puVar66 = (undefined *)((ulonglong)puVar72 & 0xfffffffffffffff8);
            puVar65 = puVar66 + 1;
            auVar139._4_4_ = auVar83._0_4_;
            auVar139._0_4_ = auVar83._0_4_;
            auVar139._8_4_ = auVar83._0_4_;
            auVar139._12_4_ = auVar83._0_4_;
            auVar100._4_4_ = uVar38;
            auVar100._0_4_ = uVar38;
            auVar100._8_4_ = uVar38;
            auVar100._12_4_ = uVar38;
            puVar69 = (undefined *)0x0;
            do {
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 8);
              fVar30 = *pfVar50;
              fVar31 = pfVar50[1];
              fVar32 = pfVar50[2];
              fVar33 = pfVar50[3];
              fVar123 = auVar100._12_4_;
              fVar169 = auVar139._12_4_;
              auVar100 = *(undefined1 (*) [16])(pauStack_108[1] + (longlong)puVar69 * 4 + 8);
              fVar12 = auVar100._0_4_;
              fVar11 = auVar100._12_4_;
              fVar121 = auVar100._4_4_;
              fVar122 = auVar100._8_4_;
              auVar139._4_4_ = fVar12;
              auVar139._0_4_ = fVar33;
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar169 + fVar30) * fVar79 - fVar123) * fVar79 + fVar123;
              pfVar50[1] = ((fVar123 + fVar31) * fVar176 - fVar30) * fVar176 + fVar30;
              pfVar50[2] = ((fVar30 + fVar32) * fVar177 - fVar31) * fVar177 + fVar31;
              pfVar50[3] = ((fVar31 + fVar33) * fVar15 - fVar32) * fVar15 + fVar32;
              pfVar50 = (float *)(pauStack_108[1] + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar32 + fVar12) * fVar79 - fVar33) * fVar79 + fVar33;
              pfVar50[1] = ((fVar33 + fVar121) * fVar176 - fVar12) * fVar176 + fVar12;
              pfVar50[2] = ((fVar12 + fVar122) * fVar177 - fVar121) * fVar177 + fVar121;
              pfVar50[3] = ((fVar121 + fVar11) * fVar15 - fVar122) * fVar15 + fVar122;
              puVar69 = puVar69 + 8;
              auVar139._8_4_ = fVar121;
              auVar139._12_4_ = fVar122;
            } while (puVar66 != puVar69);
            if (puVar72 != puVar66) {
              auVar20._4_8_ = auVar139._8_8_;
              auVar20._0_4_ = fVar121;
              auVar140._0_8_ = auVar20._0_8_ << 0x20;
              auVar140._8_4_ = fVar122;
              auVar140._12_4_ = fVar11;
              auVar141._8_8_ = auVar100._8_8_;
              auVar141._0_8_ = auVar140._8_8_;
              auVar99._4_4_ = fVar11;
              auVar99._0_4_ = fVar11;
              auVar99._8_4_ = fVar11;
              auVar99._12_4_ = fVar11;
              goto LAB_1407f2efa;
            }
          }
          fVar15 = _UNK_142e36f4c;
          fVar177 = _UNK_142e36f48;
          fVar176 = _UNK_142e36f44;
          fVar79 = _DAT_142e36f40;
          uVar38 = *(uint *)(*pauStack_108 + 4);
          auVar101 = ZEXT416(uVar38);
          puVar65 = (undefined *)0x1;
          if (puVar72 < (undefined *)0x8) {
            auVar144._8_8_ = 0;
            auVar144._0_8_ = uVar42;
LAB_1407f2fd8:
            pauVar62 = (undefined1 (*) [16])(puVar65 + 1);
            do {
              auVar81 = auVar101;
              fVar79 = *(float *)(*pauStack_108 + (longlong)pauVar62 * 4);
              fVar176 = auVar81._0_4_;
              *(float *)(pauStack_108[-1] + (longlong)pauVar62 * 4 + 0xc) =
                   ((auVar144._0_4_ + fVar79) * fVar80 - fVar176) * fVar80 + fVar176;
              pauVar62 = (undefined1 (*) [16])((longlong)*pauVar62 + 1);
              auVar101 = ZEXT416((uint)fVar79);
              auVar144 = auVar81;
            } while (pauVar64 != pauVar62);
          }
          else {
            puVar66 = (undefined *)((ulonglong)puVar72 & 0xfffffffffffffff8);
            puVar65 = puVar66 + 1;
            auVar142._4_4_ = auVar83._0_4_;
            auVar142._0_4_ = auVar83._0_4_;
            auVar142._8_4_ = auVar83._0_4_;
            auVar142._12_4_ = auVar83._0_4_;
            auVar102._4_4_ = uVar38;
            auVar102._0_4_ = uVar38;
            auVar102._8_4_ = uVar38;
            auVar102._12_4_ = uVar38;
            puVar69 = (undefined *)0x0;
            do {
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 8);
              fVar30 = *pfVar50;
              fVar31 = pfVar50[1];
              fVar32 = pfVar50[2];
              fVar33 = pfVar50[3];
              fVar123 = auVar102._12_4_;
              fVar169 = auVar142._12_4_;
              auVar102 = *(undefined1 (*) [16])(pauStack_108[1] + (longlong)puVar69 * 4 + 8);
              fVar12 = auVar102._0_4_;
              fVar11 = auVar102._12_4_;
              fVar121 = auVar102._4_4_;
              fVar122 = auVar102._8_4_;
              auVar142._4_4_ = fVar12;
              auVar142._0_4_ = fVar33;
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar169 + fVar30) * fVar79 - fVar123) * fVar79 + fVar123;
              pfVar50[1] = ((fVar123 + fVar31) * fVar176 - fVar30) * fVar176 + fVar30;
              pfVar50[2] = ((fVar30 + fVar32) * fVar177 - fVar31) * fVar177 + fVar31;
              pfVar50[3] = ((fVar31 + fVar33) * fVar15 - fVar32) * fVar15 + fVar32;
              pfVar50 = (float *)(pauStack_108[1] + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar32 + fVar12) * fVar79 - fVar33) * fVar79 + fVar33;
              pfVar50[1] = ((fVar33 + fVar121) * fVar176 - fVar12) * fVar176 + fVar12;
              pfVar50[2] = ((fVar12 + fVar122) * fVar177 - fVar121) * fVar177 + fVar121;
              pfVar50[3] = ((fVar121 + fVar11) * fVar15 - fVar122) * fVar15 + fVar122;
              puVar69 = puVar69 + 8;
              auVar142._8_4_ = fVar121;
              auVar142._12_4_ = fVar122;
            } while (puVar66 != puVar69);
            if (puVar72 != puVar66) {
              auVar21._4_8_ = auVar142._8_8_;
              auVar21._0_4_ = fVar121;
              auVar143._0_8_ = auVar21._0_8_ << 0x20;
              auVar143._8_4_ = fVar122;
              auVar143._12_4_ = fVar11;
              auVar144._8_8_ = auVar102._8_8_;
              auVar144._0_8_ = auVar143._8_8_;
              auVar101._4_4_ = fVar11;
              auVar101._0_4_ = fVar11;
              auVar101._8_4_ = fVar11;
              auVar101._12_4_ = fVar11;
              goto LAB_1407f2fd8;
            }
          }
          fVar15 = _UNK_142e36f4c;
          fVar177 = _UNK_142e36f48;
          fVar176 = _UNK_142e36f44;
          fVar79 = _DAT_142e36f40;
          uVar38 = *(uint *)(*pauStack_108 + 4);
          auVar103 = ZEXT416(uVar38);
          puVar65 = (undefined *)0x1;
          if (puVar72 < (undefined *)0x8) {
            auVar147._8_8_ = 0;
            auVar147._0_8_ = uVar42;
LAB_1407f30b6:
            pauVar62 = (undefined1 (*) [16])(puVar65 + 1);
            do {
              auVar81 = auVar103;
              fVar79 = *(float *)(*pauStack_108 + (longlong)pauVar62 * 4);
              fVar176 = auVar81._0_4_;
              *(float *)(pauStack_108[-1] + (longlong)pauVar62 * 4 + 0xc) =
                   ((auVar147._0_4_ + fVar79) * fVar80 - fVar176) * fVar80 + fVar176;
              pauVar62 = (undefined1 (*) [16])((longlong)*pauVar62 + 1);
              auVar103 = ZEXT416((uint)fVar79);
              auVar147 = auVar81;
            } while (pauVar64 != pauVar62);
          }
          else {
            puVar66 = (undefined *)((ulonglong)puVar72 & 0xfffffffffffffff8);
            puVar65 = puVar66 + 1;
            auVar145._4_4_ = auVar83._0_4_;
            auVar145._0_4_ = auVar83._0_4_;
            auVar145._8_4_ = auVar83._0_4_;
            auVar145._12_4_ = auVar83._0_4_;
            auVar104._4_4_ = uVar38;
            auVar104._0_4_ = uVar38;
            auVar104._8_4_ = uVar38;
            auVar104._12_4_ = uVar38;
            puVar69 = (undefined *)0x0;
            do {
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 8);
              fVar30 = *pfVar50;
              fVar31 = pfVar50[1];
              fVar32 = pfVar50[2];
              fVar33 = pfVar50[3];
              fVar123 = auVar104._12_4_;
              fVar169 = auVar145._12_4_;
              auVar104 = *(undefined1 (*) [16])(pauStack_108[1] + (longlong)puVar69 * 4 + 8);
              fVar12 = auVar104._0_4_;
              fVar11 = auVar104._12_4_;
              fVar121 = auVar104._4_4_;
              fVar122 = auVar104._8_4_;
              auVar145._4_4_ = fVar12;
              auVar145._0_4_ = fVar33;
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar169 + fVar30) * fVar79 - fVar123) * fVar79 + fVar123;
              pfVar50[1] = ((fVar123 + fVar31) * fVar176 - fVar30) * fVar176 + fVar30;
              pfVar50[2] = ((fVar30 + fVar32) * fVar177 - fVar31) * fVar177 + fVar31;
              pfVar50[3] = ((fVar31 + fVar33) * fVar15 - fVar32) * fVar15 + fVar32;
              pfVar50 = (float *)(pauStack_108[1] + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar32 + fVar12) * fVar79 - fVar33) * fVar79 + fVar33;
              pfVar50[1] = ((fVar33 + fVar121) * fVar176 - fVar12) * fVar176 + fVar12;
              pfVar50[2] = ((fVar12 + fVar122) * fVar177 - fVar121) * fVar177 + fVar121;
              pfVar50[3] = ((fVar121 + fVar11) * fVar15 - fVar122) * fVar15 + fVar122;
              puVar69 = puVar69 + 8;
              auVar145._8_4_ = fVar121;
              auVar145._12_4_ = fVar122;
            } while (puVar66 != puVar69);
            if (puVar72 != puVar66) {
              auVar22._4_8_ = auVar145._8_8_;
              auVar22._0_4_ = fVar121;
              auVar146._0_8_ = auVar22._0_8_ << 0x20;
              auVar146._8_4_ = fVar122;
              auVar146._12_4_ = fVar11;
              auVar147._8_8_ = auVar104._8_8_;
              auVar147._0_8_ = auVar146._8_8_;
              auVar103._4_4_ = fVar11;
              auVar103._0_4_ = fVar11;
              auVar103._8_4_ = fVar11;
              auVar103._12_4_ = fVar11;
              goto LAB_1407f30b6;
            }
          }
          fVar15 = _UNK_142e36f4c;
          fVar177 = _UNK_142e36f48;
          fVar176 = _UNK_142e36f44;
          fVar79 = _DAT_142e36f40;
          uVar38 = *(uint *)(*pauStack_108 + 4);
          auVar105 = ZEXT416(uVar38);
          puVar65 = (undefined *)0x1;
          if (puVar72 < (undefined *)0x8) {
            auVar150._8_8_ = 0;
            auVar150._0_8_ = uVar42;
LAB_1407f3194:
            pauVar62 = (undefined1 (*) [16])(puVar65 + 1);
            do {
              auVar81 = auVar105;
              fVar79 = *(float *)(*pauStack_108 + (longlong)pauVar62 * 4);
              fVar176 = auVar81._0_4_;
              *(float *)(pauStack_108[-1] + (longlong)pauVar62 * 4 + 0xc) =
                   ((auVar150._0_4_ + fVar79) * fVar80 - fVar176) * fVar80 + fVar176;
              pauVar62 = (undefined1 (*) [16])((longlong)*pauVar62 + 1);
              auVar105 = ZEXT416((uint)fVar79);
              auVar150 = auVar81;
            } while (pauVar64 != pauVar62);
          }
          else {
            puVar66 = (undefined *)((ulonglong)puVar72 & 0xfffffffffffffff8);
            puVar65 = puVar66 + 1;
            auVar148._4_4_ = auVar83._0_4_;
            auVar148._0_4_ = auVar83._0_4_;
            auVar148._8_4_ = auVar83._0_4_;
            auVar148._12_4_ = auVar83._0_4_;
            auVar106._4_4_ = uVar38;
            auVar106._0_4_ = uVar38;
            auVar106._8_4_ = uVar38;
            auVar106._12_4_ = uVar38;
            puVar69 = (undefined *)0x0;
            do {
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 8);
              fVar30 = *pfVar50;
              fVar31 = pfVar50[1];
              fVar32 = pfVar50[2];
              fVar33 = pfVar50[3];
              fVar123 = auVar106._12_4_;
              fVar169 = auVar148._12_4_;
              auVar106 = *(undefined1 (*) [16])(pauStack_108[1] + (longlong)puVar69 * 4 + 8);
              fVar12 = auVar106._0_4_;
              fVar11 = auVar106._12_4_;
              fVar121 = auVar106._4_4_;
              fVar122 = auVar106._8_4_;
              auVar148._4_4_ = fVar12;
              auVar148._0_4_ = fVar33;
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar169 + fVar30) * fVar79 - fVar123) * fVar79 + fVar123;
              pfVar50[1] = ((fVar123 + fVar31) * fVar176 - fVar30) * fVar176 + fVar30;
              pfVar50[2] = ((fVar30 + fVar32) * fVar177 - fVar31) * fVar177 + fVar31;
              pfVar50[3] = ((fVar31 + fVar33) * fVar15 - fVar32) * fVar15 + fVar32;
              pfVar50 = (float *)(pauStack_108[1] + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar32 + fVar12) * fVar79 - fVar33) * fVar79 + fVar33;
              pfVar50[1] = ((fVar33 + fVar121) * fVar176 - fVar12) * fVar176 + fVar12;
              pfVar50[2] = ((fVar12 + fVar122) * fVar177 - fVar121) * fVar177 + fVar121;
              pfVar50[3] = ((fVar121 + fVar11) * fVar15 - fVar122) * fVar15 + fVar122;
              puVar69 = puVar69 + 8;
              auVar148._8_4_ = fVar121;
              auVar148._12_4_ = fVar122;
            } while (puVar66 != puVar69);
            if (puVar72 != puVar66) {
              auVar23._4_8_ = auVar148._8_8_;
              auVar23._0_4_ = fVar121;
              auVar149._0_8_ = auVar23._0_8_ << 0x20;
              auVar149._8_4_ = fVar122;
              auVar149._12_4_ = fVar11;
              auVar150._8_8_ = auVar106._8_8_;
              auVar150._0_8_ = auVar149._8_8_;
              auVar105._4_4_ = fVar11;
              auVar105._0_4_ = fVar11;
              auVar105._8_4_ = fVar11;
              auVar105._12_4_ = fVar11;
              goto LAB_1407f3194;
            }
          }
          fVar15 = _UNK_142e36f4c;
          fVar177 = _UNK_142e36f48;
          fVar176 = _UNK_142e36f44;
          fVar79 = _DAT_142e36f40;
          uVar38 = *(uint *)(*pauStack_108 + 4);
          auVar107 = ZEXT416(uVar38);
          puVar65 = (undefined *)0x1;
          if (puVar72 < (undefined *)0x8) {
            auVar153._8_8_ = 0;
            auVar153._0_8_ = uVar42;
LAB_1407f3272:
            pauVar62 = (undefined1 (*) [16])(puVar65 + 1);
            do {
              auVar81 = auVar107;
              fVar79 = *(float *)(*pauStack_108 + (longlong)pauVar62 * 4);
              fVar176 = auVar81._0_4_;
              *(float *)(pauStack_108[-1] + (longlong)pauVar62 * 4 + 0xc) =
                   ((auVar153._0_4_ + fVar79) * fVar80 - fVar176) * fVar80 + fVar176;
              pauVar62 = (undefined1 (*) [16])((longlong)*pauVar62 + 1);
              auVar107 = ZEXT416((uint)fVar79);
              auVar153 = auVar81;
            } while (pauVar64 != pauVar62);
          }
          else {
            puVar66 = (undefined *)((ulonglong)puVar72 & 0xfffffffffffffff8);
            puVar65 = puVar66 + 1;
            auVar151._4_4_ = auVar83._0_4_;
            auVar151._0_4_ = auVar83._0_4_;
            auVar151._8_4_ = auVar83._0_4_;
            auVar151._12_4_ = auVar83._0_4_;
            auVar108._4_4_ = uVar38;
            auVar108._0_4_ = uVar38;
            auVar108._8_4_ = uVar38;
            auVar108._12_4_ = uVar38;
            puVar69 = (undefined *)0x0;
            do {
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 8);
              fVar30 = *pfVar50;
              fVar31 = pfVar50[1];
              fVar32 = pfVar50[2];
              fVar33 = pfVar50[3];
              fVar123 = auVar108._12_4_;
              fVar169 = auVar151._12_4_;
              auVar108 = *(undefined1 (*) [16])(pauStack_108[1] + (longlong)puVar69 * 4 + 8);
              fVar12 = auVar108._0_4_;
              fVar11 = auVar108._12_4_;
              fVar121 = auVar108._4_4_;
              fVar122 = auVar108._8_4_;
              auVar151._4_4_ = fVar12;
              auVar151._0_4_ = fVar33;
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar169 + fVar30) * fVar79 - fVar123) * fVar79 + fVar123;
              pfVar50[1] = ((fVar123 + fVar31) * fVar176 - fVar30) * fVar176 + fVar30;
              pfVar50[2] = ((fVar30 + fVar32) * fVar177 - fVar31) * fVar177 + fVar31;
              pfVar50[3] = ((fVar31 + fVar33) * fVar15 - fVar32) * fVar15 + fVar32;
              pfVar50 = (float *)(pauStack_108[1] + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar32 + fVar12) * fVar79 - fVar33) * fVar79 + fVar33;
              pfVar50[1] = ((fVar33 + fVar121) * fVar176 - fVar12) * fVar176 + fVar12;
              pfVar50[2] = ((fVar12 + fVar122) * fVar177 - fVar121) * fVar177 + fVar121;
              pfVar50[3] = ((fVar121 + fVar11) * fVar15 - fVar122) * fVar15 + fVar122;
              puVar69 = puVar69 + 8;
              auVar151._8_4_ = fVar121;
              auVar151._12_4_ = fVar122;
            } while (puVar66 != puVar69);
            if (puVar72 != puVar66) {
              auVar24._4_8_ = auVar151._8_8_;
              auVar24._0_4_ = fVar121;
              auVar152._0_8_ = auVar24._0_8_ << 0x20;
              auVar152._8_4_ = fVar122;
              auVar152._12_4_ = fVar11;
              auVar153._8_8_ = auVar108._8_8_;
              auVar153._0_8_ = auVar152._8_8_;
              auVar107._4_4_ = fVar11;
              auVar107._0_4_ = fVar11;
              auVar107._8_4_ = fVar11;
              auVar107._12_4_ = fVar11;
              goto LAB_1407f3272;
            }
          }
          fVar15 = _UNK_142e36f4c;
          fVar177 = _UNK_142e36f48;
          fVar176 = _UNK_142e36f44;
          fVar79 = _DAT_142e36f40;
          uVar38 = *(uint *)(*pauStack_108 + 4);
          auVar109 = ZEXT416(uVar38);
          puVar65 = (undefined *)0x1;
          if (puVar72 < (undefined *)0x8) {
            auVar156._8_8_ = 0;
            auVar156._0_8_ = uVar42;
LAB_1407f3350:
            pauVar62 = (undefined1 (*) [16])(puVar65 + 1);
            do {
              auVar81 = auVar109;
              fVar79 = *(float *)(*pauStack_108 + (longlong)pauVar62 * 4);
              fVar176 = auVar81._0_4_;
              *(float *)(pauStack_108[-1] + (longlong)pauVar62 * 4 + 0xc) =
                   ((auVar156._0_4_ + fVar79) * fVar80 - fVar176) * fVar80 + fVar176;
              pauVar62 = (undefined1 (*) [16])((longlong)*pauVar62 + 1);
              auVar109 = ZEXT416((uint)fVar79);
              auVar156 = auVar81;
            } while (pauVar64 != pauVar62);
          }
          else {
            puVar66 = (undefined *)((ulonglong)puVar72 & 0xfffffffffffffff8);
            puVar65 = puVar66 + 1;
            auVar154._4_4_ = auVar83._0_4_;
            auVar154._0_4_ = auVar83._0_4_;
            auVar154._8_4_ = auVar83._0_4_;
            auVar154._12_4_ = auVar83._0_4_;
            auVar110._4_4_ = uVar38;
            auVar110._0_4_ = uVar38;
            auVar110._8_4_ = uVar38;
            auVar110._12_4_ = uVar38;
            puVar69 = (undefined *)0x0;
            do {
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 8);
              fVar30 = *pfVar50;
              fVar31 = pfVar50[1];
              fVar32 = pfVar50[2];
              fVar33 = pfVar50[3];
              fVar123 = auVar110._12_4_;
              fVar169 = auVar154._12_4_;
              auVar110 = *(undefined1 (*) [16])(pauStack_108[1] + (longlong)puVar69 * 4 + 8);
              fVar12 = auVar110._0_4_;
              fVar11 = auVar110._12_4_;
              fVar121 = auVar110._4_4_;
              fVar122 = auVar110._8_4_;
              auVar154._4_4_ = fVar12;
              auVar154._0_4_ = fVar33;
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar169 + fVar30) * fVar79 - fVar123) * fVar79 + fVar123;
              pfVar50[1] = ((fVar123 + fVar31) * fVar176 - fVar30) * fVar176 + fVar30;
              pfVar50[2] = ((fVar30 + fVar32) * fVar177 - fVar31) * fVar177 + fVar31;
              pfVar50[3] = ((fVar31 + fVar33) * fVar15 - fVar32) * fVar15 + fVar32;
              pfVar50 = (float *)(pauStack_108[1] + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar32 + fVar12) * fVar79 - fVar33) * fVar79 + fVar33;
              pfVar50[1] = ((fVar33 + fVar121) * fVar176 - fVar12) * fVar176 + fVar12;
              pfVar50[2] = ((fVar12 + fVar122) * fVar177 - fVar121) * fVar177 + fVar121;
              pfVar50[3] = ((fVar121 + fVar11) * fVar15 - fVar122) * fVar15 + fVar122;
              puVar69 = puVar69 + 8;
              auVar154._8_4_ = fVar121;
              auVar154._12_4_ = fVar122;
            } while (puVar66 != puVar69);
            if (puVar72 != puVar66) {
              auVar25._4_8_ = auVar154._8_8_;
              auVar25._0_4_ = fVar121;
              auVar155._0_8_ = auVar25._0_8_ << 0x20;
              auVar155._8_4_ = fVar122;
              auVar155._12_4_ = fVar11;
              auVar156._8_8_ = auVar110._8_8_;
              auVar156._0_8_ = auVar155._8_8_;
              auVar109._4_4_ = fVar11;
              auVar109._0_4_ = fVar11;
              auVar109._8_4_ = fVar11;
              auVar109._12_4_ = fVar11;
              goto LAB_1407f3350;
            }
          }
          fVar15 = _UNK_142e36f4c;
          fVar177 = _UNK_142e36f48;
          fVar176 = _UNK_142e36f44;
          fVar79 = _DAT_142e36f40;
          uVar38 = *(uint *)(*pauStack_108 + 4);
          auVar111 = ZEXT416(uVar38);
          puVar65 = (undefined *)0x1;
          if (puVar72 < (undefined *)0x8) {
            auVar159._8_8_ = 0;
            auVar159._0_8_ = uVar42;
LAB_1407f342e:
            pauVar62 = (undefined1 (*) [16])(puVar65 + 1);
            do {
              auVar81 = auVar111;
              fVar79 = *(float *)(*pauStack_108 + (longlong)pauVar62 * 4);
              fVar176 = auVar81._0_4_;
              *(float *)(pauStack_108[-1] + (longlong)pauVar62 * 4 + 0xc) =
                   ((auVar159._0_4_ + fVar79) * fVar80 - fVar176) * fVar80 + fVar176;
              pauVar62 = (undefined1 (*) [16])((longlong)*pauVar62 + 1);
              auVar111 = ZEXT416((uint)fVar79);
              auVar159 = auVar81;
            } while (pauVar64 != pauVar62);
          }
          else {
            puVar66 = (undefined *)((ulonglong)puVar72 & 0xfffffffffffffff8);
            puVar65 = puVar66 + 1;
            auVar157._4_4_ = auVar83._0_4_;
            auVar157._0_4_ = auVar83._0_4_;
            auVar157._8_4_ = auVar83._0_4_;
            auVar157._12_4_ = auVar83._0_4_;
            auVar112._4_4_ = uVar38;
            auVar112._0_4_ = uVar38;
            auVar112._8_4_ = uVar38;
            auVar112._12_4_ = uVar38;
            puVar69 = (undefined *)0x0;
            do {
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 8);
              fVar30 = *pfVar50;
              fVar31 = pfVar50[1];
              fVar32 = pfVar50[2];
              fVar33 = pfVar50[3];
              fVar123 = auVar112._12_4_;
              fVar169 = auVar157._12_4_;
              auVar112 = *(undefined1 (*) [16])(pauStack_108[1] + (longlong)puVar69 * 4 + 8);
              fVar12 = auVar112._0_4_;
              fVar11 = auVar112._12_4_;
              fVar121 = auVar112._4_4_;
              fVar122 = auVar112._8_4_;
              auVar157._4_4_ = fVar12;
              auVar157._0_4_ = fVar33;
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar169 + fVar30) * fVar79 - fVar123) * fVar79 + fVar123;
              pfVar50[1] = ((fVar123 + fVar31) * fVar176 - fVar30) * fVar176 + fVar30;
              pfVar50[2] = ((fVar30 + fVar32) * fVar177 - fVar31) * fVar177 + fVar31;
              pfVar50[3] = ((fVar31 + fVar33) * fVar15 - fVar32) * fVar15 + fVar32;
              pfVar50 = (float *)(pauStack_108[1] + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar32 + fVar12) * fVar79 - fVar33) * fVar79 + fVar33;
              pfVar50[1] = ((fVar33 + fVar121) * fVar176 - fVar12) * fVar176 + fVar12;
              pfVar50[2] = ((fVar12 + fVar122) * fVar177 - fVar121) * fVar177 + fVar121;
              pfVar50[3] = ((fVar121 + fVar11) * fVar15 - fVar122) * fVar15 + fVar122;
              puVar69 = puVar69 + 8;
              auVar157._8_4_ = fVar121;
              auVar157._12_4_ = fVar122;
            } while (puVar66 != puVar69);
            if (puVar72 != puVar66) {
              auVar26._4_8_ = auVar157._8_8_;
              auVar26._0_4_ = fVar121;
              auVar158._0_8_ = auVar26._0_8_ << 0x20;
              auVar158._8_4_ = fVar122;
              auVar158._12_4_ = fVar11;
              auVar159._8_8_ = auVar112._8_8_;
              auVar159._0_8_ = auVar158._8_8_;
              auVar111._4_4_ = fVar11;
              auVar111._0_4_ = fVar11;
              auVar111._8_4_ = fVar11;
              auVar111._12_4_ = fVar11;
              goto LAB_1407f342e;
            }
          }
          fVar15 = _UNK_142e36f4c;
          fVar177 = _UNK_142e36f48;
          fVar176 = _UNK_142e36f44;
          fVar79 = _DAT_142e36f40;
          uVar38 = *(uint *)(*pauStack_108 + 4);
          auVar113 = ZEXT416(uVar38);
          puVar65 = (undefined *)0x1;
          if (puVar72 < (undefined *)0x8) {
            auVar162._8_8_ = 0;
            auVar162._0_8_ = uVar42;
LAB_1407f350c:
            pauVar62 = (undefined1 (*) [16])(puVar65 + 1);
            do {
              auVar81 = auVar113;
              fVar79 = *(float *)(*pauStack_108 + (longlong)pauVar62 * 4);
              fVar176 = auVar81._0_4_;
              *(float *)(pauStack_108[-1] + (longlong)pauVar62 * 4 + 0xc) =
                   ((auVar162._0_4_ + fVar79) * fVar80 - fVar176) * fVar80 + fVar176;
              pauVar62 = (undefined1 (*) [16])((longlong)*pauVar62 + 1);
              auVar113 = ZEXT416((uint)fVar79);
              auVar162 = auVar81;
            } while (pauVar64 != pauVar62);
          }
          else {
            puVar66 = (undefined *)((ulonglong)puVar72 & 0xfffffffffffffff8);
            puVar65 = puVar66 + 1;
            auVar160._4_4_ = auVar83._0_4_;
            auVar160._0_4_ = auVar83._0_4_;
            auVar160._8_4_ = auVar83._0_4_;
            auVar160._12_4_ = auVar83._0_4_;
            auVar114._4_4_ = uVar38;
            auVar114._0_4_ = uVar38;
            auVar114._8_4_ = uVar38;
            auVar114._12_4_ = uVar38;
            puVar69 = (undefined *)0x0;
            do {
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 8);
              fVar30 = *pfVar50;
              fVar31 = pfVar50[1];
              fVar32 = pfVar50[2];
              fVar33 = pfVar50[3];
              fVar123 = auVar114._12_4_;
              fVar169 = auVar160._12_4_;
              auVar114 = *(undefined1 (*) [16])(pauStack_108[1] + (longlong)puVar69 * 4 + 8);
              fVar12 = auVar114._0_4_;
              fVar11 = auVar114._12_4_;
              fVar121 = auVar114._4_4_;
              fVar122 = auVar114._8_4_;
              auVar160._4_4_ = fVar12;
              auVar160._0_4_ = fVar33;
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar169 + fVar30) * fVar79 - fVar123) * fVar79 + fVar123;
              pfVar50[1] = ((fVar123 + fVar31) * fVar176 - fVar30) * fVar176 + fVar30;
              pfVar50[2] = ((fVar30 + fVar32) * fVar177 - fVar31) * fVar177 + fVar31;
              pfVar50[3] = ((fVar31 + fVar33) * fVar15 - fVar32) * fVar15 + fVar32;
              pfVar50 = (float *)(pauStack_108[1] + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar32 + fVar12) * fVar79 - fVar33) * fVar79 + fVar33;
              pfVar50[1] = ((fVar33 + fVar121) * fVar176 - fVar12) * fVar176 + fVar12;
              pfVar50[2] = ((fVar12 + fVar122) * fVar177 - fVar121) * fVar177 + fVar121;
              pfVar50[3] = ((fVar121 + fVar11) * fVar15 - fVar122) * fVar15 + fVar122;
              puVar69 = puVar69 + 8;
              auVar160._8_4_ = fVar121;
              auVar160._12_4_ = fVar122;
            } while (puVar66 != puVar69);
            if (puVar72 != puVar66) {
              auVar27._4_8_ = auVar160._8_8_;
              auVar27._0_4_ = fVar121;
              auVar161._0_8_ = auVar27._0_8_ << 0x20;
              auVar161._8_4_ = fVar122;
              auVar161._12_4_ = fVar11;
              auVar162._8_8_ = auVar114._8_8_;
              auVar162._0_8_ = auVar161._8_8_;
              auVar113._4_4_ = fVar11;
              auVar113._0_4_ = fVar11;
              auVar113._8_4_ = fVar11;
              auVar113._12_4_ = fVar11;
              goto LAB_1407f350c;
            }
          }
          fVar15 = _UNK_142e36f4c;
          fVar177 = _UNK_142e36f48;
          fVar176 = _UNK_142e36f44;
          fVar79 = _DAT_142e36f40;
          uVar38 = *(uint *)(*pauStack_108 + 4);
          auVar115 = ZEXT416(uVar38);
          puVar65 = (undefined *)0x1;
          if (puVar72 < (undefined *)0x8) {
            auVar165._8_8_ = 0;
            auVar165._0_8_ = uVar42;
LAB_1407f35ea:
            pauVar62 = (undefined1 (*) [16])(puVar65 + 1);
            do {
              auVar81 = auVar115;
              fVar79 = *(float *)(*pauStack_108 + (longlong)pauVar62 * 4);
              fVar176 = auVar81._0_4_;
              *(float *)(pauStack_108[-1] + (longlong)pauVar62 * 4 + 0xc) =
                   ((auVar165._0_4_ + fVar79) * fVar80 - fVar176) * fVar80 + fVar176;
              pauVar62 = (undefined1 (*) [16])((longlong)*pauVar62 + 1);
              auVar115 = ZEXT416((uint)fVar79);
              auVar165 = auVar81;
            } while (pauVar64 != pauVar62);
          }
          else {
            puVar66 = (undefined *)((ulonglong)puVar72 & 0xfffffffffffffff8);
            puVar65 = puVar66 + 1;
            auVar163._4_4_ = auVar83._0_4_;
            auVar163._0_4_ = auVar83._0_4_;
            auVar163._8_4_ = auVar83._0_4_;
            auVar163._12_4_ = auVar83._0_4_;
            auVar116._4_4_ = uVar38;
            auVar116._0_4_ = uVar38;
            auVar116._8_4_ = uVar38;
            auVar116._12_4_ = uVar38;
            puVar69 = (undefined *)0x0;
            do {
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 8);
              fVar30 = *pfVar50;
              fVar31 = pfVar50[1];
              fVar32 = pfVar50[2];
              fVar33 = pfVar50[3];
              fVar123 = auVar116._12_4_;
              fVar169 = auVar163._12_4_;
              auVar116 = *(undefined1 (*) [16])(pauStack_108[1] + (longlong)puVar69 * 4 + 8);
              fVar12 = auVar116._0_4_;
              fVar11 = auVar116._12_4_;
              fVar121 = auVar116._4_4_;
              fVar122 = auVar116._8_4_;
              auVar163._4_4_ = fVar12;
              auVar163._0_4_ = fVar33;
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar169 + fVar30) * fVar79 - fVar123) * fVar79 + fVar123;
              pfVar50[1] = ((fVar123 + fVar31) * fVar176 - fVar30) * fVar176 + fVar30;
              pfVar50[2] = ((fVar30 + fVar32) * fVar177 - fVar31) * fVar177 + fVar31;
              pfVar50[3] = ((fVar31 + fVar33) * fVar15 - fVar32) * fVar15 + fVar32;
              pfVar50 = (float *)(pauStack_108[1] + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar32 + fVar12) * fVar79 - fVar33) * fVar79 + fVar33;
              pfVar50[1] = ((fVar33 + fVar121) * fVar176 - fVar12) * fVar176 + fVar12;
              pfVar50[2] = ((fVar12 + fVar122) * fVar177 - fVar121) * fVar177 + fVar121;
              pfVar50[3] = ((fVar121 + fVar11) * fVar15 - fVar122) * fVar15 + fVar122;
              puVar69 = puVar69 + 8;
              auVar163._8_4_ = fVar121;
              auVar163._12_4_ = fVar122;
            } while (puVar66 != puVar69);
            if (puVar72 != puVar66) {
              auVar28._4_8_ = auVar163._8_8_;
              auVar28._0_4_ = fVar121;
              auVar164._0_8_ = auVar28._0_8_ << 0x20;
              auVar164._8_4_ = fVar122;
              auVar164._12_4_ = fVar11;
              auVar165._8_8_ = auVar116._8_8_;
              auVar165._0_8_ = auVar164._8_8_;
              auVar115._4_4_ = fVar11;
              auVar115._0_4_ = fVar11;
              auVar115._8_4_ = fVar11;
              auVar115._12_4_ = fVar11;
              goto LAB_1407f35ea;
            }
          }
          fVar15 = _UNK_142e36f4c;
          fVar177 = _UNK_142e36f48;
          fVar176 = _UNK_142e36f44;
          fVar79 = _DAT_142e36f40;
          uVar38 = *(uint *)(*pauStack_108 + 4);
          auVar117 = ZEXT416(uVar38);
          puVar65 = (undefined *)0x1;
          if ((undefined *)0x7 < puVar72) {
            puVar66 = (undefined *)((ulonglong)puVar72 & 0xfffffffffffffff8);
            puVar65 = puVar66 + 1;
            auVar83._4_4_ = auVar83._0_4_;
            auVar83._8_4_ = auVar83._0_4_;
            auVar83._12_4_ = auVar83._0_4_;
            auVar118._4_4_ = uVar38;
            auVar118._0_4_ = uVar38;
            auVar118._8_4_ = uVar38;
            auVar118._12_4_ = uVar38;
            puVar69 = (undefined *)0x0;
            do {
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 8);
              fVar30 = *pfVar50;
              fVar31 = pfVar50[1];
              fVar32 = pfVar50[2];
              fVar33 = pfVar50[3];
              fVar123 = auVar118._12_4_;
              auVar118 = *(undefined1 (*) [16])(pauStack_108[1] + (longlong)puVar69 * 4 + 8);
              fVar12 = auVar118._0_4_;
              fVar11 = auVar118._12_4_;
              fVar121 = auVar118._4_4_;
              fVar122 = auVar118._8_4_;
              pfVar50 = (float *)(*pauStack_108 + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((auVar83._12_4_ + fVar30) * fVar79 - fVar123) * fVar79 + fVar123;
              pfVar50[1] = ((fVar123 + fVar31) * fVar176 - fVar30) * fVar176 + fVar30;
              pfVar50[2] = ((fVar30 + fVar32) * fVar177 - fVar31) * fVar177 + fVar31;
              pfVar50[3] = ((fVar31 + fVar33) * fVar15 - fVar32) * fVar15 + fVar32;
              pfVar50 = (float *)(pauStack_108[1] + (longlong)puVar69 * 4 + 4);
              *pfVar50 = ((fVar32 + fVar12) * fVar79 - fVar33) * fVar79 + fVar33;
              pfVar50[1] = ((fVar33 + fVar121) * fVar176 - fVar12) * fVar176 + fVar12;
              pfVar50[2] = ((fVar12 + fVar122) * fVar177 - fVar121) * fVar177 + fVar121;
              pfVar50[3] = ((fVar121 + fVar11) * fVar15 - fVar122) * fVar15 + fVar122;
              puVar69 = puVar69 + 8;
              auVar83._4_4_ = fVar12;
              auVar83._0_4_ = fVar33;
              auVar83._8_4_ = fVar121;
              auVar83._12_4_ = fVar122;
            } while (puVar66 != puVar69);
            if (puVar72 == puVar66) goto LAB_1407f3704;
            auVar29._4_8_ = auVar83._8_8_;
            auVar29._0_4_ = fVar121;
            auVar84._0_8_ = auVar29._0_8_ << 0x20;
            auVar84._8_4_ = fVar122;
            auVar84._12_4_ = fVar11;
            auVar82._8_8_ = auVar118._8_8_;
            auVar82._0_8_ = auVar84._8_8_;
            auVar117._4_4_ = fVar11;
            auVar117._0_4_ = fVar11;
            auVar117._8_4_ = fVar11;
            auVar117._12_4_ = fVar11;
          }
          pauVar62 = (undefined1 (*) [16])(puVar65 + 1);
          do {
            fVar79 = *(float *)(*pauStack_108 + (longlong)pauVar62 * 4);
            *(float *)(pauStack_108[-1] + (longlong)pauVar62 * 4 + 0xc) =
                 ((auVar82._0_4_ + fVar79) * fVar80 - auVar117._0_4_) * fVar80 + auVar117._0_4_;
            pauVar62 = (undefined1 (*) [16])((longlong)*pauVar62 + 1);
            auVar82 = auVar117;
            auVar117 = ZEXT416((uint)fVar79);
          } while (pauVar64 != pauVar62);
        }
LAB_1407f3704:
        pauVar62 = *(undefined1 (**) [16])(pbStack_100 + -0x1c0);
        if (pauVar62 != (undefined1 (*) [16])0x0) {
          puVar9 = *(undefined1 **)(pbStack_100 + -0x1c8);
          pauVar48 = (undefined1 (*) [16])((longlong)pauVar62[-1] + 0xf);
          pauVar76 = pauVar48;
          if (pauVar64 < pauVar48) {
            pauVar76 = pauVar64;
          }
          if (pauVar76 < (undefined1 (*) [16])0x8) {
            pauVar48 = (undefined1 (*) [16])0x0;
          }
          else {
            if (pauVar64 < pauVar48) {
              pauVar48 = pauVar64;
            }
            if ((puVar9 < *pauStack_108 + (longlong)pauVar48 * 4 + 4) &&
               (pauStack_108 < (undefined1 (*) [16])(puVar9 + (longlong)pauVar48 * 4 + 4))) {
              pauVar48 = (undefined1 (*) [16])0x0;
            }
            else {
              puVar72 = (undefined *)((longlong)*pauVar76 + 1);
              uVar42 = (ulonglong)((uint)puVar72 & 7);
              if (((ulonglong)puVar72 & 7) == 0) {
                uVar42 = 8;
              }
              pauVar48 = (undefined1 (*) [16])(puVar72 + -uVar42);
              pauVar76 = (undefined1 (*) [16])0x0;
              do {
                auVar81 = *(undefined1 (*) [16])(puVar9 + (longlong)pauVar76 * 4);
                auVar88 = *(undefined1 (*) [16])(puVar9 + (longlong)pauVar76 * 4 + 0x10);
                auVar124 = *(undefined1 (*) [16])(*pauStack_108 + (longlong)pauVar76 * 4);
                auVar126 = *(undefined1 (*) [16])(pauStack_108[1] + (longlong)pauVar76 * 4);
                auVar170 = maxps(auVar124,auVar81);
                auVar166 = maxps(auVar126,auVar88);
                puVar1 = (uint *)(puVar9 + (longlong)pauVar76 * 4);
                *puVar1 = ~-(uint)NAN(auVar81._0_4_) & auVar170._0_4_ |
                          auVar124._0_4_ & -(uint)NAN(auVar81._0_4_);
                puVar1[1] = ~-(uint)NAN(auVar81._4_4_) & auVar170._4_4_ |
                            auVar124._4_4_ & -(uint)NAN(auVar81._4_4_);
                puVar1[2] = ~-(uint)NAN(auVar81._8_4_) & auVar170._8_4_ |
                            auVar124._8_4_ & -(uint)NAN(auVar81._8_4_);
                puVar1[3] = ~-(uint)NAN(auVar81._12_4_) & auVar170._12_4_ |
                            auVar124._12_4_ & -(uint)NAN(auVar81._12_4_);
                puVar1 = (uint *)(puVar9 + (longlong)pauVar76 * 4 + 0x10);
                *puVar1 = ~-(uint)NAN(auVar88._0_4_) & auVar166._0_4_ |
                          auVar126._0_4_ & -(uint)NAN(auVar88._0_4_);
                puVar1[1] = ~-(uint)NAN(auVar88._4_4_) & auVar166._4_4_ |
                            auVar126._4_4_ & -(uint)NAN(auVar88._4_4_);
                puVar1[2] = ~-(uint)NAN(auVar88._8_4_) & auVar166._8_4_ |
                            auVar126._8_4_ & -(uint)NAN(auVar88._8_4_);
                puVar1[3] = ~-(uint)NAN(auVar88._12_4_) & auVar166._12_4_ |
                            auVar126._12_4_ & -(uint)NAN(auVar88._12_4_);
                pauVar76 = (undefined1 (*) [16])((longlong)*pauVar76 + 8);
              } while (pauVar48 != pauVar76);
            }
          }
          do {
            if (pauVar64 == pauVar48) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pauVar64,pauVar64,&UNK_1430061d0);
            }
            fVar79 = *(float *)(puVar9 + (longlong)pauVar48 * 4);
            fVar176 = *(float *)(*pauStack_108 + (longlong)pauVar48 * 4);
            fVar177 = fVar176;
            if (fVar176 <= fVar79) {
              fVar177 = fVar79;
            }
            *(uint *)(puVar9 + (longlong)pauVar48 * 4) =
                 ~-(uint)NAN(fVar79) & (uint)fVar177 | -(uint)NAN(fVar79) & (uint)fVar176;
            pauVar48 = (undefined1 (*) [16])((longlong)*pauVar48 + 1);
          } while (pauVar62 != pauVar48);
        }
        if (pauStack_118 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)pauStack_108,(longlong)pauStack_118 << 2,4);
        }
      }
    }
    puVar72 = (undefined *)(ulonglong)uStack_144;
    fVar176 = fStack_124;
    if (*(int *)(pbVar45 + -0x50) == 2) goto LAB_1407f38bb;
  }
  if (*(longlong *)(pbVar45 + -0x1a8) == 0) {
    uStack_f1 = 1;
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430060e0);
  }
  puVar53 = *(undefined4 **)(pbVar45 + -0x1b0) + *(longlong *)(pbVar45 + -0x1a8) + -1;
  if (puVar53 == (undefined4 *)0x0) {
    uStack_f1 = 1;
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430060f8);
  }
  *puVar53 = **(undefined4 **)(pbVar45 + -0x1b0);
  if (*(longlong *)(pbVar45 + -0x1c0) == 0) {
    uStack_f1 = 1;
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143006110);
  }
  puVar53 = *(undefined4 **)(pbVar45 + -0x1c8) + *(longlong *)(pbVar45 + -0x1c0) + -1;
  if (puVar53 == (undefined4 *)0x0) {
    uStack_f1 = 1;
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143006128);
  }
  *puVar53 = **(undefined4 **)(pbVar45 + -0x1c8);
LAB_1407f38bb:
  fVar79 = fStack_110;
  plVar74 = plStack_280;
  param_1 = puStack_288;
  param_3 = pauStack_290;
  pauVar64 = pauStack_298;
  pbVar45 = pbVar45 + -0x120;
  uStack_f1 = 1;
  uStack_f2 = 1;
  pdb_140084220(pbVar45,lStack_2c8 - lStack_2a0);
  uStack_f1 = 1;
  uStack_f2 = 1;
  pdb_140b2e400(pbVar45,fStack_148);
  uStack_f1 = 1;
  uStack_f2 = 1;
  pdb_140b2e2c0(pbVar45,fVar79);
  uStack_f1 = 1;
  uStack_f2 = 1;
  pdb_140377480(pbVar45,lStack_2a0);
  uStack_f1 = 1;
  uStack_f2 = 1;
  pdb_140b2e310(pbVar45,fVar176);
  uStack_f1 = 1;
  uStack_f2 = 1;
  pdb_140b2e920(pbVar45,lStack_300);
  *puStack_3f8 = uStack_348;
  pauStack_1b8 = (undefined1 (*) [16])uStack_240;
  uStack_1c8 = (undefined1 (*) [16])uStack_250;
  pauStack_1c0 = pauStack_248;
  uStack_f1 = 1;
  uStack_f2 = 0;
  pdb_141406d30(&pauStack_208,plStack_2c0,uStack_140,&uStack_1c8);
  if (!SBORROW8(0,(longlong)pauStack_208)) {
    uStack_f1 = 1;
    uStack_f2 = 0;
    pdb_14049d240(&pauStack_208);
  }
  *puStack_3f0 = uStack_344;
  pbStack_1a8 = *(byte **)(lStack_360 + 0x40);
  pauStack_1b8 = pauStack_260;
  uStack_1c8 = pauStack_270;
  pauStack_1c0 = pauStack_268;
  uStack_1b0 = (ushort)uStack_140;
  uStack_1ae = (undefined6)(uStack_140 >> 0x10);
  lVar41 = *(longlong *)(lStack_360 + 0x30);
  if (lVar41 == *(longlong *)(lStack_360 + 0x20)) {
    pdb_142d7ede0(lStack_3e8);
  }
  lVar71 = *(longlong *)(lStack_360 + 0x28);
  *(byte **)(lVar71 + 0x20 + lVar41 * 0x28) = pbStack_1a8;
  puVar44 = (undefined8 *)(lVar71 + 0x10 + lVar41 * 0x28);
  *puVar44 = pauStack_1b8;
  puVar44[1] = CONCAT62(uStack_1ae,uStack_1b0);
  puVar44 = (undefined8 *)(lVar71 + lVar41 * 0x28);
  *puVar44 = uStack_1c8;
  puVar44[1] = pauStack_1c0;
  *(longlong *)(lStack_360 + 0x30) = lVar41 + 1;
  *(longlong *)(lStack_360 + 0x40) = *(longlong *)(lStack_360 + 0x40) + 1;
  iVar14 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                            CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                  CONCAT13(unaff_XMM8_Bd,
                           CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
  unaff_XMM8_Ba = (char)iVar14;
  unaff_XMM8_Bb = (char)((uint)iVar14 >> 8);
  unaff_XMM8_Bc = (char)((uint)iVar14 >> 0x10);
  unaff_XMM8_Bd = (char)((uint)iVar14 >> 0x18);
  iVar14 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                            CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                  CONCAT13(unaff_XMM8_Bh,
                           CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
  unaff_XMM8_Be = (char)iVar14;
  unaff_XMM8_Bf = (char)((uint)iVar14 >> 8);
  unaff_XMM8_Bg = (char)((uint)iVar14 >> 0x10);
  unaff_XMM8_Bh = (char)((uint)iVar14 >> 0x18);
  iVar14 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                            CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                  CONCAT13(unaff_XMM8_Bl,
                           CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
  unaff_XMM8_Bi = (char)iVar14;
  unaff_XMM8_Bj = (char)((uint)iVar14 >> 8);
  unaff_XMM8_Bk = (char)((uint)iVar14 >> 0x10);
  unaff_XMM8_Bl = (char)((uint)iVar14 >> 0x18);
  iVar14 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                            CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                  CONCAT13(unaff_XMM8_Bp,
                           CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
  unaff_XMM8_Bm = (char)iVar14;
  unaff_XMM8_Bn = (char)((uint)iVar14 >> 8);
  unaff_XMM8_Bo = (char)((uint)iVar14 >> 0x10);
  unaff_XMM8_Bp = (char)((uint)iVar14 >> 0x18);
  if (pauStack_2e0 != (undefined1 (*) [16])0x0) {
    pub_1406abac0(pbStack_2d8,(longlong)pauStack_2e0 << 3,4);
  }
  pcVar63 = (char *)(lStack_460 + 0x18);
  pdb_140e9a350();
  LOCK();
  cVar36 = *pcVar63;
  if (cVar36 == '\x01') {
    *pcVar63 = '\0';
  }
  UNLOCK();
  if (cVar36 != '\x01') {
    pdb_142dbcef0(pcVar63,0);
  }
  if (pauVar64 == param_3) goto LAB_1407f3bba;
  goto LAB_1407f0810;
LAB_1407f4370:
  do {
    if (*(longlong *)((longlong)*pauVar64 + uVar55 * 8) ==
        *(longlong *)((longlong)pauVar64[-1] + (uVar67 + 1) * 8)) {
      lVar41 = *(longlong *)((longlong)*pauVar64 + (uVar55 + 1) * 8);
      uStack_228 = uVar67;
      if (lVar41 != *(longlong *)((longlong)pauVar64[-1] + (uVar67 + 1) * 8)) {
LAB_1407f439c:
        *(longlong *)((longlong)*pauVar64 + uVar67 * 8) = lVar41;
        uStack_228 = uVar67 + 1;
      }
    }
    else {
      *(longlong *)((longlong)*pauVar64 + uVar67 * 8) =
           *(longlong *)((longlong)*pauVar64 + uVar55 * 8);
      uStack_228 = uVar67 + 1;
      lVar41 = *(longlong *)((longlong)*pauVar64 + (uVar55 + 1) * 8);
      plVar74 = (longlong *)((longlong)*pauVar64 + uVar67 * 8);
      uVar67 = uStack_228;
      if (lVar41 != *plVar74) goto LAB_1407f439c;
    }
    uVar55 = uVar55 + 2;
    uVar67 = uStack_228;
  } while (uVar42 != uVar55);
LAB_1407f06c9:
  fVar35 = _DAT_142e36f34;
  param_3 = (undefined1 (*) [16])((longlong)*pauVar64 + uVar67 * 8);
  pauStack_120 = *(undefined1 (**) [16])pbStack_100;
  param_1 = *(undefined8 **)(pbStack_100 + 0x10);
  puVar72 = (undefined *)(ulonglong)*(uint *)((longlong)param_5 + 0x1c);
  plVar74 = (longlong *)*param_5;
  puStack_320 = (uint *)param_5[2];
  plStack_328 = (longlong *)*param_7;
  lStack_258 = *param_14;
  lStack_2b8 = CONCAT44(lStack_2b8._4_4_,*(undefined4 *)(pbStack_100 + 0x1c));
  uStack_348 = *(undefined4 *)((longlong)param_10 + 0x1c);
  plStack_2c0 = (longlong *)*param_10;
  puStack_3f8 = (undefined4 *)param_10[2];
  uStack_34c = *(undefined4 *)((longlong)param_8 + 0x1c);
  lStack_2b0 = *param_8;
  puStack_408 = (undefined4 *)param_8[2];
  uStack_344 = *(undefined4 *)((longlong)param_9 + 0x1c);
  lStack_360 = *param_9;
  puStack_3f0 = (undefined4 *)param_9[2];
  iVar14 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                            CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                  CONCAT13(unaff_XMM8_Bd,
                           CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
  unaff_XMM8_Ba = (char)iVar14;
  unaff_XMM8_Bb = (char)((uint)iVar14 >> 8);
  unaff_XMM8_Bc = (char)((uint)iVar14 >> 0x10);
  unaff_XMM8_Bd = (char)((uint)iVar14 >> 0x18);
  iVar14 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                            CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                  CONCAT13(unaff_XMM8_Bh,
                           CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
  unaff_XMM8_Be = (char)iVar14;
  unaff_XMM8_Bf = (char)((uint)iVar14 >> 8);
  unaff_XMM8_Bg = (char)((uint)iVar14 >> 0x10);
  unaff_XMM8_Bh = (char)((uint)iVar14 >> 0x18);
  iVar14 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                            CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                  CONCAT13(unaff_XMM8_Bl,
                           CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
  unaff_XMM8_Bi = (char)iVar14;
  unaff_XMM8_Bj = (char)((uint)iVar14 >> 8);
  unaff_XMM8_Bk = (char)((uint)iVar14 >> 0x10);
  unaff_XMM8_Bl = (char)((uint)iVar14 >> 0x18);
  iVar14 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                            CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                  CONCAT13(unaff_XMM8_Bp,
                           CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
  unaff_XMM8_Bm = (char)iVar14;
  unaff_XMM8_Bn = (char)((uint)iVar14 >> 8);
  unaff_XMM8_Bo = (char)((uint)iVar14 >> 0x10);
  unaff_XMM8_Bp = (char)((uint)iVar14 >> 0x18);
  plStack_218 = (longlong *)((longlong)pauStack_120 + 0x20);
  pbStack_338 = pbStack_220 + 0x78;
  pbStack_330 = pbStack_220 + 0x58;
  plStack_318 = plVar74 + 4;
  lStack_400 = lStack_2b0 + 0x20;
  lStack_3e8 = lStack_360 + 0x20;
  fVar80 = _DAT_142e36f50;
  if (pauVar64 != param_3) {
LAB_1407f0810:
    pauVar62 = pauStack_120;
    uStack_340 = *(ulonglong *)*pauVar64;
    uStack_140 = uStack_340;
    if (*(longlong *)((longlong)pauStack_120 + 0x18) != 0) {
      pauVar64 = (undefined1 (*) [16])((longlong)*pauVar64 + 8);
      uVar67 = pdb_1400af0a0(plStack_218,&uStack_340);
      lVar41 = *(longlong *)pauVar62;
      uVar42 = *(ulonglong *)((longlong)pauVar62 + 8);
      bVar37 = (byte)(uVar67 >> 0x39);
      auVar81 = ZEXT216(CONCAT11(bVar37,bVar37));
      auVar81 = pshuflw(auVar81,auVar81,0);
      lVar71 = 0;
      while( true ) {
        uVar67 = uVar67 & uVar42;
        auVar88 = *(undefined1 (*) [16])(lVar41 + uVar67);
        auVar124[0] = -(auVar88[0] == auVar81[0]);
        auVar124[1] = -(auVar88[1] == auVar81[1]);
        auVar124[2] = -(auVar88[2] == auVar81[2]);
        auVar124[3] = -(auVar88[3] == auVar81[3]);
        auVar124[4] = -(auVar88[4] == auVar81[4]);
        auVar124[5] = -(auVar88[5] == auVar81[5]);
        auVar124[6] = -(auVar88[6] == auVar81[6]);
        auVar124[7] = -(auVar88[7] == auVar81[7]);
        auVar124[8] = -(auVar88[8] == auVar81[0]);
        auVar124[9] = -(auVar88[9] == auVar81[1]);
        auVar124[10] = -(auVar88[10] == auVar81[2]);
        auVar124[0xb] = -(auVar88[0xb] == auVar81[3]);
        auVar124[0xc] = -(auVar88[0xc] == auVar81[4]);
        auVar124[0xd] = -(auVar88[0xd] == auVar81[5]);
        auVar124[0xe] = -(auVar88[0xe] == auVar81[6]);
        auVar124[0xf] = -(auVar88[0xf] == auVar81[7]);
        uVar70 = (ushort)(SUB161(auVar124 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar124 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar124 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar124 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar124 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar124 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar124 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar124 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar124 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar124 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar124 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar124 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar124 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar124 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar124 >> 0x77,0) & 1) << 0xe |
                 (ushort)(auVar124[0xf] >> 7) << 0xf;
        uVar38 = (uint)uVar70;
        while (uVar70 != 0) {
          uVar78 = 0;
          for (uVar60 = uVar38; (uVar60 & 1) == 0; uVar60 = uVar60 >> 1 | 0x80000000) {
            uVar78 = uVar78 + 1;
          }
          lVar51 = (uVar78 + uVar67 & uVar42) * -0x2b0;
          if (uStack_140 == *(ulonglong *)(lVar41 + -0x2b0 + lVar51)) {
            pbStack_100 = (byte *)(lVar41 + lVar51);
            pauStack_118 = (undefined1 (*) [16])(pbStack_100 + -0x2a8);
            uVar39 = pdb_1409303b0();
            pauStack_308 = (undefined1 (*) [16])CONCAT44(pauStack_308._4_4_,uVar39);
            lVar41 = *(longlong *)(pbStack_100 + -0x188);
            if (lVar41 == 0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_143305b70);
            }
            LOCK();
            bVar77 = *(char *)(lVar41 + 0x18) == '\0';
            if (bVar77) {
              *(char *)(lVar41 + 0x18) = '\x01';
            }
            UNLOCK();
            if (!bVar77) {
              pdb_142dbd1a0(lVar41 + 0x18,1,1000000000);
            }
            pdb_140e9a150(lVar41 + 0x18);
            if ((*(longlong *)(lVar41 + 0x10) == 0) ||
               (piVar47 = (int *)(*(longlong *)(lVar41 + 8) + *(longlong *)(lVar41 + 0x10) * 4 + -4)
               , piVar47 == (int *)0x0)) {
              lVar71 = *(longlong *)(pbStack_220 + 0x10);
              if (lVar71 == 0) goto LAB_1407f430c;
              iStack_428 = (int)lVar71 + -1;
            }
            else {
              iStack_428 = *piVar47;
              lVar71 = *(longlong *)(pbStack_220 + 0x10);
            }
            uStack_480 = *(undefined8 *)(pbStack_220 + 8);
            uStack_470 = *(undefined8 *)(pbStack_220 + 0x18);
            uStack_468 = *(undefined8 *)(pbStack_220 + 0x20);
            uStack_458 = *(undefined8 *)(pbStack_220 + 0x28);
            uStack_450 = *(undefined8 *)(pbStack_220 + 0x30);
            uStack_438 = *(undefined8 *)(pbStack_220 + 0x38);
            uStack_430 = *(undefined8 *)(pbStack_220 + 0x40);
            pbStack_448 = pbStack_338;
            pbStack_440 = pbStack_330;
            lStack_478 = lVar71;
            lStack_460 = lVar41;
            pdb_1413f7bd0(&uStack_480);
            pauVar62 = pauStack_120;
            uStack_250 = 0;
            pauStack_248 = (undefined1 (*) [16])0x8;
            uStack_240 = 0;
            pauStack_270 = (undefined1 (*) [16])0x0;
            pauStack_268 = (undefined1 (*) [16])0x8;
            pauStack_260 = (undefined1 (*) [16])0x0;
            pauStack_2e0 = (undefined1 (*) [16])0x0;
            pbStack_2d8 = (byte *)0x4;
            pauStack_2d0 = (undefined1 (*) [16])0x0;
            lStack_2c8 = 0;
            if (pbStack_100[-8] != 0) {
              lStack_300 = 0;
              lStack_2a0 = 0;
              fStack_148 = 0.0;
              *(undefined4 *)param_1 = (undefined4)lStack_2b8;
              fVar79 = 0.0;
              fVar176 = 0.0;
              if (*(longlong *)((longlong)pauStack_120 + 0x18) == 0) goto LAB_1407f3b45;
              goto LAB_1407f0aae;
            }
            uVar38 = (uint)puVar72;
            *puStack_320 = uVar38;
            if (plVar74[3] == 0) goto LAB_1407f3b65;
            uVar42 = pdb_1400af0a0(plStack_318,&uStack_340);
            bVar37 = (byte)(uVar42 >> 0x39);
            auVar81 = ZEXT216(CONCAT11(bVar37,bVar37));
            auVar81 = pshuflw(auVar81,auVar81,0);
            lVar41 = 0;
            goto LAB_1407f125d;
          }
          uVar70 = (ushort)(uVar38 - 1) & (ushort)uVar38;
          uVar38 = CONCAT22((short)(uVar38 - 1 >> 0x10),uVar70);
        }
        auVar85[0] = -(auVar88[0] == unaff_XMM8_Ba);
        auVar85[1] = -(auVar88[1] == unaff_XMM8_Bb);
        auVar85[2] = -(auVar88[2] == unaff_XMM8_Bc);
        auVar85[3] = -(auVar88[3] == unaff_XMM8_Bd);
        auVar85[4] = -(auVar88[4] == unaff_XMM8_Be);
        auVar85[5] = -(auVar88[5] == unaff_XMM8_Bf);
        auVar85[6] = -(auVar88[6] == unaff_XMM8_Bg);
        auVar85[7] = -(auVar88[7] == unaff_XMM8_Bh);
        auVar85[8] = -(auVar88[8] == unaff_XMM8_Bi);
        auVar85[9] = -(auVar88[9] == unaff_XMM8_Bj);
        auVar85[10] = -(auVar88[10] == unaff_XMM8_Bk);
        auVar85[0xb] = -(auVar88[0xb] == unaff_XMM8_Bl);
        auVar85[0xc] = -(auVar88[0xc] == unaff_XMM8_Bm);
        auVar85[0xd] = -(auVar88[0xd] == unaff_XMM8_Bn);
        auVar85[0xe] = -(auVar88[0xe] == unaff_XMM8_Bo);
        auVar85[0xf] = -(auVar88[0xf] == unaff_XMM8_Bp);
        if ((((((((((((((((SUB161(auVar85 >> 7,0) & 1) != 0 || (SUB161(auVar85 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar85 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar85 >> 0x1f,0) & 1) != 0) || (SUB161(auVar85 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar85 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar85 >> 0x37,0) & 1) != 0) || (SUB161(auVar85 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar85 >> 0x47,0) & 1) != 0) || (SUB161(auVar85 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar85 >> 0x57,0) & 1) != 0) || (SUB161(auVar85 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar85 >> 0x67,0) & 1) != 0) || (SUB161(auVar85 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar85 >> 0x77,0) & 1) != 0) || auVar85[0xf] < '\0') break;
        uVar67 = uVar67 + lVar71 + 0x10;
        lVar71 = lVar71 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143005ea0);
  }
LAB_1407f3bba:
  if ((bStack_10a == 1) && (*_DAT_143ca8e90 != 0)) {
    uStack_1c8 = (undefined1 (*) [16])0x0;
    pauStack_1c0 = (undefined1 (*) [16])&UNK_143005e72;
    pauStack_1b8 = (undefined1 (*) [16])0x29;
    uStack_1b0 = 0;
    uStack_1ae = 0;
    pbStack_1a8 = &UNK_143005dc0;
    uStack_1a0 = 0x3b;
    uStack_198 = 1;
    pbStack_190 = &UNK_143005e72;
    uStack_188 = 0x29;
    uStack_180 = 0x1f300000001;
    puStack_178 = &UNK_143005e50;
    pauStack_170 = (undefined1 (*) [16])0x45;
    pdb_140f332f0(&uStack_10b,&uStack_1c8);
  }
  pdb_140b55220(&uStack_1c8,pauStack_120);
  pauVar62 = (undefined1 (*) [16])(ulonglong)uStack_1b0;
  pbStack_220 = pbStack_1a8;
  lStack_258 = *param_13;
  plStack_218 = (longlong *)param_13[1];
  pauStack_108 = (undefined1 (*) [16])*param_11;
  pbStack_338 = (byte *)param_11[2];
  pauStack_118 = pauStack_108 + 2;
  pbStack_330 = (byte *)CONCAT44(pbStack_330._4_4_,*(undefined4 *)((longlong)param_11 + 0x1c));
  puStack_320 = (uint *)CONCAT44(puStack_320._4_4_,*(undefined4 *)((longlong)param_12 + 0x1c));
  lStack_2b8 = *param_12;
  plStack_318 = (longlong *)param_12[2];
  unaff_XMM6._8_4_ = 0xffffffff;
  unaff_XMM6._0_8_ = 0xffffffffffffffff;
  unaff_XMM6._12_4_ = 0xffffffff;
  plStack_328 = plStack_2c0 + 4;
  lStack_2b0 = lStack_2b8 + 0x20;
  pauVar64 = uStack_1c8;
  param_2 = pauStack_1c0;
  while (pbStack_220 != (byte *)0x0) {
    param_3 = pauVar62;
    if ((short)pauVar62 == 0) {
      do {
        auVar81 = *param_2;
        pauVar64 = pauVar64 + -0x2b0;
        param_2 = param_2 + 1;
        uVar38 = (ushort)((ushort)(SUB161(auVar81 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar81 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar81 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar81 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar81 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar81 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar81 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar81 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar81 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar81 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar81 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar81 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar81 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar81 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar81 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar81[0xf] >> 7) << 0xf) ^ 0xffff;
        param_3 = (undefined1 (*) [16])(ulonglong)uVar38;
      } while (uVar38 == 0);
    }
    uVar38 = 0;
    uVar60 = (uint)param_3;
    for (uVar78 = uVar60; (uVar78 & 1) == 0; uVar78 = uVar78 >> 1 | 0x80000000) {
      uVar38 = uVar38 + 1;
    }
    param_1 = *(undefined8 **)pauVar64[(ulonglong)uVar38 * -0x2b + -0x2b];
    puStack_368 = param_1;
    pbVar45 = (byte *)pdb_140b54b40(pauStack_120,param_1);
    if ((((((ulonglong)pbVar45 & 0xffffffff) == 0) ||
         (uVar42 = (ulonglong)pbVar45 & 0xffffffff ^ 0xffffffff, (ulonglong)plStack_218[2] <= uVar42
         )) || (piVar47 = (int *)(uVar42 * 0x18 + plStack_218[1]),
               piVar47[4] != (int)((ulonglong)pbVar45 >> 0x20))) ||
       (((*piVar47 == 0 ||
         (uVar42 = *(ulonglong *)(piVar47 + 2),
         *(ulonglong *)(lStack_258 + 0x38) <= (uVar42 & 0xffffffff))) ||
        ((*(ulonglong *)(*(longlong *)(lStack_258 + 0x28) + (uVar42 >> 6 & 0x3ffffff) * 8) >>
          (uVar42 & 0x3f) & 1) == 0)))) {
      pbVar45 = (byte *)((ulonglong)pbStack_100 & 0xffffffff00000000);
    }
    else {
      if (*(ulonglong *)(lStack_258 + 0x110) <
          *(ulonglong *)(plStack_218[0x34] + 0x40 + (uVar42 >> 0x20) * 0x48)) {
        lVar41 = plStack_218[0x34] + (uVar42 >> 0x20) * 0x48;
        uVar42 = *(ulonglong *)
                  (*(longlong *)(lVar41 + 0x38) + *(ulonglong *)(lStack_258 + 0x110) * 8);
        if (uVar42 == 0) goto LAB_1407f410e;
        lVar41 = *(longlong *)(*(longlong *)(lVar41 + 0x18) + 0x10 + ~uVar42 * 0x30);
      }
      else {
LAB_1407f410e:
        lVar41 = 0;
      }
      uStack_140 = (ulonglong)(uint)~piVar47[1] * 0x58 + lVar41;
    }
    pauVar62 = (undefined1 (*) [16])(ulonglong)(uVar60 - 1 & uVar60);
    pbStack_220 = pbStack_220 + -1;
    pbStack_100 = pbVar45;
    if (((int)pbVar45 != 0) &&
       (cVar36 = pdb_140b77b50(uStack_140), pauVar48 = pauStack_108, cVar36 == '\0')) {
      if (*(longlong *)((longlong)pauStack_108[1] + 8) != 0) {
        uVar42 = pdb_1400af0a0(pauStack_118,&puStack_368);
        bVar37 = (byte)(uVar42 >> 0x39);
        auVar81 = ZEXT216(CONCAT11(bVar37,bVar37));
        auVar81 = pshuflw(auVar81,auVar81,0);
        lVar41 = 0;
        while( true ) {
          uVar42 = uVar42 & *(ulonglong *)((longlong)*pauVar48 + 8);
          pcVar63 = (char *)(*(longlong *)*pauVar48 + uVar42);
          auVar167[0] = -(*pcVar63 == auVar81[0]);
          auVar167[1] = -(pcVar63[1] == auVar81[1]);
          auVar167[2] = -(pcVar63[2] == auVar81[2]);
          auVar167[3] = -(pcVar63[3] == auVar81[3]);
          auVar167[4] = -(pcVar63[4] == auVar81[4]);
          auVar167[5] = -(pcVar63[5] == auVar81[5]);
          auVar167[6] = -(pcVar63[6] == auVar81[6]);
          auVar167[7] = -(pcVar63[7] == auVar81[7]);
          auVar167[8] = -(pcVar63[8] == auVar81[0]);
          auVar167[9] = -(pcVar63[9] == auVar81[1]);
          auVar167[10] = -(pcVar63[10] == auVar81[2]);
          auVar167[0xb] = -(pcVar63[0xb] == auVar81[3]);
          auVar167[0xc] = -(pcVar63[0xc] == auVar81[4]);
          auVar167[0xd] = -(pcVar63[0xd] == auVar81[5]);
          auVar167[0xe] = -(pcVar63[0xe] == auVar81[6]);
          auVar167[0xf] = -(pcVar63[0xf] == auVar81[7]);
          uVar70 = (ushort)(SUB161(auVar167 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar167 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar167 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar167 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar167 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar167 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar167 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar167 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar167 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar167 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar167 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar167 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar167 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar167 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar167 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar167[0xf] >> 7) << 0xf;
          uVar38 = (uint)uVar70;
          while (uVar70 != 0) {
            uVar78 = 0;
            for (uVar60 = uVar38; (uVar60 & 1) == 0; uVar60 = uVar60 >> 1 | 0x80000000) {
              uVar78 = uVar78 + 1;
            }
            lVar71 = *(longlong *)*pauVar48 +
                     (uVar78 + uVar42 & *(ulonglong *)((longlong)*pauVar48 + 8)) * -0x10;
            if (param_1 == *(undefined8 **)(lVar71 + -0x10)) {
              puVar72 = (undefined *)(ulonglong)*(byte *)(lVar71 + -8);
              if (plStack_2c0[3] == 0) goto LAB_1407f40b6;
              goto LAB_1407f401b;
            }
            uVar70 = (ushort)(uVar38 - 1) & (ushort)uVar38;
            uVar38 = CONCAT22((short)(uVar38 - 1 >> 0x10),uVar70);
          }
          auVar119[0] = -(*pcVar63 == -1);
          auVar119[1] = -(pcVar63[1] == -1);
          auVar119[2] = -(pcVar63[2] == -1);
          auVar119[3] = -(pcVar63[3] == -1);
          auVar119[4] = -(pcVar63[4] == -1);
          auVar119[5] = -(pcVar63[5] == -1);
          auVar119[6] = -(pcVar63[6] == -1);
          auVar119[7] = -(pcVar63[7] == -1);
          auVar119[8] = -(pcVar63[8] == -1);
          auVar119[9] = -(pcVar63[9] == -1);
          auVar119[10] = -(pcVar63[10] == -1);
          auVar119[0xb] = -(pcVar63[0xb] == -1);
          auVar119[0xc] = -(pcVar63[0xc] == -1);
          auVar119[0xd] = -(pcVar63[0xd] == -1);
          auVar119[0xe] = -(pcVar63[0xe] == -1);
          auVar119[0xf] = -(pcVar63[0xf] == -1);
          param_3 = pauVar48;
          if ((((((((((((((((SUB161(auVar119 >> 7,0) & 1) != 0 ||
                           (SUB161(auVar119 >> 0xf,0) & 1) != 0) ||
                          (SUB161(auVar119 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar119 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar119 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar119 >> 0x2f,0) & 1) != 0) ||
                      (SUB161(auVar119 >> 0x37,0) & 1) != 0) ||
                     (SUB161(auVar119 >> 0x3f,0) & 1) != 0) || (SUB161(auVar119 >> 0x47,0) & 1) != 0
                    ) || (SUB161(auVar119 >> 0x4f,0) & 1) != 0) ||
                  (SUB161(auVar119 >> 0x57,0) & 1) != 0) || (SUB161(auVar119 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar119 >> 0x67,0) & 1) != 0) || (SUB161(auVar119 >> 0x6f,0) & 1) != 0)
              || (SUB161(auVar119 >> 0x77,0) & 1) != 0) || auVar119[0xf] < '\0') break;
          uVar42 = uVar42 + lVar41 + 0x10;
          lVar41 = lVar41 + 0x10;
        }
      }
      puVar72 = (undefined *)0x0;
      pauVar48 = param_3;
      if (plStack_2c0[3] != 0) {
LAB_1407f401b:
        uVar42 = pdb_1400af0a0(plStack_328,&puStack_368);
        bVar37 = (byte)(uVar42 >> 0x39);
        auVar81 = ZEXT216(CONCAT11(bVar37,bVar37));
        auVar81 = pshuflw(auVar81,auVar81,0);
        lVar41 = 0;
        while( true ) {
          uVar42 = uVar42 & plStack_2c0[1];
          pcVar63 = (char *)(*plStack_2c0 + uVar42);
          auVar168[0] = -(*pcVar63 == auVar81[0]);
          auVar168[1] = -(pcVar63[1] == auVar81[1]);
          auVar168[2] = -(pcVar63[2] == auVar81[2]);
          auVar168[3] = -(pcVar63[3] == auVar81[3]);
          auVar168[4] = -(pcVar63[4] == auVar81[4]);
          auVar168[5] = -(pcVar63[5] == auVar81[5]);
          auVar168[6] = -(pcVar63[6] == auVar81[6]);
          auVar168[7] = -(pcVar63[7] == auVar81[7]);
          auVar168[8] = -(pcVar63[8] == auVar81[0]);
          auVar168[9] = -(pcVar63[9] == auVar81[1]);
          auVar168[10] = -(pcVar63[10] == auVar81[2]);
          auVar168[0xb] = -(pcVar63[0xb] == auVar81[3]);
          auVar168[0xc] = -(pcVar63[0xc] == auVar81[4]);
          auVar168[0xd] = -(pcVar63[0xd] == auVar81[5]);
          auVar168[0xe] = -(pcVar63[0xe] == auVar81[6]);
          auVar168[0xf] = -(pcVar63[0xf] == auVar81[7]);
          uVar70 = (ushort)(SUB161(auVar168 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar168 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar168 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar168 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar168 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar168 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar168 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar168 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar168 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar168 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar168 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar168 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar168 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar168 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar168 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar168[0xf] >> 7) << 0xf;
          uVar38 = (uint)uVar70;
          while (uVar70 != 0) {
            uVar78 = 0;
            for (uVar60 = uVar38; (uVar60 & 1) == 0; uVar60 = uVar60 >> 1 | 0x80000000) {
              uVar78 = uVar78 + 1;
            }
            lVar71 = *plStack_2c0 + (uVar78 + uVar42 & plStack_2c0[1]) * -0x20;
            if (param_1 == *(undefined8 **)(lVar71 + -0x20)) {
              bVar77 = 1 < *(ulonglong *)(lVar71 + -8);
              param_3 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)pauVar48 >> 8),bVar77);
              if ((bool)(char)puVar72 == bVar77) goto LAB_1407f3d82;
              goto LAB_1407f40d4;
            }
            uVar70 = (ushort)(uVar38 - 1) & (ushort)uVar38;
            uVar38 = CONCAT22((short)(uVar38 - 1 >> 0x10),uVar70);
          }
          auVar120[0] = -(*pcVar63 == -1);
          auVar120[1] = -(pcVar63[1] == -1);
          auVar120[2] = -(pcVar63[2] == -1);
          auVar120[3] = -(pcVar63[3] == -1);
          auVar120[4] = -(pcVar63[4] == -1);
          auVar120[5] = -(pcVar63[5] == -1);
          auVar120[6] = -(pcVar63[6] == -1);
          auVar120[7] = -(pcVar63[7] == -1);
          auVar120[8] = -(pcVar63[8] == -1);
          auVar120[9] = -(pcVar63[9] == -1);
          auVar120[10] = -(pcVar63[10] == -1);
          auVar120[0xb] = -(pcVar63[0xb] == -1);
          auVar120[0xc] = -(pcVar63[0xc] == -1);
          auVar120[0xd] = -(pcVar63[0xd] == -1);
          auVar120[0xe] = -(pcVar63[0xe] == -1);
          auVar120[0xf] = -(pcVar63[0xf] == -1);
          if ((((((((((((((((SUB161(auVar120 >> 7,0) & 1) != 0 ||
                           (SUB161(auVar120 >> 0xf,0) & 1) != 0) ||
                          (SUB161(auVar120 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar120 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar120 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar120 >> 0x2f,0) & 1) != 0) ||
                      (SUB161(auVar120 >> 0x37,0) & 1) != 0) ||
                     (SUB161(auVar120 >> 0x3f,0) & 1) != 0) || (SUB161(auVar120 >> 0x47,0) & 1) != 0
                    ) || (SUB161(auVar120 >> 0x4f,0) & 1) != 0) ||
                  (SUB161(auVar120 >> 0x57,0) & 1) != 0) || (SUB161(auVar120 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar120 >> 0x67,0) & 1) != 0) || (SUB161(auVar120 >> 0x6f,0) & 1) != 0)
              || (SUB161(auVar120 >> 0x77,0) & 1) != 0) || auVar120[0xf] < '\0') break;
          uVar42 = uVar42 + lVar41 + 0x10;
          lVar41 = lVar41 + 0x10;
        }
      }
LAB_1407f40b6:
      param_3 = (undefined1 (*) [16])0x0;
      if ((char)puVar72 != '\0') {
LAB_1407f40d4:
        *(undefined4 *)plStack_318 = puStack_320._0_4_;
        lVar41 = *(longlong *)(lStack_2b8 + 0x30);
        plVar74 = *(longlong **)(lStack_2b8 + 0x40);
        if (lVar41 == *(longlong *)(lStack_2b8 + 0x20)) {
          pdb_142d7e6e0(lStack_2b0);
        }
        lVar71 = *(longlong *)(lStack_2b8 + 0x28);
        lVar51 = lVar41 * 0x20;
        *(longlong **)(lVar71 + lVar51) = plVar74;
        *(byte **)(lVar71 + 8 + lVar51) = pbStack_100;
        *(undefined8 **)(lVar71 + 0x10 + lVar51) = param_1;
        *(undefined1 *)(lVar71 + 0x18 + lVar51) = 3;
        puVar72 = (undefined *)(lVar41 + 1);
        *(undefined **)(lStack_2b8 + 0x30) = puVar72;
        *(longlong *)(lStack_2b8 + 0x40) = *(longlong *)(lStack_2b8 + 0x40) + 1;
      }
LAB_1407f3d82:
      *(undefined4 *)pbStack_338 = pbStack_330._0_4_;
      pdb_141407ec0(pauStack_108,param_1,(ulonglong)param_3 & 0xffffffff);
    }
  }
  if (uStack_238 != 0) {
    pub_1406abac0((byte *)pauStack_230,uStack_238 << 3,8);
  }
  if (cStack_109 != '\0') {
    plVar43 = (longlong *)pdb_140e97000();
    if (((char)plVar43[0xd] != '\x01') &&
       (plVar43 = (longlong *)pdb_142dd9610(plVar43,0), plVar43 == (longlong *)0x0))
    goto LAB_1407f42ff;
    if (*plVar43 != 0) {
LAB_1407f42e0:
      plVar43 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_1407f42ec:
      plVar43 = (longlong *)pdb_142dd9610(plVar43,0);
      if (plVar43 == (longlong *)0x0) {
LAB_1407f42ff:
        pdb_142dc7890(&UNK_143307940);
LAB_1407f430c:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143305b88);
      }
      goto LAB_1407f02d6;
    }
    *plVar43 = -1;
    pbStack_100 = (byte *)plVar43;
    pdb_140e95370(plVar43 + 1);
    *(longlong *)pbStack_100 = *(longlong *)pbStack_100 + 1;
  }
  return;
}

