// VA 0x140b40bc0, PDB extent 309 bytes
// country_core::resources::placement_data::PlacementDataSsbo::to_affine3a
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/placement_data.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::placement_data::PlacementDataSsbo::to_affine3a
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/placement_data.rs
   Extent: 309 */

float * pdb_140b40bc0(float *param_1,float *param_2)

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
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar13 = param_2[4] * _DAT_142e36f50;
  fVar5 = (float)pub_142e32b30(fVar13);
  fVar6 = (float)pub_142e329e0(fVar13);
  fVar14 = fVar5 * 0.0;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar9 = fVar14 + fVar14;
  fVar7 = fVar5 + fVar5;
  fVar11 = fVar14 * fVar9;
  fVar16 = fVar11 - fVar7 * fVar6;
  fVar10 = fVar9 * fVar6;
  fVar15 = _UNK_142e378e4 - (fVar5 * fVar7 + fVar11);
  fVar12 = fVar5 * fVar9 + fVar10;
  fVar8 = _UNK_142e378e4 - (fVar11 + fVar11);
  fVar13 = param_2[3];
  *param_1 = fVar4 * fVar15;
  param_1[1] = fVar4 * (fVar14 * fVar7 + fVar10);
  param_1[2] = fVar4 * fVar16;
  param_1[3] = fVar4 * fVar16;
  param_1[4] = (fVar14 * fVar7 - fVar10) * fVar13;
  param_1[5] = fVar8 * fVar13;
  param_1[6] = fVar12 * fVar13;
  param_1[7] = fVar12 * fVar13;
  param_1[8] = fVar13 * (fVar7 * fVar6 + fVar11);
  param_1[9] = fVar13 * (fVar5 * fVar9 - fVar10);
  param_1[10] = fVar13 * fVar15;
  param_1[0xb] = fVar13 * fVar15;
  param_1[0xc] = fVar1;
  param_1[0xd] = fVar2;
  param_1[0xe] = fVar3;
  param_1[0xf] = fVar3;
  return param_1;
}

