// VA 0x140b673a0, PDB extent 29 bytes
// country_core::resources::brush_sizes::BrushSizes::set_path
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/brush_sizes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::brush_sizes::BrushSizes::set_path
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/brush_sizes.rs
   Extent: 29 */

void pdb_140b673a0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = _DAT_14305a490;
  if (_DAT_14305a490 <= param_2) {
    fVar1 = param_2;
  }
  fVar2 = _DAT_142e37990;
  if (fVar1 <= _DAT_142e37990) {
    fVar2 = fVar1;
  }
  *param_1 = fVar2;
  return;
}

