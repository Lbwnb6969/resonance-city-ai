// Matched PDB: country_core::resources::roofs::roof_shape::profile_curve_ws
// VA 0x140b768b0, PDB extent 687 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::roofs::roof_shape::profile_curve_ws
   Extent: 687 bytes. No whole-program auto-analysis. */

longlong *
pdb_140b768b0(longlong *param_1,longlong param_2,float param_3,float param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  float fVar20;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  longlong lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  
  uVar7 = *(ulonglong *)(param_2 + 0x10);
  if (uVar7 == 0) {
    uStack_b0 = 4;
    fVar3 = _DAT_142e36f28;
  }
  else {
    uVar8 = *(ulonglong *)(param_2 + 8);
    lVar19 = uVar7 * 8;
    pdb_14007ee60();
    uStack_b0 = func_0x0001406abab0(lVar19,4);
    fVar6 = _UNK_142e3c64c;
    fVar5 = _UNK_142e3c648;
    fVar4 = _UNK_142e3c644;
    fVar3 = _DAT_142e3c640;
    if (uStack_b0 == 0) goto LAB_140b76b51;
    if ((uVar7 < 4) || (uStack_b0 < uVar8 + uVar7 * 8 && uVar8 < uStack_b0 + uVar7 * 8)) {
      uVar17 = 0;
    }
    else {
      uVar17 = uVar7 & 0xfffffffffffffffc;
      uVar18 = 0;
      do {
        pfVar1 = (float *)(uVar8 + uVar18 * 8);
        fVar20 = *pfVar1;
        fVar10 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar12 = pfVar1[3];
        pfVar1 = (float *)(uVar8 + 0x10 + uVar18 * 8);
        fVar13 = pfVar1[1];
        fVar14 = pfVar1[2];
        fVar15 = pfVar1[3];
        pfVar2 = (float *)(uStack_b0 + 0x10 + uVar18 * 8);
        *pfVar2 = *pfVar1 * param_4 + (fVar5 - *pfVar1) * param_3;
        pfVar2[1] = fVar13 * param_5;
        pfVar2[2] = fVar14 * param_4 + (fVar6 - fVar14) * param_3;
        pfVar2[3] = fVar15 * param_5;
        pfVar1 = (float *)(uStack_b0 + uVar18 * 8);
        *pfVar1 = fVar20 * param_4 + (fVar3 - fVar20) * param_3;
        pfVar1[1] = fVar10 * param_5;
        pfVar1[2] = fVar11 * param_4 + (fVar4 - fVar11) * param_3;
        pfVar1[3] = fVar12 * param_5;
        uVar18 = uVar18 + 4;
      } while (uVar17 != uVar18);
      fVar3 = _DAT_142e36f28;
      if (uVar7 == uVar17) goto LAB_140b76a10;
    }
    uVar18 = uVar17 | 1;
    fVar3 = _DAT_142e36f28;
    if ((uVar7 & 1) != 0) {
      fVar3 = *(float *)(uVar8 + uVar17 * 8);
      fVar4 = *(float *)(uVar8 + 4 + uVar17 * 8);
      *(float *)(uStack_b0 + uVar17 * 8) = fVar3 * param_4 + (_DAT_142e36f28 - fVar3) * param_3;
      *(float *)(uStack_b0 + 4 + uVar17 * 8) = fVar4 * param_5;
      uVar17 = uVar18;
      fVar3 = _DAT_142e36f28;
    }
    while (fVar4 = _DAT_142e36f28, uVar7 != uVar18) {
      fVar5 = *(float *)(uVar8 + uVar17 * 8);
      fVar20 = _DAT_142e36f28 - fVar5;
      fVar6 = *(float *)(uVar8 + 4 + uVar17 * 8);
      _DAT_142e36f28 = fVar3;
      *(float *)(uStack_b0 + uVar17 * 8) = fVar5 * param_4 + fVar20 * param_3;
      *(float *)(uStack_b0 + 4 + uVar17 * 8) = fVar6 * param_5;
      fVar3 = *(float *)(uVar8 + 8 + uVar17 * 8);
      fVar5 = *(float *)(uVar8 + 0xc + uVar17 * 8);
      *(float *)(uStack_b0 + 8 + uVar17 * 8) = fVar3 * param_4 + (fVar4 - fVar3) * param_3;
      *(float *)(uStack_b0 + 0xc + uVar17 * 8) = fVar5 * param_5;
      uVar18 = uVar17 + 2;
      uVar17 = uVar18;
      fVar3 = _DAT_142e36f28;
      _DAT_142e36f28 = fVar4;
    }
  }
LAB_140b76a10:
  _DAT_142e36f28 = fVar3;
  lVar19 = 0;
  uStack_b8 = uVar7;
  uStack_a8 = uVar7;
  pdb_140080c90(&lStack_a0,&uStack_b8,0);
  if (!SBORROW8(0,lStack_a0)) {
    param_1[6] = lStack_70;
    param_1[4] = lStack_80;
    param_1[5] = lStack_78;
    param_1[2] = CONCAT44(uStack_8c,uStack_90);
    param_1[3] = lStack_88;
    *param_1 = lStack_a0;
    param_1[1] = CONCAT44(uStack_94,uStack_98);
    return param_1;
  }
  pdb_142dc8170(&UNK_14335e278,0x2b,&uStack_b8,&UNK_14335e258,&UNK_14305c368);
LAB_140b76b51:
  pdb_142dc7e2a(4,lVar19);
  pcVar9 = (code *)swi(3);
  plVar16 = (longlong *)(*pcVar9)();
  return plVar16;
}

