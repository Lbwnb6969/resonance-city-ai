// VA 0x140ac6180, PDB extent 119 bytes
// country_core::resources::roofs::roof_ridge::inverse_ridge_01_param
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_ridge.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::roofs::roof_ridge::inverse_ridge_01_param
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_ridge.rs
   Extent: 119 */

void pdb_140ac6180(float param_1,char param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  if (param_2 == '\0') {
    param_4 = param_3;
  }
  if ((param_4 == _DAT_142e3b1d8) && (!NAN(param_4) && !NAN(_DAT_142e3b1d8))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14304c388);
  }
  fVar1 = (param_1 + _DAT_142e42360) / (param_4 + _DAT_142e42360);
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = _DAT_142e36f28;
  if (fVar2 <= _DAT_142e36f28) {
    fVar1 = fVar2;
  }
  if ((uint)ABS(fVar1) < 0x7f800000) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14304c3a0,0x29,&UNK_14304c3d0);
}

