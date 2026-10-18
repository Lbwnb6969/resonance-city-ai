// VA 0x140b67360, PDB extent 30 bytes
// country_core::resources::brush_sizes::BrushSizes::set_garden
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/brush_sizes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::brush_sizes::BrushSizes::set_garden
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/brush_sizes.rs
   Extent: 30 */

void pdb_140b67360(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = _DAT_142e37830;
  if (_DAT_142e37830 <= param_2) {
    fVar1 = param_2;
  }
  fVar2 = _DAT_142e37adc;
  if (fVar1 <= _DAT_142e37adc) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 8) = fVar2;
  return;
}

