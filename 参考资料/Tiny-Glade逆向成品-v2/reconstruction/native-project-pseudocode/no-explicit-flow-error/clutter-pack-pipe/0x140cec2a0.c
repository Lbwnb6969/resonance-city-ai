// VA 0x140cec2a0, PDB extent 7881 bytes
// clutter_pack_pipe::GlbImport::visit_primitive
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: clutter_pack_pipe::GlbImport::visit_primitive
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 7881 */

float * pdb_140cec2a0(longlong *param_1,undefined8 param_2,float *param_3)

{
  float *pfVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float *pfVar17;
  float *pfVar18;
  char cVar19;
  int *piVar20;
  longlong lVar21;
  float *pfVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  undefined *puVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  byte bVar31;
  float fVar32;
  float fVar34;
  float fVar35;
  undefined1 auVar33 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  uint uVar40;
  uint uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uStack_368;
  longlong lStack_360;
  longlong lStack_358;
  longlong lStack_350;
  float *pfStack_348;
  float *pfStack_340;
  undefined8 uStack_338;
  longlong lStack_330;
  longlong lStack_328;
  ulonglong uStack_320;
  ulonglong uStack_318;
  longlong lStack_310;
  longlong lStack_308;
  longlong lStack_300;
  longlong lStack_2f8;
  float *pfStack_2f0;
  float *pfStack_2e8;
  float *pfStack_2e0;
  float *pfStack_2d8;
  longlong lStack_2d0;
  float *pfStack_2c8;
  float *pfStack_2c0;
  float *pfStack_2b8;
  float *pfStack_2b0;
  float *pfStack_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  float *pfStack_298;
  float *pfStack_290;
  float *pfStack_288;
  float *pfStack_280;
  float *pfStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  undefined8 uStack_258;
  float *pfStack_250;
  float *pfStack_248;
  float *pfStack_240;
  float *pfStack_238;
  ulonglong uStack_230;
  longlong lStack_228;
  float *pfStack_220;
  float *pfStack_218;
  undefined8 uStack_210;
  int iStack_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 uStack_1f8;
  float *pfStack_1f0;
  undefined8 uStack_1e8;
  float *pfStack_1e0;
  undefined8 uStack_1d8;
  float *pfStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  float *pfStack_1a8;
  float *pfStack_1a0;
  float *pfStack_198;
  float *pfStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  float *pfStack_178;
  float *pfStack_170;
  longlong lStack_168;
  float *pfStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  undefined4 uStack_140;
  float fStack_13c;
  undefined8 uStack_138;
  float *pfStack_130;
  float *pfStack_128;
  int iStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  float *pfStack_110;
  float *pfStack_108;
  byte bStack_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined *puStack_70;
  undefined1 auStack_48 [8];
  
  uStack_f0 = 0xfffffffffffffffe;
  pfStack_2d8 = param_3;
  cVar19 = pdb_141d40e10(param_2);
  if (cVar19 != '\x05') {
    puStack_70 = &UNK_142df635a;
    pdb_140f3f5b0(auStack_48);
    puStack_70 = &UNK_142df6368;
    pfVar22 = (float *)pdb_142df65f0(&UNK_143087594,0x2a,auStack_48);
    return pfVar22;
  }
  pdb_141d40e90(&lStack_310,param_2);
  cVar19 = pdb_141c479b0(&lStack_310);
  lVar21 = lStack_2f8;
  if (cVar19 != '\x01') {
    pfVar22 = (float *)pdb_142df6340(&UNK_14308756d,0x27);
    return pfVar22;
  }
  bStack_f8 = *(byte *)(lStack_2f8 + 0x94);
  if (param_1[0x14] != 0) {
    piVar20 = (int *)param_1[0x13];
    lVar25 = param_1[0x14] * 0x18;
    if (lStack_310 == 0) {
      do {
        if (*piVar20 != 1) goto LAB_140cec425;
        piVar20 = piVar20 + 6;
        lVar25 = lVar25 + -0x18;
      } while (lVar25 != 0);
    }
    else {
      do {
        if ((*piVar20 == 1) && (*(longlong *)(piVar20 + 2) == lStack_308)) goto LAB_140cec425;
        piVar20 = piVar20 + 6;
        lVar25 = lVar25 + -0x18;
      } while (lVar25 != 0);
    }
  }
  pfStack_220 = (float *)(lStack_2f8 + 0x48);
  lStack_228 = lStack_300;
  pdb_141c479f0(&iStack_2a0,&lStack_310);
  pdb_141c478f0(&uStack_1f8,&lStack_228);
  if (uStack_1f8 == (float *)0x0) {
    uStack_118 = (float *)0x0;
  }
  else {
    pfStack_108 = uStack_1e8;
    uStack_118 = uStack_1f8;
    pfStack_110 = pfStack_1f0;
  }
  pdb_140ceaaa0(&uStack_138,param_1,&uStack_118);
  pfVar22 = uStack_138;
  if ((int)uStack_138 == 1) {
    return pfStack_130;
  }
  uVar16 = uStack_138._4_4_;
  iVar3 = (int)pfStack_130;
  pdb_141c47950(&uStack_1f8,&lStack_228);
  if (uStack_1f8 == (float *)0x0) {
    uStack_118 = (float *)0x0;
  }
  else {
    pfStack_108 = uStack_1e8;
    uStack_118 = uStack_1f8;
    pfStack_110 = pfStack_1f0;
  }
  pdb_140ceaaa0(&uStack_138,param_1,&uStack_118);
  if ((int)uStack_138 == 1) {
    return pfStack_130;
  }
  iStack_120 = iVar3;
  lVar25 = CONCAT44(uStack_29c,iStack_2a0);
  if (lVar25 == 0) {
    uStack_1f8 = (float *)0x0;
  }
  else {
    uStack_1e8 = pfStack_290;
    uStack_1f8 = (float *)CONCAT44(uStack_29c,iStack_2a0);
    pfStack_1f0 = pfStack_298;
  }
  uStack_11c = uStack_138._4_4_;
  iStack_204 = (int)pfStack_130;
  pdb_140ceaaa0(&uStack_118,param_1,&uStack_1f8);
  if ((int)uStack_118 == 1) {
    return pfStack_110;
  }
  lStack_148 = CONCAT44(lStack_148._4_4_,uStack_118._4_4_);
  iStack_208 = (int)pfStack_110;
  pdb_141c47a50(&uStack_1f8,&lStack_310);
  if (uStack_1f8 == (float *)0x0) {
    uStack_118 = (float *)0x0;
  }
  else {
    pfStack_108 = uStack_1e8;
    uStack_118 = uStack_1f8;
    pfStack_110 = pfStack_1f0;
  }
  pdb_140ceaaa0(&uStack_138,param_1,&uStack_118);
  if ((int)uStack_138 == 1) {
    return pfStack_130;
  }
  fVar37 = _DAT_142e36f28;
  if ((*(byte *)(lVar21 + 0x20) & 1) != 0) {
    fVar37 = *(float *)(lVar21 + 0x24);
  }
  if (lVar25 == 0) {
    fStack_13c = 1.0;
  }
  else {
    fStack_13c = pfStack_288[1];
  }
  uStack_140 = uStack_138._4_4_;
  iStack_200 = (int)pfStack_130;
  fVar38 = fVar37 * (float)*(undefined8 *)(lVar21 + 0x88);
  fVar39 = fVar37 * (float)((ulonglong)*(undefined8 *)(lVar21 + 0x88) >> 0x20);
  fVar37 = fVar37 * *(float *)(lVar21 + 0x90);
  iStack_1fc = *(int *)(lVar21 + 0x74);
  lVar21 = param_1[0x16];
  uVar29 = param_1[0x17];
  lVar25 = uVar29 * 0x3c;
  if (uVar29 != 0) {
    uVar27 = 0;
    lVar28 = 0;
    do {
      bVar31 = (byte)((ulonglong)pfVar22 >> 0x20);
      uStack_230 = uVar29;
      if (*(int *)(lVar21 + lVar28) == 1) {
        if ((bVar31 & *(int *)(lVar21 + 4 + lVar28) == iStack_120) != 0) {
LAB_140cecb25:
          if (*(int *)(lVar21 + 8 + lVar28) == 1) {
            if (((byte)lStack_148 & *(int *)(lVar21 + 0xc + lVar28) == iStack_208) != 0) {
LAB_140cecb59:
              if (*(int *)(lVar21 + 0x10 + lVar28) == 1) {
                if (((byte)uStack_11c & *(int *)(lVar21 + 0x14 + lVar28) == iStack_204) != 0) {
LAB_140cecb84:
                  uStack_140._0_1_ = (byte)((ulonglong)uStack_138 >> 0x20);
                  if (*(int *)(lVar21 + 0x18 + lVar28) == 1) {
                    if (((byte)uStack_140 & *(int *)(lVar21 + 0x1c + lVar28) == (int)pfStack_130) !=
                        0) {
LAB_140cecbb8:
                      uVar30 = *(ulonglong *)(lVar21 + 0x24 + lVar28);
                      if ((((uVar30 << 0x20 | (ulonglong)*(uint *)(lVar21 + 0x20 + lVar28)) ==
                            CONCAT44(fVar39,fVar38) && uVar30 >> 0x20 == (ulonglong)(uint)fVar37) &&
                          (*(int *)(lVar21 + 0x2c + lVar28) == iStack_1fc)) &&
                         (*(float *)(lVar21 + 0x30 + lVar28) == fStack_13c)) goto LAB_140ceccca;
                    }
                  }
                  else if ((byte)uStack_140 == 0) goto LAB_140cecbb8;
                }
              }
              else if ((byte)uStack_11c == 0) goto LAB_140cecb84;
            }
          }
          else if ((byte)lStack_148 == 0) goto LAB_140cecb59;
        }
      }
      else if (bVar31 == 0) goto LAB_140cecb25;
      uVar27 = uVar27 + 1;
      lVar28 = lVar28 + 0x3c;
    } while (lVar25 - lVar28 != 0);
    if (0xff < uVar29) {
      uStack_1f8 = (float *)&UNK_1430873c8;
      puVar26 = &UNK_1430873d0;
      goto LAB_140ced856;
    }
  }
  if (uVar29 == param_1[0x15]) {
    pdb_142df6a00();
    lVar21 = param_1[0x16];
  }
  *(undefined4 *)(lVar21 + lVar25) = uVar16;
  *(int *)(lVar21 + 4 + lVar25) = iStack_120;
  *(undefined4 *)(lVar21 + 8 + lVar25) = (undefined4)lStack_148;
  *(int *)(lVar21 + 0xc + lVar25) = iStack_208;
  *(undefined4 *)(lVar21 + 0x10 + lVar25) = uStack_11c;
  *(int *)(lVar21 + 0x14 + lVar25) = iStack_204;
  *(undefined4 *)(lVar21 + 0x18 + lVar25) = uStack_140;
  *(int *)(lVar21 + 0x1c + lVar25) = iStack_200;
  *(ulonglong *)(lVar21 + 0x20 + lVar25) = CONCAT44(fVar39,fVar38);
  *(float *)(lVar21 + 0x28 + lVar25) = fVar37;
  *(int *)(lVar21 + 0x2c + lVar25) = iStack_1fc;
  *(float *)(lVar21 + 0x30 + lVar25) = fStack_13c;
  *(undefined8 *)(lVar21 + 0x34 + lVar25) = 0;
  param_1[0x17] = uVar29 + 1;
  uVar27 = uVar29;
LAB_140ceccca:
  lVar21 = param_1[0x14];
  if (lVar21 == param_1[0x12]) {
    pdb_142d7e830(param_1 + 0x12);
  }
  lVar25 = param_1[0x13];
  *(longlong *)(lVar25 + lVar21 * 0x18) = lStack_310;
  *(longlong *)(lVar25 + 8 + lVar21 * 0x18) = lStack_308;
  *(ulonglong *)(lVar25 + 0x10 + lVar21 * 0x18) = uVar27;
  param_1[0x14] = lVar21 + 1;
  uVar29 = param_1[0x17];
  if (uVar29 <= uVar27) {
LAB_140cecd1f:
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar27,uVar29,&UNK_143087400);
  }
