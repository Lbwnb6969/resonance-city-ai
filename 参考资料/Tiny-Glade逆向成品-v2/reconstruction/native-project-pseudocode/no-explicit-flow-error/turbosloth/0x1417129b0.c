// VA 0x1417129b0, PDB extent 899 bytes
// turbosloth::asset::BuildContext::require<clutter_pack_pipe::ExtractRoughnessChannel>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::BuildContext::require<clutter_pack_pipe::ExtractRoughnessChannel>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 899 */

byte * pdb_1417129b0(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte **ppbVar4;
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
  byte *pbStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  longlong *aplStack_58 [3];
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  puStack_a8 = &UNK_14332b7b3;
  uStack_a0 = 0x2a;
  lVar1 = pdb_142565cc0(&UNK_14332b7b3,0x2a);
  if (lVar1 == 0) {
    uStack_218 = &puStack_a8;
    uStack_210 = pdb_1402ed400;
    uStack_200 = pdb_1402ed400;
    uStack_208 = uStack_218;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14332a978,&uStack_218,&UNK_14332aa18);
  }
  pdb_1417ca880(&uStack_218);
  ppbVar4 = &pbStack_98;
  pbStack_98 = param_2;
  puStack_90 = (undefined *)param_3;
  pdb_1417ca2e0(&uStack_218,ppbVar4,0x10);
  uVar2 = pdb_1417c9b80(&uStack_218);
  uVar5 = 0x2a;
  uVar2 = pdb_141747730(&UNK_14332b7b3,0x2a,1,uVar2,ppbVar4);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x20,0x10);
  if (pbVar3 != (byte *)0x0) {
    pbVar3[0] = 1;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    pbVar3[8] = 1;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    *(byte **)(pbVar3 + 0x10) = param_2;
    *(undefined8 *)(pbVar3 + 0x18) = param_3;
    uStack_68 = 0;
    uStack_60 = 0;
    aplStack_58[0] = (longlong *)0x0;
    puStack_90 = &UNK_14332aaf0;
    puStack_88 = &UNK_14332b7b3;
    uStack_80 = 0x2a;
    pbStack_98 = pbVar3;
    uStack_78 = uVar2;
    uStack_70 = uVar5;
    if (uStack_210 != (code *)0x0) {
      pub_1406abac0((byte *)uStack_218,(ulonglong)uStack_210,1);
    }
    uStack_218 = (undefined **)pdb_141715e10(&pbStack_98);
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
      if (aplStack_58[0] != (longlong *)0x0) {
        LOCK();
        *aplStack_58[0] = *aplStack_58[0] + -1;
        UNLOCK();
        if (*aplStack_58[0] == 0) {
          pdb_140dd76c0(aplStack_58);
        }
      }
      LOCK();
      *(longlong *)pbStack_98 = *(longlong *)pbStack_98 + -1;
      UNLOCK();
      if (*(longlong *)pbStack_98 == 0) {
        pdb_140c7a240(&pbStack_98);
      }
      return pbVar3;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x10,0x40);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x20);
}

