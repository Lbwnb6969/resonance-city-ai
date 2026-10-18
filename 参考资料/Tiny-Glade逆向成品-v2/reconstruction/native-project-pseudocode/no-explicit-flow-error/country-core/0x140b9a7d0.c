// VA 0x140b9a7d0, PDB extent 17835 bytes
// country_core::startup::clearing::init_clearing
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/clearing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::clearing::init_clearing
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/clearing.rs
   Extent: 17835 */

void pdb_140b9a7d0(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3,longlong *param_4,
                  ulonglong *param_5,ulonglong *param_6,undefined8 *param_7,ulonglong *param_8,
                  longlong *param_9,undefined8 *param_10,longlong *param_11)

{
  undefined8 *puVar1;
  char *pcVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  float *pfVar59;
  byte *pbVar60;
  char cVar61;
  char cVar62;
  ushort uVar63;
  byte *pbVar64;
  undefined8 uVar65;
  longlong **pplVar66;
  byte *pbVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  longlong **pplVar71;
  float *pfVar72;
  byte *pbVar73;
  float *pfVar74;
  longlong lVar75;
  ulonglong uVar76;
  longlong *plVar77;
  undefined *puVar78;
  uint uVar79;
  longlong lVar80;
  longlong lVar81;
  ulonglong uVar82;
  undefined1 uVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar95 [16];
  float fVar96;
  float fVar97;
  undefined4 uVar98;
  undefined8 in_stack_fffffffffffffc20;
  undefined4 uVar99;
  undefined8 in_stack_fffffffffffffc28;
  undefined4 uVar100;
  float *pfStack_3c8;
  longlong lStack_3c0;
  float *pfStack_3b8;
  undefined8 *puStack_3b0;
  undefined4 *puStack_3a8;
  undefined4 *puStack_3a0;
  ulonglong uStack_398;
  longlong *plStack_390;
  longlong lStack_388;
  float fStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  float *pfStack_370;
  float *pfStack_368;
  float *pfStack_360;
  float *pfStack_358;
  ulonglong *puStack_348;
  ulonglong *puStack_340;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  undefined4 uStack_32c;
  longlong lStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined *puStack_308;
  ulonglong uStack_2f8;
  byte *pbStack_2f0;
  ulonglong uStack_2e8;
  ulonglong uStack_2e0;
  float *pfStack_2d8;
  float *pfStack_2d0;
  float *pfStack_2c8;
  longlong lStack_2b8;
  ulonglong uStack_2b0;
  undefined1 uStack_2a1;
  longlong lStack_2a0;
  float fStack_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined8 uStack_288;
  longlong **pplStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  longlong **pplStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  byte *pbStack_210;
  byte *pbStack_208;
  byte *pbStack_200;
  undefined8 uStack_1f8;
  longlong **pplStack_1f0;
  uint uStack_1e8;
  float afStack_1e4 [5];
  undefined *puStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined4 uStack_1bc;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  uint uStack_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined8 uStack_184;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_164;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_144;
  ulonglong uStack_138;
  byte *pbStack_130;
  ulonglong uStack_128;
  undefined1 uStack_119;
  byte *pbStack_118;
  byte *pbStack_110;
  float *pfStack_108;
  undefined1 uStack_f9;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puStack_348 = param_2;
  puStack_340 = param_3;
  if (3 < *_DAT_143ca8e90) {
    pbStack_208 = (byte *)0x0;
    pbStack_200 = &UNK_14305fd6b;
    uStack_1f8._0_4_ = 0x1f;
    uStack_1f8._4_4_ = 0;
    pplStack_1f0 = (longlong **)0x0;
    uStack_1e8 = 0x4305fd3f;
    afStack_1e4[0] = 1.4013e-45;
    afStack_1e4[1] = 6.02558e-44;
    afStack_1e4[2] = 0.0;
    afStack_1e4[3] = 5.60519e-45;
    afStack_1e4[4] = 0.0;
    puStack_1d0 = &UNK_14305fd6b;
    fStack_1c8 = 4.34403e-44;
    fStack_1c4 = 0.0;
    fStack_1c0 = 1.4013e-45;
    uStack_1bc = 0x46;
    uStack_1b0 = (longlong **)0x2f;
    auStack_1b8 = (undefined1  [8])&UNK_14305fd28;
    pdb_140f332f0(&uStack_2a1);
  }
  lVar75 = *(longlong *)*param_1;
  lStack_2b8 = *param_4;
  cVar61 = *(char *)(lStack_2b8 + 0x98);
  if (cVar61 == '\x04') {
    pdb_141b241d0(&pbStack_208,&UNK_14305fd8a,0x1d);
    uStack_290._0_4_ = SUB84(pbStack_200,0);
    uStack_290._4_4_ = (undefined4)((ulonglong)pbStack_200 >> 0x20);
    if (SBORROW8(0,(longlong)pbStack_208)) {
      fStack_298 = (float)uStack_290;
      uStack_294 = uStack_290._4_4_;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143060400,0x2b,&fStack_298,&UNK_1430603a0,&UNK_14305fda8);
    }
    puStack_228 = puStack_198;
    uStack_220 = uStack_190;
    uStack_238 = CONCAT44(fStack_1a4,uStack_1a8);
    uStack_230 = CONCAT44(uStack_19c,uStack_1a0);
    puStack_248 = (undefined *)auStack_1b8;
    pplStack_240 = uStack_1b0;
    uStack_258 = CONCAT44(fStack_1c4,fStack_1c8);
    uStack_250 = CONCAT44(uStack_1bc,fStack_1c0);
    uStack_268 = (undefined *)CONCAT44(afStack_1e4[4],afStack_1e4[3]);
    uStack_260 = puStack_1d0;
    uStack_278 = CONCAT44(afStack_1e4[0],uStack_1e8);
    uStack_270 = CONCAT44(afStack_1e4[2],afStack_1e4[1]);
    uStack_288._0_4_ = (undefined4)uStack_1f8;
    uStack_288._4_4_ = uStack_1f8._4_4_;
    pplStack_280 = pplStack_1f0;
    fStack_298 = SUB84(pbStack_208,0);
    uStack_294 = (undefined4)((ulonglong)pbStack_208 >> 0x20);
    pbVar64 = (byte *)pdb_140b08d00(&fStack_298,&UNK_14305fdc0,10,*puStack_340,*puStack_348);
    pdb_140a596f0(&fStack_1c8,*param_5,&UNK_14305fdca,0x1d,&UNK_14305fde8);
    uStack_1e8 = 0;
    afStack_1e4[0] = 0.0;
    afStack_1e4[1] = 0.0;
    pbStack_208 = (byte *)((ulonglong)pbStack_208 & 0xffffffff00000000);
    uStack_1f8._0_4_ = (undefined4)_DAT_142e4e650;
    uStack_1f8._4_4_ = (undefined4)((ulonglong)_DAT_142e4e650 >> 0x20);
    pplStack_1f0 = _UNK_142e4e658;
    afStack_1e4[2] = 1.0;
    afStack_1e4[3] = 1.0;
    afStack_1e4[4] = 1.0;
    uStack_190 = 0;
    pbStack_200 = pbVar64;
    pdb_14161fcb0(&fStack_298,param_7,&pbStack_208,&UNK_14305fe00);
    cVar61 = *(char *)(lStack_2b8 + 0x98);
  }
  lStack_2a0 = lVar75 + 0x10;
  if (cVar61 == '\x01') {
    *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
    fVar96 = _DAT_142e36f28;
    uStack_138 = *param_8;
    pbStack_130 = (byte *)*puStack_340;
    pbStack_210 = (byte *)*puStack_348;
    uStack_128 = *param_6;
    uStack_2e0 = *param_5;
    pfStack_2d8 = (float *)0x0;
    pfStack_2d0 = (float *)0x4;
    pfStack_2c8 = (float *)0x0;
    pbStack_208 = (byte *)0x0;
    pbStack_200 = (byte *)0x6;
    uStack_1f8._0_4_ = 0x4305f280;
    uStack_1f8._4_4_ = 1;
    pplStack_1f0 = (longlong **)0x10;
    uStack_1e8 = uStack_1e8 & 0xffffff00;
    afStack_1e4[0] = (float)_DAT_142e6ada0;
    afStack_1e4[1] = (float)((ulonglong)_DAT_142e6ada0 >> 0x20);
    afStack_1e4[3] = 133.94751;
    afStack_1e4[4] = 1.4013e-45;
    puStack_1d0 = (undefined *)0x1e;
    fStack_1c8 = (float)((uint)fStack_1c8 & 0xffffff00);
    auStack_1b8 = (undefined1  [8])&UNK_14305f2ae;
    uStack_1b0 = (longlong **)0x11;
    uStack_1a8 = CONCAT31(uStack_1a8._1_3_,2);
    fStack_1a4 = (float)_DAT_14305f150;
    uStack_1a0 = (undefined4)((ulonglong)_DAT_14305f150 >> 0x20);
    puStack_198 = &UNK_14305f2bf;
    uStack_190 = 0x24;
    uStack_188 = 2;
    uStack_184 = _DAT_14305f150;
    puStack_178 = &UNK_14305f2e3;
    uStack_170 = 0xf;
    uStack_168 = 1;
    uStack_164 = _DAT_14305f160;
    puStack_158 = &UNK_14305f2f2;
    uStack_150 = 0x22;
    uStack_148 = 1;
    uStack_144 = _DAT_14305f160;
    uVar76 = 0;
    fStack_1c4 = afStack_1e4[0];
    fStack_1c0 = afStack_1e4[1];
    while ((lVar75 = lStack_2a0, uVar76 != 6 &&
           (uVar79 = (&uStack_1e8)[uVar76 * 8], (char)uVar79 != '\x03'))) {
      pbStack_110 = (byte *)uVar76;
      uVar65 = (&uStack_1f8)[uVar76 * 4];
      pplVar66 = (&pplStack_1f0)[uVar76 * 4];
      fVar84 = afStack_1e4[uVar76 * 8];
      fVar85 = afStack_1e4[uVar76 * 8 + 1];
      lVar80 = (ulonglong)*(byte *)(lStack_2b8 + 0x98) * 8;
      pdb_140f3e9e0(&fStack_298,&UNK_1430450c6,0xc,*(undefined8 *)(&UNK_143060830 + lVar80),
                    *(undefined8 *)(&UNK_143060808 + lVar80));
      pbStack_118 = (byte *)CONCAT44(uStack_290._4_4_,(float)uStack_290);
      pdb_140f3e9e0(&fStack_338,pbStack_118,CONCAT44(uStack_288._4_4_,(undefined4)uStack_288),uVar65
                    ,pplVar66);
      pdb_141703bf0(&pfStack_370,uStack_138,lVar75,&fStack_338);
      pfStack_108 = pfStack_368;
      if (pfStack_360 != (float *)0x0) {
        pfVar72 = pfStack_368 + (longlong)pfStack_360 * 0xc;
        pfVar74 = pfStack_368;
        do {
          uVar98 = (undefined4)((ulonglong)pplVar66 >> 0x20);
          uVar99 = (undefined4)((ulonglong)in_stack_fffffffffffffc20 >> 0x20);
          uVar100 = (undefined4)((ulonglong)in_stack_fffffffffffffc28 >> 0x20);
          fVar3 = *pfVar74;
          fVar4 = pfVar74[2];
          fVar86 = (float)pub_142e32b30();
          fVar87 = (float)pub_142e329e0();
          fVar91 = fVar86 * 0.0;
          fStack_338 = pfVar74[3];
          fVar93 = fVar91 + fVar91;
          fVar92 = fVar86 + fVar86;
          fVar94 = fVar91 * fVar93;
          fVar97 = fVar96 - (fVar86 * fVar92 + fVar94);
          fVar91 = fVar3 * 0.0 +
                   fStack_338 * (fVar92 * fVar87 + fVar94) * 0.0 +
                   fStack_338 * (fVar91 * fVar92 - fVar93 * fVar87) * 0.0 + fStack_338 * fVar97;
          fVar86 = fVar4 * 0.0 +
                   fStack_338 * fVar97 * 0.0 +
                   fStack_338 * (fVar93 * fVar87 + fVar86 * fVar93) * 0.0 +
                   fStack_338 * (fVar94 - fVar92 * fVar87);
          fVar87 = fVar96 / SQRT(fVar86 * fVar86 + fVar91 * fVar91);
          in_stack_fffffffffffffc28 = CONCAT44(uVar100,fVar4);
          in_stack_fffffffffffffc20 = CONCAT44(uVar99,fVar3);
          pplVar66 = (longlong **)CONCAT44(uVar98,fVar87 * fVar86);
          fStack_334 = fStack_338;
          fStack_330 = fStack_338;
          pdb_140df3380(&uStack_2f8,fStack_338 * fVar84,fStack_338 * fVar85,fVar91 * fVar87,pplVar66
                        ,in_stack_fffffffffffffc20,in_stack_fffffffffffffc28,&UNK_14305f4b0);
          pfVar59 = pfStack_2c8;
          if (pfStack_2c8 == pfStack_2d8) {
            pdb_142d8dbe0(&pfStack_2d8);
          }
          lVar75 = (longlong)pfVar59 * 0x1c;
          *(ulonglong *)((longlong)pfStack_2d0 + 0x10 + lVar75) = uStack_2e8;
          *(ulonglong *)((longlong)pfStack_2d0 + lVar75) = uStack_2f8;
          ((ulonglong *)((longlong)pfStack_2d0 + lVar75))[1] = (ulonglong)pbStack_2f0;
          *(char *)((longlong)pfStack_2d0 + 0x18 + lVar75) = (char)uVar79;
          pfStack_2c8 = (float *)((longlong)pfVar59 + 1);
          pfVar74 = pfVar74 + 0xc;
        } while (pfVar74 != pfVar72);
      }
      if (pfStack_370 != (float *)0x0) {
        pub_1406abac0((byte *)pfStack_108,(longlong)pfStack_370 * 0x30,4);
      }
      if (CONCAT44(uStack_294,fStack_298) != 0) {
        pub_1406abac0(pbStack_118,CONCAT44(uStack_294,fStack_298),1);
      }
      uVar76 = (longlong)pbStack_110 + 1;
    }
    pdb_141b241d0(&pbStack_208,&UNK_14305f314,0x19);
    uVar98 = uStack_290._4_4_;
    fVar96 = (float)uStack_290;
    uStack_290._0_4_ = SUB84(pbStack_200,0);
    uStack_290._4_4_ = (undefined4)((ulonglong)pbStack_200 >> 0x20);
    if (SBORROW8(0,(longlong)pbStack_208)) {
      fStack_298 = (float)uStack_290;
      uStack_294 = uStack_290._4_4_;
      uStack_290._0_4_ = fVar96;
      uStack_290._4_4_ = uVar98;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143060400,0x2b,&fStack_298,&UNK_1430603a0,&UNK_14305f368);
    }
    puStack_228 = puStack_198;
    uStack_220 = uStack_190;
    uStack_238 = CONCAT44(fStack_1a4,uStack_1a8);
    uStack_230 = CONCAT44(uStack_19c,uStack_1a0);
    puStack_248 = (undefined *)auStack_1b8;
    pplStack_240 = uStack_1b0;
    uStack_258 = CONCAT44(fStack_1c4,fStack_1c8);
    uStack_250 = CONCAT44(uStack_1bc,fStack_1c0);
    uStack_268 = (undefined *)CONCAT44(afStack_1e4[4],afStack_1e4[3]);
    uStack_260 = puStack_1d0;
    uStack_278._0_4_ = uStack_1e8;
    uStack_278._4_4_ = afStack_1e4[0];
    uStack_270._0_4_ = afStack_1e4[1];
    uStack_270._4_4_ = afStack_1e4[2];
    uStack_288._0_4_ = (undefined4)uStack_1f8;
    uStack_288._4_4_ = uStack_1f8._4_4_;
    pplStack_280 = pplStack_1f0;
    fStack_298 = SUB84(pbStack_208,0);
    uStack_294 = (undefined4)((ulonglong)pbStack_208 >> 0x20);
    uVar65 = pdb_140b08d00(&fStack_298,&UNK_14305f380,6,pbStack_130,pbStack_210);
    pdb_140a596f0(&fStack_298,uStack_2e0,&UNK_14305f386,0x23,&UNK_14305f3b0);
    uStack_f4 = 1;
    uVar68 = pdb_140df4400(&UNK_14305f380,6);
    uStack_f4 = 1;
    pbVar64 = (byte *)pdb_140a2e580(uStack_128,uVar68);
    uStack_f4 = 1;
    uVar68 = pdb_140df4400(&UNK_14305f3c8,0xd);
    uStack_f4 = 1;
    uVar68 = pdb_140a2e580(uStack_128,uVar68);
    uStack_f4 = 1;
    uVar69 = pdb_140df4400(&UNK_14305f3d5,0xc);
    uStack_f4 = 1;
    pplVar66 = (longlong **)pdb_140a2e580(uStack_128,uVar69);
    uStack_f4 = 1;
    uVar69 = pdb_140df4400(&UNK_14305f3e1,0x14);
    uStack_f4 = 1;
    uVar69 = pdb_140a2e580(uStack_128,uVar69);
    uStack_1f8._0_4_ = 1;
    uStack_1e8 = (uint)uVar69;
    afStack_1e4[0] = (float)((ulonglong)uVar69 >> 0x20);
    uStack_f4 = 1;
    pbStack_208 = pbVar64;
    pbStack_200 = (byte *)uVar68;
    pplStack_1f0 = pplVar66;
    uStack_190 = pdb_141991bb0(&fStack_298,lVar75,&pbStack_208);
    pplVar66 = _UNK_142e4e658;
    puStack_198 = uStack_268;
    auStack_1b8 = (undefined1  [8])CONCAT44(uStack_288._4_4_,(undefined4)uStack_288);
    uStack_1a8 = (uint)uStack_278;
    fStack_1a4 = uStack_278._4_4_;
    uStack_1a0 = (undefined4)uStack_270;
    uStack_19c = uStack_270._4_4_;
    uStack_1b0 = pplStack_280;
    fStack_1c8 = fStack_298;
    fStack_1c4 = (float)uStack_294;
    fStack_1c0 = (float)uStack_290;
    uStack_1bc = uStack_290._4_4_;
    pbStack_208 = (byte *)((ulonglong)pbStack_208 & 0xffffffff00000000);
    uStack_1f8._0_4_ = (undefined4)_DAT_142e4e650;
    uVar99 = (undefined4)uStack_1f8;
    uStack_1f8._4_4_ = (undefined4)((ulonglong)_DAT_142e4e650 >> 0x20);
    uVar100 = uStack_1f8._4_4_;
    pplStack_1f0 = _UNK_142e4e658;
    uStack_1e8 = 0;
    afStack_1e4[0] = 0.0;
    afStack_1e4[1] = 0.0;
    afStack_1e4[2] = 1.0;
    afStack_1e4[3] = 1.0;
    afStack_1e4[4] = 1.0;
    uStack_f4 = 0;
    pbStack_200 = (byte *)uVar65;
    pdb_14161fcb0(&fStack_338,param_7,&pbStack_208,&UNK_14305f3f8);
    pdb_141b241d0(&pbStack_208,&UNK_14305f410,0x21);
    uVar98 = uStack_290._4_4_;
    fVar96 = (float)uStack_290;
    uStack_290._0_4_ = SUB84(pbStack_200,0);
    uStack_290._4_4_ = (undefined4)((ulonglong)pbStack_200 >> 0x20);
    if (SBORROW8(0,(longlong)pbStack_208)) {
      fStack_298 = (float)uStack_290;
      uStack_294 = uStack_290._4_4_;
      uStack_290._0_4_ = fVar96;
      uStack_290._4_4_ = uVar98;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143060400,0x2b,&fStack_298,&UNK_1430603a0,&UNK_14305f438);
    }
    puStack_228 = puStack_198;
    uStack_220 = uStack_190;
    uStack_238 = CONCAT44(fStack_1a4,uStack_1a8);
    uStack_230 = CONCAT44(uStack_19c,uStack_1a0);
    puStack_248 = (undefined *)auStack_1b8;
    pplStack_240 = uStack_1b0;
    uStack_258 = CONCAT44(fStack_1c4,fStack_1c8);
    uStack_250 = CONCAT44(uStack_1bc,fStack_1c0);
    uStack_268 = (undefined *)CONCAT44(afStack_1e4[4],afStack_1e4[3]);
    uStack_260 = puStack_1d0;
    uStack_278 = CONCAT44(afStack_1e4[0],uStack_1e8);
    uStack_270 = CONCAT44(afStack_1e4[2],afStack_1e4[1]);
    uStack_288._0_4_ = (undefined4)uStack_1f8;
    uStack_288._4_4_ = uStack_1f8._4_4_;
    pplStack_280 = pplStack_1f0;
    fStack_298 = SUB84(pbStack_208,0);
    uStack_294 = (undefined4)((ulonglong)pbStack_208 >> 0x20);
    pbVar64 = (byte *)pdb_140b08d00(&fStack_298,&UNK_14305f450,0xe,pbStack_130,pbStack_210);
    pdb_140a596f0(&fStack_298,uStack_2e0,&UNK_14305f386,0x23,&UNK_14305f460);
    uStack_f5 = 1;
    uVar65 = pdb_140df4400(&UNK_14305f478,0xd);
    uStack_f5 = 1;
    pbVar67 = (byte *)pdb_140a2e580(uStack_128,uVar65);
    uStack_f5 = 1;
    uVar65 = pdb_140df4400(&UNK_14305f485,0xe);
    uStack_f5 = 1;
    uVar65 = pdb_140a2e580(uStack_128,uVar65);
    uStack_f5 = 1;
    uVar68 = pdb_140df4400(&UNK_14305f493,5);
    uStack_f5 = 1;
    pplVar71 = (longlong **)pdb_140a2e580(uStack_128,uVar68);
    uStack_f5 = 1;
    uVar68 = pdb_140df4400(&UNK_14305f3e1,0x14);
    uStack_f5 = 1;
    uVar68 = pdb_140a2e580(uStack_128,uVar68);
    uStack_1f8._0_4_ = 0;
    uStack_1e8 = (uint)uVar68;
    afStack_1e4[0] = (float)((ulonglong)uVar68 >> 0x20);
    uStack_f5 = 1;
    pbStack_208 = pbVar67;
    pbStack_200 = (byte *)uVar65;
    pplStack_1f0 = pplVar71;
    uStack_190 = pdb_141991bb0(&fStack_298,lVar75,&pbStack_208);
    puStack_198 = uStack_268;
    auStack_1b8._4_4_ = uStack_288._4_4_;
    auStack_1b8._0_4_ = (undefined4)uStack_288;
    uStack_1b0 = pplStack_280;
    uStack_1a8 = (uint)uStack_278;
    fStack_1a4 = uStack_278._4_4_;
    uStack_1a0 = (undefined4)uStack_270;
    uStack_19c = uStack_270._4_4_;
    fStack_1c8 = fStack_298;
    fStack_1c4 = (float)uStack_294;
    fStack_1c0 = (float)uStack_290;
    uStack_1bc = uStack_290._4_4_;
    pbStack_208 = (byte *)((ulonglong)pbStack_208 & 0xffffffff00000000);
    pplStack_1f0 = pplVar66;
    uStack_1e8 = 0;
    afStack_1e4[0] = 0.0;
    afStack_1e4[1] = 0.0;
    afStack_1e4[2] = 1.0;
    afStack_1e4[3] = 1.0;
    afStack_1e4[4] = 1.0;
    uStack_f5 = 0;
    pbStack_200 = pbVar64;
    uStack_1f8._0_4_ = uVar99;
    uStack_1f8._4_4_ = uVar100;
    pdb_14161fcb0(&fStack_338,param_7,&pbStack_208,&UNK_14305f498);
    pfStack_3c8 = pfStack_2d8;
    lStack_3c0 = (longlong)pfStack_2d0;
    pfStack_3b8 = pfStack_2c8;
    pdb_141619a90(param_7,&pfStack_3c8,&UNK_14305fe18);
  }
  else if (cVar61 == '\x02') {
    pbVar64 = (byte *)*puStack_340;
    uVar76 = *puStack_348;
    uVar82 = *param_6;
    uVar5 = *param_5;
    *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
    uVar6 = *param_8;
    pdb_141b241d0(&pbStack_208,&UNK_14305f4c8,0x25);
    uVar98 = uStack_290._4_4_;
    fVar96 = (float)uStack_290;
    uStack_290._0_4_ = SUB84(pbStack_200,0);
    uStack_290._4_4_ = (undefined4)((ulonglong)pbStack_200 >> 0x20);
    if (SBORROW8(0,(longlong)pbStack_208)) {
      fStack_298 = (float)uStack_290;
      uStack_294 = uStack_290._4_4_;
      uStack_290._0_4_ = fVar96;
      uStack_290._4_4_ = uVar98;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143060400,0x2b,&fStack_298,&UNK_1430603a0,&UNK_14305f528);
    }
    puStack_228 = puStack_198;
    uStack_220 = uStack_190;
    puStack_248 = (undefined *)auStack_1b8;
    pplStack_240 = uStack_1b0;
    uStack_258 = CONCAT44(fStack_1c4,fStack_1c8);
    uStack_250 = CONCAT44(uStack_1bc,fStack_1c0);
    uStack_268 = (undefined *)CONCAT44(afStack_1e4[4],afStack_1e4[3]);
    uStack_260 = puStack_1d0;
    uStack_278 = CONCAT44(afStack_1e4[0],uStack_1e8);
    uStack_270 = CONCAT44(afStack_1e4[2],afStack_1e4[1]);
    uStack_288._0_4_ = (undefined4)uStack_1f8;
    uStack_288._4_4_ = uStack_1f8._4_4_;
    pplStack_280 = pplStack_1f0;
    fStack_298 = SUB84(pbStack_208,0);
    uStack_294 = (undefined4)((ulonglong)pbStack_208 >> 0x20);
    uStack_138 = uVar76;
    pbStack_118 = pbVar64;
    pbVar64 = (byte *)pdb_140b08d00(&fStack_298,&UNK_14305f540,0x12,pbVar64,uVar76);
    uStack_128 = uVar5;
    pdb_140a596f0(&fStack_338,uVar5,&UNK_14305f552,0x1c,&UNK_14305f570);
    uStack_f1 = 1;
    uVar65 = pdb_140df4400(&UNK_14305f588,0x11);
    uStack_f1 = 1;
    pplVar66 = (longlong **)pdb_140a2e580(uVar82,uVar65);
    uStack_f1 = 1;
    uVar65 = pdb_140df4400(&UNK_14305f599,0xd);
    uStack_f1 = 1;
    pbVar67 = (byte *)pdb_140a2e580(uVar82,uVar65);
    uStack_f1 = 1;
    uVar65 = pdb_140df4400(&UNK_14305f5a6,7);
    uStack_f1 = 1;
    uVar65 = pdb_140a2e580(uVar82,uVar65);
    uStack_f1 = 1;
    uVar68 = pdb_140df4400(&UNK_14305f5ad,7);
    uStack_f1 = 1;
    uVar68 = pdb_140a2e580(uVar82,uVar68);
    uStack_f1 = 1;
    uVar69 = pdb_140df4400(&UNK_14305f5b4,0x15);
    uStack_f1 = 1;
    uVar69 = pdb_140a2e580(uVar82,uVar69);
    uStack_1f8._0_4_ = (undefined4)uVar68;
    uStack_1f8._4_4_ = (undefined4)((ulonglong)uVar68 >> 0x20);
    uStack_1e8 = (uint)uVar69;
    afStack_1e4[0] = (float)((ulonglong)uVar69 >> 0x20);
    uStack_f1 = 1;
    pbStack_208 = pbVar67;
    pbStack_200 = (byte *)uVar65;
    pplStack_1f0 = pplVar66;
    uStack_190 = pdb_141992b80(&fStack_338,lStack_2a0,&pbStack_208);
    pplVar66 = _UNK_142e4e658;
    puStack_198 = puStack_308;
    uStack_1a8 = uStack_318;
    fStack_1a4 = (float)uStack_314;
    uStack_1a0 = uStack_310;
    uStack_19c = uStack_30c;
    uStack_1b0 = (longlong **)uStack_320;
    auStack_1b8 = (undefined1  [8])lStack_328;
    fStack_1c8 = fStack_338;
    fStack_1c4 = fStack_334;
    fStack_1c0 = fStack_330;
    uStack_1bc = uStack_32c;
    pbStack_208 = (byte *)((ulonglong)pbStack_208 & 0xffffffff00000000);
    uStack_1e8 = 0;
    afStack_1e4[0] = 0.0;
    afStack_1e4[1] = 0.0;
    uStack_1f8._0_4_ = (undefined4)_DAT_142e4e650;
    uVar98 = (undefined4)uStack_1f8;
    uStack_1f8._4_4_ = (undefined4)((ulonglong)_DAT_142e4e650 >> 0x20);
    uVar99 = uStack_1f8._4_4_;
    pplStack_1f0 = _UNK_142e4e658;
    afStack_1e4[2] = 1.0;
    afStack_1e4[3] = 1.0;
    afStack_1e4[4] = 1.0;
    uStack_f1 = 0;
    pbStack_200 = pbVar64;
    pdb_14161c4e0(&fStack_298,param_7,&pbStack_208,&UNK_14305f5d0);
    lVar75 = (ulonglong)*(byte *)(lStack_2b8 + 0x98) * 8;
    uStack_f1 = 0;
    pdb_140f3e9e0(&pbStack_208,&UNK_1430450c6,0xc,*(undefined8 *)(&UNK_143060830 + lVar75),
                  *(undefined8 *)(&UNK_143060808 + lVar75));
    pbStack_130 = pbStack_200;
    pbStack_110 = (byte *)uVar82;
    pdb_140f3e9e0(&fStack_298,pbStack_200,CONCAT44(uStack_1f8._4_4_,(undefined4)uStack_1f8),
                  &UNK_14305f5e8,0x14);
    pdb_141703bf0(&pfStack_370,uVar6,lStack_2a0,&fStack_298);
    pfStack_108 = pfStack_368;
    if (pfStack_360 != (float *)0x0) {
      plVar77 = (longlong *)param_7[1];
      if (plVar77 == (longlong *)0x0) {
        plVar77 = (longlong *)param_7[2];
      }
      lVar75 = (longlong)pfStack_360 * 0x30;
      uVar65 = *param_7;
      lVar80 = 0;
      fVar96 = (float)_DAT_142e378e0;
      uVar76 = (ulonglong)_DAT_142e378e0 >> 0x20;
      do {
        pfVar74 = pfStack_108;
        fVar84 = (float)pub_142e329e0();
        fVar85 = (float)pub_142e32b30();
        uVar100 = *(undefined4 *)((longlong)pfVar74 + lVar80 + 0xc);
        puVar1 = (undefined8 *)((longlong)pfVar74 + lVar80);
        uVar68 = *puVar1;
        uVar69 = puVar1[1];
        uVar70 = pdb_140ed5970(uVar65);
        lVar81 = plVar77[2];
        if ((ulonglong)(*plVar77 - lVar81) < 0x68) {
          pdb_142d7f1b0(plVar77,lVar81,0x68,1,1);
        }
        lVar7 = plVar77[1];
        *(code **)(lVar7 + lVar81) = pdb_14160aaa0;
        pfVar74 = (float *)(lVar7 + 8 + lVar81);
        *pfVar74 = fVar85 * fVar96;
        pfVar74[1] = fVar85 * (float)uVar76;
        pfVar74[2] = fVar85 * 0.0;
        pfVar74[3] = fVar84;
        puVar1 = (undefined8 *)(lVar7 + 0x18 + lVar81);
        *puVar1 = uVar68;
        puVar1[1] = uVar69;
        *(undefined4 *)(lVar7 + 0x28 + lVar81) = uVar100;
        *(undefined4 *)(lVar7 + 0x2c + lVar81) = uVar100;
        *(undefined4 *)(lVar7 + 0x38 + lVar81) = 0;
        *(undefined8 *)(lVar7 + 0x40 + lVar81) = 0x13fa53c58fdddee8;
        *(undefined1 *)(lVar7 + 0x48 + lVar81) = 0xd;
        *(undefined8 *)(lVar7 + 0x58 + lVar81) = uVar70;
        plVar77[2] = lVar81 + 0x68;
        lVar80 = lVar80 + 0x30;
      } while (lVar75 != lVar80);
    }
    if (pfStack_370 != (float *)0x0) {
      pub_1406abac0((byte *)pfStack_108,(longlong)pfStack_370 * 0x30,4);
    }
    if (pbStack_208 != (byte *)0x0) {
      pub_1406abac0(pbStack_130,(ulonglong)pbStack_208,1);
    }
    uStack_f1 = 0;
    pdb_141b241d0(&pbStack_208,&UNK_14305f5fc,0x29);
    uVar100 = uStack_290._4_4_;
    fVar96 = (float)uStack_290;
    uStack_290._0_4_ = SUB84(pbStack_200,0);
    uStack_290._4_4_ = (undefined4)((ulonglong)pbStack_200 >> 0x20);
    if (SBORROW8(0,(longlong)pbStack_208)) {
      fStack_298 = (float)uStack_290;
      uStack_294 = uStack_290._4_4_;
      uStack_290._0_4_ = fVar96;
      uStack_290._4_4_ = uVar100;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143060400,0x2b,&fStack_298,&UNK_1430603a0,&UNK_14305f628);
    }
    puStack_228 = puStack_198;
    uStack_220 = uStack_190;
    uStack_238 = CONCAT44(fStack_1a4,uStack_1a8);
    uStack_230 = CONCAT44(uStack_19c,uStack_1a0);
    puStack_248 = (undefined *)auStack_1b8;
    pplStack_240 = uStack_1b0;
    uStack_258 = CONCAT44(fStack_1c4,fStack_1c8);
    uStack_250 = CONCAT44(uStack_1bc,fStack_1c0);
    uStack_268 = (undefined *)CONCAT44(afStack_1e4[4],afStack_1e4[3]);
    uStack_260 = puStack_1d0;
    uStack_278 = CONCAT44(afStack_1e4[0],uStack_1e8);
    uStack_270 = CONCAT44(afStack_1e4[2],afStack_1e4[1]);
    uStack_288._0_4_ = (undefined4)uStack_1f8;
    uStack_288._4_4_ = uStack_1f8._4_4_;
    pplStack_280 = pplStack_1f0;
    fStack_298 = SUB84(pbStack_208,0);
    uStack_294 = (undefined4)((ulonglong)pbStack_208 >> 0x20);
    uStack_f1 = 0;
    pbVar64 = (byte *)pdb_140b08d00(&fStack_298,&UNK_14305f640,0xb,pbStack_118,uStack_138);
    uStack_f1 = 0;
    pdb_140a596f0(&fStack_298,uStack_128,&UNK_14305f386,0x23,&UNK_14305f650);
    uStack_f3 = 1;
    uVar65 = pdb_140df4400(&UNK_14305f668,0xe);
    lVar75 = lStack_2a0;
    uStack_f3 = 1;
    pbVar67 = (byte *)pdb_140a2e580(pbStack_110,uVar65);
    uStack_f3 = 1;
    uVar65 = pdb_140df4400(&UNK_14305f485,0xe);
    uStack_f3 = 1;
    uVar65 = pdb_140a2e580(pbStack_110,uVar65);
    uStack_f3 = 1;
    uVar68 = pdb_140df4400(&UNK_14305f493,5);
    uStack_f3 = 1;
    pplVar71 = (longlong **)pdb_140a2e580(pbStack_110,uVar68);
    uStack_f3 = 1;
    uVar68 = pdb_140df4400(&UNK_14305f3e1,0x14);
    uStack_f3 = 1;
    uVar68 = pdb_140a2e580(pbStack_110,uVar68);
    uStack_1f8._0_4_ = 0;
    uStack_1e8 = (uint)uVar68;
    afStack_1e4[0] = (float)((ulonglong)uVar68 >> 0x20);
    uStack_f3 = 1;
    pbStack_208 = pbVar67;
    pbStack_200 = (byte *)uVar65;
    pplStack_1f0 = pplVar71;
    uStack_190 = pdb_141991bb0(&fStack_298,lVar75,&pbStack_208);
    puStack_198 = uStack_268;
    auStack_1b8._4_4_ = uStack_288._4_4_;
    auStack_1b8._0_4_ = (undefined4)uStack_288;
    uStack_1b0 = pplStack_280;
    uStack_1a8 = (uint)uStack_278;
    fStack_1a4 = uStack_278._4_4_;
    uStack_1a0 = (undefined4)uStack_270;
    uStack_19c = uStack_270._4_4_;
    fStack_1c8 = fStack_298;
    fStack_1c4 = (float)uStack_294;
    fStack_1c0 = (float)uStack_290;
    uStack_1bc = uStack_290._4_4_;
    pbStack_208 = (byte *)((ulonglong)pbStack_208 & 0xffffffff00000000);
    pplStack_1f0 = pplVar66;
    uStack_1e8 = 0;
    afStack_1e4[0] = 0.0;
    afStack_1e4[1] = 0.0;
    afStack_1e4[2] = 1.0;
    afStack_1e4[3] = 1.0;
    afStack_1e4[4] = 1.0;
    uStack_f3 = 0;
    pbStack_200 = pbVar64;
    uStack_1f8._0_4_ = uVar98;
    uStack_1f8._4_4_ = uVar99;
    pdb_14161fcb0(&pfStack_370,param_7,&pbStack_208,&UNK_14305f678);
    cVar61 = *(char *)(lStack_2b8 + 0x98);
    goto joined_r0x000140b9ba39;
  }
  cVar61 = *(char *)(lStack_2b8 + 0x98);