LAB_140cec439:
  cVar19 = '\x01';
  if (((*(char *)(param_1[0x16] + uVar27 * 0x3c) == '\0') &&
      (lVar21 = param_1[0x16] + uVar27 * 0x3c, *(char *)(lVar21 + 8) == '\0')) &&
     (*(char *)(lVar21 + 0x10) == '\0')) {
    cVar19 = *(char *)(lVar21 + 0x18);
  }
  pdb_141d40d10(&iStack_2a0,param_2,&UNK_14308736c);
  if (CONCAT44(uStack_29c,iStack_2a0) == 0) goto LAB_140cec9a6;
  uVar29 = *(ulonglong *)(pfStack_298 + 0x28);
  pdb_141d40e40(&uStack_1f8,param_2);
  uVar30 = uVar29;
  if (uStack_1f8 != (float *)0x0) {
    uVar30 = *(ulonglong *)(pfStack_1f0 + 0x28);
  }
  uStack_318 = uVar29 + param_1[2];
  if (200000 < uStack_318) {
    uStack_1f8 = (float *)&uStack_318;
    uStack_1e8 = (float *)&UNK_143087540;
    pfStack_1e0 = (float *)pdb_140f72a40;
    puVar26 = &UNK_143087548;
LAB_140ced856:
    pfStack_1f0 = (float *)pdb_140f72a40;
    pfVar22 = (float *)pdb_142db1360(puVar26,&uStack_1f8);
    return pfVar22;
  }
  uStack_320 = (uVar30 / 3 << (bStack_f8 & 0x3f)) + param_1[0x21];
  if (150000 < uStack_320) {
    uStack_1f8 = (float *)&uStack_320;
    uStack_1e8 = (float *)&UNK_143087510;
    pfStack_1e0 = (float *)pdb_140f72a40;
    puVar26 = &UNK_143087518;
    goto LAB_140ced856;
  }
  param_1[0x21] = uStack_320;
  pdb_141c6c890(&uStack_1f8,pfStack_2d8);
  fVar15 = pfStack_1d0._0_4_;
  fVar12 = pfStack_1e0._0_4_;
  fVar37 = (float)uStack_1f8;
  fVar38 = uStack_1f8._4_4_;
  fVar39 = pfStack_1f0._0_4_;
  fVar10 = (float)uStack_1e8;
  fVar11 = uStack_1e8._4_4_;
  fVar13 = (float)uStack_1d8;
  fVar14 = uStack_1d8._4_4_;
  lVar21 = param_1[0x1f];
  lVar25 = param_1[0x20];
  uStack_338 = param_2;
  lStack_330 = lVar21;
  lStack_328 = lVar25;
  pdb_141d40d10(&uStack_118,param_2,&UNK_1433d0a78);
  if (uStack_118 == (float *)0x0) {
LAB_140cec9a6:
    pdb_140f3f5b0(&uStack_1f8);
    pfVar22 = (float *)pdb_142df67a0(&UNK_143087418,0x1e,&uStack_1f8);
    return pfVar22;
  }
  uStack_1e8 = pfStack_108;
  uStack_1f8 = uStack_118;
  pfStack_1f0 = pfStack_110;
  pdb_141d4afe0(&iStack_2a0,&uStack_1f8,lVar21,lVar25);
  if ((float *)CONCAT44(uStack_29c,iStack_2a0) == (float *)0x4) goto LAB_140cec9a6;
  pfStack_198 = pfStack_240;
  pfStack_1a8 = pfStack_250;
  pfStack_1a0 = pfStack_248;
  uStack_1b8 = uStack_260;
  uStack_1b0 = uStack_258;
  uStack_1c8 = CONCAT44(uStack_26c,uStack_270);
  uStack_1c0 = (float *)CONCAT44(uStack_264,uStack_268);
  uStack_1d8 = pfStack_280;
  pfStack_1d0 = pfStack_278;
  uStack_1e8 = pfStack_290;
  pfStack_1e0 = pfStack_288;
  pfStack_1f0 = pfStack_298;
  uStack_1f8 = (float *)CONCAT44(uStack_29c,iStack_2a0);
  pdb_141d4dcb0(&pfStack_2f0,&uStack_1f8);
  uStack_f2 = 1;
  pdb_141d40d10(&uStack_118,param_2,&UNK_1433d0a70);
  if (uStack_118 == (float *)0x0) {
LAB_140cec698:
    uStack_f2 = 1;
    pdb_140f3f5b0(&uStack_1f8);
    uStack_f2 = 1;
    pfVar22 = (float *)pdb_142df67a0(&UNK_143087436,0x1c,&uStack_1f8);
  }
  else {
    uStack_1e8 = pfStack_108;
    uStack_1f8 = uStack_118;
    pfStack_1f0 = pfStack_110;
    uStack_f2 = 1;
    pdb_141d4afe0(&iStack_2a0,&uStack_1f8,lVar21,lVar25);
    if ((float *)CONCAT44(uStack_29c,iStack_2a0) == (float *)0x4) goto LAB_140cec698;
    pfStack_198 = pfStack_240;
    pfStack_1a8 = pfStack_250;
    pfStack_1a0 = pfStack_248;
    uStack_1b8 = uStack_260;
    uStack_1b0 = uStack_258;
    uStack_1c8 = CONCAT44(uStack_26c,uStack_270);
    uStack_1c0 = (float *)CONCAT44(uStack_264,uStack_268);
    uStack_1d8 = pfStack_280;
    pfStack_1d0 = pfStack_278;
    uStack_1e8 = pfStack_290;
    pfStack_1e0 = pfStack_288;
    pfStack_1f0 = pfStack_298;
    uStack_f2 = 1;
    uStack_1f8 = (float *)CONCAT44(uStack_29c,iStack_2a0);
    pdb_141d4dcb0(&lStack_2d0,&uStack_1f8);
    if (pfStack_2e0 == pfStack_2c0) {
      uStack_f3 = 1;
      pdb_141d48b70(&iStack_2a0,&uStack_338,0);
      if (iStack_2a0 == 6) {
LAB_140cec8da:
        uStack_1f8 = _DAT_142e3c640;
        pfStack_1f0 = _UNK_142e3c648;
        uStack_f3 = 1;
        pdb_1415e46b0(&pfStack_2b8,&uStack_1f8,pfStack_2e0);
      }
      else {
        pfStack_198 = pfStack_240;
        pfStack_190 = pfStack_238;
        pfStack_1a8 = pfStack_250;
        pfStack_1a0 = pfStack_248;
        uStack_1b8 = uStack_260;
        uStack_1b0 = uStack_258;
        uStack_1f8 = (float *)CONCAT44(uStack_29c,iStack_2a0);
        uStack_1c8 = CONCAT44(uStack_26c,uStack_270);
        uStack_1c0 = (float *)CONCAT44(uStack_264,uStack_268);
        uStack_1d8 = pfStack_280;
        pfStack_1d0 = pfStack_278;
        uStack_1e8 = pfStack_290;
        pfStack_1e0 = pfStack_288;
        pfStack_1f0 = pfStack_298;
        uStack_f3 = 1;
        pdb_141d4dfa0(&uStack_118,&uStack_1f8);
        if (SBORROW8(0,(longlong)uStack_118)) goto LAB_140cec8da;
        pfStack_2a8 = pfStack_108;
        pfStack_2b8 = uStack_118;
        pfStack_2b0 = pfStack_110;
      }
      uStack_f4 = 1;
      pdb_141d49220(&iStack_2a0,&uStack_338,0);
      if (iStack_2a0 == 3) {
        lStack_350 = -0x8000000000000000;
        if (cVar19 == '\0') {
LAB_140cece4e:
          uStack_210 = 0x8000000000000000;
          uStack_f5 = 0;
          uStack_f6 = 1;
          pdb_141d4ccb0(&lStack_228,0,pfStack_2e0);
          lStack_148 = -0x8000000000000000;
          goto LAB_140cecea1;
        }
LAB_140cece05:
        uStack_210 = 0x8000000000000000;
        uStack_f5 = 1;
        uStack_f6 = 1;
        pfVar22 = (float *)pdb_142df6340(&UNK_1430874c7,0x28);
      }
      else {
        pfStack_198 = pfStack_240;
        pfStack_190 = pfStack_238;
        pfStack_1a8 = pfStack_250;
        pfStack_1a0 = pfStack_248;
        uStack_1b8 = uStack_260;
        uStack_1b0 = uStack_258;
        uStack_1f8 = (float *)CONCAT44(uStack_29c,iStack_2a0);
        uStack_1c8 = CONCAT44(uStack_26c,uStack_270);
        uStack_1c0 = (float *)CONCAT44(uStack_264,uStack_268);
        uStack_1d8 = pfStack_280;
        pfStack_1d0 = pfStack_278;
        uStack_1e8 = pfStack_290;
        pfStack_1e0 = pfStack_288;
        pfStack_1f0 = pfStack_298;
        uStack_f4 = 1;
        pdb_141d4ce20(&lStack_350,&uStack_1f8);
        if (cVar19 == '\0') {
          uStack_1f8 = pfStack_348;
          pfStack_1f0 = pfStack_340;
          if (SBORROW8(0,lStack_350)) goto LAB_140cece4e;
        }
        else if (SBORROW8(0,lStack_350)) goto LAB_140cece05;
        pfStack_1f0 = pfStack_340;
        uStack_1f8 = pfStack_348;
        lStack_228 = lStack_350;
        pfStack_220 = pfStack_348;
        pfStack_218 = pfStack_340;
        lStack_148 = lStack_350;
LAB_140cecea1:
        if ((pfStack_2a8 == pfStack_2e0) && (pfStack_218 == pfStack_2e0)) {
          fVar6 = *(float *)(lStack_2f8 + 0x60);
          fVar7 = *(float *)(lStack_2f8 + 100);
          fVar8 = *(float *)(lStack_2f8 + 0x68);
          fVar9 = *(float *)(lStack_2f8 + 0x6c);
          iVar3 = (int)param_1[2];
          pfStack_1e0 = pfStack_2e8 + (longlong)pfStack_2e0 * 3;
          uStack_1b8 = 0;
          uStack_1b0 = 0;
          uStack_188 = 0;
          uStack_180 = 0;
          uStack_158 = 0;
          uStack_150 = 0;
          uStack_1f8 = pfStack_2e8;
          pfStack_1f0 = pfStack_2e8;
          uStack_1e8 = pfStack_2f0;
          uStack_1c0 = pfStack_2c8 + (longlong)pfStack_2e0 * 3;
          uStack_1d8 = pfStack_2c8;
          pfStack_1d0 = pfStack_2c8;
          uStack_1c8 = lStack_2d0;
          pfStack_190 = pfStack_2b0 + (longlong)pfStack_2e0 * 4;
          pfStack_1a8 = pfStack_2b0;
          pfStack_1a0 = pfStack_2b0;
          pfStack_198 = pfStack_2b8;
          pfStack_160 = pfStack_220 + (longlong)pfStack_2e0 * 2;
          pfStack_178 = pfStack_220;
          pfStack_170 = pfStack_220;
          lStack_168 = lStack_228;
          uStack_230 = uVar27;
          while (((pfVar22 = pfStack_1f0, pfVar17 = pfStack_1d0, pfVar18 = pfStack_1a0,
                  pfStack_1f0 != pfStack_1e0 &&
                  (pfVar22 = pfStack_1f0 + 3, pfStack_1d0 != uStack_1c0)) &&
                 (pfVar17 = pfStack_1d0 + 3, pfStack_1a0 != pfStack_190))) {
            fVar35 = *pfStack_1d0;
            fVar36 = pfStack_1d0[1];
            fVar44 = pfStack_1d0[2];
            fVar46 = *pfStack_1f0;
            fVar42 = pfStack_1f0[1];
            fVar43 = pfStack_1f0[2];
            pfVar18 = pfStack_1a0 + 4;
            if (pfStack_170 == pfStack_160) break;
            pfVar1 = pfStack_170 + 2;
            fVar32 = fVar44 * fVar39 + fVar36 * fVar38 + fVar35 * fVar37;
            fVar34 = fVar44 * fVar12 + fVar36 * fVar11 + fVar35 * fVar10;
            fVar35 = fVar44 * fVar15 + fVar36 * fVar14 + fVar35 * fVar13;
            fVar36 = _DAT_142e36f28 / SQRT(fVar35 * fVar35 + fVar34 * fVar34 + fVar32 * fVar32);
            bVar5 = (int)fVar36 - 1U < 0x7fffff ||
                    (int)ABS(fVar36) - 0x800000U < 0x7f000000 && -1 < (int)fVar36;
            if (bVar5) {
              fVar35 = fVar35 * fVar36;
            }
            else {
              fVar35 = 0.0;
            }
            fVar44 = fVar43 * pfStack_2d8[8] + fVar42 * pfStack_2d8[4] + fVar46 * *pfStack_2d8 +
                     pfStack_2d8[0xc];
            fVar45 = fVar43 * pfStack_2d8[9] + fVar42 * pfStack_2d8[5] + fVar46 * pfStack_2d8[1] +
                     pfStack_2d8[0xd];
            fVar46 = fVar43 * pfStack_2d8[10] + fVar42 * pfStack_2d8[6] + fVar46 * pfStack_2d8[2] +
                     pfStack_2d8[0xe];
            pfStack_1f0 = pfVar22;
            pfStack_1d0 = pfVar17;
            if (((0x7f7fffff < (uint)ABS(fVar44)) || (0x7f7fffff < (uint)ABS(fVar45))) ||
               (0x7f7fffff < (uint)ABS(fVar46))) {
LAB_140ced52b:
              pfStack_1a0 = pfVar18;
              pfStack_170 = pfVar1;
              pfVar22 = (float *)pdb_142df6340(&UNK_143087482,0x23);
              uStack_f1 = 0;
              pdb_141d37860(&uStack_1f8);
              return pfVar22;
            }
            uVar23 = (uint)bVar5;
            uVar40 = (int)(uVar23 << 0x1f) >> 0x1f & (uint)(fVar32 * fVar36);
            uVar41 = (int)(uVar23 << 0x1f) >> 0x1f & (uint)(fVar34 * fVar36);
            uVar23 = uVar41 & 0x7fffffff;
            if (((0x7f7fffff < (uVar40 & 0x7fffffff)) || (uVar23 >= 0x7f800000)) ||
               (0x7f7fffff < (uint)ABS(fVar35))) goto LAB_140ced52b;
            fVar36 = *pfStack_1a0 * fVar6;
            fVar42 = pfStack_1a0[1] * fVar7;
            fVar43 = pfStack_1a0[2] * fVar8;
            auVar33._4_4_ = -(uint)((float)((uint)fVar42 & _UNK_142e377e4) < _UNK_14301cce4);
            auVar33._0_4_ = -(uint)((float)((uint)fVar36 & _DAT_142e377e0) < _DAT_14301cce0);
            auVar33._8_4_ = -(uint)((float)((uint)fVar43 & _UNK_142e377e8) < _UNK_14301cce8);
            auVar33._12_4_ =
                 -(uint)((float)((uint)(pfStack_1a0[3] * fVar9) & _UNK_142e377ec) < _UNK_14301ccec);
            iVar24 = movmskps(CONCAT31((int3)(uVar23 >> 8),uVar23 < 0x7f800000),auVar33);
            if (iVar24 != 0xf) goto LAB_140ced52b;
            uVar4 = *(undefined8 *)pfStack_170;
            if ((0x7f7fffff < ((uint)uVar4 & 0x7fffffff)) ||
               (0x7f7fffff < ((uint)((ulonglong)uVar4 >> 0x20) & 0x7fffffff))) goto LAB_140ced52b;
            lVar21 = param_1[2];
            pfStack_1a0 = pfVar18;
            pfStack_170 = pfVar1;
            if (lVar21 == *param_1) {
              pdb_142d7f010(param_1);
            }
            lVar25 = param_1[1];
            *(ulonglong *)(lVar25 + lVar21 * 0xc) = CONCAT44(fVar45,fVar44);
            *(float *)(lVar25 + 8 + lVar21 * 0xc) = fVar46;
            param_1[2] = lVar21 + 1;
            lVar21 = param_1[5];
            if (lVar21 == param_1[3]) {
              pdb_142d7f010(param_1 + 3);
            }
            lVar25 = param_1[4];
            puVar2 = (uint *)(lVar25 + lVar21 * 0xc);
            *puVar2 = uVar40;
            puVar2[1] = uVar41;
            *(float *)(lVar25 + 8 + lVar21 * 0xc) = fVar35;
            param_1[5] = lVar21 + 1;
            lVar21 = param_1[8];
            if (lVar21 == param_1[6]) {
              pdb_142d7f010(param_1 + 6);
            }
            lVar25 = param_1[7];
            *(ulonglong *)(lVar25 + lVar21 * 0xc) = CONCAT44(fVar42,fVar36);
            *(float *)(lVar25 + 8 + lVar21 * 0xc) = fVar43;
            param_1[8] = lVar21 + 1;
            lVar21 = param_1[0xb];
            if (lVar21 == param_1[9]) {
              pdb_142d8d7f0(param_1 + 9);
            }
            *(undefined8 *)(param_1[10] + lVar21 * 8) = uVar4;
            param_1[0xb] = lVar21 + 1;
            lVar21 = param_1[0xe];
            if (lVar21 == param_1[0xc]) {
              pdb_142d8d710(param_1 + 0xc);
            }
            *(int *)(param_1[0xd] + lVar21 * 4) = (int)uVar27 << 8;
            param_1[0xe] = lVar21 + 1;
          }
          pfStack_1a0 = pfVar18;
          pfStack_1d0 = pfVar17;
          pfStack_1f0 = pfVar22;
          uStack_f1 = 0;
          pdb_141d37860(&uStack_1f8);
          uStack_f1 = 0;
          pdb_141d48fd0(&iStack_2a0,&uStack_338);
          if (iStack_2a0 == 3) {
LAB_140ced50c:
            uStack_f1 = 0;
            pdb_141d4dbb0(&uStack_138,0,(int)param_1[2] - iVar3);
          }
          else {
            pfStack_198 = pfStack_240;
            pfStack_190 = pfStack_238;
            pfStack_1a8 = pfStack_250;
            pfStack_1a0 = pfStack_248;
            uStack_1b8 = uStack_260;
            uStack_1b0 = uStack_258;
            uStack_1f8 = (float *)CONCAT44(uStack_29c,iStack_2a0);
            uStack_1c8 = CONCAT44(uStack_26c,uStack_270);
            uStack_1c0 = (float *)CONCAT44(uStack_264,uStack_268);
            uStack_1d8 = pfStack_280;
            pfStack_1d0 = pfStack_278;
            uStack_1e8 = pfStack_290;
            pfStack_1e0 = pfStack_288;
            pfStack_1f0 = pfStack_298;
            uStack_f1 = 0;
            pdb_141d4d340(&uStack_118,&uStack_1f8);
            if (SBORROW8(0,(longlong)uStack_118)) goto LAB_140ced50c;
            pfStack_128 = pfStack_108;
            uStack_138 = uStack_118;
            pfStack_130 = pfStack_110;
          }
          if ((ulonglong)((longlong)pfStack_128 * -0x5555555555555555) < 0x5555555555555556) {
            if (pfStack_128 != (float *)0x0) {
              uVar27 = (longlong)pfStack_128 * 4 - 4;
              pfVar22 = pfStack_130;
              if (0x1b < uVar27) {
                uVar27 = (uVar27 >> 2) + 1;
                uVar29 = uVar27 & 0xfffffffffffffff8;
                pfVar22 = pfStack_130 + uVar29;
                uVar30 = 0;
                do {
                  pfVar17 = pfStack_130 + uVar30;
                  fVar37 = pfVar17[1];
                  fVar38 = pfVar17[2];
                  fVar39 = pfVar17[3];
                  pfVar18 = pfStack_130 + uVar30 + 4;
                  fVar10 = *pfVar18;
                  fVar11 = pfVar18[1];
                  fVar12 = pfVar18[2];
                  fVar13 = pfVar18[3];
                  pfVar18 = pfStack_130 + uVar30;
                  *pfVar18 = (float)((int)*pfVar17 + iVar3);
                  pfVar18[1] = (float)((int)fVar37 + iVar3);
                  pfVar18[2] = (float)((int)fVar38 + iVar3);
                  pfVar18[3] = (float)((int)fVar39 + iVar3);
                  pfVar17 = pfStack_130 + uVar30 + 4;
                  *pfVar17 = (float)((int)fVar10 + iVar3);
                  pfVar17[1] = (float)((int)fVar11 + iVar3);
                  pfVar17[2] = (float)((int)fVar12 + iVar3);
                  pfVar17[3] = (float)((int)fVar13 + iVar3);
                  uVar30 = uVar30 + 8;
                } while (uVar29 != uVar30);
                if (uVar27 == uVar29) goto LAB_140ced64b;
              }
              do {
                *pfVar22 = (float)((int)*pfVar22 + iVar3);
                pfVar22 = pfVar22 + 1;
              } while (pfVar22 != pfStack_130 + (longlong)pfStack_128);
            }
LAB_140ced64b:
            if (bStack_f8 != 0) {
              pfStack_1a0 = (float *)(((ulonglong)pfStack_128 / 3) * 3);
              pfStack_190 = (float *)((ulonglong)pfStack_128 % 3);
              pfStack_198 = pfStack_130 + ((ulonglong)pfStack_128 / 3) * 3;
              uStack_1f8 = (float *)0x0;
              pfStack_1d0 = (float *)0x0;
              pfStack_1a8 = pfStack_130;
              uStack_188 = 3;
              uStack_f7 = 1;
              pdb_141d4d810(&uStack_368,&uStack_1f8);
              pfStack_1e0 = (float *)(lStack_360 + lStack_358 * 4);
              uStack_1f8 = (float *)lStack_360;
              uStack_1e8 = (float *)uStack_368;
              pfStack_1f0 = (float *)lStack_360;
              uStack_f7 = 1;
              pdb_141d4c980(&uStack_138,&uStack_1f8);
            }
            uStack_1e8 = pfStack_128;
            uStack_1f8 = uStack_138;
            pfStack_1f0 = pfStack_130;
            pfStack_1e0 = (float *)uStack_230;
            uStack_f7 = 0;
            pdb_140cee690(param_1 + 0xf,&uStack_1f8);
            return (float *)0x0;
          }
          uStack_f7 = 1;
          pfVar22 = (float *)pdb_142df6340(&UNK_143087452,0x30);
          if (uStack_138 == (float *)0x0) {
            return pfVar22;
          }
          uVar27 = (longlong)uStack_138 << 2;
          pfStack_2e8 = pfStack_130;
          goto LAB_140ced3e2;
        }
        uStack_f1 = 1;
        pfVar22 = (float *)pdb_142df6340(&UNK_1430874a5,0x22);
        if (lStack_228 != 0) {
          pub_1406abac0((byte *)pfStack_220,lStack_228 << 3,4);
        }
      }
      if (pfStack_2b8 != (float *)0x0) {
        pub_1406abac0((byte *)pfStack_2b0,(longlong)pfStack_2b8 << 4,4);
      }
    }
    else {
      uStack_f3 = 1;
      pfVar22 = (float *)pdb_142df6340(&UNK_1430874ef,0x21);
    }
    if (lStack_2d0 != 0) {
      pub_1406abac0((byte *)pfStack_2c8,lStack_2d0 * 0xc,4);
    }
  }
  if (pfStack_2f0 == (float *)0x0) {
    return pfVar22;
  }
  uVar27 = (longlong)pfStack_2f0 * 0xc;
LAB_140ced3e2:
  pub_1406abac0((byte *)pfStack_2e8,uVar27,4);
  return pfVar22;
LAB_140cec425:
  uVar27 = *(ulonglong *)(piVar20 + 4);
  uVar29 = param_1[0x17];
  if (uVar29 <= uVar27) goto LAB_140cecd1f;
  goto LAB_140cec439;
}

