// VA 0x140087490, PDB extent 24948 bytes
// tiny_glade::rollercoaster::rollercoaster_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/rollercoaster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::rollercoaster::rollercoaster_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/rollercoaster.rs
   Extent: 24948 */

void pdb_140087490(longlong *param_1,float ***param_2,longlong *param_3,float ***param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  longlong *param_9,longlong *param_10,undefined8 *param_11,longlong *param_12,
                  undefined8 *param_13,longlong *param_14,float ****param_15)

{
  char *pcVar1;
  ulonglong *puVar2;
  byte bVar3;
  byte bVar4;
  float **ppfVar5;
  float **ppfVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  uint uVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 *puVar18;
  undefined1 auVar19 [4];
  undefined1 auVar20 [8];
  float ***pppfVar21;
  undefined1 (*pauVar22) [16];
  char cVar23;
  byte bVar24;
  char cVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  float ****ppppfVar32;
  longlong *plVar33;
  ulonglong uVar34;
  float ***pppfVar35;
  float *pfVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  uint *puVar39;
  float ****ppppfVar40;
  byte *pbVar41;
  ulonglong uVar42;
  ulonglong *arg0;
  float ****ppppfVar43;
  float ***pppfVar44;
  float **ppfVar45;
  float ****ppppfVar46;
  uint uVar47;
  ulonglong uVar48;
  longlong lVar49;
  int *piVar50;
  float ****ppppfVar51;
  uint *puVar52;
  float ***pppfVar53;
  float ****ppppfVar54;
  undefined1 (*pauVar55) [16];
  float ****unaff_RSI;
  undefined *puVar56;
  ulonglong *puVar57;
  float ***pppfVar58;
  undefined *puVar59;
  undefined *puVar60;
  ulonglong uVar61;
  uint uVar62;
  ulonglong uVar63;
  byte *pbVar64;
  ushort uVar65;
  int iVar66;
  longlong lVar67;
  undefined1 (*pauVar68) [16];
  longlong lVar69;
  bool bVar70;
  int iVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  uint uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  float fVar91;
  float fVar92;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar96;
  float fVar97;
  float fVar102;
  float fVar103;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  undefined1 auVar116 [16];
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar130;
  undefined1 auVar129 [16];
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined1 (*pauStack_8b8) [16];
  float ****ppppfStack_8b0;
  undefined1 (*pauStack_8a8) [16];
  float ****ppppfStack_8a0;
  float fStack_898;
  float fStack_894;
  float fStack_890;
  float fStack_88c;
  float fStack_888;
  float fStack_884;
  float fStack_880;
  float fStack_87c;
  float fStack_878;
  float fStack_874;
  float fStack_870;
  float fStack_86c;
  float fStack_868;
  float fStack_864;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined1 auStack_858 [16];
  undefined4 uStack_848;
  uint uStack_844;
  undefined4 uStack_840;
  uint uStack_83c;
  ulonglong uStack_838;
  undefined8 uStack_830;
  float fStack_828;
  float fStack_824;
  undefined4 uStack_820;
  float ****ppppfStack_81c;
  undefined4 uStack_814;
  undefined1 auStack_804 [12];
  undefined8 uStack_7f8;
  undefined1 (*pauStack_7f0) [16];
  undefined8 uStack_7e8;
  undefined1 (*pauStack_7e0) [16];
  float ****ppppfStack_7d8;
  undefined1 (*pauStack_7d0) [16];
  undefined1 auStack_7c8 [8];
  undefined4 uStack_7c0;
  undefined8 uStack_7b8;
  float fStack_7b0;
  undefined4 uStack_7ac;
  undefined1 (*pauStack_7a8) [16];
  float ****ppppfStack_7a0;
  float ****ppppfStack_798;
  float ***pppfStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  float ****ppppfStack_778;
  longlong lStack_770;
  float afStack_640 [3];
  float fStack_634;
  float ****ppppfStack_630;
  undefined8 uStack_618;
  float fStack_610;
  undefined1 auStack_608 [8];
  float fStack_600;
  undefined1 auStack_5f8 [8];
  float fStack_5f0;
  float ****ppppfStack_5e8;
  longlong lStack_5e0;
  longlong lStack_5d8;
  float *pfStack_5d0;
  undefined4 *puStack_5c8;
  undefined4 *puStack_5c0;
  float ***pppfStack_5b8;
  longlong lStack_5b0;
  float ***pppfStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  float ***pppfStack_590;
  undefined4 uStack_588;
  undefined8 uStack_584;
  undefined4 uStack_57c;
  undefined1 auStack_578 [16];
  longlong lStack_568;
  longlong lStack_560;
  longlong lStack_558;
  float ***pppfStack_550;
  ulonglong uStack_548;
  char *pcStack_540;
  longlong *plStack_538;
  float **ppfStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined1 auStack_518 [4];
  undefined1 auStack_514 [8];
  float fStack_50c;
  undefined1 (*pauStack_508) [16];
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined8 uStack_4f0;
  undefined1 auStack_4e8 [16];
  float ****ppppfStack_4d8;
  int iStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  float ****ppppfStack_4c0;
  float ****ppppfStack_4b8;
  float ***pppfStack_4b0;
  float ***pppfStack_4a8;
  float ***apppfStack_4a0 [7];
  float **appfStack_468 [7];
  float **appfStack_430 [18];
  undefined8 uStack_3a0;
  int iStack_390;
  longlong lStack_358;
  byte *pbStack_350;
  longlong lStack_348;
  float fStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  uint uStack_328;
  int iStack_324;
  float fStack_320;
  float fStack_31c;
  longlong lStack_318;
  undefined8 uStack_310;
  longlong lStack_308;
  undefined8 uStack_300;
  longlong lStack_2f8;
  float ***pppfStack_2f0;
  longlong lStack_2e8;
  longlong lStack_2e0;
  float ****ppppfStack_2d8;
  float ****ppppfStack_2d0;
  undefined1 (*pauStack_2c8) [16];
  float ****ppppfStack_2c0;
  float ****ppppfStack_2b8;
  float ***pppfStack_2b0;
  float ***pppfStack_2a8;
  float ***pppfStack_2a0;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  undefined8 uStack_288;
  float fStack_280;
  undefined8 uStack_278;
  float fStack_270;
  float fStack_26c;
  undefined8 uStack_268;
  float fStack_260;
  float fStack_25c;
  longlong lStack_250;
  byte *pbStack_248;
  longlong lStack_240;
  float ****ppppfStack_238;
  float ****ppppfStack_230;
  undefined1 auStack_228 [8];
  undefined8 uStack_220;
  undefined1 auStack_218 [16];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  float ****appppfStack_1f0 [2];
  float ***pppfStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  float fStack_1ac;
  longlong lStack_1a8;
  float ****ppppfStack_1a0;
  longlong lStack_198;
  byte *pbStack_190;
  float ****ppppfStack_188;
  undefined8 uStack_180;
  float ****ppppfStack_178;
  longlong lStack_170;
  undefined1 auStack_168 [16];
  longlong *plStack_158;
  float ***pppfStack_150;
  undefined1 (*pauStack_148) [16];
  float ****ppppfStack_140;
  float fStack_134;
  float ****ppppfStack_130;
  float ****ppppfStack_128;
  float ****ppppfStack_120;
  float ***pppfStack_118;
  longlong *plStack_110;
  undefined1 uStack_102;
  undefined1 uStack_101;
  float ****ppppfStack_100;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined1 auVar88 [16];
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_8f8 = *param_7;
  uStack_8f0 = param_7[1];
  uStack_8e8 = param_7[2];
  uStack_8e0 = param_7[3];
  uStack_8d8 = param_7[4];
  uStack_8d0 = param_7[5];
  uStack_8c8 = *(undefined4 *)(param_7 + 6);
  uStack_8c4 = *(undefined4 *)((longlong)param_7 + 0x34);
  uStack_8c0 = *(undefined4 *)(param_7 + 7);
  uStack_8bc = *(undefined4 *)((longlong)param_7 + 0x3c);
  lVar67 = param_7[8];
  uStack_598 = param_7[0xc];
  lStack_170 = param_7[0x10];
  uStack_528 = param_7[0x14];
  lStack_2e8 = param_7[0x18];
  uStack_520 = param_7[0x1c];
  pcStack_540 = (char *)param_7[0x20];
  uStack_5a0 = param_7[0x24];
  pppfVar53 = param_4;
  plStack_538 = param_3;
  pppfStack_2f0 = param_2;
  plStack_110 = param_1;
  cVar23 = pdb_140e94b40();
  pppfStack_590 = param_4;
  if (cVar23 == '\0') {
    lStack_318 = 0;
  }
  else {
    unaff_RSI = (float ****)0x2f;
    lVar30 = pdb_14008d810(0x2f);
    puVar56 = &UNK_142e380fb;
    pppfVar58 = pppfVar53;
    if (lVar30 == 1) {
      if ((float ***)0x2f < param_2) {
LAB_14008bd6e:
        pdb_142dc8070(&UNK_142e380fb,0x2f,0);
LAB_14008bd8e:
        pdb_142dc8070(&UNK_142e380fb,0x2f);
LAB_14008bdb1:
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142e37fd0);
      }
      pppfVar58 = param_2;
      uVar31 = pdb_14008d810(param_2);
      if ((uVar31 & 1) != 0) {
        if (0x2f < (longlong)param_2 + 2U) goto LAB_14008bd8e;
        unaff_RSI = (float ****)(0x2d - (longlong)param_2);
        puVar56 = &UNK_142e380fd + (longlong)param_2;
      }
    }
    puVar59 = &UNK_142e37e94;
    pppfVar53 = (float ***)&UNK_142e37e6e;
    do {
      bVar24 = puVar59[-1];
      uVar26 = (uint)(char)bVar24;
      if ((char)bVar24 < '\0') {
        bVar3 = puVar59[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar59[-3];
          if ((char)bVar4 < -0x40) {
            pbVar64 = puVar59 + -4;
            puVar59 = puVar59 + -4;
            uVar26 = (*pbVar64 & 7) << 6;
            pppfVar58 = (float ***)(ulonglong)uVar26;
            uVar26 = bVar4 & 0x3f | uVar26;
          }
          else {
            puVar59 = puVar59 + -3;
            uVar26 = bVar4 & 0xf;
          }
          uVar26 = bVar3 & 0x3f | uVar26 << 6;
        }
        else {
          puVar59 = puVar59 + -2;
          uVar26 = bVar3 & 0x1f;
        }
        uVar26 = (uint)(bVar24 & 0x3f) | uVar26 << 6;
        if (uVar26 != 0x5c) goto LAB_140087694;
LAB_1400876ad:
        puVar60 = puVar59 + -0x142e37e6d;
        if (puVar60 < (undefined *)0x27) {
          lVar30 = 0x26 - (longlong)puVar60;
          pppfVar53 = (float ***)(puVar59 + 1);
          goto LAB_1400876d0;
        }
        pdb_142dc8070(&UNK_142e37e6e,0x26,puVar60,0x26,&UNK_142e38190);
        goto LAB_14008bd6e;
      }
      puVar59 = puVar59 + -1;
      if (uVar26 == 0x5c) goto LAB_1400876ad;
LAB_140087694:
      if (uVar26 == 0x2f) goto LAB_1400876ad;
    } while (puVar59 != &UNK_142e37e6e);
    lVar30 = 0x26;
LAB_1400876d0:
    ppppfVar32 = (float ****)pdb_140e97000();
    if (*(char *)(ppppfVar32 + 0xd) != '\x01') {
      ppppfVar32 = (float ****)pdb_142d7de90(ppppfVar32,0);
      if (ppppfVar32 == (float ****)0x0) {
LAB_14008b5bd:
        pdb_142dc7890(&UNK_142f3dc40);
LAB_14008b5ca:
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pppfVar58);
      }
    }
    if (*ppppfVar32 != (float ***)0x0) goto LAB_14008b4a6;
    *ppppfVar32 = (float ***)0xffffffffffffffff;
    ppppfStack_120 = ppppfVar32;
    uStack_310 = pdb_140e94f10(ppppfVar32 + 1,puVar56,unaff_RSI,pppfVar53,lVar30,1,0);
    *ppppfStack_120 = (float ***)((longlong)*ppppfStack_120 + 1);
    lStack_318 = 1;
  }
  cVar23 = pdb_14093a830(*param_6);
  plVar33 = plStack_110;
  fStack_134 = 0.0;
  if (cVar23 == '\0') {
    fStack_134 = *(float *)(lVar67 + 0x28);
  }
  if (!SBORROW8(0,*plStack_110)) {
    fStack_1ac = *(float *)((longlong)pppfStack_2f0 + 0x1c);
    ppfStack_530 = pppfStack_2f0[2];
    *(float *)ppfStack_530 = fStack_1ac;
    pauStack_148 = (undefined1 (*) [16])*pppfStack_2f0;
    *(undefined1 *)((longlong)pauStack_148[0x34] + 4) = 1;
    fVar111 = _DAT_142e37844 * fStack_134;
    lVar67 = *param_5;
    fVar113 = *(float *)(lVar67 + 0x160) / fVar111;
    if (0x7f7fffff < (uint)ABS(fVar113)) {
      fVar113 = 0.0;
    }
    uVar26 = *(uint *)(lVar67 + 0x164);
    pppfVar53 = (float ***)plStack_110[2];
    pppfStack_150 = pppfVar53;
    if (pppfVar53 == (float ***)0x0) {
      pbStack_190 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      pbStack_190 = pub_1406abae0((ulonglong)pppfVar53,1);
      if (pbStack_190 == (byte *)0x0) {
        pdb_142dc7e2a(1,pppfStack_150);
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
    }
    uVar17 = _UNK_142e3782c;
    uVar28 = _UNK_142e37828;
    uVar47 = _UNK_142e37824;
    uVar75 = _DAT_142e37820;
    fVar74 = _DAT_142e36f28;
    fVar72 = _DAT_142e36f34;
    if (_DAT_142e36f34 <= fVar113) {
      fVar72 = fVar113;
    }
    fVar113 = _DAT_142e36f28;
    if (fVar72 <= _DAT_142e36f28) {
      fVar113 = fVar72;
    }
    _auStack_7c8 = ZEXT416((uint)fVar113);
    fVar111 = (float)(uVar26 ^ _DAT_142e37820) / fVar111;
    if (0x7f7fffff < (uint)ABS(fVar111)) {
      fVar111 = 0.0;
    }
    fVar113 = _DAT_142e36f34;
    if (_DAT_142e36f34 <= fVar111) {
      fVar113 = fVar111;
    }
    fVar111 = _DAT_142e36f28;
    if (fVar113 <= _DAT_142e36f28) {
      fVar111 = fVar113;
    }
    *(float *)(plVar33 + 9) = *(float *)(plVar33 + 9) + fStack_134;
    auStack_858 = ZEXT416((uint)fVar111);
    if (fVar111 <= 0.0) {
      auStack_858 = ZEXT816(0) << 0x20;
    }
    auVar77._0_4_ = (float)((uint)fVar111 ^ uVar75);
    auVar77._4_4_ = uVar47;
    auVar77._8_4_ = uVar28;
    auVar77._12_4_ = uVar17;
    if (auVar77._0_4_ <= 0.0) {
      auVar99._12_4_ = 0;
      auVar99._0_12_ = auVar77._4_12_;
      auVar77 = auVar99 << 0x20;
    }
    fVar111 = auVar77._0_4_;
    auVar76._4_12_ = auVar77._4_12_;
    auVar76._0_4_ = (fVar111 + fVar111 + _DAT_142e37848) * _DAT_142e3784c;
    lStack_2e0 = lVar67;
    fStack_320 = (float)pub_142e32a20(auVar76._0_8_);
    fVar111 = (fVar74 - fVar111) + (fVar74 - fVar111);
    lStack_568 = lStack_2e8 + 0x18;
    lVar67 = *param_9;
    lVar30 = param_9[1];
    uStack_330 = *(undefined4 *)((longlong)param_9 + 0x14);
    fStack_888 = (float)auStack_7c8._0_4_ * _DAT_142e37850 * _DAT_142e37860;
    fStack_884 = (float)(uVar75 & auStack_7c8._0_4_) * _UNK_142e37854 * _UNK_142e37864;
    fStack_880 = (float)auStack_7c8._4_4_ * _UNK_142e37858 * _UNK_142e37868;
    fStack_87c = (float)(uVar47 & auStack_7c8._4_4_) * _UNK_142e3785c * _UNK_142e3786c;
    lStack_2f8 = *param_10;
    lStack_308 = param_10[1];
    ppppfStack_130 = (float ****)*param_8;
    uStack_32c = *(undefined4 *)((longlong)param_14 + 0x1c);
    lStack_558 = *param_14;
    puStack_5c0 = (undefined4 *)param_14[2];
    uStack_328 = *(uint *)((longlong)param_15 + 0x1c);
    pppfVar53 = *param_15;
    pppfStack_5b8 = param_15[2];
    fStack_868 = (float)auStack_7c8._0_4_;
    fStack_864 = (float)auStack_7c8._0_4_;
    uStack_860 = uStack_7c0;
    uStack_85c = uStack_7c0;
    ppppfStack_120 = (float ****)param_8[1];
    ppppfStack_140 =
         (float ****)CONCAT44(ppppfStack_140._4_4_,*(undefined4 *)((longlong)param_8 + 0x14));
    lStack_5b0 = lStack_558 + 0x20;
    pppfStack_5a8 = pppfVar53 + 4;
    uStack_548 = 0;
    uStack_300 = 0;
    ppppfStack_178 = (float ****)CONCAT44(ppppfStack_178._4_4_,fVar111);
    fVar113 = _DAT_142e37870;
    fStack_878 = fStack_884;
    fStack_874 = fStack_884;
    fStack_870 = fStack_87c;
    fStack_86c = fStack_87c;
    lStack_5e0 = lVar67;
    lStack_5d8 = lVar30;
    pppfStack_550 = pppfVar53;
    plStack_158 = plVar33 + 3;
LAB_140087a57:
    if ((uStack_548 < 1000) && (fVar113 <= *(float *)(plStack_110 + 9))) {
      *(float *)(plStack_110 + 9) = *(float *)(plStack_110 + 9) + _DAT_142e3784c;
      fStack_334 = *(float *)(plStack_110 + 8);
      auStack_578 = ZEXT416(*(uint *)((longlong)plStack_110 + 0x44));
      pdb_140decda0(&uStack_7b8,plStack_158,
                    (float)(ulonglong)plStack_110[7] * _DAT_142e37874 + fStack_334);
      fVar74 = uStack_7b8._4_4_;
      fVar112 = uStack_7b8._4_4_ * _DAT_142e3784c * _DAT_142e37878 +
                *(float *)((longlong)plStack_110 + 0x44);
      fVar72 = fVar112;
      if (fVar112 <= _DAT_142e37830) {
        fVar72 = _DAT_142e37830;
      }
      *(float *)((longlong)plStack_110 + 0x44) = fVar72;
      bVar24 = pdb_1408ff980(uStack_5a0);
      fVar72 = *(float *)((longlong)plStack_110 + 0x44);
      if (0.0 < (float)bVar24 + (float)auStack_858._0_4_) {
        fVar72 = (float)pdb_140de93b0();
        *(float *)((longlong)plStack_110 + 0x44) = fVar72;
      }
      fVar82 = _DAT_142e37884;
      bVar70 = _DAT_142e37884 < fVar111;
      fVar72 = fVar72 * fStack_320;
      *(float *)((longlong)plStack_110 + 0x44) = fVar72;
      if (bVar70) {
        ppppfStack_2d8 = (float ****)CONCAT44(ppppfStack_2d8._4_4_,fVar111);
        uStack_208 = (float ****)CONCAT44(uStack_208._4_4_,0x42480000);
        stack0xfffffffffffffaf0 = (float ****)pdb_140f705d0;
        _auStack_518 = (float ****)&ppppfStack_2d8;
        pauStack_508 = (undefined1 (*) [16])&uStack_208;
        uStack_500 = 0x40f705d0;
        uStack_4fc = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_142e37b60,auStack_518,&UNK_142e37c00);
      }
      fVar73 = fVar111;
      if (fVar111 <= fVar72) {
        fVar73 = fVar72;
      }
      if (fVar73 <= fVar82) {
        fVar82 = fVar73;
      }
      *(float *)((longlong)plStack_110 + 0x44) = fVar82;
      pdb_140de9fd0();
      fVar73 = (float)pdb_140de93b0();
      *(float *)((longlong)plStack_110 + 0x44) = fVar73;
      fVar72 = *(float *)(plStack_110 + 6);
      fVar82 = *(float *)((longlong)plStack_110 + 0x34);
      if (fVar82 < fVar72) {
        ppppfStack_2d8 = (float ****)CONCAT44(ppppfStack_2d8._4_4_,fVar72);
        uStack_208 = (float ****)CONCAT44(uStack_208._4_4_,fVar82);
        stack0xfffffffffffffaf0 = (float ****)pdb_140f705d0;
        _auStack_518 = (float ****)&ppppfStack_2d8;
        pauStack_508 = (undefined1 (*) [16])&uStack_208;
        uStack_500 = 0x40f705d0;
        uStack_4fc = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_142e37b60,auStack_518,&UNK_142e37c00);
      }
      uStack_548 = uStack_548 + 1;
      uStack_300 = CONCAT71((int7)((ulonglong)uStack_300 >> 8),
                            (byte)uStack_300 |
                            -(fVar112 < _DAT_142e37830 && _DAT_142e3787c < fVar74));
      fVar74 = fVar73 * fVar113 + *(float *)(plStack_110 + 8);
      if (fVar72 <= fVar74) {
        fVar72 = fVar74;
      }
      if (fVar72 <= fVar82) {
        fVar82 = fVar72;
      }
      *(float *)(plStack_110 + 8) = fVar82;
      ppppfStack_5e8 = (float ****)plStack_110[1] + plStack_110[2] * 0x38;
      fStack_898 = (float)auStack_578._0_4_;
      fStack_894 = (float)auStack_578._0_4_;
      fStack_890 = (float)auStack_578._8_4_;
      fStack_88c = (float)auStack_578._8_4_;
      pppfVar58 = (float ***)0x0;
      ppppfVar32 = (float ****)plStack_110[1];
LAB_140087d45:
      if (ppppfVar32 != ppppfStack_5e8) {
        fVar111 = *(float *)(ppppfVar32 + 0x31);
        pppfStack_118 = pppfVar58;
        ppppfStack_100 = ppppfVar32;
        plVar33 = (longlong *)pdb_1406d0830();
        if (plVar33[3] == 0) {
          register0x00000008 = (float ****)0x0;
        }
        else {
          auVar77 = *(undefined1 (*) [16])(plVar33 + 4);
          uStack_4f8 = auVar77._0_4_;
          uStack_4f4 = auVar77._4_4_;
          uStack_4f0._0_4_ = auVar77._8_4_;
          uStack_4f0._4_4_ = auVar77._12_4_;
          auVar83._0_8_ = auVar77._0_8_;
          auVar83._8_4_ = uStack_4f8;
          auVar83._12_4_ = uStack_4f4;
          _auStack_518 = auVar83 ^ _DAT_142e378a0;
          auVar84._0_8_ = auVar77._8_8_;
          auVar84._8_4_ = (undefined4)uStack_4f0;
          auVar84._12_4_ = uStack_4f0._4_4_;
          auVar84 = auVar84 ^ _DAT_142e378b0;
          pauStack_508 = auVar84._0_8_;
          uStack_500 = auVar84._8_4_;
          uStack_4fc = auVar84._12_4_;
          auStack_4e8 = (undefined1  [16])0x0;
          ppppfStack_4d8 = (float ****)0x0;
          uStack_7b8._0_4_ = fVar111;
          pdb_1400b0640(auStack_518,&uStack_7b8,4);
          uVar63 = auStack_4e8._0_8_ << 0x38 | auStack_4e8._8_8_;
          uVar31 = CONCAT44(uStack_4fc,uStack_500) ^ uVar63;
          uVar61 = (longlong)_auStack_518 + (longlong)pauStack_508;
          uVar42 = ((longlong)pauStack_508 << 0xd | (ulonglong)pauStack_508 >> 0x33) ^ uVar61;
          uVar34 = (uVar31 << 0x10 | uVar31 >> 0x30) ^ (longlong)stack0xfffffffffffffaf0 + uVar31;
          uVar48 = (longlong)stack0xfffffffffffffaf0 + uVar31 + uVar42;
          uVar61 = (uVar61 << 0x20 | uVar61 >> 0x20) + uVar34;
          uVar42 = (uVar42 << 0x11 | uVar42 >> 0x2f) ^ uVar48;
          uVar31 = (uVar34 << 0x15 | uVar34 >> 0x2b) ^ uVar61;
          uVar61 = (uVar61 ^ uVar63) + uVar42;
          uVar48 = ((uVar48 << 0x20 | uVar48 >> 0x20) ^ 0xff) + uVar31;
          uVar34 = (uVar42 << 0xd | uVar42 >> 0x33) ^ uVar61;
          uVar31 = (uVar31 << 0x10 | uVar31 >> 0x30) ^ uVar48;
          uVar48 = uVar48 + uVar34;
          uVar61 = (uVar61 << 0x20 | uVar61 >> 0x20) + uVar31;
          uVar34 = (uVar34 << 0x11 | uVar34 >> 0x2f) ^ uVar48;
          uVar31 = (uVar31 << 0x15 | uVar31 >> 0x2b) ^ uVar61;
          uVar61 = uVar61 + uVar34;
          uVar42 = (uVar48 << 0x20 | uVar48 >> 0x20) + uVar31;
          uVar34 = (uVar34 << 0xd | uVar34 >> 0x33) ^ uVar61;
          uVar31 = (uVar31 << 0x10 | uVar31 >> 0x30) ^ uVar42;
          uVar42 = uVar42 + uVar34;
          uVar48 = (uVar61 << 0x20 | uVar61 >> 0x20) + uVar31;
          uVar34 = (uVar34 << 0x11 | uVar34 >> 0x2f) ^ uVar42;
          uVar31 = (uVar31 << 0x15 | uVar31 >> 0x2b) ^ uVar48;
          uVar42 = (uVar42 << 0x20 | uVar42 >> 0x20) + uVar31;
          uVar34 = (uVar34 << 0xd | uVar34 >> 0x33) ^ uVar48 + uVar34;
          uVar31 = (uVar31 << 0x10 | uVar31 >> 0x30) ^ uVar42;
          uVar42 = uVar42 + uVar34;
          uVar42 = (uVar42 << 0x20 | uVar42 >> 0x20) ^ (uVar34 << 0x11 | uVar34 >> 0x2f) ^
                   (uVar31 << 0x15 | uVar31 >> 0x2b) ^ uVar42;
          lVar69 = *plVar33;
          bVar24 = (byte)(uVar42 >> 0x39);
          auVar77 = ZEXT216(CONCAT11(bVar24,bVar24));
          auVar77 = pshuflw(auVar77,auVar77,0);
          lVar49 = 0;
          while( true ) {
            uVar42 = uVar42 & plVar33[1];
            pcVar1 = (char *)(lVar69 + uVar42);
            auVar93[0] = -(*pcVar1 == auVar77[0]);
            auVar93[1] = -(pcVar1[1] == auVar77[1]);
            auVar93[2] = -(pcVar1[2] == auVar77[2]);
            auVar93[3] = -(pcVar1[3] == auVar77[3]);
            auVar93[4] = -(pcVar1[4] == auVar77[4]);
            auVar93[5] = -(pcVar1[5] == auVar77[5]);
            auVar93[6] = -(pcVar1[6] == auVar77[6]);
            auVar93[7] = -(pcVar1[7] == auVar77[7]);
            auVar93[8] = -(pcVar1[8] == auVar77[0]);
            auVar93[9] = -(pcVar1[9] == auVar77[1]);
            auVar93[10] = -(pcVar1[10] == auVar77[2]);
            auVar93[0xb] = -(pcVar1[0xb] == auVar77[3]);
            auVar93[0xc] = -(pcVar1[0xc] == auVar77[4]);
            auVar93[0xd] = -(pcVar1[0xd] == auVar77[5]);
            auVar93[0xe] = -(pcVar1[0xe] == auVar77[6]);
            auVar93[0xf] = -(pcVar1[0xf] == auVar77[7]);
            uVar65 = (ushort)(SUB161(auVar93 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar93 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar93 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar93 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar93 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar93 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar93 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar93 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar93 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar93 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar93 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar93 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar93 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar93 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar93 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar93[0xf] >> 7) << 0xf;
            uVar26 = (uint)uVar65;
            while (uVar65 != 0) {
              uVar75 = 0;
              for (uVar47 = uVar26; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
                uVar75 = uVar75 + 1;
              }
              uVar31 = uVar75 + uVar42 & plVar33[1];
              if (fVar111 == *(float *)(lVar69 + -0x28 + uVar31 * -0x28)) {
                lVar69 = lVar69 + uVar31 * -0x28;
                goto LAB_140087f92;
              }
              uVar65 = (ushort)(uVar26 - 1) & (ushort)uVar26;
              uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar65);
            }
            auVar85[0] = -(*pcVar1 == -1);
            auVar85[1] = -(pcVar1[1] == -1);
            auVar85[2] = -(pcVar1[2] == -1);
            auVar85[3] = -(pcVar1[3] == -1);
            auVar85[4] = -(pcVar1[4] == -1);
            auVar85[5] = -(pcVar1[5] == -1);
            auVar85[6] = -(pcVar1[6] == -1);
            auVar85[7] = -(pcVar1[7] == -1);
            auVar85[8] = -(pcVar1[8] == -1);
            auVar85[9] = -(pcVar1[9] == -1);
            auVar85[10] = -(pcVar1[10] == -1);
            auVar85[0xb] = -(pcVar1[0xb] == -1);
            auVar85[0xc] = -(pcVar1[0xc] == -1);
            auVar85[0xd] = -(pcVar1[0xd] == -1);
            auVar85[0xe] = -(pcVar1[0xe] == -1);
            auVar85[0xf] = -(pcVar1[0xf] == -1);
            if ((((((((((((((((SUB161(auVar85 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar85 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar85 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar85 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar85 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar85 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar85 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar85 >> 0x3f,0) & 1) != 0) || (SUB161(auVar85 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar85 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar85 >> 0x57,0) & 1) != 0) || (SUB161(auVar85 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar85 >> 0x67,0) & 1) != 0) || (SUB161(auVar85 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar85 >> 0x77,0) & 1) != 0) || auVar85[0xf] < '\0') break;
            uVar42 = uVar42 + lVar49 + 0x10;
            lVar49 = lVar49 + 0x10;
          }
          lVar69 = 0;
LAB_140087f92:
          unique0x00008e00 = (float ****)(lVar69 + -0x20);
          if (lVar69 == 0) {
            unique0x10005a2c = (float ****)0x0;
          }
        }
        _auStack_518 = (float ****)0x1;
        pauStack_508 = (undefined1 (*) [16])0x0;
        uStack_4f8 = 0;
        uStack_4f4 = 0;
        pdb_14017dd40(&uStack_7b8,auStack_518);
        plVar33 = plStack_158;
        fVar111 = _DAT_142e36f28;
        pppfVar53 = ppppfStack_100[0x30];
        uVar31 = (ulonglong)ppppfStack_128 >> 0x20;
        ppppfStack_128 = (float ****)((ulonglong)ppppfStack_128 & 0xffffffff00000000);
        if ((((ulonglong)pppfVar53 & 0xffffffff) != 0) &&
           (uVar34 = (ulonglong)pppfVar53 & 0xffffffff ^ 0xffffffff,
           uVar34 < *(ulonglong *)(lVar30 + 0x10))) {
          piVar50 = (int *)(uVar34 * 0x18 + *(longlong *)(lVar30 + 8));
          iVar71 = (int)((ulonglong)pppfVar53 >> 0x20);
          if ((piVar50[4] == iVar71) &&
             (((*piVar50 != 0 &&
               (uVar34 = *(ulonglong *)(piVar50 + 2),
               (uVar34 & 0xffffffff) < *(ulonglong *)(lVar67 + 0x38))) &&
              ((*(ulonglong *)(*(longlong *)(lVar67 + 0x28) + (uVar34 >> 6 & 0x3ffffff) * 8) >>
                (uVar34 & 0x3f) & 1) != 0)))) {
            uVar34 = uVar34 >> 0x20;
            lVar30 = *(longlong *)(lVar30 + 0x1a0);
            lVar69 = *(longlong *)(lVar30 + 0x18 + uVar34 * 0x48);
            lVar49 = *(longlong *)(lVar30 + 0x38 + uVar34 * 0x48);
            if ((*(ulonglong *)(lVar67 + 0x118) < *(ulonglong *)(lVar30 + 0x40 + uVar34 * 0x48)) &&
               (uVar34 = *(ulonglong *)(lVar49 + *(ulonglong *)(lVar67 + 0x118) * 8), uVar34 != 0))
            {
              lStack_560 = *(longlong *)(lVar69 + 0x10 + ~uVar34 * 0x30);
            }
            else {
              lStack_560 = 0;
            }
            lVar67 = ~*(ulonglong *)(lVar49 + *(longlong *)(lVar67 + 0x110) * 8) * 0x30;
            uVar34 = (ulonglong)(uint)~piVar50[1];
            pfStack_5d0 = (float *)(uVar34 * 0x30 + *(longlong *)(lVar69 + 0x10 + lVar67));
            puStack_5c8 = (undefined4 *)(*(longlong *)(lVar69 + 0x28 + lVar67) + uVar34 * 4);
            lStack_560 = uVar34 * 0x68 + lStack_560;
            ppppfStack_128 = (float ****)CONCAT44((int)uVar31,(int)pppfVar53);
            iStack_324 = iVar71;
          }
        }
        pppfVar53 = (float ***)plStack_110[7];
        pdb_140dece30(&uStack_288,plStack_158);
        pdb_140decda0(&fStack_634,plVar33);
        pdb_140decda0(afStack_640,plVar33);
        auVar77 = _auStack_518;
        ppppfVar32 = ppppfStack_630;
        uVar38 = afStack_640._4_8_;
        fVar123 = afStack_640[0] * (float)auStack_578._0_4_;
        auStack_168 = ZEXT416((uint)fStack_634);
        fVar91 = SUB84(ppppfStack_630,0);
        fVar92 = (float)((ulonglong)ppppfStack_630 >> 0x20);
        fVar111 = fVar111 / SQRT(fVar92 * fVar92 + fStack_634 * fStack_634 + fVar91 * fVar91);
        auStack_514._4_4_ = fVar111 * fVar92;
        auStack_514._0_4_ = fVar111 * fVar91;
        fStack_50c = auVar77._12_4_;
        auStack_518 = (undefined1  [4])(fStack_634 * fVar111);
        pdb_14052dc80(&uStack_208,auStack_518);
        fVar74 = _UNK_142e37854;
        fVar72 = _DAT_142e37850;
        fVar114 = (float)uVar38 * fStack_898;
        fVar117 = SUB84(uVar38,4) * fStack_894;
        fStack_260 = fStack_890 * 0.0;
        fVar120 = fStack_88c * 0.0;
        fVar111 = *(float *)((longlong)plStack_110 + 0x44);
        fVar112 = (fVar117 - fVar92 * fVar111) * _DAT_142e378c0;
        ppppfStack_188 = ppppfVar32;
        uStack_180 = 0;
        fVar82 = SUB84(ppppfStack_100[0x33],0) +
                 (fVar123 - fVar111 * (float)auStack_168._0_4_) * _DAT_142e378d0 * _DAT_142e37850;
        fVar73 = (float)((ulonglong)ppppfStack_100[0x33] >> 0x20) +
                 (fVar114 - fVar111 * fVar91) * _UNK_142e378d4 * _UNK_142e37854;
        pppfVar58 = (float ***)CONCAT44(fVar73,fVar82);
        ppppfStack_100[0x33] = pppfVar58;
        fVar111 = fVar112 * fVar113 + *(float *)(ppppfStack_100 + 0x34);
        *(float *)(ppppfStack_100 + 0x34) = fVar111;
        uVar27 = _UNK_142e377ec;
        uVar47 = _UNK_142e377e8;
        uVar75 = _UNK_142e377e4;
        uVar26 = _DAT_142e377e0;
        if (pppfStack_118 == pppfVar53) {
          fVar106 = (float)uStack_200 * (float)uStack_200;
          fVar107 = uStack_200._4_4_ * uStack_200._4_4_;
          fVar109 = uStack_208._4_4_ * uStack_208._4_4_ + (float)uStack_208 * (float)uStack_208;
          fVar96 = (float)uStack_200 * 0.0 +
                   uStack_208._4_4_ * 0.0 + (float)uStack_208 * _DAT_142e36f28;
          fVar96 = fVar96 + fVar96;
          fVar112 = uStack_200._4_4_ + uStack_200._4_4_;
          fVar113 = (fVar112 * ((float)uStack_208 * _UNK_142e378e8 -
                               uStack_208._4_4_ * _UNK_142e378f8) +
                    fVar96 * (float)uStack_200 + (fVar107 - (fVar109 + fVar106)) * 0.0) *
                    (float)auStack_7c8._0_4_ * fVar113 * _DAT_142e37900;
          pppfVar58 = (float ***)
                      CONCAT44(fVar73 + fStack_864 *
                                        (fVar112 * ((float)uStack_200 * _UNK_142e378e4 -
                                                   (float)uStack_208 * _UNK_142e378f4) +
                                        fVar96 * uStack_208._4_4_ +
                                        (fVar107 - (fVar109 + fVar106)) * 0.0) * fVar74 *
                                        _UNK_142e37914,
                               fVar82 + fStack_868 *
                                        (fVar112 * (uStack_208._4_4_ * _DAT_142e378e0 -
                                                   (float)uStack_200 * _DAT_142e378f0) +
                                        fVar96 * (float)uStack_208 +
                                        (fVar107 - (fVar109 + fVar106)) * _DAT_142e36f28) * fVar72 *
                                        _DAT_142e37910);
          ppppfStack_100[0x33] = pppfVar58;
          fVar111 = fVar111 + fVar113;
          *(float *)(ppppfStack_100 + 0x34) = fVar111;
        }
        fVar113 = _DAT_142e3793c;
        ppppfStack_100[0x33] =
             (float ***)
             CONCAT44((float)((ulonglong)pppfVar58 >> 0x20) * _UNK_142e37924,
                      SUB84(pppfVar58,0) * _DAT_142e37920);
        *(float *)(ppppfStack_100 + 0x34) = fVar111 * _DAT_142e37930;
        auVar77 = _DAT_142e37950;
        fVar72 = _DAT_142e36f28;
        fVar111 = *(float *)((longlong)ppppfStack_100 + 0x1a4);
        fVar74 = (float)((uint)fVar111 & uVar26);
        fVar112 = 0.0;
        if (_DAT_142e37934 <= fVar74) {
          bVar70 = _DAT_142e37938 < *(float *)((longlong)ppppfStack_100 + 0x1bc);
        }
        else {
          bVar70 = false;
        }
        if ((uint)ppppfStack_128 != 0) {
          fVar113 = (((*(float *)(lStack_560 + 0x3c) + *(float *)(lStack_560 + 0x3c)) *
                      *(float *)(lStack_560 + 0x40) * *(float *)(lStack_560 + 0x44)) /
                    _DAT_142e37940) * fVar113;
        }
        fVar82 = *(float *)(ppppfStack_100 + 0x35);
        fVar106 = 0.0;
        fVar73 = *(float *)((longlong)ppppfStack_100 + 0x1ac);
        fVar107 = 0.0;
        fVar109 = 0.0;
        uStack_268 = (float ****)CONCAT44(fVar117,fVar114);
        fVar97 = (float)DAT_142e37950;
        fVar102 = DAT_142e37950._4_4_;
        fVar103 = DAT_142e37950._8_4_;
        fVar96 = DAT_142e37950._12_4_;
        if (pppfStack_118 == pppfVar53) {
          auVar98._0_4_ = fVar97 - fVar74;
          auVar98._4_4_ = fVar102 - (float)((uint)fVar82 & uVar26);
          auVar98._8_4_ = fVar103 - 0.0;
          auVar98._12_4_ = fVar96 - 0.0;
          fVar74 = _DAT_142e36f28 - (float)((uint)fVar73 & uVar26);
          if (fVar74 <= 0.0) {
            fVar74 = 0.0;
          }
          if (_DAT_142e36f28 <= fVar74) {
            fVar74 = _DAT_142e36f28;
          }
          auVar99 = maxps(auVar98,ZEXT816(0));
          auVar99 = minps(auVar99,_DAT_142e37950);
          fVar111 = fVar111 + auVar99._0_4_ * fStack_888;
          fVar82 = fVar82 + auVar99._4_4_ * fStack_884;
          fVar107 = auVar99._8_4_ * fStack_880 + 0.0;
          fVar109 = auVar99._12_4_ * fStack_87c + 0.0;
          *(float *)((longlong)ppppfStack_100 + 0x1a4) = fVar111;
          *(float *)(ppppfStack_100 + 0x35) = fVar82;
          fVar73 = fVar73 + fVar74 * fStack_878;
          *(float *)((longlong)ppppfStack_100 + 0x1ac) = fVar73;
          fVar74 = (float)((uint)fVar111 & uVar26);
          fVar112 = (float)((uint)fVar82 & uVar75);
          fVar106 = fVar82;
        }
        fVar115 = (float)((uint)(float)uStack_208 ^ (uint)_DAT_142e377a0);
        fVar118 = (float)((uint)uStack_208._4_4_ ^ _UNK_142e377a4);
        fVar119 = (float)((uint)(float)uStack_200 ^ (uint)_UNK_142e377a8);
        fVar121 = (float)((uint)uStack_200._4_4_ ^ _UNK_142e377ac);
        fVar105 = *(float *)((longlong)plStack_110 + 0x44);
        fVar110 = (fVar123 - (float)auStack_168._0_4_ * fVar105) * fVar113 * _DAT_142e37870;
        fVar104 = fVar113 * (fVar114 - fVar105 * fVar91) * _DAT_142e37850;
        fVar105 = fVar113 * (fVar117 - fVar105 * fVar92) * _UNK_142e37854;
        fVar108 = (fVar120 - 0.0) * 0.0 * _UNK_142e3785c;
        fVar126 = fVar119 * fVar119;
        fVar128 = fVar121 * fVar121;
        fVar113 = fVar118 * fVar118 + fVar115 * fVar115;
        fVar124 = fVar128 - (fVar113 + fVar126);
        fVar125 = fVar128 - (fVar113 + fVar126);
        fVar127 = fVar128 - (fVar113 + fVar126);
        fVar128 = fVar128 - (fVar113 + fVar126);
        fVar122 = fVar105 * fVar119 + fVar104 * fVar118 + fVar110 * fVar115;
        fVar122 = fVar122 + fVar122;
        uStack_278 = uStack_208;
        fStack_270 = (float)uStack_200;
        fStack_26c = uStack_200._4_4_;
        fVar130 = uStack_200._4_4_ + uStack_200._4_4_;
        fVar126 = (fVar115 * fVar104 - fVar110 * fVar118) * fVar130 +
                  fVar122 * fVar119 + fVar105 * fVar127;
        fVar113 = fVar72 - (float)((uint)fVar73 & uVar26);
        auVar100._0_4_ = fVar97 - fVar74;
        auVar100._4_4_ = fVar102 - (float)((uint)fVar82 & uVar26);
        auVar100._8_4_ = fVar103 - fVar112;
        auVar100._12_4_ = fVar96 - (float)((uint)fVar106 & uVar75);
        if (fVar113 <= 0.0) {
          fVar113 = 0.0;
        }
        if (fVar72 <= fVar113) {
          fVar113 = fVar72;
        }
        auVar99 = maxps(auVar100,ZEXT816(0));
        auVar99 = minps(auVar99,auVar77);
        fVar73 = fVar126 * fVar113 + fVar73;
        if (fVar73 <= _DAT_142e36f34) {
          fVar73 = _DAT_142e36f34;
        }
        if (fVar72 <= fVar73) {
          fVar73 = fVar72;
        }
        *(float *)((longlong)ppppfStack_100 + 0x1ac) = fVar73;
        auVar101._0_4_ =
             auVar99._0_4_ *
             ((fVar118 * fVar105 - fVar104 * fVar119) * fVar130 +
             fVar122 * fVar115 + fVar110 * fVar124) + fVar111;
        auVar101._4_4_ =
             auVar99._4_4_ *
             ((fVar119 * fVar110 - fVar105 * fVar115) * fVar130 +
             fVar122 * fVar118 + fVar104 * fVar125) + fVar82;
        auVar101._8_4_ = auVar99._8_4_ * fVar126 + fVar107;
        auVar101._12_4_ =
             auVar99._12_4_ *
             ((fVar121 * fVar108 - fVar108 * fVar121) * fVar130 +
             fVar122 * fVar121 + fVar105 * fVar128) + fVar109;
        auVar99 = maxps(auVar101,_DAT_142e37960);
        auVar77 = minps(auVar99,auVar77);
        fVar72 = auVar77._0_4_;
        fVar111 = auVar77._4_4_;
        auVar78._0_4_ = (float)((uint)fVar72 & uVar26);
        auVar78._4_4_ = (float)((uint)fVar111 & uVar75);
        auVar78._8_4_ = auVar77._8_4_ & uVar47;
        auVar78._12_4_ = auVar77._12_4_ & uVar27;
        auVar77 = minps(_DAT_142e37970,auVar78);
        fVar72 = fVar72 - (float)(~-(uint)NAN(auVar78._0_4_) & auVar77._0_4_ |
                                 (uint)DAT_142e37970 & -(uint)NAN(auVar78._0_4_)) *
                          (float)((uint)fVar97 & uVar26 | ~uVar26 & (uint)fVar72);
        *(ulonglong *)((longlong)ppppfStack_100 + 0x1a4) =
             CONCAT44(fVar111 - (float)(~-(uint)NAN(auVar78._4_4_) & auVar77._4_4_ |
                                       DAT_142e37970._4_4_ & -(uint)NAN(auVar78._4_4_)) *
                                (float)((uint)fVar102 & uVar75 | ~uVar75 & (uint)fVar111),fVar72);
        fVar111 = *(float *)((longlong)ppppfStack_100 + 0x1bc);
        fVar72 = (float)((uint)fVar72 & uVar26);
        fVar113 = fVar72;
        if (fVar72 <= fVar111) {
          fVar113 = fVar111;
        }
        *(float *)((longlong)ppppfStack_100 + 0x1bc) =
             (float)(~-(uint)NAN(fVar111) & (uint)fVar113 | -(uint)NAN(fVar111) & (uint)fVar72) *
             _DAT_142e37930;
        pppfVar58 = pppfStack_118;
        fStack_25c = fVar120;
        if (pppfStack_118 < pppfStack_150) {
          pbStack_190[(longlong)pppfStack_118] =
               pbStack_190[(longlong)pppfStack_118] | bVar70 & fVar72 < _DAT_142e37934;
          fVar113 = _DAT_142e37870;
          fVar111 = _DAT_142e36f28;
          pppfVar53 = pppfStack_118;
          if ((((uint)ppppfStack_128 != 0) &&
              (fVar74 = (float)*(undefined8 *)((longlong)ppppfStack_100 + 0x19c),
              fVar72 = (float)((ulonglong)*(undefined8 *)((longlong)ppppfStack_100 + 0x19c) >> 0x20)
              , _DAT_142e37980 <
                SQRT(fVar72 * fVar72 +
                     *(float *)(ppppfStack_100 + 0x33) * *(float *)(ppppfStack_100 + 0x33) +
                     fVar74 * fVar74))) &&
             (fVar72 = (float)pdb_140e028c0(), _DAT_142e37984 < fVar72)) {
            uVar38 = *(undefined8 *)(lStack_560 + 0x20);
            *puStack_5c0 = uStack_32c;
            lVar67 = *(longlong *)(lStack_558 + 0x30);
            uVar37 = *(undefined8 *)(lStack_558 + 0x40);
            if (lVar67 == *(longlong *)(lStack_558 + 0x20)) {
              pdb_142d7e980(lStack_5b0);
            }
            lVar30 = *(longlong *)(lStack_558 + 0x28);
            *(undefined8 *)(lVar30 + lVar67 * 0x10) = uVar37;
            *(undefined8 *)(lVar30 + 8 + lVar67 * 0x10) = uVar38;
            *(longlong *)(lStack_558 + 0x30) = lVar67 + 1;
            *(longlong *)(lStack_558 + 0x40) = *(longlong *)(lStack_558 + 0x40) + 1;
            fVar72 = fVar111;
            if (((((ulonglong)~(uint)ppppfStack_128 < *(ulonglong *)(lStack_308 + 0x10)) &&
                 (piVar50 = (int *)((ulonglong)~(uint)ppppfStack_128 * 0x18 +
                                   *(longlong *)(lStack_308 + 8)), piVar50[4] == iStack_324)) &&
                (*piVar50 != 0)) &&
               ((uVar31 = *(ulonglong *)(piVar50 + 2),
                (uVar31 & 0xffffffff) < *(ulonglong *)(lStack_2f8 + 0x38) &&
                ((*(ulonglong *)(*(longlong *)(lStack_2f8 + 0x28) + (uVar31 >> 6 & 0x3ffffff) * 8)
                  >> (uVar31 & 0x3f) & 1) != 0)))) {
              pppfVar53 = *(float ****)
                           (*(longlong *)(lStack_308 + 0x1a0) + 0x18 + (uVar31 >> 0x20) * 0x48);
              fStack_31c = *(float *)(pppfVar53[~*(ulonglong *)
                                                  (*(longlong *)
                                                    (*(longlong *)(lStack_308 + 0x1a0) + 0x38 +
                                                    (uVar31 >> 0x20) * 0x48) +
                                                  *(longlong *)(lStack_2f8 + 0x110) * 8) * 6 + 2] +
                                     (ulonglong)(uint)~piVar50[1] * 7 + 6);
              fVar72 = (float)pdb_140e028c0();
              fVar72 = fVar72 * _DAT_142e3798c + fStack_31c + _DAT_142e37988;
              if (_DAT_142e37990 <= fVar72) {
                fVar72 = _DAT_142e37990;
              }
            }
            *(uint *)pppfStack_5b8 = uStack_328;
            ppfVar45 = pppfStack_550[6];
            ppfVar5 = pppfStack_550[8];
            if (ppfVar45 == pppfStack_550[4]) {
              pdb_142d7e6e0(pppfStack_5a8);
            }
            ppfVar6 = pppfStack_550[5];
            ppfVar6[(longlong)ppfVar45 * 4] = (float *)ppfVar5;
            ppfVar6[(longlong)ppfVar45 * 4U + 1] = (float *)uStack_288;
            *(float *)(ppfVar6 + (longlong)ppfVar45 * 4U + 2) = fStack_280;
            *(float *)((longlong)ppfVar6 + ((longlong)ppfVar45 * 8 + 5) * 4) = fVar72;
            *(undefined1 *)(ppfVar6 + (longlong)ppfVar45 * 4U + 3) = 0;
            pppfStack_550[6] = (float **)((longlong)ppfVar45 + 1);
            pppfStack_550[8] = (float **)((longlong)pppfStack_550[8] + 1);
          }
          fVar72 = *(float *)((longlong)plStack_110 + 0x44);
          fVar113 = (fVar123 - (float)auStack_168._0_4_ * fVar72) * _DAT_142e37994 * fVar113;
          fVar74 = (fVar114 - fVar91 * fVar72) * _DAT_142e379a0 * _DAT_142e37850;
          fVar112 = (fVar117 - fVar92 * fVar72) * _UNK_142e379a4 * _UNK_142e37854;
          fVar82 = (fVar120 - 0.0) * _UNK_142e379ac * _UNK_142e3785c;
          fVar72 = fVar112 * fVar119 + fVar74 * fVar118 + fVar113 * fVar115;
          fVar72 = fVar72 + fVar72;
          auVar79._0_4_ = fVar112 * fVar115;
          auVar79._4_4_ = fVar113 * fVar118;
          auVar79._8_4_ = fVar74 * fVar119;
          auVar79._12_4_ = fVar82 * fVar121;
          auVar129._0_4_ =
               fVar130 * (fVar118 * fVar112 - auVar79._8_4_) + fVar72 * fVar115 + fVar124 * fVar113;
          auVar129._4_4_ =
               fVar130 * (fVar119 * fVar113 - auVar79._0_4_) + fVar72 * fVar118 + fVar125 * fVar74;
          auVar129._8_4_ =
               fVar130 * (fVar115 * fVar74 - auVar79._4_4_) + fVar72 * fVar119 + fVar127 * fVar112;
          auVar129._12_4_ =
               fVar130 * (fVar121 * fVar82 - auVar79._12_4_) + fVar72 * fVar121 + fVar128 * fVar112;
          auVar11._4_8_ = auVar79._8_8_;
          auVar11._0_4_ = auVar129._4_4_;
          auVar80._0_8_ = auVar11._0_8_ << 0x20;
          auVar80._8_4_ = auVar129._8_4_;
          auVar80._12_4_ = auVar129._12_4_;
          auVar81._8_8_ = auVar129._8_8_;
          auVar81._0_8_ = auVar80._8_8_;
          if (auVar129._8_4_ <= _DAT_142e36f34) {
            auVar81._0_4_ = _DAT_142e36f34;
          }
          if (fVar111 <= auVar81._0_4_) {
            auVar81._0_4_ = fVar111;
          }
          auVar77 = maxps(auVar129,_DAT_142e37960);
          auVar77 = minps(auVar77,_DAT_142e37950);
          ppppfStack_100[0x36] =
               (float ***)
               CONCAT44(((float)((ulonglong)ppppfStack_100[0x36] >> 0x20) + auVar77._4_4_) *
                        _UNK_142e379b4,
                        (SUB84(ppppfStack_100[0x36],0) + auVar77._0_4_) * _DAT_142e379b0);
          *(float *)(ppppfStack_100 + 0x37) =
               (auVar81._0_4_ + *(float *)(ppppfStack_100 + 0x37)) * _DAT_142e379c0;
          fVar113 = (float)*(undefined8 *)((longlong)ppppfStack_100 + 0x1a4) + _DAT_142e379d0;
          fVar72 = (float)((ulonglong)*(undefined8 *)((longlong)ppppfStack_100 + 0x1a4) >> 0x20) +
                   _UNK_142e379d4;
          fVar111 = fVar111 / SQRT(fVar72 * fVar72 + fVar113 * fVar113);
          ppppfStack_238 = (float ****)CONCAT44(fVar111 * fVar72,fVar111 * fVar113);
          ppppfStack_230 = (float ****)CONCAT44(ppppfStack_230._4_4_,fVar111 * 0.0);
          ppppfStack_2d8 = (float ****)0x3f80000000000000;
          ppppfStack_2d0 = (float ****)((ulonglong)ppppfStack_2d0 & 0xffffffff00000000);
          pdb_140f335d0(auStack_518,&ppppfStack_2d8,&ppppfStack_238);
          auStack_168._0_8_ = ppppfStack_100 + 0x38;
          pppfStack_118 = (float ***)((longlong)pppfStack_118 + 1);
          fVar113 = (float)auStack_514._0_4_ * fStack_270 * _DAT_142e377d0 +
                    (float)auStack_514._4_4_ * uStack_278._4_4_ * _DAT_142e377c0 +
                    fStack_50c * (float)uStack_278 * _DAT_142e377b0 +
                    fStack_26c * (float)auStack_518;
          fVar72 = (float)auStack_518 * fStack_270 * _UNK_142e377d4 +
                   fStack_50c * uStack_278._4_4_ * _UNK_142e377c4 +
                   (float)auStack_514._4_4_ * (float)uStack_278 * _UNK_142e377b4 +
                   fStack_26c * (float)auStack_514._0_4_;
          fVar74 = fStack_50c * fStack_270 * _UNK_142e377d8 +
                   (float)auStack_518 * uStack_278._4_4_ * _UNK_142e377c8 +
                   (float)auStack_514._0_4_ * (float)uStack_278 * _UNK_142e377b8 +
                   fStack_26c * (float)auStack_514._4_4_;
          fVar112 = (float)auStack_514._4_4_ * fStack_270 * _UNK_142e377dc +
                    (float)auStack_514._0_4_ * uStack_278._4_4_ * _UNK_142e377cc +
                    (float)auStack_518 * (float)uStack_278 * _UNK_142e377bc +
                    fStack_26c * fStack_50c;
          uStack_208 = (float ****)CONCAT44(fVar72,fVar113);
          param_15 = (float ****)CONCAT44(uStack_7b8._4_4_,(float)uStack_7b8);
          arg0 = (ulonglong *)CONCAT44(uStack_7ac,fStack_7b0);
          puVar2 = arg0 + (longlong)pauStack_7a8;
          fVar111 = ppppfStack_178._0_4_;
          puVar57 = arg0;
          pppfVar58 = ppppfStack_100[0x2f];
          uStack_200._0_4_ = fVar74;
          uStack_200._4_4_ = fVar112;
LAB_140088ba0:
          if (arg0 == (ulonglong *)0x0) {
LAB_140088bf0:
            fVar109 = _UNK_142e377dc;
            fVar107 = _UNK_142e377d8;
            fVar106 = _UNK_142e377d4;
            fVar96 = _DAT_142e377d0;
            fVar123 = _UNK_142e377cc;
            fVar120 = _UNK_142e377c8;
            fVar117 = _UNK_142e377c4;
            fVar114 = _DAT_142e377c0;
            fVar92 = _UNK_142e377bc;
            fVar91 = _UNK_142e377b8;
            fVar73 = _UNK_142e377b4;
            fVar82 = _DAT_142e377b0;
            uVar31 = (ulonglong)pppfVar58 & 0xffffffff;
            if (uVar31 == 0) goto LAB_140088d70;
            arg0 = (ulonglong *)0x0;
            pppfVar35 = (float ***)((ulonglong)pppfVar58 & 0xffffffff00000000);
            pppfVar44 = pppfVar58;
          }
          else {
            pppfVar35 = pppfVar58;
            if (puVar57 == puVar2) {
              pppfVar44 = (float ***)0x0;
              puVar57 = puVar2;
LAB_140088bc6:
              if (param_15 != (float ****)0x0) {
                pub_1406abac0((byte *)arg0,(longlong)param_15 * 8,8);
              }
              uVar31 = (ulonglong)pppfVar44 & 0xffffffff;
              if (uVar31 == 0) goto LAB_140088bf0;
              arg0 = (ulonglong *)0x0;
            }
            else {
              pppfVar44 = (float ***)*puVar57;
              puVar57 = puVar57 + 1;
              uVar31 = (ulonglong)pppfVar44 & 0xffffffff;
              if (uVar31 == 0) goto LAB_140088bc6;
            }
          }
          pppfVar58 = pppfVar35;
          if ((((float ***)(uVar31 ^ 0xffffffff) < ppppfStack_120[2]) &&
              (pppfVar35 = ppppfStack_120[1] + (longlong)(uVar31 ^ 0xffffffff) * 3,
              *(int *)(pppfVar35 + 2) == (int)((ulonglong)pppfVar44 >> 0x20))) &&
             (*(int *)pppfVar35 != 0)) {
            ppfVar45 = pppfVar35[1];
            pppfVar53 = (float ***)((ulonglong)ppfVar45 & 0xffffffff);
            if ((pppfVar53 < ppppfStack_130[7]) &&
               (pppfVar53 = (float ***)ppppfStack_130[5][(ulonglong)ppfVar45 >> 6 & 0x3ffffff],
               ((ulonglong)pppfVar53 >> ((ulonglong)ppfVar45 & 0x3f) & 1) != 0)) {
              ppfVar5 = ppppfStack_120[0x34][((ulonglong)ppfVar45 >> 0x20) * 9 + 3];
              uVar31 = ~(ulonglong)
                        ppppfStack_120[0x34][((ulonglong)ppfVar45 >> 0x20) * 9 + 7]
                        [(longlong)ppppfStack_130[0x22]];
              lVar67 = (longlong)ppfVar5[uVar31 * 6 + 2];
              pppfVar53 = (float ***)ppfVar5[uVar31 * 6 + 5];
              uVar31 = (ulonglong)~*(uint *)((longlong)pppfVar35 + 4);
              lVar30 = uVar31 * 0x30;
              *(int *)((longlong)pppfVar53 + uVar31 * 4) = (int)ppppfStack_140;
              *(float *)(lVar67 + 0x18 + lVar30) = fStack_280;
              *(undefined8 *)(lVar67 + 0x10 + lVar30) = uStack_288;
              fVar82 = *(float *)(ppppfStack_100 + 6);
              fVar73 = *(float *)((longlong)ppppfStack_100 + 0x34);
              fVar91 = *(float *)(ppppfStack_100 + 7);
              fVar92 = *(float *)((longlong)ppppfStack_100 + 0x3c);
              fVar96 = fVar92 * fVar113 * _DAT_142e377b0;
              fVar106 = fVar91 * fVar113 * _UNK_142e377b4;
              fVar107 = fVar73 * fVar113 * _UNK_142e377b8;
              fVar109 = fVar82 * fVar113 * _UNK_142e377bc;
              fVar97 = fVar91 * fVar72 * _DAT_142e377c0;
              fVar102 = fVar92 * fVar72 * _UNK_142e377c4;
              fVar103 = fVar82 * fVar72 * _UNK_142e377c8;
              fVar105 = fVar73 * fVar72 * _UNK_142e377cc;
              fVar114 = fVar73 * fVar74 * _DAT_142e377d0;
              fVar117 = fVar82 * fVar74 * _UNK_142e377d4;
              fVar120 = fVar92 * fVar74 * _UNK_142e377d8;
              fVar123 = fVar91 * fVar74 * _UNK_142e377dc;
              *(int *)((longlong)pppfVar53 + uVar31 * 4) = (int)ppppfStack_140;
              pfVar36 = (float *)(lVar67 + lVar30);
              *pfVar36 = fVar114 + fVar97 + fVar96 + fVar112 * fVar82;
              pfVar36[1] = fVar117 + fVar102 + fVar106 + fVar112 * fVar73;
              pfVar36[2] = fVar120 + fVar103 + fVar107 + fVar112 * fVar91;
              pfVar36[3] = fVar123 + fVar105 + fVar109 + fVar112 * fVar92;
            }
          }
          goto LAB_140088ba0;
        }
        goto LAB_14008b5ca;
      }
      goto LAB_140087a57;
    }
    uVar31 = plStack_110[7];
    if ((ulonglong)plStack_110[2] <= uVar31) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar31,plStack_110[2],&UNK_142e37eb0);
    }
    pppfVar58 = (float ***)(uVar31 * 0x1c0 + plStack_110[1]);
    pdb_140dece30(auStack_5f8,plStack_158);
    pdb_140decda0(auStack_608,plStack_158);
    fVar112 = _DAT_142e36f28;
    uStack_7b8._0_4_ = auStack_608._0_4_;
    uStack_7b8._4_4_ = auStack_608._4_4_;
    fStack_7b0 = _DAT_142e36f28 /
                 SQRT(uStack_7b8._4_4_ * uStack_7b8._4_4_ + (float)uStack_7b8 * (float)uStack_7b8 +
                      fStack_600 * fStack_600);
    uStack_7b8._0_4_ = fStack_7b0 * (float)uStack_7b8;
    uStack_7b8._4_4_ = fStack_7b0 * uStack_7b8._4_4_;
    fStack_7b0 = fStack_7b0 * fStack_600;
    pdb_14052dc80(auStack_518,&uStack_7b8);
    auVar19 = auStack_518;
    uVar28 = auStack_514._0_4_;
    uVar17 = auStack_514._4_4_;
    fVar82 = fStack_50c;
    auStack_578._0_8_ = pauStack_148 + 0x2f;
    pdb_140ab7c90(auStack_518);
    fVar111 = *(float *)(pppfVar58 + 6);
    fVar113 = *(float *)((longlong)pppfVar58 + 0x34);
    fVar72 = *(float *)(pppfVar58 + 7);
    fVar74 = *(float *)((longlong)pppfVar58 + 0x3c);
    fVar73 = fVar113 * (float)uVar17 * _DAT_142e377d0 + fVar72 * (float)uVar28 * _DAT_142e377c0 +
             fVar74 * (float)auVar19 * _DAT_142e377b0 + fVar82 * fVar111;
    fVar91 = fVar111 * (float)uVar17 * _UNK_142e377d4 + fVar74 * (float)uVar28 * _UNK_142e377c4 +
             fVar72 * (float)auVar19 * _UNK_142e377b4 + fVar82 * fVar113;
    fVar92 = fVar74 * (float)uVar17 * _UNK_142e377d8 + fVar111 * (float)uVar28 * _UNK_142e377c8 +
             fVar113 * (float)auVar19 * _UNK_142e377b8 + fVar82 * fVar72;
    fVar114 = fVar72 * (float)uVar17 * _UNK_142e377dc + fVar113 * (float)uVar28 * _UNK_142e377cc +
              fVar111 * (float)auVar19 * _UNK_142e377bc + fVar82 * fVar74;
    fVar113 = *(float *)((longlong)pppfVar58 + 0x18c);
    fVar72 = *(float *)(pppfVar58 + 0x32);
    fVar74 = *(float *)((longlong)pppfVar58 + 0x194);
    fVar111 = *(float *)(pppfVar58 + 0x33);
    auVar116._8_4_ = fVar111;
    auVar116._0_8_ = pppfVar58[0x33];
    auVar116._12_4_ = fVar111;
    fVar109 = fVar92 * fVar92;
    fVar97 = fVar114 * fVar114;
    fVar102 = fVar91 * fVar91 + fVar73 * fVar73;
    fVar117 = fVar74 * fVar92 + fVar72 * fVar91 + fVar113 * fVar73;
    fVar117 = fVar117 + fVar117;
    fVar114 = fVar114 + fVar114;
    fVar120 = (float)uVar17 * (float)uVar17;
    fVar123 = fVar82 * fVar82;
    fVar106 = (float)uVar28 * (float)uVar28 + (float)auVar19 * (float)auVar19;
    fVar96 = _UNK_142e37a68 * (float)uVar17 +
             _UNK_142e37a64 * (float)uVar28 + _DAT_142e37a60 * (float)auVar19;
    fVar96 = fVar96 + fVar96;
    fVar107 = fVar82 + fVar82;
    fVar111 = *(float *)(pppfVar58 + 0x34);
    if (*(float *)(pppfVar58 + 0x34) <= _DAT_142e36f34) {
      fVar111 = _DAT_142e36f34;
    }
    if (_DAT_142e36f28 <= fVar111) {
      fVar111 = _DAT_142e36f28;
    }
    auVar77 = maxps(auVar116,_DAT_142e37960);
    auVar77 = minps(auVar77,_DAT_142e37950);
    ppppfStack_238 =
         (float ****)
         CONCAT44(auVar77._4_4_ * _UNK_142e37a94 +
                  auStack_5f8._4_4_ +
                  fVar114 * (fVar92 * fVar113 - fVar74 * fVar73) +
                  fVar117 * fVar91 + (fVar97 - (fVar102 + fVar109)) * fVar72 +
                  fVar107 * ((float)uVar17 * _UNK_142e37a74 - (float)auVar19 * _UNK_142e37a84) +
                  fVar96 * (float)uVar28 + (fVar123 - (fVar106 + fVar120)) * _UNK_142e37a64,
                  auVar77._0_4_ * _DAT_142e37a90 +
                  auStack_5f8._0_4_ +
                  fVar114 * (fVar91 * fVar74 - fVar72 * fVar92) +
                  fVar117 * fVar73 + (fVar97 - (fVar102 + fVar109)) * fVar113 +
                  fVar107 * ((float)uVar28 * _DAT_142e37a70 - (float)uVar17 * _DAT_142e37a80) +
                  fVar96 * (float)auVar19 + (fVar123 - (fVar106 + fVar120)) * _DAT_142e37a60);
    ppppfStack_230 =
         (float ****)
         CONCAT44(ppppfStack_230._4_4_,
                  fVar111 * _DAT_142e3798c +
                  fVar107 * ((float)auVar19 * _UNK_142e37a78 - (float)uVar28 * _UNK_142e37a88) +
                  fVar96 * (float)uVar17 + (fVar123 - (fVar106 + fVar120)) * _UNK_142e37a68 +
                  fVar114 * (fVar73 * fVar72 - fVar113 * fVar91) +
                  fVar117 * fVar92 + (fVar97 - (fVar102 + fVar109)) * fVar74 + fStack_5f0);
    auStack_228._4_4_ =
         (float)auStack_518 * (float)uVar17 * _UNK_142e377d4 +
         fStack_50c * (float)uVar28 * _UNK_142e377c4 +
         (float)auStack_514._4_4_ * (float)auVar19 * _UNK_142e377b4 +
         fVar82 * (float)auStack_514._0_4_;
    auStack_228._0_4_ =
         (float)auStack_514._0_4_ * (float)uVar17 * _DAT_142e377d0 +
         (float)auStack_514._4_4_ * (float)uVar28 * _DAT_142e377c0 +
         fStack_50c * (float)auVar19 * _DAT_142e377b0 + fVar82 * (float)auStack_518;
    uStack_220._0_4_ =
         fStack_50c * (float)uVar17 * _UNK_142e377d8 +
         (float)auStack_518 * (float)uVar28 * _UNK_142e377c8 +
         (float)auStack_514._0_4_ * (float)auVar19 * _UNK_142e377b8 +
         fVar82 * (float)auStack_514._4_4_;
    uStack_220._4_4_ =
         (float)auStack_514._4_4_ * (float)uVar17 * _UNK_142e377dc +
         (float)auStack_514._0_4_ * (float)uVar28 * _UNK_142e377cc +
         (float)auStack_518 * (float)auVar19 * _UNK_142e377bc + fVar82 * fStack_50c;
    pdb_140a368f0(&ppppfStack_2d8,pauStack_148 + 0x10);
    _auStack_518 = *pauStack_2c8;
    pauStack_508 = *(undefined1 (**) [16])pauStack_2c8[1];
    uStack_500 = (undefined4)*(undefined8 *)(pauStack_2c8[1] + 8);
    uStack_4fc = (undefined4)*(undefined8 *)(pauStack_2c8[1] + 0xc);
    uStack_4f8 = (undefined4)((ulonglong)*(undefined8 *)(pauStack_2c8[1] + 0xc) >> 0x20);
    uStack_4f4 = (undefined4)*(undefined8 *)(pauStack_2c8[2] + 4);
    uStack_4f0._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(pauStack_2c8[2] + 4) >> 0x20);
    fVar113 = (float)pdb_140dee660(auStack_518);
    fVar111 = *(float *)((longlong)pauStack_148[0x4d] + 8);
    pdb_140e07bc0(auStack_518,&ppppfStack_238);
    fVar72 = (float)pub_142e329e0();
    fVar74 = (float)pub_142e32b30();
    fVar72 = fVar72 / fVar74;
    fVar111 = fVar72 / fVar111;
    ppppfStack_7a0 = (float ****)CONCAT44(uStack_4fc,uStack_500);
    ppppfStack_798 = (float ****)CONCAT44(uStack_4f4,uStack_4f8);
    pppfStack_790 = (float ***)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
    uStack_788 = (float ***)auStack_4e8._0_8_;
    uStack_780 = auStack_4e8._8_8_;
    pauStack_7a8 = pauStack_508;
    uStack_7b8._0_4_ = auStack_518;
    uStack_7b8._4_4_ = auStack_518._4_4_;
    fStack_7b0 = auStack_518._8_4_;
    uStack_7ac = auStack_518._12_4_;
    uStack_208 = ppppfStack_4d8;
    uStack_200._0_4_ = (float)iStack_4d0;
    uStack_200._4_4_ = (float)uStack_4cc;
    uStack_1f8 = uStack_4c8;
    uStack_1f4 = uStack_4c4;
    appppfStack_1f0[0] = ppppfStack_4c0;
    appppfStack_1f0[1] = ppppfStack_4b8;
    pppfStack_1e0 = pppfStack_4b0;
    uStack_1d8 = pppfStack_4a8;
    pppfVar35 = uStack_1d8;
    uStack_1d0 = (float **)apppfStack_4a0[0];
    ppfVar45 = uStack_1d0;
    *(float *)ppfStack_530 = fStack_1ac;
    *pauStack_148 = ZEXT416((uint)fVar111);
    pauStack_148[1] = ZEXT416((uint)fVar72) << 0x20;
    uVar38 = _UNK_142e37ab8;
    *(undefined8 *)pauStack_148[2] = _DAT_142e37ab0;
    *(undefined8 *)((longlong)pauStack_148[2] + 8) = uVar38;
    pauStack_148[3] = ZEXT416((uint)fVar113) << 0x40;
    pauStack_148[4] = ZEXT416((uint)(fVar112 / fVar111));
    pauStack_148[5] = ZEXT416((uint)(fVar112 / fVar72)) << 0x20;
    *(float *)pauStack_148[6] = 0.0;
    *(float *)((longlong)pauStack_148[6] + 4) = 0.0;
    *(float *)((longlong)pauStack_148[6] + 8) = 0.0;
    *(float *)((longlong)pauStack_148[6] + 0xc) = fVar112 / fVar113;
    uVar38 = _UNK_142e37ac8;
    *(undefined8 *)pauStack_148[7] = _DAT_142e37ac0;
    *(undefined8 *)((longlong)pauStack_148[7] + 8) = uVar38;
    *(float *****)pauStack_148[8] = _auStack_518;
    *(float *****)((longlong)pauStack_148[8] + 8) = stack0xfffffffffffffaf0;
    *(undefined1 (**) [16])pauStack_148[9] = pauStack_508;
    *(float *****)((longlong)pauStack_148[9] + 8) = ppppfStack_7a0;
    *(float *****)pauStack_148[10] = ppppfStack_798;
    *(float ****)((longlong)pauStack_148[10] + 8) = pppfStack_790;
    *(undefined8 *)pauStack_148[0xb] = auStack_4e8._0_8_;
    *(undefined8 *)((longlong)pauStack_148[0xb] + 8) = auStack_4e8._8_8_;
    auVar12._4_4_ = uStack_4c4;
    auVar12._0_4_ = uStack_4c8;
    auVar12._8_8_ = ppppfStack_4c0;
    uStack_1d8._0_4_ = SUB84(pppfStack_4a8,0);
    uStack_1d8._4_4_ = (float)((ulonglong)pppfStack_4a8 >> 0x20);
    uStack_1d0._0_4_ = SUB84(apppfStack_4a0[0],0);
    uStack_1d0._4_4_ = (float)((ulonglong)apppfStack_4a0[0] >> 0x20);
    *(float *****)pauStack_148[0xc] = ppppfStack_4d8;
    *(ulonglong *)((longlong)pauStack_148[0xc] + 8) = CONCAT44(uStack_4cc,iStack_4d0);
    pauStack_148[0xd] = auVar12;
    *(float *****)pauStack_148[0xe] = ppppfStack_4b8;
    *(float ****)((longlong)pauStack_148[0xe] + 8) = pppfStack_4b0;
    *(float *)pauStack_148[0xf] = (float)uStack_1d8;
    *(float *)((longlong)pauStack_148[0xf] + 4) = uStack_1d8._4_4_;
    *(float *)((longlong)pauStack_148[0xf] + 8) = (float)uStack_1d0;
    *(float *)((longlong)pauStack_148[0xf] + 0xc) = uStack_1d0._4_4_;
    fVar74 = _DAT_142e37ae4;
    fVar72 = _DAT_142e37ae0;
    fVar113 = _DAT_142e37adc;
    fVar111 = _DAT_142e37ad8;
    uStack_268 = (float ****)plStack_110[1];
    ppppfStack_178 = uStack_268 + plStack_110[2] * 0x38;
    pppfStack_118 = (float ***)0x0;
    uStack_1d8 = pppfVar35;
    uStack_1d0 = ppfVar45;
LAB_140089570:
    if (uStack_268 != ppppfStack_178) {
      ppppfStack_100 = uStack_268;
      pdb_140dece30(&fStack_294,plStack_158);
      if (pppfStack_150 <= pppfStack_118) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pppfStack_118,pppfStack_150,&UNK_142e37ee0);
      }
      uStack_268 = ppppfStack_100 + 0x38;
      uStack_278 = (float ****)CONCAT71(uStack_278._1_7_,pbStack_190[(longlong)pppfStack_118]);
      pppfStack_118 = (float ***)((longlong)pppfStack_118 + 1);
      ppppfVar32 = ppppfStack_100 + 0xf;
      ppppfStack_128 = ppppfVar32;
      pppfVar53 = (float ***)0x0;
      if (*(uint *)(ppppfStack_100 + 0xf) == 2) {
        ppppfVar32 = (float ****)0x0;
      }
      ppppfVar51 = ppppfStack_100 + 8;
      ppppfVar43 = ppppfStack_100 + 0x16;
      if (*(uint *)(ppppfStack_100 + 0x16) == 2) {
        ppppfVar43 = (float ****)0x0;
      }
      ppppfVar54 = ppppfStack_100 + 0x2a;
      auStack_168._0_8_ = ppppfVar51;
      if (*(uint *)(ppppfStack_100 + 8) == 2) {
        ppppfVar51 = (float ****)0x0;
      }
      auStack_4e8._0_8_ = ppppfStack_100 + 0x1d;
      ppppfStack_188 = (float ****)auStack_4e8._0_8_;
      if (*(uint *)(ppppfStack_100 + 0x1d) == 2) {
        auStack_4e8._0_8_ = (float ****)0x0;
      }
      param_15 = ppppfVar54;
      if (SBORROW8(0,(longlong)ppppfStack_100[0x2a])) {
        param_15 = (float ****)0x0;
      }
      _auStack_518 = ZEXT816(1);
      pauStack_508 = (undefined1 (*) [16])0x4;
      uStack_500 = SUB84(ppppfVar32,0);
      uStack_4fc = (undefined4)((ulonglong)ppppfVar32 >> 0x20);
      uStack_4f8 = SUB84(ppppfVar43,0);
      uStack_4f4 = (undefined4)((ulonglong)ppppfVar43 >> 0x20);
      uStack_4f0._0_4_ = SUB84(ppppfVar51,0);
      uStack_4f0._4_4_ = (undefined4)((ulonglong)ppppfVar51 >> 0x20);
      auStack_4e8._8_8_ = 0;
      iStack_4d0 = 0;
      uStack_4cc = 0;
      ppppfStack_4c0 = (float ****)0x1;
      pppfStack_4b0 = (float ***)0x0;
      apppfStack_4a0[0] = (float ***)0x0;
      lVar30 = 0;
      pppfVar35 = (float ***)0x0;
      lVar67 = 0;
      ppppfStack_4b8 = param_15;
      do {
        if (lVar67 != 4) {
          do {
            lVar30 = lVar67 + 1;
            if (*(float ****)(&uStack_500 + lVar67 * 2) != (float ***)0x0) {
              stack0xfffffffffffffaf0 = (float ****)lVar30;
              lVar69 = 1;
              pppfVar44 = *(float ****)(&uStack_500 + lVar67 * 2);
              lVar67 = lVar30;
              goto LAB_140089812;
            }
            lVar67 = lVar30;
          } while (lVar30 != 4);
          lVar30 = 4;
        }
        stack0xfffffffffffffaf0 = (float ****)lVar30;
        _auStack_518 = (float ****)0x2;
        lVar67 = 4;
        do {
          fVar82 = fStack_290;
          pppfVar21 = pppfStack_4b0;
          if (pppfVar35 == (float ***)0x0) {
LAB_1400897d0:
            pppfStack_4b0 = pppfVar21;
            ppppfStack_4b8 = (float ****)0x0;
            if (param_15 != (float ****)0x0) {
              pppfVar44 = param_15[1];
              pppfStack_4b0 = param_15[2];
              pppfVar58 = pppfVar44 + (longlong)pppfStack_4b0 * 7;
              pppfStack_4a8 = pppfVar58;
              if (pppfStack_4b0 != (float ***)0x0) {
                lVar69 = 2;
                param_15 = (float ****)0x0;
                pppfVar35 = pppfVar44 + 7;
                pppfStack_4b0 = pppfVar44 + 7;
                goto LAB_140089812;
              }
            }
            if (*(uint *)ppppfStack_128 != 2) {
              pdb_140a8e0c0(ppppfStack_128);
              pdb_140a8e730(ppppfStack_128,&UNK_142e37d33,0xd);
            }
            if ((char)uStack_278 == '\0') goto LAB_140089990;
            if (SBORROW8(0,(longlong)*ppppfVar54)) {
              ppppfVar54 = (float ****)0x0;
            }
            ppppfVar32 = (float ****)0x0;
            goto LAB_140089900;
          }
          pppfStack_4b0 = pppfVar35 + 7;
          lVar69 = 2;
          bVar70 = pppfVar35 == pppfVar58;
          pppfVar44 = pppfVar35;
          pppfVar35 = pppfStack_4b0;
          pppfVar21 = (float ***)0x0;
          if (bVar70) goto LAB_1400897d0;
LAB_140089812:
          fStack_7b0 = fStack_28c;
          uStack_7b8._0_4_ = fStack_294;
          uStack_7b8._4_4_ = fStack_290;
          pdb_140a8e190(pppfVar44,&uStack_7b8);
        } while (lVar69 == 2);
      } while( true );
    }
    fVar113 = (float)(plStack_110[2] - 1) * _DAT_142e37874;
    fVar111 = *(float *)(plStack_110 + 8);
    cVar23 = pdb_140938b60(*(undefined4 *)(lStack_2e0 + 0xa0));
    cVar25 = pdb_140938b60(*(undefined4 *)(lStack_2e0 + 0xa8),*(undefined4 *)(lStack_2e0 + 0xac));
    if ((cVar23 == '\0' && cVar25 == '\0') && (*pcStack_540 == '\x10')) {
      cVar23 = pdb_140a36620(pauStack_148);
      if ((cVar23 != '\x03') || (*(float *)((longlong)plStack_110 + 0x34) <= fVar113 + fVar111))
      goto LAB_140089ca1;
      goto LAB_14008a451;
    }
LAB_140089ca1:
    ppppfStack_238 = (float ****)plStack_110[1];
    uStack_220 = plStack_110[2];
    plStack_110[2] = 0;
    ppppfVar51 = ppppfStack_238 + uStack_220 * 0x38;
    auStack_228 = (undefined1  [8])plStack_110;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = auStack_218._8_8_;
    auStack_218 = auVar15 << 0x40;
    pppfStack_118 = (float ***)param_13[3];
    ppppfStack_100 = (float ****)param_13[2];
    ppppfStack_128 = (float ****)param_13[1];
    uVar38 = *param_13;
    uVar37 = param_13[1];
    ppppfVar32 = ppppfStack_238;
    ppppfStack_230 = ppppfVar51;
    while (ppppfVar32 != ppppfVar51) {
      ppppfStack_2d8 = (float ****)*ppppfVar32;
      ppppfStack_2d0 = (float ****)ppppfVar32[1];
      pauStack_2c8 = (undefined1 (*) [16])ppppfVar32[2];
      ppppfStack_2c0 = (float ****)ppppfVar32[3];
      ppppfStack_2b8 = (float ****)ppppfVar32[4];
      pppfStack_2b0 = ppppfVar32[5];
      pppfStack_2a8 = ppppfVar32[6];
      pppfStack_2a0 = ppppfVar32[7];
      param_15 = (float ****)ppppfVar32[8];
      ppppfStack_238 = ppppfVar32 + 0x38;
      pub_142e32760(&uStack_7b8,ppppfVar32 + 9,0x178);
      if (param_15 == (float ****)0x3) break;
      auStack_4e8._8_8_ = pppfStack_2a0;
      auStack_4e8._0_8_ = pppfStack_2a8;
      uStack_4f8 = SUB84(ppppfStack_2b8,0);
      uStack_4f4 = (undefined4)((ulonglong)ppppfStack_2b8 >> 0x20);
      uStack_4f0._0_4_ = SUB84(pppfStack_2b0,0);
      uStack_4f0._4_4_ = (undefined4)((ulonglong)pppfStack_2b0 >> 0x20);
      pauStack_508 = pauStack_2c8;
      uStack_500 = SUB84(ppppfStack_2c0,0);
      uStack_4fc = (undefined4)((ulonglong)ppppfStack_2c0 >> 0x20);
      stack0xfffffffffffffaf0 = ppppfStack_2d0;
      _auStack_518 = ppppfStack_2d8;
      ppppfStack_4d8 = param_15;
      pub_142e32760(&iStack_4d0,&uStack_7b8);
      iVar71 = iStack_390;
      lStack_250 = CONCAT44(lStack_250._4_4_,iStack_390);
      plVar33 = (longlong *)pdb_1406d0830();
      if (plVar33[3] == 0) {
        lVar67 = 0;
      }
      else {
        uVar31 = pdb_1400aede0(plVar33 + 4,&lStack_250);
        lVar30 = *plVar33;
        bVar24 = (byte)(uVar31 >> 0x39);
        auVar77 = ZEXT216(CONCAT11(bVar24,bVar24));
        auVar77 = pshuflw(auVar77,auVar77,0);
        lVar67 = 0;
        while( true ) {
          uVar31 = uVar31 & plVar33[1];
          auVar99 = *(undefined1 (*) [16])(lVar30 + uVar31);
          auVar94[0] = -(auVar99[0] == auVar77[0]);
          auVar94[1] = -(auVar99[1] == auVar77[1]);
          auVar94[2] = -(auVar99[2] == auVar77[2]);
          auVar94[3] = -(auVar99[3] == auVar77[3]);
          auVar94[4] = -(auVar99[4] == auVar77[4]);
          auVar94[5] = -(auVar99[5] == auVar77[5]);
          auVar94[6] = -(auVar99[6] == auVar77[6]);
          auVar94[7] = -(auVar99[7] == auVar77[7]);
          auVar94[8] = -(auVar99[8] == auVar77[0]);
          auVar94[9] = -(auVar99[9] == auVar77[1]);
          auVar94[10] = -(auVar99[10] == auVar77[2]);
          auVar94[0xb] = -(auVar99[0xb] == auVar77[3]);
          auVar94[0xc] = -(auVar99[0xc] == auVar77[4]);
          auVar94[0xd] = -(auVar99[0xd] == auVar77[5]);
          auVar94[0xe] = -(auVar99[0xe] == auVar77[6]);
          auVar94[0xf] = -(auVar99[0xf] == auVar77[7]);
          uVar65 = (ushort)(SUB161(auVar94 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar94 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar94 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar94 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar94 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar94 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar94 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar94 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar94 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar94 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar94 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar94 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar94 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar94 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar94 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar94[0xf] >> 7) << 0xf;
          pppfVar53 = (float ***)(ulonglong)uVar65;
          while (uVar65 != 0) {
            uVar26 = 0;
            for (uVar75 = (uint)pppfVar53; (uVar75 & 1) == 0; uVar75 = uVar75 >> 1 | 0x80000000) {
              uVar26 = uVar26 + 1;
            }
            uVar34 = uVar26 + uVar31 & plVar33[1];
            if (iVar71 == *(int *)(lVar30 + -0x28 + uVar34 * -0x28)) {
              lVar30 = lVar30 + uVar34 * -0x28;
              goto LAB_140089ed2;
            }
            iVar66 = (uint)pppfVar53 - 1;
            uVar65 = (ushort)iVar66 & (ushort)pppfVar53;
            pppfVar53 = (float ***)(ulonglong)CONCAT22((short)((uint)iVar66 >> 0x10),uVar65);
          }
          auVar86[0] = -(auVar99[0] == -1);
          auVar86[1] = -(auVar99[1] == -1);
          auVar86[2] = -(auVar99[2] == -1);
          auVar86[3] = -(auVar99[3] == -1);
          auVar86[4] = -(auVar99[4] == -1);
          auVar86[5] = -(auVar99[5] == -1);
          auVar86[6] = -(auVar99[6] == -1);
          auVar86[7] = -(auVar99[7] == -1);
          auVar86[8] = -(auVar99[8] == -1);
          auVar86[9] = -(auVar99[9] == -1);
          auVar86[10] = -(auVar99[10] == -1);
          auVar86[0xb] = -(auVar99[0xb] == -1);
          auVar86[0xc] = -(auVar99[0xc] == -1);
          auVar86[0xd] = -(auVar99[0xd] == -1);
          auVar86[0xe] = -(auVar99[0xe] == -1);
          auVar86[0xf] = -(auVar99[0xf] == -1);
          uVar65 = (ushort)(SUB161(auVar86 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar86 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar86 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar86 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar86 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar86 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar86 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar86 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar86 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar86 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar86 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar86 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar86 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar86 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar86 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar86[0xf] >> 7) << 0xf;
          pppfVar53 = (float ***)(ulonglong)uVar65;
          if (uVar65 != 0) break;
          uVar31 = uVar31 + lVar67 + 0x10;
          lVar67 = lVar67 + 0x10;
        }
        lVar30 = 0;
LAB_140089ed2:
        lVar67 = lVar30 + -0x20;
        if (lVar30 == 0) {
          lVar67 = 0;
        }
      }
      uStack_208 = (float ****)0x1;
      uStack_200._0_4_ = (float)lVar67;
      uStack_200._4_4_ = (float)((ulonglong)lVar67 >> 0x20);
      uStack_1f8 = 0;
      uStack_1f4 = 0;
      appppfStack_1f0[1] = (float ****)0x0;
      pdb_14017dd40(&lStack_358,&uStack_208);
      if (lStack_348 != 0) {
        lVar67 = 0;
        do {
          uVar31 = *(ulonglong *)(pbStack_350 + lVar67) & 0xffffffff;
          pppfVar53 = (float ***)0x0;
          if (uVar31 == 0) break;
          pppfVar53 = (float ***)(uVar31 ^ 0xffffffff);
          if ((((pppfVar53 < ppppfStack_120[2]) &&
               (pppfVar53 = ppppfStack_120[1] + (longlong)pppfVar53 * 3,
               *(int *)(pppfVar53 + 2) == (int)(*(ulonglong *)(pbStack_350 + lVar67) >> 0x20))) &&
              (*(int *)pppfVar53 != 0)) &&
             ((ppfVar45 = pppfVar53[1],
              (float ***)((ulonglong)ppfVar45 & 0xffffffff) < ppppfStack_130[7] &&
              (((ulonglong)ppppfStack_130[5][(ulonglong)ppfVar45 >> 6 & 0x3ffffff] >>
                ((ulonglong)ppfVar45 & 0x3f) & 1) != 0)))) {
            ppfVar5 = ppppfStack_120[0x34][((ulonglong)ppfVar45 >> 0x20) * 9 + 3];
            uVar31 = ~(ulonglong)
                      ppppfStack_120[0x34][((ulonglong)ppfVar45 >> 0x20) * 9 + 7]
                      [(longlong)ppppfStack_130[0x22]];
            lVar30 = (longlong)ppfVar5[uVar31 * 6 + 2];
            pppfVar53 = (float ***)(ulonglong)~*(uint *)((longlong)pppfVar53 + 4);
            lVar69 = (longlong)pppfVar53 * 0x30;
            uStack_208 = _auStack_518;
            appppfStack_1f0[0] = (float ****)CONCAT44(uStack_4fc,uStack_500);
            appppfStack_1f0[1] = (float ****)CONCAT44(uStack_4f4,uStack_4f8);
            pppfStack_1e0 = (float ***)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
            uStack_1f8 = SUB84(pauStack_508,0);
            uStack_1f4 = (undefined4)((ulonglong)pauStack_508 >> 0x20);
            uStack_200._0_4_ = auStack_518._8_4_;
            uStack_200._4_4_ = auStack_518._12_4_;
            *(int *)((longlong)ppfVar5[uVar31 * 6 + 5] + (longlong)pppfVar53 * 4) =
                 (int)ppppfStack_140;
            auVar13._8_8_ = appppfStack_1f0[0];
            auVar13._0_8_ = pauStack_508;
            auVar14._8_8_ = pppfStack_1e0;
            auVar14._0_8_ = appppfStack_1f0[1];
            *(undefined1 (*) [16])(lVar30 + 0x20 + lVar69) = auVar14;
            *(undefined1 (*) [16])(lVar30 + 0x10 + lVar69) = auVar13;
            *(undefined8 *)(lVar30 + lVar69) = _auStack_518;
            ((undefined8 *)(lVar30 + lVar69))[1] = stack0xfffffffffffffaf0;
          }
          lVar67 = lVar67 + 8;
        } while (lStack_348 << 3 != lVar67);
      }
      if (lStack_358 != 0) {
        pub_1406abac0(pbStack_350,lStack_358 << 3,8);
      }
      uStack_208 = (float ****)uStack_3a0;
      uStack_200._0_4_ = (float)uVar38;
      uStack_200._4_4_ = (float)((ulonglong)uVar38 >> 0x20);
      uStack_1f8 = (undefined4)uVar37;
      uStack_1f4 = (undefined4)((ulonglong)uVar37 >> 0x20);
      appppfStack_1f0[0] = ppppfStack_100;
      appppfStack_1f0[1] = (float ****)pppfStack_118;
      pdb_140f04aa0(&uStack_208,&UNK_142e37ec8);
      uStack_208 = (float ****)0x1;
      uStack_1f8 = 4;
      uStack_1f4 = 0;
      appppfStack_1f0[0] = (float ****)&ppppfStack_4d8;
      appppfStack_1f0[1] = apppfStack_4a0;
      pppfStack_1e0 = appfStack_468;
      uStack_1d8 = appfStack_430;
      param_15 = (float ****)0x0;
      while (param_15 != (float ****)0x4) {
        while (*(int *)appppfStack_1f0[(longlong)param_15] == 2) {
          param_15 = (float ****)((longlong)param_15 + 1);
          if (param_15 == (float ****)0x4) {
            param_15 = (float ****)0x4;
            goto LAB_14008a180;
          }
        }
        param_15 = (float ****)((longlong)param_15 + 1);
        uStack_200 = param_15;
        pdb_140a8a860();
      }
LAB_14008a180:
      pdb_1404c5ab0(&ppppfStack_4d8);
      ppppfVar32 = ppppfVar32 + 0x38;
    }
    pdb_1404dba50(&ppppfStack_238);
    pdb_140e08f50(auStack_804,pauStack_148);
    pdb_140e08fa0(auStack_518,pauStack_148);
    pdb_140df45c0(&uStack_7b8,auStack_518);
    fVar112 = fVar112 / SQRT(uStack_7b8._4_4_ * uStack_7b8._4_4_ +
                             (float)uStack_7b8 * (float)uStack_7b8 + fStack_7b0 * fStack_7b0);
    uStack_618 = CONCAT44(fVar112 * uStack_7b8._4_4_,fVar112 * (float)uStack_7b8);
    fStack_610 = fVar112 * fStack_7b0;
    *(float *)ppfStack_530 = fStack_1ac;
    pdb_140ab7ca0(auStack_578._0_8_,auStack_804,&uStack_618);
    uVar28 = *(undefined4 *)((longlong)plStack_538 + 0x1c);
    lVar67 = *plStack_538;
    puVar7 = (undefined4 *)plStack_538[2];
    *(undefined1 *)(lVar67 + 0xd8) = 0;
    *puVar7 = uVar28;
    *(undefined4 *)(lVar67 + 0xd4) = 0;
    lVar67 = *param_12;
    lVar30 = param_12[1];
    puVar39 = *(uint **)(lVar67 + 0xf8);
    puVar52 = puVar39 + *(longlong *)(lVar67 + 0x100);
    ppppfStack_120 = (float ****)CONCAT71(ppppfStack_120._1_7_,*(char *)(lVar67 + 0x108));
    if (ppppfStack_128 != (float ****)0x0) {
      ppppfStack_100 = ppppfStack_128;
    }
    lVar69 = 0;
    ppppfStack_130 = (float ****)0x8;
    pppfStack_118 = (float ***)0x8;
    uVar26 = 0;
    if (*(char *)(lVar67 + 0x108) != '\0') goto LAB_14008a340;
    do {
      if (uVar26 == (uint)lVar69) {
        do {
          if (puVar39 == puVar52) goto LAB_14008a422;
          uVar26 = *puVar39;
          puVar39 = puVar39 + 1;
          lVar67 = *(longlong *)(lVar30 + 0x100);
          lVar69 = *(longlong *)(lVar67 + 0x58 + (ulonglong)uVar26 * 0xa0);
        } while (lVar69 == 0);
        pppfStack_118 = *(float ****)(lVar67 + (ulonglong)uVar26 * 0xa0 + 0x50);
        uVar26 = 0;
      }
      ppppfVar32 = (float ****)(pppfStack_118 + (ulonglong)uVar26 * 2);
      while( true ) {
        pppfVar58 = *ppppfVar32;
        if ((int)pppfVar58 == 0) goto LAB_14008a422;
        pppfVar35 = ppppfStack_100[2];
        if ((ulonglong)((longlong)*ppppfStack_100 - (longlong)pppfVar35) < 0x18) {
          pppfVar53 = (float ***)0x1;
          pdb_142d7f1b0(ppppfStack_100,pppfVar35,0x18,1,1);
        }
        uVar26 = uVar26 + 1;
        pppfVar44 = ppppfStack_100[1];
        *(code **)((longlong)pppfVar44 + (longlong)pppfVar35) = pdb_140093020;
        *(float ****)((longlong)(pppfVar44 + 1) + (longlong)pppfVar35) = pppfVar58;
        *(code **)((longlong)(pppfVar44 + 2) + (longlong)pppfVar35) = pdb_1400934c0;
        param_15 = (float ****)(pppfVar35 + 3);
        ppppfStack_100[2] = (float ***)param_15;
        if ((char)ppppfStack_120 == '\0') break;
LAB_14008a340:
        if (uVar26 == (uint)lVar69) {
          do {
            if (puVar39 == puVar52) goto LAB_14008a422;
            uVar26 = *puVar39;
            puVar39 = puVar39 + 1;
            lVar67 = *(longlong *)(lVar30 + 0x1a0);
            lVar69 = *(longlong *)(lVar67 + 0x10 + (ulonglong)uVar26 * 0x48);
          } while (lVar69 == 0);
          ppppfStack_130 = *(float *****)(lVar67 + (ulonglong)uVar26 * 0x48 + 8);
          uVar26 = 0;
        }
        ppppfVar32 = ppppfStack_130 + uVar26;
      }
    } while( true );
  }
  goto LAB_14008a46f;
LAB_140088d70:
  if ((uint)ppppfStack_128 != 0) {
    fVar111 = *(float *)(ppppfStack_100 + 6);
    fVar97 = *(float *)((longlong)ppppfStack_100 + 0x34);
    fVar102 = *(float *)(ppppfStack_100 + 7);
    fVar103 = *(float *)((longlong)ppppfStack_100 + 0x3c);
    fVar105 = fVar97 * fVar74 * _DAT_142e377d0 + fVar102 * fVar72 * _DAT_142e377c0 +
              fVar103 * fVar113 * _DAT_142e377b0 + fVar112 * fVar111;
    fVar104 = fVar111 * fVar74 * _UNK_142e377d4 + fVar103 * fVar72 * _UNK_142e377c4 +
              fVar102 * fVar113 * _UNK_142e377b4 + fVar112 * fVar97;
    fVar126 = fVar103 * fVar74 * _UNK_142e377d8 + fVar111 * fVar72 * _UNK_142e377c8 +
              fVar97 * fVar113 * _UNK_142e377b8 + fVar112 * fVar102;
    fVar103 = fVar102 * fVar74 * _UNK_142e377dc + fVar97 * fVar72 * _UNK_142e377cc +
              fVar111 * fVar113 * _UNK_142e377bc + fVar112 * fVar103;
    fVar111 = *(float *)((longlong)ppppfStack_100 + 0x18c);
    fVar97 = *(float *)(ppppfStack_100 + 0x32);
    fVar102 = *(float *)((longlong)ppppfStack_100 + 0x194);
    fVar110 = fVar126 * fVar126;
    fVar115 = fVar103 * fVar103;
    fVar118 = fVar104 * fVar104 + fVar105 * fVar105;
    fVar108 = fVar102 * fVar126 + fVar97 * fVar104 + fVar111 * fVar105;
    fVar108 = fVar108 + fVar108;
    fVar103 = fVar103 + fVar103;
    *(ulonglong *)(pfStack_5d0 + 4) =
         CONCAT44((float)((ulonglong)uStack_288 >> 0x20) +
                  fVar103 * (fVar126 * fVar111 - fVar102 * fVar105) +
                  fVar108 * fVar104 + (fVar115 - (fVar118 + fVar110)) * fVar97,
                  (float)uStack_288 +
                  fVar103 * (fVar104 * fVar102 - fVar97 * fVar126) +
                  fVar108 * fVar105 + (fVar115 - (fVar118 + fVar110)) * fVar111);
    pfStack_5d0[6] =
         fVar103 * (fVar105 * fVar97 - fVar111 * fVar104) +
         fVar108 * fVar126 + (fVar115 - (fVar118 + fVar110)) * fVar102 + fStack_280;
    fVar97 = fVar74 * _DAT_142e37a10 * fVar96 + fVar72 * _DAT_142e37a00 * fVar114 +
             fVar113 * _DAT_142e379f0 * fVar82 + fVar112 * _DAT_142e379e0;
    fVar103 = fVar74 * _UNK_142e37a14 * fVar106 + fVar72 * _UNK_142e37a04 * fVar117 +
              fVar113 * _UNK_142e379f4 * fVar73 + fVar112 * _UNK_142e379e4;
    fVar108 = fVar74 * _UNK_142e37a18 * fVar107 + fVar72 * _UNK_142e37a08 * fVar120 +
              fVar113 * _UNK_142e379f8 * fVar91 + fVar112 * _UNK_142e379e8;
    fVar119 = fVar74 * _UNK_142e37a1c * fVar109 + fVar72 * _UNK_142e37a0c * fVar123 +
              fVar113 * _UNK_142e379fc * fVar92 + fVar112 * _UNK_142e379ec;
    fVar110 = fVar119 * _DAT_142e37a20;
    fVar115 = fVar119 * _UNK_142e37a24;
    fVar118 = fVar119 * _UNK_142e37a28;
    fVar119 = fVar119 * _UNK_142e37a2c;
    fVar111 = fVar97 * _DAT_142e37a30;
    fVar113 = fVar97 * _UNK_142e37a34;
    fVar72 = fVar97 * _UNK_142e37a38;
    fVar97 = fVar97 * _UNK_142e37a3c;
    fVar74 = fVar103 * _DAT_142e37a40;
    fVar112 = fVar103 * _UNK_142e37a44;
    fVar102 = fVar103 * _UNK_142e37a48;
    fVar103 = fVar103 * _UNK_142e37a4c;
    fVar105 = fVar108 * _DAT_142e37a50;
    fVar104 = fVar108 * _UNK_142e37a54;
    fVar126 = fVar108 * _UNK_142e37a58;
    fVar108 = fVar108 * _UNK_142e37a5c;
    *puStack_5c8 = uStack_330;
    *pfStack_5d0 = fVar105 * fVar96 + fVar74 * fVar114 + fVar111 * fVar82 + fVar110;
    pfStack_5d0[1] = fVar104 * fVar106 + fVar112 * fVar117 + fVar113 * fVar73 + fVar115;
    pfStack_5d0[2] = fVar126 * fVar107 + fVar102 * fVar120 + fVar72 * fVar91 + fVar118;
    pfStack_5d0[3] = fVar108 * fVar109 + fVar103 * fVar123 + fVar97 * fVar92 + fVar119;
    fVar111 = ppppfStack_178._0_4_;
  }
  pppfVar58 = pppfStack_118;
  ppppfVar32 = (float ****)auStack_168._0_8_;
  lVar30 = lStack_5d8;
  lVar67 = lStack_5e0;
  fVar113 = _DAT_142e37870;
  goto LAB_140087d45;
LAB_140089900:
  do {
    if ((ppppfVar32 == (float ****)0x0) || (ppppfVar51 = ppppfVar32, ppppfVar32 == param_15)) {
      if ((ppppfVar54 == (float ****)0x0) || (ppppfVar54[2] == (float ***)0x0)) goto LAB_140089990;
      ppppfVar32 = ppppfVar54 + 1;
      param_15 = (float ****)(*ppppfVar32 + (longlong)ppppfVar54[2] * 7);
      ppppfVar54 = (float ****)0x0;
      ppppfVar51 = (float ****)*ppppfVar32;
    }
    cVar23 = pdb_140a8a690(ppppfVar51);
    ppppfVar32 = ppppfVar51 + 7;
  } while (cVar23 != '\0');
  fVar91 = *(float *)((longlong)ppppfStack_100 + 0x1bc) * fVar111;
  fVar73 = _DAT_142e36f50;
  if (_DAT_142e36f50 <= fVar91) {
    fVar73 = fVar91;
  }
  fVar91 = fVar113;
  if (fVar73 <= fVar113) {
    fVar91 = fVar73;
  }
  pdb_140a8e0c0(ppppfVar51,fVar91 * *(float *)(ppppfVar51 + 6));
  *(uint *)((longlong)ppppfStack_100 + 0x1bc) = 0;
  pdb_140a8a6f0();
LAB_140089990:
  if (*(uint *)ppppfStack_188 != 2) {
    if (fVar72 <= fVar82) {
      pdb_140a8a860();
    }
    else {
      pdb_140a8a6f0();
    }
  }
  if (((byte)uStack_300 & *(float *)(ppppfStack_100 + 0x2e) <= 0.0) == 0) {
    *(float *)(ppppfStack_100 + 0x2e) = *(float *)(ppppfStack_100 + 0x2e) - fStack_134;
  }
  else {
    if (!SBORROW8(0,(longlong)ppppfStack_100[0x24])) {
      pppfVar35 = ppppfStack_100[0x2d];
      if (ppppfStack_100[0x26] <= pppfVar35) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pppfVar35,ppppfStack_100[0x26],&UNK_142e37ef8);
      }
      pppfVar44 = ppppfStack_100[0x25] + (longlong)pppfVar35 * 7;
      pdb_140a8e0c0(pppfVar44,
                    *(float *)(ppppfStack_100[0x25] + (longlong)pppfVar35 * 7 + 6) * fVar74);
      pdb_140a8a6f0(pppfVar44);
      auStack_514._4_4_ = fStack_28c;
      auVar77 = _auStack_518;
      auStack_514._0_4_ = fStack_290;
      auStack_518 = (undefined1  [4])fStack_294;
      stack0xfffffffffffffaf0 = auVar77._8_8_;
      pdb_140a8e190(pppfVar44,auStack_518);
    }
    if (!SBORROW8(0,(longlong)ppppfStack_100[0x27])) {
      pppfVar35 = ppppfStack_100[0x2d];
      if (ppppfStack_100[0x29] <= pppfVar35) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pppfVar35,ppppfStack_100[0x29],&UNK_142e37f10);
      }
      pppfVar44 = ppppfStack_100[0x28] + (longlong)pppfVar35 * 7;
      pdb_140a8e0c0(pppfVar44,
                    *(float *)(ppppfStack_100[0x28] + (longlong)pppfVar35 * 7 + 6) * fVar74);
      pdb_140a8a6f0(pppfVar44);
      pdb_140a8e190(pppfVar44,&fStack_294);
    }
    pppfVar35 = (float ***)((longlong)ppppfStack_100[0x2d] + 1);
    ppppfStack_100[0x2d] = pppfVar35;
    *(uint *)(ppppfStack_100 + 0x2e) = 0x3e800000;
    if (!SBORROW8(0,(longlong)ppppfStack_100[0x24])) {
      pppfVar44 = ppppfStack_100[0x26];
      if (pppfVar44 == (float ***)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8510(&UNK_142e37f28);
      }
      if (((ulonglong)pppfVar35 | (ulonglong)pppfVar44) >> 0x20 == 0) {
        ppppfStack_100[0x2d] =
             (float ***)(((ulonglong)pppfVar35 & 0xffffffff) % ((ulonglong)pppfVar44 & 0xffffffff));
        iVar71 = *(int *)auStack_168._0_8_;
      }
      else {
        ppppfStack_100[0x2d] = (float ***)((ulonglong)pppfVar35 % (ulonglong)pppfVar44);
        iVar71 = *(int *)auStack_168._0_8_;
      }
      goto joined_r0x000140089b38;
    }
  }
  iVar71 = *(int *)auStack_168._0_8_;
joined_r0x000140089b38:
  if (iVar71 != 2) {
    uVar26 = *(uint *)(ppppfStack_100 + 0x36);
    pdb_140a8e730(auStack_168._0_8_,&UNK_142e37d33,0xd);
    fVar82 = _DAT_142e37830;
    if ((float)(uVar26 & _DAT_142e377e0) <= _DAT_142e37830) {
      fVar82 = (float)(uVar26 & _DAT_142e377e0);
    }
    pdb_140a8e0c0(auStack_168._0_8_,
                  fVar82 * _DAT_142e3798c * _DAT_142e36f50 * *(float *)(ppppfStack_100 + 0xe));
  }
  goto LAB_140089570;
LAB_14008ad95:
  auVar77 = _DAT_142e37b30;
  if (ppppfVar51 != ppppfVar32) {
    ppppfVar54 = (float ****)((longlong)ppppfVar51 + 4);
    ppppfVar40 = ppppfVar54;
    ppppfVar46 = ppppfVar51;
    if (bVar70) {
      if (ppppfVar54 == ppppfVar32) goto LAB_14008b1ab;
      ppppfVar40 = ppppfVar51 + 1;
      ppppfVar46 = ppppfVar54;
      ppppfStack_130 = ppppfVar51;
    }
    uVar26 = *(uint *)ppppfStack_130;
    uVar27 = *(uint *)ppppfVar46;
    ppppfVar51 = ppppfStack_128;
    ppppfStack_130 = ppppfVar46;
    do {
      ppppfVar54 = ppppfVar51;
      if (ppppfVar54 == ppppfVar43) {
        bVar70 = false;
        ppppfVar51 = ppppfVar40;
        goto LAB_14008ad95;
      }
      uStack_f1 = 1;
      uVar62 = uVar27;
      uVar29 = pdb_140a61520(uVar26);
      ppppfVar51 = ppppfVar54 + 0x2a;
    } while ((*(uint *)(ppppfVar54 + 0x25) != uVar29) ||
            (*(uint *)((longlong)ppppfVar54 + 300) != uVar62));
    ppppfStack_100 = (float ****)0x4;
    pppfStack_118 = (float ***)0x0;
    pauVar68 = (undefined1 (*) [16])0x0;
    if (!SBORROW8(0,(longlong)ppppfVar54[0x13])) {
      uStack_f1 = 1;
      pdb_1401751d0(auStack_518);
      ppppfStack_100 = stack0xfffffffffffffaf0;
      if ((uVar27 == *(uint *)(ppppfVar54 + 0x25)) &&
         (uVar31 = (ulonglong)pauStack_508 >> 1, uVar31 != 0)) {
        ppppfVar32 = stack0xfffffffffffffaf0 + 1;
        puVar52 = (uint *)((longlong)stack0xfffffffffffffaf0 + ((longlong)pauStack_508 * 3 + -1) * 4
                          );
        do {
          pppfVar53 = ppppfVar32[-1];
          ppppfVar32[-1] = *(float ****)(puVar52 + -2);
          *(float ****)(puVar52 + -2) = pppfVar53;
          uVar62 = *(uint *)ppppfVar32;
          *(uint *)ppppfVar32 = *puVar52;
          *puVar52 = uVar62;
          ppppfVar32 = (float ****)((longlong)ppppfVar32 + 0xc);
          puVar52 = puVar52 + -3;
          uVar31 = uVar31 - 1;
        } while (uVar31 != 0);
      }
      pppfStack_118 = (float ***)_auStack_518;
      pauVar68 = pauStack_508;
    }
    auStack_514._0_4_ = uVar27;
    auStack_518 = (undefined1  [4])uVar26;
    uVar31 = *(ulonglong *)(lStack_170 + 0x70);
    if (uVar31 == 1) {
      lVar67 = *(longlong *)(lStack_170 + 0x68);
      if ((uVar26 != *(uint *)(lVar67 + 8)) || (uVar27 != *(uint *)(lVar67 + 0xc)))
      goto LAB_14008bdb1;
      uVar34 = 0;
    }
    else {
      if (uVar31 == 0) goto LAB_14008bdb1;
      uStack_f2 = 1;
      ppppfStack_140 = ppppfVar40;
      uVar34 = pdb_1400af680(auStack_168._0_8_,auStack_518);
      uStack_f2 = 1;
      uVar42 = pdb_1404014e0(ppppfStack_188);
      if ((uVar42 & 1) == 0) goto LAB_14008bdb1;
      if (uVar31 <= uVar34) {
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar34,uVar31,&UNK_142f77528);
      }
      lVar67 = *(longlong *)(lStack_170 + 0x68);
      ppppfVar40 = ppppfStack_140;
    }
    if ((*(char *)(lVar67 + 0x10 + uVar34 * 0x28) == '\0') &&
       (lVar67 = lVar67 + uVar34 * 0x28,
       *(char *)(lVar67 + 0x12) != '\0' || *(char *)(lVar67 + 0x11) != '\0')) {
      if (pauVar68 == (undefined1 (*) [16])0x0) {
        pauVar68 = (undefined1 (*) [16])0x0;
      }
      else {
        pauVar68 = (undefined1 (*) [16])(pauVar68[-1] + 0xf);
        pub_142e32770();
      }
    }
    auStack_514._0_4_ = uVar26;
    auStack_518 = (undefined1  [4])uVar27;
    uVar31 = *(ulonglong *)(lStack_170 + 0x70);
    if (uVar31 == 1) {
      lVar67 = *(longlong *)(lStack_170 + 0x68);
      if ((uVar27 != *(uint *)(lVar67 + 8)) || (uVar26 != *(uint *)(lVar67 + 0xc)))
      goto LAB_14008bdca;
      uVar34 = 0;
    }
    else {
      if (uVar31 == 0) {
LAB_14008bdca:
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142e37fe8);
      }
      uStack_f2 = 1;
      uVar34 = pdb_1400af680(auStack_168._0_8_,auStack_518);
      uStack_f2 = 1;
      uVar42 = pdb_1404014e0(ppppfStack_188);
      if ((uVar42 & 1) == 0) goto LAB_14008bdca;
      if (uVar31 <= uVar34) {
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar34,uVar31,&UNK_142f77528);
      }
      lVar67 = *(longlong *)(lStack_170 + 0x68);
    }
    if ((*(char *)(lVar67 + 0x10 + uVar34 * 0x28) == '\0') &&
       ((lVar67 = lVar67 + uVar34 * 0x28, *(char *)(lVar67 + 0x11) != '\0' ||
        (*(char *)(lVar67 + 0x12) == '\x01')))) {
      if (pauVar68 != (undefined1 (*) [16])0x0) {
        pauVar68 = (undefined1 (*) [16])(pauVar68[-1] + 0xf);
        goto LAB_14008b04f;
      }
    }
    else {
LAB_14008b04f:
      if (pauVar68 != (undefined1 (*) [16])0x0) {
        ppppfVar32 = (float ****)((longlong)ppppfStack_100 + (longlong)pauVar68 * 0xc);
        ppppfVar51 = ppppfStack_100;
        lVar67 = lStack_240;
        do {
          pppfVar53 = *ppppfVar51;
          fVar74 = *(float *)(ppppfVar51 + 1);
          if ((lVar67 == 0) || (pbStack_248 + lVar67 * 0xc == (byte *)0xc)) {
LAB_14008b110:
            if (lVar67 == lStack_250) {
              pdb_142db7820(&lStack_250);
            }
            *(float ****)(pbStack_248 + lVar67 * 0xc) = pppfVar53;
            *(float *)(pbStack_248 + lVar67 * 0xc + 8) = fVar74;
            lVar67 = lVar67 + 1;
            lStack_240 = lVar67;
          }
          else {
            pbVar64 = pbStack_248 + lVar67 * 0xc;
            iVar71 = -(uint)(fVar113 <
                            (float)((uint)((float)*(undefined8 *)(pbVar64 + -8) -
                                          (float)((ulonglong)pppfVar53 >> 0x20)) & uVar75));
            iVar66 = -(uint)(fVar72 < (float)((uint)((float)((ulonglong)
                                                             *(undefined8 *)(pbVar64 + -8) >> 0x20)
                                                    - fVar74) & uVar47));
            auVar89._4_4_ = iVar66;
            auVar89._0_4_ = iVar71;
            auVar89._8_4_ = iVar66;
            auVar89._12_4_ = iVar66;
            auVar88._8_8_ = auVar89._8_8_;
            auVar88._4_4_ = iVar71;
            auVar88._0_4_ = iVar71;
            iVar71 = movmskpd((int)pbVar64,auVar88);
            if ((fVar111 < (float)((uint)(*(float *)(pbVar64 + -0xc) - SUB84(pppfVar53,0)) & uVar75)
                ) || (iVar71 != 0)) goto LAB_14008b110;
          }
          ppppfVar51 = (float ****)((longlong)ppppfVar51 + 0xc);
        } while (ppppfVar51 != ppppfVar32);
      }
    }
    ppppfVar32 = uStack_268;
    bVar70 = false;
    ppppfVar51 = ppppfVar40;
    if (pppfStack_118 != (float ***)0x0) {
      pub_1406abac0((byte *)ppppfStack_100,(longlong)pppfStack_118 * 0xc,4);
      bVar70 = false;
    }
    goto LAB_14008ad95;
  }
