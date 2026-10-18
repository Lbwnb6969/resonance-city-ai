// VA 0x141422540, PDB extent 2297 bytes
// system_wall_constructor::place_pillars::assemble_stone_pillar<system_wall_constructor::place_pillars::place_pillars::closure_env$4>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/place_pillars.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::place_pillars::assemble_stone_pillar<system_wall_constructor::place_pillars::place_pillars::closure_env$4>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/place_pillars.rs
   Extent: 2297 */

void pdb_141422540(undefined8 param_1,undefined8 param_2,float param_3,float param_4,float *param_5)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  byte *arg0;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float *arg0_00;
  float *pfVar13;
  longlong lVar14;
  ulonglong uVar15;
  float *pfVar16;
  bool bVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float *unaff_R13;
  float *pfVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  ulonglong uStack_128;
  float *pfStack_120;
  ulonglong uStack_118;
  float *pfStack_110;
  undefined8 uStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  fVar3 = *param_5;
  fVar32 = param_5[1];
  fVar4 = param_5[2];
  param_4 = param_4 + _DAT_1430151c0;
  param_3 = param_3 + _UNK_1430151c4;
  pdb_14007ee60();
  if (param_3 <= _DAT_143308d90) {
    arg0_00 = (float *)pub_1406abab0(0xc,4);
    if (arg0_00 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,0xc);
    }
    *arg0_00 = 0.0;
    arg0_00[1] = param_4;
    *(undefined1 *)(arg0_00 + 2) = 0;
    lVar14 = 1;
  }
  else {
    arg0_00 = (float *)pub_1406abab0(0x18,4);
    fVar9 = _DAT_142e37990;
    if (arg0_00 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,0x18);
    }
    fVar23 = (float)((uint)(param_3 - param_4) & _DAT_142e377e0);
    *arg0_00 = 0.0;
    arg0_00[1] = param_4;
    *(undefined1 *)(arg0_00 + 2) = 1;
    *(ulonglong *)(arg0_00 + 3) = CONCAT44(param_3,param_4);
    *(bool *)(arg0_00 + 5) = fVar9 < fVar23;
    lVar14 = 2;
  }
  fVar11 = _DAT_142e37848;
  fVar10 = _UNK_142e36f64;
  fVar23 = _DAT_142e36f60;
  fVar9 = _DAT_142e36f50;
  fVar32 = fVar32 + _DAT_142f60fec;
  fVar34 = (float)_DAT_142e378e0;
  fVar35 = (float)((ulonglong)_DAT_142e378e0 >> 0x20);
  pfVar13 = arg0_00;
  do {
    if (pfVar13 == arg0_00 + lVar14 * 3) {
      if (_DAT_143065940 < param_3) {
        fStack_f8 = fVar32 + _DAT_143008210;
        uStack_108 = _DAT_143308dc0;
        fStack_100 = 0.85;
        fStack_fc = fVar3;
        fStack_f4 = fVar4;
        pdb_141422010(param_1,&uStack_108,&fStack_fc);
      }
      pub_1406abac0((byte *)arg0_00,(ulonglong)(uint)((int)lVar14 << 2) * 3,4);
      return;
    }
    cVar5 = *(char *)(pfVar13 + 2);
    fVar24 = _DAT_142e37ae4;
    if (cVar5 == '\0') {
      fVar24 = 0.0;
    }
    fVar26 = *pfVar13;
    fVar27 = pfVar13[1];
    fVar24 = (fVar27 - fVar26) - fVar24;
    pfStack_110 = pfVar13;
    fVar25 = (float)pub_142e329c0(fVar24 / _DAT_142e3c624);
    uVar18 = (longlong)(fVar25 - _DAT_142e36f2c) & (longlong)fVar25 >> 0x3f | (longlong)fVar25;
    if (fVar25 < 0.0) {
      uVar18 = 0;
    }
    if (_DAT_142e36f30 < fVar25) {
      uVar18 = 0xffffffffffffffff;
    }
    if (uVar18 < 4) {
      uVar18 = 3;
    }
    pdb_140de8290(&uStack_108,uVar18,_DAT_14300b140 / fVar24,param_2,&UNK_143308e08);
    fVar25 = fStack_f8;
    arg0 = (byte *)CONCAT44(fStack_fc,fStack_100);
    uVar18 = CONCAT44(fStack_f4,fStack_f8);
    if (uVar18 == 0) {
      pfVar13 = (float *)0x4;
    }
    else {
      pdb_14007ee60();
      pfVar13 = (float *)pub_1406abab0(uVar18 * 4,4);
      if (pfVar13 == (float *)0x0) {
        pfStack_110 = (float *)arg0;
        pdb_142dc7e2a(4,uVar18 * 4);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      if ((ulonglong)((longlong)pfVar13 - (longlong)arg0) < 0x20 || uVar18 < 8) {
        uVar15 = 0;
      }
      else {
        uVar15 = uVar18 & 0xfffffffffffffff8;
        uVar19 = 0;
        do {
          pfVar16 = (float *)(arg0 + uVar19 * 4);
          fVar28 = pfVar16[1];
          fVar29 = pfVar16[2];
          fVar30 = pfVar16[3];
          pfVar2 = (float *)(arg0 + uVar19 * 4 + 0x10);
          fVar31 = *pfVar2;
          fVar33 = pfVar2[1];
          fVar7 = pfVar2[2];
          fVar8 = pfVar2[3];
          pfVar2 = pfVar13 + uVar19;
          *pfVar2 = *pfVar16 * fVar24 + fVar26;
          pfVar2[1] = fVar28 * fVar24 + fVar26;
          pfVar2[2] = fVar29 * fVar24 + fVar26;
          pfVar2[3] = fVar30 * fVar24 + fVar26;
          pfVar16 = pfVar13 + uVar19 + 4;
          *pfVar16 = fVar31 * fVar24 + fVar26;
          pfVar16[1] = fVar33 * fVar24 + fVar26;
          pfVar16[2] = fVar7 * fVar24 + fVar26;
          pfVar16[3] = fVar8 * fVar24 + fVar26;
          uVar19 = uVar19 + 8;
        } while (uVar15 != uVar19);
        if (uVar18 == uVar15) goto LAB_1414228cf;
      }
      uVar20 = (ulonglong)(uint)fVar25 & 3;
      uVar19 = uVar15;
      if (((uint)fVar25 & 3) != 0) {
        do {
          pfVar13[uVar19] = *(float *)(arg0 + uVar19 * 4) * fVar24 + fVar26;
          uVar19 = uVar19 + 1;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      if (uVar15 - uVar18 < 0xfffffffffffffffd) {
        do {
          pfVar13[uVar19] = *(float *)(arg0 + uVar19 * 4) * fVar24 + fVar26;
          pfVar13[uVar19 + 1] = *(float *)(arg0 + uVar19 * 4 + 4) * fVar24 + fVar26;
          pfVar13[uVar19 + 2] = *(float *)(arg0 + uVar19 * 4 + 8) * fVar24 + fVar26;
          pfVar13[uVar19 + 3] = *(float *)(arg0 + uVar19 * 4 + 0xc) * fVar24 + fVar26;
          uVar19 = uVar19 + 4;
        } while (uVar18 != uVar19);
      }
    }
LAB_1414228cf:
    uStack_128 = uVar18;
    pfStack_120 = pfVar13;
    uStack_118 = uVar18;
    if (uStack_108 != 0) {
      pub_1406abac0(arg0,uStack_108 << 2,4);
    }
    uVar18 = uStack_118;
    if (cVar5 != '\0') {
      if (uStack_118 == uStack_128) {
        pdb_142d89720(&uStack_128);
      }
      pfStack_120[uVar18] = fVar27;
      uStack_118 = uVar18 + 1;
    }
    pfStack_110 = pfStack_110 + 3;
    pfVar13 = pfStack_120 + uStack_118;
    bVar17 = true;
    pfVar16 = pfStack_120;
    lVar1 = 0;
    while (lVar22 = lVar1, pfVar16 != pfVar13) {
      pfVar2 = pfVar16 + 1;
      pfVar12 = pfVar2;
      pfVar21 = pfVar16;
      if (bVar17) {
        if (pfVar2 == pfVar13) break;
        unaff_R13 = pfVar16;
        pfVar12 = pfVar16 + 2;
        pfVar21 = pfVar2;
      }
      pfVar16 = pfVar12;
      lVar1 = lVar22 + 1;
      fVar33 = *unaff_R13 * fVar34;
      fVar25 = fVar3 + fVar33;
      fVar28 = fVar32 + *unaff_R13 * fVar35;
      fVar33 = fVar33 + fVar4;
      fVar29 = *pfVar21 * fVar34;
      fVar24 = fVar3 + fVar29;
      fVar27 = fVar32 + *pfVar21 * fVar35;
      fVar29 = fVar29 + fVar4;
      fVar26 = fVar24 - fVar25;
      fVar30 = fVar29 - fVar33;
      fVar31 = fVar27 - fVar28;
      fVar26 = SQRT(fVar26 * fVar26 + fVar31 * fVar31 + fVar30 * fVar30);
      bVar17 = false;
      unaff_R13 = pfVar21;
      if (fVar11 <= fVar26) {
        if (cVar5 == '\0') {
LAB_141422a0a:
          fVar30 = (float)pdb_140e02880(param_2);
          fVar31 = (float)pdb_140e02880(param_2);
          fVar30 = (fVar30 * _DAT_143009bb0 - (_DAT_142e37950 - fVar30) * _DAT_143009bb0) +
                   _DAT_143308db0;
          fVar31 = (fVar31 * _UNK_143009bb4 - (_UNK_142e37954 - fVar31) * _UNK_143009bb4) +
                   _UNK_143308db4;
        }
        else {
          fVar30 = (float)_DAT_143308da0;
          fVar31 = (float)((ulonglong)_DAT_143308da0 >> 0x20);
          if (lVar22 != uStack_118 - 2) goto LAB_141422a0a;
        }
        uStack_108 = CONCAT44(fVar26,fVar30);
        fStack_100 = fVar31;
        fStack_fc = (fVar25 + fVar24) * fVar23;
        fStack_f8 = (fVar28 + fVar27) * fVar10;
        fStack_f4 = (fVar33 + fVar29) * fVar9;
        pdb_141422010(param_1,&uStack_108,&fStack_fc);
        bVar17 = false;
      }
    }
    pfVar13 = pfStack_110;
    if (uStack_128 != 0) {
      pub_1406abac0((byte *)pfStack_120,uStack_128 << 2,4);
      pfVar13 = pfStack_110;
    }
  } while( true );
}

