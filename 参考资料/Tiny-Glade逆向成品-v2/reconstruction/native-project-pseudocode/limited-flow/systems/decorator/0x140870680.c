// VA 0x140870680, PDB extent 9351 bytes
// system_decorator::ui_systems::ui_decorator_affordance_dispatch::ui_dispatch_decorator_affordance
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_decorator_affordance_dispatch.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014087184d) overlaps instruction at (ram,0x00014087184c)
    */
/* WARNING: Removing unreachable block (ram,0x0001408718b8) */
/* WARNING: Removing unreachable block (ram,0x0001408718c1) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_decorator_affordance_dispatch::ui_dispatch_decorator_affordance
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_decorator_affordance_dispatch.rs
   Extent: 9351 */

void pdb_140870680(undefined8 *param_1,ulonglong *param_2,byte *param_3,undefined8 *param_4,
                  undefined8 *param_5,ulonglong *param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  ,undefined8 *param_13,undefined8 *param_14)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  char cVar16;
  undefined1 uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  float *pfVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  uint uVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  undefined *puVar27;
  undefined4 uVar28;
  byte *pbVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  int iVar32;
  longlong lVar33;
  ulonglong uVar34;
  byte *pbVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  longlong lVar42;
  ulonglong *puVar43;
  byte *pbVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  ulonglong unaff_XMM6_Qa;
  byte *unaff_XMM6_Qb;
  float fVar52;
  float fVar53;
  undefined8 in_stack_fffffffffffff948;
  undefined8 in_stack_fffffffffffff950;
  undefined4 uVar54;
  longlong lStack_658;
  longlong lStack_650;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  int iStack_624;
  longlong lStack_620;
  undefined1 auStack_608 [16];
  byte *pbStack_5f8;
  byte *pbStack_5f0;
  byte *pbStack_5e8;
  byte *pbStack_5e0;
  float fStack_5d8;
  uint uStack_5cc;
  byte *pbStack_5c8;
  byte *pbStack_5c0;
  byte *pbStack_5b8;
  byte *pbStack_5b0;
  ulonglong uStack_5a8;
  ulonglong uStack_5a0;
  byte *pbStack_598;
  byte *pbStack_590;
  byte *pbStack_588;
  byte *pbStack_580;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  byte *pbStack_568;
  byte *pbStack_560;
  byte *pbStack_558;
  byte *pbStack_550;
  ulonglong uStack_548;
  ulonglong uStack_540;
  undefined4 uStack_510;
  int iStack_508;
  undefined4 uStack_504;
  undefined1 uStack_500;
  undefined4 uStack_4ff;
  undefined2 uStack_4fb;
  undefined1 uStack_4f9;
  byte *pbStack_4f8;
  byte *pbStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  int iStack_4d8;
  int iStack_4d4;
  ulonglong uStack_4d0;
  undefined1 auStack_4a8 [40];
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 *puStack_470;
  undefined8 uStack_468;
  undefined4 uStack_430;
  undefined8 uStack_428;
  byte *pbStack_420;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  float fStack_408;
  undefined4 uStack_404;
  uint uStack_400;
  uint uStack_3fc;
  undefined4 uStack_3f8;
  int iStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  byte *pbStack_378;
  byte *pbStack_370;
  byte *pbStack_368;
  undefined8 uStack_360;
  float fStack_358;
  undefined4 uStack_354;
  uint uStack_350;
  uint uStack_34c;
  int iStack_348;
  undefined4 uStack_344;
  uint uStack_340;
  uint uStack_33c;
  ulonglong uStack_338;
  ulonglong uStack_330;
  ulonglong uStack_328;
  ulonglong uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 uStack_308;
  undefined8 uStack_300;
  byte *pbStack_2f8;
  undefined8 uStack_2f0;
  byte *pbStack_2e8;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [9];
  undefined4 uStack_2cf;
  undefined2 uStack_2cb;
  undefined1 uStack_2c9;
  byte *pbStack_2c8;
  byte *pbStack_2c0;
  byte *pbStack_2b8;
  byte *pbStack_2b0;
  ulonglong uStack_2a8;
  ulonglong uStack_2a0;
  byte *pbStack_298;
  undefined8 *puStack_290;
  ulonglong uStack_288;
  ulonglong uStack_280;
  byte *pbStack_278;
  undefined8 uStack_270;
  undefined4 *puStack_268;
  undefined8 uStack_260;
  ulonglong uStack_258;
  undefined8 uStack_250;
  ulonglong uStack_248;
  ulonglong *puStack_240;
  undefined8 uStack_238;
  byte *pbStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  float fStack_218;
  undefined4 uStack_214;
  uint uStack_210;
  uint uStack_20c;
  int iStack_208;
  int iStack_204;
  undefined8 uStack_200;
  byte bStack_18f;
  undefined4 uStack_188;
  uint uStack_184;
  byte *pbStack_180;
  byte *pbStack_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  uint uStack_150;
  uint uStack_14c;
  byte *pbStack_148;
  float *pfStack_140;
  undefined8 uStack_138;
  ulonglong uStack_130;
  uint uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  byte *pbStack_118;
  uint uStack_10c;
  char *pcStack_108;
  ulonglong *puStack_100;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  uint uStack_f4;
  undefined8 uStack_f0;
  
  uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffff948 >> 0x20);
  uVar54 = (undefined4)((ulonglong)in_stack_fffffffffffff950 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  uVar20 = *param_8;
  uVar5 = param_8[4];
  uVar6 = param_8[8];
  uVar7 = param_8[0xc];
  uVar8 = param_8[0x10];
  uVar50 = *(undefined4 *)(param_12 + 0x11);
  pbStack_148 = (byte *)param_4;
  pbStack_118 = param_3;
  puStack_100 = param_2;
  cVar16 = pdb_140a00340(*param_9);
  if (cVar16 != '\0') {
    return;
  }
  pcStack_108 = (char *)*param_1;
  cVar16 = *pcStack_108;
  if (cVar16 == '\0') {
    if ((5 < *(uint *)(pcStack_108 + 8)) ||
       ((0x31U >> (*(uint *)(pcStack_108 + 8) & 0x1f) & 1) == 0)) goto LAB_14087078a;
  }
  else if ((cVar16 != '\x06') && (cVar16 != '\x11')) {
LAB_14087078a:
    **(undefined4 **)((longlong)pbStack_148 + 0x10) = *(undefined4 *)((longlong)pbStack_148 + 0x1c);
    puVar31 = *(undefined8 **)pbStack_148;
    puVar31[1] = 0;
    *puVar31 = 6;
    return;
  }
  uVar9 = *param_5;
  uStack_428 = (byte *)CONCAT44(0x7f7fffff,(undefined4)uStack_428);
  uStack_428 = (byte *)CONCAT71(uStack_428._1_7_,5);
  auStack_2d8[0] = 0;
  iStack_508._1_3_ = (uint3)auStack_2d8._1_8_;
  iStack_508 = (uint)iStack_508._1_3_ << 8;
  uStack_504 = SUB84(auStack_2d8._1_8_,3);
  uStack_500 = SUB81(auStack_2d8._1_8_,7);
  uStack_4ff = uStack_2cf;
  uStack_4fb = uStack_2cb;
  uStack_4f9 = uStack_2c9;
  uStack_480 = uVar5;
  uStack_478 = uVar7;
  uStack_308 = uVar8;
  uStack_300 = uVar6;
  uStack_260 = uVar20;
  pdb_140c9dcb0(&uStack_238,&uStack_428,&iStack_508);
  uStack_f5 = 1;
  pdb_140c9dee0(&iStack_508);
  uStack_f5 = 0;
  pdb_140c9dd20(&uStack_428,&uStack_238,&iStack_508);
  uVar39 = 0;
  pdb_140c9dbe0(&uStack_238,&uStack_428,0);
  uStack_120 = uVar9;
  pdb_140900b80(uVar9,&UNK_14300e270,0x1f,&uStack_238);
  lVar42 = param_12[1];
  uVar26 = *(ulonglong *)*param_12;
  uVar34 = uVar26 - *(ulonglong *)(lVar42 + 0x18);
  if (uVar26 < *(ulonglong *)(lVar42 + 0x18)) {
    uVar34 = uVar39;
  }
  uVar19 = uVar26 - *(ulonglong *)(lVar42 + 0x38);
  if (uVar26 < *(ulonglong *)(lVar42 + 0x38)) {
    uVar19 = uVar39;
  }
  uVar26 = *(ulonglong *)(lVar42 + 0x10);
  uVar10 = *(ulonglong *)(lVar42 + 0x30);
  bVar45 = uVar10 < uVar19;
  uVar37 = uVar10 - uVar19;
  uVar38 = uVar37;
  if (bVar45) {
    uVar38 = uVar39;
  }
  bVar46 = uVar26 < uVar34;
  uVar40 = uVar26 - uVar34;
  uVar41 = uVar40;
  if (bVar46) {
    uVar41 = uVar39;
  }
  uVar30 = uVar38 + uVar41;
  if (!bVar46 && uVar40 != 0 || !bVar45 && uVar37 != 0) {
    uVar30 = uVar39;
  }
  uVar39 = *(ulonglong *)(lVar42 + 8);
  uVar36 = *(ulonglong *)(lVar42 + 0x28);
  *(ulonglong *)*param_12 = *(longlong *)(lVar42 + 0x40) - uVar30;
  if (!bVar46 && uVar40 != 0 || !bVar45 && uVar37 != 0) {
    lVar42 = uVar36 + uVar19 * 0x70;
    lVar33 = uVar39 + uVar34 * 0x70;
    if (uVar26 < uVar34) {
      lVar33 = 0x10;
    }
    puVar31 = (undefined8 *)0x0;
    if (uVar34 < uVar26) {
      puVar31 = (undefined8 *)(lVar33 + -0x70 + uVar41 * 0x70);
    }
    if (uVar10 < uVar19) {
      lVar42 = 0x10;
    }
    puVar25 = (undefined8 *)(lVar42 + -0x70 + uVar38 * 0x70);
    if (uVar10 <= uVar19) {
      puVar25 = puVar31;
    }
    uVar5 = puVar25[2];
    uVar6 = puVar25[7];
    uVar14 = puVar25[8];
    uStack_510 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar25 + 0x44) >> 0x20);
    uVar50 = *(undefined4 *)((longlong)puVar25 + 0x4c);
    uVar28 = *(undefined4 *)(puVar25 + 10);
    uVar9 = puVar25[4];
    uVar11 = puVar25[5];
    uVar7 = puVar25[6];
    uVar8 = puVar25[3];
    uVar12 = *puVar25;
    uVar13 = puVar25[1];
    puVar31 = *(undefined8 **)pbStack_148;
    uVar20 = *(undefined8 *)((longlong)puVar25 + 0x54);
    **(undefined4 **)((longlong)pbStack_148 + 0x10) = *(undefined4 *)((longlong)pbStack_148 + 0x1c);
    puVar31[1] = 0;
    *puVar31 = 1;
    puVar31[2] = uVar12;
    puVar31[3] = uVar13;
    puVar31[4] = 6;
    puVar31[5] = uVar8;
    puVar31[6] = uVar9;
    puVar31[7] = uVar11;
    puVar31[8] = uVar7;
    puVar31[9] = uVar6;
    puVar31[10] = uVar14;
    puVar31[0xb] = CONCAT44(uVar50,uStack_510);
    *(undefined4 *)(puVar31 + 0xc) = uVar28;
    *(undefined8 *)((longlong)puVar31 + 100) = uVar20;
    puVar31[0xe] = uVar5;
    *(undefined1 *)(puVar31 + 0xf) = 1;
    return;
  }
  uStack_124 = *(undefined4 *)((longlong)pbStack_148 + 0x1c);
  puStack_268 = *(undefined4 **)((longlong)pbStack_148 + 0x10);
  *puStack_268 = uStack_124;
  puVar22 = *(ulonglong **)pbStack_148;
  lVar42 = -(1 - *puVar22);
  if (puVar22[1] == 0 && (ulonglong)(1 < *puVar22) <= -puVar22[1]) {
    lVar42 = 0;
  }
  if (lVar42 - 1U < 4) {
    uVar41 = 0x10;
    lVar42 = 0x20;
    uVar39 = 0x60;
LAB_140870ad9:
    pbVar44 = *(byte **)((longlong)puVar22 + uVar39);
    uStack_238 = (byte *)pdb_1406d0830(uStack_120);
    pbStack_230 = pbVar44;
    cVar16 = pdb_1408ffab0(&uStack_238);
    if ((cVar16 != '\x02') || (cVar16 = *pcStack_108, cVar16 == '\x11')) {
      puVar43 = (ulonglong *)(lVar42 + (longlong)puVar22);
      pfVar21 = *(float **)pbStack_118;
      uVar50 = 0x30ab;
      if (*(int *)((longlong)puVar22 + uVar41) == 7) {
        uVar50 = 0x23;
      }
      pdb_1409ed340(&uStack_428,puStack_100,pfVar21,_DAT_142e36f3c,CONCAT44(uVar28,uVar50));
      if (iStack_3f4 != 2) {
        iStack_208 = uStack_3f8;
        iStack_204 = iStack_3f4;
        uStack_200 = CONCAT44(uStack_3ec,uStack_3f0);
        fStack_218 = fStack_408;
        uStack_214 = uStack_404;
        uStack_210 = uStack_400;
        uStack_20c = uStack_3fc;
        uStack_228 = (byte *)CONCAT44(uStack_414,uStack_418);
        uStack_220 = (byte *)CONCAT44(uStack_40c,uStack_410);
        uStack_238 = uStack_428;
        pbStack_230 = pbStack_420;
        pdb_1409f9a10(&iStack_508,&uStack_238);
        if (iStack_4d8 != 2) {
          uStack_238 = (byte *)CONCAT44(uStack_504,iStack_508);
          pbStack_230 = (byte *)CONCAT17(uStack_4f9,
                                         CONCAT25(uStack_4fb,CONCAT41(uStack_4ff,uStack_500)));
          iStack_208 = iStack_4d8;
          iStack_204 = iStack_4d4;
          uStack_200 = uStack_4d0;
          fStack_218 = (float)uStack_4e8;
          uStack_214 = (undefined4)((ulonglong)uStack_4e8 >> 0x20);
          uStack_210 = (uint)uStack_4e0;
          uStack_20c = (uint)((ulonglong)uStack_4e0 >> 0x20);
          uStack_228 = pbStack_4f8;
          uStack_220 = pbStack_4f0;
          goto LAB_140870c8f;
        }
      }
      pdb_140a8e090(&uStack_220,*param_6);
      uStack_238 = (byte *)CONCAT71(uStack_238._1_7_,0xb);
      uStack_214 = 0;
      uStack_210 = 0x3f800000;
      uStack_20c = 0;
      iStack_208 = 0;
LAB_140870c8f:
      *(int *)(puVar43 + 6) = iStack_208;
      *(int *)((longlong)puVar43 + 0x34) = iStack_204;
      *(undefined4 *)(puVar43 + 7) = (undefined4)uStack_200;
      *(undefined4 *)((longlong)puVar43 + 0x3c) = uStack_200._4_4_;
      puVar43[4] = CONCAT44(uStack_214,fStack_218);
      puVar43[5] = CONCAT44(uStack_20c,uStack_210);
      puVar43[2] = (ulonglong)uStack_228;
      puVar43[3] = (ulonglong)uStack_220;
      *puVar43 = (ulonglong)uStack_238;
      puVar43[1] = (ulonglong)pbStack_230;
      if (((*(int *)((longlong)puVar22 + uVar41) == 7) && ((char)*puVar43 == '\x02')) &&
         ((*puVar43 & 0x100) == 0)) {
        *(char *)puVar43 = '\v';
      }
      uVar20 = *(undefined8 *)((longlong)puVar22 + uVar39);
      fVar49 = pfVar21[1] - *(float *)((longlong)puVar43 + 0x1c);
      uStack_428 = (byte *)CONCAT44(SQRT((pfVar21[2] - *(float *)(puVar43 + 4)) *
                                         (pfVar21[2] - *(float *)(puVar43 + 4)) +
                                         fVar49 * fVar49 +
                                         (*pfVar21 - *(float *)(puVar43 + 3)) *
                                         (*pfVar21 - *(float *)(puVar43 + 3))) + _DAT_142f684a8,
                                    (undefined4)uStack_428);
      uStack_428 = (byte *)CONCAT71(uStack_428._1_7_,5);
      pdb_140c9dcb0(&uStack_238,&uStack_428,auStack_2d8);
      bStack_18f = bStack_18f | 2;
      pub_142e32760(&uStack_428,&uStack_238,0xb0);
      uStack_f6 = 1;
      pdb_140c9dee0(&iStack_508);
      uStack_f6 = 0;
      pdb_140c9dd20(&uStack_238,&uStack_428,&iStack_508);
      pdb_1408ffb10(uStack_120,uVar20,&uStack_238);
      return;
    }
  }
  else {
    if (lVar42 == 0) {
      uVar41 = 0x20;
      lVar42 = 0x30;
      uVar39 = 0x70;
      goto LAB_140870ad9;
    }
    cVar16 = *pcStack_108;
  }
  pcVar1 = pcStack_108;
  if (cVar16 == '\0') {
    if (*(int *)(pcStack_108 + 8) == 5) {
      pdb_1414d1bd0(&uStack_238,param_12 + 10);
      pbVar44 = (byte *)CONCAT44(uStack_214,fStack_218);
      if (uStack_220 != pbVar44 && uStack_220 != (byte *)0x0 ||
          pbStack_230 != uStack_228 && pbStack_230 != (byte *)0x0) {
        *(longlong *)uStack_238 = *(longlong *)uStack_238 + CONCAT44(uStack_20c,uStack_210);
        puVar43 = (ulonglong *)0x0;
        if (pbStack_230 != uStack_228 && pbStack_230 != (byte *)0x0) {
          puVar43 = (ulonglong *)(uStack_228 + -0x68);
        }
        puVar23 = (ulonglong *)(pbVar44 + -0x68);
        if (uStack_220 == pbVar44 || uStack_220 == (byte *)0x0) {
          puVar23 = puVar43;
        }
        uVar40 = puVar23[0xb];
        uVar26 = puVar23[10];
        uVar34 = puVar23[5];
        uVar41 = puVar23[6];
        uStack_430 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar23 + 0x34) >> 0x20);
        uVar50 = *(undefined4 *)((longlong)puVar23 + 0x3c);
        uVar30 = puVar23[8];
        uVar19 = puVar23[2];
        uVar10 = puVar23[3];
        uVar39 = puVar23[4];
        uVar28 = *(undefined4 *)((longlong)puVar23 + 0x5c);
        uVar38 = *puVar23;
        uVar37 = puVar23[1];
        uVar20 = *(undefined8 *)((longlong)puVar23 + 0x44);
        *puStack_268 = uStack_124;
        puVar22[1] = 0;
        *puVar22 = 3;
        puVar22[2] = uVar38;
        puVar22[3] = uVar37;
        puVar22[4] = uVar19;
        puVar22[5] = uVar10;
        puVar22[6] = uVar39;
        puVar22[7] = uVar34;
        puVar22[8] = uVar41;
        *(undefined4 *)(puVar22 + 9) = uStack_430;
        *(undefined4 *)((longlong)puVar22 + 0x4c) = uVar50;
        *(int *)(puVar22 + 10) = (int)uVar30;
        *(undefined8 *)((longlong)puVar22 + 0x54) = uVar20;
        puVar22[0xc] = uVar26;
        *(int *)(puVar22 + 0xd) = (int)uVar40;
        *(undefined4 *)((longlong)puVar22 + 0x6c) = uVar28;
        return;
      }
      bVar45 = true;
    }
    else {
      if (*(int *)(pcStack_108 + 8) == 4) {
        pdb_1414d1c60(&uStack_238,param_12 + 5);
        pbVar44 = (byte *)CONCAT44(uStack_214,fStack_218);
        if (uStack_220 != pbVar44 && uStack_220 != (byte *)0x0 ||
            pbStack_230 != uStack_228 && pbStack_230 != (byte *)0x0) {
          pbVar35 = (byte *)0x0;
          if (pbStack_230 != uStack_228 && pbStack_230 != (byte *)0x0) {
            pbVar35 = uStack_228 + -0x60;
          }
          pbVar29 = pbVar44 + -0x60;
          if (uStack_220 == pbVar44 || uStack_220 == (byte *)0x0) {
            pbVar29 = pbVar35;
          }
          *(longlong *)uStack_238 = *(longlong *)uStack_238 + CONCAT44(uStack_20c,uStack_210);
          uStack_228 = (byte *)(ulonglong)*(uint *)(pbVar29 + 0x58);
          uVar26 = *(ulonglong *)(pbVar29 + 8);
          pbVar44 = *(byte **)(pbVar29 + 0x10);
          uStack_318 = *(undefined4 *)(pbVar29 + 0x38);
          uStack_320 = *(ulonglong *)(pbVar29 + 0x30);
          uStack_314 = (undefined4)*(undefined8 *)(pbVar29 + 0x3c);
          uStack_310 = (undefined4)((ulonglong)*(undefined8 *)(pbVar29 + 0x3c) >> 0x20);
          uStack_30c = *(undefined4 *)(pbVar29 + 0x44);
          uVar28 = *(undefined4 *)(pbVar29 + 0x48);
          uVar20 = *(undefined8 *)(pbVar29 + 0x4c);
          uStack_328 = *(ulonglong *)(pbVar29 + 0x28);
          uStack_338 = *(ulonglong *)(pbVar29 + 0x18);
          uStack_330 = *(ulonglong *)(pbVar29 + 0x20);
          uVar34 = 2;
          uVar36 = 6;
          uVar50 = 0;
        }
        else {
          uVar20 = pdb_1414d1bd0(&uStack_238,param_12 + 10);
          pbVar44 = (byte *)CONCAT44(uStack_214,fStack_218);
          bVar45 = pbStack_230 == (byte *)0x0;
          bVar46 = pbStack_230 == uStack_228;
          uVar26 = CONCAT71((int7)((ulonglong)pbStack_230 >> 8),bVar46 || bVar45);
          bVar47 = uStack_220 == (byte *)0x0;
          bVar48 = uStack_220 == pbVar44;
          uVar28 = (undefined4)CONCAT71((int7)((ulonglong)uStack_220 >> 8),bVar48 || bVar47);
          if ((bVar48 || bVar47) && (bVar46 || bVar45)) {
            uVar34 = 6;
          }
          else {
            *(longlong *)uStack_238 = *(longlong *)uStack_238 + CONCAT44(uStack_20c,uStack_210);
            puVar43 = (ulonglong *)0x0;
            if (!bVar46 && !bVar45) {
              puVar43 = (ulonglong *)(uStack_228 + -0x68);
            }
            puVar23 = (ulonglong *)(pbVar44 + -0x68);
            if (bVar48 || bVar47) {
              puVar23 = puVar43;
            }
            uStack_228 = (byte *)(ulonglong)(uint)puVar23[0xb];
            uVar26 = puVar23[10];
            uStack_318 = (undefined4)puVar23[6];
            uStack_320 = puVar23[5];
            uStack_314 = (undefined4)*(undefined8 *)((longlong)puVar23 + 0x34);
            uStack_310 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar23 + 0x34) >> 0x20);
            uStack_30c = *(undefined4 *)((longlong)puVar23 + 0x3c);
            uVar28 = (undefined4)puVar23[8];
            uVar20 = *(undefined8 *)((longlong)puVar23 + 0x44);
            uStack_328 = puVar23[4];
            uStack_338 = puVar23[2];
            uStack_330 = puVar23[3];
            uVar50 = *(undefined4 *)((longlong)puVar23 + 0x5c);
            uVar36 = *puVar23;
            pbVar44 = (byte *)puVar23[1];
            uVar34 = 3;
          }
        }
        *puStack_268 = uStack_124;
        *puVar22 = uVar34;
        puVar22[1] = 0;
        puVar22[2] = uVar36;
        puVar22[3] = (ulonglong)pbVar44;
        puVar22[4] = uStack_338;
        puVar22[5] = uStack_330;
        puVar22[6] = uStack_328;
        puVar22[7] = uStack_320;
        puVar22[8] = CONCAT44(uStack_314,uStack_318);
        puVar22[9] = CONCAT44(uStack_30c,uStack_310);
        *(undefined4 *)(puVar22 + 10) = uVar28;
        *(undefined8 *)((longlong)puVar22 + 0x54) = uVar20;
        puVar22[0xc] = uVar26;
        *(int *)(puVar22 + 0xd) = (int)uStack_228;
        *(undefined4 *)((longlong)puVar22 + 0x6c) = uVar50;
        return;
      }
      bVar45 = false;
    }
  }
  else {
    bVar45 = false;
  }
  lVar42 = -(1 - *puVar22);
  if (puVar22[1] == 0 && (ulonglong)(1 < *puVar22) <= -puVar22[1]) {
    lVar42 = 0;
  }
  if (lVar42 - 1U < 4) {
    lVar33 = 0x10;
LAB_140870ea3:
    uVar24 = 0x30ab;
    if (*(int *)((longlong)puVar22 + lVar33) == 7) {
      uVar24 = 0x23;
    }
  }
  else {
    uVar24 = 0x30ab;
    lVar33 = 0x20;
    if (lVar42 == 0) goto LAB_140870ea3;
  }
  cVar16 = *pcVar1;
  if (cVar16 == '\x06') {
    if (*(int *)(pcVar1 + 8) == 7) {
LAB_140870edc:
      uVar24 = uVar24 | 0x4000;
      goto LAB_140870ee2;
    }
    goto LAB_140870fcb;
  }
  if (cVar16 == '\0') {
    iVar32 = *(int *)(pcVar1 + 8);
    if ((iVar32 == 0) || (iVar32 == 5)) goto LAB_140870edc;
LAB_140870eef:
    if (iVar32 != 5) goto LAB_140870fcb;
  }
  else {
LAB_140870ee2:
    if (cVar16 == '\x06') {
      if (*(int *)(pcVar1 + 8) == 7) goto LAB_140870fd1;
    }
    else {
      if (cVar16 == '\0') {
        iVar32 = *(int *)(pcVar1 + 8);
        goto LAB_140870eef;
      }
      if (cVar16 == '\x11') {
        pfVar21 = *(float **)pbStack_118;
        pdb_1409ed340(&uStack_238,puStack_100,pfVar21,_DAT_142e36f3c,CONCAT44(uVar28,2));
        if (iStack_204 == 2) {
          pdb_140a8e090(&uStack_360,*param_6);
          pbStack_378 = (byte *)CONCAT71(pbStack_378._1_7_,0xb);
          uStack_354 = 0;
          uStack_350 = 0x3f800000;
          uStack_34c = 0;
          uStack_130 = (ulonglong)uStack_340;
          uStack_10c = uStack_33c;
          iStack_204 = 0;
        }
        else {
          fStack_5d8 = fStack_218;
          uStack_5cc = uStack_20c;
          pbStack_5e8 = uStack_228;
          pbStack_5e0 = uStack_220;
          pbStack_5f8 = uStack_238;
          pbStack_5f0 = pbStack_230;
          pbStack_378 = uStack_238;
          pbStack_370 = pbStack_230;
          pbStack_368 = uStack_228;
          uStack_360 = uStack_220;
          fStack_358 = fStack_218;
          uStack_354 = uStack_214;
          uStack_350 = uStack_210;
          uStack_34c = uStack_20c;
          uStack_344 = (undefined4)uStack_200;
          uStack_340 = (uint)(uStack_200 >> 0x20);
          uStack_130 = uStack_200 >> 0x20;
        }
        puVar43 = (ulonglong *)*param_13;
        pbVar44 = (byte *)puVar43[2];
        fVar49 = SQRT((pfVar21[2] - fStack_358) * (pfVar21[2] - fStack_358) +
                      (pfVar21[1] - uStack_360._4_4_) * (pfVar21[1] - uStack_360._4_4_) +
                      (*pfVar21 - (float)uStack_360) * (*pfVar21 - (float)uStack_360)) +
                 _DAT_14300d240;
        iStack_348 = iStack_204;
        pdb_140c9dee0(&uStack_238);
        pbStack_298 = pbVar44;
        uStack_248 = pdb_1414d1d00(uStack_120,&UNK_14300e2db,0xf,fVar49,6,pbVar44,&uStack_238);
        unaff_XMM6_Qa = *puVar43;
        unaff_XMM6_Qb = (byte *)puVar43[1];
        uStack_5a8 = CONCAT44(uStack_354,fStack_358);
        uStack_5a0 = CONCAT44(uStack_34c,uStack_350);
        pbStack_5b8 = pbStack_368;
        pbStack_5b0 = uStack_360;
        pbStack_5c8 = pbStack_378;
        pbStack_5c0 = pbStack_370;
        puStack_100 = (ulonglong *)0x1;
        uVar17 = 1;
        uStack_288 = 6;
        puStack_290 = (undefined8 *)CONCAT44(uStack_344,iStack_348);
        goto LAB_1408724da;
      }
    }
LAB_140870fcb:
    uVar24 = uVar24 | 0x100;
  }
