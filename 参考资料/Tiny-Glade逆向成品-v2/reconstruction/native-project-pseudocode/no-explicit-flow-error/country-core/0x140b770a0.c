// VA 0x140b770a0, PDB extent 205 bytes
// country_core::resources::roofs::roof_shape::ridge_length_01_from_rectangle_ratio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::roofs::roof_shape::ridge_length_01_from_rectangle_ratio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 205 */

float pdb_140b770a0(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_1 / param_2;
  fVar5 = param_2 / param_1;
  fVar2 = fVar5;
  if (fVar5 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar1 = param_2;
  if (param_2 <= param_1) {
    fVar1 = param_1;
  }
  fVar4 = ((float)(~-(uint)NAN(param_1) & (uint)fVar1 | -(uint)NAN(param_1) & (uint)param_2) +
          _DAT_14303c690) / _DAT_14303c694;
  fVar1 = 0.0;
  if (0.0 <= fVar4) {
    fVar1 = fVar4;
  }
  fVar4 = _DAT_142e36f28;
  if (fVar1 <= _DAT_142e36f28) {
    fVar4 = fVar1;
  }
  fVar3 = ((_DAT_142e3788c - (fVar4 + fVar4)) * fVar4 * fVar4 * _DAT_142e37838 +
           (float)(~-(uint)NAN(fVar3) & (uint)fVar2 | -(uint)NAN(fVar3) & (uint)fVar5) +
          _DAT_142f61000) / _DAT_142e37838;
  fVar2 = 0.0;
  if (0.0 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar3 = _DAT_142e36f28;
  if (fVar2 <= _DAT_142e36f28) {
    fVar3 = fVar2;
  }
  return (_DAT_142e3788c - (fVar3 + fVar3)) * fVar3 * fVar3;
}

