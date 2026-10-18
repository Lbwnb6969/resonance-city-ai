// VA 0x140ac6110, PDB extent 103 bytes
// country_core::resources::roofs::roof_ridge::RoofRidgeDims::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_ridge.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::roofs::roof_ridge::RoofRidgeDims::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_ridge.rs
   Extent: 103 */

ulonglong pdb_140ac6110(longlong param_1)

{
  ulonglong uVar1;
  float *pfVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 8) == 1) {
    pfVar2 = (float *)(param_1 + 0x20);
    if (*(char *)(param_1 + 0x3c) == '\0') {
      pfVar2 = (float *)(param_1 + 0x1c);
    }
    uVar3 = (ulonglong)
            (uint)(*(float *)(param_1 + 0x34) * *pfVar2 +
                  (_DAT_142e36f28 - *(float *)(param_1 + 0x34)) * _DAT_142e3b1d8);
    uVar1 = uVar3 | 0x3dcccccd00000000;
    if (*(char *)(param_1 + 0x3c) != '\0') {
      uVar1 = uVar3 << 0x20 | 0x3dcccccd;
    }
    return uVar1;
  }
  return 0x3dcccccd3dcccccd;
}

