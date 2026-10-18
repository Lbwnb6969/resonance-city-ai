// VA 0x141713e70, PDB extent 1399 bytes
// turbosloth::asset::BuildContext::require<clutter_pack_pipe::BakeClutterIcon>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::BuildContext::require<clutter_pack_pipe::BakeClutterIcon>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 1399 */

byte * pdb_141713e70(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte **ppbVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  uint uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  byte *pbStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  longlong *aplStack_68 [2];
  undefined8 *puStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_c8 = &UNK_14332b6f2;
  uStack_c0 = 0x22;
  uStack_4a = 1;
  puStack_58 = param_2;
  lVar6 = pdb_142565cc0(&UNK_14332b6f2,0x22);
  if (lVar6 == 0) {
    uStack_238 = &puStack_c8;
    uStack_230 = pdb_1402ed400;
    uStack_220 = pdb_1402ed400;
    uStack_4a = 1;
    uStack_228 = uStack_238;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14332a978,&uStack_238,&UNK_14332aa18);
  }
  uStack_4a = 1;
  pdb_1417ca880(&uStack_238);
  pbStack_a8 = (byte *)*puStack_58;
  puStack_a0 = (undefined *)puStack_58[1];
  uStack_49 = 1;
  pdb_1417ca2e0(&uStack_238,&pbStack_a8,0x10);
  puVar1 = (undefined8 *)puStack_58[3];
  pbVar9 = (byte *)puStack_58[4];
  uStack_49 = 1;
  pbStack_a8 = pbVar9;
  pdb_1417ca2e0(&uStack_238,&pbStack_a8,8);
  if (pbVar9 != (byte *)0x0) {
    puVar12 = puVar1;
    do {
      pbStack_a8 = (byte *)*puVar12;
      puStack_a0 = (undefined *)puVar12[1];
      uStack_49 = 1;
      pdb_1417ca2e0(&uStack_238,&pbStack_a8,0x10);
      puVar12 = puVar12 + 2;
    } while (puVar12 != puVar1 + (longlong)pbVar9 * 2);
  }
  pbStack_a8 = (byte *)(ulonglong)*(byte *)(puStack_58 + 5);
  uStack_49 = 1;
  ppbVar10 = &pbStack_a8;
  pdb_1417ca2e0(&uStack_238,ppbVar10,8);
  uStack_49 = 1;
  uVar7 = pdb_1417c9b80(&uStack_238);
  uStack_49 = 1;
  uVar11 = 0x22;
  uVar8 = pdb_141747730(&UNK_14332b6f2,0x22,0xd,uVar7,ppbVar10);
  puVar12 = puStack_58;
  uVar7 = puStack_58[2];
  pdb_14007ee60();
  pbVar9 = pub_1406abab0(0x40,0x10);
  if (pbVar9 != (byte *)0x0) {
    pbVar9[0] = 1;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    pbVar9[4] = 0;
    pbVar9[5] = 0;
    pbVar9[6] = 0;
    pbVar9[7] = 0;
    pbVar9[8] = 1;
    pbVar9[9] = 0;
    pbVar9[10] = 0;
    pbVar9[0xb] = 0;
    pbVar9[0xc] = 0;
    pbVar9[0xd] = 0;
    pbVar9[0xe] = 0;
    pbVar9[0xf] = 0;
    uVar5 = puVar12[1];
    *(undefined8 *)(pbVar9 + 0x10) = *puVar12;
    *(undefined8 *)(pbVar9 + 0x18) = uVar5;
    *(undefined8 *)(pbVar9 + 0x20) = uVar7;
    *(undefined8 **)(pbVar9 + 0x28) = puVar1;
    uVar2 = *(undefined4 *)((longlong)puVar12 + 0x24);
    uVar3 = *(undefined4 *)(puVar12 + 5);
    uVar4 = *(undefined4 *)((longlong)puVar12 + 0x2c);
    *(undefined4 *)(pbVar9 + 0x30) = *(undefined4 *)(puVar12 + 4);
    *(undefined4 *)(pbVar9 + 0x34) = uVar2;
    *(undefined4 *)(pbVar9 + 0x38) = uVar3;
    *(undefined4 *)(pbVar9 + 0x3c) = uVar4;
    uStack_78 = 0;
    uStack_70 = 0;
    aplStack_68[0] = (longlong *)0x0;
    puStack_a0 = &UNK_14332a938;
    puStack_98 = &UNK_14332b6f2;
    uStack_90 = 0x22;
    pbStack_a8 = pbVar9;
    uStack_88 = uVar8;
    uStack_80 = uVar11;
    if (uStack_230 != (code *)0x0) {
      pub_1406abac0((byte *)uStack_238,(ulonglong)uStack_230,1);
    }
    uStack_238 = (undefined **)pdb_141715270(&pbStack_a8);
    uStack_208 = uStack_208 & 0xffffff00;
    uStack_230 = (code *)param_1;
    uStack_228 = (undefined **)uVar8;
    uStack_220 = (code *)uVar11;
    pdb_14007ee60();
    pbVar9 = pub_1406abab0(0x40,0x10);
    if (pbVar9 != (byte *)0x0) {
      *(uint *)(pbVar9 + 0x30) = uStack_208;
      *(undefined4 *)(pbVar9 + 0x34) = uStack_204;
      *(undefined4 *)(pbVar9 + 0x38) = uStack_200;
      *(undefined4 *)(pbVar9 + 0x3c) = uStack_1fc;
      *(undefined4 *)(pbVar9 + 0x20) = uStack_218;
      *(undefined4 *)(pbVar9 + 0x24) = uStack_214;
      *(undefined4 *)(pbVar9 + 0x28) = uStack_210;
      *(undefined4 *)(pbVar9 + 0x2c) = uStack_20c;
      *(undefined4 *)(pbVar9 + 0x10) = (undefined4)uStack_228;
      *(undefined4 *)(pbVar9 + 0x14) = uStack_228._4_4_;
      *(undefined4 *)(pbVar9 + 0x18) = (undefined4)uStack_220;
      *(undefined4 *)(pbVar9 + 0x1c) = uStack_220._4_4_;
      *(undefined4 *)pbVar9 = (undefined4)uStack_238;
      *(undefined4 *)(pbVar9 + 4) = uStack_238._4_4_;
      *(undefined4 *)(pbVar9 + 8) = (undefined4)uStack_230;
      *(undefined4 *)(pbVar9 + 0xc) = uStack_230._4_4_;
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
      return pbVar9;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x10,0x40);
  }
  uStack_b8 = uVar7;
  puStack_b0 = puVar1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x40);
}

