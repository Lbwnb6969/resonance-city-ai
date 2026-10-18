// VA 0x140b673c0, PDB extent 30 bytes
// country_core::resources::brush_sizes::BrushSizes::set_water
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/brush_sizes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::brush_sizes::BrushSizes::set_water
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/brush_sizes.rs
   Extent: 30 */

void pdb_140b673c0(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = _DAT_142e36f28;
  if (_DAT_142e36f28 <= param_2) {
    fVar1 = param_2;
  }
  fVar2 = _DAT_142e37834;
  if (fVar1 <= _DAT_142e37834) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 4) = fVar2;
  return;
}