LAB_140870fd1:
  uVar18 = 0x5000;
  if (!bVar45) {
    uVar18 = uVar24;
  }
  pfStack_140 = *(float **)pbStack_118;
  uVar26 = *puStack_100;
  pbVar35 = (byte *)CONCAT44(uVar54,uVar18);
  uVar34 = CONCAT44(uVar28,0x7f7fffff);
  puStack_240 = puVar22;
  pdb_1409ef7e0();
  fVar15 = _DAT_142e3c670;
  fVar49 = _DAT_142e3b1d8;
  pbStack_2f8 = uStack_238;
  pbStack_148 = pbStack_230 + (longlong)uStack_228 * 0x40;
  uStack_270 = *param_14;
  uStack_2e0 = *param_11;
  uStack_258 = *param_6;
  uStack_468 = *param_10;
  uVar19 = 7;
  pbStack_2e8 = pbStack_230;
  puStack_100 = (ulonglong *)0x7;
  pbVar44 = pbStack_230;
  uStack_130 = uVar26;
  if (pbStack_230 != pbStack_148) {
    do {
      while( true ) {
        iVar32 = *(int *)(pbVar44 + 0x34);
        if (iVar32 == 2) goto LAB_1408720c4;
        lStack_620 = *(longlong *)(pbVar44 + 0x38);
        uStack_628 = *(undefined4 *)(pbVar44 + 0x30);
        lStack_658 = *(longlong *)pbVar44;
        lStack_650 = *(longlong *)(pbVar44 + 8);
        uStack_648 = *(undefined4 *)(pbVar44 + 0x10);
        uStack_644 = *(undefined4 *)(pbVar44 + 0x14);
        uStack_640 = *(undefined4 *)(pbVar44 + 0x18);
        uStack_63c = *(undefined4 *)(pbVar44 + 0x1c);
        uStack_638 = *(undefined4 *)(pbVar44 + 0x20);
        uStack_634 = *(undefined4 *)(pbVar44 + 0x24);
        uStack_630 = *(undefined4 *)(pbVar44 + 0x28);
        uStack_62c = *(undefined4 *)(pbVar44 + 0x2c);
        iStack_624 = iVar32;
        if (uVar19 != 7) goto LAB_1408720c4;
        pdb_1409f9a10(&uStack_188,&lStack_658,lStack_620,uStack_628,uVar34,pbVar35);
        fVar53 = fStack_168;
        fVar52 = fStack_16c;
        fVar51 = fStack_170;
        uVar24 = uStack_184;
        pbVar44 = pbVar44 + 0x40;
        puVar27 = (undefined *)(ulonglong)(byte)uStack_188;
        if ((byte)uStack_188 != 0xd) break;
        if ((*pcStack_108 != '\0') || (*(int *)(pcStack_108 + 8) != 5)) {
          if (*pcStack_108 == '\x06') {
            uVar39 = *(ulonglong *)(pcStack_108 + 8);
            fVar2 = *pfStack_140;
            fVar3 = pfStack_140[1];
            fVar4 = pfStack_140[2];
            pbStack_118 = *(byte **)(pcStack_108 + 0x10);
            pdb_140c9dee0(&uStack_238);
            uVar34 = uVar39;
            pbVar35 = pbStack_118;
            uStack_248 = pdb_1414d1d00(uStack_120,&UNK_14300e2db,0xf,
                                       SQRT((fVar4 - fVar53) * (fVar4 - fVar53) +
                                            (fVar3 - fVar52) * (fVar3 - fVar52) +
                                            (fVar2 - fVar51) * (fVar2 - fVar51)),uVar39,pbStack_118,
                                       &uStack_238);
            pbStack_2c8 = (byte *)CONCAT44(uStack_184,uStack_188);
            pbStack_2b0 = (byte *)CONCAT44(fStack_16c,fStack_170);
            uStack_2a8 = CONCAT44(uStack_164,fStack_168);
            uStack_2a0 = CONCAT44(uStack_15c,uStack_160);
            pbStack_2c0 = pbStack_180;
            pbStack_2b8 = pbStack_178;
            param_10 = (undefined8 *)CONCAT44(uStack_154,fStack_158);
            uStack_128 = uStack_150;
            uStack_10c = uStack_14c;
            uVar19 = 0;
          }
          else {
LAB_140871f0c:
            uVar19 = 6;
          }
          goto LAB_140871f16;
        }
        param_14 = (undefined8 *)(ulonglong)uStack_184;
        uVar20 = pdb_140a61160(uStack_270);
        cVar16 = pdb_1414b7850(uVar20,*(undefined4 *)(pcStack_108 + 0xc),uVar24,0);
        if (cVar16 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001408711b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_14300e468 + *(int *)(&UNK_14300e468 + (ulonglong)(byte)uStack_188 * 4)))()
          ;
          return;
        }
LAB_1408710cd:
        uVar19 = 7;
        if (pbVar44 == pbStack_148) goto LAB_1408720c4;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((byte)uStack_188) {
      case 0xe:
        if (*pcStack_108 != '\x06') goto LAB_140871f0c;
        pdb_140a8e090(&uStack_238,uStack_258);
        pbStack_588 = pbStack_178;
        pbStack_598 = (byte *)CONCAT44(uStack_184,uStack_188);
        pbStack_590 = pbStack_180;
        uStack_578 = pbStack_230._0_4_;
        pbStack_580 = uStack_238;
        uStack_574 = 0;
        uStack_570 = 0x3f800000;
        uStack_56c = 0;
        fVar51 = *pfStack_140;
        fVar52 = pfStack_140[1];
        fVar53 = pfStack_140[2];
        pdb_140a8e090(&uStack_238,uStack_258);
        fVar2 = (float)uStack_238;
        fVar3 = uStack_238._4_4_;
        fVar4 = pbStack_230._0_4_;
        uVar39 = *(ulonglong *)(pcStack_108 + 8);
        pbStack_118 = *(byte **)(pcStack_108 + 0x10);
        pdb_140c9dee0(&iStack_508);
        uStack_428 = (byte *)CONCAT44(SQRT((fVar53 - fVar4) * (fVar53 - fVar4) +
                                           (fVar52 - fVar3) * (fVar52 - fVar3) +
                                           (fVar51 - fVar2) * (fVar51 - fVar2)),
                                      (undefined4)uStack_428);
        uStack_428 = (byte *)CONCAT71(uStack_428._1_7_,5);
        auStack_4a8[0] = 0;
        pdb_140c9dcb0(&uStack_238,&uStack_428,auStack_4a8);
        bStack_18f = ((int)uVar39 == 7) << 3 | bStack_18f | 2;
        param_14 = &uStack_428;
        param_6 = &uStack_238;
        pub_142e32760(param_14,param_6,0xb0);
        pdb_140c9dd20(param_6,param_14,&iStack_508);
        pbVar29 = &UNK_14300e2db;
        uStack_428 = (byte *)pdb_140900b80(uStack_120,&UNK_14300e2db,0xf,&uStack_238);
        pbStack_420 = pbVar29;
        uStack_248 = pdb_14072cd40();
        param_10 = (undefined8 *)((ulonglong)puStack_470 & 0xffffffff00000000);
        uStack_2a8 = CONCAT44(uStack_574,uStack_578);
        uStack_2a0 = CONCAT44(uStack_56c,uStack_570);
        pbStack_2c8 = pbStack_598;
        pbStack_2c0 = pbStack_590;
        pbStack_2b8 = pbStack_588;
        pbStack_2b0 = pbStack_580;
        uVar19 = 0;
        puStack_470 = param_10;
        goto LAB_140871f16;
      default:
        puVar27 = &UNK_14300e3b0;
      case 0x14:
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(puVar27,0x28,&UNK_14300e420);
      case 0x11:
        pcVar1 = (char *)((longlong)*(int *)(&UNK_14300e468 + (ulonglong)(byte)uStack_188 * 4) +
                         0x152c169b0);
        *pcVar1 = *pcVar1 + 'h';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x12:
        if ((*pcStack_108 == '\x06') && (*(int *)(pcStack_108 + 8) == 7)) goto LAB_1408710cd;
        uStack_2f0 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)((longlong)param_6 + 0x32)) {
        case 2:
          uVar20 = pdb_140c413f0(auStack_608);
          lVar42 = pdb_140b54f80(uStack_478,uVar20,&UNK_14300e350);
          if (lVar42 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_14300e368);
          }
          fVar51 = (float)pdb_14092f880(lVar42);
          pfVar21 = (float *)pdb_140901490(param_6 + 7,&UNK_14300e380);
          if (fVar51 + *pfVar21 + fVar15 < fStack_16c) goto code_r0x000140871c6b;
