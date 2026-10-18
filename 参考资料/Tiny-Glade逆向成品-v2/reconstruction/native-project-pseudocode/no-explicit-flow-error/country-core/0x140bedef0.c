// VA 0x140bedef0, PDB extent 902 bytes
// country_core::resources::drawing_input_smoother::DrawingInputSmoother::process
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/drawing_input_smoother.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::drawing_input_smoother::DrawingInputSmoother::process
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/drawing_input_smoother.rs
   Extent: 902 */

longlong *
pdb_140bedef0(longlong *param_1,uint *param_2,float *param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  fVar1 = *param_3;
  fVar2 = param_3[2];
  uVar7 = *param_2;
  fVar15 = (float)param_2[1];
  fVar16 = (float)param_2[2];
  uVar3 = *(ulonglong *)(param_4 + 0x18);
  lStack_e8 = 0;
  lStack_e0 = 4;
  lStack_d8 = 0;
  fVar10 = (float)pdb_1414c7800(param_6,param_3[1] * *(float *)(param_5 + 0x98) +
                                        *(float *)(param_5 + 0x88) * fVar1,
                                (float)*(uint *)(param_6 + 4));
  fVar6 = _DAT_142e3788c;
  fVar5 = _DAT_142e37848;
  fVar4 = _DAT_142e36f28;
  uVar11 = (int)(uVar7 << 0x1f) >> 0x1f;
  uVar13 = (int)(uVar7 << 0x1f) >> 0x1f;
  fVar17 = (float)((uint)fVar15 & uVar11 | ~uVar11 & (uint)fVar1);
  fVar18 = (float)((uint)fVar16 & uVar13 | ~uVar13 & (uint)fVar2);
  uVar8 = 0;
  lVar9 = 0;
  while (uVar8 < uVar3) {
    uVar8 = uVar8 + 1;
    fVar12 = (float)uVar8 / (float)uVar3;
    fVar14 = fVar4 - fVar12;
    fVar19 = fVar12 * fVar1 + fVar14 * fVar17;
    fVar12 = fVar12 * fVar2 + fVar14 * fVar18;
    if ((uVar7 & 1) != 0) {
      while ((fVar14 = SQRT((fVar12 - fVar16) * (fVar12 - fVar16) +
                            (fVar19 - fVar15) * (fVar19 - fVar15)), fVar14 <= fVar5 ||
             (fVar14 * fVar10 <= fVar6))) {
        if (uVar3 <= uVar8) goto LAB_140bee15a;
        uVar8 = uVar8 + 1;
        fVar12 = (float)uVar8 / (float)uVar3;
        fVar14 = fVar4 - fVar12;
        fVar19 = fVar14 * fVar17 + fVar12 * fVar1;
        fVar12 = fVar14 * fVar18 + fVar12 * fVar2;
      }
    }
    if (lVar9 == lStack_e8) {
      pdb_142db07d0(&lStack_e8);
    }
    *(ulonglong *)(lStack_e0 + lVar9 * 8) = CONCAT44(fVar12,fVar19);
    lVar9 = lVar9 + 1;
    uVar7 = 1;
    fVar15 = fVar19;
    fVar16 = fVar12;
    lStack_d8 = lVar9;
  }
LAB_140bee15a:
  param_1[2] = lStack_d8;
  *param_1 = lStack_e8;
  param_1[1] = lStack_e0;
  return param_1;
}

