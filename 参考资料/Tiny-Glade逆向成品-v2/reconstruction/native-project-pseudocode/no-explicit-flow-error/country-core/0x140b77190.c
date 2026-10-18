// VA 0x140b77190, PDB extent 60 bytes
// country_core::resources::roofs::roof_shape::Roof::gable_sides
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::roofs::roof_shape::Roof::gable_sides
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 60 */

void pdb_140b77190(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (((*(float *)(param_2 + 0x34) == _DAT_142e36f28) &&
      (!NAN(*(float *)(param_2 + 0x34)) && !NAN(_DAT_142e36f28))) &&
     (_DAT_142e3b1d8 < *(float *)(param_2 + 0x30))) {
    bVar1 = *(byte *)(param_2 + 0x3c);
    param_1[1] = (ulonglong)bVar1;
    param_1[2] = (ulonglong)bVar1 | 2;
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return;
}