LAB_14008b1ab:
  if (lStack_240 != 0) {
    uVar31 = lStack_240 * 0xc - 0xc;
    pbVar64 = pbStack_248;
    if (0x2f < uVar31) {
      uVar34 = uVar31 / 0xc + 1;
      uVar31 = 4;
      if ((uVar34 & 3) != 0) {
        uVar31 = (ulonglong)((uint)uVar34 & 3);
      }
      lVar67 = uVar34 - uVar31;
      pbVar64 = pbStack_248 + lVar67 * 0xc;
      pbVar41 = pbStack_248 + 0x28;
      do {
        auVar90._4_4_ = *(undefined4 *)(pbVar41 + -0x18);
        auVar90._0_4_ = *(undefined4 *)(pbVar41 + -0x24);
        auVar90._12_4_ = *(undefined4 *)pbVar41;
        auVar90._8_4_ = *(undefined4 *)(pbVar41 + -0xc);
        auVar99 = maxps(auVar90,auVar77);
        *(int *)(pbVar41 + -0x24) = auVar99._0_4_;
        *(int *)(pbVar41 + -0x18) = auVar99._4_4_;
        *(int *)(pbVar41 + -0xc) = auVar99._8_4_;
        *(int *)pbVar41 = auVar99._12_4_;
        pbVar41 = pbVar41 + 0x30;
        lVar67 = lVar67 + -4;
      } while (lVar67 != 0);
    }
    fVar111 = _DAT_142e37b40;
    do {
      fVar113 = *(float *)(pbVar64 + 4);
      if (*(float *)(pbVar64 + 4) <= fVar111) {
        fVar113 = fVar111;
      }
      *(float *)(pbVar64 + 4) = fVar113;
      pbVar64 = pbVar64 + 0xc;
    } while (pbVar64 != pbStack_248 + lStack_240 * 0xc);
  }
  lStack_348 = lStack_240;
  lStack_358 = lStack_250;
  pbStack_350 = pbStack_248;
  uStack_f1 = 0;
  pdb_140080930(auStack_518,&lStack_358,0);
  uStack_7e8 = stack0xfffffffffffffaf0;
  pauStack_7e0 = pauStack_508;
  if (SBORROW8(0,(longlong)_auStack_518)) {
    uStack_f1 = 0;
    ppppfVar32 = (float ****)pdb_142d88ef0(&uStack_7e8);
  }
  else {
    ppppfStack_7a0 = (float ****)CONCAT44(uStack_4fc,uStack_500);
    ppppfStack_798 = (float ****)CONCAT44(uStack_4f4,uStack_4f8);
    pppfStack_790 = (float ***)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
    uStack_788 = (float ***)auStack_4e8._0_8_;
    fStack_7b0 = auStack_518._8_4_;
    uStack_7ac = auStack_518._12_4_;
    pauStack_7a8 = pauStack_508;
    uStack_7b8._0_4_ = auStack_518;
    uStack_7b8._4_4_ = auStack_518._4_4_;
    pdb_14007fd10(&uStack_208,&uStack_7b8,_DAT_142e36f28,1);
    ppppfStack_7d8 = (float ****)CONCAT44(uStack_200._4_4_,(float)uStack_200);
    pauStack_7d0 = (undefined1 (*) [16])CONCAT44(uStack_1f4,uStack_1f8);
    ppppfVar32 = uStack_208;
    uStack_200 = ppppfStack_7d8;
    if (!SBORROW8(0,(longlong)uStack_208)) goto LAB_14008b4b2;
    ppppfVar32 = (float ****)pdb_142d88ef0(&ppppfStack_7d8);
    uStack_f1 = 0;
    pdb_1400d9b40(&uStack_7b8);
  }
  goto LAB_14008b39b;
