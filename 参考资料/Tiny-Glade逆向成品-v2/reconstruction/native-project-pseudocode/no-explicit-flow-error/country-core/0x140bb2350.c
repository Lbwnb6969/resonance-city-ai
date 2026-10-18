// VA 0x140bb2350, PDB extent 670 bytes
// country_core::render::directional_light::DirectionalLight::set_direction_towards_light
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/directional_light.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::directional_light::DirectionalLight::set_direction_towards_light
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/directional_light.rs
   Extent: 670 */

void pdb_140bb2350(undefined1 (*param_1) [16],undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar5 = _UNK_142e37824;
  uVar4 = _DAT_142e37820;
  fVar3 = _DAT_142e36f28;
  fVar7 = *(float *)(param_2 + 1);
  fVar12 = *(float *)param_1[7];
  fVar8 = (float)*param_2;
  fVar9 = (float)((ulonglong)*param_2 >> 0x20);
  fVar6 = _DAT_142e36f28 / SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
  fVar10 = (float)*(undefined8 *)(param_1[6] + 4);
  fVar8 = fVar12 * fVar6 * fVar8 + fVar10;
  fVar11 = (float)((ulonglong)*(undefined8 *)(param_1[6] + 4) >> 0x20);
  fVar9 = fVar12 * fVar6 * fVar9 + fVar11;
  fVar7 = fVar6 * fVar7 * fVar12 + *(float *)(param_1[6] + 0xc);
  fVar10 = fVar10 - fVar8;
  fVar11 = fVar11 - fVar9;
  fVar12 = *(float *)(param_1[6] + 0xc) - fVar7;
  fVar6 = _DAT_142e36f28 / SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10);
  fVar10 = fVar6 * fVar10;
  fVar11 = fVar6 * fVar11;
  uVar13 = (uint)fVar10 ^ _DAT_142e37820;
  fVar6 = fVar6 * fVar12;
  fVar16 = fVar6 * 0.0 - fVar10 * 0.0;
  fVar17 = fVar11 * 0.0 - fVar6;
  fVar18 = fVar10 - fVar11 * 0.0;
  fVar12 = _DAT_142e36f28 / SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16);
  fVar16 = fVar12 * fVar16;
  fVar17 = fVar12 * fVar17;
  fVar20 = fVar11 * fVar17 - fVar10 * fVar16;
  fVar12 = fVar12 * fVar18;
  fVar18 = fVar6 * fVar16 - fVar11 * fVar12;
  fVar19 = fVar10 * fVar12 - fVar6 * fVar17;
  auVar14._8_4_ = (uint)fVar11 ^ _UNK_142e37828;
  auVar14._4_4_ = fVar19;
  auVar14._0_4_ = fVar16;
  auVar14._12_4_ = 0;
  uVar15 = (uint)fVar6 ^ _DAT_142e37820;
  *(ulonglong *)(param_1[4] + 0xc) = CONCAT44(fVar9,fVar8);
  *(float *)(param_1[5] + 4) = fVar7;
  auVar2._4_4_ = fVar18;
  auVar2._0_4_ = fVar17;
  auVar2._8_4_ = uVar13;
  auVar2._12_4_ = 0;
  *param_1 = auVar2;
  param_1[1] = auVar14;
  auVar1._4_4_ = fVar20;
  auVar1._0_4_ = fVar12;
  auVar1._8_4_ = uVar15;
  auVar1._12_4_ = 0;
  param_1[2] = auVar1;
  *(uint *)param_1[3] = (uint)(fVar7 * fVar12 + fVar17 * fVar8 + fVar16 * fVar9) ^ uVar4;
  *(uint *)(param_1[3] + 4) = (uint)(fVar7 * fVar20 + fVar19 * fVar9 + fVar18 * fVar8) ^ uVar5;
  *(float *)(param_1[3] + 8) = fVar7 * fVar6 + fVar9 * fVar11 + fVar8 * fVar10;
  *(float *)(param_1[3] + 0xc) = fVar3;
  *(ulonglong *)param_1[4] = CONCAT44(fVar11,fVar10);
  *(float *)(param_1[4] + 8) = fVar6;
  return;
}

