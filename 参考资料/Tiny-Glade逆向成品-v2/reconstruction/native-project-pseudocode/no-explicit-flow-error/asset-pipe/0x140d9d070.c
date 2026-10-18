// VA 0x140d9d070, PDB extent 275 bytes
// asset_pipe::texture::BuildTextureAsset::new_array
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset_pipe::texture::BuildTextureAsset::new_array
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
   Extent: 275 */

undefined8 * pdb_140d9d070(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  param_2[2] = 0;
  if (param_2[5] != 0) {
    lVar2 = param_2[4];
    lVar5 = param_2[5] * 0x50;
    uVar1 = lVar5 - 0x50;
    uVar10 = (uint)(uVar1 / 0x50);
    lVar9 = lVar2;
    if ((~uVar10 & 7) != 0) {
      lVar11 = -(ulonglong)(uVar10 + 1 & 7);
      do {
        *(undefined8 *)(lVar9 + 0x48) = 0;
        lVar9 = lVar9 + 0x50;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0);
    }
    if (0x22f < uVar1) {
      do {
        *(undefined8 *)(lVar9 + 0x48) = 0;
        *(undefined8 *)(lVar9 + 0x98) = 0;
        *(undefined8 *)(lVar9 + 0xe8) = 0;
        *(undefined8 *)(lVar9 + 0x138) = 0;
        *(undefined8 *)(lVar9 + 0x188) = 0;
        *(undefined8 *)(lVar9 + 0x1d8) = 0;
        *(undefined8 *)(lVar9 + 0x228) = 0;
        *(undefined8 *)(lVar9 + 0x278) = 0;
        lVar9 = lVar9 + 0x280;
      } while (lVar9 != lVar2 + lVar5);
    }
  }
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar8 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar8;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar6;
  param_1[1] = uVar7;
  param_1[7] = 0x8000000000000000;
  return param_1;
}

