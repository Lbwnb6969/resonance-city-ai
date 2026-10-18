// Matched PDB: country_core::resources::roofs::roof_shape::RoofShapeParams::eave_length_ws
// VA 0x140b76870, PDB extent 62 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::roofs::roof_shape::RoofShapeParams::eave_length_ws
   Extent: 62 bytes. No whole-program auto-analysis. */

undefined8 pdb_140b76870(longlong param_1)

{
  float fVar1;
  
  fVar1 = SQRT(*(float *)(param_1 + 8)) +
          (_UNK_142e37954 - SQRT(*(float *)(param_1 + 8))) * _UNK_142f89644;
  return CONCAT44(fVar1,fVar1 * (_DAT_142e37838 * *(float *)(param_1 + 0x14) +
                                (_DAT_142e37950 - *(float *)(param_1 + 0x14)) * _DAT_142f89640));
}

