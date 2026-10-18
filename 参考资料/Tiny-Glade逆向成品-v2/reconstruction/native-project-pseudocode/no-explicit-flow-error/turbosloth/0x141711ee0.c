// VA 0x141711ee0, PDB extent 1563 bytes
// turbosloth::asset::BuildContext::require<enum2$<asset_pipe::texture::BuildTextureAsset> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::BuildContext::require<enum2$<asset_pipe::texture::BuildTextureAsset> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 1563 */

byte * pdb_141711ee0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  longlong *plStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  longlong lStack_50;
  longlong *plStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  puStack_b8 = &UNK_14332b78d;
  uStack_b0 = 0x26;
  uStack_32 = 1;
  plStack_40 = param_2;
  lVar1 = pdb_142565cc0(&UNK_14332b78d,0x26);
  if (lVar1 == 0) {
    uStack_228 = &puStack_b8;
    uStack_220 = pdb_1402ed400;
    uStack_210 = pdb_1402ed400;
    uStack_32 = 1;
    uStack_218 = uStack_228;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14332a978,&uStack_228,&UNK_14332aa18);
  }
  uStack_32 = 1;
  pdb_1417ca880(&uStack_228);
  lVar1 = plStack_40[7];
  uStack_a8 = (byte *)(ulonglong)SBORROW8(0,lVar1);
  uStack_31 = 1;
  pdb_1417ca2e0(&uStack_228,&uStack_a8,8);
  if (SBORROW8(0,lVar1)) {
    uStack_31 = 1;
    pdb_1417ca2e0(&uStack_228,plStack_40[1],plStack_40[2]);
    uStack_a8 = (byte *)CONCAT71(uStack_a8._1_7_,0xff);
    uStack_31 = 1;
    pdb_1417ca2e0(&uStack_228,&uStack_a8,1);
    lVar1 = plStack_40[4];
    puVar4 = (undefined8 *)plStack_40[5];
    uStack_31 = 1;
    uStack_a8 = (byte *)puVar4;
    pdb_1417ca2e0(&uStack_228,&uStack_a8,8);
    uStack_31 = 1;
    pdb_1409027f0(lVar1,puVar4,&uStack_228);
  }
  else {
    uStack_31 = 1;
    pdb_1417ca2e0(&uStack_228,plStack_40[8],plStack_40[9]);
    uStack_a8 = (byte *)CONCAT71(uStack_a8._1_7_,0xff);
    uStack_31 = 1;
    pdb_1417ca2e0(&uStack_228,&uStack_a8,1);
    lVar1 = *plStack_40;
    uStack_a8 = (byte *)(ulonglong)SBORROW8(0,lVar1);
    uStack_31 = 1;
    pdb_1417ca2e0(&uStack_228,&uStack_a8,8);
    if (SBORROW8(0,lVar1)) {
      uStack_a8 = (byte *)plStack_40[2];
      uStack_a0 = (undefined *)plStack_40[3];
      uStack_31 = 1;
      pdb_1417ca2e0(&uStack_228,&uStack_a8,0x10);
    }
    else {
      uStack_31 = 1;
      pdb_1417ce070(plStack_40,&uStack_228);
    }
    uStack_31 = 1;
    puVar4 = &uStack_228;
    pdb_140905300(plStack_40 + 4);
  }
  uStack_31 = 1;
  uVar2 = pdb_1417c9b80(&uStack_228);
  uStack_31 = 1;
  uVar5 = 0x26;
  uVar2 = pdb_141747730(&UNK_14332b78d,0x26,8,uVar2,puVar4);
  lStack_58 = plStack_40[8];
  lStack_50 = plStack_40[9];
  puStack_98 = (undefined *)*plStack_40;
  lStack_90 = plStack_40[1];
  lStack_88 = plStack_40[2];
  lStack_80 = plStack_40[3];
  lStack_78 = plStack_40[4];
  uStack_70 = *(uint *)(plStack_40 + 5);
  uStack_6c = *(undefined4 *)((longlong)plStack_40 + 0x2c);
  plStack_68 = (longlong *)plStack_40[6];
  uStack_60 = (undefined4)plStack_40[7];
  uStack_5c = *(undefined4 *)((longlong)plStack_40 + 0x3c);
  uStack_a8 = (byte *)0x1;
  uStack_a0 = (undefined *)0x1;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x60,0x10);
  if (pbVar3 != (byte *)0x0) {
    *(longlong *)(pbVar3 + 0x50) = lStack_58;
    *(longlong *)(pbVar3 + 0x58) = lStack_50;
    *(longlong **)(pbVar3 + 0x40) = plStack_68;
    *(ulonglong *)(pbVar3 + 0x48) = CONCAT44(uStack_5c,uStack_60);
    *(longlong *)(pbVar3 + 0x30) = lStack_78;
    *(ulonglong *)(pbVar3 + 0x38) = CONCAT44(uStack_6c,uStack_70);
    *(longlong *)(pbVar3 + 0x20) = lStack_88;
    *(longlong *)(pbVar3 + 0x28) = lStack_80;
    *(undefined **)(pbVar3 + 0x10) = puStack_98;
    *(longlong *)(pbVar3 + 0x18) = lStack_90;
    *(undefined4 *)pbVar3 = (undefined4)uStack_a8;
    *(undefined4 *)(pbVar3 + 4) = uStack_a8._4_4_;
    *(undefined4 *)(pbVar3 + 8) = (undefined4)uStack_a0;
    *(undefined4 *)(pbVar3 + 0xc) = uStack_a0._4_4_;
    lStack_78 = 0;
    uStack_70 = uStack_70 & 0xffffff00;
    plStack_68 = (longlong *)0x0;
    uStack_a0 = &UNK_14332abb0;
    puStack_98 = &UNK_14332b78d;
    lStack_90 = 0x26;
    uStack_a8 = pbVar3;
    lStack_88 = uVar2;
    lStack_80 = uVar5;
    if (uStack_220 != (code *)0x0) {
      pub_1406abac0((byte *)uStack_228,(ulonglong)uStack_220,1);
    }
    uStack_228 = (undefined **)pdb_1417169b0(&uStack_a8);
    uStack_1f8 = uStack_1f8 & 0xffffff00;
    uStack_220 = (code *)param_1;
    uStack_218 = (undefined **)uVar2;
    uStack_210 = (code *)uVar5;
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(0x40,0x10);
    if (pbVar3 != (byte *)0x0) {
      *(uint *)(pbVar3 + 0x30) = uStack_1f8;
      *(undefined4 *)(pbVar3 + 0x34) = uStack_1f4;
      *(undefined4 *)(pbVar3 + 0x38) = uStack_1f0;
      *(undefined4 *)(pbVar3 + 0x3c) = uStack_1ec;
      *(undefined4 *)(pbVar3 + 0x20) = uStack_208;
      *(undefined4 *)(pbVar3 + 0x24) = uStack_204;
      *(undefined4 *)(pbVar3 + 0x28) = uStack_200;
      *(undefined4 *)(pbVar3 + 0x2c) = uStack_1fc;
      *(undefined4 *)(pbVar3 + 0x10) = (undefined4)uStack_218;
      *(undefined4 *)(pbVar3 + 0x14) = uStack_218._4_4_;
      *(undefined4 *)(pbVar3 + 0x18) = (undefined4)uStack_210;
      *(undefined4 *)(pbVar3 + 0x1c) = uStack_210._4_4_;
      *(undefined4 *)pbVar3 = (undefined4)uStack_228;
      *(undefined4 *)(pbVar3 + 4) = uStack_228._4_4_;
      *(undefined4 *)(pbVar3 + 8) = (undefined4)uStack_220;
      *(undefined4 *)(pbVar3 + 0xc) = uStack_220._4_4_;
      if (plStack_68 != (longlong *)0x0) {
        LOCK();
        *plStack_68 = *plStack_68 + -1;
        UNLOCK();
        if (*plStack_68 == 0) {
          pdb_140dd76c0(&plStack_68);
        }
      }
      LOCK();
      *(longlong *)uStack_a8 = *(longlong *)uStack_a8 + -1;
      UNLOCK();
      if (*(longlong *)uStack_a8 == 0) {
        pdb_140c7a240(&uStack_a8);
      }
      return pbVar3;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x10,0x40);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x60);
}