LAB_14008a422:
  if (!SBORROW8(0,*plStack_110)) {
    pdb_1404cc590(plStack_110);
  }
  *plStack_110 = -0x8000000000000000;
LAB_14008a451:
  unaff_RSI = param_15;
  if (pppfStack_150 != (float ***)0x0) {
    pub_1406abac0(pbStack_190,(ulonglong)pppfStack_150,1);
  }
LAB_14008a46f:
  puVar18 = _DAT_143ca42d8;
  *_DAT_143ca42d8 = 0;
  uStack_4f0 = (float ***)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
  if (*pcStack_540 == '\x10') {
    unaff_RSI = (float ****)*pppfStack_2f0;
    cVar23 = pdb_140a36620(unaff_RSI);
    uStack_4f0 = (float ***)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
    if ((cVar23 == '\x03') &&
       (uStack_4f0 = (float ***)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0),
       SBORROW8(0,*plStack_110))) {
      pdb_140a34500(&uStack_7b8,unaff_RSI);
      pdb_140a344f0(auStack_518,unaff_RSI);
      uStack_200._0_4_ = fStack_7b0;
      uStack_208 = (float ****)CONCAT44(uStack_7b8._4_4_,(float)uStack_7b8);
      uStack_200._4_4_ = auStack_518;
      uStack_1f8 = auStack_518._4_4_;
      uStack_1f4 = auStack_514._4_4_;
      pdb_1409ed340(&uStack_7b8,&uStack_8f8,&uStack_208);
      uStack_4f0 = (float ***)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
      uStack_200 = (float ****)CONCAT44(uStack_200._4_4_,(float)uStack_200);
      if ((uStack_788._4_4_ != 2) &&
         ((uStack_4f0 = (float ***)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0),
          uStack_200 = (float ****)CONCAT44(uStack_200._4_4_,(float)uStack_200),
          (char)uStack_7b8 == '\x04' &&
          (uStack_4f0 = (float ***)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0),
          uStack_200 = (float ****)CONCAT44(uStack_200._4_4_,(float)uStack_200),
          CONCAT44(uStack_7ac,fStack_7b0) == 2)))) {
        ppppfStack_238 = (float ****)CONCAT44(ppppfStack_238._4_4_,uStack_7b8._4_4_);
        ppppfStack_120 = (float ****)CONCAT44(ppppfStack_120._4_4_,uStack_7b8._4_4_);
        piVar50 = (int *)pdb_140c40010(uStack_528);
        uStack_4f0 = (float ***)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
        uStack_200 = (float ****)CONCAT44(uStack_200._4_4_,(float)uStack_200);
        if (piVar50 != (int *)0x0) {
          pfVar36 = (float *)pdb_140901170(piVar50,&UNK_142e37cd0);
          uStack_4f0 = (float ***)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
          uStack_200 = (float ****)CONCAT44(uStack_200._4_4_,(float)uStack_200);
          if (*piVar50 == 6) {
            fVar111 = *pfVar36;
            fVar113 = pfVar36[1];
            pdb_140c26890(auStack_518,uStack_520,*(undefined8 *)(piVar50 + 2));
            uStack_4f0 = (float ***)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
            uStack_200 = (float ****)CONCAT44(uStack_200._4_4_,(float)uStack_200);
            if (auStack_518 != (undefined1  [4])0x3) {
              uVar38 = CONCAT44(uStack_4f4,uStack_4f8);
              ppppfStack_2d8 = (float ****)CONCAT44(uStack_4c8,uStack_4cc);
              ppppfStack_2d0 = (float ****)CONCAT44(ppppfStack_2d0._4_4_,uStack_4c4);
              uStack_4f0 = (float ***)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
              uStack_200 = (float ****)CONCAT44(uStack_200._4_4_,(float)uStack_200);
              if (iStack_4d0 == 1) {
                uVar37 = pdb_1406d0830(lStack_2e8 + 0x18);
                register0x00000000 = (float ****)pdb_14008d610(uVar37,&ppppfStack_238);
                _auStack_518 = (float ****)0x1;
                pauStack_508 = (undefined1 (*) [16])0x0;
                uStack_4f8 = 0;
                uStack_4f4 = 0;
                uVar31 = pdb_14037a640(auStack_518);
                if ((uVar31 & 0xffffffff) != 0) {
                  pub_142e32980();
                  uVar26 = pub_142e32b30();
                  uVar75 = pub_142e329e0();
                  ppppfStack_81c = ppppfStack_2d8;
                  uStack_814 = ppppfStack_2d0._0_4_;
                  uStack_848 = 0;
                  uStack_840 = 0;
                  uStack_820 = (int)ppppfStack_120;
                  *puVar18 = 1;
                  ppfVar45 = (float **)(ulonglong)*(uint *)(*param_5 + 0xa8);
                  uStack_844 = uVar26;
                  uStack_83c = uVar75;
                  uStack_838 = uVar31;
                  uStack_830 = uVar38;
                  fStack_828 = fVar111;
                  fStack_824 = fVar113;
                  cVar23 = pdb_140938b60(ppfVar45,*(undefined4 *)(*param_5 + 0xac));
                  if (cVar23 != '\0') {
                    ppppfVar32 = (float ****)param_8[1];
                    pppfVar53 = (float ***)(uVar31 & 0xffffffff ^ 0xffffffff);
                    uVar28 = 1;
                    if (ppppfVar32[2] <= pppfVar53) {
LAB_14008be2a:
                      auStack_514._0_4_ = (int)ppfVar45;
                      auStack_518 = (undefined1  [4])uVar28;
                      stack0xfffffffffffffaf0 = (float ****)uVar31;
                    /* WARNING: Subroutine does not return */
                      pdb_142dc8170(&UNK_142e380d0,0x2b,auStack_518,&UNK_142e380b0,&UNK_142e37f40);
                    }
                    pppfVar53 = ppppfVar32[1] + (longlong)pppfVar53 * 3;
                    ppfVar45 = (float **)(uVar31 >> 0x20);
                    if ((*(float *)(pppfVar53 + 2) != (float)(uVar31 >> 0x20)) ||
                       (*(float *)pppfVar53 == 0.0)) goto LAB_14008be2a;
                    ppppfVar51 = (float ****)*param_8;
                    ppfVar45 = pppfVar53[1];
                    uVar28 = 0;
                    if ((ppppfVar51[7] <= (float ***)((ulonglong)ppfVar45 & 0xffffffff)) ||
                       (((ulonglong)ppppfVar51[5][(ulonglong)ppfVar45 >> 6 & 0x3ffffff] >>
                         ((ulonglong)ppfVar45 & 0x3f) & 1) == 0)) goto LAB_14008be2a;
                    pfVar36 = (float *)((longlong)
                                        ppppfVar32[0x34][((ulonglong)ppfVar45 >> 0x20) * 9 + 3]
                                        [~(ulonglong)
                                          ppppfVar32[0x34][((ulonglong)ppfVar45 >> 0x20) * 9 + 7]
                                          [(longlong)ppppfVar51[0x22]] * 6 + 2] +
                                       (ulonglong)~(uint)*(float *)((longlong)pppfVar53 + 4) * 0x30)
                    ;
                    fVar72 = *pfVar36;
                    fVar74 = pfVar36[1];
                    fVar112 = pfVar36[2];
                    fVar82 = pfVar36[3];
                    uStack_278 = ppppfVar32;
                    ppppfStack_178 = ppppfVar51;
                    lVar67 = pdb_1405cb340(lStack_170 + 0xa8,fVar111,fVar113);
                    if (lVar67 != 0) {
                      fVar114 = (float)(uVar26 ^ _UNK_142e377a4);
                      fVar117 = (float)(uVar75 ^ _UNK_142e377ac);
                      fVar73 = fVar114 * fVar112 * _DAT_142e377d0 +
                               _UNK_142e377a8 * fVar74 * _DAT_142e377c0 +
                               fVar117 * fVar72 * _DAT_142e377b0 + fVar82 * _DAT_142e377a0;
                      fVar91 = _DAT_142e377a0 * fVar112 * _UNK_142e377d4 +
                               fVar117 * fVar74 * _UNK_142e377c4 +
                               _UNK_142e377a8 * fVar72 * _UNK_142e377b4 + fVar82 * fVar114;
                      fVar92 = fVar117 * fVar112 * _UNK_142e377d8 +
                               _DAT_142e377a0 * fVar74 * _UNK_142e377c8 +
                               fVar114 * fVar72 * _UNK_142e377b8 + fVar82 * _UNK_142e377a8;
                      fVar72 = _UNK_142e377a8 * fVar112 * _UNK_142e377dc +
                               fVar114 * fVar74 * _UNK_142e377cc +
                               _DAT_142e377a0 * fVar72 * _UNK_142e377bc + fVar82 * fVar117;
                      fVar74 = fVar91 * fVar91 + fVar73 * fVar73;
                      fVar112 = (fVar72 * fVar72 - (fVar74 + fVar92 * fVar92)) * _DAT_142e37af0;
                      fVar114 = (fVar72 * fVar72 - (fVar74 + fVar92 * fVar92)) * _UNK_142e37af8;
                      fVar74 = _UNK_142e37b08 * fVar92 +
                               _UNK_142e37b04 * fVar91 + _DAT_142e37b00 * fVar73;
                      fVar74 = fVar74 + fVar74;
                      fVar82 = fVar91 * _DAT_142e37b10;
                      fVar117 = fVar73 * _UNK_142e37b18;
                      fVar120 = fVar92 * _DAT_142e377a0;
                      fVar91 = fVar91 * _UNK_142e377a8;
                      uVar38 = *(undefined8 *)(lVar67 + 8);
                      pdb_14007ee60();
                      ppppfStack_1a0 = (float ****)pub_1406abab0(8,4);
                      if (((fVar72 + fVar72) * (fVar117 - fVar91) + fVar74 * fVar92 + fVar114) *
                          (float)((ulonglong)uVar38 >> 0x20) +
                          ((fVar72 + fVar72) * (fVar82 - fVar120) + fVar74 * fVar73 + fVar112) *
                          (float)uVar38 <= 0.0) {
                        fVar74 = fVar113;
                        fVar72 = fVar111;
                        if (ppppfStack_1a0 == (float ****)0x0) {
                    /* WARNING: Subroutine does not return */
                          pdb_142dc7e11(4,8);
                        }
                      }
                      else {
                        fVar74 = fVar111;
                        fVar72 = fVar113;
                        if (ppppfStack_1a0 == (float ****)0x0) {
                    /* WARNING: Subroutine does not return */
                          pdb_142dc7e11(4,8);
                        }
                      }
                      uVar31 = (ulonglong)(uint)fVar72;
                      *(float *)ppppfStack_1a0 = fVar74;
                      *(float *)((longlong)ppppfStack_1a0 + 4) = fVar72;
                      lStack_1a8 = 2;
                      lStack_198 = 2;
                      uVar38 = pdb_140332e50(&UNK_142e37c18);
                      pauStack_508 = _DAT_142e38040;
                      uStack_500 = (undefined4)_UNK_142e38048;
                      uStack_4fc = (undefined4)((ulonglong)_UNK_142e38048 >> 0x20);
                      stack0xfffffffffffffaf0 = (float ****)_UNK_142e38038;
                      _auStack_518 = (float ****)_DAT_142e38030;
                      uStack_4f8 = (undefined4)uVar38;
                      uStack_4f4 = (undefined4)((ulonglong)uVar38 >> 0x20);
                      uStack_4f0._0_4_ = (undefined4)uVar31;
                      uStack_4f0._4_4_ = (undefined4)(uVar31 >> 0x20);
                      uStack_7b8._0_4_ = 1.4013e-45;
                      uStack_7b8._4_4_ = fVar111;
                      fStack_7b0 = fVar113;
                      pdb_1401470b0(auStack_518,&uStack_7b8);
                      uStack_220._0_4_ = uStack_500;
                      auStack_228 = (undefined1  [8])pauStack_508;
                      uStack_220._4_4_ = uStack_4fc;
                      auStack_218._4_4_ = uStack_4f4;
                      auStack_218._0_4_ = uStack_4f8;
                      auStack_218._8_4_ = (undefined4)uStack_4f0;
                      auStack_218._12_4_ = uStack_4f0._4_4_;
                      ppppfStack_238 = _auStack_518;
                      ppppfStack_230 = stack0xfffffffffffffaf0;
                      do {
                        if ((lStack_198 == 0) ||
                           (puVar52 = (uint *)((longlong)ppppfStack_1a0 + (lStack_198 + -1) * 4),
                           puVar52 == (uint *)0x0)) {
                    /* WARNING: Subroutine does not return */
                          pdb_142dc8150(&UNK_142e37fb8);
                        }
                        uVar26 = *puVar52;
                        uVar38 = pdb_140a61160(uStack_598);
                        puVar52 = (uint *)(ulonglong)uVar26;
                        puVar39 = (uint *)pdb_1405cb9e0(uVar38);
LAB_14008ac49:
                        fVar72 = _UNK_142e37b24;
                        fVar113 = _DAT_142e37b20;
                        fVar111 = _DAT_142e37848;
                        uVar47 = _UNK_142e377e4;
                        uVar75 = _DAT_142e377e0;
                        if (puVar39 == puVar52) {
                          lStack_250 = 0;
                          pbStack_248 = (byte *)0x4;
                          lStack_240 = 0;
                          ppppfVar32 = (float ****)((longlong)ppppfStack_1a0 + lStack_198 * 4);
                          ppppfStack_128 = *(float *****)(lStack_170 + 8);
                          ppppfVar43 = ppppfStack_128 + *(longlong *)(lStack_170 + 0x10) * 0x2a;
                          auStack_168._0_8_ = lStack_170 + 0x98;
                          ppppfStack_188 = (float ****)(lStack_170 + 0x60);
                          bVar70 = true;
                          ppppfVar51 = ppppfStack_1a0;
                          uStack_268 = ppppfVar32;
                          goto LAB_14008ad95;
                        }
                        uVar75 = *puVar39;
                        uVar47 = uVar75;
                        uVar27 = pdb_140a61520(uVar26);
                        auStack_514._0_4_ = uVar47;
                        auStack_518 = (undefined1  [4])uVar27;
                        if (uStack_220 != 0) {
                          uVar31 = pdb_1400af680(auStack_218,auStack_518);
                          puVar39 = puVar39 + 2;
                          bVar24 = (byte)(uVar31 >> 0x39);
                          auVar77 = ZEXT216(CONCAT11(bVar24,bVar24));
                          auVar77 = pshuflw(auVar77,auVar77,0);
                          lVar67 = 0;
                          while( true ) {
                            uVar31 = uVar31 & (ulonglong)ppppfStack_230;
                            auVar99 = *(undefined1 (*) [16])((longlong)ppppfStack_238 + uVar31);
                            auVar95[0] = -(auVar99[0] == auVar77[0]);
                            auVar95[1] = -(auVar99[1] == auVar77[1]);
                            auVar95[2] = -(auVar99[2] == auVar77[2]);
                            auVar95[3] = -(auVar99[3] == auVar77[3]);
                            auVar95[4] = -(auVar99[4] == auVar77[4]);
                            auVar95[5] = -(auVar99[5] == auVar77[5]);
                            auVar95[6] = -(auVar99[6] == auVar77[6]);
                            auVar95[7] = -(auVar99[7] == auVar77[7]);
                            auVar95[8] = -(auVar99[8] == auVar77[0]);
                            auVar95[9] = -(auVar99[9] == auVar77[1]);
                            auVar95[10] = -(auVar99[10] == auVar77[2]);
                            auVar95[0xb] = -(auVar99[0xb] == auVar77[3]);
                            auVar95[0xc] = -(auVar99[0xc] == auVar77[4]);
                            auVar95[0xd] = -(auVar99[0xd] == auVar77[5]);
                            auVar95[0xe] = -(auVar99[0xe] == auVar77[6]);
                            auVar95[0xf] = -(auVar99[0xf] == auVar77[7]);
                            uVar65 = (ushort)(SUB161(auVar95 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar95 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar95 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar95 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar95 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar95 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar95 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar95 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar95 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar95 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar95 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar95 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar95 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar95 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar95 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(auVar95[0xf] >> 7) << 0xf;
                            uVar62 = (uint)uVar65;
                            while (uVar65 != 0) {
                              uVar29 = 0;
                              for (uVar10 = uVar62; (uVar10 & 1) == 0;
                                  uVar10 = uVar10 >> 1 | 0x80000000) {
                                uVar29 = uVar29 + 1;
                              }
                              uVar34 = uVar29 + uVar31 & (ulonglong)ppppfStack_230;
                              if ((uVar27 == *(uint *)(ppppfStack_238 + (-1 - uVar34))) &&
                                 (uVar47 == *(uint *)((longlong)ppppfStack_238 +
                                                     (uVar34 * -2 + -1) * 4))) goto LAB_14008ac49;
                              uVar65 = (ushort)(uVar62 - 1) & (ushort)uVar62;
                              uVar62 = CONCAT22((short)(uVar62 - 1 >> 0x10),uVar65);
                            }
                            auVar87[0] = -(auVar99[0] == -1);
                            auVar87[1] = -(auVar99[1] == -1);
                            auVar87[2] = -(auVar99[2] == -1);
                            auVar87[3] = -(auVar99[3] == -1);
                            auVar87[4] = -(auVar99[4] == -1);
                            auVar87[5] = -(auVar99[5] == -1);
                            auVar87[6] = -(auVar99[6] == -1);
                            auVar87[7] = -(auVar99[7] == -1);
                            auVar87[8] = -(auVar99[8] == -1);
                            auVar87[9] = -(auVar99[9] == -1);
                            auVar87[10] = -(auVar99[10] == -1);
                            auVar87[0xb] = -(auVar99[0xb] == -1);
                            auVar87[0xc] = -(auVar99[0xc] == -1);
                            auVar87[0xd] = -(auVar99[0xd] == -1);
                            auVar87[0xe] = -(auVar99[0xe] == -1);
                            auVar87[0xf] = -(auVar99[0xf] == -1);
                            if ((((((((((((((((SUB161(auVar87 >> 7,0) & 1) != 0 ||
                                             (SUB161(auVar87 >> 0xf,0) & 1) != 0) ||
                                            (SUB161(auVar87 >> 0x17,0) & 1) != 0) ||
                                           (SUB161(auVar87 >> 0x1f,0) & 1) != 0) ||
                                          (SUB161(auVar87 >> 0x27,0) & 1) != 0) ||
                                         (SUB161(auVar87 >> 0x2f,0) & 1) != 0) ||
                                        (SUB161(auVar87 >> 0x37,0) & 1) != 0) ||
                                       (SUB161(auVar87 >> 0x3f,0) & 1) != 0) ||
                                      (SUB161(auVar87 >> 0x47,0) & 1) != 0) ||
                                     (SUB161(auVar87 >> 0x4f,0) & 1) != 0) ||
                                    (SUB161(auVar87 >> 0x57,0) & 1) != 0) ||
                                   (SUB161(auVar87 >> 0x5f,0) & 1) != 0) ||
                                  (SUB161(auVar87 >> 0x67,0) & 1) != 0) ||
                                 (SUB161(auVar87 >> 0x6f,0) & 1) != 0) ||
                                (SUB161(auVar87 >> 0x77,0) & 1) != 0) || auVar87[0xf] < '\0') break;
                            uVar31 = uVar31 + lVar67 + 0x10;
                            lVar67 = lVar67 + 0x10;
                          }
                        }
                        uVar28 = pdb_140a61520((uint *)(ulonglong)uVar26);
                        pdb_1403afce0(&ppppfStack_238,uVar28);
                        lVar67 = lStack_198;
                        if (lStack_198 == lStack_1a8) {
                          pdb_142d8d710(&lStack_1a8);
                        }
                        *(uint *)((longlong)ppppfStack_1a0 + lVar67 * 4) = uVar75;
                        lStack_198 = lVar67 + 1;
                      } while( true );
                    }
                    ppppfVar32 = (float ****)pdb_142d877a0(&UNK_142e38000,0x15);
                    goto LAB_14008b3ca;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  while( true ) {
    if (lStack_318 == 0) {
      return;
    }
    plVar33 = (longlong *)pdb_140e97000();
    if ((char)plVar33[0xd] != '\x01') {
      plVar33 = (longlong *)pdb_142d7de90(plVar33,0);
      pppfVar58 = pppfVar53;
      if (plVar33 == (longlong *)0x0) goto LAB_14008b5bd;
    }
    if (*plVar33 == 0) {
      *plVar33 = -1;
      ppppfStack_120 = (float ****)plVar33;
      pdb_140e95370(plVar33 + 1,uStack_310);
      *ppppfStack_120 = (float ***)((longlong)*ppppfStack_120 + 1);
      return;
    }
LAB_14008b4a6:
    ppppfVar32 = (float ****)pdb_142dc8090(&UNK_142f3dcc8);
LAB_14008b4b2:
    pppfStack_2b0 = pppfStack_1e0;
    pppfStack_2a8 = uStack_1d8;
    ppppfStack_2c0 = appppfStack_1f0[0];
    ppppfStack_2b8 = appppfStack_1f0[1];
    ppppfStack_2d0 = ppppfStack_7d8;
    pauStack_2c8 = pauStack_7d0;
    uStack_f3 = 1;
    ppppfStack_2d8 = ppppfVar32;
    pdb_1400d9b40(&uStack_7b8);
    auStack_4e8._0_8_ = pppfStack_2a8;
    uStack_4f8 = SUB84(ppppfStack_2b8,0);
    uStack_4f4 = (undefined4)((ulonglong)ppppfStack_2b8 >> 0x20);
    uStack_4f0._0_4_ = SUB84(pppfStack_2b0,0);
    uStack_4f0._4_4_ = (undefined4)((ulonglong)pppfStack_2b0 >> 0x20);
    pauStack_508 = pauStack_2c8;
    uStack_500 = SUB84(ppppfStack_2c0,0);
    uStack_4fc = (undefined4)((ulonglong)ppppfStack_2c0 >> 0x20);
    stack0xfffffffffffffaf0 = ppppfStack_2d0;
    _auStack_518 = ppppfStack_2d8;
    uStack_f3 = 0;
    pdb_140081a10(&uStack_7b8,auStack_518,4);
    uStack_7f8 = CONCAT44(uStack_7ac,fStack_7b0);
    pauStack_7f0 = pauStack_7a8;
    if (SBORROW8(0,CONCAT44(uStack_7b8._4_4_,(float)uStack_7b8))) break;
    pppfStack_1e0 = pppfStack_790;
    uStack_1d8 = uStack_788;
    appppfStack_1f0[0] = ppppfStack_7a0;
    appppfStack_1f0[1] = ppppfStack_798;
    uStack_200._0_4_ = fStack_7b0;
    uStack_200._4_4_ = (float)uStack_7ac;
    uStack_1f8 = SUB84(pauStack_7a8,0);
    uStack_1f4 = (undefined4)((ulonglong)pauStack_7a8 >> 0x20);
    uStack_208 = (float ****)CONCAT44(uStack_7b8._4_4_,(float)uStack_7b8);
    pdb_140f33350(&lStack_358);
    uStack_588 = 0;
    uStack_7b8._0_4_ = 0.0;
    uStack_7b8._4_4_ = (float)uStack_584;
    fStack_7b0 = (float)((ulonglong)uStack_584 >> 0x20);
    uStack_7ac = uStack_57c;
    pdb_140decfc0(auStack_518,&lStack_358,CONCAT44(uStack_200._4_4_,(float)uStack_200),
                  CONCAT44(uStack_1f4,uStack_1f8),&uStack_7b8,&uStack_588);
    pdb_140dedb80(&uStack_7b8,auStack_518);
    pdb_1404b26b0(&lStack_358);
    ppppfVar51 = (float ****)CONCAT44(uStack_7b8._4_4_,(float)uStack_7b8);
    ppppfVar32 = (float ****)CONCAT44(uStack_7ac,fStack_7b0);
    pauStack_8b8 = pauStack_7a8;
    ppppfStack_8b0 = ppppfStack_7a0;
    uStack_f3 = 0;
    pdb_1400d9b40(&uStack_208);
    pdb_1400db1d0(&ppppfStack_238);
    if (lStack_1a8 != 0) {
      pub_1406abac0((byte *)ppppfStack_1a0,lStack_1a8 << 2,4);
    }
    if (ppppfVar51 == (float ****)0x8000000000000001) goto LAB_14008b3ca;
    pauStack_8a8 = pauStack_8b8;
    ppppfStack_8a0 = ppppfStack_8b0;
    uStack_101 = 1;
    ppppfStack_130 = ppppfVar51;
    ppppfStack_100 = ppppfVar32;
    pdb_1400849a0(&ppppfStack_238,&uStack_8f8,uStack_528,lStack_2e8,uStack_520,ppppfStack_178,
                  uStack_278,&uStack_848,param_13);
    ppppfVar32 = ppppfStack_230;
    auVar20 = auStack_228;
    if (auStack_228 == (undefined1  [8])0x0) {
LAB_14008b7cd:
      uStack_102 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142e37f58);
    }
    lVar30 = 1;
    lVar67 = 0;
    while (*(int *)((longlong)ppppfStack_230 + lVar67 + 0x188) != (int)ppppfStack_120) {
      lVar30 = lVar30 + 1;
      lVar67 = lVar67 + 0x1c0;
      if ((longlong)auStack_228 * 0x1c0 - lVar67 == 0) goto LAB_14008b7cd;
    }
    lVar67 = *param_9;
    _auStack_518 = (float ****)param_9[1];
    unique0x00009000 = (float ****)((longlong)_auStack_518 + 0x198);
    lVar69 = *(longlong *)(lVar67 + 0xf8);
    uStack_4f0 = (float ***)(lVar69 + *(longlong *)(lVar67 + 0x100) * 4);
    ppppfStack_4c0 = (float ****)0x0;
    ppppfStack_4b8 = (float ****)0x0;
    iStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    pauStack_508 = (undefined1 (*) [16])((longlong)_auStack_518 + 0xf8);
    uStack_500 = (undefined4)lVar67;
    uStack_4fc = (undefined4)((ulonglong)lVar67 >> 0x20);
    uStack_4f8 = (undefined4)lVar69;
    uStack_4f4 = (undefined4)((ulonglong)lVar69 >> 0x20);
    auStack_4e8 = ZEXT816(8);
    ppppfStack_4d8 = (float ****)0x8;
    pppfStack_4b0 = (float ***)CONCAT71(pppfStack_4b0._1_7_,*(undefined1 *)(lVar67 + 0x108));
    uStack_102 = 1;
    pdb_140179db0(&ppppfStack_2d8,auStack_518);
    pauVar22 = pauStack_2c8;
    ppppfStack_120 = ppppfStack_2d0;
    stack0xfffffffffffffaf0 = (float ****)pauStack_2c8;
    _auStack_518 = ppppfStack_2d0;
    uStack_f4 = 1;
    pdb_140334a00(&UNK_142e382a8,auStack_518);
    pppfStack_118 = (float ***)(lVar30 + -1);
    ppppfStack_140 = (float ****)*param_11;
    ppppfStack_128 = ppppfStack_2d8;
    auStack_168._0_8_ = param_13[3];
    ppppfStack_188 = (float ****)param_13[2];
    uVar38 = *param_13;
    pauVar68 = (undefined1 (*) [16])param_13[1];
    lVar67 = 0;
    ppppfVar51 = ppppfVar32;
    ppppfVar43 = (float ****)param_11[1];
    while (pauVar55 = pauVar22, ppppfVar54 = ppppfVar51,
          ppppfVar54 != ppppfVar32 + (longlong)auVar20 * 0x38) {
      ppppfVar51 = ppppfVar54 + 0x38;
      lVar67 = lVar67 + 1;
      pauVar22 = pauVar55;
      if ((lVar30 != lVar67) &&
         (pauVar22 = (undefined1 (*) [16])0x0, pauVar55 != (undefined1 (*) [16])0x0)) {
        uStack_268 = (float ****)ppppfStack_120[(longlong)(pauVar55[-1] + 0xf)];
        pauVar22 = (undefined1 (*) [16])(pauVar55[-1] + 0xf);
        if (((ulonglong)uStack_268 & 0xffffffff) != 0) {
          pppfVar53 = (float ***)((ulonglong)uStack_268 & 0xffffffff ^ 0xffffffff);
          uStack_278 = ppppfVar43;
          if ((((pppfVar53 < ppppfVar43[2]) &&
               (pppfVar53 = ppppfVar43[1] + (longlong)pppfVar53 * 3,
               *(float *)(pppfVar53 + 2) == (float)((ulonglong)uStack_268 >> 0x20))) &&
              (*(float *)pppfVar53 != 0.0)) &&
             ((ppfVar45 = pppfVar53[1],
              (float ***)((ulonglong)ppfVar45 & 0xffffffff) < ppppfStack_140[7] &&
              (((ulonglong)ppppfStack_140[5][(ulonglong)ppfVar45 >> 6 & 0x3ffffff] >>
                ((ulonglong)ppfVar45 & 0x3f) & 1) != 0)))) {
            ppfVar5 = ppppfVar43[0x34][((ulonglong)ppfVar45 >> 0x20) * 9 + 3];
            ppfVar45 = ppppfVar43[0x34][((ulonglong)ppfVar45 >> 0x20) * 9 + 7];
            lVar69 = (ulonglong)~(uint)*(float *)((longlong)pppfVar53 + 4) * 0x90;
            uVar37 = *(undefined8 *)
                      ((longlong)
                       ppfVar5[~(ulonglong)ppfVar45[(longlong)ppppfStack_140[0x22]] * 6 + 2] + 0x80
                      + lVar69);
            uVar8 = *(undefined8 *)
                     ((longlong)
                      ppfVar5[~(ulonglong)ppfVar45[(longlong)ppppfStack_140[0x23]] * 6 + 2] + 0x80 +
                     lVar69);
            uStack_7b8._0_4_ = (float)uVar37;
            uStack_7b8._4_4_ = (float)((ulonglong)uVar37 >> 0x20);
            fStack_7b0 = (float)uVar8;
            uStack_7ac = (undefined4)((ulonglong)uVar8 >> 0x20);
            lVar69 = 0;
            while (lVar49 = lVar69, lVar49 != 0x10) {
              lVar69 = lVar49 + 8;
              if (*(int *)((longlong)&uStack_7b8 + lVar49) != 0) {
                stack0xfffffffffffffaf0 = (float ****)uVar38;
                _auStack_518 = (float ****)*(undefined8 *)((longlong)&uStack_7b8 + lVar49);
                uStack_500 = SUB84(ppppfStack_188,0);
                uStack_4fc = (undefined4)((ulonglong)ppppfStack_188 >> 0x20);
                uStack_4f8 = auStack_168._0_4_;
                uStack_4f4 = auStack_168._4_4_;
                uStack_f4 = 1;
                pauStack_508 = pauVar68;
                pdb_1400938d0(auStack_518,&UNK_142e37f70);
              }
            }
          }
          ppppfVar54[0x30] = (float ***)uStack_268;
          ppppfVar43 = uStack_278;
        }
      }
    }
    *(undefined4 *)plStack_538[2] = *(undefined4 *)((longlong)plStack_538 + 0x1c);
    *(undefined1 *)(*plStack_538 + 0xd8) = 1;
    *(float *)pppfStack_2f0[2] = *(float *)((longlong)pppfStack_2f0 + 0x1c);
    uStack_7b8._0_4_ = (float)_DAT_142e37b50;
    uStack_7b8._4_4_ = (float)((ulonglong)_DAT_142e37b50 >> 0x20);
    fStack_7b0 = -1.0;
    unaff_RSI = unaff_RSI + 0x5e;
    auStack_514._4_4_ = 0;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = stack0xfffffffffffffaf0;
    _auStack_518 = auVar16 << 0x40;
    uStack_f4 = 1;
    pdb_140ab7ca0(unaff_RSI,auStack_518,&uStack_7b8);
    uStack_7b8._0_4_ = SUB84(ppppfStack_130,0);
    uStack_7b8._4_4_ = (float)((ulonglong)ppppfStack_130 >> 0x20);
    fStack_7b0 = SUB84(ppppfStack_100,0);
    uStack_7ac = (undefined4)((ulonglong)ppppfStack_100 >> 0x20);
    pauStack_7a8 = pauStack_8a8;
    ppppfStack_7a0 = ppppfStack_8a0;
    uStack_1f8 = auStack_228._0_4_;
    uStack_1f4 = auStack_228._4_4_;
    uStack_208 = ppppfStack_238;
    uStack_200._0_4_ = SUB84(ppppfStack_230,0);
    uStack_200._4_4_ = (float)((ulonglong)ppppfStack_230 >> 0x20);
    uStack_f4 = 0;
    pppfVar53 = pppfStack_118;
    pdb_140085cd0(auStack_518,&uStack_7b8,&uStack_208,pppfStack_118,*pppfStack_590);
    ppppfStack_7a0 = (float ****)CONCAT44(uStack_4fc,uStack_500);
    ppppfStack_798 = (float ****)CONCAT44(uStack_4f4,uStack_4f8);
    pppfStack_790 = uStack_4f0;
    uStack_7b8._0_4_ = auStack_518;
    uStack_7b8._4_4_ = auStack_518._4_4_;
    fStack_7b0 = auStack_518._8_4_;
    uStack_7ac = auStack_518._12_4_;
    pauStack_7a8 = pauStack_508;
    uStack_788 = (float ***)auStack_4e8._0_8_;
    uStack_780 = auStack_4e8._8_8_;
    lStack_770 = CONCAT44(uStack_4cc,iStack_4d0);
    ppppfStack_778 = ppppfStack_4d8;
    if (!SBORROW8(0,*plStack_110)) {
      pdb_1404cc590(plStack_110);
    }
    plStack_110[8] = (longlong)ppppfStack_778;
    plStack_110[9] = lStack_770;
    *(undefined4 *)(plStack_110 + 6) = (undefined4)uStack_788;
    *(int *)((longlong)plStack_110 + 0x34) = uStack_788._4_4_;
    *(undefined4 *)(plStack_110 + 7) = (undefined4)uStack_780;
    *(undefined4 *)((longlong)plStack_110 + 0x3c) = uStack_780._4_4_;
    plStack_110[4] = (longlong)ppppfStack_798;
    plStack_110[5] = (longlong)pppfStack_790;
    plStack_110[2] = (longlong)pauStack_7a8;
    plStack_110[3] = (longlong)ppppfStack_7a0;
    *plStack_110 = CONCAT44(uStack_7b8._4_4_,(float)uStack_7b8);
    plStack_110[1] = CONCAT44(uStack_7ac,fStack_7b0);
    uStack_200 = (float ****)CONCAT44(uStack_200._4_4_,(float)uStack_200);
    if (ppppfStack_128 != (float ****)0x0) {
      pub_1406abac0((byte *)ppppfStack_120,(longlong)ppppfStack_128 << 3,8);
      uStack_200 = (float ****)CONCAT44(uStack_200._4_4_,(float)uStack_200);
    }
  }
  uStack_f3 = 0;
  ppppfVar32 = (float ****)pdb_142d88ef0(&uStack_7f8);
LAB_14008b39b:
  pdb_1400db1d0(&ppppfStack_238);
  if (lStack_1a8 != 0) {
    pub_1406abac0((byte *)ppppfStack_1a0,lStack_1a8 << 2,4);
  }
LAB_14008b3ca:
  uStack_208 = ppppfVar32;
  if (1 < *_DAT_143ca8e90) {
    uStack_7b8 = &uStack_208;
    fStack_7b0 = 7.606949;
    uStack_7ac = 1;
    stack0xfffffffffffffaf0 = (float ****)0x19;
    _auStack_518 = (float ****)&UNK_142e37e55;
    pauStack_508 = (undefined1 (*) [16])&UNK_142e37e55;
    uStack_500 = 0x19;
    uStack_4fc = 0;
    uStack_4f8 = 0x42e37fa0;
    uStack_4f4 = 1;
    pdb_1400c9be0(&UNK_142e37f88,&uStack_7b8,2,auStack_518);
  }
  pdb_140f36c40(&uStack_208);
  if (lStack_318 == 0) {
    return;
  }
  uStack_7b8 = &uStack_310;
  _auStack_518 = (float ****)&uStack_7b8;
  pdb_140336540(&UNK_142e38130,auStack_518);
  return;
}

