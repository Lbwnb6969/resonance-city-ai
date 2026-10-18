// VA 0x140bb22f0, PDB extent 87 bytes
// country_core::render::atmosphere::SunSkyColors::lerp
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/atmosphere.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::atmosphere::SunSkyColors::lerp
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/atmosphere.rs
   Extent: 87 */

float * pdb_140bb22f0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = _DAT_142e36f28 - param_4;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  *param_1 = *param_3 * param_4 + *param_2 * fVar7;
  param_1[1] = fVar4 * param_4 + fVar1 * fVar7;
  param_1[2] = fVar5 * param_4 + fVar2 * fVar7;
  param_1[3] = fVar6 * param_4 + fVar3 * fVar7;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  fVar4 = param_3[5];
  fVar5 = param_3[6];
  fVar6 = param_3[7];
  param_1[4] = param_3[4] * param_4 + param_2[4] * fVar7;
  param_1[5] = fVar4 * param_4 + fVar1 * fVar7;
  param_1[6] = fVar5 * param_4 + fVar2 * fVar7;
  param_1[7] = fVar6 * param_4 + fVar3 * fVar7;
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  fVar4 = param_3[9];
  fVar5 = param_3[10];
  fVar6 = param_3[0xb];
  param_1[8] = param_3[8] * param_4 + param_2[8] * fVar7;
  param_1[9] = fVar4 * param_4 + fVar1 * fVar7;
  param_1[10] = fVar5 * param_4 + fVar2 * fVar7;
  param_1[0xb] = fVar6 * param_4 + fVar3 * fVar7;
  return param_1;
}

