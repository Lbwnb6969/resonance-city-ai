// VA 0x14173e4b0, PDB extent 2071 bytes
// turbosloth::asset::impl$25::clone_boxed<clutter_pack_pipe::ClutterMeshAsset,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<clutter_pack_pipe::ClutterMeshAsset> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::clone_boxed<clutter_pack_pipe::ClutterMeshAsset,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<clutter_pack_pipe::ClutterMeshAsset>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 2071 */

byte * pdb_14173e4b0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulonglong uStack_1a0;
  byte *pbStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  byte *pbStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  byte *pbStack_168;
  ulonglong uStack_160;
  ulonglong uStack_158;
  byte *pbStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  byte *pbStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  byte *pbStack_120;
  ulonglong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  uVar1 = uVar3 * 4;
  if (uVar1 < 0x7ffffffffffffffd && uVar3 >> 0x3e == 0) goto LAB_14173e511;
  uVar8 = 0;
  do {
    pdb_142dc7e2a(uVar8,uVar1);
LAB_14173e511:
    uVar9 = *(undefined8 *)(param_1 + 8);
    if (uVar1 == 0) {
      pbStack_c0 = (byte *)0x4;
      uStack_b0 = 0;
      break;
    }
    pdb_14007ee60();
    uVar8 = 4;
    pbStack_c0 = pub_1406abab0(uVar1,4);
    uStack_b0 = uVar3;
  } while (pbStack_c0 == (byte *)0x0);
  if (uVar3 != 0) {
    pub_142e32760(pbStack_c0,uVar9,uVar1);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  uVar10 = uVar1 * 0xc;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
    uVar8 = 0;
LAB_14173e581:
    pdb_142dc7e2a(uVar8,uVar10);
    goto LAB_14173ea68;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  if (uVar10 == 0) {
    pbStack_78 = (byte *)0x4;
    uStack_a8 = 0;
    uVar2 = uStack_a8;
  }
  else {
    pdb_14007ee60();
    uVar8 = 4;
    pbStack_78 = pub_1406abab0(uVar10,4);
    uVar2 = uVar1;
    if (pbStack_78 == (byte *)0x0) goto LAB_14173e581;
  }
  uStack_a8 = uVar2;
  if (uVar1 != 0) {
    pub_142e32760(pbStack_78,uVar9,uVar10);
  }
  uVar10 = *(ulonglong *)(param_1 + 0x40);
  uVar2 = uVar10 * 0xc;
  if (0xaaaaaaaaaaaaaaa < uVar10) {
    uVar8 = 0;
LAB_14173e5f9:
    pdb_142dc7e2a(uVar8,uVar2);
    goto LAB_14173ea68;
  }
  uStack_98 = *(ulonglong *)(param_1 + 0x38);
  if (uVar2 == 0) {
    pbStack_70 = (byte *)0x4;
    uStack_a0 = 0;
    uVar4 = uStack_98;
    uVar6 = uStack_a0;
  }
  else {
    pdb_14007ee60();
    uVar8 = 4;
    pbStack_70 = pub_1406abab0(uVar2,4);
    uVar4 = uStack_98;
    uVar6 = uVar10;
    if (pbStack_70 == (byte *)0x0) goto LAB_14173e5f9;
  }
  uStack_a0 = uVar6;
  uStack_98 = uVar10;
  if (uVar10 != 0) {
    pub_142e32760(pbStack_70,uVar4,uVar2);
  }
  uVar10 = *(ulonglong *)(param_1 + 0x58);
  uVar2 = uVar10 * 0xc;
  if (0xaaaaaaaaaaaaaaa < uVar10) {
    uVar8 = 0;
LAB_14173e6a2:
    pdb_142dc7e2a(uVar8,uVar2);
    goto LAB_14173ea68;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  if (uVar2 == 0) {
    pbStack_68 = (byte *)0x4;
    uStack_90 = 0;
    uVar4 = uStack_90;
  }
  else {
    uStack_88 = uVar10;
    pdb_14007ee60();
    uVar8 = 4;
    pbStack_68 = pub_1406abab0(uVar2,4);
    uVar10 = uStack_88;
    uVar4 = uStack_88;
    if (pbStack_68 == (byte *)0x0) goto LAB_14173e6a2;
  }
  uStack_90 = uVar4;
  if (uVar10 != 0) {
    pub_142e32760(pbStack_68,uVar9,uVar2);
  }
  uVar4 = *(ulonglong *)(param_1 + 0x70);
  uVar2 = uVar4 * 8;
  if (uVar2 < 0x7ffffffffffffffd && uVar4 >> 0x3d == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x68);
    uStack_b8 = uVar4;
    if (uVar2 == 0) {
      pbStack_60 = (byte *)0x4;
      uStack_80 = 0;
    }
    else {
      pdb_14007ee60();
      uVar9 = 4;
      pbStack_60 = pub_1406abab0(uVar2,4);
      if (pbStack_60 == (byte *)0x0) goto LAB_14173e762;
      uStack_80 = uStack_b8;
    }
    if (uStack_b8 != 0) {
      pub_142e32760(pbStack_60,uVar8,uVar2);
    }
    uVar4 = *(ulonglong *)(param_1 + 0x88);
    uVar2 = uVar4 * 4;
    if (uVar2 < 0x7ffffffffffffffd && uVar4 >> 0x3e == 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x80);
      if (uVar2 == 0) {
        pbStack_58 = (byte *)0x4;
        uStack_50 = 0;
LAB_14173e8e5:
        if (uVar4 != 0) {
          pub_142e32760(pbStack_58,uVar8,uVar2);
        }
        pdb_1415e60b0(&uStack_1b8,param_1 + 0x90);
        bVar11 = *(int *)(param_1 + 0xa8) == 1;
        if (bVar11) {
          uStack_c8 = *(undefined8 *)(param_1 + 0xbc);
          uStack_d8 = *(undefined8 *)(param_1 + 0xac);
          uStack_d0 = *(undefined8 *)(param_1 + 0xb4);
        }
        uStack_f8 = (uint)bVar11;
        uStack_100 = uStack_1a8;
        uStack_110 = uStack_1b8;
        uStack_108 = uStack_1b0;
        uStack_1a0 = uStack_b0;
        pbStack_198 = pbStack_c0;
        uStack_188 = uStack_a8;
        pbStack_180 = pbStack_78;
        uStack_170 = uStack_a0;
        pbStack_168 = pbStack_70;
        uStack_160 = uStack_98;
        uStack_158 = uStack_90;
        pbStack_150 = pbStack_68;
        uStack_140 = uStack_80;
        pbStack_138 = pbStack_60;
        uStack_130 = uStack_b8;
        uStack_128 = uStack_50;
        pbStack_120 = pbStack_58;
        uStack_e4 = uStack_c8;
        uStack_f4 = (undefined4)uStack_d8;
        uStack_f0 = uStack_d8._4_4_;
        uStack_ec = (undefined4)uStack_d0;
        uStack_e8 = uStack_d0._4_4_;
        uStack_190 = uVar3;
        uStack_178 = uVar1;
        uStack_148 = uVar10;
        uStack_118 = uVar4;
        pdb_14007ee60();
        pbVar7 = pub_1406abab0(200,8);
        if (pbVar7 != (byte *)0x0) {
          pub_142e32760(pbVar7,&uStack_1a0,200);
          return pbVar7;
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,200);
      }
      uStack_88 = uVar10;
      pdb_14007ee60();
      uVar9 = 4;
      pbStack_58 = pub_1406abab0(uVar2,4);
      uVar10 = uStack_88;
      uStack_50 = uVar4;
      if (pbStack_58 != (byte *)0x0) goto LAB_14173e8e5;
    }
    else {
      uVar9 = 0;
    }
    pdb_142dc7e2a(uVar9,uVar2);
  }
  else {
    uVar9 = 0;
LAB_14173e762:
    pdb_142dc7e2a(uVar9,uVar2);
  }
LAB_14173ea68:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

