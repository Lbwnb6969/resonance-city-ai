// VA 0x1417dc3c0, PDB extent 64 bytes
// asset_pipe::texture_processing::srgb_oetf
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: asset_pipe::texture_processing::srgb_oetf
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
   Extent: 64 */

float pdb_1417dc3c0(float param_1)

{
  float fVar1;
  
  if (_DAT_142f89650 < param_1) {
    fVar1 = (float)pub_142e32ad0(param_1,_DAT_142f89658);
    return fVar1 * _DAT_1431fec54 + _DAT_1431fec58;
  }
  return param_1 * _DAT_1431fec50;
}