code_r0x000140871890:
          bVar46 = false;
          break;
        case 3:
          fVar51 = (float)pdb_14021fc10(uStack_300,(int)param_6[2],
                                        *(undefined4 *)((longlong)param_6 + 0x14));
          pfVar21 = (float *)pdb_140901490(param_6 + 7,&UNK_14300e398);
          if (fStack_16c <= fVar51 + *pfVar21 + fVar15 + fVar49) goto code_r0x000140871890;
code_r0x000140871c6b:
          bVar46 = true;
          break;
        default:
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14300e3b0,0x28,&UNK_14300e3d8);
        }
        bVar45 = false;
        puStack_100 = (ulonglong *)0x0;
        break;
      case 0x13:
        uStack_428 = &UNK_14300e468 + *(int *)(&UNK_14300e468 + (ulonglong)(byte)uStack_188 * 4);
        puStack_100 = (ulonglong *)pdb_140df3ef0(&uStack_238,&uStack_428);
        bVar45 = true;
        uVar41 = 0x40400000;
        bVar46 = false;
      }
      fVar53 = *pfStack_140 - fStack_170;
      fVar51 = pfStack_140[1] - fStack_16c;
      fVar52 = pfStack_140[2] - fStack_168;
      uStack_280 = *param_6;
      pbStack_278 = (byte *)param_6[1];
      pdb_140c9dee0(&uStack_238);
      iStack_508 = 7;
      pdb_140c9de10(&uStack_428,&uStack_238,&iStack_508);
      uVar34 = uStack_280;
      pbVar35 = pbStack_278;
      param_10 = (undefined8 *)
                 pdb_1414d1de0(uStack_120,uStack_138,0xff,
                               SQRT(fVar52 * fVar52 + fVar51 * fVar51 + fVar53 * fVar53),uStack_280,
                               pbStack_278,&uStack_428);
      if (bVar45) {
        cVar16 = pdb_1408ff980(uStack_2e0);
        if ((char)puStack_100 != '\0' || cVar16 != '\0') goto code_r0x000140871dde;
code_r0x000140871d6f:
        uStack_128 = uStack_f4;
        if (bVar46) {
          uVar39 = CONCAT44(uStack_184,uStack_188);
          pbStack_118 = pbStack_180;
          pbStack_2c0 = (byte *)CONCAT44(fStack_16c,fStack_170);
          pbStack_2b8 = (byte *)CONCAT44(uStack_164,fStack_168);
          pbStack_2b0 = (byte *)CONCAT44(uStack_15c,uStack_160);
          uStack_2a8 = CONCAT44(uStack_154,fStack_158);
          uStack_2a0 = CONCAT44(uStack_14c,uStack_150);
          pbStack_2c8 = pbStack_178;
          uVar19 = 4;
          uVar41 = (ulonglong)uStack_10c;
        }
        else {
          uVar39 = CONCAT44(uStack_184,uStack_188);
          pbStack_118 = pbStack_180;
          pbStack_230 = (byte *)CONCAT44(fStack_16c,fStack_170);
          uStack_238 = pbStack_178;
          uStack_228 = (byte *)CONCAT44(uStack_164,fStack_168);
          uStack_220 = (byte *)CONCAT44(uStack_15c,uStack_160);
          fStack_218 = fStack_158;
          uStack_214 = uStack_154;
          uStack_210 = uStack_150;
          uStack_20c = uStack_14c;
          puVar22 = (ulonglong *)pdb_140c3d060(uStack_260,param_14,uStack_250);
          if (puVar22 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_14300e408);
          }
          uStack_280 = *puVar22;
          pbStack_278 = (byte *)puVar22[1];
          uStack_2a8 = CONCAT44(uStack_214,fStack_218);
          uStack_2a0 = CONCAT44(uStack_20c,uStack_210);
          pbStack_2b8 = uStack_228;
          pbStack_2b0 = uStack_220;
          pbStack_2c8 = uStack_238;
          pbStack_2c0 = pbStack_230;
          uVar19 = 2;
          uVar41 = (ulonglong)((uint)uStack_2f0 | uStack_10c & 0xffffff00);
        }
      }
      else {
        if ((char)puStack_100 == '\0') goto code_r0x000140871d6f;
code_r0x000140871dde:
        uStack_128 = uStack_f4;
        uVar39 = CONCAT44(uStack_184,uStack_188);
        pbStack_118 = pbStack_180;
        pbStack_2c0 = (byte *)CONCAT44(fStack_16c,fStack_170);
        pbStack_2b8 = (byte *)CONCAT44(uStack_164,fStack_168);
        pbStack_2b0 = (byte *)CONCAT44(uStack_15c,uStack_160);
        uStack_2a8 = CONCAT44(uStack_154,fStack_158);
        uStack_2a0 = CONCAT44(uStack_14c,uStack_150);
        pbStack_2c8 = pbStack_178;
        uVar19 = 3;
      }
      uStack_10c = (uint)uVar41;
