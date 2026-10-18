// VA 0x140902d10, PDB extent 623 bytes
// turbosloth::asset::impl$25::clone_boxed<asset::texture::blob::TextureAssetBlob,anyhow::Error,enum2$<asset_pipe::texture::BuildTextureAsset> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::clone_boxed<asset::texture::blob::TextureAssetBlob,anyhow::Error,enum2$<asset_pipe::texture::BuildTextureAsset>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 623 */

void pdb_140902d10(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong *puVar3;
  byte *unaff_RBX;
  ulonglong arg0;
  undefined8 uVar4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulonglong uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (SBORROW8(0,param_1[7])) {
    pdb_140f60be0(&uStack_d0,param_1);
    pdb_1415e71a0(&uStack_88,param_1 + 3);
    uStack_60 = uStack_78;
    uStack_68 = (ulonglong)uStack_80;
    uStack_70 = uStack_88;
    uStack_a8 = uStack_c0;
    uStack_b8 = uStack_d0;
    uStack_b4 = uStack_cc;
    uStack_b0 = uStack_c8;
    uStack_ac = uStack_c4;
    uStack_a0 = uStack_88;
    uStack_98 = (ulonglong)uStack_80;
    uStack_90 = uStack_78;
    uStack_88 = CONCAT44(uStack_cc,uStack_d0);
    uStack_80 = (byte *)CONCAT44(uStack_c4,uStack_c8);
    uStack_78 = uStack_c0;
    uStack_50 = 0x8000000000000000;
  }
  else {
    pdb_140f60be0(&uStack_b8,param_1 + 7);
    if (SBORROW8(0,*param_1)) {
      uStack_78 = param_1[2];
      uStack_70 = param_1[3];
      arg0 = 0x8000000000000000;
    }
    else {
      arg0 = param_1[2];
      if ((longlong)arg0 < 0) {
        uVar4 = 0;
LAB_140902de2:
        pdb_142dc7e2a(uVar4,arg0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (arg0 == 0) {
        unaff_RBX = (byte *)0x1;
        uStack_78 = 0;
      }
      else {
        lVar1 = param_1[1];
        pdb_14007ee60();
        uVar4 = 1;
        unaff_RBX = pub_1406abab0(arg0,1);
        if (unaff_RBX == (byte *)0x0) goto LAB_140902de2;
        pub_142e32760(unaff_RBX,lVar1,arg0);
        uStack_78 = arg0;
      }
      uStack_70 = (ulonglong)*(byte *)(param_1 + 3);
    }
    uStack_58 = param_1[6];
    uStack_68 = param_1[4];
    uStack_60 = param_1[5];
    uStack_50 = CONCAT44(uStack_b4,uStack_b8);
    uStack_48 = uStack_b0;
    uStack_44 = uStack_ac;
    uStack_40 = uStack_a8;
    uStack_88 = arg0;
    uStack_80 = unaff_RBX;
  }
  pdb_14007ee60();
  puVar3 = (ulonglong *)pub_1406abab0(0x50,0x10);
  if (puVar3 != (ulonglong *)0x0) {
    puVar3[8] = CONCAT44(uStack_44,uStack_48);
    puVar3[9] = uStack_40;
    puVar3[6] = uStack_58;
    puVar3[7] = uStack_50;
    puVar3[4] = uStack_68;
    puVar3[5] = uStack_60;
    puVar3[2] = uStack_78;
    puVar3[3] = uStack_70;
    *puVar3 = uStack_88;
    puVar3[1] = (ulonglong)uStack_80;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x50);
}

