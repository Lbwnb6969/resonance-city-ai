// VA 0x140d9d5e0, PDB extent 128 bytes
// asset_pipe::texture::impl$21::visit_asset_dependencies
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset_pipe::texture::impl$21::visit_asset_dependencies
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
   Extent: 128 */

void pdb_140d9d5e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x10) * 0x50;
    pcVar1 = *(code **)(param_3 + 0x20);
    lVar2 = *(longlong *)(param_1 + 8) + 0x40;
    do {
      pdb_14007ee60(lVar2 + -0x30,param_2,param_3);
      (*pcVar1)(param_2,*(undefined8 *)(lVar2 + -0x40),*(undefined8 *)(lVar2 + -0x38));
      pdb_14007ee60(lVar2 + -0x18,param_2,param_3);
      pdb_14007ee60(lVar2,param_2,param_3);
      lVar2 = lVar2 + 0x50;
      lVar3 = lVar3 + -0x50;
    } while (lVar3 != 0);
  }
  return;
}

