// VA 0x140927ec0, PDB extent 51 bytes
// country_core::resources::terrain_height::impl$7::load_index_unchecked
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_height.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::terrain_height::impl$7::load_index_unchecked
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_height.rs
   Extent: 51 */

undefined8 pdb_140927ec0(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(ushort *)(*param_1 + param_2 * 2) / _DAT_142e3b1dc;
  fVar2 = fVar1 * (float)((ulonglong)param_1[2] >> 0x20);
  return CONCAT44(fVar2,fVar2 + (_DAT_142e36f28 - fVar1) * (float)param_1[2]);
}

