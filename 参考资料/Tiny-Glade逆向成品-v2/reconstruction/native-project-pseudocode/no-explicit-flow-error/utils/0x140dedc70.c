// VA 0x140dedc70, PDB extent 81 bytes
// utils::easing_functions::cubic_in_out
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/easing_functions.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::easing_functions::cubic_in_out
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/easing_functions.rs
   Extent: 81 */

float pdb_140dedc70(float param_1)

{
  float fVar1;
  
  if (param_1 < _DAT_142e36f50) {
    return _DAT_142e37adc * param_1 * param_1 * param_1;
  }
  fVar1 = param_1 + param_1 + _DAT_142e37890;
  return _DAT_142e36f50 * fVar1 * fVar1 * fVar1 + _DAT_142e36f28;
}

