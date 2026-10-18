// VA 0x1409d0dc0, PDB extent 24 bytes
// country_core::render::nani::gpu_world::impl$1::next
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::nani::gpu_world::impl$1::next
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 24 */

bool pdb_1409d0dc0(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 < param_1[1]) {
    *param_1 = bVar1 + 1;
  }
  return bVar1 < param_1[1];
}

