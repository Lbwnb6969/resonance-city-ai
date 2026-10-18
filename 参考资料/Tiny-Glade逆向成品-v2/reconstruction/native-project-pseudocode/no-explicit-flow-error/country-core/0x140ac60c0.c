// VA 0x140ac60c0, PDB extent 70 bytes
// country_core::resources::roofs::roof_ridge::RoofRidgeDims::calc
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_ridge.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::roofs::roof_ridge::RoofRidgeDims::calc
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_ridge.rs
   Extent: 70 */

ulonglong pdb_140ac60c0(float param_1,char param_2,float param_3,float param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == '\0') {
    param_4 = param_3;
  }
  uVar2 = (ulonglong)(uint)(param_4 * param_1 + (_DAT_142e36f28 - param_1) * _DAT_142e3b1d8);
  uVar1 = uVar2 | 0x3dcccccd00000000;
  if (param_2 != '\0') {
    uVar1 = uVar2 << 0x20 | 0x3dcccccd;
  }
  return uVar1;
}

