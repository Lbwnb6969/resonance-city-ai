// VA 0x140902f80, PDB extent 447 bytes
// turbosloth::asset::impl$25::clone_boxed<asset::texture::blob::TextureAssetBlob,anyhow::Error,asset_pipe::texture::BuildTextureLayer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::clone_boxed<asset::texture::blob::TextureAssetBlob,anyhow::Error,asset_pipe::texture::BuildTextureLayer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 447 */

void pdb_140902f80(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  byte *unaff_RBX;
  ulonglong arg0;
  undefined8 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_140f60be0(&uStack_50,param_1 + 7);
  if (SBORROW8(0,*param_1)) {
    uVar6 = param_1[2];
    uVar8 = param_1[3];
    arg0 = 0x8000000000000000;
  }
  else {
    arg0 = param_1[2];
    if ((longlong)arg0 < 0) {
      uVar9 = 0;
LAB_140902fd6:
      pdb_142dc7e2a(uVar9,arg0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (arg0 == 0) {
      unaff_RBX = (byte *)0x1;
      uVar6 = 0;
    }
    else {
      lVar1 = param_1[1];
      pdb_14007ee60();
      uVar9 = 1;
      unaff_RBX = pub_1406abab0(arg0,1);
      if (unaff_RBX == (byte *)0x0) goto LAB_140902fd6;
      pub_142e32760(unaff_RBX,lVar1,arg0);
      uVar6 = arg0;
    }
    uVar8 = (ulonglong)*(byte *)(param_1 + 3);
  }
  uVar2 = param_1[6];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  pdb_14007ee60();
  puVar7 = (ulonglong *)pub_1406abab0(0x50,0x10);
  if (puVar7 != (ulonglong *)0x0) {
    puVar7[8] = CONCAT44(uStack_44,uStack_48);
    puVar7[9] = uStack_40;
    puVar7[6] = uVar2;
    puVar7[7] = CONCAT44(uStack_4c,uStack_50);
    puVar7[4] = uVar4;
    puVar7[5] = uVar5;
    puVar7[2] = uVar6;
    puVar7[3] = uVar8;
    *puVar7 = arg0;
    puVar7[1] = (ulonglong)unaff_RBX;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x50);
}

