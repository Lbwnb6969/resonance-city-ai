// VA 0x140de9620, PDB extent 239 bytes
// utils::random_orthogonal_quat
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::random_orthogonal_quat
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 239 */

float * pdb_140de9620(float *param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  float fVar8;
  
  uVar6 = pdb_140e02880(param_2);
  fVar1 = (float)pdb_140e02880(param_2);
  fVar5 = _DAT_142f57bcc;
  fVar1 = fVar1 * _DAT_142f57bcc;
  fVar2 = (float)pdb_140e02880(param_2);
  fVar8 = _DAT_142e36f28 - (float)uVar6;
  fVar3 = (float)pub_142e329e0(fVar1);
  fVar1 = (float)pub_142e32b30(fVar1);
  fVar4 = (float)pub_142e329e0(fVar2 * fVar5);
  fVar5 = (float)pub_142e32b30(fVar2 * fVar5);
  auVar7._4_4_ = (float)uVar6;
  auVar7._0_4_ = fVar8;
  auVar7._8_4_ = 0;
  auVar7._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
  auVar7 = sqrtps(in_XMM1,auVar7);
  *param_1 = fVar3 * auVar7._0_4_;
  param_1[1] = fVar1 * auVar7._0_4_;
  param_1[2] = fVar4 * auVar7._4_4_;
  param_1[3] = fVar5 * auVar7._4_4_;
  return param_1;
}

