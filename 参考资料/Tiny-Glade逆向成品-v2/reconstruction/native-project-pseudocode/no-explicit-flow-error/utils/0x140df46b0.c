// VA 0x140df46b0, PDB extent 647 bytes
// utils::components::transform::Transform::look_at
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/components/transform.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::components::transform::Transform::look_at
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/components/transform.rs
   Extent: 647 */

void pdb_140df46b0(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar4 = param_1[6] - *(float *)(param_2 + 1);
  fVar7 = (float)*(undefined8 *)(param_1 + 4) - (float)*param_2;
  fVar8 = (float)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20) -
          (float)((ulonglong)*param_2 >> 0x20);
  fVar3 = _DAT_142e36f28 / SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar4 * fVar4);
  fVar7 = fVar3 * fVar7;
  fVar8 = fVar3 * fVar8;
  fVar3 = fVar3 * fVar4;
  fVar4 = (float)*param_3;
  fVar11 = *(float *)((longlong)param_3 + 4) * fVar3 - *(float *)(param_3 + 1) * fVar8;
  fVar5 = *(float *)(param_3 + 1) * fVar7 - fVar3 * fVar4;
  fVar4 = fVar4 * fVar8 - fVar7 * (float)((ulonglong)*param_3 >> 0x20);
  fVar9 = _DAT_142e36f28 / SQRT(fVar4 * fVar4 + fVar11 * fVar11 + fVar5 * fVar5);
  fVar11 = fVar11 * fVar9;
  fVar5 = fVar9 * fVar5;
  fVar9 = fVar9 * fVar4;
  fVar6 = fVar7 * fVar5 - fVar8 * fVar11;
  fVar10 = fVar8 * fVar9 - fVar3 * fVar5;
  fVar4 = fVar3 * fVar11 - fVar9 * fVar7;
  if (fVar3 <= 0.0) {
    fVar4 = fVar4 - fVar11;
    if (fVar4 <= 0.0) {
      fVar4 = (_DAT_142e36f28 - fVar3) - fVar4;
      fVar3 = _DAT_142e36f50 / SQRT(fVar4);
      fVar1 = fVar4 * fVar3;
      fVar4 = (fVar10 + fVar5) * fVar3;
      fVar2 = (fVar7 + fVar9) * fVar3;
      fVar3 = (fVar6 - fVar8) * fVar3;
    }
    else {
      fVar4 = (_DAT_142e36f28 - fVar3) + fVar4;
      fVar3 = _DAT_142e36f50 / SQRT(fVar4);
      fVar1 = fVar3 * (fVar5 + fVar10);
      fVar4 = fVar3 * fVar4;
      fVar2 = fVar3 * (fVar8 + fVar6);
      fVar3 = fVar3 * (fVar7 - fVar9);
    }
  }
  else {
    fVar11 = fVar11 + fVar4;
    if (fVar11 <= 0.0) {
      fVar11 = (fVar3 + _DAT_142e36f28) - fVar11;
      fVar3 = _DAT_142e36f50 / SQRT(fVar11);
      fVar1 = fVar3 * (fVar7 + fVar9);
      fVar4 = fVar3 * (fVar8 + fVar6);
      fVar2 = fVar11 * fVar3;
      fVar3 = fVar3 * (fVar5 - fVar10);
    }
    else {
      fVar11 = fVar11 + fVar3 + _DAT_142e36f28;
      fVar3 = _DAT_142e36f50 / SQRT(fVar11);
      fVar1 = fVar3 * (fVar6 - fVar8);
      fVar4 = fVar3 * (fVar7 - fVar9);
      fVar2 = fVar3 * (fVar5 - fVar10);
      fVar3 = fVar3 * fVar11;
    }
  }
  *param_1 = fVar1;
  param_1[1] = fVar4;
  param_1[2] = fVar2;
  param_1[3] = fVar3;
  return;
}

