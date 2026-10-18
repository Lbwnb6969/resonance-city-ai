// VA 0x1414e44b0, PDB extent 2536 bytes
// utils::geometry::rectangle::Rectangle2d::circular_slice_segment_points<system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::walk_shape::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::geometry::rectangle::Rectangle2d::circular_slice_segment_points<system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::walk_shape::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 2536 */

void pdb_1414e44b0(undefined8 param_1,float param_2,float param_3,undefined8 *param_4)

{
  undefined8 **ppuVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  char *pcVar8;
  float *pfVar9;
  undefined1 uVar10;
  bool bVar11;
  longlong lVar12;
  float *pfVar13;
  undefined8 *puVar14;
  float *pfVar15;
  longlong lVar16;
  float *pfVar17;
  undefined8 *puVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  code *pcStack_288;
  char *pcStack_280;
  uint uStack_274;
  float *pfStack_270;
  undefined8 uStack_268;
  float *pfStack_260;
  undefined4 uStack_258;
  float fStack_254;
  undefined4 uStack_250;
  float fStack_24c;
  undefined4 uStack_248;
  float fStack_244;
  undefined4 uStack_240;
  float fStack_23c;
  undefined8 uStack_238;
  longlong lStack_230;
  undefined8 uStack_228;
  undefined8 *apuStack_220 [4];
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  float *pfStack_1e8;
  undefined8 uStack_1e0;
  float afStack_1d8 [5];
  undefined8 uStack_1c4;
  float fStack_1bc;
  undefined4 uStack_1b8;
  ulonglong uStack_1b4;
  undefined8 uStack_1ac;
  undefined4 uStack_1a4;
  longlong lStack_1a0;
  undefined8 uStack_198;
  undefined4 *apuStack_190 [4];
  undefined4 *puStack_170;
  undefined4 *puStack_168;
  undefined4 *puStack_160;
  undefined4 *puStack_158;
  undefined4 *puStack_150;
  undefined4 *puStack_148;
  float *pfStack_140;
  float *pfStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  uint uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 auStack_108 [25];
  
  fVar25 = _DAT_142e36f28;
  uVar19 = (uint)(param_3 + _DAT_142e36f28) & -(uint)(param_3 < param_2);
  fVar27 = (float)(~-(uint)(param_3 < param_2) & (uint)param_3 | uVar19);
  fVar24 = param_2;
  fVar20 = (float)pdb_140df0700(uVar19,1);
  fVar21 = (float)pdb_140df0700(param_1,2);
  fVar22 = (float)pdb_140df0700(param_1,3);
  pfVar17 = (float *)0x0;
  uStack_258 = pdb_140df1760(param_1,0);
  fStack_254 = fVar24;
  uStack_250 = pdb_140df1760(param_1,1);
  fStack_24c = fVar24;
  uStack_248 = pdb_140df1760(param_1,2);
  fStack_244 = fVar24;
  uStack_240 = pdb_140df1760(param_1,3);
  puVar14 = auStack_108;
  uStack_268 = param_1;
  fStack_23c = fVar24;
  pdb_140df0010(puVar14,param_1);
  fVar24 = fVar27 - param_2;
  if (fVar27 - param_2 <= _DAT_14304ab40) {
    fVar24 = _DAT_14304ab40;
  }
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_238 = 1;
  lStack_230 = 0;
  uStack_228 = 3;
  apuStack_220[0] = puVar14;
  apuStack_220[1] = puVar14;
  apuStack_220[2] = puVar14;
  uStack_1f8 = 0;
  pfStack_1e8 = (float *)0x0;
  uStack_1e0 = 9;
  afStack_1d8[0] = 0.0;
  afStack_1d8[1] = fVar20;
  afStack_1d8[2] = fVar21;
  afStack_1d8[3] = fVar22;
  afStack_1d8[4] = 1.0;
  uStack_1c4 = CONCAT44(fVar21 + _UNK_142e37954,fVar20 + _DAT_142e37950);
  fStack_1bc = fVar22 + fVar25;
  uStack_1b8 = 0x40000000;
  uStack_1a4 = 0;
  uStack_1b4 = (ulonglong)uStack_11c;
  uStack_1ac = 0;
  uStack_198 = 10;
  apuStack_190[0] = &uStack_240;
  apuStack_190[1] = &uStack_258;
  apuStack_190[2] = &uStack_250;
  apuStack_190[3] = &uStack_248;
  puStack_170 = &uStack_240;
  puStack_168 = &uStack_258;
  puStack_160 = &uStack_250;
  puStack_158 = &uStack_248;
  puStack_150 = &uStack_240;
  puStack_148 = &uStack_258;
  pfStack_140 = (float *)0x0;
  pcStack_280 = (char *)*param_4;
  pcVar4 = (char *)param_4[1];
  uVar5 = param_4[2];
  pfVar6 = (float *)param_4[3];
  uStack_274 = -(uint)(0.0 <= param_2 && param_2 <= fVar25);
  lVar16 = 0;
  pfVar13 = (float *)0x0;
  puVar18 = (undefined8 *)0x0;
  lVar12 = 0;
  bVar11 = false;
LAB_1414e4850:
  do {
    while( true ) {
      if (pfVar13 == (float *)0x9) {
        return;
      }
      fVar20 = afStack_1d8[(longlong)pfVar13];
      pfVar13 = (float *)((longlong)pfVar13 + 1);
      if ((puVar18 == (undefined8 *)0x0) || (puVar7 = puVar18, puVar18 == puVar14)) {
        if (lVar12 == 3) {
          return;
        }
        ppuVar1 = apuStack_220 + lVar12;
        lStack_230 = lVar12 + 1;
        puStack_200 = *ppuVar1 + 4;
        lVar12 = lStack_230;
        puVar14 = puStack_200;
        puVar7 = *ppuVar1;
      }
      if (lVar16 == 10) {
        return;
      }
      puVar18 = puVar7 + 1;
      lStack_1a0 = lVar16 + 1;
      pfVar15 = (float *)apuStack_190[lVar16];
      if (pfVar17 == (float *)0x0) {
        if (lStack_1a0 == 10) {
          pfVar15 = (float *)0x0;
          lVar16 = 10;
        }
        else {
          pfStack_1e8 = (float *)apuStack_190[lVar16 + 1];
          lStack_1a0 = lVar16 + 2;
          lVar16 = lStack_1a0;
        }
        pfStack_140 = pfVar15;
        pfStack_138 = pfStack_1e8;
        pfVar9 = pfStack_1e8;
        pfVar17 = pfVar15;
      }
      else {
        pfStack_138 = pfVar15;
        pfStack_140 = pfStack_260;
        pfVar9 = pfVar15;
        pfVar17 = pfStack_260;
        lVar16 = lStack_1a0;
      }
      pfStack_260 = pfVar9;
      if (pfVar17 == (float *)0x0) {
        return;
      }
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      pfStack_1e8 = pfVar13;
      puStack_290 = puVar7;
      apuStack_220[3] = puVar18;
      pfStack_140 = pfVar17;
      pfStack_138 = pfStack_260;
      if (param_2 < fVar20) break;
      uStack_298 = pfStack_260;
      if (fVar27 < fVar20) {
LAB_1414e4d0a:
        uStack_298 = (float *)CONCAT44(uStack_298._4_4_,param_3);
        if ((0.0 <= param_3) && (param_3 <= _DAT_142e36f28)) {
          uVar23 = pdb_140df0920(uStack_268,param_3);
          pcVar8 = pcStack_280;
          uVar3 = *(undefined8 *)pfVar17;
          fVar25 = (float)uVar3;
          fVar24 = (float)((ulonglong)uVar3 >> 0x20);
          if (*pcStack_280 == '\0') {
            pdb_1414e4000(uVar5,uVar23,param_3,fVar25,fVar24,0x3f800000,6);
            *pcVar8 = '\x01';
            *pcVar4 = '\x01';
            *(undefined8 *)pfVar6 = uVar3;
          }
          else {
            uVar10 = 6;
            if (*pcVar4 == '\x01') {
              pdb_1414e4000(uVar5,uVar23,param_3,*pfVar6 + fVar25,fVar24 + pfVar6[1],0x3f800000,4);
              uVar10 = 4;
            }
            pdb_1414e4000(uVar5,uVar23,param_3,fVar25,fVar24,0x3f800000,uVar10);
            *pcVar8 = '\0';
          }
          return;
        }
LAB_1414e4e69:
        puStack_290 = &uStack_298;
        pcStack_288 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14330d448,&puStack_290,&UNK_14330d430);
      }
    }
    uStack_298 = pfStack_260;
    pfStack_270 = pfStack_260;
    if (!bVar11) {
      uStack_298._4_4_ = (undefined4)((ulonglong)pfStack_260 >> 0x20);
      uStack_298 = (float *)CONCAT44(uStack_298._4_4_,param_2);
      if ((uStack_274 & 1) == 0) goto LAB_1414e4e69;
      fVar21 = param_2;
      uVar23 = pdb_140df0920(uStack_268,param_2);
      pcVar8 = pcStack_280;
      uVar3 = *(undefined8 *)pfVar17;
      fVar22 = (float)uVar3;
      fVar26 = (float)((ulonglong)uVar3 >> 0x20);
      if (*pcStack_280 == '\0') {
        pdb_1414e4000(uVar5,uVar23,fVar21,fVar22,fVar26,0,6);
        *pcVar8 = '\x01';
        *pcVar4 = '\x01';
        *(undefined8 *)pfVar6 = uVar3;
      }
      else {
        uVar10 = 6;
        if (*pcVar4 == '\x01') {
          pdb_1414e4000(uVar5,uVar23,fVar21,*pfVar6 + fVar22,pfVar6[1] + fVar26,0,4);
          uVar10 = 4;
        }
        pdb_1414e4000(uVar5,uVar23,fVar21,fVar22,fVar26,0,uVar10);
        *pcStack_280 = '\0';
      }
    }
    pcVar8 = pcStack_280;
    if (fVar27 < fVar20) goto LAB_1414e4d0a;
    bVar11 = true;
  } while (fVar27 <= fVar20);
  fVar22 = fVar20 * (fVar25 / fVar24) - param_2 * (fVar25 / fVar24);
  uVar23 = *(undefined4 *)puVar7;
  uVar2 = *(undefined4 *)((longlong)puVar7 + 4);
  uVar3 = *(undefined8 *)pfVar17;
  fVar20 = (float)uVar3;
  fVar21 = (float)((ulonglong)uVar3 >> 0x20);
  if (*pcStack_280 == '\0') {
    pdb_1414e4000(uVar5,uVar23,uVar2,fVar20,fVar21,fVar22,6);
    *pcVar8 = '\x01';
    *pcVar4 = '\x01';
    *(undefined8 *)pfVar6 = uVar3;
    fVar26 = *pfStack_270;
    fVar28 = pfStack_270[1];
    if (*pcVar8 != '\0') {
      uVar10 = 6;
      if (*pcVar4 == '\x01') {
        pdb_1414e4000(uVar5,uVar23,uVar2,fVar20 + fVar26,fVar21 + fVar28,fVar22,4);
        uVar10 = 4;
      }
      pdb_1414e4000(uVar5,uVar23,uVar2,fVar26,fVar28,fVar22,uVar10);
      *pcVar8 = '\0';
      goto LAB_1414e4850;
    }
  }
  else {
    uVar10 = 6;
    if (*pcVar4 == '\x01') {
      pdb_1414e4000(uVar5,uVar23,uVar2,*pfVar6 + fVar20,pfVar6[1] + fVar21,fVar22,4);
      uVar10 = 4;
    }
    pdb_1414e4000(uVar5,uVar23,uVar2,fVar20,fVar21,fVar22,uVar10);
    *pcVar8 = '\0';
    fVar26 = *pfStack_270;
    fVar28 = pfStack_270[1];
  }
  pdb_1414e4000(uVar5,uVar23,uVar2,fVar26,fVar28,fVar22,6);
  *pcVar8 = '\x01';
  *pcVar4 = '\x01';
  *pfVar6 = fVar26;
  pfVar6[1] = fVar28;
  goto LAB_1414e4850;
}

