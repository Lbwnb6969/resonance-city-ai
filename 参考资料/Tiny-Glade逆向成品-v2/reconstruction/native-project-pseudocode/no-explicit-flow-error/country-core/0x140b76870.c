// VA 0x140b76870, PDB extent 62 bytes
// country_core::resources::roofs::roof_shape::RoofShapeParams::eave_length_ws
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::roofs::roof_shape::RoofShapeParams::eave_length_ws
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 62 */

undefined8 pdb_140b76870(longlong param_1)

{
  float fVar1;
  
  fVar1 = SQRT(*(float *)(param_1 + 8)) +
          (_UNK_142e37954 - SQRT(*(float *)(param_1 + 8))) * _UNK_142f89644;
  return CONCAT44(fVar1,fVar1 * (_DAT_142e37838 * *(float *)(param_1 + 0x14) +
                                (_DAT_142e37950 - *(float *)(param_1 + 0x14)) * _DAT_142f89640));
}

