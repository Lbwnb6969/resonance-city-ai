// VA 0x141712500, PDB extent 1195 bytes
// turbosloth::asset::BuildContext::require<clutter_pack_pipe::mod_icons::BakeModClutterIcon>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::BuildContext::require<clutter_pack_pipe::mod_icons::BakeModClutterIcon>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 1195 */

byte * pdb_141712500(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  uint uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong *plStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *puStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  puStack_a8 = &UNK_14332b714;
  uStack_a0 = 0x30;
  uStack_32 = 1;
  puStack_40 = param_2;
  lVar1 = pdb_142565cc0(&UNK_14332b714,0x30);
  if (lVar1 == 0) {
    uStack_218 = &puStack_a8;
    uStack_210 = pdb_1402ed400;
    uStack_200 = pdb_1402ed400;
    uStack_32 = 1;
    uStack_208 = uStack_218;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14332a978,&uStack_218,&UNK_14332aa18);
  }
  uStack_32 = 1;
  pdb_1417ca880(&uStack_218);
  uStack_31 = 1;
  pdb_1417ce070(puStack_40,&uStack_218);
  lVar1 = puStack_40[4];
  uStack_98 = (byte *)(ulonglong)!SBORROW8(0,lVar1);
  uStack_31 = 1;
  puVar4 = &uStack_98;
  pdb_1417ca2e0(&uStack_218,puVar4,8);
  if (!SBORROW8(0,lVar1)) {
    uStack_31 = 1;
    puVar4 = &uStack_218;
    pdb_1417ce070(puStack_40 + 4);
  }
  uStack_31 = 1;
  uVar2 = pdb_1417c9b80(&uStack_218);
  uStack_31 = 1;
  uVar5 = 0x30;
  uVar2 = pdb_141747730(&UNK_14332b714,0x30,2,uVar2,puVar4);
  puStack_88 = (undefined *)*puStack_40;
  uStack_80 = puStack_40[1];
  uStack_78 = puStack_40[2];
  uStack_70 = puStack_40[3];
  uStack_68 = puStack_40[4];
  uStack_60 = *(uint *)(puStack_40 + 5);
  uStack_5c = *(undefined4 *)((longlong)puStack_40 + 0x2c);
  plStack_58 = (longlong *)puStack_40[6];
  uStack_50 = *(undefined4 *)(puStack_40 + 7);
  uStack_4c = *(undefined4 *)((longlong)puStack_40 + 0x3c);
  uStack_98 = (byte *)0x1;
  uStack_90 = (undefined *)0x1;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x50,8);
  if (pbVar3 != (byte *)0x0) {
    *(longlong **)(pbVar3 + 0x40) = plStack_58;
    *(ulonglong *)(pbVar3 + 0x48) = CONCAT44(uStack_4c,uStack_50);
    *(undefined8 *)(pbVar3 + 0x30) = uStack_68;
    *(ulonglong *)(pbVar3 + 0x38) = CONCAT44(uStack_5c,uStack_60);
    *(undefined8 *)(pbVar3 + 0x20) = uStack_78;
    *(undefined8 *)(pbVar3 + 0x28) = uStack_70;
    *(undefined **)(pbVar3 + 0x10) = puStack_88;
    *(undefined8 *)(pbVar3 + 0x18) = uStack_80;
    *(undefined4 *)pbVar3 = (undefined4)uStack_98;
    *(undefined4 *)(pbVar3 + 4) = uStack_98._4_4_;
    *(undefined4 *)(pbVar3 + 8) = (undefined4)uStack_90;
    *(undefined4 *)(pbVar3 + 0xc) = uStack_90._4_4_;
    uStack_68 = 0;
    uStack_60 = uStack_60 & 0xffffff00;
    plStack_58 = (longlong *)0x0;
    uStack_90 = &UNK_14332aa70;
    puStack_88 = &UNK_14332b714;
    uStack_80 = 0x30;
    uStack_98 = pbVar3;
    uStack_78 = uVar2;
    uStack_70 = uVar5;
    if (uStack_210 != (code *)0x0) {
      pub_1406abac0((byte *)uStack_218,(ulonglong)uStack_210,1);
    }
    uStack_218 = (undefined **)pdb_141715270(&uStack_98);
    uStack_1e8 = uStack_1e8 & 0xffffff00;
    uStack_210 = (code *)param_1;
    uStack_208 = (undefined **)uVar2;
    uStack_200 = (code *)uVar5;
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(0x40,0x10);
    if (pbVar3 != (byte *)0x0) {
      *(uint *)(pbVar3 + 0x30) = uStack_1e8;
      *(undefined4 *)(pbVar3 + 0x34) = uStack_1e4;
      *(undefined4 *)(pbVar3 + 0x38) = uStack_1e0;
      *(undefined4 *)(pbVar3 + 0x3c) = uStack_1dc;
      *(undefined4 *)(pbVar3 + 0x20) = uStack_1f8;
      *(undefined4 *)(pbVar3 + 0x24) = uStack_1f4;
      *(undefined4 *)(pbVar3 + 0x28) = uStack_1f0;
      *(undefined4 *)(pbVar3 + 0x2c) = uStack_1ec;
      *(undefined4 *)(pbVar3 + 0x10) = (undefined4)uStack_208;
      *(undefined4 *)(pbVar3 + 0x14) = uStack_208._4_4_;
      *(undefined4 *)(pbVar3 + 0x18) = (undefined4)uStack_200;
      *(undefined4 *)(pbVar3 + 0x1c) = uStack_200._4_4_;
      *(undefined4 *)pbVar3 = (undefined4)uStack_218;
      *(undefined4 *)(pbVar3 + 4) = uStack_218._4_4_;
      *(undefined4 *)(pbVar3 + 8) = (undefined4)uStack_210;
      *(undefined4 *)(pbVar3 + 0xc) = uStack_210._4_4_;
      if (plStack_58 != (longlong *)0x0) {
        LOCK();
        *plStack_58 = *plStack_58 + -1;
        UNLOCK();
        if (*plStack_58 == 0) {
          pdb_140dd76c0(&plStack_58);
        }
      }
      LOCK();
      *(longlong *)uStack_98 = *(longlong *)uStack_98 + -1;
      UNLOCK();
      if (*(longlong *)uStack_98 == 0) {
        pdb_140c7a240(&uStack_98);
      }
      return pbVar3;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x10,0x40);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x50);
}

