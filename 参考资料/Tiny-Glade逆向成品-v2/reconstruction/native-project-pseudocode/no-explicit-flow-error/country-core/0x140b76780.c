// VA 0x140b76780, PDB extent 118 bytes
// country_core::resources::roofs::roof_noise::apply_roof_noise
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_noise.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::roofs::roof_noise::apply_roof_noise
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_noise.rs
   Extent: 118 */

void pdb_140b76780(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = 0.0;
  if (0.0 <= param_2) {
    fVar1 = param_2;
  }
  fVar2 = _DAT_142e36f28;
  if (fVar1 <= _DAT_142e36f28) {
    fVar2 = fVar1;
  }
  fVar3 = _DAT_142e3788c - (fVar2 + fVar2);
  fVar1 = (float)pdb_1417ddc70(*param_1 * _DAT_142e36f50,_DAT_142e36f50 * param_1[2]);
  param_1[1] = fVar1 * _DAT_142e37988 * fVar3 * fVar2 * fVar2 + param_1[1];
  return;
}

