// VA 0x140c151e0, PDB extent 174 bytes
// country_core::utils::world_space_to_screen_space
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::utils::world_space_to_screen_space
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/mod.rs
   Extent: 174 */

float pdb_140c151e0(float *param_1,float param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *param_1;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = fVar2 * param_4[0x28] + fVar1 * param_4[0x24] + fVar5 * param_4[0x20] + param_4[0x2c];
  fVar4 = fVar2 * param_4[0x29] + fVar1 * param_4[0x25] + fVar5 * param_4[0x21] + param_4[0x2d];
  fVar5 = fVar2 * param_4[0x2a] + fVar1 * param_4[0x26] + fVar5 * param_4[0x22] + param_4[0x2e];
  return (((fVar5 * param_4[8] + fVar4 * param_4[4] + fVar3 * *param_4 + param_4[0xc]) /
          (fVar5 * param_4[0xb] + fVar4 * param_4[7] + fVar3 * param_4[3] + param_4[0xf])) *
          _DAT_142e36f50 + _DAT_142e36f50) * param_2;
}

