// VA 0x14173b5d0, PDB extent 72 bytes
// turbosloth::asset::impl$44::build::async_block$1::closure$3<asset::texture::SourceImageAsset,turbosloth::asset::BuildContext>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$44::build::async_block$1::closure$3<asset::texture::SourceImageAsset,turbosloth::asset::BuildContext>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 72 */

void pdb_14173b5d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  param_1 = (longlong *)*param_1;
  lVar1 = param_1[2];
  if (lVar1 == *param_1) {
    pdb_142d91ef0(param_1);
  }
  lVar2 = param_1[1];
  *(undefined8 *)(lVar2 + 8 + lVar1 * 0x10) = param_3;
  *(undefined8 *)(lVar2 + lVar1 * 0x10) = param_2;
  param_1[2] = lVar1 + 1;
  return;
}

