// VA 0x1417f0850, PDB extent 65 bytes
// asset::texture::impl$8::visit_asset_dependencies
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset::texture::impl$8::visit_asset_dependencies
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture.rs
   Extent: 65 */

void pdb_1417f0850(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    do {
      pdb_14007ee60(lVar1,param_2,param_3);
      lVar2 = lVar2 + -1;
      lVar1 = lVar1 + 1;
    } while (lVar2 != 0);
  }
  return;
}