joined_r0x000140b9ba39:
  if (cVar61 == '\x01') {
    puVar78 = &UNK_143045170;
    uVar65 = 5;
  }
  else {
    plVar77 = (longlong *)param_7[1];
    if (plVar77 == (longlong *)0x0) {
      plVar77 = (longlong *)param_7[2];
    }
    lVar75 = plVar77[2];
    if ((ulonglong)(*plVar77 - lVar75) < 8) {
      pdb_142d7f1b0(plVar77,lVar75,8,1,1);
    }
    *(code **)(plVar77[1] + lVar75) = pdb_14160d7b0;
    plVar77[2] = lVar75 + 8;
    lVar75 = (ulonglong)*(byte *)(lStack_2b8 + 0x98) * 8;
    uVar65 = *(undefined8 *)(&UNK_143060808 + lVar75);
    puVar78 = *(undefined **)(&UNK_143060830 + lVar75);
  }
  pdb_140f3e9e0(&pbStack_208,&UNK_1430450c6,0xc,puVar78,uVar65);
  pbStack_110 = pbStack_200;
  pdb_140f3e9e0(&fStack_298,pbStack_200,CONCAT44(uStack_1f8._4_4_,(undefined4)uStack_1f8),
                &UNK_14305fe30,10);
  pdb_1416432f0(&fStack_338,&fStack_298);
  if (SBORROW8(0,(longlong)CONCAT44(fStack_334,fStack_338))) {
    fStack_298 = fStack_330;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14305fe30,10,&fStack_298,&UNK_1430603a0,&UNK_14305fe40);
  }
  pbStack_118 = (byte *)CONCAT44(uStack_32c,fStack_330);
  pfStack_108 = (float *)CONCAT44(fStack_334,fStack_338);
  pdb_1416502b0(&pfStack_370,pbStack_118,lStack_328);
  if (SBORROW8(0,(longlong)pfStack_370)) {
    fStack_298 = SUB84(pfStack_368,0);
    uStack_294 = (undefined4)((ulonglong)pfStack_368 >> 0x20);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14305fe58,0x11,&fStack_298,&UNK_1430603c0,&UNK_14305fe70);
  }
  pfStack_2c8 = pfStack_360;
  pfStack_2d8 = pfStack_370;
  pfStack_2d0 = pfStack_368;
  if (pfStack_108 != (float *)0x0) {
    pub_1406abac0(pbStack_118,(ulonglong)pfStack_108,1);
  }
  if (pbStack_208 != (byte *)0x0) {
    pub_1406abac0(pbStack_110,(ulonglong)pbStack_208,1);
  }
  uStack_2f8 = 0;
  pbStack_2f0 = (byte *)0x4;
  uStack_2e8 = 0;
  uStack_374 = *(undefined4 *)((longlong)param_11 + 0x1c);
  puStack_3a0 = (undefined4 *)param_11[2];
  *puStack_3a0 = uStack_374;
  uStack_2e0 = *param_11;
  pbVar64 = *(byte **)(uStack_2e0 + 8);
  pbVar67 = *(byte **)(uStack_2e0 + 0x10);
  *(undefined8 *)(uStack_2e0 + 0x10) = 0;
  pbStack_118 = pbVar67;
  pbStack_110 = pbVar64;
  if (pbVar67 != (byte *)0x0) {
    pbVar73 = (byte *)0x1;
    do {
      plVar77 = *(longlong **)pbVar64;
      LOCK();
      *plVar77 = *plVar77 + -1;
      UNLOCK();
      pfStack_108 = (float *)pbVar73;
      if (*plVar77 == 0) {
        pdb_1406ed6a0(pbVar64);
      }
      pbVar73 = (byte *)((longlong)pfStack_108 + 1);
      pbVar64 = pbVar64 + 0x50;
    } while (pfStack_108 != (float *)pbVar67);
  }
  *(undefined1 *)(uStack_2e0 + 0x18) = 0;
  bVar58 = UNK_14303a8bf;
  bVar57 = UNK_14303a8be;
  bVar56 = UNK_14303a8bd;
  bVar55 = UNK_14303a8bc;
  bVar54 = UNK_14303a8bb;
  bVar53 = UNK_14303a8ba;
  bVar52 = UNK_14303a8b9;
  bVar51 = UNK_14303a8b8;
  bVar50 = UNK_14303a8b7;
  bVar49 = UNK_14303a8b6;
  bVar48 = UNK_14303a8b5;
  bVar47 = UNK_14303a8b4;
  bVar46 = UNK_14303a8b3;
  bVar45 = UNK_14303a8b2;
  bVar44 = UNK_14303a8b1;
  bVar43 = DAT_14303a8b0;
  cVar30 = UNK_14302dda3;
  cVar29 = UNK_14302dda2;
  cVar28 = UNK_14302dda1;
  cVar61 = DAT_14302dda0;
  pfStack_358 = pfStack_2d0 + (longlong)pfStack_2c8 * 0x14;
  pfStack_370 = pfStack_2d0;
  pfStack_368 = pfStack_2d0;
  pfStack_360 = pfStack_2d8;
  uStack_378 = *(undefined4 *)((longlong)param_8 + 0x1c);
  uStack_398 = *param_8;
  puStack_3a8 = (undefined4 *)param_8[2];
  while (pfVar74 = pfStack_368, pfStack_368 != pfStack_358) {
    pfVar74 = pfStack_368 + 0x14;
    pbVar64 = *(byte **)pfStack_368;
    if (SBORROW8(0,(longlong)pbVar64)) break;
    pbStack_110 = *(byte **)(pfStack_368 + 2);
    lVar75 = *(longlong *)(pfStack_368 + 4);
    uStack_128 = *(ulonglong *)(pfStack_368 + 6);
    pbStack_118 = *(byte **)(pfStack_368 + 8);
    uVar65 = *(undefined8 *)(pfStack_368 + 10);
    uVar76 = *(ulonglong *)(pfStack_368 + 0xc);
    pbStack_210 = *(byte **)(pfStack_368 + 0xe);
    uVar68 = *(undefined8 *)(pfStack_368 + 0x10);
    fVar96 = pfStack_368[0x12];
    pfStack_368 = pfVar74;
    pbStack_130 = pbVar64;
    if ((lVar75 == 0x12) &&
       (auVar88[0] = -(*pbStack_110 == bVar43), auVar88[1] = -(pbStack_110[1] == bVar44),
       auVar88[2] = -(pbStack_110[2] == bVar45), auVar88[3] = -(pbStack_110[3] == bVar46),
       auVar88[4] = -(pbStack_110[4] == bVar47), auVar88[5] = -(pbStack_110[5] == bVar48),
       auVar88[6] = -(pbStack_110[6] == bVar49), auVar88[7] = -(pbStack_110[7] == bVar50),
       auVar88[8] = -(pbStack_110[8] == bVar51), auVar88[9] = -(pbStack_110[9] == bVar52),
       auVar88[10] = -(pbStack_110[10] == bVar53), auVar88[0xb] = -(pbStack_110[0xb] == bVar54),
       auVar88[0xc] = -(pbStack_110[0xc] == bVar55), auVar88[0xd] = -(pbStack_110[0xd] == bVar56),
       auVar88[0xe] = -(pbStack_110[0xe] == bVar57), auVar88[0xf] = -(pbStack_110[0xf] == bVar58),
       auVar90[0] = -((char)*(undefined2 *)(pbStack_110 + 0x10) == cVar61),
       auVar90[1] = -((char)((ushort)*(undefined2 *)(pbStack_110 + 0x10) >> 8) == cVar28),
       auVar90[2] = -(cVar29 == '\0'), auVar90[3] = -(cVar30 == '\0'), auVar90[4] = 0xff,
       auVar90[5] = 0xff, auVar90[6] = 0xff, auVar90[7] = 0xff, auVar90[8] = 0xff, auVar90[9] = 0xff
       , auVar90[10] = 0xff, auVar90[0xb] = 0xff, auVar90[0xc] = 0xff, auVar90[0xd] = 0xff,
       auVar90[0xe] = 0xff, auVar90[0xf] = 0xff, auVar90 = auVar90 & auVar88,
       (ushort)((ushort)(SUB161(auVar90 >> 7,0) & 1) | (ushort)(SUB161(auVar90 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar90 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar90 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar90 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar90 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar90 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar90 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar90 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar90 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar90 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar90 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar90 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar90 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar90 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar90[0xf] >> 7) << 0xf) == 0xffff)) {
      if (pbVar64 != (byte *)0x0) {
        pub_1406abac0(pbStack_110,(ulonglong)pbVar64,1);
      }
      if (uStack_128 != 0) {
        pub_1406abac0(pbStack_118,uStack_128,1);
      }
      pbVar64 = pbStack_210;
      uVar82 = uVar76 & 0x7fffffffffffffff;
    }
    else {
      *puStack_3a8 = uStack_378;
      lVar80 = (ulonglong)*(byte *)(lStack_2b8 + 0x98) * 8;
      uStack_f7 = 1;
      uStack_138 = uVar76;
      pdb_140f3e9e0(&pbStack_208,&UNK_1430450c6,0xc,*(undefined8 *)(&UNK_143060830 + lVar80),
                    *(undefined8 *)(&UNK_143060808 + lVar80));
      uStack_f7 = 1;
      pdb_141b030b0(&fStack_298,pbStack_118,uVar65,&pbStack_208);
      uStack_f7 = 1;
      pdb_141703bf0(&fStack_338,uStack_398,lStack_2a0,&fStack_298);
      uStack_f8 = 1;
      plStack_390 = (longlong *)pdb_1418bdee0(pbStack_110);
      *puStack_3a0 = uStack_374;
      pbVar64 = (byte *)CONCAT44(uStack_32c,fStack_330);
      pbVar67 = pbVar64 + lStack_328 * 0x30;
      uStack_1f8 = &plStack_390;
      pplStack_1f0 = (longlong **)&fStack_37c;
      uStack_f9 = 1;
      lStack_388 = lVar75;
      fStack_37c = fVar96;
      pbStack_208 = pbVar64;
      pbStack_200 = pbVar67;
      pdb_1415e8f70(uStack_2e0,&pbStack_208);
      uVar83 = SBORROW8(0,uStack_138);
      if (!(bool)uVar83) {
        pdb_141b033a0(&fStack_298,pbStack_210,uVar68,&UNK_14305ff58,0xd);
        pfVar74 = &fStack_298;
        pdb_141b248b0(&pbStack_208);
        uVar98 = uStack_290._4_4_;
        fVar96 = (float)uStack_290;
        uStack_290._0_4_ = SUB84(pbStack_200,0);
        uStack_290._4_4_ = (undefined4)((ulonglong)pbStack_200 >> 0x20);
        if (SBORROW8(0,(longlong)pbStack_208)) {
          fStack_298 = (float)uStack_290;
          uStack_294 = uStack_290._4_4_;
          uStack_290._0_4_ = fVar96;
          uStack_290._4_4_ = uVar98;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143060400,0x2b,&fStack_298,&UNK_1430603a0,&UNK_14305ff68);
        }
        puStack_228 = puStack_198;
        uStack_220 = uStack_190;
        uStack_238 = CONCAT44(fStack_1a4,uStack_1a8);
        uStack_230 = CONCAT44(uStack_19c,uStack_1a0);
        puStack_248 = (undefined *)auStack_1b8;
        pplStack_240 = uStack_1b0;
        uStack_258 = CONCAT44(fStack_1c4,fStack_1c8);
        uStack_250 = CONCAT44(uStack_1bc,fStack_1c0);
        uStack_268 = (undefined *)CONCAT44(afStack_1e4[4],afStack_1e4[3]);
        uStack_260 = puStack_1d0;
        uStack_278 = CONCAT44(afStack_1e4[0],uStack_1e8);
        uStack_270 = CONCAT44(afStack_1e4[2],afStack_1e4[1]);
        pplStack_280 = pplStack_1f0;
        fStack_298 = SUB84(pbStack_208,0);
        uStack_294 = (undefined4)((ulonglong)pbStack_208 >> 0x20);
        uStack_119 = uVar83;
        uStack_288 = uStack_1f8;
        pfVar72 = (float *)pdb_140a97600(&fStack_298);
        uVar76 = (longlong)pfVar74 - (longlong)pfVar72;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar76;
        if (0x7ffffffffffffffc < uVar76) {
          uVar65 = 0;
LAB_140b9c5fe:
          pdb_142dc7e2a(uVar65,uVar76);
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        if (pfVar74 == pfVar72) {
          pfStack_108 = (float *)0x4;
          uStack_2b0 = 0;
        }
        else {
          uStack_2b0 = SUB168(auVar8 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
          pdb_14007ee60();
          uVar65 = 4;
          pfStack_108 = (float *)pub_1406abab0(uVar76,4);
          if (pfStack_108 == (float *)0x0) goto LAB_140b9c5fe;
          uStack_2b0 = uStack_2b0 >> 3;
          if (uVar76 - 0xc < 0xc) {
            uVar76 = 0;
          }
          else {
            lVar75 = 0x14;
            uVar76 = 0;
            do {
              uVar98 = *(undefined4 *)((longlong)pfVar72 + lVar75 + -0xc);
              *(undefined8 *)((longlong)pfStack_108 + lVar75 + -0x14) =
                   *(undefined8 *)((longlong)pfVar72 + lVar75 + -0x14);
              *(undefined4 *)((longlong)pfStack_108 + lVar75 + -0xc) = uVar98;
              uVar98 = *(undefined4 *)((longlong)pfVar72 + lVar75);
              *(undefined8 *)((longlong)pfStack_108 + lVar75 + -8) =
                   *(undefined8 *)((longlong)pfVar72 + lVar75 + -8);
              *(undefined4 *)((longlong)pfStack_108 + lVar75) = uVar98;
              uVar76 = uVar76 + 2;
              lVar75 = lVar75 + 0x18;
            } while ((uStack_2b0 & 0xffffffffffffffe) != uVar76);
            if ((uStack_2b0 & 1) == 0) goto LAB_140b9c435;
          }
          fVar96 = pfVar72[uVar76 * 3 + 2];
          *(undefined8 *)((longlong)pfStack_108 + uVar76 * 0xc) =
               *(undefined8 *)(pfVar72 + uVar76 * 3);
          *(float *)((longlong)pfStack_108 + uVar76 * 0xc + 8) = fVar96;
        }
LAB_140b9c435:
        pdb_14098a960(&fStack_298);
        pbVar73 = (byte *)((longlong)pfStack_108 + uStack_2b0 * 0xc);
LAB_140b9c46b:
        if (pbVar64 != pbVar67) {
          uStack_1f8._0_4_ = SUB84(pbVar64,0);
          uStack_1f8._4_4_ = (undefined4)((ulonglong)pbVar64 >> 0x20);
          pfVar74 = pfStack_108;
          pbStack_200 = pbVar73;
          do {
            pbVar60 = pbStack_200;
            puStack_3b0 = &uStack_1f8;
            do {
              if (pfVar74 == (float *)pbVar60) {
                pbVar64 = pbVar64 + 0x30;
                goto LAB_140b9c46b;
              }
              pfVar74 = (float *)((longlong)pfVar74 + 0xc);
              pbStack_208 = (byte *)pfVar74;
              pdb_140a82d10(&fStack_298,&puStack_3b0);
              uVar76 = uStack_2e8;
            } while (fStack_298 != 1.4013e-45);
            if (uStack_2e8 == uStack_2f8) {
              pdb_142d7f1b0(&uStack_2f8,uStack_2e8,1,4,0x10);
            }
            *(ulonglong *)(pbStack_2f0 + uVar76 * 0x10) = CONCAT44((float)uStack_290,uStack_294);
            *(ulonglong *)(pbStack_2f0 + uVar76 * 0x10 + 8) =
                 CONCAT44((undefined4)uStack_288,uStack_290._4_4_);
            uStack_2e8 = uVar76 + 1;
            pfVar74 = (float *)pbStack_208;
          } while( true );
        }
        if (uStack_2b0 != 0) {
          pub_1406abac0((byte *)pfStack_108,uStack_2b0 * 0xc,4);
        }
        uVar83 = uStack_119;
        if (uStack_138 != 0) {
          pub_1406abac0(pbStack_210,uStack_138,1);
        }
      }
      LOCK();
      *plStack_390 = *plStack_390 + -1;
      UNLOCK();
      if (*plStack_390 == 0) {
        uStack_f8 = uVar83;
        pdb_1406ed6a0(&plStack_390);
      }
      if (CONCAT44(fStack_334,fStack_338) != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_32c,fStack_330),CONCAT44(fStack_334,fStack_338) * 0x30
                      ,4);
      }
      uVar76 = uStack_128;
      pbVar64 = pbStack_118;
      uVar82 = uStack_128;
      if (pbStack_130 != (byte *)0x0) {
        pub_1406abac0(pbStack_110,(ulonglong)pbStack_130,1);
        uVar76 = uStack_128;
        pbVar64 = pbStack_118;
        uVar82 = uStack_128;
      }
    }
    if (uVar82 != 0) {
      pub_1406abac0(pbVar64,uVar76,1);
    }
  }
  pfStack_368 = pfVar74;
  uStack_f2 = 0;
  pdb_14096ce60(&pfStack_370);
  *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
  cVar42 = UNK_142e6450f;
  cVar41 = UNK_142e6450e;
  cVar40 = UNK_142e6450d;
  cVar39 = UNK_142e6450c;
  cVar38 = UNK_142e6450b;
  cVar37 = UNK_142e6450a;
  cVar36 = UNK_142e64509;
  cVar35 = UNK_142e64508;
  cVar34 = UNK_142e64507;
  cVar33 = UNK_142e64506;
  cVar32 = UNK_142e64505;
  cVar31 = UNK_142e64504;
  cVar30 = UNK_142e64503;
  cVar29 = UNK_142e64502;
  cVar28 = UNK_142e64501;
  cVar61 = DAT_142e64500;
  lVar75 = *param_9;
  if (*(char *)(lVar75 + 8) != '\0') {
    pbStack_208 = (byte *)(lVar75 + 0x10);
    uStack_f2 = 0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143066330,0x2b,&pbStack_208,&UNK_143066310,&UNK_143066458);
  }
  if (*(longlong *)(lVar75 + 0x28) != 0) {
    lVar80 = *(longlong *)(lVar75 + 0x10);
    uVar76 = *(ulonglong *)(lVar75 + 0x18);
    uVar82 = 0x59e5b18ab7bc931;
    lVar75 = 0;
    while( true ) {
      uVar82 = uVar82 & uVar76;
      pcVar2 = (char *)(lVar80 + uVar82);
      cVar12 = *pcVar2;
      cVar13 = pcVar2[1];
      cVar14 = pcVar2[2];
      cVar15 = pcVar2[3];
      cVar16 = pcVar2[4];
      cVar17 = pcVar2[5];
      cVar18 = pcVar2[6];
      cVar19 = pcVar2[7];
      cVar20 = pcVar2[8];
      cVar21 = pcVar2[9];
      cVar22 = pcVar2[10];
      cVar23 = pcVar2[0xb];
      cVar24 = pcVar2[0xc];
      cVar25 = pcVar2[0xd];
      cVar26 = pcVar2[0xe];
      cVar27 = pcVar2[0xf];
      auVar89[0] = -(cVar12 == cVar61);
      auVar89[1] = -(cVar13 == cVar28);
      auVar89[2] = -(cVar14 == cVar29);
      auVar89[3] = -(cVar15 == cVar30);
      auVar89[4] = -(cVar16 == cVar31);
      auVar89[5] = -(cVar17 == cVar32);
      auVar89[6] = -(cVar18 == cVar33);
      auVar89[7] = -(cVar19 == cVar34);
      auVar89[8] = -(cVar20 == cVar35);
      auVar89[9] = -(cVar21 == cVar36);
      auVar89[10] = -(cVar22 == cVar37);
      auVar89[0xb] = -(cVar23 == cVar38);
      auVar89[0xc] = -(cVar24 == cVar39);
      auVar89[0xd] = -(cVar25 == cVar40);
      auVar89[0xe] = -(cVar26 == cVar41);
      auVar89[0xf] = -(cVar27 == cVar42);
      uVar63 = (ushort)(SUB161(auVar89 >> 7,0) & 1) | (ushort)(SUB161(auVar89 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar89 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar89 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar89 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar89 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar89 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar89 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar89 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar89 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar89 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar89 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar89 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar89 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar89 >> 0x77,0) & 1) << 0xe | (ushort)(auVar89[0xf] >> 7) << 0xf;
      uVar79 = (uint)uVar63;
      while (uVar63 != 0) {
        uVar10 = 0;
        for (uVar11 = uVar79; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        lVar81 = lVar80 + (uVar10 + uVar82 & uVar76) * -0x10;
        uStack_f2 = 0;
        cVar62 = pdb_140df4430(&UNK_14331a520,lVar81 + -0x10);
        if (cVar62 != '\0') {
          puVar1 = *(undefined8 **)(lVar81 + -8);
          uStack_f2 = 0;
          lVar75 = (**(code **)(puVar1[1] + 0x20))(*puVar1);
          uVar76 = uStack_2e8;
          pbVar64 = pbStack_2f0;
          if ((lVar75 == 0) || (uStack_2e8 == 0)) goto LAB_140b9c7a2;
          uStack_f2 = 0;
          lVar80 = pdb_140e17350(lVar75);
          uVar76 = uVar76 << 4;
          if (*(uint *)(lVar80 + 0x10) < uVar76) {
            pbStack_208 = (byte *)0xb;
            pplStack_1f0 = uStack_288;
          }
          else {
            fStack_338 = 0.0;
            fStack_334 = 0.0;
            fStack_330 = (float)uVar76;
            uStack_32c = (undefined4)(uVar76 >> 0x20);
            uStack_f2 = 0;
            pdb_140e55470(&pbStack_208,lStack_2a0,lVar75,pbVar64,uVar76,&fStack_338,1,0);
            if (pbStack_208 == (byte *)0xb) goto LAB_140b9c7a2;
            uStack_258 = CONCAT44(uStack_1bc,fStack_1c0);
            pplStack_280 = (longlong **)CONCAT44(afStack_1e4[0],uStack_1e8);
            uStack_278 = CONCAT44(afStack_1e4[2],afStack_1e4[1]);
            uStack_270 = CONCAT44(afStack_1e4[4],afStack_1e4[3]);
            uStack_260 = (undefined *)CONCAT44(fStack_1c4,fStack_1c8);
            uStack_268 = puStack_1d0;
            fStack_298 = SUB84(pbStack_200,0);
            uStack_294 = (undefined4)((ulonglong)pbStack_200 >> 0x20);
            uStack_290 = uStack_1f8;
          }
          pbStack_200 = (byte *)CONCAT44(uStack_294,fStack_298);
          uStack_1e8 = (uint)pplStack_280;
          afStack_1e4[0] = (float)((ulonglong)pplStack_280 >> 0x20);
          afStack_1e4[1] = (float)(uint)uStack_278;
          afStack_1e4[2] = uStack_278._4_4_;
          afStack_1e4[3] = (float)(undefined4)uStack_270;
          afStack_1e4[4] = (float)uStack_270._4_4_;
          puStack_1d0 = uStack_268;
          fStack_1c8 = (float)uStack_260;
          fStack_1c4 = (float)uStack_260._4_4_;
          fStack_1c0 = (float)uStack_258;
          uStack_1bc = (undefined4)((ulonglong)uStack_258 >> 0x20);
          uStack_1f8 = uStack_290;
          uStack_288 = pplStack_1f0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143060400,0x2b,&pbStack_208,&UNK_143060450,&UNK_14305fe88);
        }
        uVar63 = (ushort)(uVar79 - 1) & (ushort)uVar79;
        uVar79 = CONCAT22((short)(uVar79 - 1 >> 0x10),uVar63);
      }
      auVar95[0] = -(cVar12 == -1);
      auVar95[1] = -(cVar13 == -1);
      auVar95[2] = -(cVar14 == -1);
      auVar95[3] = -(cVar15 == -1);
      auVar95[4] = -(cVar16 == -1);
      auVar95[5] = -(cVar17 == -1);
      auVar95[6] = -(cVar18 == -1);
      auVar95[7] = -(cVar19 == -1);
      auVar95[8] = -(cVar20 == -1);
      auVar95[9] = -(cVar21 == -1);
      auVar95[10] = -(cVar22 == -1);
      auVar95[0xb] = -(cVar23 == -1);
      auVar95[0xc] = -(cVar24 == -1);
      auVar95[0xd] = -(cVar25 == -1);
      auVar95[0xe] = -(cVar26 == -1);
      auVar95[0xf] = -(cVar27 == -1);
      if ((((((((((((((((SUB161(auVar95 >> 7,0) & 1) != 0 || (SUB161(auVar95 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar95 >> 0x17,0) & 1) != 0) || (SUB161(auVar95 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar95 >> 0x27,0) & 1) != 0) || (SUB161(auVar95 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar95 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar95 >> 0x3f,0) & 1) != 0) || (SUB161(auVar95 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar95 >> 0x4f,0) & 1) != 0) || (SUB161(auVar95 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar95 >> 0x5f,0) & 1) != 0) || (SUB161(auVar95 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar95 >> 0x6f,0) & 1) != 0) || (SUB161(auVar95 >> 0x77,0) & 1) != 0) ||
          auVar95[0xf] < '\0') break;
      uVar82 = uVar82 + lVar75 + 0x10;
      lVar75 = lVar75 + 0x10;
    }
  }
LAB_140b9c7a2:
  uVar76 = 0x44c;
  if (uStack_2e8 < 0x44c) {
    uVar76 = uStack_2e8;
  }
  *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
  *(ulonglong *)*param_10 = uVar76;
  uStack_f2 = 0;
  pdb_140a596f0(&fStack_338,*param_5,&UNK_14305fea0,0x27,&UNK_14305fec8);
  uStack_f6 = 1;
  pdb_141b241d0(&pbStack_208,&UNK_14305fee0,0x24);
  uVar98 = uStack_290._4_4_;
  fVar96 = (float)uStack_290;
  lVar75 = lStack_2a0;
  uStack_290._0_4_ = SUB84(pbStack_200,0);
  uStack_290._4_4_ = (undefined4)((ulonglong)pbStack_200 >> 0x20);
  if (!SBORROW8(0,(longlong)pbStack_208)) {
    puStack_228 = puStack_198;
    uStack_220 = uStack_190;
    uStack_238 = CONCAT44(fStack_1a4,uStack_1a8);
    uStack_230 = CONCAT44(uStack_19c,uStack_1a0);
    puStack_248 = (undefined *)auStack_1b8;
    pplStack_240 = uStack_1b0;
    uStack_258 = CONCAT44(fStack_1c4,fStack_1c8);
    uStack_250 = CONCAT44(uStack_1bc,fStack_1c0);
    uStack_268 = (undefined *)CONCAT44(afStack_1e4[4],afStack_1e4[3]);
    uStack_260 = puStack_1d0;
    uStack_278 = CONCAT44(afStack_1e4[0],uStack_1e8);
    uStack_270 = CONCAT44(afStack_1e4[2],afStack_1e4[1]);
    pplStack_280 = pplStack_1f0;
    fStack_298 = SUB84(pbStack_208,0);
    uStack_294 = (undefined4)((ulonglong)pbStack_208 >> 0x20);
    uStack_f6 = 1;
    uStack_288 = uStack_1f8;
    uVar65 = pdb_140b08d00(&fStack_298,&UNK_14305ff20,0x11,*puStack_340,*puStack_348);
    uVar76 = *param_6;
    uStack_f6 = 1;
    uVar68 = pdb_140df4400(&UNK_14305ff31,0xd);
    uStack_f6 = 1;
    uVar68 = pdb_140a2e580(uVar76,uVar68);
    uStack_f6 = 1;
    uStack_190 = pdb_141990c90(&fStack_338,lVar75,uVar68);
    puStack_198 = puStack_308;
    uStack_1a8 = uStack_318;
    fStack_1a4 = (float)uStack_314;
    uStack_1a0 = uStack_310;
    uStack_19c = uStack_30c;
    fStack_1c8 = fStack_338;
    fStack_1c4 = fStack_334;
    fStack_1c0 = fStack_330;
    uStack_1bc = uStack_32c;
    pbStack_208 = (byte *)((ulonglong)pbStack_208 & 0xffffffff00000000);
    uStack_1f8._0_4_ = (undefined4)_DAT_142e4e650;
    uStack_1f8._4_4_ = (undefined4)((ulonglong)_DAT_142e4e650 >> 0x20);
    pplStack_1f0 = _UNK_142e4e658;
    uStack_1e8 = 0;
    afStack_1e4[0] = 0.0;
    afStack_1e4[1] = 0.0;
    afStack_1e4[2] = 1.0;
    afStack_1e4[3] = 1.0;
    afStack_1e4[4] = 1.0;
    uStack_f6 = 0;
    pbStack_200 = (byte *)uVar65;
    pdb_14161fcb0(&fStack_298,param_7,&pbStack_208,&UNK_14305ff40);
    if (uStack_2f8 != 0) {
      pub_1406abac0(pbStack_2f0,uStack_2f8 << 4,4);
    }
    return;
  }
  fStack_298 = (float)uStack_290;
  uStack_294 = uStack_290._4_4_;
  uStack_290._0_4_ = fVar96;
  uStack_290._4_4_ = uVar98;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143060400,0x2b,&fStack_298,&UNK_1430603a0,&UNK_14305ff08);
}

