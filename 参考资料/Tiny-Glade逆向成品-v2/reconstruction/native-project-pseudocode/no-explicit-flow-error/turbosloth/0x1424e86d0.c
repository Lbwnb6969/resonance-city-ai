// VA 0x1424e86d0, PDB extent 75 bytes
// turbosloth::asset::impl$25::clone_boxed<asset::texture::SourceImageAsset,anyhow::Error,clutter_pack_pipe::ExtractRoughnessChannel>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::clone_boxed<asset::texture::SourceImageAsset,anyhow::Error,clutter_pack_pipe::ExtractRoughnessChannel>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 75 */

void pdb_1424e86d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x10,0x10);
  if (pbVar3 != (byte *)0x0) {
    *(undefined8 *)pbVar3 = uVar1;
    *(undefined8 *)(pbVar3 + 8) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x10);
}

