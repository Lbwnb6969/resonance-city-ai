// VA 0x140b768b0, PDB extent 687 bytes
// country_core::resources::roofs::roof_shape::profile_curve_ws
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::roofs::roof_shape::profile_curve_ws
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 687 */

longlong *
pdb_140b768b0(longlong *param_1,longlong param_2,float param_3,float param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  byte *pbVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  ulonglong uStack_b8;
  byte *pbStack_b0;
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
  
  uVar5 = *(ulonglong *)(param_2 + 0x10);
  if (uVar5 == 0) {
    pbStack_b0 = (byte *)0x4;
    fVar3 = _DAT_142e36f28;
  }
  else {
    pbVar6 = *(byte **)(param_2 + 8);
    pdb_14007ee60();
    pbStack_b0 = pub_1406abab0(uVar5 * 8,4);
    fVar19 = _UNK_142e3c64c;
    fVar4 = _UNK_142e3c648;
    fVar15 = _UNK_142e3c644;
    fVar3 = _DAT_142e3c640;
    if (pbStack_b0 == (byte *)0x0) {
      pdb_142dc7e2a(4,uVar5 * 8);
      pcVar7 = (code *)swi(3);
      plVar16 = (longlong *)(*pcVar7)();
      return plVar16;
    }
    if ((uVar5 < 4) || (pbStack_b0 < pbVar6 + uVar5 * 8 && pbVar6 < pbStack_b0 + uVar5 * 8)) {
      uVar17 = 0;
    }
    else {
      uVar17 = uVar5 & 0xfffffffffffffffc;
      uVar18 = 0;
      do {
        pfVar1 = (float *)(pbVar6 + uVar18 * 8);
        fVar8 = *pfVar1;
        fVar9 = pfVar1[1];
        fVar10 = pfVar1[2];
        fVar11 = pfVar1[3];
        pfVar1 = (float *)(pbVar6 + uVar18 * 8 + 0x10);
        fVar12 = pfVar1[1];
        fVar13 = pfVar1[2];
        fVar14 = pfVar1[3];
        pfVar2 = (float *)(pbStack_b0 + uVar18 * 8 + 0x10);
        *pfVar2 = *pfVar1 * param_4 + (fVar4 - *pfVar1) * param_3;
        pfVar2[1] = fVar12 * param_5;
        pfVar2[2] = fVar13 * param_4 + (fVar19 - fVar13) * param_3;
        pfVar2[3] = fVar14 * param_5;
        pfVar1 = (float *)(pbStack_b0 + uVar18 * 8);
        *pfVar1 = fVar8 * param_4 + (fVar3 - fVar8) * param_3;
        pfVar1[1] = fVar9 * param_5;
        pfVar1[2] = fVar10 * param_4 + (fVar15 - fVar10) * param_3;
        pfVar1[3] = fVar11 * param_5;
        uVar18 = uVar18 + 4;
      } while (uVar17 != uVar18);
      fVar3 = _DAT_142e36f28;
      if (uVar5 == uVar17) goto LAB_140b76a10;
    }
    uVar18 = uVar17 | 1;
    fVar3 = _DAT_142e36f28;
    if ((uVar5 & 1) != 0) {
      fVar3 = *(float *)(pbVar6 + uVar17 * 8 + 4);
      *(float *)(pbStack_b0 + uVar17 * 8) =
           *(float *)(pbVar6 + uVar17 * 8) * param_4 +
           (_DAT_142e36f28 - *(float *)(pbVar6 + uVar17 * 8)) * param_3;
      *(float *)(pbStack_b0 + uVar17 * 8 + 4) = fVar3 * param_5;
      uVar17 = uVar18;
      fVar3 = _DAT_142e36f28;
    }
    while (fVar15 = _DAT_142e36f28, uVar5 != uVar18) {
      fVar19 = _DAT_142e36f28 - *(float *)(pbVar6 + uVar17 * 8);
      fVar4 = *(float *)(pbVar6 + uVar17 * 8 + 4);
      _DAT_142e36f28 = fVar3;
      *(float *)(pbStack_b0 + uVar17 * 8) =
           *(float *)(pbVar6 + uVar17 * 8) * param_4 + fVar19 * param_3;
      *(float *)(pbStack_b0 + uVar17 * 8 + 4) = fVar4 * param_5;
      fVar3 = *(float *)(pbVar6 + uVar17 * 8 + 0xc);
      *(float *)(pbStack_b0 + uVar17 * 8 + 8) =
           *(float *)(pbVar6 + uVar17 * 8 + 8) * param_4 +
           (fVar15 - *(float *)(pbVar6 + uVar17 * 8 + 8)) * param_3;
      *(float *)(pbStack_b0 + uVar17 * 8 + 0xc) = fVar3 * param_5;
      uVar18 = uVar17 + 2;
      uVar17 = uVar18;
      fVar3 = _DAT_142e36f28;
      _DAT_142e36f28 = fVar15;
    }
  }
LAB_140b76a10:
  _DAT_142e36f28 = fVar3;
  uStack_b8 = uVar5;
  uStack_a8 = uVar5;
  pdb_140080c90(&lStack_a0,&uStack_b8,0);
  if (SBORROW8(0,lStack_a0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14335e278,0x2b,&uStack_b8,&UNK_14335e258,&UNK_14305c368);
  }
  param_1[6] = lStack_70;
  param_1[4] = lStack_80;
  param_1[5] = lStack_78;
  param_1[2] = CONCAT44(uStack_8c,uStack_90);
  param_1[3] = lStack_88;
  *param_1 = lStack_a0;
  param_1[1] = CONCAT44(uStack_94,uStack_98);
  return param_1;
}

