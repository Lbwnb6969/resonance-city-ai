// VA 0x140847990, PDB extent 389 bytes
// system_wall_constructor::utils::sine_wave::BrickRowSine::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/sine_wave.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::utils::sine_wave::BrickRowSine::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/sine_wave.rs
   Extent: 389 */

float * pdb_140847990(float *param_1,float param_2,float param_3,float param_4,float param_5,
                     float param_6)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = _DAT_14300b868;
  fVar9 = _DAT_142e37878;
  fVar3 = (float)pub_142e32b30((param_2 * param_4 * _DAT_142e37878 + param_6) * _DAT_14300b868);
  fVar4 = (float)pub_142e32b30((param_3 * param_4 * fVar9 + param_6) * fVar7);
  fVar2 = _UNK_14300b874;
  fVar9 = _DAT_14300b870;
  fVar3 = fVar3 * _DAT_14300b870;
  fVar4 = fVar4 * _UNK_14300b874;
  fVar5 = (float)pub_142e32bc0(fVar3);
  fVar6 = (float)pub_142e32bc0(fVar4);
  fVar3 = fVar3 - fVar5;
  fVar4 = fVar4 - fVar6;
  fVar5 = (float)pub_142e32b30((fVar3 + fVar3) * fVar7);
  fVar7 = (float)pub_142e32b30((fVar4 + fVar4) * fVar7);
  fVar6 = (float)pub_142e32bc0(fVar5 * fVar9);
  fVar8 = (float)pub_142e32bc0(fVar7 * fVar2);
  bVar1 = _DAT_142e37848 <= param_2;
  fVar9 = (fVar5 * fVar9 - fVar6) * _DAT_14300b880;
  fVar7 = (fVar7 * fVar2 - fVar8) * _UNK_14300b884;
  *param_1 = fVar3;
  param_1[1] = fVar4;
  param_1[2] = fVar9;
  param_1[3] = fVar7;
  param_1[4] = param_5;
  *(bool *)(param_1 + 5) = bVar1;
  return param_1;
}

