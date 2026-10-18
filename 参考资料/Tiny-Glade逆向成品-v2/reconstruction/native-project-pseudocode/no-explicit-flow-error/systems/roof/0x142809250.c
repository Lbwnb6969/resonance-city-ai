// VA 0x142809250, PDB extent 19121 bytes
// system_roof::roof_trigger_volume::calculate_roof_trigger_volumes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/roof_trigger_volume.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_roof::roof_trigger_volume::calculate_roof_trigger_volumes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/roof_trigger_volume.rs
   Extent: 19121 */

void pdb_142809250(undefined8 *param_1,float param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  byte *pbVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  int *piVar10;
  ulonglong uVar11;
  float *pfVar12;
  byte *pbVar13;
  byte **ppbVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  byte *pbVar18;
  float *pfVar19;
  longlong *in_RDX;
  undefined8 uVar20;
  float *pfVar21;
  code *pcVar22;
  undefined1 auVar23 [8];
  longlong lVar24;
  byte *pbVar25;
  byte *pbVar26;
  float *pfVar27;
  byte *pbVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  undefined1 auVar33 [8];
  code *pcVar34;
  undefined4 uVar35;
  float fVar36;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float fVar37;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float fVar38;
  float extraout_XMM0_Da_06;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float extraout_XMM0_Dc;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined8 in_stack_fffffffffffff8f8;
  undefined8 uVar61;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_694;
  float fStack_690;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined8 uStack_650;
  undefined4 uStack_648;
  undefined8 uStack_644;
  float fStack_63c;
  undefined8 uStack_638;
  float fStack_630;
  undefined8 uStack_62c;
  undefined4 uStack_624;
  undefined8 uStack_620;
  undefined4 uStack_618;
  undefined8 uStack_614;
  undefined4 uStack_60c;
  undefined8 uStack_608;
  float fStack_600;
  undefined8 uStack_5fc;
  undefined4 uStack_5f4;
  undefined8 uStack_5f0;
  undefined4 uStack_5e8;
  undefined8 uStack_5e0;
  byte *pbStack_5d8;
  ulonglong uStack_5d0;
  float fStack_5c8;
  undefined8 uStack_5c0;
  float fStack_5b8;
  undefined8 uStack_5b0;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined8 uStack_598;
  undefined4 uStack_590;
  longlong lStack_588;
  byte *pbStack_580;
  byte *pbStack_578;
  ulonglong *puStack_570;
  longlong lStack_568;
  undefined8 uStack_560;
  longlong lStack_558;
  longlong lStack_550;
  undefined8 uStack_548;
  undefined4 *puStack_540;
  undefined8 uStack_538;
  undefined4 *puStack_530;
  longlong lStack_528;
  byte *pbStack_520;
  undefined8 auStack_518 [2];
  longlong lStack_508;
  longlong lStack_500;
  byte *pbStack_4f8;
  longlong lStack_4f0;
  byte *pbStack_4e8;
  float *pfStack_4e0;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  byte *pbStack_4c8;
  float fStack_4c0;
  undefined8 uStack_4b8;
  float fStack_4b0;
  float fStack_4ac;
  undefined8 uStack_4a8;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  undefined8 uStack_494;
  undefined8 uStack_48c;
  undefined4 uStack_484;
  byte *pbStack_480;
  float fStack_478;
  byte *pbStack_474;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  undefined8 uStack_458;
  undefined8 uStack_448;
  undefined8 uStack_440;
  byte *pbStack_438;
  undefined8 uStack_430;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  longlong lStack_3f8;
  byte *pbStack_3f0;
  undefined1 auStack_3e8 [8];
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  longlong lStack_3c8;
  byte *pbStack_3c0;
  byte *pbStack_3b8;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  longlong lStack_388;
  longlong lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 auStack_368 [8];
  float fStack_360;
  float fStack_358;
  float fStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  float afStack_348 [2];
  byte *pbStack_340;
  ulonglong uStack_338;
  byte *pbStack_330;
  undefined8 uStack_328;
  float fStack_320;
  float fStack_31c;
  byte *pbStack_310;
  undefined8 uStack_308;
  float fStack_300;
  float fStack_2fc;
  undefined4 uStack_2f8;
  float fStack_2f4;
  undefined8 uStack_2f0;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  undefined1 auStack_2d8 [8];
  float fStack_2d0;
  float fStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2ac;
  byte *apbStack_2a8 [2];
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  byte *pbStack_280;
  byte *pbStack_278;
  longlong lStack_270;
  longlong *plStack_268;
  code *pcStack_260;
  longlong *plStack_258;
  longlong lStack_250;
  byte *pbStack_248;
  float fStack_230;
  float fStack_22c;
  float afStack_220 [2];
  byte *pbStack_218;
  byte *pbStack_210;
  byte *pbStack_208;
  byte *pbStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  float fStack_1e0;
  undefined8 uStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  undefined4 uStack_1c8;
  float fStack_1c4;
  undefined8 uStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  longlong lStack_1a0;
  float *pfStack_198;
  longlong *plStack_190;
  undefined1 auStack_188 [16];
  longlong *plStack_170;
  byte *pbStack_168;
  longlong *plStack_160;
  longlong *plStack_158;
  longlong lStack_150;
  longlong *plStack_148;
  byte *pbStack_140;
  float fStack_138;
  longlong *plStack_130;
  longlong lStack_128;
  longlong *plStack_120;
  undefined8 uStack_118;
  float fStack_110;
  float fStack_10c;
  longlong lStack_100;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puStack_570 = (ulonglong *)*param_1;
  lVar24 = param_1[1];
  uVar11 = *puStack_570;
  uVar15 = 0;
  uVar32 = uVar11 - *(ulonglong *)(lVar24 + 0x18);
  if (uVar11 < *(ulonglong *)(lVar24 + 0x18)) {
    uVar32 = uVar15;
  }
  uVar30 = uVar11 - *(ulonglong *)(lVar24 + 0x38);
  if (uVar11 < *(ulonglong *)(lVar24 + 0x38)) {
    uVar30 = uVar15;
  }
  lVar31 = uVar32 * 0x20 + *(longlong *)(lVar24 + 8);
  uVar11 = *(ulonglong *)(lVar24 + 0x10) - uVar32;
  if (*(ulonglong *)(lVar24 + 0x10) < uVar32) {
    lVar31 = 8;
    uVar11 = uVar15;
  }
  lVar29 = uVar30 * 0x20 + *(longlong *)(lVar24 + 0x28);
  uVar32 = *(ulonglong *)(lVar24 + 0x30) - uVar30;
  if (*(ulonglong *)(lVar24 + 0x30) < uVar30) {
    lVar29 = 8;
    uVar32 = uVar15;
  }
  *puStack_570 = (*(longlong *)(lVar24 + 0x40) - uVar32) - uVar11;
  lStack_558 = uVar11 * 0x20 + lVar31;
  lStack_550 = uVar32 * 0x20 + lVar29;
  lStack_568 = *in_RDX;
  lStack_500 = in_RDX[1];
  uStack_2ac = *(undefined4 *)((longlong)in_RDX + 0x14);
  uStack_560 = *param_5;
  uStack_404 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_548 = *param_3;
  puStack_540 = (undefined4 *)param_3[2];
  uStack_3fc = *(undefined4 *)((longlong)param_4 + 0x1c);
  lStack_4f0 = *param_4;
  puStack_530 = (undefined4 *)param_4[2];
  lStack_528 = lStack_4f0 + 0x20;
  if (lVar31 == 0) goto LAB_142809410;
LAB_1428093f0:
  if (lVar31 == lStack_558) goto LAB_142809410;
  lStack_3f8 = lVar31 + 0x20;
  do {
    *puStack_570 = *puStack_570 + 1;
    lStack_588 = lVar31 + 8;
    uVar11 = (ulonglong)~(uint)*(undefined8 *)(lVar31 + 8);
    if ((((*(ulonglong *)(lStack_500 + 0x10) <= uVar11) ||
         (piVar10 = (int *)(uVar11 * 0x18 + *(longlong *)(lStack_500 + 8)),
         piVar10[4] != (int)((ulonglong)*(undefined8 *)(lVar31 + 8) >> 0x20))) || (*piVar10 == 0))
       || ((uVar11 = *(ulonglong *)(piVar10 + 2),
           *(ulonglong *)(lStack_568 + 0x38) <= (uVar11 & 0xffffffff) ||
           ((*(ulonglong *)(*(longlong *)(lStack_568 + 0x28) + (uVar11 >> 6 & 0x3ffffff) * 8) >>
             (uVar11 & 0x3f) & 1) == 0)))) {
      plStack_268 = &lStack_588;
      pcStack_260 = pdb_142b0f530;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14359c3f0,&plStack_268,&UNK_14359c428);
    }
    uVar9 = piVar10[1];
    lVar24 = *(longlong *)(*(longlong *)(lStack_500 + 0x1a0) + 0x18 + (uVar11 >> 0x20) * 0x48);
    lVar31 = *(longlong *)(*(longlong *)(lStack_500 + 0x1a0) + 0x38 + (uVar11 >> 0x20) * 0x48);
    lVar16 = ~*(ulonglong *)(lVar31 + *(longlong *)(lStack_568 + 0x110) * 8) * 0x30;
    lStack_1a0 = *(longlong *)(lVar24 + 0x10 + lVar16);
    pbStack_1f8 = *(byte **)(lVar24 + 0x28 + lVar16);
    lStack_100 = *(longlong *)
                  (lVar24 + 0x10 +
                  ~*(ulonglong *)(lVar31 + *(longlong *)(lStack_568 + 0x118) * 8) * 0x30);
    lVar24 = (ulonglong)~uVar9 * 0x58;
    uVar61 = *(undefined8 *)(lStack_100 + lVar24);
    uVar20 = uVar61;
    lStack_508 = lVar29;
    uVar11 = pdb_140a6a860(uStack_560);
    uVar42 = (undefined4)((ulonglong)in_stack_fffffffffffff8f8 >> 0x20);
    lVar29 = lStack_508;
    lVar31 = lStack_3f8;
    if ((uVar11 & 1) != 0) {
      uStack_400 = (undefined4)uVar20;
      lVar24 = lStack_100 + lVar24;
      uStack_538 = uVar61;
      uStack_338 = (ulonglong)~uVar9;
      bVar7 = pdb_140b77b50(lVar24);
      pfStack_198 = (float *)((ulonglong)(bVar7 ^ 1) * 5 + 4);
      plStack_130 = (longlong *)0x0;
      lStack_128 = 4;
      plStack_120 = (longlong *)0x0;
      plStack_158 = (longlong *)0x0;
      lStack_150 = 4;
      plStack_148 = (longlong *)0x0;
      plStack_170 = (longlong *)0x0;
      pbStack_168 = (byte *)0x4;
      plStack_160 = (longlong *)0x0;
      pfStack_4e0 = (float *)(lVar24 + 0xc);
      lStack_100 = lVar24;
      if (*(char *)(lVar24 + 8) == '\0') {
        fStack_358 = *pfStack_4e0;
        fStack_354 = *(float *)(lVar24 + 0x10);
        uStack_350 = *(undefined4 *)(lVar24 + 0x14);
        uStack_34c = *(undefined4 *)(lVar24 + 0x18);
        uStack_f1 = 1;
        uStack_f2 = 1;
        uStack_f3 = 1;
        pdb_140b73b80(&plStack_268,lVar24);
        uStack_f1 = 1;
        uStack_f2 = 1;
        uStack_f3 = 1;
        fVar36 = (float)pdb_140b73b40(&plStack_268);
        pbStack_208 = (byte *)CONCAT44(pbStack_208._4_4_,param_2);
        uStack_f1 = 1;
        uStack_f2 = 1;
        uStack_f3 = 1;
        cVar8 = pdb_140b77b50(lStack_100);
        if (cVar8 == '\0') {
          fVar36 = fVar36 + _DAT_1430140b0;
          pbStack_208 = (byte *)CONCAT44(pbStack_208._4_4_,pbStack_208._0_4_ + _DAT_1430140b0);
        }
        uStack_f1 = 1;
        uStack_f2 = 1;
        uStack_f3 = 1;
        pdb_140b772d0(&fStack_3d8,lStack_100);
        uVar35 = pdb_140b77a00(lStack_100);
        uVar61 = CONCAT44(uVar42,uVar35);
        pdb_140b768b0(&plStack_268,&fStack_3d8,fVar36,pbStack_208._0_4_,uVar61);
        plStack_190 = (longlong *)CONCAT44(plStack_190._4_4_,(float)(int)pfStack_198);
        uVar11 = 0;
        while (uVar42 = uStack_34c, uVar35 = (undefined4)((ulonglong)uVar61 >> 0x20),
              uVar11 < pfStack_198) {
          fVar36 = (float)(longlong)uVar11 / plStack_190._0_4_;
          uStack_308 = (byte **)CONCAT44(uStack_308._4_4_,fVar36);
          if ((fVar36 < 0.0) || (_DAT_142e36f28 < fVar36)) {
            fStack_1d0 = 7.7206726;
            fStack_1cc = 1.4013e-45;
            uStack_1d8 = (float *)&uStack_308;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14359b36c,&uStack_1d8,&UNK_14359c2d0);
          }
          uStack_2c8 = (byte *)CONCAT44(unaff_XMM9_Db,fVar36);
          uStack_2c0 = CONCAT44(unaff_XMM9_Dd,unaff_XMM9_Dc);
          uVar9 = pdb_142802660(&plStack_268);
          plVar1 = plStack_258;
          pcVar22 = pcStack_260;
          plVar17 = (longlong *)(ulonglong)uVar9;
          if (plStack_258 <= plVar17) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(plVar17,plStack_258,&UNK_14359b2b0);
          }
          if (plStack_258 <= (longlong *)((longlong)plVar17 + 1U)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2((longlong *)((longlong)plVar17 + 1U),plStack_258,&UNK_14359b2c8);
          }
          fVar49 = _DAT_142e36f28 - extraout_XMM0_Da;
          fVar50 = *(float *)(pcStack_260 + (longlong)plVar17 * 8);
          fVar40 = *(float *)(pcStack_260 + (longlong)plVar17 * 8 + 8);
          cVar8 = pdb_140b77b50(lStack_100);
          fVar41 = _DAT_14359c1fc;
          if (cVar8 == '\0') {
            uVar9 = pdb_142802660(&plStack_268,(float)uStack_2c8);
            plVar17 = (longlong *)(ulonglong)uVar9;
            if (plVar1 <= plVar17) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(plVar17,plVar1,&UNK_14359b2b0);
            }
            if (plVar1 <= (longlong *)((longlong)plVar17 + 1U)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2((longlong *)((longlong)plVar17 + 1U),plVar1,&UNK_14359b2c8);
            }
            fVar36 = (_DAT_142e36f28 - extraout_XMM0_Da_00) *
                     *(float *)(pcVar22 + (longlong)plVar17 * 8 + 4);
            fVar41 = *(float *)(pcVar22 + (longlong)plVar17 * 8 + 0xc) * extraout_XMM0_Da_00 +
                     fVar36;
          }
          fVar44 = fStack_354;
          fVar39 = fStack_358;
          fVar45 = (float)pdb_140b771f0(lStack_100);
          uStack_1d8 = (float *)CONCAT44(fVar36 * (float)uStack_2c8 + fVar44,
                                         fVar45 * (float)uStack_2c8 + fVar39);
          pdb_140df4540(&uStack_5c0,&uStack_1d8,fVar41);
          uVar42 = uStack_34c;
          uVar61 = CONCAT44(uVar35,uStack_34c);
          pdb_140def2a0(&uStack_288,0,0,fVar49 * fVar50 + fVar40 * extraout_XMM0_Da,uVar61);
          uVar35 = (undefined4)((ulonglong)uVar61 >> 0x20);
          fVar36 = ((float)(longlong)uVar11 + _DAT_142e36f28) / plStack_190._0_4_;
          uStack_308 = (byte **)CONCAT44(uStack_308._4_4_,fVar36);
          if ((fVar36 < 0.0) || (_DAT_142e36f28 < fVar36)) {
            fStack_1d0 = 7.7206726;
            fStack_1cc = 1.4013e-45;
            uStack_1d8 = (float *)&uStack_308;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14359b36c,&uStack_1d8,&UNK_14359c2e8);
          }
          uStack_298 = (byte *)CONCAT44(unaff_XMM9_Db,fVar36);
          uStack_290 = CONCAT44(unaff_XMM9_Dd,unaff_XMM9_Dc);
          uVar9 = pdb_142802660(&plStack_268);
          plVar17 = (longlong *)(ulonglong)uVar9;
          if (plVar1 <= plVar17) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(plVar17,plVar1,&UNK_14359b2b0);
          }
          if (plVar1 <= (longlong *)((longlong)plVar17 + 1U)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2((longlong *)((longlong)plVar17 + 1U),plVar1,&UNK_14359b2c8);
          }
          fVar49 = _DAT_142e36f28 - extraout_XMM0_Da_01;
          fVar50 = *(float *)(pcVar22 + (longlong)plVar17 * 8);
          fVar40 = *(float *)(pcVar22 + (longlong)plVar17 * 8 + 8);
          unaff_XMM9_Db = 0.0;
          unaff_XMM9_Dc = 0.0;
          unaff_XMM9_Dd = 0.0;
          cVar8 = pdb_140b77b50(lStack_100);
          if (cVar8 == '\0') {
            uVar9 = pdb_142802660(&plStack_268,(float)uStack_298);
            plVar17 = (longlong *)(ulonglong)uVar9;
            if (plVar1 <= plVar17) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(plVar17,plVar1,&UNK_14359b2b0);
            }
            if (plVar1 <= (longlong *)((longlong)plVar17 + 1U)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2((longlong *)((longlong)plVar17 + 1U),plVar1,&UNK_14359b2c8);
            }
            fVar36 = (_DAT_142e36f28 - extraout_XMM0_Da_02) *
                     *(float *)(pcVar22 + (longlong)plVar17 * 8 + 4);
            fVar41 = *(float *)(pcVar22 + (longlong)plVar17 * 8 + 0xc) * extraout_XMM0_Da_02 +
                     fVar36;
          }
          fVar45 = (float)pdb_140b771f0(lStack_100);
          uStack_1d8 = (float *)CONCAT44(fVar44 + fVar36 * (float)uStack_298,
                                         fVar39 + fVar45 * (float)uStack_298);
          pdb_140df4540(&uStack_5d0,&uStack_1d8,fVar41);
          uVar61 = CONCAT44(uVar35,uVar42);
          pdb_140def2a0(&uStack_308,0,0,fVar49 * fVar50 + fVar40 * extraout_XMM0_Da_01,uVar61);
          uVar9 = pdb_142802660(&plStack_268,(float)uStack_2c8);
          uVar32 = (ulonglong)uVar9;
          if (plVar1 <= (longlong *)(uVar32 + 1)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2((longlong *)(uVar32 + 1),plVar1,&UNK_14359b2e0);
          }
          fVar36 = *(float *)(pcVar22 + uVar32 * 8 + 8) - *(float *)(pcVar22 + uVar32 * 8);
          fVar50 = *(float *)(pcVar22 + uVar32 * 8 + 0xc) - *(float *)(pcVar22 + uVar32 * 8 + 4);
          uVar9 = pdb_142802660(&plStack_268,(float)uStack_298);
          uVar32 = (ulonglong)uVar9;
          if (plVar1 <= (longlong *)(uVar32 + 1)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2((longlong *)(uVar32 + 1),plVar1,&UNK_14359b2e0);
          }
          uVar11 = uVar11 + 1;
          fVar40 = _DAT_142e36f28 / SQRT(fVar50 * fVar50 + fVar36 * fVar36);
          fVar50 = fVar50 * fVar40;
          fVar36 = (float)((uint)fVar40 ^ _DAT_142e37820) * fVar36;
          fVar40 = (float)*(undefined8 *)(pcVar22 + uVar32 * 8 + 8) -
                   (float)*(undefined8 *)(pcVar22 + uVar32 * 8);
          fVar41 = (float)((ulonglong)*(undefined8 *)(pcVar22 + uVar32 * 8 + 8) >> 0x20) -
                   (float)((ulonglong)*(undefined8 *)(pcVar22 + uVar32 * 8) >> 0x20);
          fVar49 = _DAT_142e36f28 / SQRT(fVar41 * fVar41 + fVar40 * fVar40);
          fVar40 = (float)((uint)fVar49 ^ _DAT_142e37820) * fVar40;
          fVar49 = fVar49 * fVar41;
          uStack_4a8 = (byte *)CONCAT44(fVar36,fVar50);
          fStack_4a0 = _DAT_142e377f0;
          fStack_49c = _DAT_142e377f0;
          auStack_368._4_4_ = fVar50;
          auStack_368._0_4_ = _DAT_142e377f0;
          fStack_360 = fVar36;
          unique0x100009dd = 0;
          uStack_378 = CONCAT44(fVar40,fVar49);
          uStack_370 = CONCAT44(_DAT_142e377f0,_DAT_142e377f0);
          auStack_3e8._4_4_ = fVar49;
          auStack_3e8._0_4_ = _DAT_142e377f0;
          fStack_3e0 = fVar40;
          fStack_3dc = 0.0;
          for (uVar32 = 0; uVar32 < 0xf; uVar32 = uVar32 + 1) {
            fVar36 = (float)(longlong)uVar32 / _DAT_142e37880;
            if (_DAT_142e36f28 < fVar36) {
              uStack_1d8 = &fStack_230;
              fStack_1d0 = 7.7206726;
              fStack_1cc = 1.4013e-45;
              fStack_230 = fVar36;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14359b36c,&uStack_1d8,&UNK_14359c300);
            }
            fVar50 = ((float)(longlong)uVar32 + _DAT_142e36f28) / _DAT_142e37880;
            fStack_230 = fVar50;
            if (_DAT_142e36f28 < fVar50) {
              uStack_1d8 = &fStack_230;
              fStack_1d0 = 7.7206726;
              fStack_1cc = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14359b36c,&uStack_1d8,&UNK_14359c318);
            }
            fVar49 = (float)pdb_141c40430(&uStack_34c);
            fVar41 = _DAT_142f57bcc;
            fVar40 = _DAT_142e36f50;
            fVar44 = (fVar36 * _DAT_142f57bcc - fVar49) * _DAT_142e36f50;
            fVar39 = (float)pub_142e329e0(fVar44);
            pbStack_4c8 = (byte *)pub_142e32b30(fVar44);
            fVar40 = (fVar50 * fVar41 - fVar49) * fVar40;
            fStack_4c0 = extraout_XMM0_Dc;
            fVar41 = (float)pub_142e329e0(fVar40);
            fVar49 = (float)pub_142e32b30(fVar40);
            fVar40 = fVar36;
            fStack_230 = (float)pdb_140def2c0(&uStack_288);
            fStack_22c = fVar40;
            pdb_140df4520(&uStack_1d8,&fStack_230);
            fVar48 = (float)uStack_5c0;
            fVar53 = (float)((ulonglong)uStack_5c0 >> 0x20);
            fVar44 = SUB84(uStack_1d8,0);
            uVar15 = (ulonglong)uStack_1d8 >> 0x20;
            uStack_118._0_4_ = fStack_5b8;
            fVar45 = fStack_1d0 + fStack_5b8;
            fVar40 = fVar50;
            fStack_230 = (float)pdb_140def2c0(&uStack_288);
            fStack_22c = fVar40;
            pdb_140df4520(&uStack_1d8,&fStack_230);
            fVar59 = SUB84(uStack_1d8,0);
            uVar30 = (ulonglong)uStack_1d8 >> 0x20;
            uStack_118 = (float *)CONCAT44(uStack_118._4_4_,(float)uStack_118 + fStack_1d0);
            fVar40 = fVar36;
            fStack_230 = (float)pdb_140def2c0(&uStack_308);
            fStack_22c = fVar40;
            pdb_140df4520(&uStack_1d8,&fStack_230);
            _fStack_2d0 = 0;
            auStack_2d8 = (undefined1  [8])uStack_5d0;
            fVar37 = SUB84(uStack_1d8,0);
            uVar4 = (ulonglong)uStack_1d8 >> 0x20;
            auStack_188._0_4_ = fStack_5c8;
            uStack_328 = (byte *)CONCAT44(uStack_328._4_4_,fStack_1d0 + fStack_5c8);
            fVar40 = fVar50;
            fStack_230 = (float)pdb_140def2c0(&uStack_308);
            fStack_22c = fVar40;
            pdb_140df4520(&uStack_1d8,&fStack_230);
            plVar1 = plStack_120;
            auStack_188._0_4_ = (float)auStack_188._0_4_ + fStack_1d0;
            uStack_448 = (byte *)uStack_1d8;
            uStack_440 = 0;
            if (plStack_120 == plStack_130) {
              pdb_142d91b00(&plStack_130);
            }
            plVar17 = plStack_148;
            fVar59 = fVar59 + fVar48;
            fVar40 = (float)uVar30 + fVar53;
            fVar37 = fVar37 + (float)auStack_2d8._0_4_;
            fVar46 = (float)uVar4 + (float)auStack_2d8._4_4_;
            fStack_4b0 = fStack_2d0 + 0.0;
            fStack_4ac = fStack_2cc + 0.0;
            *(ulonglong *)(lStack_128 + (longlong)plVar1 * 0x24) =
                 CONCAT44((float)uVar15 + fVar53,fVar44 + fVar48);
            *(float *)(lStack_128 + 8 + (longlong)plVar1 * 0x24) = fVar45;
            pbStack_438 = (byte *)CONCAT44(fVar40,fVar59);
            uStack_430 = 0;
            *(ulonglong *)(lStack_128 + 0xc + (longlong)plVar1 * 0x24) = CONCAT44(fVar40,fVar59);
            *(float *)(lStack_128 + 0x14 + (longlong)plVar1 * 0x24) = (float)uStack_118;
            uStack_4b8 = (byte *)CONCAT44(fVar46,fVar37);
            *(ulonglong *)(lStack_128 + 0x18 + (longlong)plVar1 * 0x24) = CONCAT44(fVar46,fVar37);
            *(float *)(lStack_128 + 0x20 + (longlong)plVar1 * 0x24) = (float)uStack_328;
            plStack_120 = (longlong *)((longlong)plVar1 + 1);
            if (plStack_148 == plStack_158) {
              pdb_142d89250(&plStack_158);
            }
            plVar1 = plStack_160;
            *(float *)(lStack_150 + (longlong)plVar17 * 0x18) = fVar36;
            *(float *)(lStack_150 + 4 + (longlong)plVar17 * 0x18) = (float)uStack_2c8;
            *(float *)(lStack_150 + 8 + (longlong)plVar17 * 0x18) = fVar50;
            *(float *)(lStack_150 + 0xc + (longlong)plVar17 * 0x18) = (float)uStack_2c8;
            *(float *)(lStack_150 + 0x10 + (longlong)plVar17 * 0x18) = fVar36;
            *(float *)(lStack_150 + 0x14 + (longlong)plVar17 * 0x18) = (float)uStack_298;
            plStack_148 = (longlong *)((longlong)plVar17 + 1);
            if (plStack_160 == plStack_170) {
              pdb_142d91b00(&plStack_170);
            }
            plVar17 = plStack_120;
            fVar51 = pbStack_4c8._0_4_ * _DAT_142e36f28;
            fVar55 = pbStack_4c8._0_4_ * 0.0;
            fStack_4c0 = fStack_4c0 * 0.0;
            fVar45 = fVar55 * fVar55;
            fVar53 = fVar39 * fVar39;
            fVar59 = fVar51 * fVar51 + fVar55 * fVar55;
            fVar40 = fVar53 - (fVar59 + fVar45);
            fVar44 = fVar53 - (fVar59 + fVar45);
            fVar48 = fVar53 - (fVar59 + fVar45);
            fVar37 = fStack_4a0 * fVar55 + uStack_4a8._4_4_ * fVar51 + (float)uStack_4a8 * fVar55;
            fVar37 = fVar37 + fVar37;
            fVar39 = fVar39 + fVar39;
            fVar52 = fVar49 * _DAT_142e36f28;
            fVar49 = fVar49 * 0.0;
            fVar58 = fVar49 * fVar49;
            fVar60 = fVar41 * fVar41;
            fVar46 = fVar52 * fVar52 + fVar49 * fVar49;
            fVar56 = fVar60 - (fVar46 + fVar58);
            fVar57 = fVar60 - (fVar46 + fVar58);
            fVar60 = fVar60 - (fVar46 + fVar58);
            fVar46 = fStack_4a0 * fVar49 + uStack_4a8._4_4_ * fVar52 + (float)uStack_4a8 * fVar49;
            fVar46 = fVar46 + fVar46;
            fVar41 = fVar41 + fVar41;
            fVar58 = (fStack_4a0 * fVar52 - fStack_360 * fVar49) * fVar41 +
                     fVar46 * fVar49 + (float)uStack_4a8 * fVar56;
            fVar38 = ((float)uStack_4a8 * fVar49 - (float)auStack_368._0_4_ * fVar49) * fVar41 +
                     fVar46 * fVar52 + uStack_4a8._4_4_ * fVar57;
            fVar47 = (uStack_4a8._4_4_ * fVar49 - (float)auStack_368._4_4_ * fVar52) * fVar41 +
                     fVar46 * fVar49 + fStack_4a0 * fVar60;
            fVar46 = (float)uStack_370 * fVar55 +
                     uStack_378._4_4_ * fVar51 + (float)uStack_378 * fVar55;
            fVar46 = fVar46 + fVar46;
            fVar54 = (fVar51 * (float)uStack_370 - fVar55 * fStack_3e0) * fVar39 +
                     fVar46 * fVar55 + fVar40 * (float)uStack_378;
            unaff_XMM9_Db =
                 (fVar55 * (float)uStack_378 - fVar55 * (float)auStack_3e8._0_4_) * fVar39 +
                 fVar46 * fVar51 + fVar44 * uStack_378._4_4_;
            unaff_XMM9_Dc =
                 (fVar55 * uStack_378._4_4_ - fVar51 * (float)auStack_3e8._4_4_) * fVar39 +
                 fVar46 * fVar55 + fVar48 * (float)uStack_370;
            unaff_XMM9_Dd =
                 (fStack_4c0 * uStack_370._4_4_ - fStack_4c0 * fStack_3dc) * fVar39 +
                 fVar46 * fStack_4c0 + (fVar53 - (fVar59 + fVar45)) * uStack_370._4_4_;
            *(ulonglong *)(pbStack_168 + (longlong)plVar1 * 0x24) =
                 CONCAT44(((float)uStack_4a8 * fVar55 - (float)auStack_368._0_4_ * fVar55) * fVar39
                          + fVar37 * fVar51 + uStack_4a8._4_4_ * fVar44,
                          (fStack_4a0 * fVar51 - fStack_360 * fVar55) * fVar39 +
                          fVar37 * fVar55 + (float)uStack_4a8 * fVar40);
            *(float *)(pbStack_168 + (longlong)plVar1 * 0x24 + 8) =
                 (uStack_4a8._4_4_ * fVar55 - (float)auStack_368._4_4_ * fVar51) * fVar39 +
                 fVar37 * fVar55 + fStack_4a0 * fVar48;
            *(ulonglong *)(pbStack_168 + (longlong)plVar1 * 0x24 + 0xc) = CONCAT44(fVar38,fVar58);
            *(float *)(pbStack_168 + (longlong)plVar1 * 0x24 + 0x14) = fVar47;
            *(ulonglong *)(pbStack_168 + (longlong)plVar1 * 0x24 + 0x18) =
                 CONCAT44(unaff_XMM9_Db,fVar54);
            *(float *)(pbStack_168 + (longlong)plVar1 * 0x24 + 0x20) = unaff_XMM9_Dc;
            plStack_160 = (longlong *)((longlong)plVar1 + 1);
            if (plStack_120 == plStack_130) {
              pdb_142d91b00(&plStack_130);
            }
            plVar1 = plStack_148;
            *(byte **)(lStack_128 + (longlong)plVar17 * 0x24) = pbStack_438;
            *(float *)(lStack_128 + 8 + (longlong)plVar17 * 0x24) = (float)uStack_118;
            *(ulonglong *)(lStack_128 + 0xc + (longlong)plVar17 * 0x24) =
                 CONCAT44((float)auStack_2d8._4_4_ + uStack_448._4_4_,
                          (float)auStack_2d8._0_4_ + (float)uStack_448);
            *(undefined4 *)(lStack_128 + 0x14 + (longlong)plVar17 * 0x24) = auStack_188._0_4_;
            *(byte **)(lStack_128 + 0x18 + (longlong)plVar17 * 0x24) = uStack_4b8;
            *(float *)(lStack_128 + 0x20 + (longlong)plVar17 * 0x24) = (float)uStack_328;
            plStack_120 = (longlong *)((longlong)plVar17 + 1);
            if (plStack_148 == plStack_158) {
              pdb_142d89250(&plStack_158);
            }
            plVar17 = plStack_160;
            *(float *)(lStack_150 + (longlong)plVar1 * 0x18) = fVar50;
            *(float *)(lStack_150 + 4 + (longlong)plVar1 * 0x18) = (float)uStack_2c8;
            *(float *)(lStack_150 + 8 + (longlong)plVar1 * 0x18) = fVar50;
            *(float *)(lStack_150 + 0xc + (longlong)plVar1 * 0x18) = (float)uStack_298;
            *(float *)(lStack_150 + 0x10 + (longlong)plVar1 * 0x18) = fVar36;
            *(float *)(lStack_150 + 0x14 + (longlong)plVar1 * 0x18) = (float)uStack_298;
            plStack_148 = (longlong *)((longlong)plVar1 + 1);
            if (plStack_160 == plStack_170) {
              pdb_142d91b00(&plStack_170);
            }
            fVar36 = (float)uStack_370 * fVar49 +
                     uStack_378._4_4_ * fVar52 + (float)uStack_378 * fVar49;
            fVar36 = fVar36 + fVar36;
            *(ulonglong *)(pbStack_168 + (longlong)plVar17 * 0x24) = CONCAT44(fVar38,fVar58);
            *(float *)(pbStack_168 + (longlong)plVar17 * 0x24 + 8) = fVar47;
            *(ulonglong *)(pbStack_168 + (longlong)plVar17 * 0x24 + 0xc) =
                 CONCAT44(fVar41 * (fVar49 * (float)uStack_378 - fVar49 * (float)auStack_3e8._0_4_)
                          + fVar36 * fVar52 + fVar57 * uStack_378._4_4_,
                          fVar41 * (fVar52 * (float)uStack_370 - fVar49 * fStack_3e0) +
                          fVar36 * fVar49 + fVar56 * (float)uStack_378);
            *(float *)(pbStack_168 + (longlong)plVar17 * 0x24 + 0x14) =
                 fVar41 * (fVar49 * uStack_378._4_4_ - fVar52 * (float)auStack_3e8._4_4_) +
                 fVar36 * fVar49 + fVar60 * (float)uStack_370;
            *(ulonglong *)(pbStack_168 + (longlong)plVar17 * 0x24 + 0x18) =
                 CONCAT44(unaff_XMM9_Db,fVar54);
            *(float *)(pbStack_168 + (longlong)plVar17 * 0x24 + 0x20) = unaff_XMM9_Dc;
            plStack_160 = (longlong *)((longlong)plVar17 + 1);
          }
        }
        uVar61 = CONCAT44(uVar35,uStack_34c);
        pdb_140def2a0(&uStack_288,fStack_358,fStack_354,pbStack_208._0_4_,uVar61);
        uVar61 = CONCAT44((int)((ulonglong)uVar61 >> 0x20),uVar42);
        pdb_140def2a0(&uStack_308,_DAT_142e37ad4,_DAT_14359c1f8,_DAT_142e37ad4,uVar61);
        for (uVar11 = 0; lVar24 = lStack_1a0, uVar11 < 0xf; uVar11 = uVar11 + 1) {
          fVar36 = (float)(longlong)uVar11 / _DAT_142e37880;
          if (_DAT_142e36f28 < fVar36) {
            uStack_1d8 = &fStack_230;
            fStack_1d0 = 7.7206726;
            fStack_1cc = 1.4013e-45;
            fStack_230 = fVar36;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14359b36c,&uStack_1d8,&UNK_14359c2a0);
          }
          fVar50 = ((float)(longlong)uVar11 + _DAT_142e36f28) / _DAT_142e37880;
          fStack_230 = fVar50;
          if (_DAT_142e36f28 < fVar50) {
            uStack_1d8 = &fStack_230;
            fStack_1d0 = 7.7206726;
            fStack_1cc = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14359b36c,&uStack_1d8,&UNK_14359c2b8);
          }
          cVar8 = pdb_140b77b50(lStack_100);
          fVar40 = _DAT_14359c1fc;
          if (cVar8 == '\0') {
            fVar40 = (float)pdb_140b77a00(lStack_100);
          }
          fVar41 = fVar36;
          uVar42 = pdb_140def2c0(&uStack_288);
          uStack_1d8 = (float *)CONCAT44(fVar41,uVar42);
          pdb_140df4540(&uStack_614,&uStack_1d8,fVar40);
          fVar41 = fVar50;
          uVar42 = pdb_140def2c0(&uStack_288);
          uStack_1d8 = (float *)CONCAT44(fVar41,uVar42);
          pdb_140df4540(&uStack_620,&uStack_1d8,fVar40);
          pdb_140df4540(&uStack_62c,&uStack_288,fVar40);
          uVar42 = pdb_140def2c0(&uStack_308);
          uVar35 = pdb_140def2c0(&uStack_308);
          plVar1 = plStack_120;
          pbVar13 = (byte *)uStack_308;
          fStack_1d0 = (float)uStack_60c;
          uStack_1d8 = (float *)uStack_614;
          fStack_1c4 = (float)uStack_618;
          fStack_1cc = (float)uStack_620;
          uStack_1c8 = (undefined4)((ulonglong)uStack_620 >> 0x20);
          fStack_1b8 = (float)uStack_624;
          uStack_1c0 = (byte *)uStack_62c;
          if (plStack_120 == plStack_130) {
            pdb_142d91b00(&plStack_130);
          }
          plVar17 = plStack_148;
          *(float *)(lStack_128 + 0x20 + (longlong)plVar1 * 0x24) = fStack_1b8;
          puVar3 = (undefined4 *)(lStack_128 + 0x10 + (longlong)plVar1 * 0x24);
          *puVar3 = uStack_1c8;
          puVar3[1] = fStack_1c4;
          puVar3[2] = (undefined4)uStack_1c0;
          puVar3[3] = uStack_1c0._4_4_;
          puVar3 = (undefined4 *)(lStack_128 + (longlong)plVar1 * 0x24);
          *puVar3 = (undefined4)uStack_1d8;
          puVar3[1] = uStack_1d8._4_4_;
          puVar3[2] = fStack_1d0;
          puVar3[3] = fStack_1cc;
          plStack_120 = (longlong *)((longlong)plVar1 + 1);
          if (plStack_148 == plStack_158) {
            pdb_142d89250(&plStack_158);
          }
          plVar1 = plStack_160;
          *(undefined4 *)(lStack_150 + (longlong)plVar17 * 0x18) = uVar42;
          *(float *)(lStack_150 + 4 + (longlong)plVar17 * 0x18) = fVar36;
          *(undefined4 *)(lStack_150 + 8 + (longlong)plVar17 * 0x18) = uVar35;
          *(float *)(lStack_150 + 0xc + (longlong)plVar17 * 0x18) = fVar50;
          *(byte **)(lStack_150 + 0x10 + (longlong)plVar17 * 0x18) = pbVar13;
          plStack_148 = (longlong *)((longlong)plVar17 + 1);
          uStack_1d8 = (float *)0x3f80000000000000;
          fStack_1d0 = 0.0;
          fStack_1cc = 0.0;
          uStack_1c8 = 0x3f800000;
          fStack_1c4 = 0.0;
          uStack_1c0 = (byte *)0x3f80000000000000;
          fStack_1b8 = 0.0;
          if (plStack_160 == plStack_170) {
            pdb_142d91b00(&plStack_170);
          }
          *(float *)(pbStack_168 + (longlong)plVar1 * 0x24 + 0x20) = fStack_1b8;
          *(ulonglong *)(pbStack_168 + (longlong)plVar1 * 0x24 + 0x10) =
               CONCAT44(fStack_1c4,uStack_1c8);
          *(byte **)(pbStack_168 + (longlong)plVar1 * 0x24 + 0x10 + 8) = uStack_1c0;
          *(float **)(pbStack_168 + (longlong)plVar1 * 0x24) = uStack_1d8;
          *(ulonglong *)(pbStack_168 + (longlong)plVar1 * 0x24 + 8) =
               CONCAT44(fStack_1cc,fStack_1d0);
          plStack_160 = (longlong *)((longlong)plVar1 + 1);
        }
        if (plStack_268 != (longlong *)0x0) {
          pub_1406abac0((byte *)pcStack_260,(longlong)plStack_268 << 3,4);
        }
        uVar11 = uStack_338;
        if (lStack_250 != 0) {
          pub_1406abac0(pbStack_248,lStack_250 << 2,4);
        }
        if (CONCAT44(fStack_3d4,fStack_3d8) != 0) {
          pub_1406abac0((byte *)CONCAT44(fStack_3cc,fStack_3d0),CONCAT44(fStack_3d4,fStack_3d8) << 3
                        ,4);
        }
        pbVar13 = pbStack_3b8;
        pbVar25 = pbStack_3c0;
        if (pbStack_3c0 != (byte *)0x0) {
LAB_14280ba0c:
          pub_1406abac0(pbVar13,(longlong)pbVar25 << 2,4);
        }
      }
      else {
        uStack_458 = *(undefined8 *)(lVar24 + 0x1c);
        fStack_468 = *pfStack_4e0;
        fStack_464 = *(float *)(lVar24 + 0x10);
        fStack_460 = *(float *)(lVar24 + 0x14);
        fStack_45c = *(float *)(lVar24 + 0x18);
        uStack_f1 = 1;
        uStack_f2 = 1;
        uStack_f3 = 1;
        pdb_140b73b80(&plStack_268,lVar24);
        lVar24 = lStack_1a0;
        uStack_f1 = 1;
        uStack_f2 = 1;
        uStack_f3 = 1;
        pdb_140b73b00(&fStack_3d8,&plStack_268);
        fVar41 = fStack_3cc;
        fVar40 = fStack_3d0;
        fVar50 = fStack_3d4;
        fVar36 = fStack_3d8;
        uStack_f1 = 1;
        uStack_f2 = 1;
        uStack_f3 = 1;
        cVar8 = pdb_140b77b50(lStack_100);
        if (cVar8 == '\0') {
          fVar36 = fVar36 + _DAT_143309820;
          fVar50 = fVar50 + _UNK_143309824;
          fVar40 = fVar40 + _UNK_143309828;
          fVar41 = fVar41 + _UNK_14330982c;
        }
        uStack_f1 = 1;
        uStack_f2 = 1;
        uStack_f3 = 1;
        pdb_140b772d0(&uStack_1d8,lStack_100);
        pdb_140df2970(&fStack_230,fVar36,fVar50,&UNK_14359c330);
        lVar31 = lStack_100;
        uVar43 = 0;
        uVar35 = pdb_140ac6200(lStack_100,0,0);
        uVar61 = CONCAT44(uVar42,uVar43);
        pdb_140df1b90(&fStack_358,fVar40,fVar41,uVar35,uVar61,&UNK_14359c348);
        pdb_140df1c10(&fStack_4d8,&fStack_468);
        cVar8 = pdb_140b77b60(lVar31);
        if (cVar8 == '\0') {
          uStack_288 = 0;
        }
        else {
          if (*(char *)(lVar31 + 0x3c) == '\0') {
            fVar36 = (float)pdb_140b76870(lVar31 + 0x24);
            afStack_220[0] = afStack_220[0] - (fVar36 + _DAT_142e3c624);
            afStack_348[0] = afStack_348[0] + _DAT_142f684a4;
          }
          else {
            fVar36 = (float)pdb_140b76870(lVar31 + 0x24);
            afStack_220[1] = afStack_220[1] - (fVar36 + _DAT_142e3c624);
            afStack_348[1] = afStack_348[1] + _DAT_142f684a4;
          }
          pdb_140b77190(&uStack_288,lVar31);
        }
        pdb_140df37e0(&fStack_3d8,&fStack_230);
        pdb_140df37e0(&plStack_268,&fStack_358);
        pbStack_520 = (byte *)CONCAT44(fStack_3cc,fStack_3d0);
        pbStack_3f0 = pbStack_520 + lStack_3c8 * 8;
        pbStack_208 = (byte *)(lStack_3c8 + -1 + (ulonglong)(lStack_3c8 == 0));
        lStack_388 = (longlong)plStack_258 + ((ulonglong)(plStack_258 == (longlong *)0x0) - 1);
        pbStack_438 = (byte *)CONCAT44(pbStack_438._4_4_,(float)(int)pfStack_198);
        plStack_190 = plStack_258;
        pbStack_4f8 = (byte *)(pcStack_260 + (longlong)plStack_258 * 8);
        lStack_380 = 1;
        pbStack_4e8 = (byte *)0x0;
        pbStack_330 = (byte *)pcStack_260;
        auStack_368 = (undefined1  [8])pcStack_260;
        pbStack_310 = (byte *)pcStack_260;
        lStack_270 = 1;
        pbStack_200 = pbStack_520;
        pbStack_1f0 = pbStack_520;
LAB_14280a887:
        uVar11 = uStack_338;
        if (pbStack_208 == (byte *)0x0) {
          pbStack_208 = (byte *)0x0;
          ppbVar14 = apbStack_2a8;
          pbVar13 = (byte *)0x0;
        }
        else {
          pbStack_208 = pbStack_208 + -1;
          pbVar25 = pbStack_3f0;
          if (pbStack_1f0 != pbStack_3f0) {
            pbVar25 = pbStack_1f0 + 8;
            if (lStack_270 == 0) {
              pbVar18 = pbStack_3f0;
              if (pbStack_200 != pbStack_3f0) {
                pbVar18 = pbStack_200 + 8;
                pbVar26 = pbStack_200;
                if (lStack_388 != 0) goto LAB_14280a90a;
LAB_14280aa30:
                lStack_388 = 0;
              }
            }
            else {
              if ((ulonglong)((longlong)pbStack_3f0 - (longlong)pbStack_200) < 9) {
                lStack_270 = 0;
                pbStack_200 = pbStack_3f0;
                goto LAB_14280aaa2;
              }
              pbVar26 = pbStack_200 + 8;
              pbVar18 = pbStack_200 + 0x10;
              if (lStack_388 == 0) goto LAB_14280aa30;
LAB_14280a90a:
              lStack_388 = lStack_388 + -1;
              if (pbStack_310 != pbStack_4f8) {
                if (lStack_380 == 0) {
                  if (pbStack_330 == pbStack_4f8) {
LAB_14280aa6c:
                    lStack_380 = 0;
                    pbStack_330 = pbStack_4f8;
                    pbStack_310 = pbStack_310 + 8;
                    goto LAB_14280aa90;
                  }
                }
                else {
                  if ((ulonglong)((longlong)pbStack_4f8 - (longlong)pbStack_330) < 9)
                  goto LAB_14280aa6c;
                  pbStack_330 = pbStack_330 + 8;
                }
                apbStack_2a8[0] = pbStack_1f0;
                pbStack_578 = pbStack_310;
                lStack_380 = 0;
                lStack_270 = 0;
                ppbVar14 = &pbStack_218;
                pbVar13 = pbStack_330;
                pbStack_340 = pbStack_4e8;
                pbStack_580 = pbVar26;
                pbStack_4e8 = pbStack_4e8 + 1;
                pbStack_330 = pbStack_330 + 8;
                pbStack_310 = pbStack_310 + 8;
                pbStack_200 = pbVar18;
                pbStack_1f0 = pbVar25;
                goto LAB_14280aab3;
              }
              pbStack_310 = pbStack_4f8;
            }
LAB_14280aa90:
            lStack_270 = 0;
            pbStack_200 = pbVar18;
          }
LAB_14280aaa2:
          ppbVar14 = apbStack_2a8;
          pbVar13 = (byte *)0x0;
          pbStack_1f0 = pbVar25;
        }
LAB_14280aab3:
        *ppbVar14 = pbVar13;
        uStack_4b8 = apbStack_2a8[0];
        if (apbStack_2a8[0] != (byte *)0x0) {
          uStack_4a8 = pbStack_218;
          if (((char)uStack_288 == '\0') ||
             ((pbStack_280 != pbStack_340 && (pbStack_278 != pbStack_340)))) {
            uStack_448 = (byte *)CONCAT44(uStack_448._4_4_,(float)pbStack_340 * _DAT_142e37ae4);
            uVar11 = 0;
            pbStack_4c8 = (byte *)CONCAT44(pbStack_4c8._4_4_,
                                           ((float)pbStack_340 + _DAT_142e36f28) * _DAT_142e37ae4);
            while (uVar11 < pfStack_198) {
              fVar36 = (float)(longlong)uVar11 / pbStack_438._0_4_;
              pbStack_140 = (byte *)CONCAT44(pbStack_140._4_4_,fVar36);
              if ((fVar36 < 0.0) || (_DAT_142e36f28 < fVar36)) {
                uStack_308 = &pbStack_140;
                fStack_300 = 7.7206726;
                fStack_2fc = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14359b36c,&uStack_308,&UNK_14359c3c0);
              }
              auStack_188._0_4_ = fVar36;
              uVar9 = pdb_142802660(&uStack_1d8);
              uVar32 = CONCAT44(fStack_1c4,uStack_1c8);
              uVar15 = (ulonglong)uVar9;
              if (uVar32 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar15,uVar32,&UNK_14359b2b0);
              }
              if (uVar32 <= uVar15 + 1) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar15 + 1,uVar32,&UNK_14359b2c8);
              }
              lVar24 = CONCAT44(fStack_1cc,fStack_1d0);
              fVar49 = _DAT_142e36f28 - extraout_XMM0_Da_03;
              fVar36 = *(float *)(lVar24 + uVar15 * 8);
              fVar50 = *(float *)(lVar24 + 8 + uVar15 * 8);
              fVar53 = (float)*(undefined8 *)uStack_4b8;
              fVar59 = (float)((ulonglong)*(undefined8 *)uStack_4b8 >> 0x20);
              fVar39 = (float)*(undefined8 *)pbStack_578;
              fVar44 = (float)((ulonglong)*(undefined8 *)pbStack_578 >> 0x20);
              fVar40 = (float)*(undefined8 *)pbStack_580;
              fVar41 = (float)((ulonglong)*(undefined8 *)pbStack_580 >> 0x20);
              fVar45 = (float)*(undefined8 *)uStack_4a8;
              fVar48 = (float)((ulonglong)*(undefined8 *)uStack_4a8 >> 0x20);
              cVar8 = pdb_140b77b50(lStack_100);
              uStack_118 = (float *)CONCAT44(uStack_118._4_4_,_DAT_14359c1fc);
              if (cVar8 == '\0') {
                fVar37 = (float)pdb_140b77a00(lStack_100);
                uVar9 = pdb_142802660(&uStack_1d8,auStack_188._0_4_);
                uVar15 = (ulonglong)uVar9;
                if (uVar32 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar15,uVar32,&UNK_14359b2b0);
                }
                if (uVar32 <= uVar15 + 1) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar15 + 1,uVar32,&UNK_14359b2c8);
                }
                fVar46 = *(float *)(lVar24 + 0xc + uVar15 * 8) * extraout_XMM0_Da_04 +
                         (_DAT_142e36f28 - extraout_XMM0_Da_04) *
                         *(float *)(lVar24 + 4 + uVar15 * 8);
                uStack_118 = (float *)CONCAT44(uStack_118._4_4_,
                                               fVar37 * fVar46 + (_DAT_142e36f28 - fVar46) * 0.0);
              }
              fVar37 = ((float)(longlong)uVar11 + _DAT_142e36f28) / pbStack_438._0_4_;
              pbStack_140 = (byte *)CONCAT44(pbStack_140._4_4_,fVar37);
              if ((fVar37 < 0.0) || (_DAT_142e36f28 < fVar37)) {
                uStack_308 = &pbStack_140;
                fStack_300 = 7.7206726;
                fStack_2fc = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14359b36c,&uStack_308,&UNK_14359c3d8);
              }
              auStack_2d8._0_4_ = fVar37;
              uVar9 = pdb_142802660(&uStack_1d8);
              uVar15 = (ulonglong)uVar9;
              if (uVar32 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar15,uVar32,&UNK_14359b2b0);
              }
              if (uVar32 <= uVar15 + 1) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar15 + 1,uVar32,&UNK_14359b2c8);
              }
              fVar58 = _DAT_142e36f28 - extraout_XMM0_Da_05;
              fVar37 = *(float *)(lVar24 + uVar15 * 8);
              fVar46 = *(float *)(lVar24 + 8 + uVar15 * 8);
              cVar8 = pdb_140b77b50(lStack_100);
              uStack_328 = (byte *)CONCAT44(uStack_328._4_4_,(float)uStack_118);
              if (cVar8 == '\0') {
                fVar38 = (float)pdb_140b77a00(lStack_100);
                uVar9 = pdb_142802660(&uStack_1d8,auStack_2d8._0_4_);
                uVar15 = (ulonglong)uVar9;
                if (uVar32 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar15,uVar32,&UNK_14359b2b0);
                }
                if (uVar32 <= uVar15 + 1) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar15 + 1,uVar32,&UNK_14359b2c8);
                }
                fVar47 = *(float *)(lVar24 + 0xc + uVar15 * 8) * extraout_XMM0_Da_06 +
                         (_DAT_142e36f28 - extraout_XMM0_Da_06) *
                         *(float *)(lVar24 + 4 + uVar15 * 8);
                uStack_328 = (byte *)CONCAT44(uStack_328._4_4_,
                                              fVar38 * fVar47 + (_DAT_142e36f28 - fVar47) * 0.0);
              }
              uVar11 = uVar11 + 1;
              fVar50 = fVar49 * fVar36 + fVar50 * extraout_XMM0_Da_03;
              fVar36 = _DAT_142e36f28 - fVar50;
              uStack_298 = (byte *)CONCAT44(fVar50 * fVar44 + fVar59 * fVar36,
                                            fVar50 * fVar39 + fVar53 * fVar36);
              uStack_290 = 0;
              uStack_2c8 = (byte *)CONCAT44(fVar50 * fVar48 + fVar36 * fVar41,
                                            fVar50 * fVar45 + fVar36 * fVar40);
              uStack_2c0 = 0;
              fVar50 = fVar58 * fVar37 + fVar46 * extraout_XMM0_Da_05;
              fVar36 = _DAT_142e36f28 - fVar50;
              uStack_378 = CONCAT44(fVar44 * fVar50 + fVar59 * fVar36,
                                    fVar39 * fVar50 + fVar53 * fVar36);
              uStack_370 = 0;
              auStack_3e8._4_4_ = fVar48 * fVar50 + fVar41 * fVar36;
              auStack_3e8._0_4_ = fVar45 * fVar50 + fVar40 * fVar36;
              _fStack_3e0 = 0;
              for (uVar9 = 0; fVar39 = fStack_45c, fVar49 = fStack_460, fVar41 = fStack_4cc,
                  fVar40 = fStack_4d0, fVar50 = fStack_4d4, fVar36 = fStack_4d8, uVar9 < 4;
                  uVar9 = uVar9 + 1) {
                fVar53 = (float)(int)uVar9 * _DAT_142e37ae4;
                fVar59 = _DAT_142e36f28 - fVar53;
                fVar44 = (float)uStack_2c8 * fVar53 + (float)uStack_298 * fVar59;
                fVar45 = uStack_2c8._4_4_ * fVar53 + uStack_298._4_4_ * fVar59;
                uStack_308 = (byte **)CONCAT44(fVar45 * fStack_4cc + fVar44 * fStack_4d4 +
                                               fStack_45c,
                                               fVar45 * fStack_4d0 + fVar44 * fStack_4d8 +
                                               fStack_460);
                pdb_140df4540(&uStack_5fc,&uStack_308,(float)uStack_118);
                fVar48 = ((float)(int)uVar9 + _DAT_142e36f28) * _DAT_142e37ae4;
                fVar37 = _DAT_142e36f28 - fVar48;
                fVar44 = (float)uStack_298 * fVar37 + (float)uStack_2c8 * fVar48;
                fVar45 = uStack_298._4_4_ * fVar37 + uStack_2c8._4_4_ * fVar48;
                uStack_308 = (byte **)CONCAT44(fVar45 * fVar41 + fVar44 * fVar50 + fVar39,
                                               fVar45 * fVar40 + fVar44 * fVar36 + fVar49);
                pdb_140df4540(&pbStack_474,&uStack_308,(float)uStack_118);
                fVar44 = fVar53 * (float)auStack_3e8._0_4_ + fVar59 * (float)uStack_378;
                fVar45 = fVar53 * (float)auStack_3e8._4_4_ + fVar59 * uStack_378._4_4_;
                uStack_308 = (byte **)CONCAT44(fVar45 * fVar41 + fVar44 * fVar50 + fVar39,
                                               fVar45 * fVar40 + fVar44 * fVar36 + fVar49);
                pdb_140df4540(&pbStack_480,&uStack_308,(float)uStack_328);
                fVar44 = fVar48 * (float)auStack_3e8._0_4_ + fVar37 * (float)uStack_378;
                fVar45 = fVar48 * (float)auStack_3e8._4_4_ + fVar37 * uStack_378._4_4_;
                uStack_308 = (byte **)CONCAT44(fVar39 + fVar45 * fVar41 + fVar44 * fVar50,
                                               fVar49 + fVar45 * fVar40 + fVar44 * fVar36);
                pdb_140df4540(&uStack_608,&uStack_308,(float)uStack_328);
                uStack_650 = uStack_5fc;
                uStack_648 = uStack_5f4;
                fStack_63c = fStack_46c;
                uStack_644 = pbStack_474;
                fStack_630 = fStack_478;
                uStack_638 = pbStack_480;
                pdb_1414737c0(&uStack_48c,&uStack_650);
                plVar1 = plStack_120;
                if (plStack_120 == plStack_130) {
                  pdb_142d91b00(&plStack_130);
                }
                plVar17 = plStack_148;
                *(float *)(lStack_128 + 0x20 + (longlong)plVar1 * 0x24) = fStack_630;
                puVar3 = (undefined4 *)(lStack_128 + 0x10 + (longlong)plVar1 * 0x24);
                *puVar3 = uStack_644._4_4_;
                puVar3[1] = fStack_63c;
                puVar3[2] = (undefined4)uStack_638;
                puVar3[3] = uStack_638._4_4_;
                puVar3 = (undefined4 *)(lStack_128 + (longlong)plVar1 * 0x24);
                *puVar3 = (undefined4)uStack_650;
                puVar3[1] = uStack_650._4_4_;
                puVar3[2] = uStack_648;
                puVar3[3] = (undefined4)uStack_644;
                plStack_120 = (longlong *)((longlong)plVar1 + 1);
                if (plStack_148 == plStack_158) {
                  pdb_142d89250(&plStack_158);
                }
                plVar1 = plStack_160;
                fVar50 = fVar53 * pbStack_4c8._0_4_ + fVar59 * (float)uStack_448;
                fVar36 = fVar48 * pbStack_4c8._0_4_ + fVar37 * (float)uStack_448;
                *(float *)(lStack_150 + (longlong)plVar17 * 0x18) = fVar50;
                *(undefined4 *)(lStack_150 + 4 + (longlong)plVar17 * 0x18) = auStack_188._0_4_;
                *(float *)(lStack_150 + 8 + (longlong)plVar17 * 0x18) = fVar36;
                *(undefined4 *)(lStack_150 + 0xc + (longlong)plVar17 * 0x18) = auStack_188._0_4_;
                *(float *)(lStack_150 + 0x10 + (longlong)plVar17 * 0x18) = fVar50;
                *(undefined4 *)(lStack_150 + 0x14 + (longlong)plVar17 * 0x18) = auStack_2d8._0_4_;
                plStack_148 = (longlong *)((longlong)plVar17 + 1);
                uStack_5b0 = uStack_48c;
                uStack_5a8 = uStack_484;
                uStack_59c = uStack_484;
                uStack_5a4 = (undefined4)uStack_48c;
                uStack_5a0 = (undefined4)((ulonglong)uStack_48c >> 0x20);
                uStack_590 = uStack_484;
                uStack_598 = uStack_48c;
                if (plStack_160 == plStack_170) {
                  pdb_142d91b00(&plStack_170);
                }
                plVar17 = plStack_120;
                *(undefined4 *)(pbStack_168 + (longlong)plVar1 * 0x24 + 0x20) = uStack_590;
                pbVar13 = pbStack_168 + (longlong)plVar1 * 0x24 + 0x10;
                *(undefined4 *)pbVar13 = uStack_5a0;
                *(undefined4 *)(pbVar13 + 4) = uStack_59c;
                *(undefined4 *)(pbVar13 + 8) = (undefined4)uStack_598;
                *(undefined4 *)(pbVar13 + 0xc) = uStack_598._4_4_;
                pbVar13 = pbStack_168 + (longlong)plVar1 * 0x24;
                *(undefined4 *)pbVar13 = (undefined4)uStack_5b0;
                *(undefined4 *)(pbVar13 + 4) = uStack_5b0._4_4_;
                *(undefined4 *)(pbVar13 + 8) = uStack_5a8;
                *(undefined4 *)(pbVar13 + 0xc) = uStack_5a4;
                plStack_160 = (longlong *)((longlong)plVar1 + 1);
                fStack_300 = fStack_46c;
                uStack_308 = (byte **)pbStack_474;
                fStack_2f4 = fStack_600;
                fStack_2fc = (float)uStack_608;
                uStack_2f8 = (undefined4)((ulonglong)uStack_608 >> 0x20);
                fStack_2e8 = fStack_478;
                uStack_2f0 = pbStack_480;
                if (plStack_120 == plStack_130) {
                  pdb_142d91b00(&plStack_130);
                }
                plVar1 = plStack_148;
                *(float *)(lStack_128 + 0x20 + (longlong)plVar17 * 0x24) = fStack_2e8;
                puVar3 = (undefined4 *)(lStack_128 + 0x10 + (longlong)plVar17 * 0x24);
                *puVar3 = uStack_2f8;
                puVar3[1] = fStack_2f4;
                puVar3[2] = (undefined4)uStack_2f0;
                puVar3[3] = uStack_2f0._4_4_;
                puVar3 = (undefined4 *)(lStack_128 + (longlong)plVar17 * 0x24);
                *puVar3 = (undefined4)uStack_308;
                puVar3[1] = uStack_308._4_4_;
                puVar3[2] = fStack_300;
                puVar3[3] = fStack_2fc;
                plStack_120 = (longlong *)((longlong)plVar17 + 1);
                if (plStack_148 == plStack_158) {
                  pdb_142d89250(&plStack_158);
                }
                plVar17 = plStack_160;
                *(float *)(lStack_150 + (longlong)plVar1 * 0x18) = fVar36;
                *(undefined4 *)(lStack_150 + 4 + (longlong)plVar1 * 0x18) = auStack_188._0_4_;
                *(float *)(lStack_150 + 8 + (longlong)plVar1 * 0x18) = fVar36;
                *(undefined4 *)(lStack_150 + 0xc + (longlong)plVar1 * 0x18) = auStack_2d8._0_4_;
                *(float *)(lStack_150 + 0x10 + (longlong)plVar1 * 0x18) = fVar50;
                *(undefined4 *)(lStack_150 + 0x14 + (longlong)plVar1 * 0x18) = auStack_2d8._0_4_;
                plStack_148 = (longlong *)((longlong)plVar1 + 1);
                if (plStack_160 == plStack_170) {
                  pdb_142d91b00(&plStack_170);
                }
                *(undefined4 *)(pbStack_168 + (longlong)plVar17 * 0x24 + 0x20) = uStack_590;
                *(ulonglong *)(pbStack_168 + (longlong)plVar17 * 0x24 + 0x10) =
                     CONCAT44(uStack_59c,uStack_5a0);
                *(undefined8 *)(pbStack_168 + (longlong)plVar17 * 0x24 + 0x10 + 8) = uStack_598;
                pbVar13 = pbStack_168 + (longlong)plVar17 * 0x24;
                *(undefined4 *)pbVar13 = (undefined4)uStack_5b0;
                *(undefined4 *)(pbVar13 + 4) = uStack_5b0._4_4_;
                *(undefined4 *)(pbVar13 + 8) = uStack_5a8;
                *(undefined4 *)(pbVar13 + 0xc) = uStack_5a4;
                plStack_160 = (longlong *)((longlong)plVar17 + 1);
              }
            }
            cVar8 = pdb_140b77b50(lStack_100);
            fVar36 = _DAT_14359c1fc;
            if (cVar8 == '\0') {
              fVar36 = (float)pdb_140b77a00(lStack_100);
            }
            fVar44 = fStack_45c;
            fVar39 = fStack_460;
            fVar49 = fStack_4cc;
            fVar41 = fStack_4d0;
            fVar40 = fStack_4d4;
            fVar50 = fStack_4d8;
            if (plStack_190 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(0,0,&UNK_14359c360);
            }
            fVar45 = (float)*(undefined8 *)auStack_368;
            fVar48 = (float)((ulonglong)*(undefined8 *)auStack_368 >> 0x20);
            auStack_518[0] =
                 CONCAT44(fVar48 * fStack_4cc + fVar45 * fStack_4d4 + fStack_45c,
                          fVar48 * fStack_4d0 + fVar45 * fStack_4d8 + fStack_460);
            pdb_140df4540(&fStack_410,auStack_518,fVar36);
            if (plStack_190 == (longlong *)0x1) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(1,1,&UNK_14359c378);
            }
            fVar45 = (float)*(undefined8 *)((longlong)auStack_368 + 8);
            fVar48 = (float)((ulonglong)*(undefined8 *)((longlong)auStack_368 + 8) >> 0x20);
            pbStack_1e8 = (byte *)CONCAT44(fVar48 * fVar49 + fVar45 * fVar40 + fVar44,
                                           fVar48 * fVar41 + fVar45 * fVar50 + fVar39);
            pdb_140df4540(&fStack_394,&pbStack_1e8,fVar36);
            if (plStack_190 < (longlong *)0x3) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(2,2,&UNK_14359c390);
            }
            fVar45 = (float)*(undefined8 *)((longlong)auStack_368 + 0x10);
            fVar48 = (float)((ulonglong)*(undefined8 *)((longlong)auStack_368 + 0x10) >> 0x20);
            pbStack_140 = (byte *)CONCAT44(fVar48 * fVar49 + fVar45 * fVar40 + fVar44,
                                           fVar48 * fVar41 + fVar45 * fVar50 + fVar39);
            pdb_140df4540(&fStack_41c,&pbStack_140,fVar36);
            if (plStack_190 == (longlong *)0x3) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(3,3,&UNK_14359c3a8);
            }
            fVar45 = (float)*(undefined8 *)((longlong)auStack_368 + 0x18);
            fVar48 = (float)((ulonglong)*(undefined8 *)((longlong)auStack_368 + 0x18) >> 0x20);
            uStack_308 = (byte **)CONCAT44(fVar44 + fVar49 * fVar48 + fVar40 * fVar45,
                                           fVar39 + fVar41 * fVar48 + fVar50 * fVar45);
            pdb_140df4540(&fStack_498,&uStack_308,fVar36);
            fVar36 = (float)((ulonglong)uStack_494 >> 0x20);
            if (*(char *)(lStack_100 + 0x3c) == '\x01') {
              pfVar19 = &fStack_498;
              pfVar21 = &fStack_41c;
              pfVar12 = &fStack_410;
              pfVar27 = &fStack_394;
              fVar50 = fStack_418;
              fVar40 = fStack_414;
              fVar41 = (float)uStack_494;
              fStack_31c = fStack_390;
              fStack_10c = fStack_40c;
              fStack_110 = fStack_408;
              fStack_320 = fStack_38c;
            }
            else {
              pfVar19 = &fStack_410;
              pfVar21 = &fStack_498;
              pfVar12 = &fStack_394;
              pfVar27 = &fStack_41c;
              fVar50 = (float)uStack_494;
              fVar40 = fVar36;
              fVar41 = fStack_40c;
              fVar36 = fStack_408;
              fStack_31c = fStack_418;
              fStack_10c = fStack_390;
              fStack_110 = fStack_38c;
              fStack_320 = fStack_414;
            }
            fVar49 = *pfVar21;
            fVar39 = *pfVar19;
            fVar44 = *pfVar27;
            _auStack_2d8 = ZEXT416((uint)fStack_320);
            uStack_328 = (byte *)CONCAT44(fVar44,fStack_31c);
            fVar45 = *pfVar12;
            auStack_188 = ZEXT416((uint)fStack_110);
            uStack_118 = (float *)CONCAT44(fVar45,fStack_10c);
            uStack_298 = (byte *)CONCAT44(fVar40,fVar40);
            uStack_290 = 0;
            uStack_2c8 = (byte *)CONCAT44(fVar50,fVar49);
            uStack_2c0 = (ulonglong)(uint)fVar40 << 0x20;
            uStack_378 = CONCAT44(fVar36,fVar36);
            uStack_370 = 0;
            for (uVar9 = 0; plVar1 = plStack_120, lVar24 = lStack_1a0, uVar9 < 4; uVar9 = uVar9 + 1)
            {
              fVar53 = ((float)(int)uVar9 + _DAT_14359c200) * _DAT_142f6e3e0;
              fVar48 = ((float)(int)uVar9 + _UNK_14359c204) * _UNK_142f6e3e4;
              if (plStack_120 == plStack_130) {
                pdb_142d91b00(&plStack_130);
              }
              fVar59 = fVar53 * (float)uStack_328;
              fVar37 = fVar53 * fStack_320;
              fVar46 = _DAT_142e37950 - fVar53;
              fVar58 = _UNK_142e37954 - fVar48;
              fVar54 = fVar46 * (float)uStack_118;
              fVar56 = fVar46 * fStack_110;
              fVar55 = fVar58 * uStack_118._4_4_ + fVar48 * uStack_328._4_4_;
              fVar57 = fVar58 * fStack_10c + fVar48 * fStack_31c;
              fVar60 = (float)auStack_2d8._0_4_ * fVar48 + (float)auStack_188._0_4_ * fVar58;
              fVar38 = fVar53 * fVar49 + fVar46 * fVar39;
              fVar47 = fVar53 * fVar50 + fVar46 * fVar41;
              fVar51 = fVar53 * fVar40 + fVar46 * fVar36;
              *(ulonglong *)(lStack_128 + (longlong)plVar1 * 0x24) =
                   CONCAT44(uStack_2c8._4_4_ * fVar48 + fVar41 * fVar58,
                            (float)uStack_2c8 * fVar48 + fVar39 * fVar58);
              *(float *)(lStack_128 + 8 + (longlong)plVar1 * 0x24) =
                   (float)uStack_298 * fVar48 + (float)uStack_378 * fVar58;
              pfVar19 = (float *)(lStack_128 + 0xc + (longlong)plVar1 * 0x24);
              *pfVar19 = fVar38;
              pfVar19[1] = fVar47;
              pfVar19[2] = fVar51;
              pfVar19[3] = fVar55;
              *(float *)(lStack_128 + 0x1c + (longlong)plVar1 * 0x24) = fVar57;
              *(float *)(lStack_128 + 0x20 + (longlong)plVar1 * 0x24) = fVar60;
              plVar17 = (longlong *)((longlong)plVar1 + 1);
              if (plVar17 == plStack_130) {
                plStack_120 = plVar17;
                pdb_142d91b00(&plStack_130);
              }
              plVar5 = plStack_148;
              pfVar19 = (float *)(lStack_128 + (longlong)plVar17 * 0x24);
              *pfVar19 = fVar38;
              pfVar19[1] = fVar47;
              pfVar19[2] = fVar51;
              pfVar19[3] = fVar53 * fVar44 + fVar46 * fVar45;
              pfVar19 = (float *)(lStack_128 + 0x10 + (longlong)plVar17 * 0x24);
              *pfVar19 = fVar54 + fVar59;
              pfVar19[1] = fVar56 + fVar37;
              pfVar19[2] = fVar55;
              pfVar19[3] = fVar57;
              *(float *)(lStack_128 + 0x20 + (longlong)plVar17 * 0x24) = fVar60;
              plStack_120 = (longlong *)((longlong)plVar1 + 2);
              if (plStack_148 == plStack_158) {
                pdb_142d89250(&plStack_158);
              }
              fVar48 = fVar48 + fVar58 * 0.0;
              fVar53 = fVar53 + fVar46 * 0.0;
              *(float *)(lStack_150 + (longlong)plVar5 * 0x18) = fVar48;
              *(undefined4 *)(lStack_150 + 4 + (longlong)plVar5 * 0x18) = 0x40000000;
              *(float *)(lStack_150 + 8 + (longlong)plVar5 * 0x18) = fVar53;
              *(undefined4 *)(lStack_150 + 0xc + (longlong)plVar5 * 0x18) = 0x40000000;
              *(float *)(lStack_150 + 0x10 + (longlong)plVar5 * 0x18) = fVar48;
              *(undefined4 *)(lStack_150 + 0x14 + (longlong)plVar5 * 0x18) = 0x40066666;
              plVar1 = (longlong *)((longlong)plVar5 + 1);
              if (plVar1 == plStack_158) {
                plStack_148 = plVar1;
                pdb_142d89250(&plStack_158);
              }
              plVar17 = plStack_160;
              *(float *)(lStack_150 + (longlong)plVar1 * 0x18) = fVar53;
              *(undefined4 *)(lStack_150 + 4 + (longlong)plVar1 * 0x18) = 0x40000000;
              *(float *)(lStack_150 + 8 + (longlong)plVar1 * 0x18) = fVar53;
              *(undefined4 *)(lStack_150 + 0xc + (longlong)plVar1 * 0x18) = 0x40066666;
              *(float *)(lStack_150 + 0x10 + (longlong)plVar1 * 0x18) = fVar48;
              *(undefined4 *)(lStack_150 + 0x14 + (longlong)plVar1 * 0x18) = 0x40066666;
              plStack_148 = (longlong *)((longlong)plVar5 + 2);
              uStack_308 = (byte **)0x3f80000000000000;
              fStack_300 = 0.0;
              fStack_2fc = 0.0;
              uStack_2f8 = 0x3f800000;
              fStack_2f4 = 0.0;
              uStack_2f0 = (byte *)0x3f80000000000000;
              fStack_2e8 = 0.0;
              if (plStack_160 == plStack_170) {
                pdb_142d91b00(&plStack_170);
              }
              *(float *)(pbStack_168 + (longlong)plVar17 * 0x24 + 0x20) = fStack_2e8;
              pbVar13 = pbStack_168 + (longlong)plVar17 * 0x24 + 0x10;
              *(undefined4 *)pbVar13 = uStack_2f8;
              *(float *)(pbVar13 + 4) = fStack_2f4;
              *(undefined4 *)(pbVar13 + 8) = (undefined4)uStack_2f0;
              *(undefined4 *)(pbVar13 + 0xc) = uStack_2f0._4_4_;
              pbVar13 = pbStack_168 + (longlong)plVar17 * 0x24;
              *(undefined4 *)pbVar13 = (undefined4)uStack_308;
              *(undefined4 *)(pbVar13 + 4) = uStack_308._4_4_;
              *(float *)(pbVar13 + 8) = fStack_300;
              *(float *)(pbVar13 + 0xc) = fStack_2fc;
              plVar1 = (longlong *)((longlong)plVar17 + 1);
              uStack_308 = (byte **)0x3f80000000000000;
              fStack_300 = 0.0;
              fStack_2fc = 0.0;
              uStack_2f8 = 0x3f800000;
              fStack_2f4 = 0.0;
              uStack_2f0 = (byte *)0x3f80000000000000;
              fStack_2e8 = 0.0;
              if (plVar1 == plStack_170) {
                plStack_160 = plVar1;
                pdb_142d91b00(&plStack_170);
              }
              *(float *)(pbStack_168 + (longlong)plVar1 * 0x24 + 0x20) = fStack_2e8;
              pbVar13 = pbStack_168 + (longlong)plVar1 * 0x24 + 0x10;
              *(undefined4 *)pbVar13 = uStack_2f8;
              *(float *)(pbVar13 + 4) = fStack_2f4;
              *(undefined4 *)(pbVar13 + 8) = (undefined4)uStack_2f0;
              *(undefined4 *)(pbVar13 + 0xc) = uStack_2f0._4_4_;
              *(byte ***)(pbStack_168 + (longlong)plVar1 * 0x24) = uStack_308;
              *(ulonglong *)(pbStack_168 + (longlong)plVar1 * 0x24 + 8) =
                   CONCAT44(fStack_2fc,fStack_300);
              plStack_160 = (longlong *)((longlong)plVar17 + 2);
            }
          }
          goto LAB_14280a887;
        }
        if (plStack_268 != (longlong *)0x0) {
          pub_1406abac0((byte *)auStack_368,(longlong)plStack_268 << 3,4);
        }
        if (lStack_250 != 0) {
          pub_1406abac0(pbStack_248,lStack_250 << 2,4);
        }
        if (CONCAT44(fStack_3d4,fStack_3d8) != 0) {
          pub_1406abac0(pbStack_520,CONCAT44(fStack_3d4,fStack_3d8) << 3,4);
        }
        if (pbStack_3c0 != (byte *)0x0) {
          pub_1406abac0(pbStack_3b8,(longlong)pbStack_3c0 << 2,4);
        }
        if (uStack_1d8 != (float *)0x0) {
          pub_1406abac0((byte *)CONCAT44(fStack_1cc,fStack_1d0),(longlong)uStack_1d8 << 3,4);
        }
        if (uStack_1c0 != (byte *)0x0) {
          pbVar13 = (byte *)CONCAT44(fStack_1b4,fStack_1b8);
          pbVar25 = uStack_1c0;
          goto LAB_14280ba0c;
        }
      }
      auStack_188._0_8_ = lVar24 + uVar11 * 0x48;
      uStack_118 = (float *)(lStack_128 + (longlong)plStack_120 * 0x24);
      lVar24 = lStack_128;
      while (uVar42 = (undefined4)((ulonglong)uVar61 >> 0x20), (float *)lVar24 != uStack_118) {
        uStack_f1 = 1;
        uStack_f2 = 1;
        uStack_f3 = 1;
        lVar31 = pdb_1406d0830(lVar24);
        lVar24 = lVar24 + 0x24;
        for (lVar29 = 0; lVar29 != 0x24; lVar29 = lVar29 + 0xc) {
          uStack_f1 = 1;
          uStack_f2 = 1;
          uStack_f3 = 1;
          pdb_140b76780(lVar31 + lVar29,
                        *(float *)(lVar31 + 4 + lVar29) - *(float *)(lStack_100 + 0x4c));
        }
      }
      *(undefined4 *)(pbStack_1f8 + uStack_338 * 4) = uStack_2ac;
      plStack_258 = plStack_120;
      plStack_268 = plStack_130;
      pcStack_260 = (code *)lStack_128;
      uStack_f1 = 1;
      uStack_f2 = 1;
      uStack_f3 = 0;
      pdb_140a0a0f0(auStack_188._0_8_,&plStack_268);
      *(undefined4 *)(pbStack_1f8 + uStack_338 * 4) = uStack_2ac;
      plStack_258 = plStack_148;
      plStack_268 = plStack_158;
      pcStack_260 = (code *)lStack_150;
      uStack_f1 = 1;
      uStack_f2 = 0;
      uStack_f3 = 0;
      pdb_140a0a1b0(auStack_188._0_8_,&plStack_268);
      *(undefined4 *)(pbStack_1f8 + uStack_338 * 4) = uStack_2ac;
      plStack_258 = plStack_160;
      plStack_268 = plStack_170;
      pcStack_260 = (code *)pbStack_168;
      uStack_f1 = 0;
      uStack_f2 = 0;
      uStack_f3 = 0;
      pdb_140a0a080(auStack_188._0_8_,&plStack_268);
      *puStack_540 = uStack_404;
      uStack_f1 = 0;
      uStack_f2 = 0;
      uStack_f3 = 0;
      pfStack_198 = (float *)pdb_142b0f0c0(uStack_548,1,uStack_538);
      uStack_f1 = 0;
      uStack_f2 = 0;
      uStack_f3 = 0;
      uVar9 = pdb_1409012c0(uStack_400);
      pfStack_198[0x16] = (float)(uVar9 | 0x2000000);
      uVar61 = _UNK_14359c468;
      fVar36 = *(float *)(lStack_100 + 0x4c);
      fVar39 = fVar36 * _DAT_142e378e0;
      fVar44 = fVar36 * _UNK_142e378e4;
      fVar45 = fVar36 * _UNK_142e378e8;
      fVar36 = fVar36 * _UNK_142e378ec;
      *(undefined8 *)(pfStack_198 + 8) = _DAT_14359c460;
      *(undefined8 *)(pfStack_198 + 10) = uVar61;
      uVar61 = _UNK_14359c458;
      *(undefined8 *)(pfStack_198 + 4) = _DAT_14359c450;
      *(undefined8 *)(pfStack_198 + 6) = uVar61;
      fVar49 = _UNK_14359c44c;
      fVar41 = _UNK_14359c448;
      fVar40 = _UNK_14359c444;
      fVar50 = _DAT_14359c440;
      *pfStack_198 = _DAT_14359c440;
      pfStack_198[1] = fVar40;
      pfStack_198[2] = fVar41;
      pfStack_198[3] = fVar49;
      pfStack_198[0xc] = fVar39;
      pfStack_198[0xd] = fVar44;
      pfStack_198[0xe] = fVar45;
      pfStack_198[0xf] = fVar36;
      uStack_118 = pfStack_198;
      pfStack_198[0x14] = 0.0;
      pfStack_198[0x15] = 0.0;
      uStack_f1 = 0;
      uStack_f2 = 0;
      uStack_f3 = 0;
      cVar8 = pdb_140b77b50();
      fVar36 = _DAT_14359c1fc;
      if (cVar8 == '\0') {
        fVar36 = 0.0;
      }
      unaff_XMM9_Db = 0.0;
      uStack_f1 = 0;
      uStack_f2 = 0;
      uStack_f3 = 0;
      cVar8 = pdb_140b77b50(lStack_100);
      fVar40 = fVar36;
      if (cVar8 == '\0') {
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        fVar40 = (float)pdb_140b77a00(lStack_100);
      }
      pfStack_198 = pfStack_198 + 0x10;
      if (*(int *)(lStack_100 + 8) == 1) {
        uStack_458 = *(undefined8 *)(pfStack_4e0 + 4);
        fStack_468 = *pfStack_4e0;
        fStack_464 = pfStack_4e0[1];
        fStack_460 = pfStack_4e0[2];
        fStack_45c = pfStack_4e0[3];
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        pdb_140b73b80(&plStack_268);
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        pdb_140b73b00(&fStack_3d8,&plStack_268);
        fVar39 = fStack_3cc;
        fVar49 = fStack_3d0;
        fVar41 = fStack_3d4;
        fVar50 = fStack_3d8;
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        cVar8 = pdb_140b77b50(lStack_100);
        if (cVar8 == '\0') {
          fVar50 = fVar50 + _DAT_143309820;
          fVar41 = fVar41 + _UNK_143309824;
          fVar49 = fVar49 + _UNK_143309828;
          fVar39 = fVar39 + _UNK_14330982c;
        }
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        pdb_140df2970(&fStack_230,fVar50,fVar41,&UNK_14359c270);
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        uVar43 = 0;
        uVar35 = pdb_140ac6200(lStack_100,0,0);
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        in_stack_fffffffffffff8f8 = CONCAT44(uVar42,uVar43);
        pdb_140df1b90(&fStack_358,fVar49,fVar39,uVar35,in_stack_fffffffffffff8f8,&UNK_14359c288);
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        pdb_140df1c10(&fStack_4d8,&fStack_468);
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        cVar8 = pdb_140b77b60(lStack_100);
        if (cVar8 == '\0') {
          uStack_288 = 0;
        }
        else {
          bVar7 = *(byte *)(lStack_100 + 0x3c);
          uStack_f1 = 0;
          uStack_f2 = 0;
          uStack_f3 = 0;
          fVar50 = (float)pdb_140b76870(lStack_100 + 0x24);
          afStack_220[bVar7] = afStack_220[bVar7] - (fVar50 + _DAT_142e3c624);
          afStack_348[bVar7] = afStack_348[bVar7] + _DAT_142f684a4;
          uStack_f1 = 0;
          uStack_f2 = 0;
          uStack_f3 = 0;
          pdb_140b77190(&uStack_288,lStack_100);
        }
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        pdb_140df37e0(&fStack_3d8,&fStack_230);
        pdb_140df37e0(&plStack_268,&fStack_358);
        fVar39 = fStack_4cc;
        fVar49 = fStack_4d0;
        fVar41 = fStack_4d4;
        fVar50 = fStack_4d8;
        uStack_298 = (byte *)CONCAT44(fStack_3cc,fStack_3d0);
        pbStack_4c8 = uStack_298 + lStack_3c8 * 8;
        plStack_190 = plStack_258;
        uStack_378 = CONCAT71(uStack_378._1_7_,(char)uStack_288);
        uStack_4a8 = pbStack_280;
        auStack_368 = (undefined1  [8])pbStack_278;
        lStack_1a0 = 1;
        pbStack_1f8 = (byte *)pcStack_260;
        lStack_100 = 1;
        auStack_3e8 = (undefined1  [8])(pcStack_260 + (longlong)plStack_258 * 8);
        pbVar13 = (byte *)0x0;
        pcVar22 = pcStack_260;
        auVar23 = (undefined1  [8])
                  ((longlong)plStack_258 + ((ulonglong)(plStack_258 == (longlong *)0x0) - 1));
        pbVar25 = (byte *)(lStack_3c8 + -1 + (ulonglong)(lStack_3c8 == 0));
        pbVar18 = uStack_298;
        auVar33 = (undefined1  [8])(pcStack_260 + (longlong)plStack_258 * 8);
        pcVar34 = pcStack_260;
        pbStack_208 = uStack_298;
        while( true ) {
          if ((pbVar25 == (byte *)0x0) || (pbVar25 = pbVar25 + -1, pbVar18 == pbStack_4c8))
          goto LAB_14280c581;
          uStack_328 = pbVar18;
          if (lStack_100 != 0) break;
          pbVar26 = pbStack_4c8;
          if ((uStack_298 == pbStack_4c8) ||
             (pbVar26 = uStack_298 + 8, pbVar28 = uStack_298, uStack_298 = pbVar26,
             auVar23 == (undefined1  [8])0x0)) goto LAB_14280c57e;
LAB_14280c466:
          pbVar26 = uStack_298;
          if ((undefined1  [8])pcVar22 == auVar33) goto LAB_14280c57e;
          auStack_2d8 = (undefined1  [8])(pcVar22 + 8);
          if (lStack_1a0 == 0) {
            if ((undefined1  [8])pcVar34 != auVar33) goto LAB_14280c494;
LAB_14280c830:
            ppbVar14 = &pbStack_210;
            pcVar34 = (code *)0x0;
          }
          else {
            if ((ulonglong)((longlong)auVar33 - (longlong)pcVar34) < 9) goto LAB_14280c830;
            pcVar34 = pcVar34 + 8;
LAB_14280c494:
            auVar33 = (undefined1  [8])(pcVar34 + 8);
            ppbVar14 = &pbStack_5d8;
            uStack_4b8 = (byte *)pcVar22;
            uStack_448 = pbVar13;
            pbStack_438 = pbVar28;
            uStack_2c8 = pbVar18 + 8;
            pbStack_210 = pbVar18;
            pbVar13 = pbVar13 + 1;
          }
          lStack_100 = 0;
          lVar31 = lStack_100;
          auStack_188._0_8_ = pbVar13;
          lStack_1a0 = 0;
          lVar24 = lStack_1a0;
          *ppbVar14 = (byte *)pcVar34;
          fVar45 = fStack_45c;
          fVar44 = fStack_460;
          pbVar13 = pbStack_5d8;
          if (pbStack_210 == (byte *)0x0) goto LAB_14280c877;
          lStack_100 = 0;
          lStack_1a0 = 0;
          auStack_2d8 = (undefined1  [8])((longlong)auVar23 + -1);
          uStack_328 = pbVar25;
          uStack_2c8 = (byte *)auVar33;
          if (((char)uStack_378 == '\0') ||
             ((uStack_4a8 != uStack_448 &&
              (lVar24 = lStack_1a0, lVar31 = lStack_100, auStack_368 != (undefined1  [8])uStack_448)
              ))) {
            fVar48 = (float)*(undefined8 *)pbStack_210;
            fVar53 = (float)((ulonglong)*(undefined8 *)pbStack_210 >> 0x20);
            uStack_5e0 = CONCAT44(fVar53 * fVar39 + fVar48 * fVar41 + fStack_45c,
                                  fVar53 * fVar49 + fVar48 * fVar50 + fStack_460);
            pdb_140df4540(&pbStack_1e8,&uStack_5e0,fVar36);
            fVar48 = (float)*(undefined8 *)pbStack_438;
            fVar53 = (float)((ulonglong)*(undefined8 *)pbStack_438 >> 0x20);
            pbStack_218 = (byte *)CONCAT44(fVar53 * fVar39 + fVar48 * fVar41 + fVar45,
                                           fVar53 * fVar49 + fVar48 * fVar50 + fVar44);
            pdb_140df4540(&pbStack_140,&pbStack_218,fVar36);
            fVar48 = (float)*(undefined8 *)uStack_4b8;
            fVar53 = (float)((ulonglong)*(undefined8 *)uStack_4b8 >> 0x20);
            apbStack_2a8[0] =
                 (byte *)CONCAT44(fVar53 * fVar39 + fVar48 * fVar41 + fVar45,
                                  fVar53 * fVar49 + fVar48 * fVar50 + fVar44);
            pdb_140df4540(&uStack_308,apbStack_2a8,fVar40);
            fVar48 = (float)*(undefined8 *)pbVar13;
            fVar53 = (float)((ulonglong)*(undefined8 *)pbVar13 >> 0x20);
            auStack_518[0] =
                 CONCAT44(fVar45 + fVar53 * fVar39 + fVar48 * fVar41,
                          fVar44 + fVar53 * fVar49 + fVar48 * fVar50);
            pdb_140df4540(&uStack_1d8,auStack_518,fVar40);
            fVar48 = fStack_138;
            pbVar26 = pbStack_140;
            fVar45 = fStack_1e0;
            pbVar25 = pbStack_1e8;
            fVar44 = fStack_300;
            pbVar13 = (byte *)uStack_308;
            lVar24 = *(longlong *)(uStack_118 + 0x14);
            if ((ulonglong)(*(longlong *)(uStack_118 + 0x10) - lVar24) < 3) {
              in_stack_fffffffffffff8f8 = 0;
              pdb_142d7f1b0(pfStack_198,lVar24,3,4,0xc);
              lVar24 = *(longlong *)(uStack_118 + 0x14);
            }
            fVar37 = fStack_138;
            pbVar6 = pbStack_140;
            fVar59 = fStack_1d0;
            fVar53 = fStack_300;
            pbVar28 = (byte *)uStack_308;
            lVar31 = *(longlong *)(uStack_118 + 0x12);
            *(float *)(lVar31 + 0x20 + lVar24 * 0xc) = fVar44;
            uStack_6c8 = SUB84(pbVar25,0);
            uStack_6c4 = (undefined4)((ulonglong)pbVar25 >> 0x20);
            uStack_6bc = SUB84(pbVar26,0);
            uStack_6b8 = (undefined4)((ulonglong)pbVar26 >> 0x20);
            uStack_6b0 = SUB84(pbVar13,0);
            uStack_6ac = (undefined4)((ulonglong)pbVar13 >> 0x20);
            puVar3 = (undefined4 *)(lVar31 + 0x10 + lVar24 * 0xc);
            *puVar3 = uStack_6b8;
            puVar3[1] = fVar48;
            puVar3[2] = uStack_6b0;
            puVar3[3] = uStack_6ac;
            puVar3 = (undefined4 *)(lVar31 + lVar24 * 0xc);
            *puVar3 = uStack_6c8;
            puVar3[1] = uStack_6c4;
            puVar3[2] = fVar45;
            puVar3[3] = uStack_6bc;
            lVar24 = lVar24 + 3;
            *(longlong *)(uStack_118 + 0x14) = lVar24;
            uStack_6e4 = SUB84(uStack_1d8,0);
            uStack_6e0 = (undefined4)((ulonglong)uStack_1d8 >> 0x20);
            if ((ulonglong)(*(longlong *)(uStack_118 + 0x10) - lVar24) < 3) {
              in_stack_fffffffffffff8f8 = 0;
              pdb_142d7f1b0(pfStack_198,lVar24,3,4,0xc);
              lVar24 = *(longlong *)(uStack_118 + 0x14);
            }
            lVar31 = *(longlong *)(uStack_118 + 0x12);
            *(float *)(lVar31 + 0x20 + lVar24 * 0xc) = fVar53;
            uStack_6f0 = SUB84(pbVar6,0);
            uStack_6ec = (undefined4)((ulonglong)pbVar6 >> 0x20);
            puVar2 = (undefined8 *)(lVar31 + 0x10 + lVar24 * 0xc);
            *puVar2 = CONCAT44(fVar59,uStack_6e0);
            puVar2[1] = pbVar28;
            puVar3 = (undefined4 *)(lVar31 + lVar24 * 0xc);
            *puVar3 = uStack_6f0;
            puVar3[1] = uStack_6ec;
            puVar3[2] = fVar37;
            puVar3[3] = uStack_6e4;
            *(longlong *)(uStack_118 + 0x14) = lVar24 + 3;
            lVar24 = lStack_1a0;
            lVar31 = lStack_100;
          }
          lStack_100 = lVar31;
          lStack_1a0 = lVar24;
          pbVar13 = (byte *)auStack_188._0_8_;
          pcVar22 = pcVar22 + 8;
          auVar23 = auStack_2d8;
          pbVar25 = uStack_328;
          pbVar18 = pbVar18 + 8;
          auVar33 = auStack_3e8;
          pcVar34 = (code *)uStack_2c8;
        }
        pbVar26 = pbStack_4c8;
        if (8 < (ulonglong)((longlong)pbStack_4c8 - (longlong)uStack_298)) {
          pbVar28 = uStack_298 + 8;
          uStack_298 = uStack_298 + 0x10;
          pbVar26 = uStack_298;
          if (auVar23 != (undefined1  [8])0x0) goto LAB_14280c466;
        }
LAB_14280c57e:
        uStack_298 = pbVar26;
        lStack_100 = 0;
LAB_14280c581:
        auStack_188._0_8_ = pbVar13;
        pbStack_210 = (byte *)0x0;
LAB_14280c877:
        fVar44 = fStack_45c;
        fVar39 = fStack_460;
        fVar49 = fStack_4cc;
        fVar41 = fStack_4d0;
        fVar50 = fStack_4d4;
        fVar36 = fStack_4d8;
        if (plStack_190 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,0,&UNK_143646fa0);
        }
        fVar45 = (float)*(undefined8 *)pbStack_1f8;
        fVar48 = (float)((ulonglong)*(undefined8 *)pbStack_1f8 >> 0x20);
        pbStack_140 = (byte *)CONCAT44(fVar48 * fStack_4cc + fVar45 * fStack_4d4 + fStack_45c,
                                       fVar48 * fStack_4d0 + fVar45 * fStack_4d8 + fStack_460);
        pdb_140df4540(&pbStack_1e8,&pbStack_140,fVar40);
        pbStack_140 = pbStack_1e8;
        fStack_138 = fStack_1e0;
        fStack_1d0 = fStack_1e0;
        uStack_1d8 = (float *)pbStack_1e8;
        if (plStack_190 == (longlong *)0x1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(1,1,&UNK_143646fa0);
        }
        fVar45 = (float)*(undefined8 *)(pbStack_1f8 + 8);
        fVar48 = (float)((ulonglong)*(undefined8 *)(pbStack_1f8 + 8) >> 0x20);
        pbStack_218 = (byte *)CONCAT44(fVar48 * fVar49 + fVar45 * fVar50 + fVar44,
                                       fVar48 * fVar41 + fVar45 * fVar36 + fVar39);
        pdb_140df4540(&pbStack_1e8,&pbStack_218,fVar40);
        pbStack_140 = pbStack_1e8;
        fStack_138 = fStack_1e0;
        fStack_1c4 = fStack_1e0;
        fStack_1cc = SUB84(pbStack_1e8,0);
        uStack_1c8 = (undefined4)((ulonglong)pbStack_1e8 >> 0x20);
        if (plStack_190 < (longlong *)0x3) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(2,2,&UNK_143646fa0);
        }
        fVar45 = (float)*(undefined8 *)(pbStack_1f8 + 0x10);
        fVar48 = (float)((ulonglong)*(undefined8 *)(pbStack_1f8 + 0x10) >> 0x20);
        pbStack_218 = (byte *)CONCAT44(fVar48 * fVar49 + fVar45 * fVar50 + fVar44,
                                       fVar48 * fVar41 + fVar45 * fVar36 + fVar39);
        pdb_140df4540(&pbStack_1e8,&pbStack_218,fVar40);
        pbStack_140 = pbStack_1e8;
        fStack_138 = fStack_1e0;
        fStack_1b8 = fStack_1e0;
        uStack_1c0 = pbStack_1e8;
        if (plStack_190 == (longlong *)0x3) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(3,3,&UNK_143646fa0);
        }
        fVar45 = (float)*(undefined8 *)(pbStack_1f8 + 0x18);
        fVar48 = (float)((ulonglong)*(undefined8 *)(pbStack_1f8 + 0x18) >> 0x20);
        pbStack_218 = (byte *)CONCAT44(fVar44 + fVar49 * fVar48 + fVar50 * fVar45,
                                       fVar39 + fVar41 * fVar48 + fVar36 * fVar45);
        pdb_140df4540(&pbStack_1e8,&pbStack_218,fVar40);
        fVar41 = fStack_1b8;
        pbVar25 = uStack_1c0;
        fVar40 = fStack_1c4;
        uVar42 = uStack_1c8;
        fVar50 = fStack_1cc;
        fVar36 = fStack_1d0;
        pbVar13 = (byte *)uStack_1d8;
        pbStack_140 = pbStack_1e8;
        fStack_138 = fStack_1e0;
        fStack_1ac = fStack_1e0;
        fStack_1b4 = SUB84(pbStack_1e8,0);
        fStack_1b0 = (float)((ulonglong)pbStack_1e8 >> 0x20);
        uStack_308 = (byte **)uStack_1d8;
        fStack_300 = fStack_1d0;
        fStack_2fc = fStack_1cc;
        uStack_2f8 = uStack_1c8;
        fStack_2f4 = fStack_1c4;
        uStack_2f0 = uStack_1c0;
        fStack_2e8 = fStack_1b8;
        fStack_2e4 = fStack_1b4;
        fStack_2e0 = fStack_1b0;
        fStack_2dc = fStack_1e0;
        lVar24 = *(longlong *)(uStack_118 + 0x14);
        if ((ulonglong)(*(longlong *)(uStack_118 + 0x10) - lVar24) < 3) {
          in_stack_fffffffffffff8f8 = 0;
          pdb_142d7f1b0(pfStack_198,lVar24,3,4,0xc);
          lVar24 = *(longlong *)(uStack_118 + 0x14);
        }
        fVar48 = fStack_2dc;
        fVar45 = fStack_2e0;
        fVar44 = fStack_2e4;
        fVar39 = fStack_2e8;
        fVar49 = fStack_300;
        pbVar18 = (byte *)uStack_308;
        lVar31 = *(longlong *)(uStack_118 + 0x12);
        *(float *)(lVar31 + 0x20 + lVar24 * 0xc) = fVar41;
        uStack_678 = SUB84(pbVar13,0);
        uStack_674 = (undefined4)((ulonglong)pbVar13 >> 0x20);
        uStack_660 = SUB84(pbVar25,0);
        uStack_65c = (undefined4)((ulonglong)pbVar25 >> 0x20);
        puVar3 = (undefined4 *)(lVar31 + 0x10 + lVar24 * 0xc);
        *puVar3 = uVar42;
        puVar3[1] = fVar40;
        puVar3[2] = uStack_660;
        puVar3[3] = uStack_65c;
        puVar3 = (undefined4 *)(lVar31 + lVar24 * 0xc);
        *puVar3 = uStack_678;
        puVar3[1] = uStack_674;
        puVar3[2] = fVar36;
        puVar3[3] = fVar50;
        lVar24 = lVar24 + 3;
        *(longlong *)(uStack_118 + 0x14) = lVar24;
        uStack_694 = SUB84(uStack_2f0,0);
        fStack_690 = (float)((ulonglong)uStack_2f0 >> 0x20);
        if ((ulonglong)(*(longlong *)(uStack_118 + 0x10) - lVar24) < 3) {
          in_stack_fffffffffffff8f8 = 0;
          pdb_142d7f1b0(pfStack_198,lVar24,3,4,0xc);
          lVar24 = *(longlong *)(uStack_118 + 0x14);
        }
        lVar31 = *(longlong *)(uStack_118 + 0x12);
        *(float *)(lVar31 + 0x20 + lVar24 * 0xc) = fVar48;
        pfVar19 = (float *)(lVar31 + 0x10 + lVar24 * 0xc);
        *pfVar19 = fStack_690;
        pfVar19[1] = fVar39;
        pfVar19[2] = fVar44;
        pfVar19[3] = fVar45;
        puVar2 = (undefined8 *)(lVar31 + lVar24 * 0xc);
        *puVar2 = pbVar18;
        puVar2[1] = CONCAT44(uStack_694,fVar49);
        *(longlong *)(uStack_118 + 0x14) = lVar24 + 3;
        if (plStack_268 != (longlong *)0x0) {
          pub_1406abac0(pbStack_1f8,(longlong)plStack_268 << 3,4);
        }
        if (lStack_250 != 0) {
          pub_1406abac0(pbStack_248,lStack_250 << 2,4);
        }
        if (CONCAT44(fStack_3d4,fStack_3d8) != 0) {
          pub_1406abac0(pbStack_208,CONCAT44(fStack_3d4,fStack_3d8) << 3,4);
        }
        if (pbStack_3c0 != (byte *)0x0) {
          pub_1406abac0(pbStack_3b8,(longlong)pbStack_3c0 << 2,4);
        }
      }
      else {
        uStack_1d8 = *(float **)pfStack_4e0;
        fStack_1d0 = pfStack_4e0[2];
        fStack_1cc = pfStack_4e0[3];
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        pdb_140b73b80(&plStack_268);
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        fVar41 = (float)pdb_140b73b40(&plStack_268);
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        cVar8 = pdb_140b77b50(lStack_100);
        if (cVar8 == '\0') {
          fVar41 = fVar41 + _DAT_1430140b0;
        }
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        pdb_140df4540(&uStack_308,&uStack_1d8,fVar36);
        fVar49 = SUB84(uStack_1d8,0);
        uVar11 = (ulonglong)uStack_1d8 >> 0x20;
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        fVar36 = (float)pdb_140b771f0(lStack_100);
        plStack_268 = (longlong *)CONCAT44((float)uVar11 + fVar50,fVar49 + fVar36);
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        pdb_140df4540(&uStack_5f0,&plStack_268,fVar40);
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        in_stack_fffffffffffff8f8 = CONCAT44(uVar42,fStack_1cc);
        pdb_140def2a0(&fStack_3d8,0,0,fVar41,in_stack_fffffffffffff8f8);
        fVar36 = fStack_300;
        fVar50 = SUB84(uStack_308,0);
        fVar40 = (float)((ulonglong)uStack_308 >> 0x20);
        lVar24 = 0;
        do {
          fVar41 = (float)lVar24 * _DAT_143015150;
          uStack_288 = CONCAT44(uStack_288._4_4_,fVar41);
          if (_DAT_142e36f28 < fVar41) {
            plStack_268 = &uStack_288;
            pcStack_260 = pdb_140f70fc0;
            uStack_f1 = 0;
            uStack_f2 = 0;
            uStack_f3 = 0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14359b36c,&plStack_268,&UNK_14359c240);
          }
          fStack_690 = ((float)lVar24 + _DAT_142e36f28) * _DAT_143015150;
          uStack_288 = CONCAT44(uStack_288._4_4_,fStack_690);
          if (_DAT_142e36f28 < fStack_690) {
            plStack_268 = &uStack_288;
            pcStack_260 = pdb_140f70fc0;
            uStack_f1 = 0;
            uStack_f2 = 0;
            uStack_f3 = 0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14359b36c,&plStack_268,&UNK_14359c258);
          }
          uStack_f1 = 0;
          uStack_f2 = 0;
          uStack_f3 = 0;
          uVar42 = pdb_140def2c0(&fStack_3d8);
          uStack_288 = CONCAT44(fVar41,uVar42);
          uStack_f1 = 0;
          uStack_f2 = 0;
          uStack_f3 = 0;
          pdb_140df4520(&plStack_268,&uStack_288);
          fVar49 = SUB84(plStack_268,0);
          uVar11 = (ulonglong)plStack_268 >> 0x20;
          fVar39 = pcStack_260._0_4_ + fVar36;
          uStack_f1 = 0;
          uStack_f2 = 0;
          uStack_f3 = 0;
          uVar42 = pdb_140def2c0(&fStack_3d8);
          uStack_288 = CONCAT44(fStack_690,uVar42);
          uStack_f1 = 0;
          uStack_f2 = 0;
          uStack_f3 = 0;
          pdb_140df4520(&plStack_268,&uStack_288);
          fVar41 = SUB84(plStack_268,0);
          uVar32 = (ulonglong)plStack_268 >> 0x20;
          fVar44 = pcStack_260._0_4_ + fVar36;
          lVar31 = *(longlong *)(uStack_118 + 0x14);
          if ((ulonglong)(*(longlong *)(uStack_118 + 0x10) - lVar31) < 3) {
            uStack_f1 = 0;
            uStack_f2 = 0;
            uStack_f3 = 0;
            in_stack_fffffffffffff8f8 = 0;
            pdb_142d7f1b0(pfStack_198,lVar31,3,4,0xc);
            lVar31 = *(longlong *)(uStack_118 + 0x14);
          }
          lVar24 = lVar24 + 1;
          unaff_XMM9_Db = (float)uVar11 + fVar40;
          lVar29 = *(longlong *)(uStack_118 + 0x12);
          *(ulonglong *)(lVar29 + lVar31 * 0xc) = CONCAT44(unaff_XMM9_Db,fVar49 + fVar50);
          *(float *)(lVar29 + 8 + lVar31 * 0xc) = fVar39;
          *(ulonglong *)(lVar29 + 0xc + lVar31 * 0xc) =
               CONCAT44((float)uVar32 + fVar40,fVar41 + fVar50);
          *(float *)(lVar29 + 0x14 + lVar31 * 0xc) = fVar44;
          *(undefined8 *)(lVar29 + 0x18 + lVar31 * 0xc) = uStack_5f0;
          *(undefined4 *)(lVar29 + 0x20 + lVar31 * 0xc) = uStack_5e8;
          *(longlong *)(uStack_118 + 0x14) = lVar31 + 3;
        } while (lVar24 != 8);
      }
      unaff_XMM9_Dd = 0.0;
      unaff_XMM9_Dc = 0.0;
      *puStack_530 = uStack_3fc;
      lVar24 = *(longlong *)(lStack_4f0 + 0x30);
      uVar61 = *(undefined8 *)(lStack_4f0 + 0x40);
      if (lVar24 == *(longlong *)(lStack_4f0 + 0x20)) {
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        pdb_142d7e8a0(lStack_528);
      }
      *(undefined8 *)(*(longlong *)(lStack_4f0 + 0x28) + lVar24 * 8) = uVar61;
      *(longlong *)(lStack_4f0 + 0x30) = lVar24 + 1;
      *(longlong *)(lStack_4f0 + 0x40) = *(longlong *)(lStack_4f0 + 0x40) + 1;
      param_2 = fStack_690;
      lVar29 = lStack_508;
      lVar31 = lStack_3f8;
    }
    lStack_508 = lVar29;
    if (lVar31 != 0) goto LAB_1428093f0;
LAB_142809410:
    lVar31 = lVar29;
    if ((lVar31 == 0) || (lVar31 == lStack_550)) {
      return;
    }
    lVar29 = lVar31 + 0x20;
    lStack_3f8 = 0;
  } while( true );
}