LAB_140871f16:
      pbStack_568 = pbStack_2c8;
      pbStack_560 = pbStack_2c0;
      pbStack_558 = pbStack_2b8;
      pbStack_550 = pbStack_2b0;
      uStack_548 = uStack_2a8;
      uStack_540 = uStack_2a0;
      pbStack_298 = pbStack_118;
      uStack_130 = (ulonglong)uStack_128;
      unaff_XMM6_Qa = uStack_280;
      unaff_XMM6_Qb = pbStack_278;
      puStack_290 = param_10;
      uStack_288 = uVar39;
      puStack_100 = (ulonglong *)uVar19;
    } while (pbVar44 != pbStack_148);
  }
LAB_1408720c4:
  puVar22 = puStack_240;
  if (pbStack_2f8 != (byte *)0x0) {
    pub_1406abac0(pbStack_2e8,(longlong)pbStack_2f8 << 6,8);
  }
  if (puStack_100 == (ulonglong *)0x7) {
    puStack_100 = (ulonglong *)0x6;
    uStack_130 = 6;
    uVar17 = 0;
  }
  else {
    uStack_5a8 = uStack_548;
    uStack_5a0 = uStack_540;
    pbStack_5b8 = pbStack_558;
    pbStack_5b0 = pbStack_550;
    pbStack_5c8 = pbStack_568;
    pbStack_5c0 = pbStack_560;
    uVar17 = 0;
  }
LAB_1408724da:
  *puStack_268 = uStack_124;
  puVar22[1] = 0;
  *puVar22 = (ulonglong)puStack_100;
  puVar22[2] = unaff_XMM6_Qa;
  puVar22[3] = (ulonglong)unaff_XMM6_Qb;
  puVar22[4] = uStack_288;
  puVar22[5] = (ulonglong)pbStack_298;
  puVar22[6] = (ulonglong)pbStack_5c8;
  puVar22[7] = (ulonglong)pbStack_5c0;
  puVar22[8] = (ulonglong)pbStack_5b8;
  puVar22[9] = (ulonglong)pbStack_5b0;
  puVar22[10] = uStack_5a8;
  puVar22[0xb] = uStack_5a0;
  puVar22[0xc] = (ulonglong)puStack_290;
  *(int *)(puVar22 + 0xd) = (int)uStack_130;
  *(uint *)((longlong)puVar22 + 0x6c) = uStack_10c;
  puVar22[0xe] = uStack_248;
  *(undefined1 *)(puVar22 + 0xf) = uVar17;
  return;
}

