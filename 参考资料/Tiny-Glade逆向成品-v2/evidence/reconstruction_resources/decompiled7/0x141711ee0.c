// Matched PDB: turbosloth::asset::BuildContext::require<enum2$<asset_pipe::texture::BuildTextureAsset> >
// VA 0x141711ee0, PDB extent 1563 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   turbosloth::asset::BuildContext::require<enum2$<asset_pipe::texture::BuildTextureAsset> >
   Extent: 1563 bytes. No whole-program auto-analysis. */

undefined4 * pdb_141711ee0(code *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
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
    pdb_142dc83d0(&UNK_14332a978,&uStack_228,&UNK_14332aa18);
  }
  else {
    uStack_32 = 1;
    pdb_1417ca880(&uStack_228);
    lVar1 = plStack_40[7];
    uStack_a8 = (longlong *)(ulonglong)SBORROW8(0,lVar1);
    uStack_31 = 1;
    pdb_1417ca2e0(&uStack_228,&uStack_a8,8);
    if (SBORROW8(0,lVar1)) {
      uStack_31 = 1;
      pdb_1417ca2e0(&uStack_228,plStack_40[1],plStack_40[2]);
      uStack_a8 = (longlong *)CONCAT71(uStack_a8._1_7_,0xff);
      uStack_31 = 1;
      pdb_1417ca2e0(&uStack_228,&uStack_a8,1);
      lVar1 = plStack_40[4];
      puVar6 = (undefined8 *)plStack_40[5];
      uStack_31 = 1;
      uStack_a8 = puVar6;
      pdb_1417ca2e0(&uStack_228,&uStack_a8,8);
      uStack_31 = 1;
      pdb_1409027f0(lVar1,puVar6,&uStack_228);
    }
    else {
      uStack_31 = 1;
      pdb_1417ca2e0(&uStack_228,plStack_40[8],plStack_40[9]);
      uStack_a8 = (longlong *)CONCAT71(uStack_a8._1_7_,0xff);
      uStack_31 = 1;
      pdb_1417ca2e0(&uStack_228,&uStack_a8,1);
      lVar1 = *plStack_40;
      uStack_a8 = (longlong *)(ulonglong)SBORROW8(0,lVar1);
      uStack_31 = 1;
      pdb_1417ca2e0(&uStack_228,&uStack_a8,8);
      if (SBORROW8(0,lVar1)) {
        uStack_a8 = (longlong *)plStack_40[2];
        uStack_a0 = (undefined *)plStack_40[3];
        uStack_31 = 1;
        pdb_1417ca2e0(&uStack_228,&uStack_a8,0x10);
      }
      else {
        uStack_31 = 1;
        pdb_1417ce070(plStack_40,&uStack_228);
      }
      uStack_31 = 1;
      puVar6 = &uStack_228;
      pdb_140905300(plStack_40 + 4);
    }
    uStack_31 = 1;
    uVar2 = pdb_1417c9b80(&uStack_228);
    uStack_31 = 1;
    pcVar7 = (code *)0x26;
    ppuVar3 = (undefined **)pdb_141747730(&UNK_14332b78d,0x26,8,uVar2,puVar6);
    lStack_58 = plStack_40[8];
    lStack_50 = plStack_40[9];
    uStack_98 = (undefined *)*plStack_40;
    uStack_90 = plStack_40[1];
    uStack_88 = (undefined **)plStack_40[2];
    uStack_80 = (code *)plStack_40[3];
    uStack_78 = plStack_40[4];
    uStack_70 = *(uint *)(plStack_40 + 5);
    uStack_6c = *(undefined4 *)((longlong)plStack_40 + 0x2c);
    plStack_68 = (longlong *)plStack_40[6];
    uStack_60 = (undefined4)plStack_40[7];
    uStack_5c = *(undefined4 *)((longlong)plStack_40 + 0x3c);
    uStack_a8 = (longlong *)0x1;
    uStack_a0 = (undefined *)0x1;
    pdb_14007ee60();
    plVar4 = (longlong *)func_0x0001406abab0(0x60,0x10);
    if (plVar4 == (longlong *)0x0) {
      pdb_142dc7e11(0x10,0x60);
    }
    else {
      plVar4[10] = lStack_58;
      plVar4[0xb] = lStack_50;
      plVar4[8] = (longlong)plStack_68;
      plVar4[9] = CONCAT44(uStack_5c,uStack_60);
      *(undefined4 *)(plVar4 + 6) = (undefined4)uStack_78;
      *(undefined4 *)((longlong)plVar4 + 0x34) = uStack_78._4_4_;
      *(uint *)(plVar4 + 7) = uStack_70;
      *(undefined4 *)((longlong)plVar4 + 0x3c) = uStack_6c;
      *(undefined4 *)(plVar4 + 4) = (undefined4)uStack_88;
      *(undefined4 *)((longlong)plVar4 + 0x24) = uStack_88._4_4_;
      *(undefined4 *)(plVar4 + 5) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)plVar4 + 0x2c) = uStack_80._4_4_;
      *(undefined4 *)(plVar4 + 2) = (undefined4)uStack_98;
      *(undefined4 *)((longlong)plVar4 + 0x14) = uStack_98._4_4_;
      *(undefined4 *)(plVar4 + 3) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_90._4_4_;
      *(undefined4 *)plVar4 = (undefined4)uStack_a8;
      *(undefined4 *)((longlong)plVar4 + 4) = uStack_a8._4_4_;
      *(undefined4 *)(plVar4 + 1) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)plVar4 + 0xc) = uStack_a0._4_4_;
      uStack_78 = 0;
      uStack_70 = uStack_70 & 0xffffff00;
      plStack_68 = (longlong *)0x0;
      uStack_a0 = &UNK_14332abb0;
      uStack_98 = &UNK_14332b78d;
      uStack_90 = 0x26;
      uStack_a8 = plVar4;
      uStack_88 = ppuVar3;
      uStack_80 = pcVar7;
      if (uStack_220 != (code *)0x0) {
        func_0x0001406abac0(uStack_228,uStack_220,1);
      }
      uStack_228 = (undefined **)pdb_1417169b0(&uStack_a8);
      uStack_1f8 = uStack_1f8 & 0xffffff00;
      uStack_220 = param_1;
      uStack_218 = ppuVar3;
      uStack_210 = pcVar7;
      pdb_14007ee60();
      puVar5 = (undefined4 *)func_0x0001406abab0(0x40,0x10);
      if (puVar5 != (undefined4 *)0x0) {
        puVar5[0xc] = uStack_1f8;
        puVar5[0xd] = uStack_1f4;
        puVar5[0xe] = uStack_1f0;
        puVar5[0xf] = uStack_1ec;
        puVar5[8] = uStack_208;
        puVar5[9] = uStack_204;
        puVar5[10] = uStack_200;
        puVar5[0xb] = uStack_1fc;
        puVar5[4] = (undefined4)uStack_218;
        puVar5[5] = uStack_218._4_4_;
        puVar5[6] = (undefined4)uStack_210;
        puVar5[7] = uStack_210._4_4_;
        *puVar5 = (undefined4)uStack_228;
        puVar5[1] = uStack_228._4_4_;
        puVar5[2] = (undefined4)uStack_220;
        puVar5[3] = uStack_220._4_4_;
        if (plStack_68 != (longlong *)0x0) {
          LOCK();
          *plStack_68 = *plStack_68 + -1;
          UNLOCK();
          if (*plStack_68 == 0) {
            pdb_140dd76c0(&plStack_68);
          }
        }
        LOCK();
        *uStack_a8 = *uStack_a8 + -1;
        UNLOCK();
        if (*uStack_a8 == 0) {
          pdb_140c7a240(&uStack_a8);
        }
        return puVar5;
      }
      pdb_142dc7e11(0x10,0x40);
    }
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}

