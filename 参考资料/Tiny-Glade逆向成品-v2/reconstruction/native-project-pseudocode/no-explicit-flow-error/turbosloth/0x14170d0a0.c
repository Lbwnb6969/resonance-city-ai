// VA 0x14170d0a0, PDB extent 1071 bytes
// turbosloth::asset::BuildContext::store_asset<asset::texture::SourceImageAsset>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::BuildContext::store_asset<asset::texture::SourceImageAsset>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 1071 */

byte * pdb_14170d0a0(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined8 uVar8;
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
  byte *pbStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  longlong *aplStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_50 = *param_2;
  uStack_48 = param_2[1];
  pbVar7 = (byte *)param_2[2];
  bVar1 = *(byte *)(param_2 + 3);
  uStack_3a = 1;
  pdb_1417ca880(&uStack_218);
  uStack_39 = 1;
  pbStack_a8 = (byte *)(ulonglong)bVar1;
  pdb_1417ca2e0(&uStack_218,&pbStack_a8,8);
  uStack_39 = 1;
  pbStack_a8 = pbVar7;
  pdb_1417ca2e0(&uStack_218,&pbStack_a8,8);
  uStack_39 = 1;
  uVar6 = uStack_48;
  pdb_1417ca2e0(&uStack_218,uStack_48,pbVar7);
  uStack_39 = 1;
  uVar5 = pdb_1417c9b80(&uStack_218);
  uStack_39 = 1;
  uVar8 = 0x45;
  uVar6 = pdb_141747730(&UNK_14332b6ad,0x45,1,uVar5,uVar6);
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x30,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x30);
  }
  pbVar7[0] = 1;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pbVar7[4] = 0;
  pbVar7[5] = 0;
  pbVar7[6] = 0;
  pbVar7[7] = 0;
  pbVar7[8] = 1;
  pbVar7[9] = 0;
  pbVar7[10] = 0;
  pbVar7[0xb] = 0;
  pbVar7[0xc] = 0;
  pbVar7[0xd] = 0;
  pbVar7[0xe] = 0;
  pbVar7[0xf] = 0;
  *(undefined8 *)(pbVar7 + 0x10) = uStack_50;
  *(undefined8 *)(pbVar7 + 0x18) = uStack_48;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(pbVar7 + 0x20) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(pbVar7 + 0x24) = uVar2;
  *(undefined4 *)(pbVar7 + 0x28) = uVar3;
  *(undefined4 *)(pbVar7 + 0x2c) = uVar4;
  uStack_78 = 0;
  uStack_70 = 0;
  aplStack_68[0] = (longlong *)0x0;
  puStack_a0 = &UNK_14332aa30;
  puStack_98 = &UNK_14332b6ad;
  uStack_90 = 0x45;
  pbStack_a8 = pbVar7;
  uStack_88 = uVar6;
  uStack_80 = uVar8;
  if (uStack_210 != 0) {
    pub_1406abac0(uStack_218,uStack_210,1);
  }
  uStack_218 = (byte *)pdb_141715e10(&pbStack_a8);
  uStack_1e8 = uStack_1e8 & 0xffffff00;
  uStack_210 = param_1;
  uStack_208 = uVar6;
  uStack_200 = uVar8;
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x40,0x10);
  if (pbVar7 != (byte *)0x0) {
    *(uint *)(pbVar7 + 0x30) = uStack_1e8;
    *(undefined4 *)(pbVar7 + 0x34) = uStack_1e4;
    *(undefined4 *)(pbVar7 + 0x38) = uStack_1e0;
    *(undefined4 *)(pbVar7 + 0x3c) = uStack_1dc;
    *(undefined4 *)(pbVar7 + 0x20) = uStack_1f8;
    *(undefined4 *)(pbVar7 + 0x24) = uStack_1f4;
    *(undefined4 *)(pbVar7 + 0x28) = uStack_1f0;
    *(undefined4 *)(pbVar7 + 0x2c) = uStack_1ec;
    *(undefined4 *)(pbVar7 + 0x10) = (undefined4)uStack_208;
    *(undefined4 *)(pbVar7 + 0x14) = uStack_208._4_4_;
    *(undefined4 *)(pbVar7 + 0x18) = (undefined4)uStack_200;
    *(undefined4 *)(pbVar7 + 0x1c) = uStack_200._4_4_;
    *(undefined4 *)pbVar7 = (undefined4)uStack_218;
    *(undefined4 *)(pbVar7 + 4) = uStack_218._4_4_;
    *(undefined4 *)(pbVar7 + 8) = (undefined4)uStack_210;
    *(undefined4 *)(pbVar7 + 0xc) = uStack_210._4_4_;
    if (aplStack_68[0] != (longlong *)0x0) {
      LOCK();
      *aplStack_68[0] = *aplStack_68[0] + -1;
      UNLOCK();
      if (*aplStack_68[0] == 0) {
        pdb_140dd76c0(aplStack_68);
      }
    }
    LOCK();
    *(longlong *)pbStack_a8 = *(longlong *)pbStack_a8 + -1;
    UNLOCK();
    if (*(longlong *)pbStack_a8 == 0) {
      pdb_140c7a240(&pbStack_a8);
    }
    return pbVar7;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x40);
}

