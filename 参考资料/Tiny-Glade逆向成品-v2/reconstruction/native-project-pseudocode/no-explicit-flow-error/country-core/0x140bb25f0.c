// VA 0x140bb25f0, PDB extent 711 bytes
// country_core::render::directional_light::DirectionalLight::look_at
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/directional_light.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::directional_light::DirectionalLight::look_at
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/directional_light.rs
   Extent: 711 */

void pdb_140bb25f0(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar4 = _DAT_142e36f28;
  fVar1 = *(float *)(param_2 + 1);
  fVar7 = fVar1 - *(float *)(param_3 + 1);
  fVar10 = *(float *)(param_3 + 1) - fVar1;
  fVar5 = (float)*param_2;
  fVar6 = (float)((ulonglong)*param_2 >> 0x20);
  fVar8 = (float)*param_3;
  fVar11 = fVar5 - fVar8;
  fVar9 = (float)((ulonglong)*param_3 >> 0x20);
  fVar13 = fVar6 - fVar9;
  fVar8 = fVar8 - fVar5;
  fVar9 = fVar9 - fVar6;
  fVar12 = _DAT_142e36f28 / SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10);
  fVar8 = fVar12 * fVar8;
  fVar9 = fVar12 * fVar9;
  fVar12 = fVar12 * fVar10;
  fVar18 = fVar12 * 0.0 - fVar8 * 0.0;
  fVar19 = fVar9 * 0.0 - fVar12;
  fVar20 = fVar8 - fVar9 * 0.0;
  fVar10 = _DAT_142e36f28 / SQRT(fVar20 * fVar20 + fVar19 * fVar19 + fVar18 * fVar18);
  fVar18 = fVar10 * fVar18;
  fVar19 = fVar10 * fVar19;
  fVar22 = fVar9 * fVar19 - fVar8 * fVar18;
  fVar10 = fVar10 * fVar20;
  fVar20 = fVar12 * fVar18 - fVar9 * fVar10;
  fVar21 = fVar8 * fVar10 - fVar12 * fVar19;
  auVar14._8_4_ = (uint)fVar9 ^ _UNK_142e37828;
  auVar14._4_4_ = fVar21;
  auVar14._0_4_ = fVar18;
  auVar14._12_4_ = 0;
  uVar17 = (uint)fVar12 ^ _DAT_142e37820;
  uVar15 = (uint)(fVar1 * fVar10 + fVar19 * fVar5 + fVar18 * fVar6) ^ _DAT_142e37820;
  uVar16 = (uint)(fVar1 * fVar22 + fVar21 * fVar6 + fVar20 * fVar5) ^ _UNK_142e37824;
  auVar3._4_4_ = fVar20;
  auVar3._0_4_ = fVar19;
  auVar3._8_4_ = (uint)fVar8 ^ _DAT_142e37820;
  auVar3._12_4_ = 0;
  *param_1 = auVar3;
  param_1[1] = auVar14;
  auVar2._4_4_ = fVar22;
  auVar2._0_4_ = fVar10;
  auVar2._8_4_ = uVar17;
  auVar2._12_4_ = 0;
  param_1[2] = auVar2;
  *(uint *)param_1[3] = uVar15;
  *(uint *)(param_1[3] + 4) = uVar16;
  *(float *)(param_1[3] + 8) = fVar1 * fVar12 + fVar6 * fVar9 + fVar5 * fVar8;
  *(float *)(param_1[3] + 0xc) = fVar4;
  *(ulonglong *)param_1[4] = CONCAT44(fVar9,fVar8);
  *(float *)(param_1[4] + 8) = fVar12;
  *(undefined8 *)(param_1[4] + 0xc) = *param_2;
  *(undefined4 *)(param_1[5] + 4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1[5] + 8) = 0x3f8000003f800000;
  *(undefined4 *)param_1[6] = 0x3f800000;
  *(undefined8 *)(param_1[6] + 4) = *param_3;
  *(undefined4 *)(param_1[6] + 0xc) = *(undefined4 *)(param_3 + 1);
  *(float *)param_1[7] = SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar7 * fVar7);
  return;
}

